/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072ca464; end: 1072ca473;  */

void FUN_1072ca464(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001072ce420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1072ca474; end: 1072ca4a3;  */

long FUN_1072ca474(int param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001072cea90();
  func_0x0001072cea04();
  lVar1 = unaff_x19 + 0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1072ca4a4; end: 1072ca4a7;  */

void FUN_1072ca4a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072ca4a8; end: 1072ca4ef;  */

long FUN_1072ca4a8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001072cfd38();
  func_0x0001072cf1b4();
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return param_1;
}



/* Entry: 1072ca4f0; end: 1072ca507;  */

void FUN_1072ca4f0(void)

{
  FUN_1072ca508();
  return;
}



/* Entry: 1072ca508; end: 1072ca523;  */

void FUN_1072ca508(long param_1)

{
  FUN_10727da4c();
  *(undefined4 *)(param_1 + 0x30) = 2;
  return;
}



/* Entry: 1072ca524; end: 1072ca567;  */

void FUN_1072ca524(long param_1)

{
  if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
    func_0x0001072ce6fc((&PTR_FUN_11099ae88)[*(uint *)(param_1 + 0x38)]);
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}



/* Entry: 1072ca568; end: 1072ca573;  */

void FUN_1072ca568(void)

{
  return;
}



/* Entry: 1072ca574; end: 1072ca5bf;  */

void FUN_1072ca574(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long unaff_x19;
  
  func_0x0001072cf3c4();
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001072cfd38();
  func_0x0001072cf1b4();
  FUN_1072ca5c0(unaff_x19 + 0x28,param_3);
  return;
}



/* Entry: 1072ca5c0; end: 1072ca5e7;  */

void FUN_1072ca5c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 2) == '\x01') {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 1072ca5e8; end: 1072ca5ff;  */

void FUN_1072ca5e8(void)

{
  FUN_1072ca600();
  return;
}



/* Entry: 1072ca600; end: 1072ca61b;  */

void FUN_1072ca600(long param_1)

{
  FUN_1072ca61c();
  *(undefined4 *)(param_1 + 0x40) = 2;
  return;
}



/* Entry: 1072ca61c; end: 1072ca647;  */

void FUN_1072ca61c(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ce940();
  FUN_10727da70();
  FUN_1072ca5c0(param_1 + 0x28,unaff_x19 + 0x28);
  return;
}



/* Entry: 1072ca648; end: 1072ca68b;  */

void FUN_1072ca648(long param_1)

{
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    func_0x0001072ce6fc((&PTR_FUN_11099aea0)[*(uint *)(param_1 + 0x40)]);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 1072ca68c; end: 1072ca69f;  */

void FUN_1072ca68c(void)

{
  return;
}



/* Entry: 1072ca6a0; end: 1072ca6c7;  */

long FUN_1072ca6a0(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  FUN_10726b07c(param_1 + 0x28);
  func_0x000107274b8c(param_1);
  func_0x000107266aa8();
  lVar1 = unaff_x19;
  func_0x000107274970();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1072ca6c8; end: 1072ca70b;  */

void FUN_1072ca6c8(long param_1)

{
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    func_0x0001072ce6fc((&PTR_FUN_11099aeb8)[*(uint *)(param_1 + 0x18)]);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 1072ca70c; end: 1072ca717;  */

void FUN_1072ca70c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_2);
  return;
}



/* Entry: 1072ca718; end: 1072ca76b;  */

void FUN_1072ca718(long param_1)

{
  func_0x0001072c97fc(param_1 + 0x40);
  FUN_1072c9830(param_1 + 0x30);
  func_0x0001072c9854(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1072ca76c; end: 1072ca783;  */

void FUN_1072ca76c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107781c1c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072ca784; end: 1072ca79f;  */

void FUN_1072ca784(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107781c1c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072ca7a0; end: 1072ca7e3;  */

void FUN_1072ca7a0(long param_1)

{
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
    func_0x0001072ce6fc((&PTR_FUN_11099aec8)[*(uint *)(param_1 + 0x30)]);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 1072ca7e4; end: 1072ca7ef;  */

void FUN_1072ca7e4(void)

{
  return;
}



/* Entry: 1072ca7f0; end: 1072ca833;  */

void FUN_1072ca7f0(long param_1)

{
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
    func_0x0001072ce6fc((&PTR_FUN_11099aee0)[*(uint *)(param_1 + 0x30)]);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 1072ca834; end: 1072ca83f;  */

void FUN_1072ca834(void)

{
  return;
}



/* Entry: 1072ca840; end: 1072ca85f;  */

void FUN_1072ca840(void)

{
  func_0x0001072cebb4();
  FUN_1072ca860();
  return;
}



/* Entry: 1072ca860; end: 1072ca877;  */

void FUN_1072ca860(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107781c1c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072ca878; end: 1072ca893;  */

void FUN_1072ca878(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107781c1c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072ca894; end: 1072ca8f3;  */

undefined8 * FUN_1072ca894(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  lVar1 = 0;
  func_0x00010527822c();
  func_0x0001072cea78();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1072ca8f4; end: 1072ca8fb;  */

void FUN_1072ca8f4(void)

{
  return;
}



/* Entry: 1072ca8fc; end: 1072ca91b;  */

void FUN_1072ca8fc(undefined8 *param_1)

{
  func_0x0001072ceb0c();
  *param_1 = &PTR_FUN_11099af18;
  return;
}



/* Entry: 1072ca91c; end: 1072ca937;  */

void FUN_1072ca91c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_11099af18;
  return;
}



/* Entry: 1072ca938; end: 1072ca957;  */

void FUN_1072ca938(void)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  __ZNSt13exception_ptrD1Ev(&uStack_18);
  return;
}



/* Entry: 1072ca958; end: 1072ca97f;  */

void FUN_1072ca958(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099af78);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072ca980; end: 1072ca98b;  */

undefined ** FUN_1072ca980(void)

{
  return &PTR_DAT_11099af78;
}



/* Entry: 1072ca98c; end: 1072caa53;  */

long FUN_1072ca98c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x0001000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1072caa54; end: 1072caa5b;  */

void FUN_1072caa54(void)

{
  return;
}



/* Entry: 1072caa5c; end: 1072caa7b;  */

void FUN_1072caa5c(undefined8 *param_1)

{
  func_0x0001072ceb0c();
  *param_1 = &PTR_FUN_11099af98;
  return;
}



/* Entry: 1072caa7c; end: 1072caa9f;  */

void FUN_1072caa7c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_11099af98;
  return;
}



/* Entry: 1072caaa0; end: 1072caac7;  */

void FUN_1072caaa0(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099b008);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072caac8; end: 1072caad3;  */

undefined ** FUN_1072caac8(void)

{
  return &PTR_DAT_11099b008;
}



/* Entry: 1072caad4; end: 1072cab3b;  */

void FUN_1072caad4(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001072ce5c4();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001072ce508(uVar1);
  return;
}



/* Entry: 1072cab3c; end: 1072cab43;  */

void FUN_1072cab3c(void)

{
  return;
}



/* Entry: 1072cab44; end: 1072cab6f;  */

void FUN_1072cab44(undefined8 *param_1)

{
  long unaff_x19;
  
  func_0x0001072ce718();
  *param_1 = &PTR_FUN_11099b028;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(unaff_x19 + 8);
  return;
}



/* Entry: 1072cab70; end: 1072cabc3;  */

void FUN_1072cab70(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_11099b028;
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 8);
  return;
}



/* Entry: 1072cabc4; end: 1072cabeb;  */

void FUN_1072cabc4(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099b088);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072cabec; end: 1072cabf7;  */

undefined ** FUN_1072cabec(void)

{
  return &PTR_DAT_11099b088;
}



/* Entry: 1072cabf8; end: 1072cac1f;  */

undefined8 FUN_1072cabf8(undefined8 param_1)

{
  func_0x0001072cfe6c(&PTR_FUN_11099b0a8);
  return param_1;
}



/* Entry: 1072cac20; end: 1072cac33;  */

void FUN_1072cac20(void)

{
  FUN_1072cabf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072cac34; end: 1072cac57;  */

long FUN_1072cac34(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001072cf8f0();
  func_0x0001072ce940();
  func_0x0001072cfe74(&PTR_FUN_11099b0a8);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return unaff_x20;
}



/* Entry: 1072cac58; end: 1072cac77;  */

void FUN_1072cac58(long param_1,undefined8 param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001072ce940(param_2,param_1 + 8);
  func_0x0001072cfe74(&PTR_FUN_11099b0a8);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 1072cac78; end: 1072cad1b;  */

void FUN_1072cac78(undefined8 param_1,double param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  byte bVar2;
  double *pdVar3;
  long lVar4;
  long unaff_x19;
  double dVar5;
  
  func_0x0001072ce928();
  FUN_1072cadb8();
  iVar1 = (int)unaff_x19 + 8;
  func_0x0001072cae3c();
  if (iVar1 != 0) {
    dVar5 = *(double *)(*(long *)(param_4 + 0x10) + 0x550);
    _log2();
    **(undefined1 **)(unaff_x19 + 0x20) = (char)(int)dVar5;
    func_0x0001072cf860(*(long *)(param_4 + 0x10) + 0x4d8);
    pdVar3 = *(double **)(unaff_x19 + 0x28);
    *pdVar3 = dVar5;
    pdVar3[1] = param_2;
    lVar4 = *(long *)(param_4 + 0x10);
    if ((((*(byte *)(lVar4 + 0x534) & 1) == 0) && ((*(byte *)(lVar4 + 0x535) & 1) == 0)) &&
       ((*(byte *)(lVar4 + 0x536) & 1) == 0)) {
      bVar2 = *(byte *)(lVar4 + 0x537);
    }
    else {
      bVar2 = 1;
    }
    **(byte **)(unaff_x19 + 0x30) = bVar2 & 1;
  }
  func_0x0001072cf1c4();
  return;
}



/* Entry: 1072cad1c; end: 1072cad43;  */

void FUN_1072cad1c(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099b108);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072cad44; end: 1072cad4f;  */

undefined ** FUN_1072cad44(void)

{
  return &PTR_DAT_11099b108;
}



/* Entry: 1072cad50; end: 1072cad87;  */

void FUN_1072cad50(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001072ce940();
  func_0x0001072cfe74(&PTR_FUN_11099b0a8);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 1072cad88; end: 1072cadb7;  */

void FUN_1072cad88(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 1072cadb8; end: 1072cae83;  */

void FUN_1072cadb8(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30,param_2);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      FUN_1072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_1072cae30;
    }
    func_0x00010726fc88();
  }
  FUN_1072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_1072cae30:
  FUN_1072508cc(pplVar3);
  return;
}



/* Entry: 1072cae84; end: 1072caeaf;  */

void FUN_1072cae84(void)

{
  return;
}



/* Entry: 1072caeb0; end: 1072caed7;  */

void FUN_1072caeb0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001072ce718();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_11099b168;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1072caed8; end: 1072caf23;  */

void FUN_1072caed8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_11099b168;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072caf24; end: 1072caf4b;  */

void FUN_1072caf24(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099b1c8);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072caf4c; end: 1072caf57;  */

undefined ** FUN_1072caf4c(void)

{
  return &PTR_DAT_11099b1c8;
}



/* Entry: 1072caf58; end: 1072caf8b;  */

void FUN_1072caf58(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001072ce5c4();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001072ce508(uVar1);
  return;
}



/* Entry: 1072caf8c; end: 1072caf93;  */

void FUN_1072caf8c(void)

{
  return;
}



/* Entry: 1072caf94; end: 1072cafb7;  */

void FUN_1072caf94(void)

{
  func_0x0001072ce7fc();
  func_0x0001072cee44(&PTR_FUN_11099b1e8);
  return;
}



/* Entry: 1072cafb8; end: 1072cafd3;  */

void FUN_1072cafb8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_11099b1e8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072cafd4; end: 1072cb393;  */

void FUN_1072cafd4(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  ulong uVar12;
  ulong extraout_x8;
  long lVar13;
  long extraout_x9;
  ulong uVar14;
  byte bVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  uint6 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  byte bStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 auStack_f8 [2];
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined4 uStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  lVar20 = *(long *)(param_1 + 0x10);
  ppuStack_128 = &PTR_DAT_1109ec8d0;
  uStack_120 = 0;
  uStack_114 = 0;
  iStack_110 = 0;
  puVar16 = (ulong *)*param_2;
  Hint_Prefetch(*puVar16,0,2,0);
  puVar4 = puVar16;
  FUN_1072cb490(*puVar16,puVar16,&UNK_10de2cf7e);
  lVar17 = 0;
  uVar1 = puVar16[1];
  uVar2 = puVar16[2];
  uVar19 = *puVar16;
  uVar12 = uVar19 >> 0xc ^ (ulong)puVar4 >> 7;
  bVar15 = (byte)puVar4;
  uVar21 = CONCAT15(bVar15,CONCAT14(bVar15,CONCAT13(bVar15,CONCAT12(bVar15,CONCAT11(bVar15,bVar15)))
                                   )) & 0x7f7f7f7f7f7f;
  lVar13 = 0;
  while( true ) {
    uVar12 = uVar12 & uVar2;
    uVar23 = *(undefined8 *)(uVar19 + uVar12);
    for (uVar18 = CONCAT17(-((byte)((ulong)uVar23 >> 0x38) == (bVar15 & 0x7f)),
                           CONCAT16(-((byte)((ulong)uVar23 >> 0x30) == (bVar15 & 0x7f)),
                                    CONCAT15(-((char)((ulong)uVar23 >> 0x28) ==
                                              (char)(uVar21 >> 0x28)),
                                             CONCAT14(-((char)((ulong)uVar23 >> 0x20) ==
                                                       (char)(uVar21 >> 0x20)),
                                                      CONCAT13(-((char)((ulong)uVar23 >> 0x18) ==
                                                                (char)(uVar21 >> 0x18)),
                                                               CONCAT12(-((char)((ulong)uVar23 >>
                                                                                0x10) ==
                                                                         (char)(uVar21 >> 0x10)),
                                                                        CONCAT11(-((char)((ulong)
                                                  uVar23 >> 8) == (char)(uVar21 >> 8)),
                                                  -((char)uVar23 == (char)uVar21)))))))) &
                  0x8080808080808080; uVar18 != 0; uVar18 = uVar18 - 1 & uVar18) {
      uVar5 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar12 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar2;
      uVar5 = uVar1 + uVar14 * lVar13;
      FUN_107278484();
      if ((uVar5 & 1) != 0) {
        lVar17 = puVar16[1] + uVar14 * 0xa8;
        if (*(int *)(lVar17 + 0xa0) != 1) goto LAB_1072cb0f0;
        pbVar6 = (byte *)(lVar17 + 0x38);
        func_0x000107280568();
        bVar15 = *pbVar6;
        goto LAB_1072cb0f8;
      }
      lVar13 = 0;
    }
    func_0x0001072cfa98();
    if ((extraout_x8 & 1) != 0) break;
    lVar17 = lVar17 + 8;
    uVar12 = lVar17 + uVar12;
    lVar13 = extraout_x9;
  }
LAB_1072cb0f0:
  bVar15 = 0;
LAB_1072cb0f8:
  uVar12 = *param_2;
  puVar9 = &UNK_10de2cf6b;
  FUN_1072cb3c8();
  if ((uVar12 == 0) || (*(int *)(puVar9 + 0xa0) != 1)) {
    bVar11 = 1;
  }
  else {
    pbVar6 = puVar9 + 0x38;
    func_0x000107280568();
    bVar11 = *pbVar6 ^ 1;
  }
  if (iStack_110 != 1) {
    iStack_110 = 1;
  }
  bStack_118 = bVar15 & bVar11 & 1;
  uVar12 = *param_2;
  puVar9 = &UNK_10de2cf94;
  func_0x0001072cb42c();
  uVar23 = 0;
  if ((uVar12 == 0) || (*(int *)(puVar9 + 0xa0) != 2)) {
    uStack_e8 = 0;
  }
  else {
    puVar7 = (undefined8 *)(puVar9 + 0x38);
    FUN_1072cb4bc();
    uVar23 = *puVar7;
    uStack_e8 = 1;
  }
  func_0x00010002b838(&uStack_140,&DAT_10f2c7cf5);
  auStack_f8[0] = CONCAT31(auStack_f8[0]._1_3_,iStack_110 == 1 & bStack_118);
  uStack_e0 = 0;
  uStack_f0 = uVar23;
  func_0x0001072cfd24(lVar20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_140);
  FUN_10725d82c(*(undefined8 *)(lVar20 + 0x268));
  *(undefined1 *)(*(long *)(lVar20 + 0x270) + 0x80) = 1;
  puVar9 = &UNK_10de2cfa8;
  FUN_1072cb3c8(*param_2);
  iVar3 = *(int *)(puVar9 + 0xa0);
  uVar12 = *param_2;
  puVar10 = &UNK_10de2cfbb;
  func_0x0001072cb42c();
  if (iVar3 == 2 && *(int *)(puVar10 + 0xa0) == 2) {
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    puVar7 = (undefined8 *)(puVar9 + 0x38);
    FUN_1072cb4bc();
    uVar22 = *puVar7;
    puVar7 = (undefined8 *)(puVar10 + 0x38);
    FUN_1072cb4bc();
    uVar23 = *puVar7;
    auStack_f8[0] = 0x16;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    ppuStack_d8 = &PTR_FUN_110996720;
    uStack_d0 = 0;
    uStack_b8 = 0x16;
    uStack_b0 = 0;
    uStack_ac = 1;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_a8 = 0;
    uStack_138 = 5;
    uStack_108 = *(undefined8 *)(uVar12 + 8);
    uStack_100 = 3;
    uStack_140 = uVar22;
    func_0x0001072cf3f8();
    FUN_107262330(auStack_f8);
    auStack_f8[0] = 0x17;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    ppuStack_d8 = &PTR_FUN_110996720;
    uStack_d0 = 0;
    uStack_b8 = 0x17;
    uStack_b0 = 0;
    uStack_ac = 1;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_a8 = 0;
    uStack_138 = 5;
    uStack_108 = *(undefined8 *)(uVar12 + 8);
    uStack_100 = 3;
    uStack_140 = uVar23;
    func_0x0001072cf3f8();
    FUN_107262330(auStack_f8);
  }
  plVar8 = *(long **)(lVar20 + 0x240);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8,&ppuStack_128);
  }
  func_0x00010793f648(&ppuStack_128);
  return;
}



/* Entry: 1072cb394; end: 1072cb3bb;  */

void FUN_1072cb394(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099b248);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072cb3bc; end: 1072cb3c7;  */

undefined ** FUN_1072cb3bc(void)

{
  return &PTR_DAT_11099b248;
}



/* Entry: 1072cb3c8; end: 1072cb48f;  */

void FUN_1072cb3c8(undefined8 param_1)

{
  ulong extraout_x8;
  ulong unaff_x27;
  
  func_0x0001072cfcc8();
  func_0x0001003ac1fc();
  func_0x0001072cff84();
  func_0x0001072cf17c();
  do {
    func_0x0001072cfb90();
    for (; unaff_x27 != 0; unaff_x27 = unaff_x27 - 1 & unaff_x27) {
      func_0x0001072cf054();
      if ((int)param_1 != 0) {
        func_0x0001072d0160();
        return;
      }
    }
    func_0x0001072cfa98();
  } while ((extraout_x8 & 1) == 0);
  return;
}



/* Entry: 1072cb490; end: 1072cb4bb;  */

void FUN_1072cb490(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  _strlen(param_2);
  func_0x0001000df1ac(&stack0xffffffffffffffef,param_2,uVar1);
  return;
}



/* Entry: 1072cb4bc; end: 1072cb4db;  */

long FUN_1072cb4bc(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  uVar1 = *(int *)(param_1 + 0x68) == 2;
  if ((bool)uVar1) {
    return param_1 + 8;
  }
  func_0x00010563ab98();
  func_0x0001072ce5c4();
  if ((bool)uVar1) {
    uVar2 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return unaff_x19;
    }
    uVar2 = 0x28;
  }
  func_0x0001072ce508(uVar2);
  return unaff_x19;
}



/* Entry: 1072cb4dc; end: 1072cb50f;  */

void FUN_1072cb4dc(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001072ce5c4();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001072ce508(uVar1);
  return;
}



/* Entry: 1072cb510; end: 1072cb517;  */

void FUN_1072cb510(void)

{
  return;
}



/* Entry: 1072cb518; end: 1072cb53f;  */

void FUN_1072cb518(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001072ce718();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_11099b268;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1072cb540; end: 1072cb55f;  */

void FUN_1072cb540(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_11099b268;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072cb560; end: 1072cb603;  */

void FUN_1072cb560(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined8 uStack_2c;
  
  lVar2 = *(long *)(param_1 + 8);
  ppuStack_40 = &PTR_DAT_1109ec8d0;
  uStack_38 = 0;
  uStack_2c = 0x200000000;
  uStack_30 = 1;
  func_0x0001072cfedc(param_1,&DAT_10f2c7cf5);
  func_0x0001072cfd24(lVar2);
  func_0x0001072cecfc();
  plVar1 = *(long **)(lVar2 + 0x240);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,&ppuStack_40);
  }
  func_0x00010793f648(&ppuStack_40);
  return;
}



/* Entry: 1072cb604; end: 1072cb62b;  */

void FUN_1072cb604(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099b2c8);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072cb62c; end: 1072cb637;  */

undefined ** FUN_1072cb62c(void)

{
  return &PTR_DAT_11099b2c8;
}



/* Entry: 1072cb638; end: 1072cb66b;  */

void FUN_1072cb638(void)

{
  func_0x0001072cb650();
  return;
}



/* Entry: 1072cb66c; end: 1072cb82f;  */

undefined1  [16] FUN_1072cb66c(undefined8 param_1,undefined8 param_2,long *param_3,int *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  ulong uVar8;
  long *unaff_x21;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x23;
  undefined1 auVar11 [16];
  undefined8 auStack_58 [3];
  
  iVar1 = *param_4;
  uVar8 = (ulong)iVar1;
  uVar10 = param_3[1];
  if (uVar10 != 0) {
    uVar6 = uVar10 - 1;
    if ((uVar10 & uVar6) == 0) {
      unaff_x23 = uVar6 & uVar8;
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar10 - uVar8) < 0;
      unaff_x23 = uVar8;
      if (uVar10 <= uVar8) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar8 / uVar10;
        }
        unaff_x23 = uVar8 - uVar7 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_3 + unaff_x23 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar9;
          if (unaff_x21 == (long *)0x0) goto LAB_1072cb718;
          uVar7 = unaff_x21[1];
          plVar9 = unaff_x21;
          if (uVar7 != uVar8) break;
          in_NG = (int)unaff_x21[2] - iVar1 < 0;
          if ((int)unaff_x21[2] == iVar1) {
            uVar5 = 0;
            goto LAB_1072cb808;
          }
        }
        if ((uVar10 & uVar6) == 0) {
          uVar7 = uVar7 & uVar6;
        }
        else if (uVar10 <= uVar7) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar7 / uVar10;
          }
          uVar7 = uVar7 - uVar2 * uVar10;
        }
        in_NG = (long)(uVar7 - unaff_x23) < 0;
      } while (uVar7 == unaff_x23);
    }
  }
LAB_1072cb718:
  func_0x0001072cef80(auStack_58);
  FUN_1072cb830();
  func_0x0001072cf168();
  if ((uVar10 == 0) || (func_0x0001072d01ec(param_1,param_2,(float)uVar10), (bool)in_NG)) {
    bVar3 = 2 < uVar10;
    bVar4 = uVar10 == 3;
    func_0x0001072ceb68(uVar10 << 1);
    uVar5 = extraout_x8;
    if (!bVar3 || bVar4) {
      uVar5 = extraout_x9;
    }
    func_0x0001072cb874(param_3,uVar5);
    uVar10 = param_3[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x23 = uVar10 - 1 & uVar8;
    }
    else {
      unaff_x23 = uVar8;
      if (uVar10 <= uVar8) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar8 / uVar10;
        }
        unaff_x23 = uVar8 - uVar6 * uVar10;
      }
    }
  }
  if (*(long *)(*param_3 + unaff_x23 * 8) == 0) {
    func_0x0001072cfc20();
    *(undefined8 *)(extraout_x8_00 + unaff_x23 * 8) = extraout_x9_00;
    if (*unaff_x21 != 0) {
      uVar8 = *(ulong *)(*unaff_x21 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar8 = uVar8 & uVar10 - 1;
      }
      else if (uVar10 <= uVar8) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar8 / uVar10;
        }
        uVar8 = uVar8 - uVar6 * uVar10;
      }
      *(long **)(extraout_x8_00 + uVar8 * 8) = unaff_x21;
    }
  }
  else {
    func_0x0001072d0194();
  }
  auStack_58[0] = 0;
  param_3[3] = param_3[3] + 1;
  FUN_1072cb9f8(auStack_58);
  uVar5 = 1;
LAB_1072cb808:
  auVar11._8_8_ = uVar5;
  auVar11._0_8_ = unaff_x21;
  return auVar11;
}



/* Entry: 1072cb830; end: 1072cb8ff;  */

void FUN_1072cb830(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 2;
  func_0x0001072ced58();
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = 1;
  *param_2 = 0;
  param_2[1] = param_3;
  *(undefined4 *)(param_2 + 2) = *param_4;
  return;
}



/* Entry: 1072cb900; end: 1072cb9c7;  */

void FUN_1072cb900(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1072cb9c8(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar2 = param_1 + 8;
    FUN_1072cb9e0(lVar2);
    FUN_1072cb9c8(param_1,lVar2);
    func_0x0001072cfac8();
    uVar3 = extraout_x9;
    while (param_2 != uVar3) {
      func_0x0001072d01d4();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001072cf2a8();
      func_0x0001072cf294();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9_01;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            *plVar4 = *plVar6;
            func_0x0001072ce844();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_02;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1072cb9c8; end: 1072cb9df;  */

void FUN_1072cb9c8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072cb9e0; end: 1072cb9f7;  */

void FUN_1072cb9e0(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072cebb4();
  FUN_1072cba18();
  return;
}



/* Entry: 1072cb9f8; end: 1072cba17;  */

void FUN_1072cb9f8(void)

{
  func_0x0001072cebb4();
  FUN_1072cba18();
  return;
}



/* Entry: 1072cba18; end: 1072cba2f;  */

void FUN_1072cba18(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072cba30; end: 1072cba83;  */

void FUN_1072cba30(void)

{
  uint extraout_w8;
  
  func_0x0001072cee98();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001072cba58();
  }
  return;
}



/* Entry: 1072cba84; end: 1072cba8b;  */

void FUN_1072cba84(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -5;
    func_0x0001006393ec();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072cba8c; end: 1072cbb07;  */

void FUN_1072cba8c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x28;
    func_0x0001006393ec();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072cbb08; end: 1072cbb0f;  */

void FUN_1072cbb08(void)

{
  return;
}



/* Entry: 1072cbb10; end: 1072cbb33;  */

void FUN_1072cbb10(void)

{
  func_0x0001072ce7fc();
  func_0x0001072cee44(&PTR_FUN_11099b2e8);
  return;
}



/* Entry: 1072cbb34; end: 1072cbb4f;  */

void FUN_1072cbb34(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_11099b2e8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072cbb50; end: 1072cbef3;  */

void FUN_1072cbb50(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_88;
  long lStack_80;
  undefined ***pppuStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  undefined ***pppuStack_58;
  undefined8 uStack_48;
  
  func_0x0001072ce328();
  lVar11 = *(long *)(param_1 + 8);
  uStack_48 = extraout_x8;
  if (*(long *)(lVar11 + 0x160) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    uVar10 = *(undefined8 *)(lVar11 + 0xc0);
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    puVar4 = (undefined8 *)0x210;
    __Znwm();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_11099b568;
    ppuStack_70 = &PTR_DAT_11099b5b8;
    pppuStack_58 = &ppuStack_70;
    puStack_68 = (undefined8 *)lVar11;
    FUN_107307a24(puVar4 + 3,uVar10,lVar11 + 0xd0,param_1 + 8,uVar9,&ppuStack_70);
    pppuVar5 = &ppuStack_70;
    func_0x0001006393ec();
    ppuVar8 = *(undefined ***)(lVar11 + 0x188);
    ppuStack_a0 = (undefined **)(puVar4 + 3);
    puStack_98 = puVar4;
    func_0x0001072ceb0c();
    *pppuVar5 = &PTR_FUN_11099e7f8;
    pppuVar5[1] = ppuVar8;
    pppuVar6 = pppuVar5;
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    puVar4 = puStack_98;
    ppuVar8 = ppuStack_a0;
    puVar7 = (undefined8 *)0x188;
    __Znwm();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_DAT_11099b638;
    puStack_68 = puVar4;
    ppuStack_70 = ppuVar8;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10 != 0);
    }
    lStack_c8 = *(undefined8 *)(lVar11 + 0x178);
    puStack_d0 = *(undefined8 **)(lVar11 + 0x170);
    pppuStack_78 = pppuVar5;
    if (*(long *)(lVar11 + 0x178) != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_00 != 0);
    }
    puStack_88 = *(undefined8 **)(lVar11 + 0x1e8);
    lStack_80 = *(long *)(lVar11 + 0x1f0);
    if (lStack_80 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_01 != 0);
    }
    FUN_107304c04(puVar7 + 3,&ppuStack_70,&pppuStack_78,&puStack_d0,&puStack_88,pppuVar6 + 1);
    func_0x0001072aa2e8(&puStack_88);
    func_0x00010724bd50(&puStack_d0);
    if (pppuStack_78 != (undefined ***)0x0) {
      func_0x0001072ce338();
    }
    func_0x0001072bc34c(&ppuStack_70);
    puStack_b0 = puVar7 + 3;
    puStack_a8 = puVar7;
    FUN_1072b52cc(lVar11 + 0x160,&puStack_b0);
    func_0x0001072bc98c(&puStack_b0);
    puVar7 = *(undefined8 **)(lVar11 + 0x160);
    FUN_107305348(puVar7,lVar11 + 0x50);
    puVar4 = *(undefined8 **)(lVar11 + 0xb0);
    lVar2 = *(long *)(lVar11 + 0xb8);
    puStack_88 = puVar4;
    lStack_80 = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_02 != 0);
    }
    puVar1 = *(undefined8 **)(lVar11 + 0x160);
    lVar3 = *(long *)(lVar11 + 0x168);
    puStack_b0 = puVar1;
    puStack_a8 = (undefined8 *)lVar3;
    if (lVar3 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_03 != 0);
    }
    uVar9 = *(undefined8 *)(lVar11 + 0xb0);
    puStack_d0 = puVar4;
    lStack_c8 = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_04 != 0);
    }
    puStack_c0 = puVar1;
    lStack_b8 = lVar3;
    if (lVar3 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_05 != 0);
    }
    pppuStack_58 = (undefined ***)0x0;
    func_0x0001072cedd4();
    *puVar7 = &PTR_SUB_11099b688;
    puVar7[1] = puVar4;
    puStack_d0 = (undefined8 *)0x0;
    lStack_c8 = 0;
    puVar7[2] = lVar2;
    puVar7[3] = puVar1;
    puVar7[4] = lVar3;
    puStack_c0 = (undefined8 *)0x0;
    lStack_b8 = 0;
    pppuStack_58 = (undefined ***)puVar7;
    FUN_107292e94(uVar9,&ppuStack_70);
    func_0x000107283e00(&ppuStack_70);
    FUN_1072b70f8(&puStack_d0);
    func_0x0001072cc6dc(&puStack_b0);
    func_0x0001072cc6b8(&puStack_88);
    func_0x0001072bc34c(&ppuStack_a0);
  }
  puVar4 = (undefined8 *)(lVar11 + 0x380);
  FUN_10724bb70(&ppuStack_70);
  ppuVar8 = ppuStack_70;
  if (ppuStack_70 != (undefined **)0x0) {
    uVar9 = *(undefined8 *)(lVar11 + 0x378);
    func_0x0001072cedd4();
    *puVar4 = &PTR_DAT_11099b358;
    puVar4[1] = uVar9;
    puVar4[2] = FUN_1072b711c;
    puVar4[3] = 0;
    puStack_d0 = puVar4;
    func_0x0001073ae140(ppuVar8,&puStack_d0);
    func_0x0001072d0334();
    if (ppuVar8 != (undefined **)0x0) {
      func_0x0001072ce338();
    }
  }
  func_0x00010724bcd8();
  func_0x0001072ce0cc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107283e00(&ppuStack_70);
    FUN_1072b70f8(&puStack_d0);
    func_0x0001072cc6dc(&puStack_b0);
    func_0x0001072cc6b8(&puStack_88);
    func_0x0001072bc34c(&ppuStack_a0);
    func_0x0001072ce900();
    func_0x0001072cea90();
    func_0x0001072cea04();
    func_0x0001072ce484();
    return;
  }
  return;
}



/* Entry: 1072cbef4; end: 1072cbf1b;  */

void FUN_1072cbef4(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099b388);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072cbf1c; end: 1072cbf4b;  */

undefined ** FUN_1072cbf1c(void)

{
  return &PTR_DAT_11099b388;
}



/* Entry: 1072cbf4c; end: 1072cbf77;  */

undefined8 * FUN_1072cbf4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099b3a8;
  FUN_1072bb9d0(param_1 + 1);
  return param_1;
}



/* Entry: 1072cbf78; end: 1072cbf8b;  */

void FUN_1072cbf78(void)

{
  FUN_1072cbf4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072cbf8c; end: 1072cbfbf;  */

void FUN_1072cbf8c(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x0001072ce7fc();
  func_0x0001072ceba0(&PTR_FUN_11099b3a8);
  if (extraout_x8 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1072cbfc0; end: 1072cc007;  */

void FUN_1072cbfc0(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_11099b3a8;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072ced88(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}


