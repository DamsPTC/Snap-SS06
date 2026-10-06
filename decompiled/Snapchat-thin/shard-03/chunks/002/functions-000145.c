/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1025f4254; end: 1025f425b;  */

void FUN_1025f4254(void)

{
  if (lRam0000000112eae338 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e6e71f8);
  return;
}



/* Entry: 1025f425c; end: 1025f4293;  */

void FUN_1025f425c(undefined8 param_1)

{
  if (lRam0000000112eae338 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6e71f8);
  return;
}



/* Entry: 1025f4294; end: 1025f4403;  */

void FUN_1025f4294(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_70 = &UNK_10dac2858;
  lVar1 = 0x13f;
  func_0x0001042e75b8();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar1 + -8) + 0x40;
    puStack_60 = PTR___sBoWV_11034d678 + 0x40;
    puStack_50 = PTR___sBbWV_11034d660 + 0x40;
    puStack_58 = &UNK_10dac2870;
    puStack_40 = &UNK_10dac2888;
    puStack_30 = &UNK_10dac2888;
    puStack_28 = &UNK_10dac28a0;
    puStack_48 = puStack_60;
    puStack_38 = puStack_60;
    func_0x000107c61630(param_1,0x100,10,&puStack_70,param_1 + 0x50);
  }
  return;
}



/* Entry: 1025f4404; end: 1025f4417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025f4404(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + _DAT_112eae2e8));
  return;
}



/* Entry: 1025f4418; end: 1025f445f;  */

void FUN_1025f4418(undefined8 param_1)

{
  undefined1 auStack_ae8 [2744];
  
  FUN_1025f0f28(auStack_ae8);
  func_0x000107c610b4(param_1,auStack_ae8,0xab2);
  return;
}



/* Entry: 1025f4460; end: 1025f45db;  */

undefined * FUN_1025f4460(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1025f45dc);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112eae540;
    func_0x0001000285a8(0x112eae540,&UNK_10dac28c8);
    lVar5 = 0;
    func_0x0001042dde50();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1025f45d4);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1025f45d8);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  func_0x0001042dde50();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 1025f45dc; end: 1025f461f;  */

undefined8 FUN_1025f45dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001042dde50();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1025f4620; end: 1025f4663;  */

long FUN_1025f4620(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *param_1;
  if (lVar1 != *(long *)(unaff_x20 + 0x10) || param_1[1] != *(long *)(unaff_x20 + 0x18)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 1025f4664; end: 1025f46d3;  */

void FUN_1025f4664(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112eae548 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eae550;
  func_0x00010002969c(0x112eae550,&UNK_10dac28d0);
  uVar2 = uVar1;
  FUN_1025f46d4();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112eae548 = puVar3;
  return;
}



/* Entry: 1025f46d4; end: 1025f4713;  */

void FUN_1025f46d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eae558 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce6cb0;
  func_0x000107c61520(&UNK_10dce6cb0,&UNK_110755c60);
  puRam0000000112eae558 = puVar1;
  return;
}



/* Entry: 1025f4714; end: 1025f475b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1025f4714(undefined8 *param_1)

{
  undefined2 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  undefined8 *puVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [16];
  
  lVar3 = 0;
  func_0x0001042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)((long)&uStack_60 + lVar2);
  lVar6 = param_1[1];
  if (lVar6 != 1) {
    uVar7 = *param_1;
    uVar1 = *(undefined2 *)(param_1 + 2);
    func_0x000107c61428(unaff_x20 + 0x10,&lStack_58,0,0);
    lVar4 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar4 != 0) {
      *puVar5 = uVar7;
      *(long *)(auStack_50 + lVar2 + -8) = lVar6;
      auStack_50[lVar2] = (char)uVar1;
      auStack_50[lVar2 + 1] = (char)((ushort)uVar1 >> 8);
      func_0x000107c6159c(puVar5,lVar3,6);
      func_0x000107c61434(lVar6);
      FUN_1025f33c8(puVar5);
      func_0x000107c61574(lVar4);
      FUN_1025f48c8(puVar5,&SUB_1042dddf8);
    }
  }
  return;
}



/* Entry: 1025f475c; end: 1025f4793;  */

void FUN_1025f475c(void)

{
  FUN_1025f2f24();
  return;
}



/* Entry: 1025f4794; end: 1025f47bf;  */

long FUN_1025f4794(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *param_1;
  if (lVar1 != *(long *)(unaff_x20 + 0x10) || param_1[1] != *(long *)(unaff_x20 + 0x18)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 1025f47c0; end: 1025f47db;  */

void FUN_1025f47c0(void)

{
  FUN_1025f2f24();
  return;
}



/* Entry: 1025f47dc; end: 1025f4827;  */

void FUN_1025f47dc(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar4 = 0;
  func_0x0001042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_60 + lVar3;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    *puVar6 = uVar1;
    auStack_60[lVar3 + 1] = uVar2;
    func_0x000107c6159c(puVar6,lVar4,7);
    FUN_1025f33c8(puVar6);
    func_0x000107c61574(lVar5);
    FUN_1025f48c8(puVar6,&SUB_1042dddf8);
  }
  return;
}



/* Entry: 1025f4828; end: 1025f48b3;  */

undefined8 FUN_1025f4828(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1025f48b4; end: 1025f48c7;  */

/* WARNING: Removing unreachable block (ram,0x0001025f4484) */
/* WARNING: Removing unreachable block (ram,0x0001025f4494) */
/* WARNING: Removing unreachable block (ram,0x0001025f45d8) */
/* WARNING: Removing unreachable block (ram,0x0001025f44a0) */
/* WARNING: Removing unreachable block (ram,0x0001025f44a8) */
/* WARNING: Removing unreachable block (ram,0x0001025f4568) */
/* WARNING: Removing unreachable block (ram,0x0001025f4570) */
/* WARNING: Removing unreachable block (ram,0x0001025f45a0) */
/* WARNING: Removing unreachable block (ram,0x0001025f4580) */
/* WARNING: Removing unreachable block (ram,0x0001025f4588) */
/* WARNING: Removing unreachable block (ram,0x0001025f45a8) */

undefined * FUN_1025f48b4(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  lVar7 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar7) {
    lVar6 = lVar7;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar6 != 0) {
    puVar2 = (undefined *)0x112eae540;
    func_0x0001000285a8(0x112eae540,&UNK_10dac28c8);
    lVar3 = 0;
    func_0x0001042dde50();
    lVar8 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
    uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
    uVar9 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar2,uVar9 + lVar8 * lVar6,uVar5 | 7);
    puVar4 = puVar2;
    func_0x000107c610a4();
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1025f45d4);
      (*pcVar1)();
    }
    lVar6 = (long)puVar4 - uVar9;
    if (lVar6 == -0x8000000000000000 && lVar8 == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1025f45d8);
      (*pcVar1)();
    }
    lVar3 = 0;
    if (lVar8 != 0) {
      lVar3 = lVar6 / lVar8;
    }
    *(long *)(puVar2 + 0x10) = lVar7;
    *(long *)(puVar2 + 0x18) = lVar3 << 1;
  }
  lVar6 = 0;
  func_0x0001042dde50();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar5 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  func_0x000107c6140c(puVar2 + uVar5,param_1 + uVar5,lVar7,lVar6);
  func_0x000107c6142c(param_1);
  return puVar2;
}



/* Entry: 1025f48c8; end: 1025f4903;  */

undefined8 FUN_1025f48c8(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1025f4904; end: 1025f490b;  */

long FUN_1025f4904(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *param_1;
  if (lVar1 != *(long *)(unaff_x20 + 0x10) || param_1[1] != *(long *)(unaff_x20 + 0x18)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 1025f490c; end: 1025f4b9b;  */

void FUN_1025f490c(undefined8 param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 *apuStack_a0 [3];
  undefined1 *puStack_88;
  undefined **ppuStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000285a8(0x112eae6f0,&UNK_10dac2970);
  func_0x000107c613fc();
  pcVar1 = FUN_1025f4b9c;
  func_0x0001000bdd8c(FUN_1025f4b9c,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c(uVar4);
  func_0x0001000d224c(auStack_78);
  func_0x000107c61574(uVar4);
  puVar2 = auStack_78;
  func_0x0001000a8868(puVar2,uStack_60);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001025f4ce0();
  puVar3 = puVar2;
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  ppuStack_80 = &PTR_DAT_1105287b8;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  pcVar6 = *(code **)(lStack_58 + 8);
  apuStack_a0[0] = puVar3;
  puStack_88 = puVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar4);
  (*pcVar6)(param_1,pcVar1,apuStack_a0,uVar4,uStack_60,lStack_58);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar1);
  FUN_1025f4db0(apuStack_a0);
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 1025f4b9c; end: 1025f4bdf;  */

void FUN_1025f4b9c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_1025f5030();
  uVar2 = uVar1;
  func_0x000107c613fc();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110528800;
  *param_1 = uVar2;
  return;
}



/* Entry: 1025f4be0; end: 1025f4c43;  */

void FUN_1025f4be0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025f4c44; end: 1025f4cbb;  */

void FUN_1025f4c44(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(&uStack_38);
  func_0x000107c61574(uVar1);
  func_0x000107c4bf40(uStack_38);
  func_0x000107c615e8(uStack_38);
  return;
}



/* Entry: 1025f4cbc; end: 1025f4cff;  */

void FUN_1025f4cbc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025f4d00; end: 1025f4d87;  */

void FUN_1025f4d00(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(&uStack_38);
  func_0x000107c61574(uVar1);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c4bb64(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1025f4d88; end: 1025f4da7;  */

void FUN_1025f4d88(void)

{
  FUN_1025f4c44();
  return;
}



/* Entry: 1025f4da8; end: 1025f4daf;  */

void FUN_1025f4da8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1025f0a84(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1025f4db0; end: 1025f4df7;  */

undefined8 FUN_1025f4db0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112dd5410;
  func_0x0001000285a8(0x112dd5410,&UNK_10d997830);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1025f4df8; end: 1025f501f;  */

void FUN_1025f4df8(long param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 *extraout_x8;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_4588 [6096];
  undefined1 auStack_2db8 [2744];
  undefined1 auStack_2300 [2936];
  undefined8 uStack_1788;
  undefined8 uStack_1780;
  undefined8 uStack_1778;
  undefined8 uStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  undefined8 uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  undefined8 uStack_1740;
  undefined8 uStack_1738;
  undefined8 uStack_1730;
  undefined8 uStack_1728;
  undefined8 uStack_1720;
  undefined8 uStack_1718;
  undefined8 uStack_1710;
  undefined8 uStack_1708;
  undefined8 uStack_1700;
  undefined8 uStack_16f8;
  undefined8 uStack_16f0;
  undefined8 uStack_16e8;
  undefined8 uStack_16e0;
  undefined8 uStack_16d8;
  undefined8 uStack_16d0;
  undefined8 uStack_16c8;
  undefined8 uStack_16c0;
  undefined8 uStack_16b0;
  undefined8 uStack_16a8;
  undefined8 uStack_16a0;
  undefined8 uStack_1698;
  undefined8 uStack_1690;
  undefined8 uStack_1688;
  undefined1 auStack_1680 [2744];
  undefined1 auStack_bc8 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = 0;
  func_0x000100b91d00();
  uVar5 = *(undefined8 *)(param_1 + *(int *)(lVar2 + 0x48));
  func_0x0001018a91f0(auStack_1680);
  func_0x000107c610b4(auStack_2db8,auStack_1680,0xab2);
  func_0x00010189b438(auStack_bc8);
  func_0x000107c610b4(auStack_2300,auStack_bc8,0xb78);
  uStack_1780 = 0;
  uStack_1788 = 0;
  uStack_1778 = 1;
  uStack_1768 = 0;
  uStack_1770 = 0;
  uStack_1758 = 0;
  uStack_1760 = 0;
  uStack_1748 = 0;
  uStack_1750 = 0;
  uStack_1738 = 0;
  uStack_1740 = 0;
  uStack_1730 = 0;
  uStack_1728 = 1;
  uStack_1718 = 0;
  uStack_1720 = 0;
  uStack_1708 = 0;
  uStack_1710 = 0;
  uStack_16f8 = 0;
  uStack_1700 = 0;
  uStack_16e8 = 0;
  uStack_16f0 = 0;
  uStack_16d8 = 0;
  uStack_16e0 = 0;
  uStack_16c8 = 0;
  uStack_16d0 = 0;
  uStack_16c0 = 1;
  uStack_16a8 = 0;
  uStack_16b0 = 0;
  uStack_16a0 = 0;
  uStack_1698 = 1;
  uStack_1688 = 0;
  uStack_1690 = 0;
  func_0x00010422af04(auStack_4588,0,0,0,0,0,uVar5,0x17,0,0,auStack_2db8,auStack_2300,&uStack_1788,2
                      ,0,&uStack_1760,0,0,0,1,0);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = *(ulong **)(param_1 + 0x30);
  lVar2 = 0;
  func_0x00010423cab0();
  func_0x000101681be8(param_1,(long)extraout_x8 + (long)*(int *)(lVar2 + 0x30));
  puVar3 = puVar1;
  func_0x000107c61434();
  func_0x00010420cd10();
  uVar4 = *puVar3;
  func_0x00010420cd1c();
  *(ulong *)((long)extraout_x8 + (long)*(int *)(lVar2 + 0x38)) = *puVar3 | uVar4;
  *extraout_x8 = uVar5;
  extraout_x8[1] = puVar1;
  *(undefined1 *)(extraout_x8 + 2) = 0;
  func_0x000107c610b4(extraout_x8 + 3,auStack_4588,0x17d0);
  extraout_x8[0x2fe] = 0;
  extraout_x8[0x2fd] = 0;
  extraout_x8[0x300] = 0;
  extraout_x8[0x2ff] = 0;
  extraout_x8[0x301] = 0;
  *(undefined1 *)(extraout_x8 + 0x302) = 1;
  *(undefined8 *)((long)extraout_x8 + (long)*(int *)(lVar2 + 0x34)) = 0;
  return;
}



/* Entry: 1025f5020; end: 1025f502f;  */

void FUN_1025f5020(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025f5030; end: 1025f5063;  */

void FUN_1025f5030(void)

{
  func_0x000107c61168(&PTR_PTR_112eae738);
  return;
}



/* Entry: 1025f5064; end: 1025f5377;  */

undefined8 FUN_1025f5064(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  byte abStack_7f [7];
  long lStack_78;
  long *plStack_70;
  long lStack_68;
  
  lVar5 = 0;
  func_0x0001042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&lStack_90 + lVar4;
  lVar6 = 0;
  func_0x0001042dde50();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar11 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(param_2 + 0x10);
  if (lVar13 != 0) {
    lVar12 = 0;
    lVar6 = (long)*(int *)(lVar6 + 0x14);
    param_2 = param_2 + ((ulong)*(byte *)(extraout_x12 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(extraout_x12 + 0x50) ^ 0xffffffffffffffff));
    plStack_70 = (long *)(param_1 + 0x28);
    lStack_68 = *(long *)(extraout_x12 + 0x48);
    lStack_90 = param_2;
    lStack_88 = lVar6;
    lStack_80 = lVar13;
    lStack_78 = lVar5;
    do {
      FUN_1025f5378(param_2 + lStack_68 * lVar12,lVar11,&SUB_1042dde50);
      FUN_1025f5378(lVar11 + lVar6,lVar10,&SUB_1042dddf8);
      lVar7 = lVar10;
      func_0x000107c614c4(lVar10,lVar5);
      if ((int)lVar7 == 1) {
        uVar14 = *(undefined8 *)((long)&lStack_88 + lVar4);
        bVar3 = abStack_7f[lVar4];
        uVar15 = *(undefined8 *)((long)&lStack_78 + lVar4);
        uVar1 = 0x646564696c6c6f63;
        if (bVar3 != 5) {
          uVar1 = 0x74726f7077656976;
        }
        lVar5 = -0x1800000000000000;
        if (bVar3 != 5) {
          lVar5 = -0x109b9a8b969296b4;
        }
        uVar8 = 0x79426e6564646968;
        if (bVar3 != 3) {
          uVar8 = 0x6165466e49746f6e;
        }
        lVar13 = -0x15ffffffffffb6ab;
        if (bVar3 != 3) {
          lVar13 = -0x108b9aac9a8d8a8c;
        }
        if (bVar3 < 5) {
          lVar5 = lVar13;
          uVar1 = uVar8;
        }
        uVar8 = 0x656956664f74756f;
        if (bVar3 != 1) {
          uVar8 = 0x646564756c63636f;
        }
        lVar13 = -0x12ffff8b8d908f89;
        if (bVar3 != 1) {
          lVar13 = -0x1800000000000000;
        }
        uVar2 = 0x7465736e75;
        if (bVar3 != 0) {
          uVar2 = uVar8;
        }
        lVar6 = -0x1b00000000000000;
        if (bVar3 != 0) {
          lVar6 = lVar13;
        }
        if (bVar3 < 3) {
          lVar5 = lVar6;
          uVar1 = uVar2;
        }
        lVar13 = *(long *)(param_1 + 0x10) + 1;
        plVar9 = plStack_70;
        do {
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) {
            func_0x000107c6142c(uVar15);
            func_0x000107c6142c(uVar14);
            func_0x0001025f53bc(lVar11,&SUB_1042dde50);
            func_0x000107c6142c(lVar5);
            return 1;
          }
          uVar8 = plVar9[-1];
          lVar6 = *plVar9;
          if (uVar8 == uVar1 && lVar6 == lVar5) break;
          plVar9 = plVar9 + 2;
          func_0x000107c605b8(uVar8,lVar6,uVar1,lVar5,0);
        } while ((uVar8 & 1) == 0);
        func_0x000107c6142c(uVar15);
        func_0x000107c6142c(uVar14);
        func_0x0001025f53bc(lVar11,&SUB_1042dde50);
        func_0x000107c6142c(lVar5);
        lVar5 = lStack_78;
        param_2 = lStack_90;
        lVar13 = lStack_80;
        lVar6 = lStack_88;
      }
      else {
        func_0x0001025f53bc(lVar11,&SUB_1042dde50);
        func_0x0001025f53bc(lVar10,&SUB_1042dddf8);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar13);
  }
  return 0;
}



/* Entry: 1025f5378; end: 1025f53f7;  */

undefined8 FUN_1025f5378(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1025f53f8; end: 1025f556f;  */

undefined8 FUN_1025f53f8(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x12;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x0001042dde50();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(param_1 + 0x10);
  if ((lVar6 != 0) && (lVar8 = *(long *)(param_2 + 0x10), lVar8 != 0)) {
    lVar9 = 0;
    lStack_78 = (long)*(int *)(lVar2 + 0x14);
    lStack_68 = param_2 + ((ulong)*(byte *)(extraout_x12 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(extraout_x12 + 0x50) ^ 0xffffffffffffffff));
    lStack_70 = *(long *)(extraout_x12 + 0x48);
    do {
      uVar3 = lStack_68 + lStack_70 * lVar9;
      puVar5 = puVar7;
      FUN_1025f5378();
      lVar9 = lVar9 + 1;
      func_0x0001042dd02c();
      lVar2 = lVar6 + 1;
      plVar10 = (long *)(param_1 + 0x28);
      while (lVar2 = lVar2 + -1, lVar2 != 0) {
        uVar4 = plVar10[-1];
        puVar1 = (undefined1 *)*plVar10;
        if (uVar4 == uVar3 && puVar1 == puVar5) goto LAB_1025f5534;
        plVar10 = plVar10 + 2;
        func_0x000107c605b8(uVar4,puVar1,uVar3,puVar5,0);
        if ((uVar4 & 1) != 0) {
LAB_1025f5534:
          func_0x0001025f53bc(puVar7,&SUB_1042dde50);
          func_0x000107c6142c(puVar5);
          return 1;
        }
      }
      func_0x0001025f53bc(puVar7,&SUB_1042dde50);
      func_0x000107c6142c(puVar5);
    } while (lVar9 != lVar8);
  }
  return 0;
}



/* Entry: 1025f5570; end: 1025f5607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025f5570(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eae790) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025f5608; end: 1025f5667; -[SCMapAdsStudyConfigurationServices init] */

void FUN_1025f5608(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAdsStudyConfigurationServices.MapAdsStudyConfigurationServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025f5634);
  (*pcVar1)();
}



/* Entry: 1025f5668; end: 1025f5677; -[SCMapAdsStudyConfigurationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025f5668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eae790));
  return;
}



/* Entry: 1025f5678; end: 1025f5697;  */

void FUN_1025f5678(void)

{
  func_0x000107c61168(&PTR_PTR_112853a18);
  return;
}



/* Entry: 1025f5698; end: 1025f572f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025f5698(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eae7c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025f5730; end: 1025f578f; -[MapAdsPromotedPlaceLoggerServices init] */

void FUN_1025f5730(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAdsPromotedPlaceLoggerServices.MapAdsPromotedPlaceLoggerServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025f575c);
  (*pcVar1)();
}



/* Entry: 1025f5790; end: 1025f579f; -[MapAdsPromotedPlaceLoggerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025f5790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eae7c0));
  return;
}



/* Entry: 1025f57a0; end: 1025f57bf;  */

void FUN_1025f57a0(void)

{
  func_0x000107c61168(&PTR_PTR_112853ad8);
  return;
}



/* Entry: 1025f57c0; end: 1025f57eb;  */

void FUN_1025f57c0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1025f59f0();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1025f57ec; end: 1025f593f;  */

undefined1  [16] FUN_1025f57ec(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lStack_18;
  
  if (param_1 < 4) {
    if (param_1 < 2) {
      if (param_1 == 0) {
        auVar4._8_8_ = 0x800000010f0b2b00;
        auVar4._0_8_ = 0xd000000000000017;
        return auVar4;
      }
      if (param_1 == 1) {
        pcVar2 = "Invalid Banner Metadata: Missing Profile ID";
LAB_1025f58a4:
        auVar6._8_8_ = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
        auVar6._0_8_ = 0xd00000000000002b;
        return auVar6;
      }
    }
    else {
      if (param_1 == 2) {
        pcVar2 = "Invalid Banner Metadata: Missing Attachment";
        goto LAB_1025f58a4;
      }
      if (param_1 == 3) {
        auVar7._8_8_ = 0x800000010f0b3340;
        auVar7._0_8_ = 0xd00000000000002d;
        return auVar7;
      }
    }
  }
  else {
    if (5 < param_1) {
      if (param_1 == 6) {
        pcVar2 = "Invalid Banner Metadata: Missing ProfileInfo";
      }
      else {
        if (param_1 == 7) {
          auVar3._8_8_ = 0x800000010f0b3270;
          auVar3._0_8_ = 0xd000000000000025;
          return auVar3;
        }
        if (param_1 != 8) goto LAB_1025f5910;
        pcVar2 = "Invalid Banner Metadata: Missing Preferences";
      }
      auVar8._8_8_ = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
      auVar8._0_8_ = 0xd00000000000002c;
      return auVar8;
    }
    if (param_1 == 4) {
      auVar5._8_8_ = 0x800000010f0b3310;
      auVar5._0_8_ = 0xd000000000000027;
      return auVar5;
    }
    if (param_1 == 5) {
      auVar9._8_8_ = 0x800000010f0b32d0;
      auVar9._0_8_ = 0xd000000000000039;
      return auVar9;
    }
  }
LAB_1025f5910:
  lStack_18 = param_1;
  func_0x000107c60614(&UNK_110528920,&lStack_18,&UNK_110528920,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025f5940);
  (*pcVar1)();
}



/* Entry: 1025f5940; end: 1025f59ef;  */

void FUN_1025f5940(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001025f5a00();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1025f59f0; end: 1025f5a13;  */

undefined1  [16] FUN_1025f59f0(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 5) {
    uVar1 = param_1;
  }
  auVar2[8] = 4 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1025f5a14; end: 1025f5a53;  */

void FUN_1025f5a14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eae7f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac2a20;
  func_0x000107c61520(&UNK_10dac2a20,&UNK_1105288e0);
  puRam0000000112eae7f0 = puVar1;
  return;
}



/* Entry: 1025f5a54; end: 1025f5a57;  */

void FUN_1025f5a54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eae7f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac2ac0;
  func_0x000107c61520(&UNK_10dac2ac0,&UNK_110528900);
  puRam0000000112eae7f8 = puVar1;
  return;
}



/* Entry: 1025f5a58; end: 1025f5a97;  */

void FUN_1025f5a58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eae7f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac2ac0;
  func_0x000107c61520(&UNK_10dac2ac0,&UNK_110528900);
  puRam0000000112eae7f8 = puVar1;
  return;
}



/* Entry: 1025f5a98; end: 1025f5a9b;  */

void FUN_1025f5a98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eae800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac2b60;
  func_0x000107c61520(&UNK_10dac2b60,&UNK_110528920);
  puRam0000000112eae800 = puVar1;
  return;
}



/* Entry: 1025f5a9c; end: 1025f5adb;  */

void FUN_1025f5a9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eae800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac2b60;
  func_0x000107c61520(&UNK_10dac2b60,&UNK_110528920);
  puRam0000000112eae800 = puVar1;
  return;
}



/* Entry: 1025f5adc; end: 1025f5adf;  */

void FUN_1025f5adc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eae808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac2c00;
  func_0x000107c61520(&UNK_10dac2c00,&UNK_110528940);
  puRam0000000112eae808 = puVar1;
  return;
}



/* Entry: 1025f5ae0; end: 1025f5b1f;  */

void FUN_1025f5ae0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eae808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac2c00;
  func_0x000107c61520(&UNK_10dac2c00,&UNK_110528940);
  puRam0000000112eae808 = puVar1;
  return;
}



/* Entry: 1025f5b20; end: 1025f5bb7;  */

undefined1  [16] FUN_1025f5b20(void)

{
  return ZEXT816(0x1105288e0);
}



/* Entry: 1025f5bb8; end: 1025f5c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025f5bb8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eae810) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025f5c04; end: 1025f5c63; -[SponsoredTrackerServices init] */

void FUN_1025f5c04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredTrackerServices.SponsoredTrackerServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025f5c30);
  (*pcVar1)();
}



/* Entry: 1025f5c64; end: 1025f5c73; -[SponsoredTrackerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025f5c64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eae810));
  return;
}



/* Entry: 1025f5c74; end: 1025f5d1b;  */

int FUN_1025f5c74(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 2)) {
    uVar1 = *(byte *)(param_1 + 2) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1025f5d1c; end: 1025f5e7b;  */

void FUN_1025f5d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110528b70;
  func_0x000107c613fc(&UNK_110528b70,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x0001000285a8(0x112eae840,&UNK_10dac2ed0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001002acf1c(FUN_1025f5e7c,puVar1);
  return;
}



/* Entry: 1025f5e7c; end: 1025f5e87;  */

void FUN_1025f5e7c(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_1025f6470();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x10) = uStack_58;
  *(undefined8 *)(lVar2 + 0x18) = uStack_48;
  *(undefined8 *)(lVar2 + 0x20) = uStack_60;
  *(undefined8 *)(lVar2 + 0x28) = uStack_50;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110528b88;
  *param_1 = lVar2;
  return;
}



/* Entry: 1025f5e88; end: 1025f5faf;  */

void FUN_1025f5e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 1025f5fb0; end: 1025f6317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025f5fb0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar6 = &uStack_80;
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5c42c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      puVar5 = &UNK_110528bf0;
      puVar4 = puVar5;
      func_0x000107c613fc(&UNK_110528bf0,0x18,7);
      func_0x000107c61644(puVar4 + 0x10,param_1);
      func_0x000107c613fc(&UNK_110528bf0,0x18,7);
      func_0x000107c61644(puVar5 + 0x10,param_1);
      uStack_80 = 0x1025f6490;
      uStack_70 = 0x1025f64bc;
      puStack_78 = puVar4;
      puStack_68 = puVar5;
      func_0x0001000285a8(0x112eae910,&UNK_10dac2f70);
      func_0x000107c610f8();
      func_0x000107c6157c(puVar4);
      func_0x000107c6157c(puVar5);
      func_0x000107c5f458();
      func_0x000107c61174();
      puVar7 = (undefined1 *)puVar6;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar7 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1025f6308);
        (*pcVar1)();
      }
      puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c3fa94();
      func_0x000107c61180();
      func_0x000107c52b50(puVar7);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar8);
      puVar7 = (undefined1 *)puVar6;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar7 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1025f630c);
        (*pcVar1)();
      }
      func_0x000107c5a050();
      func_0x000107c61170(puVar7);
      puVar7 = (undefined1 *)puVar6;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar7 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1025f6310);
        (*pcVar1)();
      }
      func_0x000107c3d89c(lVar3);
      func_0x000107c61170();
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(puVar7 + 0x18) = 5;
      *(undefined8 *)(puVar7 + 0x10) = 2;
      puVar9 = (undefined1 *)puVar6;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar9 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1025f6314);
        (*pcVar1)();
      }
      puVar10 = puVar9;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      lVar2 = lVar3;
      func_0x000107c5ce8c(lVar3);
      func_0x000107c61180();
      puVar9 = puVar10;
      func_0x000107c40284(0xc030000000000000);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      func_0x000107c61170(lVar2);
      *(undefined1 **)(puVar7 + 0x20) = puVar9;
      puVar9 = (undefined1 *)puVar6;
      func_0x000107c5de64();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      if (puVar9 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1025f6318);
        (*pcVar1)();
      }
      puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      puVar10 = puVar9;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      lVar2 = lVar3;
      func_0x000107c3ec1c(lVar3);
      func_0x000107c61180();
      puVar9 = puVar10;
      func_0x000107c40284(0xc030000000000000);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      func_0x000107c61170(lVar2);
      *(undefined1 **)(puVar7 + 0x28) = puVar9;
      uVar11 = 0;
      func_0x000100847984(0);
      puVar9 = puVar7;
      func_0x000107c5fc48(puVar7,uVar11);
      func_0x000107c61574(puVar7);
      func_0x000107c3d048(puVar8);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(lVar3);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar4);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
      *(undefined8 **)(unaff_x20 + 0x38) = puVar6;
      func_0x000107c61170(uVar11);
    }
  }
  return;
}



/* Entry: 1025f6318; end: 1025f6393;  */

void FUN_1025f6318(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    FUN_1025f7bd4(param_1,param_2,param_3);
    func_0x000107c61574(param_4);
  }
  return;
}



/* Entry: 1025f6394; end: 1025f63df;  */

void FUN_1025f6394(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025f63e0; end: 1025f63e3;  */

void FUN_1025f63e0(void)

{
  return;
}



/* Entry: 1025f63e4; end: 1025f6403;  */

void FUN_1025f63e4(void)

{
  func_0x0001025f5edc();
  return;
}



/* Entry: 1025f6404; end: 1025f6407;  */

void FUN_1025f6404(void)

{
  return;
}



/* Entry: 1025f6408; end: 1025f6457;  */

void FUN_1025f6408(int param_1)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  func_0x000109021904();
  if (((param_1 != 0) && (func_0x00010902190c(), param_1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) {
    func_0x000107c6157c(lVar1);
    FUN_1025f5fb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1025f6458; end: 1025f646f;  */

void FUN_1025f6458(void)

{
  return;
}



/* Entry: 1025f6470; end: 1025f6537;  */

void FUN_1025f6470(void)

{
  func_0x000107c61168(&PTR_PTR_112eae888);
  return;
}



/* Entry: 1025f6538; end: 1025f65c7;  */

long FUN_1025f6538(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1025f65c8; end: 1025f662b;  */

undefined8 * FUN_1025f65c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 1025f662c; end: 1025f666f;  */

undefined8 * FUN_1025f662c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1025f6670; end: 1025f6717;  */

int FUN_1025f6670(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1025f6718; end: 1025f722b;  */

void FUN_1025f6718(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 auStack_70 [2];
  
  lVar1 = 0x112eae930;
  func_0x0001000285a8(0x112eae930,&UNK_10dac3018);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar2 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar3 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar4 - extraout_x12_01;
  *(undefined8 *)(lVar5 + -0x10) = param_5;
  func_0x0001025f6904(lVar5,0x13,0x6b726f592077654e,0xe800000000000000,param_2,param_3,param_2,
                      param_3,param_4);
  *(undefined8 *)(lVar5 + -0x10) = param_5;
  func_0x0001025f6904(lVar4,0xbd,0x73656e6e6143,0xe600000000000000,param_4,param_5,param_2,param_3,
                      param_4);
  func_0x000100cfc028(lVar5,lVar3);
  func_0x000100cfc028(lVar4,puVar2);
  func_0x000100cfc028(lVar3,param_1);
  lVar1 = 0x112eae938;
  func_0x0001000285a8(0x112eae938,&UNK_10dac3020);
  func_0x000100cfc028(puVar2,param_1 + *(int *)(lVar1 + 0x30));
  func_0x0001025f78a8(lVar4,0x112eae930,&UNK_10dac3018);
  func_0x0001025f78a8(lVar5,0x112eae930,&UNK_10dac3018);
  func_0x0001025f78a8(puVar2,0x112eae930,&UNK_10dac3018);
  func_0x0001025f78a8(lVar3,0x112eae930,&UNK_10dac3018);
  return;
}



/* Entry: 1025f722c; end: 1025f7357;  */

void FUN_1025f722c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_198 [104];
  undefined *puStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined *puStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c5af98();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    puStack_130 = (undefined *)0x0;
  }
  else {
    func_0x000107c5f6e8();
    puStack_130 = puVar3;
  }
  uVar1 = SUB81(puVar3,0);
  func_0x000107c5f568();
  uVar4 = 0x4028000000000000;
  uVar2 = uVar1;
  func_0x000107c5f280();
  uVar6 = param_3;
  uVar7 = param_4;
  uVar8 = param_5;
  func_0x000107c5f584();
  uVar5 = 0x4020000000000000;
  func_0x000107c5f280();
  uStack_100 = 0;
  uStack_d0 = 0;
  uStack_98 = 0;
  uStack_68 = 0;
  uStack_128 = uVar1;
  uStack_120 = uVar4;
  uStack_118 = param_3;
  uStack_110 = param_4;
  uStack_108 = param_5;
  uStack_f8 = uVar2;
  uStack_f0 = uVar5;
  uStack_e8 = uVar6;
  uStack_e0 = uVar7;
  uStack_d8 = uVar8;
  puStack_c8 = puStack_130;
  uStack_c0 = uVar1;
  uStack_b8 = uVar4;
  uStack_b0 = param_3;
  uStack_a8 = param_4;
  uStack_a0 = param_5;
  uStack_90 = uVar2;
  uStack_88 = uVar5;
  uStack_80 = uVar6;
  uStack_78 = uVar7;
  uStack_70 = uVar8;
  func_0x0001025f78e8(&puStack_130,auStack_198);
  func_0x0001025f7938(&puStack_c8);
  param_1[9] = uStack_e8;
  param_1[8] = uStack_f0;
  param_1[0xb] = uStack_d8;
  param_1[10] = uStack_e0;
  *(undefined1 *)(param_1 + 0xc) = uStack_d0;
  param_1[1] = CONCAT71(uStack_127,uStack_128);
  *param_1 = puStack_130;
  param_1[3] = uStack_118;
  param_1[2] = uStack_120;
  param_1[5] = uStack_108;
  param_1[4] = uStack_110;
  param_1[7] = CONCAT71(uStack_f7,uStack_f8);
  param_1[6] = CONCAT71(uStack_ff,uStack_100);
  return;
}



/* Entry: 1025f7358; end: 1025f7363;  */

void FUN_1025f7358(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 1025f7364; end: 1025f7433;  */

void FUN_1025f7364(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  
  uVar7 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  func_0x000107c5f410();
  *param_1 = param_6;
  param_1[1] = 0x4020000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar6 = 0x112eae920;
  func_0x0001000285a8(0x112eae920,&UNK_10dac3008);
  FUN_1025f6718((long)param_1 + (long)*(int *)(lVar6 + 0x2c),uVar7,uVar3,uVar2,uVar4);
  uVar5 = (undefined1)uVar7;
  func_0x000107c5f56c();
  uVar7 = 0x4020000000000000;
  func_0x000107c5f280();
  lVar6 = 0x112eae928;
  func_0x0001000285a8(0x112eae928,&UNK_10dac3010);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x24));
  *puVar1 = uVar5;
  *(undefined8 *)(puVar1 + 8) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  return;
}



/* Entry: 1025f7434; end: 1025f745b;  */

void FUN_1025f7434(void)

{
  long unaff_x20;
  
  FUN_1025f722c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 1025f745c; end: 1025f74cb;  */

void FUN_1025f745c(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
    puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
    uStack_40 = uVar1;
    func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                        ,param_2,&uStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 1025f74cc; end: 1025f75ef;  */

void FUN_1025f74cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (puRam0000000112eae990 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eae940;
  func_0x00010002969c(0x112eae940,&UNK_10dac3028);
  uVar2 = 0x112eae950;
  func_0x00010002969c(0x112eae950,&UNK_10dac3038);
  uVar3 = 0xff;
  func_0x000107c5f538();
  puVar7 = PTR___s7SwiftUI28BorderedProminentButtonStyleVMa_1103491c0;
  uVar4 = 0x112eae978;
  func_0x0001025f7a18(0x112eae978,0x112eae950,&UNK_10dac3038,
                      PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar5 = 0x112eae980;
  FUN_1025f7610(0x112eae980,puVar7,
                PTR___s7SwiftUI28BorderedProminentButtonStyleVAA09PrimitiveeF0AAMc_1103491b0);
  puVar6 = &uStack_60;
  uStack_60 = uVar2;
  uStack_58 = uVar3;
  uStack_50 = uVar4;
  uStack_48 = uVar5;
  func_0x000107c614f4(puVar6,
                      PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA015PrimitiveButtonE0Rd__lFQOMQ_110349480
                      ,1);
  uVar2 = 0x112d500b8;
  FUN_1025f7610(0x112d500b8,PTR___s7SwiftUI31AccessibilityAttachmentModifierVMa_110349210,
                PTR___s7SwiftUI31AccessibilityAttachmentModifierVAA04ViewE0AAMc_110349208);
  puVar7 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_70 = puVar6;
  uStack_68 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_70);
  puRam0000000112eae990 = puVar7;
  return;
}



/* Entry: 1025f75f0; end: 1025f760f;  */

void FUN_1025f75f0(void)

{
  long unaff_x20;
  
  FUN_1025f722c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 1025f7610; end: 1025f764f;  */

void FUN_1025f7610(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 1025f7650; end: 1025f77cf;  */

void FUN_1025f7650(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  if (puRam0000000112eae9b8 != (undefined *)0x0) {
    return;
  }
  uVar2 = 0x112eae9a0;
  func_0x00010002969c(0x112eae9a0,&UNK_10dac3068);
  uVar3 = 0x112eae9a8;
  func_0x00010002969c(0x112eae9a8,&UNK_10dac3070);
  uVar4 = 0xff;
  func_0x000107c5f784();
  puVar1 = PTR___s7SwiftUI7CapsuleVMa_110349978;
  uVar5 = 0x112eae950;
  func_0x00010002969c(0x112eae950,&UNK_10dac3038);
  uVar6 = 0xff;
  func_0x000107c5f374();
  puVar11 = PTR___s7SwiftUI16PlainButtonStyleVMa_110348b30;
  uVar7 = 0x112eae978;
  func_0x0001025f7a18(0x112eae978,0x112eae950,&UNK_10dac3038,
                      PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar8 = 0x112e02d28;
  FUN_1025f7610(0x112e02d28,puVar11,PTR___s7SwiftUI16PlainButtonStyleVAA09PrimitivedE0AAMc_110348b20
               );
  puVar9 = &uStack_80;
  uStack_80 = uVar5;
  uStack_78 = uVar6;
  puStack_70 = (undefined8 *)uVar7;
  uStack_68 = uVar8;
  func_0x000107c614f4(puVar9,
                      PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA015PrimitiveButtonE0Rd__lFQOMQ_110349480
                      ,1);
  uVar5 = 0x112eae9b0;
  FUN_1025f7610(0x112eae9b0,puVar1,PTR___s7SwiftUI7CapsuleVAA5ShapeAAMc_110349970);
  puVar10 = &uStack_80;
  uStack_80 = uVar3;
  uStack_78 = uVar4;
  puStack_70 = puVar9;
  uStack_68 = uVar5;
  func_0x000107c614f4(puVar10,
                      PTR___s7SwiftUI4ViewPAAE11glassEffect_2inQrAA5GlassV_qd__tAA5ShapeRd__lFQOMQ_1103494a0
                      ,1);
  puStack_88 = PTR___s7SwiftUI14_OpacityEffectVAA12ViewModifierAAWP_1103489e8;
  puVar11 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_90 = puVar10;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar2,&puStack_90);
  puRam0000000112eae9b8 = puVar11;
  return;
}



/* Entry: 1025f77d0; end: 1025f7a5b;  */

undefined8 FUN_1025f77d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1025f7a5c; end: 1025f7a5f;  */

void FUN_1025f7a5c(void)

{
  long unaff_x20;
  
  FUN_1025f722c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 1025f7a60; end: 1025f7bd3;  */

void FUN_1025f7a60(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c43e84();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c4984c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    puVar3 = &UNK_110528d80;
    func_0x000107c613fc(&UNK_110528d80,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_40 = FUN_1025f9db4;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1011314a8;
    puStack_48 = &UNK_110528e88;
    ppuVar4 = &puStack_60;
    puStack_38 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_38);
    lVar2 = lVar1;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar1);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  *(long *)(unaff_x20 + 0x48) = lVar2;
  func_0x000107c61170(uVar5);
  FUN_1025f878c();
  func_0x000107c6157c();
  uVar5 = 0x20;
  func_0x0001001ca524(0x20,0,0x3c,4,0,0,&UNK_10dac31c0);
  func_0x000107c61574();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar5;
  func_0x000107c61574(uVar6);
  return;
}



/* Entry: 1025f7bd4; end: 1025f7d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025f7bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  FUN_1025f878c();
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4c458();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    puVar3 = &UNK_110528d80;
    func_0x000107c613fc(&UNK_110528d80,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_70 = FUN_1025f9c90;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f3aa0;
    puStack_78 = &UNK_110528d98;
    ppuVar4 = &puStack_90;
    puStack_68 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_68);
    func_0x000107c4371c(param_1,param_2,param_3,0,0x3ff0000000000000,lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1025f7d2c; end: 1025f7d7b; -[_TtCC26MapKioskModeImplementation27MapKioskModeViewportManagerP33_EEF58E686BA84DC0E1A6B3876B42154518DisplayLinkWrapper tick:] */

void FUN_1025f7d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  (*pcVar1)(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1025f7d7c; end: 1025f7d9f;  */

void FUN_1025f7d7c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025f7da0; end: 1025f7db3;  */

bool FUN_1025f7da0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1025f7db4; end: 1025f7e5f;  */

void FUN_1025f7db4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1025f7e60; end: 1025f7ea3;  */

undefined4 FUN_1025f7e60(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x676e6c;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6d6f6f7a;
  }
  uVar2 = 0x74616c;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 1025f7ea4; end: 1025f7ec7;  */

void FUN_1025f7ea4(undefined1 *param_1,undefined1 param_2)

{
  FUN_1025f99bc();
  *param_1 = param_2;
  return;
}



/* Entry: 1025f7ec8; end: 1025f7edf;  */

undefined1  [16] FUN_1025f7ec8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1025f7ee0; end: 1025f7f2f;  */

void FUN_1025f7ee0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1025f9c50();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1025f7f30; end: 1025f8093;  */

void FUN_1025f7f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_70 [13];
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  lVar3 = 0x112eaeb80;
  func_0x0001000285a8(0x112eaeb80,&UNK_10dac31a0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_70 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  uVar2 = *(undefined8 *)(param_4 + 0x20);
  func_0x0001000a8868(param_4,uVar1);
  FUN_1025f9c50();
  func_0x000107c606ec(puVar4,&UNK_110529160,&UNK_110529160,param_4,uVar1,uVar2);
  uStack_61 = 0;
  func_0x000107c60544(param_1,&uStack_61,lVar3);
  if (unaff_x21 == 0) {
    uStack_62 = 1;
    func_0x000107c60544(param_2,&uStack_62,lVar3);
    uStack_63 = 2;
    func_0x000107c60544(param_3,&uStack_63,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 1025f8094; end: 1025f80bf;  */

void FUN_1025f8094(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  
  FUN_1025f9ad0();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
  }
  return;
}



/* Entry: 1025f80c0; end: 1025f80db;  */

void FUN_1025f80c0(void)

{
  undefined8 *unaff_x20;
  
  FUN_1025f7f30(*unaff_x20,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Entry: 1025f80dc; end: 1025f83a3;  */

/* WARNING: Removing unreachable block (ram,0x0001025f8314) */

void FUN_1025f80dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  func_0x000107c5fb10();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar11 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *(undefined1 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174();
  uStack_80 = param_4;
  func_0x00010902192c();
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  func_0x000109021934();
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  lVar9 = param_2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1025f83a4);
    (*pcVar1)();
  }
  uVar7 = 0x800000010f0b3410;
  uVar3 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028);
  lVar4 = lVar9;
  func_0x000107c5c1e0();
  func_0x000107c61180();
  func_0x000107c615e8(lVar9);
  func_0x000107c61170(uVar3);
  if (lVar4 == 0) {
    func_0x000107c61170(uStack_80);
    func_0x000107c61170(param_2);
  }
  else {
    lVar9 = lVar4;
    uStack_88 = param_3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
    lStack_70 = lVar9;
    uStack_68 = uVar7;
    func_0x000107c5fb04(puVar11);
    func_0x000100e8b654();
    uVar8 = 0;
    puVar5 = puVar11;
    func_0x000107c60214(puVar11,0,PTR___sSSN_11034da80,lVar4);
    (**(code **)(lVar10 + 8))(puVar11,lVar2);
    func_0x000107c6142c(uVar7);
    if (uVar8 >> 0x3c < 0xf) {
      uVar6 = 0;
      func_0x000107c5eb24();
      func_0x000107c613fc();
      func_0x000107c5eb20();
      uVar3 = 0x112eaeb88;
      func_0x0001000285a8(0x112eaeb88,&UNK_10dac31e0);
      uVar7 = uVar3;
      FUN_1025f9f78();
      func_0x000107c5eb1c(&lStack_70,uVar3,puVar5,uVar8,uVar3,uVar7);
      func_0x0001000b44c0(puVar5,uVar8);
      func_0x000107c61170(uStack_88);
      func_0x000107c61170(uStack_80);
      lVar9 = lStack_70;
      func_0x000107c61574(uVar6);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      goto LAB_1025f8378;
    }
    func_0x000107c61170(uStack_80);
    func_0x000107c61170(param_2);
    param_3 = uStack_88;
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  lVar9 = 0;
LAB_1025f8378:
  *(long *)(unaff_x20 + 0x28) = lVar9;
  return;
}


