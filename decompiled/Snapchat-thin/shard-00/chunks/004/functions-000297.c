/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006680e0; end: 1006680f3;  */

void FUN_1006680e0(void)

{
  FUN_1006680ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1006680f4; end: 1006680ff;  */

void FUN_1006680f4(void)

{
  return;
}



/* Entry: 100668100; end: 10066817f;  */

undefined8 FUN_100668100(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_100668204(param_2);
  func_0x000107c61180();
  func_0x000107c4fc00(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61108(lVar1);
  return uVar2;
}



/* Entry: 100668180; end: 10066818f;  */

void FUN_100668180(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100668190; end: 100668203;  */

void FUN_100668190(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cec8e0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_100668180();
    } while (extraout_w10 != 0);
  }
  FUN_10015c218(&ppuStack_28,&uStack_40,FUN_100668230);
  func_0x000107c61180();
  func_0x0001006683a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100668204; end: 10066822f;  */

void FUN_100668204(long *param_1)

{
  if (*param_1 != 0) {
    FUN_100668190();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100668230; end: 10066829f;  */

void FUN_100668230(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e0208;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_100668180();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_100668368(&uStack_30);
  return;
}



/* Entry: 1006682a0; end: 1006682e3; -[SCNNetworkTypesBandwidthChangeListener .cxx_construct] */

undefined8 * FUN_1006682a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_100668180();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1006682e4; end: 10066835b; -[SCNNetworkTypesBandwidthChangeListener initWithCpp:] */

undefined1 * FUN_1006682e4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127063f8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_100668180();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_100668368(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10066835c; end: 100668367;  */

undefined8 FUN_10066835c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100668368; end: 10066838b;  */

void FUN_100668368(long param_1)

{
  FUN_10066835c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10066838c; end: 1006683ab;  */

void FUN_10066838c(void)

{
  return;
}



/* Entry: 1006683ac; end: 100668467; -[SCBandwidthEstimatorExperiment registerDownloadListener:] */

undefined * FUN_1006683ac(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_100668468;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    func_0x000107c61174(param_3);
    lStack_38 = param_3;
    func_0x000107c4e590(uVar2,param_2,&puStack_60);
    func_0x000107c61170(lStack_38);
  }
  puVar1 = PTR_PTR_1126dfd70;
  func_0x000107c4a9bc(param_1);
  func_0x000107c3ab20(puVar1,param_2,param_1);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100668468; end: 100668473;  */

void FUN_100668468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100668474; end: 10066847b; -[SCBandwidthEstimatorExperiment lastDownloadBandwidthClass] */

undefined8 FUN_100668474(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10066847c; end: 10066849b; +[SCNNetworkHttpRequestConverter BandwidthTypeWithSOJUConnectionClass:] */

long FUN_10066847c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 7;
  if (param_3 != -9999) {
    lVar1 = 0;
  }
  if (5 < param_3 - 1U) {
    param_3 = lVar1;
  }
  return param_3;
}



/* Entry: 10066849c; end: 100668527;  */

void FUN_10066849c(long param_1,int param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uStack_48;
  int iStack_40;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(int *)(param_1 + 0x34) = param_2;
  FUN_10064f61c(&uStack_48,0,*(long *)(param_1 + 0x20) + 0x30);
  puVar1 = &uStack_48;
  if ((uStack_48 & 1) != 0) {
    puVar1 = (ulong *)(uStack_48 + 7);
  }
  lVar2 = (long)iStack_40 << 3;
  do {
    if (lVar2 == 0) goto LAB_10066850c;
    uVar3 = *puVar1;
    lVar2 = lVar2 + -8;
    puVar1 = puVar1 + 1;
  } while (*(int *)(uVar3 + 0x10) != param_2);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(uVar3 + 0x14);
LAB_10066850c:
  FUN_100650d40(&uStack_48);
  return;
}



/* Entry: 100668528; end: 10066858b;  */

void FUN_100668528(long param_1,undefined4 param_2)

{
  (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  FUN_10066858c(*(undefined8 *)(param_1 + 0x30));
  FUN_10066858c(*(undefined8 *)(param_1 + 0x38));
  FUN_10066858c(*(undefined8 *)(param_1 + 0x40));
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_10066862c(param_1 + 0x58);
    FUN_10066858c(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return;
}



/* Entry: 10066858c; end: 1006685af;  */

void FUN_10066858c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100668598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 1006685b0; end: 1006685fb;  */

void FUN_1006685b0(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)param_1;
  func_0x00010066859c();
  if ((uVar1 & 1) == 0) {
    if (7 < *param_2) {
      return;
    }
    uVar2 = *(undefined4 *)(&UNK_10e573ccc + (ulong)*param_2 * 4);
  }
  else {
    uVar2 = 8;
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 1006685fc; end: 100668623;  */

void FUN_1006685fc(long param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  FUN_1006685b0(*(undefined8 *)(param_1 + 0x20),&uStack_14);
  return;
}



/* Entry: 100668624; end: 10066862b;  */

void FUN_100668624(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}



/* Entry: 10066862c; end: 100668643;  */

void FUN_10066862c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  return;
}



/* Entry: 100668644; end: 10066864b;  */

void FUN_100668644(void)

{
  return;
}



/* Entry: 10066864c; end: 10066872b;  */

undefined8 FUN_10066864c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0xd0) == *(long *)(param_1 + 0xd8)) {
    uVar5 = 0;
  }
  else {
    func_0x000107c60d88(param_1 + 0x88);
    if ((*(byte *)(param_1 + 200) & 1) == 0) {
      *(undefined1 *)(param_1 + 200) = 1;
      lVar4 = 0;
      while( true ) {
        plVar1 = *(long **)(param_1 + 0xd0);
        if (lVar4 + -0x18 == -0x48) break;
        plVar2 = (long *)((long)plVar1 + lVar4 + 0x18);
        if (*(char *)((long)plVar1 + lVar4 + 0x2f) < '\0') {
          plVar2 = (long *)*plVar2;
        }
        plVar3 = (long *)((long)plVar1 + lVar4 + 0x30);
        if (*(char *)((long)plVar1 + lVar4 + 0x47) < '\0') {
          plVar3 = (long *)*plVar3;
        }
        (**(code **)(**(long **)(param_1 + 0xe8) + 0x48))(*(long **)(param_1 + 0xe8),plVar2,plVar3);
        lVar4 = lVar4 + -0x18;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x2f8);
      if (*(char *)((long)plVar1 + 0x17) < '\0') {
        plVar1 = (long *)*plVar1;
      }
      func_0x000107c2fea8(uVar5,plVar1,0,20000000);
    }
    else {
      uVar5 = 0;
    }
    func_0x000107c60d8c(param_1 + 0x88);
  }
  return uVar5;
}



/* Entry: 10066872c; end: 100668743;  */

void FUN_10066872c(void)

{
  return;
}



/* Entry: 100668744; end: 10066886b;  */

void FUN_100668744(void)

{
  long *plVar1;
  undefined8 in_x3;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  long *plStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100668738();
  FUN_100100ed0(&uStack_50);
  lStack_68 = lStack_48;
  uStack_70 = uStack_50;
  if (lStack_48 != 0) {
    do {
      FUN_10066886c();
    } while (extraout_w10 != 0);
  }
  FUN_1006688cc(&plStack_58,&uStack_70);
  FUN_1000df75c(&uStack_70);
  plVar1 = plStack_58;
  FUN_100669518(extraout_x8,in_x3,&plStack_58);
  func_0x0001006696f8(extraout_x8[1]);
  if (extraout_x8_00 != 0) {
    do {
      FUN_10066886c();
    } while (extraout_w10_00 != 0);
  }
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_80);
  FUN_100669708(auStack_80);
  func_0x000100669788(*extraout_x8);
  FUN_100669798();
  plVar1 = plStack_58;
  plStack_58 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    func_0x000107c357f8();
  }
  FUN_1000df75c(&uStack_50);
  return;
}



/* Entry: 10066886c; end: 10066887b;  */

void FUN_10066886c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10066887c; end: 1006688cb;  */

undefined1 FUN_10066887c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  
  FUN_10011a768(0x11383a6f8);
  if (!(bool)in_ZR) {
    FUN_100668920();
    func_0x00010011a788(0x11383a6f8,param_2,FUN_100668934);
  }
  return uRam000000011383a6f0;
}



/* Entry: 1006688cc; end: 10066891f;  */

void FUN_1006688cc(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = param_2;
  FUN_10066887c();
  if (iVar1 == 0) {
    func_0x000107c2c74c();
    if (param_2 == 0) {
      puVar2 = (undefined8 *)0x20;
      __Znwm();
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_DAT_110cd2d08;
      *param_1 = puVar2;
    }
    else {
      puVar2 = (undefined8 *)0x18;
      __Znwm();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = &PTR_DAT_110cd2b00;
      *param_1 = puVar2;
    }
  }
  else {
    puVar2 = (undefined8 *)0x28;
    func_0x000107c60e20();
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_DAT_110cd2d88;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *param_1 = puVar2;
  }
  return;
}



/* Entry: 100668920; end: 100668933;  */

void FUN_100668920(void)

{
  long unaff_x29;
  
  *(undefined1 **)(unaff_x29 + -8) = &stack0x0000000f;
  return;
}



/* Entry: 100668934; end: 1006689bb;  */

void FUN_100668934(void)

{
  long *aplStack_30 [2];
  
  FUN_100100ed0(aplStack_30);
  if (aplStack_30[0] != (long *)0x0) {
    FUN_10011a800();
    func_0x00010011a808();
    FUN_10011a89c();
    func_0x00010011a8a4();
    func_0x00010060f44c(*(undefined8 *)(*aplStack_30[0] + 0x38));
    if (((uint)aplStack_30[0] >> 8 & 1) != 0) {
      uRam000000011383a6f0 = SUB81(aplStack_30[0],0);
    }
    func_0x00010011b634();
  }
  FUN_1000df75c(aplStack_30);
  return;
}



/* Entry: 1006689bc; end: 100668a2f; -[CTPProtobufEntityTransformerGfycat initWithMediaContentConverter:] */

undefined1 * FUN_1006689bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112700948;
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



/* Entry: 100668a30; end: 100668aa3; -[CTPProtobufEntityTransformerGiphy initWithMediaContentConverter:] */

undefined1 * FUN_100668a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112700950;
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



/* Entry: 100668aa4; end: 100668b17; -[CTPProtobufEntityTransformerShoppingSticker initWithMediaContentConverter:] */

undefined1 * FUN_100668aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112700958;
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



/* Entry: 100668b18; end: 100668b83; -[CTPProtobufItemTransformer initWithTransformers:] */

undefined1 * FUN_100668b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112700930;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c3c294(puVar1);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100668b84; end: 100668d37; -[CTPProtobufItemTransformer _registerTransformers:] */

long FUN_100668b84(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41988();
  func_0x000107c61180();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x000107c61174(param_3);
  lVar2 = param_3;
  func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          func_0x000107c61128(param_3);
        }
        lVar7 = *(long *)(lStack_128 + lVar9 * 8);
        lVar3 = lVar7;
        func_0x000107c4293c();
        if ((lVar3 != 0) && (lVar3 = lVar7, func_0x000107c42938(), (int)lVar3 != 0)) {
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar3);
          func_0x000107c61180();
          puVar5 = puVar1;
          func_0x000107c4d9e8(puVar1,param_2,puVar4);
          func_0x000107c61180();
          func_0x000107c61170();
          if (puVar5 == (undefined *)0x0) {
            func_0x000107c56bd8(puVar1,param_2,lVar7,puVar4);
          }
          func_0x000107c61170(puVar4);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  func_0x000107c61170(param_3);
  puVar4 = puVar1;
  func_0x000107c40794();
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar4;
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  func_0x000107c60e78();
  return 1;
}



/* Entry: 100668d38; end: 100668d3f; -[CTPProtobufEntityTransformerSnapSticker entityTypeOutput] */

undefined8 FUN_100668d38(void)

{
  return 1;
}



/* Entry: 100668d40; end: 100668d47; -[CTPProtobufEntityTransformerSnapSticker entityTypeInput] */

undefined8 FUN_100668d40(void)

{
  return 1;
}



/* Entry: 100668d48; end: 100668d4f; -[CTPProtobufEntityTransformerBitmojiSticker entityTypeOutput] */

undefined8 FUN_100668d48(void)

{
  return 2;
}



/* Entry: 100668d50; end: 100668d57; -[CTPProtobufEntityTransformerBitmojiSticker entityTypeInput] */

undefined8 FUN_100668d50(void)

{
  return 2;
}



/* Entry: 100668d58; end: 100668d5f; -[CTPProtobufEntityTransformerEmoji entityTypeOutput] */

undefined8 FUN_100668d58(void)

{
  return 5;
}



/* Entry: 100668d60; end: 100668d67; -[CTPProtobufEntityTransformerEmoji entityTypeInput] */

undefined8 FUN_100668d60(void)

{
  return 4;
}



/* Entry: 100668d68; end: 100668d6f; -[CTPProtobufEntityTransformerCameo entityTypeOutput] */

undefined8 FUN_100668d68(void)

{
  return 8;
}



/* Entry: 100668d70; end: 100668d77; -[CTPProtobufEntityTransformerCameo entityTypeInput] */

undefined8 FUN_100668d70(void)

{
  return 6;
}



/* Entry: 100668d78; end: 100668d7f; -[CTPProtobufEntityTransformerCustomSticker entityTypeOutput] */

undefined8 FUN_100668d78(void)

{
  return 3;
}



/* Entry: 100668d80; end: 100668d87; -[CTPProtobufEntityTransformerCustomSticker entityTypeInput] */

undefined8 FUN_100668d80(void)

{
  return 3;
}



/* Entry: 100668d88; end: 100668d8f; -[CTPProtobufEntityTransformerChatCameo entityTypeOutput] */

undefined8 FUN_100668d88(void)

{
  return 8;
}



/* Entry: 100668d90; end: 100668d97; -[CTPProtobufEntityTransformerChatCameo entityTypeInput] */

undefined8 FUN_100668d90(void)

{
  return 0xc;
}



/* Entry: 100668d98; end: 100668d9f; -[CTPProtobufEntityTransformerMusicTrack entityTypeOutput] */

undefined8 FUN_100668d98(void)

{
  return 7;
}



/* Entry: 100668da0; end: 100668da7; -[CTPProtobufEntityTransformerMusicTrack entityTypeInput] */

undefined8 FUN_100668da0(void)

{
  return 7;
}



/* Entry: 100668da8; end: 100668daf; -[CTPProtobufEntityTransformerChatReactionSticker entityTypeOutput] */

undefined8 FUN_100668da8(void)

{
  return 9;
}



/* Entry: 100668db0; end: 100668db7; -[CTPProtobufEntityTransformerChatReactionSticker entityTypeInput] */

undefined8 FUN_100668db0(void)

{
  return 0xf;
}



/* Entry: 100668db8; end: 100668dbf; -[CTPProtobufEntityTransformerInfoSticker entityTypeOutput] */

undefined8 FUN_100668db8(void)

{
  return 4;
}



/* Entry: 100668dc0; end: 100668dc7; -[CTPProtobufEntityTransformerInfoSticker entityTypeInput] */

undefined8 FUN_100668dc0(void)

{
  return 9;
}



/* Entry: 100668dc8; end: 100668dcf; -[CTPProtobufEntityTransformerGfycat entityTypeOutput] */

undefined8 FUN_100668dc8(void)

{
  return 10;
}



/* Entry: 100668dd0; end: 100668dd7; -[CTPProtobufEntityTransformerGfycat entityTypeInput] */

undefined8 FUN_100668dd0(void)

{
  return 0xd;
}



/* Entry: 100668dd8; end: 100668ddf; -[CTPProtobufEntityTransformerGiphy entityTypeOutput] */

undefined8 FUN_100668dd8(void)

{
  return 6;
}



/* Entry: 100668de0; end: 100668de7; -[CTPProtobufEntityTransformerGiphy entityTypeInput] */

undefined8 FUN_100668de0(void)

{
  return 5;
}



/* Entry: 100668de8; end: 100668def; -[CTPProtobufEntityTransformerShoppingSticker entityTypeOutput] */

undefined8 FUN_100668de8(void)

{
  return 0xd;
}



/* Entry: 100668df0; end: 100668df7; -[CTPProtobufEntityTransformerShoppingSticker entityTypeInput] */

undefined8 FUN_100668df0(void)

{
  return 0x12;
}



/* Entry: 100668df8; end: 100668dff; -[CTPProtobufEntityTransformerTemplate entityTypeOutput] */

undefined8 FUN_100668df8(void)

{
  return 0x11;
}



/* Entry: 100668e00; end: 100668e07; -[CTPProtobufEntityTransformerTemplate entityTypeInput] */

undefined8 FUN_100668e00(void)

{
  return 0x1a;
}



/* Entry: 100668e08; end: 100668e77; -[SCStickerItemPresentationModelProvider init] */

undefined1 * FUN_100668e08(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127009a0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100668e78; end: 1006690c3; -[SCStickerItemBitmojiPresentationModelProvider initWithBitmojiAvatarProvider:imageSize:feature:isReaction:renderStyleProvider:] */

undefined8 * FUN_100668e78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 in_x6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(in_x6);
  puStack_68 = PTR_PTR_112700998;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(in_x6);
    uVar2 = puVar1[3];
    puVar1[3] = in_x6;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_78,puVar1);
    func_0x000107c3b814();
    puVar3 = PTR_PTR_1126bb278;
    func_0x000107c610f4(PTR_PTR_1126bb278);
    uVar2 = param_3;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c3e544();
    func_0x000107c61180();
    func_0x000107c458d0(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae820;
    func_0x000107c610f4();
    func_0x000107c49470();
    uVar2 = puVar1[1];
    puVar1[1] = puVar5;
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c3e548();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_80,auStack_78);
    uVar6 = uVar4;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar7 = puVar1[5];
    puVar1[5] = uVar6;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c3c6b0(puVar1);
    func_0x000107c61120(auStack_80);
    func_0x000107c61170(puVar3);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61170(in_x6);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1006690c4; end: 10066912f; -[SCStickerItemBitmojiPresentationModelProvider _getCurrentRenderStyleFromProvider] */

undefined8 FUN_1006690c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x000107c5c734(uVar2);
      func_0x000107c61180();
      uVar3 = uVar2;
      func_0x000107c40ee4();
      func_0x000107c61170(uVar2);
      return uVar3;
    }
  }
  return 0;
}



/* Entry: 100669130; end: 10066920b;  */

void FUN_100669130(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  uVar2 = uStack_50;
  func_0x000107c5c360(uStack_50);
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  FUN_100083b20(&lStack_58);
  lVar3 = lStack_58;
  func_0x000107c42eac();
  func_0x000107c61180();
  func_0x000107c61170(lStack_58);
  if (lVar3 != 0) {
    uVar4 = 0;
    FUN_10066920c(0);
    func_0x000107c613fc();
    FUN_10066922c(uStack_48,uVar2,lVar3,uVar4);
    *param_1 = uStack_48;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10066920c);
  (*pcVar1)();
}



/* Entry: 10066920c; end: 10066922b;  */

void FUN_10066920c(void)

{
  func_0x000107c61168(&PTR_PTR_112dbe980);
  return;
}



/* Entry: 10066922c; end: 10066923b;  */

void FUN_10066922c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 10066923c; end: 10066926f;  */

void FUN_10066923c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100669270; end: 1006692a3; -[_TtC35BitmojiStyleProvidingImplementation26BitmojiRenderStyleProvider currentBitmojiRenderStyle] */

undefined8 FUN_100669270(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1006692a4();
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 1006692a4; end: 100669437;  */

void FUN_1006692a4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_68;
  undefined1 auStack_60 [32];
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar1;
      func_0x000107c5dc1c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c60234(auStack_60);
        func_0x000107c615e8(lVar3);
        uVar4 = 0;
        FUN_1002ed07c(0);
        plVar5 = &lStack_68;
        func_0x000107c6147c(plVar5,auStack_60,PTR___sypN_11034f1a8 + 8,uVar4,6);
        if (((ulong)plVar5 & 1) != 0) {
          lVar3 = lStack_68;
          func_0x000107c49820();
          if (lVar3 == 3) {
            uVar4 = 0xd00000000000001b;
            func_0x000107c5fadc(0xd00000000000001b,0x800000010efb51c0);
            func_0x000107c3ebd4();
            func_0x000107c61170(uVar4);
            lVar3 = lVar2;
            func_0x000107c41050();
            func_0x000107c61180();
            func_0x000107c4a564();
            func_0x000107c61170(lStack_68);
            func_0x000107c61170(lVar3);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar1);
            return;
          }
          func_0x000107c61170(lStack_68);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar1);
          return;
        }
      }
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100669438; end: 100669477;  */

void FUN_100669438(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  func_0x000107c60e20();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110cd2d88;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 100669478; end: 10066947f;  */

void FUN_100669478(void)

{
  return;
}



/* Entry: 100669480; end: 100669517;  */

void FUN_100669480(void)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  long *extraout_x8;
  undefined8 unaff_x21;
  undefined1 uStack_61;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  func_0x000100668738();
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_100669570(auStack_50,1);
  FUN_100669688(lStack_40);
  lVar1 = lStack_40;
  lStack_40 = 0;
  *extraout_x8 = lVar1 + 0x18;
  extraout_x8[1] = lVar1;
  func_0x0001006696d4(auStack_50);
  func_0x0001006696e4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3580c();
  func_0x0001006696d4();
  func_0x000107c357f0();
  pcStack_58 = FUN_100669518;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_100669480(&uStack_61,puVar2,unaff_x21);
  return;
}



/* Entry: 100669518; end: 10066956f;  */

void FUN_100669518(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_100669480(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 100669570; end: 100669597;  */

long FUN_100669570(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000100669540();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100669598; end: 1006695c3;  */

void FUN_100669598(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cd28c0;
  param_1[1] = &PTR_DAT_110cd2928;
  param_1[2] = &PTR_DAT_110cd2950;
  param_1[3] = &PTR_DAT_110cd2978;
  param_1[4] = &PTR_DAT_110cd29a0;
  param_1[5] = &PTR_DAT_110cd29c8;
  return;
}



/* Entry: 1006695c4; end: 100669687;  */

long FUN_1006695c4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *param_3;
  *param_3 = 0;
  lVar1 = param_1;
  FUN_100669598();
  lVar4 = param_2[1];
  uVar6 = *param_2;
  *(undefined8 *)(lVar1 + 0x38) = param_2[1];
  *(undefined8 *)(lVar1 + 0x30) = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10066886c();
    } while (extraout_w10 != 0);
  }
  puVar2 = (undefined8 *)0x10;
  func_0x000107c60e20();
  puVar3 = (undefined8 *)0x48;
  func_0x000107c60e20();
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 4) = 0x3f800000;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = uVar5;
  *puVar2 = puVar3;
  *(undefined4 *)(puVar2 + 1) = 3;
  *(undefined8 **)(param_1 + 0x40) = puVar2;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return param_1;
}



/* Entry: 100669688; end: 1006696c7;  */

undefined8 * FUN_100669688(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cd2ab0;
  FUN_1006695c4(param_1 + 3);
  return param_1;
}



/* Entry: 1006696c8; end: 100669707;  */

void FUN_1006696c8(void)

{
  return;
}



/* Entry: 100669708; end: 10066972b;  */

void FUN_100669708(long param_1)

{
  FUN_10066835c();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10066972c; end: 10066977f;  */

void FUN_10066972c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  uStack_20 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  FUN_100669708(&uStack_20);
  FUN_100669780();
  return;
}



/* Entry: 100669780; end: 100669797;  */

void FUN_100669780(void)

{
  FUN_10066835c();
  if ((undefined1 *)register0x00000008 != (undefined1 *)0x0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 100669798; end: 10066992f;  */

void FUN_100669798(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  
  func_0x000100668738();
  puVar4 = (undefined8 *)0x20;
  lStack_50 = param_1;
  func_0x000107c60e20();
  plVar5 = puVar4 + 1;
  *plVar5 = 0;
  *puVar4 = &PTR_DAT_110cd2b80;
  puVar4[2] = 0;
  puVar4[3] = param_1;
  uVar3 = (undefined4)*unaff_x21;
  lStack_60 = 0;
  if (param_1 != 0) {
    lStack_60 = param_1 + 0x10;
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_58 = puVar4;
  puStack_48 = puVar4;
  FUN_100669930();
  func_0x00010066993c();
  FUN_1006103d0(&lStack_60);
  *(undefined4 *)(*(long *)(param_1 + 0x40) + 8) = uVar3;
  func_0x0001006696f8(puStack_48,*unaff_x21);
  if (extraout_x8 != 0) {
    do {
      FUN_10066886c();
    } while (extraout_w10 != 0);
  }
  FUN_100669930();
  func_0x00010066993c();
  FUN_1006103d0(&lStack_60);
  plVar5 = (long *)*unaff_x20;
  func_0x0001006696f8(puStack_48);
  if (extraout_x8_00 != 0) {
    do {
      FUN_10066886c();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010066993c(*(undefined8 *)(*plVar5 + 0x10));
  FUN_100668368(&lStack_60);
  param_4 = (long *)*param_4;
  if (param_4 != (long *)0x0) {
    func_0x0001006696f8(puStack_48);
    if (extraout_x8_01 != 0) {
      do {
        FUN_10066886c();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010066993c(*(undefined8 *)(*param_4 + 0x10));
    func_0x000100669ba0(&lStack_60);
  }
  FUN_100669cfc(&lStack_50);
  return;
}



/* Entry: 100669930; end: 100669943;  */

void FUN_100669930(void)

{
  return;
}



/* Entry: 100669944; end: 1006699c3;  */

undefined8 FUN_100669944(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_100669a48(param_2);
  func_0x000107c61180();
  func_0x000107c5c310(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61108(lVar1);
  return uVar2;
}



/* Entry: 1006699c4; end: 1006699d3;  */

void FUN_1006699c4(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1006699d4; end: 100669a47;  */

void FUN_1006699d4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cecba0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_1006699c4();
    } while (extraout_w10 != 0);
  }
  FUN_10015c218(&ppuStack_28,&uStack_40,FUN_100669a74);
  func_0x000107c61180();
  func_0x000100669bd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100669a48; end: 100669a73;  */

void FUN_100669a48(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1006699d4();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100669a74; end: 100669ae3;  */

void FUN_100669a74(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e0238;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_1006699c4();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000100669ba0(&uStack_30);
  return;
}



/* Entry: 100669ae4; end: 100669b27; -[SCNNetworkTypesDeckTransitionEventListener .cxx_construct] */

undefined8 * FUN_100669ae4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_1006699c4();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 100669b28; end: 100669bc3; -[SCNNetworkTypesDeckTransitionEventListener initWithCpp:] */

undefined1 * FUN_100669b28(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706418;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_1006699c4();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000100669ba0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100669bc4; end: 100669bdb;  */

void FUN_100669bc4(void)

{
  return;
}



/* Entry: 100669bdc; end: 100669cfb; -[SCNativeNetworkDeckObserver subscribe:] */

undefined8 FUN_100669bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c421ac(uVar1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c61174(param_3);
  uVar2 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_3);
  return 0;
}



/* Entry: 100669cfc; end: 100669d1f;  */

void FUN_100669cfc(long param_1)

{
  FUN_100610140();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100669d20; end: 100669d5f;  */

void FUN_100669d20(void)

{
  return;
}



/* Entry: 100669d60; end: 100669e93;  */

void FUN_100669d60(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar14 = *(undefined8 **)(param_1 + 0x68);
  if (puVar14 < *(undefined8 **)(param_1 + 0x70)) {
    *puVar14 = uVar4;
    puVar14[1] = lVar5;
    puVar14 = puVar14 + 2;
    uStack_60 = 0;
    lStack_58 = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x60);
    lVar13 = (long)puVar14 - lVar12;
    uVar2 = (lVar13 >> 4) + 1;
    uStack_60 = uVar4;
    lStack_58 = lVar5;
    if (uVar2 >> 0x3c != 0) {
      func_0x000107c2c960();
LAB_100669e80:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100669e84);
      (*pcVar8)();
    }
    uVar10 = (long)*(undefined8 **)(param_1 + 0x70) - lVar12;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar2) {
      uVar11 = uVar2;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    if (uVar11 == 0) {
      lVar9 = 0;
    }
    else {
      if (uVar11 >> 0x3c != 0) {
        func_0x000104bd35f4();
        goto LAB_100669e80;
      }
      lVar9 = uVar11 << 4;
      func_0x000107c60e20();
    }
    puVar3 = (undefined8 *)(lVar9 + lVar13);
    *puVar3 = uVar4;
    puVar3[1] = lVar5;
    uStack_60 = 0;
    lStack_58 = 0;
    puVar14 = puVar3 + 2;
    func_0x000107c610b4(puVar3 + (lVar13 >> 4) * -2,lVar12,lVar13);
    *(undefined8 **)(param_1 + 0x60) = puVar3 + (lVar13 >> 4) * -2;
    *(undefined8 **)(param_1 + 0x68) = puVar14;
    *(ulong *)(param_1 + 0x70) = lVar9 + uVar11 * 0x10;
    if (lVar12 != 0) {
      func_0x000107c60e14(lVar12);
    }
  }
  *(undefined8 **)(param_1 + 0x68) = puVar14;
  FUN_100669e94(&uStack_60);
  return;
}



/* Entry: 100669e94; end: 100669edb;  */

void FUN_100669e94(long param_1)

{
  func_0x000100651f88();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 100669edc; end: 100669eef;  */

void FUN_100669edc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_100669f24();
    *(undefined1 *)(param_1 + 0x58) = 1;
    return;
  }
  return;
}


