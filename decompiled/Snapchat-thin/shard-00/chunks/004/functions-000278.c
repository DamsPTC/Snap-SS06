/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100619828; end: 10061988b;  */

void FUN_100619828(undefined8 *param_1,int param_2)

{
  long unaff_x20;
  
  if (param_2 == 0) {
    *param_1 = 1;
    param_1[1] = 8;
    param_1[2] = "trailers";
    return;
  }
  func_0x000107c2c1a8();
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10061988c; end: 100619acb; -[SCUnifiedGRPCClientFactoryImpl createGRPCServiceWithServiceName:grpcParamsBuilder:queue:] */

void FUN_10061988c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    puVar4 = PTR_PTR_1126b8288;
    func_0x000107c610f4();
    func_0x000107c487f0();
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  puVar1 = PTR_PTR_1126b4ec0;
  func_0x000107c610f4();
  func_0x000107c47de8();
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c4a02c();
  uVar5 = *(undefined8 *)(param_1 + 8);
  if ((int)puVar2 == 0) {
    func_0x000107c5c734(uVar5);
    func_0x000107c61180();
    func_0x000107c53b60(param_4,param_2,uVar5);
    func_0x000107c611b0();
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126b4ec8;
    func_0x000107c40900(PTR_PTR_1126b4ec8,param_2,param_3,param_4,puVar4,puVar1);
    func_0x000107c61180();
  }
  else {
    func_0x000107c61174(uVar5);
    puVar3 = PTR_PTR_1126ae720;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    puStack_90 = &UNK_1053bdcac;
    puStack_88 = &UNK_110882200;
    func_0x000107c61174(param_4);
    uStack_80 = param_4;
    uStack_78 = uVar5;
    func_0x000107c61174(param_3);
    uStack_70 = param_3;
    func_0x000107c61174(param_4);
    uStack_68 = param_4;
    func_0x000107c61174(puVar4);
    puStack_60 = puVar4;
    func_0x000107c61174(puVar1);
    puStack_58 = puVar1;
    func_0x000107c61174(uVar5);
    func_0x000107c3e4fc(puVar3,param_2,&puStack_a0);
    func_0x000107c61180();
    puVar2 = PTR_PTR_1126b8298;
    func_0x000107c610f4(PTR_PTR_1126b8298);
    func_0x000107c4827c();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puStack_58);
    func_0x000107c61170(puStack_60);
    func_0x000107c61170(uStack_68);
    func_0x000107c61170(uStack_70);
    func_0x000107c61170(uStack_78);
    func_0x000107c61170(uStack_80);
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100619acc; end: 100619ad3;  */

void FUN_100619acc(long param_1)

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



/* Entry: 100619ad4; end: 100619b87;  */

void FUN_100619ad4(long param_1)

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



/* Entry: 100619b88; end: 100619e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100619b88(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  code *pcVar11;
  undefined *puStack_68;
  
  uVar1 = 0;
  func_0x000100619b48(0,0x112ee32c0,&PTR_PTR_1126b1370);
  puVar2 = &UNK_102a34b98;
  FUN_1000d5158(&UNK_102a34b98,0,uVar1);
  uVar1 = 1;
  FUN_10061b458(1);
  func_0x000107c61574(puVar2);
  FUN_10061bc80();
  func_0x000107c61574(uVar1);
  puVar3 = &UNK_110589820;
  func_0x000107c613fc(&UNK_110589820,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  puVar3[0x18] = 1;
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ee3218);
  puVar4 = &UNK_110589848;
  func_0x000107c613fc(&UNK_110589848,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  func_0x000107c61174();
  puVar5 = &UNK_100c81df8;
  FUN_1000c0ebc(&UNK_100c81df8,puVar4);
  func_0x000107c61574(puVar4);
  ppuVar6 = (undefined **)0x1;
  FUN_10061b458(1);
  func_0x000107c61574(puVar5);
  uVar1 = uVar10;
  func_0x000107c49a44();
  ppuVar7 = ppuVar6;
  if ((int)uVar1 != 0) {
    *(undefined8 *)(puVar3 + 0x10) = 3;
    puVar3[0x18] = 0;
    FUN_1000285a8(0x112ee3010,&UNK_10db0e2d0);
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    ppuVar7 = &puStack_68;
    puStack_68 = puVar4;
    func_0x000100854cb0(ppuVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c61574(ppuVar6);
  }
  plVar8 = param_3;
  FUN_10061da28(param_3,puVar2);
  puVar4 = &UNK_110589780;
  func_0x000107c613fc(&UNK_110589780,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_110589870;
  func_0x000107c613fc(&UNK_110589870,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar10;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  *(long **)(puVar5 + 0x28) = param_3;
  puVar4 = &UNK_110589898;
  func_0x000107c613fc(&UNK_110589898,0x20,7);
  *(undefined **)(puVar4 + 0x10) = &UNK_100c820c8;
  *(undefined **)(puVar4 + 0x18) = puVar5;
  pcVar11 = *(code **)(*plVar8 + 0x60);
  func_0x000107c61174(uVar10);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(param_3);
  puVar5 = &UNK_100c820d4;
  puVar9 = puVar4;
  (*pcVar11)(&UNK_100c820d4);
  func_0x000107c61574(plVar8);
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c614f0(puVar5);
  (**(code **)(puVar9 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112ee31d0),puVar4,puVar9);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(ppuVar7);
  func_0x000107c615e8(puVar5);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 100619e30; end: 100619e3b;  */

void FUN_100619e30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100619e3c; end: 100619e73; -[SCNGrpcParamsBuilder setCronetStreamEnginePtr:] */

long FUN_100619e3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100619e74; end: 10061a01f; +[SCNGrpcUnifiedGrpcService create:grpcParametersBuilder:authDelegate:queue:] */

void FUN_100619e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int extraout_w10;
  undefined ***pppuVar1;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined **appuStack_78 [2];
  long lStack_68;
  long lStack_60;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c61174(param_3);
  FUN_10061a020();
  func_0x00010061a028();
  func_0x00010061a030();
  func_0x00010061a038();
  FUN_10061a044(appuStack_78,param_4);
  FUN_100459fd0(auStack_88,param_5);
  FUN_10049e05c(auStack_98,param_6);
  FUN_10061a3ac(&lStack_50,&lStack_68,appuStack_78,auStack_88,auStack_98);
  FUN_100554470(auStack_98);
  func_0x00010048b850(auStack_88);
  FUN_10046e224(appuStack_78);
  FUN_1006235bc();
  if (lStack_50 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    appuStack_78[0] = &PTR_DAT_110cd0718;
    lStack_68 = lStack_50;
    lStack_60 = lStack_48;
    if (lStack_48 != 0) {
      do {
        func_0x0001006235c4();
      } while (extraout_w10 != 0);
    }
    pppuVar1 = appuStack_78;
    FUN_10015c218(pppuVar1,&lStack_68,FUN_1006235d4);
    func_0x000107c61180();
    FUN_1000df524(&lStack_68);
  }
  func_0x00010062385c(&lStack_50);
  func_0x00010062388c();
  func_0x000100623894();
  func_0x00010062389c();
  func_0x0001006238a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar1);
  return;
}



/* Entry: 10061a020; end: 10061a043;  */

void FUN_10061a020(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10061a044; end: 10061a13f;  */

void FUN_10061a044(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126e0058;
    func_0x000107c61158(PTR_PTR_1126e0058);
    uVar3 = param_2;
    func_0x000107c6115c(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      func_0x000107c61174(param_2);
      ppuStack_38 = &PTR_DAT_110cd02c0;
      uStack_40 = param_2;
      FUN_1000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_10061a140);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_1000df524(&uStack_30);
      func_0x000107c61170(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_10061a244(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_10061a234();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10061a140; end: 10061a233;  */

void FUN_10061a140(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110cd0300;
  puVar1[3] = &PTR_DAT_110cd0378;
  puVar2 = puVar5;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar3 = puVar2;
  FUN_1000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10061a234();
    } while (extraout_w10 != 0);
  }
  func_0x000107c61174(puVar5);
  puVar1[6] = puVar5;
  func_0x000107c61108(puVar2);
  func_0x000107c61170(puVar5);
  puVar1[3] = &PTR_DAT_110cd0350;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10061a244(&uStack_50);
  return;
}



/* Entry: 10061a234; end: 10061a243;  */

void FUN_10061a234(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10061a244; end: 10061a26b;  */

long FUN_10061a244(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10061a26c; end: 10061a273;  */

void FUN_10061a26c(void)

{
  return;
}



/* Entry: 10061a274; end: 10061a29f;  */

long FUN_10061a274(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10061a274();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10061a2a0; end: 10061a2c7;  */

long FUN_10061a2a0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10061a274();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10061a2c8; end: 10061a37b;  */

void FUN_10061a2c8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 uStack_71;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  puVar2 = auStack_60;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10061a2a0(auStack_60,1);
  FUN_10061a6bc(lStack_50,param_3,param_4,param_5,param_6);
  lVar1 = lStack_50;
  lStack_50 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000100622e00(auStack_60);
  func_0x000100622dec(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c35334();
  func_0x000100622e00();
  func_0x000107c352ec();
  pcStack_68 = FUN_10061a37c;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_10061a2c8(&uStack_71,puVar2,param_3,param_4,param_5);
  return;
}



/* Entry: 10061a37c; end: 10061a3ab;  */

void FUN_10061a37c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  FUN_10061a2c8(&uStack_11,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10061a3ac; end: 10061a3eb;  */

void FUN_10061a3ac(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10061a37c(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_100622e1c(&uStack_30);
  return;
}



/* Entry: 10061a3ec; end: 10061a3f3;  */

void FUN_10061a3ec(void)

{
  return;
}



/* Entry: 10061a3f4; end: 10061a6bb;  */

undefined8 *
FUN_10061a3f4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int extraout_w10;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_230;
  long lStack_228;
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [169];
  undefined1 uStack_167;
  undefined1 **ppuStack_150;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [23];
  undefined1 uStack_121;
  undefined1 **ppuStack_120;
  undefined1 *apuStack_118 [2];
  undefined8 *puStack_108;
  undefined4 uStack_f0;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_DAT_110ccd4c0;
  puVar4 = param_1 + 1;
  *puVar4 = 0;
  param_1[2] = 0;
  func_0x000107c60c94(param_1 + 3);
  puVar5 = param_1 + 6;
  *puVar5 = 0;
  param_1[7] = 0;
  FUN_10061a77c(auStack_138);
  FUN_1004896c8(auStack_148,param_4);
  FUN_10055c758(&ppuStack_150);
  (**(code **)(*(long *)*param_3 + 0x10))(auStack_210);
  func_0x00010046a3b4(ppuStack_150,auStack_210);
  FUN_10046985c(apuStack_118,ppuStack_150 + 0x10);
  *(undefined4 *)(param_1 + 8) = uStack_f0;
  FUN_100469c34(apuStack_118);
  uVar2 = lRam00000001137f46f0 == -1;
  if (!(bool)uVar2) {
    apuStack_118[0] = &uStack_121;
    ppuStack_120 = apuStack_118;
    func_0x000107c60c38(0x1137f46f0,&ppuStack_120,FUN_10061b3f8);
  }
  lStack_228 = lRam00000001137f4708;
  uStack_230 = uRam00000001137f4700;
  if (lRam00000001137f4708 != 0) {
    do {
      func_0x00010061d3f0();
    } while (extraout_w10 != 0);
  }
  FUN_10055d588(apuStack_118,1);
  ppuStack_120 = ppuStack_150;
  puStack_108[2] = 0;
  *puStack_108 = &PTR_DAT_1107e9bc8;
  puStack_108[1] = 0;
  ppuStack_150 = (undefined1 **)0x0;
  FUN_10055d67c(puStack_108 + 3,&uStack_230,auStack_148,auStack_138,&ppuStack_120,3,uStack_167,0);
  func_0x00010055f5a0(&ppuStack_120);
  puVar1 = puStack_108;
  puStack_108 = (undefined8 *)0x0;
  FUN_100561d68(auStack_220,puVar1 + 3);
  FUN_100561e6c(apuStack_118);
  FUN_100622190(puVar4,auStack_220);
  FUN_100561f40(auStack_220);
  FUN_100450be4(&uStack_230);
  FUN_10054fd30(apuStack_118,param_5);
  func_0x0001006221d4(puVar5,apuStack_118);
  FUN_100558bb4(apuStack_118);
  FUN_100469c34(auStack_210);
  func_0x00010055f5a0(&ppuStack_150);
  FUN_10048b4e8(auStack_148);
  puVar3 = auStack_138;
  FUN_100561d44(puVar3);
  FUN_100622dec(uStack_58);
  if (!(bool)uVar2) {
    func_0x000107c60e78();
    FUN_100469c34(auStack_210);
    do {
      func_0x00010055f5a0(&ppuStack_150);
      FUN_10048b4e8(auStack_148);
      FUN_100561d44(auStack_138);
      FUN_100558bb4(puVar5);
      func_0x000107c60ca0(param_1 + 3);
      FUN_100561f40(puVar4);
      func_0x000107c60bd8(puVar3);
    } while( true );
  }
  return param_1;
}



/* Entry: 10061a6bc; end: 10061a6ff;  */

undefined8 * FUN_10061a6bc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ccd520;
  FUN_10061a3f4(param_1 + 3);
  return param_1;
}



/* Entry: 10061a700; end: 10061a717;  */

void FUN_10061a700(void)

{
  return;
}



/* Entry: 10061a718; end: 10061a77b;  */

void FUN_10061a718(void)

{
  undefined1 in_ZR;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  FUN_10061a700();
  FUN_10061a7b4(auStack_40,1);
  *puStack_30 = &PTR_DAT_1108a16a8;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_110ccd350;
  func_0x00010061a7e4();
  func_0x00010061a7fc();
  func_0x00010061a80c();
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_48 = FUN_10061a77c;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10061a718(&uStack_51);
  return;
}



/* Entry: 10061a77c; end: 10061a7b3;  */

void FUN_10061a77c(void)

{
  undefined1 uStack_11;
  
  FUN_10061a718(&uStack_11);
  return;
}



/* Entry: 10061a7b4; end: 10061a7db;  */

long FUN_10061a7b4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x00010061a798();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10061a7dc; end: 10061a837;  */

void FUN_10061a7dc(void)

{
  return;
}



/* Entry: 10061a838; end: 10061a9cf;  */

void FUN_10061a838(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *plVar3;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long lVar5;
  undefined1 auStack_68 [40];
  
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x28);
    FUN_10061a9e4();
    lVar5 = *plVar2;
    func_0x00010061aa28();
    func_0x00010061aa30();
    if (lVar5 != 0) goto LAB_10061a8a8;
    FUN_10054ef74();
    FUN_100578fe4(param_1 + 0x28);
    func_0x000107c31ec4();
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x38);
    do {
      FUN_10054f2ec();
    } while (extraout_w10 != 0);
    func_0x000100579d40(*(undefined8 *)(param_1 + 0x30));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x48) = 1;
      lVar5 = *(long *)(param_1 + 0x30);
      func_0x000100579d70();
      if (*plVar2 == 0) {
        FUN_10054ef74();
      }
      plVar3 = (long *)(lVar5 + 0x10);
      do {
        if (*plVar3 == 0) {
          func_0x000100579d58();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000107c31ed4();
          plVar3 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000100579d80();
          if ((bool)in_ZR) {
            func_0x000107c31eb0();
            func_0x000107c31e8c();
            func_0x000107c31e90();
            *(long **)(lVar5 + 0x90) = plVar2;
          }
          func_0x000100579d90();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  plVar2 = (long *)(param_1 + 0x30);
  FUN_10061a9e4();
  lVar5 = *plVar2;
  func_0x00010061aa30();
  FUN_100628a6c();
  if (lVar5 == 0) {
    func_0x000107c31eb8();
    func_0x000107c289e0(auStack_68);
    FUN_1005fe1b4();
    func_0x000107c31ebc();
  }
  func_0x00010061aa28();
LAB_10061a8a8:
  func_0x00010061aa38();
  func_0x00010061aa40();
  FUN_10061aab0();
  func_0x00010061aab8();
  return;
}



/* Entry: 10061a9d0; end: 10061a9e3;  */

void FUN_10061a9d0(void)

{
  return;
}



/* Entry: 10061a9e4; end: 10061aa1b;  */

long FUN_10061a9e4(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  
  FUN_10061a9d0();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x000107c31d68();
  func_0x000107c31db8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10061aa14);
  (*pcVar1)();
}



/* Entry: 10061aa1c; end: 10061aa47;  */

void FUN_10061aa1c(void)

{
  return;
}



/* Entry: 10061aa48; end: 10061aaaf;  */

void FUN_10061aa48(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c3ecc8(uVar2);
  func_0x000107c61180();
  FUN_10061b09c(param_1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10061aab0; end: 10061aabf;  */

void FUN_10061aab0(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x00010054ee70(unaff_x19 + 2);
  plVar5 = (long *)*unaff_x19;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



/* Entry: 10061aac0; end: 10061ab73; -[SCNGrpcParamsBuilder build] */

void FUN_10061aac0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar7 = PTR_PTR_1126de910;
  func_0x000107c610f4(PTR_PTR_1126de910);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  lVar8 = *(long *)(param_1 + 0x38);
  func_0x000107c4c0a8();
  if (lVar8 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x38);
  }
  func_0x000107c46788(puVar7,param_2,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar9,
                      *(undefined8 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10061ab74; end: 10061ae8f;  */

undefined8 *** FUN_10061ab74(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined *puVar8;
  undefined8 ***pppuVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  undefined8 **ppuVar15;
  undefined **ppuVar16;
  undefined8 **in_x6;
  undefined8 **in_x7;
  undefined8 **ppuVar17;
  undefined8 ***pppuVar18;
  long lVar19;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar6 = (undefined8 ***)PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0();
  func_0x000107c61180();
  ppuVar13 = (undefined8 **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  ppuVar15 = (undefined8 **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  ppuVar7 = (undefined8 **)PTR__OBJC_CLASS___NSURL_1126ae598;
  puStack_168 = ppuVar15;
  func_0x000107c43474();
  func_0x000107c61180();
  uStack_78 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  ppuVar16 = &PTR___NSConcreteGlobalBlock_110d98888;
  puStack_178 = ppuVar7;
  uStack_170 = pppuVar6;
  func_0x000107c429e0();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  func_0x000107c61174(pppuVar6);
  ppuVar15 = (undefined8 **)0x10;
  pppuVar9 = pppuVar6;
  func_0x000107c4080c();
  if (pppuVar9 != (undefined8 ***)0x0) {
    lVar19 = *plStack_140;
    do {
      pppuVar18 = (undefined8 ***)0x0;
      do {
        if (*plStack_140 != lVar19) {
          func_0x000107c61128(pppuVar6);
        }
        unaff_x26 = *(undefined8 *)(lStack_148 + (long)pppuVar18 * 8);
        uStack_160 = 0;
        uStack_158 = 0;
        uVar10 = unaff_x26;
        func_0x000107c44260();
        unaff_x27 = uStack_158;
        func_0x000107c61174(uStack_158);
        unaff_x28 = uStack_160;
        func_0x000107c61174(uStack_160);
        if ((int)uVar10 != 0) {
          uVar10 = unaff_x27;
          func_0x000107c3ebcc();
          ppuVar15 = (undefined8 **)puStack_168;
          if ((int)uVar10 == 0) {
            ppuVar15 = ppuVar13;
          }
          func_0x000107c3d798(ppuVar15);
        }
        func_0x000107c61170(unaff_x27);
        func_0x000107c61170(unaff_x28);
        pppuVar18 = (undefined8 ***)((long)pppuVar18 + 1);
      } while (pppuVar9 != pppuVar18);
      ppuVar15 = (undefined8 **)0x10;
      pppuVar9 = pppuVar6;
      func_0x000107c4080c();
    } while (pppuVar9 != (undefined8 ***)0x0);
  }
  func_0x000107c61170(pppuVar6);
  puVar8 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x000107c610f4();
  func_0x000107c47040();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_100 = puVar8;
  func_0x000107c3e17c();
  func_0x000107c61180();
  func_0x000107c5b5b8(ppuVar13);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x000107c610f4();
  func_0x000107c47040();
  ppuVar14 = (undefined8 **)0x1;
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_108 = puVar8;
  func_0x000107c3e17c();
  func_0x000107c61180();
  puVar4 = puStack_168;
  func_0x000107c5b5b8(puStack_168);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar8);
  ppuVar7 = (undefined8 **)puVar4;
  func_0x000107c3d7a0(ppuVar13);
  FUN_10063a374(ppuVar13);
  func_0x000107c61170(pppuVar6);
  func_0x000107c61170(puStack_178);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(ppuVar13);
  pppuVar9 = uStack_170;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppuVar9;
  }
  func_0x000107c60e78();
  puVar5 = puStack_168;
  puVar1 = puStack_178;
  ppuStack_1b0 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puStack_1a0 = puVar4;
  pcStack_188 = FUN_10061ae90;
  uStack_1e0 = unaff_x28;
  uStack_1d8 = unaff_x27;
  uStack_1d0 = unaff_x26;
  puStack_1c8 = puVar11;
  puStack_1c0 = puVar12;
  ppuStack_1b8 = pppuVar6;
  puStack_1a8 = ppuVar13;
  puStack_198 = puVar8;
  puStack_190 = &stack0xfffffffffffffff0;
  func_0x000107c61174(ppuVar7);
  func_0x000107c61174(ppuVar14);
  func_0x000107c61174(ppuVar16);
  func_0x000107c61174(in_x7);
  func_0x000107c61174(puStack_180);
  func_0x000107c61174(puVar1);
  func_0x000107c61174(puVar5);
  puStack_1e8 = PTR_PTR_11270b0b0;
  pppuVar6 = &ppuStack_1f0;
  ppuStack_1f0 = pppuVar9;
  func_0x000107c61154(pppuVar6,PTR_s_init_1125d9248);
  if (pppuVar6 != (undefined8 ***)0x0) {
    ppuVar13 = ppuVar7;
    func_0x000107c40794();
    ppuVar17 = pppuVar6[2];
    pppuVar6[2] = ppuVar13;
    FUN_10061b094(ppuVar17);
    func_0x000107c61174(ppuVar14);
    ppuVar13 = pppuVar6[3];
    pppuVar6[3] = ppuVar14;
    func_0x000107c61170(ppuVar13);
    pppuVar6[4] = ppuVar15;
    ppuVar13 = (undefined8 **)ppuVar16;
    func_0x000107c40794();
    ppuVar15 = pppuVar6[5];
    pppuVar6[5] = ppuVar13;
    FUN_10061b094(ppuVar15);
    pppuVar6[6] = in_x6;
    ppuVar13 = in_x7;
    func_0x000107c40794();
    ppuVar15 = pppuVar6[7];
    pppuVar6[7] = ppuVar13;
    FUN_10061b094(ppuVar15);
    func_0x000107c61174(puStack_180);
    ppuVar13 = pppuVar6[8];
    pppuVar6[8] = (undefined8 **)puStack_180;
    func_0x000107c61170(ppuVar13);
    ppuVar13 = (undefined8 **)puVar1;
    func_0x000107c40794();
    uVar2 = (undefined1)uStack_170;
    uVar3 = uStack_170._1_1_;
    ppuVar15 = pppuVar6[9];
    pppuVar6[9] = ppuVar13;
    FUN_10061b094(ppuVar15);
    *(undefined1 *)(pppuVar6 + 1) = uVar2;
    *(undefined1 *)((long)pppuVar6 + 9) = uVar3;
    func_0x000107c61174(puVar5);
    ppuVar13 = pppuVar6[10];
    pppuVar6[10] = (undefined8 **)puVar5;
    func_0x000107c61170(ppuVar13);
  }
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puStack_180);
  func_0x000107c61170(in_x7);
  func_0x000107c61170(ppuVar16);
  func_0x000107c61170(ppuVar14);
  func_0x000107c61170(ppuVar7);
  return pppuVar6;
}



/* Entry: 10061ae90; end: 10061b093; -[SCNGrpcGrpcParameters initWithEndpointAddress:rpcTimeout:channelType:userAgentPrefix:timeAliveInBackgroundMs:requestPathPrefix:cronetStreamEnginePointer:serviceClientSBConfigKey:requiresAttestation:useRetryFallback:maxInboundMessageSize:] */

undefined8 *
FUN_10061ae90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_13);
  puStack_68 = PTR_PTR_11270b0b0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    FUN_10061b094(uVar3);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    func_0x000107c61170(uVar2);
    puVar1[4] = param_5;
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    FUN_10061b094(uVar3);
    puVar1[6] = param_7;
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    FUN_10061b094(uVar3);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    func_0x000107c61170(uVar2);
    uVar2 = param_10;
    func_0x000107c40794();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    FUN_10061b094(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_11;
    *(undefined1 *)((long)puVar1 + 9) = param_11._1_1_;
    func_0x000107c61174(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10061b094; end: 10061b09b;  */

void FUN_10061b094(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10061b09c; end: 10061b323;  */

void FUN_10061b09c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  func_0x000107c61174();
  uVar1 = param_2;
  func_0x000107c428b0();
  func_0x000107c61180();
  FUN_1000fbca4(auStack_80);
  uVar2 = param_2;
  func_0x000107c5094c();
  func_0x000107c61180();
  uVar3 = uVar2;
  FUN_10011b600();
  uVar4 = param_2;
  uVar9 = param_3;
  func_0x000107c3f7ec();
  uVar5 = param_2;
  func_0x000107c5d8e8();
  func_0x000107c61180();
  FUN_100114864(auStack_a0);
  uVar6 = param_2;
  func_0x000107c5c9c4(param_2);
  func_0x000107c503e0(param_2);
  func_0x000107c61180();
  FUN_100114864(auStack_c0);
  uVar7 = param_2;
  func_0x000107c40db0();
  func_0x000107c61180();
  uVar8 = uVar7;
  FUN_10011b600();
  func_0x000107c51fe4(param_2);
  func_0x000107c61180();
  FUN_100114864(auStack_e0);
  func_0x000107c50490();
  func_0x000107c5d884();
  func_0x000107c4c854();
  func_0x000107c61180();
  FUN_10011b600();
  FUN_10046946c(param_1,auStack_80,uVar3,param_3 & 0xff,uVar4,auStack_a0,uVar6,auStack_c0,uVar8,
                uVar9 & 0xff,auStack_e0,(char)param_2);
  func_0x00010061b37c();
  FUN_1001148fc(auStack_e0);
  func_0x00010061b384();
  func_0x000107c61170(uVar7);
  FUN_1001148fc(auStack_c0);
  func_0x00010061b38c();
  FUN_1001148fc(auStack_a0);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c60ca0(auStack_80);
  func_0x000107c61170(uVar1);
  func_0x00010061b394();
  return;
}



/* Entry: 10061b324; end: 10061b32b; -[SCNGrpcGrpcParameters endpointAddress] */

undefined8 FUN_10061b324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10061b32c; end: 10061b333; -[SCNGrpcGrpcParameters rpcTimeout] */

undefined8 FUN_10061b32c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10061b334; end: 10061b33b; -[SCNGrpcGrpcParameters channelType] */

undefined8 FUN_10061b334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10061b33c; end: 10061b343; -[SCNGrpcGrpcParameters userAgentPrefix] */

undefined8 FUN_10061b33c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10061b344; end: 10061b34b; -[SCNGrpcGrpcParameters timeAliveInBackgroundMs] */

undefined8 FUN_10061b344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10061b34c; end: 10061b353; -[SCNGrpcGrpcParameters requestPathPrefix] */

undefined8 FUN_10061b34c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10061b354; end: 10061b35b; -[SCNGrpcGrpcParameters cronetStreamEnginePointer] */

undefined8 FUN_10061b354(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10061b35c; end: 10061b363; -[SCNGrpcGrpcParameters serviceClientSBConfigKey] */

undefined8 FUN_10061b35c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10061b364; end: 10061b36b; -[SCNGrpcGrpcParameters requiresAttestation] */

undefined1 FUN_10061b364(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10061b36c; end: 10061b373; -[SCNGrpcGrpcParameters useRetryFallback] */

undefined1 FUN_10061b36c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10061b374; end: 10061b39b; -[SCNGrpcGrpcParameters maxInboundMessageSize] */

undefined8 FUN_10061b374(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10061b39c; end: 10061b3ef; -[SCNGrpcGrpcParameters .cxx_destruct] */

void FUN_10061b39c(long param_1)

{
  FUN_10061b3f0(param_1 + 0x50);
  FUN_10061b3f0(param_1 + 0x48);
  FUN_10061b3f0(param_1 + 0x40);
  FUN_10061b3f0(param_1 + 0x38);
  FUN_10061b3f0(param_1 + 0x28);
  FUN_10061b3f0(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10061b3f0; end: 10061b3f7;  */

void FUN_10061b3f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10061b3f8; end: 10061b44b;  */

void FUN_10061b3f8(undefined8 param_1)

{
  undefined4 uStack_24;
  undefined1 auStack_20 [16];
  
  uStack_24 = 10;
  FUN_10046e484();
  FUN_10061d2e0(auStack_20,&UNK_10f73f861,&uStack_24,param_1);
  FUN_100450bb4(0x1137f4700,auStack_20);
  FUN_100450be4(auStack_20);
  return;
}



/* Entry: 10061b44c; end: 10061b457;  */

void FUN_10061b44c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e821160);
  return;
}



/* Entry: 10061b458; end: 10061b4b7;  */

long * FUN_10061b458(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_10061b44c(0,*(undefined8 *)(*unaff_x20 + 0x50));
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  FUN_1000c0ea8(lVar1);
  func_0x000107c6157c();
  return unaff_x20;
}



/* Entry: 10061b4b8; end: 10061b4bb;  */

void FUN_10061b4b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10061b4bc; end: 10061b4ff;  */

void FUN_10061b4bc(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBi64_WV_11034d670 + 0x40;
  func_0x000107c61524(param_1,0,1,&puStack_18,param_1 + 0xb0);
  return;
}



/* Entry: 10061b500; end: 10061b527;  */

void FUN_10061b500(undefined8 *param_1,byte *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = ((ulong)*param_2 & 7) * 0x10;
  uVar2 = *(undefined8 *)(lVar1 + 0x1136a1e58);
  uVar3 = *(undefined8 *)(lVar1 + 0x1136a1e60);
  *param_1 = 1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Entry: 10061b528; end: 10061b5cf;  */

void FUN_10061b528(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int iStack_24;
  
  plVar1 = param_2;
  func_0x000100460dc4();
  lVar2 = *plVar1;
  FUN_1004671a4();
  iStack_24 = -1;
  if ((((param_2 != (long *)0x7fffffffffffffff) && (lVar2 != -0x7fffffffffffffff)) &&
      (iStack_24 = 0, param_2 != (long *)0x8000000000000000)) && (lVar2 != -0x8000000000000000)) {
    if ((long)param_2 < 1) {
      if (-lVar2 < -0x8000000000000000 - (long)param_2) goto LAB_10061b5ac;
    }
    else if ((long)((ulong)param_2 ^ 0x7fffffffffffffff) < -lVar2) {
      iStack_24 = -1;
      goto LAB_10061b5ac;
    }
    iStack_24 = (int)param_2 - (int)lVar2;
  }
LAB_10061b5ac:
  FUN_10061b5d0();
  FUN_10061b6f0(param_1,&iStack_24);
  return;
}



/* Entry: 10061b5d0; end: 10061b5d3;  */

uint FUN_10061b5d0(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if ((long)param_1 < 1) {
    uVar1 = 0;
    uVar3 = 0;
    uVar2 = 1;
  }
  else if (param_1 < 1000) {
    uVar1 = 0;
    uVar3 = 0x10000;
    uVar2 = param_1;
  }
  else {
    if (param_1 >> 4 < 0x271) {
      uVar1 = ((uint)param_1 & 0xffff) + 9;
      uVar2 = (ulong)uVar1 / 10;
      uVar1 = uVar1 / 10;
      if (0x28f5c28 < (uVar1 * -0x3d70a3d7 >> 2 | uVar1 * 0x40000000)) {
        uVar1 = 0;
        uVar3 = 0x20000;
        goto LAB_10061b6e0;
      }
    }
    else if ((param_1 >> 5 < 0xc35) &&
            (uVar3 = (uint)param_1 + 99, uVar1 = uVar3 / 100,
            0x19999999 < ((uVar1 & 0xffff) * -0x33333333 >> 1 | uVar1 * -0x80000000))) {
      uVar1 = 0;
      uVar2 = (ulong)uVar3 / 100;
      uVar3 = 0x30000;
      goto LAB_10061b6e0;
    }
    uVar2 = (long)(param_1 + 999) / 1000;
    FUN_100abb5d4(uVar2);
    uVar1 = (uint)uVar2 & 0xff000000;
    uVar3 = (uint)uVar2 & 0xff0000;
  }
LAB_10061b6e0:
  return uVar3 | uVar1 | (uint)uVar2 & 0xffff;
}



/* Entry: 10061b5d4; end: 10061b6ef;  */

uint FUN_10061b5d4(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if ((long)param_1 < 1) {
    uVar1 = 0;
    uVar3 = 0;
    uVar2 = 1;
  }
  else if (param_1 < 1000) {
    uVar1 = 0;
    uVar3 = 0x10000;
    uVar2 = param_1;
  }
  else {
    if (param_1 >> 4 < 0x271) {
      uVar1 = ((uint)param_1 & 0xffff) + 9;
      uVar2 = (ulong)uVar1 / 10;
      uVar1 = uVar1 / 10;
      if (0x28f5c28 < (uVar1 * -0x3d70a3d7 >> 2 | uVar1 * 0x40000000)) {
        uVar1 = 0;
        uVar3 = 0x20000;
        goto LAB_10061b6e0;
      }
    }
    else if ((param_1 >> 5 < 0xc35) &&
            (uVar3 = (uint)param_1 + 99, uVar1 = uVar3 / 100,
            0x19999999 < ((uVar1 & 0xffff) * -0x33333333 >> 1 | uVar1 * -0x80000000))) {
      uVar1 = 0;
      uVar2 = (ulong)uVar3 / 100;
      uVar3 = 0x30000;
      goto LAB_10061b6e0;
    }
    uVar2 = (long)(param_1 + 999) / 1000;
    FUN_100abb5d4(uVar2);
    uVar1 = (uint)uVar2 & 0xff000000;
    uVar3 = (uint)uVar2 & 0xff0000;
  }
LAB_10061b6e0:
  return uVar3 | uVar1 | (uint)uVar2 & 0xffff;
}



/* Entry: 10061b6f0; end: 10061b8bb;  */

byte * FUN_10061b6f0(undefined8 *param_1,ushort *param_2,undefined8 param_3,undefined4 param_4,
                    undefined8 param_5,ulong *param_6,undefined4 param_7)

{
  char *pcVar1;
  undefined8 ****ppppuVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  long lVar7;
  byte bVar8;
  byte *pbVar9;
  long *extraout_x8;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  bool bVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  byte *unaff_x25;
  undefined8 ***pppuStack_168;
  long lStack_160;
  undefined8 ***pppuStack_158;
  long lStack_150;
  undefined8 ***pppuStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  byte abStack_52 [10];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *param_2;
  uVar10 = (uint)uVar3;
  if (uVar3 >> 4 < 0x271) {
    pbVar9 = abStack_52;
    pbVar11 = pbVar9;
    if (999 < uVar3) goto LAB_10061b75c;
    if (99 < uVar3) goto LAB_10061b77c;
    if (9 < uVar10) goto LAB_10061b79c;
  }
  else {
    uVar10 = (uVar3 >> 4) / 0x271;
    abStack_52[0] = (byte)uVar10 | 0x30;
    uVar10 = (uint)uVar3 + uVar10 * -10000;
    pbVar11 = abStack_52 + 1;
LAB_10061b75c:
    uVar4 = (uVar10 >> 3 & 0x1fff) / 0x7d;
    pbVar9 = pbVar11 + 1;
    *pbVar11 = (char)uVar4 + 0x30;
    uVar10 = uVar10 + uVar4 * -1000;
LAB_10061b77c:
    uVar4 = (uVar10 >> 2 & 0x3fff) / 0x19;
    *pbVar9 = (char)uVar4 + 0x30;
    uVar10 = uVar10 + uVar4 * -100;
    pbVar11 = pbVar9 + 1;
LAB_10061b79c:
    uVar4 = (uVar10 & 0xff) / 10;
    pbVar9 = pbVar11 + 1;
    *pbVar11 = (char)uVar4 + 0x30;
    uVar10 = uVar10 + uVar4 * -10;
  }
  pbVar11 = pbVar9 + 1;
  *pbVar9 = (char)uVar10 + 0x30;
  pbVar12 = pbVar11;
  switch((char)param_2[1]) {
  case '\0':
    bVar8 = 0x6e;
    goto code_r0x00010061b8b0;
  case '\x03':
    pbVar11 = pbVar9 + 2;
    pbVar9[1] = 0x30;
  case '\x02':
    pbVar12 = pbVar11 + 1;
    *pbVar11 = 0x30;
  case '\x01':
    bVar8 = 0x6d;
    break;
  case '\x06':
    pbVar11 = pbVar9 + 2;
    pbVar9[1] = 0x30;
  case '\x05':
    pbVar12 = pbVar11 + 1;
    *pbVar11 = 0x30;
  case '\x04':
    bVar8 = 0x53;
    break;
  case '\t':
    pbVar12 = pbVar9 + 2;
    pbVar9[1] = 0x30;
  case '\b':
    pbVar11 = pbVar12 + 1;
    *pbVar12 = 0x30;
  case '\a':
    bVar8 = 0x4d;
    pbVar12 = pbVar11;
    break;
  case '\n':
    bVar8 = 0x48;
code_r0x00010061b8b0:
    pbVar11 = pbVar9 + 2;
    pbVar9[1] = bVar8;
  default:
    goto LAB_10061b860;
  }
  pbVar11 = pbVar12 + 1;
  *pbVar12 = bVar8;
LAB_10061b860:
  lVar7 = (long)pbVar11 - (long)abStack_52;
  pbVar9 = abStack_52;
  FUN_1004b6808(&uStack_48);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[3] = uStack_30;
  param_1[2] = uStack_38;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pbVar9;
  }
  func_0x000107c60e78();
  uVar19 = *(ulong *)(pbVar9 + 8) & 0xff;
  if (*(long *)pbVar9 != 0) {
    uVar19 = *(ulong *)(pbVar9 + 8);
  }
  uVar20 = uVar19 / 3;
  lVar18 = uVar19 - (uVar20 * 2 + uVar19 / 3);
  pbVar12 = (byte *)((ulong)(byte)(&UNK_10dd5282c)[lVar18] + uVar20 * 4);
  func_0x0001005a7e6c(extraout_x8);
  pbVar11 = pbVar9 + 9;
  if (*(long *)pbVar9 != 0) {
    pbVar11 = *(byte **)(pbVar9 + 0x10);
  }
  pcVar13 = (char *)((long)extraout_x8 + 9);
  if (*extraout_x8 != 0) {
    pcVar13 = (char *)extraout_x8[2];
  }
  if (2 < uVar19) {
    if (uVar20 < 2) {
      uVar20 = 1;
    }
    do {
      *pcVar13 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*pbVar11 >> 2];
      pcVar13[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                   [(ulong)(pbVar11[1] >> 4) | ((ulong)*pbVar11 & 3) << 4];
      pcVar13[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                   [(ulong)(pbVar11[2] >> 6) | ((ulong)pbVar11[1] & 0xf) << 2];
      pcVar13[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                   [(ulong)pbVar11[2] & 0x3f];
      pcVar13 = pcVar13 + 4;
      pbVar11 = pbVar11 + 3;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  if (lVar18 == 2) {
    *pcVar13 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*pbVar11 >> 2];
    pbVar14 = pbVar11 + 1;
    pcVar13[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(ulong)(*pbVar14 >> 4) | ((ulong)*pbVar11 & 3) << 4];
    uVar10 = 0x3c;
    lVar15 = 2;
    lVar16 = 3;
  }
  else {
    if (lVar18 != 1) goto LAB_10061ba44;
    *pcVar13 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*pbVar11 >> 2];
    uVar10 = 0x30;
    lVar15 = 4;
    lVar16 = 2;
    pbVar14 = pbVar11;
  }
  pcVar13[lVar18] =
       "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
       [(uint)*pbVar14 << lVar15 & uVar10];
  pcVar13 = pcVar13 + lVar16;
  pbVar11 = pbVar11 + lVar18;
LAB_10061ba44:
  pcVar1 = (char *)((long)extraout_x8 + 9);
  if (*extraout_x8 != 0) {
    pcVar1 = (char *)extraout_x8[2];
  }
  uVar19 = extraout_x8[1] & 0xff;
  if (*extraout_x8 != 0) {
    uVar19 = extraout_x8[1];
  }
  if (pcVar13 == pcVar1 + uVar19) {
    pbVar14 = pbVar9 + 9;
    if (*(long *)pbVar9 != 0) {
      pbVar14 = *(byte **)(pbVar9 + 0x10);
    }
    uVar19 = *(ulong *)(pbVar9 + 8) & 0xff;
    if (*(long *)pbVar9 != 0) {
      uVar19 = *(ulong *)(pbVar9 + 8);
    }
    if (pbVar11 == pbVar14 + uVar19) {
      return pbVar12;
    }
  }
  else {
    func_0x000107c2c264();
  }
  func_0x000107c2c260();
  pbVar9 = *(byte **)(*(long *)pbVar12 + 0x10);
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  if (param_6 == (ulong *)0x0) {
LAB_10061bbdc:
    func_0x00010061c314(pbVar9,lVar7,param_4,param_5,&uStack_118,param_7);
    unaff_x25 = pbVar9;
  }
  else {
    lVar18 = 0;
    uVar19 = 0;
    do {
      if (*param_6 <= uVar19) goto LAB_10061bbdc;
      lStack_128 = -0x5555555555555556;
      uStack_120 = -0x5555555555555556;
      pppuStack_130 = (undefined8 ****)0xaaaaaaaaaaaaaaaa;
      FUN_10012dbd0(&pppuStack_130,*(undefined8 *)(param_6[2] + lVar18));
      lStack_140 = -0x5555555555555556;
      uStack_138 = -0x5555555555555556;
      pppuStack_148 = (undefined8 ****)0xaaaaaaaaaaaaaaaa;
      FUN_10012dbd0(&pppuStack_148,*(undefined8 *)(param_6[2] + lVar18 + 8));
      ppppuVar2 = (undefined8 ****)pppuStack_130;
      if (-1 < (long)uStack_120._7_1_) {
        ppppuVar2 = &pppuStack_130;
      }
      lVar15 = lStack_128;
      if (-1 < uStack_120) {
        lVar15 = (long)uStack_120._7_1_;
      }
      ppppuVar5 = ppppuVar2;
      func_0x00010061bc24(ppppuVar2,lVar15);
      if ((int)ppppuVar5 == 0) {
LAB_10061bbb4:
        bVar17 = false;
        unaff_x25 = (byte *)(ulong)((int)uVar19 + 1);
      }
      else {
        ppppuVar5 = (undefined8 ****)pppuStack_148;
        if (-1 < (long)uStack_138._7_1_) {
          ppppuVar5 = &pppuStack_148;
        }
        lVar16 = lStack_140;
        if (-1 < uStack_138) {
          lVar16 = (long)uStack_138._7_1_;
        }
        ppppuVar6 = ppppuVar5;
        func_0x00010061bd70(ppppuVar5,lVar16);
        if (((ulong)ppppuVar6 & 1) == 0) goto LAB_10061bbb4;
        pppuStack_168 = ppppuVar5;
        lStack_160 = lVar16;
        pppuStack_158 = ppppuVar2;
        lStack_150 = lVar15;
        func_0x00010061bda8(&uStack_118,&pppuStack_158,&pppuStack_168);
        bVar17 = true;
      }
      func_0x000107c60ca0(&pppuStack_148);
      func_0x000107c60ca0(&pppuStack_130);
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 0x10;
    } while (bVar17);
  }
  func_0x0001001ab2f8(&uStack_118);
  return unaff_x25;
}



/* Entry: 10061b8bc; end: 10061baa7;  */

long * FUN_10061b8bc(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                    undefined8 param_5,ulong *param_6,undefined4 param_7)

{
  char *pcVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  byte *pbVar5;
  long *plVar6;
  char *pcVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *unaff_x25;
  undefined8 **ppuStack_108;
  long lStack_100;
  undefined8 **ppuStack_f8;
  long lStack_f0;
  undefined8 **ppuStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 **ppuStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  uVar14 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar14 = param_2[1];
  }
  uVar15 = uVar14 / 3;
  lVar13 = uVar14 - (uVar15 * 2 + uVar14 / 3);
  plVar6 = (long *)((ulong)(byte)(&UNK_10dd5282c)[lVar13] + uVar15 * 4);
  func_0x0001005a7e6c(param_1);
  pbVar5 = (byte *)((long)param_2 + 9);
  if (*param_2 != 0) {
    pbVar5 = (byte *)param_2[2];
  }
  pcVar7 = (char *)((long)param_1 + 9);
  if (*param_1 != 0) {
    pcVar7 = (char *)param_1[2];
  }
  if (2 < uVar14) {
    if (uVar15 < 2) {
      uVar15 = 1;
    }
    do {
      *pcVar7 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*pbVar5 >> 2];
      pcVar7[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(ulong)(pbVar5[1] >> 4) | ((ulong)*pbVar5 & 3) << 4];
      pcVar7[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(ulong)(pbVar5[2] >> 6) | ((ulong)pbVar5[1] & 0xf) << 2];
      pcVar7[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(ulong)pbVar5[2] & 0x3f];
      pcVar7 = pcVar7 + 4;
      pbVar5 = pbVar5 + 3;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  if (lVar13 == 2) {
    *pcVar7 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*pbVar5 >> 2];
    pbVar8 = pbVar5 + 1;
    pcVar7[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(ulong)(*pbVar8 >> 4) | ((ulong)*pbVar5 & 3) << 4];
    uVar9 = 0x3c;
    lVar10 = 2;
    lVar11 = 3;
  }
  else {
    if (lVar13 != 1) goto LAB_10061ba44;
    *pcVar7 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*pbVar5 >> 2];
    uVar9 = 0x30;
    lVar10 = 4;
    lVar11 = 2;
    pbVar8 = pbVar5;
  }
  pcVar7[lVar13] =
       "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
       [(uint)*pbVar8 << lVar10 & uVar9];
  pcVar7 = pcVar7 + lVar11;
  pbVar5 = pbVar5 + lVar13;
LAB_10061ba44:
  pcVar1 = (char *)((long)param_1 + 9);
  if (*param_1 != 0) {
    pcVar1 = (char *)param_1[2];
  }
  uVar14 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar14 = param_1[1];
  }
  if (pcVar7 == pcVar1 + uVar14) {
    pbVar8 = (byte *)((long)param_2 + 9);
    if (*param_2 != 0) {
      pbVar8 = (byte *)param_2[2];
    }
    uVar14 = param_2[1] & 0xff;
    if (*param_2 != 0) {
      uVar14 = param_2[1];
    }
    if (pbVar5 == pbVar8 + uVar14) {
      return plVar6;
    }
  }
  else {
    func_0x000107c2c264();
  }
  func_0x000107c2c260();
  plVar6 = *(long **)(*plVar6 + 0x10);
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  if (param_6 == (ulong *)0x0) {
LAB_10061bbdc:
    func_0x00010061c314(plVar6,param_3,param_4,param_5,&uStack_b8,param_7);
    unaff_x25 = plVar6;
  }
  else {
    lVar13 = 0;
    uVar14 = 0;
    do {
      if (*param_6 <= uVar14) goto LAB_10061bbdc;
      lStack_c8 = -0x5555555555555556;
      uStack_c0 = -0x5555555555555556;
      ppuStack_d0 = (undefined8 ***)0xaaaaaaaaaaaaaaaa;
      FUN_10012dbd0(&ppuStack_d0,*(undefined8 *)(param_6[2] + lVar13));
      lStack_e0 = -0x5555555555555556;
      uStack_d8 = -0x5555555555555556;
      ppuStack_e8 = (undefined8 ***)0xaaaaaaaaaaaaaaaa;
      FUN_10012dbd0(&ppuStack_e8,*(undefined8 *)(param_6[2] + lVar13 + 8));
      pppuVar2 = (undefined8 ***)ppuStack_d0;
      if (-1 < (long)uStack_c0._7_1_) {
        pppuVar2 = &ppuStack_d0;
      }
      lVar10 = lStack_c8;
      if (-1 < uStack_c0) {
        lVar10 = (long)uStack_c0._7_1_;
      }
      pppuVar3 = pppuVar2;
      func_0x00010061bc24(pppuVar2,lVar10);
      if ((int)pppuVar3 == 0) {
LAB_10061bbb4:
        bVar12 = false;
        unaff_x25 = (long *)(ulong)((int)uVar14 + 1);
      }
      else {
        pppuVar3 = (undefined8 ***)ppuStack_e8;
        if (-1 < (long)uStack_d8._7_1_) {
          pppuVar3 = &ppuStack_e8;
        }
        lVar11 = lStack_e0;
        if (-1 < uStack_d8) {
          lVar11 = (long)uStack_d8._7_1_;
        }
        pppuVar4 = pppuVar3;
        func_0x00010061bd70(pppuVar3,lVar11);
        if (((ulong)pppuVar4 & 1) == 0) goto LAB_10061bbb4;
        ppuStack_108 = pppuVar3;
        lStack_100 = lVar11;
        ppuStack_f8 = pppuVar2;
        lStack_f0 = lVar10;
        func_0x00010061bda8(&uStack_b8,&ppuStack_f8,&ppuStack_108);
        bVar12 = true;
      }
      func_0x000107c60ca0(&ppuStack_e8);
      func_0x000107c60ca0(&ppuStack_d0);
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 0x10;
    } while (bVar12);
  }
  func_0x0001001ab2f8(&uStack_b8);
  return unaff_x25;
}



/* Entry: 10061baa8; end: 10061bc73;  */

ulong FUN_10061baa8(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                   ulong *param_5,undefined4 param_6)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  ulong unaff_x25;
  undefined8 **ppuStack_c8;
  long lStack_c0;
  undefined8 **ppuStack_b8;
  long lStack_b0;
  undefined8 **ppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar6 = *(ulong *)(*param_1 + 0x10);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (param_5 == (ulong *)0x0) {
LAB_10061bbdc:
    func_0x00010061c314(uVar6,param_2,param_3,param_4,&uStack_78,param_6);
    unaff_x25 = uVar6;
  }
  else {
    lVar8 = 0;
    uVar9 = 0;
    do {
      if (*param_5 <= uVar9) goto LAB_10061bbdc;
      lStack_88 = -0x5555555555555556;
      uStack_80 = -0x5555555555555556;
      ppuStack_90 = (undefined8 ***)0xaaaaaaaaaaaaaaaa;
      FUN_10012dbd0(&ppuStack_90,*(undefined8 *)(param_5[2] + lVar8));
      lStack_a0 = -0x5555555555555556;
      uStack_98 = -0x5555555555555556;
      ppuStack_a8 = (undefined8 ***)0xaaaaaaaaaaaaaaaa;
      FUN_10012dbd0(&ppuStack_a8,*(undefined8 *)(param_5[2] + lVar8 + 8));
      pppuVar1 = (undefined8 ***)ppuStack_90;
      if (-1 < (long)uStack_80._7_1_) {
        pppuVar1 = &ppuStack_90;
      }
      lVar2 = lStack_88;
      if (-1 < uStack_80) {
        lVar2 = (long)uStack_80._7_1_;
      }
      pppuVar4 = pppuVar1;
      func_0x00010061bc24(pppuVar1,lVar2);
      if ((int)pppuVar4 == 0) {
LAB_10061bbb4:
        bVar7 = false;
        unaff_x25 = (ulong)((int)uVar9 + 1);
      }
      else {
        pppuVar4 = (undefined8 ***)ppuStack_a8;
        if (-1 < (long)uStack_98._7_1_) {
          pppuVar4 = &ppuStack_a8;
        }
        lVar3 = lStack_a0;
        if (-1 < uStack_98) {
          lVar3 = (long)uStack_98._7_1_;
        }
        pppuVar5 = pppuVar4;
        func_0x00010061bd70(pppuVar4,lVar3);
        if (((ulong)pppuVar5 & 1) == 0) goto LAB_10061bbb4;
        ppuStack_c8 = pppuVar4;
        lStack_c0 = lVar3;
        ppuStack_b8 = pppuVar1;
        lStack_b0 = lVar2;
        func_0x00010061bda8(&uStack_78,&ppuStack_b8,&ppuStack_c8);
        bVar7 = true;
      }
      func_0x000107c60ca0(&ppuStack_a8);
      func_0x000107c60ca0(&ppuStack_90);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while (bVar7);
  }
  func_0x0001001ab2f8(&uStack_78);
  return unaff_x25;
}



/* Entry: 10061bc74; end: 10061bc7f;  */

void FUN_10061bc74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820f8c);
  return;
}



/* Entry: 10061bc80; end: 10061bcd3;  */

long * FUN_10061bc80(void)

{
  long *unaff_x20;
  
  FUN_10061bc74(0,*(undefined8 *)(*unaff_x20 + 0x50));
  func_0x000107c613fc();
  FUN_1000c0ea8();
  func_0x000107c6157c();
  return unaff_x20;
}



/* Entry: 10061bcd4; end: 10061bcd7;  */

void FUN_10061bcd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10061bcd8; end: 10061bd0b;  */

void FUN_10061bcd8(long param_1)

{
  undefined1 auStack_18 [8];
  
  func_0x000107c61524(param_1,0,0,auStack_18,param_1 + 0xb0);
  return;
}



/* Entry: 10061bd0c; end: 10061cccb;  */

void FUN_10061bd0c(void)

{
  return;
}



/* Entry: 10061cccc; end: 10061cdb3;  */

undefined8 FUN_10061cccc(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c60ca0(param_1 + 0x280);
  func_0x00010060867c(param_1 + 0x180);
  func_0x00010061cd18(param_1 + 0x160);
  func_0x00010061cd80(param_1 + 0x58);
  FUN_100601d1c(param_1 + 0x48);
  func_0x0001004a21bc(param_1 + 0x10);
  FUN_100450bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10061cdb4; end: 10061cdc3;  */

long * FUN_10061cdb4(void)

{
  long extraout_x8;
  long unaff_x19;
  
  if (*(long *)(unaff_x19 + 0xd8) != 0) {
    FUN_100608b94();
    (**(code **)(extraout_x8 + 0xc0))();
  }
  return (long *)(unaff_x19 + 0xd8);
}



/* Entry: 10061cdc4; end: 10061ce27;  */

void FUN_10061cdc4(long param_1)

{
  undefined1 auStack_68 [72];
  
  if (param_1 != 0) {
    FUN_100460de4(auStack_68);
    if (*(int *)(param_1 + 8) == 0) {
      FUN_10061ce28(param_1 + 0x18);
    }
    FUN_100460314(param_1);
    FUN_100467a48(auStack_68);
  }
  return;
}



/* Entry: 10061ce28; end: 10061ce5f;  */

void FUN_10061ce28(long *param_1)

{
  long *plVar1;
  
  FUN_1005a7050();
  plVar1 = param_1 + 5;
  if ((long *)*param_1 != plVar1) {
    FUN_100460314();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 10061ce60; end: 10061ce6f;  */

void FUN_10061ce60(void)

{
  long unaff_x19;
  
  if (*(char *)(unaff_x19 + 0xd0) == '\x01') {
    FUN_100627b64();
  }
  return;
}



/* Entry: 10061ce70; end: 10061cf3b;  */

void FUN_10061ce70(long param_1)

{
  undefined1 auStack_68 [44];
  char cStack_3c;
  char cStack_3b;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_10061cf3c(auStack_68);
  if (cStack_3c == '\x01') {
    func_0x000105387d84();
    if (cStack_3b == '\x01') {
      func_0x000105387eec();
    }
    else {
      func_0x000105387de4(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
    }
  }
  else {
    func_0x00010061cff4(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  }
  FUN_10061d400(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),uStack_30);
  FUN_10061d56c(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),uStack_2c);
  func_0x00010061d5dc(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),uStack_28);
  func_0x00010061d64c(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),uStack_24);
  FUN_10061d6bc(uStack_38,*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  FUN_10061d930(uStack_34,*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  return;
}



/* Entry: 10061cf3c; end: 10061cfaf;  */

void FUN_10061cf3c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = uRam00000001130a7f48;
  param_1[1] = uRam00000001130a7f50;
  *param_1 = uVar1;
  uVar6 = uRam00000001130a7f80;
  uVar5 = uRam00000001130a7f78;
  uVar4 = uRam00000001130a7f70;
  uVar3 = uRam00000001130a7f68;
  uVar2 = uRam00000001130a7f60;
  uVar1 = uRam00000001130a7f58;
  param_1[8] = uRam00000001130a7f88;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10061cfb0; end: 10061d053;  */

void FUN_10061cfb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c3e338();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10061d054; end: 10061d1ab; -[SCGrapheneRegistry attestationGraphene] */

void FUN_10061d054(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10061d0dc;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bb6c0 != -1) {
    FUN_10002a2fc(0x1136bb6c0,&puStack_48);
  }
  uVar1 = uRam00000001136bb6b8;
  func_0x000107c61174(uRam00000001136bb6b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10061d1ac; end: 10061d1d7; +[SCGrapheneAttestationMetric getAttestationHeaders] */

void FUN_10061d1ac(void)

{
  func_0x000107c610f4(PTR_PTR_1126b7e80);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10061d1d8; end: 10061d243;  */

/* WARNING: Possible PIC construction at 0x00010061d22c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010061d230) */

void FUN_10061d1d8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  func_0x000107c5e508(param_2);
  func_0x000107c61180();
  func_0x000107c45318(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10061d244; end: 10061d25b;  */

void FUN_10061d244(void)

{
  return;
}



/* Entry: 10061d25c; end: 10061d2df;  */

void FUN_10061d25c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 uStack_61;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  puVar1 = auStack_50;
  FUN_10061d244();
  FUN_100450688(auStack_50,1);
  FUN_10061d37c(uStack_40,param_2,param_3,param_4);
  func_0x00010061d3c0();
  func_0x000100450b64();
  func_0x00010061d3d8();
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000100450b64(auStack_50);
  func_0x000107c35184();
  pcStack_58 = FUN_10061d2e0;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10061d25c(&uStack_61,puVar1,param_2,param_3);
  return;
}



/* Entry: 10061d2e0; end: 10061d30b;  */

void FUN_10061d2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10061d25c(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10061d30c; end: 10061d37b;  */

undefined8
FUN_10061d30c(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  FUN_10002b838(auStack_48);
  FUN_10028bc78(param_1,auStack_48,*param_3,param_4,0);
  func_0x000107c60ca0(auStack_48);
  return param_1;
}



/* Entry: 10061d37c; end: 10061d3b7;  */

undefined8 * FUN_10061d37c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107ea880;
  param_1[1] = 0;
  FUN_10061d30c(param_1 + 3);
  return param_1;
}



/* Entry: 10061d3b8; end: 10061d3ff;  */

void FUN_10061d3b8(void)

{
  return;
}



/* Entry: 10061d400; end: 10061d46f;  */

/* WARNING: Possible PIC construction at 0x00010061d458: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010061d45c) */

void FUN_10061d400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_10061cfb0();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126b7e80;
  func_0x000107c43ef8(PTR_PTR_1126b7e80);
  func_0x000107c61180();
  FUN_10061d470(param_1,puVar1,&PTR____CFConstantStringClassReference_110dd5ad8,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10061d470; end: 10061d56b;  */

/* WARNING: Possible PIC construction at 0x00010061d4fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010061d52c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010061d544: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010061d530) */
/* WARNING: Removing unreachable block (ram,0x00010061d500) */
/* WARNING: Removing unreachable block (ram,0x00010061d548) */

void FUN_10061d470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c51804(puVar1);
  func_0x000107c61180();
  func_0x000107c5e508(param_2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10061d56c; end: 10061d6bb;  */

/* WARNING: Possible PIC construction at 0x00010061d5c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010061d5c8) */

void FUN_10061d56c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_10061cfb0();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126b7e80;
  func_0x000107c43ef8(PTR_PTR_1126b7e80);
  func_0x000107c61180();
  FUN_10061d470(param_1,puVar1,&PTR____CFConstantStringClassReference_110dd5ab8,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10061d6bc; end: 10061d79f;  */

/* WARNING: Possible PIC construction at 0x00010061d72c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010061d750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010061d780: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010061d754) */
/* WARNING: Removing unreachable block (ram,0x00010061d730) */
/* WARNING: Removing unreachable block (ram,0x00010061d784) */

void FUN_10061d6bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  FUN_10061cfb0(param_2);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126b7e80;
  func_0x000107c43ef8(PTR_PTR_1126b7e80);
  func_0x000107c61180();
  FUN_10061d7a0(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110dd5b38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10061d7a0; end: 10061d8b7;  */

/* WARNING: Possible PIC construction at 0x00010061d84c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010061d870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010061d890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010061d874) */
/* WARNING: Removing unreachable block (ram,0x00010061d850) */
/* WARNING: Removing unreachable block (ram,0x00010061d894) */

void FUN_10061d7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c51804(puVar1);
  func_0x000107c61180();
  func_0x000107c5e508(param_2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10061d8b8; end: 10061d92f;  */

/* WARNING: Possible PIC construction at 0x00010061d914: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010061d918) */

void FUN_10061d8b8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  func_0x000107c5e508(param_2);
  func_0x000107c61180();
  func_0x000107c3d8d8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10061d930; end: 10061da13;  */

/* WARNING: Possible PIC construction at 0x00010061d9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010061d9c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010061d9f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010061d9c8) */
/* WARNING: Removing unreachable block (ram,0x00010061d9a4) */
/* WARNING: Removing unreachable block (ram,0x00010061d9f8) */

void FUN_10061d930(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  FUN_10061cfb0(param_2);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126b7e80;
  func_0x000107c43ef8(PTR_PTR_1126b7e80);
  func_0x000107c61180();
  FUN_10061d7a0(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110dd5b58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10061da14; end: 10061da27; -[SCStartupCompleteTrigger isAppStartupCompleted] */

undefined1 FUN_10061da14(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10061da28; end: 10061daaf;  */

long FUN_10061da28(long *param_1,long *param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  func_0x00010061da1c(0,*(undefined8 *)(*unaff_x20 + 0x50),*(undefined8 *)(*param_1 + 0x50),
                      *(undefined8 *)(*param_2 + 0x50));
  func_0x000107c613fc();
  *(long **)(lVar1 + 0x10) = unaff_x20;
  *(long **)(lVar1 + 0x18) = param_1;
  *(long **)(lVar1 + 0x20) = param_2;
  FUN_100087bcc();
  func_0x000107c6157c();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  return lVar1;
}



/* Entry: 10061dab0; end: 10061dab3;  */

void FUN_10061dab0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10061dab4; end: 10061daf3;  */

void FUN_10061dab4(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &UNK_10dd3ab08;
  func_0x000107c61524(param_1,0,1,&puStack_18,param_1 + 0xa0);
  return;
}



/* Entry: 10061daf4; end: 10061db07;  */

void FUN_10061daf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010061db00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10061db08; end: 10061db63;  */

void FUN_10061db08(void)

{
  FUN_100609e04();
  func_0x00010061db28();
  return;
}



/* Entry: 10061db64; end: 10061db67;  */

void FUN_10061db64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10061db68; end: 10061db8b;  */

void FUN_10061db68(long param_1)

{
  func_0x000100601d10();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}


