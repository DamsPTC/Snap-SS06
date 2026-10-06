/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10064a30c; end: 10064a32f;  */

undefined8 FUN_10064a30c(undefined8 param_1)

{
  func_0x00010064a2f4(param_1,0);
  return param_1;
}



/* Entry: 10064a330; end: 10064a337;  */

void FUN_10064a330(void)

{
  return;
}



/* Entry: 10064a338; end: 10064a417;  */

undefined8 *
FUN_10064a338(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  *param_1 = &PTR_DAT_110cd3228;
  param_1[1] = param_4;
  param_1[2] = param_5;
  FUN_10054fdd4(param_1 + 3);
  param_1[7] = param_3;
  uStack_34 = *(undefined4 *)(param_7 + 0x48);
  uStack_38 = *(undefined4 *)(param_7 + 0x34);
  uStack_40 = *(undefined8 *)(param_7 + 0x38);
  FUN_10064a418(param_1 + 9,&uStack_34,&uStack_38,&uStack_40);
  puVar1 = param_1 + 10;
  func_0x00010063bcd0();
  param_1[0x15] = param_6;
  *(undefined4 *)(param_1 + 0x16) = 4;
  FUN_10064a4d8();
  if (((param_7 & 1) != 0) && (999 < (long)puVar1)) {
    param_1[0x15] = puVar1;
  }
  return param_1;
}



/* Entry: 10064a418; end: 10064a47b;  */

void FUN_10064a418(undefined8 *param_1,int *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)0x40;
  func_0x000107c60e20();
  iVar2 = *param_2;
  uVar1 = *param_3;
  uVar4 = *param_4;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 4) = 0x3f800000;
  puVar3[5] = (long)iVar2;
  *(undefined4 *)(puVar3 + 6) = uVar1;
  puVar3[7] = uVar4;
  *param_1 = puVar3;
  return;
}



/* Entry: 10064a47c; end: 10064a483;  */

void FUN_10064a47c(undefined8 *param_1)

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



/* Entry: 10064a484; end: 10064a4d7;  */

void FUN_10064a484(undefined8 *param_1)

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



/* Entry: 10064a4d8; end: 10064a567;  */

void FUN_10064a4d8(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long extraout_x8;
  int extraout_w10;
  long lStack_40;
  
  func_0x00010060f338();
  if (lStack_40 != 0) {
    FUN_10060f3c4();
    if (extraout_x8 != 0) {
      do {
        FUN_10011a6d8();
      } while (extraout_w10 != 0);
    }
    FUN_10011a768(0x11383a738);
    if (!(bool)in_ZR) {
      func_0x00010060f3d0();
      func_0x00010060f3e0(0x11383a738,param_2,FUN_10064a568);
    }
    func_0x00010011b648();
  }
  func_0x00010060f454();
  func_0x0001006315c0();
  return;
}



/* Entry: 10064a568; end: 10064a5cb;  */

void FUN_10064a568(void)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  
  func_0x00010011a790();
  FUN_10011a800();
  func_0x00010011a808();
  FUN_10011a89c();
  func_0x00010011a8a4();
  plVar2 = (long *)*unaff_x19;
  uVar1 = 0x98;
  (**(code **)(*plVar2 + 0x40))();
  uRam000000011383a730 = uVar1;
  plRam000000011383a728 = plVar2;
  func_0x00010011b634();
  return;
}



/* Entry: 10064a5cc; end: 10064a5d7;  */

void FUN_10064a5cc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100218380();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_10064c684(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10064a5d8; end: 10064a687;  */

void FUN_10064a5d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100218380();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_10064c684(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10064a688; end: 10064a68f;  */

void FUN_10064a688(undefined8 *param_1)

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



/* Entry: 10064a690; end: 10064a6e3;  */

void FUN_10064a690(undefined8 *param_1)

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



/* Entry: 10064a6e4; end: 10064a6eb;  */

void FUN_10064a6e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_10021741c();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_10064a774(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 10064a6ec; end: 10064a773;  */

void FUN_10064a6ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_10021741c();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_10064a774(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 10064a774; end: 10064a843;  */

void FUN_10064a774(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  FUN_10064a844(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  FUN_10064a864();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar3 != 0) {
    *(long *)(unaff_x20 + 0x28) = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10064a844);
  (*pcVar1)();
}



/* Entry: 10064a844; end: 10064a863;  */

void FUN_10064a844(void)

{
  func_0x000107c61168(&PTR_PTR_112deee50);
  return;
}



/* Entry: 10064a864; end: 10064a8bb;  */

undefined8 FUN_10064a864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_10064be2c(param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 10064a8bc; end: 10064a93f;  */

undefined1 FUN_10064a8bc(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 in_ZR;
  long extraout_x8;
  int extraout_w10;
  long lStack_40;
  
  func_0x00010060f338();
  if (lStack_40 != 0) {
    FUN_10060f3c4();
    if (extraout_x8 != 0) {
      do {
        FUN_10011a6d8();
      } while (extraout_w10 != 0);
    }
    FUN_10011a768(0x11383a7b0);
    if (!(bool)in_ZR) {
      func_0x00010060f3d0();
      func_0x00010060f3e0(0x11383a7b0,param_2,FUN_10064a940);
    }
    func_0x00010011b648();
  }
  uVar1 = uRam000000011383a7a8;
  func_0x00010060f454();
  return uVar1;
}



/* Entry: 10064a940; end: 10064a993;  */

void FUN_10064a940(uint param_1)

{
  func_0x00010011a790();
  FUN_10011a800();
  func_0x00010011a808();
  FUN_10011a89c();
  func_0x00010011a8a4();
  FUN_10060f43c();
  func_0x00010060f44c();
  if ((param_1 >> 8 & 1) != 0) {
    uRam000000011383a7a8 = (undefined1)param_1;
  }
  func_0x00010011b634();
  return;
}



/* Entry: 10064a994; end: 10064a9f3;  */

void FUN_10064a994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  func_0x000107c60e20();
  *puVar1 = &PTR_DAT_110ce98a0;
  puVar1[1] = 0;
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  puVar1[5] = param_4;
  puVar1[6] = param_5;
  puVar1[7] = param_6;
  return;
}



/* Entry: 10064a9f4; end: 10064aceb;  */

undefined8 *
FUN_10064a9f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 *param_9,undefined8 *param_10,undefined4 param_11,undefined4 param_12,
             undefined8 *param_13,undefined8 *param_14,undefined8 *param_15,undefined8 *param_16)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *extraout_x12;
  undefined8 uVar7;
  
  param_1[1] = &PTR_DAT_110cd3320;
  *param_1 = &PTR_FUN_110cd32e0;
  param_1[2] = &PTR_DAT_110cd3338;
  puVar4 = &UNK_10b2dfa10;
  FUN_10064a994(&UNK_10b2dfa10,FUN_100889d34,FUN_100892b54,FUN_100898d34,&UNK_10b2dfbb4,
                &UNK_10b2dfbe8);
  param_1[3] = puVar4;
  pcVar5 = FUN_100897df4;
  FUN_10064acec();
  param_1[4] = pcVar5;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  lVar6 = param_2[1];
  uVar7 = *param_2;
  param_1[0x1a] = param_2[1];
  param_1[0x19] = uVar7;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  if (lVar6 != 0) {
    do {
      FUN_10064ad10();
    } while (extraout_w10 != 0);
  }
  lVar6 = param_3[1];
  uVar7 = *param_3;
  param_1[0x1c] = param_3[1];
  param_1[0x1b] = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x1d] = param_4;
  param_1[0x1e] = param_5;
  param_1[0x1f] = param_6;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  uVar7 = *param_7;
  param_1[0x21] = param_7[1];
  param_1[0x20] = uVar7;
  param_1[0x22] = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = param_8;
  *(undefined1 *)(param_1 + 0x27) = param_11._1_1_;
  *(undefined1 *)((long)param_1 + 0x139) = param_11._2_1_;
  lVar6 = param_16[1];
  uVar7 = *param_16;
  param_1[0x29] = param_16[1];
  param_1[0x28] = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar7 = *param_9;
  *param_9 = 0;
  param_1[0x2a] = uVar7;
  *(undefined1 *)(param_1 + 0x2b) = (undefined1)param_11;
  uVar7 = *param_10;
  param_1[0x2d] = param_10[1];
  param_1[0x2c] = uVar7;
  lVar6 = param_13[1];
  uVar7 = *param_13;
  param_1[0x2f] = param_13[1];
  param_1[0x2e] = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = param_14[1];
  uVar7 = *param_14;
  param_1[0x31] = param_14[1];
  param_1[0x30] = uVar7;
  if (lVar6 != 0) {
    do {
      FUN_10064ad10();
      param_15 = extraout_x12;
    } while (extraout_w10_00 != 0);
  }
  lVar6 = param_15[1];
  uVar7 = *param_15;
  param_1[0x33] = param_15[1];
  param_1[0x32] = uVar7;
  if (lVar6 != 0) {
    do {
      FUN_10064ad10();
    } while (extraout_w10_01 != 0);
  }
  (*(code *)**(undefined8 **)param_1[0x2a])((undefined8 *)param_1[0x2a],param_1 + 1);
  FUN_10064ad28(param_1[3],param_1);
  FUN_10064ad28(param_1[4],param_1);
  return param_1;
}



/* Entry: 10064acec; end: 10064ad0f;  */

void FUN_10064acec(void)

{
  FUN_10063d758();
  FUN_10063d7e4(&PTR_DAT_110ce9930);
  return;
}



/* Entry: 10064ad10; end: 10064ad27;  */

void FUN_10064ad10(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10064ad28; end: 10064b28f;  */

void FUN_10064ad28(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10064b290; end: 10064b297;  */

undefined8 FUN_10064b290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10064b298; end: 10064b6a3;  */

void FUN_10064b298(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010064b2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))();
  return;
}



/* Entry: 10064b6a4; end: 10064b743;  */

undefined8 FUN_10064b6a4(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam000000011383a978 & 1) == 0) {
    iVar1 = 0x1383a978;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_10064b744(auStack_68);
      puVar2 = auStack_68;
      FUN_10028f4b0();
      puRam000000011383a970 = puVar2;
      FUN_100164334(auStack_68);
      func_0x000107c60e4c(0x11383a978);
    }
  }
  return 0x11383a970;
}



/* Entry: 10064b744; end: 10064b9ab;  */

undefined8 * FUN_10064b744(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [312];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10002b838(&uStack_1a0,&UNK_10f743c08);
  FUN_10002b838(&uStack_1b8,"");
  FUN_10002b838(auStack_188,&UNK_10f743c14);
  FUN_10064b9ac();
  FUN_10064b9ac();
  FUN_10064b9ac();
  FUN_10064b9ac();
  FUN_10064b9ac();
  FUN_10064b9ac();
  FUN_10064b9ac();
  FUN_10064b9ac();
  FUN_10064b9ac();
  FUN_10064b9ac();
  FUN_10064b9ac();
  FUN_10064b9ac();
  FUN_10064b9ac();
  puVar1 = auStack_188;
  FUN_1000e3098(&uStack_1d0,puVar1,0xe);
  param_1[1] = uStack_198;
  *param_1 = uStack_1a0;
  param_1[2] = uStack_190;
  uStack_198 = 0;
  uStack_190 = 0;
  param_1[4] = uStack_1b0;
  param_1[3] = uStack_1b8;
  param_1[5] = uStack_1a8;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  param_1[7] = uStack_1c8;
  param_1[6] = uStack_1d0;
  param_1[8] = uStack_1c0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1d0 = 0;
  FUN_1000e30f4(&uStack_1d0);
  lVar4 = 0x138;
  do {
    func_0x000107c60ca0(auStack_188 + lVar4);
    lVar4 = lVar4 + -0x18;
  } while (lVar4 != -0x18);
  func_0x000107c60ca0(&uStack_1b8);
  puVar2 = &uStack_1a0;
  func_0x000107c60ca0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  func_0x000107c60e78();
  puVar3 = auStack_50;
  lVar4 = -0x150;
  do {
    func_0x000107c60ca0(puVar3);
    puVar3 = puVar3 + -0x18;
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0);
  func_0x000107c60ca0(&uStack_1b8);
  func_0x000107c60ca0(&uStack_1a0);
  func_0x000107c60bd8(puVar2);
  func_0x00010002b82c(0);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50(0,puVar2,puVar1);
  return (undefined8 *)0x0;
}



/* Entry: 10064b9ac; end: 10064b9b3;  */

void FUN_10064b9ac(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c();
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 10064b9b4; end: 10064b9db;  */

void FUN_10064b9b4(void)

{
  FUN_10063d758();
  FUN_10063d7e4(&PTR_DAT_110ce9998);
  return;
}



/* Entry: 10064b9dc; end: 10064b9ff;  */

void FUN_10064b9dc(long *param_1,long param_2)

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



/* Entry: 10064ba00; end: 10064ba1f;  */

void FUN_10064ba00(void)

{
  func_0x00010064b9f4();
  func_0x00010064b9dc();
  return;
}



/* Entry: 10064ba20; end: 10064ba27;  */

void FUN_10064ba20(void)

{
  return;
}



/* Entry: 10064ba28; end: 10064ba7f;  */

void FUN_10064ba28(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010064ba30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))();
  return;
}



/* Entry: 10064ba80; end: 10064ba9b;  */

void FUN_10064ba80(void)

{
  return;
}



/* Entry: 10064ba9c; end: 10064bba3;  */

void FUN_10064ba9c(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  undefined8 *extraout_x8;
  undefined8 *puVar4;
  undefined8 *extraout_x8_00;
  undefined8 *puVar5;
  ulong uVar6;
  long *extraout_x9;
  ulong uVar7;
  int extraout_w11;
  int extraout_w11_00;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 < (undefined8 *)param_1[2]) {
    *puVar4 = param_2;
    puVar4[1] = param_3;
    if (param_3 != 0) {
      do {
        FUN_10064bba4();
        puVar4 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    puVar4 = puVar4 + 2;
LAB_10064bb80:
    param_1[1] = (long)puVar4;
    return;
  }
  lVar8 = *param_1;
  lVar9 = (long)puVar4 - lVar8;
  lVar10 = lVar9 >> 4;
  uVar1 = lVar10 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar6 = param_1[2] - lVar8;
    uVar7 = (long)uVar6 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 >> 0x3c == 0) {
      lVar3 = uVar7 << 4;
      func_0x000107c60e20();
      puVar5 = (undefined8 *)(lVar3 + lVar9);
      *puVar5 = param_2;
      puVar5[1] = param_3;
      if (param_3 != 0) {
        do {
          FUN_10064bba4();
        } while (extraout_w11_00 != 0);
        lVar8 = *param_1;
        lVar9 = param_1[1] - lVar8;
        lVar10 = lVar9 >> 4;
        puVar5 = extraout_x8_00;
      }
      puVar4 = puVar5 + 2;
      func_0x000107c610b4(puVar5 + lVar10 * -2,lVar8,lVar9);
      *param_1 = (long)(puVar5 + lVar10 * -2);
      param_1[1] = (long)puVar4;
      param_1[2] = lVar3 + uVar7 * 0x10;
      if (lVar8 != 0) {
        FUN_100666be0();
      }
      goto LAB_10064bb80;
    }
  }
  else {
    func_0x000107c2c824();
  }
  func_0x000104bd35f4();
  bVar2 = (bool)ExclusiveMonitorPass(extraout_x9,0x10);
  if (bVar2) {
    *extraout_x9 = *extraout_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10064bba4; end: 10064bbc7;  */

void FUN_10064bba4(void)

{
  bool bVar1;
  long *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10064bbc8; end: 10064bbeb;  */

void FUN_10064bbc8(long param_1)

{
  func_0x00010064bbbc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10064bbec; end: 10064bbf3;  */

void FUN_10064bbec(void)

{
  return;
}



/* Entry: 10064bbf4; end: 10064bce3;  */

undefined8 FUN_10064bbf4(long *param_1)

{
  undefined1 in_ZR;
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_70 [80];
  
  if ((bRam000000011383a688 & 1) == 0) {
    iVar1 = 0x1383a688;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      ppuRam000000011383a668 = &PTR_DAT_110cfa048;
      uRam000000011383a670 = 0;
      uRam000000011383a678 = 0;
      uRam000000011383a680 = 0;
      func_0x000107c60e4c(0x11383a688);
    }
  }
  FUN_10064bce4();
  if (*param_1 != 0) {
    func_0x00010064bcec();
    if (extraout_x8 != 0) {
      do {
        FUN_10011a6d8();
      } while (extraout_w10 != 0);
    }
    func_0x00010064bcf8(auStack_70);
    FUN_10011a768(0x11383a690);
    if (!(bool)in_ZR) {
      func_0x00010060f3d0();
      func_0x00010064bd04(0x11383a690);
    }
    FUN_10064c2d8(auStack_70);
  }
  func_0x00010064c2fc();
  return 0x11383a668;
}



/* Entry: 10064bce4; end: 10064bd1f;  */

void FUN_10064bce4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c(&stack0x00000028);
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 10064bd20; end: 10064bd97;  */

void FUN_10064bd20(void)

{
  undefined1 in_ZR;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [72];
  
  func_0x00010064bd0c();
  FUN_10064bd98(auStack_68,auStack_80);
  func_0x00010064bda8();
  func_0x00010064bdb0();
  func_0x00010064bdb8();
  func_0x00010064bdc8();
  FUN_10064c224();
  if ((bool)in_ZR) {
    func_0x00010064c230();
    FUN_10006369c(0x11383a668);
  }
  func_0x00010064c2b0();
  func_0x00010064c2b8();
  return;
}



/* Entry: 10064bd98; end: 10064bdd3;  */

void FUN_10064bd98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *in_x4;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar1 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = in_x4[2];
  uVar6 = in_x4[1];
  uVar5 = *in_x4;
  in_x4[1] = 0;
  in_x4[2] = 0;
  *in_x4 = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xc;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[8] = uVar2;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_100100fec(&uStack_48);
  func_0x000107c60ca0(&uStack_30);
  return;
}



/* Entry: 10064bdd4; end: 10064be2b;  */

void FUN_10064bdd4(void)

{
  return;
}



/* Entry: 10064be2c; end: 10064bfc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10064be2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  uVar5 = *(undefined8 *)(param_1 + _DAT_1130806c8);
  uVar1 = uVar5;
  func_0x000107c6157c(uVar5);
  FUN_1000bf56c();
  func_0x000107c61574(uVar5);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1130806c0);
  uVar5 = uVar6;
  func_0x000107c6157c(uVar6);
  FUN_1000bf56c();
  func_0x000107c61574(uVar6);
  uVar7 = *(undefined8 *)(param_1 + _DAT_1130806e8);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar3 = &UNK_110430b50;
  func_0x000107c613fc(&UNK_110430b50,0x18,7);
  *(long *)(puVar3 + 0x10) = param_1;
  puStack_70 = &UNK_100c0b9d4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1008571a0;
  puStack_78 = &UNK_110430b68;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c615f0(uVar7);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar6 = 0;
  FUN_100217d94(0);
  func_0x000107c610f8();
  FUN_10064c5cc(uVar1,uVar5,uVar7,puVar2,uVar6);
  func_0x000107c42c20(param_2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10064bfc8; end: 10064c223;  */

void FUN_10064bfc8(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
    if (param_1 != (int *)0x0) {
      func_0x000100645014(param_1 + 2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10064c224; end: 10064c25f;  */

void FUN_10064c224(void)

{
  return;
}



/* Entry: 10064c260; end: 10064c29b;  */

void FUN_10064c260(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010064c254();
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c304cc(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10064c29c; end: 10064c2d7;  */

void FUN_10064c29c(void)

{
  return;
}



/* Entry: 10064c2d8; end: 10064c2f3;  */

long FUN_10064c2d8(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010064c2cc();
  lVar1 = unaff_x19;
  FUN_1000df750();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10064c2f4; end: 10064c317;  */

undefined8 FUN_10064c2f4(long param_1)

{
  undefined8 in_stack_00000008;
  
  FUN_1000df750();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return in_stack_00000008;
}



/* Entry: 10064c318; end: 10064c37f;  */

undefined8 * FUN_10064c318(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110cfa048;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000107c39d88();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c304dc(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  return param_1;
}



/* Entry: 10064c380; end: 10064c393;  */

void FUN_10064c380(void)

{
  return;
}



/* Entry: 10064c394; end: 10064c3bf;  */

undefined8 FUN_10064c394(undefined8 param_1)

{
  func_0x00010064c38c();
  FUN_10064c3c0(param_1);
  return param_1;
}



/* Entry: 10064c3c0; end: 10064c3db;  */

void FUN_10064c3c0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c304c8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10064c3dc; end: 10064c3e3;  */

void FUN_10064c3dc(void)

{
  return;
}



/* Entry: 10064c3e4; end: 10064c40b;  */

void FUN_10064c3e4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10064c394();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10064c40c; end: 10064c42b;  */

void FUN_10064c40c(void)

{
  func_0x00010064b9f4();
  FUN_10064c3e4();
  return;
}



/* Entry: 10064c42c; end: 10064c51f;  */

undefined8 FUN_10064c42c(long *param_1)

{
  undefined1 in_ZR;
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_70 [80];
  
  if ((bRam000000011383a5d0 & 1) == 0) {
    iVar1 = 0x1383a5d0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_10064c520(0x11383a558);
      func_0x000107c60e4c(0x11383a5d0);
    }
  }
  FUN_10064bce4();
  if (*param_1 != 0) {
    func_0x00010064bcec();
    if (extraout_x8 != 0) {
      do {
        FUN_10011a6d8();
      } while (extraout_w10 != 0);
    }
    func_0x00010064bcf8(auStack_70);
    FUN_10011a768(0x11383a5d8);
    if (!(bool)in_ZR) {
      func_0x00010060f3d0();
      func_0x00010064bd04(0x11383a5d8);
    }
    FUN_10064d5ac(auStack_70);
  }
  func_0x00010064c2fc();
  return 0x11383a558;
}



/* Entry: 10064c520; end: 10064c553;  */

void FUN_10064c520(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cf97b0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  return;
}



/* Entry: 10064c554; end: 10064c5cb;  */

void FUN_10064c554(void)

{
  undefined1 in_ZR;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [72];
  
  func_0x00010064bd0c();
  FUN_10064bd98(auStack_68,auStack_80);
  func_0x00010064bda8();
  func_0x00010064bdb0();
  func_0x00010064bdb8();
  func_0x00010064bdc8();
  FUN_10064c224();
  if ((bool)in_ZR) {
    func_0x00010064c230();
    FUN_10006369c(0x11383a558);
  }
  func_0x00010064c2b0();
  func_0x00010064c2b8();
  return;
}



/* Entry: 10064c5cc; end: 10064c657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10064c5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113080718) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113080720) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113080728) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113080730) = param_4;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10064c658; end: 10064c683;  */

void FUN_10064c658(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10064c684; end: 10064c8b7;  */

void FUN_10064c684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a8570;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc9c20);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10064c8b8);
  (*pcVar1)();
}



/* Entry: 10064c8b8; end: 10064cf6b;  */

ulong FUN_10064c8b8(ulong param_1,int param_2)

{
  if (param_2 == 1) {
    if (*(long *)(param_1 + 0x30) != 0) {
      func_0x000107c37434();
      return param_1;
    }
  }
  else if (param_2 == 0) {
    FUN_100647ff0();
    return (ulong)((uint)param_1 ^ 1);
  }
  return 0;
}



/* Entry: 10064cf6c; end: 10064cff7;  */

undefined1 * FUN_10064cf6c(undefined1 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  long lVar5;
  int *unaff_x19;
  
  puVar4 = param_1;
  FUN_10022be90();
  if (0 < (int)puVar4) {
    lVar5 = *(long *)(param_1 + 0x30);
    if (*(ulong *)(lVar5 + 0x88) < ((ulong)puVar4 & 0xffffffff)) {
      func_0x000107c60ebc();
      if (unaff_x19 != (int *)0x0) {
        do {
          iVar1 = *unaff_x19;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
          if (bVar3) {
            *unaff_x19 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 + -1 == 0) {
          (**(code **)(unaff_x19 + 4))(unaff_x19);
        }
      }
      return &stack0xffffffffffffffe8;
    }
    *(ulong *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + ((ulong)puVar4 & 0xffffffff);
    *(ulong *)(lVar5 + 0x88) = *(ulong *)(lVar5 + 0x88) - ((ulong)puVar4 & 0xffffffff);
    lVar5 = *(long *)(param_1 + 0x30);
    if ((*(long *)(lVar5 + 0x88) == 0) && (*(short *)(lVar5 + 0x5a) == 0)) {
      if (*(char *)(lVar5 + 99) == '\x01') {
        func_0x000107c60fd0(*(undefined8 *)(lVar5 + 0x50));
      }
      *(undefined1 *)(lVar5 + 99) = 0;
      *(undefined8 *)(lVar5 + 0x50) = 0;
      *(undefined8 *)(lVar5 + 0x56) = 0;
    }
  }
  return puVar4;
}



/* Entry: 10064cff8; end: 10064d02b;  */

undefined8 * FUN_10064cff8(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *in_stack_00000008;
  
  if (in_stack_00000008 != (int *)0x0) {
    do {
      iVar1 = *in_stack_00000008;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(in_stack_00000008,0x10);
      if (bVar3) {
        *in_stack_00000008 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      (**(code **)(in_stack_00000008 + 4))(in_stack_00000008);
    }
  }
  return &stack0x00000008;
}



/* Entry: 10064d02c; end: 10064d0bf;  */

void FUN_10064d02c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    func_0x0001053936e4(param_1 + 0x48);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107c30460(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000107c30498(*(undefined8 *)(param_1 + 0x68));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10064d0c0; end: 10064d0d3;  */

void FUN_10064d0c0(void)

{
  return;
}



/* Entry: 10064d0d4; end: 10064d243; -[SCPhotoPermissionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10064d0d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bc858;
  func_0x000107c610f4(PTR_PTR_1126bc858);
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_112727258;
    func_0x000107c61148(lVar5);
  }
  lVar3 = lVar5;
  func_0x000107c407b4(lVar5);
  func_0x000107c61180();
  func_0x000107c47e8c(puVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar5);
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11272725c);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c42c20(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 10064d244; end: 10064d24b;  */

void FUN_10064d244(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0xa8;
    func_0x000107c60e20();
  }
  else {
    lVar1 = param_2;
    func_0x000107c303f0(param_2,0xa8);
  }
  FUN_10064d2d0(&PTR_DAT_110cf9670);
  *(long *)(lVar1 + 0x20) = param_2;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(long *)(lVar1 + 0x38) = param_2;
  *(undefined4 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(long *)(lVar1 + 0x50) = param_2;
  *(undefined4 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(long *)(lVar1 + 0x68) = param_2;
  *(undefined4 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x78) = 0;
  *(long *)(lVar1 + 0x80) = param_2;
  *(undefined4 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0x90) = 0;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  *(undefined4 *)(lVar1 + 0xa0) = 0;
  return;
}



/* Entry: 10064d24c; end: 10064d2cf;  */

void FUN_10064d24c(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0xa8;
    func_0x000107c60e20();
  }
  else {
    lVar1 = param_1;
    func_0x000107c303f0(param_1,0xa8);
  }
  FUN_10064d2d0(&PTR_DAT_110cf9670);
  *(long *)(lVar1 + 0x20) = param_1;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(long *)(lVar1 + 0x38) = param_1;
  *(undefined4 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(long *)(lVar1 + 0x50) = param_1;
  *(undefined4 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(long *)(lVar1 + 0x68) = param_1;
  *(undefined4 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x78) = 0;
  *(long *)(lVar1 + 0x80) = param_1;
  *(undefined4 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0x90) = 0;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  *(undefined4 *)(lVar1 + 0xa0) = 0;
  return;
}



/* Entry: 10064d2d0; end: 10064d2eb;  */

void FUN_10064d2d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  
  *param_2 = param_1;
  param_2[1] = unaff_x19;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 10064d2ec; end: 10064d347;  */

void FUN_10064d2ec(long param_1)

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
  FUN_10064d2d0(&PTR_DAT_110cf9760);
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(long *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(long *)(lVar1 + 0x40) = param_1;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(long *)(lVar1 + 0x58) = param_1;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined1 *)(lVar1 + 0x80) = 0;
  return;
}



/* Entry: 10064d348; end: 10064d34f;  */

void FUN_10064d348(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  if (param_2 == 0) {
    FUN_10064d388();
  }
  else {
    func_0x000107c39d3c();
  }
  FUN_10064d2d0(&PTR_DAT_110cf9710);
  *(long *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}



/* Entry: 10064d350; end: 10064d387;  */

void FUN_10064d350(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 == 0) {
    FUN_10064d388();
  }
  else {
    func_0x000107c39d3c();
  }
  FUN_10064d2d0(&PTR_DAT_110cf9710);
  *(long *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}



/* Entry: 10064d388; end: 10064d397;  */

void FUN_10064d388(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x30);
  return;
}



/* Entry: 10064d398; end: 10064d3db;  */

void FUN_10064d398(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0x28;
    func_0x000107c60e20();
  }
  else {
    func_0x000107c303f0(param_1,0x28);
  }
  FUN_10064d2d0(&PTR_DAT_110cf96c0);
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10064d3dc; end: 10064d3e3;  */

void FUN_10064d3dc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    FUN_10064d388();
  }
  else {
    func_0x000107c39d3c();
  }
  *puVar1 = &PTR_DAT_110cf94e0;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10064d3e4; end: 10064d423;  */

void FUN_10064d3e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    FUN_10064d388();
  }
  else {
    func_0x000107c39d3c();
  }
  *puVar1 = &PTR_DAT_110cf94e0;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10064d424; end: 10064d42b;  */

void FUN_10064d424(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    FUN_10064d460();
  }
  else {
    func_0x000107c39d38();
  }
  FUN_10064d2d0(&PTR_DAT_110cf9580);
  return;
}



/* Entry: 10064d42c; end: 10064d45f;  */

void FUN_10064d42c(long param_1)

{
  if (param_1 == 0) {
    FUN_10064d460();
  }
  else {
    func_0x000107c39d38();
  }
  FUN_10064d2d0(&PTR_DAT_110cf9580);
  return;
}



/* Entry: 10064d460; end: 10064d467;  */

void FUN_10064d460(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x20);
  return;
}



/* Entry: 10064d468; end: 10064d4e7;  */

bool FUN_10064d468(long *param_1)

{
  int extraout_w8;
  
  if ((*param_1 != 0) && (func_0x000100646318(), extraout_w8 == 0)) {
    return param_1[1] != 0;
  }
  return false;
}



/* Entry: 10064d4e8; end: 10064d4ef;  */

void FUN_10064d4e8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_2;
    func_0x000107c303f0(param_2,0x38);
  }
  *puVar1 = &PTR_DAT_110cf9530;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[4] = 0;
  *(undefined8 *)((long)puVar1 + 0x25) = 0;
  return;
}



/* Entry: 10064d4f0; end: 10064d53f;  */

void FUN_10064d4f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c303f0(param_1,0x38);
  }
  *puVar1 = &PTR_DAT_110cf9530;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[4] = 0;
  *(undefined8 *)((long)puVar1 + 0x25) = 0;
  return;
}



/* Entry: 10064d540; end: 10064d5ab;  */

void FUN_10064d540(long param_1)

{
  long *plVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = (int)param_1 + 0x30;
  FUN_10064d468();
  if (iVar2 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
    if (*(char *)(*(long *)(param_1 + 0x30) + 4) == '\0') {
      plVar1 = (long *)(*(long *)(param_1 + 0x38) + ((long)*(ulong *)(param_1 + 0x28) >> 1));
      if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010064d594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x40);
      return;
    }
  }
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x10064d5a4);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 10064d5ac; end: 10064d5c7;  */

long FUN_10064d5ac(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010064c2cc();
  lVar1 = unaff_x19;
  FUN_1000df750();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10064d5c8; end: 10064d82f;  */

void FUN_10064d5c8(long ****param_1,long ****param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long ****pppplVar4;
  int extraout_w8;
  int extraout_w8_00;
  long ***ppplVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long lStack_70;
  long ***ppplStack_68;
  long ***ppplStack_60;
  long **pplStack_58;
  
  pppplVar4 = param_1;
  pppplVar7 = param_2;
  func_0x0001001b4ebc();
  if (param_1 + 0xb != pppplVar4) {
    pppplVar4 = pppplVar4 + 0x29;
    func_0x00010064670c();
    pppplVar4 = pppplVar4 + 0xef;
    func_0x000100645a78();
    ppplStack_68 = (long ***)pppplVar4;
    ppplStack_60 = (long ***)pppplVar7;
    if ((pppplVar4 == (long ****)0x0) || (*(char *)((long)pppplVar4 + 4) != '\0')) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(0,0x10064d828);
      (*pcVar3)();
    }
    func_0x00010064da28(param_2,pppplVar7 + 8);
    pppplVar7 = param_2;
    pppplVar4 = (long ****)ppplStack_68;
    if ((long ****)ppplStack_68 != (long ****)0x0) {
LAB_10064d640:
      if ((*(char *)((long)pppplVar4 + 4) == '\0') && ((long ****)ppplStack_60 != (long ****)0x0)) {
        if (((long ****)ppplStack_68 == (long ****)0x0) ||
           (func_0x000100646318(), pppplVar6 = (long ****)ppplStack_60, extraout_w8 != 0)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0,0x10064d81c);
          (*pcVar3)();
        }
        if ((*(int *)(ppplStack_60 + 0x7d) == 0) &&
           (func_0x00010064dc3c(), param_1 + 0x29 != pppplVar7)) {
          pppplVar4 = (long ****)pppplVar7[0x2a];
          do {
            if (pppplVar4 == pppplVar7 + 0x2b) break;
            ppplVar5 = pppplVar4[4];
            if (*(char *)((long)ppplVar5 + 0x129) == '\x01') {
              if (((long ****)ppplStack_68 == (long ****)0x0) ||
                 (func_0x000100646318(), extraout_w8_00 != 0)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(0,0x10064d810);
                (*pcVar3)();
              }
              pppplVar6 = (long ****)ppplStack_60;
              if (*(char *)((long)ppplStack_60 + 0x665) == '\x01') {
                ppplVar5 = pppplVar4[4];
                goto LAB_10064d6c4;
              }
            }
            else {
LAB_10064d6c4:
              if ((((uint)*(byte *)(ppplVar5 + 0x25) | (uint)param_2 ^ 1) & 1) != 0)
              goto LAB_10064d6e0;
            }
            func_0x000100173644();
          } while( true );
        }
      }
    }
LAB_10064d724:
    pppplVar4 = &ppplStack_68;
    FUN_10014f860();
  }
  func_0x00010064dc3c();
  if (param_1 + 0x29 != pppplVar4) {
    ppplStack_60 = (long ***)&ppplStack_68;
    pplStack_58 = (long **)0x0;
    ppplStack_68 = (long ***)&ppplStack_68;
    if (pppplVar4[0x2f] != (long ***)0x0) {
      ppplStack_68 = pppplVar4[0x2d];
      ppplStack_60 = pppplVar4[0x2e];
      ppplVar5 = (long ***)ppplStack_68[1];
      (*ppplStack_60)[1] = (long *)ppplVar5;
      *ppplVar5 = *ppplStack_60;
      *ppplStack_60 = (long **)&ppplStack_68;
      ppplStack_68[1] = (long **)&ppplStack_68;
      pplStack_58 = (long **)pppplVar4[0x2f];
      pppplVar4[0x2f] = (long ***)0x0;
    }
    pppplVar7 = &ppplStack_60;
    if (pppplVar4[0x2c] == (long ***)0x0) {
      func_0x0001001c54a4(param_1 + 0x28);
    }
    for (; pppplVar7 = (long ****)*pppplVar7, pppplVar7 != &ppplStack_68; pppplVar7 = pppplVar7 + 1)
    {
      lStack_70 = -0x5555555555555556;
      func_0x00010015d41c(&lStack_70,pppplVar7 + 2);
      (**(code **)(lStack_70 + 8))();
      func_0x000100140e00(&lStack_70);
    }
    func_0x0001001c54d8(&ppplStack_68);
  }
  return;
LAB_10064d6e0:
  pppplVar8 = (long ****)ppplVar5[0x26];
  func_0x0001001c5384(param_1,pppplVar7);
  pppplVar4 = (long ****)ppplStack_68;
  if ((long ****)ppplStack_68 != (long ****)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppplStack_68,0x10);
      if (bVar2) {
        *(int *)ppplStack_68 = *(int *)ppplStack_68 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (*(code *)(*pppplVar8)[2])(pppplVar8,ppplStack_68,pppplVar6);
  pppplVar7 = pppplVar8;
  if (pppplVar4 == (long ****)0x0) goto LAB_10064d724;
  goto LAB_10064d640;
}



/* Entry: 10064d830; end: 10064d923;  */

undefined8 FUN_10064d830(long *param_1)

{
  undefined1 in_ZR;
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_70 [80];
  
  if ((bRam000000011383a548 & 1) == 0) {
    iVar1 = 0x1383a548;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_10064c520(0x11383a4d0);
      func_0x000107c60e4c(0x11383a548);
    }
  }
  FUN_10064bce4();
  if (*param_1 != 0) {
    func_0x00010064bcec();
    if (extraout_x8 != 0) {
      do {
        FUN_10011a6d8();
      } while (extraout_w10 != 0);
    }
    func_0x00010064bcf8(auStack_70);
    FUN_10011a768(0x11383a550);
    if (!(bool)in_ZR) {
      func_0x00010060f3d0();
      func_0x00010064bd04(0x11383a550);
    }
    func_0x00010064e128(auStack_70);
  }
  func_0x00010064c2fc();
  return 0x11383a4d0;
}



/* Entry: 10064d924; end: 10064d99b;  */

void FUN_10064d924(void)

{
  undefined1 in_ZR;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [72];
  
  func_0x00010064bd0c();
  FUN_10064bd98(auStack_68,auStack_80);
  func_0x00010064bda8();
  func_0x00010064bdb0();
  func_0x00010064bdb8();
  func_0x00010064bdc8();
  FUN_10064c224();
  if ((bool)in_ZR) {
    func_0x00010064c230();
    FUN_10006369c(0x11383a4d0);
  }
  func_0x00010064c2b0();
  func_0x00010064c2b8();
  return;
}



/* Entry: 10064d99c; end: 10064d9ab; -[_TtC26MemoriesExperimentServices34SCLegacyMemoriesExperimentServices coreConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10064d99c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113080720));
  return;
}



/* Entry: 10064d9ac; end: 10064da57;  */

ulong FUN_10064d9ac(ulong param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48)) {
    func_0x0001001b536c();
    func_0x00010017d140();
    if ((int)param_1 != 0) {
      param_1 = unaff_x20 + 0x20;
      func_0x00010064da40(param_1,unaff_x19 + 0x20);
      if ((int)param_1 != 0) {
        if (*(int *)(unaff_x20 + 0x4c) == *(int *)(unaff_x19 + 0x4c)) {
          FUN_10064dafc();
          if ((int)param_1 != 0) {
            param_1 = (ulong)(*(int *)(unaff_x20 + 0x120) == *(int *)(unaff_x19 + 0x120));
          }
        }
        else {
          param_1 = 0;
        }
      }
    }
    return param_1;
  }
  return 0;
}



/* Entry: 10064da58; end: 10064dafb; -[SCPhotoPermissionServices initWithPhotoPermissionCoordinator:coreConfigProvider:] */

undefined1 *
FUN_10064da58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702318;
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



/* Entry: 10064dafc; end: 10064dc7f;  */

void FUN_10064dafc(void)

{
  long unaff_x19;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_28 = unaff_x20 + 0x58;
  lStack_40 = unaff_x19 + 0x58;
  lStack_20 = unaff_x20 + 0xb0;
  lStack_18 = unaff_x20 + 0x108;
  lStack_38 = unaff_x19 + 0xb0;
  lStack_30 = unaff_x19 + 0x108;
  func_0x00010064db84(&lStack_28,&lStack_40);
  return;
}



/* Entry: 10064dc80; end: 10064dcb3;  */

void FUN_10064dc80(void)

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



/* Entry: 10064dcb4; end: 10064e0db;  */

void FUN_10064dcb4(long param_1)

{
  long *plVar1;
  long extraout_x8;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x558) != 0) {
    uStack_30 = 0xaaaaaaaaaaaaaaaa;
    uStack_28 = 0xaaaaaaaaaaaaaaaa;
    uStack_38 = 0xaaaaaaaaaaaaaaaa;
    func_0x0001001e19ac(&uStack_38,*(long *)(param_1 + 0x558) + 0x168);
    plVar1 = *(long **)(*(long *)(param_1 + 0x558) + 0x18);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 200))(plVar1,&uStack_38);
    }
    func_0x0001001b43c8();
    (**(code **)(extraout_x8 + 0x58))();
    func_0x0001001c6900(&uStack_38);
  }
  return;
}



/* Entry: 10064e0dc; end: 10064e0e3;  */

void FUN_10064e0dc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    FUN_10064d388();
  }
  else {
    func_0x000107c39d3c();
  }
  *puVar1 = &PTR_DAT_110cf93a0;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  return;
}



/* Entry: 10064e0e4; end: 10064e143;  */

void FUN_10064e0e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    FUN_10064d388();
  }
  else {
    func_0x000107c39d3c();
  }
  *puVar1 = &PTR_DAT_110cf93a0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  return;
}



/* Entry: 10064e144; end: 10064e1b7;  */

undefined1 FUN_10064e144(long *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  int extraout_w10;
  
  if (*param_1 != 0) {
    if (param_1[1] != 0) {
      do {
        FUN_10011a6d8();
      } while (extraout_w10 != 0);
    }
    FUN_10011a768(0x11383a6d8);
    if (!(bool)in_ZR) {
      func_0x00010011a774();
      func_0x00010011a788(0x11383a6d8,param_2,FUN_10064e1b8);
    }
    func_0x00010011b648();
  }
  return uRam000000011383a6d0;
}


