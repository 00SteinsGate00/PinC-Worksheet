struct namensInformation {
	// Vor- und Nachname haben maximal 20 Zeichen
	char vorname[20];
	char nachname[20];
};

struct namensInformationenInGut {
	// Vor- und Nachname koennen hier belieb lang sein
	char* vorname;
	char* nachname;
};

int main(void) {
	// funktioniert
	struct namensInformation user01 = {"Max", "Mustermann"};

	// funktioniert NICHT
	user01.vorname = "Hans";
	user01.nachname = "Wurst";

	// funktioniert
	struct namensInformationenInGut user02;
	user02.vorname = "Darth";
	user02.nachname = "Vader";

	return 0;
}