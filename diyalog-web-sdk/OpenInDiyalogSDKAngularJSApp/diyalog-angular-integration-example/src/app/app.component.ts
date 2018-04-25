import { Component } from '@angular/core';
import { Router } from '@angular/router';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  title = 'My First Angular App!';
  classlayout="newtab-active";
  classsother="";

  constructor(
    public _router: Router){
}

onfulllayout(){
  this.classlayout="newtab-active";
  this.classsother="";
    this._router.navigate(['']);
      window.location.reload();
  
}
onOther(){
  this.classsother="newtab-active";
  this.classlayout="";
  this._router.navigate(['Other']);
  
}
}
