/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100bfbd70; end: 100bfbf8f;  */

void FUN_100bfbd70(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = param_1;
  if (param_2 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    func_0x000107c61434();
    puVar5 = PTR___ss11AnyHashableVN_11034e448;
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar8 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar8 = param_2;
    }
    func_0x000107c60480();
    func_0x000107c61434(param_1);
    puVar5 = PTR___ss11AnyHashableVN_11034e448;
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___ss11AnyHashableVN_11034e448 = puVar5;
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      uVar3 = 0x112e38b20;
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100bfbf18);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(param_2 + uVar9 * 8 + 0x20);
        func_0x000107c615f0();
      }
      else {
        uVar2 = uVar9;
        func_0x000101ebd7a0(uVar9,param_2);
      }
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100bfbf14);
        (*pcVar1)();
      }
      uVar10 = uVar9 + 1;
      uStack_90 = uVar2;
      func_0x0001000285a8(0x112e38b20,&UNK_10da23630);
      puVar4 = &uStack_c0;
      func_0x000107c6147c(puVar4,&uStack_90,uVar3,puVar5,6);
      if (((ulong)puVar4 & 1) == 0) {
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
LAB_100bfbdf0:
        func_0x000100a119cc(&uStack_c0);
      }
      else {
        if (lStack_a8 == 0) goto LAB_100bfbdf0;
        uStack_88 = uStack_b8;
        uStack_90 = uStack_c0;
        lStack_78 = lStack_a8;
        uStack_80 = uStack_b0;
        uStack_70 = uStack_a0;
        puVar5 = puVar7;
        func_0x000107c61558();
        puVar6 = puVar7;
        if (((ulong)puVar5 & 1) == 0) {
          puVar6 = (undefined *)0x0;
          FUN_100beb08c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
        }
        uVar2 = *(ulong *)(puVar6 + 0x10);
        puVar7 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
          FUN_100beb08c(puVar7,uVar2 + 1,1,puVar6);
        }
        *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puVar7 + uVar2 * 0x28 + 0x40) = uStack_70;
        *(undefined8 *)(puVar7 + uVar2 * 0x28 + 0x28) = uStack_88;
        *(ulong *)(puVar7 + uVar2 * 0x28 + 0x20) = uStack_90;
        *(long *)(puVar7 + uVar2 * 0x28 + 0x38) = lStack_78;
        *(undefined8 *)(puVar7 + uVar2 * 0x28 + 0x30) = uStack_80;
        puVar5 = PTR___ss11AnyHashableVN_11034e448;
      }
      uVar9 = uVar9 + 1;
    } while (uVar10 != uVar8);
  }
  FUN_100bf13dc(puVar7);
  func_0x000107c6142c(puVar7);
  func_0x000100b60084(&uStack_68);
  func_0x000107c6142c(uStack_68);
  return;
}



/* Entry: 100bfbf90; end: 100bfc023;  */

undefined8 * FUN_100bfbf90(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_DAT_110862700;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 100bfc024; end: 100bfc17b;  */

void FUN_100bfc024(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar4);
  func_0x000107c43518();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    func_0x000107c3b5b8();
    func_0x000107c61180();
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x18);
    func_0x000107c498c0(lVar2);
    func_0x000107c61180();
    func_0x000107c3b5a4(*(undefined8 *)(param_1 + 0x30));
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100bfc17c; end: 100bfc22b;  */

undefined * FUN_100bfc17c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c4d420();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c49d0c();
  func_0x000107c61170(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126de698;
    func_0x000107c3bb60(PTR_PTR_1126de698);
  }
  func_0x000107c61170(param_2);
  return puVar3;
}



/* Entry: 100bfc22c; end: 100bfc23b; -[SCLensScheduleNamespaceDataModel namespaceId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100bfc22c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852c8);
}



/* Entry: 100bfc23c; end: 100bfc303; +[SCMixerNamespaceDocObjectStore _isNamespaceDataValid:lensDataConfigProvider:] */

bool FUN_100bfc23c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  bool bVar3;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar1 = param_4;
  func_0x000107c4d420(param_4);
  func_0x000107c61180();
  uVar2 = param_5;
  func_0x000107c4aac8(param_5,param_3,uVar1);
  func_0x000107c61170(uVar1);
  if (uVar2 == 0) {
    bVar3 = true;
  }
  else {
    func_0x000107c4aa94(param_4);
    bVar3 = uVar2 <= (ulong)(long)param_1;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return bVar3;
}



/* Entry: 100bfc304; end: 100bfc313; -[SCLensScheduleNamespaceDataModel lastUpdateTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100bfc304(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852d8);
}



/* Entry: 100bfc314; end: 100bfc763; -[SCLensScheduleNamespaceDataModelTransformer internalNamespaceDataFromNamespaceDataModel:] */

void FUN_100bfc314(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lStack_108;
  long lStack_100;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4d420();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4adac();
  if (lVar2 == 0) {
    puVar12 = (undefined *)0x0;
    goto LAB_100bfc684;
  }
  lVar2 = param_3;
  func_0x000107c4e0ac();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4adac();
  if (lVar3 == 0) {
    func_0x000107c61174(lVar1);
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
  }
  puVar4 = PTR_PTR_1126b6868;
  func_0x000107c610f4();
  func_0x000107c4791c();
  if (puVar4 == (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    lVar3 = param_3;
    func_0x000107c3d128();
    func_0x000107c61180();
    lVar5 = lVar3;
    func_0x000107c40808();
    puVar12 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar5 == 0) {
      lVar5 = param_3;
      func_0x000107c4ec28();
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c40808();
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar3);
      if (lVar6 != 0) goto LAB_100bfc42c;
      puStack_c8 = puVar12;
      uStack_c0 = 0xc2000000;
      puStack_b8 = &UNK_10aeb4034;
      puStack_b0 = &UNK_110c8f0e8;
      uStack_a8 = param_1;
      func_0x000107c61174(param_3);
      ppuVar11 = &puStack_c8;
      lStack_a0 = param_3;
      func_0x000107c61184(ppuVar11);
      lVar3 = param_3;
      func_0x000107c3d150();
      func_0x000107c61180();
      lStack_100 = lVar3;
      func_0x000107c3feb8();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = param_3;
      func_0x000107c4ec2c();
      func_0x000107c61180();
      lStack_108 = lVar3;
      func_0x000107c3feb8();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(ppuVar11);
      lVar3 = lStack_a0;
    }
    else {
      func_0x000107c61170(lVar3);
LAB_100bfc42c:
      puStack_98 = puVar12;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_100bfc828;
      puStack_80 = &UNK_110c8f0b8;
      uStack_78 = param_1;
      func_0x000107c61174(param_3);
      ppuVar11 = &puStack_98;
      lStack_70 = param_3;
      func_0x000107c61184(ppuVar11);
      lVar3 = param_3;
      func_0x000107c3d128();
      func_0x000107c61180();
      lStack_100 = lVar3;
      func_0x000107c3feb8();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = param_3;
      func_0x000107c4ec28();
      func_0x000107c61180();
      lStack_108 = lVar3;
      func_0x000107c3feb8();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(ppuVar11);
      lVar3 = lStack_70;
    }
    func_0x000107c61170(lVar3);
    lVar3 = param_3;
    func_0x000107c4d6d4();
    func_0x000107c61180();
    lVar5 = lVar3;
    func_0x000107c4c284();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = param_3;
    func_0x000107c43184(param_3);
    func_0x000107c61180();
    func_0x000107c3bdb8(param_1,param_2,lVar3);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    puVar7 = PTR_PTR_1126de690;
    func_0x000107c3c338(PTR_PTR_1126de690,param_2,param_3);
    func_0x000107c61180();
    puVar8 = PTR_PTR_1126de690;
    func_0x000107c3bf54(PTR_PTR_1126de690,param_2,param_3);
    func_0x000107c61180();
    puVar12 = PTR_PTR_1126de5b0;
    func_0x000107c610f4(PTR_PTR_1126de5b0);
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar3 = param_3;
    func_0x000107c5d094(param_3);
    func_0x000107c4d978(puVar9,param_2,lVar3);
    func_0x000107c61180();
    puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c4aa94(param_3);
    func_0x000107c41360(puVar10);
    func_0x000107c61180();
    func_0x000107c484a8(puVar12,param_2,puVar4,lStack_100,lStack_108,puVar9,puVar10,lVar5,0,puVar8,
                        param_1,puVar7);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lStack_108);
    func_0x000107c61170(lStack_100);
  }
  func_0x000107c61170();
  func_0x000107c61170(lVar2);
LAB_100bfc684:
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 100bfc764; end: 100bfc773; -[SCLensScheduleNamespaceDataModel originalNamespaceId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100bfc764(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852fc);
}



/* Entry: 100bfc774; end: 100bfc817; -[SCLensScheduleNamespace initWithNamespaceId:cacheKey:] */

undefined1 *
FUN_100bfc774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270a398;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bfc818; end: 100bfc827; -[SCLensScheduleNamespaceDataModel activeItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100bfc818(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127852f0);
}



/* Entry: 100bfc828; end: 100bfc97f;  */

void FUN_100bfc828(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  puStack_68 = &UNK_10aeb3ef8;
  puStack_60 = &UNK_10aeb3f08;
  uStack_58 = 0;
  uVar1 = param_2;
  func_0x000107c4a764(param_2);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c4c5cc(uVar1);
  func_0x000107c61170(uVar1);
  uVar1 = puStack_78[5];
  func_0x000107c61174(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c60bcc(&uStack_80,8);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bfc980; end: 100bfc987; -[SCLensMetadataMetadataItem item] */

undefined8 FUN_100bfc980(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bfc988; end: 100bfcabb; -[SCLensMetadataCTLItem matchDataModel:cTItem:] */

/* WARNING: Possible PIC construction at 0x000100bfc9f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bfc9f8) */

void FUN_100bfc988(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (*(long *)(param_1 + 8) == 2) {
    if (param_4 == 0) goto LAB_100bfc9f0;
    lVar1 = 0x18;
    param_3 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 1 || param_3 == 0) goto LAB_100bfc9f0;
    lVar1 = 0x10;
  }
  (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + lVar1));
LAB_100bfc9f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100bfcabc; end: 100bfd69b; -[SCLensMetadataModelTransformer lensMetadataFromLensMetadataModel:namespaceId:expirationDate:] */

void FUN_100bfcabc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined *param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  long lVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  ulong uVar48;
  long lVar49;
  ulong uVar50;
  long lVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  undefined *puVar56;
  undefined8 uVar57;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if (param_3 == 0) {
    puVar56 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (uVar1 == 0) {
      puVar56 = (undefined *)0x0;
    }
    else {
      func_0x000107c61174(param_5);
      puVar2 = param_5;
      if (param_5 == (undefined *)0x0) {
        uVar1 = param_3;
        func_0x000107c42bd4();
        puVar56 = PTR__OBJC_CLASS___NSDate_1126ae770;
        puVar2 = (undefined *)0x0;
        if (uVar1 != 0) {
          uVar1 = param_3;
          func_0x000107c42bd4(param_3);
          func_0x000107c41360((double)uVar1);
          func_0x000107c61180();
          puVar2 = puVar56;
        }
      }
      uVar1 = param_3;
      func_0x000107c417ac();
      puStack_88 = PTR__OBJC_CLASS___NSDate_1126ae770;
      if (uVar1 == 0) {
        puStack_88 = (undefined *)0x0;
      }
      else {
        uVar1 = param_3;
        func_0x000107c417ac(param_3);
        func_0x000107c41360((double)uVar1);
        func_0x000107c61180();
      }
      uVar1 = param_3;
      func_0x000107c3f088();
      func_0x000107c61180();
      puStack_90 = PTR__OBJC_CLASS___NSSet_1126ae870;
      if (uVar1 == 0) {
        puStack_90 = (undefined *)0x0;
      }
      else {
        uVar3 = param_3;
        func_0x000107c3f088(param_3);
        func_0x000107c61180();
        func_0x000107c5a74c();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
      }
      func_0x000107c61170(uVar1);
      uVar1 = param_3;
      func_0x000107c3df58();
      func_0x000107c61180();
      puStack_98 = PTR__OBJC_CLASS___NSSet_1126ae870;
      if (uVar1 == 0) {
        puStack_98 = (undefined *)0x0;
      }
      else {
        uVar3 = param_3;
        func_0x000107c3df58(param_3);
        func_0x000107c61180();
        func_0x000107c5a74c();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
      }
      func_0x000107c61170(uVar1);
      func_0x000107c3bc30();
      uVar57 = *(undefined8 *)(param_1 + 8);
      uVar1 = param_3;
      func_0x000107c4b110(param_3);
      func_0x000107c61180();
      func_0x000107c4b118();
      func_0x000107c61180();
      func_0x000107c61170(uVar1);
      uVar1 = param_3;
      func_0x000107c4b334(param_3);
      func_0x000107c61180();
      lVar4 = param_1;
      func_0x000107c3bcd0();
      func_0x000107c61180();
      func_0x000107c61170(uVar1);
      uVar1 = param_3;
      func_0x000107c4b298(param_3);
      func_0x000107c61180();
      lVar5 = param_1;
      func_0x000107c3bcac();
      func_0x000107c61180();
      func_0x000107c61170(uVar1);
      uVar1 = param_3;
      func_0x000107c4b31c(param_3);
      func_0x000107c61180();
      lVar6 = param_1;
      func_0x000107c3bcc8();
      func_0x000107c61180();
      func_0x000107c61170(uVar1);
      puVar56 = PTR_PTR_1126ae6a8;
      func_0x000107c610f4();
      uVar1 = param_3;
      func_0x000107c4d3e4();
      func_0x000107c61180();
      uVar3 = param_3;
      func_0x000107c3fcb0();
      func_0x000107c61180();
      uVar7 = param_3;
      func_0x000107c44ea0();
      func_0x000107c61180();
      uVar8 = param_3;
      func_0x000107c44ea8();
      func_0x000107c61180();
      lVar9 = param_1;
      func_0x000107c3b988();
      func_0x000107c61180();
      uVar10 = param_3;
      func_0x000107c44fb4();
      func_0x000107c61180();
      uVar11 = param_3;
      func_0x000107c3e990();
      func_0x000107c61180();
      uVar12 = param_3;
      func_0x000107c5062c();
      func_0x000107c61180();
      uVar13 = param_3;
      func_0x000107c50628();
      func_0x000107c61180();
      lVar14 = param_1;
      func_0x000107c3c3b8();
      func_0x000107c61180();
      func_0x000107c4b4d8(param_3);
      func_0x000107c3bd00();
      func_0x000107c51b48(param_3);
      func_0x000107c3bce4();
      uVar15 = param_3;
      func_0x000107c3f6e0();
      func_0x000107c61180();
      func_0x000107c49d78();
      func_0x000107c4a4d8();
      uVar16 = param_3;
      func_0x000107c5b808();
      func_0x000107c61180();
      lVar17 = param_1;
      func_0x000107c3bcf8();
      func_0x000107c61180();
      func_0x000107c5b878(param_3);
      func_0x000107c3c894();
      uVar18 = param_3;
      func_0x000107c518d4();
      func_0x000107c61180();
      lVar19 = param_1;
      func_0x000107c3bce0();
      func_0x000107c61180();
      func_0x000107c49c4c();
      func_0x000107c3cea4();
      uVar20 = param_3;
      func_0x000107c5d2d8();
      func_0x000107c61180();
      lVar21 = param_1;
      func_0x000107c3bd04();
      func_0x000107c61180();
      uVar22 = param_3;
      func_0x000107c4c264();
      func_0x000107c61180();
      lVar23 = param_1;
      func_0x000107c3bc3c();
      func_0x000107c61180();
      func_0x000107c4a55c();
      func_0x000107c3d0d4(param_3);
      func_0x000107c3bc70();
      uVar24 = param_3;
      func_0x000107c427a0();
      func_0x000107c61180();
      uVar25 = param_3;
      func_0x000107c5d27c();
      func_0x000107c61180();
      func_0x000107c447d0();
      uVar26 = param_3;
      func_0x000107c4dbb0();
      func_0x000107c61180();
      uVar27 = param_3;
      func_0x000107c5d2f4();
      func_0x000107c61180();
      lVar28 = param_1;
      func_0x000107c3bd08();
      func_0x000107c61180();
      func_0x000107c4a2c4();
      func_0x000107c4f248();
      uVar29 = param_3;
      func_0x000107c4b06c();
      func_0x000107c61180();
      uVar30 = param_3;
      func_0x000107c3fea4();
      func_0x000107c61180();
      lVar31 = param_1;
      func_0x000107c3bc58();
      func_0x000107c61180();
      func_0x000107c5b530(param_3);
      func_0x000107c3bcd4();
      uVar32 = param_3;
      func_0x000107c5b534();
      func_0x000107c61180();
      uVar33 = param_3;
      func_0x000107c5b52c();
      func_0x000107c61180();
      lVar34 = param_1;
      func_0x000107c3bc98();
      func_0x000107c61180();
      func_0x000107c49f7c();
      uVar35 = param_3;
      func_0x000107c4058c();
      func_0x000107c61180();
      func_0x000107c49b6c();
      uVar36 = param_3;
      func_0x000107c3f9b4();
      func_0x000107c61180();
      uVar37 = param_3;
      func_0x000107c4af7c();
      func_0x000107c61180();
      uVar38 = param_3;
      func_0x000107c3f694();
      func_0x000107c61180();
      lVar39 = param_1;
      func_0x000107c3bd10();
      func_0x000107c61180();
      uVar40 = param_3;
      func_0x000107c3f690();
      func_0x000107c61180();
      lVar41 = param_1;
      func_0x000107c3bd0c();
      func_0x000107c61180();
      uVar42 = param_3;
      func_0x000107c5d2d0();
      func_0x000107c61180();
      uVar43 = param_3;
      func_0x000107c401fc();
      func_0x000107c61180();
      lVar44 = param_1;
      func_0x000107c3bc5c();
      func_0x000107c61180();
      uVar45 = param_3;
      func_0x000107c4d2b4();
      func_0x000107c61180();
      lVar46 = param_1;
      func_0x000107c3bcb0();
      func_0x000107c61180();
      uVar47 = param_3;
      func_0x000107c5aaa4();
      func_0x000107c61180();
      uVar48 = param_3;
      func_0x000107c4fe18();
      func_0x000107c61180();
      lVar49 = param_1;
      func_0x000107c3c2b0();
      func_0x000107c61180();
      uVar50 = param_3;
      func_0x000107c4119c();
      func_0x000107c61180();
      lVar51 = param_1;
      func_0x000107c3b404();
      func_0x000107c61180();
      uVar52 = param_3;
      func_0x000107c3d3fc();
      func_0x000107c61180();
      uVar53 = param_3;
      func_0x000107c4ecfc();
      func_0x000107c61180();
      func_0x000107c3c158();
      func_0x000107c61180();
      uVar54 = param_3;
      func_0x000107c5c764();
      func_0x000107c61180();
      func_0x000107c4a4c0();
      uVar55 = param_3;
      func_0x000107c4f220();
      func_0x000107c61180();
      func_0x000107c47300(puVar56);
      func_0x000107c61170(uVar55);
      func_0x000107c61170(uVar54);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar53);
      func_0x000107c61170(uVar52);
      func_0x000107c61170(lVar51);
      func_0x000107c61170(uVar50);
      func_0x000107c61170(lVar49);
      func_0x000107c61170(uVar48);
      func_0x000107c61170(uVar47);
      func_0x000107c61170(lVar46);
      func_0x000107c61170(uVar45);
      func_0x000107c61170(lVar44);
      func_0x000107c61170(uVar43);
      func_0x000107c61170(uVar42);
      func_0x000107c61170(lVar41);
      func_0x000107c61170(uVar40);
      func_0x000107c61170(lVar39);
      func_0x000107c61170(uVar38);
      func_0x000107c61170(uVar37);
      func_0x000107c61170(uVar36);
      func_0x000107c61170(uVar35);
      func_0x000107c61170(lVar34);
      func_0x000107c61170(uVar33);
      func_0x000107c61170(uVar32);
      func_0x000107c61170(lVar31);
      func_0x000107c61170(uVar30);
      func_0x000107c61170(uVar29);
      func_0x000107c61170(lVar28);
      func_0x000107c61170(uVar27);
      func_0x000107c61170(uVar26);
      func_0x000107c61170(uVar25);
      func_0x000107c61170(uVar24);
      func_0x000107c61170(lVar23);
      func_0x000107c61170(uVar22);
      func_0x000107c61170(lVar21);
      func_0x000107c61170(uVar20);
      func_0x000107c61170(lVar19);
      func_0x000107c61170(uVar18);
      func_0x000107c61170(lVar17);
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(uVar13);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(uVar57);
      func_0x000107c61170(puStack_98);
      func_0x000107c61170(puStack_90);
      func_0x000107c61170(puStack_88);
      func_0x000107c61170(puVar2);
    }
    func_0x000107c61170();
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar56);
  return;
}



/* Entry: 100bfd69c; end: 100bfd6a3; -[SCLensMetadataDataModel lensId] */

undefined8 FUN_100bfd69c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100bfd6a4; end: 100bfd6ab; -[SCLensMetadataDataModel expirationTimestamp] */

undefined8 FUN_100bfd6a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 100bfd6ac; end: 100bfd6b3; -[SCLensMetadataDataModel demoStartTimestamp] */

undefined8 FUN_100bfd6ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 100bfd6b4; end: 100bfd6bb; -[SCLensMetadataDataModel cameraContexts] */

undefined8 FUN_100bfd6b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 100bfd6bc; end: 100bfd6c3; -[SCLensMetadataDataModel applicableContexts] */

undefined8 FUN_100bfd6bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 100bfd6c4; end: 100bfd73f; -[SCLensMetadataModelTransformer _lensApiLevelForLensMetadataDataModel:] */

undefined8 FUN_100bfd6c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c3dd5c();
  if ((uint)uVar1 == 3) {
    uVar2 = 2;
  }
  else if (((uint)uVar1 & 0xff) == 2) {
    uVar2 = 1;
  }
  else if ((uVar1 & 0xff) == 0) {
    uVar1 = param_3;
    func_0x000107c4a5d4();
    uVar2 = 1;
    if ((int)uVar1 != 0) {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 0;
  }
  func_0x000107c61170(param_3);
  return uVar2;
}



/* Entry: 100bfd740; end: 100bfd747; -[SCLensMetadataDataModel apiLevel] */

long FUN_100bfd740(long param_1)

{
  return (long)*(char *)(param_1 + 0x15);
}



/* Entry: 100bfd748; end: 100bfd74f; -[SCLensMetadataDataModel lensExtensionData] */

undefined8 FUN_100bfd748(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 100bfd750; end: 100bfd827; -[SCLensScheduleNamespaceDataLensExtensionSerializer lensExtensionsFromData:error:] */

void FUN_100bfd750(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4adac();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
    func_0x000107c45424();
    func_0x000107c61174(0);
    func_0x000107c57e2c(puVar2,param_2,0);
    puVar3 = puVar2;
    func_0x000107c41478(puVar2,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
    func_0x000107c61180();
    if (param_4 != (undefined8 *)0x0) {
      func_0x000107c61178(0);
      *param_4 = 0;
    }
    func_0x000107c61170(puVar2);
    func_0x000107c61170(0);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100bfd828; end: 100bfd82f; -[SCLensMetadataDataModel lensPreview] */

undefined8 FUN_100bfd828(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}



/* Entry: 100bfd830; end: 100bfd8f3; -[SCLensMetadataModelTransformer _lensPreviewForDataModelLensPreview:] */

void FUN_100bfd830(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126bb870;
  puVar6 = (undefined *)0x0;
  if (param_3 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c610f4(puVar1);
    lVar2 = param_3;
    func_0x000107c5d7f0(param_3);
    func_0x000107c61180();
    lVar3 = param_3;
    func_0x000107c51f38(param_3);
    lVar4 = param_3;
    func_0x000107c51f2c(param_3);
    lVar5 = param_3;
    func_0x000107c5c964(param_3);
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    func_0x000107c49170(puVar1,param_2,lVar2,lVar3,lVar4,lVar5);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar2);
    puVar6 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100bfd8f4; end: 100bfd8fb; -[SCLensMetadataLensPreview urlPattern] */

undefined8 FUN_100bfd8f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bfd8fc; end: 100bfd903; -[SCLensMetadataLensPreview sequenceSize] */

undefined8 FUN_100bfd8fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bfd904; end: 100bfd90b; -[SCLensMetadataLensPreview sequenceFrameIntervalMs] */

undefined8 FUN_100bfd904(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100bfd90c; end: 100bfd913; -[SCLensMetadataLensPreview thumbnailUrl] */

undefined8 FUN_100bfd90c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100bfd914; end: 100bfd9d3; -[SCLensPreview initWithUrlPattern:sequenceSize:sequenceFrameIntervalMs:thumbnailUrl:] */

undefined1 *
FUN_100bfd914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_11270ad40;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bfd9d4; end: 100bfd9db; -[SCLensMetadataDataModel lensMiscData] */

undefined8 FUN_100bfd9d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



/* Entry: 100bfd9dc; end: 100bfdabb; -[SCLensMetadataModelTransformer _lensMiscDataForDataModelLensMiscData:] */

void FUN_100bfd9dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x000107c439bc();
    if (lVar1 < 1) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126de5e8;
      func_0x000107c610f4(PTR_PTR_1126de5e8);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar1 = param_3;
      func_0x000107c439bc(param_3);
      func_0x000107c4d968(puVar3,param_2,lVar1);
      func_0x000107c61180();
      func_0x000107c46a30(puVar2,param_2,puVar3);
      func_0x000107c61170(puVar3);
    }
    puVar3 = PTR_PTR_1126de6f0;
    func_0x000107c610f4(PTR_PTR_1126de6f0);
    lVar1 = param_3;
    func_0x000107c5de98(param_3);
    func_0x000107c49508(puVar3,param_2,lVar1,puVar2);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100bfdabc; end: 100bfdac3; -[SCLensMetadataLensMiscData friendPlayCount] */

undefined8 FUN_100bfdabc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bfdac4; end: 100bfdacb; -[SCLensMetadataLensMiscData viewCount] */

undefined8 FUN_100bfdac4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bfdacc; end: 100bfdb53; -[SCLensMiscData initWithViewCount:badgeData:] */

undefined1 *
FUN_100bfdacc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270ae28;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100bfdb54; end: 100bfdb5b; -[SCLensMetadataDataModel lensPlusTierConfig] */

undefined8 FUN_100bfdb54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



/* Entry: 100bfdb5c; end: 100bfdc1f; -[SCLensMetadataModelTransformer _lensPlusTierConfigForDataModelInLensPlusTierConfig:] */

void FUN_100bfdb5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = (undefined *)0x0;
  if (param_3 != 0) {
    func_0x000107c61174(param_3);
    lVar1 = param_3;
    func_0x000107c43940(param_3);
    func_0x000107c61180();
    func_0x000107c3bcb8(param_1,param_2,lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    puVar2 = PTR_PTR_1126bb868;
    func_0x000107c610f4(PTR_PTR_1126bb868);
    lVar1 = param_3;
    func_0x000107c5d294(param_3);
    lVar3 = param_3;
    func_0x000107c410a0(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c49090(puVar2,param_2,lVar1,lVar3,param_1);
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100bfdc20; end: 100bfdc27; -[SCLensMetadataDataModel name] */

undefined8 FUN_100bfdc20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100bfdc28; end: 100bfdc2f; -[SCLensMetadataDataModel code] */

undefined8 FUN_100bfdc28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100bfdc30; end: 100bfdc37; -[SCLensMetadataDataModel hintId] */

undefined8 FUN_100bfdc30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100bfdc38; end: 100bfdc3f; -[SCLensMetadataDataModel hintTranslations] */

undefined8 FUN_100bfdc38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100bfdc40; end: 100bfddc3; -[SCLensMetadataModelTransformer _hintIdToHintDescriptionFromHintTranslations:] */

undefined * FUN_100bfdc40(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    func_0x000107c61174(param_3);
    lVar2 = param_3;
    func_0x000107c4080c(param_3,param_2,&uStack_120,auStack_d8,0x10);
    if (lVar2 != 0) {
      lVar6 = *plStack_110;
      do {
        lVar7 = 0;
        do {
          if (*plStack_110 != lVar6) {
            func_0x000107c61128(param_3);
          }
          lVar5 = *(long *)(lStack_118 + lVar7 * 8);
          lVar3 = lVar5;
          func_0x000107c44ea0();
          func_0x000107c61180();
          if (lVar3 != 0) {
            func_0x000107c44e94(lVar5);
            func_0x000107c61180();
            func_0x000107c56bd8(puVar1,param_2,lVar5,lVar3);
            func_0x000107c61170(lVar5);
          }
          func_0x000107c61170(lVar3);
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = param_3;
        func_0x000107c4080c(param_3,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar2 != 0);
    }
    func_0x000107c61170(param_3);
    puVar4 = puVar1;
    func_0x000107c40794(puVar1);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  func_0x000107c60e78();
  return *(undefined **)(param_3 + 8);
}



/* Entry: 100bfddc4; end: 100bfddcb; -[SCLensMetadataHintTranslation hintId] */

undefined8 FUN_100bfddc4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bfddcc; end: 100bfddd3; -[SCLensMetadataHintTranslation hintDescription] */

undefined8 FUN_100bfddcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bfddd4; end: 100bfdddb; -[SCLensMetadataDataModel iconURL] */

undefined8 FUN_100bfddd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100bfdddc; end: 100bfdde3; -[SCLensMetadataDataModel bitmojiComicId] */

undefined8 FUN_100bfdddc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 100bfdde4; end: 100bfddeb; -[SCLensMetadataDataModel resourceContainer] */

undefined8 FUN_100bfdde4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 100bfddec; end: 100bfddf3; -[SCLensMetadataDataModel resource] */

undefined8 FUN_100bfddec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 100bfddf4; end: 100bfdfa7; -[SCLensMetadataModelTransformer _resourceContainerForLensMetadataContainer:fallbackLensResource:] */

undefined * FUN_100bfddf4(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = param_3;
  func_0x000107c4b3d0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c40808();
  func_0x000107c61170(puVar1);
  if ((param_4 == 0) && (puVar1 = (undefined *)0x0, puVar2 == (undefined *)0x0)) goto LAB_100bfdf0c;
  puVar1 = param_3;
  func_0x000107c4b3d0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c40808();
  func_0x000107c61170(puVar1);
  if (puVar2 == (undefined *)0x0) {
    if (param_4 != 0) {
      func_0x000107c3bcdc(param_1,param_2,param_4);
      func_0x000107c61180();
      if (param_1 == (undefined *)0x0) {
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_50 = param_1;
        func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
        func_0x000107c61180();
      }
      goto LAB_100bfdee4;
    }
    puVar2 = (undefined *)0x0;
  }
  else {
    param_1 = param_3;
    func_0x000107c4b3d0(param_3);
    func_0x000107c61180();
    puVar2 = param_1;
    func_0x000107c3feb8();
    func_0x000107c61180();
LAB_100bfdee4:
    func_0x000107c61170(param_1);
  }
  puVar1 = PTR_PTR_1126b62e0;
  func_0x000107c610f4(PTR_PTR_1126b62e0);
  func_0x000107c483cc();
  func_0x000107c61170(puVar2);
LAB_100bfdf0c:
  func_0x000107c61170(param_4);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    return *(undefined **)(param_3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 100bfdfa8; end: 100bfdfbb; -[SCLensMetadataResourceContainer lensResources] */

undefined8 FUN_100bfdfa8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bfdfbc; end: 100bfe093; -[SCLensMetadataModelTransformer _lensResourceFromLensMetadataResource:] */

void FUN_100bfdfbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126de6c8;
  puVar5 = (undefined *)0x0;
  if (param_3 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c610f4(puVar1);
    lVar2 = param_3;
    func_0x000107c50634(param_3);
    func_0x000107c3c3bc(param_1,param_2,lVar2);
    lVar2 = param_3;
    func_0x000107c3ac3c(param_3);
    func_0x000107c61180();
    lVar3 = param_3;
    func_0x000107c3f9b4(param_3);
    func_0x000107c61180();
    lVar4 = param_3;
    func_0x000107c49d50(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c48eb0(puVar1,param_2,param_1,lVar2,lVar3,0,lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    puVar5 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100bfe094; end: 100bfe09b; -[SCLensMetadataLensResource resourceType] */

long FUN_100bfe094(long param_1)

{
  return (long)*(char *)(param_1 + 8);
}



/* Entry: 100bfe09c; end: 100bfe0c7; -[SCLensMetadataModelTransformer _resourceTypeForDataModelLensResourceType:] */

undefined8 FUN_100bfe09c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if ((byte)(param_3 - 1U) < 4) {
    return *(undefined8 *)(&UNK_10e532900 + (ulong)(byte)(param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 100bfe0c8; end: 100bfe0cf; -[SCLensMetadataLensResource URLString] */

undefined8 FUN_100bfe0c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bfe0d0; end: 100bfe0d7; -[SCLensMetadataLensResource checksum] */

undefined8 FUN_100bfe0d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100bfe0d8; end: 100bfe0df; -[SCLensMetadataLensResource isFallback] */

undefined1 FUN_100bfe0d8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 100bfe0e0; end: 100bfe127;  */

void FUN_100bfe0e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3ae00(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),param_2);
  func_0x000107c61180();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100bfe128; end: 100bfe12f; -[SCLensMetadataDataModel lensType] */

long FUN_100bfe128(long param_1)

{
  return (long)*(char *)(param_1 + 8);
}



/* Entry: 100bfe130; end: 100bfe24b; -[SCExtensionSharedFile _atomicallyWriteData:toURL:] */

/* WARNING: Removing unreachable block (ram,0x000100bfe188) */

undefined * FUN_100bfe130(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5e9b8();
  func_0x000107c61174(0);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = (undefined *)0x0;
  if ((param_3 & 1) == 0) {
    uVar3 = *(undefined8 *)PTR__NSCocoaErrorDomain_1103453f8;
    uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_40 = &PTR____CFConstantStringClassReference_1110267b8;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1);
    func_0x000107c61180();
    func_0x000107c42a58(puVar2,param_2,uVar3,0x200,puVar1);
    param_4 = (uint)uVar3;
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    puVar1 = puVar2;
  }
  func_0x000107c61170(0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    func_0x000107c60e78();
    if (0xb < param_4) {
      return (undefined *)0x0;
    }
    return *(undefined **)(&UNK_10e532920 + (long)(int)param_4 * 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 100bfe24c; end: 100bfe26b; -[SCLensMetadataModelTransformer _lensTypeForDataModelLensType:] */

undefined8 FUN_100bfe24c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (param_3 < 0xc) {
    return *(undefined8 *)(&UNK_10e532920 + (long)(int)param_3 * 8);
  }
  return 0;
}



/* Entry: 100bfe26c; end: 100bfe273; -[SCLensMetadataDataModel section] */

long FUN_100bfe26c(long param_1)

{
  return (long)*(char *)(param_1 + 9);
}



/* Entry: 100bfe274; end: 100bfe27f; -[SCLensMetadataModelTransformer _lensSectionForDataModelLensSection:] */

bool FUN_100bfe274(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 != 0;
}



/* Entry: 100bfe280; end: 100bfe287; -[SCLensMetadataDataModel categories] */

undefined8 FUN_100bfe280(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 100bfe288; end: 100bfe28f; -[SCLensMetadataDataModel isFeatured] */

undefined1 FUN_100bfe288(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 100bfe290; end: 100bfe297; -[SCLensMetadataDataModel isSponsored] */

undefined1 FUN_100bfe290(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 100bfe298; end: 100bfe29f; -[SCLensMetadataDataModel sponsoredSlug] */

undefined8 FUN_100bfe298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 100bfe2a0; end: 100bfe9cb; -[SCLensMetadataModelTransformer _lensSponsoredSlugForDataModelSponsoredSlug:] */

void FUN_100bfe2a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uStack_70;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    puVar21 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x000107c5c224();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar1 == 0) {
      puVar22 = (undefined *)0x0;
    }
    else {
      lVar1 = param_3;
      func_0x000107c5c224();
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c4234c();
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(lVar1);
      if (lVar2 == 0) {
        uStack_70 = (undefined *)0x0;
      }
      else {
        uStack_70 = PTR_PTR_1126de6d0;
        func_0x000107c610f4();
        lVar1 = param_3;
        func_0x000107c5c224(param_3);
        func_0x000107c61180();
        lVar2 = lVar1;
        func_0x000107c4234c();
        func_0x000107c61180();
        lVar3 = lVar2;
        func_0x000107c5e9e0();
        func_0x000107c61180();
        lVar4 = param_3;
        func_0x000107c5c224(param_3);
        func_0x000107c61180();
        lVar5 = lVar4;
        func_0x000107c4234c();
        func_0x000107c61180();
        lVar6 = lVar5;
        func_0x000107c5e9f0();
        func_0x000107c61180();
        func_0x000107c495f8(uStack_70,param_2,lVar3,lVar6);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar1);
      }
      puVar22 = PTR_PTR_1126de6d8;
      func_0x000107c610f4();
      lVar1 = param_3;
      func_0x000107c5c224();
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c43770();
      func_0x000107c61180();
      lVar3 = param_3;
      func_0x000107c5c224(param_3);
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c5c89c();
      func_0x000107c61180();
      lVar5 = param_3;
      func_0x000107c5c224(param_3);
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c3fdb8();
      func_0x000107c61180();
      lVar7 = param_3;
      func_0x000107c5c224(param_3);
      func_0x000107c61180();
      lVar8 = lVar7;
      func_0x000107c42348();
      func_0x000107c61180();
      func_0x000107c4697c(puVar22,param_2,lVar2,lVar4,lVar6,lVar8,uStack_70);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(uStack_70);
    }
    lVar1 = param_3;
    func_0x000107c41640();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar1 == 0) {
      puVar23 = (undefined *)0x0;
    }
    else {
      lVar1 = param_3;
      func_0x000107c41640();
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c5df14();
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(lVar1);
      if (lVar2 == 0) {
        uStack_70 = (undefined *)0x0;
      }
      else {
        uStack_70 = PTR_PTR_1126de6e0;
        func_0x000107c610f4();
        lVar1 = param_3;
        func_0x000107c41640();
        func_0x000107c61180();
        lVar2 = lVar1;
        func_0x000107c5df14();
        func_0x000107c61180();
        lVar3 = lVar2;
        func_0x000107c4ead8();
        func_0x000107c61180();
        lVar4 = lVar3;
        func_0x000107c5e9e0();
        func_0x000107c61180();
        lVar5 = param_3;
        func_0x000107c41640();
        func_0x000107c61180();
        lVar6 = lVar5;
        func_0x000107c5df14();
        func_0x000107c61180();
        lVar7 = lVar6;
        func_0x000107c4ead8();
        func_0x000107c61180();
        lVar8 = lVar7;
        func_0x000107c5e9f0();
        func_0x000107c61180();
        lVar9 = param_3;
        func_0x000107c41640(param_3);
        func_0x000107c61180();
        lVar10 = lVar9;
        func_0x000107c5df14();
        func_0x000107c61180();
        lVar11 = lVar10;
        func_0x000107c5e304();
        func_0x000107c61180();
        lVar12 = param_3;
        func_0x000107c41640(param_3);
        func_0x000107c61180();
        lVar13 = lVar12;
        func_0x000107c5df14();
        func_0x000107c61180();
        lVar14 = lVar13;
        func_0x000107c44d98();
        func_0x000107c61180();
        func_0x000107c495fc(uStack_70,param_2,lVar4,lVar8,lVar11,lVar14);
        func_0x000107c61170(lVar14);
        func_0x000107c61170(lVar13);
        func_0x000107c61170(lVar12);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar9);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar1);
      }
      puVar23 = PTR_PTR_1126bb888;
      func_0x000107c610f4();
      lVar1 = param_3;
      func_0x000107c41640();
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c3db0c();
      func_0x000107c61180();
      lVar3 = param_3;
      func_0x000107c41640();
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c4eb70();
      func_0x000107c61180();
      lVar5 = param_3;
      func_0x000107c41640();
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c44ec8();
      func_0x000107c61180();
      lVar7 = param_3;
      func_0x000107c41640();
      func_0x000107c61180();
      lVar8 = lVar7;
      func_0x000107c5e010();
      func_0x000107c61180();
      lVar9 = param_3;
      func_0x000107c41640();
      func_0x000107c61180();
      lVar10 = lVar9;
      func_0x000107c5c82c();
      func_0x000107c61180();
      lVar11 = param_3;
      func_0x000107c41640();
      func_0x000107c61180();
      lVar12 = lVar11;
      func_0x000107c5b874();
      func_0x000107c61180();
      lVar13 = param_3;
      func_0x000107c41640();
      func_0x000107c61180();
      lVar14 = lVar13;
      func_0x000107c5b7b0();
      func_0x000107c61180();
      puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar15 = param_3;
      func_0x000107c41640();
      func_0x000107c61180();
      lVar16 = lVar15;
      func_0x000107c5c9c8();
      func_0x000107c4d978(puVar21,param_2,lVar16);
      func_0x000107c61180();
      lVar16 = param_3;
      func_0x000107c41640();
      func_0x000107c61180();
      lVar17 = lVar16;
      func_0x000107c4c0d8();
      func_0x000107c61180();
      puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar18 = param_3;
      func_0x000107c41640(param_3);
      func_0x000107c61180();
      lVar19 = lVar18;
      func_0x000107c4c0dc();
      func_0x000107c4d978(puVar20,param_2,lVar19);
      func_0x000107c61180();
      func_0x000107c4952c(puVar23,param_2,uStack_70,lVar2,lVar4,lVar6,lVar8,lVar10,lVar12,lVar14,
                          puVar21,lVar17,puVar20);
      func_0x000107c61170(puVar20);
      func_0x000107c61170(lVar18);
      func_0x000107c61170(lVar17);
      func_0x000107c61170(lVar16);
      func_0x000107c61170(puVar21);
      func_0x000107c61170(lVar15);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(lVar13);
      func_0x000107c61170(lVar12);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(uStack_70);
    }
    puVar21 = PTR_PTR_1126bb890;
    func_0x000107c610f4(PTR_PTR_1126bb890);
    func_0x000107c48b18();
    func_0x000107c61170(puVar23);
    func_0x000107c61170(puVar22);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 100bfe9cc; end: 100bfe9d3; -[SCLensMetadataDataModel sponsoredType] */

long FUN_100bfe9cc(long param_1)

{
  return (long)*(char *)(param_1 + 0x16);
}



/* Entry: 100bfe9d4; end: 100bfe9e7; -[SCLensMetadataModelTransformer _sponsoredTypeFromDataModelType:] */

int FUN_100bfe9d4(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 0xb) {
    iVar1 = (param_3 - 1U & 0xff) + 1;
  }
  return iVar1;
}



/* Entry: 100bfe9e8; end: 100bfe9ef; -[SCLensMetadataDataModel scheduleIntervals] */

undefined8 FUN_100bfe9e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 100bfe9f0; end: 100bfea2b; -[SCLensMetadataModelTransformer _lensScheduleIntervalsForDataModelScheduleIntervals:] */

void FUN_100bfe9f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x000107c4c284(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8eda8,0);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bfea2c; end: 100bfea33; -[SCLensMetadataDataModel isDemo] */

undefined1 FUN_100bfea2c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 100bfea34; end: 100bfea3b; -[SCLensMetadataDataModel absoluteCarouselPosition] */

undefined8 FUN_100bfea34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 100bfea3c; end: 100bfea43; -[SCLensMetadataDataModel unlockableTrackInfo] */

undefined8 FUN_100bfea3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 100bfea44; end: 100bfed4b; -[SCLensMetadataModelTransformer _lensUnlockableTrackInfoForDataModelUnlockableTrackInfo:] */

void FUN_100bfea44(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    puVar23 = (undefined *)0x0;
  }
  else {
    puVar23 = PTR_PTR_1126bb898;
    func_0x000107c610f4();
    lVar1 = param_3;
    func_0x000107c3d474();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c42540();
    func_0x000107c61180();
    lVar3 = param_3;
    func_0x000107c4f8e8();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c42540();
    func_0x000107c61180();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar5 = param_3;
    func_0x000107c5b100(param_3);
    func_0x000107c4d968(puVar6,param_2,lVar5);
    func_0x000107c61180();
    lVar5 = param_3;
    func_0x000107c427a8();
    func_0x000107c61180();
    lVar7 = lVar5;
    func_0x000107c42540();
    func_0x000107c61180();
    lVar8 = param_3;
    func_0x000107c3d508();
    func_0x000107c61180();
    lVar9 = lVar8;
    func_0x000107c42540();
    func_0x000107c61180();
    lVar10 = param_3;
    func_0x000107c4f8bc();
    func_0x000107c61180();
    lVar11 = lVar10;
    func_0x000107c42540();
    func_0x000107c61180();
    lVar12 = param_3;
    func_0x000107c4f8b8();
    func_0x000107c61180();
    lVar13 = lVar12;
    func_0x000107c42540();
    func_0x000107c61180();
    lVar14 = param_3;
    func_0x000107c427b0();
    func_0x000107c61180();
    lVar15 = lVar14;
    func_0x000107c42540();
    func_0x000107c61180();
    lVar16 = param_3;
    func_0x000107c5b0ac();
    func_0x000107c61180();
    lVar17 = lVar16;
    func_0x000107c42540();
    func_0x000107c61180();
    lVar18 = param_3;
    func_0x000107c3d2dc();
    func_0x000107c61180();
    lVar19 = lVar18;
    func_0x000107c4adac();
    if (lVar19 == 0) {
      lVar22 = 0;
    }
    else {
      lVar22 = param_3;
      func_0x000107c3d2dc();
      func_0x000107c61180();
    }
    lVar20 = param_3;
    func_0x000107c3d470();
    func_0x000107c61180();
    lVar21 = lVar20;
    func_0x000107c42540();
    func_0x000107c61180();
    func_0x000107c45604(puVar23,param_2,lVar2,lVar4,puVar6,lVar7,lVar9,lVar11,lVar13,lVar15,0,0,0,
                        lVar17,lVar22,lVar21,0,0);
    func_0x000107c61170(lVar21);
    func_0x000107c61170(lVar20);
    if (lVar19 != 0) {
      func_0x000107c61170(lVar22);
    }
    func_0x000107c61170(lVar18);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar15);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 100bfed4c; end: 100bfed53; -[SCLensMetadataUnlockableTrackInfo adServeRequestId] */

undefined8 FUN_100bfed4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bfed54; end: 100bfed5b; -[SCLensMetadataUnlockableTrackInfo rawAdData] */

undefined8 FUN_100bfed54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bfed5c; end: 100bfed63; -[SCLensMetadataUnlockableTrackInfo skipTrack] */

undefined8 FUN_100bfed5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100bfed64; end: 100bfed6b; -[SCLensMetadataUnlockableTrackInfo encryptedSponsoredData] */

undefined8 FUN_100bfed64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100bfed6c; end: 100bfed73; -[SCLensMetadataUnlockableTrackInfo adTrackUrl] */

undefined8 FUN_100bfed6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100bfed74; end: 100bfedb3;  */

void FUN_100bfed74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c4a0ec(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_1);
  uVar1 = 0;
  if ((int)puVar2 == 0) {
    uVar1 = param_1;
  }
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bfedb4; end: 100bfedbb; -[SCLensMetadataUnlockableTrackInfo rankingId] */

undefined8 FUN_100bfedb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100bfedbc; end: 100bfedc3; -[SCLensMetadataUnlockableTrackInfo rankingData] */

undefined8 FUN_100bfedbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100bfedc4; end: 100bfedcb; -[SCLensMetadataUnlockableTrackInfo encryptedUserTrackData] */

undefined8 FUN_100bfedc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100bfedcc; end: 100bfedd3; -[SCLensMetadataUnlockableTrackInfo skAdNetworkAttribution] */

undefined8 FUN_100bfedcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 100bfedd4; end: 100bfeddb; -[SCLensMetadataUnlockableTrackInfo adId] */

undefined8 FUN_100bfedd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 100bfeddc; end: 100bfede3; -[SCLensMetadataUnlockableTrackInfo adServeItemId] */

undefined8 FUN_100bfeddc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 100bfede4; end: 100bff13f; -[SCUnlockableTrackInfo initWithAdServeRequestId:rawAdData:skipTrack:encryptedSponsoredUnlockableTargetingInfoData:adTrackUrl:rankingId:rankingData:encryptedUserTrackData:jsonTrackUrl:protoTrackUrl:batchTrackUrl:skAdNetworkAttribution:adId:adServeItemId:pixelId:creativeId:] */

undefined8 *
FUN_100bfede4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174();
  func_0x000107c61174();
  puStack_70 = PTR_PTR_11270add0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_10;
    func_0x000107c40794();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_11;
    func_0x000107c40794();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_12;
    func_0x000107c40794();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_13;
    func_0x000107c40794();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_14;
    func_0x000107c40794();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_15;
    func_0x000107c40794();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_16;
    func_0x000107c40794();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_17;
    func_0x000107c40794();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_18;
    func_0x000107c40794();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100bff140; end: 100bff147; -[SCLensMetadataDataModel manifest] */

undefined8 FUN_100bff140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 100bff148; end: 100bff1b3; -[SCLensMetadataModelTransformer _lensAssetsForDataModelLensAssests:] */

void FUN_100bff148(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_3 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_100bff1b4;
    puStack_20 = &UNK_110c8edc8;
    uStack_18 = param_1;
    func_0x000107c4c280(param_3,param_2,&puStack_38);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bff1b4; end: 100bff43b;  */

void FUN_100bff1b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
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
  
  puVar1 = PTR_PTR_1126bb838;
  func_0x000107c61174(param_2);
  func_0x000107c610f4();
  uVar2 = param_2;
  func_0x000107c44fdc();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar3 = param_2;
  func_0x000107c5d7e8();
  func_0x000107c61180();
  func_0x000107c3ac40();
  func_0x000107c61180();
  uVar5 = param_2;
  func_0x000107c5b010();
  func_0x000107c61180();
  uVar6 = param_2;
  func_0x000107c3f9b4();
  func_0x000107c61180();
  func_0x000107c3e240(param_2);
  func_0x000107c3bc34();
  func_0x000107c50428(param_2);
  func_0x000107c3bcd8();
  func_0x000107c51820();
  func_0x000107c4ed88();
  uVar7 = param_2;
  func_0x000107c4e098();
  func_0x000107c61180();
  uVar8 = param_2;
  func_0x000107c42764();
  func_0x000107c61180();
  uVar9 = param_2;
  func_0x000107c3e544();
  func_0x000107c61180();
  uVar10 = param_2;
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar11 = param_2;
  func_0x000107c427d4();
  func_0x000107c61180();
  uVar12 = param_2;
  func_0x000107c427d0();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  uVar13 = param_2;
  func_0x000107c5beac(param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c3bc38();
  func_0x000107c61180();
  func_0x000107c46d8c();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bff43c; end: 100bff443; -[SCLensMetadataDataModel isStudioPreview] */

undefined1 FUN_100bff43c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 100bff444; end: 100bff44b; -[SCLensMetadataLensAsset identifier] */

undefined8 FUN_100bff444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bff44c; end: 100bff453; -[SCLensMetadataLensAsset url] */

undefined8 FUN_100bff44c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100bff454; end: 100bff45b; -[SCLensMetadataDataModel activationCameraPosition] */

long FUN_100bff454(long param_1)

{
  return (long)*(char *)(param_1 + 0xf);
}



/* Entry: 100bff45c; end: 100bff46f; -[SCLensMetadataModelTransformer _lensDevicePositionForDataModelDevicePosition:] */

long FUN_100bff45c(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = -(ulong)(param_3 != 1);
  if (param_3 == 2) {
    lVar1 = 1;
  }
  return lVar1;
}



/* Entry: 100bff470; end: 100bff477; -[SCLensMetadataDataModel encryptedGeoData] */

undefined8 FUN_100bff470(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 100bff478; end: 100bff47f; -[SCLensMetadataDataModel unlockCompanionBackReferenceId] */

undefined8 FUN_100bff478(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 100bff480; end: 100bff487; -[SCLensMetadataDataModel hasContextCards] */

undefined1 FUN_100bff480(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}


