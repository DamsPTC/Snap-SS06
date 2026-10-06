/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b5dddc; end: 100b5dec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5dddc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f288();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b5df20();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112ededd0);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ee13f8);
      *(long *)(unaff_x20 + _DAT_112ee13f8) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100b5dec4; end: 100b5decf; -[SCSCImagineLensServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5dec4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee13e8;
  func_0x000107c61428(param_1 + _DAT_112ee13e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b5ded0; end: 100b5df13;  */

void FUN_100b5ded0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b5df14; end: 100b5df1f; -[SCSCImagineLensServicesSaberServiceProvider cameraUIScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5df14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee13f0;
  func_0x000107c61428(param_1 + _DAT_112ee13f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b5df20; end: 100b5df9b;  */

void FUN_100b5df20(undefined8 param_1)

{
  if (lRam0000000112eddd50 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e70af64);
  return;
}



/* Entry: 100b5df9c; end: 100b5e00f; -[SCOpaqueCameraUIScopedLensCarouselServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5df9c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ee0068,0);
  func_0x000107c61614(param_1 + _DAT_112ee0070,0);
  *(undefined8 *)(param_1 + _DAT_112ee0078) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b5e010; end: 100b5e0bb; -[SCOpaqueCameraUIScopedLensCarouselServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b5e010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100b5e0bc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b5e0bc; end: 100b5e253;  */

void FUN_100b5e0bc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef0f1ea20)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000020,0x800000010f0e15e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CameraUIScopeGraphBridge/SCOpaqueCameraUIScopedLensCarouselServicesSaberServiceProvider.swift"
                            ,0x5d,2,0x100,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b5e254);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c530f0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b5e254; end: 100b5e25f; -[SCOpaqueCameraUIScopedLensCarouselServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5e254(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee0068;
  func_0x000107c61428(param_1 + _DAT_112ee0068,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b5e260; end: 100b5e2b3;  */

void FUN_100b5e260(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b5e2b4; end: 100b5e2bf; -[SCOpaqueCameraUIScopedLensCarouselServicesSaberServiceProvider setCameraUIScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5e2b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee0070;
  func_0x000107c61428(param_1 + _DAT_112ee0070,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b5e2c0; end: 100b5e2f3; -[SCOpaqueCameraUIScopedLensCarouselServicesSaberServiceProvider __safeProvide] */

void FUN_100b5e2c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b5e2f4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b5e2f4; end: 100b5e3db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5e2f4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f288();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b5e438();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112edec90);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ee0078);
      *(long *)(unaff_x20 + _DAT_112ee0078) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100b5e3dc; end: 100b5e3e7; -[SCOpaqueCameraUIScopedLensCarouselServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5e3dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee0068;
  func_0x000107c61428(param_1 + _DAT_112ee0068,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b5e3e8; end: 100b5e42b;  */

void FUN_100b5e3e8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b5e42c; end: 100b5e437; -[SCOpaqueCameraUIScopedLensCarouselServicesSaberServiceProvider cameraUIScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5e42c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee0070;
  func_0x000107c61428(param_1 + _DAT_112ee0070,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b5e438; end: 100b5e4b3;  */

void FUN_100b5e438(undefined8 param_1)

{
  if (lRam0000000112edc830 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e70a53c);
  return;
}



/* Entry: 100b5e4b4; end: 100b5e4bf;  */

void FUN_100b5e4b4(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = 0x112f5cad0;
  FUN_1000285a8(0x112f5cad0,&UNK_10dbb5f60);
  func_0x000107c61534();
  *(undefined8 *)(lVar5 + 0x18) = 8;
  *(undefined8 *)(lVar5 + 0x10) = 4;
  uVar8 = 0x112f845d0;
  FUN_1000285a8(0x112f845d0,&UNK_10dbf8880);
  *(undefined8 *)(lVar5 + 0x20) = uVar8;
  func_0x000107c6157c(uVar1);
  puVar6 = &UNK_103692860;
  FUN_1000823a8(&UNK_103692860,uVar1);
  *(undefined8 *)(lVar5 + 0x40) = uVar8;
  *(undefined **)(lVar5 + 0x28) = puVar6;
  uVar8 = 0x112f5cd08;
  FUN_1000285a8(0x112f5cd08,&UNK_10dbf89f0);
  *(undefined8 *)(lVar5 + 0x48) = uVar8;
  func_0x000107c6157c(uVar3);
  puVar6 = &UNK_103692880;
  FUN_1000823a8(&UNK_103692880,uVar3);
  *(undefined8 *)(lVar5 + 0x68) = uVar8;
  *(undefined **)(lVar5 + 0x50) = puVar6;
  uVar8 = 0x112f845d8;
  FUN_1000285a8(0x112f845d8,&UNK_10dbf8888);
  *(undefined8 *)(lVar5 + 0x70) = uVar8;
  func_0x000107c6157c(uVar2);
  puVar6 = &UNK_1036928a0;
  FUN_1000823a8(&UNK_1036928a0,uVar2);
  *(undefined8 *)(lVar5 + 0x90) = uVar8;
  *(undefined **)(lVar5 + 0x78) = puVar6;
  uVar8 = 0x112f845e0;
  FUN_1000285a8(0x112f845e0,&UNK_10dbf8890);
  *(undefined8 *)(lVar5 + 0x98) = uVar8;
  func_0x000107c6157c(uVar4);
  puVar6 = &UNK_1036928c0;
  FUN_1000823a8(&UNK_1036928c0,uVar4);
  *(undefined8 *)(lVar5 + 0xb8) = uVar8;
  *(undefined **)(lVar5 + 0xa0) = puVar6;
  lVar7 = lVar5;
  FUN_1006c82b4();
  func_0x000107c61588(lVar5);
  uVar8 = 0x112f36640;
  FUN_1000285a8(0x112f36640,&UNK_10dbb6990);
  func_0x000107c61408((undefined8 *)(lVar5 + 0x20),4,uVar8);
  uVar8 = 0;
  FUN_1005c7c98(0);
  func_0x000107c610f8();
  FUN_100b5e6f0(lVar7,uVar8);
  *param_1 = lVar7;
  return;
}



/* Entry: 100b5e4c0; end: 100b5e68f;  */

void FUN_100b5e4c0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = 0x112f5cad0;
  FUN_1000285a8(0x112f5cad0,&UNK_10dbb5f60);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 8;
  *(undefined8 *)(lVar1 + 0x10) = 4;
  uVar4 = 0x112f845d0;
  FUN_1000285a8(0x112f845d0,&UNK_10dbf8880);
  *(undefined8 *)(lVar1 + 0x20) = uVar4;
  func_0x000107c6157c(param_2);
  puVar2 = &UNK_103692860;
  FUN_1000823a8(&UNK_103692860,param_2);
  *(undefined8 *)(lVar1 + 0x40) = uVar4;
  *(undefined **)(lVar1 + 0x28) = puVar2;
  uVar4 = 0x112f5cd08;
  FUN_1000285a8(0x112f5cd08,&UNK_10dbf89f0);
  *(undefined8 *)(lVar1 + 0x48) = uVar4;
  func_0x000107c6157c(param_3);
  puVar2 = &UNK_103692880;
  FUN_1000823a8(&UNK_103692880,param_3);
  *(undefined8 *)(lVar1 + 0x68) = uVar4;
  *(undefined **)(lVar1 + 0x50) = puVar2;
  uVar4 = 0x112f845d8;
  FUN_1000285a8(0x112f845d8,&UNK_10dbf8888);
  *(undefined8 *)(lVar1 + 0x70) = uVar4;
  func_0x000107c6157c(param_4);
  puVar2 = &UNK_1036928a0;
  FUN_1000823a8(&UNK_1036928a0,param_4);
  *(undefined8 *)(lVar1 + 0x90) = uVar4;
  *(undefined **)(lVar1 + 0x78) = puVar2;
  uVar4 = 0x112f845e0;
  FUN_1000285a8(0x112f845e0,&UNK_10dbf8890);
  *(undefined8 *)(lVar1 + 0x98) = uVar4;
  func_0x000107c6157c(param_5);
  puVar2 = &UNK_1036928c0;
  FUN_1000823a8(&UNK_1036928c0,param_5);
  *(undefined8 *)(lVar1 + 0xb8) = uVar4;
  *(undefined **)(lVar1 + 0xa0) = puVar2;
  lVar3 = lVar1;
  FUN_1006c82b4();
  func_0x000107c61588(lVar1);
  uVar4 = 0x112f36640;
  FUN_1000285a8(0x112f36640,&UNK_10dbb6990);
  func_0x000107c61408((undefined8 *)(lVar1 + 0x20),4,uVar4);
  uVar4 = 0;
  FUN_1005c7c98(0);
  func_0x000107c610f8();
  FUN_100b5e6f0(lVar3,uVar4);
  *param_1 = lVar3;
  return;
}



/* Entry: 100b5e690; end: 100b5e6ef;  */

void FUN_100b5e690(void)

{
  func_0x000107c61168(&PTR_PTR_1129716e8);
  return;
}



/* Entry: 100b5e6f0; end: 100b5e6f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5e6f0(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_113082208) = param_1;
  FUN_100b5e6f8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b5e6f8; end: 100b5e75b;  */

void FUN_100b5e6f8(void)

{
  func_0x000107c61168(&PTR_PTR_1129c79e8);
  return;
}



/* Entry: 100b5e75c; end: 100b5e75f;  */

void FUN_100b5e75c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b5e760; end: 100b5e79b;  */

void FUN_100b5e760(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b5e79c; end: 100b5ea17; -[SCLensInMainCameraScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5e79c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61174();
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126d1210;
  func_0x000107c610f4(PTR_PTR_1126d1210);
  func_0x000107c471d4();
  lVar4 = param_1;
  FUN_100b5ea8c(param_1);
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c4b064();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c55c58();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  puVar7 = PTR_PTR_1126dd9c8;
  func_0x000107c610f4(PTR_PTR_1126dd9c8);
  func_0x000107c471d0();
  if (param_1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + _DAT_112782788);
  }
  func_0x000107c61174(uVar8);
  func_0x000107c42c20(uVar8);
  func_0x000107c61170(uVar8);
  lVar4 = param_1;
  FUN_100b5eba0(param_1);
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c4c170();
  func_0x000107c61180();
  func_0x000107c5d4e8();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  param_1 = param_1 + _DAT_11278273c;
  func_0x000107c61148(param_1);
  lVar4 = param_1;
  func_0x000107c3f6a8();
  func_0x000107c61180();
  func_0x000107c5a8a8();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 100b5ea18; end: 100b5ea8b; -[SCLensCarouselManagementServices initWithLensCarouselManager:] */

undefined1 * FUN_100b5ea18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270a4d8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b5ea8c; end: 100b5eaaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5ea8c(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112782750);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b5eab0; end: 100b5eab7; -[SCMainCameraScopedLensCarouselScopeServices lensDelegate] */

undefined8 FUN_100b5eab0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b5eab8; end: 100b5eb1f;  */

void FUN_100b5eab8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4b14c();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4b064();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100b5eb20; end: 100b5eb2b; -[SCCameraViewControllerLensDelegateHandler setLensCarouselManager:] */

void FUN_100b5eb20(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 200,param_3);
  return;
}



/* Entry: 100b5eb2c; end: 100b5eb9f; -[SCMainCameraScopedLensCarouselManagementServices initWithLensCarouselManagementServices:] */

undefined1 * FUN_100b5eb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270a500;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b5eba0; end: 100b5ebc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5eba0(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112782758);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b5ebc4; end: 100b5ebcb; -[SCScanLensesStreamServices mainLensCarouselManagerUpdater] */

undefined8 FUN_100b5ebc4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b5ebcc; end: 100b5ebd3; -[SCLensCarouselManagerStream updateLensCarouselManager:] */

void FUN_100b5ebcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_next__112614028);
  return;
}



/* Entry: 100b5ebd4; end: 100b5ebdb; -[SCLensCarouselFeatureInternalServices carouselManagerResolver] */

undefined8 FUN_100b5ebd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b5ebdc; end: 100b5ebeb; -[SCLensCarouselManagerResolver setupLensCarouselManager:] */

void FUN_100b5ebdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_completeWithValue__1125ae900);
  return;
}



/* Entry: 100b5ebec; end: 100b5ec63;  */

/* WARNING: Possible PIC construction at 0x000100b5ec48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b5ec4c) */

void FUN_100b5ebec(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100b5ec64; end: 100b5ec6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5ec64(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar2 = param_1;
        func_0x000107c3d1a0();
        func_0x000107c61180();
        puVar3 = &UNK_11067b1b8;
        func_0x000107c613fc(&UNK_11067b1b8,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,lVar1);
        pcStack_68 = FUN_100b5fdf8;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        pcStack_78 = FUN_100b5fdac;
        puStack_70 = &UNK_11067b1f8;
        ppuVar4 = &puStack_88;
        puStack_60 = puVar3;
        func_0x000107c60bc4(ppuVar4);
        func_0x000107c61574(puStack_60);
        lVar5 = lVar2;
        func_0x000107c5c320(lVar2);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(lVar2);
        func_0x000107c3e924(lVar5);
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(param_1);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100b5ec70; end: 100b5edc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5ec70(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_1 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar1 = param_1;
        func_0x000107c3d1a0();
        func_0x000107c61180();
        puVar2 = &UNK_11067b1b8;
        func_0x000107c613fc(&UNK_11067b1b8,0x18,7);
        func_0x000107c61614(puVar2 + 0x10,param_3);
        pcStack_68 = FUN_100b5fdf8;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        pcStack_78 = FUN_100b5fdac;
        puStack_70 = &UNK_11067b1f8;
        ppuVar3 = &puStack_88;
        puStack_60 = puVar2;
        func_0x000107c60bc4(ppuVar3);
        func_0x000107c61574(puStack_60);
        lVar4 = lVar1;
        func_0x000107c5c320(lVar1);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar3);
        func_0x000107c61170(lVar1);
        func_0x000107c3e924(lVar4);
        func_0x000107c61170(param_3);
        func_0x000107c615e8(param_1);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100b5edc4; end: 100b5ede7;  */

void FUN_100b5edc4(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b5ede8; end: 100b5ee27;  */

void FUN_100b5ede8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3bc4c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100b5ee28; end: 100b5f20f; -[SCLensInMainCameraScopeEntryPoint _lensCarouselManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5ee28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  undefined *puVar12;
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
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  
  puVar1 = PTR_PTR_1126dd9d0;
  func_0x000107c610f4();
  if (param_1 == 0) {
    uVar24 = 0;
  }
  else {
    uVar24 = *(undefined8 *)(param_1 + _DAT_112782784);
  }
  func_0x000107c61174(uVar24);
  lVar2 = param_1;
  func_0x000107c3bc94();
  func_0x000107c61180();
  lVar3 = param_1;
  FUN_100b5f210();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c4af3c();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c4af38();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_112782764;
    func_0x000107c61148();
  }
  lVar6 = lVar18;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_112782768;
    func_0x000107c61148();
  }
  lVar7 = lVar19;
  func_0x000107c4af10();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c4af0c();
  func_0x000107c61180();
  lVar9 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11278276c;
    func_0x000107c61148();
  }
  lVar10 = lVar20;
  func_0x000107c4aec4();
  func_0x000107c61180();
  lVar11 = lVar10;
  func_0x000107c4aec0();
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126dd9d8;
  func_0x000107c610f4();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_112782770;
    func_0x000107c61148();
  }
  lVar13 = lVar21;
  func_0x000107c4ae28();
  func_0x000107c61180();
  lVar14 = param_1;
  FUN_100b5f210();
  func_0x000107c61180();
  lVar15 = lVar14;
  func_0x000107c4af3c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_112782760;
    func_0x000107c61148();
  }
  lVar16 = lVar22;
  func_0x000107c4b154();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_112782778;
    func_0x000107c61148();
  }
  lVar17 = lVar23;
  func_0x000107c3f290();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c471b0(puVar12,param_2,lVar13,lVar15,lVar16,lVar17,0);
    lVar26 = 0;
    lVar25 = 0;
    param_1 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_11278277c;
    func_0x000107c61148(lVar25);
    func_0x000107c471b0(puVar12,param_2,lVar13,lVar15,lVar16,lVar17,lVar25);
    lVar26 = param_1 + _DAT_112782780;
    func_0x000107c61148();
    param_1 = param_1 + _DAT_112782774;
    func_0x000107c61148();
  }
  func_0x000107c471ec(puVar1,param_2,uVar24,lVar2,lVar5,lVar6,lVar9,lVar11,puVar12,lVar26,param_1);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b5f210; end: 100b5f233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5f210(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11278275c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b5f234; end: 100b5f3af; -[SCLensInMainCameraScopeEntryPoint _lensFeatureContainerViewFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5f234(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  FUN_100b5f210();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4af3c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4af38();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  lVar1 = param_1;
  func_0x000107c3b668();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c3bc40();
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c3bc48();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_112782740;
  func_0x000107c61148();
  lVar5 = param_1;
  func_0x000107c4ae98();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c4ac14();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  puStack_88 = &UNK_1091a7618;
  puStack_80 = &UNK_110adf598;
  puVar7 = PTR_PTR_1126ae720;
  lStack_78 = lVar1;
  lStack_70 = lVar2;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  lStack_58 = lVar6;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_98);
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100b5f3b0; end: 100b5f497; -[SCLensInMainCameraScopeEntryPoint _featureContainerView] */

void FUN_100b5f3b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  FUN_100b5ea8c();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c4b064();
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100b5f498; end: 100b5f597; -[SCLensInMainCameraScopeEntryPoint _lensCarouselContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5f498(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112782754;
    func_0x000107c61148(lVar1);
  }
  lVar2 = lVar1;
  func_0x000107c4af44(lVar1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_40,auStack_38);
  lVar3 = lVar2;
  func_0x000107c4c280(lVar2);
  func_0x000107c61180();
  func_0x000107c61120(auStack_40);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100b5f598; end: 100b5f64f; -[SCLensInMainCameraScopeEntryPoint _lensCarouselLayoutGuide] */

void FUN_100b5f598(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b5f650; end: 100b5f65f; -[_TtC28SCLensCarouselLayoutServices42SCCameraUIScopedLensCarouselLayoutServices lensCarouselLayoutServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5f650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113038ff8));
  return;
}



/* Entry: 100b5f660; end: 100b5f66f; -[_TtC31SCLensCarouselSchedulerServices45SCCameraUIScopedLensCarouselSchedulerServices lensCarouselSchedulerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5f660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113035f18));
  return;
}



/* Entry: 100b5f670; end: 100b5f67f; -[_TtC31SCLensCarouselSchedulerServices31SCLensCarouselSchedulerServices lensCarouselScheduler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5f670(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113035f48));
  return;
}



/* Entry: 100b5f680; end: 100b5f6b7;  */

void FUN_100b5f680(long param_1)

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



/* Entry: 100b5f6b8; end: 100b5f6bf;  */

void FUN_100b5f6b8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    puVar3 = PTR_PTR_1126aeea8;
    func_0x000107c610f8(PTR_PTR_1126aeea8);
    func_0x000107c453e4();
    uVar4 = 0;
    FUN_100b5f734(0);
    func_0x000107c610f8();
    FUN_100b5f754(puVar3,lVar2,uVar4);
  }
  return;
}



/* Entry: 100b5f6c0; end: 100b5f733;  */

void FUN_100b5f6c0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    puVar2 = PTR_PTR_1126aeea8;
    func_0x000107c610f8(PTR_PTR_1126aeea8);
    func_0x000107c453e4();
    uVar3 = 0;
    FUN_100b5f734(0);
    func_0x000107c610f8();
    FUN_100b5f754(puVar2,lVar1,uVar3);
  }
  return;
}



/* Entry: 100b5f734; end: 100b5f753;  */

void FUN_100b5f734(void)

{
  func_0x000107c61168(&PTR_PTR_1128df048);
  return;
}



/* Entry: 100b5f754; end: 100b5f88f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5f754(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_3;
  func_0x000107c614f0();
  func_0x000107c61614(param_3 + _DAT_112f84a40,0);
  *(undefined **)(param_3 + _DAT_112f84a58) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined1 *)(param_3 + _DAT_112f84a60) = 2;
  lVar1 = _DAT_112f84a68;
  uVar3 = 0x112f84948;
  FUN_1000285a8(0x112f84948,&UNK_10dbf8b40);
  func_0x000107c613fc();
  FUN_1000c2754();
  *(undefined8 *)(param_3 + lVar1) = uVar3;
  lVar1 = _DAT_112f84a70;
  uVar4 = 0;
  FUN_10006a340();
  uVar3 = uVar4;
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(param_3 + lVar1) = uVar3;
  lVar1 = _DAT_112f84a78;
  func_0x000107c613fc(uVar4,0x18,7);
  FUN_10006a360();
  *(undefined8 *)(param_3 + lVar1) = uVar4;
  *(undefined8 *)(param_3 + _DAT_112f84a48) = param_1;
  *(undefined8 *)(param_3 + _DAT_112f84a50) = param_2;
  lStack_60 = param_3;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b5f890; end: 100b5f8a7;  */

undefined1  [16] FUN_100b5f890(void)

{
  return ZEXT816(0x11067a888);
}



/* Entry: 100b5f8a8; end: 100b5f8cb;  */

void FUN_100b5f8a8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b5f8cc; end: 100b5f8db; -[_TtC39SCLensCarouselPerformanceLoggerServices53SCCameraUIScopedLensCarouselPerformanceLoggerServices lensCarouselPerformanceLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5f8cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113035d00));
  return;
}



/* Entry: 100b5f8dc; end: 100b5f8eb; -[_TtC39SCLensCarouselPerformanceLoggerServices39SCLensCarouselPerformanceLoggerServices lensCarouselPerformanceLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5f8dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113035d30));
  return;
}



/* Entry: 100b5f8ec; end: 100b5f9b3; -[_TtC28SCLensCarouselScopedServices28SCLensCarouselScopedServices initWithLensCTAHandlingServices:lensCarouselSettingsServices:lensFeaturesVisibilityControllerServices:cameraUIScopeViewContainer:imagineLensServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5f8ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_1130822d8) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130822e0) = param_4;
  *(undefined8 *)(param_1 + _DAT_1130822e8) = param_5;
  *(undefined8 *)(param_1 + _DAT_1130822f0) = param_6;
  *(undefined8 *)(param_1 + _DAT_1130822f8) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 100b5f9b4; end: 100b5fd77; -[SCLensCarouselManager initWithLensCarouselScopeExposer:lensFeatureContainerViewFactory:lensCarouselSettings:lensPerformerProvider:lensCarouselScheduler:performanceLogger:lensCarouselScopedServices:opaqueLensCarouselServices:lensCarouselScopeSaberServices:] */

undefined8 *
FUN_100b5f9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_68 = PTR_PTR_112700d58;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[2];
    puVar1[2] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[3];
    puVar1[3] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[4];
    puVar1[4] = param_10;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c53fcc(puVar1[0x17]);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c4d664(puVar1[8]);
    func_0x000107c4d664(puVar1[9]);
    uVar2 = puVar1[0xc];
    puVar3 = PTR_PTR_1126ae750;
    func_0x000107c4d73c(PTR_PTR_1126ae750);
    func_0x000107c61180();
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(puVar3);
    uVar2 = puVar1[0xd];
    puVar3 = PTR_PTR_1126ae750;
    func_0x000107c4d73c(PTR_PTR_1126ae750);
    func_0x000107c61180();
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(puVar3);
    uVar2 = puVar1[10];
    puVar3 = PTR_PTR_1126ae750;
    func_0x000107c4d73c(PTR_PTR_1126ae750);
    func_0x000107c61180();
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(puVar3);
    uVar2 = puVar1[0xb];
    puVar3 = PTR_PTR_1126ae750;
    func_0x000107c4d73c(PTR_PTR_1126ae750);
    func_0x000107c61180();
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(puVar3);
    *(undefined4 *)((long)puVar1 + 0xdc) = 0;
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
  return puVar1;
}



/* Entry: 100b5fd78; end: 100b5fd8b; -[_TtC27SCLensCarouselSchedulerImpl30LensCarouselOperationScheduler setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5fd78(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f84a40,param_3);
  return;
}



/* Entry: 100b5fd8c; end: 100b5fdab; -[SCLensCarouselManager activeStateObservable] */

undefined8 FUN_100b5fd8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100b5fdac; end: 100b5fdf7;  */

void FUN_100b5fdac(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100b5fdf8; end: 100b5fdff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5fdf8(int param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c3ebcc();
  if (param_1 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lStack_50 = lVar1;
      FUN_100087bd4(&UNK_103698214,auStack_60,PTR___sytN_11034f1b0 + 8);
      func_0x000107c42194(*(undefined8 *)(lVar1 + _DAT_112f850c8));
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 100b5fe00; end: 100b5fea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5fe00(int param_1,long param_2)

{
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c3ebcc();
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      lStack_50 = param_2;
      FUN_100087bd4(&UNK_103698214,auStack_60,PTR___sytN_11034f1b0 + 8);
      func_0x000107c42194(*(undefined8 *)(param_2 + _DAT_112f850c8));
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 100b5fea4; end: 100b5ff13;  */

void FUN_100b5fea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100b5ff14; end: 100b5ff1b;  */

void FUN_100b5ff14(long param_1,long param_2)

{
  long lStack_28;
  
  if (param_1 == 0) {
    if (param_2 != 0) {
      func_0x000107c614b0(param_2);
      func_0x00010488ade0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
      return;
    }
    lStack_28 = 0;
    FUN_100b60084(&lStack_28);
  }
  else {
    lStack_28 = param_1;
    func_0x000107c615f0();
    FUN_100b60084(&lStack_28);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 100b5ff1c; end: 100b5ff9b;  */

void FUN_100b5ff1c(long param_1,long param_2)

{
  long lStack_28;
  
  if (param_1 == 0) {
    if (param_2 != 0) {
      func_0x000107c614b0(param_2);
      func_0x00010488ade0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
      return;
    }
    lStack_28 = 0;
    FUN_100b60084(&lStack_28);
  }
  else {
    lStack_28 = param_1;
    func_0x000107c615f0();
    FUN_100b60084(&lStack_28);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 100b5ff9c; end: 100b60083;  */

void FUN_100b5ff9c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x20;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar3 = *(long *)(*unaff_x20 + 0x50);
  uVar1 = 0x112d393f0;
  FUN_10002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0;
  func_0x000107c606cc(0,lVar3,uVar1,PTR___ss5ErrorWS_11034ee10);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffb0 + -extraout_x8;
  FUN_10006c804();
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(puVar4,param_1,lVar3);
  func_0x000107c6159c(puVar4,lVar2,0);
  FUN_100b600a4(puVar4);
  (**(code **)(lVar5 + 8))(puVar4,lVar2);
  return;
}



/* Entry: 100b60084; end: 100b600a3;  */

void FUN_100b60084(void)

{
  FUN_100b5ff9c();
  return;
}



/* Entry: 100b600a4; end: 100b60327;  */

void FUN_100b600a4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 uVar5;
  long extraout_x12;
  long *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar8 = *unaff_x20;
  uVar6 = *(undefined8 *)(lVar8 + 0x50);
  uVar1 = 0x112d393f0;
  FUN_10002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0xff;
  func_0x000107c606cc(0xff,uVar6,uVar1,PTR___ss5ErrorWS_11034ee10);
  lVar3 = 0;
  func_0x000107c60188(0,lVar2);
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar7 = (long)&lStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_b8 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12;
  lVar12 = *(long *)(lVar8 + 0x68);
  func_0x000107c61428((long)unaff_x20 + lVar12,auStack_78,0,0);
  (**(code **)(lVar11 + 0x10))(lVar7,(long)unaff_x20 + lVar12,lVar3);
  lVar9 = *(long *)(lVar2 + -8);
  lVar8 = lVar7;
  (**(code **)(lVar9 + 0x30))(lVar7,1,lVar2);
  (**(code **)(lVar11 + 8))(lVar7,lVar3);
  if ((int)lVar8 == 1) {
    lVar7 = *(long *)(*unaff_x20 + 0x70);
    lStack_c0 = lVar7;
    func_0x000107c61428((long)unaff_x20 + lVar7,auStack_90,1,0);
    lVar8 = lStack_b8;
    lVar7 = *(long *)((long)unaff_x20 + lVar7);
    (**(code **)(lVar9 + 0x10))(lStack_b8,param_1,lVar2);
    (**(code **)(lVar9 + 0x38))(lVar8,0,1,lVar2);
    func_0x000107c61428((long)unaff_x20 + lVar12,&uStack_b0,0x21,0);
    pcVar10 = *(code **)(lVar11 + 0x28);
    func_0x000107c61434(lVar7);
    (*pcVar10)((long)unaff_x20 + lVar12,lVar8,lVar3);
    func_0x000107c614a8(&uStack_b0);
    uVar4 = 0;
    FUN_100759f34(0,uVar6);
    uVar1 = uVar4;
    func_0x000107c5f9d0();
    uVar5 = *(undefined8 *)((long)unaff_x20 + lStack_c0);
    *(undefined8 *)((long)unaff_x20 + lStack_c0) = uVar1;
    func_0x000107c6142c(uVar5);
    FUN_100070bfc();
    lVar8 = lVar7;
    func_0x000107c5fc7c(lVar7,uVar4);
    if (lVar8 != 0) {
      lVar8 = 0;
      do {
        func_0x000107c5fc98(&uStack_b0,lVar8,lVar7,uVar4);
        uVar5 = uStack_a0;
        uVar1 = uStack_a8;
        lVar2 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100b60328);
          (*pcVar10)();
        }
        FUN_100b6036c(param_1,uStack_b0,uStack_a8,uStack_a0,uStack_98,uVar6);
        func_0x000107c61574(uVar1);
        func_0x000107c615e8(uVar5);
        lVar3 = lVar7;
        func_0x000107c5fc7c(lVar7,uVar4);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar3);
    }
    func_0x000107c6142c(lVar7);
  }
  else {
    FUN_100070bfc();
  }
  return;
}



/* Entry: 100b60328; end: 100b6036b;  */

undefined8 * FUN_100b60328(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[1];
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(uVar1);
  return param_1;
}



/* Entry: 100b6036c; end: 100b606ab;  */

void FUN_100b6036c(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  uVar1 = 0x112d393f0;
  FUN_10002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0;
  func_0x000107c606cc(0,param_6,uVar1,PTR___ss5ErrorWS_11034ee10);
  lVar10 = *(long *)(lVar2 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_a0 + -extraout_x8;
  if (param_4 == 0) {
    (*param_2)(param_1);
  }
  else if ((param_5 & 1) == 0) {
    lVar4 = param_4;
    func_0x000107c614f0();
    lStack_98 = lVar4;
    (**(code **)(lVar10 + 0x10))(puVar7,param_1,lVar2);
    uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
    uVar9 = uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff);
    puVar5 = &UNK_1107ac218;
    func_0x000107c613fc(&UNK_1107ac218,uVar9 + lVar8,uVar6 | 7);
    *(undefined8 *)(puVar5 + 0x10) = param_6;
    *(code **)(puVar5 + 0x18) = param_2;
    *(undefined8 *)(puVar5 + 0x20) = param_3;
    (**(code **)(lVar10 + 0x20))(puVar5 + uVar9,puVar7,lVar2);
    func_0x000107c615f0(param_4);
    func_0x000107c6157c(param_3);
    FUN_10090569c(&UNK_100c0f9c0,puVar5,lStack_98);
    func_0x000107c61574(puVar5);
    func_0x000107c615e8(param_4);
  }
  else {
    (**(code **)(lVar10 + 0x10))(puVar7,param_1,lVar2);
    uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
    uVar9 = uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff);
    puVar5 = &UNK_1107ac240;
    func_0x000107c613fc(&UNK_1107ac240,uVar9 + lVar8,uVar6 | 7);
    *(undefined8 *)(puVar5 + 0x10) = param_6;
    *(code **)(puVar5 + 0x18) = param_2;
    *(undefined8 *)(puVar5 + 0x20) = param_3;
    (**(code **)(lVar10 + 0x20))(puVar5 + uVar9,puVar7,lVar2);
    puStack_70 = &UNK_100c0f9bc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1000f6b44;
    puStack_78 = &UNK_1107ac258;
    ppuVar3 = &puStack_90;
    puStack_68 = puVar5;
    func_0x000107c60bc4(ppuVar3);
    puVar5 = puStack_68;
    func_0x000107c615f0(param_4);
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar5);
    func_0x000100c00c0c(param_4,ppuVar3);
    func_0x000107c615e8(param_4);
    func_0x000107c60bd0(ppuVar3);
  }
  return;
}



/* Entry: 100b606ac; end: 100b606cf;  */

void FUN_100b606ac(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000100b605a0(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                      FUN_100b6081c);
  return;
}



/* Entry: 100b606d0; end: 100b6081b;  */

void FUN_100b606d0(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x12;
  long extraout_x13;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = *(long *)(param_4 + 0x10);
  lVar6 = *(long *)(lVar2 + -8);
  lVar3 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x13 + 0x10))(lVar5,extraout_x12);
  lVar3 = lVar5;
  func_0x000107c614c4(lVar5,param_4);
  if ((int)lVar3 == 1) {
    lVar3 = *(long *)(param_4 + 0x18);
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,lVar5,lVar3);
    uVar1 = 0;
    func_0x000107c606cc(0,param_5,lVar3,*(undefined8 *)(param_4 + 0x20));
    func_0x000107c6159c(param_1,uVar1,1);
  }
  else {
    (**(code **)(lVar6 + 0x20))(puVar4,lVar5,lVar2);
    (*param_2)(param_1,puVar4);
    (**(code **)(lVar6 + 8))(puVar4,lVar2);
  }
  return;
}



/* Entry: 100b6081c; end: 100b60827;  */

void FUN_100b6081c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0x112d393f0;
  uStack_40 = param_2;
  FUN_1000285a8(0x112d393f0,&UNK_10d903bb0);
  FUN_100b6089c(param_1,FUN_100b60b2c,auStack_70,uVar2,uVar1,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 100b60828; end: 100b6089b;  */

void FUN_100b60828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0x112d393f0;
  uStack_40 = param_2;
  FUN_1000285a8(0x112d393f0,&UNK_10d903bb0);
  FUN_100b6089c(param_1,param_3,auStack_70,uVar2,uVar1,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 100b6089c; end: 100b609e7;  */

/* WARNING: Removing unreachable block (ram,0x000100b60968) */

void FUN_100b6089c(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  undefined8 auStack_70 [2];
  
  lVar1 = 0;
  auStack_70[0] = param_1;
  func_0x000107c606cc(0,param_4,param_5,param_6);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = (long)auStack_70 - extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_5 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*param_2)(lVar2,lVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c6159c(lVar2,lVar1,0);
  (**(code **)(lVar3 + 0x20))(auStack_70[0],lVar2,lVar1);
  return;
}



/* Entry: 100b609e8; end: 100b60b2b;  */

void FUN_100b609e8(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 *param_7)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined *unaff_x21;
  long lVar4;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c60188(0,param_6);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = (undefined8 *)(&stack0xffffffffffffffa0 + -extraout_x8);
  (*param_2)(puVar3,param_4);
  if (unaff_x21 == (undefined *)0x0) {
    lVar5 = *(long *)(param_6 + -8);
    puVar2 = puVar3;
    (**(code **)(lVar5 + 0x30))(puVar3,1,param_6);
    if ((int)puVar2 != 1) {
      (**(code **)(lVar5 + 0x20))(param_1,puVar3,param_6);
      return;
    }
    (**(code **)(lVar4 + 8))(puVar3,lVar1);
    func_0x000103319a2c();
    unaff_x21 = &UNK_1107ac098;
    func_0x000107c613f8(&UNK_1107ac098,puVar3,0,0);
    puVar3[1] = 1;
    *puVar3 = 0;
    func_0x000107c61654();
  }
  *param_7 = unaff_x21;
  return;
}



/* Entry: 100b60b2c; end: 100b60b4f;  */

void FUN_100b60b2c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100b609e8(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),param_1);
  return;
}



/* Entry: 100b60b50; end: 100b60bb3;  */

void FUN_100b60b50(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0x112d5d810;
    FUN_1000285a8(0x112d5d810,&UNK_10d923f50);
    FUN_1000bda74(lVar2,uVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 100b60bb4; end: 100b60be7;  */

void FUN_100b60bb4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 uVar5;
  long extraout_x12;
  long *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  FUN_10006c804();
  lVar8 = *unaff_x20;
  uVar6 = *(undefined8 *)(lVar8 + 0x50);
  uVar1 = 0x112d393f0;
  FUN_10002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0xff;
  func_0x000107c606cc(0xff,uVar6,uVar1,PTR___ss5ErrorWS_11034ee10);
  lVar3 = 0;
  func_0x000107c60188(0,lVar2);
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar7 = (long)&lStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_b8 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12;
  lVar12 = *(long *)(lVar8 + 0x68);
  func_0x000107c61428((long)unaff_x20 + lVar12,auStack_78,0,0);
  (**(code **)(lVar11 + 0x10))(lVar7,(long)unaff_x20 + lVar12,lVar3);
  lVar9 = *(long *)(lVar2 + -8);
  lVar8 = lVar7;
  (**(code **)(lVar9 + 0x30))(lVar7,1,lVar2);
  (**(code **)(lVar11 + 8))(lVar7,lVar3);
  if ((int)lVar8 == 1) {
    lVar7 = *(long *)(*unaff_x20 + 0x70);
    lStack_c0 = lVar7;
    func_0x000107c61428((long)unaff_x20 + lVar7,auStack_90,1,0);
    lVar8 = lStack_b8;
    lVar7 = *(long *)((long)unaff_x20 + lVar7);
    (**(code **)(lVar9 + 0x10))(lStack_b8,param_1,lVar2);
    (**(code **)(lVar9 + 0x38))(lVar8,0,1,lVar2);
    func_0x000107c61428((long)unaff_x20 + lVar12,&uStack_b0,0x21,0);
    pcVar10 = *(code **)(lVar11 + 0x28);
    func_0x000107c61434(lVar7);
    (*pcVar10)((long)unaff_x20 + lVar12,lVar8,lVar3);
    func_0x000107c614a8(&uStack_b0);
    uVar4 = 0;
    FUN_100759f34(0,uVar6);
    uVar1 = uVar4;
    func_0x000107c5f9d0();
    uVar5 = *(undefined8 *)((long)unaff_x20 + lStack_c0);
    *(undefined8 *)((long)unaff_x20 + lStack_c0) = uVar1;
    func_0x000107c6142c(uVar5);
    FUN_100070bfc();
    lVar8 = lVar7;
    func_0x000107c5fc7c(lVar7,uVar4);
    if (lVar8 != 0) {
      lVar8 = 0;
      do {
        func_0x000107c5fc98(&uStack_b0,lVar8,lVar7,uVar4);
        uVar5 = uStack_a0;
        uVar1 = uStack_a8;
        lVar2 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100b60328);
          (*pcVar10)();
        }
        FUN_100b6036c(param_1,uStack_b0,uStack_a8,uStack_a0,uStack_98,uVar6);
        func_0x000107c61574(uVar1);
        func_0x000107c615e8(uVar5);
        lVar3 = lVar7;
        func_0x000107c5fc7c(lVar7,uVar4);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar3);
    }
    func_0x000107c6142c(lVar7);
  }
  else {
    FUN_100070bfc();
  }
  return;
}



/* Entry: 100b60be8; end: 100b60c2f;  */

void FUN_100b60be8(void)

{
  FUN_100b60bb4();
  return;
}



/* Entry: 100b60c30; end: 100b60c33;  */

void FUN_100b60c30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b60c34; end: 100b60c5f;  */

void FUN_100b60c34(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b60c60; end: 100b60c9f;  */

void FUN_100b60c60(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c(uVar1);
  FUN_100b60cc0();
  func_0x000107c61574(uVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100b60ca0; end: 100b60cbf;  */

void FUN_100b60ca0(void)

{
  FUN_100b60c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100b60cc0; end: 100b60e63;  */

void FUN_100b60cc0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar6;
  long *unaff_x20;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  uVar6 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar1 = 0x112d393f0;
  FUN_10002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0;
  func_0x000107c606cc(0,uVar6,uVar1,PTR___ss5ErrorWS_11034ee10);
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)&uStack_80 - extraout_x8);
  lVar3 = 0;
  func_0x000107c60188(0,lVar2);
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)puVar7 - extraout_x8_00);
  FUN_10006c804();
  lVar8 = *(long *)(*unaff_x20 + 0x68);
  func_0x000107c61428((long)unaff_x20 + lVar8,auStack_78,0,0);
  (**(code **)(lVar11 + 0x10))(puVar9,(long)unaff_x20 + lVar8,lVar3);
  puVar4 = puVar9;
  (**(code **)(lVar10 + 0x30))(puVar9,1,lVar2);
  (**(code **)(lVar11 + 8))(puVar9,lVar3);
  if ((int)puVar4 == 1) {
    func_0x000103319a2c();
    puVar5 = &UNK_1107ac098;
    func_0x000107c613f8(&UNK_1107ac098,puVar9,0,0);
    *puVar9 = 0;
    puVar9[1] = 0;
    *puVar7 = puVar5;
    func_0x000107c6159c(puVar7,lVar2,1);
    FUN_100b600a4(puVar7);
    (**(code **)(lVar10 + 8))(puVar7,lVar2);
  }
  else {
    FUN_100070bfc();
  }
  return;
}



/* Entry: 100b60e64; end: 100b60e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b60e64(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  puVar4 = auStack_58;
  func_0x000107c61428(lVar5 + 0x10,puVar4,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(lVar5 + _DAT_112f877c8);
    *(undefined8 *)(lVar5 + _DAT_112f877c8) = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c61170();
    FUN_100b60fb0();
    if ((bVar1 & 1) == 0) {
      FUN_100773cf0();
      if (puVar4 != (undefined1 *)0x0) {
        puVar2 = &UNK_1106819a8;
        func_0x000107c613fc(&UNK_1106819a8,0x18,7);
        func_0x000107c61614(puVar2 + 0x10,lVar5);
        puVar3 = &UNK_110681f70;
        func_0x000107c613fc(&UNK_110681f70,0x28,7);
        *(undefined **)(puVar3 + 0x10) = puVar2;
        *(undefined8 *)(puVar3 + 0x18) = uVar6;
        *(undefined1 **)(puVar3 + 0x20) = puVar4;
        uVar6 = 10;
        func_0x0001001ca524(10,4,0x38,4,0,0,&UNK_10dbfb7e0,puVar3,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(puVar3);
        func_0x000107c61574(uVar6);
      }
    }
    else {
      FUN_100b612d8();
    }
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 100b60e70; end: 100b60fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b60e70(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  puVar3 = auStack_58;
  func_0x000107c61428(param_3 + 0x10,puVar3,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_3 + _DAT_112f877c8);
    *(undefined8 *)(param_3 + _DAT_112f877c8) = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c61170();
    FUN_100b60fb0();
    if ((param_4 & 1) == 0) {
      FUN_100773cf0();
      if (puVar3 != (undefined1 *)0x0) {
        puVar1 = &UNK_1106819a8;
        func_0x000107c613fc(&UNK_1106819a8,0x18,7);
        func_0x000107c61614(puVar1 + 0x10,param_3);
        puVar2 = &UNK_110681f70;
        func_0x000107c613fc(&UNK_110681f70,0x28,7);
        *(undefined **)(puVar2 + 0x10) = puVar1;
        *(undefined8 *)(puVar2 + 0x18) = uVar4;
        *(undefined1 **)(puVar2 + 0x20) = puVar3;
        uVar4 = 10;
        func_0x0001001ca524(10,4,0x38,4,0,0,&UNK_10dbfb7e0,puVar2,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(puVar2);
        func_0x000107c61574(uVar4);
      }
    }
    else {
      FUN_100b612d8();
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 100b60fa8; end: 100b60faf;  */

void FUN_100b60fa8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b60fb0; end: 100b610cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b60fb0(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112f877c8);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c3d14c();
      func_0x000107c61180();
      puVar3 = &UNK_1106819a8;
      func_0x000107c613fc(&UNK_1106819a8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      pcStack_50 = FUN_100b61128;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      pcStack_60 = FUN_100b610dc;
      puStack_58 = &UNK_110681d08;
      puStack_48 = puVar3;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      lVar5 = lVar2;
      func_0x000107c5c320(lVar2);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c3e924(lVar5);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar5);
    }
  }
  return;
}



/* Entry: 100b610d0; end: 100b610db; -[SCLensCarouselManager activeLensObservable] */

undefined8 FUN_100b610d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 100b610dc; end: 100b61127;  */

void FUN_100b610dc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100b61128; end: 100b6112f;  */

void FUN_100b61128(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined1 auStack_98 [24];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_100b612a0;
  puStack_58 = (undefined *)0x0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100b61264;
  puStack_68 = &UNK_110681d30;
  ppuVar2 = &puStack_80;
  func_0x000107c60bc4(ppuVar2);
  puVar3 = &UNK_1106819a8;
  func_0x000107c613fc(&UNK_1106819a8,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_98,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar4);
  func_0x000107c61614(puVar3 + 0x10,lVar4);
  func_0x000107c61170(lVar4);
  pcStack_60 = (code *)&UNK_1036d3d54;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)&UNK_1019eb2d8;
  puStack_68 = &UNK_110681d58;
  ppuVar5 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_58);
  func_0x000107c4c6bc(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100b61130; end: 100b6125b;  */

void FUN_100b61130(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 auStack_98 [24];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_100b612a0;
  puStack_58 = (undefined *)0x0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100b61264;
  puStack_68 = &UNK_110681d30;
  ppuVar2 = &puStack_80;
  func_0x000107c60bc4(ppuVar2);
  puVar3 = &UNK_1106819a8;
  func_0x000107c613fc(&UNK_1106819a8,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_98,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618(param_2);
  func_0x000107c61614(puVar3 + 0x10,param_2);
  func_0x000107c61170(param_2);
  pcStack_60 = (code *)&UNK_1036d3d54;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)&UNK_1019eb2d8;
  puStack_68 = &UNK_110681d58;
  ppuVar4 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_58);
  func_0x000107c4c6bc(param_1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100b6125c; end: 100b61263;  */

void FUN_100b6125c(long param_1,long param_2)

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



/* Entry: 100b61264; end: 100b6129f;  */

void FUN_100b61264(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 100b612a0; end: 100b612af;  */

void FUN_100b612a0(void)

{
  return;
}


