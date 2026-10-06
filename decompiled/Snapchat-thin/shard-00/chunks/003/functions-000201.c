/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10048ab98; end: 10048abd7;  */

undefined8 FUN_10048ab98(undefined8 param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      FUN_100489994();
    } while (extraout_w10 != 0);
  }
  FUN_10048abd8();
  FUN_10048abec();
  return param_1;
}



/* Entry: 10048abd8; end: 10048abeb;  */

void FUN_10048abd8(undefined8 param_1)

{
  undefined8 *unaff_x19;
  undefined8 in_register_00005008;
  
  unaff_x19[1] = in_register_00005008;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10048abec; end: 10048ac33;  */

void FUN_10048abec(long param_1)

{
  FUN_100450bd8();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10048ac34; end: 10048ac4b;  */

void FUN_10048ac34(void)

{
  return;
}



/* Entry: 10048ac4c; end: 10048acbb;  */

undefined1  [16]
FUN_10048ac4c(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  long lVar1;
  long *plVar2;
  long **pplVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long *plStack_90;
  undefined *puStack_88;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    func_0x000107c60e20(lVar1);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar1;
    return auVar6;
  }
  func_0x000104bd35f4();
  if (param_2 >> 0x3d == 0) {
    plVar2 = param_1 + 2;
    FUN_10048ac4c();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + param_2);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar2;
    return auVar7;
  }
  func_0x000105078430();
  pplVar3 = &plStack_90;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_88 = PTR_PTR_1126f9458;
  puVar5 = PTR_s_init_1125d9248;
  plStack_90 = param_1;
  func_0x000107c61154(&plStack_90,PTR_s_init_1125d9248);
  if (pplVar3 != (long **)0x0) {
    func_0x000107c61174(param_3);
    uVar4 = *(undefined8 *)((long)pplVar3 + 8);
    *(undefined8 *)((long)pplVar3 + 8) = param_3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_4);
    uVar4 = *(undefined8 *)((long)pplVar3 + 0x10);
    *(undefined8 *)((long)pplVar3 + 0x10) = param_4;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_5);
    uVar4 = *(undefined8 *)((long)pplVar3 + 0x18);
    *(undefined8 *)((long)pplVar3 + 0x18) = param_5;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_6);
    uVar4 = *(undefined8 *)((long)pplVar3 + 0x20);
    *(undefined8 *)((long)pplVar3 + 0x20) = param_6;
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  auVar8._8_8_ = puVar5;
  auVar8._0_8_ = pplVar3;
  return auVar8;
}



/* Entry: 10048acbc; end: 10048adb7; -[SCChatReactionServices initWithChatReactionMetadataProvider:composerChatReactionMetadataProvider:chatReactionSearcher:chatReactionAssetWarmer:] */

undefined1 *
FUN_10048acbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126f9458;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
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
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10048adb8; end: 10048ae13;  */

void FUN_10048adb8(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10048ae14; end: 10048ae1b;  */

void FUN_10048ae14(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x88);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10048ae1c; end: 10048ae6f;  */

void FUN_10048ae1c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x88);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10048ae70; end: 10048aeb3;  */

void FUN_10048ae70(void)

{
  long unaff_x20;
  
  FUN_10048b8e4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 10048aeb4; end: 10048aedf;  */

long FUN_10048aeb4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010048b08c(param_1);
  }
  return param_1;
}



/* Entry: 10048aee0; end: 10048af57;  */

void FUN_10048aee0(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    func_0x00010048ac80(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      func_0x000107c610b8(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10048af58; end: 10048af8f;  */

undefined8 * FUN_10048af58(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10048aee0(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 3);
  return param_1;
}



/* Entry: 10048af90; end: 10048b04f;  */

undefined8 * FUN_10048af90(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  float fVar4;
  undefined1 auStack_34 [4];
  
  puVar1 = param_1;
  FUN_10048af58();
  puVar1[3] = *puVar1;
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 0x18);
  puVar3 = *(undefined1 **)(param_2 + 0x1c);
  puVar2 = puVar3;
  if (((ulong)puVar3 >> 0x20 & 1) == 0) {
    FUN_100078a28(auStack_34);
    puVar2 = auStack_34;
    func_0x000107c60d08(puVar2);
  }
  FUN_10048b050(param_1 + 5,(ulong)puVar2 & 0xffffffff);
  if (((ulong)puVar3 >> 0x20 & 1) == 0) {
    func_0x000107c60d04(auStack_34);
  }
  fVar4 = *(float *)(param_2 + 0x18);
  *(float *)(param_1 + 0x13e) = -fVar4;
  *(float *)((long)param_1 + 0x9f4) = fVar4;
  return param_1;
}



/* Entry: 10048b050; end: 10048b0a3;  */

void FUN_10048b050(ulong *param_1,ulong param_2)

{
  long lVar1;
  
  *param_1 = param_2;
  for (lVar1 = 1; lVar1 != 0x138; lVar1 = lVar1 + 1) {
    param_2 = lVar1 + (param_2 ^ param_2 >> 0x3e) * 0x5851f42d4c957f2d;
    param_1[lVar1] = param_2;
  }
  param_1[0x138] = 0;
  return;
}



/* Entry: 10048b0a4; end: 10048b0cf;  */

undefined8 FUN_10048b0a4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010048b08c(&uStack_28);
  return param_1;
}



/* Entry: 10048b0d0; end: 10048b0db;  */

void FUN_10048b0d0(void)

{
  return;
}



/* Entry: 10048b0dc; end: 10048b12f;  */

void FUN_10048b0dc(void)

{
  undefined1 uStack_21;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  if (lRam000000011383a238 != -1) {
    puStack_18 = &uStack_21;
    ppuStack_20 = &puStack_18;
    func_0x000107c60c38(0x11383a238,&ppuStack_20,FUN_10048b130);
  }
  return;
}



/* Entry: 10048b130; end: 10048b233;  */

void FUN_10048b130(void)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)0x30;
  func_0x000107c60e20();
  plVar7 = puVar5 + 1;
  *plVar7 = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110ccd390;
  puVar1 = puVar5 + 3;
  puVar5[5] = 0;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar2 = puVar5 + 2;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = *plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uStack_40 = 0;
  uStack_38 = 0;
  puVar5[3] = puVar5 + 3;
  puVar5[4] = puVar5;
  puStack_60 = puVar1;
  puStack_58 = puVar5;
  puStack_50 = puVar1;
  puStack_48 = puVar5;
  FUN_10048b234(&uStack_40);
  func_0x00010048b260(&puStack_50);
  puVar6 = (undefined8 *)0x40;
  func_0x000107c60e20();
  *puVar6 = &PTR_FUN_110ccdd48;
  puVar6[2] = 0;
  puVar6[1] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  puVar6[5] = puVar1;
  puVar6[6] = puVar5;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puVar6[7] = 0;
  puRam000000011383a240 = puVar6;
  FUN_10048b28c();
  func_0x00010048b260(&puStack_60);
  return;
}



/* Entry: 10048b234; end: 10048b28b;  */

long FUN_10048b234(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c60d68();
  }
  return param_1;
}



/* Entry: 10048b28c; end: 10048b323;  */

undefined8 FUN_10048b28c(void)

{
  undefined8 uVar1;
  undefined4 uStack_24;
  
  if ((bRam000000011383a2f0 & 1) == 0) {
    uVar1 = 0x11383a2f0;
    func_0x000107c60e48();
    if ((int)uVar1 != 0) {
      uStack_24 = 10;
      FUN_10044fc98();
      FUN_10048b324(0x11383a250,&UNK_10f73f9a8,&uStack_24,uVar1);
      func_0x000107c60e4c(0x11383a2f0);
    }
  }
  return 0x11383a250;
}



/* Entry: 10048b324; end: 10048b397;  */

undefined8
FUN_10048b324(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  FUN_10002b838(auStack_48);
  FUN_10028bc78(param_1,auStack_48,*param_3,param_4,0);
  func_0x000107c60ca0(auStack_48);
  return param_1;
}



/* Entry: 10048b398; end: 10048b3ab;  */

void FUN_10048b398(void)

{
  return;
}



/* Entry: 10048b3ac; end: 10048b3cf;  */

void FUN_10048b3ac(long param_1)

{
  FUN_100450bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10048b3d0; end: 10048b3eb;  */

void FUN_10048b3d0(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  plVar2 = (long *)0x0;
  if (param_2 != 0) {
    plVar2 = (long *)(param_2 + 0x10);
  }
  if ((plVar2 != (long *)0x0) && ((plVar2[1] == 0 || (*(long *)(plVar2[1] + 8) == -1)))) {
    lStack_28 = param_1[1];
    if (lStack_28 != 0) {
      plVar1 = (long *)(lStack_28 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = (long *)(lStack_28 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_18 = plVar2[1];
    lStack_20 = *plVar2;
    *plVar2 = param_2;
    plVar2[1] = lStack_28;
    lStack_30 = param_2;
    FUN_10048b47c(&lStack_20);
    func_0x00010048b4a0(&lStack_30);
    return;
  }
  return;
}



/* Entry: 10048b3ec; end: 10048b46f;  */

void FUN_10048b3ec(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    lStack_28 = *(long *)(param_1 + 8);
    if (lStack_28 != 0) {
      plVar1 = (long *)(lStack_28 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = (long *)(lStack_28 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = lStack_28;
    uStack_30 = param_3;
    FUN_10048b47c(&uStack_20);
    func_0x00010048b4a0(&uStack_30);
    return;
  }
  return;
}



/* Entry: 10048b470; end: 10048b47b;  */

undefined8 FUN_10048b470(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10048b47c; end: 10048b4c3;  */

void FUN_10048b47c(long param_1)

{
  FUN_10048b470();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10048b4c4; end: 10048b4e7;  */

void FUN_10048b4c4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10048b4e8; end: 10048b50b;  */

void FUN_10048b4e8(long param_1)

{
  FUN_100450bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10048b50c; end: 10048b593;  */

void FUN_10048b50c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x000100489a64();
  uStack_28 = extraout_x8;
  FUN_10048b5e4(auStack_40,1);
  func_0x00010048b690(lStack_30,param_3);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  FUN_10048b6e4(auStack_40);
  func_0x00010048b4d4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  FUN_10048b6e4(auStack_40);
  func_0x000107c34cac();
  pcStack_48 = FUN_10048b594;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10048b50c(&uStack_51,puVar2);
  return;
}



/* Entry: 10048b594; end: 10048b5e3;  */

void FUN_10048b594(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10048b50c(&uStack_11,param_1);
  return;
}



/* Entry: 10048b5e4; end: 10048b6e3;  */

long FUN_10048b5e4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x00010048b5b8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10048b6e4; end: 10048b6f3;  */

void FUN_10048b6e4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10048b6f4; end: 10048b717;  */

void FUN_10048b6f4(long param_1)

{
  FUN_10048b470();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10048b718; end: 10048b723;  */

long FUN_10048b718(long param_1)

{
  return param_1 + 0x80;
}



/* Entry: 10048b724; end: 10048b75b;  */

void FUN_10048b724(void)

{
  long unaff_x19;
  
  FUN_10048b718();
  FUN_100469c34();
  FUN_10046a1bc(unaff_x19 + 0x40);
  func_0x00010046e31c(unaff_x19 + 0x28);
  FUN_10046e0cc(unaff_x19 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10048b75c; end: 10048b7cb;  */

void FUN_10048b75c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_68 [72];
  
  FUN_100460de4(auStack_68);
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  FUN_100467a48(auStack_68);
  FUN_10048b7f0(param_1);
  return;
}



/* Entry: 10048b7cc; end: 10048b7ef;  */

void FUN_10048b7cc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10048b75c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10048b7f0; end: 10048b7f7;  */

undefined8 * FUN_10048b7f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107ec4f0;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (plRam0000000113815c78 == (long *)0x0) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000113815c78 + 0x18))();
  }
  return param_1;
}



/* Entry: 10048b7f8; end: 10048b8e3;  */

void FUN_10048b7f8(long param_1)

{
  FUN_10045fc9c(param_1 + 0x60);
  FUN_1001148fc(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10048b8e4; end: 10048c217;  */

void FUN_10048b8e4(long *param_1,long param_2)

{
  undefined *puVar1;
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
  FUN_1002c7cf4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  puVar1 = PTR_PTR_1126a8d70;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174(uStack_c0);
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar16 = auStack_70[0];
  func_0x000107c61174();
  uVar17 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar17 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar17);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar18);
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174(uVar18);
  uVar17 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb8f0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0x53616964654d6461;
  func_0x000107c5fadc(0x53616964654d6461,0xef73656369767265);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar17);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010efbb820);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar17);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f007130);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f007150);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efbb870);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar17);
  func_0x000107c61174(uVar15);
  func_0x000107c61174();
  uVar17 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6a80);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  uVar17 = uVar18;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar16);
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
  *(undefined8 *)(param_2 + 0x88) = uVar17;
  *param_1 = param_2;
  return;
}



/* Entry: 10048c218; end: 10048c21f;  */

void FUN_10048c218(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xa8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10048c220; end: 10048c273;  */

void FUN_10048c220(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xa8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10048c274; end: 10048c7cf;  */

void FUN_10048c274(long *param_1,long param_2)

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
  undefined8 uVar20;
  undefined8 uVar21;
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
  FUN_1002c03e8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  *(undefined8 *)(param_2 + 0x88) = uStack_e8;
  *(undefined8 *)(param_2 + 0x90) = uStack_f0;
  *(undefined8 *)(param_2 + 0x98) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_100;
  func_0x00010048dac8();
  func_0x000107c613fc();
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
  uVar20 = uVar19;
  FUN_10048db68();
  *(undefined8 *)(param_2 + 0x10) = uVar20;
  uVar21 = uVar20;
  func_0x000107c6157c();
  FUN_10048dbb0();
  func_0x000107c61574(uVar20);
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
  *(undefined8 *)(param_2 + 0xa8) = uVar21;
  *param_1 = param_2;
  return;
}



/* Entry: 10048c7d0; end: 10048c81b;  */

void FUN_10048c7d0(void)

{
  long unaff_x20;
  
  FUN_10048c274(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 10048c81c; end: 10048c823;  */

void FUN_10048c81c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10048c824; end: 10048c877;  */

void FUN_10048c824(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10048c878; end: 10048c883;  */

void FUN_10048c878(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002a662c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a8d90;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar7 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174();
  uVar7 = uVar8;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 10048c884; end: 10048cb47;  */

void FUN_10048c884(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002a662c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a8d90;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar6 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar6 = uVar7;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 10048cb48; end: 10048cd9f; -[SCWebBrowsingUserScopedServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10048cb48(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + _DAT_11272912c;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c3ebd4();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61144(auStack_68,param_1);
  puVar4 = PTR_PTR_1126ae720;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  puStack_88 = &UNK_105774858;
  puStack_80 = &UNK_1108b05d0;
  func_0x000107c6111c(auStack_78,auStack_68);
  uStack_70 = (char)lVar3;
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  puStack_c8 = puVar6;
  uStack_c0 = 0xc2000000;
  puStack_b8 = &UNK_1057748b4;
  puStack_b0 = &UNK_1108b0600;
  func_0x000107c6111c(auStack_a8,auStack_68);
  uStack_a0 = (char)lVar3;
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_d0,auStack_68);
  func_0x000107c3e4fc(puVar6);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126bde40;
  func_0x000107c610f4(PTR_PTR_1126bde40);
  func_0x000107c45a6c();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_d0);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_78);
  func_0x000107c61120(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10048cda0; end: 10048ce4f; -[_TtC21SCWebBrowsingServices30SCWebBrowsingUserScopedService initWithBrowserCache:browserViewProvider:webViewPool:webViewScriptCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10048cda0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11308b2b8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308b2c0) = param_4;
  *(undefined8 *)(param_1 + _DAT_11308b2c8) = param_5;
  *(undefined8 *)(param_1 + _DAT_11308b2d0) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 10048ce50; end: 10048ce8b;  */

void FUN_10048ce50(void)

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



/* Entry: 10048ce8c; end: 10048ce93;  */

void FUN_10048ce8c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10048ce94; end: 10048cee7;  */

void FUN_10048ce94(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10048cee8; end: 10048cef7;  */

void FUN_10048cee8(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10021334c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar8 = PTR_PTR_1126a8668;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar8;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc3090);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efcd550);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(puVar8);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    *(undefined **)(lVar2 + 0x40) = puVar3;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10048d2b0);
  (*pcVar1)();
}



/* Entry: 10048cef8; end: 10048d2af;  */

void FUN_10048cef8(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  FUN_10021334c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  puVar2 = PTR_PTR_1126a7200;
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
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar7 = PTR_PTR_1126a8668;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar7;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc3090);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(puVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efcd550);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(puVar7);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    *(undefined **)(param_2 + 0x40) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10048d2b0);
  (*pcVar1)();
}



/* Entry: 10048d2b0; end: 10048d2bf;  */

void FUN_10048d2b0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10048d2c0; end: 10048d333;  */

void FUN_10048d2c0(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110ab9dd8;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10048d2b0();
    } while (extraout_w10 != 0);
  }
  FUN_10015c218(&ppuStack_28,&uStack_40,FUN_10048d334);
  func_0x000107c61180();
  func_0x00010048d4e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10048d334; end: 10048d3a3;  */

void FUN_10048d334(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126db3b0;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10048d2b0();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10048d450(&uStack_30);
  return;
}



/* Entry: 10048d3a4; end: 10048d3e3; -[SCNDuplexDuplexClientCppProxy .cxx_construct] */

undefined8 * FUN_10048d3a4(undefined8 *param_1)

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
      FUN_10048d2b0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10048d3e4; end: 10048d3eb;  */

void FUN_10048d3e4(void)

{
  return;
}



/* Entry: 10048d3ec; end: 10048d443; -[SCNDuplexDuplexClientCppProxy initWithCpp:] */

undefined1 * FUN_10048d3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fdeb0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010048d474((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10048d444; end: 10048d44f;  */

undefined8 FUN_10048d444(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10048d450; end: 10048d4c7;  */

void FUN_10048d450(long param_1)

{
  FUN_10048d444();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10048d4c8; end: 10048d50b;  */

void FUN_10048d4c8(void)

{
  return;
}



/* Entry: 10048d50c; end: 10048d6bb; -[SCPlaybackAssetServiceEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10048d50c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  puStack_80 = &UNK_105696c98;
  puStack_78 = &UNK_1108a6b88;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_98,auStack_68);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  lVar3 = param_1;
  func_0x000107c3adf4(param_1);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126bcbb8;
  func_0x000107c610f4(PTR_PTR_1126bcbb8);
  func_0x000107c47f38();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_1127277a0));
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_98);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 10048d6bc; end: 10048d833; -[SCPlaybackAssetServiceEntryPoint _assetFactoryWithResourceLoader:assetCompositor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10048d6bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar3 = (long)_DAT_1127277a4;
  if (*(long *)(param_1 + lVar3) == 0) {
    func_0x000107c61144(auStack_48,param_1);
    puVar1 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_50,auStack_48);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
  }
  lVar4 = (long)_DAT_1127277a8;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126bcbc8;
    func_0x000107c610f4();
    func_0x000107c457c4();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  func_0x000107c61174(lVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10048d834; end: 10048d83f;  */

void FUN_10048d834(long param_1,long param_2)

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



/* Entry: 10048d840; end: 10048d8e7; -[SCPlaybackAssetScopedRepositoryFactoryImpl initWithAssetRepository:] */

undefined1 * FUN_10048d840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e9970;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10048d8e8; end: 10048d9df;  */

/* WARNING: Possible PIC construction at 0x00010048d9c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010048d9cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10048d8e8(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((param_1 & 1) != 0) {
    uVar2 = 1;
    goto code_r0x000107c3de6c;
  }
  FUN_100288f58();
  if (param_1 == 0) {
    FUN_100083b20(&lStack_38);
LAB_10048d978:
    lVar4 = *(long *)(lStack_38 + _DAT_113091b78);
    func_0x000107c615f0(lVar4);
    func_0x000107c61170(lStack_38);
    lVar1 = lVar4;
    func_0x000107c3dfc0();
    func_0x000107c615e8(lVar4);
    if (lVar1 == 2) {
      uVar2 = 1;
      goto code_r0x000107c3de6c;
    }
  }
  else {
    FUN_100083b20(&lStack_38);
    lVar1 = lStack_38;
    func_0x000107c4f2bc();
    func_0x000107c615e8(lStack_38);
    if ((int)lVar1 == 0) {
      FUN_100083b20(&lStack_40);
      lStack_38 = lStack_40;
      goto LAB_10048d978;
    }
  }
  uVar2 = 0;
code_r0x000107c3de6c:
                    /* WARNING: Could not recover jumptable at 0x00010bf06230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_appStateChanged__11259f230,uVar2);
  return;
}



/* Entry: 10048d9e0; end: 10048da83; -[SCPlaybackAssetService initWithPlaybackAssetRepositoryFactory:playbackAssetCompositor:] */

undefined1 *
FUN_10048d9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112704fc0;
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
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10048da84; end: 10048db67;  */

void FUN_10048da84(void)

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



/* Entry: 10048db68; end: 10048dbaf;  */

void FUN_10048db68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_9;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x68) = param_13;
  *(undefined8 *)(unaff_x20 + 0x60) = param_12;
  *(undefined8 *)(unaff_x20 + 0x78) = param_15;
  *(undefined8 *)(unaff_x20 + 0x70) = param_14;
  *(undefined8 *)(unaff_x20 + 0x80) = param_16;
  *(undefined8 *)(unaff_x20 + 0x88) = param_8;
  *(undefined8 *)(unaff_x20 + 0x98) = param_18;
  *(undefined8 *)(unaff_x20 + 0x90) = param_17;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_19;
  return;
}



/* Entry: 10048dbb0; end: 10048e2b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10048dbb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long unaff_x20;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auStack_70 [16];
  
  uVar19 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = uVar19;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c5b034();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_11304a480);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c61174();
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar18 = *(long *)(unaff_x20 + 0x88);
  uVar3 = *(undefined8 *)(lVar18 + _DAT_11308b2c0);
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_1003cc718();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
  func_0x000107c444a4();
  func_0x000107c61180();
  uVar6 = uVar5;
  FUN_1003d1364();
  uVar7 = *(undefined8 *)(lVar18 + _DAT_11308b2c8);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c61174();
  uVar8 = uVar21;
  func_0x000107c44f4c();
  func_0x000107c61180();
  func_0x000107c44f60();
  func_0x000107c61180();
  uVar22 = *(undefined8 *)(*(long *)(unaff_x20 + 0x68) + _DAT_112ff6478);
  uVar23 = *(undefined8 *)(*(long *)(unaff_x20 + 0x80) + _DAT_113010c10);
  uVar24 = *(undefined8 *)(*(long *)(unaff_x20 + 0x80) + _DAT_113010bf8);
  uVar17 = *(undefined8 *)(lVar18 + _DAT_11308b2d0);
  puVar9 = &UNK_110462568;
  func_0x000107c613fc(&UNK_110462568,0x30,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar1;
  *(undefined8 *)(puVar9 + 0x18) = uVar19;
  *(undefined8 *)(puVar9 + 0x20) = uVar2;
  *(undefined8 *)(puVar9 + 0x28) = uVar20;
  FUN_1000285a8(0x112e0fb28,&UNK_10d9eae70);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar10 = &UNK_101c7dd14;
  FUN_1000bdd8c(&UNK_101c7dd14,puVar9);
  puVar11 = puVar10;
  FUN_1000bf56c();
  func_0x000107c61574(puVar10);
  puVar9 = &UNK_110462590;
  func_0x000107c613fc(&UNK_110462590,0x18,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar2;
  FUN_1000285a8(0x112e0fb30,&UNK_10d9eae78);
  func_0x000107c613fc();
  func_0x000107c61174();
  puVar10 = &UNK_101c7dd6c;
  FUN_1000bdd8c(&UNK_101c7dd6c,puVar9);
  puVar12 = puVar10;
  FUN_1000bf56c();
  func_0x000107c61574(puVar10);
  puVar9 = &UNK_1104625b8;
  func_0x000107c613fc(&UNK_1104625b8,0x48,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar3;
  *(undefined8 *)(puVar9 + 0x18) = uVar4;
  *(undefined8 *)(puVar9 + 0x20) = uVar5;
  *(undefined8 *)(puVar9 + 0x28) = uVar1;
  *(undefined8 *)(puVar9 + 0x30) = uVar6;
  *(undefined8 *)(puVar9 + 0x38) = uVar2;
  *(undefined8 *)(puVar9 + 0x40) = uVar7;
  FUN_1000285a8(0x112e0fb38,&UNK_10d9eae80);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar10 = &UNK_101c7e064;
  FUN_1000bdd8c(&UNK_101c7e064,puVar9);
  puVar13 = puVar10;
  FUN_1000bf56c();
  func_0x000107c61574(puVar10);
  puVar9 = &UNK_1104625e0;
  func_0x000107c613fc(&UNK_1104625e0,0x30,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar3;
  *(undefined8 *)(puVar9 + 0x18) = uVar7;
  *(undefined8 *)(puVar9 + 0x20) = uVar5;
  *(undefined8 *)(puVar9 + 0x28) = uVar6;
  FUN_1000285a8(0x112e0fb40,&UNK_10d9eae88);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar10 = &UNK_101c7e0ac;
  FUN_1000bdd8c(&UNK_101c7e0ac,puVar9);
  puVar14 = puVar10;
  FUN_1000bf56c();
  func_0x000107c61574(puVar10);
  func_0x000107c61644(auStack_70);
  func_0x000107c61640();
  puVar9 = &UNK_110462608;
  func_0x000107c613fc(&UNK_110462608,0x48,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar17;
  *(undefined8 *)(puVar9 + 0x18) = uVar1;
  *(undefined8 *)(puVar9 + 0x20) = uVar6;
  *(undefined8 *)(puVar9 + 0x28) = uVar4;
  *(undefined **)(puVar9 + 0x30) = puVar13;
  *(undefined8 *)(puVar9 + 0x38) = uVar8;
  *(undefined8 *)(puVar9 + 0x40) = uVar21;
  FUN_1000285a8(0x112e0fb48,&UNK_10d9eae90);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar10 = &UNK_101c7e344;
  FUN_1000bdd8c(&UNK_101c7e344,puVar9);
  puVar15 = puVar10;
  FUN_1000bf56c();
  func_0x000107c61574(puVar10);
  puVar9 = &UNK_110462630;
  func_0x000107c613fc(&UNK_110462630,0x58,7);
  *(undefined **)(puVar9 + 0x10) = puVar11;
  *(undefined **)(puVar9 + 0x18) = puVar12;
  *(undefined8 *)(puVar9 + 0x20) = uVar22;
  *(undefined8 *)(puVar9 + 0x28) = uVar23;
  *(undefined8 *)(puVar9 + 0x30) = uVar5;
  *(undefined8 *)(puVar9 + 0x38) = uVar6;
  *(undefined8 *)(puVar9 + 0x40) = uVar2;
  *(undefined8 *)(puVar9 + 0x48) = uVar24;
  *(undefined **)(puVar9 + 0x50) = puVar15;
  FUN_1000285a8(0x112e0fb50,&UNK_10d9eae98);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  func_0x000107c61174(puVar12);
  func_0x000107c61174(puVar15);
  puVar10 = &UNK_101c7e368;
  FUN_1000bdd8c(&UNK_101c7e368,puVar9);
  puVar9 = puVar10;
  FUN_1000bf56c();
  func_0x000107c61574(puVar10);
  FUN_10048e354(puVar11);
  func_0x000107c60bd0();
  uVar16 = *(undefined8 *)(lVar18 + _DAT_11308b2b8);
  func_0x000107c61174();
  FUN_10048e440();
  func_0x000107c60bd0();
  func_0x000107c61170(uVar16);
  FUN_1002c0910(0);
  func_0x000107c610f8();
  FUN_10048e52c(puVar11,puVar12,puVar9,puVar13,puVar14,puVar15);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar17);
  return puVar11;
}



/* Entry: 10048e2b4; end: 10048e2b7;  */

void FUN_10048e2b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10048e2b8; end: 10048e2db;  */

void FUN_10048e2b8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10048e2dc; end: 10048e2df;  */

void FUN_10048e2dc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10048e2e0; end: 10048e343;  */

void FUN_10048e2e0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10048e344; end: 10048e34b;  */

void FUN_10048e344(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10048e34c; end: 10048e353; -[SCContentDeliveryServices simpleContentFetcher] */

undefined8 FUN_10048e34c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10048e354; end: 10048e3ff;  */

undefined1 * FUN_10048e354(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_110738c58;
  func_0x000107c613fc(&UNK_110738c58,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puStack_40 = &UNK_1040421b4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1000f6b44;
  puStack_48 = &UNK_110738c70;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = (undefined1 *)ppuVar2;
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(puStack_38);
  return puVar3;
}



/* Entry: 10048e400; end: 10048e41b;  */

void FUN_10048e400(long param_1,long param_2)

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



/* Entry: 10048e41c; end: 10048e43f;  */

void FUN_10048e41c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10048e440; end: 10048e4eb;  */

undefined1 * FUN_10048e440(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_1107390f8;
  func_0x000107c613fc(&UNK_1107390f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puStack_40 = &UNK_1040445b4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1000f6b44;
  puStack_48 = &UNK_110739110;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = (undefined1 *)ppuVar2;
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(puStack_38);
  return puVar3;
}



/* Entry: 10048e4ec; end: 10048e507;  */

void FUN_10048e4ec(long param_1,long param_2)

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



/* Entry: 10048e508; end: 10048e52b;  */

void FUN_10048e508(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10048e52c; end: 10048e5df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10048e52c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130690e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130690e8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130690f0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130690f8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113069100) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113069108) = param_6;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10048e5e0; end: 10048e693;  */

void FUN_10048e5e0(void)

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



/* Entry: 10048e694; end: 10048e69b;  */

void FUN_10048e694(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x88);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10048e69c; end: 10048e6ef;  */

void FUN_10048e69c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x88);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10048e6f0; end: 10048eb43;  */

void FUN_10048e6f0(long *param_1,long param_2)

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
  FUN_1002ad488();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  func_0x00010048f3f0();
  func_0x000107c613fc();
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
  func_0x000107c61174(uStack_a8);
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
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = auStack_70[0];
  func_0x000107c61174();
  uVar16 = uVar15;
  FUN_10048f488();
  *(undefined8 *)(param_2 + 0x10) = uVar16;
  uVar17 = uVar16;
  func_0x000107c6157c();
  FUN_10048f4b8();
  func_0x000107c61574(uVar16);
  func_0x000107c61170(uVar15);
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
  *(undefined8 *)(param_2 + 0x88) = uVar17;
  *param_1 = param_2;
  return;
}



/* Entry: 10048eb44; end: 10048eb87;  */

void FUN_10048eb44(void)

{
  long unaff_x20;
  
  FUN_10048e6f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 10048eb88; end: 10048eb8f;  */

void FUN_10048eb88(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10048eb90; end: 10048ebe3;  */

void FUN_10048eb90(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10048ebe4; end: 10048ebeb;  */

void FUN_10048ebe4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_100293ec4();
  func_0x000107c613fc();
  FUN_10048ec60(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 10048ebec; end: 10048ec5f;  */

void FUN_10048ebec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_100293ec4();
  func_0x000107c613fc();
  FUN_10048ec60(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 10048ec60; end: 10048edc3;  */

void FUN_10048ec60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8d68;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 10048edc4; end: 10048eeb7; -[SCAdEOVTimerServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10048edc4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined1 uStack_38;
  
  param_1 = param_1 + _DAT_112729034;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c3d28c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c3ebdc();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  puStack_48 = &UNK_10576fcb8;
  puStack_40 = &UNK_1108b03f0;
  uStack_38 = (undefined1)lVar3;
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_58);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126bdd50;
  func_0x000107c610f4(PTR_PTR_1126bdd50);
  func_0x000107c455b8();
  func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10048eeb8; end: 10048eefb;  */

long FUN_10048eeb8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}


