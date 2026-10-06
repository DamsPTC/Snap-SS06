/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10066fff8; end: 100670067;  */

void FUN_10066fff8(long *param_1,long *param_2)

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



/* Entry: 100670068; end: 1006700ab;  */

void FUN_100670068(long param_1)

{
  FUN_10066ff8c();
  *(undefined8 *)(param_1 + 0xa8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf1) = 0;
  *(undefined8 *)(param_1 + 0xe9) = 0;
  return;
}



/* Entry: 1006700ac; end: 10067010f;  */

long FUN_1006700ac(long param_1)

{
  func_0x000107c60ca0(param_1 + 0x88);
  func_0x0001006700e8(param_1 + 0x58);
  FUN_1001ba7c0(param_1 + 0x30);
  func_0x00010060f240(param_1 + 8);
  return param_1;
}



/* Entry: 100670110; end: 100670127;  */

void FUN_100670110(long *param_1)

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



/* Entry: 100670128; end: 10067014b;  */

undefined8 FUN_100670128(undefined8 param_1)

{
  FUN_100670110(param_1,0);
  return param_1;
}



/* Entry: 10067014c; end: 100670157;  */

void FUN_10067014c(long param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000010;
  FUN_1003b6f78();
  *(long *)(puVar1 + 0x10) = param_1 + 0xe8;
  return;
}



/* Entry: 100670158; end: 10067023f;  */

void FUN_100670158(undefined8 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10067014c();
  iVar1 = *(int *)((long)plStack_50 + 0x14);
  if (iVar1 == param_2) {
    bVar2 = true;
  }
  else {
    if ((char)plStack_50[2] == '\x01') {
      bVar2 = iVar1 == 0;
      if (iVar1 != 0) {
        func_0x000107c30110(&uStack_48);
      }
      plStack_50[1] = 0;
      plVar3 = plStack_50 + 3;
      func_0x000100670418();
      func_0x000107c60d9c();
      *plStack_50 = (long)plVar3;
    }
    else {
      bVar2 = true;
    }
    *(int *)((long)plStack_50 + 0x14) = param_2;
  }
  FUN_10067026c();
  if ((iVar1 != param_2) && (!bVar2)) {
    FUN_10044fab4();
    func_0x000107c39784();
    func_0x000107c3974c();
    func_0x000107c39778();
    func_0x000107c39774();
    func_0x000107c3976c();
  }
  return;
}



/* Entry: 100670240; end: 10067026b;  */

void FUN_100670240(long param_1,long param_2)

{
  FUN_1003b6f78();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 10067026c; end: 100670273;  */

undefined8 * FUN_10067026c(void)

{
  undefined8 in_stack_00000010;
  char in_stack_00000018;
  
  if (in_stack_00000018 == '\x01') {
    func_0x000107c60d8c(in_stack_00000010);
  }
  return &stack0x00000010;
}



/* Entry: 100670274; end: 1006702b3;  */

void FUN_100670274(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000107c60c40();
  func_0x000107c60dc4();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 1006702b4; end: 10067033b;  */

undefined8 FUN_1006702b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_1006703e8(param_2);
  func_0x000107c61180();
  func_0x000107c49d6c(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61108(lVar1);
  return uVar2;
}



/* Entry: 10067033c; end: 100670377;  */

void FUN_10067033c(long param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_100670274(param_1 + 0x2b8,&uStack_30);
  FUN_100670378();
  return;
}



/* Entry: 100670378; end: 10067038b;  */

void FUN_100670378(void)

{
  long in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10067038c; end: 1006703e7;  */

void FUN_10067038c(char *param_1)

{
  char *pcVar1;
  undefined1 auStack_28 [16];
  undefined8 *puStack_18;
  
  pcVar1 = param_1 + 0xa8;
  if (*param_1 == '\x01') {
    FUN_100670240(auStack_28);
    if ((*(byte *)(puStack_18 + 2) & 1) == 0) {
      func_0x000107c60d9c();
      *puStack_18 = pcVar1;
      puStack_18[1] = 0;
      func_0x000100670418(puStack_18 + 3);
      *(undefined1 *)(puStack_18 + 2) = 1;
    }
    FUN_10067046c();
  }
  return;
}



/* Entry: 1006703e8; end: 10067046b;  */

void FUN_1006703e8(void)

{
  func_0x000107c610f4(PTR_PTR_1126b1278);
  func_0x000107c46d34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10067046c; end: 100670483;  */

undefined8 * FUN_10067046c(void)

{
  undefined8 in_stack_00000008;
  char in_stack_00000010;
  
  if (in_stack_00000010 == '\x01') {
    func_0x000107c60d8c(in_stack_00000008);
  }
  return &stack0x00000008;
}



/* Entry: 100670484; end: 100670527; -[_TtC31SCNativeComplianceEngineAdapter31SCNativeComplianceEngineAdapter isFeatureEnabled:context:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100670484(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  FUN_100083b20(&uStack_38);
  lVar2 = param_3;
  FUN_10067054c(param_3,param_4);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  uVar1 = *(undefined1 *)(lVar2 + _DAT_113046010);
  func_0x000107c61170(lVar2);
  return uVar1;
}



/* Entry: 100670528; end: 10067054b;  */

undefined1  [16] FUN_100670528(void)

{
  undefined1 auStack_20 [16];
  
  FUN_100083b20(auStack_20);
  return auStack_20;
}



/* Entry: 10067054c; end: 1006705ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10067054c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  lVar3 = param_2;
  (**(code **)(unaff_x20 + _DAT_113046020))();
  lVar2 = lVar1;
  func_0x000107c614f0();
  (**(code **)(lVar3 + 8))(param_1,param_2,lVar2,lVar3);
  func_0x000107c615e8();
  func_0x000100670a68();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(byte *)(lVar2 + _DAT_113046010) = (byte)param_1 & 1;
  *(byte *)(lVar2 + _DAT_113046018) = (byte)((ulong)param_1 >> 8) & 1;
  lStack_40 = lVar2;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100670600; end: 10067060b; -[SCNetworkDeps systemBlizzardServices] */

void FUN_100670600(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 10067060c; end: 10067072b; -[SCStickerItemBitmojiPresentationModelProvider _setupRenderStyleObserving] */

void FUN_10067060c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar1 != 0) {
      func_0x000107c61144(auStack_38,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x000107c5c734();
      func_0x000107c61180();
      uVar3 = uVar2;
      func_0x000107c4da34();
      func_0x000107c61180();
      func_0x000107c6111c(auStack_40,auStack_38);
      uVar4 = uVar3;
      func_0x000107c5c320();
      func_0x000107c61180();
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar2);
      func_0x000107c61120(auStack_40);
      func_0x000107c61120(auStack_38);
    }
  }
  return;
}



/* Entry: 10067072c; end: 10067075f; -[_TtC35BitmojiStyleProvidingImplementation26BitmojiRenderStyleProvider observeBitmojiRenderStyle] */

void FUN_10067072c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_100670760();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100670760; end: 100670a17;  */

code * FUN_100670760(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  code *pcVar7;
  undefined **ppuVar8;
  code *pcVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  ppuVar8 = &puStack_80;
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      puVar10 = &UNK_1103f2ed8;
      func_0x000107c613fc(&UNK_1103f2ed8,0x18,7);
      *(long *)(puVar10 + 0x10) = lVar1;
      FUN_1000285a8(0x112dbe938,&UNK_10d979ce0);
      func_0x000107c613fc();
      func_0x000107c61174(lVar1);
      pcVar9 = FUN_100672818;
      FUN_1000b64ac(FUN_100672818,puVar10);
      uVar3 = 0;
      FUN_1002ed07c(0);
      uVar4 = 0x100672ba0;
      FUN_1000bfde0(0x100672ba0,0,uVar3);
      func_0x000107c61574(pcVar9);
      FUN_1004575f0();
      func_0x000107c61574(uVar4);
      puVar10 = &UNK_1103f2f00;
      func_0x000107c613fc(&UNK_1103f2f00,0x18,7);
      func_0x000107c61644(puVar10 + 0x10);
      puVar5 = &UNK_1103f2f28;
      func_0x000107c613fc(&UNK_1103f2f28,0x20,7);
      *(undefined **)(puVar5 + 0x10) = puVar10;
      *(long *)(puVar5 + 0x18) = lVar2;
      puVar10 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_60 = FUN_100672ed0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_100672e78;
      puStack_68 = &UNK_1103f2f40;
      puStack_58 = puVar5;
      func_0x000107c60bc4(&puStack_80);
      puVar5 = puStack_58;
      func_0x000107c61174(lVar2);
      func_0x000107c61574(puVar5);
      pcVar7 = pcVar9;
      func_0x000107c436a8(pcVar9);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(pcVar9);
      pcVar9 = pcVar7;
      func_0x000107c421ac(pcVar7);
      func_0x000107c61180();
      func_0x000107c61170(pcVar7);
      pcStack_60 = FUN_10067326c;
      puStack_58 = (undefined *)0x0;
      puStack_80 = puVar10;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_1006731ec;
      puStack_68 = &UNK_1103f2f68;
      func_0x000107c60bc4(&puStack_80);
      func_0x000107c61574(puStack_58);
      pcVar7 = pcVar9;
      func_0x000107c4c280(pcVar9);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(pcVar9);
      return pcVar7;
    }
    func_0x000107c61170(lVar1);
  }
  pcVar9 = (code *)PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  func_0x000107c4a8a4(pcVar9);
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  return pcVar9;
}



/* Entry: 100670a18; end: 100670a87;  */

void FUN_100670a18(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100670a88; end: 100670ab7; +[SCAPIClientLogger setSystemBlizzardLogger:] */

void FUN_100670a88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = uRam00000001137f4660;
  uRam00000001137f4660 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100670ab8; end: 100670b3b; -[SCNNetworkApiNetworkApi addNetworkQualityEstimatorListener:] */

void FUN_100670ab8(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  FUN_10066a844();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_1000fbac4();
  FUN_100670b3c();
  func_0x00010066aac4(*(undefined8 *)(*plVar1 + 0x50));
  FUN_10067116c(auStack_40);
  FUN_100184a54();
  return;
}



/* Entry: 100670b3c; end: 100670bf3;  */

void FUN_100670b3c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110ced040;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_100670bf4);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_100670cf4(&uStack_50);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100670bf4; end: 100670cf3;  */

void FUN_100670bf4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110ced080;
  puVar4[3] = &PTR_DAT_110ced100;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110ced0d0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_100670cf4(&uStack_50);
  return;
}



/* Entry: 100670cf4; end: 100670d1f;  */

long FUN_100670cf4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100670d20; end: 100670d43;  */

void FUN_100670d20(long param_1)

{
  if (*(char *)(param_1 + 0x1c8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000100670d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x1c0) + 0x18))();
    return;
  }
  return;
}



/* Entry: 100670d44; end: 100670d6b;  */

void FUN_100670d44(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_1000df370(&uStack_18,8);
  return;
}



/* Entry: 100670d6c; end: 1006710c7;  */

void FUN_100670d6c(long param_1,ulong *param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long *plVar8;
  ulong extraout_x9;
  ulong uVar9;
  ulong extraout_x9_00;
  int extraout_w10;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *extraout_x10;
  ulong uVar13;
  ulong uVar14;
  ulong extraout_x11;
  ulong unaff_x22;
  ulong uVar15;
  ulong uVar16;
  
  uVar5 = *param_2;
  FUN_100670d44();
  uVar15 = *(ulong *)(param_1 + 0x10);
  if (uVar15 == 0) {
    uVar16 = *param_2;
  }
  else {
    func_0x00010067110c();
    if ((bool)in_ZR) {
      unaff_x22 = extraout_x8 & uVar5;
    }
    else {
      unaff_x22 = uVar5;
      if (uVar15 <= uVar5) {
        uVar16 = 0;
        if (uVar15 != 0) {
          uVar16 = uVar5 / uVar15;
        }
        unaff_x22 = uVar5 - uVar16 * uVar15;
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 8) + unaff_x22 * 8);
    uVar16 = *param_2;
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_100670e2c;
          uVar10 = plVar8[1];
          if (uVar10 != uVar5) break;
          if (plVar8[2] == uVar16) {
            return;
          }
        }
        if ((uVar15 & extraout_x8) == 0) {
          uVar10 = uVar10 & extraout_x8;
        }
        else if (uVar15 <= uVar10) {
          uVar9 = 0;
          if (uVar15 != 0) {
            uVar9 = uVar10 / uVar15;
          }
          uVar10 = uVar10 - uVar9 * uVar15;
        }
      } while (uVar10 == unaff_x22);
    }
  }
LAB_100670e2c:
  uVar10 = param_2[1];
  plVar8 = (long *)(param_1 + 0x18);
  plVar6 = (long *)0x20;
  func_0x000107c60e20();
  *plVar6 = 0;
  plVar6[1] = uVar5;
  plVar6[2] = uVar16;
  plVar6[3] = uVar10;
  if (uVar10 != 0) {
    do {
      FUN_10060f600();
    } while (extraout_w10 != 0);
  }
  if ((uVar15 != 0) &&
     ((float)(*(long *)(param_1 + 0x20) + 1) <= *(float *)(param_1 + 0x28) * (float)uVar15))
  goto LAB_100671024;
  func_0x0001006710c8();
  bVar2 = 2 < uVar15;
  bVar3 = uVar15 == 3;
  func_0x0001006710e0();
  uVar16 = extraout_x8_00;
  if (!bVar2 || bVar3) {
    uVar16 = extraout_x9;
  }
  if (uVar16 - 1 == 0) {
    uVar16 = 2;
  }
  else if ((uVar16 & uVar16 - 1) != 0) {
    func_0x000107c60c44();
  }
  uVar15 = *(ulong *)(param_1 + 0x10);
  uVar4 = uVar16 == uVar15;
  if (uVar15 < uVar16) {
LAB_100670ecc:
    if (uVar16 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006710bc);
      (*pcVar1)();
    }
    lVar7 = uVar16 << 3;
    func_0x000107c60e20(lVar7);
    func_0x0001006710f4(param_1 + 8,lVar7);
    *(ulong *)(param_1 + 0x10) = uVar16;
    lVar7 = *(long *)(param_1 + 8);
    for (uVar15 = 0; uVar4 = uVar16 == uVar15, !(bool)uVar4; uVar15 = uVar15 + 1) {
      *(undefined8 *)(lVar7 + uVar15 * 8) = 0;
    }
    plVar11 = (long *)*plVar8;
    uVar15 = uVar16;
    if (plVar11 != (long *)0x0) {
      uVar13 = plVar11[1];
      uVar9 = uVar16 - 1;
      uVar10 = 0;
      if (uVar16 != 0) {
        uVar10 = uVar13 / uVar16;
      }
      uVar14 = uVar13;
      if (uVar16 <= uVar13) {
        uVar14 = uVar13 - uVar10 * uVar16;
      }
      uVar4 = (uVar16 & uVar9) == 0;
      if ((bool)uVar4) {
        uVar14 = uVar13 & uVar9;
      }
      *(long **)(lVar7 + uVar14 * 8) = plVar8;
      while (plVar12 = plVar11, plVar11 = (long *)*plVar12, plVar11 != (long *)0x0) {
        uVar10 = plVar11[1];
        if ((uVar16 & uVar9) == 0) {
          uVar10 = uVar10 & uVar9;
        }
        else if (uVar16 <= uVar10) {
          uVar13 = 0;
          if (uVar16 != 0) {
            uVar13 = uVar10 / uVar16;
          }
          uVar10 = uVar10 - uVar13 * uVar16;
        }
        uVar4 = uVar10 == uVar14;
        if (!(bool)uVar4) {
          if (*(long *)(lVar7 + uVar10 * 8) == 0) {
            *(long **)(lVar7 + uVar10 * 8) = plVar12;
            uVar14 = uVar10;
          }
          else {
            func_0x000107c35c40();
            lVar7 = extraout_x8_01;
            uVar9 = extraout_x9_00;
            plVar11 = extraout_x10;
            uVar14 = extraout_x11;
          }
        }
      }
    }
  }
  else if (uVar16 < uVar15) {
    uVar10 = (ulong)((float)*(ulong *)(param_1 + 0x20) / *(float *)(param_1 + 0x28));
    if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else {
      func_0x000107c35c3c();
    }
    if (uVar16 <= uVar10) {
      uVar16 = uVar10;
    }
    uVar4 = uVar16 == uVar15;
    if (uVar16 < uVar15) {
      if (uVar16 != 0) goto LAB_100670ecc;
      func_0x0001006710f4(param_1 + 8,0);
      *(undefined8 *)(param_1 + 0x10) = 0;
      uVar15 = 0;
    }
    else {
      uVar15 = *(ulong *)(param_1 + 0x10);
    }
  }
  func_0x00010067110c();
  if ((bool)uVar4) {
    unaff_x22 = extraout_x8_02 & uVar5;
  }
  else {
    unaff_x22 = uVar5;
    if (uVar15 <= uVar5) {
      uVar16 = 0;
      if (uVar15 != 0) {
        uVar16 = uVar5 / uVar15;
      }
      unaff_x22 = uVar5 - uVar16 * uVar15;
    }
  }
LAB_100671024:
  lVar7 = *(long *)(param_1 + 8);
  plVar11 = *(long **)(lVar7 + unaff_x22 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar6 = *plVar8;
    *plVar8 = (long)plVar6;
    *(long **)(lVar7 + unaff_x22 * 8) = plVar8;
    if (*plVar6 != 0) {
      uVar5 = *(ulong *)(*plVar6 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar5 = uVar5 & uVar15 - 1;
      }
      else if (uVar15 <= uVar5) {
        uVar16 = 0;
        if (uVar15 != 0) {
          uVar16 = uVar5 / uVar15;
        }
        uVar5 = uVar5 - uVar16 * uVar15;
      }
      *(long **)(lVar7 + uVar5 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar11;
    *plVar11 = (long)plVar6;
  }
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  func_0x000100671118();
  return;
}



/* Entry: 1006710c8; end: 10067111f;  */

void FUN_1006710c8(void)

{
  return;
}



/* Entry: 100671120; end: 100671163;  */

long * FUN_100671120(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10067116c(lVar1 + 0x10);
    }
    func_0x000107c60e14(lVar1);
  }
  return param_1;
}



/* Entry: 100671164; end: 10067116b;  */

void FUN_100671164(void)

{
  return;
}



/* Entry: 10067116c; end: 10067118f;  */

void FUN_10067116c(long param_1)

{
  func_0x00010063a034();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100671190; end: 100671197;  */

void FUN_100671190(void)

{
  func_0x0001005528ec();
  if ((undefined1 *)register0x00000008 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100671198; end: 1006711d7;  */

long FUN_100671198(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x10))();
  if ((char)param_1[3] == '\x01') {
    lVar2 = param_1[2];
  }
  else {
    lVar2 = 0;
  }
  return lVar2 + (long)plVar1;
}



/* Entry: 1006711d8; end: 1006711eb;  */

void FUN_1006711d8(void)

{
  return;
}



/* Entry: 1006711ec; end: 100671307;  */

void FUN_1006711ec(ulong param_1)

{
  ulong uVar1;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  undefined1 auStack_88 [40];
  uint auStack_60 [2];
  undefined8 uStack_58;
  undefined1 uStack_50;
  uint uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  FUN_1006711d8();
  FUN_100671308();
  if ((param_1 & 1) == 0) {
    *unaff_x19 = 0;
    unaff_x19[0x40] = 0;
  }
  else {
    auStack_60[0] = auStack_60[0] & 0xffffff00;
    uStack_50 = 0;
    uStack_48 = uStack_48 & 0xffffff00;
    uStack_38 = 0;
    if (*(char *)(unaff_x22 + 0x204) == '\x01' && *(uint *)(unaff_x22 + 0x200) != 0) {
      uStack_58 = *(undefined8 *)(unaff_x22 + 0x208);
      if (*(char *)(unaff_x22 + 0x210) == '\0') {
        uStack_58 = 0;
      }
      uStack_50 = 1;
      auStack_60[0] = *(uint *)(unaff_x22 + 0x200);
    }
    if (*(char *)(unaff_x22 + 0x2d0) == '\x01' && *(long *)(unaff_x22 + 0x2c8) != 0) {
      uStack_40 = *(undefined8 *)(unaff_x22 + 0x2d8);
      if (*(char *)(unaff_x22 + 0x2e0) == '\0') {
        uStack_40 = 0;
      }
      uStack_48 = (uint)*(long *)(unaff_x22 + 0x2c8);
      uStack_38 = 1;
    }
    if (*(char *)(unaff_x22 + 0x3c8) == '\x01') {
      uVar1 = unaff_x20;
      FUN_10066e034();
      if ((uVar1 & 1) == 0) {
        FUN_10066e06c();
      }
      else {
        unaff_x20 = 1;
      }
    }
    else {
      unaff_x20 = 0;
    }
    func_0x000107c33ed4(auStack_88,auStack_60,unaff_x20);
    func_0x000107c33ed8(auStack_60,auStack_88,unaff_x20);
    unaff_x19[0x40] = 1;
  }
  return;
}



/* Entry: 100671308; end: 10067138f;  */

bool FUN_100671308(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x200);
  if (*(char *)(param_1 + 0x204) == '\0') {
    iVar1 = 0;
  }
  lVar3 = *(long *)(param_1 + 0x208);
  if (*(char *)(param_1 + 0x210) == '\0') {
    lVar3 = 0;
  }
  iVar2 = *(int *)(param_1 + 0x2c8);
  if (*(char *)(param_1 + 0x2d0) == '\0') {
    iVar2 = 0;
  }
  lVar4 = *(long *)(param_1 + 0x2d8);
  if (*(char *)(param_1 + 0x2e0) == '\0') {
    lVar4 = 0;
  }
  return (iVar2 != 0 || iVar1 != 0) || (lVar4 != 0 || lVar3 != 0);
}



/* Entry: 100671390; end: 10067148f;  */

void FUN_100671390(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pppuVar2 = &ppuStack_70;
  if ((*(char *)(param_2 + 0x40) == '\x01') && (*(char *)(param_2 + 0x30) == '\x01')) {
    if (*(char *)(param_1 + 0xa8) == '\x01') {
      lVar3 = *(long *)(param_2 + 0x18);
      plVar1 = (long *)(param_1 + 0xa0);
      FUN_10068e48c();
      if (lVar3 <= *plVar1) {
        return;
      }
      uStack_38 = 0;
      uStack_30 = 0;
      ppuStack_48 = &PTR_DAT_110a609a8;
      uStack_40 = 0;
      uStack_28 = 0x2a8;
      pppuVar2 = &ppuStack_48;
      (**(code **)(**(long **)(param_1 + 0x28) + 0x50))(*(long **)(param_1 + 0x28),&ppuStack_48);
    }
    else {
      *(undefined1 *)(param_2 + 0x30) = 0;
      func_0x000107c28e40(param_1 + 0x78,param_3);
      uStack_60 = 0;
      uStack_58 = 0;
      ppuStack_70 = &PTR_DAT_110a609a8;
      uStack_68 = 0;
      uStack_50 = 0x176;
      (**(code **)(**(long **)(param_1 + 0x28) + 0x50))(*(long **)(param_1 + 0x28),&ppuStack_70);
    }
    FUN_1005505e4(pppuVar2);
  }
  return;
}



/* Entry: 100671490; end: 10067149b;  */

void FUN_100671490(void)

{
  char in_stack_00000070;
  byte in_stack_00000080;
  char in_stack_00000090;
  
  if (((in_stack_00000090 == '\x01') && ((in_stack_00000080 & 1) != 0)) &&
     (in_stack_00000070 == '\x01')) {
    func_0x000107c2a03c();
  }
  return;
}



/* Entry: 10067149c; end: 1006714fb;  */

void FUN_10067149c(ulong param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (((*(char *)(param_2 + 0x40) == '\x01') && ((*(byte *)(param_2 + 0x30) & 1) != 0)) &&
     (*(char *)(param_2 + 0x20) == '\x01')) {
    lVar1 = *(long *)(param_2 + 0x18);
    func_0x000107c2a03c();
    if (((param_1 & 1) != 0) && (param_3 == lVar1)) {
      *(undefined1 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x18);
    }
  }
  return;
}



/* Entry: 1006714fc; end: 10067153b;  */

void FUN_1006714fc(void)

{
  return;
}



/* Entry: 10067153c; end: 1006716a7;  */

void FUN_10067153c(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [72];
  
  FUN_10054f8dc(&uStack_90);
  func_0x000107c610b4(auStack_78,param_3,0x41);
  lVar8 = *(long *)(param_1 + 0x78) + 0x10;
  FUN_1006716a8();
  if ((int)lVar8 != 0) {
    pbVar1 = (byte *)(*(long *)(param_1 + 0x78) + 0xa8);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while ((cVar4 != '\0') || ((bVar3 & 1) != 0));
    lVar9 = *(long *)(param_1 + 0x78);
    if (*(char *)(lVar9 + 0xb8) == '\x01') {
      func_0x000107c33e84();
      func_0x000107c33e0c();
      func_0x000107c33e6c();
      func_0x000107c33eb8();
      func_0x000107c60e54(lVar8);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100671658);
      (*pcVar7)();
    }
    puVar10 = (undefined8 *)
              (*(long *)(lVar9 + 0xc0) + *(long *)(lVar9 + 0xd0) * *(long *)(lVar9 + 0xe0));
    uVar2 = *(long *)(lVar9 + 0xe0) + 1;
    uVar11 = *(ulong *)(lVar9 + 0xa0);
    uVar6 = 0;
    if (uVar11 != 0) {
      uVar6 = uVar2 / uVar11;
    }
    *(ulong *)(lVar9 + 0xe0) = uVar2 - uVar6 * uVar11;
    *(long *)(lVar9 + 0xe8) = *(long *)(lVar9 + 0xe8) + 1;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[1] = uStack_88;
    *puVar10 = uStack_90;
    puVar10[2] = uStack_80;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    func_0x000107c610b4(puVar10 + 3,auStack_78,0x48);
    *pbVar1 = 0;
    func_0x0001006716e0(*(undefined8 *)(param_1 + 0x78));
  }
  FUN_100100fec(&uStack_90);
  return;
}



/* Entry: 1006716a8; end: 1006716e7;  */

bool FUN_1006716a8(byte *param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  do {
    bVar1 = *param_1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while ((cVar3 != '\0') || ((bVar1 & 1) != 0));
  iVar2 = *(int *)(param_1 + 0x10);
  if (0 < iVar2) {
    *(int *)(param_1 + 0x10) = iVar2 + -1;
  }
  *param_1 = 0;
  return 0 < iVar2;
}



/* Entry: 1006716e8; end: 10067181b;  */

void FUN_1006716e8(byte *param_1)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  do {
    bVar1 = *param_1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while ((cVar3 != '\0') || ((bVar1 & 1) != 0));
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x38);
    puVar6 = (undefined8 *)
             ((*(undefined8 **)(param_1 + 0x20))[uVar5 / 0xaa] + (uVar5 % 0xaa) * 0x18);
    UNRECOVERED_JUMPTABLE = (code *)*puVar6;
    puVar2 = (undefined8 *)puVar6[1];
    plVar7 = (long *)puVar6[2];
    *(ulong *)(param_1 + 0x38) = uVar5 + 1;
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
    if (0x153 < uVar5 + 1) {
      func_0x000107c60e14(**(undefined8 **)(param_1 + 0x20));
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 8;
      *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + -0xaa;
    }
    *param_1 = 0;
    if (plVar7 == (long *)0x0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100671800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(puVar2);
        return;
      }
      (*(code *)*puVar2)(puVar2);
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7,UNRECOVERED_JUMPTABLE,puVar2);
    }
    return;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *param_1 = 0;
  return;
}



/* Entry: 10067181c; end: 100671857;  */

void FUN_10067181c(void)

{
  return;
}



/* Entry: 100671858; end: 100671893;  */

long FUN_100671858(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1006a2464();
    lVar2 = uVar1 + 0x378;
  }
  else {
    lVar2 = param_1;
    FUN_1006718a8();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x378;
}



/* Entry: 100671894; end: 1006718a7;  */

void FUN_100671894(void)

{
  return;
}



/* Entry: 1006718a8; end: 100671933;  */

long FUN_1006718a8(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  FUN_100671894();
  FUN_100671934();
  func_0x0001006719e8(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x378,unaff_x19 + 2);
  FUN_100671a50(lStack_48);
  lStack_48 = lStack_48 + 0x378;
  FUN_100671b2c();
  lVar1 = unaff_x19[1];
  func_0x000100671cdc();
  return lVar1;
}



/* Entry: 100671934; end: 1006719c3;  */

/* WARNING: Possible PIC construction at 0x0001006719d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006719d8) */

ulong FUN_100671934(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  if (0x49cd42e2049cd4 < param_2) {
    puVar4 = &stack0xfffffffffffffff0;
    uVar5 = 0x100671994;
    func_0x000104bf1c8c();
    puVar2 = &stack0xfffffffffffffff0;
    while (0x49cd42e2049cd4 < param_2) {
      *(undefined1 **)(puVar2 + -0x10) = puVar4;
      *(undefined8 *)(puVar2 + -8) = uVar5;
      func_0x000104bd35f4();
      *(undefined8 *)(puVar2 + -0x30) = unaff_x20;
      *(ulong *)(puVar2 + -0x28) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x20) = puVar2 + -0x10;
      *(code **)(puVar2 + -0x18) = FUN_1006719c4;
      puVar4 = puVar2 + -0x20;
      uVar5 = 0x1006719d8;
      puVar2 = puVar2 + -0x30;
      unaff_x19 = param_2;
    }
    param_2 = param_2 * 0x378;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2);
    return param_2;
  }
  uVar1 = (param_1[2] - *param_1) / 0x378;
  uVar3 = uVar1 * 2;
  if (uVar3 < param_2 || uVar3 - param_2 == 0) {
    uVar3 = param_2;
  }
  if (0x24e6a171024e69 < uVar1) {
    uVar3 = 0x49cd42e2049cd4;
  }
  return uVar3;
}



/* Entry: 1006719c4; end: 100671a33;  */

void FUN_1006719c4(void)

{
  func_0x000100671994();
  return;
}



/* Entry: 100671a34; end: 100671a4f;  */

void FUN_100671a34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Entry: 100671a50; end: 100671b2b;  */

void FUN_100671a50(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  FUN_100671a34();
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x10) = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  func_0x00010066f06c();
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (*(char *)(param_2 + 10) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    *(undefined1 *)(unaff_x19 + 0x50) = 1;
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined1 *)(unaff_x19 + 0x60) = *(undefined1 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar1;
  FUN_10066ee88(unaff_x19 + 0x68,unaff_x20 + 0x68);
  FUN_10066f088(unaff_x19 + 0x180,unaff_x20 + 0x180);
  func_0x000107c610b4(unaff_x19 + 0x1c0,unaff_x20 + 0x1c0,0x84);
  FUN_10061fb2c(unaff_x19 + 0x248,unaff_x20 + 0x248);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x268);
  *(undefined8 *)(unaff_x19 + 0x270) = *(undefined8 *)(unaff_x20 + 0x270);
  *(undefined8 *)(unaff_x19 + 0x268) = uVar1;
  FUN_10066f0b4(unaff_x19 + 0x278,unaff_x20 + 0x278);
  FUN_10066f0f0(unaff_x19 + 0x358,unaff_x20 + 0x358);
  return;
}



/* Entry: 100671b2c; end: 100671b37;  */

void FUN_100671b2c(void)

{
  undefined1 *puVar1;
  long *unaff_x19;
  
  puVar1 = &stack0x00000008;
  FUN_10066df1c();
  FUN_100671ba4(unaff_x19 + 2,*unaff_x19,unaff_x19[1],
                *(long *)(puVar1 + 8) + ((unaff_x19[1] - *unaff_x19) / -0x378) * 0x378);
  func_0x000100671c8c();
  return;
}



/* Entry: 100671b38; end: 100671b7b;  */

void FUN_100671b38(long *param_1,long param_2)

{
  FUN_10066df1c();
  FUN_100671ba4(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x378) * 0x378);
  func_0x000100671c8c();
  return;
}



/* Entry: 100671b7c; end: 100671ba3;  */

void FUN_100671b7c(void)

{
  return;
}



/* Entry: 100671ba4; end: 100671c1b;  */

void FUN_100671ba4(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  FUN_100671b7c();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x378) {
    FUN_100671a50(in_x3,unaff_x22);
    in_x3 = lStack_38 + 0x378;
    lStack_38 = in_x3;
  }
  uStack_48 = 1;
  FUN_100671c1c();
  FUN_100671c4c(auStack_60);
  return;
}



/* Entry: 100671c1c; end: 100671c4b;  */

void FUN_100671c1c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x378) {
    FUN_10066f6f4();
  }
  return;
}



/* Entry: 100671c4c; end: 100671c7b;  */

long FUN_100671c4c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x000104bf1c9c(param_1);
  }
  return param_1;
}



/* Entry: 100671c7c; end: 100671ceb;  */

void FUN_100671c7c(void)

{
  return;
}



/* Entry: 100671cec; end: 100671d4b;  */

long * FUN_100671cec(long *param_1)

{
  func_0x000100671ce4();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100671d4c; end: 100671d53;  */

undefined1 * FUN_100671d4c(void)

{
  undefined1 *puStack_28;
  
  FUN_10066f12c(&stack0x00000360);
  FUN_10066d68c(&stack0x00000280);
  FUN_1005fce88(&stack0x00000250);
  FUN_10066c37c(&stack0x00000188);
  FUN_10066f14c(&stack0x00000070);
  FUN_1001148fc(&stack0x00000040);
  func_0x0001005fb56c(&stack0x00000028);
  puStack_28 = &stack0x00000008;
  func_0x000100100fd4(&puStack_28);
  return &stack0x00000008;
}



/* Entry: 100671d54; end: 100671ddb; +[SCAPISessionTaskBookkeeper shared] */

void FUN_100671d54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_100671ddc;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137f44c0 != -1) {
    FUN_10002a2fc(0x1137f44c0,&puStack_48);
  }
  uVar1 = uRam00000001137f44c8;
  func_0x000107c61174(uRam00000001137f44c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100671ddc; end: 100671e03;  */

void FUN_100671ddc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c610fc();
  uVar1 = uRam00000001137f44c8;
  uRam00000001137f44c8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100671e04; end: 100671ecb; -[SCAPISessionTaskBookkeeper init] */

undefined1 * FUN_100671e04(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705f88;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x20) = 1;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100671ecc; end: 100672063;  */

ulong FUN_100671ecc(ulong param_1,long param_2)

{
  byte bVar1;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  if (*(byte *)(param_1 + 0x10) != *(byte *)(param_2 + 0x10)) {
    return (ulong)(*(byte *)(param_1 + 0x10) < *(byte *)(param_2 + 0x10));
  }
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == *(byte *)(param_2 + 0x10)) {
    uStack_12 = 0xaa;
    func_0x000100671fec(param_1,param_1 + bVar1,param_2,param_2 + (ulong)bVar1,&uStack_11,&uStack_12
                        ,&uStack_12);
    return param_1;
  }
  return (ulong)(bVar1 < *(byte *)(param_2 + 0x10));
}



/* Entry: 100672064; end: 10067207f;  */

void FUN_100672064(long param_1)

{
  FUN_10062b1c0();
  *(undefined1 *)(param_1 + 0x260) = 1;
  return;
}



/* Entry: 100672080; end: 1006720bb;  */

int FUN_100672080(int param_1,int *param_2)

{
  if ((char)param_2[1] == '\x01') {
    if (*param_2 == 1) {
      return 1;
    }
    if (*param_2 == 2) {
      return 4;
    }
  }
  if (4 < param_1 - 1U) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1006720bc; end: 100672163;  */

undefined8 *
FUN_1006720bc(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined4 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
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
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined8 *)((long)param_1 + 0x1c) = param_4;
  FUN_10061fb2c(param_1 + 5,param_5);
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*(char *)(param_6 + 3) == '\x01') {
    uVar2 = param_6[1];
    uVar1 = *param_6;
    param_1[0xb] = param_6[2];
    param_1[10] = uVar2;
    param_1[9] = uVar1;
    param_6[1] = 0;
    param_6[2] = 0;
    *param_6 = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  *(undefined4 *)(param_1 + 0xd) = param_7;
  *(undefined1 *)((long)param_1 + 0x6c) = param_8;
  return param_1;
}



/* Entry: 100672164; end: 1006721f3;  */

void FUN_100672164(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  FUN_100671a34();
  *(undefined8 *)(param_1 + 0x10) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = param_2[3];
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  FUN_10061fb2c(param_1 + 0x28,param_2 + 5);
  *(undefined1 *)(unaff_x19 + 0x48) = 0;
  *(undefined1 *)(unaff_x19 + 0x60) = 0;
  if (*(char *)(unaff_x20 + 0x60) == '\x01') {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x20 + 0x58);
    *(undefined8 *)(unaff_x19 + 0x50) = uVar3;
    *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined1 *)(unaff_x19 + 0x60) = 1;
  }
  uVar1 = *(undefined4 *)(unaff_x20 + 0x68);
  *(undefined1 *)(unaff_x19 + 0x6c) = *(undefined1 *)(unaff_x20 + 0x6c);
  *(undefined4 *)(unaff_x19 + 0x68) = uVar1;
  return;
}



/* Entry: 1006721f4; end: 10067220f;  */

void FUN_1006721f4(long param_1)

{
  FUN_100672164();
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 100672210; end: 10067223b;  */

long FUN_100672210(long param_1)

{
  long lStack_28;
  
  FUN_1001148fc(param_1 + 0x48);
  FUN_1005fce88(param_1 + 0x28);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 10067223c; end: 100672243;  */

undefined8 FUN_10067223c(undefined8 param_1)

{
  undefined8 uStack_8;
  
  uStack_8 = param_1;
  func_0x000100100fd4(&uStack_8);
  return param_1;
}



/* Entry: 100672244; end: 10067225f; -[SCNetworkDeps backgroundTaskWrapper] */

void FUN_100672244(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x38,1);
  return;
}



/* Entry: 100672260; end: 1006722cb;  */

undefined8 FUN_100672260(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c3e5d8(uStack_28);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  uVar2 = uVar1;
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1006722cc; end: 1006722db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006722cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&lStack_58);
  uVar4 = *(undefined8 *)(lStack_58 + _DAT_1130809c0);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(lStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  uVar2 = uStack_68;
  func_0x000107c3ddb0(uStack_68);
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  FUN_100083b20(&lStack_70);
  uVar6 = *(undefined8 *)(lStack_70 + _DAT_113091b70);
  func_0x000107c615f0(uVar6);
  func_0x000107c61170(lStack_70);
  FUN_100083b20(&lStack_78);
  uVar5 = *(undefined8 *)(lStack_78 + _DAT_113091b78);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(lStack_78);
  func_0x000107c3dfc0(uVar5);
  func_0x000107c615e8(uVar5);
  puVar3 = PTR_PTR_1126a7070;
  func_0x000107c610f8();
  func_0x000107c459e8();
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar4);
  func_0x000107c615e8(uStack_60);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar6);
  *param_1 = puVar3;
  return;
}



/* Entry: 1006722dc; end: 10067246b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006722dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000ad7c4();
  FUN_100083b20(&lStack_58);
  uVar3 = *(undefined8 *)(lStack_58 + _DAT_1130809c0);
  func_0x000107c615f0(uVar3);
  func_0x000107c61170(lStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  uVar1 = uStack_68;
  func_0x000107c3ddb0(uStack_68);
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  FUN_100083b20(&lStack_70);
  uVar5 = *(undefined8 *)(lStack_70 + _DAT_113091b70);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(lStack_70);
  FUN_100083b20(&lStack_78);
  uVar4 = *(undefined8 *)(lStack_78 + _DAT_113091b78);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(lStack_78);
  func_0x000107c3dfc0(uVar4);
  func_0x000107c615e8(uVar4);
  puVar2 = PTR_PTR_1126a7070;
  func_0x000107c610f8();
  func_0x000107c459e8();
  func_0x000107c61170(param_2);
  func_0x000107c615e8(uVar3);
  func_0x000107c615e8(uStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar5);
  *param_1 = puVar2;
  return;
}



/* Entry: 10067246c; end: 10067247f;  */

void FUN_10067246c(long param_1,long param_2)

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



/* Entry: 100672480; end: 1006724f7;  */

void FUN_100672480(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  FUN_1002921c4();
  FUN_10054f8dc();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(unaff_x20 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  FUN_100606fd8(param_1 + 0x28,unaff_x20 + 0x28);
  FUN_10028af84(unaff_x19 + 0x48,unaff_x20 + 0x48);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x68);
  *(undefined1 *)(unaff_x19 + 0x6c) = *(undefined1 *)(unaff_x20 + 0x6c);
  *(undefined4 *)(unaff_x19 + 0x68) = uVar1;
  return;
}



/* Entry: 1006724f8; end: 10067252f;  */

void FUN_1006724f8(long param_1)

{
  FUN_100672480();
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 100672530; end: 10067258b; -[SCObservable flatMap:] */

void FUN_100672530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2ed0;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c47d80();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10067258c; end: 10067261b; -[SCFlatMappedObservable initWithParentObservable:mapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10067258c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270e498;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_initWithParentObservable__1125ea888,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127966b0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127966b0) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10067261c; end: 10067261f;  */

void FUN_10067261c(long param_1,long param_2)

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



/* Entry: 100672620; end: 1006726e7; -[SCFlatMappedObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100672620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126e2ec8;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c47bb0();
  func_0x000107c61170(param_3);
  puVar2 = PTR_PTR_1126e2ea8;
  func_0x000107c610f4(PTR_PTR_1126e2ea8);
  func_0x000107c4e358(param_1);
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c5c310();
  func_0x000107c61180();
  func_0x000107c486f4(puVar2,param_2,puVar1,uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006726e8; end: 100672733; -[SCFlatMapObserver .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006726e8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112796868);
  *puVar1 = 0x32aaaba7;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112796874);
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = puVar1 + 1;
  return;
}



/* Entry: 100672734; end: 100672817; -[SCFlatMapObserver initWithObserver:mapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100672734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270e5e8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112796860;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112796864);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112796864) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100672818; end: 10067281f;  */

undefined1  [16] FUN_100672818(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar12 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x000107c5f804();
  lVar15 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar14 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d4();
  lVar3 = lVar12;
  func_0x000107c5dc1c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c60234(&uStack_80);
    func_0x000107c615e8(lVar3);
  }
  puVar4 = &uStack_80;
  func_0x000100087f6c();
  FUN_100673624();
  func_0x000107c61534();
  puVar4[3] = 3;
  puVar4[2] = 1;
  puVar7 = puVar4 + 4;
  *puVar7 = puVar2;
  func_0x000107c61174();
  puVar5 = puVar4;
  FUN_100673700(puVar4);
  func_0x000107c61588(puVar4);
  uVar13 = puVar4[2];
  uVar6 = 0;
  FUN_1006739f8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61408(puVar7,uVar13,uVar6);
  FUN_100120cb0();
  puVar4 = puVar5;
  func_0x000107c5fe08(puVar5,uVar6,puVar7);
  func_0x000107c6142c(puVar5);
  FUN_1006739f8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar15 + 0x68))
            (puVar14,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
             lVar1);
  puVar8 = puVar14;
  func_0x000107c5fff0(puVar14);
  (**(code **)(lVar15 + 8))(puVar14,lVar1);
  puVar9 = &UNK_1103f3040;
  func_0x000107c613fc(&UNK_1103f3040,0x20,7);
  *(undefined **)(puVar9 + 0x10) = puVar2;
  *(undefined8 *)(puVar9 + 0x18) = param_1;
  puStack_b8 = &UNK_1016898a4;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0x42000000;
  puStack_c8 = &UNK_10168981c;
  puStack_c0 = &UNK_1103f3058;
  ppuVar10 = &puStack_d8;
  puStack_b0 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar9 = puStack_b0;
  func_0x000107c61174(puVar2);
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar9);
  func_0x000107c4da64();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar8);
  puVar9 = &UNK_1103f3090;
  func_0x000107c613fc(&UNK_1103f3090,0x18,7);
  *(long *)(puVar9 + 0x10) = lVar12;
  uVar6 = 0;
  FUN_1000b6d30(0);
  func_0x000107c613fc();
  puVar11 = &UNK_1016898b4;
  FUN_1000b6d50(&UNK_1016898b4,puVar9,uVar6);
  func_0x000107c61170(puVar2);
  FUN_10006e7f4(&uStack_80);
  auVar16._8_8_ = &PTR_DAT_1107aaa40;
  auVar16._0_8_ = puVar11;
  return auVar16;
}



/* Entry: 100672820; end: 100672aff;  */

undefined1  [16] FUN_100672820(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long extraout_x8;
  undefined8 uVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar14 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar13 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d4();
  lVar3 = param_2;
  func_0x000107c5dc1c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c60234(&uStack_80);
    func_0x000107c615e8(lVar3);
  }
  puVar4 = &uStack_80;
  func_0x000100087f6c();
  FUN_100673624();
  func_0x000107c61534();
  puVar4[3] = 3;
  puVar4[2] = 1;
  puVar7 = puVar4 + 4;
  *puVar7 = puVar2;
  func_0x000107c61174();
  puVar5 = puVar4;
  FUN_100673700(puVar4);
  func_0x000107c61588(puVar4);
  uVar12 = puVar4[2];
  uVar6 = 0;
  FUN_1006739f8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61408(puVar7,uVar12,uVar6);
  FUN_100120cb0();
  puVar4 = puVar5;
  func_0x000107c5fe08(puVar5,uVar6,puVar7);
  func_0x000107c6142c(puVar5);
  FUN_1006739f8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar14 + 0x68))
            (puVar13,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
             lVar1);
  puVar8 = puVar13;
  func_0x000107c5fff0(puVar13);
  (**(code **)(lVar14 + 8))(puVar13,lVar1);
  puVar9 = &UNK_1103f3040;
  func_0x000107c613fc(&UNK_1103f3040,0x20,7);
  *(undefined **)(puVar9 + 0x10) = puVar2;
  *(undefined8 *)(puVar9 + 0x18) = param_1;
  puStack_b8 = &UNK_1016898a4;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0x42000000;
  puStack_c8 = &UNK_10168981c;
  puStack_c0 = &UNK_1103f3058;
  ppuVar10 = &puStack_d8;
  puStack_b0 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar9 = puStack_b0;
  func_0x000107c61174(puVar2);
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar9);
  func_0x000107c4da64();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar8);
  puVar9 = &UNK_1103f3090;
  func_0x000107c613fc(&UNK_1103f3090,0x18,7);
  *(long *)(puVar9 + 0x10) = param_2;
  uVar6 = 0;
  FUN_1000b6d30(0);
  func_0x000107c613fc();
  puVar11 = &UNK_1016898b4;
  FUN_1000b6d50(&UNK_1016898b4,puVar9,uVar6);
  func_0x000107c61170(puVar2);
  FUN_10006e7f4(&uStack_80);
  auVar15._8_8_ = &PTR_DAT_1107aaa40;
  auVar15._0_8_ = puVar11;
  return auVar15;
}



/* Entry: 100672b00; end: 100672b4f;  */

void FUN_100672b00(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100672b50; end: 100672c27;  */

undefined8 FUN_100672b50(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d387f8;
  FUN_1000285a8(0x112d387f8,&UNK_10d902650);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100672c28; end: 100672c37;  */

void FUN_100672c28(undefined8 *param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x18),PTR_s_next__112614028,*param_1);
  return;
}



/* Entry: 100672c38; end: 100672e77; -[SCFlatMapObserver next:] */

/* WARNING: Possible PIC construction at 0x000100672de8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100672df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100672dd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100672dfc) */
/* WARNING: Removing unreachable block (ram,0x000100672dec) */
/* WARNING: Removing unreachable block (ram,0x000100672ddc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100672c38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  func_0x000107c61174(param_3);
  lVar2 = *(long *)(param_1 + _DAT_112796864);
  (**(code **)(lVar2 + 0x10))(lVar2,param_3);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126e3018;
  func_0x000107c610f4();
  func_0x000107c46b18();
  lVar6 = (long)_DAT_112796868;
  func_0x000107c60d88(param_1 + lVar6);
  *(long *)(param_1 + _DAT_11279686c) = *(long *)(param_1 + _DAT_11279686c) + 1;
  func_0x000107c60d8c(param_1 + lVar6);
  func_0x000107c5c310();
  func_0x000107c61180();
  func_0x000107c60d88(param_1 + lVar6);
  if ((*(byte *)(param_1 + _DAT_112796870) & 1) == 0) {
    plVar1 = (long *)(param_1 + _DAT_112796874);
    plVar5 = (long *)plVar1[1];
    plVar7 = plVar1 + 1;
    while (plVar8 = plVar7, plVar5 != (long *)0x0) {
      while (plVar4 = plVar5, plVar7 = plVar4, (undefined *)plVar4[4] <= puVar3) {
        if (puVar3 <= (undefined *)plVar4[4]) goto LAB_100672dc8;
        plVar5 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) {
          plVar8 = plVar4 + 1;
          goto LAB_100672d74;
        }
      }
      plVar5 = (long *)*plVar4;
    }
LAB_100672d74:
    plVar4 = (long *)0x30;
    func_0x000107c60e20();
    func_0x000107c61174(puVar3);
    plVar4[4] = (long)puVar3;
    plVar4[5] = 0;
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = (long)plVar7;
    *plVar8 = (long)plVar4;
    if (*(long *)*plVar1 != 0) {
      *plVar1 = *(long *)*plVar1;
    }
    FUN_10002c5b0(plVar1[1],plVar4);
    plVar1[2] = plVar1[2] + 1;
LAB_100672dc8:
    func_0x000107c61174(lVar2);
    lVar6 = plVar4[5];
    plVar4[5] = lVar2;
  }
  else {
    func_0x000107c60d8c(param_1 + lVar6);
    func_0x000107c4218c(lVar2);
    lVar6 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 100672e78; end: 100672ecf;  */

void FUN_100672e78(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  uVar3 = param_2;
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100672ed0; end: 100672ed7;  */

undefined * FUN_100672ed0(undefined *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  puVar4 = *(undefined **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    func_0x000107c4a8a4(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
  }
  else {
    func_0x000107c49820();
    puVar3 = PTR_PTR_1126ae6b8;
    if (param_1 == (undefined *)0xffffffffffffffff) {
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      func_0x000107c4a8a4(puVar3);
    }
    else if (param_1 == (undefined *)0x0) {
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      func_0x000107c4a8a4(puVar3);
    }
    else {
      if (param_1 != (undefined *)0x3) {
        func_0x000101689720(0);
        puStack_88 = param_1;
        func_0x000107c60614();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006731c8);
        (*pcVar1)();
      }
      uVar9 = *(undefined8 *)(lVar2 + 0x10);
      func_0x000107c615f0(uVar9);
      uVar5 = 0xd00000000000001b;
      func_0x000107c5fadc(0xd00000000000001b,0x800000010efb51c0);
      uVar6 = uVar9;
      func_0x000107c3ebd4();
      func_0x000107c615e8(uVar9);
      func_0x000107c61170(uVar5);
      if ((int)uVar6 != 0) {
        func_0x000107c5d6fc(puVar4);
        func_0x000107c61180();
        puVar3 = &UNK_1103f2f00;
        func_0x000107c613fc(&UNK_1103f2f00,0x18,7);
        func_0x000107c61644(puVar3 + 0x10,lVar2);
        puVar7 = &UNK_1103f2fa0;
        func_0x000107c613fc(&UNK_1103f2fa0,0x20,7);
        *(undefined **)(puVar7 + 0x10) = puVar3;
        *(undefined8 *)(puVar7 + 0x18) = 3;
        puStack_68 = &UNK_101689770;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_101689784;
        puStack_70 = &UNK_1103f2fb8;
        ppuVar8 = &puStack_88;
        puStack_60 = puVar7;
        func_0x000107c60bc4(ppuVar8);
        func_0x000107c61574(puStack_60);
        puVar3 = puVar4;
        func_0x000107c436a8(puVar4);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61574(lVar2);
        func_0x000107c61170(puVar4);
        return puVar3;
      }
      puVar3 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      func_0x000107c4a8a4(puVar3);
    }
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61574(lVar2);
  }
  return puVar3;
}



/* Entry: 100672ed8; end: 1006731c7;  */

undefined * FUN_100672ed8(undefined *param_1,long param_2,undefined *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    func_0x000107c4a8a4(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
  }
  else {
    func_0x000107c49820();
    puVar2 = PTR_PTR_1126ae6b8;
    if (param_1 == (undefined *)0xffffffffffffffff) {
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      func_0x000107c4a8a4(puVar2);
    }
    else if (param_1 == (undefined *)0x0) {
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      func_0x000107c4a8a4(puVar2);
    }
    else {
      if (param_1 != (undefined *)0x3) {
        func_0x000101689720(0);
        puStack_88 = param_1;
        func_0x000107c60614();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006731c8);
        (*pcVar1)();
      }
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      func_0x000107c615f0(uVar7);
      uVar4 = 0xd00000000000001b;
      func_0x000107c5fadc(0xd00000000000001b,0x800000010efb51c0);
      uVar5 = uVar7;
      func_0x000107c3ebd4();
      func_0x000107c615e8(uVar7);
      func_0x000107c61170(uVar4);
      if ((int)uVar5 != 0) {
        func_0x000107c5d6fc(param_3);
        func_0x000107c61180();
        puVar2 = &UNK_1103f2f00;
        func_0x000107c613fc(&UNK_1103f2f00,0x18,7);
        func_0x000107c61644(puVar2 + 0x10,param_2);
        puVar3 = &UNK_1103f2fa0;
        func_0x000107c613fc(&UNK_1103f2fa0,0x20,7);
        *(undefined **)(puVar3 + 0x10) = puVar2;
        *(undefined8 *)(puVar3 + 0x18) = 3;
        puStack_68 = &UNK_101689770;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_101689784;
        puStack_70 = &UNK_1103f2fb8;
        ppuVar6 = &puStack_88;
        puStack_60 = puVar3;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_60);
        puVar2 = param_3;
        func_0x000107c436a8(param_3);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61574(param_2);
        func_0x000107c61170(param_3);
        return puVar2;
      }
      puVar2 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      func_0x000107c4a8a4(puVar2);
    }
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61574(param_2);
  }
  return puVar2;
}



/* Entry: 1006731c8; end: 1006731eb;  */

void FUN_1006731c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006731ec; end: 10067326b;  */

void FUN_1006731ec(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
  FUN_1006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  FUN_100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


