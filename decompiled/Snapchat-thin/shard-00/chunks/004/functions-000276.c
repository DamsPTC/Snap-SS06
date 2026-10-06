/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100610298; end: 100610307;  */

void FUN_100610298(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e0220;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_1006101e8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1006103d0(&uStack_30);
  return;
}



/* Entry: 100610308; end: 10061034b; -[SCNNetworkTypesConnectivityChangeListener .cxx_construct] */

undefined8 * FUN_100610308(undefined8 *param_1)

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
      FUN_1006101e8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10061034c; end: 1006103c3; -[SCNNetworkTypesConnectivityChangeListener initWithCpp:] */

undefined1 * FUN_10061034c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112706408;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_1006101e8();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1006103d0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1006103c4; end: 1006103cf;  */

undefined8 FUN_1006103c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006103d0; end: 1006103f3;  */

void FUN_1006103d0(long param_1)

{
  FUN_1006103c4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1006103f4; end: 100610413;  */

void FUN_1006103f4(void)

{
  return;
}



/* Entry: 100610414; end: 1006104cf; -[SCNetworkConnectivityChangeNotifier registerListener:] */

undefined * FUN_100610414(long param_1,undefined8 param_2,long param_3)

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
    uVar2 = *(undefined8 *)(param_1 + 8);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1006104d0;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    func_0x000107c61174(param_3);
    lStack_38 = param_3;
    func_0x000107c4e590(uVar2,param_2,&puStack_60);
    func_0x000107c61170(lStack_38);
  }
  puVar1 = PTR_PTR_1126dfd70;
  func_0x000107c40ef0(param_1);
  func_0x000107c3abb0(puVar1,param_2,param_1);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1006104d0; end: 1006104db;  */

void FUN_1006104d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1006104dc; end: 1006104e3; -[SCNetworkConnectivityChangeNotifier currentConnectivity] */

undefined8 FUN_1006104dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1006104e4; end: 100610537; +[SCNNetworkHttpRequestConverter NetworkConnectivityWithReachabilityStatus:] */

undefined8 FUN_1006104e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 + 1U < 6) {
    return *(undefined8 *)(&UNK_10e56fb18 + (param_3 + 1U) * 8);
  }
  return 0;
}



/* Entry: 100610538; end: 100610663;  */

void FUN_100610538(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int extraout_w10;
  long unaff_x19;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  
  func_0x00010061052c();
  uVar5 = (uint)param_2;
  if (uVar5 == *(uint *)(unaff_x19 + 0x250)) goto LAB_10061063c;
  if (uVar5 < 2) {
    plVar6 = (long *)(unaff_x19 + 0x220);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*(uint *)(unaff_x19 + 0x218) == 3 || uVar5 == *(uint *)(unaff_x19 + 0x218))
    goto LAB_1006105b0;
    *(long *)(unaff_x19 + 0x228) = *(long *)(unaff_x19 + 0x228) + 1;
    bVar3 = true;
  }
  else {
    do {
      func_0x00010060f2ec();
    } while (extraout_w10 != 0);
LAB_1006105b0:
    bVar3 = false;
  }
  *(uint *)(unaff_x19 + 0x250) = uVar5;
  plVar6 = (long *)(unaff_x19 + 0x110);
  while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
    (**(code **)(*(long *)plVar6[3] + 0x10))((long *)plVar6[3],param_2);
  }
  FUN_1006106e8(unaff_x19 + 0x178);
  func_0x000100610734(unaff_x19 + 0x1a8);
  FUN_10060efa8(unaff_x19 + 0x160);
  func_0x000100610780(unaff_x19 + 8);
  iVar4 = 0x10cee028;
  FUN_1006107cc();
  if (iVar4 == 0) {
    *(undefined8 *)(unaff_x19 + 0x1f8) = 0;
  }
  else if (bVar3) {
    uVar1 = *(undefined8 *)(unaff_x19 + 0x200);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x208);
    *(undefined8 *)(unaff_x19 + 0x208) = *(undefined8 *)(unaff_x19 + 0x1f8);
    *(undefined8 *)(unaff_x19 + 0x200) = *(undefined8 *)(unaff_x19 + 0x210);
    *(undefined8 *)(unaff_x19 + 0x1f8) = uVar7;
    *(undefined8 *)(unaff_x19 + 0x210) = uVar1;
  }
  if (uVar5 < 2) {
    *(uint *)(unaff_x19 + 0x218) = uVar5;
  }
LAB_10061063c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x50);
  return;
}



/* Entry: 100610664; end: 1006106df;  */

void FUN_100610664(long param_1,int param_2)

{
  undefined4 uVar1;
  long alStack_30 [2];
  
  if (*(int *)(param_1 + 0x54) != param_2) {
    FUN_100610538(*(undefined8 *)(param_1 + 0xa0));
    *(int *)(param_1 + 0x54) = param_2;
    FUN_100610858(alStack_30,param_1 + 0xb8);
    if (alStack_30[0] != 0) {
      uVar1 = 4;
      if (param_2 != 1) {
        uVar1 = 0;
      }
      if (param_2 == 0) {
        uVar1 = 1;
      }
      FUN_100670158(alStack_30[0],uVar1);
    }
    func_0x0001006108b0();
    FUN_10060fdc4(param_1);
  }
  return;
}



/* Entry: 1006106e0; end: 1006106e7;  */

void FUN_1006106e0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf8) = param_2;
  return;
}



/* Entry: 1006106e8; end: 1006107cb;  */

void FUN_1006106e8(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c3972c();
    unaff_x19[2] = 0;
    lVar2 = unaff_x19[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x19 + lVar1 * 8) = 0;
    }
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 1006107cc; end: 10061084b;  */

undefined1 FUN_1006107cc(int param_1)

{
  undefined1 uVar1;
  undefined1 uStack_28;
  
  if ((bRam0000000113374c38 & 1) == 0) {
    FUN_10061084c(0x113374c38);
    if (param_1 != 0) {
      uVar1 = uStack_28;
      FUN_1005ec950();
      uRam0000000113374c30 = uVar1;
      func_0x000107c60e4c(0x113374c38);
    }
  }
  return uRam0000000113374c30;
}



/* Entry: 10061084c; end: 100610857;  */

void FUN_10061084c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_guard_acquire_110346be0)(param_1);
  return;
}



/* Entry: 100610858; end: 1006108a3;  */

void FUN_100610858(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_2;
  func_0x000107c60c40();
  func_0x000107c60dc4();
  lVar2 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10060fc34();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 1006108a4; end: 1006108b7;  */

void FUN_1006108a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 1006108b8; end: 1006108df;  */

long FUN_1006108b8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1006108e0; end: 10061090f;  */

void FUN_1006108e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9__110346968
  )(param_1,param_3);
  return;
}



/* Entry: 100610910; end: 10061093f;  */

void FUN_100610910(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x0001004c3ca0();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  FUN_10015aa90();
  return;
}



/* Entry: 100610940; end: 100610953;  */

void FUN_100610940(void)

{
  return;
}



/* Entry: 100610954; end: 1006109d3;  */

void FUN_100610954(undefined8 *param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010061094c();
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    FUN_1006109e8(param_2);
  }
  lVar2 = param_2;
  func_0x000100625724(param_2,param_3);
  bVar1 = param_2 + 8 == lVar2;
  if (bVar1) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x38);
    uVar5 = *(undefined8 *)(lVar2 + 0x50);
    uVar4 = *(undefined8 *)(lVar2 + 0x48);
    param_1[1] = *(undefined8 *)(lVar2 + 0x40);
    *param_1 = uVar3;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
  }
  *(bool *)(param_1 + 4) = !bVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x20);
  return;
}



/* Entry: 1006109d4; end: 1006109e7;  */

void FUN_1006109d4(void)

{
  return;
}



/* Entry: 1006109e8; end: 100610b5f;  */

void FUN_1006109e8(long *param_1)

{
  ulong *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  undefined8 *unaff_x19;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_2c0 [16];
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined8 *****apppppuStack_290 [2];
  char cStack_279;
  long alStack_278 [4];
  byte abStack_258 [8];
  undefined8 auStack_250 [67];
  undefined8 uStack_38;
  
  FUN_1006109d4();
  *(undefined1 *)(param_1 + 3) = 1;
  uStack_38 = extraout_x8;
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    if (unaff_x19[0xd] == 0) goto LAB_100610b10;
  }
  else if (*(char *)((long)param_1 + 0x77) == '\0') goto LAB_100610b10;
  FUN_1000daeac(alStack_278,unaff_x19 + 0xc);
  in_ZR = 0;
  if ((abStack_258[*(long *)(alStack_278[0] + -0x18)] & 5) == 0) {
    FUN_100610c40(apppppuStack_290,
                  *(undefined8 *)((long)auStack_250 + *(long *)(alStack_278[0] + -0x18)),0);
    func_0x000100624fc4();
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    in_ZR = cStack_279 == '\0';
    if (-1 < cStack_279) {
      apppppuStack_290[0] = apppppuStack_290;
    }
    puVar2 = auStack_2c0;
    FUN_1001a3c94(puVar2,apppppuStack_290[0]);
    if (((ulong)puVar2 & 1) == 0) {
      func_0x000105344a58(alStack_278);
    }
    else {
      in_ZR = (uStack_2b0 & 1) == 0;
      puVar1 = &uStack_2b0;
      if (!(bool)in_ZR) {
        puVar1 = (ulong *)(uStack_2b0 + 7);
      }
      for (lVar5 = (long)(int)uStack_2a8 << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
        uVar4 = *puVar1;
        uVar9 = *(undefined8 *)(uVar4 + 0x30);
        uVar8 = *(undefined8 *)(uVar4 + 0x28);
        uVar7 = *(undefined8 *)(uVar4 + 0x20);
        uVar6 = *(undefined8 *)(uVar4 + 0x18);
        puVar3 = unaff_x19;
        FUN_100625224();
        puVar3[1] = uVar7;
        *puVar3 = uVar6;
        puVar3[3] = uVar9;
        puVar3[2] = uVar8;
        puVar1 = puVar1 + 1;
      }
    }
    FUN_1006254ec();
    func_0x000107c60ca0(apppppuStack_290);
  }
  param_1 = alStack_278;
  func_0x000100557e14(param_1);
LAB_100610b10:
  FUN_1006256bc(uStack_38);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000100557e14(alStack_278);
    func_0x000107c60bd8(param_1);
    func_0x000107c4bb00();
    return;
  }
  return;
}



/* Entry: 100610b60; end: 100610bab; -[SCFideliusLogger logDBSize:totalDbSizeByte:numDbs:] */

void FUN_100610b60(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c4bb00(param_1,param_2,9,0,0,0,9999,0,0,0,0,0,0,0,0);
  return;
}



/* Entry: 100610bac; end: 100610bcb;  */

long * FUN_100610bac(long *param_1)

{
  if ((byte *)param_1[3] != (byte *)param_1[4]) {
    return (long *)(ulong)*(byte *)param_1[3];
  }
                    /* WARNING: Could not recover jumptable at 0x000100610bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return param_1;
}



/* Entry: 100610bcc; end: 100610c3f;  */

bool FUN_100610bcc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_100610bac();
    if ((int)lVar1 != -1) {
      return *param_1 == 0;
    }
    *param_1 = 0;
  }
  return true;
}



/* Entry: 100610c40; end: 100610ccb;  */

void FUN_100610c40(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_30 = param_3;
  uStack_28 = param_2;
  while( true ) {
    puVar1 = &uStack_28;
    func_0x000100610c10(puVar1,&uStack_30);
    if (((ulong)puVar1 & 1) != 0) break;
    uVar2 = uStack_28;
    FUN_100610bac(uStack_28);
    func_0x000107c60c8c(param_1,(int)(char)uVar2);
    FUN_100624f9c(uStack_28);
  }
  return;
}



/* Entry: 100610ccc; end: 100610d1f;  */

bool FUN_100610ccc(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = *(uint *)(param_1 + 0x18c);
  if ((uVar3 >> 3 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    bVar4 = *(char *)(param_1 + 0x192) == '\0';
    lVar1 = 0x40;
    if (bVar4) {
      lVar1 = 0x68;
    }
    lVar2 = 0x60;
    if (bVar4) {
      lVar2 = 0x70;
    }
    lVar2 = *(long *)(param_1 + lVar1) + *(long *)(param_1 + lVar2);
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + lVar1);
    *(long *)(param_1 + 0x18) = lVar2;
    *(long *)(param_1 + 0x20) = lVar2;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 8;
  }
  return (uVar3 & 8) == 0;
}



/* Entry: 100610d20; end: 100610f2b;  */

ulong FUN_100610d20(ulong param_1)

{
  long lVar1;
  long *plVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  byte *pbStack_50;
  undefined1 uStack_41;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    return 0xffffffff;
  }
  uVar8 = param_1;
  FUN_100610ccc();
  pbVar4 = *(byte **)(param_1 + 0x18);
  if (pbVar4 == (byte *)0x0) {
    pbVar3 = &stack0xffffffffffffffc0;
    *(undefined1 **)(param_1 + 0x10) = &uStack_41;
    *(byte **)(param_1 + 0x18) = pbVar3;
    *(byte **)(param_1 + 0x20) = pbVar3;
    pbVar4 = pbVar3;
    if ((uVar8 & 1) == 0) goto LAB_100610d80;
LAB_100610d58:
    uVar8 = 0;
  }
  else {
    pbVar3 = *(byte **)(param_1 + 0x20);
    if ((uVar8 & 1) != 0) goto LAB_100610d58;
LAB_100610d80:
    uVar8 = ((long)pbVar3 - *(long *)(param_1 + 0x10)) / 2;
    if (3 < uVar8) {
      uVar8 = 4;
    }
  }
  if (pbVar4 != pbVar3) {
LAB_100610da4:
    uVar8 = (ulong)*pbVar4;
    goto LAB_100610ef8;
  }
  func_0x000107c610b8(*(undefined8 *)(param_1 + 0x10),(long)pbVar3 - uVar8,uVar8);
  if (*(char *)(param_1 + 0x192) == '\x01') {
    lVar5 = uVar8 + *(long *)(param_1 + 0x10);
    func_0x000107c60fcc(lVar5,1,*(long *)(param_1 + 0x20) - lVar5,*(undefined8 *)(param_1 + 0x78));
    if (lVar5 != 0) {
      pbVar4 = (byte *)(*(long *)(param_1 + 0x10) + uVar8);
      pbVar3 = pbVar4 + lVar5;
LAB_100610ecc:
      *(byte **)(param_1 + 0x18) = pbVar4;
      *(byte **)(param_1 + 0x20) = pbVar3;
      uVar8 = (ulong)*pbVar4;
      goto LAB_100610ef8;
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x48);
    lVar7 = *(long *)(param_1 + 0x50);
    lVar1 = lVar7 - lVar5;
    lVar6 = lVar7;
    if (lVar1 != 0) {
      func_0x000107c610b8(*(undefined8 *)(param_1 + 0x40),lVar5,lVar1);
      lVar7 = *(long *)(param_1 + 0x48);
      lVar6 = *(long *)(param_1 + 0x50);
    }
    lVar5 = *(long *)(param_1 + 0x40);
    *(long *)(param_1 + 0x48) = lVar5 + (lVar6 - lVar7);
    if (lVar5 == param_1 + 0x58) {
      lVar7 = 8;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x60);
    }
    *(long *)(param_1 + 0x50) = lVar5 + lVar7;
    lVar5 = param_1 + 0x108;
    func_0x0001006255a0(lVar5,param_1 + 0x88);
    FUN_100628514();
    func_0x000107c60fcc();
    if (lVar5 != 0) {
      plVar2 = *(long **)(param_1 + 0x80);
      if (plVar2 == (long *)0x0) {
        func_0x000105344dc4();
        uVar8 = plVar2[6];
                    /* WARNING: Could not recover jumptable at 0x000100610f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(uVar8 + 0x10))(uVar8,plVar2[4],plVar2[5]);
        return uVar8;
      }
      lVar5 = *(long *)(param_1 + 0x48) + lVar5;
      *(long *)(param_1 + 0x50) = lVar5;
      (**(code **)(*plVar2 + 0x20))
                (plVar2,param_1 + 0x88,*(undefined8 *)(param_1 + 0x40),lVar5,
                 (long *)(param_1 + 0x48),*(long *)(param_1 + 0x10) + uVar8,
                 *(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x70),&pbStack_50);
      if ((int)plVar2 == 3) {
        pbVar4 = *(byte **)(param_1 + 0x40);
        pbVar3 = *(byte **)(param_1 + 0x50);
        *(byte **)(param_1 + 0x10) = pbVar4;
        goto LAB_100610ecc;
      }
      pbVar4 = (byte *)(*(long *)(param_1 + 0x10) + uVar8);
      if (pbStack_50 != pbVar4) {
        *(byte **)(param_1 + 0x18) = pbVar4;
        *(byte **)(param_1 + 0x20) = pbStack_50;
        goto LAB_100610da4;
      }
    }
  }
  uVar8 = 0xffffffff;
LAB_100610ef8:
  if (*(undefined1 **)(param_1 + 0x10) == &uStack_41) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return uVar8;
}



/* Entry: 100610f2c; end: 100610f3f;  */

void FUN_100610f2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100610f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100610f40; end: 100610f6b;  */

void FUN_100610f40(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3bd68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100610f6c; end: 100610f7b; -[SCGroupServicesEntryPoint _loadGroupsIntoMemory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100610f6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09b610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127250f4),PTR_s_loadGroupsIntoMemory_112604790);
  return;
}



/* Entry: 100610f7c; end: 10061104b; -[SCGroupsDataFetcher loadGroupsIntoMemory] */

void FUN_100610f7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c6111c(auStack_40,auStack_38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c4f7c0(uVar1);
  func_0x000107c61180();
  func_0x000107c4b738(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 10061104c; end: 10061105b;  */

void FUN_10061104c(void)

{
  long in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10061105c; end: 1006110bf; -[GPBInt32Array enumerateValuesWithBlock:] */

void FUN_10061105c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf980f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_enumerateValuesWithOptions_using_1125c39e0,0,param_3);
  return;
}



/* Entry: 1006110c0; end: 100611177; -[GPBInt32Array enumerateValuesWithOptions:usingBlock:] */

void FUN_1006110c0(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  byte bStack_31;
  
  bStack_31 = 0;
  lVar2 = *(long *)(param_1 + 0x18);
  if ((param_3 >> 1 & 1) == 0) {
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined4 *)(*(long *)(param_1 + 0x10) + lVar3 * 4),lVar3,&bStack_31);
        if ((bStack_31 & 1) != 0) {
          return;
        }
        bVar1 = lVar2 + -1 != lVar3;
        lVar3 = lVar3 + 1;
      } while (bVar1);
    }
  }
  else if (lVar2 != 0) {
    do {
      lVar2 = lVar2 + -1;
      if (lVar2 == -1) {
        return;
      }
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined4 *)(*(long *)(param_1 + 0x10) + lVar2 * 4),lVar2,&bStack_31);
    } while (bStack_31 != 1);
  }
  return;
}



/* Entry: 100611178; end: 1006112c7; -[GPBCodedOutputStream writeInt32Array:values:tag:] */

void FUN_100611178(long param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((int)param_5 == 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    puStack_d0 = &UNK_10bd5f568;
    puStack_c8 = &UNK_110d9f4f8;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x000107c429d8(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x000107c40808();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_1006112c8;
      puStack_70 = &UNK_11087e858;
      puStack_58 = puStack_68;
      func_0x000107c429d8(param_4);
      func_0x000100298744(param_1 + 8,param_5);
      func_0x000100298744(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x100611320;
      puStack_98 = &UNK_110d9f4c8;
      lStack_90 = param_1;
      func_0x000107c429d8(param_4);
      func_0x000107c60bcc(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 1006112c8; end: 10061132b;  */

void FUN_1006112c8(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 4;
  if (param_2 >> 0x1c != 0) {
    lVar1 = 5;
  }
  lVar2 = 3;
  if (0x1fffff < param_2) {
    lVar2 = lVar1;
  }
  lVar1 = 2;
  if (0x3fff < param_2) {
    lVar1 = lVar2;
  }
  lVar2 = 1;
  if (0x7f < param_2) {
    lVar2 = lVar1;
  }
  lVar1 = 10;
  if ((param_2 & 0x80000000) == 0) {
    lVar1 = lVar2;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + lVar1;
  return;
}



/* Entry: 10061132c; end: 100611363; -[GPBCodedOutputStream writeInt32NoTag:] */

void FUN_10061132c(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  plVar1 = (long *)(param_1 + 8);
  if ((int)param_3 < 0) {
    uVar3 = (ulong)(int)param_3;
    uVar6 = uVar3;
    if (0x7f < uVar3) {
      do {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 == *(long *)(param_1 + 0x10)) {
          FUN_1003f59d4(plVar1);
          lVar4 = *(long *)(param_1 + 0x18);
        }
        *(long *)(param_1 + 0x18) = lVar4 + 1;
        *(byte *)(*plVar1 + lVar4) = (byte)uVar6 | 0x80;
        uVar3 = uVar6 >> 7;
        bVar2 = 0x3fff < uVar6;
        uVar6 = uVar3;
      } while (bVar2);
    }
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == *(long *)(param_1 + 0x10)) {
      FUN_1003f59d4(plVar1);
      lVar4 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x18) = lVar4 + 1;
    *(char *)(*plVar1 + lVar4) = (char)uVar3;
    return;
  }
  uVar5 = param_3;
  if (0x7f < param_3) {
    do {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == *(long *)(param_1 + 0x10)) {
        FUN_1003f59d4(plVar1);
        lVar4 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar4 + 1;
      *(byte *)(*plVar1 + lVar4) = (byte)uVar5 | 0x80;
      param_3 = uVar5 >> 7;
      bVar2 = 0x3fff < uVar5;
      uVar5 = param_3;
    } while (bVar2);
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == *(long *)(param_1 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar4 + 1;
  *(char *)(*plVar1 + lVar4) = (char)param_3;
  return;
}



/* Entry: 100611364; end: 100611477;  */

void FUN_100611364(long param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar5;
  undefined8 uVar6;
  undefined8 ***pppuVar7;
  undefined8 **ppuStack_58;
  long lStack_50;
  byte bStack_41;
  
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_100603c7c();
    if ((*(char *)(param_1 + 8) == '\x01') && ((*(byte *)(unaff_x19 + 200) & 1) == 0)) {
      uVar6 = *unaff_x21;
      FUN_100609808();
      uVar4 = 3;
      FUN_10047e734(uVar6,3);
      FUN_10047e648(param_1,param_2,uVar6,uVar4);
      *(long *)(unaff_x20 + 0x68) = param_1;
      *(undefined8 *)(unaff_x20 + 0x70) = param_2;
    }
    if (*(char *)(unaff_x21 + 7) == '\x01') {
      plVar5 = unaff_x21 + 4;
      while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
        func_0x000107c60c94(&ppuStack_58,plVar5 + 2);
        pppuVar7 = (undefined8 ***)ppuStack_58;
        pppuVar1 = (undefined8 ***)((long)ppuStack_58 + lStack_50);
        if (-1 < (char)bStack_41) {
          pppuVar7 = &ppuStack_58;
          pppuVar1 = (undefined8 ***)((long)&ppuStack_58 + (ulong)bStack_41);
        }
        for (; pppuVar7 != pppuVar1; pppuVar7 = (undefined8 ***)((long)pppuVar7 + 1)) {
          uVar2 = *(undefined1 *)pppuVar7;
          func_0x000107c60e80();
          *(undefined1 *)pppuVar7 = uVar2;
        }
        lVar3 = unaff_x19 + 0x48;
        FUN_100ab9b18(lVar3,&ppuStack_58);
        if (lVar3 == 0) {
          FUN_1004b5d48();
        }
        func_0x0001006b1fc4();
      }
    }
  }
  return;
}



/* Entry: 100611478; end: 10061155b;  */

void FUN_100611478(undefined8 param_1,long *param_2,undefined8 param_3,undefined1 *param_4,
                  long param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  long lVar5;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  
  ppuVar4 = &puStack_60;
  lVar5 = *param_2;
  FUN_100611364(param_2 + 2,param_3,param_5);
  puVar2 = (undefined1 *)param_2[1];
  puStack_60 = puVar2;
  func_0x000107c613d0();
  puStack_58 = puVar2;
  if (((*(int *)(param_5 + 0xc0) != 0) ||
      ((FUN_10061155c(), (int)puVar2 != 0 &&
       (func_0x000105394f0c(&puStack_60,"/ranking.serving.frontier.FrontierService",0x29),
       puVar2 = (undefined1 *)ppuVar4, (int)ppuVar4 != 0)))) &&
     ((func_0x000107c2bfe4(), puVar2 == (undefined1 *)0x0 ||
      (puVar3 = param_4, FUN_100613290(), puVar2 < puVar3)))) {
    iVar1 = 2;
    if (*(int *)(param_5 + 0xc0) != 0) {
      iVar1 = *(int *)(param_5 + 0xc0);
    }
    func_0x000104ae3304(param_3,iVar1);
  }
  FUN_1006115f4(param_1,*(undefined8 *)(lVar5 + 0x68),param_2[1],param_3,param_4,param_6);
  return;
}



/* Entry: 10061155c; end: 1006115d7;  */

undefined1 FUN_10061155c(void)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((bRam000000011383a200 & 1) == 0) {
    iVar2 = 0x1383a200;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      uVar1 = 0x99;
      FUN_10011bfd4(&UNK_10f73f799,0x1c,0);
      uRam000000011383a1f8 = uVar1;
      func_0x000107c60e4c(0x11383a200);
    }
  }
  return uRam000000011383a1f8;
}



/* Entry: 1006115d8; end: 1006115f3;  */

void FUN_1006115d8(void)

{
  return;
}



/* Entry: 1006115f4; end: 10061162f;  */

void FUN_1006115f4(undefined8 param_1)

{
  undefined8 *unaff_x23;
  
  FUN_1006115d8();
  FUN_100611630();
  func_0x000100611640();
  FUN_100611704();
  *unaff_x23 = param_1;
  return;
}



/* Entry: 100611630; end: 100611673;  */

void FUN_100611630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010061163c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  return;
}



/* Entry: 100611674; end: 100611703;  */

undefined8 *
FUN_100611674(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *extraout_x8;
  code *extraout_x9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010061165c();
  (*extraout_x9)();
  FUN_100612124();
  func_0x000100612134();
  (*extraout_x8)();
  *param_1 = &PTR_DAT_1107e9d90;
  param_1[1] = param_4;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  param_1[7] = uStack_38;
  param_1[6] = uStack_40;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  FUN_100612144(uStack_50,param_1 + 9,param_1 + 0xb,param_1 + 0xf,param_5);
  return param_1;
}



/* Entry: 100611704; end: 100611733;  */

undefined8 FUN_100611704(undefined8 param_1)

{
  int in_w5;
  
  FUN_100611674();
  if (in_w5 != 0) {
    func_0x00010061267c(param_1);
  }
  return param_1;
}



/* Entry: 100611734; end: 1006117d7;  */

void FUN_100611734(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar1 = *(long **)(param_2 + 8);
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  *puVar2 = *(undefined8 *)(param_3 + 0x38);
  lVar4 = *plVar1;
  puVar2[1] = lVar4;
  *(undefined1 *)(puVar2 + 0xe) = 0;
  puVar2[0xf] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[3] = FUN_10082fba0;
  puVar2[4] = param_2;
  puVar2[5] = 0;
  puVar2[7] = FUN_100830b74;
  puVar2[8] = param_2;
  puVar2[9] = 0;
  puVar2[10] = 0;
  if ((((*(long *)(param_3 + 0x10) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_3 + 0x10) + 0x40), lVar5 != 0)) &&
      (plVar6 = *(long **)(lVar5 + 8), plVar6 != (long *)0x0)) &&
     (lVar5 = *(long *)(*plVar6 + plVar1[1] * 8), lVar5 != 0)) {
    iVar3 = *(int *)(lVar5 + 8);
    if ((-1 < iVar3) && (((int)lVar4 < 0 || (iVar3 < (int)lVar4)))) {
      *(int *)(puVar2 + 1) = iVar3;
    }
    iVar3 = *(int *)(lVar5 + 0xc);
    if ((-1 < iVar3) && ((lVar4 < 0 || (iVar3 < (int)((ulong)lVar4 >> 0x20))))) {
      *(int *)((long)puVar2 + 0xc) = iVar3;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1006117d8; end: 10061189f;  */

void FUN_1006117d8(undefined8 *param_1,long param_2,long param_3)

{
  FUN_1004b8330(*(undefined8 *)(param_2 + 0x10),param_2,param_3,*(undefined8 *)(param_3 + 0x28));
  *param_1 = 0;
  return;
}



/* Entry: 1006118a0; end: 10061199f;  */

undefined8 * FUN_1006118a0(undefined8 *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  puVar4 = param_1;
  func_0x00010061180c();
  *puVar4 = &PTR_DAT_1107c4cb8;
  puVar4[1] = &PTR_DAT_1107c4d10;
  puVar4[0xb] = &PTR_PTR_1130a5848;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0x14] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0;
  puVar4[0x11] = FUN_100830760;
  puVar4[0x12] = puVar4;
  puVar4[0x13] = 0;
  if (puVar4[10] != 0) {
    puVar5 = (ulong *)param_1[4];
    do {
      uVar6 = *puVar5;
      uVar1 = uVar6 + 0x40;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar3) {
        *puVar5 = uVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar5[2] < uVar1) {
      FUN_1004bbee0(puVar5,0x40);
    }
    else {
      puVar5 = (ulong *)((long)puVar5 + uVar6 + 0x30);
    }
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    param_1[0xe] = puVar5;
  }
  return param_1;
}



/* Entry: 1006119a0; end: 1006119e3;  */

void FUN_1006119a0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  FUN_1006118a0(puVar1,param_2,param_3,1);
  *puVar1 = &PTR_DAT_1107c3858;
  puVar1[1] = &PTR_DAT_1107c38b0;
  *param_1 = 0;
  return;
}



/* Entry: 1006119e4; end: 100611a0b;  */

undefined8 FUN_1006119e4(long param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x40) == 0) ||
       (plVar2 = *(long **)(*(long *)(param_1 + 0x40) + 8), plVar2 == (long *)0x0)) {
      return 0;
    }
    uVar1 = *(undefined8 *)(*plVar2 + param_2 * 8);
  }
  return uVar1;
}



/* Entry: 100611a0c; end: 100611adb;  */

void FUN_100611a0c(undefined8 *param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  
  puVar1 = *(undefined4 **)(param_2 + 8);
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  *puVar2 = *(undefined8 *)(param_3 + 0x38);
  puVar2[1] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined1 *)(puVar2 + 8) = 0;
  *(undefined4 *)((long)puVar2 + 0x44) = *puVar1;
  *(undefined4 *)(puVar2 + 9) = 0;
  *(undefined1 *)(puVar2 + 0x11) = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  puVar2[0x14] = puVar2;
  puVar2[0x15] = 0;
  puVar2[3] = FUN_10082b6ec;
  puVar2[4] = puVar2;
  puVar2[5] = 0;
  puVar2[0xd] = FUN_10082f6bc;
  puVar2[0xe] = puVar2;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x13] = FUN_1008304e8;
  lVar4 = *(long *)(param_3 + 0x10);
  FUN_1006119e4(lVar4,*(undefined8 *)(puVar1 + 2));
  if (((lVar4 != 0) && (iVar3 = *(int *)(lVar4 + 0xc), -1 < iVar3)) &&
     ((iVar3 < *(int *)((long)puVar2 + 0x44) || (*(int *)((long)puVar2 + 0x44) < 0)))) {
    *(int *)((long)puVar2 + 0x44) = iVar3;
  }
  *param_1 = 0;
  return;
}



/* Entry: 100611adc; end: 100611b87;  */

void FUN_100611adc(undefined8 *param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 uStack_41;
  
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  *puVar2 = *(undefined8 *)(param_3 + 0x38);
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined1 *)(puVar2 + 4) = 0;
  puVar3 = *(undefined4 **)(param_2 + 8);
  uStack_41 = *(undefined1 *)(puVar3 + 1);
  puVar1 = &uStack_41;
  FUN_100561a80(puVar1,*puVar3);
  if ((int)puVar1 != 0) {
    *(undefined4 *)(puVar2 + 1) = *puVar3;
  }
  puVar2[6] = &UNK_104a94a38;
  puVar2[7] = param_2;
  puVar2[8] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 100611b88; end: 100611b93;  */

void FUN_100611b88(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100611b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 100611b94; end: 100611c37;  */

void FUN_100611b94(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined8 *puStack_28;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  *puVar2 = param_3[7];
  uVar3 = *puVar1;
  FUN_100611b88(uVar3,puVar2 + 0x40,*param_3,param_3[1],param_3[6]);
  if ((int)uVar3 == 0) {
    *param_1 = 0;
  }
  else {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x000104ab5920(param_1,2,"transport stream initialization failed",0x26,&uStack_29,
                        &uStack_48);
    puStack_28 = &uStack_48;
    func_0x000100482b64(&puStack_28);
  }
  return;
}



/* Entry: 100611c38; end: 100611cd7;  */

undefined8 * FUN_100611c38(undefined8 *param_1,undefined8 param_2)

{
  param_1[5] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined2 *)((long)param_1 + 0x4c) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  func_0x0001004b800c(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x6f] = param_2;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  param_1[0xb1] = param_2;
  param_1[0xb2] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  return param_1;
}



/* Entry: 100611cd8; end: 100611d7b;  */

undefined8
FUN_100611cd8(undefined8 param_1,undefined8 *param_2,long *param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  
  *param_2 = param_5;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = param_1;
  param_2[4] = param_2;
  param_2[6] = 0;
  param_2[5] = 0;
  param_2[8] = 0;
  param_2[7] = 0;
  FUN_100611c38(param_2 + 9,param_5);
  *(undefined4 *)(param_2 + 0xbe) = 0;
  param_2[0xbf] = 0;
  param_2[200] = param_3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = *param_3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  FUN_100460318(param_2 + 0xc0);
  return 0;
}



/* Entry: 100611d7c; end: 100611d87;  */

void FUN_100611d7c(void)

{
  return;
}



/* Entry: 100611d88; end: 100611daf;  */

void FUN_100611d88(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  plVar3 = (long *)(param_1 + 0x48);
  do {
    lVar6 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    return;
  }
  func_0x000107c2c17c();
  lVar6 = *(long *)(param_1 + 0x10);
  plVar3 = (long *)**(undefined8 **)(param_1 + 8);
  lVar4 = param_2;
  func_0x000100611dc4();
  if (lVar4 == 0) {
    func_0x000104abe96c();
    if (param_2 == 0) {
      return;
    }
    puVar5 = (undefined8 *)(*plVar3 + 0x28);
  }
  else {
    puVar5 = (undefined8 *)(*plVar3 + 0x20);
    param_2 = lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000100611e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar3,lVar6 + 0x200,param_2);
  return;
}



/* Entry: 100611db0; end: 100611ddf;  */

void FUN_100611db0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  plVar2 = (long *)**(undefined8 **)(param_1 + 8);
  lVar3 = param_2;
  func_0x000100611dc4();
  if (lVar3 == 0) {
    func_0x000104abe96c();
    if (param_2 == 0) {
      return;
    }
    puVar4 = (undefined8 *)(*plVar2 + 0x28);
  }
  else {
    puVar4 = (undefined8 *)(*plVar2 + 0x20);
    param_2 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000100611e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar2,lVar1 + 0x200,param_2);
  return;
}



/* Entry: 100611de0; end: 100611e5b;  */

void FUN_100611de0(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_3;
  func_0x000100611dc4();
  if (lVar1 == 0) {
    func_0x000104abe96c();
    if (param_3 == 0) {
      return;
    }
    puVar2 = (undefined8 *)(*param_1 + 0x28);
  }
  else {
    puVar2 = (undefined8 *)(*param_1 + 0x20);
    param_3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100611e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,param_2,param_3);
  return;
}



/* Entry: 100611e5c; end: 100611e5f;  */

void FUN_100611e5c(void)

{
  return;
}



/* Entry: 100611e60; end: 100611f1f;  */

long * FUN_100611e60(char *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long *plStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    uVar4 = *(undefined8 *)(lVar8 + 8);
    uStack_28 = (long *)*param_2;
    if (((ulong)uStack_28 & 1) != 0) {
      piVar7 = (int *)((long)uStack_28 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_1004bd618(uVar4,param_1 + 0x18,&uStack_28,"scheduling deadline timer");
    if (((ulong)uStack_28 & 1) != 0) {
      FUN_10084dad0();
    }
    return uStack_28;
  }
  FUN_100612014(param_1);
  func_0x000107c60e14();
  plVar3 = *(long **)(lVar8 + 8);
  do {
    lVar6 = *plVar3;
    lVar8 = lVar6 + -1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar8;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar8 != 0) {
    if (lVar6 == 0) {
      func_0x000107c2c340(plVar3,"done scheduling deadline timer");
      func_0x000104bd46a0();
      func_0x000104bd46a0();
      FUN_1004bdf74(&plStack_38);
      FUN_1004bdf74(&plStack_30);
      func_0x000107c60bd8(plVar3);
      return plRam0000000113815c70;
    }
    plVar3 = plVar3 + 1;
    plVar5 = plVar3;
    FUN_1004920d0(plVar3,(long)&uStack_28 + 7);
    while (plVar5 == (long *)0x0) {
      plVar5 = plVar3;
      FUN_1004920d0(plVar3,(long)&uStack_28 + 7);
    }
    func_0x0001004bd8dc(&plStack_30,plVar5[3]);
    plVar3 = plStack_30;
    plVar5[3] = 0;
    plStack_38 = plStack_30;
    if (((ulong)plStack_30 & 1) != 0) {
      piVar7 = (int *)((long)plStack_30 + -1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_1004bd778();
    if (((ulong)plVar3 & 1) != 0) {
      FUN_10084dad0(plVar3);
    }
    plVar3 = plStack_30;
    if (((ulong)plStack_30 & 1) != 0) {
      FUN_10084dad0();
      plVar3 = plStack_30;
    }
  }
  return plVar3;
}



/* Entry: 100611f20; end: 100611fbf;  */

ulong * FUN_100611f20(ulong *param_1,ulong *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  do {
    uVar4 = *param_1;
    uVar5 = uVar4 + 0x60;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (param_1[2] < uVar5) {
    FUN_1004bbee0(param_1,0x60);
  }
  else {
    param_1 = (ulong *)((long)param_1 + uVar4 + 0x30);
  }
  uVar5 = *param_2;
  uVar3 = *param_3;
  *param_1 = uVar5;
  plVar6 = (long *)**(undefined8 **)(uVar5 + 0x10);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = *plVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  param_1[9] = (ulong)FUN_100831bbc;
  param_1[10] = (ulong)param_1;
  param_1[0xb] = 0;
  func_0x000100480ee4(param_1 + 1,uVar3,param_1 + 8);
  return param_1;
}



/* Entry: 100611fc0; end: 100612013;  */

long FUN_100611fc0(long param_1,long param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  if (param_2 != 0x7fffffffffffffff) {
    lVar1 = *(long *)(param_1 + 0x10);
    lStack_30 = param_1;
    lStack_28 = param_2;
    if (*(long *)(lVar1 + 0x18) != 0) {
      func_0x000107c2c22c();
      FUN_100611fc0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
      return param_1;
    }
    param_1 = *(long *)(lVar1 + 0x10);
    FUN_100611f20(param_1,&lStack_30,&lStack_28);
    *(long *)(lVar1 + 0x18) = param_1;
  }
  return param_1;
}



/* Entry: 100612014; end: 100612043;  */

long FUN_100612014(long param_1)

{
  FUN_100611fc0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 100612044; end: 100612123;  */

long * FUN_100612044(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long *plStack_38;
  long *plStack_30;
  undefined1 uStack_21;
  
  do {
    lVar6 = *param_1;
    lVar3 = lVar6 + -1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 != 0) {
    if (lVar6 == 0) {
      func_0x000107c2c340();
      func_0x000104bd46a0();
      func_0x000104bd46a0();
      FUN_1004bdf74(&plStack_38);
      FUN_1004bdf74(&plStack_30);
      func_0x000107c60bd8(param_1);
      return plRam0000000113815c70;
    }
    param_1 = param_1 + 1;
    plVar5 = param_1;
    FUN_1004920d0(param_1,&uStack_21);
    while (plVar5 == (long *)0x0) {
      plVar5 = param_1;
      FUN_1004920d0(param_1,&uStack_21);
    }
    func_0x0001004bd8dc(&plStack_30,plVar5[3]);
    plVar4 = plStack_30;
    plVar5[3] = 0;
    plStack_38 = plStack_30;
    if (((ulong)plStack_30 & 1) != 0) {
      piVar7 = (int *)((long)plStack_30 + -1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_1004bd778();
    if (((ulong)plVar4 & 1) != 0) {
      FUN_10084dad0(plVar4);
    }
    param_1 = plStack_30;
    if (((ulong)plStack_30 & 1) != 0) {
      FUN_10084dad0();
      param_1 = plStack_30;
    }
  }
  return param_1;
}



/* Entry: 100612124; end: 100612143;  */

undefined8 FUN_100612124(void)

{
  return uRam0000000113815c70;
}



/* Entry: 100612144; end: 1006121ff;  */

void FUN_100612144(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  code *extraout_x8;
  int aiStack_78 [14];
  
  FUN_1004a2388();
  plVar2 = plRam0000000113815c70;
  (**(code **)(*plRam0000000113815c70 + 0x130))(plRam0000000113815c70,param_1,0x228);
  plVar3 = plVar2;
  FUN_100612200();
  plVar1 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
  }
  *param_2 = (long)plVar1;
  FUN_100612268(aiStack_78,plVar3 + 6,param_5);
  func_0x000100612328();
  if (aiStack_78[0] != 0) {
    func_0x000104c01a80(plRam0000000113815c70);
    (*extraout_x8)();
  }
  *(undefined1 *)((long)plVar2 + 0x71) = 1;
  FUN_100612330();
  FUN_100561ce4();
  func_0x0001006124ec();
  return;
}



/* Entry: 100612200; end: 100612267;  */

void FUN_100612200(long param_1)

{
  FUN_1004b92d4();
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  func_0x000100489924(&UNK_1107e9de0);
  *(long *)(param_1 + 0xf8) = param_1;
  *(long *)(param_1 + 0x100) = param_1;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  FUN_1004b9214(param_1 + 0x140);
  return;
}



/* Entry: 100612268; end: 10061226f;  */

void FUN_100612268(undefined8 param_1,long param_2,undefined8 param_3)

{
  byte bStack_21;
  
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_2 + 0x1c) = 0;
  FUN_100612270(param_1,param_3,param_2 + 0x10,&bStack_21);
  if ((bStack_21 & 1) == 0) {
    func_0x000104c00744(param_2 + 0x10);
  }
  return;
}



/* Entry: 100612270; end: 1006122bb;  */

undefined8
FUN_100612270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  func_0x000100608af8(param_3,param_2);
  *param_4 = 1;
  FUN_100608b94();
  (**(code **)(extraout_x8 + 0x1b0))();
  func_0x000100601a4c(param_1,param_3);
  func_0x000107c60c94();
  FUN_100124844();
  return unaff_x19;
}



/* Entry: 1006122bc; end: 10061231f;  */

void FUN_1006122bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte bStack_21;
  
  *(int *)(param_2 + 0x18) = (int)param_4;
  *(char *)(param_2 + 0x1c) = (char)((ulong)param_4 >> 0x20);
  FUN_100612270(param_1,param_3,param_2 + 0x10,&bStack_21);
  if ((bStack_21 & 1) == 0) {
    func_0x000104c00744(param_2 + 0x10);
  }
  return;
}



/* Entry: 100612320; end: 10061232f;  */

void FUN_100612320(void)

{
  return;
}



/* Entry: 100612330; end: 10061237b;  */

undefined1 * FUN_100612330(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  FUN_100561bf0();
  uStack_28 = extraout_x8;
  FUN_10061237c(&PTR_DAT_1107ea0b0);
  FUN_100612394();
  FUN_1006124b8(auStack_48);
  func_0x0001004b9658(uStack_28);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  func_0x000107c60e78();
  return auStack_48;
}



/* Entry: 10061237c; end: 100612393;  */

undefined1 * FUN_10061237c(void)

{
  return &stack0x00000008;
}



/* Entry: 100612394; end: 10061246b;  */

undefined1 * FUN_100612394(undefined1 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uVar4 = (undefined4)((ulong)param_2 >> 0x20);
  iVar3 = (int)param_2;
  puVar2 = auStack_40;
  FUN_1004b9648();
  uVar1 = (undefined1 *)CONCAT44(uVar4,iVar3) == param_1;
  uStack_28 = extraout_x8;
  if (!(bool)uVar1) {
    FUN_1001246dc();
    FUN_10061246c();
    if ((bool)uVar1) {
      uVar1 = extraout_x8_00 == unaff_x19;
      if ((bool)uVar1) {
        FUN_10055f820();
        func_0x000104c01b50();
        func_0x000100612494();
        *(undefined8 *)(unaff_x20 + 0x18) = 0;
        FUN_10055f820(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x000104c01bc4();
        func_0x000104c01a5c(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x000104c01b30();
        func_0x00010061247c();
        func_0x000104c01ac4();
      }
      else {
        FUN_10055f820();
        func_0x00010061247c();
        func_0x000100612494();
        *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
        puVar2 = param_1;
      }
      *(long *)(unaff_x19 + 0x18) = unaff_x19;
      param_1 = puVar2;
    }
    else {
      uVar1 = extraout_x8_00 == unaff_x19;
      if ((bool)uVar1) {
        func_0x000104c01b18();
        param_1 = *(undefined1 **)(unaff_x19 + 0x18);
        func_0x000104c01a5c();
        func_0x000104c01b8c();
      }
      else {
        *(long *)(unaff_x20 + 0x18) = extraout_x8_00;
        *(undefined1 **)(unaff_x19 + 0x18) = param_1;
      }
    }
  }
  func_0x0001004b9658(uStack_28);
  if ((bool)uVar1) {
    return param_1;
  }
  func_0x000107c60e78();
  if (iVar3 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  return *(undefined1 **)(param_1 + 0x18);
}



/* Entry: 10061246c; end: 1006124b7;  */

undefined8 FUN_10061246c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1006124b8; end: 100612537;  */

void FUN_1006124b8(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001006124a8();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000104c01a8c(uVar1);
  return;
}



/* Entry: 100612538; end: 10061260f;  */

void FUN_100612538(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  iVar2 = (int)param_2;
  FUN_1004b9648();
  uVar1 = CONCAT44(uVar3,iVar2) == param_1;
  uStack_28 = extraout_x8;
  if (!(bool)uVar1) {
    FUN_1001246dc();
    FUN_10061246c();
    if ((bool)uVar1) {
      uVar1 = extraout_x8_00 == unaff_x19;
      if ((bool)uVar1) {
        FUN_10055f820();
        func_0x000104c01b50();
        func_0x000100612494();
        *(undefined8 *)(unaff_x20 + 0x18) = 0;
        FUN_10055f820(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x000104c01bc4();
        func_0x000104c01a5c(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x000104c01b30();
        func_0x00010061247c(auStack_40);
        func_0x000104c01ac4();
      }
      else {
        FUN_10055f820();
        func_0x00010061247c();
        func_0x000100612494();
        *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
      }
      *(long *)(unaff_x19 + 0x18) = unaff_x19;
    }
    else {
      uVar1 = extraout_x8_00 == unaff_x19;
      if ((bool)uVar1) {
        func_0x000104c01b18();
        func_0x000104c01a5c(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x000104c01b8c();
      }
      else {
        *(long *)(unaff_x20 + 0x18) = extraout_x8_00;
        *(long *)(unaff_x19 + 0x18) = param_1;
      }
    }
  }
  func_0x0001004b9658(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  func_0x000107c60e78();
  if (iVar2 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  *(undefined ***)CONCAT44(uVar3,iVar2) = &PTR_DAT_1107ea140;
  return;
}



/* Entry: 100612610; end: 100612623;  */

void FUN_100612610(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1107ea140;
  return;
}



/* Entry: 100612624; end: 100612657;  */

void FUN_100612624(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001006124a8();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000104c01a8c(uVar1);
  return;
}



/* Entry: 100612658; end: 100612693;  */

void FUN_100612658(void)

{
  return;
}



/* Entry: 100612694; end: 1006126c7;  */

void FUN_100612694(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)param_1;
  FUN_1004b9428();
  *(undefined1 *)(param_2 + 0x20) = 0;
  *(undefined1 *)(param_2 + 1) = 1;
  *(undefined4 *)(param_2 + 4) = uVar1;
  *(long *)(param_2 + 0x10) = param_1 + 0xb8;
  return;
}



/* Entry: 1006126c8; end: 1006126e3;  */

void FUN_1006126c8(void)

{
  return;
}



/* Entry: 1006126e4; end: 100612743;  */

void FUN_1006126e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_138 [256];
  undefined8 uStack_38;
  
  FUN_1006099c0(auStack_138);
  uStack_38 = param_3;
  func_0x000100612b60(param_1,auStack_138);
  func_0x00010060867c(auStack_138);
  return;
}



/* Entry: 100612744; end: 100612767;  */

void FUN_100612744(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_100102e7c(&uStack_11,param_1);
  return;
}



/* Entry: 100612768; end: 100612b2b;  */

undefined1  [16] FUN_100612768(long *param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x25;
  ulong uVar14;
  undefined1 auVar15 [16];
  
  uVar7 = param_2;
  FUN_100612744();
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar14 = uVar13 - 1;
    if ((uVar13 & uVar14) == 0) {
      unaff_x25 = uVar14 & uVar7;
    }
    else {
      unaff_x25 = uVar7;
      if (uVar13 <= uVar7) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar7 / uVar13;
        }
        unaff_x25 = uVar7 - uVar5 * uVar13;
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10061282c;
          uVar5 = plVar12[1];
          if (uVar5 != uVar7) break;
          plVar2 = plVar12 + 2;
          FUN_1000e107c(plVar2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            uVar4 = 0;
            goto LAB_100612af4;
          }
        }
        if ((uVar13 & uVar14) == 0) {
          uVar5 = uVar5 & uVar14;
        }
        else if (uVar13 <= uVar5) {
          uVar6 = 0;
          if (uVar13 != 0) {
            uVar6 = uVar5 / uVar13;
          }
          uVar5 = uVar5 - uVar6 * uVar13;
        }
      } while (uVar5 == unaff_x25);
    }
  }
LAB_10061282c:
  plVar2 = param_1 + 2;
  plVar12 = (long *)0x118;
  func_0x000107c60e20();
  *plVar12 = 0;
  plVar12[1] = uVar7;
  FUN_1006099c0(plVar12 + 2,param_3);
  plVar12[0x22] = *(long *)(param_3 + 0x100);
  if ((uVar13 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar13))
  goto LAB_100612a78;
  uVar14 = 1;
  if (2 < uVar13) {
    uVar14 = (ulong)((uVar13 & uVar13 - 1) != 0);
  }
  uVar14 = uVar14 | uVar13 << 1;
  uVar13 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar14 <= uVar13) {
    uVar14 = uVar13;
  }
  if (uVar14 - 1 == 0) {
    uVar14 = 2;
  }
  else if ((uVar14 & uVar14 - 1) != 0) {
    func_0x000107c60c44();
  }
  uVar13 = param_1[1];
  if (uVar13 < uVar14) {
LAB_1006128e4:
    if (uVar14 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100612b1c);
      (*pcVar1)();
    }
    lVar3 = uVar14 << 3;
    func_0x000107c60e20(lVar3);
    FUN_100612b78(param_1,lVar3);
    param_1[1] = uVar14;
    lVar3 = *param_1;
    for (uVar13 = 0; uVar14 != uVar13; uVar13 = uVar13 + 1) {
      *(undefined8 *)(lVar3 + uVar13 * 8) = 0;
    }
    plVar8 = (long *)*plVar2;
    uVar13 = uVar14;
    if (plVar8 != (long *)0x0) {
      uVar10 = plVar8[1];
      uVar6 = uVar14 - 1;
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar10 / uVar14;
      }
      uVar11 = uVar10;
      if (uVar14 <= uVar10) {
        uVar11 = uVar10 - uVar5 * uVar14;
      }
      if ((uVar14 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      *(long **)(lVar3 + uVar11 * 8) = plVar2;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar5 = plVar8[1];
        if ((uVar14 & uVar6) == 0) {
          uVar5 = uVar5 & uVar6;
        }
        else if (uVar14 <= uVar5) {
          uVar10 = 0;
          if (uVar14 != 0) {
            uVar10 = uVar5 / uVar14;
          }
          uVar5 = uVar5 - uVar10 * uVar14;
        }
        if (uVar5 != uVar11) {
          if (*(long *)(lVar3 + uVar5 * 8) == 0) {
            *(long **)(lVar3 + uVar5 * 8) = plVar9;
            uVar11 = uVar5;
          }
          else {
            *plVar9 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar3 + uVar5 * 8);
            **(long **)(lVar3 + uVar5 * 8) = (long)plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  else if (uVar14 < uVar13) {
    uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (uVar14 <= uVar5) {
      uVar14 = uVar5;
    }
    if (uVar14 < uVar13) {
      if (uVar14 != 0) goto LAB_1006128e4;
      FUN_100612b78(param_1,0);
      param_1[1] = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = param_1[1];
    }
  }
  if ((uVar13 & uVar13 - 1) == 0) {
    unaff_x25 = uVar13 - 1 & uVar7;
  }
  else {
    unaff_x25 = uVar7;
    if (uVar13 <= uVar7) {
      uVar14 = 0;
      if (uVar13 != 0) {
        uVar14 = uVar7 / uVar13;
      }
      unaff_x25 = uVar7 - uVar14 * uVar13;
    }
  }
LAB_100612a78:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar12 = *plVar2;
    *plVar2 = (long)plVar12;
    *(long **)(lVar3 + unaff_x25 * 8) = plVar2;
    if (*plVar12 != 0) {
      uVar7 = *(ulong *)(*plVar12 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar7 = uVar7 & uVar13 - 1;
      }
      else if (uVar13 <= uVar7) {
        uVar14 = 0;
        if (uVar13 != 0) {
          uVar14 = uVar7 / uVar13;
        }
        uVar7 = uVar7 - uVar14 * uVar13;
      }
      *(long **)(lVar3 + uVar7 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
  }
  param_1[3] = param_1[3] + 1;
  func_0x000100612b90();
  uVar4 = 1;
LAB_100612af4:
  auVar15._8_8_ = uVar4;
  auVar15._0_8_ = plVar12;
  return auVar15;
}



/* Entry: 100612b2c; end: 100612b77;  */

void FUN_100612b2c(undefined8 param_1,undefined8 param_2)

{
  FUN_100612768(param_1,param_2,param_2);
  return;
}



/* Entry: 100612b78; end: 100612baf;  */

void FUN_100612b78(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100612bb0; end: 100612bd7;  */

undefined8 FUN_100612bb0(undefined8 param_1)

{
  func_0x000100612b98(param_1,0);
  return param_1;
}



/* Entry: 100612bd8; end: 100612c97;  */

void FUN_100612bd8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100612bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  FUN_100612bd8();
  return;
}



/* Entry: 100612c98; end: 100612ccb;  */

void FUN_100612c98(long param_1,undefined8 *param_2,undefined8 *param_3,byte *param_4,long *param_5,
                  undefined8 *param_6,long *param_7,undefined8 param_8,long *param_9)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x19;
  undefined1 *unaff_x21;
  
  plVar1 = (long *)(param_1 + 8);
  UNRECOVERED_JUMPTABLE = (code *)(ulong)*param_4;
  lVar2 = *param_5;
  plVar3 = (long *)*param_6;
  lVar4 = *param_7;
  lVar5 = *param_9;
  FUN_1004899d8(plVar1,*param_2,*param_3);
  if ((int)UNRECOVERED_JUMPTABLE == 0) {
    *(long *)(lVar2 + 0xf8) = lVar5;
    *unaff_x21 = 1;
    *(undefined1 **)(lVar2 + 0x78) = unaff_x21 + 0xd0;
    *(long *)(lVar2 + 0x88) = lVar4;
    *(undefined1 *)(lVar2 + 0x98) = 1;
    plVar1 = (long *)(lVar2 + 0xa0);
  }
  else {
    FUN_100612124();
    (**(code **)(*plVar1 + 0x130))();
    func_0x000104c008a0();
    *plVar3 = (long)plVar1;
    plVar1[0x10] = lVar5;
    plVar1[2] = lVar4;
    *(undefined1 *)(plVar1 + 4) = 1;
    plVar1 = plVar1 + 5;
  }
  FUN_100612d94(plVar1);
  FUN_100612df0(*unaff_x19);
                    /* WARNING: Could not recover jumptable at 0x000100612d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100612ccc; end: 100612d93;  */

void FUN_100612ccc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long *param_6,long param_7,undefined8 param_8,long param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *unaff_x19;
  undefined1 *unaff_x21;
  
  uVar2 = (undefined4)((ulong)param_4 >> 0x20);
  iVar1 = (int)param_4;
  FUN_1004899d8();
  if (iVar1 == 0) {
    *(long *)(param_5 + 0xf8) = param_9;
    *unaff_x21 = 1;
    *(undefined1 **)(param_5 + 0x78) = unaff_x21 + 0xd0;
    *(long *)(param_5 + 0x88) = param_7;
    *(undefined1 *)(param_5 + 0x98) = 1;
    param_1 = (long *)(param_5 + 0xa0);
  }
  else {
    FUN_100612124();
    (**(code **)(*param_1 + 0x130))();
    func_0x000104c008a0();
    *param_6 = (long)param_1;
    param_1[0x10] = param_9;
    param_1[2] = param_7;
    *(undefined1 *)(param_1 + 4) = 1;
    param_1 = param_1 + 5;
  }
  FUN_100612d94(param_1);
  FUN_100612df0(*unaff_x19);
                    /* WARNING: Could not recover jumptable at 0x000100612d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)CONCAT44(uVar2,iVar1))();
  return;
}



/* Entry: 100612d94; end: 100612d9b;  */

void FUN_100612d94(undefined8 param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined1 in_register_00005008;
  undefined1 in_register_00005009;
  undefined1 in_register_0000500a;
  undefined1 in_register_0000500b;
  undefined1 in_register_0000500c;
  undefined1 in_register_0000500d;
  undefined1 in_register_0000500e;
  undefined1 in_register_0000500f;
  undefined8 in_register_00005028;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  FUN_100561bf0();
  *(long *)(param_2 + 8) = param_3;
  *(long *)(param_2 + 0x10) = param_3 + 0x108;
  *(undefined8 *)(param_2 + 0x18) = unaff_x20;
  uStack_28 = extraout_x8;
  FUN_100608b94();
  (**(code **)(extraout_x8_00 + 0x140))(auStack_48);
  func_0x0001004bb06c();
  *(ulong *)(unaff_x19 + 0x38) =
       CONCAT17(in_register_0000500f,
                CONCAT16(in_register_0000500e,
                         CONCAT15(in_register_0000500d,
                                  CONCAT14(in_register_0000500c,
                                           CONCAT13(in_register_0000500b,
                                                    CONCAT12(in_register_0000500a,
                                                             CONCAT11(in_register_00005009,
                                                                      in_register_00005008)))))));
  *(ulong *)(unaff_x19 + 0x30) =
       CONCAT17(in_register_00005007,
                CONCAT16(in_register_00005006,
                         CONCAT15(in_register_00005005,
                                  CONCAT14(in_register_00005004,
                                           CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
                                 )));
  *(undefined8 *)(unaff_x19 + 0x48) = in_register_00005028;
  *(undefined8 *)(unaff_x19 + 0x40) = param_1;
  func_0x0001004b9658(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  extraout_x8_01[1] = 0;
  *extraout_x8_01 = 0;
  extraout_x8_01[3] = 0;
  extraout_x8_01[2] = 0;
  return;
}



/* Entry: 100612d9c; end: 100612def;  */

void FUN_100612d9c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  long unaff_x19;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined1 in_register_00005008;
  undefined1 in_register_00005009;
  undefined1 in_register_0000500a;
  undefined1 in_register_0000500b;
  undefined1 in_register_0000500c;
  undefined1 in_register_0000500d;
  undefined1 in_register_0000500e;
  undefined1 in_register_0000500f;
  undefined8 in_register_00005028;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  FUN_100561bf0();
  *(long *)(param_2 + 8) = param_3;
  *(long *)(param_2 + 0x10) = param_3 + 0x108;
  *(undefined8 *)(param_2 + 0x18) = param_4;
  uStack_28 = extraout_x8;
  FUN_100608b94();
  (**(code **)(extraout_x8_00 + 0x140))(auStack_48);
  func_0x0001004bb06c();
  *(ulong *)(unaff_x19 + 0x38) =
       CONCAT17(in_register_0000500f,
                CONCAT16(in_register_0000500e,
                         CONCAT15(in_register_0000500d,
                                  CONCAT14(in_register_0000500c,
                                           CONCAT13(in_register_0000500b,
                                                    CONCAT12(in_register_0000500a,
                                                             CONCAT11(in_register_00005009,
                                                                      in_register_00005008)))))));
  *(ulong *)(unaff_x19 + 0x30) =
       CONCAT17(in_register_00005007,
                CONCAT16(in_register_00005006,
                         CONCAT15(in_register_00005005,
                                  CONCAT14(in_register_00005004,
                                           CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
                                 )));
  *(undefined8 *)(unaff_x19 + 0x48) = in_register_00005028;
  *(undefined8 *)(unaff_x19 + 0x40) = param_1;
  func_0x0001004b9658(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  extraout_x8_01[1] = 0;
  *extraout_x8_01 = 0;
  extraout_x8_01[3] = 0;
  extraout_x8_01[2] = 0;
  return;
}



/* Entry: 100612df0; end: 100612dff;  */

void FUN_100612df0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


