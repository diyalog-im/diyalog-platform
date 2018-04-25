import { NgModule } from '@angular/core';
import { Routes, RouterModule } from '@angular/router';

// Layouts
import { FullLayoutComponent } from './layouts/full-layout.component';
import { OtherComponent } from './layouts/other-layout';

export const routes: Routes = [
  
  {
    path: '',
    component: FullLayoutComponent,
    children: [
      {
        path: '',
        component: FullLayoutComponent,
      }

    ]
   },
   {
    path: 'Other',
    component: OtherComponent,
  }
 
  
];

@NgModule({
  imports: [ RouterModule.forRoot(routes)],
  exports: [ RouterModule ]
})
export class AppRoutingModule {}
