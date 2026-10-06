/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5dccec; end: 10b5dcd3f; -[SCHTTPRequestContext .cxx_destruct] */

void FUN_10b5dccec(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5dcd40; end: 10b5dcd5b; +[SCHTTPRequestContextBuilder requestContext] */

void FUN_10b5dcd40(void)

{
  _objc_alloc_init(PTR_PTR_1126b7220);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5dcd5c; end: 10b5dcf53; +[SCHTTPRequestContextBuilder requestContextFromExistingRequestContext:] */

void FUN_10b5dcd5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  puVar1 = PTR_PTR_1126b7220;
  _objc_retain(param_3);
  func_0x00010c135080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2af9a0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf3d540(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2aa7e0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf210c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2a9900(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c29fa60(param_3);
  puVar9 = puVar7;
  func_0x00010c2bcaa0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c137600(param_3);
  puVar10 = puVar9;
  func_0x00010c2b7240(puVar9,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0c2700(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c2b3680(puVar10,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c2704e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar13 = puVar11;
  func_0x00010c2bb2e0(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10b5dcf54; end: 10b5dcf9b; -[SCHTTPRequestContextBuilder build] */

void FUN_10b5dcf54(void)

{
  _objc_alloc(PTR_PTR_1126b5730);
  func_0x00010c01b560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5dcf9c; end: 10b5dcfd3; -[SCHTTPRequestContextBuilder withIdentifier:] */

long FUN_10b5dcf9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b5dcfd4; end: 10b5dd00b; -[SCHTTPRequestContextBuilder withClientSwitchboardConfigKey:] */

long FUN_10b5dcfd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b5dd00c; end: 10b5dd043; -[SCHTTPRequestContextBuilder withBreadcrumbs:] */

long FUN_10b5dd00c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b5dd044; end: 10b5dd04b; -[SCHTTPRequestContextBuilder withVisibility:] */

void FUN_10b5dd044(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b5dd04c; end: 10b5dd053; -[SCHTTPRequestContextBuilder withRequiredConnectivity:] */

void FUN_10b5dd04c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b5dd054; end: 10b5dd08b; -[SCHTTPRequestContextBuilder withMaxNumOfRequestAttempts:] */

long FUN_10b5dd054(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b5dd08c; end: 10b5dd0c3; -[SCHTTPRequestContextBuilder withTimeoutInSecond:] */

long FUN_10b5dd08c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b5dd0c4; end: 10b5dd117; -[SCHTTPRequestContextBuilder .cxx_destruct] */

void FUN_10b5dd0c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5dd118; end: 10b5dd13b; -[SCHTTPRequest copyWithZone:] */

undefined8 FUN_10b5dd118(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b5dd13c; end: 10b5dd1f3; -[SCHTTPRequest hash] */

long * FUN_10b5dd13c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lStack_78 = -lVar5;
  if (-1 < lVar5) {
    lStack_78 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  plVar3 = &lStack_78;
  uStack_30 = uVar2;
  func_0x000107c3191c(plVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_10b5dd30c:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b5dd318;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if ((((ulong)plVar4 & 1) != 0) &&
       ((((plVar3[2] == param_3[2] && (plVar3[5] == param_3[5])) && (plVar3[6] == param_3[6])) &&
        (((char)plVar3[1] == (char)param_3[1] &&
         (*(char *)((long)plVar3 + 9) == *(char *)((long)param_3 + 9))))))) {
      lVar5 = plVar3[3];
      if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = plVar3[4];
        if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = plVar3[7];
          if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = plVar3[8];
            if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              plVar6 = (long *)plVar3[9];
              if (plVar6 != (long *)param_3[9]) {
                func_0x00010c071ae0();
                goto LAB_10b5dd318;
              }
              goto LAB_10b5dd30c;
            }
          }
        }
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_10b5dd318:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 10b5dd1f4; end: 10b5dd333; -[SCHTTPRequest isEqual:] */

long FUN_10b5dd1f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b5dd30c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b5dd318;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
          (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
        ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x38);
          if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x40);
            if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x48);
              if (lVar3 != *(long *)(param_3 + 0x48)) {
                func_0x00010c071ae0();
                goto LAB_10b5dd318;
              }
              goto LAB_10b5dd30c;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b5dd318:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b5dd334; end: 10b5dd5ab; +[SCHTTPRequestBuilder requestFromExistingRequest:] */

void FUN_10b5dd334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  
  puVar1 = PTR_PTR_1126b7218;
  _objc_retain(param_3);
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0cc940(param_3);
  puVar3 = puVar1;
  func_0x00010c2b3f00(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2bc200(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfe02c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c2af6a0(puVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c243820(param_3);
  puVar8 = puVar6;
  func_0x00010c2b9840(puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf3cb20(param_3);
  puVar9 = puVar8;
  func_0x00010c2aa740(puVar8,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf3cb00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c2aa720(puVar9,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bf1e9c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010c2a95e0(puVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c06bfa0(param_3);
  puVar14 = puVar12;
  func_0x00010c2b0180(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c0727e0(param_3);
  puVar15 = puVar14;
  func_0x00010c2b0720(puVar14,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010bf45740(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar16 = puVar15;
  func_0x00010c2aac00(puVar15,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(uVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 10b5dd5ac; end: 10b5dd6b7; -[SCFSNAuth initWithReqToken:timestamp:username:userId:] */

undefined1 *
FUN_10b5dd5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112706500;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b5dd6b8; end: 10b5dd6db; -[SCFSNAuth copyWithZone:] */

undefined8 FUN_10b5dd6b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b5dd6dc; end: 10b5dd767; -[SCFSNAuth hash] */

undefined8 * FUN_10b5dd6dc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b5dd818:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b5dd824;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10b5dd824;
            }
            goto LAB_10b5dd818;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b5dd824:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b5dd768; end: 10b5dd83f; -[SCFSNAuth isEqual:] */

long FUN_10b5dd768(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b5dd818:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b5dd824;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b5dd824;
            }
            goto LAB_10b5dd818;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b5dd824:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b5dd840; end: 10b5dd847; -[SCFSNAuth reqToken] */

undefined8 FUN_10b5dd840(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b5dd848; end: 10b5dd84f; -[SCFSNAuth timestamp] */

undefined8 FUN_10b5dd848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5dd850; end: 10b5dd857; -[SCFSNAuth username] */

undefined8 FUN_10b5dd850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b5dd858; end: 10b5dd85f; -[SCFSNAuth userId] */

undefined8 FUN_10b5dd858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b5dd860; end: 10b5dd8a7; -[SCFSNAuth .cxx_destruct] */

void FUN_10b5dd860(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5dd8a8; end: 10b5dd8b3; -[SCArgosService .cxx_destruct] */

void FUN_10b5dd8a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5dd8b4; end: 10b5dd927; -[SCPreLoginAttestationService initWithPreLoginAttestationService:] */

undefined1 * FUN_10b5dd8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112706510;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b5dd928; end: 10b5dd92f; -[SCPreLoginAttestationService preLoginAttestationProvider] */

undefined8 FUN_10b5dd928(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b5dd930; end: 10b5dd93b; -[SCPreLoginAttestationService .cxx_destruct] */

void FUN_10b5dd930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5dd93c; end: 10b5dda47; -[SCNNativeNetworkApiNativeError initWithErrorCode:internalErrorCode:errorMessage:] */

undefined1 *
FUN_10b5dd93c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112706518;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b5dda48; end: 10b5dda4f; -[SCNNativeNetworkApiNativeError errorCode] */

undefined8 FUN_10b5dda48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b5dda50; end: 10b5dda57; -[SCNNativeNetworkApiNativeError internalErrorCode] */

undefined8 FUN_10b5dda50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5dda58; end: 10b5dda5f; -[SCNNativeNetworkApiNativeError errorMessage] */

undefined8 FUN_10b5dda58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b5dda60; end: 10b5dda9b; -[SCNNativeNetworkApiNativeError .cxx_destruct] */

void FUN_10b5dda60(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5dda9c; end: 10b5ddbaf; -[SCNNativeNetworkApiNativeNetworkRequest initWithUrl:httpParams:requestType:requestContext:] */

undefined1 *
FUN_10b5dda9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112706520;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b5ddbb0; end: 10b5ddbb7; -[SCNNativeNetworkApiNativeNetworkRequest url] */

undefined8 FUN_10b5ddbb0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b5ddbb8; end: 10b5ddbbf; -[SCNNativeNetworkApiNativeNetworkRequest httpParams] */

undefined8 FUN_10b5ddbb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5ddbc0; end: 10b5ddbc7; -[SCNNativeNetworkApiNativeNetworkRequest requestType] */

undefined8 FUN_10b5ddbc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b5ddbc8; end: 10b5ddbcf; -[SCNNativeNetworkApiNativeNetworkRequest requestContext] */

undefined8 FUN_10b5ddbc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b5ddbd0; end: 10b5ddc0b; -[SCNNativeNetworkApiNativeNetworkRequest .cxx_destruct] */

void FUN_10b5ddbd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5ddc0c; end: 10b5ddcc3; -[SCNNativeNetworkApiNativeNetworkRequestContext initWithRequestKey:snapTokenType:attestationType:] */

undefined1 *
FUN_10b5ddc0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_112706528;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b5ddcc4; end: 10b5ddccb; -[SCNNativeNetworkApiNativeNetworkRequestContext requestKey] */

undefined8 FUN_10b5ddcc4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b5ddccc; end: 10b5ddcd3; -[SCNNativeNetworkApiNativeNetworkRequestContext snapTokenType] */

undefined8 FUN_10b5ddccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5ddcd4; end: 10b5ddcdb; -[SCNNativeNetworkApiNativeNetworkRequestContext attestationType] */

undefined8 FUN_10b5ddcd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b5ddcdc; end: 10b5ddce7; -[SCNNativeNetworkApiNativeNetworkRequestContext .cxx_destruct] */

void FUN_10b5ddcdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5ddce8; end: 10b5dddfb; -[SCNNativeNetworkApiNativeResponseInfo initWithSuccess:httpStatusCode:responseHeaders:error:] */

undefined1 *
FUN_10b5ddce8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112706530;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b5dddfc; end: 10b5dde03; -[SCNNativeNetworkApiNativeResponseInfo success] */

undefined1 FUN_10b5dddfc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b5dde04; end: 10b5dde0b; -[SCNNativeNetworkApiNativeResponseInfo httpStatusCode] */

undefined8 FUN_10b5dde04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5dde0c; end: 10b5dde13; -[SCNNativeNetworkApiNativeResponseInfo responseHeaders] */

undefined8 FUN_10b5dde0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b5dde14; end: 10b5dde1b; -[SCNNativeNetworkApiNativeResponseInfo error] */

undefined8 FUN_10b5dde14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b5dde1c; end: 10b5dde57; -[SCNNativeNetworkApiNativeResponseInfo .cxx_destruct] */

void FUN_10b5dde1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b5dde58; end: 10b5ddf63; +[SCNMdpCommonRequestContext withFetchPriority:mediaContextType:pageInfo:pageId:wifiOnly:importance:trigger:trackingId:] */

void FUN_10b5dde58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126b1378;
  uVar1 = 1000;
  if (param_9 != 0x10) {
    uVar1 = param_8;
  }
  _objc_retain(param_10);
  _objc_retain(param_5);
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126b7fd0;
  _objc_alloc(PTR_PTR_1126b7fd0);
  puVar4 = PTR_PTR_1126b7fc8;
  _objc_alloc(PTR_PTR_1126b7fc8);
  func_0x00010c0631e0();
  func_0x00010c0291a0(puVar3,param_2,param_4,puVar4,param_3,uVar1,param_6,param_9);
  func_0x00010c03cd40(puVar2,param_2,puVar3,param_5,param_10,0);
  _objc_release(param_10);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b5ddf64; end: 10b5ddf9f; +[SCNMdpCommonRequestContext withFetchPriority:mediaContextType:pageInfo:wifiOnly:importance:trigger:trackingId:] */

void FUN_10b5ddf64(void)

{
  func_0x00010c2add40(PTR_PTR_1126b1378);
  return;
}



/* Entry: 10b5ddfa0; end: 10b5de04f; +[SCNMdpCommonRequestContext withFetchPriority:mediaContextType:pageId:wifiOnly:importance:trigger:] */

void FUN_10b5ddfa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b1378;
  puVar1 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  func_0x00010c2add40(puVar2,param_2,param_3,param_4,puVar1,param_5,param_6,param_7,param_8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b5de050; end: 10b5de08f; +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageInfo:wifiOnly:importance:trigger:] */

void FUN_10b5de050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x00010c2add60(PTR_PTR_1126b1378,param_2,2,param_3,param_4,param_5,param_6,param_7,0);
  return;
}



/* Entry: 10b5de090; end: 10b5de0d3; +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageInfo:pageId:wifiOnly:importance:trigger:] */

void FUN_10b5de090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x00010c2add40(PTR_PTR_1126b1378,param_2,2,param_3,param_4,param_5,param_6,param_7,param_8,0)
  ;
  return;
}



/* Entry: 10b5de0d4; end: 10b5de0f7; +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageId:wifiOnly:importance:trigger:] */

void FUN_10b5de0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2add30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b1378,PTR_s_withFetchPriority_mediaContextTy_112689170,2,param_3,param_4,
             param_5,param_6,param_7);
  return;
}



/* Entry: 10b5de0f8; end: 10b5de107; +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageInfo:] */

void FUN_10b5de0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c108210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b1378,PTR_s_prefetchWithMediaContextType_pag_11261faa0,param_3,param_4,0);
  return;
}



/* Entry: 10b5de108; end: 10b5de14b; +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageInfo:trackingId:] */

void FUN_10b5de108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010c2add60(PTR_PTR_1126b1378,param_2,2,param_3,param_4,0,500,0,param_5);
  return;
}



/* Entry: 10b5de14c; end: 10b5de163; +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageInfo:trigger:] */

void FUN_10b5de14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c108250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b1378,PTR_s_prefetchWithMediaContextType_pag_11261fab0,param_3,param_4,0,
             500,param_5);
  return;
}



/* Entry: 10b5de164; end: 10b5de17b; +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageInfo:pageId:trigger:] */

void FUN_10b5de164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c108250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b1378,PTR_s_prefetchWithMediaContextType_pag_11261fab0,param_3,param_4,0,
             500,param_6);
  return;
}



/* Entry: 10b5de17c; end: 10b5de193; +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageInfo:importance:] */

void FUN_10b5de17c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c108250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b1378,PTR_s_prefetchWithMediaContextType_pag_11261fab0,param_3,param_4,0,
             param_5,0);
  return;
}



/* Entry: 10b5de194; end: 10b5de1ab; +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageInfo:importance:trigger:] */

void FUN_10b5de194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c108250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b1378,PTR_s_prefetchWithMediaContextType_pag_11261fab0,param_3,param_4,0,
             param_5,param_6);
  return;
}



/* Entry: 10b5de1ac; end: 10b5de1c3; +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageId:importance:trigger:] */

void FUN_10b5de1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c108190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b1378,PTR_s_prefetchWithMediaContextType_pag_11261fa80,param_3,param_4,0,
             param_5,param_6);
  return;
}



/* Entry: 10b5de1c4; end: 10b5de1db; +[SCNMdpCommonRequestContext prefetchWifiOnlyWithMediaContextType:pageInfo:] */

void FUN_10b5de1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c108250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b1378,PTR_s_prefetchWithMediaContextType_pag_11261fab0,param_3,param_4,1,
             500,0);
  return;
}



/* Entry: 10b5de1dc; end: 10b5de21b; +[SCNMdpCommonRequestContext userVisibleWithMediaContextType:pageInfo:trigger:] */

void FUN_10b5de1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010c2add60(PTR_PTR_1126b1378,param_2,3,param_3,param_4,0,500,param_5,0);
  return;
}



/* Entry: 10b5de21c; end: 10b5de25b; +[SCNMdpCommonRequestContext userBlockingWithMediaContextType:pageInfo:] */

void FUN_10b5de21c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c2add60(PTR_PTR_1126b1378,param_2,4,param_3,param_4,0,500,0,0);
  return;
}



/* Entry: 10b5de25c; end: 10b5de29b; +[SCNMdpCommonRequestContext userBlockingWithMediaContextType:pageInfo:trigger:] */

void FUN_10b5de25c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010c2add60(PTR_PTR_1126b1378,param_2,4,param_3,param_4,0,500,param_5,0);
  return;
}



/* Entry: 10b5de29c; end: 10b5de373; +[SCNMdpCommonRequestContext defaultUserBlockingWithMediaContextType:pageInfo:trigger:switchBoardKey:] */

void FUN_10b5de29c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_x3;
  undefined8 in_x5;
  
  puVar1 = PTR_PTR_1126b7fc8;
  _objc_retain(in_x5);
  _objc_retain(in_x3);
  _objc_alloc(puVar1);
  func_0x00010c0631e0();
  puVar2 = PTR_PTR_1126b7fd0;
  _objc_alloc(PTR_PTR_1126b7fd0);
  func_0x00010c0291a0();
  puVar3 = PTR_PTR_1126b1378;
  _objc_alloc(PTR_PTR_1126b1378);
  func_0x00010c03cd40();
  _objc_release(in_x5);
  _objc_release(in_x3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b5de374; end: 10b5de597; -[SCNMdpCommonRequestContext withTrigger:] */

void FUN_10b5de374(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  puVar1 = param_1;
  func_0x00010c11fca0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c27bc40();
  _objc_release(puVar1);
  if (puVar2 == param_3) {
    _objc_retain(param_1);
    puVar2 = param_1;
  }
  else {
    puVar1 = PTR_PTR_1126b7fd0;
    _objc_alloc();
    puVar2 = param_1;
    func_0x00010c11fca0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0c46a0();
    puVar4 = PTR_PTR_1126b7fc8;
    _objc_alloc(PTR_PTR_1126b7fc8);
    puVar5 = param_1;
    func_0x00010c11fca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf6db00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2a5480();
    func_0x00010c0631e0(puVar4,param_2,puVar7);
    puVar7 = param_1;
    func_0x00010c11fca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfa96c0();
    puVar9 = param_1;
    func_0x00010c11fca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bfea580();
    puVar11 = param_1;
    func_0x00010c11fca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c0f12c0();
    func_0x00010c0291a0(puVar1,param_2,puVar3,puVar4,puVar8,puVar10,puVar12,param_3);
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b1378;
    _objc_alloc(PTR_PTR_1126b1378);
    puVar3 = param_1;
    func_0x00010c27ef40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c278ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c265580(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cd40(puVar2,param_2,puVar1,puVar3,puVar4,param_1);
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b5de598; end: 10b5de7cf; -[SCNMdpCommonRequestContext withTrigger:pageId:] */

void FUN_10b5de598(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar1 = param_1;
  func_0x00010c11fca0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c27bc40();
  if (puVar2 == param_3) {
    puVar2 = param_1;
    func_0x00010c11fca0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0f12c0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)puVar3 == (int)param_4) {
      _objc_retain(param_1);
      puVar2 = param_1;
      goto LAB_10b5de7ac;
    }
  }
  else {
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b7fd0;
  _objc_alloc();
  puVar2 = param_1;
  func_0x00010c11fca0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0c46a0();
  puVar4 = PTR_PTR_1126b7fc8;
  _objc_alloc(PTR_PTR_1126b7fc8);
  puVar5 = param_1;
  func_0x00010c11fca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf6db00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2a5480();
  func_0x00010c0631e0(puVar4,param_2,puVar7);
  puVar7 = param_1;
  func_0x00010c11fca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfa96c0();
  puVar9 = param_1;
  func_0x00010c11fca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bfea580();
  func_0x00010c0291a0(puVar1,param_2,puVar3,puVar4,puVar8,puVar10,param_4,param_3);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b1378;
  _objc_alloc(PTR_PTR_1126b1378);
  puVar3 = param_1;
  func_0x00010c27ef40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010c278ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c265580(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03cd40(puVar2,param_2,puVar1,puVar3,puVar4,param_1);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
LAB_10b5de7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b5de7d0; end: 10b5de82f; -[SCAPIURLSessionBackgroundTaskResults clearTaskResults] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5de7d0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b5de830;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f9420(*(undefined8 *)(param_1 + _DAT_11278e944),param_2,&puStack_38);
  return;
}



/* Entry: 10b5de830; end: 10b5de897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5de830(long param_1)

{
  undefined *puVar1;
  
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278e940));
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b5de898; end: 10b5de9db; -[SCAPIURLSessionBackgroundTaskResults setTaskResult:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5de898(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    func_0x00010bf7e820(param_1,param_2,param_4,param_3);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11278e944);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x10b5de94c;
    puStack_50 = &UNK_110844b80;
    lStack_48 = param_1;
    _objc_retain(param_4);
    lStack_40 = param_4;
    uStack_38 = param_3;
    func_0x00010c0f9420(uVar1,param_2,&puStack_68);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10b5de9dc; end: 10b5deaaf; -[SCAPIURLSessionBackgroundTaskResults allKeysAndResults] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5de9dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b5deab0;
  uStack_30 = 0x10b5deac0;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10b5deac8;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + _DAT_11278e944),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b5deab0; end: 10b5deac7;  */

void FUN_10b5deab0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b5deac8; end: 10b5deb0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5deac8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278e940);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b5deb0c; end: 10b5deb33; +[SCAPIURLSessionBackgroundTaskResults stringForTaskResult:] */

undefined ** FUN_10b5deb0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 5) {
    return (undefined **)(&PTR_PTR_110d25070)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110f63178;
}



/* Entry: 10b5deb34; end: 10b5deb73; -[SCAPIURLSessionBackgroundTaskResults .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5deb34(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e944,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e940,0);
  return;
}



/* Entry: 10b5deb74; end: 10b5debbb; -[SCNetworkConnectivityAnnouncer dealloc] */

void FUN_10b5deb74(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_112706540;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b5debbc; end: 10b5dec63; -[SCNetworkConnectivityAnnouncer addListener:] */

void FUN_10b5debbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfc4580();
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b5dec64;
  puStack_48 = &UNK_110848c48;
  uStack_40 = param_3;
  lStack_38 = lVar1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10b5dec64; end: 10b5dec6f;  */

void FUN_10b5dec64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d7a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_networkConnectivityStatusDidChan_1126138a0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b5dec70; end: 10b5dec77; -[SCNetworkConnectivityAnnouncer removeListener:] */

void FUN_10b5dec70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10b5dec78; end: 10b5dec7f; -[SCNetworkConnectivityAnnouncer connectivityStatus] */

void FUN_10b5dec78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf48f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_connectivityStatus_1125afd80);
  return;
}



/* Entry: 10b5dec80; end: 10b5dec87; -[SCNetworkConnectivityAnnouncer getCurrentNetworkReachabilityStatus] */

void FUN_10b5dec80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf48f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_connectivityStatus_1125afd80);
  return;
}



/* Entry: 10b5dec88; end: 10b5dec8f; -[SCNetworkConnectivityAnnouncer currentNetworkReachabilityStatusRealTime] */

void FUN_10b5dec88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf48f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_connectivityStatus_1125afd80);
  return;
}



/* Entry: 10b5dec90; end: 10b5decbb; -[SCNetworkConnectivityAnnouncer isConnected] */

void FUN_10b5dec90(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba4e8;
  func_0x00010bf48f60();
                    /* WARNING: Could not recover jumptable at 0x00010c06f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_isConnected__1125f9618,param_1);
  return;
}



/* Entry: 10b5decbc; end: 10b5decd7; -[SCNetworkConnectivityAnnouncer isConnectedViaWifi] */

bool FUN_10b5decbc(long param_1)

{
  func_0x00010bf48f60();
  return param_1 == 2;
}



/* Entry: 10b5decd8; end: 10b5ded1f; -[SCNetworkConnectivityAnnouncer .cxx_destruct] */

void FUN_10b5decd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5ded20; end: 10b5dee9b; -[SCNetworkReconnectListenerAnnouncer description] */

void FUN_10b5ded20(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_10b5dee9c(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b5dee9c; end: 10b5deefb;  */

void FUN_10b5dee9c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 10b5deefc; end: 10b5df1a7; -[SCNetworkReconnectListenerAnnouncer addListener:] */

undefined8 FUN_10b5deefc(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110d250b8;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_10b5df1a8(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_10b5df2e8(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_10b5df0b0:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_10b5df0d0;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_10b5df1a8(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_10b5df1a8(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_10b5df2e8(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_10b5df0b0;
    }
  }
  uVar9 = 1;
LAB_10b5df0d0:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 10b5df1a8; end: 10b5df2e7;  */

void FUN_10b5df1a8(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_10b5df678();
LAB_10b5df2e4:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_10b5df2e4;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 10b5df2e8; end: 10b5df32f;  */

void FUN_10b5df2e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10b5df330; end: 10b5df55f; -[SCNetworkReconnectListenerAnnouncer removeListener:] */

void FUN_10b5df330(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_10b5df4e4;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10b5df398;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_10b5df2e8(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10b5df4e4;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_10b5df398:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110d250b8;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_10b5df1a8(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_10b5df2e8(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10b5df4e4;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_10b5df4e4:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b5df560; end: 10b5df62f; -[SCNetworkReconnectListenerAnnouncer didReconnectToNetwork] */

void FUN_10b5df560(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10b5dee9c(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf797e0();
      _objc_release(lVar5);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 10b5df630; end: 10b5df657; -[SCNetworkReconnectListenerAnnouncer .cxx_destruct] */

void FUN_10b5df630(long param_1)

{
  FUN_10b5df68c(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10b5df658; end: 10b5df677; -[SCNetworkReconnectListenerAnnouncer .cxx_construct] */

void FUN_10b5df658(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 10b5df678; end: 10b5df68b;  */

undefined * FUN_10b5df678(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 10b5df68c; end: 10b5df6e3;  */

long FUN_10b5df68c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}


