import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';

import { AppComponent } from './app.component';
import { AppRoutingModule } from './app.routing';
import { FullLayoutComponent } from './layouts/full-layout.component';
import { OtherComponent } from './layouts/other-layout';

@NgModule({
  declarations: [
    AppComponent,
    FullLayoutComponent,
    OtherComponent
  ],
  imports: [
    BrowserModule,
    AppRoutingModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
