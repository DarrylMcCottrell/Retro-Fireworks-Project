#include <vector>
#include "Streamer.hpp"
#include "Sparkler.hpp"
#include <cmath>

using namespace std;
 
 void Streamer::Trigger(vector<Rocket *> & v)
 {
	 for(int i = 0; i < 8; i++)
	 {
	 Rocket *s = new Sparkler;
	 *s = Rocket();
	 	if((i = 0))
		 {
			 s->SetForce(this->force.x, this->force.y - 2);
		 }
		 else if((i = 1)){
			 s->SetForce(this->force.x + sqrt(2), this->force.y - sqrt(2));
		 }
		 else if((i = 2)){
			 s->SetForce(this->force.x +2, this->force.y);
		 }
		 else if((i = 3)){
			 s->SetForce(this->force.x + sqrt(2), this->force.y + sqrt(2) );
		 }
		 else if((i = 4)){
			 s->SetForce(this->force.x, this->force.y + 2);
		 }
		 else if((i = 5)){
			 s->SetForce(this->force.x - sqrt(2), this->force.y + sqrt(2));
		 }
		 else if((i = 6)){
			 s->SetForce(this->force.x - 2, this->force.y);
		 }
		 else if((i = 7)){
			 s->SetForce(this->force.x - sqrt(2), this->force.y - sqrt(2));
		 }

		 s->SetAgeLimit(40);
		 s->SetPosition(*this);
	 v.push_back(s);
	 }
 }

 void DoubleStreamer::Trigger(vector<Rocket *> & v)
 {
	 Streamer::Trigger(v);

	 for(int i = 0; i < 8; i++){
		 Sparker *s = new Sparkler;
		 *s = Rocket();

		 if((i = 0))
		 {
			 s->SetForce(this->force.x, this->force.y - 1);
		 }
		 else if((i = 1)){
			 s->SetForce((this->force.x + sqrt(2)), (this->force.y - sqrt(2));
		 }
		 else if((i = 2)){
			 s->SetForce(this->force.x +2, this->force.y);
		 }
		 else if((i = 3)){
			 s->SetForce(this->force.x + sqrt(2), this->force.y + sqrt(2) );
		 }
		 else if((i = 4)){
			 s->SetForce(this->force.x, this->force.y + 2);
		 }
		 else if((i = 5)){
			 s->SetForce(this->force.x - sqrt(2), this->force.y + sqrt(2));
		 }
		 else if((i = 6)){
			 s->SetForce(this->force.x - 2, this->force.y);
		 }
		 else if((i = 7)){
			 s->SetForce(this->force.x - sqrt(2), this->force.y - sqrt(2));
		 }
	 }
	 v.push_back(ds);
 }