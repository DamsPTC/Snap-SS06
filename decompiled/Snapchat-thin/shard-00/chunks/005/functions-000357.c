/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10076fc14; end: 10076fc9b; -[SCUserInfoDeltaSyncFetcher _fetchUserInfoForKinds:] */

void FUN_10076fc14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10076fc9c;
  puStack_30 = &UNK_1108850d8;
  uStack_28 = param_1;
  FUN_100504554(param_3,&puStack_48);
  puVar1 = PTR_PTR_1126ae558;
  func_0x000107c3db10(PTR_PTR_1126ae558);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10076fc9c; end: 10076fd7b;  */

void FUN_10076fc9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b0440;
  func_0x000107c61174(param_2);
  func_0x000107c610f4(puVar1);
  puVar2 = PTR_PTR_1126b0438;
  func_0x000107c4d3fc(PTR_PTR_1126b0438);
  func_0x000107c61180();
  func_0x000107c4709c(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  puVar2 = PTR_PTR_1126b0448;
  func_0x000107c610f4(PTR_PTR_1126b0448);
  func_0x000107c478bc();
  func_0x000107c5c560(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10076fd7c; end: 10076fddf; +[SCDeltaSyncIdentifier nameWithName:] */

void FUN_10076fd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126b0438;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10076fde0; end: 10076fe23; -[SCDeltaSyncIdentifier internalInit] */

void FUN_10076fde0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_112702348;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10076fe24; end: 10076fecf; -[SCDeltaSyncKey initWithKind:identifier:] */

undefined1 *
FUN_10076fe24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702340;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10076fed0; end: 10076fef3; -[SCDeltaSyncIdentifier copyWithZone:] */

undefined8 FUN_10076fed0(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 10076fef4; end: 10076ff6b; -[SCDeltaSyncClientType initWithName:] */

undefined1 * FUN_10076fef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702370;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10076ff6c; end: 10076ff73; -[SCSpartaService syncGroupWithKey:client:] */

void FUN_10076ff6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c266030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_syncGroupWithKey_client__112677230);
  return;
}



/* Entry: 10076ff74; end: 100770117; -[SCDefaultDeltaSyncService syncGroupWithKey:client:] */

void FUN_10076ff74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uStack_48 = 0;
  uVar1 = param_1;
  func_0x000107c3ca34();
  if ((int)uVar1 == 0) {
    func_0x000107c61144(auStack_50,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    puStack_68 = &UNK_100c13c64;
    puStack_60 = &UNK_1108819a0;
    func_0x000107c61174(param_3);
    uStack_58 = param_3;
    func_0x000107c61174(param_3);
    uVar1 = uStack_48;
    func_0x000107c61174(uStack_48);
    func_0x000107c6111c(auStack_80,auStack_50);
    func_0x000107c61174(param_4);
    func_0x000107c3b73c(param_1);
    uVar2 = uStack_48;
    func_0x000107c43bf4(uStack_48);
    func_0x000107c61180();
    func_0x000107c61170(param_4);
    func_0x000107c61120(auStack_80);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uStack_58);
    func_0x000107c61120(auStack_50);
  }
  else {
    uVar2 = uStack_48;
    func_0x000107c43bf4(uStack_48);
    func_0x000107c61180();
  }
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100770118; end: 1007701df; -[SCDefaultDeltaSyncService _syncPromise:forGroupKey:] */

undefined1 FUN_100770118(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c61174(param_4);
  puStack_60 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1007701e0;
  puStack_78 = &UNK_110862058;
  lStack_70 = param_1;
  uStack_68 = param_4;
  uStack_58 = param_3;
  puStack_48 = puStack_60;
  func_0x000107c61174(param_4);
  FUN_10006eaa4(uVar2,&puStack_90);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(param_4);
  func_0x000107c60bcc(&uStack_50,8);
  return uVar1;
}



/* Entry: 1007701e0; end: 10077027b;  */

void FUN_1007701e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x000107c4d9e8(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61180();
  uVar3 = **(undefined8 **)(param_1 + 0x38);
  **(undefined8 **)(param_1 + 0x38) = uVar1;
  func_0x000107c61170(uVar3);
  if (**(long **)(param_1 + 0x38) != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
    return;
  }
  puVar2 = PTR_PTR_1126ae560;
  func_0x000107c61160();
  uVar1 = **(undefined8 **)(param_1 + 0x38);
  **(undefined8 **)(param_1 + 0x38) = puVar2;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40),
             PTR_s_setObject_forKeyedSubscript__112651bb8,**(undefined8 **)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10077027c; end: 1007702ef; -[SCDeltaSyncKey hash] */

undefined8 * FUN_10077027c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c44c3c();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x000107c44c3c();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  FUN_100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  func_0x000107c60e78();
  puVar4 = &uStack_80;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = puVar3[1];
  uVar1 = puVar3[2];
  func_0x000107c44c3c();
  uStack_70 = puVar3[3];
  uStack_78 = uVar1;
  FUN_100505190(&uStack_80,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  func_0x000107c60e78();
  func_0x000107c61174();
  return puVar4;
}



/* Entry: 1007702f0; end: 10077035f; -[SCDeltaSyncIdentifier hash] */

undefined8 * FUN_1007702f0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c44c3c();
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  FUN_100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  func_0x000107c60e78();
  func_0x000107c61174();
  return (undefined8 *)(undefined1 *)puVar2;
}



/* Entry: 100770360; end: 100770383; -[SCDeltaSyncKey copyWithZone:] */

undefined8 FUN_100770360(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100770384; end: 10077048f; -[SCDefaultDeltaSyncService _filterValidProcessorsWithPassingTest:completion:] */

void FUN_100770384(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c5dc64(uVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100770490; end: 1007704d7;  */

void FUN_100770490(long param_1,long param_2)

{
  func_0x000107c60bc8(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  func_0x000107c60bc8(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x30,param_2 + 0x30);
  return;
}



/* Entry: 1007704d8; end: 1007707af; +[SCFuture all:] */

undefined ** FUN_1007704d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar2 = param_3;
  func_0x000107c40808();
  if (lVar2 == 0) {
    ppuVar6 = (undefined **)PTR_PTR_1126ae558;
    func_0x000107c451b0(PTR_PTR_1126ae558);
    func_0x000107c61180();
  }
  else {
    ppuVar3 = (undefined **)PTR_PTR_1126ae560;
    func_0x000107c61160();
    puStack_118 = &uStack_120;
    uStack_120 = 0;
    uStack_110 = 0x2020000000;
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    lStack_108 = lVar2;
    func_0x000107c3e170();
    func_0x000107c61180();
    do {
      puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
      func_0x000107c61180();
      func_0x000107c3d798(puVar4);
      func_0x000107c61170(puVar5);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    puVar5 = PTR_PTR_1126bad10;
    func_0x000107c61160();
    func_0x000107c61174(param_3);
    lVar2 = param_3;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(param_3);
        }
        uVar7 = *(undefined8 *)(lVar8 * 8);
        func_0x000107c61174(puVar5);
        func_0x000107c61174(ppuVar3);
        func_0x000107c61174(puVar4);
        func_0x000107c5dc64(uVar7);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(ppuVar3);
        func_0x000107c61170(puVar5);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_3;
      func_0x000107c4080c();
    }
    func_0x000107c61170(param_3);
    ppuVar6 = ppuVar3;
    func_0x000107c43bf4(ppuVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c60bcc(&uStack_120,8);
    func_0x000107c61170(ppuVar3);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
    return ppuVar6;
  }
  func_0x000107c60e78();
  func_0x000107c60bcc(&uStack_120,8);
  func_0x000107c60bd8();
  func_0x000107c3f9f0();
  if (param_3 - 1U < 8) {
    ppuVar6 = (undefined **)(&PTR_PTR_110d66e20)[param_3 - 1U];
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110db54d8;
  }
  return ppuVar6;
}



/* Entry: 1007707b0; end: 1007707e7; -[SCDevice chipName] */

undefined ** FUN_1007707b0(long param_1)

{
  undefined **ppuVar1;
  
  func_0x000107c3f9f0();
  if (param_1 - 1U < 8) {
    ppuVar1 = (undefined **)(&PTR_PTR_110d66e20)[param_1 - 1U];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db54d8;
  }
  return ppuVar1;
}



/* Entry: 1007707e8; end: 100770893; -[SCDevice chipType] */

long FUN_1007707e8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c446b4();
  func_0x000107c61180();
  func_0x000107c61174();
  if (lRam00000001137fc7c0 != -1) {
    FUN_10002a2fc(0x1137fc7c0,&PTR___NSConcreteGlobalBlock_110d66e00);
  }
  lVar1 = lRam00000001137fc7b8;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c49820(lVar1);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_1);
  return lVar2;
}



/* Entry: 100770894; end: 1007708af;  */

void FUN_100770894(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001137fc7b8;
  ppuRam00000001137fc7b8 = &PTR__OBJC_CLASS___NSConstantDictionary_1111756e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007708b0; end: 1007708ef;  */

void FUN_1007708b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070598 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcee960;
  func_0x000107c61520(&UNK_10dcee960,&UNK_11075dde0);
  puRam0000000113070598 = puVar1;
  return;
}



/* Entry: 1007708f0; end: 100770923;  */

undefined8 FUN_1007708f0(undefined8 param_1)

{
  FUN_100770924();
  return param_1;
}



/* Entry: 100770924; end: 1007709f3;  */

void FUN_100770924(undefined8 *param_1)

{
  func_0x000107c61574(*param_1);
  func_0x000107c61170(param_1[1]);
  func_0x000107c61170(param_1[2]);
  func_0x000107c61574(param_1[3]);
  func_0x000107c61170(param_1[4]);
  func_0x000107c61170(param_1[5]);
  func_0x000107c61170(param_1[6]);
  func_0x000107c61170(param_1[7]);
  func_0x000107c61574(param_1[8]);
  func_0x000107c61574(param_1[9]);
  func_0x000107c61574(param_1[10]);
  func_0x000107c61170(param_1[0xb]);
  func_0x000107c61574(param_1[0xc]);
  func_0x000107c61170(param_1[0xd]);
  func_0x000107c615e8(param_1[0xe]);
  func_0x000107c61574(param_1[0x10]);
  func_0x000107c61574(param_1[0x11]);
  func_0x000107c61574(param_1[0x12]);
  func_0x000107c61574(param_1[0x13]);
  if (param_1[0x14] != 0) {
    func_0x000107c61574(param_1[0x15]);
  }
  func_0x000107c615e8(param_1[0x16]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[0x18]);
  return;
}



/* Entry: 1007709f4; end: 100770a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007709f4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113070e68) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113070e70) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100770a58; end: 100770b0b;  */

void FUN_100770a58(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100770b0c; end: 100770b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100770b0c(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_58;
  
  FUN_100083b20(&lStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = lStack_58;
  uVar5 = *(undefined8 *)(lStack_58 + _DAT_1130813f0);
  func_0x000107c6157c(uVar5);
  func_0x000107c61170(lVar1);
  FUN_100083b20(&lStack_58);
  lVar1 = lStack_58;
  uVar6 = *(undefined8 *)(lStack_58 + _DAT_113070f60);
  func_0x000107c6157c(uVar6);
  func_0x000107c61170(lVar1);
  FUN_100083b20(&lStack_58);
  lVar1 = lStack_58;
  uVar7 = *(undefined8 *)(lStack_58 + _DAT_113036458);
  func_0x000107c6157c(uVar7);
  func_0x000107c61170(lVar1);
  FUN_100083b20(&lStack_58);
  uVar8 = *(undefined8 *)(lStack_58 + _DAT_113091b70);
  func_0x000107c615f0(uVar8);
  func_0x000107c61170(lStack_58);
  puVar2 = &UNK_110680848;
  func_0x000107c613fc(&UNK_110680848,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 0x18) = uVar7;
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  *(undefined8 *)(puVar2 + 0x28) = uVar8;
  FUN_1000285a8(0x112f871e0,&UNK_10dbfb2f8);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar7);
  func_0x000107c615f0(uVar8);
  puVar3 = &UNK_1036c2200;
  FUN_1000bdd8c(&UNK_1036c2200,puVar2);
  uVar4 = 0;
  FUN_1005c734c(0);
  func_0x000107c610f8();
  FUN_100774e28(puVar3,uVar4);
  func_0x000107c615e8(uVar8);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar5);
  *param_1 = puVar3;
  return;
}



/* Entry: 100770b18; end: 100770cdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100770b18(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_58;
  
  FUN_100083b20(&lStack_58);
  lVar1 = lStack_58;
  uVar5 = *(undefined8 *)(lStack_58 + _DAT_1130813f0);
  func_0x000107c6157c(uVar5);
  func_0x000107c61170(lVar1);
  FUN_100083b20(&lStack_58);
  lVar1 = lStack_58;
  uVar6 = *(undefined8 *)(lStack_58 + _DAT_113070f60);
  func_0x000107c6157c(uVar6);
  func_0x000107c61170(lVar1);
  FUN_100083b20(&lStack_58);
  lVar1 = lStack_58;
  uVar7 = *(undefined8 *)(lStack_58 + _DAT_113036458);
  func_0x000107c6157c(uVar7);
  func_0x000107c61170(lVar1);
  FUN_100083b20(&lStack_58);
  uVar8 = *(undefined8 *)(lStack_58 + _DAT_113091b70);
  func_0x000107c615f0(uVar8);
  func_0x000107c61170(lStack_58);
  puVar2 = &UNK_110680848;
  func_0x000107c613fc(&UNK_110680848,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 0x18) = uVar7;
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  *(undefined8 *)(puVar2 + 0x28) = uVar8;
  FUN_1000285a8(0x112f871e0,&UNK_10dbfb2f8);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar7);
  func_0x000107c615f0(uVar8);
  puVar3 = &UNK_1036c2200;
  FUN_1000bdd8c(&UNK_1036c2200,puVar2);
  uVar4 = 0;
  FUN_1005c734c(0);
  func_0x000107c610f8();
  FUN_100774e28(puVar3,uVar4);
  func_0x000107c615e8(uVar8);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar5);
  *param_1 = puVar3;
  return;
}



/* Entry: 100770ce0; end: 100770cf3;  */

void FUN_100770ce0(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__swift_unknownObjectRelease_11034f530;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100770cf4; end: 100770d47;  */

void FUN_100770cf4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100770d48; end: 10077114b;  */

void FUN_100770d48(long *param_1,long param_2)

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
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  func_0x0001005c7140();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  FUN_1000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  FUN_10017da58();
  puVar13 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(param_2 + 0x18) = puVar13;
  FUN_1007746f0();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = uVar12;
  FUN_100774784();
  *(undefined8 *)(param_2 + 0x10) = uVar14;
  uVar15 = uVar14;
  func_0x000107c6157c();
  FUN_1007747b4();
  func_0x000107c61574(uVar14);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61574(uStack_d0);
  *(undefined8 *)(param_2 + 0x78) = uVar15;
  *param_1 = param_2;
  return;
}



/* Entry: 10077114c; end: 100771187;  */

void FUN_10077114c(void)

{
  long unaff_x20;
  
  FUN_100770d48(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 100771188; end: 10077118f;  */

void FUN_100771188(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100771190; end: 1007711e3;  */

void FUN_100771190(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007711e4; end: 1007717cb;  */

void FUN_1007711e4(long *param_1,long param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  func_0x0001005c6fa0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  *(undefined8 *)(param_2 + 0x78) = uStack_d0;
  *(undefined8 *)(param_2 + 0x80) = uStack_d8;
  *(undefined8 *)(param_2 + 0x88) = uStack_e0;
  *(undefined8 *)(param_2 + 0x90) = uStack_e8;
  *(undefined8 *)(param_2 + 0x98) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_100;
  FUN_1000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174();
  uVar15 = uStack_e8;
  func_0x000107c61174();
  uVar16 = uStack_f0;
  func_0x000107c61174();
  uVar17 = uStack_f8;
  func_0x000107c61174();
  uVar18 = uStack_100;
  func_0x000107c61174();
  uVar19 = uStack_108;
  func_0x000107c6157c(uStack_108);
  FUN_10017da58();
  puVar20 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar19);
  *(undefined **)(param_2 + 0x18) = puVar20;
  FUN_1007732fc();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = auStack_70[0];
  func_0x000107c61174();
  uVar21 = uVar19;
  FUN_1007733a8();
  *(undefined8 *)(param_2 + 0x10) = uVar21;
  uVar22 = uVar21;
  func_0x000107c6157c();
  FUN_1007739a4();
  func_0x000107c61574(uVar21);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61574(uStack_108);
  *(undefined8 *)(param_2 + 0xb0) = uVar22;
  *param_1 = param_2;
  return;
}



/* Entry: 1007717cc; end: 100771817;  */

void FUN_1007717cc(void)

{
  long unaff_x20;
  
  FUN_1007711e4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8));
  return;
}



/* Entry: 100771818; end: 10077181f;  */

void FUN_100771818(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x168);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100771820; end: 100771873;  */

void FUN_100771820(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x168);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100771874; end: 10077187b;  */

void FUN_100771874(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10077187c; end: 1007718cf;  */

void FUN_10077187c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007718d0; end: 1007718df;  */

void FUN_1007718d0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_1001f66fc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  FUN_100771a88(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_100771b08();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_100771d6c();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1007718e0; end: 100771a87;  */

void FUN_1007718e0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_1001f66fc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_100771a88(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_100771b08();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_100771d6c();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 100771a88; end: 100771b07;  */

void FUN_100771a88(undefined8 param_1)

{
  if (lRam0000000112de7548 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e66514c);
  return;
}



/* Entry: 100771b08; end: 100771b4f;  */

void FUN_100771b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 100771b50; end: 100771d13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100771b50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113093a98);
  func_0x000107c61174();
  func_0x000107c44580();
  func_0x000107c61180();
  puVar3 = &UNK_110428048;
  func_0x000107c613fc(&UNK_110428048,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  FUN_1000285a8(0x112de7608,&UNK_10d9b23f8);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  puVar4 = &UNK_1019dae08;
  FUN_1000bdd8c(&UNK_1019dae08,puVar3);
  puVar5 = puVar4;
  FUN_1000bf56c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(puVar4);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  FUN_1000285a8(0x112d3b7c0,&UNK_10d904cb0);
  uVar2 = uVar1;
  FUN_1000bda74();
  puVar3 = &UNK_110428070;
  func_0x000107c613fc(&UNK_110428070,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar5;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  FUN_1000285a8(0x112d5cee8,&UNK_10d9238d0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar5);
  func_0x000107c6157c(uVar2);
  puVar4 = &UNK_1019dae10;
  FUN_1000bdd8c(&UNK_1019dae10,puVar3);
  puVar3 = puVar4;
  FUN_1003a5b88();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar4);
  return puVar3;
}



/* Entry: 100771d14; end: 100771d6b;  */

void FUN_100771d14(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100771d6c; end: 1007721a7;  */

undefined * FUN_100771d6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long unaff_x20;
  
  FUN_100771b50();
  FUN_1000285a8(0x112de74c0,&UNK_10d9b2350);
  func_0x000107c613fc();
  puVar1 = &UNK_1019da9e0;
  FUN_1000bdd8c(&UNK_1019da9e0,0);
  FUN_1000285a8(0x112de74c8,&UNK_10d9b2358);
  func_0x000107c613fc();
  puVar2 = &UNK_1019da9ec;
  FUN_1000bdd8c(&UNK_1019da9ec,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c3fa04();
  func_0x000107c61180();
  puVar4 = &UNK_110428020;
  func_0x000107c613fc(&UNK_110428020,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar3;
  FUN_1000285a8(0x112de74d0,&UNK_10d9b2360);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar3);
  puVar5 = &UNK_1019daae4;
  FUN_1000bdd8c(&UNK_1019daae4,puVar4);
  FUN_1000285a8(0x112de74d8,&UNK_10d9b2368);
  func_0x000107c613fc();
  puVar4 = &UNK_1019daaec;
  FUN_1000bdd8c(&UNK_1019daaec,0);
  uVar6 = 0x112de74e0;
  FUN_1000285a8(0x112de74e0,&UNK_10d9b2370);
  puVar7 = &UNK_1019dae18;
  FUN_1000cb480(&UNK_1019dae18,0,uVar6);
  puVar8 = puVar7;
  FUN_1003a5b88();
  func_0x000107c61574(puVar7);
  uVar6 = 0x112de74e8;
  FUN_1000285a8(0x112de74e8,&UNK_10d9b2378);
  puVar7 = &UNK_1019dae1c;
  FUN_1000cb480(&UNK_1019dae1c,0,uVar6);
  puVar9 = puVar7;
  FUN_1003a5b88();
  func_0x000107c61574(puVar7);
  uVar6 = 0x112de74f0;
  FUN_1000285a8(0x112de74f0,&UNK_10d9b2380);
  puVar7 = &UNK_1019dae20;
  FUN_1000cb480(&UNK_1019dae20,0,uVar6);
  puVar10 = puVar7;
  FUN_1003a5b88();
  func_0x000107c61574(puVar7);
  uVar6 = 0x112de74f8;
  FUN_1000285a8(0x112de74f8,&UNK_10d9b2388);
  puVar7 = &UNK_1019dae24;
  FUN_1000cb480(&UNK_1019dae24,0,uVar6);
  puVar11 = puVar7;
  FUN_1003a5b88();
  func_0x000107c61574(puVar7);
  uVar6 = 0x112de7500;
  FUN_1000285a8(0x112de7500,&UNK_10d9b2390);
  puVar7 = &UNK_1019dae28;
  FUN_1000cb480(&UNK_1019dae28,0,uVar6);
  puVar12 = puVar7;
  FUN_1003a5b88();
  func_0x000107c61574(puVar7);
  uVar6 = 0x112de7508;
  FUN_1000285a8(0x112de7508,&UNK_10d9b2398);
  puVar7 = &UNK_1019dae2c;
  FUN_1000cb480(&UNK_1019dae2c,0,uVar6);
  puVar13 = puVar7;
  FUN_1003a5b88();
  func_0x000107c61574(puVar7);
  uVar6 = 0x112de7510;
  FUN_1000285a8(0x112de7510,&UNK_10d9b23a0);
  puVar7 = &UNK_1019dae30;
  FUN_1000cb480(&UNK_1019dae30,0,uVar6);
  puVar14 = puVar7;
  FUN_1003a5b88();
  func_0x000107c61574(puVar7);
  uVar6 = 0x112de7518;
  FUN_1000285a8(0x112de7518,&UNK_10d9b23a8);
  puVar7 = &UNK_1019dae34;
  FUN_1000cb480(&UNK_1019dae34,0,uVar6);
  puVar15 = puVar7;
  FUN_1003a5b88();
  func_0x000107c61574(puVar7);
  puVar7 = PTR_PTR_1126a83b0;
  func_0x000107c610f8(PTR_PTR_1126a83b0);
  func_0x000107c481b4();
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(uVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar15);
  return puVar7;
}



/* Entry: 1007721a8; end: 1007721cb;  */

void FUN_1007721a8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007721cc; end: 10077239b; -[SCInLensCreationDataServices initWithProvider:textProvider:textDelegate:visibilityProvider:visibilityDelegate:clientEventsProvider:clientEventsDelegate:activeStateProvider:activeStateDelegate:] */

undefined1 *
FUN_1007721cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_112700a90;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10077239c; end: 1007723df;  */

void FUN_10077239c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007723e0; end: 1007723e7;  */

void FUN_1007723e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007723e8; end: 10077243b;  */

void FUN_1007723e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10077243c; end: 10077244f;  */

void FUN_10077243c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100233d8c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  func_0x000100772df0(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = uVar8;
  FUN_100772e74();
  *(undefined8 *)(lVar1 + 0x10) = uVar9;
  uVar10 = uVar9;
  func_0x000107c6157c();
  FUN_100772ed0();
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar1 + 0x48) = uVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 100772450; end: 10077266b;  */

void FUN_100772450(long *param_1,long param_2)

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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100233d8c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  func_0x000100772df0(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  FUN_100772e74();
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  FUN_100772ed0();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 10077266c; end: 100772673;  */

void FUN_10077266c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100772674; end: 1007726c7;  */

void FUN_100772674(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007726c8; end: 1007726d7;  */

void FUN_1007726c8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10020f084();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a7e70;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(lVar1 + 0x38) = puVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 1007726d8; end: 100772a13;  */

void FUN_1007726d8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10020f084();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a7e70;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(param_2 + 0x38) = puVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 100772a14; end: 100772cdf; -[SCGenAIIdentityServiceProvider provide] */

void FUN_100772a14(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_1054ab3b4;
  puStack_90 = &UNK_11088ee98;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c4d77c();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c4d77c();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_d0 = puVar5;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_1054ab410;
  puStack_b8 = &UNK_11088ef08;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c4d77c();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  puStack_110 = puVar5;
  uStack_108 = 0xc2000000;
  puStack_100 = &UNK_1054ab4ac;
  puStack_f8 = &UNK_11088ef38;
  func_0x000107c6111c(auStack_d8,auStack_80);
  puStack_f0 = puVar1;
  puStack_e8 = puVar2;
  puStack_e0 = puVar3;
  func_0x000107c4d77c();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_118,auStack_80);
  func_0x000107c4d77c(puVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c4d77c(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126b9830;
  func_0x000107c610f4(PTR_PTR_1126b9830);
  func_0x000107c46b04();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_118);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100772ce0; end: 100772dab; -[SCGenAIIdentityServices initWithGenAIIdentityService:mySelfieActivationService:mySelfieClearService:] */

undefined1 *
FUN_100772ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1127008d0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100772dac; end: 100772e73;  */

void FUN_100772dac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100772e74; end: 100772ecf;  */

void FUN_100772e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  return;
}



/* Entry: 100772ed0; end: 1007730c3;  */

undefined * FUN_100772ed0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c3fa04();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar3 = &UNK_110415e78;
  func_0x000107c613fc(&UNK_110415e78,0x40,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar2;
  *(undefined8 *)(puVar3 + 0x30) = uVar5;
  *(undefined8 *)(puVar3 + 0x38) = uVar9;
  FUN_1000285a8(0x112dd7590,&UNK_10d99a760);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  puVar6 = &UNK_101940af4;
  FUN_1000bdd8c(&UNK_101940af4,puVar3);
  puVar3 = &UNK_110415ea0;
  func_0x000107c613fc(&UNK_110415ea0,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar2;
  *(undefined8 *)(puVar3 + 0x28) = uVar5;
  *(undefined8 *)(puVar3 + 0x30) = uVar9;
  FUN_1000285a8(0x112dd7598,&UNK_10d99a768);
  func_0x000107c613fc();
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(uVar2);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar9);
  puVar7 = &UNK_101940cf8;
  FUN_1000bdd8c(&UNK_101940cf8,puVar3);
  FUN_1000285a8(0x112dd75a0,&UNK_10d99a770);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar6);
  puVar3 = &UNK_101940dac;
  FUN_1000bdd8c(&UNK_101940dac,puVar6);
  uVar8 = 0;
  FUN_100233e18(0);
  func_0x000107c610f8();
  FUN_100773154(puVar6,puVar7,puVar3,uVar8);
  func_0x000107c615e8(uVar2);
  return puVar6;
}



/* Entry: 1007730c4; end: 100773153;  */

void FUN_1007730c4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100773154; end: 1007731c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100773154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113015eb8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113015ec0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113015ec8) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1007731c8; end: 10077321b;  */

void FUN_1007731c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10077321c; end: 100773223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077321c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10033e85c();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_113073c90) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100773224; end: 10077328f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100773224(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10033e85c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_113073c90) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100773290; end: 1007732fb;  */

void FUN_100773290(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ecf208,&UNK_10daf56b0);
  func_0x000107c613fc();
  puVar1 = &UNK_10295d860;
  FUN_1000841f8(&UNK_10295d860,0);
  FUN_100084214(&UNK_10daf5680,0x29,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1007732fc; end: 1007733a7;  */

void FUN_1007732fc(undefined8 param_1)

{
  if (lRam0000000112f87918 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7749cc);
  return;
}



/* Entry: 1007733a8; end: 1007733e3;  */

void FUN_1007733a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0xa8) = param_18;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_7;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x90) = param_20;
  *(undefined8 *)(unaff_x20 + 0x98) = param_19;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_17;
  return;
}



/* Entry: 1007733e4; end: 10077397f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1007733e4(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  ulong *puVar16;
  long *plVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar19 = *(undefined8 *)(lVar2 + _DAT_113036498);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c6157c(uVar19);
  func_0x000107c4aeb4();
  func_0x000107c61180();
  uVar18 = *(undefined8 *)(lVar2 + _DAT_113036468);
  puVar12 = &UNK_110682170;
  puVar7 = puVar12;
  func_0x000107c613fc(&UNK_110682170,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  puVar8 = puVar12;
  func_0x000107c613fc(&UNK_110682170,0x18,7);
  func_0x000107c61644(puVar8 + 0x10);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c6157c(uVar18);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(puVar8);
  func_0x000107c3efb8();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(unaff_x20 + 0x50);
  func_0x000107c4b028();
  func_0x000107c61180();
  uVar11 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c4af30();
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_110682170,0x18,7);
  func_0x000107c61644(puVar12 + 0x10);
  FUN_1000285a8(0x112f87a60,&UNK_10dbfba70);
  func_0x000107c613fc();
  puVar13 = &UNK_1036d4afc;
  FUN_1000bdd8c(&UNK_1036d4afc,puVar12);
  lVar14 = 0;
  FUN_100773ae4();
  lVar15 = lVar14;
  func_0x000107c610f8();
  *(undefined8 *)(lVar15 + _DAT_112f87770) = 0;
  *(undefined8 *)(lVar15 + _DAT_112f87778) = 0;
  *(undefined8 *)(lVar15 + _DAT_112f87780) = 0;
  *(undefined8 *)(lVar15 + _DAT_112f87788) = 0;
  *(undefined8 *)(lVar15 + _DAT_112f87790) = 0;
  lVar5 = _DAT_112f877c0;
  uStack_68 = 0;
  FUN_1000285a8(0x112f87a68,&UNK_10dbfba78);
  func_0x000107c613fc();
  puVar16 = &uStack_68;
  FUN_10006c248();
  *(ulong **)(lVar15 + lVar5) = puVar16;
  *(undefined8 *)(lVar15 + _DAT_112f877c8) = 0;
  *(undefined1 *)(lVar15 + _DAT_112f877d0) = 0;
  *(undefined1 *)(lVar15 + _DAT_112f877d8) = 0;
  *(undefined8 *)(lVar15 + _DAT_112f87830) = 0;
  *(undefined1 *)(lVar15 + _DAT_112f87838) = 0;
  *(undefined1 *)(lVar15 + _DAT_112f87840) = 0;
  *(undefined1 *)(lVar15 + _DAT_112f87848) = 0;
  *(undefined1 *)(lVar15 + _DAT_112f87850) = 0;
  *(undefined1 *)(lVar15 + _DAT_112f87858) = 0;
  puVar1 = (undefined8 *)(lVar15 + _DAT_112f87860);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar15 + _DAT_112f87868);
  puVar1[1] = 1;
  *puVar1 = 0;
  lVar5 = _DAT_112f87878;
  uStack_68 = 0;
  FUN_1000285a8(0x112d55258,&UNK_10d91c3a0);
  func_0x000107c613fc();
  puVar16 = &uStack_68;
  FUN_10006c248();
  *(ulong **)(lVar15 + lVar5) = puVar16;
  lVar5 = _DAT_112f87880;
  uStack_68 = uStack_68 & 0xffffffffffffff00;
  FUN_1000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  puVar16 = &uStack_68;
  FUN_10006c248();
  *(ulong **)(lVar15 + lVar5) = puVar16;
  *(undefined1 *)(lVar15 + _DAT_112f87888) = 0;
  *(undefined8 *)(lVar15 + _DAT_112f87750) = uVar19;
  *(undefined8 *)(lVar15 + _DAT_112f87760) = uVar3;
  *(undefined8 *)(lVar15 + _DAT_112f87758) = uVar4;
  *(undefined8 *)(lVar15 + _DAT_112f87828) = uVar9;
  puVar12 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c6157c(uVar19);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar15 + _DAT_112f87798) = puVar12;
  puVar12 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar15 + _DAT_112f877a0) = puVar12;
  puVar12 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar15 + _DAT_112f877a8) = puVar12;
  puVar12 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar15 + _DAT_112f877b0) = puVar12;
  puVar12 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar15 + _DAT_112f877b8) = puVar12;
  puVar12 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar15 + _DAT_112f87768) = puVar12;
  *(undefined8 *)(lVar15 + _DAT_112f877e0) = uVar6;
  *(undefined8 *)(lVar15 + _DAT_112f877e8) = uVar18;
  puVar1 = (undefined8 *)(lVar15 + _DAT_112f877f0);
  *puVar1 = &UNK_1036d4aec;
  puVar1[1] = puVar7;
  puVar1 = (undefined8 *)(lVar15 + _DAT_112f877f8);
  *puVar1 = &UNK_1036d4af4;
  puVar1[1] = puVar8;
  *(undefined8 *)(lVar15 + _DAT_112f87800) = uVar20;
  *(long *)(lVar15 + _DAT_112f87808) = lVar2;
  puVar12 = PTR_PTR_1126ad498;
  func_0x000107c610f8();
  func_0x000107c6157c(uVar18);
  func_0x000107c61174(uVar6);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(puVar8);
  func_0x000107c61174(uVar20);
  func_0x000107c61174(lVar2);
  func_0x000107c453e4();
  *(undefined **)(lVar15 + _DAT_112f87870) = puVar12;
  *(undefined8 *)(lVar15 + _DAT_112f87810) = uVar10;
  *(undefined8 *)(lVar15 + _DAT_112f87818) = uVar11;
  *(undefined **)(lVar15 + _DAT_112f87820) = puVar13;
  plVar17 = &lStack_78;
  lStack_78 = lVar15;
  lStack_70 = lVar14;
  func_0x000107c61154(plVar17,PTR_s_init_1125d9248);
  func_0x000107c61574(uVar19);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uVar18);
  func_0x000107c61578(puVar7,2);
  func_0x000107c61578(puVar8,2);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar9);
  return plVar17;
}



/* Entry: 100773980; end: 1007739a3;  */

void FUN_100773980(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007739a4; end: 100773ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007739a4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  FUN_1007733e4();
  uVar4 = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xb0) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  puVar2 = &UNK_110682148;
  func_0x000107c613fc(&UNK_110682148,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  FUN_1000285a8(0x112f878e8,&UNK_10dbfb980);
  func_0x000107c613fc();
  func_0x000107c61174(param_1);
  uVar4 = 0x10085bb40;
  FUN_1000bdd8c(0x10085bb40,puVar2);
  if (*(int *)(*(long *)(unaff_x20 + 0x10) + _DAT_113082430) == 3) {
    FUN_100773d48();
    lVar1 = _DAT_1130364e8;
    lVar3 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c61428(lVar3 + _DAT_1130364e8,auStack_48,1,0);
    func_0x000107c61634(lVar3 + lVar1,uVar4);
  }
  else {
    func_0x0001036d0b44();
  }
  func_0x0001005c70a0(0);
  func_0x000107c610f8();
  FUN_100774568(uVar4);
  func_0x000107c61170(param_1);
  return uVar4;
}



/* Entry: 100773ad4; end: 100773adb; -[SCTalkServices callStateProvider] */

undefined8 FUN_100773ad4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100773adc; end: 100773ae3; -[SCLensDataFetcherServices lensDataFetcher] */

undefined8 FUN_100773adc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100773ae4; end: 100773b23;  */

void FUN_100773ae4(void)

{
  func_0x000107c61168(&PTR_PTR_1128e2010);
  return;
}



/* Entry: 100773b24; end: 100773bcf; -[SCFideliusLocalKVStoreManager isLocalKVStoreEmpty] */

undefined1 FUN_100773b24(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 1;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_100798408;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x000107c4e530(*(undefined8 *)(param_1 + 8),param_2,&puStack_70);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  func_0x000107c60bcc(&uStack_40,8);
  return uVar1;
}



/* Entry: 100773bd0; end: 100773bfb;  */

void FUN_100773bd0(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  func_0x000107c3bd94();
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x10) = uVar1;
  return;
}



/* Entry: 100773bfc; end: 100773c6f; -[SCGrapheneImagineLensMetricsMetric2 init] */

undefined1 * FUN_100773bfc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f5958;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100773c70; end: 100773cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100773c70(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f87860);
  if (*(char *)(puVar1 + 1) == '\x01') {
    FUN_1000d224c(&uStack_38);
    uVar2 = uStack_38;
    func_0x000107c45194();
    func_0x000107c615e8(uStack_38);
    *puVar1 = uVar2;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}



/* Entry: 100773cf0; end: 100773d47;  */

undefined1  [16] FUN_100773cf0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  FUN_100773c70();
  if ((int)param_1 != 0) {
    FUN_100774094();
    if (param_2 == 0) {
      return ZEXT816(0) << 0x40;
    }
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      auVar2._8_8_ = param_2;
      auVar2._0_8_ = param_1;
      return auVar2;
    }
    func_0x000107c6142c(param_2);
  }
  return ZEXT816(0);
}



/* Entry: 100773d48; end: 100773e5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100773d48(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  FUN_100773cf0();
  if (param_2 != 0) {
    func_0x000107c6142c(param_2);
    FUN_1000d224c(&puStack_60);
    puVar1 = puStack_60;
    func_0x000107c45180();
    func_0x000107c615e8(puStack_60);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f877e0);
    puVar2 = &UNK_1106819a8;
    func_0x000107c613fc(&UNK_1106819a8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_110681f20;
    func_0x000107c613fc(&UNK_110681f20,0x19,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    puVar3[0x18] = (char)puVar1;
    pcStack_40 = FUN_100b60e64;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    uStack_50 = 0x100b5ebe4;
    puStack_48 = &UNK_110681f38;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c5dc64(uVar5);
    func_0x000107c60bd0(ppuVar4);
  }
  return;
}



/* Entry: 100773e60; end: 100773e6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100773e60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar9 = &lStack_60;
  func_0x000107c3fa08();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = 0;
    FUN_100773f98();
    lVar7 = lVar6;
    func_0x000107c610f8();
    *(undefined8 *)(lVar7 + _DAT_112f87be8) = 0;
    *(long *)(lVar7 + _DAT_112f87bc0) = lVar5;
    *(undefined8 *)(lVar7 + _DAT_112f87bc8) = uVar8;
    func_0x000107c61174(lVar5);
    func_0x000107c615f0();
    func_0x000107c400d4();
    func_0x000107c61180();
    *(undefined8 *)(lVar7 + _DAT_112f87bd0) = uVar8;
    *(undefined8 *)(lVar7 + _DAT_112f87bd8) = uVar1;
    *(undefined8 *)(lVar7 + _DAT_112f87be0) = uVar2;
    puVar3 = PTR_s_init_1125d9248;
    lStack_60 = lVar7;
    lStack_58 = lVar6;
    func_0x000107c615f0(uVar1);
    func_0x000107c61174(uVar2);
    func_0x000107c61154(&lStack_60,puVar3);
    func_0x000107c61170(lVar5);
    *param_1 = plVar9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100773f98);
  (*pcVar4)();
}



/* Entry: 100773e6c; end: 100773f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100773e6c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  func_0x000107c3fa08();
  func_0x000107c61180();
  if (param_2 != 0) {
    lVar3 = 0;
    FUN_100773f98();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined8 *)(lVar4 + _DAT_112f87be8) = 0;
    *(long *)(lVar4 + _DAT_112f87bc0) = param_2;
    *(undefined8 *)(lVar4 + _DAT_112f87bc8) = param_3;
    func_0x000107c61174(param_2);
    func_0x000107c615f0();
    func_0x000107c400d4();
    func_0x000107c61180();
    *(undefined8 *)(lVar4 + _DAT_112f87bd0) = param_3;
    *(undefined8 *)(lVar4 + _DAT_112f87bd8) = param_4;
    *(undefined8 *)(lVar4 + _DAT_112f87be0) = param_5;
    puVar1 = PTR_s_init_1125d9248;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c615f0(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61154(&lStack_60,puVar1);
    func_0x000107c61170(param_2);
    *param_1 = plVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100773f98);
  (*pcVar2)();
}



/* Entry: 100773f98; end: 100773ff3;  */

void FUN_100773f98(void)

{
  func_0x000107c61168(&PTR_PTR_1128e2978);
  return;
}



/* Entry: 100773ff4; end: 100774083; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl imagineLensOption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100773ff4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_112f87bd8);
  func_0x000107c61174();
  uVar4 = 0xf159ff0;
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e);
  func_0x000107c4980c(uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  lVar3 = (long)(int)uVar5;
  FUN_100774084(lVar3);
  lVar1 = 0;
  if ((uVar4 & 0xff) != 1) {
    lVar1 = lVar3;
  }
  return lVar1;
}



/* Entry: 100774084; end: 100774093;  */

undefined1  [16] FUN_100774084(ulong param_1)

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



/* Entry: 100774094; end: 100774177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100774094(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auVar7 [16];
  long lStack_58;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112f87868);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  lVar5 = lVar3;
  lVar6 = lVar2;
  if (lVar3 == 1) {
    FUN_1000d224c(&lStack_58);
    lVar5 = lStack_58;
    func_0x000107c4518c();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_58);
    if (lVar5 == 0) {
      lVar6 = 0;
      param_2 = 0;
    }
    else {
      lVar6 = lVar5;
      func_0x000107c5faec();
      func_0x000107c61170(lVar5);
    }
    lVar5 = *plVar1;
    lVar4 = plVar1[1];
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    func_0x000107c61434(param_2);
    FUN_1007742d4(lVar5,lVar4);
    lVar5 = param_2;
  }
  func_0x0001007742e8(lVar2,lVar3);
  auVar7._8_8_ = lVar5;
  auVar7._0_8_ = lVar6;
  return auVar7;
}



/* Entry: 100774178; end: 1007741df; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl imagineLensId] */

void FUN_100774178(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1007741e0();
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1007741e0; end: 10077427b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007741e0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f87bd8);
  uVar1 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f15a010);
  func_0x000107c4c0d0();
  func_0x000107c61170(uVar1);
  if (0 < lVar2) {
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  }
  return;
}



/* Entry: 10077427c; end: 1007742d3; -[SCAppStartExperimentReader longValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

long FUN_10077427c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000107c3cda4();
  func_0x000107c61180();
  if (param_1 != 0) {
    param_4 = param_1;
    func_0x000107c4c0c8(param_1);
  }
  func_0x000107c61170(param_1);
  return param_4;
}



/* Entry: 1007742d4; end: 1007742fb;  */

void FUN_1007742d4(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1007742fc; end: 100774343; -[SCFideliusLocalKVStoreManager _loadLocal] */

ulong FUN_1007742fc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x000107c3bd9c();
  if ((uVar1 & 1) == 0) {
    func_0x000107c3b454(param_1);
    uVar2 = param_1;
    func_0x000107c3b9e4();
    if ((int)uVar2 != 0) {
      func_0x000107c3c44c(param_1);
    }
  }
  return uVar1;
}



/* Entry: 100774344; end: 1007744cf; -[SCFideliusLocalKVStoreManager _loadLocalKVStore] */

long FUN_100774344(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x000107c5a9bc(PTR_PTR_1126b85c8);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c0488;
  func_0x000107c61158(PTR_PTR_1126c0488);
  func_0x000107c60b14();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126bd030;
  func_0x000107c4339c(PTR_PTR_1126bd030);
  func_0x000107c61180();
  puVar4 = puVar1;
  func_0x000107c4b754(puVar1,param_2,puVar2,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  lVar5 = param_1;
  func_0x000107c3cd98(param_1,param_2,puVar4,&PTR____CFConstantStringClassReference_110e0ecb8);
  if ((int)lVar5 != 0) {
    func_0x000107c56000(param_1,param_2,puVar4);
    lVar6 = param_1;
    func_0x000107c4b804(param_1);
    func_0x000107c61180();
    lVar7 = lVar6;
    func_0x000107c4a94c();
    func_0x000107c61180();
    func_0x000107c53fcc();
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c5c734(uVar8);
    func_0x000107c61180();
    func_0x000107c4b804(param_1);
    func_0x000107c61180();
    lVar6 = param_1;
    func_0x000107c4a94c();
    func_0x000107c61180();
    lVar7 = lVar6;
    func_0x000107c4c890();
    func_0x000107c4bc54(uVar8,param_2,1,0,&PTR____CFConstantStringClassReference_110e0ecb8,lVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar8);
  }
  func_0x000107c61170(puVar4);
  return lVar5;
}



/* Entry: 1007744d0; end: 10077454f; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl imagineLensDelayFetchUntilLensCarouselReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007744d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f87bd8);
  func_0x000107c61174();
  uVar1 = 0xd00000000000003d;
  func_0x000107c5fadc(0xd00000000000003d,0x800000010f159f30);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100774550; end: 100774567;  */

void FUN_100774550(long param_1,long param_2)

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



/* Entry: 100774568; end: 1007745d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100774568(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffd0;
  *(undefined8 *)(unaff_x20 + _DAT_113082a78) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_113082a80) = uVar1;
  func_0x0001005c70a0();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 1007745d8; end: 100774693;  */

void FUN_1007745d8(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100774694; end: 10077469b;  */

void FUN_100774694(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10077469c; end: 1007746ef;  */

void FUN_10077469c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}


