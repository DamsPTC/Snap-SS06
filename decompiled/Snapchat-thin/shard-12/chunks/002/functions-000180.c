/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f2520c; end: 108f253f3; -[SCSnapProRPC fetchManagedPublicProfilesWithRequest:userId:completionQueue:completion:] */

void FUN_108f2520c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_opt_class();
  lVar1 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_108f25124();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dc910;
  _objc_opt_class(PTR_PTR_1126dc910);
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_1 == 0) {
    _objc_release(param_4);
  }
  else {
    func_0x00010be725e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_6);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f253f4; end: 108f25413;  */

void FUN_108f253f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f2540c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_2);
    return;
  }
  return;
}



/* Entry: 108f25414; end: 108f2558f; -[SCSnapProRPC updateBusinessProfileWithRequest:completionQueue:completion:] */

void FUN_108f25414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108f25124();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dc918;
  _objc_opt_class(PTR_PTR_1126dc918);
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010be725c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f25590; end: 108f255af;  */

void FUN_108f25590(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f255a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_2);
    return;
  }
  return;
}



/* Entry: 108f255b0; end: 108f2572b; -[SCSnapProRPC updateBusinessProfileSettingsWithRequest:completionQueue:completion:] */

void FUN_108f255b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108f25124();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dc920;
  _objc_opt_class(PTR_PTR_1126dc920);
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010be725c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f2572c; end: 108f2574b;  */

void FUN_108f2572c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f25744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_2);
    return;
  }
  return;
}



/* Entry: 108f2574c; end: 108f258c7; -[SCSnapProRPC fetchHasPendingRoleInvitesWithRequest:completionQueue:completion:] */

void FUN_108f2574c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108f25124();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dc928;
  _objc_opt_class(PTR_PTR_1126dc928);
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010be725c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f258c8; end: 108f258e7;  */

void FUN_108f258c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f258e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_2);
    return;
  }
  return;
}



/* Entry: 108f258e8; end: 108f25a63; -[SCSnapProRPC fetchUserSettingsWithRequest:completionQueue:completion:] */

void FUN_108f258e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108f25124();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dc930;
  _objc_opt_class(PTR_PTR_1126dc930);
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010be725c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f25a64; end: 108f25a83;  */

void FUN_108f25a64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f25a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_2);
    return;
  }
  return;
}



/* Entry: 108f25a84; end: 108f25bff; -[SCSnapProRPC updateUserSettingsWithRequest:completionQueue:completion:] */

void FUN_108f25a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108f25124();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dc938;
  _objc_opt_class(PTR_PTR_1126dc938);
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010be725c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f25c00; end: 108f25c1f;  */

void FUN_108f25c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f25c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_2);
    return;
  }
  return;
}



/* Entry: 108f25c20; end: 108f25d9b; -[SCSnapProRPC updateBusinessUserSettingsWithRequest:completionQueue:completion:] */

void FUN_108f25c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108f25124();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dc940;
  _objc_opt_class(PTR_PTR_1126dc940);
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010be725c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f25d9c; end: 108f25dbb;  */

void FUN_108f25d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f25db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_2);
    return;
  }
  return;
}



/* Entry: 108f25dbc; end: 108f25f37; -[SCSnapProRPC fetchBusinessStoryManifestWithRequest:completionQueue:completion:] */

void FUN_108f25dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c25afe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108f25f38();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c25afe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dc948;
  _objc_opt_class(PTR_PTR_1126dc948);
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010be725c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f25f38; end: 108f25fff;  */

void FUN_108f25f38(undefined8 param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  func_0x00010bf162c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_108f27414();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4bb00();
  _objc_release(uVar1);
  _objc_release(param_1);
  if ((int)uVar2 == 0) {
    _objc_retain(param_2);
    puVar3 = param_2;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f26000; end: 108f2601f;  */

void FUN_108f26000(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f26018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_2);
    return;
  }
  return;
}



/* Entry: 108f26020; end: 108f2619b; -[SCSnapProRPC getBusinessProfileWithRequest:completionQueue:completion:] */

void FUN_108f26020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108f25124();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dc800;
  _objc_opt_class(PTR_PTR_1126dc800);
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010be725c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f2619c; end: 108f261bb;  */

void FUN_108f2619c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f261b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_2);
    return;
  }
  return;
}



/* Entry: 108f261bc; end: 108f26337; -[SCSnapProRPC getPublicProfileWithRequest:completionQueue:completion:] */

void FUN_108f261bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108f25124();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dc950;
  _objc_opt_class(PTR_PTR_1126dc950);
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010be725c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f26338; end: 108f26357;  */

void FUN_108f26338(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f26350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_2);
    return;
  }
  return;
}



/* Entry: 108f26358; end: 108f264d3; -[SCSnapProRPC getBusinessProfilesWithRequest:completionQueue:completion:] */

void FUN_108f26358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108f25124();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010beed6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dc958;
  _objc_opt_class(PTR_PTR_1126dc958);
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010be725c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f264d4; end: 108f264f3;  */

void FUN_108f264d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f264ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_2);
    return;
  }
  return;
}



/* Entry: 108f264f4; end: 108f2666f; -[SCSnapProRPC fetchManifestForSnapIdsWithRequest:completionQueue:completion:] */

void FUN_108f264f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c25afe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108f25f38();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c25afe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dc960;
  _objc_opt_class(PTR_PTR_1126dc960);
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010be725c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f26670; end: 108f2668f;  */

void FUN_108f26670(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f26688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_2);
    return;
  }
  return;
}



/* Entry: 108f26690; end: 108f2680b; -[SCSnapProRPC getBusinessStorySnapWasPersistedWithRequest:completionQueue:completion:] */

void FUN_108f26690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c25afe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108f25f38();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c25afe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dc968;
  _objc_opt_class(PTR_PTR_1126dc968);
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010be725c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f2680c; end: 108f2682b;  */

void FUN_108f2680c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f26824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_2);
    return;
  }
  return;
}



/* Entry: 108f2682c; end: 108f26967; -[SCSnapProRPC reportHighlightWithRequest:completionQueue:completion:] */

void FUN_108f2682c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfe3680(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dc970;
  _objc_opt_class(PTR_PTR_1126dc970);
  puVar3 = puVar2;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108f26968;
  puStack_60 = &UNK_110acbb48;
  uStack_58 = param_5;
  _objc_retain(param_5);
  func_0x00010be725c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f05f18,
                      &PTR____CFConstantStringClassReference_110f05f38,uVar1,param_3,puVar2,puVar3,
                      param_4,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f26968; end: 108f26987;  */

void FUN_108f26968(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f26980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_2);
    return;
  }
  return;
}



/* Entry: 108f26988; end: 108f26ac3; -[SCSnapProRPC reportHighlightSnapWithRequest:completionQueue:completion:] */

void FUN_108f26988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfe3680(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dc978;
  _objc_opt_class(PTR_PTR_1126dc978);
  puVar3 = puVar2;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108f26ac4;
  puStack_60 = &UNK_110acbb48;
  uStack_58 = param_5;
  _objc_retain(param_5);
  func_0x00010be725c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f05f58,
                      &PTR____CFConstantStringClassReference_110f05f78,uVar1,param_3,puVar2,puVar3,
                      param_4,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f26ac4; end: 108f26ae3;  */

void FUN_108f26ac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f26adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_2);
    return;
  }
  return;
}



/* Entry: 108f26ae4; end: 108f26c1f; -[SCSnapProRPC getHighlightsWithRequest:completionQueue:completion:] */

void FUN_108f26ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfe3680(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dc980;
  _objc_opt_class(PTR_PTR_1126dc980);
  puVar3 = puVar2;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108f26c20;
  puStack_60 = &UNK_110acbb48;
  uStack_58 = param_5;
  _objc_retain(param_5);
  func_0x00010be725c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f05f98,
                      &PTR____CFConstantStringClassReference_110f05fb8,uVar1,param_3,puVar2,puVar3,
                      param_4,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f26c20; end: 108f26c3f;  */

void FUN_108f26c20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f26c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_2);
    return;
  }
  return;
}



/* Entry: 108f26c40; end: 108f26d7b; -[SCSnapProRPC fetchInsightsActiveStoryManifestWithRequest:completionQueue:completion:] */

void FUN_108f26c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c067760(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dc988;
  _objc_opt_class(PTR_PTR_1126dc988);
  puVar3 = puVar2;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108f26d7c;
  puStack_60 = &UNK_110acbb48;
  uStack_58 = param_5;
  _objc_retain(param_5);
  func_0x00010be725c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f05fd8,
                      &PTR____CFConstantStringClassReference_110f05ff8,uVar1,param_3,puVar2,puVar3,
                      param_4,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108f26d7c; end: 108f26d9b;  */

void FUN_108f26d7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f26d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_2);
    return;
  }
  return;
}



/* Entry: 108f26d9c; end: 108f26d9f; -[SCSnapProRPC highlightsServiceConfig] */

void FUN_108f26d9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000108f49984();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000108f49990();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x000108f27494(param_1,&PTR____CFConstantStringClassReference_110f06118,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108f26da0; end: 108f26da3; -[SCSnapProRPC lensServiceConfig] */

void FUN_108f26da0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000108f49960();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000108f4996c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x000108f27494(param_1,&PTR____CFConstantStringClassReference_110f06178,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108f26da4; end: 108f26da7; -[SCSnapProRPC insightsServiceConfig] */

void FUN_108f26da4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000108f49948();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000108f49954();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x000108f27494(param_1,&PTR____CFConstantStringClassReference_110f060f8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108f26da8; end: 108f26daf; -[SCSnapProRPC accountServiceConfig] */

void FUN_108f26da8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = uVar1;
  _objc_retain();
  FUN_108f49930();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_108f480e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x000108f27494(uVar2,&PTR____CFConstantStringClassReference_110f060d8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f26db0; end: 108f26db7; -[SCSnapProRPC storyServiceConfig] */

void FUN_108f26db0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = uVar1;
  _objc_retain();
  func_0x000108f4993c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000108f480f8(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x000108f27494(uVar2,&PTR____CFConstantStringClassReference_110f06158,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f26db8; end: 108f26df3; -[SCSnapProRPC _beginLoggingWithEndpointName:] */

void FUN_108f26db8(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_108f35674(*(undefined8 *)(param_1 + 0x28),param_3,
                &PTR____CFConstantStringClassReference_110e15fd8,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bf64df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR__OBJC_CLASS___NSDate_1126ae770,PTR_s_date_1125b6d20);
  return;
}



/* Entry: 108f26df4; end: 108f26f9f; -[SCSnapProRPC _endLoggingResponseWithEndpointName:startTime:response:data:rpcLoggingInfo:] */

void FUN_108f26df4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c252ee0();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_8);
  if (param_2 == 0) {
    _objc_release(param_8);
    lVar2 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010bde4340(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  FUN_108f35674(*(undefined8 *)(param_2 + 0x28),param_4,
                &PTR____CFConstantStringClassReference_110dfaef8,puVar1,lVar2,1);
  FUN_108f35500(*(undefined8 *)(param_2 + 0x28),param_4,(long)(param_1 * 1000.0));
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108f26fa0; end: 108f270bf; -[SCSnapProRPC _endLoggingErrorWithEndpointName:startTime:response:] */

void FUN_108f26fa0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(param_5);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_6;
  func_0x00010c252ee0();
  _objc_release(param_6);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_108f35674(*(undefined8 *)(param_2 + 0x28),param_4,
                &PTR____CFConstantStringClassReference_110de9cf8,puVar1,0,1,param_8,param_9,uVar2);
  FUN_108f3538c(*(undefined8 *)(param_2 + 0x28),param_4,(long)(param_1 * 1000.0));
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f270c0; end: 108f273c3; -[SCSnapProRPC _computeExtraDataWithEndpointName:response:data:rpcLoggingInfo:] */

/* WARNING: Removing unreachable block (ram,0x000108f271a4) */

undefined **
FUN_108f270c0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
             undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined **ppuStack_160;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126dc910;
  _objc_opt_class();
  if (puVar1 == param_7) {
    lVar2 = param_5;
    func_0x00010c08fa60();
    if ((lVar2 == 0) && (lVar2 = param_4, func_0x00010c252ee0(), lVar2 == 200)) {
      ppuStack_160 = &PTR____CFConstantStringClassReference_110f06018;
      goto LAB_108f27338;
    }
    lVar2 = param_5;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      puVar1 = PTR_PTR_1126dc910;
      _objc_alloc();
      func_0x00010c008360();
      _objc_retain(0);
      puVar3 = puVar1;
      func_0x00010c117640();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      if (puVar4 == (undefined *)0x0) {
        ppuStack_160 = (undefined **)0x0;
      }
      else {
        ppuStack_160 = &PTR____CFConstantStringClassReference_110f06058;
        do {
          puVar14 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(puVar3);
            }
            uVar13 = *(ulong *)((long)puVar14 * 8);
            uVar5 = uVar13;
            func_0x00010c1164a0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010bfe5fa0();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010bfe44e0();
            _objc_retainAutoreleasedReturnValue();
            if (uVar7 == 0) {
              _objc_release(uVar6);
              _objc_release(uVar5);
            }
            else {
              func_0x00010c1164a0();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar13;
              func_0x00010bfe5fa0();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar8;
              func_0x00010bfe44e0();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar9;
              func_0x00010c0720c0();
              _objc_release(uVar9);
              _objc_release(uVar8);
              _objc_release(uVar13);
              _objc_release(uVar7);
              _objc_release(uVar6);
              _objc_release(uVar5);
              if ((uVar10 & 1) != 0) goto LAB_108f27328;
            }
            puVar14 = puVar14 + 1;
          } while (puVar4 != puVar14);
          puVar4 = puVar3;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined *)0x0);
        ppuStack_160 = (undefined **)0x0;
      }
LAB_108f27328:
      _objc_release(puVar3);
      _objc_release(puVar1);
      goto LAB_108f27338;
    }
  }
  ppuStack_160 = (undefined **)0x0;
LAB_108f27338:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return ppuStack_160;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  __Unwind_Resume(param_3);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
  ppuVar11 = (undefined **)(param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(ppuVar11);
  return ppuVar11;
}



/* Entry: 108f273c4; end: 108f27413; -[SCSnapProRPC .cxx_destruct] */

void FUN_108f273c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108f27414; end: 108f2741f;  */

undefined ** FUN_108f27414(void)

{
  return &PTR____CFConstantStringClassReference_110eb3bb8;
}



/* Entry: 108f27420; end: 108f2788f;  */

void FUN_108f27420(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000108f49984();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000108f49990();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x000108f27494(param_1,&PTR____CFConstantStringClassReference_110f06118,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108f27890; end: 108f2790b;  */

undefined * FUN_108f27890(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f528 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f061b8,
                        &UNK_10dfae298,&UNK_10dfae330,5,FUN_108f2790c,0);
    do {
      if (puRam000000011372f528 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f528;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f528,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f528 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f528;
}



/* Entry: 108f2790c; end: 108f27917;  */

bool FUN_108f2790c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 108f27918; end: 108f27997; +[IMPCreatePublicProfileRequest descriptor] */

undefined * FUN_108f27918(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f530 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd0aa0,
                        &PTR____CFConstantStringClassReference_110f061d8,&PTR_s_impala_1132a2660,
                        &PTR_DAT_1132a23b0,0x15,0x90,0x1c);
    func_0x00010c2289e0();
    puRam000000011372f530 = puVar1;
  }
  return puRam000000011372f530;
}



/* Entry: 108f27998; end: 108f279ff; +[IMPCreatePublicProfileResponse descriptor] */

void FUN_108f27998(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f538 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd0af0,
                        &PTR____CFConstantStringClassReference_110f061f8,&PTR_s_impala_1132a2660,
                        &PTR_s_id_p_1132a2678,1,0x10,0x1c);
    puRam000000011372f538 = puVar1;
  }
  return;
}



/* Entry: 108f27a00; end: 108f27a67; +[IMPProfileHydrationOption descriptor] */

void FUN_108f27a00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f540 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd0b40,
                        &PTR____CFConstantStringClassReference_110f06218,&PTR_s_impala_1132a2660,
                        &PTR_DAT_1132a29d8,3,0x10,0x1c);
    puRam000000011372f540 = puVar1;
  }
  return;
}



/* Entry: 108f27a68; end: 108f27acf; +[IMPGetPublicProfileRequest descriptor] */

void FUN_108f27a68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f548 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd0b90,
                        &PTR____CFConstantStringClassReference_110f06238,&PTR_s_impala_1132a2660,
                        &PTR_s_id_p_1132a2f78,8,0x20,0x1c);
    puRam000000011372f548 = puVar1;
  }
  return;
}



/* Entry: 108f27ad0; end: 108f27b37; +[IMPGetPublicProfileResponse descriptor] */

void FUN_108f27ad0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f550 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd0be0,
                        &PTR____CFConstantStringClassReference_110f06258,&PTR_s_impala_1132a2660,
                        &PTR_s_profile_1132a2698,1,0x10,0x1c);
    puRam000000011372f550 = puVar1;
  }
  return;
}



/* Entry: 108f27b38; end: 108f27b9f; +[IMPGetPublicProfilesRequest descriptor] */

void FUN_108f27b38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f558 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd0c30,
                        &PTR____CFConstantStringClassReference_110f06278,&PTR_s_impala_1132a2660,
                        &PTR_DAT_1132a2b58,4,0x18,0x1c);
    puRam000000011372f558 = puVar1;
  }
  return;
}



/* Entry: 108f27ba0; end: 108f27c07; +[IMPGetPublicProfilesResponse descriptor] */

void FUN_108f27ba0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f560 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd0c80,
                        &PTR____CFConstantStringClassReference_110f06298,&PTR_s_impala_1132a2660,
                        &PTR_DAT_1132a26b8,1,0x10,0x1c);
    puRam000000011372f560 = puVar1;
  }
  return;
}



/* Entry: 108f27c08; end: 108f27c83; +[IMPUpdatePublicProfileRequest descriptor] */

undefined * FUN_108f27c08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f568 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd0cd0,
                        &PTR____CFConstantStringClassReference_110f062b8,&PTR_s_impala_1132a2660,
                        &PTR_s_id_p_1132a3178,0x13,0x98,0x1c);
    func_0x00010c2289e0();
    puRam000000011372f568 = puVar1;
  }
  return puRam000000011372f568;
}



/* Entry: 108f27c84; end: 108f27ceb; +[IMPUpdatePublicProfileResponse descriptor] */

void FUN_108f27c84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f570 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd0d20,
                        &PTR____CFConstantStringClassReference_110f062d8,&PTR_s_impala_1132a2660,
                        &PTR_DAT_1132a26d8,1,0x10,0x1c);
    puRam000000011372f570 = puVar1;
  }
  return;
}



/* Entry: 108f27cec; end: 108f27d53; +[IMPDeactivatePublicProfileRequest descriptor] */

void FUN_108f27cec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f578 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd0d70,
                        &PTR____CFConstantStringClassReference_110f062f8,&PTR_s_impala_1132a2660,
                        &PTR_s_id_p_1132a2798,2,0x10,0x1c);
    puRam000000011372f578 = puVar1;
  }
  return;
}



/* Entry: 108f27d54; end: 108f27dbb; +[IMPDeactivatePublicProfileResponse descriptor] */

void FUN_108f27d54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f580 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd0dc0,
                        &PTR____CFConstantStringClassReference_110f06318,&PTR_s_impala_1132a2660,0,0
                        ,4,0x1c);
    puRam000000011372f580 = puVar1;
  }
  return;
}



/* Entry: 108f27dbc; end: 108f27e23; +[IMPListManagedPublicProfilesRequest descriptor] */

void FUN_108f27dbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f588 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd0e10,
                        &PTR____CFConstantStringClassReference_110f06338,&PTR_s_impala_1132a2660,
                        &PTR_DAT_1132a2d58,5,0x20,0x1c);
    puRam000000011372f588 = puVar1;
  }
  return;
}



/* Entry: 108f27e24; end: 108f27e8b; +[IMPListManagedPublicProfilesResponse descriptor] */

void FUN_108f27e24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f590 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd0e60,
                        &PTR____CFConstantStringClassReference_110f06358,&PTR_s_impala_1132a2660,
                        &PTR_DAT_1132a2e98,7,0x28,0x1c);
    puRam000000011372f590 = puVar1;
  }
  return;
}



/* Entry: 108f27e8c; end: 108f27ef3; +[IMPGetProfileContentRequest descriptor] */

void FUN_108f27e8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f598 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd0eb0,
                        &PTR____CFConstantStringClassReference_110f06378,&PTR_s_impala_1132a2660,
                        &PTR_s_id_p_1132a2df8,5,0x28,0x1c);
    puRam000000011372f598 = puVar1;
  }
  return;
}



/* Entry: 108f27ef4; end: 108f27f5b; +[IMPGetProfileContentResponse descriptor] */

void FUN_108f27ef4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f5a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd0f00,
                        &PTR____CFConstantStringClassReference_110f06398,&PTR_s_impala_1132a2660,
                        &PTR_s_contentType_1132a2a38,3,0x18,0x1c);
    puRam000000011372f5a0 = puVar1;
  }
  return;
}



/* Entry: 108f27f5c; end: 108f27fd7; +[IMPInternalProfileHydrationOption descriptor] */

undefined * FUN_108f27f5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f5a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd0f50,
                        &PTR____CFConstantStringClassReference_110f063b8,&PTR_s_impala_1132a2660,
                        &PTR_DAT_1132a2a98,3,0x10,0x1c);
    func_0x00010c2289e0();
    puRam000000011372f5a8 = puVar1;
  }
  return puRam000000011372f5a8;
}



/* Entry: 108f27fd8; end: 108f2803f; +[IMPInternalListAllPublicProfilesRequest descriptor] */

void FUN_108f27fd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f5b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd0fa0,
                        &PTR____CFConstantStringClassReference_110f063d8,&PTR_s_impala_1132a2660,
                        &PTR_DAT_1132a3078,8,0x30,0x1c);
    puRam000000011372f5b0 = puVar1;
  }
  return;
}



/* Entry: 108f28040; end: 108f280a7; +[IMPInternalListAllPublicProfilesResponse descriptor] */

void FUN_108f28040(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f5b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd0ff0,
                        &PTR____CFConstantStringClassReference_110f063f8,&PTR_s_impala_1132a2660,
                        &PTR_DAT_1132a2af8,3,0x20,0x1c);
    puRam000000011372f5b8 = puVar1;
  }
  return;
}



/* Entry: 108f280a8; end: 108f2810f; +[IMPInternalProfileData descriptor] */

void FUN_108f280a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f5c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1040,
                        &PTR____CFConstantStringClassReference_110f06418,&PTR_s_impala_1132a2660,
                        &PTR_DAT_1132a26f8,1,0x10,0x1c);
    puRam000000011372f5c0 = puVar1;
  }
  return;
}



/* Entry: 108f28110; end: 108f28177; +[IMPInternalUpdateProfileHostAccountRequest descriptor] */

void FUN_108f28110(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f5c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1090,
                        &PTR____CFConstantStringClassReference_110f06438,&PTR_s_impala_1132a2660,
                        &PTR_s_profileId_1132a27d8,2,0x18,0x1c);
    puRam000000011372f5c8 = puVar1;
  }
  return;
}



/* Entry: 108f28178; end: 108f281df; +[IMPInternalUpdateProfileHostAccountResponse descriptor] */

void FUN_108f28178(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f5d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd10e0,
                        &PTR____CFConstantStringClassReference_110f06458,&PTR_s_impala_1132a2660,0,0
                        ,4,0x1c);
    puRam000000011372f5d0 = puVar1;
  }
  return;
}



/* Entry: 108f281e0; end: 108f28247; +[IMPInternalGetPublicProfileOption descriptor] */

void FUN_108f281e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f5d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1130,
                        &PTR____CFConstantStringClassReference_110f06478,&PTR_s_impala_1132a2660,
                        &PTR_DAT_1132a2818,2,4,0x1c);
    puRam000000011372f5d8 = puVar1;
  }
  return;
}



/* Entry: 108f28248; end: 108f282d3; +[IMPInternalGetPublicProfileRequest descriptor] */

undefined * FUN_108f28248(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f5e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1180,
                        &PTR____CFConstantStringClassReference_110f06498,&PTR_s_impala_1132a2660,
                        &PTR_s_userId_1132a2bd8,4,0x28,0x1c);
    func_0x00010c229040();
    puRam000000011372f5e0 = puVar1;
  }
  return puRam000000011372f5e0;
}



/* Entry: 108f282d4; end: 108f2833b; +[IMPInternalGetPublicProfileResponse descriptor] */

void FUN_108f282d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f5e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd11d0,
                        &PTR____CFConstantStringClassReference_110f064b8,&PTR_s_impala_1132a2660,
                        &PTR_s_profile_1132a2858,2,0x18,0x1c);
    puRam000000011372f5e8 = puVar1;
  }
  return;
}



/* Entry: 108f2833c; end: 108f283a3; +[IMPIds descriptor] */

void FUN_108f2833c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f5f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1220,
                        &PTR____CFConstantStringClassReference_110f064d8,&PTR_s_impala_1132a2660,
                        &PTR_DAT_1132a2718,1,0x10,0x1c);
    puRam000000011372f5f0 = puVar1;
  }
  return;
}



/* Entry: 108f283a4; end: 108f2842f; +[IMPInternalGetProfileLinksRequest descriptor] */

undefined * FUN_108f283a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f5f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1270,
                        &PTR____CFConstantStringClassReference_110f064f8,&PTR_s_impala_1132a2660,
                        &PTR_DAT_1132a2898,2,0x18,0x1c);
    func_0x00010c229040();
    puRam000000011372f5f8 = puVar1;
  }
  return puRam000000011372f5f8;
}



/* Entry: 108f28430; end: 108f28497; +[IMPProfileUserLink descriptor] */

void FUN_108f28430(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f600 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd12c0,
                        &PTR____CFConstantStringClassReference_110f06518,&PTR_s_impala_1132a2660,
                        &PTR_s_userId_1132a2c58,4,0x18,0x1c);
    puRam000000011372f600 = puVar1;
  }
  return;
}



/* Entry: 108f28498; end: 108f284ff; +[IMPInternalGetProfileLinksResponse descriptor] */

void FUN_108f28498(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f608 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1310,
                        &PTR____CFConstantStringClassReference_110f06538,&PTR_s_impala_1132a2660,
                        &PTR_DAT_1132a2738,1,0x10,0x1c);
    puRam000000011372f608 = puVar1;
  }
  return;
}



/* Entry: 108f28500; end: 108f28567; +[IMPInternalInvalidateCacheRequest descriptor] */

void FUN_108f28500(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f610 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1360,
                        &PTR____CFConstantStringClassReference_110f06558,&PTR_s_impala_1132a2660,
                        &PTR_DAT_1132a2758,1,0x10,0x1c);
    puRam000000011372f610 = puVar1;
  }
  return;
}



/* Entry: 108f28568; end: 108f285cf; +[IMPInternalInvalidateCacheResponse descriptor] */

void FUN_108f28568(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f618 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd13b0,
                        &PTR____CFConstantStringClassReference_110f06578,&PTR_s_impala_1132a2660,0,0
                        ,4,0x1c);
    puRam000000011372f618 = puVar1;
  }
  return;
}



/* Entry: 108f285d0; end: 108f28637; +[IMPInternalGetPublicProfileIdsByOrganizationIdRequest descriptor] */

void FUN_108f285d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f620 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1400,
                        &PTR____CFConstantStringClassReference_110f06598,&PTR_s_impala_1132a2660,
                        &PTR_DAT_1132a28d8,2,0x10,0x1c);
    puRam000000011372f620 = puVar1;
  }
  return;
}



/* Entry: 108f28638; end: 108f2869f; +[IMPInternalGetPublicProfileIdsByOrganizationIdResponse descriptor] */

void FUN_108f28638(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f628 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1450,
                        &PTR____CFConstantStringClassReference_110f065b8,&PTR_s_impala_1132a2660,
                        &PTR_DAT_1132a2778,1,0x10,0x1c);
    puRam000000011372f628 = puVar1;
  }
  return;
}



/* Entry: 108f286a0; end: 108f28707; +[IMPCheckUserAgeEligibilityRequest descriptor] */

void FUN_108f286a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f630 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd14a0,
                        &PTR____CFConstantStringClassReference_110f065d8,&PTR_s_impala_1132a2660,
                        &PTR_s_userId_1132a2cd8,4,0x20,0x1c);
    puRam000000011372f630 = puVar1;
  }
  return;
}



/* Entry: 108f28708; end: 108f2876f; +[IMPCheckUserAgeEligibilityResponse descriptor] */

void FUN_108f28708(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f638 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd14f0,
                        &PTR____CFConstantStringClassReference_110f065f8,&PTR_s_impala_1132a2660,
                        &PTR_s_userId_1132a2918,2,0x10,0x1c);
    puRam000000011372f638 = puVar1;
  }
  return;
}



/* Entry: 108f28770; end: 108f287d7; +[IMPSnapProHeader descriptor] */

void FUN_108f28770(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f640 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1540,
                        &PTR____CFConstantStringClassReference_110f06618,&PTR_s_impala_1132a2660,
                        &PTR_s_sequenceId_1132a2958,2,0x10,0x1c);
    puRam000000011372f640 = puVar1;
  }
  return;
}



/* Entry: 108f287d8; end: 108f28853; +[IMPSnapProHeader_CofConfigResult descriptor] */

undefined * FUN_108f287d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f648 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1590,
                        &PTR____CFConstantStringClassReference_110f06638,&PTR_s_impala_1132a2660,
                        &PTR_DAT_1132a2998,2,0x18,0x1c);
    func_0x00010c228780();
    puRam000000011372f648 = puVar1;
  }
  return puRam000000011372f648;
}



/* Entry: 108f28854; end: 108f288bb; +[IMPWatchedState descriptor] */

void FUN_108f28854(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f650 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1630,
                        &PTR____CFConstantStringClassReference_110f06658,&PTR_s_impala_1132a33d8,
                        &PTR_s_itemId_1132a37b0,7,0x38,0x1c);
    puRam000000011372f650 = puVar1;
  }
  return;
}



/* Entry: 108f288bc; end: 108f28923; +[IMPWatchedStateUpdate descriptor] */

void FUN_108f288bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f658 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1680,
                        &PTR____CFConstantStringClassReference_110f06678,&PTR_s_impala_1132a33d8,
                        &PTR_s_itemId_1132a3890,7,0x38,0x1c);
    puRam000000011372f658 = puVar1;
  }
  return;
}



/* Entry: 108f28924; end: 108f2898b; +[IMPUpdateWatchedStateRequest descriptor] */

void FUN_108f28924(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f660 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd16d0,
                        &PTR____CFConstantStringClassReference_110f06698,&PTR_s_impala_1132a33d8,
                        &PTR_s_userId_1132a3490,2,0x18,0x1c);
    puRam000000011372f660 = puVar1;
  }
  return;
}



/* Entry: 108f2898c; end: 108f289f3; +[IMPUpdateWatchedStateResponse descriptor] */

void FUN_108f2898c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f668 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1720,
                        &PTR____CFConstantStringClassReference_110f066b8,&PTR_s_impala_1132a33d8,
                        &PTR_DAT_1132a33f0,1,0x10,0x1c);
    puRam000000011372f668 = puVar1;
  }
  return;
}



/* Entry: 108f289f4; end: 108f28a5b; +[IMPGetWatchedStateRequest descriptor] */

void FUN_108f289f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f670 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1770,
                        &PTR____CFConstantStringClassReference_110f066d8,&PTR_s_impala_1132a33d8,
                        &PTR_s_userId_1132a34d0,2,0x18,0x1c);
    puRam000000011372f670 = puVar1;
  }
  return;
}



/* Entry: 108f28a5c; end: 108f28ac3; +[IMPGetWatchedStateResponse descriptor] */

void FUN_108f28a5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f678 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd17c0,
                        &PTR____CFConstantStringClassReference_110f066f8,&PTR_s_impala_1132a33d8,
                        &PTR_DAT_1132a3410,1,0x10,0x1c);
    puRam000000011372f678 = puVar1;
  }
  return;
}



/* Entry: 108f28ac4; end: 108f28b2b; +[IMPGetWatchedStateForSeasonRequest descriptor] */

void FUN_108f28ac4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f680 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1810,
                        &PTR____CFConstantStringClassReference_110f06718,&PTR_s_impala_1132a33d8,
                        &PTR_DAT_1132a3510,2,0x18,0x1c);
    puRam000000011372f680 = puVar1;
  }
  return;
}



/* Entry: 108f28b2c; end: 108f28b93; +[IMPGetWatchedStateForSeasonResponse descriptor] */

void FUN_108f28b2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f688 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1860,
                        &PTR____CFConstantStringClassReference_110f06738,&PTR_s_impala_1132a33d8,
                        &PTR_DAT_1132a3550,2,0x18,0x1c);
    puRam000000011372f688 = puVar1;
  }
  return;
}



/* Entry: 108f28b94; end: 108f28bfb; +[IMPMarkCollectionProfileAsSeenRequest descriptor] */

void FUN_108f28b94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f690 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd18b0,
                        &PTR____CFConstantStringClassReference_110f06758,&PTR_s_impala_1132a33d8,
                        &PTR_s_userId_1132a3650,3,0x20,0x1c);
    puRam000000011372f690 = puVar1;
  }
  return;
}



/* Entry: 108f28bfc; end: 108f28c63; +[IMPMarkCollectionProfileAsSeenResponse descriptor] */

void FUN_108f28bfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f698 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1900,
                        &PTR____CFConstantStringClassReference_110f06778,&PTR_s_impala_1132a33d8,0,0
                        ,4,0x1c);
    puRam000000011372f698 = puVar1;
  }
  return;
}



/* Entry: 108f28c64; end: 108f28ccb; +[IMPGetRecentWatchedStatesForUserRequest descriptor] */

void FUN_108f28c64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f6a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1950,
                        &PTR____CFConstantStringClassReference_110f06798,&PTR_s_impala_1132a33d8,
                        &PTR_s_userId_1132a36b0,3,0x18,0x1c);
    puRam000000011372f6a0 = puVar1;
  }
  return;
}



/* Entry: 108f28ccc; end: 108f28d33; +[IMPGetRecentWatchedStatesForUserResponse descriptor] */

void FUN_108f28ccc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f6a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd19a0,
                        &PTR____CFConstantStringClassReference_110f067b8,&PTR_s_impala_1132a33d8,
                        &PTR_DAT_1132a3430,1,0x10,0x1c);
    puRam000000011372f6a8 = puVar1;
  }
  return;
}



/* Entry: 108f28d34; end: 108f28d9b; +[IMPGetWatchedStateForShowRequest descriptor] */

void FUN_108f28d34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f6b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd19f0,
                        &PTR____CFConstantStringClassReference_110f067d8,&PTR_s_impala_1132a33d8,
                        &PTR_s_userId_1132a3590,2,0x18,0x1c);
    puRam000000011372f6b0 = puVar1;
  }
  return;
}



/* Entry: 108f28d9c; end: 108f28e03; +[IMPGetWatchedStateForShowResponse descriptor] */

void FUN_108f28d9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f6b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1a40,
                        &PTR____CFConstantStringClassReference_110f067f8,&PTR_s_impala_1132a33d8,
                        &PTR_DAT_1132a3450,1,0x10,0x1c);
    puRam000000011372f6b8 = puVar1;
  }
  return;
}



/* Entry: 108f28e04; end: 108f28e6b; +[IMPShowWatchedState descriptor] */

void FUN_108f28e04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f6c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd1a90,
                        &PTR____CFConstantStringClassReference_110f06818,&PTR_s_impala_1132a33d8,
                        &PTR_s_showId_1132a3710,5,0x28,0x1c);
    puRam000000011372f6c0 = puVar1;
  }
  return;
}


