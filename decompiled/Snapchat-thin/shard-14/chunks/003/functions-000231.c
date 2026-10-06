/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b12468c; end: 10b1246a7;  */

void FUN_10b12468c(void)

{
  return;
}



/* Entry: 10b1246a8; end: 10b1246c7;  */

void FUN_10b1246a8(void)

{
  func_0x00010b1348cc();
  FUN_10b24d634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b1246c8; end: 10b12471f;  */

bool FUN_10b1246c8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  do {
    lVar1 = param_1;
    if (lVar1 == param_2) break;
    lVar2 = param_3;
    FUN_10b124720(param_3,lVar1,0);
    param_1 = lVar1 + 0x18;
  } while (lVar2 != 0);
  return lVar1 != param_2;
}



/* Entry: 10b124720; end: 10b12474f;  */

ulong FUN_10b124720(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar4 = param_1;
  if ((long)uVar5 < 0) {
    puVar4 = (undefined8 *)*param_1;
    uVar5 = param_1[1];
  }
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  if (uVar5 < param_3) {
    param_3 = 0xffffffffffffffff;
  }
  else if (uVar1 != 0) {
    lVar3 = (long)puVar4 + param_3;
    func_0x0001003b0714(lVar3,(long)puVar4 + uVar5,puVar2,(long)puVar2 + uVar1);
    param_3 = lVar3 - (long)puVar4;
    if (lVar3 == (long)puVar4 + uVar5) {
      param_3 = 0xffffffffffffffff;
    }
  }
  return param_3;
}



/* Entry: 10b124750; end: 10b124787;  */

void FUN_10b124750(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_10b1246a8();
  }
  return;
}



/* Entry: 10b124788; end: 10b124853;  */

void FUN_10b124788(void)

{
  code *pcVar1;
  undefined1 in_ZR;
  long *plVar2;
  ulong uVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x23;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  func_0x00010b135044();
  func_0x00010b136224();
  if (!(bool)in_ZR) {
    uVar3 = extraout_x8 >> 5;
    if (uVar3 >> 0x3b != 0) {
      FUN_10b0f7bc0();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10b124834);
      (*pcVar1)();
    }
    plVar2 = unaff_x19 + 2;
    func_0x00010b0f7c98();
    *unaff_x19 = (long)plVar2;
    unaff_x19[1] = (long)plVar2;
    func_0x00010b135754(plVar2 + uVar3 * 4);
    uStack_58 = 0;
    for (; unaff_x20 != unaff_x23; unaff_x20 = unaff_x20 + 0x20) {
      func_0x00010b13600c(plVar2);
      plVar2 = (long *)(lStack_48 + 0x20);
      lStack_48 = (long)plVar2;
    }
    uStack_58 = 1;
    FUN_10b0f7d9c(auStack_70);
    unaff_x19[1] = (long)plVar2;
  }
  func_0x00010b134ecc();
  FUN_10b124854(auStack_80);
  return;
}



/* Entry: 10b124854; end: 10b1248ef;  */

void FUN_10b124854(void)

{
  uint extraout_w8;
  
  func_0x00010b135850();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010b0f7a14();
  }
  return;
}



/* Entry: 10b1248f0; end: 10b1248f7;  */

void FUN_10b1248f0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x40;
    func_0x00010b12492c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b1248f8; end: 10b12494b;  */

void FUN_10b1248f8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x40;
    func_0x00010b12492c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b12494c; end: 10b124a23;  */

void FUN_10b12494c(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b133e24();
  lVar1 = param_1;
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c316d4(param_1 + 0x38);
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x000107c27958(&uStack_90,param_1);
    pcStack_60 = "label";
    uStack_58 = 5;
    uStack_48 = uStack_88;
    uStack_50 = uStack_90;
    uStack_40 = uStack_80;
    func_0x00010b1364d8();
    func_0x00010b134904(auStack_78,&pcStack_60);
    param_1 = param_1 + 0x20;
    func_0x000107c28148(param_1);
    FUN_10b1135dc(lVar1,2,auStack_78,param_1);
    func_0x00010b134a8c();
    func_0x00010b134cb8();
    func_0x00010b13458c();
  }
  func_0x00010b133dfc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b134cb8();
  func_0x00010b13458c();
  func_0x00010b1343d0();
  if (*(char *)(lVar1 + 0x18) == '\x01') {
    func_0x00010b1248a0();
  }
  return;
}



/* Entry: 10b124a24; end: 10b124a43;  */

void FUN_10b124a24(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010b1248a0();
  }
  return;
}



/* Entry: 10b124a44; end: 10b124a47;  */

void FUN_10b124a44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbc8a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b124a48; end: 10b124a5b;  */

void FUN_10b124a48(void)

{
  func_0x00010b124a64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b124a5c; end: 10b124a6f;  */

void FUN_10b124a5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1340a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b124a70; end: 10b124abf;  */

void FUN_10b124a70(void)

{
  func_0x00010b134374();
  func_0x00010b124a94();
  return;
}



/* Entry: 10b124ac0; end: 10b124ac7;  */

void FUN_10b124ac0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x00010b121950();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b124ac8; end: 10b124afb;  */

void FUN_10b124ac8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x00010b121950();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b124afc; end: 10b124aff;  */

void FUN_10b124afc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbc8f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b124b00; end: 10b124b13;  */

void FUN_10b124b00(void)

{
  func_0x00010b124b1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b124b14; end: 10b124b27;  */

void FUN_10b124b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1340a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b124b28; end: 10b124b77;  */

void FUN_10b124b28(void)

{
  func_0x00010b134374();
  func_0x00010b124b4c();
  return;
}



/* Entry: 10b124b78; end: 10b124b7f;  */

void FUN_10b124b78(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x278;
    func_0x00010b121af0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b124b80; end: 10b124c63;  */

void FUN_10b124b80(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x278;
    func_0x00010b121af0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b124c64; end: 10b124ca7;  */

void FUN_10b124c64(long param_1)

{
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    func_0x00010b134e20((&PTR_FUN_110cbc938)[*(uint *)(param_1 + 0x10)]);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 10b124ca8; end: 10b124cbb;  */

void FUN_10b124ca8(void)

{
  return;
}



/* Entry: 10b124cbc; end: 10b124cef;  */

void FUN_10b124cbc(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_10b12528c(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}



/* Entry: 10b124cf0; end: 10b124d2b;  */

long FUN_10b124cf0(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    return param_1 + 0x40;
  }
  func_0x00010b134e8c();
  func_0x00010b134c7c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b124d24);
  (*pcVar1)();
}



/* Entry: 10b124d2c; end: 10b124eb7;  */

void FUN_10b124d2c(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  long extraout_x10;
  ulong unaff_x20;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 unaff_x23;
  long lVar7;
  undefined8 *puVar8;
  
  func_0x00010b13652c();
  func_0x00010b134ce0();
  func_0x00010b135704();
  *param_1 = FUN_10b133214;
  param_1[1] = FUN_10b1332ac;
  param_1[10] = unaff_x20;
  func_0x00010b136070();
  func_0x00010b134ff8();
  func_0x00010b11fd48();
  if ((unaff_x20 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xb) = 0;
    plVar5 = (long *)param_1[10];
    lVar4 = *plVar5;
    func_0x00010b134c84();
    lVar7 = *plVar5;
    if ((*(byte *)(lVar7 + 0x58) & 1) == 0) {
      puVar8 = *(undefined8 **)(lVar7 + 0x68);
      uVar3 = *(undefined8 **)(lVar7 + 0x70) <= puVar8;
      if ((bool)uVar3) {
        lVar6 = *(long *)(lVar7 + 0x60);
        func_0x00010b134648();
        if (extraout_x10 != 0) {
          func_0x00010552fc6c();
LAB_10b124e60:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b124e64);
          (*pcVar2)();
        }
        func_0x00010b133e4c(extraout_x8 - lVar6);
        uVar1 = extraout_x9;
        if ((bool)uVar3) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b124e60;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b133f38();
        *(undefined8 *)(lVar7 + 0x60) = unaff_x23;
        *(undefined8 **)(lVar7 + 0x68) = puVar8;
        *(ulong *)(lVar7 + 0x70) = uVar1;
        if (lVar6 != 0) {
          func_0x00010b134bcc();
        }
      }
      else {
        *puVar8 = param_1;
        puVar8 = puVar8 + 1;
      }
      *(undefined8 **)(lVar7 + 0x68) = puVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(lVar4);
      return;
    }
    func_0x00010b134884();
    func_0x00010b134574(*param_1);
  }
  else {
    FUN_10b124cf0(*(undefined8 *)param_1[10]);
    func_0x00010b134b1c();
    func_0x00010b13425c();
    if ((bool)in_ZR) {
      func_0x00010b1345a0();
      func_0x00010b134368();
    }
    else {
      func_0x00010b134068();
      func_0x00010b13435c();
      func_0x00010b1348a4();
    }
    func_0x00010b1346d4();
    func_0x00010b134560();
  }
  return;
}



/* Entry: 10b124eb8; end: 10b124f3f;  */

void FUN_10b124eb8(void)

{
  long extraout_x8;
  int extraout_w11;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined1 uStack_38;
  long lStack_30;
  long lStack_28;
  
  FUN_10b1250a0(&lStack_30);
  lStack_40 = lStack_30 + 0x38;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  lStack_50 = lStack_30;
  lStack_48 = lStack_28;
  if (lStack_28 != 0) {
    do {
      func_0x00010b133f58();
      lStack_30 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x00010b1250e0(lStack_30 + 8,&lStack_40,&lStack_50);
  func_0x00010b13489c();
  func_0x00010b1358cc();
  func_0x00010b1349cc();
  return;
}



/* Entry: 10b124f40; end: 10b124f57;  */

void FUN_10b124f40(void)

{
  func_0x000107c27b4c();
  return;
}



/* Entry: 10b124f58; end: 10b124f8b;  */

void FUN_10b124f58(void)

{
  func_0x00010b134874();
  func_0x00010b13619c();
  FUN_10b125018();
  func_0x00010b134484();
  return;
}



/* Entry: 10b124f8c; end: 10b124fa7;  */

void FUN_10b124f8c(long param_1)

{
  func_0x000107c27b50();
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 10b124fa8; end: 10b124fd7;  */

undefined8 * FUN_10b124fa8(undefined8 *param_1)

{
  FUN_10b124fd8();
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



/* Entry: 10b124fd8; end: 10b125017;  */

void FUN_10b124fd8(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010b124ffc();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10b125018; end: 10b125043;  */

void FUN_10b125018(void)

{
  long unaff_x20;
  
  func_0x00010b135568();
  FUN_10b124fd8();
  func_0x00010b134c34();
  FUN_10b125044();
  *(undefined1 *)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 10b125044; end: 10b12505b;  */

void FUN_10b125044(long param_1)

{
  __ZNSt13exception_ptrC1ERKS_();
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10b12505c; end: 10b12507f;  */

long FUN_10b12505c(void)

{
  long lVar1;
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x00010b135838();
  FUN_10b125080();
  lVar1 = unaff_x19;
  func_0x0001003b6a18();
  if (*(long *)(lVar1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    func_0x000104bf336c(unaff_x19,&ppuStack_28);
    func_0x000107c60dfc(&ppuStack_28);
  }
  func_0x0001003b6c64(unaff_x19 + 0x18);
  func_0x0001003b6c64((long *)(lVar1 + 8));
  return unaff_x19;
}



/* Entry: 10b125080; end: 10b12509f;  */

void FUN_10b125080(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010b124ffc();
  }
  return;
}



/* Entry: 10b1250a0; end: 10b12510f;  */

void FUN_10b1250a0(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x21;
  undefined8 in_register_00005008;
  
  func_0x00010b1344d0();
  __ZNSt3__18__sp_mut4lockEv();
  func_0x00010b135194();
  unaff_x21[1] = in_register_00005008;
  *unaff_x21 = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(param_2);
  return;
}



/* Entry: 10b125110; end: 10b125117;  */

undefined8 FUN_10b125110(long *param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(*param_1 + 1) & 1) == 0) {
    func_0x0001052a9f28(*(undefined8 *)(*param_1 + 0x78));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 10b125118; end: 10b125153;  */

void FUN_10b125118(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010b125198();
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 10b125154; end: 10b12516b;  */

void FUN_10b125154(long *param_1,long param_2)

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



/* Entry: 10b12516c; end: 10b1251df;  */

void FUN_10b12516c(undefined8 param_1,long *param_2)

{
  while (param_2 != (long *)0x0) {
    param_2 = (long *)*param_2;
    __ZdlPv();
  }
  return;
}



/* Entry: 10b1251e0; end: 10b1251f7;  */

void FUN_10b1251e0(long *param_1)

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



/* Entry: 10b1251f8; end: 10b12521b;  */

void FUN_10b1251f8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_10b12521c();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 10b12521c; end: 10b12528b;  */

void FUN_10b12521c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10b12528c; end: 10b1252ab;  */

void FUN_10b12528c(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010b125198();
  }
  return;
}



/* Entry: 10b1252ac; end: 10b1252cb;  */

void FUN_10b1252ac(void)

{
  func_0x00010b1348cc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b1252cc; end: 10b1252eb;  */

void FUN_10b1252cc(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_10b25238c();
  }
  return;
}



/* Entry: 10b1252ec; end: 10b125313;  */

void FUN_10b1252ec(long param_1)

{
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0x60) = 0;
  FUN_10b125314();
  return;
}



/* Entry: 10b125314; end: 10b125327;  */

void FUN_10b125314(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_10b125344();
    *(undefined1 *)(param_1 + 0x60) = 1;
    return;
  }
  return;
}



/* Entry: 10b125328; end: 10b125343;  */

void FUN_10b125328(long param_1)

{
  FUN_10b125344();
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



/* Entry: 10b125344; end: 10b125377;  */

undefined8 * FUN_10b125344(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)param_1 + 9) = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_10b125378(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 10b125378; end: 10b12539f;  */

void FUN_10b125378(long param_1)

{
  func_0x00010b1346a4();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_10b1253a0();
  return;
}



/* Entry: 10b1253a0; end: 10b1253b3;  */

void FUN_10b1253a0(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_10b1251f8();
    func_0x00010b136304();
    return;
  }
  return;
}



/* Entry: 10b1253b4; end: 10b125463;  */

void FUN_10b1253b4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c();
  func_0x00010b12540c();
  func_0x00010b1362b4();
  FUN_10b1151e4();
  FUN_10b12151c(unaff_x20 + 0x290,unaff_x19 + 0x290);
  FUN_10b1211a8(unaff_x20 + 0x330,unaff_x19 + 0x330);
  func_0x000107c27b9c(unaff_x20 + 0x370,unaff_x19 + 0x370);
  FUN_10b122030(unaff_x20 + 0x388,unaff_x19 + 0x388);
  return;
}



/* Entry: 10b125464; end: 10b12546b;  */

void FUN_10b125464(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x0001052ac684();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b12546c; end: 10b12549f;  */

void FUN_10b12546c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x0001052ac684();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b1254a0; end: 10b125533;  */

void FUN_10b1254a0(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010b134530();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_10b121c1c(param_1 + 3,param_2 + 3);
  FUN_10b1214e8(unaff_x19 + 0x290,unaff_x20 + 0x290);
  FUN_10b121164(unaff_x19 + 0x330,unaff_x20 + 0x330);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x378);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x370);
  *(undefined8 *)(unaff_x19 + 0x380) = *(undefined8 *)(unaff_x20 + 0x380);
  *(undefined8 *)(unaff_x19 + 0x378) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x370) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x378) = 0;
  *(undefined8 *)(unaff_x20 + 0x370) = 0;
  *(undefined8 *)(unaff_x20 + 0x380) = 0;
  FUN_10b1238dc(unaff_x19 + 0x388,unaff_x20 + 0x388);
  return;
}



/* Entry: 10b125534; end: 10b1255fb;  */

void FUN_10b125534(void)

{
  func_0x00010b134374();
  func_0x00010b125558();
  return;
}



/* Entry: 10b1255fc; end: 10b12566b;  */

void FUN_10b1255fc(long param_1)

{
  undefined8 in_x4;
  undefined8 *puVar1;
  undefined1 auStack_2b0 [632];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  func_0x00010b135c00(*puVar1,puVar1 + 2,*(undefined4 *)(puVar1 + 5),puVar1 + 6,in_x4,&uStack_38);
  func_0x000107c27914(&uStack_38);
  func_0x00010b1340dc(auStack_2b0,*puVar1,puVar1 + 9);
  func_0x00010b121af0(auStack_2b0);
  return;
}



/* Entry: 10b12566c; end: 10b12568b;  */

void FUN_10b12566c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b1255cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b12568c; end: 10b12568f;  */

void FUN_10b12568c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b125690; end: 10b1256cb;  */

void FUN_10b125690(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c();
  func_0x00010b13655c();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  FUN_10b12255c(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(unaff_x20 + 0x318) = *(undefined1 *)(unaff_x19 + 0x318);
  return;
}



/* Entry: 10b1256cc; end: 10b125727;  */

void FUN_10b1256cc(long param_1)

{
  if (*(char *)(param_1 + 800) == '\x01') {
    func_0x00010b121a94();
  }
  return;
}



/* Entry: 10b125728; end: 10b125777;  */

void FUN_10b125728(long param_1)

{
  func_0x0001052ac684(param_1 + 0x280);
  func_0x00010b121b30(param_1 + 0x1d8);
  func_0x00010b12186c(param_1 + 0x1c8);
  FUN_10b121bd4(param_1 + 0x180);
  func_0x00010b135e7c();
  func_0x00010b135e84();
  func_0x00010b135f3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b125778; end: 10b12578f;  */

void FUN_10b125778(void)

{
  FUN_10b121300();
  func_0x00010b1362f8();
  return;
}



/* Entry: 10b125790; end: 10b1258cb;  */

void FUN_10b125790(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b134530();
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt3__15mutex6unlockEv(*unaff_x19);
  }
  func_0x00010b136464();
  *(undefined1 *)(unaff_x19 + 1) = *(undefined1 *)(unaff_x20 + 1);
  *unaff_x20 = 0;
  *(undefined1 *)(unaff_x20 + 1) = 0;
  return;
}



/* Entry: 10b1258cc; end: 10b1258e3;  */

void FUN_10b1258cc(long *param_1,long param_2)

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



/* Entry: 10b1258e4; end: 10b12594f;  */

void FUN_10b1258e4(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b125950; end: 10b125dc7;  */

void FUN_10b125950(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  ulong uVar10;
  ulong extraout_x9_00;
  long *plVar11;
  long *plVar12;
  long *extraout_x10;
  long *plVar13;
  long *plVar14;
  long *extraout_x11;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *unaff_x28;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  if ((bRam00000001137f4060 & 1) == 0) {
    puVar8 = (undefined8 *)0x1137f4060;
    ___cxa_guard_acquire();
    if ((int)puVar8 != 0) {
      func_0x00010b135fc4();
      *puVar8 = 0x32aaaba7;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      puVar8[2] = 0;
      puVar8[1] = 0;
      puVar8[4] = 0;
      puVar8[3] = 0;
      puVar8[6] = 0;
      puVar8[5] = 0;
      puVar8[8] = 0;
      puVar8[7] = 0;
      puVar8[10] = 0;
      puVar8[9] = 0;
      *(undefined4 *)(puVar8 + 0xc) = 0x3f800000;
      func_0x00010b136064(0x1137f4058);
    }
  }
  lVar1 = lRam00000001137f4058;
  plVar11 = (long *)(lRam00000001137f4058 + 0x40);
  __ZNSt3__15mutex4lockEv(lRam00000001137f4058);
  plVar5 = (long *)(lVar1 + 0x58);
  func_0x000107c278c4(plVar5,param_2);
  plVar18 = *(long **)(lVar1 + 0x48);
  plVar6 = plVar5;
  if (plVar18 != (long *)0x0) {
    uVar17 = (long)plVar18 - 1;
    if (((ulong)plVar18 & uVar17) == 0) {
      unaff_x28 = (long *)(uVar17 & (ulong)plVar5);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar5 - (long)plVar18 < 0;
      unaff_x28 = plVar5;
      if (plVar18 <= plVar5) {
        uVar10 = 0;
        if (plVar18 != (long *)0x0) {
          uVar10 = (ulong)plVar5 / (ulong)plVar18;
        }
        unaff_x28 = (long *)((long)plVar5 - uVar10 * (long)plVar18);
      }
    }
    plVar16 = *(long **)(*plVar11 + (long)unaff_x28 * 8);
    if (plVar16 != (long *)0x0) {
      do {
        while( true ) {
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_10b125a50;
          plVar9 = (long *)plVar16[1];
          in_NG = (long)plVar9 - (long)plVar5 < 0;
          if (plVar9 != plVar5) break;
          plVar6 = plVar16 + 2;
          func_0x00010b135c68();
          if (((ulong)plVar6 & 1) != 0) goto LAB_10b125cd4;
        }
        if (((ulong)plVar18 & uVar17) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar17);
        }
        else if (plVar18 <= plVar9) {
          uVar10 = 0;
          if (plVar18 != (long *)0x0) {
            uVar10 = (ulong)plVar9 / (ulong)plVar18;
          }
          plVar9 = (long *)((long)plVar9 - uVar10 * (long)plVar18);
        }
        in_NG = (long)plVar9 - (long)unaff_x28 < 0;
      } while (plVar9 == unaff_x28);
    }
  }
LAB_10b125a50:
  func_0x00010b135e28();
  plVar16 = (long *)(lVar1 + 0x50);
  uStack_68 = 0;
  *plVar6 = 0;
  plVar6[1] = (long)plVar5;
  plStack_78 = plVar6;
  plStack_70 = plVar16;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar6 + 2,param_2);
  plVar6[6] = 0;
  plVar6[5] = 0;
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
  if ((plVar18 != (long *)0x0) &&
     (func_0x00010b135ab0((float)(*(long *)(lVar1 + 0x58) + 1),*(undefined4 *)(lVar1 + 0x60),
                          (float)plVar18), !(bool)in_NG)) goto LAB_10b125c5c;
  bVar3 = (long *)0x2 < plVar18;
  bVar4 = plVar18 == (long *)0x3;
  func_0x00010b1342d8((long)plVar18 << 1);
  plVar9 = extraout_x8;
  if (!bVar3 || bVar4) {
    plVar9 = extraout_x9;
  }
  if ((long)plVar9 - 1U == 0) {
    plVar9 = (long *)0x2;
  }
  else if (((ulong)plVar9 & (long)plVar9 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar18 = *(long **)(lVar1 + 0x48);
  if (plVar18 < plVar9) {
LAB_10b125af8:
    if ((ulong)plVar9 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b125d8c);
      (*pcVar2)();
    }
    lVar7 = (long)plVar9 << 3;
    __Znwm(lVar7);
    FUN_10b125e34(plVar11,lVar7);
    *(long **)(lVar1 + 0x48) = plVar9;
    lVar7 = *(long *)(lVar1 + 0x40);
    for (plVar18 = (long *)0x0; plVar9 != plVar18; plVar18 = (long *)((long)plVar18 + 1)) {
      *(undefined8 *)(lVar7 + (long)plVar18 * 8) = 0;
    }
    plVar12 = (long *)*plVar16;
    plVar18 = plVar9;
    if (plVar12 != (long *)0x0) {
      plVar13 = (long *)plVar12[1];
      uVar10 = (long)plVar9 - 1;
      uVar17 = 0;
      if (plVar9 != (long *)0x0) {
        uVar17 = (ulong)plVar13 / (ulong)plVar9;
      }
      plVar14 = plVar13;
      if (plVar9 <= plVar13) {
        plVar14 = (long *)((long)plVar13 - uVar17 * (long)plVar9);
      }
      if (((ulong)plVar9 & uVar10) == 0) {
        plVar14 = (long *)((ulong)plVar13 & uVar10);
      }
      *(long **)(lVar7 + (long)plVar14 * 8) = plVar16;
      while (plVar13 = plVar12, plVar12 = (long *)*plVar13, plVar12 != (long *)0x0) {
        plVar15 = (long *)plVar12[1];
        if (((ulong)plVar9 & uVar10) == 0) {
          plVar15 = (long *)((ulong)plVar15 & uVar10);
        }
        else if (plVar9 <= plVar15) {
          uVar17 = 0;
          if (plVar9 != (long *)0x0) {
            uVar17 = (ulong)plVar15 / (ulong)plVar9;
          }
          plVar15 = (long *)((long)plVar15 - uVar17 * (long)plVar9);
        }
        if (plVar15 != plVar14) {
          if (*(long *)(lVar7 + (long)plVar15 * 8) == 0) {
            *(long **)(lVar7 + (long)plVar15 * 8) = plVar13;
            plVar14 = plVar15;
          }
          else {
            *plVar13 = *plVar12;
            func_0x00010b134964();
            lVar7 = extraout_x8_00;
            uVar10 = extraout_x9_00;
            plVar12 = extraout_x10;
            plVar14 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar9 < plVar18) {
    plVar12 = (long *)(long)((float)*(ulong *)(lVar1 + 0x58) / *(float *)(lVar1 + 0x60));
    if ((plVar18 < (long *)0x3) || (((ulong)plVar18 & (long)plVar18 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010b134418();
    }
    if (plVar9 <= plVar12) {
      plVar9 = plVar12;
    }
    if (plVar9 < plVar18) {
      if (plVar9 != (long *)0x0) goto LAB_10b125af8;
      FUN_10b125e34(plVar11,0);
      *(undefined8 *)(lVar1 + 0x48) = 0;
      plVar18 = (long *)0x0;
    }
    else {
      plVar18 = *(long **)(lVar1 + 0x48);
    }
  }
  if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
    unaff_x28 = (long *)((long)plVar18 - 1U & (ulong)plVar5);
  }
  else {
    unaff_x28 = plVar5;
    if (plVar18 <= plVar5) {
      uVar17 = 0;
      if (plVar18 != (long *)0x0) {
        uVar17 = (ulong)plVar5 / (ulong)plVar18;
      }
      unaff_x28 = (long *)((long)plVar5 - uVar17 * (long)plVar18);
    }
  }
LAB_10b125c5c:
  lVar7 = *plVar11;
  plVar11 = *(long **)(lVar7 + (long)unaff_x28 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar6 = *plVar16;
    *plVar16 = (long)plVar6;
    *(long **)(lVar7 + (long)unaff_x28 * 8) = plVar16;
    if (*plVar6 != 0) {
      plVar11 = *(long **)(*plVar6 + 8);
      if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
        plVar11 = (long *)((ulong)plVar11 & (long)plVar18 - 1U);
      }
      else if (plVar18 <= plVar11) {
        uVar17 = 0;
        if (plVar18 != (long *)0x0) {
          uVar17 = (ulong)plVar11 / (ulong)plVar18;
        }
        plVar11 = (long *)((long)plVar11 - uVar17 * (long)plVar18);
      }
      *(long **)(lVar7 + (long)plVar11 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar11;
    *plVar11 = (long)plVar6;
  }
  plStack_78 = (long *)0x0;
  *(long *)(lVar1 + 0x58) = *(long *)(lVar1 + 0x58) + 1;
  FUN_10b125e4c(&plStack_78);
  plVar16 = plVar6;
LAB_10b125cd4:
  func_0x00010b136078();
  FUN_10b125dc8(param_1,plVar16 + 5);
  if (*param_1 == 0) {
    func_0x00010b12592c(param_1);
    (*(code *)*param_3)(param_1,param_3);
    func_0x00010b125df4(plVar16 + 5,*param_1,param_1[1]);
  }
  func_0x00010b1358cc();
  return;
}



/* Entry: 10b125dc8; end: 10b125e33;  */

void FUN_10b125dc8(long param_1)

{
  long unaff_x19;
  
  func_0x00010b1359b0();
  if (param_1 != 0) {
    func_0x00010b1360f8();
    *(long *)(unaff_x19 + 8) = param_1;
    if (param_1 != 0) {
      func_0x00010b136464();
    }
  }
  return;
}



/* Entry: 10b125e34; end: 10b125e4b;  */

void FUN_10b125e34(long *param_1,long param_2)

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



/* Entry: 10b125e4c; end: 10b125e93;  */

long * FUN_10b125e4c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b12581c(lVar1 + 0x28);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
    }
    func_0x00010b134c8c();
  }
  return param_1;
}



/* Entry: 10b125e94; end: 10b125e9f;  */

void FUN_10b125e94(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  code *extraout_x9;
  code *extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined1 auStack_190 [64];
  undefined8 auStack_150 [2];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long alStack_c8 [2];
  undefined1 auStack_b8 [128];
  undefined8 uStack_38;
  
  plVar2 = *(long **)(param_3 + 0x18);
  func_0x00010b133e24(param_1,*(undefined8 *)(param_3 + 0x10));
  alStack_c8[0] = 0;
  alStack_c8[1] = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  if (*plVar2 == 0) {
    func_0x00010b134afc();
    func_0x00010b136420();
    func_0x00010bd3f4e0();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b12603c);
    (*pcVar1)();
  }
  func_0x00010b13448c();
  FUN_10b1260ec(auStack_b8,plVar2);
  func_0x00010b126148(&uStack_d8,auStack_b8);
  func_0x00010b125908(auStack_b8);
  func_0x00010b134a58(*unaff_x19);
  (*extraout_x9)(auStack_b8);
  FUN_10b12616c(auStack_190,&uStack_d8,auStack_b8);
  FUN_10b1261f4(alStack_c8,auStack_190);
  func_0x00010b1257f8(auStack_190);
  func_0x00010b135f94();
  func_0x00010b134da8();
  (**(code **)(extraout_x8 + 0x48))();
  func_0x00010b205870(auStack_108);
  func_0x00010b134b24();
  func_0x00010b134904(auStack_f0,auStack_b8);
  func_0x00010b134cb8();
  func_0x00010b135550();
  func_0x00010b134508(auStack_b8);
  func_0x00010b13557c();
  func_0x00010b135f9c();
  func_0x00010b134aac();
  func_0x00010b134a58(*unaff_x19);
  (*extraout_x9_00)(auStack_120);
  func_0x00010b126218(alStack_c8);
  func_0x00010b135c34(alStack_c8[0]);
  func_0x00010b1363ec();
  auStack_150[0] = param_2;
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b1ab77c(auStack_140,alStack_c8,auStack_150);
  func_0x00010b1257d4(auStack_150);
  func_0x00010b135c90();
  func_0x00010b134620();
  func_0x00010b135b10();
  func_0x00010b1349ec();
  func_0x00010b134690();
  func_0x00010b135094();
  func_0x00010b134e5c();
  func_0x00010b13549c();
  func_0x00010b135698();
  func_0x00010b13548c();
  func_0x00010b13573c();
  func_0x00010b135794();
  func_0x00010b13574c();
  func_0x00010b125908(&uStack_d8);
  plVar2 = alStack_c8;
  func_0x00010b1257f8();
  func_0x00010b133dfc(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
    func_0x00010b125908(&uStack_d8);
    plVar3 = alStack_c8;
    func_0x00010b1257f8();
    func_0x00010b1343d0();
    func_0x00010b135394();
    lVar4 = *plVar3;
    if ((lVar4 == 0) || (___dynamic_cast(lVar4,&PTR_DAT_110874a58,&PTR_DAT_110cc4ae0,0), lVar4 == 0)
       ) {
      *plVar2 = 0;
      plVar2[1] = 0;
    }
    else {
      lVar5 = *(long *)(unaff_x20 + 8);
      *plVar2 = lVar4;
      plVar2[1] = lVar5;
      if (lVar5 != 0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10_00 != 0);
      }
    }
    return;
  }
  return;
}



/* Entry: 10b125ea0; end: 10b1260eb;  */

void FUN_10b125ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  code *pcVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  code *extraout_x9;
  code *extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined1 auStack_190 [64];
  undefined8 auStack_150 [2];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long alStack_c8 [2];
  undefined1 auStack_b8 [128];
  undefined8 uStack_38;
  
  func_0x00010b133e24();
  alStack_c8[0] = 0;
  alStack_c8[1] = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  if (*param_4 == 0) {
    func_0x00010b134afc();
    func_0x00010b136420();
    func_0x00010bd3f4e0();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b12603c);
    (*pcVar1)();
  }
  func_0x00010b13448c();
  FUN_10b1260ec(auStack_b8,param_4);
  func_0x00010b126148(&uStack_d8,auStack_b8);
  func_0x00010b125908(auStack_b8);
  func_0x00010b134a58(*unaff_x19);
  (*extraout_x9)(auStack_b8);
  FUN_10b12616c(auStack_190,&uStack_d8,auStack_b8);
  FUN_10b1261f4(alStack_c8,auStack_190);
  func_0x00010b1257f8(auStack_190);
  func_0x00010b135f94();
  func_0x00010b134da8();
  (**(code **)(extraout_x8 + 0x48))();
  func_0x00010b205870(auStack_108);
  func_0x00010b134b24();
  func_0x00010b134904(auStack_f0,auStack_b8);
  func_0x00010b134cb8();
  func_0x00010b135550();
  func_0x00010b134508(auStack_b8);
  func_0x00010b13557c();
  func_0x00010b135f9c();
  func_0x00010b134aac();
  func_0x00010b134a58(*unaff_x19);
  (*extraout_x9_00)(auStack_120);
  func_0x00010b126218(alStack_c8);
  func_0x00010b135c34(alStack_c8[0]);
  func_0x00010b1363ec();
  auStack_150[0] = param_1;
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b1ab77c(auStack_140,alStack_c8,auStack_150);
  func_0x00010b1257d4(auStack_150);
  func_0x00010b135c90();
  func_0x00010b134620();
  func_0x00010b135b10();
  func_0x00010b1349ec();
  func_0x00010b134690();
  func_0x00010b135094();
  func_0x00010b134e5c();
  func_0x00010b13549c();
  func_0x00010b135698();
  func_0x00010b13548c();
  func_0x00010b13573c();
  func_0x00010b135794();
  func_0x00010b13574c();
  func_0x00010b125908(&uStack_d8);
  plVar2 = alStack_c8;
  func_0x00010b1257f8();
  func_0x00010b133dfc(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
    func_0x00010b125908(&uStack_d8);
    plVar3 = alStack_c8;
    func_0x00010b1257f8();
    func_0x00010b1343d0();
    func_0x00010b135394();
    lVar4 = *plVar3;
    if ((lVar4 == 0) || (___dynamic_cast(lVar4,&PTR_DAT_110874a58,&PTR_DAT_110cc4ae0,0), lVar4 == 0)
       ) {
      *plVar2 = 0;
      plVar2[1] = 0;
    }
    else {
      lVar5 = *(long *)(unaff_x20 + 8);
      *plVar2 = lVar4;
      plVar2[1] = lVar5;
      if (lVar5 != 0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10_00 != 0);
      }
    }
    return;
  }
  return;
}



/* Entry: 10b1260ec; end: 10b12616b;  */

void FUN_10b1260ec(long *param_1)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010b135394();
  lVar1 = *param_1;
  if ((lVar1 == 0) || (___dynamic_cast(lVar1,&PTR_DAT_110874a58,&PTR_DAT_110cc4ae0,0), lVar1 == 0))
  {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 8);
    *unaff_x19 = lVar1;
    unaff_x19[1] = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
  }
  return;
}



/* Entry: 10b12616c; end: 10b1261f3;  */

void FUN_10b12616c(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010b134b60();
  func_0x00010b133e10();
  uStack_38 = extraout_x8;
  func_0x00010b135868();
  FUN_10b126258();
  puStack_40[2] = 0;
  *puStack_40 = &PTR_FUN_110cbd8b0;
  puStack_40[1] = 0;
  func_0x00010b135a20(puStack_40 + 3);
  FUN_10b1f68fc();
  func_0x00010b134100();
  FUN_10b1262e4();
  func_0x00010b133dfc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b135844();
  __ZNSt3__119__shared_weak_countD2Ev();
  FUN_10b1262e4(auStack_50);
  func_0x00010b1343d0();
  func_0x00010b133dc4();
  func_0x00010b1257f8();
  return;
}



/* Entry: 10b1261f4; end: 10b126247;  */

void FUN_10b1261f4(void)

{
  func_0x00010b133dc4();
  func_0x00010b1257f8();
  return;
}



/* Entry: 10b126248; end: 10b126257;  */

void FUN_10b126248(long param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x19;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x00010b1eb424(*(undefined8 *)(param_1 + 0x18),param_1);
  func_0x00010b1ebb5c(auStack_48);
  func_0x00010b1ec238(lStack_38);
  func_0x00010b1ebb50();
  if (*unaff_x19 == 0) {
    func_0x00010b1ed30c();
    func_0x00010b1ec764();
    func_0x00010b1edffc(auStack_48);
    FUN_10b1b8c7c(auStack_58,auStack_48);
    func_0x00010b125908(auStack_48);
    lStack_70 = 0;
    lStack_68 = 0;
    FUN_10b2092a0(auStack_48,auStack_58,param_2);
    FUN_10b1b8c9c(&lStack_70,auStack_48);
    func_0x00010b1257d4(auStack_48);
    func_0x00010b1ed284(auStack_48);
    lVar1 = lStack_38;
    func_0x00010b1ec238(lStack_38);
    func_0x00010b1ebb50();
    if (*unaff_x19 == 0) {
      func_0x00010b1ed30c();
      func_0x00010b1b8cc0(lVar1 + 0xa0,&lStack_70);
      func_0x00010b1ec764();
      unaff_x19[1] = lStack_68;
      *unaff_x19 = lStack_70;
      lStack_70 = 0;
      lStack_68 = 0;
    }
    else {
      func_0x00010b1ec764();
    }
    func_0x00010b1257d4(&lStack_70);
    func_0x00010b1257f8(auStack_58);
  }
  else {
    func_0x00010b1ec764();
  }
  return;
}



/* Entry: 10b126258; end: 10b126277;  */

void FUN_10b126258(void)

{
  func_0x00010b13502c();
  FUN_10b126278();
  func_0x00010b134f40();
  return;
}



/* Entry: 10b126278; end: 10b126293;  */

void FUN_10b126278(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 6);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cbd8b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b126294; end: 10b126297;  */

void FUN_10b126294(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbd8b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b126298; end: 10b1262ab;  */

void FUN_10b126298(void)

{
  func_0x00010b1262b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1262ac; end: 10b1262c3;  */

void FUN_10b1262ac(long param_1)

{
  func_0x00010b1348cc(param_1 + 0x18);
  func_0x00010b125908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b1262c4; end: 10b1262e3;  */

void FUN_10b1262c4(void)

{
  func_0x00010b1348cc();
  func_0x00010b125908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b1262e4; end: 10b1262f3;  */

void FUN_10b1262e4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1262f4; end: 10b126317;  */

undefined8 * FUN_10b1262f4(long param_1)

{
  FUN_10b1bac30(*(undefined8 *)(param_1 + 0x18));
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b126318; end: 10b126323;  */

undefined1 FUN_10b126318(void)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((bRam000000011336c3e8 & 1) == 0) {
    iVar2 = 0x1336c3e8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uVar1 = 0x38;
      func_0x000107c2be10();
      uRam000000011336c3e0 = uVar1;
      ___cxa_guard_release(0x11336c3e8);
    }
  }
  return uRam000000011336c3e0;
}



/* Entry: 10b126324; end: 10b1263a3;  */

undefined1 FUN_10b126324(undefined1 param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((bRam000000011336c3e8 & 1) == 0) {
    iVar2 = 0x1336c3e8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uVar1 = param_1;
      func_0x000107c2be10();
      uRam000000011336c3e0 = uVar1;
      ___cxa_guard_release(0x11336c3e8);
    }
  }
  return uRam000000011336c3e0;
}



/* Entry: 10b1263a4; end: 10b12641f;  */

undefined8 FUN_10b1263a4(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b1263cc(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x00010b1353d8(param_1);
  FUN_10b126420();
  return unaff_x19;
}



/* Entry: 10b126420; end: 10b126437;  */

void FUN_10b126420(long *param_1)

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



/* Entry: 10b126438; end: 10b12648f;  */

long FUN_10b126438(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x68);
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1);
    func_0x00010b134c8c();
  }
  lVar1 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  FUN_10b120998(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b126490; end: 10b1264ab;  */

void FUN_10b126490(void)

{
  return;
}



/* Entry: 10b1264ac; end: 10b126703;  */

void FUN_10b1264ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  code *pcVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x9;
  code *extraout_x9_00;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined1 auStack_190 [64];
  undefined8 auStack_150 [2];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [128];
  undefined8 uStack_38;
  
  func_0x00010b133e24();
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  if (*param_4 == 0) {
    func_0x00010b134afc();
    func_0x00010b136420();
    func_0x00010bd3f4e0();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b12663c);
    (*pcVar1)();
  }
  func_0x00010b13448c();
  FUN_10b1260ec(auStack_190,param_4);
  func_0x00010b134a58(*unaff_x19);
  (*extraout_x9)(auStack_b8);
  FUN_10b12616c(auStack_f0,auStack_190,auStack_b8);
  FUN_10b1261f4(&uStack_d8,auStack_f0);
  func_0x00010b1257f8(auStack_f0);
  func_0x00010b135f94();
  func_0x00010b125908(auStack_190);
  func_0x00010b134da8();
  (**(code **)(extraout_x8 + 0x48))();
  func_0x00010b205870(auStack_108);
  func_0x00010b134b24();
  func_0x00010b134904(auStack_f0,auStack_b8);
  func_0x00010b134cb8();
  func_0x00010b135550();
  func_0x00010b134508(auStack_b8);
  func_0x00010b134a58(*unaff_x19);
  (*extraout_x9_00)(auStack_120);
  func_0x00010b126218(&uStack_d8);
  func_0x00010b135c34(uStack_d8);
  func_0x00010b1363ec();
  auStack_150[0] = param_1;
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b1ab77c(auStack_140,&uStack_d8,auStack_150);
  func_0x00010b1257d4(auStack_150);
  func_0x00010b135c90();
  func_0x00010b13557c();
  func_0x00010b135f9c();
  func_0x00010b134aac();
  func_0x00010b134620();
  func_0x00010b135b10();
  func_0x00010b1349ec();
  func_0x00010b134690();
  func_0x00010b135094();
  func_0x00010b134e5c();
  func_0x00010b13549c();
  func_0x00010b135698();
  func_0x00010b13548c();
  func_0x00010b13573c();
  func_0x00010b135794();
  func_0x00010b13574c();
  func_0x00010b1257f8(&uStack_d8);
  func_0x00010b125908(&uStack_c8);
  func_0x00010b133dfc(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
    func_0x00010b1257f8(&uStack_d8);
    func_0x00010b125908(&uStack_c8);
    func_0x00010b1343d0();
    return;
  }
  return;
}



/* Entry: 10b126704; end: 10b126717;  */

void FUN_10b126704(void)

{
  return;
}



/* Entry: 10b126718; end: 10b12672b;  */

void FUN_10b126718(void)

{
  FUN_10b126f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b12672c; end: 10b126733;  */

void FUN_10b12672c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1340a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b126734; end: 10b1267a3;  */

void FUN_10b126734(undefined8 param_1)

{
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  func_0x00010b134530();
  FUN_10b1267a4(param_1);
  uStack_38 = unaff_x19[1];
  uStack_40 = *unaff_x19;
  if (unaff_x19[1] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  func_0x00010b13534c(auStack_30);
  FUN_10b1267c0();
  func_0x00010b1348ac();
  func_0x00010b12046c(&uStack_40);
  return;
}



/* Entry: 10b1267a4; end: 10b1267bf;  */

void FUN_10b1267a4(void)

{
  undefined1 uStack_11;
  
  FUN_10b126940(&uStack_11);
  return;
}


