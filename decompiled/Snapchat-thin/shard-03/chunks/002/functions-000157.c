/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10262c404; end: 10262c58f;  */

undefined * FUN_10262c404(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  long extraout_x8;
  ulong uVar8;
  ulong *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = 0x112eb0b00;
  func_0x0001000285a8(0x112eb0b00,&UNK_10dac5340);
  lVar11 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112eb0b08,&UNK_10dac5690);
    puVar6 = puVar10;
    func_0x000107c60498();
    iVar4 = *(int *)(lVar12 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar11 + 0x48);
    func_0x000107c6157c();
    do {
      func_0x00010262c5d4(param_1,puVar9,0x112eb0b00,&UNK_10dac5340);
      uVar2 = *puVar9;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10262c58c);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar13 = *(long *)(puVar6 + 0x38);
      lVar11 = 0;
      FUN_1026347a4();
      func_0x00010262c590((long)puVar9 + (long)iVar4,
                          lVar13 + *(long *)(*(long *)(lVar11 + -8) + 0x48) * uVar7,FUN_1026347a4);
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10262c590);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      param_1 = param_1 + lVar12;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 10262c590; end: 10262c65b;  */

undefined8 FUN_10262c590(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10262c65c; end: 10262c65f;  */

void FUN_10262c65c(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010262c24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10262c660; end: 10262c687;  */

void FUN_10262c660(void)

{
  FUN_10262b2ec();
  return;
}



/* Entry: 10262c688; end: 10262c693;  */

void FUN_10262c688(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010262c400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10262c694; end: 10262c71f; -[_TtC38MapExternalMusicServicesImplementation34ExternalMusicNowPlayingServiceObjc cachedTracks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262c694(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb0b20);
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  func_0x0001000c74f0(&uStack_28);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_1);
  uVar1 = 0;
  FUN_102704690(0);
  uVar2 = uStack_28;
  func_0x000107c5f9dc(uStack_28,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10262c720; end: 10262c77f;  */

void FUN_10262c720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c610f8();
  FUN_10262c780(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 10262c780; end: 10262ca83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10262c780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_68;
  
  func_0x000107c614f0();
  lVar4 = _DAT_112eb0b20;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10262c120();
  puStack_68 = puVar2;
  func_0x0001000285a8(0x112eb0b18,&UNK_10dac5370);
  func_0x000107c613fc();
  ppuVar3 = &puStack_68;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar4) = ppuVar3;
  lVar4 = _DAT_112eb0b28;
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x0001000285a8(0x112e5ad00,&UNK_10da60718);
  func_0x000107c613fc();
  ppuVar3 = &puStack_68;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar4) = ppuVar3;
  lVar4 = _DAT_112eb0b30;
  puStack_68 = (undefined *)0x0;
  func_0x0001000285a8(0x112eb0ad0,&UNK_10dac52b0);
  func_0x000107c613fc();
  ppuVar3 = &puStack_68;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar4) = ppuVar3;
  lVar4 = _DAT_112eb0b38;
  puVar2 = puVar5;
  func_0x000101bedd7c();
  *(undefined **)(unaff_x20 + lVar4) = puVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb0b40);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb0b48);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0b50) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eb0b58) = param_5;
  lVar4 = 0;
  func_0x000102633f3c();
  func_0x000107c613fc();
  func_0x000107c61434(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61474(lVar4);
  puVar2 = puVar5;
  func_0x000101bedd7c();
  puStack_68 = puVar2;
  func_0x0001000285a8(0x112eb0b60,&UNK_10dac5378);
  func_0x000107c613fc();
  ppuVar3 = &puStack_68;
  func_0x00010042e6a0();
  *(undefined ***)(lVar4 + 0x70) = ppuVar3;
  FUN_10262c404();
  *(undefined **)(lVar4 + 0x78) = puVar5;
  FUN_10262f2ec(param_1,lVar4 + 0x80);
  *(undefined8 *)(lVar4 + 0xa8) = param_2;
  *(undefined8 *)(lVar4 + 0xb0) = param_3;
  *(long *)(unaff_x20 + _DAT_112eb0b68) = lVar4;
  plVar6 = (long *)&stack0xffffffffffffff88;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  uVar9 = *(undefined8 *)((long)plVar6 + _DAT_112eb0b68);
  plVar7 = plVar6;
  func_0x00010262f330();
  func_0x000107c61174();
  func_0x000107c6157c(uVar9);
  func_0x0001000c2068();
  func_0x000107c61574(uVar9);
  puVar5 = &UNK_11052c7f8;
  func_0x000107c613fc(&UNK_11052c7f8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,plVar6);
  pcVar8 = FUN_10262f3b8;
  puVar2 = puVar5;
  (**(code **)(*plVar7 + 0x60))();
  func_0x000107c61574(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61574(plVar7);
  func_0x000107c61574(puVar5);
  func_0x0001000834e4(param_1);
  puVar1 = (undefined8 *)((long)plVar6 + _DAT_112eb0b40);
  uVar9 = *puVar1;
  *puVar1 = pcVar8;
  puVar1[1] = puVar2;
  func_0x000107c61170(plVar6);
  func_0x000107c615e8(uVar9);
  return plVar6;
}



/* Entry: 10262ca84; end: 10262cadf;  */

void FUN_10262ca84(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10262cae0(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10262cae0; end: 10262cc73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262cae0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long alStack_60 [2];
  undefined8 uStack_50;
  
  func_0x000107c61434();
  FUN_10262cfd0();
  lVar1 = _DAT_112eb0b38;
  lVar5 = *(long *)(unaff_x20 + _DAT_112eb0b38);
  lVar3 = lVar5;
  func_0x000107c61434();
  FUN_10262e88c();
  func_0x000107c6142c(lVar5);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c61434(param_1);
  func_0x000107c6142c(uVar4);
  lVar1 = _DAT_112eb0b20;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eb0b20);
  uStack_50 = param_1;
  func_0x000107c6157c(uVar4);
  func_0x000100075034(FUN_10262fc80,alStack_60,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar4);
  if (*(long *)(lVar3 + 0x10) != 0) {
    alStack_60[0] = lVar3;
    func_0x0001007d6d78(alStack_60);
  }
  func_0x000107c61574(lVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(alStack_60);
  func_0x000107c61574(uVar4);
  lVar1 = alStack_60[0];
  if (*(long *)(alStack_60[0] + 0x10) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(unaff_x20 + _DAT_112eb0b48);
    uVar2 = ((long *)(unaff_x20 + _DAT_112eb0b48))[1];
    func_0x000107c61434(alStack_60[0]);
    func_0x000100029284();
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(lVar1 + 0x38) + lVar3 * 8);
      func_0x000107c61174(lVar3);
    }
    func_0x000107c6142c(lVar1);
  }
  func_0x000107c6142c(lVar1);
  alStack_60[0] = lVar3;
  func_0x0001007d6d78(alStack_60);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 10262cc74; end: 10262cc8b;  */

void FUN_10262cc74(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262cc8c,0,0);
  return;
}



/* Entry: 10262cc8c; end: 10262cce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262cc8c(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x18) + _DAT_112eb0b68);
  plVar1 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10262fccc;
  plVar1[0xf] = *(long *)(unaff_x22 + 0x10);
  plVar1[0x10] = lVar5;
  lVar2 = 0;
  FUN_1026347a4();
  plVar1[0x11] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x12] = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x13] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x14] = uVar4;
  lVar2 = 0x112eb0e50;
  func_0x0001000285a8(0x112eb0e50,&UNK_10dac5670);
  uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x15] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x16] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x17] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x18] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x19] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x1a] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x1b] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x1c] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102630fec,lVar5,0);
  return;
}



/* Entry: 10262cce8; end: 10262ccff;  */

void FUN_10262cce8(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262cd00,0,0);
  return;
}



/* Entry: 10262cd00; end: 10262cd5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262cd00(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x18) + _DAT_112eb0b68);
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10262fcc8;
  plVar1[5] = *(long *)(unaff_x22 + 0x10);
  plVar1[6] = lVar5;
  lVar2 = 0x112eb0e50;
  func_0x0001000285a8(0x112eb0e50,&UNK_10dac5670);
  uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[7] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[8] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102630adc,lVar5,0);
  return;
}



/* Entry: 10262cd5c; end: 10262cd77;  */

void FUN_10262cd5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262cd78,0,0);
  return;
}



/* Entry: 10262cd78; end: 10262cdd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262cd78(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x28) + _DAT_112eb0b68);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10262fcd4;
  lVar3 = *(long *)(unaff_x22 + 0x18);
  lVar2 = *(long *)(unaff_x22 + 0x10);
  plVar1[7] = *(long *)(unaff_x22 + 0x20);
  plVar1[8] = lVar5;
  plVar1[5] = lVar2;
  plVar1[6] = lVar3;
  lVar3 = 0x112eb0e50;
  func_0x0001000285a8(0x112eb0e50,&UNK_10dac5670);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[9] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026325dc,lVar5,0);
  return;
}



/* Entry: 10262cdd8; end: 10262ce67;  */

void FUN_10262cdd8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  uVar3 = 0x112d45220;
  FUN_10262f3c0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262ce68,uVar2,uVar3);
  return;
}



/* Entry: 10262ce68; end: 10262cf53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262ce68(void)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  long unaff_x22;
  
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0x40) + _DAT_112eb0b58);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar4;
    func_0x000107c52060();
    func_0x000107c615e8(lVar4);
    if (lVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10262cec0);
      (*pcVar3)();
    }
  }
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar6 = *(int **)(lVar4 + 0x20);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10262cf54;
                    /* WARNING: Could not recover jumptable at 0x00010262cf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (*(undefined8 *)(unaff_x22 + 0x38),0x40303,lVar7,0,uVar2,lVar4);
  return;
}



/* Entry: 10262cf54; end: 10262cfcf;  */

void FUN_10262cf54(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x10262cf98,*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58));
  return;
}



/* Entry: 10262cfd0; end: 10262d103;  */

undefined8 FUN_10262cfd0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5fe14(uVar7,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar9 = 0;
  puVar8 = (ulong *)(param_1 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar11 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *puVar8;
  uStack_68 = uVar7;
  lVar1 = lVar9;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar4 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 0x10 +
               lVar1 * 0x400);
      uVar7 = *puVar2;
      uVar3 = puVar2[1];
      func_0x000107c61434(uVar3);
      func_0x000100403b00(auStack_78,uVar7,uVar3);
      func_0x000107c6142c(uStack_70);
      lVar9 = lVar1;
    }
    bVar6 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar6) break;
    if ((long)(0x3f - uVar10 >> 6) <= lVar1) {
      func_0x000101bde484(param_1,puVar8,~uVar10,lVar9,0);
      return uStack_68;
    }
    uVar11 = puVar8[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10262d104);
  (*pcVar5)();
}



/* Entry: 10262d104; end: 10262d46b;  */

void FUN_10262d104(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined8 auStack_100 [4];
  undefined8 uStack_e0;
  long *plStack_d8;
  long alStack_c8 [4];
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar8 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&uStack_e0 - extraout_x8;
  lVar9 = 0;
  func_0x000103a814dc();
  alStack_c8[2] = *(long *)(lVar9 + -8);
  alStack_c8[3] = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_c8[2] + 0x40));
  puVar18 = (undefined8 *)(lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  plStack_d8 = param_1;
  func_0x000107c6142c(*param_1);
  func_0x0001000285a8(0x112eb0b10,&UNK_10dac5360);
  lVar9 = param_2;
  func_0x000107c6048c();
  uVar14 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_2 + 0x40);
  alStack_c8[0] = lVar9 + 0x40;
  lStack_a0 = param_2;
  func_0x000107c61434(param_2);
  lVar16 = 0;
  alStack_c8[1] = lVar9;
  lStack_a8 = lVar8;
  if (uVar15 == 0) goto LAB_10262d248;
  do {
    uVar12 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
    uStack_98 = uVar15 - 1 & uVar15;
    while( true ) {
      uVar15 = LZCOUNT(uVar12);
      uVar12 = uVar15 | lVar16 << 6;
      puVar1 = (undefined8 *)(*(long *)(lStack_a0 + 0x30) + uVar12 * 0x10);
      func_0x000101bde48c(*(long *)(lStack_a0 + 0x38) + *(long *)(alStack_c8[2] + 0x48) * uVar12,
                          puVar18);
      lVar9 = alStack_c8[3];
      uVar3 = puVar1[1];
      uStack_78 = *puVar18;
      uStack_70 = *puVar1;
      uStack_68 = puVar18[1];
      uStack_80 = puVar18[2];
      uVar4 = puVar18[3];
      func_0x00010262f7a0((long)puVar18 + (long)*(int *)(alStack_c8[3] + 0x1c),lVar8,0x112d36580,
                          &UNK_10d9016d0);
      puVar1 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar9 + 0x20));
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar9 + 0x24));
      uVar11 = puVar2[1];
      uStack_90 = *puVar2;
      uStack_88 = *puVar1;
      if (*(char *)((long)puVar18 + (long)*(int *)(lVar9 + 0x2c) + 8) == '\x01') {
        func_0x000107c61434(uVar3);
        func_0x000107c61434(uStack_68);
        func_0x000107c61434(uVar4);
        func_0x000107c61434(uVar5);
        func_0x000107c61434(uVar11);
        puVar17 = (undefined *)0x0;
      }
      else {
        puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c61434(uVar3);
        func_0x000107c61434(uStack_68);
        func_0x000107c61434(uVar4);
        func_0x000107c61434(uVar5);
        func_0x000107c61434(uVar11);
        func_0x000107c490d8();
      }
      uVar10 = 0;
      FUN_102704690(0);
      func_0x000107c610f8();
      puVar18[-3] = uVar11;
      puVar18[-2] = puVar17;
      puVar18[-4] = uStack_90;
      lVar8 = lStack_a8;
      uVar11 = 0;
      func_0x000102703ee0(uVar10,0,uStack_78,uStack_68,uStack_80,uVar4,lStack_a8,uStack_88,uVar5);
      func_0x00010111dddc(puVar18);
      uVar13 = (uVar15 & 0xffffffffffffffc0 | lVar16 << 6) >> 3;
      *(ulong *)(alStack_c8[0] + uVar13) =
           *(ulong *)(alStack_c8[0] + uVar13) | 1L << (uVar15 & 0x3f);
      puVar1 = (undefined8 *)(*(long *)(alStack_c8[1] + 0x30) + uVar12 * 0x10);
      *puVar1 = uStack_70;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(alStack_c8[1] + 0x38) + uVar12 * 8) = uVar11;
      if (SCARRY8(*(long *)(alStack_c8[1] + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10262d46c);
        (*pcVar7)();
      }
      *(long *)(alStack_c8[1] + 0x10) = *(long *)(alStack_c8[1] + 0x10) + 1;
      uVar15 = uStack_98;
      if (uStack_98 != 0) break;
LAB_10262d248:
      do {
        lVar6 = alStack_c8[1];
        lVar9 = lVar16 + 1;
        if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10262d468);
          (*pcVar7)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar9) {
          func_0x000107c6142c(lStack_a0);
          *plStack_d8 = lVar6;
          return;
        }
        uVar15 = ((ulong *)(param_2 + 0x40))[lVar9];
        lVar16 = lVar16 + 1;
      } while (uVar15 == 0);
      uVar12 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uStack_98 = uVar15 - 1 & uVar15;
      lVar16 = lVar9;
    }
  } while( true );
}



/* Entry: 10262d46c; end: 10262d4cb; -[_TtC38MapExternalMusicServicesImplementation34ExternalMusicNowPlayingServiceObjc init] */

void FUN_10262d46c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapExternalMusicServicesImplementation.ExternalMusicNowPlayingServiceObjc",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10262d498);
  (*pcVar1)();
}



/* Entry: 10262d4cc; end: 10262d5ab; -[_TtC38MapExternalMusicServicesImplementation34ExternalMusicNowPlayingServiceObjc .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262d4cc(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb0b48 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb0b50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb0b58));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb0b68));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb0b20));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb0b28));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb0b30));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb0b38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb0b40));
  return;
}



/* Entry: 10262d5ac; end: 10262d5c7;  */

void FUN_10262d5ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262d5c8,0,0);
  return;
}



/* Entry: 10262d5c8; end: 10262d65f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262d5c8(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x18) + _DAT_112eb0b68);
  plVar1 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10262d624;
  plVar1[0xf] = *(long *)(unaff_x22 + 0x10);
  plVar1[0x10] = lVar5;
  lVar2 = 0;
  FUN_1026347a4();
  plVar1[0x11] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x12] = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x13] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x14] = uVar4;
  lVar2 = 0x112eb0e50;
  func_0x0001000285a8(0x112eb0e50,&UNK_10dac5670);
  uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x15] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x16] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x17] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x18] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x19] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x1a] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x1b] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x1c] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102630fec,lVar5,0);
  return;
}



/* Entry: 10262d660; end: 10262d6f7;  */

/* WARNING: Possible PIC construction at 0x00010262d6e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010262d6e4) */

void FUN_10262d660(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  puVar1 = &UNK_11052c970;
  func_0x000107c613fc(&UNK_11052c970,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  func_0x000107c61174(uVar2);
  uVar2 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  func_0x0001001ca524(0x61,0,0x3c,4,0,0,&UNK_10dac5448,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10262d6f8; end: 10262d713;  */

void FUN_10262d6f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262d714,0,0);
  return;
}



/* Entry: 10262d714; end: 10262d76f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262d714(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x18) + _DAT_112eb0b68);
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10262fcd0;
  plVar1[5] = *(long *)(unaff_x22 + 0x10);
  plVar1[6] = lVar5;
  lVar2 = 0x112eb0e50;
  func_0x0001000285a8(0x112eb0e50,&UNK_10dac5670);
  uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[7] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[8] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102630adc,lVar5,0);
  return;
}



/* Entry: 10262d770; end: 10262d78f;  */

void FUN_10262d770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262d790,0,0);
  return;
}



/* Entry: 10262d790; end: 10262d82f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262d790(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x28) + _DAT_112eb0b68);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10262d7f0;
  lVar3 = *(long *)(unaff_x22 + 0x18);
  lVar2 = *(long *)(unaff_x22 + 0x10);
  plVar1[7] = *(long *)(unaff_x22 + 0x20);
  plVar1[8] = lVar5;
  plVar1[5] = lVar2;
  plVar1[6] = lVar3;
  lVar3 = 0x112eb0e50;
  func_0x0001000285a8(0x112eb0e50,&UNK_10dac5670);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[9] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026325dc,lVar5,0);
  return;
}



/* Entry: 10262d830; end: 10262d87f;  */

void FUN_10262d830(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *unaff_x20;
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10262d880;
  plVar3[7] = param_1;
  plVar3[8] = lVar4;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar3[9] = lVar4;
  lVar4 = 0x112d45220;
  FUN_10262f3c0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar3[10] = lVar2;
  plVar3[0xb] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262ce68,lVar2,lVar4);
  return;
}



/* Entry: 10262d880; end: 10262d8bb;  */

void FUN_10262d880(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010262d8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10262d8bc; end: 10262d8d3;  */

void FUN_10262d8bc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262d8d4,0,0);
  return;
}



/* Entry: 10262d8d4; end: 10262d92f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262d8d4(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x18) + _DAT_112eb0b68);
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10262fcd8;
  plVar1[5] = *(long *)(unaff_x22 + 0x10);
  plVar1[6] = lVar5;
  lVar2 = 0x112eb0e50;
  func_0x0001000285a8(0x112eb0e50,&UNK_10dac5670);
  uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[7] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[8] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102630adc,lVar5,0);
  return;
}



/* Entry: 10262d930; end: 10262d9df; -[_TtC38MapExternalMusicServicesImplementation34ExternalMusicNowPlayingServiceObjc requestRefresh] */

void FUN_10262d930(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11052c948;
  func_0x000107c613fc(&UNK_11052c948,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar2 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  uVar3 = 0x61;
  func_0x0001001ca524(0x61,0,0x3c,4,0,0,&UNK_10dac5440,puVar1,uVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10262d9e0; end: 10262da1f; -[_TtC38MapExternalMusicServicesImplementation34ExternalMusicNowPlayingServiceObjc currentlyListeningTrackObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262d9e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000104877210();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10262da20; end: 10262da3b;  */

void FUN_10262da20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262da3c,0,0);
  return;
}



/* Entry: 10262da3c; end: 10262dadf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262da3c(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x18) + _DAT_112eb0b68);
  plVar1 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10262da98;
  plVar1[0xf] = *(long *)(unaff_x22 + 0x20);
  plVar1[0x10] = lVar5;
  lVar2 = 0;
  FUN_1026347a4();
  plVar1[0x11] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x12] = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x13] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x14] = uVar4;
  lVar2 = 0x112eb0e50;
  func_0x0001000285a8(0x112eb0e50,&UNK_10dac5670);
  uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x15] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x16] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x17] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x18] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x19] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x1a] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x1b] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x1c] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102630fec,lVar5,0);
  return;
}



/* Entry: 10262dae0; end: 10262dbaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262dae0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  FUN_10262dbb0(uVar4);
  uVar3 = uVar4;
  func_0x000100403a6c();
  func_0x000107c6142c(uVar4);
  uVar4 = *(undefined8 *)(lVar2 + _DAT_112eb0b20);
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(unaff_x22 + 0x10);
  func_0x000107c61574(uVar4);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61434(uVar3);
  uVar4 = uVar5;
  FUN_10262fa00(uVar5,uVar3);
  func_0x000107c61430(uVar3,2);
  func_0x000107c6142c(uVar5);
  (*pcVar1)(uVar4,0);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010262dbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10262dbb0; end: 10262def3;  */

undefined * FUN_10262dbb0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  char cVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_98 [32];
  ulong uStack_78;
  ulong uStack_70;
  char cStack_68;
  
  uVar1 = param_1 & 0xc000000000000001;
  if (uVar1 == 0) {
    uVar15 = *(ulong *)(param_1 + 0x10);
  }
  else {
    uVar15 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar15 = param_1;
    }
    func_0x000107c6029c();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    uVar8 = uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar8,0);
    if (uVar1 == 0) {
      uVar6 = param_1 + 0x38;
      func_0x000107c60268(uVar6,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
      cStack_68 = '\0';
      uVar8 = (ulong)*(uint *)(param_1 + 0x24);
    }
    else {
      uVar6 = param_1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_1) {
        uVar6 = param_1;
      }
      func_0x000107c60284();
      cStack_68 = '\x01';
    }
    uStack_78 = uVar6;
    uStack_70 = uVar8;
    if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10262deec);
      (*pcVar5)();
    }
    uVar8 = 0;
    uVar6 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar6 = param_1;
    }
    do {
      cVar4 = cStack_68;
      uVar2 = uStack_70;
      uVar13 = uStack_78;
      if (uVar8 == uVar15) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10262dedc);
        (*pcVar5)();
      }
      uVar14 = uStack_78;
      uVar9 = uStack_70;
      FUN_102556968(uStack_78,uStack_70,cStack_68,param_1);
      uVar10 = uVar14;
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar11 = uVar10;
      func_0x000107c5faec();
      func_0x000107c61170(uVar14);
      func_0x000107c61170(uVar10);
      uVar14 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar14) {
        func_0x000100403514(1 < *(ulong *)(puVar3 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar14 + 1;
      *(ulong *)(puVar3 + uVar14 * 0x10 + 0x20) = uVar11;
      *(ulong *)(puVar3 + uVar14 * 0x10 + 0x28) = uVar9;
      if (uVar1 == 0) {
        if (cVar4 == '\x01') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10262def4);
          (*pcVar5)();
        }
        uVar14 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
        if (uVar14 <= uVar13) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10262dee0);
          (*pcVar5)();
        }
        uVar11 = uVar13 >> 6;
        uVar10 = *(ulong *)(param_1 + 0x38 + uVar11 * 8);
        if ((uVar10 >> (uVar13 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10262dee4);
          (*pcVar5)();
        }
        if (*(int *)(param_1 + 0x24) != (int)uVar2) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10262dee8);
          (*pcVar5)();
        }
        uVar10 = uVar10 & -2L << (uVar13 & 0x3f);
        if (uVar10 == 0) {
          lVar16 = uVar11 << 6;
          puVar12 = (ulong *)(param_1 + 0x40 + uVar11 * 8);
          do {
            uVar11 = uVar11 + 1;
            if (uVar14 + 0x3f >> 6 <= uVar11) {
              FUN_1025572a4(uVar13,uVar2,cVar4);
              goto LAB_10262de6c;
            }
            uVar10 = *puVar12;
            lVar16 = lVar16 + 0x40;
            puVar12 = puVar12 + 1;
          } while (uVar10 == 0);
          FUN_1025572a4(uVar13,uVar2,cVar4);
          uVar13 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar14 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) + lVar16;
        }
        else {
          uVar2 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
          uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          uVar14 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | uVar13 & 0x7fffffffffffffc0;
        }
LAB_10262de6c:
        uStack_70 = (ulong)*(uint *)(param_1 + 0x24);
        cStack_68 = '\0';
        uStack_78 = uVar14;
      }
      else {
        if (cVar4 != '\x01') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10262def0);
          (*pcVar5)();
        }
        func_0x000107c6028c(uVar13,uVar2);
        if (uVar13 == 0) {
          uVar13 = 1;
        }
        else {
          func_0x000107c61558();
        }
        uVar7 = 0x112ea51d8;
        func_0x0001000285a8(0x112ea51d8,&UNK_10dab84d0);
        pcVar5 = (code *)auStack_98;
        func_0x000107c5fe1c(pcVar5,uVar7);
        func_0x000107c602b8(uVar7,uVar13,uVar6);
        (*pcVar5)(auStack_98,0);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar15);
    FUN_1025572a4(uStack_78,uStack_70,cStack_68);
  }
  return puVar3;
}



/* Entry: 10262def4; end: 10262e02f; -[_TtC38MapExternalMusicServicesImplementation34ExternalMusicNowPlayingServiceObjc getCurrentlyListeningTracksForPersonLocations:completion:] */

void FUN_10262def4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  uVar1 = 0;
  FUN_10262f578(0,0x112d5ecd8,&PTR_PTR_1126bf130);
  uVar4 = uVar1;
  func_0x000101158e5c();
  func_0x000107c5fe10(param_3,uVar1,uVar4);
  puVar2 = &UNK_11052c8f8;
  func_0x000107c613fc(&UNK_11052c8f8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  puVar3 = &UNK_11052c920;
  func_0x000107c613fc(&UNK_11052c920,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(code **)(puVar3 + 0x20) = FUN_10262f5b8;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61434(param_3);
  func_0x000107c6157c(puVar2);
  uVar4 = 0x61;
  func_0x0001001ca524(0x61,0,0x3c,4,0,0,&UNK_10dac5438,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c6142c(param_3);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10262e030; end: 10262e09b;  */

void FUN_10262e030(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_102704690(0);
  func_0x000107c5f9dc(param_1,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10262e09c; end: 10262e20f;  */

void FUN_10262e09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar1;
  lVar2 = 0;
  func_0x000103a814dc();
  *(long *)(unaff_x22 + 0x40) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar1;
  lVar2 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10262e168,0,0);
  return;
}



/* Entry: 10262e210; end: 10262e407;  */

void FUN_10262e210(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar4 = *(long *)(unaff_x22 + 0x48);
  func_0x00010262f7a0(*(undefined8 *)(unaff_x22 + 0x60),uVar10,0x112d5ed18,&UNK_10d925c50);
  (**(code **)(lVar4 + 0x30))(uVar10,1,uVar2);
  if ((int)uVar10 == 1) {
    uVar12 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(unaff_x22 + 0x50);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar4 = *(long *)(unaff_x22 + 0x40);
    func_0x00010111dd50(*(undefined8 *)(unaff_x22 + 0x58),puVar3);
    uVar2 = *puVar3;
    uVar5 = puVar3[1];
    uVar9 = puVar3[2];
    uVar6 = puVar3[3];
    func_0x00010262f7a0((long)puVar3 + (long)*(int *)(lVar4 + 0x1c),uVar10,0x112d36580,
                        &UNK_10d9016d0);
    puVar1 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x20));
    uVar10 = *puVar1;
    uVar7 = puVar1[1];
    puVar1 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar4 + 0x24));
    uVar14 = *puVar1;
    uVar8 = puVar1[1];
    if (*(char *)((long)puVar3 + (long)*(int *)(lVar4 + 0x2c) + 8) == '\x01') {
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar6);
      func_0x000107c61434(uVar7);
      func_0x000107c61434(uVar8);
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar6);
      func_0x000107c61434(uVar7);
      func_0x000107c61434(uVar8);
      func_0x000107c490d8();
    }
    uVar16 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar11 = 0;
    FUN_102704690(0);
    func_0x000107c610f8();
    uVar12 = 0;
    func_0x000102703ee0(uVar11,0,uVar2,uVar5,uVar9,uVar6,uVar13,uVar10,uVar7,uVar14,uVar8,puVar15);
    func_0x00010111dddc(uVar16);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(unaff_x22 + 0x28))(uVar12,0);
  func_0x000107c61170(uVar12);
  func_0x00010262f758(uVar2);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar14);
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010262e404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10262e408; end: 10262e523; -[_TtC38MapExternalMusicServicesImplementation34ExternalMusicNowPlayingServiceObjc getCurrentlyListeningTrackForUserId:completion:] */

void FUN_10262e408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c5faec();
  puVar1 = &UNK_11052c8a8;
  func_0x000107c613fc(&UNK_11052c8a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = &UNK_11052c8d0;
  func_0x000107c613fc(&UNK_11052c8d0,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(code **)(puVar2 + 0x28) = FUN_10262f4b0;
  *(undefined **)(puVar2 + 0x30) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61434(param_2);
  func_0x000107c6157c(puVar1);
  uVar3 = 0x61;
  func_0x0001001ca524(0x61,0,0x3c,4,0,0,&UNK_10dac5430,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10262e524; end: 10262e55b;  */

void FUN_10262e524(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c5fe08(uVar1,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  *param_1 = uVar1;
  return;
}



/* Entry: 10262e55c; end: 10262e603; -[_TtC38MapExternalMusicServicesImplementation34ExternalMusicNowPlayingServiceObjc updatedTrackUserIdsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262e55c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = param_1;
  func_0x0001010ec5e8();
  func_0x000107c61174(param_1);
  func_0x0001000c2068(uVar1);
  uVar2 = 0;
  FUN_10262f578(0,0x112d61f88,&PTR__OBJC_CLASS___NSSet_1126ae870);
  pcVar3 = FUN_10262e524;
  func_0x0001000bfde0(FUN_10262e524,0,uVar2);
  func_0x000107c61574(uVar1);
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10262e604; end: 10262e693;  */

void FUN_10262e604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
  uVar3 = 0x112d45220;
  FUN_10262f3c0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262e694,uVar2,uVar3);
  return;
}



/* Entry: 10262e694; end: 10262e727;  */

void FUN_10262e694(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x50) = lVar3;
  if (lVar3 != 0) {
    plVar2 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10262e728;
    lVar4 = *(long *)(unaff_x22 + 0x30);
    plVar2[7] = lVar3;
    plVar2[8] = lVar4;
    lVar4 = 0;
    func_0x000107c5fcec();
    puVar1 = PTR___sScMMa_11034fc70;
    lVar3 = lVar4;
    func_0x000107c5fce8();
    plVar2[9] = lVar3;
    lVar3 = 0x112d45220;
    FUN_10262f3c0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8();
    plVar2[10] = lVar4;
    plVar2[0xb] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10262ce68,lVar4,lVar3);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010262e724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10262e728; end: 10262e7a7;  */

void FUN_10262e728(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x10262e76c,*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x48));
  return;
}



/* Entry: 10262e7a8; end: 10262e88b; -[_TtC38MapExternalMusicServicesImplementation34ExternalMusicNowPlayingServiceObjc presentDeepLinkFlowOnViewController:] */

/* WARNING: Possible PIC construction at 0x00010262e870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010262e874) */

void FUN_10262e7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11052c820;
  func_0x000107c613fc(&UNK_11052c820,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  puVar2 = &UNK_11052c880;
  func_0x000107c613fc(&UNK_11052c880,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  uVar3 = 0x61;
  func_0x0001001ca524(0x61,0,0x3c,3,0,0,&UNK_10dac5428,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10262e88c; end: 10262ec13;  */

/* WARNING: Removing unreachable block (ram,0x00010262ebc0) */
/* WARNING: Removing unreachable block (ram,0x00010262ebd0) */

undefined * FUN_10262e88c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  int iVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uStack_100;
  long lStack_f8;
  undefined *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined *puStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  long lStack_98;
  ulong *puStack_90;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 0x10) != 0) {
    puVar17 = (ulong *)(param_1 + 0x40);
    uVar15 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar18 = 0xffffffffffffffff;
    if (-uVar15 < 0x40) {
      uVar18 = ~(-1L << (-uVar15 & 0x3f));
    }
    uVar18 = uVar18 & *puVar17;
    puVar1 = param_2 + 0x38;
    func_0x000107c61434();
    lVar7 = 0;
    uStack_100 = ~uVar15;
    lVar6 = 0;
    do {
      while (uVar18 != 0) {
        uVar13 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar18 = uVar18 - 1 & uVar18;
        puVar3 = (ulong *)(*(long *)(param_1 + 0x30) +
                           LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) * 0x10 + lVar7 * 0x400);
        uVar13 = *puVar3;
        uVar4 = puVar3[1];
        lStack_f8 = lVar7;
        lStack_98 = param_1;
        puStack_90 = puVar17;
        uStack_88 = uStack_100;
        lStack_80 = lVar7;
        uStack_78 = uVar18;
        func_0x000107c6068c(auStack_e0,*(undefined8 *)(param_2 + 0x28));
        func_0x000107c61434(uVar4);
        puVar10 = auStack_e0;
        func_0x000107c5fb58(puVar10,uVar13,uVar4);
        func_0x000107c606a8();
        uVar14 = -1L << ((ulong)(byte)param_2[0x20] & 0x3f);
        uVar16 = (ulong)puVar10 & (uVar14 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar1 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0) {
          do {
            puVar3 = (ulong *)(*(long *)(param_2 + 0x30) + uVar16 * 0x10);
            uVar11 = *puVar3;
            uVar5 = puVar3[1];
            if ((uVar11 == uVar13 && uVar5 == uVar4) ||
               (func_0x000107c605b8(uVar11,uVar5,uVar13,uVar4,0), (uVar11 & 1) != 0)) {
              func_0x000107c6142c(uVar4);
              uVar15 = (1L << ((ulong)(byte)param_2[0x20] & 0x3f)) + 0x3fU >> 6;
              plStack_c0 = &lStack_98;
              uVar18 = uVar15 << 3;
              puStack_d0 = param_2;
              uStack_c8 = uVar16;
              if ((param_2[0x20] & 0x3f) < 0xe) {
LAB_10262ea4c:
                (*(code *)PTR____chkstk_darwin_11034bd40)();
                puVar12 = (undefined *)((long)&uStack_100 - (uVar18 + 0xf & 0x1ffffffffffffff0));
                func_0x000107c610b4(puVar12,puVar1);
                FUN_10262ec14(puVar12,uVar15,param_2,uVar16,&lStack_98);
              }
              else {
                iVar9 = 2;
                func_0x000100029b9c(2,0xf,4,0);
                if ((iVar9 != 0) &&
                   (uVar13 = uVar18, func_0x000107c61594(uVar18,8), (uVar13 & 1) != 0))
                goto LAB_10262ea4c;
                func_0x000107c6158c(uVar18,0xffffffffffffffff);
                if (uVar18 == 0) goto LAB_10262ebbc;
                func_0x000107c610b4();
                FUN_10262fc98(&puStack_e8,uVar18,uVar15);
                func_0x000107c61590(uVar18,0xffffffffffffffff,0xffffffffffffffff);
                puVar12 = puStack_e8;
              }
              func_0x000107c61574(param_2);
              func_0x000101bde484(lStack_98,puStack_90,uStack_88,lStack_80,uStack_78);
              param_2 = puVar12;
              goto LAB_10262eaf0;
            }
            uVar16 = uVar16 + 1 & ~uVar14;
          } while ((*(ulong *)(puVar1 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0);
        }
        func_0x000107c6142c(uVar4);
        lVar7 = lStack_f8;
        lVar6 = lStack_f8;
      }
      lVar2 = lVar7 + 1;
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10262eb30);
        (*pcVar8)();
      }
      if ((long)(0x3f - uVar15 >> 6) <= lVar2) goto LAB_10262eadc;
      uVar18 = puVar17[lVar2];
      lVar7 = lVar2;
    } while( true );
  }
  func_0x000107c61574(param_2);
  param_2 = PTR___swiftEmptySetSingleton_11034f1d8;
LAB_10262eaf0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_2;
  }
  func_0x000107c60e78();
LAB_10262ebbc:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10262ebc0);
  (*pcVar8)();
LAB_10262eadc:
  func_0x000101bde484(param_1,puVar17,uStack_100,lVar6,0);
  goto LAB_10262eaf0;
}



/* Entry: 10262ec14; end: 10262ee43;  */

void FUN_10262ec14(long param_1,undefined8 param_2,long param_3,ulong param_4,long *param_5)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_a8 [72];
  
  lVar9 = *(long *)(param_3 + 0x10);
  uVar10 = param_4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(param_1 + uVar10) = *(ulong *)(param_1 + uVar10) & (-1L << (param_4 & 0x3f)) - 1U;
  lVar9 = lVar9 + -1;
  do {
    while( true ) {
      lVar2 = param_5[3];
      uVar10 = param_5[4];
      lVar11 = lVar2;
      if (uVar10 == 0) {
        uVar12 = param_5[2] + 0x40U >> 6;
        lVar13 = lVar2;
        do {
          lVar11 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10262ee40);
            (*pcVar4)();
          }
          if ((long)uVar12 <= lVar11) {
            if ((long)uVar12 <= lVar2 + 1) {
              uVar12 = lVar2 + 1;
            }
            param_5[3] = uVar12 - 1;
            param_5[4] = 0;
            func_0x000107c6157c(param_3);
            func_0x0001010aeef0(param_1,param_2,lVar9,param_3);
            return;
          }
          uVar10 = *(ulong *)(param_5[1] + lVar11 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar10 == 0);
      }
      uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      puVar1 = (ulong *)(*(long *)(*param_5 + 0x30) +
                         LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) * 0x10 + lVar11 * 0x400);
      uVar12 = *puVar1;
      uVar3 = puVar1[1];
      param_5[3] = lVar11;
      param_5[4] = uVar10 - 1 & uVar10;
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_3 + 0x28));
      func_0x000107c61434(uVar3);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar12,uVar3);
      func_0x000107c606a8();
      uVar10 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
      uVar16 = (ulong)puVar6 & (uVar10 ^ 0xffffffffffffffff);
      uVar15 = uVar16 >> 6;
      uVar14 = 1L << (uVar16 & 0x3f);
      if ((uVar14 & *(ulong *)(param_3 + 0x38 + uVar15 * 8)) != 0) break;
LAB_10262edc0:
      func_0x000107c6142c(uVar3);
    }
    puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + uVar16 * 0x10);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    if (uVar7 != uVar12 || uVar8 != uVar3) {
      do {
        func_0x000107c605b8(uVar7,uVar8,uVar12,uVar3,0);
        if ((uVar7 & 1) != 0) break;
        uVar16 = uVar16 + 1 & ~uVar10;
        uVar15 = uVar16 >> 6;
        uVar14 = 1L << (uVar16 & 0x3f);
        if ((uVar14 & *(ulong *)(param_3 + 0x38 + uVar15 * 8)) == 0) goto LAB_10262edc0;
        puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + uVar16 * 0x10);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
      } while ((uVar7 != uVar12) || (uVar8 != uVar3));
    }
    func_0x000107c6142c(uVar3);
    uVar10 = *(ulong *)(param_1 + uVar15 * 8);
    *(ulong *)(param_1 + uVar15 * 8) = uVar10 & (uVar14 ^ 0xffffffffffffffff);
    if ((uVar10 & uVar14) != 0) {
      bVar5 = SBORROW8(lVar9,1);
      lVar9 = lVar9 + -1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10262ee44);
        (*pcVar4)();
      }
      if (lVar9 == 0) {
        return;
      }
    }
  } while( true );
}



/* Entry: 10262ee44; end: 10262efdf;  */

void FUN_10262ee44(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x21;
  undefined8 uVar9;
  long lVar10;
  long lStack_98;
  ulong uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  lStack_98 = 0;
  uVar7 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uStack_80 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uStack_80 = ~(-1L << (uVar7 & 0x3f));
  }
  uStack_80 = uStack_80 & *(ulong *)(param_3 + 0x40);
  lVar6 = 0;
  do {
    if (uStack_80 == 0) {
      do {
        lVar10 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10262efe0);
          (*pcVar2)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar10) {
          FUN_10262efe0(param_1,param_2,lStack_98,param_3);
          return;
        }
        uStack_80 = ((ulong *)(param_3 + 0x40))[lVar10];
        lVar6 = lVar6 + 1;
      } while (uStack_80 == 0);
      uVar5 = (uStack_80 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_80 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uStack_80 = uStack_80 - 1 & uStack_80;
    }
    else {
      uVar5 = (uStack_80 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_80 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uStack_80 = uStack_80 - 1 & uStack_80;
      lVar10 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5);
    uVar8 = uVar5 | lVar10 << 6;
    puVar4 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar8 * 0x10);
    uStack_70 = *puVar4;
    uVar1 = puVar4[1];
    uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x38) + uVar8 * 8);
    uStack_68 = uVar1;
    uStack_58 = uVar9;
    func_0x000107c61434(uVar1);
    func_0x000107c61174(uVar9);
    puVar4 = &uStack_70;
    (*param_4)(puVar4,&uStack_58);
    func_0x000107c6142c(uVar1);
    func_0x000107c61170(uVar9);
    if (unaff_x21 != 0) {
      return;
    }
    lVar6 = lVar10;
    if (((ulong)puVar4 & 1) != 0) {
      uVar8 = (uVar5 & 0xffffffffffffffc0 | lVar10 << 6) >> 3;
      *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) | 1L << (uVar5 & 0x3f);
      bVar3 = SCARRY8(lStack_98,1);
      lStack_98 = lStack_98 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10262efa8);
        (*pcVar2)();
      }
    }
  } while( true );
}



/* Entry: 10262efe0; end: 10262f21f;  */

undefined * FUN_10262efe0(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      func_0x000107c6157c(param_4);
      puVar6 = param_4;
    }
    else {
      func_0x0001000285a8(0x112eb0b10,&UNK_10dac5360);
      puVar6 = param_3;
      func_0x000107c60498();
      if (param_2 < 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = *param_1;
      }
      lVar9 = 0;
      do {
        if (uVar13 == 0) {
          do {
            lVar15 = lVar9 + 1;
            if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10262f218);
              (*pcVar4)();
            }
            if (param_2 <= lVar15) {
              return puVar6;
            }
            uVar13 = param_1[lVar15];
            lVar9 = lVar9 + 1;
          } while (uVar13 == 0);
          uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar13 = uVar13 - 1 & uVar13;
        }
        else {
          uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar13 = uVar13 - 1 & uVar13;
          lVar15 = lVar9;
        }
        uVar8 = LZCOUNT(uVar8) | lVar15 << 6;
        puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar8 * 0x10);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        uVar14 = *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar8 * 8);
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar6 + 0x28));
        func_0x000107c61434(uVar3);
        func_0x000107c61174();
        puVar7 = auStack_a8;
        func_0x000107c5fb58(puVar7,uVar2,uVar3);
        func_0x000107c606a8();
        uVar12 = -1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
        uVar11 = (ulong)puVar7 & (uVar12 ^ 0xffffffffffffffff);
        uVar10 = uVar11 >> 6;
        uVar8 = -1L << (uVar11 & 0x3f) &
                (*(ulong *)(puVar6 + uVar10 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar8 == 0) {
          bVar5 = false;
          uVar8 = 0x3f - uVar12 >> 6;
          do {
            uVar11 = uVar10 + 1;
            if ((uVar11 == uVar8) && (bVar5)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10262f21c);
              (*pcVar4)();
            }
            uVar10 = 0;
            if (uVar11 != uVar8) {
              uVar10 = uVar11;
            }
            bVar5 = (bool)(uVar11 == uVar8 | bVar5);
          } while (*(ulong *)(puVar6 + uVar10 * 8 + 0x40) == 0xffffffffffffffff);
          uVar8 = ~*(ulong *)(puVar6 + uVar10 * 8 + 0x40);
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar10 << 6;
        }
        else {
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar11 & 0x7fffffffffffffc0;
        }
        uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar6 + uVar10 + 0x40) =
             1L << (uVar8 & 0x3f) | *(ulong *)(puVar6 + uVar10 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar6 + 0x30) + uVar8 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(puVar6 + 0x38) + uVar8 * 8) = uVar14;
        *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
        bVar5 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10262f220);
          (*pcVar4)();
        }
        lVar9 = lVar15;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar6;
}



/* Entry: 10262f220; end: 10262f2eb;  */

void FUN_10262f220(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10262f2ec);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      func_0x000107c60ee4(param_2,param_3 << 3);
    }
    func_0x000107c6157c(param_4);
    FUN_10262ee44(param_2,param_3,param_4,param_5,param_6);
    func_0x000107c61574(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      func_0x000107c61574(param_4);
    }
    else {
      *param_7 = unaff_x21;
      func_0x000107c61574(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10262f2e8);
  (*pcVar1)();
}



/* Entry: 10262f2ec; end: 10262f3b7;  */

long FUN_10262f2ec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10262f3b8; end: 10262f3bf;  */

void FUN_10262f3b8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10262cae0(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10262f3c0; end: 10262f3ff;  */

void FUN_10262f3c0(long *param_1,code *param_2,long param_3)

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



/* Entry: 10262f400; end: 10262f44b;  */

void FUN_10262f400(void)

{
  func_0x000107c61168(&PTR_PTR_112855000);
  return;
}



/* Entry: 10262f44c; end: 10262f4af;  */

void FUN_10262f44c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x10262fcdc;
  plVar4[5] = lVar3;
  plVar4[6] = lVar2;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[7] = lVar3;
  lVar3 = 0x112d45220;
  FUN_10262f3c0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[8] = lVar2;
  plVar4[9] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262e694,lVar2,lVar3);
  return;
}



/* Entry: 10262f4b0; end: 10262f4c3;  */

void FUN_10262f4b0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010262f4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 10262f4c4; end: 10262f4f7;  */

void FUN_10262f4c4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10262f4f8; end: 10262f577;  */

void FUN_10262f4f8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  plVar7 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x10262fce0;
  plVar7[5] = lVar3;
  plVar7[6] = lVar8;
  plVar7[3] = lVar2;
  plVar7[4] = lVar1;
  plVar7[2] = lVar5;
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[7] = uVar4;
  lVar5 = 0;
  func_0x000103a814dc();
  plVar7[8] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar7[9] = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[10] = uVar4;
  lVar5 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar6 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0xb] = uVar6;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10262e168,0,0);
  return;
}



/* Entry: 10262f578; end: 10262f5b7;  */

void FUN_10262f578(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10262f5b8; end: 10262f5bf;  */

void FUN_10262f5b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_102704690(0);
  func_0x000107c5f9dc(param_1,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10262f5c0; end: 10262f5f3;  */

void FUN_10262f5c0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10262f5f4; end: 10262f66b;  */

void FUN_10262f5f4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10262fce4;
  plVar5[5] = lVar2;
  plVar5[6] = lVar4;
  plVar5[3] = lVar1;
  plVar5[4] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262da3c,0,0);
  return;
}



/* Entry: 10262f66c; end: 10262f6c3;  */

void FUN_10262f66c(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10262f6c4;
  plVar1[2] = param_1;
  plVar1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262d8d4,0,0);
  return;
}



/* Entry: 10262f6c4; end: 10262f6ff;  */

void FUN_10262f6c4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010262f6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10262f700; end: 10262f757;  */

void FUN_10262f700(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10262fce8;
  plVar1[2] = param_1;
  plVar1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262d8d4,0,0);
  return;
}



/* Entry: 10262f758; end: 10262f7e7;  */

undefined8 FUN_10262f758(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10262f7e8; end: 10262f9ff;  */

void FUN_10262f7e8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lStack_c0;
  undefined1 auStack_a8 [72];
  
  lStack_c0 = 0;
  uVar11 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_3 + 0x40);
  lVar10 = 0;
LAB_10262f86c:
  do {
    do {
      if (uVar15 == 0) {
        do {
          lVar16 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10262fa00);
            (*pcVar5)();
          }
          if ((long)(uVar11 + 0x3f >> 6) <= lVar16) {
            FUN_10262efe0(param_1,param_2,lStack_c0,param_3);
            return;
          }
          uVar15 = ((ulong *)(param_3 + 0x40))[lVar16];
          lVar10 = lVar10 + 1;
        } while (uVar15 == 0);
        uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar15 = uVar15 - 1 & uVar15;
      }
      else {
        uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar15 = uVar15 - 1 & uVar15;
        lVar16 = lVar10;
      }
      uVar9 = LZCOUNT(uVar9);
      uVar12 = uVar9 | lVar16 << 6;
      lVar10 = lVar16;
    } while (*(long *)(param_4 + 0x10) == 0);
    puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + uVar12 * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar13 = *(undefined8 *)(*(long *)(param_3 + 0x38) + uVar12 * 8);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_4 + 0x28));
    func_0x000107c61434(uVar3);
    func_0x000107c61174();
    puVar7 = auStack_a8;
    func_0x000107c5fb58(puVar7,uVar2,uVar3);
    func_0x000107c606a8();
    uVar12 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
    uVar14 = (ulong)puVar7 & (uVar12 ^ 0xffffffffffffffff);
    if ((*(ulong *)(param_4 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0) {
      do {
        puVar1 = (ulong *)(*(long *)(param_4 + 0x30) + uVar14 * 0x10);
        uVar8 = *puVar1;
        uVar4 = puVar1[1];
        if ((uVar8 == uVar2 && uVar4 == uVar3) ||
           (func_0x000107c605b8(uVar8,uVar4,uVar2,uVar3,0), (uVar8 & 1) != 0)) {
          func_0x000107c6142c(uVar3);
          func_0x000107c61170(uVar13);
          uVar12 = (uVar9 & 0xffffffffffffffc0 | lVar16 << 6) >> 3;
          *(ulong *)(param_1 + uVar12) = *(ulong *)(param_1 + uVar12) | 1L << (uVar9 & 0x3f);
          bVar6 = SCARRY8(lStack_c0,1);
          lStack_c0 = lStack_c0 + 1;
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10262f9c8);
            (*pcVar5)();
          }
          goto LAB_10262f86c;
        }
        uVar14 = uVar14 + 1 & ~uVar12;
      } while ((*(ulong *)(param_4 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0);
    }
    func_0x000107c6142c(uVar3);
    func_0x000107c61170(uVar13);
  } while( true );
}



/* Entry: 10262fa00; end: 10262fc4b;  */

undefined1 * FUN_10262fa00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *unaff_x21;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_90 [8];
  undefined1 *puStack_88;
  undefined1 *apuStack_80 [2];
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (1L << ((ulong)*(byte *)(param_1 + 4) & 0x3f)) + 0x3fU >> 6;
  uVar6 = uVar5 * 8;
  puStack_60 = param_2;
  if ((*(byte *)(param_1 + 4) & 0x3f) < 0xe) {
    func_0x000107c61434(param_2);
    func_0x000107c6157c(param_1);
  }
  else {
    iVar1 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c61434(param_2);
    func_0x000107c6157c(param_1);
    if ((iVar1 == 0) || (uVar4 = uVar6, func_0x000107c61594(uVar6,8), (uVar4 & 1) == 0)) {
      func_0x000107c6158c(uVar6,0xffffffffffffffff);
      func_0x000107c6157c(param_1);
      FUN_10262f220(apuStack_80,uVar6,uVar5,param_1,FUN_10262fc4c,auStack_70,&puStack_88);
      puVar2 = apuStack_80[0];
      if (unaff_x21 != (undefined1 *)0x0) {
        puVar2 = puStack_88;
      }
      func_0x000107c61590(uVar6,0xffffffffffffffff,0xffffffffffffffff);
      goto joined_r0x00010262fbf8;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar2 = auStack_90 + -(uVar6 + 0xf & 0x3ffffffffffffff0);
  func_0x000107c60ee4(puVar2,uVar6);
  func_0x000107c61434(param_2);
  FUN_10262f7e8(puVar2,uVar5,param_1,param_2);
  if (unaff_x21 != (undefined1 *)0x0) {
    puVar2 = unaff_x21;
  }
  func_0x000107c6142c(param_2);
joined_r0x00010262fbf8:
  if (unaff_x21 == (undefined1 *)0x0) {
    func_0x000107c6142c(param_2);
    param_2 = param_1;
    func_0x000107c61574();
  }
  else {
    iVar1 = 2;
    puStack_88 = puVar2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_88,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(param_1);
    func_0x000107c6142c();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    uVar3 = *param_2;
    func_0x0001000f66f0(uVar3,param_2[1],param_1[2]);
    return (undefined1 *)(ulong)((uint)uVar3 & 1);
  }
  return puVar2;
}



/* Entry: 10262fc4c; end: 10262fc7f;  */

uint FUN_10262fc4c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_1;
  func_0x0001000f66f0(uVar1,param_1[1],*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)uVar1 & 1;
}



/* Entry: 10262fc80; end: 10262fc97;  */

void FUN_10262fc80(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10262d104(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10262fc98; end: 10262fcc7;  */

void FUN_10262fc98(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_10262ec14(param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10262fcc8; end: 10262fd0b;  */

void FUN_10262fcc8(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010262d65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10262fd0c; end: 10262fdab;  */

void FUN_10262fd0c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 10262fdac; end: 10262fde3;  */

void FUN_10262fdac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10262fde4; end: 10262fe63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10262fde4(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  FUN_10262fe64(param_1,unaff_x20 + _DAT_112eb0ba8);
  *(undefined8 *)(unaff_x20 + _DAT_112eb0bb0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 10262fe64; end: 10262fea7;  */

long FUN_10262fe64(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10262fea8; end: 10262fecf;  */

void FUN_10262fea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x58) = param_7;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262fed0,0,0);
  return;
}



/* Entry: 10262fed0; end: 102630017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262fed0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  code *pcVar6;
  undefined2 *puVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  undefined2 *puVar11;
  long unaff_x22;
  long lVar12;
  
  puVar7 = *(undefined2 **)(*(long *)(unaff_x22 + 0x48) + _DAT_112eb0bb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar7 == (undefined2 *)0x0) {
    puVar11 = (undefined2 *)0x0;
  }
  else {
    puVar11 = puVar7;
    func_0x000107c52060();
    func_0x000107c615e8();
    if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10262ff2c);
      (*pcVar6)();
    }
  }
  lVar10 = *(long *)(unaff_x22 + 0x48);
  lVar12 = *(long *)(unaff_x22 + 0x38);
  func_0x000103a83e90();
  uVar5 = *puVar7;
  lVar10 = lVar10 + _DAT_112eb0ba8;
  uVar2 = *(undefined8 *)(lVar10 + 0x18);
  lVar3 = *(long *)(lVar10 + 0x20);
  func_0x0001000a8868(lVar10,uVar2);
  if (lVar12 != 0) {
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)
              (&UNK_11053e480,(undefined8 *)(unaff_x22 + 0x10),&UNK_11053e480,PTR___sSiN_11034deb0);
    return;
  }
  uVar4 = *(undefined1 *)(unaff_x22 + 0x58);
  piVar9 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar9;
  plVar8 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_102630018;
                    /* WARNING: Could not recover jumptable at 0x000102630014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
             *(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30),
             *(undefined8 *)(unaff_x22 + 0x40),(ulong)CONCAT12(uVar4,uVar5),puVar11,0,uVar2,lVar3);
  return;
}



/* Entry: 102630018; end: 102630067;  */

void FUN_102630018(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x59) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102630068,0,0);
  return;
}



/* Entry: 102630068; end: 1026300eb;  */

void FUN_102630068(undefined8 param_1)

{
  long unaff_x22;
  
  if (*(byte *)(unaff_x22 + 0x59) < 2) {
                    /* WARNING: Could not recover jumptable at 0x0001026300a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  FUN_1026300ec();
  func_0x000107c613f8(&UNK_11052ca48,param_1,0,0);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x0001026300e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026300ec; end: 10263012b;  */

void FUN_1026300ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb0bb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac5574;
  func_0x000107c61520(&UNK_10dac5574,&UNK_11052ca48);
  puRam0000000112eb0bb8 = puVar1;
  return;
}



/* Entry: 10263012c; end: 10263018b; -[_TtC38MapExternalMusicServicesImplementation35ExternalMusicTrackSavingServiceObjc init] */

void FUN_10263012c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapExternalMusicServicesImplementation.ExternalMusicTrackSavingServiceObjc",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102630158);
  (*pcVar1)();
}



/* Entry: 10263018c; end: 1026301c3; -[_TtC38MapExternalMusicServicesImplementation35ExternalMusicTrackSavingServiceObjc .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10263018c(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112eb0ba8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb0bb0));
  return;
}



/* Entry: 1026301c4; end: 10263025f;  */

void FUN_1026301c4(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  undefined1 param_7)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102630260;
  plVar1[8] = param_6;
  plVar1[9] = lVar2;
  *(undefined1 *)(plVar1 + 0xb) = param_7;
  plVar1[6] = param_4;
  plVar1[7] = param_5;
  plVar1[4] = param_2;
  plVar1[5] = param_3;
  plVar1[3] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262fed0,0,0);
  return;
}



/* Entry: 102630260; end: 1026302b7;  */

void FUN_102630260(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026302b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026302b8; end: 1026303e3;  */

/* WARNING: Possible PIC construction at 0x0001026303bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026303c0) */

void FUN_1026302b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  func_0x000107c61434(param_8);
  FUN_1026307b0(param_7,param_8);
  uVar1 = 2;
  if (((uint)param_7 & 0xff) != 5) {
    uVar1 = (char)param_7;
  }
  puVar2 = &UNK_11052c9a0;
  func_0x000107c613fc(&UNK_11052c9a0,0x60,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  *(undefined8 *)(puVar2 + 0x40) = param_6;
  puVar2[0x48] = uVar1;
  *(undefined8 *)(puVar2 + 0x50) = param_9;
  *(undefined8 *)(puVar2 + 0x58) = param_10;
  func_0x000107c61174();
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c6157c(param_10);
  func_0x0001001ca524(0x61,0,0x3c,4,0,0,&UNK_10dac5460,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1026303e4; end: 10263041b;  */

void FUN_1026303e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_11;
  *(undefined8 *)(unaff_x22 + 0x58) = param_12;
  *(undefined1 *)(unaff_x22 + 0x68) = param_9;
  *(undefined8 *)(unaff_x22 + 0x40) = param_7;
  *(undefined8 *)(unaff_x22 + 0x48) = param_8;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10263041c,0,0);
  return;
}



/* Entry: 10263041c; end: 102630563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10263041c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  code *pcVar6;
  undefined2 *puVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  undefined2 *puVar11;
  long unaff_x22;
  long lVar12;
  
  puVar7 = *(undefined2 **)(*(long *)(unaff_x22 + 0x18) + _DAT_112eb0bb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar7 == (undefined2 *)0x0) {
    puVar11 = (undefined2 *)0x0;
  }
  else {
    puVar11 = puVar7;
    func_0x000107c52060();
    func_0x000107c615e8();
    if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102630478);
      (*pcVar6)();
    }
  }
  lVar12 = *(long *)(unaff_x22 + 0x40);
  lVar10 = *(long *)(unaff_x22 + 0x18);
  func_0x000103a83e90();
  uVar5 = *puVar7;
  lVar10 = lVar10 + _DAT_112eb0ba8;
  uVar2 = *(undefined8 *)(lVar10 + 0x18);
  lVar3 = *(long *)(lVar10 + 0x20);
  func_0x0001000a8868(lVar10,uVar2);
  if (lVar12 != 0) {
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)
              (&UNK_11053e480,(undefined8 *)(unaff_x22 + 0x10),&UNK_11053e480,PTR___sSiN_11034deb0);
    return;
  }
  uVar4 = *(undefined1 *)(unaff_x22 + 0x68);
  piVar9 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar9;
  plVar8 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_102630564;
                    /* WARNING: Could not recover jumptable at 0x000102630560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),
             *(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38),
             *(undefined8 *)(unaff_x22 + 0x48),(ulong)CONCAT12(uVar4,uVar5),puVar11,0,uVar2,lVar3);
  return;
}



/* Entry: 102630564; end: 1026305b3;  */

void FUN_102630564(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x69) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026305b4,0,0);
  return;
}



/* Entry: 1026305b4; end: 10263068b;  */

void FUN_1026305b4(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x50);
  if (*(char *)(unaff_x22 + 0x69) == '\0') {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    (*pcVar1)();
    func_0x000107c61170(puVar2);
  }
  else if (*(char *)(unaff_x22 + 0x69) == '\x01') {
    (*pcVar1)(0,0);
  }
  else {
    FUN_1026300ec();
    puVar2 = &UNK_11052ca48;
    func_0x000107c613f8(&UNK_11052ca48,param_1,0,0);
    func_0x000107c61654();
    puVar3 = puVar2;
    func_0x000107c5ed2c(puVar2);
    (*pcVar1)(0,puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c614ac(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000102630688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10263068c; end: 1026307af; -[_TtC38MapExternalMusicServicesImplementation35ExternalMusicTrackSavingServiceObjc saveTrackWithTrackISRC:providerTrackId:provider:presentingViewController:entryPoint:completion:] */

void FUN_10263068c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  uVar2 = param_2;
  func_0x000107c5faec(param_4);
  uVar3 = uVar2;
  func_0x000107c5faec(param_7);
  puVar1 = &UNK_11052ca68;
  func_0x000107c613fc(&UNK_11052ca68,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  FUN_1026302b8(param_3,param_2,param_4,uVar2,param_5,param_6,param_7,uVar3,FUN_102630a58,puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1026307b0; end: 102630813;  */

ulong FUN_1026307b0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 102630814; end: 1026308c7;  */

void FUN_102630814(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  long *plVar10;
  long unaff_x20;
  long unaff_x22;
  long lVar11;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar11 = *(long *)(unaff_x20 + 0x40);
  uVar9 = *(undefined1 *)(unaff_x20 + 0x48);
  lVar4 = *(long *)(unaff_x20 + 0x50);
  lVar8 = *(long *)(unaff_x20 + 0x58);
  plVar10 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_1026308c8;
  plVar10[10] = lVar4;
  plVar10[0xb] = lVar8;
  *(undefined1 *)(plVar10 + 0xd) = uVar9;
  plVar10[8] = lVar7;
  plVar10[9] = lVar11;
  plVar10[6] = lVar6;
  plVar10[7] = lVar3;
  plVar10[4] = lVar5;
  plVar10[5] = lVar2;
  plVar10[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10263041c,0,0);
  return;
}



/* Entry: 1026308c8; end: 102630923;  */

void FUN_1026308c8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102630900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}


