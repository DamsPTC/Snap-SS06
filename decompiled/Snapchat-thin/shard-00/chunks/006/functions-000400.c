/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100855d7c; end: 100855d7f;  */

void FUN_100855d7c(void)

{
  return;
}



/* Entry: 100855d80; end: 100855e5f;  */

void FUN_100855d80(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 100855e60; end: 100855e63;  */

void FUN_100855e60(void)

{
  return;
}



/* Entry: 100855e64; end: 100855f27;  */

void FUN_100855e64(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4c7b0(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100855f28; end: 100855f2b;  */

void FUN_100855f28(void)

{
  return;
}



/* Entry: 100855f2c; end: 100856027;  */

void FUN_100855f2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_106212368;
  puStack_30 = &UNK_106212378;
  uStack_28 = 0;
  func_0x000107c4c7b0(param_2);
  uVar1 = puStack_48[5];
  func_0x000107c61174(uVar1);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100856028; end: 10085602f;  */

void FUN_100856028(void)

{
  return;
}



/* Entry: 100856030; end: 1008560a7;  */

void FUN_100856030(undefined1 *param_1)

{
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  *(undefined **)(param_1 + 0x18) = PTR___sSbN_11034dd40;
  *param_1 = 0;
  puStack_30 = param_1;
  func_0x0001008546f4(FUN_1008560a8,0,0x10087de00,0,FUN_1008c9754,auStack_40,&UNK_103afacdc,0,
                      &UNK_103aface0,0);
  return;
}



/* Entry: 1008560a8; end: 1008560ab;  */

void FUN_1008560a8(void)

{
  return;
}



/* Entry: 1008560ac; end: 100856237;  */

void FUN_1008560ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  puVar4 = auStack_70;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_3;
  func_0x000107c614f0();
  auStack_50[0] = param_3;
  uStack_38 = uVar3;
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  (*pcVar1)(auStack_70,param_2,auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
  FUN_1006732c8(auStack_70,uStack_58);
  func_0x000107c605b0();
  FUN_100183ab8(auStack_70);
  FUN_100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100856238; end: 10085623f;  */

void FUN_100856238(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 auStack_70 [2];
  byte *pbStack_60;
  byte bStack_50;
  undefined7 uStack_4f;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) {
    return;
  }
  auStack_70[0] = param_1;
  func_0x000107c615f0(param_1);
  uVar7 = 0x112daafe8;
  FUN_1000285a8(0x112daafe8,&UNK_10d953970);
  pbVar6 = &bStack_50;
  func_0x000107c6147c(pbVar6,auStack_70,PTR___syXlN_11034f1a0 + 8,uVar7,6);
  if (((ulong)pbVar6 & 1) != 0) {
    lVar1 = CONCAT71(uStack_4f,bStack_50);
    if (*(long *)(lVar1 + 0x10) == 2) {
      FUN_1000bb420(lVar1 + 0x20,auStack_70);
      puVar2 = PTR___sypN_11034f1a8;
      pbVar6 = &bStack_50;
      func_0x000107c6147c(pbVar6,auStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
      bVar3 = bStack_50;
      if (((ulong)pbVar6 & 1) != 0) {
        if (*(ulong *)(lVar1 + 0x10) < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100856410);
          (*pcVar4)();
        }
        FUN_1000bb420(lVar1 + 0x40,auStack_70);
        func_0x000107c6142c(lVar1);
        uVar7 = 0;
        FUN_1007f3264(0);
        pbVar6 = &bStack_50;
        func_0x000107c6147c(pbVar6,auStack_70,puVar2 + 8,uVar7,6);
        if (((ulong)pbVar6 & 1) != 0) {
          lVar1 = CONCAT71(uStack_4f,bStack_50);
          bStack_50 = 0;
          pbStack_60 = &bStack_50;
          FUN_100856414(&UNK_103afacf4,auStack_70,FUN_100856410,0);
          if ((bStack_50 & bVar3 & 1) == 0) {
            bStack_50 = 0;
            pbStack_60 = &bStack_50;
            FUN_100856414(&UNK_103aface4,0,FUN_100856454,auStack_70);
            if (bStack_50 == 1) {
              FUN_100856464();
            }
          }
          else {
            func_0x000103afab04();
          }
          func_0x000107c61170(lVar5);
          lVar5 = lVar1;
        }
        goto LAB_1008563a4;
      }
    }
    func_0x000107c6142c(lVar1);
  }
LAB_1008563a4:
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 100856240; end: 10085640f;  */

void FUN_100856240(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  byte bVar3;
  code *pcVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 auStack_70 [2];
  byte *pbStack_60;
  byte bStack_50;
  undefined7 uStack_4f;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  auStack_70[0] = param_1;
  func_0x000107c615f0(param_1);
  uVar6 = 0x112daafe8;
  FUN_1000285a8(0x112daafe8,&UNK_10d953970);
  pbVar5 = &bStack_50;
  func_0x000107c6147c(pbVar5,auStack_70,PTR___syXlN_11034f1a0 + 8,uVar6,6);
  if (((ulong)pbVar5 & 1) != 0) {
    lVar1 = CONCAT71(uStack_4f,bStack_50);
    if (*(long *)(lVar1 + 0x10) == 2) {
      FUN_1000bb420(lVar1 + 0x20,auStack_70);
      puVar2 = PTR___sypN_11034f1a8;
      pbVar5 = &bStack_50;
      func_0x000107c6147c(pbVar5,auStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
      bVar3 = bStack_50;
      if (((ulong)pbVar5 & 1) != 0) {
        if (*(ulong *)(lVar1 + 0x10) < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100856410);
          (*pcVar4)();
        }
        FUN_1000bb420(lVar1 + 0x40,auStack_70);
        func_0x000107c6142c(lVar1);
        uVar6 = 0;
        FUN_1007f3264(0);
        pbVar5 = &bStack_50;
        func_0x000107c6147c(pbVar5,auStack_70,puVar2 + 8,uVar6,6);
        if (((ulong)pbVar5 & 1) != 0) {
          lVar1 = CONCAT71(uStack_4f,bStack_50);
          bStack_50 = 0;
          pbStack_60 = &bStack_50;
          FUN_100856414(&UNK_103afacf4,auStack_70,FUN_100856410,0);
          if ((bStack_50 & bVar3 & 1) == 0) {
            bStack_50 = 0;
            pbStack_60 = &bStack_50;
            FUN_100856414(&UNK_103aface4,0,FUN_100856454,auStack_70);
            if (bStack_50 == 1) {
              FUN_100856464();
            }
          }
          else {
            func_0x000103afab04();
          }
          func_0x000107c61170(param_2);
          param_2 = lVar1;
        }
        goto LAB_1008563a4;
      }
    }
    func_0x000107c6142c(lVar1);
  }
LAB_1008563a4:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100856410; end: 100856413;  */

void FUN_100856410(void)

{
  return;
}



/* Entry: 100856414; end: 100856453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100856414(code *param_1,undefined8 param_2,code *param_3)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_11307ba38) == '\x01') {
    (*param_3)();
  }
  else {
    (*param_1)();
  }
  return;
}



/* Entry: 100856454; end: 100856463;  */

void FUN_100856454(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 100856464; end: 10085656b;  */

/* WARNING: Possible PIC construction at 0x0001008564f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100856530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008564f4) */
/* WARNING: Removing unreachable block (ram,0x000100856510) */
/* WARNING: Removing unreachable block (ram,0x00010085652c) */
/* WARNING: Removing unreachable block (ram,0x000100856534) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100856464(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fe9de8);
  func_0x000107c4b940(uVar3);
  if (*(char *)(unaff_x20 + _DAT_112fe9df0) == '\x01') {
    *(undefined1 *)(unaff_x20 + _DAT_112fe9df0) = 0;
    lVar2 = _DAT_112fe9e20;
    lVar1 = _DAT_112fe9e18;
    if ((*(long *)(unaff_x20 + _DAT_112fe9e10) != 0) && (*(long *)(unaff_x20 + _DAT_112fe9e18) != 0)
       ) {
      if (*(long *)(unaff_x20 + _DAT_112fe9e20) != 0) {
        *(undefined8 *)(unaff_x20 + _DAT_112fe9e10) = 0;
        *(undefined8 *)(unaff_x20 + lVar1) = 0;
        uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
        *(undefined8 *)(unaff_x20 + lVar2) = 0;
        func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar3);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 10085656c; end: 10085666b;  */

void FUN_10085656c(long param_1,undefined8 param_2)

{
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10087de04;
  puStack_40 = &UNK_110847180;
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_106fea32c;
  puStack_68 = &UNK_110847180;
  uStack_38 = uStack_60;
  func_0x000107c6111c(auStack_88,param_1 + 0x28);
  func_0x000107c4c7b0(param_2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10085666c; end: 10085666f;  */

void FUN_10085666c(void)

{
  return;
}



/* Entry: 100856670; end: 100856677; -[SCMutablePublicCameraFeatureCatalog memories] */

undefined8 FUN_100856670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 100856678; end: 1008566a7;  */

bool FUN_100856678(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 1008566a8; end: 10085689b;  */

void FUN_1008566a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_1 + 0x30;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126c8468;
    func_0x000107c610f4();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10085689c;
    puStack_70 = &UNK_11084e7d0;
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar11);
    ppuVar2 = &puStack_88;
    uStack_68 = uVar11;
    FUN_10085689c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    func_0x000107c4008c();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(lVar1 + 0x50);
    func_0x000107c42eac(uVar4);
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(lVar1 + 0x120);
    uVar5 = *(undefined8 *)(lVar1 + 0x48);
    func_0x000107c444a4();
    func_0x000107c61180();
    lVar6 = lVar1 + 0xe8;
    func_0x000107c61148(lVar6);
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    uVar14 = *(undefined8 *)(lVar1 + 0x160);
    uVar7 = *(undefined8 *)(lVar1 + 0x80);
    func_0x000107c4c15c();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(lVar1 + 0xc0);
    func_0x000107c4ad60();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4f5c0();
    func_0x000107c61180();
    uVar11 = uVar9;
    func_0x000107c51d44();
    func_0x000107c61180();
    func_0x000107c4774c(puVar13,param_2,ppuVar2,uVar3,uVar4,uVar10,uVar5,lVar6,uVar12,uVar14,uVar7,
                        uVar8,uVar11,*(undefined8 *)(lVar1 + 0x1a8));
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(ppuVar2);
    func_0x000107c61170(uStack_68);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10085689c; end: 100856977;  */

void FUN_10085689c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100856978; end: 10085697f; -[SCLegacyMemoriesNavigationServices legacyMemoriesNavigationService] */

undefined8 FUN_100856978(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100856980; end: 100856cd7; -[SCFeatureMemoriesImpl initWithMemoriesSideButtonFeatureRef:cameraConfig:featureSettingsService:galleryLogger:grapheneRegistry:swipeViewParentDelegate:galleryTransitionCoordinator:navigationLogger:mainCameraScreenUIContainers:legacyMemoriesNavigationService:selfieSettings:memoriesExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100856980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126f83f0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112762a00,param_11);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112762a04);
    *(undefined **)((long)puVar1 + (long)_DAT_112762a04) = puVar2;
    func_0x000107c61170(uVar4);
    lVar5 = (long)_DAT_112762a08;
    func_0x000107c61174(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    func_0x000107c61170(uVar4);
    lVar6 = (long)_DAT_112762a0c;
    func_0x000107c61174(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    func_0x000107c61170(uVar4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112762a10) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112762a14) = 0xffffffffffffffff;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112762a18) = 1;
    lVar6 = (long)_DAT_112762a1c;
    func_0x000107c61174(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    func_0x000107c61170(uVar4);
    lVar6 = (long)_DAT_112762a20;
    func_0x000107c61174(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    func_0x000107c61170(uVar4);
    lVar6 = (long)_DAT_112762a24;
    func_0x000107c61174(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    func_0x000107c61170(uVar4);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112762a28,param_8);
    lVar6 = (long)_DAT_112762a2c;
    func_0x000107c61174(param_9);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_9;
    func_0x000107c61170(uVar4);
    lVar6 = (long)_DAT_112762a30;
    func_0x000107c61174(param_10);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_10;
    func_0x000107c61170(uVar4);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112762a34,param_13);
    lVar6 = (long)_DAT_112762a38;
    func_0x000107c61174(param_14);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_14;
    func_0x000107c61170(uVar4);
    func_0x000107c55ba4(param_12);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x000107c42e38(uVar3);
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c4cc80();
    func_0x000107c61180();
    func_0x000107c3d8b4();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x000107c42e38(uVar3);
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c4cc80();
    func_0x000107c61180();
    func_0x000107c54514();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
  }
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



/* Entry: 100856cd8; end: 100856d1f; -[SCMemoriesNavigationServiceImpl setLegacyMemoriesNavigationAdapter:] */

void FUN_100856cd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x10);
  func_0x000107c611a0(param_1 + 8,param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 100856d20; end: 100856d8f;  */

void FUN_100856d20(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c4cc80(param_1);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100856d90; end: 100856e07; -[SCFeatureReference feature] */

void FUN_100856d90(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  (**(code **)(lVar1 + 0x10))();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61174(lVar1);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100856e08; end: 100856f13;  */

void FUN_100856e08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  lVar3 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126b0188;
    func_0x000107c610f4(PTR_PTR_1126b0188);
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    func_0x000107c4cc58(uVar4);
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(lVar3 + 0x38);
    func_0x000107c4cc88(uVar5);
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(lVar3 + 0x58);
    uVar1 = *(undefined8 *)(lVar3 + 0x1a8);
    uVar2 = *(undefined8 *)(lVar3 + 0x1b0);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(lVar3 + 0x118);
    func_0x000107c4ac68();
    func_0x000107c61180();
    func_0x000107c48288(puVar8,param_2,uVar4,uVar5,uVar9,uVar1,uVar2,uVar7,0);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 100856f14; end: 100856f1b; -[SCMemoriesRecentThumbnailProvidingServices memoriesRecentThumbnailProvider] */

undefined8 FUN_100856f14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100856f1c; end: 100856f23; -[SCMemoriesSideButtonStateProvidingServices memoriesSideButtonStateProvider] */

undefined8 FUN_100856f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100856f24; end: 10085719f; -[SCFeatureMemoriesSideButtonImpl initWithRecentThumbnailProvider:memoriesSideButtonStateProvider:circumstanceEngine:memoriesExperimentService:memoriesUserDefaultsManager:imagineLensService:isReplyQuotingCamera:userContext:lensCarouselManager:lensCarouselOnCameraScopeDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100856f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             char param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(in_stack_00000010);
  func_0x000107c61174(in_stack_00000018);
  puStack_68 = PTR_PTR_1126f8400;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112762a90;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_112762a94;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    func_0x000107c61170(uVar2);
    lVar6 = (long)_DAT_112762a98;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_112762a9c;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_112762aa0;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112762aa4);
    *(undefined **)((long)puVar1 + (long)_DAT_112762aa4) = puVar3;
    func_0x000107c61170(uVar2);
    if (param_9 == '\0') {
      uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
      func_0x000107c5c734(uVar2);
      func_0x000107c61180();
      func_0x000107c425d4();
      func_0x000107c61170(uVar2);
      func_0x000107c3b34c(puVar1);
      uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
      func_0x000107c5c734();
      func_0x000107c61180();
      uVar2 = uVar4;
      func_0x000107c426b8();
      *(char *)((long)puVar1 + (long)_DAT_112762aa8) = (char)uVar2;
      func_0x000107c61170(uVar4);
      func_0x000107c4b77c(puVar1);
    }
    else {
      func_0x000107c3b34c(puVar1);
    }
  }
  func_0x000107c61170(in_stack_00000018);
  func_0x000107c61170(in_stack_00000010);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008571a0; end: 1008571d7;  */

void FUN_1008571a0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1008571d8; end: 1008571db;  */

undefined8 FUN_1008571d8(void)

{
  undefined8 auStack_20 [2];
  
  FUN_1000d224c(auStack_20);
  return auStack_20[0];
}



/* Entry: 1008571dc; end: 1008571ff;  */

undefined8 FUN_1008571dc(void)

{
  undefined8 auStack_20 [2];
  
  FUN_1000d224c(auStack_20);
  return auStack_20[0];
}



/* Entry: 100857200; end: 100857217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100857200(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar8 = &lStack_60;
  lVar6 = 0;
  FUN_100857218();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112deec98) = 0;
  *(undefined8 *)(lVar7 + _DAT_112deeca0) = 0;
  *(undefined8 *)(lVar7 + _DAT_112deeca8) = 0;
  *(undefined8 *)(lVar7 + _DAT_112deecb0) = 0;
  *(undefined8 *)(lVar7 + _DAT_112deecb8) = 0;
  *(undefined8 *)(lVar7 + _DAT_112deecc0) = 0;
  *(undefined8 *)(lVar7 + _DAT_112deecc8) = 0;
  *(undefined8 *)(lVar7 + _DAT_112deecd0) = 0;
  *(undefined8 *)(lVar7 + _DAT_112deec78) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112deec80) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112deec88) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112deec90) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112deecd8) = uVar9;
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c615f4(uVar2,2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c6157c(uVar9);
  func_0x000107c61154(&lStack_60,puVar5);
  func_0x000107c61180();
  FUN_1008573d4();
  func_0x000107c61170(plVar8);
  func_0x000107c615e8(uVar2);
  *param_1 = plVar8;
  param_1[1] = &PTR_DAT_110430400;
  return;
}



/* Entry: 100857218; end: 100857237;  */

void FUN_100857218(void)

{
  func_0x000107c61168(&PTR_PTR_1127f1888);
  return;
}



/* Entry: 100857238; end: 1008573d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100857238(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  lVar2 = 0;
  FUN_100857218();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112deec98) = 0;
  *(undefined8 *)(lVar3 + _DAT_112deeca0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112deeca8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112deecb0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112deecb8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112deecc0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112deecc8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112deecd0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112deec78) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112deec80) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112deec88) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112deec90) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112deecd8) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c615f4(param_4,2);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c61154(&lStack_60,puVar1);
  func_0x000107c61180();
  FUN_1008573d4();
  func_0x000107c61170(plVar4);
  func_0x000107c615e8(param_4);
  *param_1 = plVar4;
  param_1[1] = &PTR_DAT_110430400;
  return;
}



/* Entry: 1008573d4; end: 10085773f;  */

/* WARNING: Possible PIC construction at 0x000100857460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008574d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100857540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008575a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100857600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100857660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008576c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100857664) */
/* WARNING: Removing unreachable block (ram,0x000100857604) */
/* WARNING: Removing unreachable block (ram,0x0001008575a4) */
/* WARNING: Removing unreachable block (ram,0x000100857544) */
/* WARNING: Removing unreachable block (ram,0x0001008574d4) */
/* WARNING: Removing unreachable block (ram,0x000100857464) */
/* WARNING: Removing unreachable block (ram,0x0001008576c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008573d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = &UNK_110430478;
  func_0x000107c613fc(&UNK_110430478,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  uVar3 = 0x112d382e8;
  FUN_1000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  puVar2 = &UNK_101a4fcec;
  FUN_1000bdd8c(&UNK_101a4fcec,puVar1,uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112deec98);
  *(undefined **)(unaff_x20 + _DAT_112deec98) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar3);
  return;
}



/* Entry: 100857740; end: 100857763;  */

void FUN_100857740(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100857764; end: 100857767;  */

void FUN_100857764(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100857768; end: 1008577ab;  */

void FUN_100857768(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008577ac; end: 1008577b7;  */

void FUN_1008577ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1008577b8; end: 10085783f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl enableEntryPointNextToCaptureButton] */

uint FUN_1008577b8(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 == 0) {
    func_0x000107c61174(param_1);
    uVar2 = 3;
    FUN_100858660(3,0xd00000000000003b,0x800000010efcabe0,0,param_1);
    func_0x000107c61170(param_1);
  }
  else {
    uVar2 = 1;
  }
  return uVar2 & 1;
}



/* Entry: 100857840; end: 100857a23; -[SCFeatureMemoriesSideButtonImpl _createSideButtonHandlerWithCircumstanceEngine:entryPointNextToCaptureEnabled:userContext:lensCarouselManager:lensCarouselOnCameraScopeDataProvider:] */

/* WARNING: Possible PIC construction at 0x000100857964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085797c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085798c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085799c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008579fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008579e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100857a00) */
/* WARNING: Removing unreachable block (ram,0x0001008579a0) */
/* WARNING: Removing unreachable block (ram,0x000100857990) */
/* WARNING: Removing unreachable block (ram,0x000100857980) */
/* WARNING: Removing unreachable block (ram,0x000100857968) */
/* WARNING: Removing unreachable block (ram,0x0001008579e4) */
/* WARNING: Removing unreachable block (ram,0x0001008579f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100857840(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar1 = PTR_PTR_1126d4180;
  puVar2 = PTR_PTR_1126d4178;
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c610f4(puVar1);
    func_0x000107c47748();
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c610f4();
    uVar3 = param_6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c4b2e0();
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c3d14c();
    func_0x000107c61180();
    func_0x000107c5c734(param_7);
    func_0x000107c61180();
    func_0x000107c4ae6c();
    func_0x000107c61180();
    func_0x000107c47744(puVar2,param_2,param_1,uVar3,param_6,param_7,param_3,
                        *(undefined8 *)(param_1 + _DAT_112762a98),
                        *(undefined8 *)(param_1 + _DAT_112762a9c),
                        *(undefined8 *)(param_1 + _DAT_112762aa0),param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100857a24; end: 100857abf;  */

void FUN_100857a24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126dd968;
  func_0x000107c610f4(PTR_PTR_1126dd968);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4aeb4(uVar2);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c51f40();
  func_0x000107c61180();
  func_0x000107c471e4(puVar1,param_2,uVar2,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100857ac0; end: 100857b07; -[SCLensCarouselManagerProxy initWithLensCarouselManager:performer:] */

void FUN_100857ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  FUN_100857b08(param_3,param_4);
  return;
}



/* Entry: 100857b08; end: 100857efb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100857b08(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113038298) = 0;
  lVar1 = _DAT_1130382a0;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_1130382a8;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_1130382b0;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_1130382b8;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_1130382c0;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_1130382c8;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_1130382d0;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_1130382d8;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_1130382e0;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_1130382e8) = param_2;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_2);
  puVar3 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar3,puVar2);
  puVar2 = &UNK_110729270;
  func_0x000107c613fc(&UNK_110729270,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,puVar3);
  uStack_80 = 0x100b6e1e0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x100b5ebe4;
  puStack_88 = &UNK_110729288;
  puStack_78 = puVar2;
  func_0x000107c60bc4(&puStack_a0);
  puVar2 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c5dc64(param_1);
  func_0x000107c60bd0(ppuVar4);
  uVar7 = *(undefined8 *)(puVar3 + _DAT_1130382a8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(uVar7);
  func_0x000107c45a48(puVar2);
  func_0x000107c4d664(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar2);
  uVar7 = *(undefined8 *)(puVar3 + _DAT_1130382b0);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(uVar7);
  func_0x000107c45a48(puVar2);
  func_0x000107c4d664(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar2);
  uVar7 = *(undefined8 *)(puVar3 + _DAT_1130382c0);
  puVar2 = PTR_PTR_1126ae750;
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c61174(uVar7);
  puVar5 = puVar2;
  func_0x000107c4d73c(puVar2);
  func_0x000107c61180();
  func_0x000107c4d664(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar5);
  uVar7 = *(undefined8 *)(puVar3 + _DAT_1130382c8);
  puVar5 = PTR_PTR_1126ae750;
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c61174(uVar7);
  puVar6 = puVar5;
  func_0x000107c4d73c(puVar5);
  func_0x000107c61180();
  func_0x000107c4d664(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar6);
  uVar7 = *(undefined8 *)(puVar3 + _DAT_1130382d8);
  func_0x000107c61174(uVar7);
  func_0x000107c4d73c(puVar2);
  func_0x000107c61180();
  func_0x000107c4d664(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar2);
  uVar7 = *(undefined8 *)(puVar3 + _DAT_1130382e0);
  func_0x000107c61174(uVar7);
  func_0x000107c4d73c(puVar5);
  func_0x000107c61180();
  func_0x000107c4d664(uVar7);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar5);
  return puVar3;
}



/* Entry: 100857efc; end: 100857f0f;  */

void FUN_100857efc(long param_1,long param_2)

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



/* Entry: 100857f10; end: 100857f1f; -[SCLensCarouselManagerProxy lensOrderObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100857f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130382d0));
  return;
}



/* Entry: 100857f20; end: 100857f37; -[SCLensCarouselManagerProxy activeLensObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100857f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130382c8));
  return;
}



/* Entry: 100857f38; end: 100857f6f;  */

void FUN_100857f38(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100857f70; end: 100857f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100857f70(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = &UNK_11065a110;
  func_0x000107c613fc(&UNK_11065a110,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  FUN_1000285a8(0x112f6ff30,&UNK_10dbcc6c0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  pcVar3 = FUN_100858110;
  FUN_1000bdd8c(FUN_100858110,puVar2);
  lVar4 = 0;
  FUN_100858034();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(code **)(lVar5 + _DAT_112f70620) = pcVar3;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100857f78; end: 100858033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100857f78(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  puVar1 = &UNK_11065a110;
  func_0x000107c613fc(&UNK_11065a110,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  FUN_1000285a8(0x112f6ff30,&UNK_10dbcc6c0);
  func_0x000107c613fc();
  func_0x000107c61174(param_1);
  pcVar2 = FUN_100858110;
  FUN_1000bdd8c(FUN_100858110,puVar1);
  lVar3 = 0;
  FUN_100858034();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(code **)(lVar4 + _DAT_112f70620) = pcVar2;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100858034; end: 100858053;  */

void FUN_100858034(void)

{
  func_0x000107c61168(&PTR_PTR_1128dcd08);
  return;
}



/* Entry: 100858054; end: 10085805b;  */

void FUN_100858054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10085805c; end: 10085807f;  */

void FUN_10085805c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100858080; end: 10085810f; -[_TtC25SCLensCarouselIntegration48LensCarouselOnCameraScopeDataProviderObjcAdapter lensCarouselDidScrollObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100858080(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61174();
  FUN_1000d224c(auStack_58);
  FUN_1000a8868(auStack_58,uStack_40);
  uVar1 = uStack_40;
  (**(code **)(lStack_38 + 0x10))(uStack_40,lStack_38);
  uVar2 = uVar1;
  FUN_1004575f0();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x0001000834e4(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100858110; end: 100858113;  */

void FUN_100858110(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = uVar2;
  func_0x000107c614f0();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_11065a7d8;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 100858114; end: 10085814f;  */

void FUN_100858114(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = uVar2;
  func_0x000107c614f0();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_11065a7d8;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 100858150; end: 100858167;  */

void FUN_100858150(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100858168; end: 100858607; -[SCMemoriesSideButtonInLeftCarouselHandler initWithMemoriesSideButtonDelegate:activeLensOrderObservable:activeLensObservable:lensCarouselDidScrollObservable:circumstanceEngine:memoriesExperimentService:memoriesUserDefaultsManager:imagineLensService:userContext:] */

undefined8 *
FUN_100858168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  puStack_80 = PTR_PTR_1126f83f8;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0(puVar1 + 4,param_3);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 8) = 1;
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c610f4();
    func_0x000107c49470();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    func_0x000107c61170(uVar2);
    puVar1[0x10] = param_11;
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = param_8;
    func_0x000107c4c280();
    func_0x000107c61180();
    uVar6 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    func_0x000107c61170(uVar6);
    uVar2 = param_8;
    func_0x000107c4c280();
    func_0x000107c61180();
    uVar6 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    func_0x000107c61170(uVar6);
    uVar2 = param_8;
    func_0x000107c4c280();
    func_0x000107c61180();
    uVar6 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    func_0x000107c61170(uVar6);
    puVar4 = auStack_90;
    func_0x000107c61144(puVar4,puVar1);
    FUN_100078e94();
    func_0x000107c61180();
    uVar2 = param_4;
    func_0x000107c4da8c(param_4);
    func_0x000107c61180();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_10701d570;
    puStack_a0 = &UNK_110842c58;
    func_0x000107c6111c(auStack_98,auStack_90);
    uVar6 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    uVar2 = param_8;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar6 = uVar2;
    func_0x000107c44e08();
    func_0x000107c61170(uVar2);
    if ((int)uVar6 != 0) {
      FUN_100078e94();
      func_0x000107c61180();
      uVar6 = param_5;
      func_0x000107c4da8c(param_5);
      func_0x000107c61180();
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      puStack_d0 = &UNK_10701d668;
      puStack_c8 = &UNK_11084eff0;
      func_0x000107c6111c(auStack_c0,auStack_90);
      uVar5 = uVar6;
      func_0x000107c5c320(uVar6);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar2);
      func_0x000107c61120(auStack_c0);
    }
    func_0x000107c6111c(auStack_e8,auStack_90);
    uVar2 = param_6;
    func_0x000107c5c320(param_6);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_e8);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
  }
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



/* Entry: 100858608; end: 10085865f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl hideEntryPointWhenLensActive] */

uint FUN_100858608(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  FUN_100858660(3,0xd000000000000029,0x800000010efcab90,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 100858660; end: 10085882b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100858660(byte param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_90 [8];
  long alStack_88 [3];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 < 2) {
    FUN_1000d224c(alStack_88);
    lVar5 = alStack_88[0];
joined_r0x000100858708:
    if (lVar5 == 0) goto LAB_100858808;
    func_0x000107c615f0(lVar5);
  }
  else {
    if (param_1 == 2) {
      lVar5 = *(long *)(param_5 + _DAT_112deec88);
      func_0x000107c615f0(lVar5);
      goto joined_r0x000100858708;
    }
    lVar5 = *(long *)(param_5 + _DAT_112deec90);
    func_0x000107c615f4(lVar5,2);
  }
  func_0x000107c5eea0(puVar4);
  func_0x000107c5fadc(param_2,param_3);
  lVar2 = lVar5;
  func_0x000107c3ebd4(lVar5);
  param_4 = (uint)lVar2;
  func_0x000107c61170(param_2);
  lVar2 = lVar5;
  FUN_10085883c(lVar5);
  FUN_1000d224c(alStack_88);
  plVar3 = alStack_88;
  FUN_1000a8868(plVar3,uStack_70);
  FUN_1008599bc(lVar2,0,puVar4,uStack_70,uStack_68,plVar3);
  func_0x000107c615ec(lVar5,2);
  (**(code **)(lVar6 + 8))(puVar4,lVar1);
  func_0x0001000834e4(alStack_88);
LAB_100858808:
  return param_4 & 1;
}



/* Entry: 10085882c; end: 10085883b; -[_TtC30MemoriesExperimentServicesImpl22AppStartConfigProvider boolValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085882c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dee900),
             PTR_s_boolValueForConfigKeySync_defaul_1125a56b8);
  return;
}



/* Entry: 10085883c; end: 10085891b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10085883c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  ulong uStack_38;
  
  if (*(ulong *)(unaff_x20 + _DAT_112deec88) == 0 ||
      param_1 != *(ulong *)(unaff_x20 + _DAT_112deec88)) {
    if (*(ulong *)(unaff_x20 + _DAT_112deec90) == param_1) {
      uVar2 = 3;
    }
    else {
      func_0x000104875e28(&uStack_38);
      uVar1 = uStack_38;
      if ((uStack_38 < 2) || (func_0x000101a4fa18(uStack_38), param_1 != uVar1)) {
        func_0x000104875e28(&uStack_38);
        if ((uStack_38 < 2) || (func_0x000101a4fa18(uStack_38), param_1 != uStack_38)) {
          uVar2 = 4;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



/* Entry: 10085891c; end: 100858927;  */

void FUN_10085891c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = &UNK_110430ae8;
  func_0x000107c613fc(&UNK_110430ae8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  FUN_1000285a8(0x112deee08,&UNK_10d9bbfd8);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  pcVar3 = FUN_100859c78;
  FUN_1000bdd8c(FUN_100859c78,puVar2);
  uVar1 = 0;
  FUN_1008589f0();
  func_0x000107c613fc();
  pcVar4 = pcVar3;
  FUN_100858b50();
  func_0x000107c61574(pcVar3);
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_1104300c0;
  *param_1 = pcVar4;
  return;
}



/* Entry: 100858928; end: 1008589ef;  */

void FUN_100858928(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  puVar1 = &UNK_110430ae8;
  func_0x000107c613fc(&UNK_110430ae8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  FUN_1000285a8(0x112deee08,&UNK_10d9bbfd8);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar2 = FUN_100859c78;
  FUN_1000bdd8c(FUN_100859c78,puVar1);
  uVar3 = 0;
  FUN_1008589f0();
  func_0x000107c613fc();
  pcVar4 = pcVar2;
  FUN_100858b50();
  func_0x000107c61574(pcVar2);
  param_1[3] = uVar3;
  param_1[4] = &PTR_DAT_1104300c0;
  *param_1 = pcVar4;
  return;
}



/* Entry: 1008589f0; end: 100858a27;  */

void FUN_1008589f0(undefined8 param_1)

{
  if (lRam0000000112dee9d0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6697c0);
  return;
}



/* Entry: 100858a28; end: 100858a8b;  */

void FUN_100858a28(long param_1,long *param_2,code *param_3)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = 0x112dee9e8;
    FUN_10002969c(0x112dee9e8,&UNK_10d9bbc10);
    (*param_3)();
    if (lVar1 == 0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Entry: 100858a8c; end: 100858b4f;  */

void FUN_100858a8c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBoWV_11034d678;
  puStack_48 = PTR___sBoWV_11034d678 + 0x40;
  puStack_40 = PTR___sBOWV_11034d658 + 0x40;
  uVar3 = 0x112dee9e0;
  lVar2 = 0x13f;
  FUN_100858a28(0x13f,0x112dee9e0,PTR___sScSMa_11034fda0);
  if (uVar3 < 0x40) {
    lStack_38 = *(long *)(lVar2 + -8) + 0x40;
    uVar3 = 0x112dee9f0;
    lVar2 = 0x13f;
    FUN_100858a28(0x13f,0x112dee9f0,PTR___sScS12ContinuationVMa_11034fd50);
    if (uVar3 < 0x40) {
      lStack_30 = *(long *)(lVar2 + -8) + 0x40;
      puStack_28 = puVar1 + 0x40;
      func_0x000107c61630(param_1,0x100,5,&puStack_48,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 100858b50; end: 100858e47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100858b50(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long alStack_90 [2];
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar4 = 0x112deeaa0;
  uStack_78 = param_1;
  FUN_1000285a8(0x112deeaa0,&UNK_10d9bbc38);
  lVar15 = *(long *)(lVar4 + -8);
  lVar9 = *(long *)(lVar15 + 0x40);
  lStack_70 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar9 + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&lStack_80 - extraout_x8;
  lVar4 = 0x112deea98;
  FUN_1000285a8(0x112deea98,&UNK_10d9bbc30);
  lStack_80 = *(long *)(lVar4 + -8);
  lStack_68 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_80 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar12 = lVar11 - extraout_x8_00;
  lVar4 = 0x112deeaa8;
  FUN_1000285a8(0x112deeaa8,&UNK_10d9bbc40);
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar12 - extraout_x8_01;
  (**(code **)(lVar10 + 0x68))
            (lVar14,*(undefined4 *)
                     PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             lVar4);
  iVar3 = 2;
  FUN_100029b9c(2,0x11,0,0);
  if (iVar3 == 0) {
    func_0x000101a4cdd4(lVar11,lVar12,lVar14);
  }
  else {
    uVar6 = 0x112dee9e8;
    FUN_1000285a8(0x112dee9e8,&UNK_10d9bbc10);
    func_0x000107c5fd10(lVar11,lVar12,uVar6,lVar14,uVar6);
  }
  lVar2 = _DAT_112dee998;
  lVar1 = _DAT_112dee990;
  (**(code **)(lVar10 + 8))(lVar14,lVar4);
  lVar4 = lStack_70;
  pcVar13 = *(code **)(lVar15 + 0x20);
  (*pcVar13)(unaff_x20 + lVar1,lVar11,lStack_70);
  lVar10 = lStack_68;
  (**(code **)(lStack_80 + 0x20))(unaff_x20 + lVar2,lVar12,lStack_68);
  uVar6 = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_78;
  puVar5 = PTR_PTR_1126a8580;
  func_0x000107c610f8();
  func_0x000107c6157c(uVar6);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar14 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar15 + 0x10))(lVar11,unaff_x20 + lVar1,lVar4);
  uVar7 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar8 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  puVar5 = &UNK_110430188;
  func_0x000107c613fc(&UNK_110430188,uVar8 + lVar9,uVar7 | 7);
  (*pcVar13)(puVar5 + uVar8,lVar11,lVar4);
  *(undefined **)(lVar14 + -0x10) = PTR___sytN_11034f1b0 + 8;
  uVar6 = 0xa2;
  func_0x000100859150(0xa2,0,0x48,0,0,0,&UNK_10d9bbc50,puVar5);
  func_0x000107c61574(puVar5);
  *(undefined8 *)(unaff_x20 + _DAT_112dee9a0) = uVar6;
  func_0x000107c6157c(uVar6);
  func_0x000107c5fd1c(&UNK_101a4d110,uVar6,lVar10);
  return;
}



/* Entry: 100858e48; end: 100858eab;  */

void FUN_100858e48(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0x112deeaa0;
  FUN_1000285a8(0x112deeaa0,&UNK_10d9bbc38);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100858eac; end: 100858f1f; -[SCGrapheneMemoriesCofMetric2 init] */

undefined1 * FUN_100858eac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e97a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100858f20; end: 100859113;  */

undefined8
FUN_100858f20(undefined8 param_1,long param_2,ulong param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  lVar3 = param_8;
  if (param_8 == 0) {
    param_7 = param_1;
    lVar3 = param_2;
    FUN_10007c170(param_1,param_2,param_3);
  }
  uVar1 = param_1;
  lVar4 = param_2;
  FUN_1008595fc(param_1,param_2,param_3,param_7,lVar3,param_9,param_10,param_11,param_5);
  func_0x000107c61434(param_8);
  func_0x000107c6142c(lVar3);
  uVar2 = param_1;
  lVar3 = param_2;
  FUN_1008596b8(param_1,param_2,param_3,param_4,uVar1,lVar4,param_11);
  if (lRam0000000113097070 != -1) {
    func_0x000107c61568(0x113097070,FUN_1000ab9ec);
  }
  uStack_88 = param_3 & 0xff | (param_4 & 0xff) << 8;
  uStack_c0 = param_11;
  uStack_b8 = (undefined1)param_4;
  uStack_b0 = uVar2;
  lStack_a8 = lVar3;
  uStack_98 = param_1;
  lStack_90 = param_2;
  uStack_80 = param_5;
  uStack_78 = param_6;
  FUN_1000ab9d4(param_1,param_2,param_3);
  func_0x000107c61434(param_6);
  uVar1 = 0x112d393f0;
  FUN_10002969c(0x112d393f0,&UNK_10d903bb0);
  uVar2 = 0;
  func_0x000107c5fd54(0,param_11,uVar1,PTR___ss5ErrorWS_11034ee10);
  func_0x000107c60710(auStack_70,&uStack_98,param_12,auStack_d0,0xd00000000000001e,
                      0x800000010f213050,param_13,uVar2);
  func_0x000107c61574(lVar3);
  func_0x000107c61574(lVar4);
  FUN_10007d980(param_1,param_2,param_3);
  func_0x000107c6142c(param_6);
  return auStack_70[0];
}



/* Entry: 100859114; end: 10085919f;  */

void FUN_100859114(void)

{
  FUN_100858f20();
  return;
}



/* Entry: 1008591a0; end: 1008595fb;  */

undefined1  [16] FUN_1008591a0(uint param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  char *pcVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  uVar1 = param_1 & 0xff;
  uVar3 = param_1 >> 5 & 7;
  if (2 < uVar3) {
    if (uVar3 < 5) {
      if (uVar3 == 3) {
        pcVar10 = "riesPresentationDataSource";
        uVar11 = 0xd000000000000012;
        if (uVar1 != 0x62) {
          pcVar10 = "MemoriesS2RLogging";
          uVar11 = 0xd00000000000002a;
        }
        uVar2 = 0xee0070756b636142;
        uVar8 = 0x736569726f6d654d;
        if (uVar1 != 0x60) {
          uVar2 = 0x800000010f2173d0;
          uVar8 = 0xd000000000000016;
        }
        uVar9 = (ulong)pcVar10 | 0x8000000000000000;
        if (uVar1 < 0x62) {
          uVar11 = uVar8;
          uVar9 = uVar2;
        }
      }
      else {
        pcVar10 = "MemoriesRecentThumbnailProvider";
        uVar11 = 0xd00000000000001d;
        if (uVar1 != 0x82) {
          pcVar10 = "nsitionCoordinator";
          uVar11 = 0xd00000000000001f;
        }
        uVar2 = 0x800000010f217360;
        uVar8 = 0xd000000000000012;
        if (uVar1 != 0x80) {
          uVar2 = 0xec00000065766153;
          uVar8 = 0x736569726f6d654d;
        }
        uVar9 = (ulong)pcVar10 | 0x8000000000000000;
        if (uVar1 < 0x82) {
          uVar11 = uVar8;
          uVar9 = uVar2;
        }
      }
    }
    else if (uVar3 == 5) {
      pcVar10 = "MemoriesClientGenManager";
      uVar11 = 0xd000000000000021;
      if (uVar1 != 0xa2) {
        pcVar10 = "ntLoggingProvider";
        uVar11 = 0xd000000000000018;
      }
      uVar8 = 0xd000000000000022;
      pcVar4 = "MemoriesHighlightDataSourceSetup";
      if (uVar1 != 0xa0) {
        uVar8 = 0xd000000000000020;
        pcVar4 = "MemoriesExperimentServiceProvider";
      }
      if (uVar1 < 0xa2) {
        pcVar10 = pcVar4 + 0x10;
        uVar11 = uVar8;
      }
      uVar9 = (ulong)pcVar10 | 0x8000000000000000;
    }
    else {
      uVar11 = 0xd000000000000021;
      uVar9 = 0x800000010f217240;
      if (uVar1 != 0xc0) {
        uVar11 = 0x736569726f6d654d;
        uVar9 = 0xee006f77546d654d;
      }
    }
    goto LAB_1008595e8;
  }
  if (uVar3 == 0) {
    lVar6 = 0x112d38280;
    FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar6 + 0x18) = 4;
    *(undefined8 *)(lVar6 + 0x10) = 2;
    *(undefined8 *)(lVar6 + 0x20) = 0xd000000000000012;
    *(undefined8 *)(lVar6 + 0x28) = 0x800000010f217470;
    if (uVar1 == 0) {
      pcVar10 = "doubleEncryptionResolver";
LAB_100859558:
      pcVar10 = pcVar10 + -0x20;
      uVar11 = 0xd000000000000018;
    }
    else if (uVar1 == 1) {
      pcVar10 = "encryptionInfoProvider";
      uVar11 = 0xd000000000000017;
    }
    else {
      pcVar10 = "MemoriesEncryption";
      uVar11 = 0xd000000000000016;
    }
LAB_100859588:
    *(undefined8 *)(lVar6 + 0x30) = uVar11;
    *(ulong *)(lVar6 + 0x38) = (ulong)pcVar10 | 0x8000000000000000;
  }
  else {
    if (uVar3 == 1) {
      lVar6 = 0x112d38280;
      FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar6 + 0x18) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 2;
      *(undefined8 *)(lVar6 + 0x20) = 0xd000000000000013;
      *(undefined8 *)(lVar6 + 0x28) = 0x800000010f2173f0;
      if ((param_1 & 0x1f) == 0) {
        pcVar10 = "opportunisticRetranscode";
        goto LAB_100859558;
      }
      if ((param_1 & 0x1f) == 1) {
        pcVar10 = "snapDocTranscodeForExport";
        uVar11 = 0xd000000000000010;
      }
      else {
        pcVar10 = "MemoriesTranscoding";
        uVar11 = 0xd000000000000019;
      }
      goto LAB_100859588;
    }
    lVar6 = 0x112d38280;
    FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar6 + 0x18) = 4;
    *(undefined8 *)(lVar6 + 0x10) = 2;
    *(undefined8 *)(lVar6 + 0x20) = 0x736569726f6d654d;
    *(undefined8 *)(lVar6 + 0x28) = 0xea00000000004955;
    bVar5 = (param_1 & 0x1f) != 1;
    uVar11 = 0x7475436b63697571;
    if (bVar5) {
      uVar11 = 0x6c6172656e6567;
    }
    uVar8 = 0xe800000000000000;
    if (bVar5) {
      uVar8 = 0xe700000000000000;
    }
    *(undefined8 *)(lVar6 + 0x30) = uVar11;
    *(undefined8 *)(lVar6 + 0x38) = uVar8;
  }
  uVar7 = 0x112d38270;
  FUN_1000285a8(0x112d38270,&UNK_10d905a20);
  uVar8 = uVar7;
  FUN_10011d734();
  uVar11 = 0x23;
  uVar9 = 0xe100000000000000;
  func_0x000107c5fa80(0x23,0xe100000000000000,uVar7,uVar8);
  func_0x000107c61574(lVar6);
LAB_1008595e8:
  auVar12._8_8_ = uVar9;
  auVar12._0_8_ = uVar11;
  return auVar12;
}



/* Entry: 1008595fc; end: 1008596af;  */

undefined1  [16]
FUN_1008595fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_1107acb18;
  func_0x000107c613fc(&UNK_1107acb18,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  puVar1[0x28] = (char)param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  FUN_1000ab9d4(param_1,param_2,param_3);
  func_0x000107c61434(param_5);
  func_0x000107c6157c(param_7);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = &UNK_10dd3d008;
  return auVar2;
}



/* Entry: 1008596b0; end: 1008596b7;  */

void FUN_1008596b0(void)

{
  long unaff_x20;
  
  FUN_10007d980(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined1 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008596b8; end: 100859757;  */

undefined1  [16]
FUN_1008596b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_1107acaf0;
  func_0x000107c613fc(&UNK_1107acaf0,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  puVar1[0x28] = (char)param_3;
  puVar1[0x29] = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  FUN_1000ab9d4(param_1,param_2,param_3);
  func_0x000107c6157c(param_6);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = &UNK_10dd3cff8;
  return auVar2;
}



/* Entry: 100859758; end: 10085975f;  */

void FUN_100859758(void)

{
  long unaff_x20;
  
  FUN_10007d980(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined1 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100859760; end: 100859797;  */

void FUN_100859760(void)

{
  long unaff_x20;
  
  FUN_1001ca6c8(*(undefined1 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),&UNK_1107acbb8,
                &UNK_10dd3d038,FUN_10085979c);
  return;
}



/* Entry: 100859798; end: 10085979b;  */

void FUN_100859798(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10085979c; end: 100859993;  */

ulong FUN_10085979c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                   undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  lVar1 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_a0 + -extraout_x8;
  uStack_70 = param_4;
  uStack_68 = param_5;
  FUN_1000abe04(param_3,puVar4);
  lVar1 = 0;
  func_0x000107c5fd0c();
  lVar7 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar7 + 0x30))(puVar4,1,lVar1);
  uVar6 = param_5;
  func_0x000107c6157c(param_5);
  if ((int)puVar2 == 1) {
    func_0x0001000abe54(puVar4);
    uVar6 = 0x1c00;
  }
  else {
    func_0x000107c5fd08();
    (**(code **)(lVar7 + 8))(puVar4,lVar1);
    uVar6 = uVar6 & 0xff | 0x1c00;
  }
  lVar1 = *(long *)(param_5 + 0x10);
  lVar7 = *(long *)(param_5 + 0x18);
  func_0x000107c615f0(lVar1);
  func_0x000107c61574(param_5);
  if (lVar1 == 0) {
    lVar5 = 0;
    lVar7 = 0;
  }
  else {
    lVar5 = lVar1;
    func_0x000107c614f0();
    func_0x000107c5fca8();
    func_0x000107c615e8(lVar1);
  }
  if (param_2 == 0) {
    func_0x0001000abe54(param_3);
    if (lVar7 == 0 && lVar5 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      uStack_90 = 0;
      uStack_88 = 0;
      puVar3 = &uStack_90;
      lStack_80 = lVar5;
      lStack_78 = lVar7;
    }
    func_0x000107c615bc(uVar6,puVar3,param_6,param_4,param_5);
  }
  else {
    func_0x000107c5fb28(param_1,param_2);
    func_0x000107c6142c(param_2);
    func_0x0001014c27a0(&uStack_98,param_1 + 0x20,*(undefined8 *)(param_1 + 0x10),uVar6,lVar5,lVar7,
                        &uStack_70,param_6);
    func_0x000107c61574(param_1);
    func_0x0001000abe54(param_3);
    func_0x000107c61574(param_5);
    uVar6 = uStack_98;
  }
  return uVar6;
}



/* Entry: 100859994; end: 100859997;  */

void FUN_100859994(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100859998; end: 1008599bb;  */

void FUN_100859998(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008599bc; end: 100859c0f;  */

void FUN_1008599bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee68(param_4);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  (**(code **)(param_6 + 0x10))(param_1,param_2,param_3,param_5,param_6);
  return;
}



/* Entry: 100859c10; end: 100859c57;  */

void FUN_100859c10(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100859c58; end: 100859c77;  */

void FUN_100859c58(void)

{
  func_0x000100859a98();
  return;
}



/* Entry: 100859c78; end: 100859c7f;  */

void FUN_100859c78(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4cb6c();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_100859ce0();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110430320;
  *param_1 = lVar3;
  return;
}



/* Entry: 100859c80; end: 100859cdf;  */

void FUN_100859c80(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c4cb6c();
  func_0x000107c61180();
  lVar1 = 0;
  FUN_100859ce0();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110430320;
  *param_1 = lVar2;
  return;
}



/* Entry: 100859ce0; end: 100859cff;  */

void FUN_100859ce0(void)

{
  func_0x000107c61168(&PTR_PTR_112deec10);
  return;
}



/* Entry: 100859d00; end: 100859d03;  */

void FUN_100859d00(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100859d04; end: 100859d7f;  */

undefined8 FUN_100859d04(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  func_0x000107c4a02c();
  if (((ulong)puVar1 & 1) == 0) {
    uVar4 = *(ulong *)(unaff_x20 + 0x10);
    uVar3 = uVar4;
    func_0x000107c49bc8();
    if ((int)uVar3 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (uVar4 != 0) {
        uVar3 = uVar4;
        func_0x000107c49f34();
        func_0x000107c61170(uVar4);
        if ((uVar3 & 1) != 0) {
          return 1;
        }
      }
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 100859d80; end: 100859e13;  */

void FUN_100859d80(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  piVar4 = *(int **)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)&UNK_104891320;
  iVar1 = *piVar4;
  plVar6 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8(plVar6,(code *)((long)iVar1 + (long)piVar4),uVar3,piVar4,uVar7,uVar2);
  plVar5[2] = (long)plVar6;
  *plVar6 = (long)plVar5;
  plVar6[1] = (long)&UNK_104891300;
                    /* WARNING: Could not recover jumptable at 0x000100859e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(plVar6,param_1);
  return;
}



/* Entry: 100859e14; end: 100859e77;  */

void FUN_100859e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)&UNK_104891300;
                    /* WARNING: Could not recover jumptable at 0x000100859e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar2,param_1);
  return;
}



/* Entry: 100859e78; end: 100859f0f;  */

void FUN_100859e78(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  long unaff_x22;
  long lVar8;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  lVar2 = *(long *)(unaff_x20 + 0x38);
  plVar5 = (long *)0x80;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x29);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)&UNK_104891314;
  plVar5[8] = lVar6;
  plVar5[9] = lVar2;
  *(undefined1 *)((long)plVar5 + 0x71) = uVar3;
  *(undefined1 *)(plVar5 + 0xe) = uVar4;
  plVar5[6] = lVar1;
  plVar5[7] = lVar8;
  plVar5[5] = param_1;
  lVar6 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[10] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100859f84,0,0);
  return;
}



/* Entry: 100859f10; end: 100859f83;  */

void FUN_100859f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_7;
  *(undefined1 *)(unaff_x22 + 0x71) = param_5;
  *(undefined1 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  lVar1 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100859f84,0,0);
  return;
}



/* Entry: 100859f84; end: 10085a0cb;  */

void FUN_100859f84(long *param_1)

{
  long lVar1;
  byte bVar2;
  undefined1 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  bVar2 = *(byte *)(unaff_x22 + 0x71);
  func_0x0001000aca5c();
  func_0x000107c61428();
  param_1 = (long *)*param_1;
  *(long **)(unaff_x22 + 0x58) = param_1;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      func_0x000107c6157c(param_1);
      func_0x000107c5fcf8(uVar7);
    }
    else {
      func_0x000107c6157c(param_1);
      func_0x000107c5fd04(uVar7,0x15);
    }
  }
  else if (bVar2 == 2) {
    func_0x000107c6157c(param_1);
    func_0x000107c5fcfc(uVar7);
  }
  else {
    if (bVar2 != 3) {
      lVar5 = 0;
      func_0x000107c5fd0c();
      (**(code **)(*(long *)(lVar5 + -8) + 0x38))(uVar7,1,1,lVar5);
      func_0x000107c6157c(param_1);
      goto FUN_1000acca0;
    }
    func_0x000107c6157c(param_1);
    func_0x000107c5fcf4(uVar7);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar5 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(uVar7,0,1,lVar5);
FUN_1000acca0:
  plVar6 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)&UNK_104890284;
  lVar5 = *(long *)(unaff_x22 + 0x30);
  lVar1 = *(long *)(unaff_x22 + 0x38);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x70);
  plVar6[0xc] = *(long *)(unaff_x22 + 0x50);
  plVar6[0xd] = (long)param_1;
  *(undefined1 *)(plVar6 + 0x10) = uVar3;
  plVar6[10] = lVar5;
  plVar6[0xb] = lVar1;
  plVar4 = (long *)0x130;
  func_0x000107c615b8();
  plVar6[0xe] = (long)plVar4;
  *plVar4 = (long)plVar6;
  plVar4[1] = (long)FUN_1000afc54;
  plVar4[0x1c] = lVar1;
  plVar4[0x1d] = (long)param_1;
  *(undefined1 *)((long)plVar4 + 0x129) = uVar3;
  plVar4[0x1b] = lVar5;
  plVar4[0x1e] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000acd38,0,0);
  return;
}



/* Entry: 10085a0cc; end: 10085a123; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl enableThumbnailProvider] */

uint FUN_10085a0cc(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  FUN_100858660(3,0xd000000000000022,0x800000010efcac20,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 10085a124; end: 10085a22f; -[SCFeatureMemoriesSideButtonImpl loadThumbnailProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085a124(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + _DAT_112762aa8) == '\x01') {
    func_0x000107c61144(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112762a90);
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_40,auStack_38);
    uVar2 = uVar1;
    func_0x000107c3d7b4();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112762ab0);
    *(undefined8 *)(param_1 + _DAT_112762ab0) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  return;
}


