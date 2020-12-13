double getVolumeSurface(double* volume, double* surface, double x, double y, double z, double weight, double* size, double* packSize) {
	*volume = x * y * z;
	*surface = ((x * y) * 2) + ((x * z) * 2) + ((y * z) * 2);
	*size = x + y + z;
	
	if (*size <= 60 && weight <= 2) {
		*packSize = 60;
	}
	else if (*size <= 80 && weight <= 5) {
		*packSize = 80;
	}
	else if (*size <= 100 && weight <= 10) {
		*packSize = 100;
	}
	else if (*size <= 120 && weight <= 15) {
		*packSize = 120;
	}
	else if (*size <= 140 && weight <= 20) {
		*packSize = 140;
	}
	else if (*size <= 160 && weight <= 25) {
		*packSize = 160;
	}

	return 0;
}