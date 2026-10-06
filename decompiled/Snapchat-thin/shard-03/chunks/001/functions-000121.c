/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10257b364; end: 10257b4d7;  */

void FUN_10257b364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = param_2;
  func_0x000107c5fadc(param_2,param_3);
  uVar2 = uVar4;
  func_0x000107c5efd4();
  func_0x000107c417dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  lVar3 = unaff_x20;
  func_0x000107c614a0(unaff_x20,param_5);
  if (lVar3 != 0) {
    return;
  }
  func_0x000107c61170(unaff_x20);
  func_0x000107c602fc(0x36);
  func_0x000107c5fb78(0xd000000000000027,0x800000010f0aa990);
  func_0x000107c5fb78(param_2,param_3);
  func_0x000107c5fb78(0x70797420726f6620,0xeb00000000203a65);
  uVar4 = 0;
  func_0x000107c60714(param_1,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "UIKitExtensions/UITableViewCell+Generic.swift",0x2d,2,10,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257b4d8);
  (*pcVar1)();
}



/* Entry: 10257b4d8; end: 10257b5cf;  */

void FUN_10257b4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c614e8();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c4fbd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10257b5d0; end: 10257b5df;  */

undefined1  [16] FUN_10257b5d0(void)

{
  return ZEXT816(0x110521ad8);
}



/* Entry: 10257b5e0; end: 10257b60b;  */

void FUN_10257b5e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10257b60c; end: 10257b6a7;  */

void FUN_10257b60c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *param_2;
  func_0x0001000285a8(0x112ea65b0,&UNK_10dab9408);
  puVar2 = &uStack_48;
  uStack_48 = uVar4;
  func_0x0001000838ec(puVar2);
  FUN_10257ba14(uVar3,puVar2,uVar1);
  func_0x000107c61574(puVar2);
  func_0x000100082720("SecondaryLocationDevicePromptPresenterEntryPointProvider",0x38,2);
  *param_1 = uVar3;
  return;
}



/* Entry: 10257b6a8; end: 10257b80f;  */

/* WARNING: Possible PIC construction at 0x00010257b720: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010257b724) */
/* WARNING: Removing unreachable block (ram,0x00010257b738) */
/* WARNING: Removing unreachable block (ram,0x00010257b74c) */

void FUN_10257b6a8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1d40;
  func_0x000107c610f8(PTR_PTR_1126b1d40);
  func_0x000107c453e4();
  func_0x000107c56288();
  func_0x000107c56780(puVar1);
  uVar2 = 0x445f484354495753;
  func_0x000107c5fadc(0x445f484354495753,0xed00004543495645);
  func_0x000107c56788(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10257b810; end: 10257b853;  */

void FUN_10257b810(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10257b854; end: 10257b8a7;  */

void FUN_10257b854(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x00010033adfc(0);
  func_0x000107c610f8();
  func_0x0001038b5f50(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10257b8a8; end: 10257b8af;  */

void FUN_10257b8a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x00010033adfc(0);
  func_0x000107c610f8();
  func_0x0001038b5f50(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10257b8b0; end: 10257b8fb;  */

void FUN_10257b8b0(long *param_1,long param_2)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_10257b9f4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_28;
  *param_1 = param_2;
  return;
}



/* Entry: 10257b8fc; end: 10257b903;  */

void FUN_10257b8fc(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_10257b9f4();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10257b904; end: 10257b933;  */

void FUN_10257b904(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10257b934; end: 10257b9af; -[_TtC29SecondaryLocationDevicePrompt36SecondaryLocationDevicePromptBuilder build:] */

void FUN_10257b934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 10257b9b0; end: 10257b9d3;  */

void FUN_10257b9b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10257b9d4; end: 10257b9f3;  */

undefined1  [16] FUN_10257b9d4(void)

{
  return ZEXT816(0x110521bc0);
}



/* Entry: 10257b9f4; end: 10257ba13;  */

void FUN_10257b9f4(void)

{
  func_0x000107c61168(&PTR_PTR_112ea66a8);
  return;
}



/* Entry: 10257ba14; end: 10257bb27;  */

void FUN_10257ba14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea6708,&UNK_10dab9570);
  puVar1 = &UNK_110521c00;
  func_0x000107c613fc(&UNK_110521c00,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_10257bb28,puVar1);
  return;
}



/* Entry: 10257bb28; end: 10257bb33;  */

void FUN_10257bb28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = uVar1;
  FUN_10257cb60();
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  FUN_10257c9e0(uVar1,uVar2,uVar4);
  *param_1 = uVar3;
  return;
}



/* Entry: 10257bb34; end: 10257bc33;  */

undefined8 FUN_10257bb34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10257c9e0(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 10257bc34; end: 10257bd97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10257bc34(double param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_80 [8];
  long alStack_78 [3];
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    func_0x000100083b20(alStack_78);
    plVar1 = (long *)(alStack_78[0] + _DAT_112fa90e8);
    func_0x000107c61428(plVar1,alStack_78,0,0);
    lVar5 = *plVar1;
    lVar2 = plVar1[1];
    func_0x000107c61170(alStack_78[0]);
    if ((char)lVar2 == '\x01') {
      func_0x000107c5eea0(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee54();
      (**(code **)(lVar6 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
      param_1 = param_1 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10257bd90);
        (*pcVar3)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10257bd94);
        (*pcVar3)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10257bd98);
        (*pcVar3)();
      }
      lVar5 = (long)param_1;
    }
    *(long *)(unaff_x20 + 0x38) = lVar5;
    *(undefined1 *)(unaff_x20 + 0x40) = 0;
  }
  else {
    lVar5 = *(long *)(unaff_x20 + 0x38);
  }
  return lVar5;
}



/* Entry: 10257bd98; end: 10257c147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257bd98(void)

{
  ulong uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 auStack_d0 [24];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  puVar11 = auStack_d0;
  func_0x000100083b20(&puStack_b8);
  lVar10 = _DAT_112fa90d8;
  func_0x000107c61428(puStack_b8 + _DAT_112fa90d8,auStack_88,0,0);
  uVar14 = *(undefined8 *)(puStack_b8 + lVar10);
  func_0x000107c615f0(uVar14);
  func_0x000107c61170();
  func_0x000100de9c28();
  lVar10 = ((ulong)*(uint *)(puStack_b8 + 0x30) + 7 & 0x1fffffff8) + 8;
  puVar3 = puStack_b8;
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 3;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar4 = puVar3;
  FUN_10257df38();
  puVar9 = &UNK_110521c48;
  func_0x000107c613fc(&UNK_110521c48,0x18,7);
  func_0x000107c61644(puVar9 + 0x10);
  func_0x000107c6157c(puVar9);
  func_0x000107c5fadc(puVar4,lVar10);
  func_0x000107c6142c(lVar10);
  pcStack_98 = (code *)0x10257cb80;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_100de205c;
  puStack_a0 = &UNK_110521c60;
  ppuVar5 = &puStack_b8;
  puStack_90 = puVar9;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  puVar7 = puVar6;
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar4);
  puVar4 = puStack_90;
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar4);
  *(undefined **)(puVar3 + 0x20) = puVar7;
  func_0x000100083b20(&puStack_b8);
  puVar9 = puStack_b8;
  lVar10 = _DAT_112fa90f8;
  func_0x000107c61428(puStack_b8 + _DAT_112fa90f8,auStack_d0,0,0);
  cVar2 = puVar9[lVar10];
  func_0x000107c61170(puVar9);
  puVar12 = puVar11;
  if (cVar2 == '\x01') {
    func_0x00010257e004();
    puVar4 = &UNK_110521c48;
    func_0x000107c613fc(&UNK_110521c48,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    func_0x000107c6157c(puVar4);
    puVar12 = puVar11;
    func_0x000107c5fadc(puVar9,puVar11);
    func_0x000107c6142c(puVar11);
    pcStack_98 = FUN_10257cbbc;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_100de205c;
    puStack_a0 = &UNK_110521c88;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar9);
    puVar9 = puStack_90;
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar9);
    uVar13 = (ulong)puVar3 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar13 + 0x10);
    puVar11 = (undefined1 *)(uVar1 + 1);
    if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar1) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
      puVar12 = puVar11;
      func_0x00010108329c(puVar9,puVar11,1,puVar3);
      uVar13 = (ulong)puVar9 & 0xffffffffffffff8;
      puVar3 = puVar9;
    }
    *(undefined1 **)(uVar13 + 0x10) = puVar11;
    *(undefined **)(uVar13 + uVar1 * 8 + 0x20) = puVar6;
  }
  func_0x00010257e0d0();
  puVar4 = puVar9;
  puVar11 = puVar12;
  func_0x00010257e19c();
  puVar6 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c5fadc(puVar9,puVar12);
  func_0x000107c6142c(puVar12);
  func_0x000107c5fadc(puVar4,puVar11);
  func_0x000107c6142c(puVar11);
  uVar8 = 0;
  func_0x000100dfe1a0(0);
  puVar7 = puVar3;
  func_0x000107c5fc48(puVar3,uVar8);
  func_0x000107c48d50(puVar6);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c3e2c0(uVar14);
  func_0x000107c6142c(puVar3);
  func_0x000107c615e8(uVar14);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 10257c148; end: 10257c3bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257c148(void)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long extraout_x8;
  long extraout_x12;
  code *pcVar8;
  long unaff_x20;
  long lVar9;
  undefined8 *puVar10;
  long alStack_f0 [4];
  long lStack_d0;
  undefined8 auStack_c8 [3];
  long lStack_b0;
  undefined **ppuStack_a8;
  long alStack_a0 [3];
  long lStack_88;
  undefined **ppuStack_80;
  undefined1 auStack_78 [24];
  
  alStack_f0[2] = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(alStack_a0);
  lVar3 = alStack_a0[0];
  lVar9 = _DAT_112fa90f8;
  func_0x000107c61428(alStack_a0[0] + _DAT_112fa90f8,auStack_78,0,0);
  cVar1 = *(char *)(lVar3 + lVar9);
  func_0x000107c61170(lVar3);
  pcVar8 = (code *)0x0;
  lVar9 = 0;
  if (cVar1 == '\x01') {
    func_0x000107c6157c();
    pcVar8 = FUN_10257cdf0;
    lVar9 = unaff_x20;
  }
  func_0x000100083b20(alStack_a0);
  uVar2 = *(undefined8 *)(alStack_a0[0] + _DAT_112fcd710);
  func_0x000107c61174();
  func_0x000107c61170();
  lVar3 = alStack_a0[0];
  func_0x00010257bb88();
  lVar4 = lVar3;
  FUN_10257bc34();
  alStack_f0[1] = *(undefined8 *)(unaff_x20 + 0x48);
  lVar5 = 0;
  func_0x00010257b834();
  ppuStack_80 = &PTR_DAT_110521b90;
  lVar6 = 0;
  alStack_a0[0] = lVar3;
  lStack_88 = lVar5;
  FUN_10257de60();
  lVar3 = lVar6;
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_a0,lVar5);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar10 = (undefined8 *)((long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar10);
  auStack_c8[0] = *puVar10;
  ppuStack_a8 = &PTR_DAT_110521b90;
  *(undefined8 *)(lVar3 + _DAT_112ea67e0) = uVar2;
  lStack_b0 = lVar5;
  FUN_10257cdac(auStack_c8,lVar3 + _DAT_112ea67e8);
  puVar10 = (undefined8 *)(lVar3 + _DAT_112ea6800);
  *puVar10 = pcVar8;
  puVar10[1] = lVar9;
  *(long *)(lVar3 + _DAT_112ea67f0) = lVar4;
  *(long *)(lVar3 + _DAT_112ea67f8) = alStack_f0[1];
  func_0x000100b64c10(pcVar8,lVar9);
  plVar7 = alStack_f0 + 3;
  alStack_f0[3] = lVar3;
  lStack_d0 = lVar6;
  func_0x000107c61154(plVar7,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x0001000834e4(auStack_c8);
  func_0x0001000834e4(alStack_a0);
  func_0x000100083b20(alStack_a0);
  lVar3 = _DAT_112fa90d8;
  func_0x000107c61428(alStack_a0[0] + _DAT_112fa90d8,alStack_a0,0,0);
  uVar2 = *(undefined8 *)(alStack_a0[0] + lVar3);
  func_0x000107c615f0(uVar2);
  func_0x000107c61170(alStack_a0[0]);
  func_0x000107c3e2c0(uVar2);
  func_0x000107c61170(plVar7);
  func_0x000107c615e8(uVar2);
  func_0x00010058d43c(pcVar8,lVar9);
  return;
}



/* Entry: 10257c3c0; end: 10257c44b; -[_TtC29SecondaryLocationDevicePrompt38SecondaryLocationDevicePromptPresenter present] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257c3c0(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long alStack_48 [3];
  
  func_0x000107c6157c();
  func_0x000100083b20(alStack_48);
  lVar2 = _DAT_112fa9100;
  func_0x000107c61428(alStack_48[0] + _DAT_112fa9100,alStack_48,0,0);
  cVar1 = *(char *)(alStack_48[0] + lVar2);
  func_0x000107c61170(alStack_48[0]);
  if (cVar1 == '\x01') {
    FUN_10257bd98();
  }
  else {
    FUN_10257c148();
  }
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 10257c44c; end: 10257c5bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257c44c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long alStack_58 [3];
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = 0x65736f6c63;
  func_0x000107c5fadc(0x65736f6c63,0xe500000000000000);
  func_0x000100083b20(alStack_58);
  puVar1 = (undefined8 *)(alStack_58[0] + _DAT_112fa90e0);
  func_0x000107c61428(puVar1,alStack_58,0,0);
  uVar6 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c61170(alStack_58[0]);
  func_0x000107c5fadc(uVar6,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000105f51dac(uVar7,uVar3,uVar6,1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  puVar4 = &UNK_110521cc0;
  func_0x000107c613fc(&UNK_110521cc0,0x19,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  puVar4[0x18] = 1;
  puVar5 = &UNK_110521ce8;
  func_0x000107c613fc(&UNK_110521ce8,0x20,7);
  *(undefined **)(puVar5 + 0x10) = &UNK_10dab9630;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  func_0x000107c6157c();
  uVar6 = 0x22;
  func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10dab9640,puVar5,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar6);
  return;
}



/* Entry: 10257c5bc; end: 10257c707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257c5bc(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = *(long *)(lStack_38 + _DAT_112fcd710);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x00010257bb88();
    FUN_10257bc34();
    func_0x00010257b760();
    func_0x000107c61574(lVar1);
    func_0x000107c50418(lVar2);
    puVar3 = &UNK_110521d60;
    func_0x000107c613fc(&UNK_110521d60,0x19,7);
    *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
    puVar3[0x18] = 0;
    puVar4 = &UNK_110521d88;
    func_0x000107c613fc(&UNK_110521d88,0x20,7);
    *(undefined **)(puVar4 + 0x10) = &UNK_10dab9648;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    func_0x000107c6157c();
    uVar5 = 0x22;
    func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10dab9650,puVar4,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(lVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(uVar5);
  }
  return;
}



/* Entry: 10257c708; end: 10257c75f;  */

void FUN_10257c708(undefined8 param_1,long param_2,code *param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    (*param_3)();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10257c760; end: 10257c7cf;  */

void FUN_10257c760(undefined8 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10257c7d0,uVar1,uVar2);
  return;
}



/* Entry: 10257c7d0; end: 10257c8f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257c7d0(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  uVar2 = *(undefined1 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar5 = _DAT_112fa90d8;
  lVar7 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61428(lVar7 + _DAT_112fa90d8,unaff_x22 + 0x40,0,0);
  uVar6 = *(undefined8 *)(lVar7 + lVar5);
  func_0x000107c615f0(uVar6);
  func_0x000107c61170(lVar7);
  puVar3 = &UNK_110521c48;
  func_0x000107c613fc(&UNK_110521c48,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,uVar1);
  puVar4 = &UNK_110521d10;
  func_0x000107c613fc(&UNK_110521d10,0x20,7);
  puVar4[0x10] = uVar2;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  *(code **)(unaff_x22 + 0x30) = FUN_10257cca0;
  *(undefined **)(unaff_x22 + 0x38) = puVar4;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_1000b0c7c;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_110521d28;
  lVar5 = unaff_x22 + 0x10;
  func_0x000107c60bc4(lVar5);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c41864(uVar6);
  func_0x000107c60bd0(lVar5);
  func_0x000107c615e8(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010257c8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10257c8f8; end: 10257c9a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257c8f8(ulong param_1,long param_2)

{
  long lVar1;
  long alStack_50 [3];
  undefined1 auStack_38 [24];
  
  if ((param_1 & 1) != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      func_0x000100083b20(alStack_50);
      func_0x000107c61574(param_2);
      lVar1 = _DAT_112fa90f0;
      func_0x000107c61428(alStack_50[0] + _DAT_112fa90f0,alStack_50,0,0);
      lVar1 = alStack_50[0] + lVar1;
      func_0x000107c61618();
      func_0x000107c61170(alStack_50[0]);
      if (lVar1 != 0) {
        func_0x000107c4dd08(lVar1);
        func_0x000107c615e8(lVar1);
      }
    }
  }
  return;
}



/* Entry: 10257c9a4; end: 10257c9df;  */

void FUN_10257c9a4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010257c9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10257c9e0; end: 10257cb0b;  */

void FUN_10257c9e0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = PTR_PTR_1126c5b08;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined **)(unaff_x20 + 0x28) = puVar3;
  *(undefined1 *)(unaff_x20 + 0x40) = 1;
  func_0x000107c5eea0(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee54();
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10257cb04);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      *(long *)(unaff_x20 + 0x48) = (long)param_1;
      *(undefined8 *)(unaff_x20 + 0x10) = param_3;
      *(undefined8 *)(unaff_x20 + 0x18) = param_2;
      *(undefined8 *)(unaff_x20 + 0x20) = param_4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10257cb0c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257cb08);
  (*pcVar1)();
}



/* Entry: 10257cb0c; end: 10257cb4f;  */

void FUN_10257cb0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10257cb50; end: 10257cb5f;  */

undefined1  [16] FUN_10257cb50(void)

{
  return ZEXT816(0x110521c28);
}



/* Entry: 10257cb60; end: 10257cb9f;  */

void FUN_10257cb60(void)

{
  func_0x000107c61168(&PTR_PTR_112ea6750);
  return;
}



/* Entry: 10257cba0; end: 10257cbbb;  */

void FUN_10257cba0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10257cbbc; end: 10257cbdb;  */

void FUN_10257cbbc(void)

{
  FUN_10257c708();
  return;
}



/* Entry: 10257cbdc; end: 10257cc2f;  */

void FUN_10257cbdc(void)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10257ce08;
  *(undefined1 *)(plVar3 + 0xd) = uVar1;
  plVar3[0xb] = lVar4;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar3[0xc] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10257c7d0,lVar2,lVar4);
  return;
}



/* Entry: 10257cc30; end: 10257cc9f;  */

void FUN_10257cc30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10257ce04;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10257cca0; end: 10257ccab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257cca0(void)

{
  long lVar1;
  long unaff_x20;
  long alStack_50 [3];
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
    lVar1 = lVar1 + 0x10;
    func_0x000107c61648();
    if (lVar1 != 0) {
      func_0x000100083b20(alStack_50);
      func_0x000107c61574(lVar1);
      lVar1 = _DAT_112fa90f0;
      func_0x000107c61428(alStack_50[0] + _DAT_112fa90f0,alStack_50,0,0);
      lVar1 = alStack_50[0] + lVar1;
      func_0x000107c61618();
      func_0x000107c61170(alStack_50[0]);
      if (lVar1 != 0) {
        func_0x000107c4dd08(lVar1);
        func_0x000107c615e8(lVar1);
      }
    }
  }
  return;
}



/* Entry: 10257ccac; end: 10257ccff;  */

void FUN_10257ccac(void)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10257cd00;
  *(undefined1 *)(plVar3 + 0xd) = uVar1;
  plVar3[0xb] = lVar4;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar3[0xc] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10257c7d0,lVar2,lVar4);
  return;
}



/* Entry: 10257cd00; end: 10257cd3b;  */

void FUN_10257cd00(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010257cd38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10257cd3c; end: 10257cdab;  */

void FUN_10257cd3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10257ce0c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10257cdac; end: 10257cdef;  */

long FUN_10257cdac(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10257cdf0; end: 10257ce0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257cdf0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long alStack_58 [3];
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = 0x65736f6c63;
  func_0x000107c5fadc(0x65736f6c63,0xe500000000000000);
  func_0x000100083b20(alStack_58);
  puVar1 = (undefined8 *)(alStack_58[0] + _DAT_112fa90e0);
  func_0x000107c61428(puVar1,alStack_58,0,0);
  uVar6 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c61170(alStack_58[0]);
  func_0x000107c5fadc(uVar6,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000105f51dac(uVar7,uVar3,uVar6,1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  puVar4 = &UNK_110521cc0;
  func_0x000107c613fc(&UNK_110521cc0,0x19,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  puVar4[0x18] = 1;
  puVar5 = &UNK_110521ce8;
  func_0x000107c613fc(&UNK_110521ce8,0x20,7);
  *(undefined **)(puVar5 + 0x10) = &UNK_10dab9630;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  func_0x000107c6157c();
  uVar6 = 0x22;
  func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10dab9640,puVar5,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar6);
  return;
}



/* Entry: 10257ce10; end: 10257ce67; -[_TtC29SecondaryLocationDevicePrompt43SecondaryLocationDevicePromptViewController initWithCoder:] */

void FUN_10257ce10(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SecondaryLocationDevicePrompt/SecondaryLocationDevicePromptViewController.swift"
                      ,0x4f,2,0x25,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257ce68);
  (*pcVar1)();
}



/* Entry: 10257ce68; end: 10257dbdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257ce68(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long unaff_x20;
  undefined *puVar18;
  
  func_0x000107c614f0();
  puVar7 = PTR_s_viewDidLoad_112684cd8;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10257dbb8);
    (*pcVar1)();
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3fdd0(0x3fc999999999999a);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c52b50(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar5);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar5 = puVar3;
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  func_0x000107c52b50(puVar4);
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c4aba4(puVar4);
  func_0x000107c61180();
  func_0x000107c539d4(0x4024000000000000);
  func_0x000107c61170(puVar5);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10257dbbc);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar2);
  puVar5 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c61174();
  func_0x000107c56ba8();
  func_0x000107c5a100(puVar5);
  func_0x000107c59c74(puVar5);
  puVar6 = puVar3;
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  func_0x000107c59c78(puVar5);
  func_0x000107c61170(puVar6);
  func_0x00010257e0d0();
  puVar8 = puVar7;
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar7);
  func_0x000107c59c6c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  puVar7 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c61174();
  func_0x000107c56ba8();
  func_0x000107c5a100(puVar7);
  func_0x000107c59c74(puVar7);
  puVar6 = puVar3;
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  func_0x000107c59c78(puVar7);
  func_0x000107c61170(puVar6);
  func_0x00010257e19c();
  puVar11 = puVar8;
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar8);
  func_0x000107c59c6c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  puVar6 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c61174();
  puVar8 = puVar6;
  func_0x000107c5a050();
  func_0x00010257df38();
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar11);
  func_0x000107c59e1c(puVar6);
  func_0x000107c61170(puVar8);
  func_0x000107c3d8b8(puVar6);
  lVar2 = 0x112d360b0;
  FUN_10257de80(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 7;
  *(undefined8 *)(lVar2 + 0x10) = 3;
  *(undefined **)(lVar2 + 0x20) = puVar5;
  *(undefined **)(lVar2 + 0x28) = puVar7;
  *(undefined **)(lVar2 + 0x30) = puVar6;
  puVar8 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  uVar9 = 0;
  FUN_10257def8(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  lVar10 = lVar2;
  func_0x000107c5fc48(lVar2,uVar9);
  func_0x000107c61574(lVar2);
  func_0x000107c45784();
  func_0x000107c61170(lVar10);
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c52b2c(puVar8);
  func_0x000107c59594(0x4034000000000000,puVar8);
  func_0x000107c52610(puVar8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10257dbc0);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar2);
  func_0x000107c3d89c(puVar4);
  lVar2 = 0x112d360b8;
  FUN_10257de80(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  lVar10 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar10 + 0x18) = 0x11;
  *(undefined8 *)(lVar10 + 0x10) = 8;
  puVar11 = puVar4;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar12 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10257dbc4);
    (*pcVar1)();
  }
  lVar13 = lVar12;
  func_0x000107c3f75c();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  puVar14 = puVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lVar13);
  *(undefined **)(lVar10 + 0x20) = puVar14;
  puVar11 = puVar4;
  func_0x000107c3f764();
  func_0x000107c61180();
  lVar12 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10257dbc8);
    (*pcVar1)();
  }
  lVar13 = lVar12;
  func_0x000107c3f764();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  puVar14 = puVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lVar13);
  *(undefined **)(lVar10 + 0x28) = puVar14;
  puVar11 = puVar4;
  func_0x000107c5e308();
  func_0x000107c61180();
  lVar12 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10257dbcc);
    (*pcVar1)();
  }
  puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  lVar13 = lVar12;
  func_0x000107c5e308(lVar12);
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  puVar15 = puVar11;
  func_0x000107c402a8(0xc044000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lVar13);
  *(undefined **)(lVar10 + 0x30) = puVar15;
  puVar11 = puVar4;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar15 = puVar11;
  func_0x000107c402b0(0x407f400000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  *(undefined **)(lVar10 + 0x38) = puVar15;
  puVar11 = puVar8;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar15 = puVar4;
  func_0x000107c4acb0(puVar4);
  func_0x000107c61180();
  puVar18 = puVar11;
  func_0x000107c40284(0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar15);
  *(undefined **)(lVar10 + 0x40) = puVar18;
  puVar11 = puVar8;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar15 = puVar4;
  func_0x000107c3ec1c(puVar4);
  func_0x000107c61180();
  puVar18 = puVar11;
  func_0x000107c40284(0xc034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar15);
  *(undefined **)(lVar10 + 0x48) = puVar18;
  puVar11 = puVar8;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar15 = puVar4;
  func_0x000107c5ce8c(puVar4);
  func_0x000107c61180();
  puVar18 = puVar11;
  func_0x000107c40284(0xc034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar15);
  *(undefined **)(lVar10 + 0x50) = puVar18;
  puVar11 = puVar8;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  puVar15 = puVar4;
  func_0x000107c5cbe4(puVar4);
  func_0x000107c61180();
  puVar18 = puVar11;
  func_0x000107c40284(0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar15);
  *(undefined **)(lVar10 + 0x58) = puVar18;
  uVar9 = 0;
  FUN_10257def8(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar12 = lVar10;
  func_0x000107c5fc48(lVar10,uVar9);
  func_0x000107c61574(lVar10);
  func_0x000107c3d048(puVar14);
  func_0x000107c61170(lVar12);
  if (*(long *)(unaff_x20 + _DAT_112ea6800) != 0) {
    puVar11 = PTR_PTR_1126af078;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61180();
    func_0x000107c5a050();
    lVar10 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10257dbd0);
      (*pcVar1)();
    }
    func_0x000107c3d89c();
    func_0x000107c61170(lVar10);
    puVar15 = PTR_PTR_1126af080;
    func_0x000107c610f8(PTR_PTR_1126af080);
    func_0x000107c453e4();
    func_0x000107c59a2c();
    func_0x000107c55244(puVar15);
    func_0x000107c53c7c(puVar11);
    func_0x000107c613fc(lVar2,((ulong)*(uint *)(lVar2 + 0x30) + 7 & 0x1fffffff8) + 0x18,
                        *(ushort *)(lVar2 + 0x34) | 7);
    *(undefined8 *)(lVar2 + 0x18) = 7;
    *(undefined8 *)(lVar2 + 0x10) = 3;
    puVar18 = puVar11;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar10 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10257dbd4);
      (*pcVar1)();
    }
    lVar12 = lVar10;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    puVar16 = puVar18;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar18);
    func_0x000107c61170(lVar12);
    *(undefined **)(lVar2 + 0x20) = puVar16;
    puVar18 = puVar11;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar10 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10257dbd8);
      (*pcVar1)();
    }
    lVar12 = lVar10;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    puVar16 = puVar18;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar18);
    func_0x000107c61170(lVar12);
    *(undefined **)(lVar2 + 0x28) = puVar16;
    puVar18 = puVar11;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10257dbdc);
      (*pcVar1)();
    }
    lVar10 = unaff_x20;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    puVar16 = puVar18;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar18);
    func_0x000107c61170(lVar10);
    *(undefined **)(lVar2 + 0x30) = puVar16;
    lVar10 = lVar2;
    func_0x000107c5fc48(lVar2,uVar9);
    func_0x000107c61574(lVar2);
    func_0x000107c3d048(puVar14);
    func_0x000107c61170(lVar10);
    puVar14 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    func_0x000107c450a4(0x4030000000000000,0x4030000000000000);
    func_0x000107c61180();
    if (puVar14 == (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar18 = puVar14;
      func_0x000107c45154();
      func_0x000107c61180();
      func_0x000107c61170(puVar14);
    }
    puVar14 = PTR_PTR_1126c2d78;
    func_0x000107c610f8();
    func_0x000107c46d14();
    puVar16 = PTR_PTR_1126c2d70;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar2 = 0x112d58220;
    FUN_10257de80(0x112d58220,&PTR_PTR_1126c2d78,0x112d582d0,&UNK_10d91e9d0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 3;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined **)(lVar2 + 0x20) = puVar14;
    uVar9 = 0;
    FUN_10257def8(0,0x112d58220,&PTR_PTR_1126c2d78);
    func_0x000107c61174();
    lVar10 = lVar2;
    func_0x000107c5fc48(lVar2,uVar9);
    func_0x000107c61574(lVar2);
    func_0x000107c5707c(puVar16);
    func_0x000107c61170(lVar10);
    func_0x000107c59a2c(puVar16);
    func_0x000107c59cb0(puVar16);
    puVar17 = puVar3;
    func_0x000107c5af88(puVar3);
    func_0x000107c61180();
    func_0x000107c53cdc(puVar16);
    func_0x000107c61170(puVar17);
    func_0x000107c5af88(puVar3);
    func_0x000107c61180();
    func_0x000107c53d88(puVar16);
    func_0x000107c61170(puVar3);
    func_0x000107c52864(puVar16);
    lVar2 = 0x112ea6830;
    FUN_10257de80(0x112ea6830,&PTR_PTR_1126c2d70,0x112ea6838,&UNK_10dab9690);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 3;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined **)(lVar2 + 0x20) = puVar16;
    puVar3 = PTR_PTR_1126b6550;
    func_0x000107c610f8(PTR_PTR_1126b6550);
    uVar9 = 0;
    FUN_10257def8(0,0x112ea6830,&PTR_PTR_1126c2d70);
    func_0x000107c61174(puVar16);
    lVar10 = lVar2;
    func_0x000107c5fc48(lVar2,uVar9);
    func_0x000107c61574(lVar2);
    func_0x000107c45ad0(puVar3);
    func_0x000107c61170(lVar10);
    func_0x000107c61174(puVar3);
    func_0x000107c53d00(puVar15);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar18);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 10257dbdc; end: 10257dc03; -[_TtC29SecondaryLocationDevicePrompt43SecondaryLocationDevicePromptViewController viewDidLoad] */

void FUN_10257dbdc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10257ce68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10257dc04; end: 10257dc9f; -[_TtC29SecondaryLocationDevicePrompt43SecondaryLocationDevicePromptViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257dc04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidAppear__112684bd0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x0001000a8868(param_1 + _DAT_112ea67e8,*(undefined8 *)(param_1 + _DAT_112ea67e8 + 0x18));
  FUN_10257b6a8(*(undefined8 *)(param_1 + _DAT_112ea67f0),*(undefined8 *)(param_1 + _DAT_112ea67f8))
  ;
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10257dca0; end: 10257dca7; -[_TtC29SecondaryLocationDevicePrompt43SecondaryLocationDevicePromptViewController supportedInterfaceOrientations] */

undefined8 FUN_10257dca0(void)

{
  return 0x1e;
}



/* Entry: 10257dca8; end: 10257dd33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257dca8(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112ea67e8,*(undefined8 *)(unaff_x20 + _DAT_112ea67e8 + 0x18))
  ;
  func_0x00010257b760(*(undefined8 *)(unaff_x20 + _DAT_112ea67f0),
                      *(undefined8 *)(unaff_x20 + _DAT_112ea67f8));
  lVar1 = *(long *)(unaff_x20 + _DAT_112ea67e0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c50418();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 10257dd34; end: 10257dd5b; -[_TtC29SecondaryLocationDevicePrompt43SecondaryLocationDevicePromptViewController onActionTapped] */

void FUN_10257dd34(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10257dca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10257dd5c; end: 10257ddb3; -[_TtC29SecondaryLocationDevicePrompt43SecondaryLocationDevicePromptViewController onCloseTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257dd5c(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112ea6800);
  if (pcVar1 != (code *)0x0) {
    func_0x000107c61174();
    (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10257ddb4; end: 10257de13; -[_TtC29SecondaryLocationDevicePrompt43SecondaryLocationDevicePromptViewController initWithNibName:bundle:] */

void FUN_10257ddb4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SecondaryLocationDevicePrompt.SecondaryLocationDevicePromptViewController",
                      0x49,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257dde0);
  (*pcVar1)();
}



/* Entry: 10257de14; end: 10257de5f; -[_TtC29SecondaryLocationDevicePrompt43SecondaryLocationDevicePromptViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257de14(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea67e0));
  func_0x0001000834e4(param_1 + _DAT_112ea67e8);
  if (*(long *)(param_1 + _DAT_112ea6800) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112ea6800))[1]);
    return;
  }
  return;
}



/* Entry: 10257de60; end: 10257de7f;  */

void FUN_10257de60(void)

{
  func_0x000107c61168(&PTR_PTR_11284f040);
  return;
}



/* Entry: 10257de80; end: 10257def7;  */

void FUN_10257de80(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10257def8(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10257def8; end: 10257df37;  */

void FUN_10257def8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10257df38; end: 10257e267;  */

undefined1  [16] FUN_10257df38(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffed;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0aab30);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0aab50);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257e004);
  (*pcVar1)();
}



/* Entry: 10257e268; end: 10257e3c3;  */

/* WARNING: Possible PIC construction at 0x00010257e344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010257e354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010257e364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010257e374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010257e384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010257e394: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010257e388) */
/* WARNING: Removing unreachable block (ram,0x00010257e378) */
/* WARNING: Removing unreachable block (ram,0x00010257e368) */
/* WARNING: Removing unreachable block (ram,0x00010257e358) */
/* WARNING: Removing unreachable block (ram,0x00010257e348) */
/* WARNING: Removing unreachable block (ram,0x00010257e398) */

void FUN_10257e268(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  code *pcVar14;
  long unaff_x20;
  undefined8 uVar15;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x70);
  puVar12 = &UNK_110521e80;
  func_0x000107c613fc(&UNK_110521e80,0x78,7);
  *(undefined8 *)(puVar12 + 0x10) = uVar1;
  *(undefined8 *)(puVar12 + 0x18) = uVar6;
  *(undefined8 *)(puVar12 + 0x20) = uVar13;
  *(undefined8 *)(puVar12 + 0x28) = uVar7;
  *(undefined8 *)(puVar12 + 0x30) = uVar2;
  *(undefined8 *)(puVar12 + 0x38) = uVar8;
  *(undefined8 *)(puVar12 + 0x40) = uVar3;
  *(undefined8 *)(puVar12 + 0x48) = uVar9;
  *(undefined8 *)(puVar12 + 0x50) = uVar4;
  *(undefined8 *)(puVar12 + 0x58) = uVar10;
  *(undefined8 *)(puVar12 + 0x60) = uVar5;
  *(undefined8 *)(puVar12 + 0x68) = uVar11;
  *(undefined8 *)(puVar12 + 0x70) = uVar15;
  uVar13 = 0x112ea6848;
  func_0x0001000285a8(0x112ea6848,&UNK_10dab96e0);
  func_0x000107c613fc();
  pcVar14 = FUN_10257e458;
  func_0x0001000841fc(FUN_10257e458,puVar12,uVar13);
  func_0x000100084214(&UNK_10dab96b0,0x2d,2);
  *param_1 = pcVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10257e3c4; end: 10257e3d3;  */

undefined1  [16] FUN_10257e3c4(void)

{
  return ZEXT816(0x110521e60);
}



/* Entry: 10257e3d4; end: 10257e457;  */

void FUN_10257e3d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10257e458; end: 10257e5a7;  */

void FUN_10257e458(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_68;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar12 = *param_2;
  func_0x0001000285a8(0x112ea6850,&UNK_10dab96e8);
  puVar8 = &uStack_68;
  uStack_68 = uVar12;
  func_0x0001000838ec();
  FUN_10257e8e0(uVar9,uVar4,puVar8);
  func_0x000100082720("ShareLocationFlowLoggerServiceProvider",0x26,2);
  func_0x00010257e760();
  func_0x000100082720("WebBrowsingScopeExposerServiceProvider",0x26,2);
  FUN_10257ee70(uVar11,uVar1,uVar5,uVar9,uVar4,uVar2,uVar6,uVar3,uVar7,puVar8,uVar14,uVar15,uVar13,
                uVar10);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar8);
  func_0x000100082720("ShareLocationFlowPresenterEntryPointProvider",0x2c,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 10257e5a8; end: 10257e613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257e5a8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10257e820();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ea6860) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10257e614; end: 10257e61b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257e614(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10257e820();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea6860) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10257e61c; end: 10257e667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257e61c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea6860) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10257e668; end: 10257e6ef; -[_TtC31ShareLocationFlowImplementation24ShareLocationFlowBuilder build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257e668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 10257e6f0; end: 10257e74f; -[_TtC31ShareLocationFlowImplementation24ShareLocationFlowBuilder init] */

void FUN_10257e6f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShareLocationFlowImplementation.ShareLocationFlowBuilder",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10257e71c);
  (*pcVar1)();
}



/* Entry: 10257e750; end: 10257e77b; -[_TtC31ShareLocationFlowImplementation24ShareLocationFlowBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257e750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea6860));
  return;
}



/* Entry: 10257e77c; end: 10257e807;  */

void FUN_10257e77c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e4de20;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10257e808; end: 10257e81f;  */

void FUN_10257e808(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e4de20;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10257e820; end: 10257e83f;  */

void FUN_10257e820(void)

{
  func_0x000107c61168(&PTR_PTR_11284f120);
  return;
}



/* Entry: 10257e840; end: 10257e88b;  */

undefined1  [16] FUN_10257e840(void)

{
  return ZEXT816(0x110521f50);
}



/* Entry: 10257e88c; end: 10257e8cf;  */

void FUN_10257e88c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 10257e8d0; end: 10257e8df;  */

void FUN_10257e8d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10257e8e0; end: 10257e9ef;  */

void FUN_10257e8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea68a8,&UNK_10dab9920);
  puVar1 = &UNK_110522000;
  func_0x000107c613fc(&UNK_110522000,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_10257e9f0,puVar1);
  return;
}



/* Entry: 10257e9f0; end: 10257e9fb;  */

/* WARNING: Possible PIC construction at 0x00010257e9cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010257e9d0) */

void FUN_10257e9f0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = lVar1;
  FUN_10257ee50();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(long *)(lVar4 + 0x18) = lVar1;
  *(undefined8 *)(lVar4 + 0x20) = uVar2;
  *(undefined8 *)(lVar4 + 0x10) = uVar5;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_110522018;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 10257e9fc; end: 10257ea3f;  */

void FUN_10257e9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  return;
}



/* Entry: 10257ea40; end: 10257eb67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257ea40(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  uVar2 = *(undefined8 *)(lStack_58 + _DAT_112fcd000);
  func_0x000107c61170();
  FUN_10257ed24(uVar2);
  FUN_10257ed44(param_1,param_2,param_3);
  if (param_2 == 0) {
    lVar3 = 0;
    lVar4 = param_1;
  }
  else {
    lVar3 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    lVar4 = param_2;
    param_2 = lVar3;
    lVar3 = param_1;
  }
  FUN_10257eb68();
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  puVar1 = PTR_PTR_1126aaab8;
  func_0x000107c61168(PTR_PTR_1126aaab8);
  func_0x000100083b20(&lStack_58);
  func_0x000107c4bc80(puVar1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c615e8(lStack_58);
  return;
}



/* Entry: 10257eb68; end: 10257ecb3;  */

undefined1  [16] FUN_10257eb68(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 auVar6 [16];
  ulong uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4ec94();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar2 == 0) {
LAB_10257ec80:
    puVar4 = (undefined *)0x0;
    param_2 = 0;
    goto LAB_10257ec88;
  }
  uVar1 = uVar2;
  func_0x000107c4ec80();
  func_0x000107c61180();
  if (uVar1 == 0) {
LAB_10257ebf4:
    uVar1 = uVar2;
    func_0x000107c4487c();
    if ((uVar1 & 1) == 0) goto LAB_10257ec4c;
    uVar1 = uVar2;
    func_0x000107c4ec80();
    func_0x000107c61180();
    if (uVar1 == 0) {
LAB_10257ec78:
      func_0x000107c615e8(uVar2);
      goto LAB_10257ec80;
    }
    uVar3 = uVar1;
    func_0x000107c5aa6c();
    func_0x000107c61170(uVar1);
    if (uVar3 == 3) {
      ppuVar5 = &PTR_PTR_110994ab0;
    }
    else if (uVar3 == 2) {
      ppuVar5 = &PTR_PTR_110994aa0;
    }
    else {
      if (uVar3 != 1) goto LAB_10257ec78;
      ppuVar5 = &PTR_PTR_110994aa8;
    }
  }
  else {
    uVar3 = uVar1;
    func_0x000107c443c8();
    func_0x000107c61170(uVar1);
    if ((uVar3 & 1) == 0) goto LAB_10257ebf4;
LAB_10257ec4c:
    ppuVar5 = &PTR_PTR_110994a98;
  }
  puVar4 = *ppuVar5;
  func_0x000107c5faec(puVar4);
  func_0x000107c615e8(uVar2);
LAB_10257ec88:
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = puVar4;
  return auVar6;
}



/* Entry: 10257ecb4; end: 10257ecbf;  */

void FUN_10257ecb4(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010257ed00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10257ecc0; end: 10257ed03;  */

void FUN_10257ecc0(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010257ed00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10257ed04; end: 10257ed23;  */

void FUN_10257ed04(void)

{
  FUN_10257ea40();
  return;
}



/* Entry: 10257ed24; end: 10257ed43;  */

undefined8 FUN_10257ed24(ulong param_1)

{
  if (param_1 < 0x13) {
    return *(undefined8 *)(&UNK_10dab99a0 + param_1 * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 10257ed44; end: 10257ee3f;  */

undefined1  [16] FUN_10257ed44(long param_1,long param_2,char param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 auVar3 [16];
  
  ppuVar2 = &PTR_PTR_110994a78;
  if (param_1 < 6) {
    if (param_1 < 3) {
      if (param_1 == 1) {
        ppuVar2 = &PTR_PTR_110994a70;
      }
      else {
        param_2 = 0;
        if (param_1 != 2) {
LAB_10257ed80:
          return ZEXT816(0) << 0x40;
        }
        ppuVar2 = &PTR_PTR_110994a60;
      }
    }
    else if (param_1 == 3) {
      ppuVar2 = &PTR_PTR_110994a68;
    }
    else if (param_1 == 4) {
      if ((param_3 == '\x01') || (2 < param_2 - 1U)) {
        return ZEXT816(0);
      }
      ppuVar2 = (undefined **)(&PTR_PTR_110522048)[param_2 - 1U];
    }
    else {
      param_2 = 0;
      ppuVar2 = &PTR_PTR_110994a78;
      if (param_1 != 5) goto LAB_10257ed80;
    }
  }
  else if (param_1 - 8U < 2) {
    ppuVar2 = &PTR_PTR_110994a88;
  }
  else if (param_1 == 6) {
    ppuVar2 = &PTR_PTR_110994a90;
  }
  else {
    param_2 = 0;
    if (param_1 != 7) goto LAB_10257ed80;
  }
  puVar1 = *ppuVar2;
  func_0x000107c5faec(puVar1,param_2);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = puVar1;
  return auVar3;
}



/* Entry: 10257ee40; end: 10257ee4f;  */

undefined1  [16] FUN_10257ee40(void)

{
  return ZEXT816(0x110522038);
}



/* Entry: 10257ee50; end: 10257ee6f;  */

void FUN_10257ee50(void)

{
  func_0x000107c61168(&PTR_PTR_112ea68f0);
  return;
}



/* Entry: 10257ee70; end: 10257f1bb;  */

void FUN_10257ee70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea6960,&UNK_10dab9a40);
  puVar1 = &UNK_110522078;
  func_0x000107c613fc(&UNK_110522078,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x0001000823a8(FUN_10257f1bc,puVar1);
  return;
}



/* Entry: 10257f1bc; end: 10257f1f7;  */

void FUN_10257f1bc(void)

{
  long unaff_x20;
  
  func_0x00010257efbc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 10257f1f8; end: 10257f36f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257f1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea6968) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea6970);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined2 *)(puVar1 + 2) = 0x100;
  *(undefined8 *)(unaff_x20 + _DAT_112ea6978) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea6980) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea6988) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea6990) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea6998) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ea69a0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ea69a8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ea69b0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ea69b8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ea69c0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ea69c8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112ea69d0) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112ea69d8) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112ea69e0) = param_14;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10257f370; end: 10257f417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257f370(void)

{
  code *pcVar1;
  long lVar2;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  lVar2 = *(long *)(lStack_28 + _DAT_112fcd010);
  func_0x000107c61170();
  if (lVar2 == 0) {
    FUN_10257f628();
  }
  else if (lVar2 == 1) {
    FUN_10257f7f4();
  }
  else {
    if (lVar2 != 2) {
      lStack_28 = lVar2;
      func_0x000107c60614(&UNK_1106c0080,&lStack_28,&UNK_1106c0080,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10257f418);
      (*pcVar1)();
    }
    FUN_10257f418();
  }
  return;
}



/* Entry: 10257f418; end: 10257f627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257f418(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  ulong auStack_58 [3];
  
  func_0x000100083b20(auStack_58);
  uVar3 = auStack_58[0];
  uVar2 = auStack_58[0];
  func_0x000107c4ec94();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 == 0) {
    return;
  }
  uVar2 = uVar3;
  func_0x000107c4ec80();
  func_0x000107c61180();
  if (uVar2 != 0) {
    func_0x000100083b20(auStack_58);
    lVar1 = _DAT_112fccff8;
    func_0x000107c61428(auStack_58[0] + _DAT_112fccff8,auStack_58,0,0);
    uVar4 = auStack_58[0] + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(auStack_58[0]);
    if (uVar4 == 0) {
      func_0x000107c615e8(uVar3);
      func_0x000107c61170(uVar2);
      return;
    }
    uVar5 = uVar2;
    func_0x000107c443c8();
    if ((uVar5 & 1) != 0) {
      puVar6 = &UNK_1105223e0;
      func_0x000107c613fc(&UNK_1105223e0,0x18,7);
      *(undefined8 *)(puVar6 + 0x10) = unaff_x20;
      puVar7 = &UNK_110522408;
      func_0x000107c613fc(&UNK_110522408,0x20,7);
      *(undefined **)(puVar7 + 0x10) = &UNK_10dab9b60;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      func_0x000107c61174();
      uVar8 = 0x22;
      func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10dab9b68,puVar7,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(uVar3);
      func_0x000107c61170(uVar2);
      func_0x000107c615e8(uVar4);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(uVar8);
      return;
    }
    uVar5 = uVar4;
    func_0x000107c61150(uVar4,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_onExitGhostModeWith__112616a28);
    if ((uVar5 & 1) != 0) {
      func_0x000107c4dc04(uVar4);
    }
    func_0x000107c5a954(uVar4);
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(uVar2);
    uVar3 = uVar4;
  }
  func_0x000107c615e8(uVar3);
  return;
}



/* Entry: 10257f628; end: 10257f7f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257f628(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 unaff_x20;
  long lVar5;
  long lVar6;
  long alStack_60 [3];
  long alStack_48 [3];
  
  func_0x000100083b20(alStack_48);
  lVar5 = alStack_48[0];
  lVar6 = *(long *)(alStack_48[0] + _DAT_112fcd008);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar5);
  lVar5 = *(long *)(lVar6 + 0x10);
  func_0x000107c6142c(lVar6);
  if (lVar5 == 0) {
    func_0x000100083b20(alStack_48);
    lVar5 = _DAT_112fccff8;
    func_0x000107c61428(alStack_48[0] + _DAT_112fccff8,alStack_48,0,0);
    uVar3 = alStack_48[0] + lVar5;
    func_0x000107c61618();
    func_0x000107c61170(alStack_48[0]);
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_onShareLocationActionCompletedWi_1126173d0);
      if ((uVar4 & 1) != 0) {
        func_0x000100083b20(alStack_60);
        func_0x000107c61170();
        func_0x000107c4dd2c(uVar3);
      }
      func_0x000107c615e8(uVar3);
    }
    func_0x000100083b20(alStack_60);
    lVar5 = _DAT_112fccff8;
    func_0x000107c61428(alStack_60[0] + _DAT_112fccff8,alStack_60,0,0);
    lVar5 = alStack_60[0] + lVar5;
    func_0x000107c61618();
    func_0x000107c61170(alStack_60[0]);
    if (lVar5 != 0) {
      func_0x000107c5a954(lVar5);
      func_0x000107c615e8(lVar5);
    }
  }
  else {
    puVar1 = &UNK_110522458;
    func_0x000107c613fc(&UNK_110522458,0x18,7);
    *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
    func_0x000107c61174();
    uVar2 = 0x22;
    func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10dab9b78,puVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 10257f7f4; end: 10257f98b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257f7f4(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long alStack_70 [3];
  long alStack_58 [3];
  
  func_0x000100083b20(alStack_58);
  lVar3 = alStack_58[0];
  lVar5 = *(long *)(alStack_58[0] + _DAT_112fcd008);
  func_0x000107c61434(lVar5);
  func_0x000107c61170(lVar3);
  lVar3 = *(long *)(lVar5 + 0x10);
  func_0x000107c6142c(lVar5);
  if (lVar3 == 0) {
    func_0x000100083b20(alStack_58);
    lVar3 = _DAT_112fccff8;
    func_0x000107c61428(alStack_58[0] + _DAT_112fccff8,alStack_58,0,0);
    uVar1 = alStack_58[0] + lVar3;
    func_0x000107c61618();
    func_0x000107c61170(alStack_58[0]);
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c61150(uVar1,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_onShareLocationActionCompletedWi_1126173d0);
      if ((uVar2 & 1) != 0) {
        func_0x000100083b20(alStack_70);
        func_0x000107c61170();
        func_0x000107c4dd2c(uVar1);
      }
      func_0x000107c615e8(uVar1);
    }
    func_0x000100083b20(alStack_70);
    lVar3 = _DAT_112fccff8;
    func_0x000107c61428(alStack_70[0] + _DAT_112fccff8,alStack_70,0,0);
    lVar3 = alStack_70[0] + lVar3;
    func_0x000107c61618();
    func_0x000107c61170(alStack_70[0]);
    if (lVar3 != 0) {
      func_0x000107c5a954(lVar3);
      func_0x000107c615e8(lVar3);
    }
  }
  else {
    func_0x000100083b20(alStack_58);
    uVar4 = *(undefined8 *)(alStack_58[0] + _DAT_112fcd008);
    func_0x000107c61434(uVar4);
    func_0x000107c61170(alStack_58[0]);
    FUN_102580a40(uVar4);
    func_0x000107c6142c(uVar4);
  }
  return;
}



/* Entry: 10257f98c; end: 10257f9b3; -[_TtC31ShareLocationFlowImplementation26ShareLocationFlowPresenter present] */

void FUN_10257f98c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10257f370();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10257f9b4; end: 10257fa1f;  */

void FUN_10257f9b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10257fa20,uVar1,uVar2);
  return;
}



/* Entry: 10257fa20; end: 10257faab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257fa20(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x10);
  lVar2 = *(long *)(lVar3 + _DAT_112fcd008);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  func_0x000107c61434(lVar2);
  func_0x000107c61170(lVar3);
  plVar1 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10257faac;
  lVar3 = *(long *)(unaff_x22 + 0x18);
  plVar1[0x12] = lVar2;
  plVar1[0x13] = lVar3;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar3;
  func_0x000107c5fce8();
  plVar1[0x14] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar1[0x15] = lVar3;
  plVar1[0x16] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10257fb94,lVar3,lVar2);
  return;
}



/* Entry: 10257faac; end: 10257faf7;  */

void FUN_10257faac(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x38);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10257faf8,*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30));
  return;
}



/* Entry: 10257faf8; end: 10257fb27;  */

void FUN_10257faf8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010257fb24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10257fb28; end: 10257fb93;  */

void FUN_10257fb28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10257fb94,uVar1,uVar2);
  return;
}



/* Entry: 10257fb94; end: 10257fceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257fb94(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  lVar1 = lVar3;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xb8) = lVar3;
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    *(undefined ***)(unaff_x22 + 0xc0) = &PTR____CFConstantStringClassReference_110f72698;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xd0;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10257fcec;
    func_0x000107c61174();
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,1);
    uVar2 = 0x112e06f60;
    func_0x0001000285a8(0x112e06f60,&UNK_10dab9b20);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
    *(long *)(unaff_x22 + 0x70) = lVar1;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_102580258;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110522470;
    func_0x000107c5032c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  FUN_10257ffb8(*(undefined8 *)(unaff_x22 + 0x90),2);
                    /* WARNING: Could not recover jumptable at 0x00010257fce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


