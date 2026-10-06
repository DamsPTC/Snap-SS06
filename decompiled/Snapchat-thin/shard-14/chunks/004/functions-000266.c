/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1b4bf0; end: 10b1b4c03;  */

void FUN_10b1b4bf0(void)

{
  FUN_10b1b4c6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1b4c04; end: 10b1b4c6b;  */

void FUN_10b1b4c04(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x710);
  *(undefined8 *)(param_1 + 0x710) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0x708);
  __ZNSt3__15mutexD1Ev(param_1 + 0x6c8);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x698);
  if (*(char *)(param_1 + 0x690) == '\x01') {
    if (*(char *)(param_1 + 0x688) == '\x01') {
      func_0x00010b125584();
    }
    else {
      func_0x0001052ac684();
    }
    return;
  }
  return;
}



/* Entry: 10b1b4c6c; end: 10b1b4c7f;  */

void FUN_10b1b4c6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1b4c80; end: 10b1b4d17;  */

void FUN_10b1b4c80(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  func_0x00010b1b6670();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10b1b4d18();
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x00010b1960f8(unaff_x19 + 0x18);
  func_0x00010b1960f8((long *)(param_1 + 8));
  return;
}



/* Entry: 10b1b4d18; end: 10b1b4dcf;  */

void FUN_10b1b4d18(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  func_0x00010b1b65dc(auStack_40);
  FUN_10b195e74(alStack_30,auStack_40);
  func_0x00010b1b6620();
  func_0x00010b1b64d8();
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x6b0);
  __ZNSt13exception_ptraSERKS_(alStack_30[0] + 0x6f0,param_2);
  func_0x00010b1b6524(alStack_30[0]);
  if (param_2 == 0) {
    __ZNSt3__118condition_variable10notify_allEv(alStack_30[0] + 0x680);
  }
  else {
    func_0x00010b1b6638();
    (*extraout_x8)(param_2,alStack_30);
    func_0x00010b1b63b4();
  }
  func_0x00010b1b65d4();
  return;
}



/* Entry: 10b1b4dd0; end: 10b1b4e0b;  */

void FUN_10b1b4dd0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  
  if (param_3 != 0) {
    do {
      FUN_10b1b6390();
    } while (extraout_w10 != 0);
    do {
      FUN_10b1b6390();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x00010b1b64d8();
  return;
}



/* Entry: 10b1b4e0c; end: 10b1b4e17;  */

void FUN_10b1b4e0c(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_10b1b4e18);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_10b1b4e18);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 10b1b4e18; end: 10b1b4ea3;  */

void FUN_10b1b4e18(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110cea0a0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b1b4ea4; end: 10b1b4ecb;  */

void FUN_10b1b4ea4(long param_1)

{
  if (*(char *)(param_1 + 0x678) == '\x01') {
    FUN_10b196360();
  }
  else {
    __ZNSt13exception_ptrD1Ev();
  }
  return;
}



/* Entry: 10b1b4ecc; end: 10b1b4eef;  */

void FUN_10b1b4ecc(long param_1)

{
  func_0x00010b1b6664();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1b4ef0; end: 10b1b4f83;  */

undefined8 * FUN_10b1b4ef0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 auStack_50 [2];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  puVar3 = auStack_50;
  func_0x00010b1b63e0();
  uStack_38 = extraout_x8;
  FUN_10b12b260(auStack_50,1);
  FUN_10b1b4f84(lStack_40,param_3,param_4);
  lVar1 = lStack_40;
  lStack_40 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010b12b2d8();
  func_0x00010b1b63a0(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b12b2d8();
  func_0x00010b1b63d0();
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110cbd7d0;
  puVar3[1] = 0;
  FUN_10b1b4fc8(puVar3 + 3);
  return puVar3;
}



/* Entry: 10b1b4f84; end: 10b1b4fc7;  */

undefined8 * FUN_10b1b4f84(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cbd7d0;
  param_1[1] = 0;
  FUN_10b1b4fc8(param_1 + 3);
  return param_1;
}



/* Entry: 10b1b4fc8; end: 10b1b501f;  */

undefined8 FUN_10b1b4fc8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_30 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_10b2111c0(param_1,param_2,&uStack_40);
  func_0x000107c278a8(&uStack_40);
  return param_1;
}



/* Entry: 10b1b5020; end: 10b1b5043;  */

void FUN_10b1b5020(long param_1)

{
  func_0x00010b1b6664();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1b5044; end: 10b1b51a7;  */

void FUN_10b1b5044(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  code *extraout_x8;
  undefined8 uVar3;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  func_0x00010b1b65dc(&uStack_30);
  FUN_10b195e74(&puStack_40,&uStack_30);
  func_0x00010b1b65d4();
  func_0x00010b1b64d8();
  __ZNSt3__15mutex4lockEv(puStack_40 + 0xd6);
  if (*(char *)(puStack_40 + 0xcf) == '\x01') {
    bVar1 = *(byte *)(param_2 + 0xce);
    if (((*(byte *)(puStack_40 + 0xce) & 1) == 0) && (bVar1 != 0)) {
      uStack_28 = puStack_40[1];
      uStack_30 = *puStack_40;
      *puStack_40 = 0;
      puStack_40[1] = 0;
      puVar2 = puStack_40;
      func_0x0001052ac684();
      FUN_10b1254a0();
      *(undefined1 *)(puVar2 + 0xce) = 1;
      func_0x0001052ac684(&uStack_30);
    }
    else if (*(byte *)(puStack_40 + 0xce) == 0) {
      if ((bVar1 & 1) == 0) {
        FUN_10b11ffec(puStack_40,param_2);
      }
    }
    else if (bVar1 == 0) {
      puVar2 = puStack_40;
      func_0x00010b125584();
      uVar3 = *param_2;
      puVar2[1] = param_2[1];
      *puVar2 = uVar3;
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined1 *)(puVar2 + 0xce) = 0;
    }
    else {
      FUN_10b1253b4(puStack_40,param_2);
    }
  }
  else {
    puVar2 = puStack_40;
    FUN_10b1962f4(puStack_40,param_2);
    *(undefined1 *)(puVar2 + 0xcf) = 1;
  }
  func_0x00010b1b6524(puStack_40);
  if (param_2 == (undefined8 *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(puStack_40 + 0xd0);
  }
  else {
    func_0x00010b1b6638();
    (*extraout_x8)(param_2,&puStack_40);
    func_0x00010b1b63b4();
  }
  func_0x00010b1b6620();
  return;
}



/* Entry: 10b1b51a8; end: 10b1b51cb;  */

void FUN_10b1b51a8(long param_1)

{
  func_0x00010b1b6664();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1b51cc; end: 10b1b51ef;  */

void FUN_10b1b51cc(long param_1)

{
  if (*(char *)(param_1 + 0x680) == '\x01') {
    FUN_10b1b4ea4();
    *(undefined1 *)(param_1 + 0x680) = 0;
  }
  return;
}



/* Entry: 10b1b51f0; end: 10b1b51f3;  */

void FUN_10b1b51f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc3438;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1b51f4; end: 10b1b5207;  */

void FUN_10b1b51f4(void)

{
  FUN_10b1b5da8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1b5208; end: 10b1b521b;  */

void FUN_10b1b5208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1b5210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b1b521c; end: 10b1b522f;  */

void FUN_10b1b521c(void)

{
  func_0x00010b1b5424();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1b5230; end: 10b1b5327;  */

undefined1 * FUN_10b1b5230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x22;
  undefined1 auStack_180 [72];
  code *pcStack_138;
  undefined **ppuStack_130;
  long lStack_128;
  undefined8 uStack_108;
  undefined1 auStack_c0 [88];
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined8 uStack_38;
  
  puVar3 = auStack_c0;
  uVar6 = param_3;
  func_0x00010b1b63e0();
  uStack_38 = extraout_x8;
  func_0x00010b1b6578();
  func_0x00010b1b5490();
  func_0x000107c27c84(unaff_x22 + 0x18,param_3);
  pcStack_68 = FUN_10b1b54cc;
  ppuStack_60 = &PTR_DAT_110cc3528;
  lVar1 = 0x50;
  __Znwm();
  lVar2 = lVar1;
  func_0x00010b1b6590();
  func_0x000107c27c84(lVar2 + 0x18,unaff_x22 + 0x18);
  lStack_58 = lVar1;
  FUN_10b20a5ac();
  func_0x00010b1b650c();
  FUN_10b1b58ec();
  func_0x00010b1b63a0(uStack_38);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010b1b650c();
  FUN_10b1b58ec(auStack_c0);
  func_0x00010b1b63d0();
  puVar4 = auStack_180;
  puVar5 = auStack_180;
  func_0x00010b1b63e0();
  uStack_108 = extraout_x8_00;
  func_0x00010b1b6578();
  func_0x00010b1b5490(&pcStack_68);
  FUN_10b1b5918(unaff_x22 + 0x18,uVar6);
  pcStack_138 = FUN_10b1b5988;
  ppuStack_130 = &PTR_FUN_110cc3540;
  lVar1 = 0x48;
  __Znwm();
  lVar2 = lVar1;
  func_0x00010b1b6590();
  FUN_10b1b5918(lVar2 + 0x18,unaff_x22 + 0x18);
  lStack_128 = lVar1;
  FUN_10b20a5ac(puVar3,&pcStack_138);
  func_0x00010b1b64e0();
  FUN_10b1b5d7c();
  func_0x00010b1b63a0(uStack_108);
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010b1b64e0();
  FUN_10b1b5d7c();
  func_0x00010b1b63d0();
  func_0x00010b1b6664();
  if (puVar5 != (undefined1 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return puVar4;
}



/* Entry: 10b1b5328; end: 10b1b53ff;  */

undefined1 * FUN_10b1b5328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long unaff_x22;
  undefined1 auStack_c0 [72];
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined8 uStack_48;
  
  puVar3 = auStack_c0;
  puVar4 = auStack_c0;
  func_0x00010b1b63e0();
  uStack_48 = extraout_x8;
  func_0x00010b1b6578();
  func_0x00010b1b5490();
  FUN_10b1b5918(unaff_x22 + 0x18,param_3);
  pcStack_78 = FUN_10b1b5988;
  ppuStack_70 = &PTR_FUN_110cc3540;
  lVar1 = 0x48;
  __Znwm();
  lVar2 = lVar1;
  func_0x00010b1b6590();
  FUN_10b1b5918(lVar2 + 0x18,unaff_x22 + 0x18);
  lStack_68 = lVar1;
  FUN_10b20a5ac();
  func_0x00010b1b64e0();
  FUN_10b1b5d7c();
  func_0x00010b1b63a0(uStack_48);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010b1b64e0();
  FUN_10b1b5d7c();
  func_0x00010b1b63d0();
  func_0x00010b1b6664();
  if (puVar4 != (undefined1 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return puVar3;
}



/* Entry: 10b1b5400; end: 10b1b54cb;  */

void FUN_10b1b5400(long param_1)

{
  func_0x00010b1b6664();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b1b54cc; end: 10b1b566f;  */

void FUN_10b1b54cc(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 extraout_x8;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int extraout_w10;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined1 auStack_8b8 [24];
  undefined1 uStack_8a0;
  undefined1 auStack_898 [168];
  undefined1 uStack_7f0;
  undefined1 auStack_7e8 [24];
  undefined1 uStack_7d0;
  undefined1 auStack_770 [24];
  undefined1 auStack_758 [16];
  undefined8 auStack_748 [3];
  long *plStack_730;
  long lStack_728;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  char *pcStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_6f0;
  func_0x00010b1b63e0();
  plVar10 = *(long **)(param_1 + 0x10);
  lVar6 = *plVar10;
  if (*(char *)(lVar6 + 0xa8) == '\x01') {
    uVar3 = *(undefined4 *)(lVar6 + 0x68);
  }
  else {
    uVar3 = 5;
  }
  uStack_38 = extraout_x8;
  FUN_10b12983c(&uStack_6b0,uVar3);
  __ZNSt3__19to_stringEi(&uStack_6e0,(int)plVar10[3]);
  pcStack_688 = "code";
  uStack_680 = 4;
  uStack_670 = uStack_6d8;
  uStack_678 = uStack_6e0;
  uStack_668 = uStack_6d0;
  uStack_6e0 = 0;
  uStack_6d8 = 0;
  uStack_6d0 = 0;
  func_0x00010b120648(&uStack_6c8,&uStack_6b0,2);
  func_0x00010b1b655c();
  FUN_10b120998(&uStack_6c8);
  lVar7 = 0x38;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev((long)&uStack_6b0 + lVar7);
    lVar7 = lVar7 + -0x28;
    uVar1 = lVar7 == -0x18;
  } while (!(bool)uVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_6e0);
  FUN_10b1b5670(&uStack_6f0,lVar6);
  uStack_6a8 = uStack_6e8;
  uStack_6b0 = uStack_6f0;
  uStack_6f0 = 0;
  uStack_6e8 = 0;
  uStack_6c8 = 0;
  uStack_6c0 = 0;
  uStack_40 = 0;
  puVar9 = &uStack_6b0;
  FUN_10b1b5044(lVar6 + 0x28);
  FUN_10b196360(&uStack_6b0);
  func_0x0001052ac684(&uStack_6c8);
  func_0x0001052ac684();
  func_0x00010b1b63a0(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    FUN_10b196360(&uStack_6b0);
    func_0x0001052ac684(&uStack_6c8);
    func_0x0001052ac684();
    func_0x00010b1b63d0();
    puVar4 = (undefined8 *)puVar9[0x76];
    puVar5 = (undefined8 *)puVar9[0x77];
    *puVar2 = 0;
    puVar2[1] = 0;
    if (puVar4 != puVar5) {
      plVar10 = (long *)*puVar4;
      lStack_728 = puVar4[1];
      plStack_730 = plVar10;
      if (lStack_728 != 0) {
        do {
          func_0x00010b1b6390();
        } while (extraout_w10 != 0);
      }
      if ((*(uint *)(puVar9 + 0x5b) >> 2 & 1) == 0) {
        if ((*(uint *)(puVar9 + 0x5b) >> 1 & 1) != 0) {
          uVar8 = *(ulong *)(puVar9[100] + 0x48);
          (**(code **)(*plVar10 + 0x60))(auStack_8b8);
          (**(code **)(*plStack_730 + 0x70))(auStack_898);
          auStack_7e8[0] = 0;
          uStack_7d0 = 0;
          FUN_10b2319c8(auStack_748,uVar8 & 0xfffffffffffffffc,auStack_8b8,auStack_898,auStack_7e8);
          FUN_10b11ffec(puVar2,auStack_748);
          func_0x0001052ac684(auStack_748);
          func_0x000107c279a4(auStack_7e8);
          func_0x0001052bb09c(auStack_898);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_8b8);
        }
      }
      else {
        puVar9 = (undefined8 *)(*(ulong *)(puVar9[0x65] + 0x10) & 0xfffffffffffffffc);
        lVar6 = (long)*(char *)((long)puVar9 + 0x17);
        if (lVar6 < 0) {
          lVar6 = puVar9[1];
        }
        func_0x000107c27fdc(auStack_748,lVar6);
        lVar6 = (long)*(char *)((long)puVar9 + 0x17);
        if (lVar6 < 0) {
          lVar6 = puVar9[1];
          puVar9 = (undefined8 *)*puVar9;
        }
        _memcpy(auStack_748[0],puVar9,lVar6);
        (**(code **)(*plStack_730 + 0x60))(auStack_770);
        (**(code **)(*plStack_730 + 0x70))(auStack_7e8);
        auStack_898[0] = 0;
        uStack_7f0 = 0;
        auStack_8b8[0] = 0;
        uStack_8a0 = 0;
        FUN_10b2338cc(auStack_758,auStack_748,auStack_770,auStack_7e8,auStack_898,auStack_8b8);
        FUN_10b11ffec(puVar2,auStack_758);
        func_0x0001052ac684(auStack_758);
        func_0x000107c279a4(auStack_8b8);
        FUN_10b1b58a8(auStack_898);
        func_0x0001052bb09c(auStack_7e8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_770);
        func_0x000107c27914(auStack_748);
      }
      func_0x0001052ac684(&plStack_730);
    }
    return;
  }
  return;
}



/* Entry: 10b1b5670; end: 10b1b58a7;  */

void FUN_10b1b5670(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int extraout_w10;
  ulong uVar5;
  undefined1 auStack_1c8 [24];
  undefined1 uStack_1b0;
  undefined1 auStack_1a8 [168];
  undefined1 uStack_100;
  undefined1 auStack_f8 [24];
  undefined1 uStack_e0;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [16];
  undefined8 auStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  puVar3 = *(undefined8 **)(param_2 + 0x3b0);
  puVar4 = *(undefined8 **)(param_2 + 0x3b8);
  *param_1 = 0;
  param_1[1] = 0;
  if (puVar3 != puVar4) {
    plVar1 = (long *)*puVar3;
    lStack_38 = puVar3[1];
    plStack_40 = plVar1;
    if (lStack_38 != 0) {
      do {
        FUN_10b1b6390();
      } while (extraout_w10 != 0);
    }
    if ((*(uint *)(param_2 + 0x2d8) >> 2 & 1) == 0) {
      if ((*(uint *)(param_2 + 0x2d8) >> 1 & 1) != 0) {
        uVar5 = *(ulong *)(*(long *)(param_2 + 800) + 0x48);
        (**(code **)(*plVar1 + 0x60))(auStack_1c8);
        (**(code **)(*plStack_40 + 0x70))(auStack_1a8);
        auStack_f8[0] = 0;
        uStack_e0 = 0;
        FUN_10b2319c8(auStack_58,uVar5 & 0xfffffffffffffffc,auStack_1c8,auStack_1a8,auStack_f8);
        FUN_10b11ffec(param_1,auStack_58);
        func_0x0001052ac684(auStack_58);
        func_0x000107c279a4(auStack_f8);
        func_0x0001052bb09c(auStack_1a8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
      }
    }
    else {
      puVar3 = (undefined8 *)(*(ulong *)(*(long *)(param_2 + 0x328) + 0x10) & 0xfffffffffffffffc);
      lVar2 = (long)*(char *)((long)puVar3 + 0x17);
      if (lVar2 < 0) {
        lVar2 = puVar3[1];
      }
      func_0x000107c27fdc(auStack_58,lVar2);
      lVar2 = (long)*(char *)((long)puVar3 + 0x17);
      if (lVar2 < 0) {
        lVar2 = puVar3[1];
        puVar3 = (undefined8 *)*puVar3;
      }
      _memcpy(auStack_58[0],puVar3,lVar2);
      (**(code **)(*plStack_40 + 0x60))(auStack_80);
      (**(code **)(*plStack_40 + 0x70))(auStack_f8);
      auStack_1a8[0] = 0;
      uStack_100 = 0;
      auStack_1c8[0] = 0;
      uStack_1b0 = 0;
      FUN_10b2338cc(auStack_68,auStack_58,auStack_80,auStack_f8,auStack_1a8,auStack_1c8);
      FUN_10b11ffec(param_1,auStack_68);
      func_0x0001052ac684(auStack_68);
      func_0x000107c279a4(auStack_1c8);
      FUN_10b1b58a8(auStack_1a8);
      func_0x0001052bb09c(auStack_f8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
      func_0x000107c27914(auStack_58);
    }
    func_0x0001052ac684(&plStack_40);
  }
  return;
}



/* Entry: 10b1b58a8; end: 10b1b58e7;  */

void FUN_10b1b58a8(long param_1)

{
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    FUN_10b4855b8();
  }
  return;
}



/* Entry: 10b1b58e8; end: 10b1b58eb;  */

void FUN_10b1b58e8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1b58ec; end: 10b1b5917;  */

long FUN_10b1b58ec(long param_1)

{
  func_0x000107c27cbc(param_1 + 0x18);
  FUN_10b1b5020(param_1 + 8);
  return param_1;
}



/* Entry: 10b1b5918; end: 10b1b5987;  */

undefined8 * FUN_10b1b5918(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *param_1 = &PTR_FUN_110ce9f70;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      FUN_10b47c070(param_1);
    }
    else {
      FUN_10b47c038(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b1b5988; end: 10b1b5d57;  */

void FUN_10b1b5988(long param_1)

{
  ulong *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined1 auStack_e48 [96];
  undefined1 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined1 uStack_6a8;
  undefined1 auStack_698 [48];
  undefined1 uStack_668;
  undefined1 uStack_660;
  undefined1 uStack_638;
  undefined1 uStack_630;
  undefined1 uStack_590;
  undefined1 uStack_588;
  undefined1 uStack_548;
  undefined1 uStack_540;
  undefined1 uStack_508;
  undefined2 uStack_500;
  undefined1 uStack_4fe;
  undefined1 auStack_4f8 [1192];
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b1b63e0();
  plVar12 = *(long **)(param_1 + 0x10);
  lVar11 = *plVar12;
  uStack_48 = extraout_x8;
  if ((int)plVar12[6] != 1) {
    if (*(char *)(lVar11 + 0xa8) == '\x01') {
      uVar8 = *(undefined4 *)(lVar11 + 0x68);
    }
    else {
      uVar8 = 5;
    }
    FUN_10b12983c(&uStack_6c0,uVar8);
    puVar4 = &UNK_10f7318de;
    if ((int)plVar12[6] != 0) {
      puVar4 = &DAT_10f4b5116;
    }
    FUN_10b123d58(auStack_698,"code",4,puVar4);
    func_0x00010b120648(&uStack_d30,&uStack_6c0,2);
    func_0x00010b1b655c();
    FUN_10b120998(&uStack_d30);
    lVar10 = 0x38;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((long)&uStack_6c0 + lVar10);
      lVar10 = lVar10 + -0x28;
      uVar6 = lVar10 == -0x18;
    } while (!(bool)uVar6);
    FUN_10b1b5670(&uStack_de0,lVar11);
    uStack_6b8 = uStack_dd8;
    uStack_6c0 = uStack_de0;
    uStack_de0 = 0;
    uStack_dd8 = 0;
    uStack_d30 = 0;
    uStack_d28 = 0;
    uStack_50 = 0;
    func_0x00010b1b65a8();
    func_0x00010b1b6554();
    func_0x0001052ac684(&uStack_d30);
    func_0x0001052ac684(&uStack_de0);
    goto LAB_10b1b5c7c;
  }
  uVar9 = plVar12[5];
  uVar6 = (uVar9 & 1) == 0;
  puVar1 = (ulong *)(plVar12 + 5);
  if (!(bool)uVar6) {
    puVar1 = (ulong *)(uVar9 + 7);
  }
  uVar13 = *puVar1;
  uVar9 = *(ulong *)(uVar13 + 0x18) & 0xfffffffffffffffc;
  cVar5 = *(char *)(uVar9 + 0x17);
  if (cVar5 < '\0') {
    if (*(long *)(uVar9 + 8) != 0) goto LAB_10b1b59e4;
LAB_10b1b5b28:
    uVar9 = *(ulong *)(uVar13 + 0x20) & 0xfffffffffffffffc;
    lVar10 = (long)*(char *)(uVar9 + 0x17);
    if (lVar10 < 0) {
      lVar10 = *(long *)(uVar9 + 8);
    }
    if (lVar10 != 0) {
      lVar10 = lVar11 + 0x2c8;
      func_0x00010b118228();
      uVar9 = *(ulong *)(lVar10 + 8);
      if ((uVar9 & 1) != 0) {
        uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(lVar10 + 0x10,*(ulong *)(uVar13 + 0x20) & 0xfffffffffffffffc,uVar9);
    }
  }
  else {
    if (cVar5 == '\0') goto LAB_10b1b5b28;
LAB_10b1b59e4:
    lVar10 = lVar11 + 0x2c8;
    func_0x00010b1185e0();
    uVar9 = *(ulong *)(lVar10 + 8);
    if ((uVar9 & 1) != 0) {
      uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
    }
    func_0x000107c30250(lVar10 + 0x48,uVar9);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    ppuVar2 = &PTR_PTR_11336dce0;
    if (*(undefined ***)(lVar11 + 800) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(lVar11 + 800);
    }
    uVar6 = (undefined **)ppuVar2[0xc] == (undefined **)0x0;
    ppuVar3 = &PTR_PTR_11336dc48;
    if (!(bool)uVar6) {
      ppuVar3 = (undefined **)ppuVar2[0xc];
    }
    cVar5 = *(char *)(((ulong)ppuVar3[3] & 0xfffffffffffffffc) + 0x17);
    if (cVar5 < '\0') {
      if (*(long *)(((ulong)ppuVar3[3] & 0xfffffffffffffffc) + 8) == 0) goto LAB_10b1b5b74;
    }
    else if (cVar5 == '\0') {
LAB_10b1b5b74:
      lVar10 = lVar11 + 0x2c8;
      func_0x00010b1185e0();
      func_0x00010b1185d0();
      func_0x00010b20b440(*(undefined4 *)(lVar11 + 0x68));
      if ((*(ulong *)(lVar10 + 8) & 1) != 0) {
        func_0x00010b1b656c();
      }
      func_0x0001056439e0(lVar10 + 0x18);
    }
  }
  uVar8 = *(undefined4 *)(lVar11 + 0x3a8);
  FUN_10b121eac(&uStack_de0,lVar11 + 0x2c8);
  auStack_e48[0] = 0;
  uStack_de8 = 0;
  FUN_10b1b1ed8(&uStack_d30,lVar11 + 0x50,lVar11 + 0x368,uVar8,0,1,0,&uStack_de0,auStack_e48,0);
  func_0x00010b121ac0(auStack_e48);
  FUN_10b12130c(&uStack_de0);
  uStack_668 = 0;
  uStack_660 = 0;
  uStack_638 = 0;
  uStack_630 = 0;
  uStack_590 = 0;
  uStack_588 = 0;
  uStack_548 = 0;
  uStack_540 = 0;
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_4fe = 0;
  uStack_6b0 = 0;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  uStack_6a8 = 0;
  _bzero(auStack_4f8,0xb0);
  FUN_10b1151e4(lVar11 + 0x50,&uStack_6c0);
  func_0x00010b121af0(&uStack_6c0);
  FUN_10b1254a0(&uStack_6c0,&uStack_d30);
  uStack_50 = 1;
  func_0x00010b1b65a8();
  func_0x00010b1b6554();
  func_0x00010b125584(&uStack_d30);
LAB_10b1b5c7c:
  func_0x00010b1b63a0(uStack_48);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1b6554();
  func_0x0001052ac684(&uStack_d30);
  puVar7 = &uStack_de0;
  func_0x0001052ac684();
  func_0x00010b1b63d0();
  if (puVar7[1] == 0) {
    return;
  }
  FUN_10b1b5d7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1b5d58; end: 10b1b5d77;  */

void FUN_10b1b5d58(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1b5d7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1b5d78; end: 10b1b5d7b;  */

void FUN_10b1b5d78(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1b5d7c; end: 10b1b5da7;  */

long FUN_10b1b5d7c(long param_1)

{
  FUN_10b47be74(param_1 + 0x18);
  FUN_10b1b5020(param_1 + 8);
  return param_1;
}



/* Entry: 10b1b5da8; end: 10b1b5db7;  */

void FUN_10b1b5da8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc3438;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1b5db8; end: 10b1b630b;  */

void FUN_10b1b5db8(undefined8 param_1,undefined **param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined4 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *extraout_x8;
  undefined8 *puVar9;
  undefined *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar10;
  undefined *puVar11;
  long *plVar12;
  undefined *puVar13;
  undefined8 in_register_00005008;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  ppuVar1 = param_2 + 0x1f6;
  if (*(char *)((long)param_2 + 0x117c) == '\0') {
    FUN_10b1278b8(param_2[0x22e] + 0x100);
    FUN_10b20ee68(param_2 + 0x226,*(undefined8 *)(param_2[0x224] + 0x10));
    if (param_2[0x226] == (undefined *)0x0) {
      puVar9 = (undefined8 *)param_2[0x221];
      if (puVar9 == (undefined8 *)param_2[0x222]) {
        puVar11 = (undefined *)0x0;
        puVar4 = (undefined *)0x0;
      }
      else {
        puVar4 = (undefined *)*puVar9;
        puVar11 = (undefined *)puVar9[1];
        if (puVar11 != (undefined *)0x0) {
          do {
            func_0x00010b1b6390();
          } while (extraout_w10_01 != 0);
        }
      }
      puStack_128 = (undefined *)0x0;
      puStack_120 = (undefined *)0x0;
      func_0x00010b1b6628();
      param_2[7] = puVar4;
      param_2[8] = puVar11;
      func_0x00010b1b640c();
      func_0x0001052ac684(&puStack_128);
      goto LAB_10b1b5e2c;
    }
    func_0x00010b1ff218(param_2 + 0x22a,*(undefined8 *)(param_2[0x224] + 0x30),
                        *(undefined4 *)(param_2 + 0x1aa));
    puVar4 = (undefined *)0x3e0;
    __Znwm();
    plVar10 = (long *)(puVar4 + 8);
    *plVar10 = 0;
    func_0x00010b1b6644();
    func_0x00010b1b65c0();
    FUN_10b121300(ppuVar1,param_2 + 0x20a);
    func_0x00010b1b64f0();
    *(undefined8 *)(puVar4 + 0x38) = in_register_00005008;
    *(undefined8 *)(puVar4 + 0x30) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = 0;
    param_2[0x221] = (undefined *)0x0;
    *(undefined8 *)(puVar4 + 0x28) = 0;
    *(undefined ***)(puVar4 + 0x18) = &PTR_DAT_110cc3488;
    if (param_2[0x22b] != (undefined *)0x0) {
      do {
        func_0x00010b1b6390();
      } while (extraout_w10 != 0);
    }
    FUN_10b1b4b00(puVar4 + 0x40);
    FUN_10b121c1c(puVar4 + 0x68,param_2 + 0xd8);
    puVar11 = puVar4 + 0x18;
    FUN_10b1214e8(puVar4 + 0x2e0,ppuVar1);
    puVar7 = param_2[0x225];
    puVar13 = param_2[0x224];
    *(undefined **)(puVar4 + 0x388) = param_2[0x225];
    *(undefined **)(puVar4 + 0x380) = puVar13;
    if (puVar7 != (undefined *)0x0) {
      do {
        func_0x00010b1b6390();
      } while (extraout_w10_00 != 0);
    }
    uVar6 = *(undefined4 *)(param_2 + 0x22f);
    puVar4[0x390] = 0;
    puVar4[0x3b8] = 0;
    *(undefined4 *)(puVar4 + 0x3c0) = uVar6;
    puVar7 = param_2[0x21e];
    *(undefined **)(puVar4 + 0x3d0) = param_2[0x21f];
    *(undefined **)(puVar4 + 0x3c8) = puVar7;
    *(undefined **)(puVar4 + 0x3d8) = param_2[0x220];
    param_2[0x21f] = (undefined *)0x0;
    param_2[0x220] = (undefined *)0x0;
    param_2[0x21e] = (undefined *)0x0;
    FUN_10b125534(param_2 + 0x21e);
    FUN_10b24f5cc(ppuVar1);
    func_0x00010b1b651c();
    param_2[0x228] = puVar11;
    param_2[0x229] = puVar4;
    lVar8 = *(long *)(puVar4 + 0x28);
    if ((lVar8 == 0) || (in_ZR = *(long *)(lVar8 + 8) == -1, (bool)in_ZR)) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar12 = (long *)(puVar4 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      ppuStack_158 = *(undefined ***)(puVar4 + 0x20);
      *(undefined **)(puVar4 + 0x20) = puVar11;
      *(undefined **)(puVar4 + 0x28) = puVar4;
      ppuStack_150 = (undefined **)lVar8;
      puStack_128 = puVar11;
      puStack_120 = puVar4;
      FUN_10b1b5400(&ppuStack_158);
      FUN_10b1b5020(&puStack_128);
    }
    func_0x00010b1298c4(param_2 + 0x22a);
    ppuVar5 = ppuVar1;
    FUN_10b1b4dd0(ppuVar1,*(undefined8 *)(puVar4 + 0x58),*(undefined8 *)(puVar4 + 0x60));
    plVar12 = (long *)param_2[0x226];
    ppuStack_158 = &PTR_FUN_110ce9f20;
    ppuStack_150 = (undefined **)0x0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    if ((*(uint *)(param_2 + 0x20c) >> 1 & 1) == 0) {
      if ((*(uint *)(param_2 + 0x20c) >> 2 & 1) != 0) {
        func_0x00010b1b6544(&ppuStack_158);
        func_0x00010b1b648c();
        if (!(bool)in_ZR) {
          FUN_10b47c348(ppuVar5);
          *(undefined4 *)((long)ppuVar5 + 0x2c) = 2;
          func_0x00010b1b6658();
          ppuVar5[4] = extraout_x8;
        }
        if (((ulong)ppuVar5[1] & 1) != 0) {
          func_0x00010b1b656c();
        }
        func_0x00010b1b6534(ppuVar5 + 4);
        uVar6 = 1;
        goto LAB_10b1b6114;
      }
    }
    else {
      func_0x00010b1b6544(&ppuStack_158);
      func_0x00010b1b6468();
      if (!(bool)in_ZR) {
        FUN_10b47c348(ppuVar5);
        *(undefined4 *)((long)ppuVar5 + 0x2c) = 1;
        func_0x00010b1b6658();
        ppuVar5[4] = extraout_x8_00;
      }
      if (((ulong)ppuVar5[1] & 1) != 0) {
        func_0x00010b1b656c();
      }
      func_0x00010b1b6534(ppuVar5 + 4);
      uVar6 = 0;
LAB_10b1b6114:
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar6);
    }
    puStack_128 = (undefined *)((ulong)puStack_128 & 0xffffffffffffff00);
    uStack_78 = 0;
    param_2[0x22c] = puVar11;
    param_2[0x22d] = puVar4;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    (**(code **)(*plVar12 + 0x10))(plVar12,&ppuStack_158,&puStack_128,param_2 + 0x22c);
    FUN_10b1b4ecc(param_2 + 0x22c);
    func_0x000107c27ba8(&puStack_128);
    FUN_10b47bc4c(&ppuStack_158);
    ppuVar5 = ppuVar1;
    FUN_10b1a835c();
    if (((ulong)ppuVar5 & 1) == 0) {
      *(undefined1 *)((long)param_2 + 0x117c) = 1;
      ppuStack_158 = param_2;
      ppuStack_150 = ppuVar1;
      FUN_10b1a8404(&puStack_128,ppuVar1,&ppuStack_158);
      puVar4 = puStack_120;
      if (puStack_120 == (undefined *)0x0) {
        return;
      }
      plVar10 = (long *)(puStack_120 + 8);
      do {
        lVar8 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 != 0) {
        return;
      }
      func_0x00010b1b6638();
      func_0x00010b1b6440();
      __ZNSt3__119__shared_weak_count14__release_weakEv(puVar4);
      return;
    }
  }
  FUN_10b1a0a70(param_2 + 0xd8,ppuVar1);
  func_0x00010b1b6628();
  FUN_10b1962f4(param_2 + 7,param_2 + 0xd8);
  func_0x00010b1b64c4();
  func_0x00010b1960f8(ppuVar1);
  func_0x00010b1b63c4();
LAB_10b1b5e2c:
  FUN_10b1b51a8(param_2 + 0x226);
  *param_2 = (undefined *)0x0;
  *(undefined1 *)((long)param_2 + 0x117c) = 2;
  if (*(char *)(param_2 + 0xd6) == '\x01') {
    FUN_10b1b5044(param_2 + 2,param_2 + 7);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(auStack_70,param_2 + 7);
    func_0x00010b1b65fc();
    __ZNSt13exception_ptrD1Ev(auStack_70);
  }
  func_0x00010b1b654c();
  func_0x00010b1b6618();
  FUN_10b24f5cc(param_2 + 0x20a);
  func_0x00010b1b653c();
  func_0x00010b1257d4(param_2 + 0x224);
  func_0x00010b1b65f4();
  return;
}



/* Entry: 10b1b630c; end: 10b1b638f;  */

void FUN_10b1b630c(long param_1)

{
  if (*(char *)(param_1 + 0x117c) == '\x01') {
    func_0x00010b1960f8(param_1 + 0xfb0);
    FUN_10b1b5020(param_1 + 0x1140);
    FUN_10b1b51a8(param_1 + 0x1130);
  }
  func_0x00010b1b654c();
  FUN_10b125534(param_1 + 0x1108);
  FUN_10b24f5cc(param_1 + 0x1050);
  func_0x00010b1b653c();
  func_0x00010b1257d4(param_1 + 0x1120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b1b6390; end: 10b1b6683;  */

void FUN_10b1b6390(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b1b6684; end: 10b1b66bb;  */

undefined8 * FUN_10b1b6684(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc3568;
  param_1[2] = 0;
  param_1[1] = 0;
  func_0x00010b114160();
  return param_1;
}



/* Entry: 10b1b66bc; end: 10b1b6833;  */

void FUN_10b1b66bc(undefined8 *param_1,long param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 auStack_330 [4];
  undefined1 uStack_32c;
  undefined1 auStack_2e0 [450];
  byte bStack_11e;
  undefined1 auStack_68 [24];
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  iVar2 = (int)*(undefined8 *)(*(long *)(param_2 + 8) + 0x40);
  FUN_10b11d754();
  plVar7 = (long *)(param_3 + 0x10);
  do {
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      return;
    }
    lVar4 = (long)*(char *)((long)plVar7 + 0x27);
    lVar3 = (long)(plVar7 + 2);
    if (lVar4 < 0) {
      lVar4 = plVar7[3];
      lVar3 = plVar7[2];
    }
    FUN_10b205f70(auStack_68,lVar3,lVar4);
    uVar5 = *(ulong *)(*(long *)(param_2 + 8) + 0x40);
    FUN_10b202630(auStack_2e0,auStack_68);
    auStack_330[0] = 0;
    uStack_32c = 0;
    FUN_10b1f6888(uVar5,auStack_2e0,auStack_330);
    func_0x00010b121e00(auStack_2e0);
    if ((uVar5 & 1) != 0) {
      if (iVar2 != 0) {
        uVar6 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x40);
        FUN_10b202630(auStack_330,auStack_68);
        func_0x00010b1f6a10(auStack_2e0,uVar6,auStack_330,0,1);
        func_0x00010b121e00(auStack_330);
        bVar1 = bStack_11e;
        func_0x00010b121af0(auStack_2e0);
        if ((bVar1 & 1) != 0) goto LAB_10b1b67c0;
      }
      func_0x000107c28274(param_1,plVar7 + 2);
    }
LAB_10b1b67c0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  } while( true );
}



/* Entry: 10b1b6834; end: 10b1b6837;  */

undefined8 * FUN_10b1b6834(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc3568;
  func_0x00010b1257d4(param_1 + 1);
  return param_1;
}



/* Entry: 10b1b6838; end: 10b1b684b;  */

void FUN_10b1b6838(void)

{
  FUN_10b1b392c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1b684c; end: 10b1b7253;  */

uint FUN_10b1b684c(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 ***pppuVar4;
  uint7 uVar5;
  undefined8 **ppuVar6;
  code *pcVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 ***pppuVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  undefined8 ****ppppuVar23;
  undefined8 ***pppuVar24;
  undefined1 auStack_410 [88];
  undefined4 uStack_3b8;
  undefined8 ***pppuStack_3b0;
  undefined8 ***pppuStack_3a8;
  undefined8 ***pppuStack_3a0;
  long lStack_398;
  undefined4 uStack_390;
  long lStack_380;
  undefined8 ***pppuStack_378;
  undefined8 uStack_370;
  undefined8 **ppuStack_368;
  undefined4 uStack_360;
  undefined8 uStack_358;
  long *plStack_350;
  undefined1 uStack_348;
  undefined1 auStack_340 [16];
  undefined1 uStack_330;
  long alStack_328 [10];
  long lStack_2d8;
  long lStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  char cStack_298;
  undefined8 ***pppuStack_290;
  undefined8 ***pppuStack_288;
  undefined8 ***pppuStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [48];
  undefined8 uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined1 auStack_1e0 [48];
  long alStack_1b0 [5];
  byte bStack_188;
  long lStack_180;
  undefined8 **ppuStack_178;
  undefined8 **ppuStack_170;
  undefined8 **ppuStack_168;
  undefined8 **ppuStack_160;
  byte bStack_158;
  undefined8 ***pppuStack_150;
  undefined1 uStack_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined8 ***pppuStack_100;
  char cStack_f8;
  code *pcStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 ***pppuStack_c8;
  ulong uStack_c0;
  undefined8 auStack_b8 [7];
  int iStack_80;
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 5) = 0;
  uStack_358 = 0;
  plVar21 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_348 = 1;
  pppuStack_378 = (undefined8 ****)0x0;
  lStack_380 = 0;
  ppuStack_368 = (undefined8 ***)0x0;
  uStack_370 = 0;
  uStack_360 = 0x3f800000;
  auStack_340[0] = 0;
  uStack_330 = 0;
  plStack_350 = plVar21;
  func_0x00010bccbc98(alStack_328,param_1[3],&UNK_10f738224,0x27);
  lStack_2d8 = *(long *)(alStack_328[0] + 8);
  lStack_2d0 = *(long *)(alStack_328[0] + 0x10);
  if (lStack_2d0 != 0) {
    plVar21 = (long *)(lStack_2d0 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar2) {
        *plVar21 = *plVar21 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10b1fa688(auStack_2c8,*(undefined8 *)(lStack_2d8 + 0x10));
  uStack_208 = uStack_208 & 0xffffffffffffff00;
  uStack_1e8 = 0;
  if (cStack_298 != '\0') {
    uStack_200 = uStack_2b0;
    uStack_208 = uStack_2b8;
    uStack_1f8 = uStack_2a8;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2b8 = 0;
    uStack_1f0 = uStack_2a0;
    uStack_1e8 = 1;
    func_0x00010b1b74d0(&uStack_2b8);
  }
  uStack_210 = uStack_2c0;
  uStack_2c0 = 0;
  func_0x00010b1b7450(auStack_1e0,&uStack_210);
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  func_0x00010b1b7450(auStack_240,&uStack_270);
  pppuStack_288 = (undefined8 ****)0x0;
  pppuStack_280 = (undefined8 ****)0x0;
  pppuStack_290 = (undefined8 ****)0x0;
  FUN_10b1b76dc(&lStack_180,auStack_1e0);
  FUN_10b1b76dc(alStack_1b0,auStack_240);
  pppuStack_150 = &pppuStack_290;
  uStack_148 = 0;
  while ((((bStack_158 & 1) != 0 || ((bStack_188 & 1) != 0)) && (lStack_180 != alStack_1b0[0]))) {
    if ((bStack_158 & 1) == 0) {
      uVar16 = *(undefined8 *)(lStack_180 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_140,lStack_180 + 0x58);
      func_0x000107c27f54(auStack_128,&UNK_10f2e0451,auStack_140);
      func_0x00010bcc7444(uVar16,0x65,auStack_128);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
    }
    pppuVar4 = pppuStack_288;
    ppppuVar10 = (undefined8 ****)pppuStack_290;
    if (pppuStack_288 < pppuStack_280) {
      pppuStack_288[2] = ppuStack_168;
      pppuStack_288[1] = ppuStack_170;
      *pppuStack_288 = ppuStack_178;
      ppuStack_170 = (undefined8 ***)0x0;
      ppuStack_168 = (undefined8 ***)0x0;
      ppuStack_178 = (undefined8 ***)0x0;
      pppuStack_288[3] = ppuStack_160;
      ppppuVar10 = (undefined8 ****)(pppuStack_288 + 4);
    }
    else {
      lVar20 = (long)pppuStack_288 - (long)pppuStack_290;
      lVar22 = lVar20 >> 5;
      uVar19 = lVar22 + 1;
      if (uVar19 >> 0x3b != 0) {
        FUN_10b1b7520();
        goto LAB_10b1b6ff0;
      }
      uVar14 = (long)pppuStack_280 - (long)pppuStack_290 >> 4;
      if (uVar14 <= uVar19) {
        uVar14 = uVar19;
      }
      if (0x7fffffffffffffdf < (ulong)((long)pppuStack_280 - (long)pppuStack_290)) {
        uVar14 = 0x7ffffffffffffff;
      }
      if (uVar14 == 0) {
        lVar9 = 0;
      }
      else {
        if (uVar14 >> 0x3b != 0) {
          func_0x000104bd35f4();
          goto LAB_10b1b6ff0;
        }
        lVar9 = uVar14 << 5;
        __Znwm();
      }
      ppuVar6 = ppuStack_168;
      puVar17 = (undefined8 *)(lVar9 + lVar20);
      puVar17[1] = ppuStack_170;
      *puVar17 = ppuStack_178;
      ppuStack_170 = (undefined8 ***)0x0;
      ppuStack_168 = (undefined8 ***)0x0;
      ppuStack_178 = (undefined8 ***)0x0;
      puVar17[2] = ppuVar6;
      puVar17[3] = ppuStack_160;
      ppppuVar23 = (undefined8 ****)(puVar17 + lVar22 * -4);
      ppppuVar11 = ppppuVar23;
      for (ppppuVar12 = ppppuVar10; ppppuVar12 != (undefined8 ****)pppuVar4;
          ppppuVar12 = ppppuVar12 + 4) {
        pppuVar24 = ppppuVar12[1];
        pppuVar18 = *ppppuVar12;
        ppppuVar11[2] = ppppuVar12[2];
        ppppuVar11[1] = pppuVar24;
        *ppppuVar11 = pppuVar18;
        ppppuVar12[1] = (undefined8 ***)0x0;
        ppppuVar12[2] = (undefined8 ***)0x0;
        *ppppuVar12 = (undefined8 ***)0x0;
        ppppuVar11[3] = ppppuVar12[3];
        ppppuVar11 = ppppuVar11 + 4;
      }
      for (; ppppuVar10 != (undefined8 ****)pppuVar4; ppppuVar10 = ppppuVar10 + 4) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppuVar10);
      }
      ppppuVar10 = (undefined8 ****)(puVar17 + 4);
      pppuStack_280 = (undefined8 ***)(lVar9 + uVar14 * 0x20);
      bVar2 = (undefined8 ****)pppuStack_290 != (undefined8 ****)0x0;
      pppuStack_290 = ppppuVar23;
      if (bVar2) {
        pppuStack_288 = ppppuVar10;
        __ZdlPv();
      }
    }
    pppuStack_288 = ppppuVar10;
    FUN_10b1b7534(&lStack_180);
  }
  uStack_148 = 1;
  FUN_10b1b7654(&pppuStack_150);
  func_0x00010b1b7fb0(alStack_1b0);
  FUN_10b1b7764(&ppuStack_178);
  func_0x00010b1b7fb0(auStack_240);
  func_0x00010b1b8024();
  func_0x00010b1b7fb0(auStack_1e0);
  FUN_10b1b7764(&uStack_208);
  pppuStack_108 = pppuStack_288;
  pppuStack_110 = pppuStack_290;
  pppuStack_100 = pppuStack_280;
  pppuStack_290 = (undefined8 ****)0x0;
  pppuStack_288 = (undefined8 ****)0x0;
  pppuStack_280 = (undefined8 ****)0x0;
  cStack_f8 = '\x01';
  FUN_10b1b7784(&pppuStack_290);
  FUN_10b1b77b8(auStack_2c8);
  FUN_10b1b7824(&lStack_2d8);
  func_0x00010bccbe4c(alStack_328);
  func_0x00010bccbdb4(alStack_328);
  pppuStack_d8 = (undefined8 ***)((ulong)pppuStack_d8 & 0xffffffffffffff00);
  uVar19 = uStack_c0 >> 8;
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  if (cStack_f8 == '\x01') {
    pppuStack_d0 = pppuStack_108;
    pppuStack_d8 = pppuStack_110;
    pppuStack_c8 = pppuStack_100;
    pppuStack_108 = (undefined8 ****)0x0;
    pppuStack_100 = (undefined8 ****)0x0;
    pppuStack_110 = (undefined8 ****)0x0;
    uStack_c0 = CONCAT71((int7)uVar19,1);
  }
  iStack_80 = 0;
  func_0x00010b1b7fdc();
  pppuStack_110 = (undefined8 ***)((ulong)pppuStack_110 & 0xffffffffffffff00);
  cStack_f8 = 0;
  uVar5 = lStack_398._1_7_;
  if (iStack_80 == 0) {
    pppuStack_3b0 = (undefined8 ***)((ulong)pppuStack_3b0._1_7_ << 8);
    lStack_398 = (ulong)lStack_398._1_7_ << 8;
    if ((char)uStack_c0 == '\x01') {
      pppuStack_3a8 = pppuStack_d0;
      pppuStack_3b0 = pppuStack_d8;
      pppuStack_3a0 = pppuStack_c8;
      pppuStack_d0 = (undefined8 ****)0x0;
      pppuStack_c8 = (undefined8 ****)0x0;
      pppuStack_d8 = (undefined8 ****)0x0;
      lStack_398 = CONCAT71(uVar5,1);
    }
  }
  else {
    if (iStack_80 != 1) goto LAB_10b1b6fec;
    pppuStack_3b0 = (undefined8 ***)((ulong)pppuStack_3b0._1_7_ << 8);
    lStack_398 = (ulong)lStack_398._1_7_ << 8;
  }
  func_0x00010b1b7fdc();
  func_0x00010b1b800c();
  FUN_10b1b78d0(auStack_340);
  pppuVar4 = pppuStack_3a8;
  ppppuVar10 = (undefined8 ****)pppuStack_3b0;
  if ((char)lStack_398 == '\x01') {
    for (; ppppuVar10 != (undefined8 ****)pppuVar4; ppppuVar10 = ppppuVar10 + 4) {
      pppuVar18 = ppppuVar10[3];
      plVar21 = &lStack_380;
      FUN_10b1b7254(plVar21,ppppuVar10);
      *plVar21 = (long)pppuVar18 * 1000;
    }
  }
  ppppuVar10 = &pppuStack_3b0;
  FUN_10b1b784c();
  uVar15 = 0;
  pppuStack_3a8 = (undefined8 ****)0x0;
  pppuStack_3b0 = (undefined8 ***)0x0;
  lStack_398 = 0;
  pppuStack_3a0 = (undefined8 ****)0x0;
  uStack_390 = 0x3f800000;
  lVar20 = *param_1;
  lVar22 = param_1[1];
  while ((pppuVar4 = pppuStack_378, lVar20 != lVar22 && ((*(byte *)(param_1 + 5) & 1) == 0))) {
    if ((*(byte *)(*(long *)(lVar20 + 0x40) + 8) & 1) == 0) {
      uVar19 = *(ulong *)(lVar20 + 0x28);
      if (uVar19 == 0) {
LAB_10b1b6de0:
        puVar17 = (undefined8 *)(lVar20 + 0x38);
        ppppuVar12 = (undefined8 ****)(param_1 + 4);
        (*(code *)*puVar17)(ppppuVar12,puVar17);
        ppppuVar11 = ppppuVar12;
        __ZNSt3__16chrono12system_clock3nowEv();
        ppppuVar10 = ppppuVar11;
        func_0x00010b1b8018();
        uVar15 = uVar15 | (uint)ppppuVar12;
        *ppppuVar10 = ppppuVar11;
        if (*(char *)(lVar20 + 0x30) == '\x01') {
          pppuStack_c8 = (undefined8 ****)0x0;
          pppuStack_d0 = (undefined8 ****)0x0;
          auStack_b8[0] = 0;
          uStack_c0 = 0;
          pcStack_e0 = FUN_10b1b7ec0;
          pppuStack_d8 = (undefined8 ***)&PTR_DAT_110873830;
          *puVar17 = FUN_10b1b7ec0;
          func_0x000107c2816c((long *)(lVar20 + 0x40),&pppuStack_d8);
          ppppuVar10 = &pppuStack_d8;
          (*(code *)*pppuStack_d8)();
        }
      }
      else {
        ppppuVar12 = ppppuVar10;
        if (((undefined8 ****)pppuStack_378 != (undefined8 ****)0x0) &&
           ((undefined8 ***)ppuStack_368 != (undefined8 ***)0x0)) {
          ppppuVar11 = (undefined8 ****)&ppuStack_368;
          func_0x000107c278c4(ppppuVar11,lVar20);
          uVar14 = (long)pppuVar4 - 1;
          if (((ulong)pppuVar4 & uVar14) == 0) {
            ppppuVar23 = (undefined8 ****)((ulong)ppppuVar11 & uVar14);
          }
          else {
            ppppuVar23 = ppppuVar11;
            if (pppuVar4 <= ppppuVar11) {
              uVar3 = 0;
              if ((undefined8 ****)pppuVar4 != (undefined8 ****)0x0) {
                uVar3 = (ulong)ppppuVar11 / (ulong)pppuVar4;
              }
              ppppuVar23 = (undefined8 ****)((long)ppppuVar11 - uVar3 * (long)pppuVar4);
            }
          }
          plVar21 = *(long **)(lStack_380 + (long)ppppuVar23 * 8);
          ppppuVar10 = ppppuVar11;
          ppppuVar12 = ppppuVar11;
          if (plVar21 != (long *)0x0) {
            do {
              while( true ) {
                plVar21 = (long *)*plVar21;
                ppppuVar12 = ppppuVar10;
                if (plVar21 == (long *)0x0) goto LAB_10b1b6da0;
                ppppuVar13 = (undefined8 ****)plVar21[1];
                if (ppppuVar13 != ppppuVar11) break;
                ppppuVar10 = (undefined8 ****)(plVar21 + 2);
                func_0x000107c278d0(ppppuVar10,lVar20);
                if (((ulong)ppppuVar10 & 1) != 0) {
                  lVar9 = plVar21[5];
                  __ZNSt3__16chrono12system_clock3nowEv();
                  if (ppppuVar10 < (undefined8 ****)(lVar9 + uVar19 * 1000)) goto LAB_10b1b6e5c;
                  goto LAB_10b1b6de0;
                }
              }
              if (((ulong)pppuVar4 & uVar14) == 0) {
                ppppuVar13 = (undefined8 ****)((ulong)ppppuVar13 & uVar14);
              }
              else if (pppuVar4 <= ppppuVar13) {
                uVar3 = 0;
                if ((undefined8 ****)pppuVar4 != (undefined8 ****)0x0) {
                  uVar3 = (ulong)ppppuVar13 / (ulong)pppuVar4;
                }
                ppppuVar13 = (undefined8 ****)((long)ppppuVar13 - uVar3 * (long)pppuVar4);
              }
            } while (ppppuVar13 == ppppuVar23);
          }
        }
LAB_10b1b6da0:
        __ZNSt3__16chrono12system_clock3nowEv();
        ppppuVar10 = ppppuVar12;
        func_0x00010b1b8018();
        *ppppuVar10 = ppppuVar12 + (uVar19 >> 1) * -0x7d;
      }
    }
LAB_10b1b6e5c:
    lVar20 = lVar20 + 0x68;
  }
  if (lStack_398 != 0) {
    pppuStack_150 = &pppuStack_3b0;
    pppuStack_110 = (undefined8 ***)FUN_10b1b7ed0;
    pppuStack_108 = (undefined8 ***)&PTR_FUN_110cc35b8;
    pppuStack_100 = &pppuStack_150;
    func_0x00010bccc554(param_1[3],&pppuStack_110,&UNK_10f731902,0x14);
    func_0x00010b1b7fcc();
    uStack_3b8 = 0;
    FUN_10b1b78f0(&pcStack_e0,auStack_410);
    uStack_3b8 = 0xffffffff;
  }
  lVar20 = param_1[4];
  FUN_10b126f8c(&pcStack_e0,0x10005);
  func_0x00010b1b8030(auStack_b8);
  func_0x00010b1b7ff4();
  puVar17 = &uStack_358;
  func_0x000107c28148(puVar17);
  FUN_10b1135dc(lVar20,0x90,auStack_340,puVar17);
  func_0x00010b1b7fec();
  lVar20 = 0x38;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev((long)&pcStack_e0 + lVar20)
    ;
    lVar20 = lVar20 + -0x28;
  } while (lVar20 != -0x18);
  lVar20 = param_1[4];
  func_0x00010b1b8030(&pcStack_e0);
  func_0x00010b123d80(auStack_b8,&DAT_10f2d063e,9,uVar15 & 1);
  func_0x00010b1b7ff4();
  FUN_10b114b00(lVar20,0x91,auStack_340,1);
  func_0x00010b1b7fec();
  lVar20 = 0x38;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev((long)&pcStack_e0 + lVar20)
    ;
    lVar20 = lVar20 + -0x28;
    uVar8 = lVar20 == -0x18;
  } while (!(bool)uVar8);
  FUN_10b1b78fc(&pppuStack_3b0);
  FUN_10b1b78fc(&lStack_380);
  func_0x00010b1b8038(uStack_78);
  if ((bool)uVar8) {
    return (uVar15 ^ 0xffffffff) & 1;
  }
  ___stack_chk_fail();
LAB_10b1b6fec:
  func_0x00010563ab98();
LAB_10b1b6ff0:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10b1b6ff4);
  (*pcVar7)();
}



/* Entry: 10b1b7254; end: 10b1b7287;  */

long FUN_10b1b7254(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10b1b7998(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 10b1b7288; end: 10b1b744f;  */

/* WARNING: Removing unreachable block (ram,0x00010b1b742c) */
/* WARNING: Removing unreachable block (ram,0x00010b1b7430) */
/* WARNING: Removing unreachable block (ram,0x00010b1b7434) */

void FUN_10b1b7288(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [40];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *param_1;
  func_0x00010b1b8030(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_f0,param_4);
  puStack_98 = &UNK_10f7318e9;
  uStack_90 = 0xb;
  uStack_80 = uStack_e8;
  uStack_88 = uStack_f0;
  uStack_78 = uStack_e0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  FUN_10b205c38(&uStack_108,param_2);
  puStack_70 = &UNK_10f7318f5;
  uStack_68 = 0xc;
  uStack_58 = uStack_100;
  uStack_60 = uStack_108;
  uStack_50 = uStack_f8;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  func_0x00010b120648(auStack_d8,auStack_c0,3);
  puVar4 = (undefined8 *)0x8f;
  FUN_10b114b00(uVar5,0x8f,auStack_d8,1);
  FUN_10b120998(auStack_d8);
  lVar6 = 0x60;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0 + lVar6);
    lVar6 = lVar6 + -0x28;
    uVar2 = lVar6 == -0x18;
  } while (!(bool)uVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_108);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_f0);
  func_0x00010b1b8038(uStack_48);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    FUN_10b120998(auStack_d8);
    puVar3 = &uStack_60;
    lVar6 = -0x78;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
      puVar3 = puVar3 + -5;
      lVar6 = lVar6 + 0x28;
    } while (lVar6 != 0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_108);
    puVar3 = &uStack_f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b1b7fc4();
    if ((*(byte *)(puVar4 + 5) & 1) == 0) {
      *puVar3 = *puVar4;
      *(undefined1 *)(puVar3 + 1) = 0;
      *(undefined1 *)(puVar3 + 5) = 0;
    }
    else {
      uVar8 = puVar4[2];
      uVar7 = puVar4[1];
      uVar5 = puVar4[3];
      uVar1 = puVar4[4];
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[1] = 0;
      *puVar3 = *puVar4;
      puVar3[2] = uVar8;
      puVar3[1] = uVar7;
      puVar3[3] = uVar5;
      puVar3[4] = uVar1;
      *(undefined1 *)(puVar3 + 5) = 1;
    }
    func_0x00010b1b7fb0();
    return;
  }
  return;
}



/* Entry: 10b1b7450; end: 10b1b74f3;  */

void FUN_10b1b7450(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    uVar4 = param_2[2];
    uVar3 = param_2[1];
    uVar1 = param_2[3];
    uVar2 = param_2[4];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
    *param_1 = *param_2;
    param_1[2] = uVar4;
    param_1[1] = uVar3;
    param_1[3] = uVar1;
    param_1[4] = uVar2;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  func_0x00010b1b7fb0();
  return;
}



/* Entry: 10b1b74f4; end: 10b1b751f;  */

long FUN_10b1b74f4(long param_1,long param_2)

{
  func_0x000107c27b9c();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



/* Entry: 10b1b7520; end: 10b1b7533;  */

void FUN_10b1b7520(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_50 [32];
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar3 = *plVar2;
  if ((lVar3 != 0) && (func_0x000107c3141c(), (int)lVar3 != 0)) {
    FUN_10b1b7608(auStack_50,*plVar2);
    FUN_10b1b75ac(plVar2 + 1,auStack_50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
    return;
  }
  plVar1 = plVar2 + 1;
  if ((char)plVar2[5] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(plVar1 + 4) = 0;
  }
  return;
}



/* Entry: 10b1b7534; end: 10b1b75ab;  */

void FUN_10b1b7534(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_40 [32];
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (func_0x000107c3141c(), (int)lVar2 != 0)) {
    FUN_10b1b7608(auStack_40,*param_1);
    FUN_10b1b75ac(param_1 + 1,auStack_40);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_40);
    return;
  }
  plVar1 = param_1 + 1;
  if ((char)param_1[5] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(plVar1 + 4) = 0;
  }
  return;
}



/* Entry: 10b1b75ac; end: 10b1b7607;  */

undefined8 * FUN_10b1b75ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 4) == '\x01') {
    FUN_10b1b74f4(param_1);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    param_1[3] = param_2[3];
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return param_1;
}



/* Entry: 10b1b7608; end: 10b1b7653;  */

void FUN_10b1b7608(long param_1,undefined8 param_2)

{
  func_0x000107c313f8();
  func_0x000107c313dc(param_1);
  func_0x000107c313d8(param_2,1);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



/* Entry: 10b1b7654; end: 10b1b767f;  */

long FUN_10b1b7654(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10b1b7680(param_1);
  }
  return param_1;
}



/* Entry: 10b1b7680; end: 10b1b76db;  */

void FUN_10b1b7680(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0x20;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10b1b76dc; end: 10b1b773f;  */

undefined8 * FUN_10b1b76dc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_10b1b7740(param_1 + 1,param_2 + 1);
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return param_1;
}



/* Entry: 10b1b7740; end: 10b1b7763;  */

void FUN_10b1b7740(long param_1,long param_2)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 10b1b7764; end: 10b1b7783;  */

void FUN_10b1b7764(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10b1b7784; end: 10b1b77b7;  */

undefined8 FUN_10b1b7784(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10b1b7680(&uStack_28);
  return param_1;
}



/* Entry: 10b1b77b8; end: 10b1b7823;  */

undefined8 * FUN_10b1b77b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 6) != '\0') {
    func_0x00010b1b74d0(param_1 + 2);
  }
  FUN_10b1b7764((ulong)&uStack_50 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_10b1b7764(param_1 + 2);
  return param_1;
}



/* Entry: 10b1b7824; end: 10b1b784b;  */

long FUN_10b1b7824(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b1b784c; end: 10b1b786b;  */

void FUN_10b1b784c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b1b7784();
  }
  return;
}



/* Entry: 10b1b786c; end: 10b1b78bf;  */

void FUN_10b1b786c(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x58) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110cc3598)[*(uint *)(param_1 + 0x58)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  return;
}



/* Entry: 10b1b78c0; end: 10b1b78cf;  */

void FUN_10b1b78c0(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10b1b7784();
  }
  return;
}



/* Entry: 10b1b78d0; end: 10b1b78ef;  */

void FUN_10b1b78d0(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000107c2798c();
  }
  return;
}



/* Entry: 10b1b78f0; end: 10b1b78fb;  */

void FUN_10b1b78f0(void)

{
  return;
}



/* Entry: 10b1b78fc; end: 10b1b797f;  */

long FUN_10b1b78fc(long param_1)

{
  func_0x00010b1b7924(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10b1b7980(param_1,0);
  return param_1;
}



/* Entry: 10b1b7980; end: 10b1b7997;  */

void FUN_10b1b7980(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1b7998; end: 10b1b7bd3;  */

undefined1  [16]
FUN_10b1b7998(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x27;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *aplStack_78 [3];
  
  plVar5 = param_1 + 3;
  func_0x000107c278c4();
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      unaff_x27 = (long *)(uVar8 & (ulong)plVar5);
    }
    else {
      unaff_x27 = plVar5;
      if (plVar7 <= plVar5) {
        uVar4 = 0;
        if (plVar7 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x27 = (long *)((long)plVar5 - uVar4 * (long)plVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)unaff_x27 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_10b1b7a68;
          plVar2 = (long *)plVar6[1];
          if (plVar2 != plVar5) break;
          plVar2 = plVar6 + 2;
          func_0x000107c278d0(plVar2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10b1b7ba0;
          }
        }
        if (((ulong)plVar7 & uVar8) == 0) {
          plVar2 = (long *)((ulong)plVar2 & uVar8);
        }
        else if (plVar7 <= plVar2) {
          uVar4 = 0;
          if (plVar7 != (long *)0x0) {
            uVar4 = (ulong)plVar2 / (ulong)plVar7;
          }
          plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar7);
        }
      } while (plVar2 == unaff_x27);
    }
  }
LAB_10b1b7a68:
  FUN_10b1b7bd4(aplStack_78,param_1,plVar5,param_3,param_4,param_5);
  if ((plVar7 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar7 < (float)(param_1[3] + 1))
     ) {
    uVar8 = 1;
    if ((long *)0x2 < plVar7) {
      uVar8 = (ulong)(((ulong)plVar7 & (long)plVar7 - 1U) != 0);
    }
    uVar8 = uVar8 | (long)plVar7 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    FUN_10b1b7c48(param_1,uVar8);
    plVar7 = (long *)param_1[1];
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar7 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x27 = plVar5;
      if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x27 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
    }
  }
  plVar6 = aplStack_78[0];
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x27 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
    *(long **)(lVar3 + (long)unaff_x27 * 8) = plVar5;
    if (*aplStack_78[0] != 0) {
      plVar5 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar7 - 1U);
      }
      else if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
      *(long **)(lVar3 + (long)plVar5 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
  }
  aplStack_78[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10b1b7e40(aplStack_78);
  uVar1 = 1;
LAB_10b1b7ba0:
  auVar9._8_8_ = uVar1;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 10b1b7bd4; end: 10b1b7c2f;  */

void FUN_10b1b7bd4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10b1b7c30(puVar1 + 2,*param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10b1b7c30; end: 10b1b7c47;  */

void FUN_10b1b7c30(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10b1b7c48; end: 10b1b7d0f;  */

void FUN_10b1b7c48(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_10b1b7c90;
    }
    return;
  }
LAB_10b1b7c90:
  if (param_2 == 0) {
    FUN_10b1b7e0c(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_10b1b7e24(plVar2);
    FUN_10b1b7e0c(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b1b7d10; end: 10b1b7e0b;  */

void FUN_10b1b7d10(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10b1b7e0c(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10b1b7e24(plVar3);
    FUN_10b1b7e0c(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b1b7e0c; end: 10b1b7e23;  */

void FUN_10b1b7e0c(long *param_1,long param_2)

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



/* Entry: 10b1b7e24; end: 10b1b7e3f;  */

long FUN_10b1b7e24(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_10b1b7e64();
  return param_1;
}



/* Entry: 10b1b7e40; end: 10b1b7e63;  */

undefined8 FUN_10b1b7e40(undefined8 param_1)

{
  FUN_10b1b7e64(param_1,0);
  return param_1;
}



/* Entry: 10b1b7e64; end: 10b1b7e7b;  */

void FUN_10b1b7e64(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10b1b7e7c; end: 10b1b7ebf;  */

void FUN_10b1b7e7c(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b1b7ec0; end: 10b1b7ecf;  */

void FUN_10b1b7ec0(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar4 = param_2;
  func_0x000105277f8c();
  plVar5 = *(long **)(lVar4 + 0x10);
  lVar4 = *(long *)(param_2 + 8);
  lStack_68 = *(long *)(param_2 + 0x10);
  if (lStack_68 != 0) {
    plVar1 = (long *)(lStack_68 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)(*plVar5 + 0x10);
  lStack_70 = lVar4;
  while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
    uVar6 = *(undefined8 *)(lVar4 + 0x10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_60,plVar5 + 2);
    lStack_48 = plVar5[5] / 1000;
    FUN_10b1fd004(uVar6,auStack_60);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  }
  FUN_10b1b7824(&lStack_70);
  return;
}



/* Entry: 10b1b7ed0; end: 10b1b7f8b;  */

void FUN_10b1b7ed0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  plVar5 = *(long **)(param_2 + 0x10);
  lVar2 = *(long *)(param_1 + 8);
  lStack_58 = *(long *)(param_1 + 0x10);
  if (lStack_58 != 0) {
    plVar1 = (long *)(lStack_58 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar5 = (long *)(*plVar5 + 0x10);
  lStack_60 = lVar2;
  while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
    uVar6 = *(undefined8 *)(lVar2 + 0x10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_50,plVar5 + 2);
    lStack_38 = plVar5[5] / 1000;
    FUN_10b1fd004(uVar6,auStack_50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  }
  FUN_10b1b7824(&lStack_60);
  return;
}



/* Entry: 10b1b7f8c; end: 10b1b804b;  */

void FUN_10b1b7f8c(void)

{
  return;
}



/* Entry: 10b1b804c; end: 10b1b86cf;  */

/* WARNING: Possible PIC construction at 0x00010b1b84cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b1b8530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b1b84d0) */
/* WARNING: Removing unreachable block (ram,0x00010b1b84e8) */
/* WARNING: Removing unreachable block (ram,0x00010b1b852c) */
/* WARNING: Removing unreachable block (ram,0x00010b1b84f0) */
/* WARNING: Removing unreachable block (ram,0x00010b1b84fc) */
/* WARNING: Removing unreachable block (ram,0x00010b1b8524) */
/* WARNING: Removing unreachable block (ram,0x00010b1b8534) */

undefined8 *** FUN_10b1b804c(undefined8 ***param_1,undefined8 ***param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 ***pppuVar4;
  char *pcVar5;
  long **pplVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  long **pplStack_238;
  long **pplStack_230;
  long **pplStack_228;
  undefined1 *puStack_220;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  long **pplStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  char cStack_170;
  char cStack_168;
  undefined8 **ppuStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  long *plStack_138;
  long *plStack_130;
  undefined8 uStack_120;
  long **pplStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 **ppuStack_d0;
  char *pcStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_80 [40];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_120 = 0;
  pppuVar4 = param_2;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_110 = 1;
  ppuVar1 = &PTR_PTR_113405540;
  if ((undefined **)(*param_2)[0xd] != (undefined **)0x0) {
    ppuVar1 = (undefined **)(*param_2)[0xd];
  }
  puVar9 = (undefined8 *)((ulong)ppuVar1[2] & 0xfffffffffffffffc);
  lVar7 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar7 < 0) {
    lVar7 = puVar9[1];
    puVar9 = (undefined8 *)*puVar9;
  }
  pplStack_118 = (long **)pppuVar4;
  func_0x000107c28004(&plStack_138,puVar9,(long)puVar9 + lVar7);
  if (plStack_138 == plStack_130) {
    *param_1 = (undefined8 **)0x0;
    param_1[1] = (undefined8 **)0x0;
    ppuStack_d0 = (undefined8 **)0x0;
    pcStack_c8 = (char *)0x0;
    *(undefined1 *)(param_1 + 8) = 1;
    func_0x000107c27d78(&ppuStack_d0);
  }
  else {
    FUN_10b13a07c(&ppuStack_d0,1);
    ppuVar10 = param_2[3];
    ppuVar14 = param_2[3];
    ppuVar13 = param_2[2];
    puStack_c0[2] = 0;
    *puStack_c0 = &PTR_FUN_110cbdf00;
    puStack_c0[1] = 0;
    if (ppuVar10 != (undefined8 **)0x0) {
      ppuVar10 = ppuVar10 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar3) {
          *ppuVar10 = (undefined8 *)((long)*ppuVar10 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_c0[4] = 0;
    puStack_c0[5] = 0;
    puStack_c0[3] = &PTR_FUN_110cc5e08;
    puStack_c0[7] = ppuVar14;
    puStack_c0[6] = ppuVar13;
    plStack_1a8 = (long *)0x0;
    uStack_1a0 = 0;
    func_0x000107c27d78(&plStack_1a8);
    puStack_148 = puStack_c0;
    puStack_c0 = (undefined8 *)0x0;
    puStack_150 = puStack_148 + 3;
    func_0x00010b13a0f4(&ppuStack_d0);
    pcVar5 = (char *)0xa0;
    __Znwm();
    plVar8 = (long *)(pcVar5 + 8);
    *plVar8 = 0;
    pcVar5[0x10] = '\0';
    pcVar5[0x11] = '\0';
    pcVar5[0x12] = '\0';
    pcVar5[0x13] = '\0';
    pcVar5[0x14] = '\0';
    pcVar5[0x15] = '\0';
    pcVar5[0x16] = '\0';
    pcVar5[0x17] = '\0';
    *(undefined ***)pcVar5 = &PTR_FUN_110cc35e0;
    pcVar5[0x40] = '\0';
    pcVar5[0x41] = '\0';
    pcVar5[0x42] = '\0';
    pcVar5[0x43] = '\0';
    pcVar5[0x44] = '\0';
    pcVar5[0x45] = '\0';
    pcVar5[0x46] = '\0';
    pcVar5[0x47] = '\0';
    pcVar5[0x38] = '\0';
    pcVar5[0x39] = '\0';
    pcVar5[0x3a] = '\0';
    pcVar5[0x3b] = '\0';
    pcVar5[0x3c] = '\0';
    pcVar5[0x3d] = '\0';
    pcVar5[0x3e] = '\0';
    pcVar5[0x3f] = '\0';
    pcVar5[0x50] = '\0';
    pcVar5[0x51] = '\0';
    pcVar5[0x52] = '\0';
    pcVar5[0x53] = '\0';
    pcVar5[0x54] = '\0';
    pcVar5[0x55] = '\0';
    pcVar5[0x56] = '\0';
    pcVar5[0x57] = '\0';
    pcVar5[0x48] = '\0';
    pcVar5[0x49] = '\0';
    pcVar5[0x4a] = '\0';
    pcVar5[0x4b] = '\0';
    pcVar5[0x4c] = '\0';
    pcVar5[0x4d] = '\0';
    pcVar5[0x4e] = '\0';
    pcVar5[0x4f] = '\0';
    pcVar5[0x58] = '\0';
    pcVar5[0x59] = '\0';
    pcVar5[0x5a] = '\0';
    pcVar5[0x5b] = '\0';
    pcVar5[0x5c] = '\0';
    pcVar5[0x5d] = '\0';
    pcVar5[0x5e] = '\0';
    pcVar5[0x5f] = '\0';
    ppuStack_160 = (undefined8 **)(pcVar5 + 0x18);
    *ppuStack_160 = &PTR_FUN_110cc5e68;
    pcVar5[0x28] = '\0';
    pcVar5[0x29] = '\0';
    pcVar5[0x2a] = '\0';
    pcVar5[0x2b] = '\0';
    pcVar5[0x2c] = '\0';
    pcVar5[0x2d] = '\0';
    pcVar5[0x2e] = '\0';
    pcVar5[0x2f] = '\0';
    pcVar5[0x30] = '\0';
    pcVar5[0x31] = '\0';
    pcVar5[0x32] = '\0';
    pcVar5[0x33] = '\0';
    pcVar5[0x34] = '\0';
    pcVar5[0x35] = '\0';
    pcVar5[0x36] = '\0';
    pcVar5[0x37] = '\0';
    pcVar5[0x20] = '\0';
    pcVar5[0x21] = '\0';
    pcVar5[0x22] = '\0';
    pcVar5[0x23] = '\0';
    pcVar5[0x24] = '\0';
    pcVar5[0x25] = '\0';
    pcVar5[0x26] = '\0';
    pcVar5[0x27] = '\0';
    pcVar5[0x38] = '\0';
    pcVar5[0x39] = '\0';
    pcVar5[0x40] = '\0';
    pcVar5[0x41] = '\0';
    pcVar5[0x42] = '\0';
    pcVar5[0x43] = '\0';
    pcVar5[0x44] = '\0';
    pcVar5[0x45] = '\0';
    pcVar5[0x46] = '\0';
    pcVar5[0x47] = '\0';
    pcVar5[0x48] = '\0';
    pcVar5[0x49] = '\0';
    pcVar5[0x4a] = '\0';
    pcVar5[0x4b] = '\0';
    pcVar5[0x4c] = '\0';
    pcVar5[0x4d] = '\0';
    pcVar5[0x4e] = '\0';
    pcVar5[0x4f] = '\0';
    pcVar5[0x50] = '\0';
    pcVar5[0x51] = '\0';
    pcVar5[0x52] = '\0';
    pcVar5[0x53] = '\0';
    pcVar5[0x54] = '\0';
    pcVar5[0x55] = '\0';
    pcVar5[0x56] = '\0';
    pcVar5[0x57] = '\0';
    pcVar5[0x58] = '\0';
    pcVar5[0x60] = -0x59;
    pcVar5[0x61] = -0x55;
    pcVar5[0x62] = -0x56;
    pcVar5[99] = '2';
    pcVar5[100] = '\0';
    pcVar5[0x65] = '\0';
    pcVar5[0x66] = '\0';
    pcVar5[0x67] = '\0';
    pcVar5[0x98] = '\0';
    pcVar5[0x99] = '\0';
    pcVar5[0x9a] = '\0';
    pcVar5[0x9b] = '\0';
    pcVar5[0x9c] = '\0';
    pcVar5[0x9d] = '\0';
    pcVar5[0x9e] = '\0';
    pcVar5[0x9f] = '\0';
    pcVar5[0x90] = '\0';
    pcVar5[0x91] = '\0';
    pcVar5[0x92] = '\0';
    pcVar5[0x93] = '\0';
    pcVar5[0x94] = '\0';
    pcVar5[0x95] = '\0';
    pcVar5[0x96] = '\0';
    pcVar5[0x97] = '\0';
    pcVar5[0x88] = '\0';
    pcVar5[0x89] = '\0';
    pcVar5[0x8a] = '\0';
    pcVar5[0x8b] = '\0';
    pcVar5[0x8c] = '\0';
    pcVar5[0x8d] = '\0';
    pcVar5[0x8e] = '\0';
    pcVar5[0x8f] = '\0';
    pcVar5[0x80] = '\0';
    pcVar5[0x81] = '\0';
    pcVar5[0x82] = '\0';
    pcVar5[0x83] = '\0';
    pcVar5[0x84] = '\0';
    pcVar5[0x85] = '\0';
    pcVar5[0x86] = '\0';
    pcVar5[0x87] = '\0';
    pcVar5[0x78] = '\0';
    pcVar5[0x79] = '\0';
    pcVar5[0x7a] = '\0';
    pcVar5[0x7b] = '\0';
    pcVar5[0x7c] = '\0';
    pcVar5[0x7d] = '\0';
    pcVar5[0x7e] = '\0';
    pcVar5[0x7f] = '\0';
    pcVar5[0x70] = '\0';
    pcVar5[0x71] = '\0';
    pcVar5[0x72] = '\0';
    pcVar5[0x73] = '\0';
    pcVar5[0x74] = '\0';
    pcVar5[0x75] = '\0';
    pcVar5[0x76] = '\0';
    pcVar5[0x77] = '\0';
    pcVar5[0x68] = '\0';
    pcVar5[0x69] = '\0';
    pcVar5[0x6a] = '\0';
    pcVar5[0x6b] = '\0';
    pcVar5[0x6c] = '\0';
    pcVar5[0x6d] = '\0';
    pcVar5[0x6e] = '\0';
    pcVar5[0x6f] = '\0';
    plVar11 = *param_2[4];
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_e8 = puStack_148;
    puStack_f0 = puStack_150;
    if (puStack_148 != (undefined8 *)0x0) {
      plVar8 = puStack_148 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_158 = pcVar5;
    ppuStack_d0 = ppuStack_160;
    pcStack_c8 = pcVar5;
    (**(code **)(*plVar11 + 0x10))
              (&plStack_1a8,plVar11,&ppuStack_d0,&puStack_f0,&plStack_138,
               *(undefined4 *)(param_2[1] + 3));
    FUN_10b0f7ec4(&puStack_f0);
    FUN_10b0fb81c(&ppuStack_d0);
    plStack_1d8 = (long *)param_2[1];
    plStack_1e0 = (long *)*param_2;
    plStack_1c8 = (long *)param_2[3];
    plStack_1d0 = (long *)param_2[2];
    if (param_2[3] != (undefined8 **)0x0) {
      ppuVar10 = param_2[3] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar3) {
          *ppuVar10 = (undefined8 *)((long)*ppuVar10 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_1b8 = (long *)param_2[5];
    plStack_1c0 = (long *)param_2[4];
    puVar9 = &uStack_120;
    func_0x000107c28148(puVar9);
    FUN_10b12983c(&ppuStack_d0,*(undefined4 *)(plStack_1d8 + 3));
    func_0x00010b12aca4(&uStack_a8,*(undefined4 *)(plStack_1d8 + 10));
    func_0x00010b126fec(auStack_80,0);
    func_0x00010b120648(&puStack_f0,&ppuStack_d0,3);
    lVar7 = 0x60;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((long)&ppuStack_d0 + lVar7);
      lVar7 = lVar7 + -0x28;
    } while (lVar7 != -0x18);
    if (cStack_168 == '\x01') {
      pcVar5 = "success";
      FUN_10b1b878c(&puStack_f0,"success","no");
      pplVar6 = &plStack_1a8;
      func_0x000107c27e5c();
      puStack_c0 = puStack_190;
      puStack_b8 = (undefined8 *)0x0;
      ppuStack_d0 = pplVar6;
      pcStack_c8 = pcVar5;
      func_0x000107c2793c(&UNK_10f2e0482);
      func_0x000107c3173c(&uStack_108);
      func_0x00010b1b87c0(&puStack_f0,"error",&uStack_108);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_108);
    }
    else {
      func_0x00010b1b87f4(&puStack_f0,"success","yes");
    }
    FUN_10b114b00(plStack_1b8,0x5c,&puStack_f0,1);
    plVar8 = plStack_1b8;
    FUN_10b12983c(&ppuStack_d0,*(undefined4 *)(plStack_1d8 + 3));
    func_0x00010b120648(&uStack_108,&ppuStack_d0,1);
    FUN_10b1135dc(plVar8,0x5c,&uStack_108,puVar9);
    FUN_10b120998(&uStack_108);
    param_2 = &ppuStack_d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_c0);
    FUN_10b120998(&puStack_f0);
    func_0x000107c27d78(&plStack_1d0);
    ppuVar10 = ppuStack_160;
    puVar9 = puStack_198;
    if (cStack_168 != '\x01') {
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      __ZNSt3__15mutex4lockEv(ppuStack_160 + 9);
      param_2 = (undefined8 ***)ppuVar10[1];
      puStack_208 = ppuVar10[3];
      puStack_210 = ppuVar10[2];
      ppuVar10[2] = (long *)0x0;
      ppuVar10[3] = (long *)0x0;
      ppuVar10[1] = (long *)0x0;
      puStack_e8 = (undefined8 *)0x0;
      uStack_e0 = 0;
      puStack_f0 = (undefined8 *)0x0;
      pcStack_c8 = (char *)0x0;
      puStack_c0 = (undefined8 *)0x0;
      ppuStack_d0 = (undefined8 **)0x0;
      pppuVar4 = &ppuStack_d0;
      uVar12 = 0x10b1b84d0;
      pplStack_1f8 = (long **)param_2;
      puStack_1f0 = puStack_210;
      puStack_1e8 = puStack_208;
      goto FUN_10b1b86d0;
    }
    pcStack_c8 = (char *)uStack_1a0;
    ppuStack_d0 = (undefined8 **)plStack_1a8;
    plStack_1a8 = (long *)0x0;
    uStack_1a0 = 0;
    puStack_198 = (undefined8 *)0x0;
    puStack_c0 = puVar9;
    puStack_b8 = puStack_190;
    uStack_b0 = uStack_b0 & 0xffffffffffffff00;
    uStack_98 = cStack_170 == '\x01';
    if ((bool)uStack_98) {
      uStack_a8 = uStack_180;
      uStack_b0 = uStack_188;
      uStack_a0 = uStack_178;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_188 = 0;
    }
    func_0x00010880bd54(param_1,&ppuStack_d0);
    func_0x0001052a03ac(&ppuStack_d0);
    func_0x0001052a038c(&plStack_1a8);
    FUN_10b1b8af8(&ppuStack_160);
    FUN_10b13a104(&puStack_150);
  }
  param_1 = (undefined8 ***)&plStack_138;
  func_0x000107c27914();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107c27914(&uStack_108);
  func_0x0001052a038c(&plStack_1a8);
  FUN_10b1b8af8(&ppuStack_160);
  FUN_10b13a104(&puStack_150);
  pppuVar4 = (undefined8 ***)&plStack_138;
  func_0x000107c27914();
  uVar12 = 0x10b1b86d0;
  func_0x00010b1b8ba8();
FUN_10b1b86d0:
  pplStack_238 = (long **)pppuVar4;
  pplStack_230 = (long **)param_2;
  pplStack_228 = (long **)param_1;
  puStack_220 = &stack0xfffffffffffffff0;
  uStack_218 = uVar12;
  func_0x00010b1b8704(&pplStack_238);
  return pppuVar4;
}



/* Entry: 10b1b86d0; end: 10b1b873f;  */

undefined8 FUN_10b1b86d0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010b1b8704(&uStack_28);
  return param_1;
}



/* Entry: 10b1b8740; end: 10b1b8747;  */

void FUN_10b1b8740(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x20) {
    func_0x000107c27d78(lVar2 + -0x10);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10b1b8748; end: 10b1b878b;  */

void FUN_10b1b8748(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x20) {
    func_0x000107c27d78(lVar1 + -0x10);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10b1b878c; end: 10b1b8827;  */

long FUN_10b1b878c(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1b8bc0();
  if ((bool)in_CY) {
    FUN_10b1b8858();
  }
  else {
    FUN_10b1b8828();
    param_1 = unaff_x20 + 0x28;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x28;
}



/* Entry: 10b1b8828; end: 10b1b8857;  */

void FUN_10b1b8828(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10b1b88a4(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x28;
  return;
}



/* Entry: 10b1b8858; end: 10b1b88a3;  */

void FUN_10b1b8858(void)

{
  undefined8 uStack_48;
  
  FUN_10b1b8b20();
  func_0x00010b1b8b44();
  FUN_10b1b88a4(uStack_48);
  func_0x00010b1b8bd0();
  func_0x00010b1b8b9c();
  func_0x00010b1b8b90();
  return;
}



/* Entry: 10b1b88a4; end: 10b1b8947;  */

undefined8 *
FUN_10b1b88a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010b1b8b60();
  func_0x00010b1b8c00();
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x000107c278b8(param_1 + 2,param_4);
  return param_1;
}



/* Entry: 10b1b8948; end: 10b1b8977;  */

void FUN_10b1b8948(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10b1b89c4(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x28;
  return;
}



/* Entry: 10b1b8978; end: 10b1b89c3;  */

void FUN_10b1b8978(void)

{
  undefined8 uStack_48;
  
  FUN_10b1b8b20();
  func_0x00010b1b8b44();
  FUN_10b1b89c4(uStack_48);
  func_0x00010b1b8bd0();
  func_0x00010b1b8b9c();
  func_0x00010b1b8b90();
  return;
}



/* Entry: 10b1b89c4; end: 10b1b8a23;  */

void FUN_10b1b89c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x00010b1b8b60();
  uVar3 = unaff_x19[1];
  uVar2 = *unaff_x19;
  uVar1 = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x21 = unaff_x20;
  unaff_x21[1] = param_1;
  unaff_x21[3] = uVar3;
  unaff_x21[2] = uVar2;
  unaff_x21[4] = uVar1;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
  return;
}



/* Entry: 10b1b8a24; end: 10b1b8a53;  */

void FUN_10b1b8a24(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10b1b8aa0(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x28;
  return;
}



/* Entry: 10b1b8a54; end: 10b1b8a9f;  */

void FUN_10b1b8a54(void)

{
  undefined8 uStack_48;
  
  FUN_10b1b8b20();
  func_0x00010b1b8b44();
  FUN_10b1b8aa0(uStack_48);
  func_0x00010b1b8bd0();
  func_0x00010b1b8b9c();
  func_0x00010b1b8b90();
  return;
}



/* Entry: 10b1b8aa0; end: 10b1b8abf;  */

undefined8 *
FUN_10b1b8aa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010b1b8b60();
  func_0x00010b1b8c00();
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x000107c278b8(param_1 + 2,param_4);
  return param_1;
}



/* Entry: 10b1b8ac0; end: 10b1b8ac3;  */

void FUN_10b1b8ac0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc35e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1b8ac4; end: 10b1b8ad7;  */

void FUN_10b1b8ac4(void)

{
  func_0x00010b1b8ae8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1b8ad8; end: 10b1b8af7;  */

void FUN_10b1b8ad8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1b8ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b1b8af8; end: 10b1b8b1f;  */

long FUN_10b1b8af8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b1b8b20; end: 10b1b8c13;  */

long * FUN_10b1b8b20(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = (long *)((param_1[1] - *param_1) / 0x28 + 1);
  if ((long *)0x666666666666666 < plVar2) {
    FUN_10b120754();
    param_1[3] = 0;
    param_1[4] = param_4;
    if (plVar2 == (long *)0x0) {
      param_4 = 0;
    }
    else {
      FUN_10b120760();
    }
    lVar3 = param_4 + param_3 * 0x28;
    *param_1 = param_4;
    param_1[1] = lVar3;
    param_1[2] = lVar3;
    param_1[3] = param_4 + (long)plVar2 * 0x28;
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x28;
  plVar4 = (long *)(uVar1 * 2);
  if (plVar4 < plVar2 || (long)plVar4 - (long)plVar2 == 0) {
    plVar4 = plVar2;
  }
  if (0x333333333333332 < uVar1) {
    plVar4 = (long *)0x666666666666666;
  }
  return plVar4;
}



/* Entry: 10b1b8c14; end: 10b1b8c2f;  */

void FUN_10b1b8c14(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b1eb580();
  *(undefined8 *)(param_1 + 0x10) = unaff_x19;
  return;
}



/* Entry: 10b1b8c30; end: 10b1b8c4f;  */

long FUN_10b1b8c30(long param_1)

{
  func_0x00010b1eb568();
  FUN_10b1e584c();
  return param_1 + 0x28;
}


