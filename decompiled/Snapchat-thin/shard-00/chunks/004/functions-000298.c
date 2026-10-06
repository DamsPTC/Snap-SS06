/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100669ef0; end: 100669f23;  */

undefined1 * FUN_100669ef0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x58] = 0;
  FUN_100669edc();
  return param_1;
}



/* Entry: 100669f24; end: 100669f67;  */

long FUN_100669f24(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10028b028();
  FUN_1005ca90c(lVar1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  return param_1;
}



/* Entry: 100669f68; end: 100669f83;  */

void FUN_100669f68(long param_1)

{
  FUN_100669f24();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 100669f84; end: 100669fd7;  */

void FUN_100669f84(void)

{
  FUN_10063a064();
  func_0x000100669fa8();
  return;
}



/* Entry: 100669fd8; end: 100669fff;  */

void FUN_100669fd8(long param_1,long *param_2)

{
  byte unaff_w21;
  byte unaff_w27;
  
  *param_2 = param_1 + 0x10;
  *(byte *)(param_2 + 1) = unaff_w27 & unaff_w21 & 1;
  return;
}



/* Entry: 10066a000; end: 10066a077;  */

void FUN_10066a000(void)

{
  ulong uVar1;
  undefined1 in_CY;
  undefined1 *puVar2;
  ulong extraout_x8;
  ulong extraout_x9;
  long extraout_x10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x23;
  undefined1 auStack_80 [16];
  
  FUN_1005d059c();
  if ((bool)in_CY) {
    FUN_1005d0628();
    if (extraout_x10 != 0) {
      func_0x000107c2c5e4();
LAB_10066a074:
      func_0x000104bd35f4();
      puVar2 = auStack_80;
      FUN_100610140();
      if (puVar2 != (undefined1 *)0x0) {
        func_0x0001000df548();
      }
      return;
    }
    func_0x0001005d0640();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) {
      if (uVar1 >> 0x3d != 0) goto LAB_10066a074;
      func_0x0001005d0660();
    }
    func_0x0001005d0668();
    *unaff_x19 = unaff_x21;
    unaff_x19[1] = unaff_x23;
    unaff_x19[2] = uVar1;
    if (unaff_x20 != 0) {
      FUN_1005d1198();
    }
  }
  else {
    func_0x000107c35704();
  }
  unaff_x19[1] = unaff_x23;
  return;
}



/* Entry: 10066a078; end: 10066a07f;  */

void FUN_10066a078(void)

{
  long lVar1;
  long unaff_x29;
  
  lVar1 = unaff_x29 + -0x70;
  FUN_100610140();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10066a080; end: 10066a127;  */

void FUN_10066a080(long param_1)

{
  FUN_100610140();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10066a128; end: 10066a1a3;  */

void FUN_10066a128(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  plVar1 = (long *)*param_2;
  func_0x00010066a0ec(&lStack_40,param_1 + 8);
  lStack_30 = 0;
  if (lStack_40 != 0) {
    lStack_30 = lStack_40 + 0x18;
  }
  uStack_28 = uStack_38;
  lStack_40 = 0;
  uStack_38 = 0;
  (**(code **)(*plVar1 + 0x20))(plVar1,&lStack_30);
  FUN_1006103d0(&lStack_30);
  func_0x00010066a1ac();
  return;
}



/* Entry: 10066a1a4; end: 10066a207;  */

void FUN_10066a1a4(void)

{
  return;
}



/* Entry: 10066a208; end: 10066a23f;  */

undefined1 * FUN_10066a208(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x10] = 0;
  func_0x00010066a1cc();
  return param_1;
}



/* Entry: 10066a240; end: 10066a247;  */

void FUN_10066a240(void)

{
  return;
}



/* Entry: 10066a248; end: 10066a337;  */

void FUN_10066a248(long param_1)

{
  FUN_100610140();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10066a338; end: 10066a347;  */

undefined8 FUN_10066a338(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}



/* Entry: 10066a348; end: 10066a36b;  */

void FUN_10066a348(long param_1)

{
  FUN_10066a338();
  if (param_1 != 0) {
    func_0x000107c356bc();
  }
  return;
}



/* Entry: 10066a36c; end: 10066a38b;  */

void FUN_10066a36c(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x000107c30518();
  }
  return;
}



/* Entry: 10066a38c; end: 10066a3a3;  */

void FUN_10066a38c(void)

{
  return;
}



/* Entry: 10066a3a4; end: 10066a3f7;  */

void FUN_10066a3a4(long param_1)

{
  FUN_1001849e8(param_1 + 0x98);
  FUN_1005cae2c(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10066a3f8; end: 10066a3ff;  */

long FUN_10066a3f8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  func_0x000107c6110c();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cecc08;
    func_0x000107c61174(lVar4);
    FUN_1005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x000107c61170(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  func_0x000107c61170(uVar3);
  func_0x0001005f2294(lVar1);
  func_0x000107c61108(lVar2);
  return lVar1;
}



/* Entry: 10066a400; end: 10066a493;  */

long FUN_10066a400(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cecc08;
    func_0x000107c61174(lVar3);
    FUN_1005f2030(param_1,&ppuStack_38,lVar3);
    func_0x000107c61170(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  func_0x000107c61170(uVar2);
  func_0x0001005f2294(param_1);
  func_0x000107c61108(lVar1);
  return param_1;
}



/* Entry: 10066a494; end: 10066a49f;  */

void FUN_10066a494(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10066a4a0; end: 10066a527;  */

long FUN_10066a4a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cec948;
    func_0x000107c61174(lVar3);
    FUN_1005f2030(param_1,&ppuStack_38,lVar3);
    func_0x000107c61170(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  func_0x000107c61170(uVar2);
  func_0x0001005f2294(param_1);
  func_0x000107c61108(lVar1);
  return param_1;
}



/* Entry: 10066a528; end: 10066a53b;  */

void FUN_10066a528(void)

{
  return;
}



/* Entry: 10066a53c; end: 10066a563;  */

long FUN_10066a53c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10066a564; end: 10066a56b;  */

long FUN_10066a564(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  func_0x000107c6110c();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110ceca90;
    func_0x000107c61174(lVar4);
    FUN_1005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x000107c61170(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  func_0x000107c61170(uVar3);
  func_0x0001005f2294(lVar1);
  func_0x000107c61108(lVar2);
  return lVar1;
}



/* Entry: 10066a56c; end: 10066a5f3;  */

long FUN_10066a56c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110ceca90;
    func_0x000107c61174(lVar3);
    FUN_1005f2030(param_1,&ppuStack_38,lVar3);
    func_0x000107c61170(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  func_0x000107c61170(uVar2);
  func_0x0001005f2294(param_1);
  func_0x000107c61108(lVar1);
  return param_1;
}



/* Entry: 10066a5f4; end: 10066a61f;  */

void FUN_10066a5f4(void)

{
  return;
}



/* Entry: 10066a620; end: 10066a68f;  */

void FUN_10066a620(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dff40;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010066a610();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010066a748(&uStack_30);
  return;
}



/* Entry: 10066a690; end: 10066a6cf; -[SCNNetworkApiNetworkApi .cxx_construct] */

undefined8 * FUN_10066a690(undefined8 *param_1)

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
      func_0x00010066a610();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10066a6d0; end: 10066a76b; -[SCNNetworkApiNetworkApi initWithCpp:] */

undefined1 * FUN_10066a6d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1127063d8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010066a610();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010066a748(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10066a76c; end: 10066a797;  */

void FUN_10066a76c(void)

{
  return;
}



/* Entry: 10066a798; end: 10066a843; -[SCNQEAppStateChangeNotifier init] */

undefined1 * FUN_10066a798(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706028;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c3d7bc(puVar2);
    func_0x000107c61170(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10066a844; end: 10066a853;  */

void FUN_10066a844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10066a854; end: 10066a8d7; -[SCNNetworkApiNetworkApi registerAppStateChangeListener:] */

void FUN_10066a854(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  FUN_10066a844();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_1000fbac4();
  FUN_10066a8d8();
  func_0x00010066aac4(*(undefined8 *)(*plVar1 + 0x70));
  FUN_10066aadc(auStack_40);
  FUN_100184a54();
  return;
}



/* Entry: 10066a8d8; end: 10066a98f;  */

void FUN_10066a8d8(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_110cec800;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10066a990);
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
    FUN_10066aa90(&uStack_50);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10066a990; end: 10066aa8f;  */

void FUN_10066a990(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_DAT_110cec840;
  puVar4[3] = &PTR_DAT_110cec8c0;
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
  puVar4[3] = &PTR_DAT_110cec890;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10066aa90(&uStack_50);
  return;
}



/* Entry: 10066aa90; end: 10066aabb;  */

long FUN_10066aa90(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10066aabc; end: 10066aadb;  */

void FUN_10066aabc(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x0001005ff200();
  }
  else {
    func_0x000107c31ce0();
  }
  func_0x0001005ff208(&UNK_110a81f58);
  *(undefined **)(param_2 + 0x10) = &DAT_11383d918;
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 10066aadc; end: 10066aaff;  */

void FUN_10066aadc(long param_1)

{
  func_0x00010066aad0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10066ab00; end: 10066abc7;  */

void FUN_10066ab00(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*(long *)(param_1 + 0x1d0) != 0) && (lVar4 = *param_2, lVar4 != 0)) {
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      plVar3 = (long *)(lVar5 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_28 = *(undefined8 *)(param_1 + 0x1e8);
    uStack_30 = *(undefined8 *)(param_1 + 0x1e0);
    *(long *)(param_1 + 0x1e0) = lVar4;
    *(long *)(param_1 + 0x1e8) = lVar5;
    FUN_10066aadc(&uStack_30);
    plVar3 = *(long **)(param_1 + 0x1e0);
    func_0x0001006100f0(*(undefined8 *)(param_1 + 0x1d8));
    if (extraout_x8 != 0) {
      do {
        func_0x00010060f468();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar3 + 0x18))();
    func_0x00010066bbd8(&uStack_30);
    (**(code **)(**(long **)(param_1 + 0x1d0) + 0x78))(*(long **)(param_1 + 0x1d0),plVar3);
  }
  return;
}



/* Entry: 10066abc8; end: 10066abcf;  */

void FUN_10066abc8(void)

{
  return;
}



/* Entry: 10066abd0; end: 10066ac4f;  */

undefined8 FUN_10066abd0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10066acd4(param_2);
  func_0x000107c61180();
  func_0x000107c4fc40(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61108(lVar1);
  return uVar2;
}



/* Entry: 10066ac50; end: 10066ac5f;  */

void FUN_10066ac50(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10066ac60; end: 10066acd3;  */

void FUN_10066ac60(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cec798;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10066ac50();
    } while (extraout_w10 != 0);
  }
  FUN_10015c218(&ppuStack_28,&uStack_40,FUN_10066ad00);
  func_0x000107c61180();
  func_0x00010066bc08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10066acd4; end: 10066acff;  */

void FUN_10066acd4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10066ac60();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10066ad00; end: 10066ad6f;  */

void FUN_10066ad00(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e0200;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10066ac50();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010066bbd8(&uStack_30);
  return;
}



/* Entry: 10066ad70; end: 10066ad77;  */

void FUN_10066ad70(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    param_2 = 0x60;
    func_0x000107c60e20();
  }
  else {
    func_0x000107c303f0(param_2,0x60);
  }
  FUN_10066adc8(&UNK_110a8d278);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x54) = 0;
  *(undefined8 *)(param_2 + 0x4c) = 0;
  return;
}



/* Entry: 10066ad78; end: 10066adc7;  */

void FUN_10066ad78(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0x60;
    func_0x000107c60e20();
  }
  else {
    func_0x000107c303f0(param_1,0x60);
  }
  FUN_10066adc8(&UNK_110a8d278);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  return;
}



/* Entry: 10066adc8; end: 10066addb;  */

void FUN_10066adc8(long param_1,long *param_2)

{
  long unaff_x19;
  
  *param_2 = param_1 + 0x10;
  param_2[1] = unaff_x19;
  return;
}



/* Entry: 10066addc; end: 10066ae13;  */

void FUN_10066addc(long param_1)

{
  if (param_1 == 0) {
    FUN_10066ae14();
  }
  else {
    func_0x000107c324f0();
  }
  FUN_10066adc8(&UNK_110a817b0);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10066ae14; end: 10066ae23;  */

void FUN_10066ae14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x20);
  return;
}



/* Entry: 10066ae24; end: 10066ae77;  */

void FUN_10066ae24(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c303f0(param_1,0x28);
  }
  *puVar1 = &PTR_DAT_110a81770;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)((long)puVar1 + 0x1f) = 0;
  return;
}



/* Entry: 10066ae78; end: 10066ae7f;  */

void FUN_10066ae78(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0x88;
    func_0x000107c60e20();
  }
  else {
    lVar1 = param_2;
    func_0x000107c303f0(param_2,0x88);
  }
  FUN_10066adc8(&UNK_110a8d408);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(long *)(lVar1 + 0x28) = param_2;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(long *)(lVar1 + 0x40) = param_2;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x7c) = 0;
  *(undefined8 *)(lVar1 + 0x74) = 0;
  return;
}



/* Entry: 10066ae80; end: 10066aee3;  */

void FUN_10066ae80(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0x88;
    func_0x000107c60e20();
  }
  else {
    lVar1 = param_1;
    func_0x000107c303f0(param_1,0x88);
  }
  FUN_10066adc8(&UNK_110a8d408);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(long *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(long *)(lVar1 + 0x40) = param_1;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x7c) = 0;
  *(undefined8 *)(lVar1 + 0x74) = 0;
  return;
}



/* Entry: 10066aee4; end: 10066aeeb;  */

void FUN_10066aee4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_2;
    func_0x000107c303f0(param_2,0x28);
  }
  *puVar1 = &PTR_DAT_110a8d378;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10066aeec; end: 10066af37;  */

void FUN_10066aeec(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c303f0(param_1,0x28);
  }
  *puVar1 = &PTR_DAT_110a8d378;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10066af38; end: 10066af47;  */

void FUN_10066af38(void)

{
  return;
}



/* Entry: 10066af48; end: 10066af8f;  */

void FUN_10066af48(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c303f0(param_1,0x20);
  }
  *puVar1 = &PTR_DAT_110a8d0f8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10066af90; end: 10066af97;  */

void FUN_10066af90(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    param_2 = 0x48;
    func_0x000107c60e20();
  }
  else {
    func_0x000107c3259c();
  }
  FUN_10066adc8(&UNK_110a81e50);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined1 *)(param_2 + 0x40) = 0;
  return;
}



/* Entry: 10066af98; end: 10066afdf;  */

void FUN_10066af98(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0x48;
    func_0x000107c60e20();
  }
  else {
    func_0x000107c3259c();
  }
  FUN_10066adc8(&UNK_110a81e50);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10066afe0; end: 10066b10b;  */

undefined2 *
FUN_10066afe0(undefined2 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,short *param_5
             )

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined2 *extraout_x8_02;
  uint extraout_w9;
  long extraout_x9;
  long unaff_x19;
  undefined2 *unaff_x20;
  byte *unaff_x21;
  long lVar6;
  ulong uVar7;
  undefined2 *puStack_48;
  
  func_0x00010006493c();
  uVar4 = (param_4 & 0xffff) == 0;
  cVar2 = '\0';
  cVar3 = '\0';
  if (!(bool)uVar4) {
    func_0x000100064c34(param_1);
    uVar7 = (ulong)*unaff_x21;
    if ((char)*unaff_x21 < '\0') {
      bVar1 = unaff_x21[1];
      if ((char)bVar1 < '\0') {
        uVar7 = (uVar7 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
        bVar1 = unaff_x21[2];
        if ((char)bVar1 < '\0') {
          if ((char)unaff_x21[3] < '\0') {
            if ((char)unaff_x21[4] < '\0') {
              func_0x000100064e38(param_1);
              if (*param_5 != 0) {
                func_0x000107c39bb4();
              }
              return (undefined2 *)0x0;
            }
            func_0x000107c39ba4();
            uVar7 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
          }
          else {
            uVar7 = (uVar7 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)unaff_x21[3] << 0x15;
          }
        }
        else {
          uVar7 = uVar7 >> 0x32 | (ulong)bVar1 << 0xe;
        }
      }
      else {
        uVar7 = uVar7 & 0x7f | (ulong)bVar1 << 7;
      }
    }
    puVar5 = unaff_x20;
    FUN_100064d5c(unaff_x20,uVar7 >> 3 & 0x1fffffff);
    if (puVar5 == (undefined2 *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)(&PTR_DAT_110cf0bf0)[(ulong)(ushort)puVar5[5] & 0xf];
    }
    func_0x000100064e2c();
    func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return puVar5;
  }
  puVar5 = param_1;
  if (*param_5 != 0) {
    FUN_100064a74();
    *(uint *)((long)param_1 + extraout_x8_00) =
         *(uint *)((long)param_1 + extraout_x8_00) | extraout_w9;
  }
  func_0x000100064a88();
  lVar6 = *(long *)(extraout_x8_01 + extraout_x9 * 8);
  if (*(long *)((long)param_1 + (param_4 >> 0x30)) == 0) {
    puVar5 = *(undefined2 **)(lVar6 + 0x20);
    if ((*(ulong *)(param_1 + 4) & 1) != 0) {
      func_0x000107c39ac4();
    }
    func_0x000100064a98();
    *(undefined2 **)((long)param_1 + (param_4 >> 0x30)) = puVar5;
  }
  FUN_100064b58(unaff_x21 + 2);
  if ((puStack_48 == (undefined2 *)0x0) || (func_0x000100064b64(), (bool)uVar4 || cVar2 != cVar3)) {
    puStack_48 = (undefined2 *)0x0;
  }
  else {
    func_0x000100064b70();
    func_0x000100064b94();
    puStack_48 = extraout_x8_02;
    do {
      func_0x000100064ba4();
      if ((((ulong)puVar5 & 1) != 0) ||
         (func_0x000100064bb0(*puStack_48), puStack_48 = puVar5, puVar5 == (undefined2 *)0x0))
      break;
    } while (*(int *)(unaff_x19 + 0x50) == 0);
    if ((*(byte *)(lVar6 + 9) & 1) != 0) {
      func_0x000107c39a28(*(undefined8 *)(lVar6 + 0x28));
      puStack_48 = puVar5;
    }
    func_0x000100065154();
    func_0x000100064534();
    if ((int)unaff_x19 == 0) {
      puStack_48 = (undefined2 *)0x0;
    }
  }
  return puStack_48;
}



/* Entry: 10066b10c; end: 10066b113;  */

void FUN_10066b10c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_2;
    func_0x000107c303f0(param_2,0x40);
  }
  *puVar1 = &PTR_DAT_110a80c00;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((long)puVar1 + 0x31) = 0;
  *(undefined8 *)((long)puVar1 + 0x29) = 0;
  return;
}



/* Entry: 10066b114; end: 10066b163;  */

void FUN_10066b114(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c303f0(param_1,0x40);
  }
  *puVar1 = &PTR_DAT_110a80c00;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((long)puVar1 + 0x31) = 0;
  *(undefined8 *)((long)puVar1 + 0x29) = 0;
  return;
}



/* Entry: 10066b164; end: 10066b16b;  */

void FUN_10066b164(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x00010066b1a8();
  }
  else {
    func_0x000107c32610();
  }
  func_0x00010066b1b0(&UNK_110a80ba0);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



/* Entry: 10066b16c; end: 10066b1a7;  */

void FUN_10066b16c(long param_1)

{
  if (param_1 == 0) {
    func_0x00010066b1a8();
  }
  else {
    func_0x000107c32610();
  }
  func_0x00010066b1b0(&UNK_110a80ba0);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10066b1a8; end: 10066b1c3;  */

void FUN_10066b1a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x28);
  return;
}



/* Entry: 10066b1c4; end: 10066b21b;  */

void FUN_10066b1c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c303f0(param_1,0x30);
  }
  *puVar1 = &PTR_DAT_110a80b10;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10066b21c; end: 10066b22b;  */

void FUN_10066b21c(void)

{
  return;
}



/* Entry: 10066b22c; end: 10066b26f;  */

void FUN_10066b22c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c303f0(param_1,0x18);
  }
  *puVar1 = &PTR_DAT_110a80b60;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10066b270; end: 10066b2df;  */

void FUN_10066b270(void)

{
  return;
}



/* Entry: 10066b2e0; end: 10066b31f;  */

void FUN_10066b2e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    FUN_10066b320();
  }
  else {
    func_0x000107c34904();
  }
  *puVar1 = &PTR_DAT_110a8d058;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10066b320; end: 10066b33b;  */

void FUN_10066b320(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x28);
  return;
}



/* Entry: 10066b33c; end: 10066b37f;  */

ulong FUN_10066b33c(int param_1)

{
  ulong uVar1;
  ulong unaff_x20;
  
  func_0x0001002a91f0();
  func_0x000107c61360();
  if (param_1 == 5) {
    uVar1 = 0;
  }
  else {
    FUN_10054c8f4();
    uVar1 = unaff_x20 & 0xffffffff | 0x100000000;
  }
  return uVar1;
}



/* Entry: 10066b380; end: 10066b397;  */

ulong FUN_10066b380(ulong param_1)

{
  FUN_10066b33c();
  return param_1 & 0xffffffffff;
}



/* Entry: 10066b398; end: 10066b3a3;  */

void FUN_10066b398(void)

{
  return;
}



/* Entry: 10066b3a4; end: 10066b47f;  */

long FUN_10066b3a4(long param_1)

{
  if (*(char *)(param_1 + 0x1d0) == '\x01') {
    func_0x0001006b7604();
  }
  else {
    FUN_10066b480();
  }
  return param_1;
}



/* Entry: 10066b480; end: 10066b49b;  */

void FUN_10066b480(long param_1)

{
  func_0x00010066b3d8();
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  return;
}



/* Entry: 10066b49c; end: 10066b4a7;  */

undefined8 FUN_10066b49c(undefined8 param_1)

{
  FUN_1006623f0(param_1,0);
  FUN_10066b4d4();
  return param_1;
}



/* Entry: 10066b4a8; end: 10066b4d3;  */

undefined8 FUN_10066b4a8(undefined8 param_1)

{
  FUN_1006623f0();
  FUN_10066b4d4();
  return param_1;
}



/* Entry: 10066b4d4; end: 10066b537;  */

long FUN_10066b4d4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_10066b554(param_1);
    }
    else {
      func_0x000107c2a3dc(param_1);
    }
  }
  return param_1;
}



/* Entry: 10066b538; end: 10066b553;  */

void FUN_10066b538(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar1;
  return;
}



/* Entry: 10066b554; end: 10066b5a3;  */

undefined1  [16] FUN_10066b554(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  FUN_10066b538();
  FUN_10066b5a4();
  func_0x0001004a641c(unaff_x20 + 0x30,unaff_x19 + 0x30);
  func_0x0001004a641c(unaff_x20 + 0x48,unaff_x19 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar5;
  puVar3 = (undefined1 *)(unaff_x19 + 0x68);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(unaff_x20 + 0x68); puVar2 != (undefined1 *)(unaff_x20 + 0x117);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(unaff_x20 + 0x117);
  return auVar6;
}



/* Entry: 10066b5a4; end: 10066b5d3;  */

undefined1  [16] FUN_10066b5a4(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auVar6 [16];
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  puVar4 = (undefined1 *)(param_2 + 0x18);
  puVar5 = puVar4;
  for (puVar3 = (undefined1 *)(param_1 + 0x18); puVar3 != (undefined1 *)(param_1 + 0x28);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar5;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x28);
  return auVar6;
}



/* Entry: 10066b5d4; end: 10066b60b;  */

long FUN_10066b5d4(long param_1)

{
  long lStack_28;
  
  func_0x0001005fb56c(param_1 + 400);
  func_0x000107c60ca0(param_1 + 0x130);
  FUN_10066b614(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 10066b60c; end: 10066b613;  */

void FUN_10066b60c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  uVar2 = *puVar1 & 0xfffffffffffffffe;
  if (uVar2 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(uVar2 + 8);
  }
  __ZdlPv(uVar2);
  *puVar1 = 0;
  return;
}



/* Entry: 10066b614; end: 10066b63f;  */

undefined8 FUN_10066b614(undefined8 param_1)

{
  FUN_10066b60c();
  FUN_10066b640(param_1);
  return param_1;
}



/* Entry: 10066b640; end: 10066b767;  */

undefined8 FUN_10066b640(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  FUN_100067de0(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_1005f73a4();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10066bd14();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_1005f73a4();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_10066bdd4();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_10066bf18();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_10066bf98();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_1006b7670();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_1005f73a4();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_1006b7694();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_10066c124();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0xb8) != 0) {
    func_0x000107c2a3e4();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0xc0) != 0) {
    func_0x000107c2a28c();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 200) != 0) {
    func_0x000107c2a2a0();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0xd0) != 0) {
    func_0x000107c2a3e0();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0xd8) != 0) {
    func_0x000107c2a410();
  }
  func_0x000107c60e14();
  FUN_10066b774(param_1 + 0x48);
  FUN_10066b79c(param_1 + 0x30);
  FUN_10066b768(param_1 + 0x18);
  if (extraout_x8 != 0) {
    FUN_10066c148();
  }
  return unaff_x19;
}



/* Entry: 10066b768; end: 10066b773;  */

void FUN_10066b768(void)

{
  return;
}



/* Entry: 10066b774; end: 10066b79b;  */

void FUN_10066b774(void)

{
  long extraout_x8;
  
  FUN_10066b768();
  if (extraout_x8 != 0) {
    FUN_10066c148();
  }
  return;
}



/* Entry: 10066b79c; end: 10066b7c3;  */

void FUN_10066b79c(void)

{
  long extraout_x8;
  
  FUN_10066b768();
  if (extraout_x8 != 0) {
    FUN_10066c148();
  }
  return;
}



/* Entry: 10066b7c4; end: 10066b7eb;  */

void FUN_10066b7c4(void)

{
  long extraout_x8;
  
  FUN_10066b768();
  if (extraout_x8 != 0) {
    FUN_10066c148();
  }
  return;
}



/* Entry: 10066b7ec; end: 10066b80b;  */

void FUN_10066b7ec(void)

{
  return;
}



/* Entry: 10066b80c; end: 10066b8a3;  */

void FUN_10066b80c(undefined1 *param_1)

{
  long *plVar1;
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [472];
  long alStack_210 [59];
  char cStack_38;
  
  func_0x00010066b7f4(alStack_210);
  func_0x000107c60ee4(auStack_3f0,0x1e0);
  if (cStack_38 == '\x01') {
    FUN_10066b97c(auStack_3e8);
    if (alStack_210[0] != 0) {
      plVar1 = alStack_210;
      FUN_10066b99c(plVar1);
      FUN_10066b9fc(param_1,plVar1);
      goto LAB_10066b884;
    }
  }
  else {
    FUN_10066b97c(auStack_3e8);
  }
  *param_1 = 0;
  param_1[0x1d0] = 0;
LAB_10066b884:
  FUN_10066ba18(alStack_210);
  return;
}



/* Entry: 10066b8a4; end: 10066b8d3;  */

void FUN_10066b8a4(long param_1,long param_2)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_100658238();
  FUN_10066b8d4(param_1 + 8,param_2 + 8);
  FUN_10066b970();
  *unaff_x20 = extraout_x9;
  *unaff_x19 = extraout_x8;
  return;
}



/* Entry: 10066b8d4; end: 10066b93f;  */

void FUN_10066b8d4(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_100658238();
  cVar1 = *(char *)(param_1 + 0x1d0);
  if (cVar1 != *(char *)(param_2 + 0x1d0)) {
    if (cVar1 == '\0') {
      FUN_10066b940();
      FUN_10066b480();
    }
    else {
      func_0x000107c32704();
      FUN_10066b480();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0x1d0) == '\x01') {
      FUN_10066b5d4();
      *(undefined1 *)(unaff_x19 + 0x1d0) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    FUN_10066b940();
    func_0x000107c32670();
    func_0x000107c327a8();
    func_0x000107c28de8();
    func_0x000107c326d0();
    func_0x000107c290b0();
    func_0x000107c32738();
    func_0x000107c290b0();
    func_0x000107c3277c();
    return;
  }
  return;
}



/* Entry: 10066b940; end: 10066b94b;  */

void FUN_10066b940(void)

{
  return;
}



/* Entry: 10066b94c; end: 10066b96f;  */

void FUN_10066b94c(long param_1)

{
  if (*(char *)(param_1 + 0x1d0) == '\x01') {
    FUN_10066b5d4();
    *(undefined1 *)(param_1 + 0x1d0) = 0;
  }
  return;
}



/* Entry: 10066b970; end: 10066b97b;  */

void FUN_10066b970(void)

{
  return;
}



/* Entry: 10066b97c; end: 10066b99b;  */

void FUN_10066b97c(long param_1)

{
  if (*(char *)(param_1 + 0x1d0) == '\x01') {
    FUN_10066b5d4();
  }
  return;
}



/* Entry: 10066b99c; end: 10066b9ef;  */

long FUN_10066b99c(long param_1)

{
  if ((*(byte *)(param_1 + 0x1d8) & 1) == 0) {
    func_0x000107c32770();
    func_0x000107c32788();
    func_0x000107c32798();
    func_0x0001006ab198();
    func_0x0001006ab190();
  }
  return param_1 + 8;
}


