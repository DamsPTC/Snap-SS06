/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103bce7fc; end: 103bce86b;  */

void FUN_103bce7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103bce86c,uVar1,uVar2);
  return;
}



/* Entry: 103bce86c; end: 103bce90f;  */

void FUN_103bce86c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  long unaff_x22;
  code *pcVar5;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  puVar3 = (ulong *)(lVar4 + 0x10);
  func_0x000107c61618();
  if (puVar3 != (ulong *)0x0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
    pcVar5 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0xd0);
    func_0x000107c6157c(uVar2);
    (*pcVar5)(uVar1,uVar2);
    func_0x000107c61170(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000103bce90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar3 == (ulong *)0x0);
  return;
}



/* Entry: 103bce910; end: 103bce953;  */

void FUN_103bce910(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000103bce950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 103bce954; end: 103bcea37;  */

/* WARNING: Possible PIC construction at 0x000103bcea18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bcea1c) */

void FUN_103bce954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_1106e3a08;
  func_0x000107c613fc(&UNK_1106e3a08,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  puVar2 = &UNK_1106e3a30;
  func_0x000107c613fc(&UNK_1106e3a30,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dc620b0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001001ca524(0xce,3,0x2c,4,0,0,&UNK_10dc620c0,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 103bcea38; end: 103bceaa7;  */

void FUN_103bcea38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103bceaa8,uVar1,uVar2);
  return;
}



/* Entry: 103bceaa8; end: 103bceb3b;  */

void FUN_103bceaa8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong *puVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  pcVar2 = *(code **)(unaff_x22 + 0x20);
  puVar4 = *(ulong **)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar4) + 0x130))(uVar1);
  puVar3 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  func_0x000107c5c3c8();
  func_0x000107c61180();
  (*pcVar2)();
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000103bceb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103bceb3c; end: 103bceb77;  */

void FUN_103bceb3c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103bceb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103bceb78; end: 103bcebef; +[SCBatteryStickerHelpers batteryStickerViewFromItemInstance:runtime:completion:] */

void FUN_103bceb78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  FUN_103bcee1c(param_3,param_4,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_4);
  return;
}



/* Entry: 103bcebf0; end: 103bcebf3; +[SCBatteryStickerHelpers batteryStatus] */

undefined8 FUN_103bcebf0(float param_1)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar4 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c49a9c();
  func_0x000107c61170(puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = puVar4;
    func_0x000107c40efc(puVar4);
    func_0x000107c61180();
    func_0x000107c52c24();
    func_0x000107c61170(puVar5);
  }
  func_0x000107c40efc(puVar4);
  func_0x000107c61180();
  func_0x000107c3e70c();
  func_0x000107c61170(puVar4);
  bVar2 = true;
  bVar3 = false;
  if (param_1 <= 1.0) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1)) {
      bVar2 = param_1 < 0.9;
      bVar3 = false;
    }
  }
  uVar1 = 2;
  if (bVar2 != bVar3) {
    uVar1 = 0;
  }
  bVar2 = true;
  bVar3 = false;
  if (param_1 <= 0.1) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1)) {
      bVar2 = param_1 < 0.0;
      bVar3 = false;
    }
  }
  if (bVar2 == bVar3) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 103bcebf4; end: 103bcec0b; +[SCBatteryStickerHelpers batteryLevelFromBatteryStatus:] */

undefined1 FUN_103bcebf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 103bcec0c; end: 103bcec47; -[SCBatteryStickerHelpers init] */

void FUN_103bcec0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bcec48; end: 103bcec7b;  */

void FUN_103bcec48(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bcec7c; end: 103bcedeb;  */

undefined * FUN_103bcec7c(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126ba8d8;
  func_0x000107c610f8();
  func_0x000107c46e80();
  if (puVar2 == (undefined *)0x0) {
    lVar3 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    lVar3 = 0;
    func_0x00010197cbdc();
  }
  puStack_70 = puVar2;
  lStack_58 = lVar3;
  func_0x000107c61174();
  uVar4 = 0x59524554544142;
  func_0x000107c5fadc(0x59524554544142,0xe700000000000000);
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x0001006732c8(&puStack_70,lVar3);
    lVar8 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    lVar7 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar8 + 0x10))(lVar7);
    lVar6 = lVar7;
    func_0x000107c605b0(lVar7,lVar3);
    (**(code **)(lVar8 + 8))(lVar7,lVar3);
    func_0x000100183ab8(&puStack_70);
  }
  puVar5 = PTR_PTR_1126baa60;
  func_0x000107c610f8();
  func_0x000107c46fcc();
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar6);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61170(puVar2);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bcedec);
  (*pcVar1)();
}



/* Entry: 103bcedec; end: 103bcee1b;  */

void FUN_103bcedec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = &UNK_1106e3940;
  func_0x000107c613fc(&UNK_1106e3940,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar2);
  func_0x000107c61614(puVar1 + 0x10,lVar2);
  func_0x000107c61170(lVar2);
  puVar3 = &UNK_1106e3a58;
  func_0x000107c613fc(&UNK_1106e3a58,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  puVar1 = &UNK_1106e3a80;
  func_0x000107c613fc(&UNK_1106e3a80,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dc620d0;
  *(undefined **)(puVar1 + 0x18) = puVar3;
  func_0x000107c6157c(param_2);
  uVar4 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar5 = 0xce;
  func_0x0001001ca524(0xce,3,0x2c,4,0,0,&UNK_10dc620e0,puVar1,uVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 103bcee1c; end: 103bcf193;  */

/* WARNING: Possible PIC construction at 0x000103bcee98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bcef44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bcf0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bcf0d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bcf0e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bcf0d4) */
/* WARNING: Removing unreachable block (ram,0x000103bcf0c4) */
/* WARNING: Removing unreachable block (ram,0x000103bcef48) */
/* WARNING: Removing unreachable block (ram,0x000103bcee9c) */
/* WARNING: Removing unreachable block (ram,0x000103bcf17c) */
/* WARNING: Removing unreachable block (ram,0x000103bceedc) */
/* WARNING: Removing unreachable block (ram,0x000103bcf0e4) */

void FUN_103bcee1c(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106e3968;
  func_0x000107c613fc(&UNK_1106e3968,0x18,7);
  *(long *)(puVar1 + 0x10) = param_3;
  func_0x000107c60bc4(param_3);
  func_0x000107c41214();
  func_0x000107c61180();
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c42d78();
    func_0x000107c61180();
    (**(code **)(param_3 + 0x10))(param_3,param_1);
    func_0x000107c61574(puVar1);
  }
  else {
    func_0x000107c5ee30();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103bcf194; end: 103bcf273;  */

undefined8 FUN_103bcf194(float param_1)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar4 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c49a9c();
  func_0x000107c61170(puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = puVar4;
    func_0x000107c40efc(puVar4);
    func_0x000107c61180();
    func_0x000107c52c24();
    func_0x000107c61170(puVar5);
  }
  func_0x000107c40efc(puVar4);
  func_0x000107c61180();
  func_0x000107c3e70c();
  func_0x000107c61170(puVar4);
  bVar2 = true;
  bVar3 = false;
  if (param_1 <= 1.0) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1)) {
      bVar2 = param_1 < 0.9;
      bVar3 = false;
    }
  }
  uVar1 = 2;
  if (bVar2 != bVar3) {
    uVar1 = 0;
  }
  bVar2 = true;
  bVar3 = false;
  if (param_1 <= 0.1) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1)) {
      bVar2 = param_1 < 0.0;
      bVar3 = false;
    }
  }
  if (bVar2 == bVar3) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 103bcf274; end: 103bcf293;  */

void FUN_103bcf274(void)

{
  func_0x000107c61168(&PTR_PTR_112941220);
  return;
}



/* Entry: 103bcf294; end: 103bcf2a3;  */

void FUN_103bcf294(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103bcf2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103bcf2a4; end: 103bcf2d7;  */

void FUN_103bcf2a4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103bcf2d8; end: 103bcf33b;  */

void FUN_103bcf2d8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103bcf33c;
  plVar5[4] = lVar3;
  plVar5[5] = lVar2;
  plVar5[2] = lVar4;
  plVar5[3] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[6] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103bceaa8,lVar3,lVar4);
  return;
}



/* Entry: 103bcf33c; end: 103bcf377;  */

void FUN_103bcf33c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103bcf374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103bcf378; end: 103bcf3e7;  */

void FUN_103bcf378(undefined8 param_1)

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
  plVar3[1] = 0x103bcf514;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 103bcf3e8; end: 103bcf447;  */

void FUN_103bcf3e8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103bcf448;
  plVar3[6] = lVar1;
  plVar3[7] = lVar4;
  plVar3[5] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103bce86c,lVar1,lVar2);
  return;
}



/* Entry: 103bcf448; end: 103bcf48b;  */

void FUN_103bcf448(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103bcf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 103bcf48c; end: 103bcf4fb;  */

void FUN_103bcf48c(undefined8 param_1)

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
  plVar3[1] = 0x103bcf518;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 103bcf4fc; end: 103bcf51b;  */

void FUN_103bcf4fc(long param_1,long param_2)

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



/* Entry: 103bcf51c; end: 103bcf52b; -[LensPreviewActionInterceptionServices actionInterceptorObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcf51c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff4f10));
  return;
}



/* Entry: 103bcf52c; end: 103bcf673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103bcf52c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff4f00) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4f08) = param_2;
  func_0x000107c6157c(param_1);
  uVar1 = param_2;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ff4f10) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return puVar2;
}



/* Entry: 103bcf674; end: 103bcf6d3; -[LensPreviewActionInterceptionServices init] */

void FUN_103bcf674(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensPreviewActionInterceptionServices.LensPreviewActionInterceptionServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bcf6a0);
  (*pcVar1)();
}



/* Entry: 103bcf6d4; end: 103bcf71b; -[LensPreviewActionInterceptionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcf6d4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ff4f00));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ff4f08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff4f10));
  return;
}



/* Entry: 103bcf71c; end: 103bcf73b;  */

void FUN_103bcf71c(void)

{
  func_0x000107c61168(&PTR_PTR_1129412d0);
  return;
}



/* Entry: 103bcf73c; end: 103bcf783; -[_TtC21SCPreviewLazyServices19PreviewLazyServices previewConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcf73c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff4f40;
  func_0x000107c61428(param_1 + _DAT_112ff4f40,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bcf784; end: 103bcf7e7; -[_TtC21SCPreviewLazyServices19PreviewLazyServices setPreviewConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcf784(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff4f40;
  func_0x000107c61428(param_1 + _DAT_112ff4f40,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 103bcf7e8; end: 103bcf82f; -[_TtC21SCPreviewLazyServices19PreviewLazyServices snapEditor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcf7e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff4f48;
  func_0x000107c61428(param_1 + _DAT_112ff4f48,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103bcf830; end: 103bcf83b; -[_TtC21SCPreviewLazyServices19PreviewLazyServices setSnapEditor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcf830(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff4f48;
  func_0x000107c61428(param_1 + _DAT_112ff4f48,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103bcf83c; end: 103bcf883; -[_TtC21SCPreviewLazyServices19PreviewLazyServices swipeFiltersObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcf83c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff4f50;
  func_0x000107c61428(param_1 + _DAT_112ff4f50,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103bcf884; end: 103bcf88f; -[_TtC21SCPreviewLazyServices19PreviewLazyServices setSwipeFiltersObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcf884(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff4f50;
  func_0x000107c61428(param_1 + _DAT_112ff4f50,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103bcf890; end: 103bcf8ef;  */

void FUN_103bcf890(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 103bcf8f0; end: 103bcf937; -[_TtC21SCPreviewLazyServices19PreviewLazyServices ctLensServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcf8f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff4f58;
  func_0x000107c61428(param_1 + _DAT_112ff4f58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bcf938; end: 103bcf98f; -[_TtC21SCPreviewLazyServices19PreviewLazyServices setCtLensServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcf938(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff4f58;
  func_0x000107c61428(param_1 + _DAT_112ff4f58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103bcf990; end: 103bcf9c3;  */

void FUN_103bcf990(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bcf9c4; end: 103bcfa1b; -[_TtC21SCPreviewLazyServices19PreviewLazyServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcf9c4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ff4f40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff4f48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff4f50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112ff4f58);
  return;
}



/* Entry: 103bcfa1c; end: 103bcfa2b; -[SCSDNMainAppPayloadParser clientPayload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfa1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff4f88));
  return;
}



/* Entry: 103bcfa2c; end: 103bcfa37; -[SCSDNMainAppPayloadParser bitmojiActorId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfa2c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff4f90);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bcfa38; end: 103bcfa43; -[SCSDNMainAppPayloadParser setBitmojiActorId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfa38(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff4f90);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103bcfa44; end: 103bcfa87; -[SCSDNMainAppPayloadParser displayInApp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bcfa44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff4f98;
  func_0x000107c61428(param_1 + _DAT_112ff4f98,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103bcfa88; end: 103bcfad7; -[SCSDNMainAppPayloadParser setDisplayInApp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfa88(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff4f98;
  func_0x000107c61428(param_1 + _DAT_112ff4f98,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103bcfad8; end: 103bcfae3; -[SCSDNMainAppPayloadParser inAppTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfad8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff4fa0);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bcfae4; end: 103bcfaef; -[SCSDNMainAppPayloadParser setInAppTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfae4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff4fa0);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103bcfaf0; end: 103bcfafb; -[SCSDNMainAppPayloadParser inAppBody] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfaf0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff4fa8);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bcfafc; end: 103bcfb07; -[SCSDNMainAppPayloadParser setInAppBody:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfafc(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff4fa8);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103bcfb08; end: 103bcfb13; -[SCSDNMainAppPayloadParser inAppLeftSideIconUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfb08(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff4fb0);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bcfb14; end: 103bcfb1f; -[SCSDNMainAppPayloadParser setInAppLeftSideIconUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfb14(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff4fb0);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103bcfb20; end: 103bcfb63; -[SCSDNMainAppPayloadParser suppress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bcfb20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff4fb8;
  func_0x000107c61428(param_1 + _DAT_112ff4fb8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103bcfb64; end: 103bcfbb3; -[SCSDNMainAppPayloadParser setSuppress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfb64(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff4fb8;
  func_0x000107c61428(param_1 + _DAT_112ff4fb8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103bcfbb4; end: 103bcfbbf; -[SCSDNMainAppPayloadParser systemTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfbb4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff4fc0);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bcfbc0; end: 103bcfbcb; -[SCSDNMainAppPayloadParser setSystemTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfbc0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff4fc0);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103bcfbcc; end: 103bcfbd7; -[SCSDNMainAppPayloadParser systemSubtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfbcc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff4fc8);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bcfbd8; end: 103bcfbe3; -[SCSDNMainAppPayloadParser setSystemSubtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfbd8(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff4fc8);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103bcfbe4; end: 103bcfbef; -[SCSDNMainAppPayloadParser systemBody] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfbe4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff4fd0);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bcfbf0; end: 103bcfbfb; -[SCSDNMainAppPayloadParser setSystemBody:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfbf0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff4fd0);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103bcfbfc; end: 103bcfc07; -[SCSDNMainAppPayloadParser systemLeftSideIconUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfbfc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff4fd8);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bcfc08; end: 103bcfc13; -[SCSDNMainAppPayloadParser setSystemLeftSideIconUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfc08(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff4fd8);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103bcfc14; end: 103bcfc9f; -[SCSDNMainAppPayloadParser clearingPolicies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfc14(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff4fe0;
  func_0x000107c61428(param_1 + _DAT_112ff4fe0,auStack_38,0,0);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_103bd20c8(0,0x112ff5088,&PTR_PTR_1126b3450);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103bcfca0; end: 103bcfd23; -[SCSDNMainAppPayloadParser setClearingPolicies:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfca0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 != 0) {
    uVar2 = 0;
    FUN_103bd20c8(0,0x112ff5088,&PTR_PTR_1126b3450);
    func_0x000107c5fc54(param_3,uVar2);
  }
  lVar1 = _DAT_112ff4fe0;
  func_0x000107c61428(param_1 + _DAT_112ff4fe0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(long *)(param_1 + lVar1) = param_3;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103bcfd24; end: 103bcfd6b; -[SCSDNMainAppPayloadParser soundPolicy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfd24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff4fe8;
  func_0x000107c61428(param_1 + _DAT_112ff4fe8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103bcfd6c; end: 103bcfd77; -[SCSDNMainAppPayloadParser setSoundPolicy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfd6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff4fe8;
  func_0x000107c61428(param_1 + _DAT_112ff4fe8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103bcfd78; end: 103bcfdbb; -[SCSDNMainAppPayloadParser displayCommNotif] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bcfd78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff4ff0;
  func_0x000107c61428(param_1 + _DAT_112ff4ff0,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103bcfdbc; end: 103bcfe0b; -[SCSDNMainAppPayloadParser setDisplayCommNotif:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfdbc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff4ff0;
  func_0x000107c61428(param_1 + _DAT_112ff4ff0,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103bcfe0c; end: 103bcfe4f; -[SCSDNMainAppPayloadParser timeSensitivePolicy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103bcfe0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff4ff8;
  func_0x000107c61428(param_1 + _DAT_112ff4ff8,auStack_38,0,0);
  return *(undefined4 *)(param_1 + lVar1);
}



/* Entry: 103bcfe50; end: 103bcfe9f; -[SCSDNMainAppPayloadParser setTimeSensitivePolicy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfe50(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff4ff8;
  func_0x000107c61428(param_1 + _DAT_112ff4ff8,auStack_48,1,0);
  *(undefined4 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103bcfea0; end: 103bcfeab; -[SCSDNMainAppPayloadParser senderUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfea0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff5000);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bcfeac; end: 103bcfeb7; -[SCSDNMainAppPayloadParser setSenderUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfeac(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff5000);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103bcfeb8; end: 103bcfec3; -[SCSDNMainAppPayloadParser senderDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfeb8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff5008);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bcfec4; end: 103bcfecf; -[SCSDNMainAppPayloadParser setSenderDisplayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfec4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff5008);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103bcfed0; end: 103bcfedb; -[SCSDNMainAppPayloadParser deeplinkUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfed0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff5010);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bcfedc; end: 103bcfee7; -[SCSDNMainAppPayloadParser setDeeplinkUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfedc(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff5010);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103bcfee8; end: 103bcff73; -[SCSDNMainAppPayloadParser pageLaunchCommand] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcfee8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff5018);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  uVar2 = 0;
  uVar3 = puVar1[1];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = *puVar1;
    func_0x00010006c00c(uVar4,uVar3);
    uVar2 = uVar4;
    func_0x000107c5ee20(uVar4,uVar3);
    func_0x0001000b44c0(uVar4,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bcff74; end: 103bd000f; -[SCSDNMainAppPayloadParser setPageLaunchCommand:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bcff74(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    func_0x000107c61174();
    param_2 = -0x1000000000000000;
  }
  else {
    func_0x000107c61174();
    lVar3 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c5ee30();
    func_0x000107c61170(lVar3);
  }
  plVar1 = (long *)(param_1 + _DAT_112ff5018);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar3 = *plVar1;
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x0001000b44c0(lVar3,lVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103bd0010; end: 103bd0057; -[SCSDNMainAppPayloadParser navigationRoute] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd0010(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff5020;
  func_0x000107c61428(param_1 + _DAT_112ff5020,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103bd0058; end: 103bd0063; -[SCSDNMainAppPayloadParser setNavigationRoute:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd0058(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff5020;
  func_0x000107c61428(param_1 + _DAT_112ff5020,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103bd0064; end: 103bd006f; -[SCSDNMainAppPayloadParser groupConversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd0064(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff5028);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bd0070; end: 103bd007b; -[SCSDNMainAppPayloadParser setGroupConversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd0070(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff5028);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103bd007c; end: 103bd0087; -[SCSDNMainAppPayloadParser conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd007c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff5030);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bd0088; end: 103bd0093; -[SCSDNMainAppPayloadParser setConversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd0088(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff5030);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103bd0094; end: 103bd009f; -[SCSDNMainAppPayloadParser analyticsMessageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd0094(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff5038);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bd00a0; end: 103bd00ab; -[SCSDNMainAppPayloadParser setAnalyticsMessageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd00a0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff5038);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103bd00ac; end: 103bd00f3; -[SCSDNMainAppPayloadParser messageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd00ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff5040;
  func_0x000107c61428(param_1 + _DAT_112ff5040,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103bd00f4; end: 103bd00ff; -[SCSDNMainAppPayloadParser setMessageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd00f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff5040;
  func_0x000107c61428(param_1 + _DAT_112ff5040,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103bd0100; end: 103bd015f;  */

void FUN_103bd0100(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 103bd0160; end: 103bd01a3; -[SCSDNMainAppPayloadParser isVideoSnapWithSound] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bd0160(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff5048;
  func_0x000107c61428(param_1 + _DAT_112ff5048,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103bd01a4; end: 103bd01f3; -[SCSDNMainAppPayloadParser setIsVideoSnapWithSound:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd01a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff5048;
  func_0x000107c61428(param_1 + _DAT_112ff5048,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103bd01f4; end: 103bd01ff; -[SCSDNMainAppPayloadParser colorResource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd01f4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff5050);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bd0200; end: 103bd0273;  */

void FUN_103bd0200(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + *param_3);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bd0274; end: 103bd027f; -[SCSDNMainAppPayloadParser setColorResource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd0274(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff5050);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103bd0280; end: 103bd02f7;  */

void FUN_103bd0280(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + *param_4);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103bd02f8; end: 103bd0517;  */

void FUN_103bd02f8(undefined8 param_1)

{
  func_0x000107c610f8();
  func_0x000103bd0328(param_1);
  return;
}



/* Entry: 103bd0518; end: 103bd1c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd0518(undefined8 param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  int iVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined1 uVar15;
  long unaff_x20;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined *apuStack_c8 [3];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar18 = *(undefined **)(unaff_x20 + _DAT_112ff4f88);
  puVar16 = puVar18;
  func_0x000107c4211c();
  func_0x000107c61180();
  if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1bd0);
    (*pcVar8)();
  }
  puVar10 = puVar16;
  func_0x000107c44ab4();
  func_0x000107c61170(puVar16);
  if ((int)puVar10 != 0) {
    puVar16 = puVar18;
    func_0x000107c4211c();
    func_0x000107c61180();
    if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1bd8);
      (*pcVar8)();
    }
    puVar10 = puVar16;
    func_0x000107c5092c();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    if (puVar10 != (undefined *)0x0) {
      puVar16 = puVar10;
      func_0x000107c50934();
      iVar9 = (int)puVar16;
      if (iVar9 < 2) {
        if ((iVar9 != 0) && (iVar9 == 1)) {
          puVar16 = puVar10;
          func_0x000107c41520();
          func_0x000107c61180();
          if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1c14);
            (*pcVar8)();
          }
          puVar20 = puVar16;
          func_0x000107c4153c();
          func_0x000107c61180();
          func_0x000107c61170(puVar16);
          if (puVar20 == (undefined *)0x0) {
            func_0x000107c61170(puVar10);
            puVar16 = (undefined *)0x0;
            puVar24 = (undefined1 *)0x0;
          }
          else {
            puVar16 = puVar20;
            func_0x000107c5faec();
            func_0x000107c61170(puVar20);
            func_0x000107c61170(puVar10);
            puVar24 = param_2;
          }
          puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff5010);
          param_2 = auStack_2d8;
          func_0x000107c61428(puVar1,param_2,1,0);
          uVar11 = puVar1[1];
          *puVar1 = puVar16;
          puVar1[1] = puVar24;
          func_0x000107c6142c(uVar11);
          goto LAB_103bd0760;
        }
      }
      else if (iVar9 == 2) {
        puVar16 = puVar10;
        func_0x000107c50918();
        func_0x000107c61180();
        if (puVar16 != (undefined *)0x0) {
          puVar20 = puVar16;
          func_0x000107c50928();
          if ((int)puVar20 == 2) {
            puVar20 = PTR_PTR_1126e1be0;
            func_0x000107c61168();
            func_0x000107c3de84();
            func_0x000107c61180();
            func_0x000107c61170(puVar10);
            func_0x000107c61170(puVar16);
            lVar7 = _DAT_112ff5020;
            param_2 = auStack_2d8;
            func_0x000107c61428(unaff_x20 + _DAT_112ff5020,param_2,1,0);
            puVar10 = *(undefined **)(unaff_x20 + lVar7);
            *(undefined **)(unaff_x20 + lVar7) = puVar20;
          }
          else {
            func_0x000107c61170(puVar10);
            puVar10 = puVar16;
          }
        }
      }
      else if (iVar9 == 4) {
        puVar16 = puVar10;
        func_0x000107c4e268();
        func_0x000107c61180();
        if (puVar16 == (undefined *)0x0) {
          func_0x000107c61170(puVar10);
          puVar20 = (undefined *)0x0;
          puVar24 = (undefined1 *)0xf000000000000000;
        }
        else {
          puVar20 = puVar16;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar16);
          func_0x000107c61170(puVar10);
          puVar24 = param_2;
        }
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff5018);
        func_0x000107c61428(puVar1,auStack_2d8,1,0);
        uVar11 = *puVar1;
        param_2 = (undefined1 *)puVar1[1];
        *puVar1 = puVar20;
        puVar1[1] = puVar24;
        func_0x0001000b44c0(uVar11);
        goto LAB_103bd0760;
      }
      func_0x000107c61170(puVar10);
    }
  }
LAB_103bd0760:
  puVar16 = puVar18;
  func_0x000107c4211c();
  func_0x000107c61180();
  if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1bd4);
    (*pcVar8)();
  }
  puVar10 = puVar16;
  func_0x000107c44830();
  func_0x000107c61170(puVar16);
  if ((int)puVar10 == 0) {
    return;
  }
  puVar16 = puVar18;
  func_0x000107c4211c();
  func_0x000107c61180();
  if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1bdc);
    (*pcVar8)();
  }
  puVar10 = puVar16;
  func_0x000107c420d4();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  if (puVar10 == (undefined *)0x0) {
    return;
  }
  puVar16 = puVar10;
  func_0x000107c3fdcc();
  func_0x000107c61180();
  if (puVar16 == (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    param_2 = (undefined1 *)0x0;
  }
  else {
    puVar20 = puVar16;
    func_0x000107c5faec();
    func_0x000107c61170(puVar16);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff5050);
  puVar24 = auStack_80;
  func_0x000107c61428(puVar1,puVar24,1,0);
  uVar11 = puVar1[1];
  *puVar1 = puVar20;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar11);
  puVar16 = puVar10;
  func_0x000107c5c5f8();
  puVar20 = puVar18;
  func_0x000107c406a8();
  func_0x000107c61180();
  if (puVar20 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1be0);
    (*pcVar8)();
  }
  puVar22 = puVar20;
  func_0x000107c40674();
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar22 == (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    puVar24 = (undefined1 *)0x0;
  }
  else {
    FUN_103bd2c74();
    func_0x000107c61170(puVar22);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff5030);
  puVar23 = auStack_98;
  func_0x000107c61428(puVar1,puVar23,1,0);
  uVar11 = puVar1[1];
  *puVar1 = puVar20;
  puVar1[1] = puVar24;
  func_0x000107c6142c(uVar11);
  puVar20 = puVar18;
  func_0x000107c449c8();
  if ((int)puVar20 != 0) {
    puVar20 = puVar18;
    func_0x000107c4d7b0();
    func_0x000107c61180();
    if (puVar20 != (undefined *)0x0) {
      puVar22 = puVar20;
      func_0x000107c44ae8();
      if ((int)puVar22 != 0) {
        puVar22 = puVar20;
        func_0x000107c51ef8();
        func_0x000107c61180();
        if (puVar22 != (undefined *)0x0) {
          puVar21 = puVar22;
          func_0x000107c51f10();
          func_0x000107c61180();
          if (puVar21 == (undefined *)0x0) {
            puVar17 = (undefined *)0x0;
            puVar23 = (undefined1 *)0x0;
          }
          else {
            puVar17 = puVar21;
            func_0x000107c5faec();
            func_0x000107c61170(puVar21);
          }
          puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff5000);
          puVar24 = auStack_2a8;
          func_0x000107c61428(puVar2,puVar24,1,0);
          uVar11 = puVar2[1];
          *puVar2 = puVar17;
          puVar2[1] = puVar23;
          func_0x000107c6142c(uVar11);
          puVar21 = puVar22;
          func_0x000107c51f00();
          func_0x000107c61180();
          if (puVar21 == (undefined *)0x0) {
            func_0x000107c61170(puVar22);
            func_0x000107c61170(puVar20);
            puVar17 = (undefined *)0x0;
            puVar24 = (undefined1 *)0x0;
          }
          else {
            puVar17 = puVar21;
            func_0x000107c5faec();
            func_0x000107c61170(puVar21);
            func_0x000107c61170(puVar22);
            func_0x000107c61170(puVar20);
          }
          puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff5008);
          func_0x000107c61428(puVar2,auStack_2c0,1,0);
          uVar11 = puVar2[1];
          *puVar2 = puVar17;
          puVar2[1] = puVar24;
          func_0x000107c6142c(uVar11);
          goto LAB_103bd0a00;
        }
      }
      func_0x000107c61170(puVar20);
    }
  }
LAB_103bd0a00:
  puVar20 = puVar18;
  func_0x000107c44894();
  if ((int)puVar20 != 0) {
    func_0x000107c42e6c();
    func_0x000107c61180();
    if (puVar18 != (undefined *)0x0) {
      puVar20 = puVar18;
      func_0x000107c42e80();
      if ((int)puVar20 == 4) {
        puVar20 = puVar18;
        func_0x000107c3f808();
        func_0x000107c61180();
        if (puVar20 == (undefined *)0x0) goto LAB_103bd0a94;
        puVar22 = puVar20;
        func_0x000107c44988();
        if ((int)puVar22 == 0) {
          puVar22 = (undefined *)0x0;
        }
        else {
          puVar22 = puVar20;
          func_0x000107c4cdc4();
          func_0x000107c61180();
          if (puVar22 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1c18);
            (*pcVar8)();
          }
          func_0x000107c5dc0c();
          func_0x000107c61170(puVar22);
          puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c490d8();
        }
        lVar7 = _DAT_112ff5040;
        puVar24 = auStack_260;
        func_0x000107c61428(unaff_x20 + _DAT_112ff5040,puVar24,1,0);
        uVar11 = *(undefined8 *)(unaff_x20 + lVar7);
        *(undefined **)(unaff_x20 + lVar7) = puVar22;
        func_0x000107c61170(uVar11);
        puVar22 = puVar20;
        func_0x000107c4cdec();
        func_0x000107c61180();
        if (puVar22 == (undefined *)0x0) {
          puVar21 = (undefined *)0x0;
          puVar24 = (undefined1 *)0x0;
        }
        else {
          puVar21 = puVar22;
          func_0x000107c5faec();
          func_0x000107c61170(puVar22);
        }
        puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff5038);
        func_0x000107c61428(puVar2,auStack_278,1,0);
        uVar11 = puVar2[1];
        *puVar2 = puVar21;
        puVar2[1] = puVar24;
        func_0x000107c6142c(uVar11);
        puVar22 = puVar20;
        func_0x000107c4fb54();
        uVar15 = SUB81(puVar22,0);
LAB_103bd17f0:
        func_0x000107c61170(puVar18);
        func_0x000107c61170(puVar20);
        lVar7 = _DAT_112ff5048;
        func_0x000107c61428(unaff_x20 + _DAT_112ff5048,auStack_290,1,0);
        *(undefined1 *)(unaff_x20 + lVar7) = uVar15;
      }
      else {
LAB_103bd0a94:
        puVar20 = puVar18;
        func_0x000107c42e80();
        if ((int)puVar20 == 8) {
          puVar20 = puVar18;
          func_0x000107c5b134();
          func_0x000107c61180();
          if (puVar20 != (undefined *)0x0) {
            puVar22 = puVar20;
            func_0x000107c44988();
            if (((ulong)puVar22 & 1) == 0) {
              puVar22 = (undefined *)0x0;
            }
            else {
              puVar22 = puVar20;
              func_0x000107c4cdc4();
              func_0x000107c61180();
              if (puVar22 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1c1c);
                (*pcVar8)();
              }
              func_0x000107c5dc0c();
              func_0x000107c61170(puVar22);
              puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x000107c610f8();
              func_0x000107c490d8();
            }
            lVar7 = _DAT_112ff5040;
            puVar24 = auStack_260;
            func_0x000107c61428(unaff_x20 + _DAT_112ff5040,puVar24,1,0);
            uVar11 = *(undefined8 *)(unaff_x20 + lVar7);
            *(undefined **)(unaff_x20 + lVar7) = puVar22;
            func_0x000107c61170(uVar11);
            puVar22 = puVar20;
            func_0x000107c4cdec();
            func_0x000107c61180();
            if (puVar22 == (undefined *)0x0) {
              puVar21 = (undefined *)0x0;
              puVar24 = (undefined1 *)0x0;
            }
            else {
              puVar21 = puVar22;
              func_0x000107c5faec();
              func_0x000107c61170(puVar22);
            }
            puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff5038);
            func_0x000107c61428(puVar2,auStack_278,1,0);
            uVar11 = puVar2[1];
            *puVar2 = puVar21;
            puVar2[1] = puVar24;
            func_0x000107c6142c(uVar11);
            puVar22 = puVar20;
            func_0x000107c49a68();
            uVar15 = SUB81(puVar22,0);
            goto LAB_103bd17f0;
          }
        }
        func_0x000107c61170(puVar18);
      }
    }
  }
  if ((int)puVar16 != 2) goto LAB_103bd1a54;
  puVar16 = puVar10;
  func_0x000107c5dfe0();
  func_0x000107c61180();
  if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1be4);
    (*pcVar8)();
  }
  puVar18 = puVar16;
  func_0x000107c5c478();
  func_0x000107c61170(puVar16);
  lVar7 = _DAT_112ff4fb8;
  func_0x000107c61428(unaff_x20 + _DAT_112ff4fb8,auStack_b0,1,0);
  *(char *)(unaff_x20 + lVar7) = (char)puVar18;
  puVar16 = puVar10;
  func_0x000107c5dfe0();
  func_0x000107c61180();
  if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1be8);
    (*pcVar8)();
  }
  puVar18 = puVar16;
  func_0x000107c447a0();
  func_0x000107c61170(puVar16);
  if ((int)puVar18 == 0) {
LAB_103bd0c48:
    puVar16 = puVar10;
    func_0x000107c5dfe0();
    func_0x000107c61180();
    if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1bf4);
      (*pcVar8)();
    }
    puVar18 = puVar16;
    func_0x000107c4479c();
    func_0x000107c61170(puVar16);
    if ((int)puVar18 == 0) {
LAB_103bd0ca8:
      puVar18 = PTR_PTR_1126b3450;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar16 = PTR_PTR_1126ad970;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c52794(puVar18);
      func_0x000107c61170();
    }
    else {
      puVar16 = puVar10;
      func_0x000107c5dfe0();
      func_0x000107c61180();
      if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1c10);
        (*pcVar8)();
      }
      puVar18 = puVar16;
      func_0x000107c3fb38();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar18 == (undefined *)0x0) goto LAB_103bd0ca8;
    }
    func_0x000103bd205c();
    func_0x000107c613fc();
    *(undefined8 *)(puVar16 + 0x18) = 3;
    *(undefined8 *)(puVar16 + 0x10) = 1;
    *(undefined **)(puVar16 + 0x20) = puVar18;
  }
  else {
    puVar16 = puVar10;
    func_0x000107c5dfe0();
    func_0x000107c61180();
    if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1c08);
      (*pcVar8)();
    }
    puVar18 = puVar16;
    func_0x000107c3fb3c();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    if (puVar18 == (undefined *)0x0) goto LAB_103bd0c48;
    puVar16 = puVar18;
    func_0x000107c3fb34();
    func_0x000107c61180();
    if (puVar16 == (undefined *)0x0) {
LAB_103bd0c40:
      func_0x000107c61170(puVar18);
      goto LAB_103bd0c48;
    }
    apuStack_c8[0] = (undefined *)0x0;
    uVar11 = 0;
    FUN_103bd20c8(0,0x112ff5088,&PTR_PTR_1126b3450);
    func_0x000107c5fc50(puVar16,apuStack_c8,uVar11);
    func_0x000107c61170(puVar16);
    puVar16 = apuStack_c8[0];
    if (apuStack_c8[0] == (undefined *)0x0) goto LAB_103bd0c40;
    if ((ulong)apuStack_c8[0] >> 0x3e == 0) {
      puVar20 = *(undefined **)((undefined *)((ulong)apuStack_c8[0] & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar20 = apuStack_c8[0];
      if (-1 < (long)apuStack_c8[0]) {
        puVar20 = (undefined *)((ulong)apuStack_c8[0] & 0xffffffffffffff8);
      }
      func_0x000107c60480();
    }
    func_0x000107c61170(puVar18);
    if ((long)puVar20 < 1) {
      func_0x000107c6142c(puVar16);
      goto LAB_103bd0c48;
    }
  }
  lVar6 = _DAT_112ff4fe0;
  func_0x000107c61428(unaff_x20 + _DAT_112ff4fe0,apuStack_c8,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + lVar6);
  *(undefined **)(unaff_x20 + lVar6) = puVar16;
  func_0x000107c6142c(uVar11);
  puVar16 = puVar10;
  func_0x000107c5dfe0();
  func_0x000107c61180();
  if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1bec);
    (*pcVar8)();
  }
  puVar18 = puVar16;
  func_0x000107c44b28();
  func_0x000107c61170(puVar16);
  if ((int)puVar18 != 0) {
    puVar16 = puVar10;
    func_0x000107c5dfe0();
    func_0x000107c61180();
    if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1c0c);
      (*pcVar8)();
    }
    puVar18 = puVar16;
    func_0x000107c5b600();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    lVar6 = _DAT_112ff4fe8;
    func_0x000107c61428(unaff_x20 + _DAT_112ff4fe8,auStack_248,1,0);
    uVar11 = *(undefined8 *)(unaff_x20 + lVar6);
    *(undefined **)(unaff_x20 + lVar6) = puVar18;
    func_0x000107c61170(uVar11);
  }
  puVar16 = puVar10;
  func_0x000107c5dfe0();
  func_0x000107c61180();
  if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1bf0);
    (*pcVar8)();
  }
  puVar18 = puVar16;
  func_0x000107c5ca0c();
  func_0x000107c61170(puVar16);
  lVar6 = _DAT_112ff4ff8;
  puVar16 = (undefined *)(unaff_x20 + _DAT_112ff4ff8);
  func_0x000107c61428(puVar16,auStack_e0,1,0);
  *(int *)(unaff_x20 + lVar6) = (int)puVar18;
  FUN_103bd1c54();
  lVar6 = _DAT_112ff4ff0;
  if (puVar16 == (undefined *)0x0) {
    puVar24 = auStack_f8;
    func_0x000107c61428(unaff_x20 + _DAT_112ff4ff0,puVar24,1,0);
    *(undefined1 *)(unaff_x20 + lVar6) = 0;
LAB_103bd0f38:
    puVar18 = puVar10;
    func_0x000107c5dfe0();
    func_0x000107c61180();
    if (puVar18 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1c00);
      (*pcVar8)();
    }
    puVar20 = puVar18;
    func_0x000107c5cab0();
    func_0x000107c61180();
    func_0x000107c61170(puVar18);
    if (puVar20 == (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      puVar24 = (undefined1 *)0x0;
    }
    else {
      puVar18 = puVar20;
      func_0x000107c5faec();
      func_0x000107c61170(puVar20);
    }
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff4fc0);
    puVar23 = auStack_110;
    func_0x000107c61428(puVar2,puVar23,1,0);
    uVar11 = puVar2[1];
    *puVar2 = puVar18;
    puVar2[1] = puVar24;
    func_0x000107c6142c(uVar11);
    puVar18 = puVar16;
    if (puVar16 != (undefined *)0x0) goto LAB_103bd1004;
LAB_103bd1094:
    puVar18 = puVar10;
    func_0x000107c5dfe0();
    func_0x000107c61180();
    if (puVar18 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1c04);
      (*pcVar8)();
    }
    puVar20 = puVar18;
    func_0x000107c3eb80();
    func_0x000107c61180();
    func_0x000107c61170(puVar18);
    if (puVar20 == (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      puVar23 = (undefined1 *)0x0;
    }
    else {
      puVar18 = puVar20;
      func_0x000107c5faec();
      func_0x000107c61170(puVar20);
    }
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff4fd0);
    puVar19 = auStack_128;
    func_0x000107c61428(puVar2,puVar19,1,0);
    uVar11 = puVar2[1];
    *puVar2 = puVar18;
    puVar2[1] = puVar23;
    func_0x000107c6142c(uVar11);
    puVar18 = puVar16;
    if (puVar16 != (undefined *)0x0) goto LAB_103bd118c;
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff4fc8);
    func_0x000107c61428(puVar2,auStack_140,1,0);
    uVar11 = puVar2[1];
    *puVar2 = 0;
    puVar2[1] = 0;
LAB_103bd14b0:
    func_0x000107c6142c(uVar11);
  }
  else {
    puVar18 = puVar16;
    func_0x000107c5cab0();
    func_0x000107c61180();
    if (puVar18 == (undefined *)0x0) {
LAB_103bd0e5c:
      uVar15 = 0;
    }
    else {
      func_0x000107c61170();
      puVar18 = puVar16;
      func_0x000107c3eb80();
      func_0x000107c61180();
      if (puVar18 == (undefined *)0x0) goto LAB_103bd0e5c;
      func_0x000107c61170();
      uVar15 = 1;
    }
    lVar6 = _DAT_112ff4ff0;
    puVar23 = auStack_f8;
    func_0x000107c61428(unaff_x20 + _DAT_112ff4ff0,puVar23,1,0);
    *(undefined1 *)(unaff_x20 + lVar6) = uVar15;
    puVar18 = puVar16;
    func_0x000107c61174();
    puVar20 = puVar18;
    func_0x000107c5cab0();
    func_0x000107c61180();
    if (puVar20 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1bfc);
      (*pcVar8)();
    }
    puVar22 = puVar20;
    func_0x000107c5faec();
    puVar24 = puVar23;
    func_0x000107c61170(puVar20);
    func_0x000107c6142c(puVar23);
    uVar12 = (ulong)puVar22 & 0xffffffffffff;
    if (((ulong)puVar23 & 0x2000000000000000) != 0) {
      uVar12 = (ulong)puVar23 >> 0x38 & 0xf;
    }
    if (uVar12 == 0) {
      func_0x000107c61170(puVar18);
      goto LAB_103bd0f38;
    }
    puVar20 = puVar18;
    func_0x000107c5cab0();
    func_0x000107c61180();
    if (puVar20 == (undefined *)0x0) {
      func_0x000107c61170(puVar18);
      puVar22 = (undefined *)0x0;
      puVar24 = (undefined1 *)0x0;
    }
    else {
      puVar22 = puVar20;
      func_0x000107c5faec();
      func_0x000107c61170(puVar20);
      func_0x000107c61170(puVar18);
    }
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff4fc0);
    puVar23 = auStack_110;
    func_0x000107c61428(puVar2,puVar23,1,0);
    uVar11 = puVar2[1];
    *puVar2 = puVar22;
    puVar2[1] = puVar24;
    func_0x000107c6142c(uVar11);
LAB_103bd1004:
    func_0x000107c61174();
    puVar20 = puVar18;
    func_0x000107c3eb80();
    func_0x000107c61180();
    if (puVar20 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1bf8);
      (*pcVar8)();
    }
    puVar22 = puVar20;
    func_0x000107c5faec();
    puVar24 = puVar23;
    func_0x000107c61170(puVar20);
    func_0x000107c6142c(puVar23);
    uVar12 = (ulong)puVar22 & 0xffffffffffff;
    if (((ulong)puVar23 & 0x2000000000000000) != 0) {
      uVar12 = (ulong)puVar23 >> 0x38 & 0xf;
    }
    if (uVar12 == 0) {
      func_0x000107c61170(puVar18);
      puVar23 = puVar24;
      goto LAB_103bd1094;
    }
    puVar20 = puVar18;
    func_0x000107c3eb80();
    func_0x000107c61180();
    if (puVar20 == (undefined *)0x0) {
      func_0x000107c61170(puVar18);
      puVar22 = (undefined *)0x0;
      puVar24 = (undefined1 *)0x0;
    }
    else {
      puVar22 = puVar20;
      func_0x000107c5faec();
      func_0x000107c61170(puVar20);
      func_0x000107c61170(puVar18);
    }
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff4fd0);
    puVar19 = auStack_128;
    func_0x000107c61428(puVar2,puVar19,1,0);
    uVar11 = puVar2[1];
    *puVar2 = puVar22;
    puVar2[1] = puVar24;
    func_0x000107c6142c(uVar11);
LAB_103bd118c:
    func_0x000107c5c38c();
    func_0x000107c61180();
    if (puVar18 == (undefined *)0x0) {
      puVar20 = (undefined *)0x0;
      puVar19 = (undefined1 *)0x0;
    }
    else {
      puVar20 = puVar18;
      func_0x000107c5faec();
      func_0x000107c61170(puVar18);
    }
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff4fc8);
    puVar24 = auStack_140;
    func_0x000107c61428(puVar2,puVar24,1,0);
    uVar11 = puVar2[1];
    *puVar2 = puVar20;
    puVar2[1] = puVar19;
    func_0x000107c6142c(uVar11);
    puVar18 = puVar16;
    func_0x000107c61174();
    puVar20 = puVar18;
    func_0x000107c44bac();
    if ((int)puVar20 != 0) {
      puVar20 = puVar18;
      func_0x000107c5c910();
      func_0x000107c61180();
      if (puVar20 != (undefined *)0x0) {
        puVar22 = puVar20;
        func_0x000107c3abfc();
        func_0x000107c61180();
        if (puVar22 == (undefined *)0x0) {
          func_0x000107c61170(puVar18);
          func_0x000107c61170(puVar20);
          puVar21 = (undefined *)0x0;
          puVar24 = (undefined1 *)0x0;
        }
        else {
          puVar21 = puVar22;
          func_0x000107c5faec();
          func_0x000107c61170(puVar22);
          func_0x000107c61170(puVar18);
          func_0x000107c61170(puVar20);
        }
        puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff4fd8);
        func_0x000107c61428(puVar2,auStack_200,1,0);
        uVar11 = puVar2[1];
        *puVar2 = puVar21;
        puVar2[1] = puVar24;
        goto LAB_103bd14b0;
      }
    }
    puVar20 = puVar18;
    func_0x000107c4475c();
    if ((int)puVar20 != 0) {
      puVar20 = puVar18;
      func_0x000107c3e950();
      func_0x000107c61180();
      if (puVar20 != (undefined *)0x0) {
        puVar22 = puVar20;
        func_0x000107c3ea64();
        if ((int)puVar22 == 2) {
          uVar11 = *puVar1;
          uVar26 = puVar1[1];
          puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff5028);
          puVar24 = auStack_230;
          func_0x000107c61428(puVar2,puVar24,1,0);
          uVar25 = puVar2[1];
          *puVar2 = uVar11;
          puVar2[1] = uVar26;
          func_0x000107c61434(uVar26);
          func_0x000107c6142c(uVar25);
        }
        puVar22 = puVar20;
        func_0x000107c3ea64();
        puVar23 = puVar24;
        if ((int)puVar22 == 1) {
          puVar22 = puVar20;
          func_0x000107c5d8fc();
          func_0x000107c61180();
          puVar23 = puVar24;
          if (puVar22 != (undefined *)0x0) {
            puVar21 = puVar22;
            func_0x000107c5d984();
            func_0x000107c61180();
            if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1c20);
              (*pcVar8)();
            }
            puVar17 = puVar21;
            FUN_103bd2c74();
            func_0x000107c61170(puVar21);
            func_0x000107c61170(puVar22);
            puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff4f90);
            puVar23 = auStack_218;
            func_0x000107c61428(puVar2,puVar23,1,0);
            uVar11 = puVar2[1];
            *puVar2 = puVar17;
            puVar2[1] = puVar24;
            func_0x000107c6142c(uVar11);
          }
        }
        puVar22 = puVar20;
        func_0x000107c3ea64();
        if ((int)puVar22 == 2) {
          puVar22 = puVar20;
          func_0x000107c444e0();
          func_0x000107c61180();
          if (puVar22 != (undefined *)0x0) {
            puVar21 = puVar22;
            func_0x000107c3d1ec();
            func_0x000107c61180();
            if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1c24);
              (*pcVar8)();
            }
            puVar17 = puVar21;
            FUN_103bd2c74();
            func_0x000107c61170(puVar21);
            func_0x000107c61170(puVar18);
            func_0x000107c61170(puVar20);
            func_0x000107c61170(puVar22);
            puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff4f90);
            func_0x000107c61428(puVar2,auStack_200,1,0);
            uVar11 = puVar2[1];
            *puVar2 = puVar17;
            puVar2[1] = puVar23;
            goto LAB_103bd14b0;
          }
        }
        func_0x000107c61170(puVar18);
        func_0x000107c61170(puVar20);
        goto LAB_103bd14b4;
      }
    }
    func_0x000107c61170(puVar18);
  }
LAB_103bd14b4:
  puVar18 = puVar10;
  func_0x000107c448ec();
  if ((int)puVar18 != 0) {
    puVar18 = puVar10;
    func_0x000107c4523c();
    func_0x000107c61180();
    lVar6 = _DAT_112ff4f98;
    if (puVar18 != (undefined *)0x0) {
      bVar5 = *(byte *)(unaff_x20 + lVar7);
      puVar24 = auStack_158;
      func_0x000107c61428(unaff_x20 + _DAT_112ff4f98,puVar24,1,0);
      *(bool *)(unaff_x20 + lVar6) = (bVar5 & 1) == 0;
      puVar20 = puVar18;
      func_0x000107c5cab0();
      func_0x000107c61180();
      if (puVar20 == (undefined *)0x0) {
        puVar22 = (undefined *)0x0;
        puVar24 = (undefined1 *)0x0;
      }
      else {
        puVar22 = puVar20;
        func_0x000107c5faec();
        func_0x000107c61170(puVar20);
      }
      puVar3 = (ulong *)(unaff_x20 + _DAT_112ff4fa0);
      puVar23 = auStack_170;
      func_0x000107c61428(puVar3,puVar23,1,0);
      uVar12 = puVar3[1];
      *puVar3 = (ulong)puVar22;
      puVar3[1] = (ulong)puVar24;
      func_0x000107c6142c(uVar12);
      uVar12 = puVar3[1];
      if (uVar12 == 0) {
LAB_103bd1590:
        puVar4 = (ulong *)(unaff_x20 + _DAT_112ff4fc0);
        puVar23 = auStack_1e8;
        func_0x000107c61428(puVar4,puVar23,0,0);
        uVar13 = puVar4[1];
        uVar27 = *puVar4;
        puVar3[1] = puVar4[1];
        *puVar3 = uVar27;
        func_0x000107c61434(uVar13);
        func_0x000107c6142c(uVar12);
      }
      else {
        uVar13 = *puVar3 & 0xffffffffffff;
        if ((uVar12 & 0x2000000000000000) != 0) {
          uVar13 = uVar12 >> 0x38 & 0xf;
        }
        if (uVar13 == 0) goto LAB_103bd1590;
      }
      puVar20 = puVar18;
      func_0x000107c3eb80();
      func_0x000107c61180();
      if (puVar20 == (undefined *)0x0) {
        puVar22 = (undefined *)0x0;
        puVar23 = (undefined1 *)0x0;
      }
      else {
        puVar22 = puVar20;
        func_0x000107c5faec();
        func_0x000107c61170(puVar20);
      }
      puVar3 = (ulong *)(unaff_x20 + _DAT_112ff4fa8);
      puVar24 = auStack_188;
      func_0x000107c61428(puVar3,puVar24,1,0);
      uVar12 = puVar3[1];
      *puVar3 = (ulong)puVar22;
      puVar3[1] = (ulong)puVar23;
      func_0x000107c6142c(uVar12);
      uVar12 = puVar3[1];
      if (uVar12 == 0) {
LAB_103bd164c:
        puVar4 = (ulong *)(unaff_x20 + _DAT_112ff4fd0);
        puVar24 = auStack_1d0;
        func_0x000107c61428(puVar4,puVar24,0,0);
        uVar13 = puVar4[1];
        uVar27 = *puVar4;
        puVar3[1] = puVar4[1];
        *puVar3 = uVar27;
        func_0x000107c61434(uVar13);
        func_0x000107c6142c(uVar12);
      }
      else {
        uVar13 = *puVar3 & 0xffffffffffff;
        if ((uVar12 & 0x2000000000000000) != 0) {
          uVar13 = uVar12 >> 0x38 & 0xf;
        }
        if (uVar13 == 0) goto LAB_103bd164c;
      }
      puVar20 = puVar18;
      func_0x000107c44918();
      if ((int)puVar20 == 0) {
        if (puVar16 == (undefined *)0x0) {
          func_0x000107c61170(puVar10);
          puVar10 = puVar18;
          goto LAB_103bd1a54;
        }
        puVar22 = puVar16;
        func_0x000107c61174();
        puVar20 = puVar22;
        func_0x000107c44bac();
        puVar21 = puVar22;
        if ((int)puVar20 == 0) {
          puVar20 = puVar22;
          func_0x000107c4475c();
          if ((int)puVar20 == 0) {
            func_0x000107c61170(puVar10);
            func_0x000107c61170(puVar18);
            func_0x000107c61170(puVar22);
            puVar10 = puVar22;
            goto LAB_103bd1a54;
          }
          puVar20 = PTR_PTR_1126deba0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          func_0x000107c3e950(puVar22);
          func_0x000107c61180();
          func_0x000107c52c8c(puVar20);
        }
        else {
          puVar20 = PTR_PTR_1126deba0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          func_0x000107c5c910(puVar22);
          func_0x000107c61180();
          func_0x000107c59cec(puVar20);
        }
        func_0x000107c61170(puVar21);
        func_0x000107c61170(puVar22);
      }
      else {
        puVar20 = puVar18;
        func_0x000107c4ace8();
        func_0x000107c61180();
        if (puVar20 == (undefined *)0x0) {
          func_0x000107c61170(puVar10);
          puVar10 = puVar18;
          goto LAB_103bd1a4c;
        }
      }
      func_0x000107c61174();
      puVar22 = puVar20;
      func_0x000107c450dc();
      if ((int)puVar22 == 2) {
        puVar22 = puVar20;
        func_0x000107c5c910();
        func_0x000107c61180();
        func_0x000107c61170(puVar20);
        if (puVar22 != (undefined *)0x0) {
          puVar21 = puVar22;
          func_0x000107c3abfc();
          func_0x000107c61180();
          if (puVar21 == (undefined *)0x0) {
            func_0x000107c61170(puVar10);
            func_0x000107c61170(puVar18);
            func_0x000107c61170(puVar22);
            func_0x000107c61170(puVar20);
            func_0x000107c61170(puVar16);
            puVar17 = (undefined *)0x0;
            puVar24 = (undefined1 *)0x0;
          }
          else {
            puVar17 = puVar21;
            func_0x000107c5faec();
            func_0x000107c61170(puVar21);
            func_0x000107c61170(puVar10);
            func_0x000107c61170(puVar18);
            func_0x000107c61170(puVar22);
            func_0x000107c61170(puVar20);
            func_0x000107c61170(puVar16);
          }
          puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff4fb0);
          func_0x000107c61428(puVar1,auStack_1a0,1,0);
          uVar11 = puVar1[1];
          *puVar1 = puVar17;
          puVar1[1] = puVar24;
          func_0x000107c6142c(uVar11);
          return;
        }
      }
      else {
        func_0x000107c61170(puVar20);
      }
      puVar22 = puVar20;
      func_0x000107c450dc();
      if ((int)puVar22 == 1) {
        puVar22 = puVar20;
        func_0x000107c3e950();
        func_0x000107c61180();
        if (puVar22 == (undefined *)0x0) goto LAB_103bd1a78;
        puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff5028);
        func_0x000107c61428(puVar2,auStack_1a0,1,0);
        if ((puVar2[1] == 0) && (puVar21 = puVar22, func_0x000107c3ea64(), (int)puVar21 == 2)) {
          uVar26 = puVar2[1];
          uVar11 = puVar1[1];
          uVar25 = *puVar1;
          puVar2[1] = puVar1[1];
          *puVar2 = uVar25;
          func_0x000107c61434(uVar11);
          func_0x000107c6142c(uVar26);
        }
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff4f90);
        puVar24 = auStack_1b8;
        func_0x000107c61428(puVar1,puVar24,1,0);
        if (puVar1[1] != 0) {
LAB_103bd1a30:
          func_0x000107c61170(puVar22);
          func_0x000107c61170(puVar20);
          func_0x000107c61170(puVar18);
          goto LAB_103bd1a4c;
        }
        puVar21 = puVar22;
        func_0x000107c3ea64();
        puVar23 = puVar24;
        if ((int)puVar21 == 1) {
          puVar21 = puVar22;
          func_0x000107c5d8fc();
          func_0x000107c61180();
          puVar23 = puVar24;
          if (puVar21 != (undefined *)0x0) {
            puVar17 = puVar21;
            func_0x000107c5d984();
            func_0x000107c61180();
            if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1c28);
              (*pcVar8)();
            }
            puVar14 = puVar17;
            FUN_103bd2c74();
            puVar23 = puVar24;
            func_0x000107c61170(puVar17);
            func_0x000107c61170(puVar21);
            uVar11 = puVar1[1];
            *puVar1 = puVar14;
            puVar1[1] = puVar24;
            func_0x000107c6142c(uVar11);
          }
        }
        if (puVar1[1] != 0) goto LAB_103bd1a30;
        puVar21 = puVar22;
        func_0x000107c3ea64();
        if ((int)puVar21 == 2) {
          puVar21 = puVar22;
          func_0x000107c444e0();
          func_0x000107c61180();
          if (puVar21 != (undefined *)0x0) {
            puVar17 = puVar21;
            func_0x000107c3d1ec();
            func_0x000107c61180();
            if (puVar17 != (undefined *)0x0) {
              puVar14 = puVar17;
              FUN_103bd2c74();
              func_0x000107c61170(puVar17);
              func_0x000107c61170(puVar10);
              func_0x000107c61170(puVar18);
              func_0x000107c61170(puVar22);
              func_0x000107c61170(puVar21);
              func_0x000107c61170(puVar20);
              func_0x000107c61170(puVar16);
              uVar11 = puVar1[1];
              *puVar1 = puVar14;
              puVar1[1] = puVar23;
              func_0x000107c6142c(uVar11);
              return;
            }
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd1c2c);
            (*pcVar8)();
          }
        }
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar18);
        puVar18 = puVar22;
      }
      else {
LAB_103bd1a78:
        func_0x000107c61170(puVar10);
      }
      func_0x000107c61170(puVar18);
      puVar10 = puVar20;
    }
  }
LAB_103bd1a4c:
  func_0x000107c61170(puVar10);
  puVar10 = puVar16;
LAB_103bd1a54:
  func_0x000107c61170(puVar10);
  return;
}



/* Entry: 103bd1c2c; end: 103bd1c53; -[SCSDNMainAppPayloadParser initWithClientPayload:] */

void FUN_103bd1c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000103bd0328();
  return;
}



/* Entry: 103bd1c54; end: 103bd1de3;  */

ulong FUN_103bd1c54(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uStack_58;
  
  func_0x000107c5dfe0();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103bd1de4);
    (*pcVar2)();
  }
  lVar3 = unaff_x20;
  func_0x000107c42160();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  if (lVar3 != 0) {
    uStack_58 = 0;
    uVar4 = 0;
    FUN_103bd20c8(0,0x112ff5090,&PTR_PTR_1126deb98);
    func_0x000107c5fc50(lVar3,&uStack_58,uVar4);
    func_0x000107c61170(lVar3);
    uVar7 = uStack_58;
    if (uStack_58 != 0) {
      uVar10 = uStack_58 & 0xffffffffffffff8;
      if (uStack_58 >> 0x3e == 0) {
        uVar8 = *(ulong *)(uVar10 + 0x10);
      }
      else {
        uVar8 = uStack_58;
        if (-1 < (long)uStack_58) {
          uVar8 = uVar10;
        }
        func_0x000107c60480();
      }
      if (uVar8 != 0) {
        uVar9 = 0;
        do {
          if ((uVar7 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103bd1da4);
              (*pcVar2)();
            }
            uVar5 = *(ulong *)(uVar7 + uVar9 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar5 = uVar9;
            FUN_103bd2108(uVar9,uVar7);
          }
          uVar1 = uVar9 + 1;
          if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103bd1da0);
            (*pcVar2)();
          }
          uVar6 = uVar5;
          func_0x000107c5c240();
          if ((int)uVar6 == 1) {
            func_0x000107c6142c(uVar7);
            func_0x000107c61174();
            uVar7 = uVar5;
            func_0x000107c3fe84();
            func_0x000107c61180();
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar5);
            if (uVar7 != 0) {
              return uVar7;
            }
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103bd1d9c);
            (*pcVar2)();
          }
          func_0x000107c61170(uVar5);
          uVar9 = uVar9 + 1;
        } while (uVar1 != uVar8);
      }
      func_0x000107c6142c(uVar7);
    }
  }
  return 0;
}


