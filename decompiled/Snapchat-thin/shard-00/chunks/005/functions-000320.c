/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006b3a34; end: 1006b3a57;  */

void FUN_1006b3a34(long param_1)

{
  func_0x00010054e7b4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1006b3a58; end: 1006b3a6b;  */

long FUN_1006b3a58(void)

{
  long unaff_x29;
  
  FUN_1005fe47c(unaff_x29 + -0x18,0);
  return unaff_x29 + -0x18;
}



/* Entry: 1006b3a6c; end: 1006b3a8f;  */

void FUN_1006b3a6c(long param_1)

{
  func_0x00010054e7b4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1006b3a90; end: 1006b3aaf;  */

void FUN_1006b3a90(void)

{
  return;
}



/* Entry: 1006b3ab0; end: 1006b3b37;  */

long FUN_1006b3ab0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x000100871778(uVar1);
  return param_1;
}



/* Entry: 1006b3b38; end: 1006b3b3f;  */

void FUN_1006b3b38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  undefined8 *extraout_x8_00;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  FUN_1005e3578();
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_70 = &PTR_DAT_110a609a8;
  uStack_68 = 0;
  uStack_50 = 0x1db;
  func_0x000100607304();
  (**(code **)(extraout_x8 + 0x20))(auStack_48);
  FUN_100634988();
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_70 = &PTR_DAT_110a609a8;
  uStack_68 = 0;
  uStack_50 = 0x1db;
  FUN_1006071ec(&ppuStack_70,param_3);
  FUN_1005e3578();
  func_0x000100607304();
  (*(code *)*extraout_x8_00)();
  FUN_100634988();
  func_0x000107c60ca0(auStack_48);
  return;
}



/* Entry: 1006b3b40; end: 1006b3bab;  */

void FUN_1006b3b40(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if ((*(char *)(lVar2 + 0x37c) != '\x01') || (*(int *)(lVar2 + 0x378) != (int)param_2)) {
    *(int *)(lVar2 + 0x378) = (int)param_2;
    *(undefined1 *)(lVar2 + 0x37c) = 1;
    FUN_10054fc78(*(undefined8 *)(lVar2 + 0xd0));
    FUN_1006b3bac();
  }
  plVar1 = *(long **)(lVar2 + 0x1f0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001006b3ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x78))(plVar1,param_2);
    return;
  }
  return;
}



/* Entry: 1006b3bac; end: 1006b3bb3;  */

void FUN_1006b3bac(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001006b3bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1006b3bb4; end: 1006b3beb;  */

void FUN_1006b3bb4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  func_0x000107c4db84(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1006b3bec; end: 1006b3bfb; -[SCNativeMessagingSessionManager onConnectionStateChanged:] */

void FUN_1006b3bec(void)

{
  return;
}



/* Entry: 1006b3bfc; end: 1006b3c33;  */

void FUN_1006b3bfc(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  while (lVar1 != lVar2) {
    FUN_1006b3bec();
    FUN_1006b3bac(*(undefined8 *)(extraout_x8 + 0x78));
  }
  return;
}



/* Entry: 1006b3c34; end: 1006b3c5b;  */

void FUN_1006b3c34(void)

{
  return;
}



/* Entry: 1006b3c5c; end: 1006b3c8f;  */

void FUN_1006b3c5c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x0001006b3c4c();
  if (iVar1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x50);
    lVar3 = *(long *)(param_1 + 0x58);
    lVar2 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    if ((iVar1 == 0) && (lVar3 + *(long *)(param_1 + 0x68) * 1000000 < lVar2)) {
      (**(code **)(**(long **)(param_1 + 0x40) + 0xd8))(*(long **)(param_1 + 0x40),6);
      lVar2 = *(long *)(param_1 + 0x28);
      if ((*(char *)(lVar2 + 0x20) == '\x01') && ((*(byte *)(lVar2 + 0x21) & 1) != 0)) {
        lVar3 = 0;
      }
      else {
        lVar3 = lVar2;
        FUN_1006b3c90();
      }
      *(long *)(lVar2 + 0x10) = lVar3;
      return;
    }
  }
  return;
}



/* Entry: 1006b3c90; end: 1006b3caf;  */

void FUN_1006b3c90(void)

{
  undefined8 *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x0001006b3c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*unaff_x19 + 0x10))();
  return;
}



/* Entry: 1006b3cb0; end: 1006b3d3b;  */

void FUN_1006b3cb0(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  
  func_0x0001006b3ca0();
  FUN_100634368();
  func_0x000100634378();
  func_0x000100634384();
  FUN_1004b5564();
  FUN_1006b3d3c();
  FUN_100634748();
  func_0x0001006b3d44();
  func_0x0001006b3d54();
  if ((extraout_x8 & 1) == 0) {
    func_0x0001006b3d60();
    (**(code **)(extraout_x8_00 + 0x160))();
    FUN_1006b3d3c();
    func_0x0001006a5d5c();
    func_0x0001006ba348();
    func_0x0001006ba358();
  }
  func_0x0001006a5d80();
  func_0x0001006a5d88();
  return;
}



/* Entry: 1006b3d3c; end: 1006b3d73;  */

long FUN_1006b3d3c(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 + 0x20);
  lVar2 = *plVar1;
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    func_0x000100552990();
    lVar2 = (long)plVar1 + lVar2;
  }
  return lVar2;
}



/* Entry: 1006b3d74; end: 1006b4437;  */

void FUN_1006b3d74(undefined8 **param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  byte *pbVar2;
  undefined8 ***pppuVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  undefined8 ***unaff_x21;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 **in_register_00005008;
  undefined8 **ppuVar9;
  undefined8 *apuStack_cf0 [59];
  byte bStack_b18;
  undefined8 *apuStack_b10 [27];
  byte bStack_a38;
  byte bStack_938;
  undefined8 *puStack_930;
  undefined8 *puStack_928;
  code *pcStack_920;
  undefined **ppuStack_918;
  undefined8 *puStack_910;
  byte bStack_858;
  undefined1 auStack_740 [224];
  undefined1 auStack_660 [224];
  undefined1 auStack_580 [224];
  undefined8 **ppuStack_4a0;
  undefined1 uStack_498;
  undefined1 auStack_490 [16];
  long lStack_480;
  undefined8 **ppuStack_468;
  undefined8 **ppuStack_460;
  undefined8 **ppuStack_458;
  undefined8 **ppuStack_450;
  undefined8 **ppuStack_448;
  undefined8 *puStack_440;
  undefined8 uStack_438;
  code *pcStack_430;
  undefined **ppuStack_428;
  undefined8 **ppuStack_420;
  undefined8 **ppuStack_418;
  undefined8 **ppuStack_410;
  undefined8 **ppuStack_408;
  undefined8 **ppuStack_400;
  undefined *puStack_3f8;
  undefined8 **ppuStack_3f0;
  undefined1 uStack_3e8;
  undefined8 uStack_8;
  
  FUN_100570a60();
  FUN_1006b4438();
  ppuStack_448 = (undefined8 **)0x0;
  ppuStack_450 = (undefined8 **)0x0;
  puStack_440 = (undefined8 **)0x0;
  uStack_8 = extraout_x8;
  func_0x0001006b444c();
  FUN_1005f6cf4(&pcStack_430);
  func_0x0001005f7178(auStack_580,&pcStack_430);
  FUN_1006b4458(apuStack_cf0,auStack_580);
  func_0x000107c60ee4(auStack_740,0xe0);
  FUN_1006b4458(auStack_660,auStack_740);
  ppuStack_458 = (undefined8 ***)0x0;
  ppuStack_468 = (undefined8 ***)0x0;
  ppuStack_460 = (undefined8 ***)0x0;
  FUN_1006b44ec(&puStack_930,apuStack_cf0);
  FUN_1006b44ec(apuStack_b10,auStack_660);
  pppuVar4 = &ppuStack_468;
  uStack_498 = 0;
  pppuVar5 = (undefined8 ***)0xd0;
  ppuStack_4a0 = pppuVar4;
  while ((((bStack_858 & 1) != 0 || ((bStack_a38 & 1) != 0)) &&
         (in_ZR = 1, puStack_930 != apuStack_b10[0]))) {
    func_0x0001086a10f8(&puStack_930);
    in_ZR = ppuStack_460 == ppuStack_458;
    if (ppuStack_460 < ppuStack_458) {
      func_0x000107c32778();
      unaff_x21 = (undefined8 ***)(ppuStack_460 + 0x1a);
    }
    else {
      pppuVar3 = &ppuStack_468;
      func_0x000107c2913c(pppuVar3,((long)ppuStack_460 - (long)ppuStack_468) / 0xd0 + 1);
      func_0x000107c29144(auStack_490,pppuVar3,((long)ppuStack_460 - (long)ppuStack_468) / 0xd0,
                          &ppuStack_458);
      func_0x000107c32778(lStack_480);
      lStack_480 = lStack_480 + 0xd0;
      func_0x000107c29140(&ppuStack_468,auStack_490);
      unaff_x21 = (undefined8 ***)ppuStack_460;
      func_0x000107c29148(auStack_490);
    }
    ppuStack_460 = unaff_x21;
    FUN_1005f6ee0(&puStack_930);
  }
  uStack_498 = 1;
  FUN_1006b454c(&ppuStack_4a0);
  FUN_1006b4574(apuStack_b10);
  FUN_1006b4574(&puStack_930);
  FUN_1006b4574(auStack_660);
  FUN_1006b4574(auStack_740);
  FUN_1006b4574(apuStack_cf0);
  FUN_1006b4574(auStack_580);
  FUN_1005f73e4(&pcStack_430);
  func_0x0001006b457c();
  FUN_1006b4588(&puStack_930);
  func_0x00010066b7f4(apuStack_b10,&puStack_930);
  FUN_10066ba8c(apuStack_cf0);
  do {
    if ((((bStack_938 & 1) == 0) && ((bStack_b18 & 1) == 0)) ||
       (in_ZR = apuStack_b10[0] == apuStack_cf0[0], (bool)in_ZR)) {
      FUN_1006b9e40(apuStack_cf0);
      FUN_1006b9e40(apuStack_b10);
      pppuVar3 = (undefined8 ***)&puStack_930;
      FUN_10066ba38();
      func_0x0001006b9e48();
      puStack_930 = param_1;
      puStack_928 = in_register_00005008;
      if (extraout_x8_00 != 0) {
        do {
          FUN_100571a34();
        } while (extraout_w10 != 0);
      }
      ppuStack_918 = (undefined **)ppuStack_448;
      pcStack_920 = (code *)ppuStack_450;
      puStack_910 = puStack_440;
      puStack_440 = (undefined8 *)0x0;
      ppuStack_448 = (undefined8 **)0x0;
      ppuStack_450 = (undefined8 **)0x0;
      FUN_10028c49c();
      func_0x0001006b9e5c();
      func_0x0001006b9e68();
      ppuVar7 = pppuVar5[0xe];
      pcStack_430 = FUN_1006cee50;
      ppuStack_428 = &PTR_FUN_110a64618;
      FUN_10066b1a8();
      pppuVar3[1] = (undefined8 **)puStack_928;
      *pppuVar3 = (undefined8 **)puStack_930;
      if ((undefined8 **)puStack_928 != (undefined8 **)0x0) {
        do {
          FUN_100571a34();
        } while (extraout_w10_00 != 0);
      }
      ppuVar9 = (undefined8 **)ppuStack_918;
      ppuVar8 = (undefined8 **)pcStack_920;
      pppuVar3[3] = (undefined8 **)ppuStack_918;
      pppuVar3[2] = (undefined8 **)pcStack_920;
      pppuVar3[4] = (undefined8 **)puStack_910;
      ppuStack_918 = (undefined **)0x0;
      puStack_910 = (undefined8 *)0x0;
      pcStack_920 = (code *)0x0;
      ppuStack_420 = pppuVar3;
      ppuStack_400 = unaff_x21;
      FUN_1005760fc(pppuVar5 + 9,&pcStack_430);
      func_0x0001006b9e8c(ppuStack_428);
      FUN_1006b9eb8();
      if (ppuVar7 == (undefined8 **)0x0) {
        func_0x0001006b9ec0();
        pcStack_430 = (code *)ppuVar8;
        ppuStack_428 = (undefined **)ppuVar9;
        if (extraout_x8_01 != 0) {
          do {
            FUN_100571a34();
          } while (extraout_w10_01 != 0);
        }
        FUN_100571b00();
        (*extraout_x8_02)();
        FUN_100576684(&pcStack_430);
      }
      FUN_1006ba280(&puStack_930);
      func_0x0001006ba2e4(&ppuStack_468);
      func_0x0001006ba2a4(&ppuStack_450);
      while( true ) {
        while( true ) {
          FUN_1006ba334(uStack_8);
          if ((bool)in_ZR) {
            return;
          }
          func_0x000107c60e78();
          func_0x000107c3264c();
          FUN_100576684(&pcStack_430);
          FUN_1006ba280(&puStack_930);
          func_0x0001006ba2e4(&ppuStack_468);
          pppuVar5 = &ppuStack_450;
          func_0x0001006ba2a4();
          in_ZR = (int)pppuVar4 == 2;
          if (!(bool)in_ZR) break;
          func_0x000107c32658();
          func_0x000107c29ee8();
          func_0x000107c3272c();
          func_0x000107c29064();
          func_0x000107c60e3c();
        }
        in_ZR = (int)pppuVar4 == 1;
        if (!(bool)in_ZR) break;
        func_0x000107c32658();
        func_0x000107c326f4();
        func_0x000107c325d0();
        ppuStack_448 = (undefined8 ***)0x0;
        uStack_438 = 0;
        puStack_440 = (undefined8 *)&UNK_10f4b0ff6;
        ppuStack_450 = pppuVar5;
        func_0x000107c325e4();
        func_0x000107c326c0(&ppuStack_468);
        func_0x000107c326bc(&ppuStack_450);
        pppuVar4 = &ppuStack_468;
        FUN_10054f908();
        ppuStack_410 = ppuStack_458;
        pcStack_430 = (code *)CONCAT44(pcStack_430._4_4_,0x10);
        ppuStack_428 = (undefined **)0x0;
        ppuStack_418 = ppuStack_460;
        ppuStack_420 = ppuStack_468;
        ppuStack_468 = (undefined8 ***)0x0;
        ppuStack_460 = (undefined8 ***)0x0;
        ppuStack_458 = (undefined8 ***)0x0;
        ppuStack_400 = ppuStack_448;
        ppuStack_408 = ppuStack_450;
        puStack_3f8 = (undefined *)puStack_440;
        ppuStack_450 = (undefined8 **)0x0;
        ppuStack_448 = (undefined8 **)0x0;
        puStack_440 = (undefined8 *)0x0;
        uStack_3e8 = 0;
        ppuStack_3f0 = pppuVar5;
        func_0x000107c326cc();
        func_0x00010786e114(&pcStack_430);
        func_0x000107c60ca0(&ppuStack_450);
        func_0x000107c60ca0(&ppuStack_468);
        func_0x000107c326f0();
        func_0x000107c29064();
        func_0x000107c60e3c();
      }
      func_0x000107c32664();
      func_0x000107c326a0();
      return;
    }
    unaff_x21 = (undefined8 ***)apuStack_b10;
    FUN_10066b99c();
    uVar1 = unaff_x19 + 0x172;
    FUN_1006b4678(uVar1,unaff_x21 + 3);
    if ((uVar1 & 1) == 0) {
      pppuVar3 = (undefined8 ***)ppuStack_460;
      pppuVar6 = (undefined8 ***)ppuStack_468;
      if (((*(char *)((long)unaff_x21 + 0x1cc) == '\x01') && (*(int *)(unaff_x21 + 0x39) == 3)) &&
         (in_ZR = *(int *)(unaff_x21 + 0x21) == 1, (bool)in_ZR)) {
        pbVar2 = (byte *)(unaff_x19 + 0x290);
        FUN_10056337c();
        pppuVar3 = (undefined8 ***)ppuStack_460;
        pppuVar6 = (undefined8 ***)ppuStack_468;
        if ((*pbVar2 & 1) != 0) goto LAB_1006b4088;
      }
      for (; pppuVar4 = pppuVar3, pppuVar6 != pppuVar3; pppuVar6 = pppuVar6 + 0x1a) {
        pppuVar5 = pppuVar6;
        FUN_1006760d0(pppuVar6,unaff_x21);
        if (((ulong)pppuVar5 & 1) == 0) {
          do {
            pppuVar3 = pppuVar3 + -0x1a;
            pppuVar4 = pppuVar6;
            if (pppuVar3 == pppuVar6) goto LAB_1006b3ffc;
            func_0x000107c32754();
            FUN_1006760d0();
          } while ((int)pppuVar5 == 0);
          func_0x000107c327a4();
          func_0x0001086ad8d8();
        }
      }
LAB_1006b3ffc:
      if (pppuVar4 != (undefined8 ***)ppuStack_460) {
        func_0x000107c290c8(pppuVar4,ppuStack_460,
                            LZCOUNT(((long)ppuStack_460 - (long)pppuVar4) / 0xd0) << 1 ^ 0x7e,1);
      }
      for (; in_ZR = pppuVar4 == (undefined8 ***)ppuStack_460, !(bool)in_ZR;
          pppuVar4 = pppuVar4 + 0x1a) {
        func_0x000107c326dc(&pcStack_430);
        func_0x000107c29230(unaff_x21 + 3,pppuVar4 + 5,&pcStack_430);
        FUN_100100fec(&pcStack_430);
      }
      func_0x0001006b46a8(&pcStack_430,*(undefined8 *)(*(long *)(unaff_x19 + 0xd0) + 0x210),
                          unaff_x21);
      FUN_1006b70b8(&ppuStack_450,&pcStack_430);
      func_0x0001006b74f4(&pcStack_430);
      pppuVar5 = pppuVar6;
    }
LAB_1006b4088:
    FUN_10065f604(apuStack_b10);
  } while( true );
}



/* Entry: 1006b4438; end: 1006b4457;  */

void FUN_1006b4438(void)

{
  return;
}



/* Entry: 1006b4458; end: 1006b4493;  */

void FUN_1006b4458(void)

{
  long unaff_x20;
  
  func_0x00010066ba28();
  FUN_1006b44a8();
  FUN_10066b398();
  FUN_1006b44a8();
  FUN_1005f7224(unaff_x20 + 8);
  return;
}



/* Entry: 1006b4494; end: 1006b44a7;  */

void FUN_1006b4494(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  return;
}



/* Entry: 1006b44a8; end: 1006b44e3;  */

void FUN_1006b44a8(long param_1,long param_2)

{
  long unaff_x19;
  
  FUN_1006b4494();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(unaff_x19 + 0xd8) = 0;
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    func_0x0001086ad828((undefined1 *)(param_1 + 8),param_2 + 8);
  }
  return;
}



/* Entry: 1006b44e4; end: 1006b44eb;  */

void FUN_1006b44e4(void)

{
  return;
}



/* Entry: 1006b44ec; end: 1006b453f;  */

void FUN_1006b44ec(long param_1,long param_2)

{
  long unaff_x19;
  
  FUN_1006b4494();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    func_0x000107c2914c((undefined1 *)(param_1 + 8),param_2 + 8);
    *(undefined1 *)(unaff_x19 + 0xd8) = 1;
  }
  return;
}



/* Entry: 1006b4540; end: 1006b454b;  */

void FUN_1006b4540(void)

{
  return;
}



/* Entry: 1006b454c; end: 1006b4573;  */

void FUN_1006b454c(void)

{
  uint extraout_w8;
  
  FUN_1006b4540();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001006ba308();
  }
  return;
}



/* Entry: 1006b4574; end: 1006b4587;  */

void FUN_1006b4574(long param_1)

{
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    func_0x000107c28f8c();
  }
  return;
}



/* Entry: 1006b4588; end: 1006b4607;  */

void FUN_1006b4588(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001005f39b8();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c3417c();
      func_0x000107c341b0();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c3422c();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_1006b4608(*(long *)(unaff_x20 + 0x20) + 0x5f0);
  return;
}



/* Entry: 1006b4608; end: 1006b462b;  */

void FUN_1006b4608(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  FUN_10065f0c4();
  func_0x0001005ec788(param_1);
  FUN_10065f5a4(param_2,auStack_28);
  return;
}



/* Entry: 1006b462c; end: 1006b4677;  */

void FUN_1006b462c(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x0001005ec788();
  FUN_10065f5a4(param_1,auStack_28);
  return;
}



/* Entry: 1006b4678; end: 1006b46d3;  */

byte FUN_1006b4678(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  
  if ((*(uint *)(param_2 + 0x10) >> 7 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0xc & 1) == 0) {
      bVar1 = 0;
      goto LAB_1006b46a0;
    }
    lVar2 = 2;
  }
  else {
    lVar2 = 1;
  }
  bVar1 = *(byte *)(param_1 + lVar2) ^ 1;
LAB_1006b46a0:
  return bVar1 & 1;
}



/* Entry: 1006b46d4; end: 1006b472b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1006b46d4(ulong *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  undefined1 uVar16;
  uint extraout_w8;
  uint uVar17;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long *plVar18;
  uint uVar19;
  long extraout_x9;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  undefined8 uVar24;
  ulong uVar25;
  long *unaff_x26;
  long unaff_x27;
  long lVar26;
  long lVar27;
  int iStack_9c4;
  undefined1 auStack_9a0 [32];
  undefined1 auStack_980 [224];
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined1 uStack_868;
  undefined1 auStack_860 [32];
  ulong uStack_840;
  ulong *puStack_838;
  ulong *puStack_830;
  undefined1 auStack_820 [200];
  undefined1 auStack_758 [24];
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  long lStack_700;
  ulong *puStack_6f8;
  ulong *puStack_6f0;
  undefined1 auStack_6e0 [24];
  undefined1 uStack_6c8;
  undefined1 auStack_6c0 [24];
  undefined1 auStack_6a8 [88];
  undefined1 auStack_650 [120];
  undefined1 auStack_5d8 [24];
  undefined1 uStack_5c0;
  byte bStack_588;
  ulong uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  byte bStack_568;
  uint auStack_538 [48];
  undefined1 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  ulong uStack_430;
  ulong *puStack_428;
  ulong *apuStack_420 [2];
  long lStack_410;
  ulong *puStack_408;
  ulong *puStack_400;
  ulong uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 uStack_3d8;
  ulong uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  undefined1 uStack_3b8;
  ulong uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  char cStack_398;
  byte bStack_340;
  byte bStack_2d8;
  ulong uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  byte bStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  char cStack_1d8;
  undefined1 uStack_118;
  undefined8 uStack_108;
  uint uStack_100;
  uint uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  long *plStack_f0;
  undefined8 uStack_e8;
  uint uStack_e0;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_48 [40];
  
  func_0x0001006b46c0();
  if (param_2 <= (ulong)(extraout_x9 >> 5)) {
    return;
  }
  if (param_2 >> 0x3b == 0) {
    FUN_1006b5ae8();
    FUN_1006b5b08(auStack_48);
    func_0x0001006b5b8c();
    FUN_1006b5ba8();
    func_0x0001006b5d38();
    return;
  }
  func_0x000104be0a80();
  func_0x0001006b5d38();
  func_0x000105282dec();
  lVar26 = (long)*(int *)(param_2 + 0x38) + (long)*(int *)(param_2 + 0x20);
  iVar23 = (int)lVar26;
  if (*(char *)(param_2 + 0x101) == '\0') {
    iVar23 = *(int *)(param_2 + 0x20);
  }
  puStack_408 = (ulong *)0x0;
  lStack_410 = 0;
  puStack_400 = (ulong *)0x0;
  FUN_1006b46d4(&lStack_410,(long)iVar23);
  func_0x0001006b5db8();
  for (; unaff_x27 != 0; unaff_x27 = unaff_x27 + -8) {
    lVar27 = *unaff_x26;
    func_0x0001006b5dd0(*(undefined8 *)(lVar27 + 0x18));
    func_0x0001006b5ddc();
    uStack_3b0 = CONCAT44(uStack_3b0._4_4_,*(undefined4 *)(lVar27 + 0x20));
    auStack_538[0] = *(uint *)(lVar27 + 0x58);
    if (puStack_408 < puStack_400) {
      func_0x0001006b5de4();
      puVar9 = puStack_408 + 4;
    }
    else {
      func_0x000107c32850((long)puStack_408 - lStack_410 >> 5);
      func_0x0001006b5e64();
      func_0x000107c32848();
      func_0x0001006b5de4(lStack_1e0);
      lStack_1e0 = lStack_1e0 + 0x20;
      func_0x000107c3284c();
      puVar9 = puStack_408;
      FUN_1006b5d48(&uStack_1f0);
    }
    puStack_408 = puVar9;
    func_0x0001006b5e5c();
    unaff_x26 = unaff_x26 + 1;
  }
  puStack_428 = (ulong *)0x0;
  uStack_430 = 0;
  apuStack_420[0] = (ulong *)0x0;
  func_0x0001006b5e64();
  puVar15 = (ulong *)(lVar26 - (extraout_x8_00 >> 5));
  puVar9 = &uStack_430;
  FUN_1006b5e74();
  func_0x0001006b5db8();
  for (lVar26 = 0; lVar26 != 0; lVar26 = lVar26 + -8) {
    lVar27 = *unaff_x26;
    if (*(char *)(lVar27 + 0x20) == '\x01') {
      func_0x0001006b5dd0(*(undefined8 *)(lVar27 + 0x18));
      func_0x0001006b5ddc();
      if (puStack_408 < puStack_400) {
        puVar15 = &uStack_2d0;
        func_0x000107c29224();
        puVar9 = puStack_408;
        puStack_408 = puStack_408 + 4;
      }
      else {
        func_0x000107c32850((long)puStack_408 - lStack_410 >> 5);
        func_0x0001006b5e64();
        func_0x000107c32848();
        puVar15 = &uStack_2d0;
        func_0x000107c29224(lStack_1e0);
        lStack_1e0 = lStack_1e0 + 0x20;
        func_0x000107c3284c();
        puVar4 = puStack_408;
        puVar9 = &uStack_1f0;
        FUN_1006b5d48();
        puStack_408 = puVar4;
      }
    }
    else {
      func_0x0001006b5dd0(*(undefined8 *)(lVar27 + 0x18));
      func_0x0001006b5ddc();
      if (puStack_428 < apuStack_420[0]) {
        puVar15 = &uStack_2d0;
        func_0x000107c29228();
        puVar9 = puStack_428;
        puStack_428 = puStack_428 + 3;
      }
      else {
        puVar9 = &uStack_430;
        func_0x000105282d18(puVar9,(long)((long)puStack_428 - uStack_430) / 0x18 + 1);
        func_0x000105282ba8(&uStack_1f0,puVar9,(long)((long)puStack_428 - uStack_430) / 0x18,
                            apuStack_420);
        func_0x000107c29228(lStack_1e0,&uStack_2d0);
        lStack_1e0 = lStack_1e0 + 0x18;
        puVar15 = &uStack_1f0;
        func_0x000105282b68(&uStack_430);
        puVar4 = puStack_428;
        puVar9 = &uStack_1f0;
        func_0x000105282cac();
        puStack_428 = puVar4;
      }
    }
    func_0x0001006b5e5c();
    unaff_x26 = unaff_x26 + 1;
  }
  uVar21 = *(uint *)(param_2 + 0x10);
  if ((uVar21 >> 3 & 1) == 0) {
    uVar25 = 0;
    puVar15 = (ulong *)0x0;
    iStack_9c4 = 0;
  }
  else {
    lVar26 = *(long *)(param_2 + 0x80);
    uVar1 = *(uint *)(lVar26 + 0x10);
    if ((uVar1 & 1) == 0) {
      puVar15 = (ulong *)0x0;
      uVar11 = 0;
      uVar25 = (ulong)*(uint *)(lVar26 + 0x54);
      if (2 < *(uint *)(lVar26 + 0x54) - 1) {
        uVar25 = 0;
      }
    }
    else {
      func_0x0001006b5ee4(*(undefined8 *)(*(long *)(lVar26 + 0x48) + 0x18));
      uVar11 = (ulong)puVar9 & 0xffffffff00000000;
      uVar25 = (ulong)puVar9 & 0xffffffff;
    }
    uVar25 = uVar25 | uVar11;
    iStack_9c4 = *(int *)(lVar26 + 0x50);
    if (2 < iStack_9c4 - 1U) {
      iStack_9c4 = 0;
    }
    if ((uVar1 & 1) != 0) {
      func_0x0001006b5ee4(*(undefined8 *)(*(long *)(lVar26 + 0x48) + 0x20));
    }
  }
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_440 = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_460 = 0;
  func_0x0001006b5f14(*(undefined8 *)(param_2 + 0x80));
  if ((uVar21 >> 3 & 1) != 0) {
    func_0x0001006b5f20();
    puVar3 = (undefined8 *)(ulong)uVar21;
    for (lVar26 = extraout_x8_01 << 3; lVar26 != 0; lVar26 = lVar26 + -8) {
      FUN_100696384(&uStack_1f0,*puVar3);
      FUN_10069c690(&uStack_450,&uStack_1f0);
      FUN_100100fec(&uStack_1f0);
      puVar3 = puVar3 + 1;
    }
    func_0x0001006b5f34();
    func_0x0001006b5f20();
    for (lVar26 = extraout_x8_02 << 3; lVar26 != 0; lVar26 = lVar26 + -8) {
      FUN_100696384(&uStack_1f0,*puVar3);
      FUN_10069c690(&uStack_470,&uStack_1f0);
      FUN_100100fec(&uStack_1f0);
      puVar3 = puVar3 + 1;
    }
    uVar21 = *(uint *)(param_2 + 0x10);
  }
  if (((uVar21 >> 5 & 1) == 0) ||
     (lVar26 = *(long *)(param_2 + 0x90), (*(byte *)(lVar26 + 0x10) & 1) == 0)) {
    auStack_538[0] = auStack_538[0] & 0xffffff00;
    uStack_478 = 0;
  }
  else {
    auStack_5d8[0] = 0;
    uStack_5c0 = 0;
    lVar27 = lVar26;
    FUN_1006b76b8(lVar26,*param_1 + 0x40);
    if ((int)lVar27 != 0) {
      uStack_580 = uStack_580 & 0xffffffffffffff00;
      bStack_568 = 0;
      FUN_100694e94(&uStack_1f0,*param_1,param_3);
      func_0x0001005f7178(&uStack_2d0,&uStack_1f0);
      func_0x000107c60ee4(&uStack_3b0,0xe0);
      while ((((bStack_1f8 & 1) != 0 || ((bStack_2d8 & 1) != 0)) && (uStack_2d0 != uStack_3b0))) {
        puVar9 = &uStack_2d0;
        func_0x0001086a10f8();
        if ((puVar9[0x17] != puVar9[0x18]) && ((int)puVar9[0xe] == 0x11)) {
          if (bStack_568 == 1) {
            FUN_10054f8dc(&uStack_3d0);
            iStack_f8 = (int)uStack_3c8;
            uStack_f4 = (undefined4)((ulong)uStack_3c8 >> 0x20);
            uStack_100 = (uint)uStack_3d0;
            uStack_fc = (uint)(uStack_3d0 >> 0x20);
            plStack_f0 = (long *)lStack_3c0;
            lStack_3c0 = 0;
            uStack_3c8 = 0;
            uStack_3d0 = 0;
            func_0x00010065acbc(&uStack_580,&uStack_100);
            FUN_100100fec(&uStack_100);
            FUN_100100fec(&uStack_3d0);
          }
          else {
            func_0x000107c290e8(&uStack_580);
            bStack_568 = 1;
          }
        }
        FUN_1005f6ee0(&uStack_2d0);
      }
      func_0x000107c3283c(&uStack_3b0);
      func_0x000107c3283c(&uStack_2d0);
      FUN_1005f73e4(&uStack_1f0);
      if ((bStack_568 & 1) == 0) {
        func_0x000107c2a038(&uStack_1f0,*param_1,param_3);
        if ((cStack_1d8 == '\x01') &&
           (CONCAT71(uStack_1f0._1_7_,(undefined1)uStack_1f0) != lStack_1e8)) {
          FUN_10054f8dc(&uStack_3b0,&uStack_1f0);
          uVar5 = uStack_3a0;
          uVar24 = uStack_3a8;
          uVar11 = uStack_3b0;
          uStack_2d0 = uStack_3b0;
          uStack_2c8 = uStack_3a8;
          uStack_2c0 = uStack_3a0;
          uStack_3a8 = 0;
          uStack_3b0 = 0;
          uStack_3a0 = 0;
          if (bStack_568 == 1) {
            func_0x00010065acbc(&uStack_580,&uStack_2d0);
          }
          else {
            uStack_580 = uVar11;
            uStack_578 = uVar24;
            uStack_570 = uVar5;
            uStack_2c0 = 0;
            uStack_2d0 = 0;
            uStack_2c8 = 0;
            bStack_568 = 1;
          }
          func_0x0001006b5e5c();
          FUN_100100fec(&uStack_3b0);
        }
        FUN_1002a2294(&uStack_1f0);
      }
      func_0x00010869cf4c(auStack_5d8,&uStack_580);
      func_0x0001006b7be8(&uStack_580);
    }
    ppuVar10 = &PTR_PTR_11326af28;
    if (*(undefined ***)(lVar26 + 0x20) != (undefined **)0x0) {
      ppuVar10 = *(undefined ***)(lVar26 + 0x20);
    }
    if (*(int *)((long)ppuVar10 + 0x24) == 2) {
      ppuVar10 = (undefined **)ppuVar10[3];
    }
    else {
      ppuVar10 = &PTR_PTR_11326aee0;
    }
    FUN_1006b7758(&uStack_3b0,ppuVar10);
    uStack_580 = uStack_580 & 0xffffffffffffff00;
    bStack_568 = 0;
    if (cStack_398 == '\x01') {
      FUN_1006b77dc(&uStack_1f0,param_3,lVar26,param_1 + 6);
      func_0x000100602604(&uStack_580,&uStack_1f0);
      func_0x000107c60ca0(&uStack_1f0);
    }
    FUN_1006b78fc(&uStack_100,&uStack_3b0);
    FUN_1006b7938(&uStack_3d0,auStack_5d8);
    uStack_3f0 = uStack_3f0 & 0xffffffffffffff00;
    uStack_3d8 = bStack_568 == 1;
    if ((bool)uStack_3d8) {
      uStack_3e8 = uStack_578;
      uStack_3f0 = uStack_580;
      uStack_3e0 = uStack_570;
      uStack_570 = 0;
      uStack_580 = 0;
      uStack_578 = 0;
    }
    FUN_1006b7970(&uStack_2d0,lVar26);
    uVar24 = *(undefined8 *)(lVar26 + 0x30);
    func_0x0001006b5dd0(*(undefined8 *)(lVar26 + 0x18));
    FUN_100696384(&lStack_d0);
    ppuVar10 = &PTR_PTR_11326af10;
    if (*(undefined ***)(lVar26 + 0x28) != (undefined **)0x0) {
      ppuVar10 = *(undefined ***)(lVar26 + 0x28);
    }
    FUN_1006b7aac(&uStack_1f0,&uStack_100,&uStack_3d0,&uStack_3f0,&uStack_2d0,uVar24,&lStack_d0,
                  *(undefined1 *)(lVar26 + 0x38),*(undefined4 *)(ppuVar10 + 2));
    FUN_100100fec(&lStack_d0);
    func_0x0001006b7bc8(&uStack_2d0);
    FUN_1001148fc(&uStack_3f0);
    func_0x0001006b7be8(&uStack_3d0);
    FUN_1002a2294(&uStack_100);
    FUN_1006b7c9c(auStack_538,&uStack_1f0);
    FUN_1006b7cb8(&uStack_1f0);
    FUN_1001148fc(&uStack_580);
    FUN_1002a2294(&uStack_3b0);
    func_0x0001006b7be8(auStack_5d8);
  }
  (**(code **)(*(long *)param_1[4] + 0x18))(&uStack_580,(long *)param_1[4],param_2,param_3);
  if ((char)param_1[0xe] == '\x01') {
    func_0x000107c29fa0(*param_1,param_3);
  }
  func_0x0001006b5f34();
  uVar11 = (ulong)*(uint *)(param_2 + 0x104);
  func_0x00010069c264();
  uStack_3b0 = uStack_3b0 & 0xffffffffffffff00;
  bStack_340 = 0;
  auStack_5d8[0] = 0;
  bStack_588 = 0;
  iVar23 = (int)uVar11;
  uVar11 = uVar11 >> 0x20;
  if ((uVar11 == 0) || (iVar23 != 5 && iVar23 != 2)) {
    if ((uVar11 == 0) || (iVar23 != 7)) goto LAB_1006b4fcc;
    func_0x0001006b5f14(*(undefined1 *)(param_2 + 0x11));
    if ((extraout_w8 >> 4 & 1) != 0) {
      func_0x000107c29e34(&uStack_1f0,*(undefined8 *)(param_2 + 200));
      func_0x000107c29208(auStack_5d8,&uStack_1f0);
      func_0x000104be1234(&uStack_1f0);
    }
    lVar26 = 0;
    uVar22 = 0;
  }
  else {
    FUN_10066ca48(&uStack_1f0,param_3,param_1,(long)param_1 + 0x74);
    FUN_1006b7d24(&uStack_3b0,&uStack_1f0);
    FUN_10066dfc8(&uStack_1f0);
LAB_1006b4fcc:
    uVar22 = 0;
    lVar26 = 0;
    if (uVar11 == 0) {
      func_0x0001006b5f14();
    }
    else if (iVar23 == 2) {
      uVar22 = *param_1;
      FUN_1006b7dc4(uVar22,param_1[10],param_3);
      uVar22 = uVar22 & 0xffffffff;
      lVar26 = 1;
    }
  }
  uStack_1f0._0_1_ = 0;
  uStack_118 = 0;
  if ((((bStack_340 & 1) != 0) || ((bStack_588 & 1) != 0)) || ((int)lVar26 != 0)) {
    FUN_10066dd50(auStack_650,&uStack_3b0);
    FUN_10066dd94(auStack_6a8,auStack_5d8);
    func_0x00010066ddd8(&uStack_2d0,auStack_650,auStack_6a8,uVar22 | lVar26 << 8);
    FUN_10066dee8(&uStack_1f0,&uStack_2d0);
    FUN_10066dfa0(&uStack_2d0);
    FUN_10066df80(auStack_6a8);
    FUN_10066dfc8(auStack_650);
  }
  uStack_3d0 = uStack_3d0 & 0xffffffffffffff00;
  uStack_3b8 = 0;
  if (*(char *)(param_2 + 0x10) < '\0') {
    func_0x0001006b5ddc(*(undefined8 *)(param_2 + 0xa0));
    func_0x00010869026c(&uStack_3d0,&uStack_2d0);
    func_0x0001006b5e5c();
  }
  FUN_10054f8dc(auStack_6c0,param_3);
  uVar11 = *(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc;
  cVar2 = *(char *)(uVar11 + 0x17);
  if (cVar2 < '\0') {
    if (*(long *)(uVar11 + 8) != 0) goto LAB_1006b50c8;
LAB_1006b50dc:
    auStack_6e0[0] = 0;
    uStack_6c8 = 0;
  }
  else {
    if (cVar2 == '\0') goto LAB_1006b50dc;
LAB_1006b50c8:
    func_0x0001002a8308(auStack_6e0);
  }
  puStack_6f8 = puStack_408;
  lStack_700 = lStack_410;
  puStack_6f0 = puStack_400;
  puStack_400 = (ulong *)0x0;
  puStack_408 = (ulong *)0x0;
  lStack_410 = 0;
  ppuVar10 = &PTR_PTR_11326be88;
  if (*(undefined ***)(param_2 + 0x70) != (undefined **)0x0) {
    ppuVar10 = *(undefined ***)(param_2 + 0x70);
  }
  func_0x0001006b612c(&uStack_3f0,ppuVar10,*(undefined4 *)(param_2 + 0xf0));
  iVar23 = *(int *)(param_2 + 0xf0);
  uStack_718 = uStack_448;
  uStack_720 = uStack_450;
  uStack_710 = uStack_440;
  uStack_440 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_738 = uStack_468;
  uStack_740 = uStack_470;
  uStack_730 = uStack_460;
  uStack_470 = 0;
  uStack_468 = 0;
  uStack_460 = 0;
  func_0x0001005fad5c(auStack_758,param_5);
  FUN_1006b618c(auStack_820,auStack_538);
  puStack_838 = puStack_428;
  uStack_840 = uStack_430;
  puStack_830 = apuStack_420[0];
  apuStack_420[0] = (ulong *)0x0;
  puStack_428 = (ulong *)0x0;
  uStack_430 = 0;
  func_0x000107c610b4(&uStack_2d0,&uStack_580,0x48);
  func_0x0001006b61c0();
  func_0x0001006b5f34();
  FUN_1006b61e4();
  FUN_100606fd8(auStack_860,&uStack_3d0);
  FUN_1006b6230(&uStack_8a0,param_2);
  uStack_878 = uStack_898;
  uStack_880 = uStack_8a0;
  uStack_870 = uStack_890;
  uStack_890 = 0;
  uStack_898 = 0;
  uStack_8a0 = 0;
  uStack_868 = 1;
  FUN_10066f670(auStack_980,&uStack_1f0);
  FUN_1006b6594(auStack_9a0,param_2);
  (**(code **)(*(long *)param_1[8] + 0x18))();
  FUN_10066d6d8(&uStack_100,*param_1,param_3);
  uVar1 = uStack_e0;
  cVar2 = (char)uStack_e0;
  uVar21 = (uint)uStack_e8;
  FUN_10066dc24(&uStack_100);
  uVar11 = param_1[0xc];
  if (uVar11 == 0) {
    uVar17 = 0;
    iVar20 = 0;
    uVar19 = 0;
    iVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    if ((uVar1 & 1) == 0) goto LAB_1006b52f0;
LAB_1006b5300:
    iStack_f8 = iVar6;
    if (cVar2 == '\0') {
      uVar21 = 0;
    }
    uStack_fc = uVar19 | uVar17;
    uVar16 = 1;
    uStack_100 = uVar21;
  }
  else {
    FUN_1006b685c(uVar11,param_3);
    iVar20 = (int)(uVar11 >> 0x20);
    uVar19 = (uint)uVar11 & 0xffffff00;
    uVar17 = (uint)uVar11 & 0xff;
    iVar6 = iVar20;
    uVar7 = uVar19;
    uVar8 = uVar17;
    if ((uVar1 & 1) != 0) goto LAB_1006b5300;
LAB_1006b52f0:
    uVar17 = uVar8;
    uVar19 = uVar7;
    iVar6 = iVar20;
    if (iVar20 != 0) goto LAB_1006b5300;
    uVar16 = 0;
    uStack_100 = uStack_100 & 0xffffff00;
  }
  uStack_f4 = CONCAT31(uStack_f4._1_3_,uVar16);
  plVar18 = (long *)CONCAT44(uStack_fc,uStack_100);
  uVar11 = param_2;
  FUN_1006b61e4();
  if ((int)uVar11 != 2) {
    if ((((int)uVar11 == 0) && (*(int *)(param_2 + 0xf0) == 1)) && ((char)param_1[0x1f] == '\x01'))
    {
      FUN_10056337c();
    }
    goto LAB_1006b544c;
  }
  if ((char)param_1[0x18] != '\x01') goto LAB_1006b544c;
  puVar9 = param_1 + 0x10;
  func_0x000108679cf0();
  if (((long)*puVar9 < 1) || (*(int *)(param_2 + 0x50) == 0)) goto LAB_1006b544c;
  lStack_d0 = 0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  iStack_f8 = 0;
  uStack_f4 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_e8 = 0;
  plStack_f0 = (long *)0x0;
  uStack_e0 = 0x3f800000;
  func_0x000107c291ac(&uStack_100);
  func_0x0001006b5f20();
  plVar12 = plStack_f0;
  for (lVar26 = extraout_x8_03 << 3; plStack_f0 = plVar12, lVar26 != 0; lVar26 = lVar26 + -8) {
    uStack_108 = *(undefined8 *)(*plVar18 + 0x10);
    func_0x00010867b28c(&uStack_100,&uStack_108);
    plVar18 = plVar18 + 1;
    plVar12 = plStack_f0;
  }
  uVar11 = 0;
  for (plVar18 = plVar12; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
    uVar11 = uVar11 + 1;
  }
  plVar18 = plVar12;
  if ((ulong)(lStack_c0 - lStack_d0 >> 3) < uVar11) {
    func_0x00010065ae44(&lStack_d0);
    plVar12 = &lStack_d0;
    FUN_10065b998(plVar12,uVar11);
    FUN_10065bb24(&lStack_d0,plVar12);
LAB_1006b56cc:
    func_0x000107c2921c(&lStack_d0,plVar18);
  }
  else {
    uVar22 = lStack_c8 - lStack_d0 >> 3;
    if (uVar22 < uVar11) {
      while (0 < (long)uVar22) {
        uVar22 = uVar22 - 1;
        plVar18 = (long *)*plVar18;
      }
      func_0x000107c29220(plVar12,plVar18);
      goto LAB_1006b56cc;
    }
    func_0x000107c29220(plVar12,0);
    lStack_c8 = (long)plVar12;
  }
  func_0x0001006b5f14();
  func_0x00010867bb84(&uStack_100);
  func_0x000107c29f80(&uStack_100,*param_1,param_3,&lStack_d0,0);
  if ((ulong)(lStack_c8 - lStack_d0 >> 3) <=
      (ulong)((CONCAT44(uStack_f4,iStack_f8) - CONCAT44(uStack_fc,uStack_100)) / 0x1a8)) {
    uVar13 = param_1[2];
    FUN_100671198(uVar13);
    uVar22 = CONCAT44(uStack_f4,iStack_f8);
    for (uVar11 = CONCAT44(uStack_fc,uStack_100); uVar11 != uVar22; uVar11 = uVar11 + 0x1a8) {
      uVar14 = uVar11;
      func_0x000107c29df0(uVar11,uVar13);
      if ((uVar14 & 1) != 0) {
        ppuVar10 = &PTR_PTR_11326cb58;
        if (*(undefined ***)(uVar11 + 0x68) != (undefined **)0x0) {
          ppuVar10 = *(undefined ***)(uVar11 + 0x68);
        }
        uVar14 = *param_1 + 0x40;
        FUN_1006933e4(uVar14,ppuVar10);
        if ((uVar14 & 1) != 0) break;
      }
    }
    func_0x0001006b5f14();
  }
  func_0x00010867b9fc(&uStack_100);
  FUN_1006573e4(&lStack_d0);
LAB_1006b544c:
  FUN_1006b68d0(extraout_x8,auStack_6c0,auStack_6e0,&lStack_700,&uStack_3f0,iVar23 == 1,uVar25,
                puVar15,iStack_9c4);
  FUN_10066f12c(auStack_9a0);
  FUN_10066d68c(auStack_980);
  FUN_1006b6db8(&uStack_880);
  FUN_1006b6d94(&uStack_8a0);
  FUN_1005fce88(auStack_860);
  FUN_1006b6dec(&uStack_840);
  FUN_1006b6e3c(auStack_820);
  func_0x0001005fb56c(auStack_758);
  func_0x0001005fb56c(&uStack_740);
  func_0x0001005fb56c(&uStack_720);
  FUN_1006b6e5c(&lStack_700);
  FUN_1001148fc(auStack_6e0);
  FUN_100100fec(auStack_6c0);
  FUN_1005fce88(&uStack_3d0);
  FUN_10066d68c(&uStack_1f0);
  FUN_10066df80(auStack_5d8);
  FUN_10066dfc8(&uStack_3b0);
  FUN_1006b6e3c(auStack_538);
  func_0x0001005fb56c(&uStack_470);
  func_0x0001005fb56c(&uStack_450);
  FUN_1006b6dec(&uStack_430);
  FUN_1006b6e5c(&lStack_410);
  return;
}



/* Entry: 1006b472c; end: 1006b5a73;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1006b472c(undefined8 param_1,ulong *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  undefined1 uVar16;
  uint extraout_w8;
  uint uVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *plVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  undefined8 uVar24;
  ulong uVar25;
  long *unaff_x26;
  long unaff_x27;
  long lVar26;
  long lVar27;
  int iStack_974;
  undefined1 auStack_950 [32];
  undefined1 auStack_930 [224];
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined1 uStack_818;
  undefined1 auStack_810 [32];
  ulong uStack_7f0;
  ulong *puStack_7e8;
  ulong *puStack_7e0;
  undefined1 auStack_7d0 [200];
  undefined1 auStack_708 [24];
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  long lStack_6b0;
  ulong *puStack_6a8;
  ulong *puStack_6a0;
  undefined1 auStack_690 [24];
  undefined1 uStack_678;
  undefined1 auStack_670 [24];
  undefined1 auStack_658 [88];
  undefined1 auStack_600 [120];
  undefined1 auStack_588 [24];
  undefined1 uStack_570;
  byte bStack_538;
  ulong uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  byte bStack_518;
  uint auStack_4e8 [48];
  undefined1 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  ulong uStack_3e0;
  ulong *puStack_3d8;
  ulong *apuStack_3d0 [2];
  long lStack_3c0;
  ulong *puStack_3b8;
  ulong *puStack_3b0;
  ulong uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 uStack_388;
  ulong uStack_380;
  undefined8 uStack_378;
  long lStack_370;
  undefined1 uStack_368;
  ulong uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  char cStack_348;
  byte bStack_2f0;
  byte bStack_288;
  ulong uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  byte bStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  long lStack_190;
  char cStack_188;
  undefined1 uStack_c8;
  undefined8 uStack_b8;
  uint uStack_b0;
  uint uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  long *plStack_a0;
  undefined8 uStack_98;
  uint uStack_90;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar26 = (long)*(int *)(param_3 + 0x38) + (long)*(int *)(param_3 + 0x20);
  iVar23 = (int)lVar26;
  if (*(char *)(param_3 + 0x101) == '\0') {
    iVar23 = *(int *)(param_3 + 0x20);
  }
  puStack_3b8 = (ulong *)0x0;
  lStack_3c0 = 0;
  puStack_3b0 = (ulong *)0x0;
  FUN_1006b46d4(&lStack_3c0,(long)iVar23);
  func_0x0001006b5db8();
  for (; unaff_x27 != 0; unaff_x27 = unaff_x27 + -8) {
    lVar27 = *unaff_x26;
    func_0x0001006b5dd0(*(undefined8 *)(lVar27 + 0x18));
    func_0x0001006b5ddc();
    uStack_360 = CONCAT44(uStack_360._4_4_,*(undefined4 *)(lVar27 + 0x20));
    auStack_4e8[0] = *(uint *)(lVar27 + 0x58);
    if (puStack_3b8 < puStack_3b0) {
      func_0x0001006b5de4();
      puVar9 = puStack_3b8 + 4;
    }
    else {
      func_0x000107c32850((long)puStack_3b8 - lStack_3c0 >> 5);
      func_0x0001006b5e64();
      func_0x000107c32848();
      func_0x0001006b5de4(lStack_190);
      lStack_190 = lStack_190 + 0x20;
      func_0x000107c3284c();
      puVar9 = puStack_3b8;
      FUN_1006b5d48(&uStack_1a0);
    }
    puStack_3b8 = puVar9;
    func_0x0001006b5e5c();
    unaff_x26 = unaff_x26 + 1;
  }
  puStack_3d8 = (ulong *)0x0;
  uStack_3e0 = 0;
  apuStack_3d0[0] = (ulong *)0x0;
  func_0x0001006b5e64();
  puVar15 = (ulong *)(lVar26 - (extraout_x8 >> 5));
  puVar9 = &uStack_3e0;
  FUN_1006b5e74();
  func_0x0001006b5db8();
  for (lVar26 = 0; lVar26 != 0; lVar26 = lVar26 + -8) {
    lVar27 = *unaff_x26;
    if (*(char *)(lVar27 + 0x20) == '\x01') {
      func_0x0001006b5dd0(*(undefined8 *)(lVar27 + 0x18));
      func_0x0001006b5ddc();
      if (puStack_3b8 < puStack_3b0) {
        puVar15 = &uStack_280;
        func_0x000107c29224();
        puVar9 = puStack_3b8;
        puStack_3b8 = puStack_3b8 + 4;
      }
      else {
        func_0x000107c32850((long)puStack_3b8 - lStack_3c0 >> 5);
        func_0x0001006b5e64();
        func_0x000107c32848();
        puVar15 = &uStack_280;
        func_0x000107c29224(lStack_190);
        lStack_190 = lStack_190 + 0x20;
        func_0x000107c3284c();
        puVar4 = puStack_3b8;
        puVar9 = &uStack_1a0;
        FUN_1006b5d48();
        puStack_3b8 = puVar4;
      }
    }
    else {
      func_0x0001006b5dd0(*(undefined8 *)(lVar27 + 0x18));
      func_0x0001006b5ddc();
      if (puStack_3d8 < apuStack_3d0[0]) {
        puVar15 = &uStack_280;
        func_0x000107c29228();
        puVar9 = puStack_3d8;
        puStack_3d8 = puStack_3d8 + 3;
      }
      else {
        puVar9 = &uStack_3e0;
        func_0x000105282d18(puVar9,(long)((long)puStack_3d8 - uStack_3e0) / 0x18 + 1);
        func_0x000105282ba8(&uStack_1a0,puVar9,(long)((long)puStack_3d8 - uStack_3e0) / 0x18,
                            apuStack_3d0);
        func_0x000107c29228(lStack_190,&uStack_280);
        lStack_190 = lStack_190 + 0x18;
        puVar15 = &uStack_1a0;
        func_0x000105282b68(&uStack_3e0);
        puVar4 = puStack_3d8;
        puVar9 = &uStack_1a0;
        func_0x000105282cac();
        puStack_3d8 = puVar4;
      }
    }
    func_0x0001006b5e5c();
    unaff_x26 = unaff_x26 + 1;
  }
  uVar21 = *(uint *)(param_3 + 0x10);
  if ((uVar21 >> 3 & 1) == 0) {
    uVar25 = 0;
    puVar15 = (ulong *)0x0;
    iStack_974 = 0;
  }
  else {
    lVar26 = *(long *)(param_3 + 0x80);
    uVar1 = *(uint *)(lVar26 + 0x10);
    if ((uVar1 & 1) == 0) {
      puVar15 = (ulong *)0x0;
      uVar11 = 0;
      uVar25 = (ulong)*(uint *)(lVar26 + 0x54);
      if (2 < *(uint *)(lVar26 + 0x54) - 1) {
        uVar25 = 0;
      }
    }
    else {
      func_0x0001006b5ee4(*(undefined8 *)(*(long *)(lVar26 + 0x48) + 0x18));
      uVar11 = (ulong)puVar9 & 0xffffffff00000000;
      uVar25 = (ulong)puVar9 & 0xffffffff;
    }
    uVar25 = uVar25 | uVar11;
    iStack_974 = *(int *)(lVar26 + 0x50);
    if (2 < iStack_974 - 1U) {
      iStack_974 = 0;
    }
    if ((uVar1 & 1) != 0) {
      func_0x0001006b5ee4(*(undefined8 *)(*(long *)(lVar26 + 0x48) + 0x20));
    }
  }
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3f0 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_410 = 0;
  func_0x0001006b5f14(*(undefined8 *)(param_3 + 0x80));
  if ((uVar21 >> 3 & 1) != 0) {
    func_0x0001006b5f20();
    puVar3 = (undefined8 *)(ulong)uVar21;
    for (lVar26 = extraout_x8_00 << 3; lVar26 != 0; lVar26 = lVar26 + -8) {
      FUN_100696384(&uStack_1a0,*puVar3);
      FUN_10069c690(&uStack_400,&uStack_1a0);
      FUN_100100fec(&uStack_1a0);
      puVar3 = puVar3 + 1;
    }
    func_0x0001006b5f34();
    func_0x0001006b5f20();
    for (lVar26 = extraout_x8_01 << 3; lVar26 != 0; lVar26 = lVar26 + -8) {
      FUN_100696384(&uStack_1a0,*puVar3);
      FUN_10069c690(&uStack_420,&uStack_1a0);
      FUN_100100fec(&uStack_1a0);
      puVar3 = puVar3 + 1;
    }
    uVar21 = *(uint *)(param_3 + 0x10);
  }
  if (((uVar21 >> 5 & 1) == 0) ||
     (lVar26 = *(long *)(param_3 + 0x90), (*(byte *)(lVar26 + 0x10) & 1) == 0)) {
    auStack_4e8[0] = auStack_4e8[0] & 0xffffff00;
    uStack_428 = 0;
  }
  else {
    auStack_588[0] = 0;
    uStack_570 = 0;
    lVar27 = lVar26;
    FUN_1006b76b8(lVar26,*param_2 + 0x40);
    if ((int)lVar27 != 0) {
      uStack_530 = uStack_530 & 0xffffffffffffff00;
      bStack_518 = 0;
      FUN_100694e94(&uStack_1a0,*param_2,param_4);
      func_0x0001005f7178(&uStack_280,&uStack_1a0);
      func_0x000107c60ee4(&uStack_360,0xe0);
      while ((((bStack_1a8 & 1) != 0 || ((bStack_288 & 1) != 0)) && (uStack_280 != uStack_360))) {
        puVar9 = &uStack_280;
        func_0x0001086a10f8();
        if ((puVar9[0x17] != puVar9[0x18]) && ((int)puVar9[0xe] == 0x11)) {
          if (bStack_518 == 1) {
            FUN_10054f8dc(&uStack_380);
            iStack_a8 = (int)uStack_378;
            uStack_a4 = (undefined4)((ulong)uStack_378 >> 0x20);
            uStack_b0 = (uint)uStack_380;
            uStack_ac = (uint)(uStack_380 >> 0x20);
            plStack_a0 = (long *)lStack_370;
            lStack_370 = 0;
            uStack_378 = 0;
            uStack_380 = 0;
            func_0x00010065acbc(&uStack_530,&uStack_b0);
            FUN_100100fec(&uStack_b0);
            FUN_100100fec(&uStack_380);
          }
          else {
            func_0x000107c290e8(&uStack_530);
            bStack_518 = 1;
          }
        }
        FUN_1005f6ee0(&uStack_280);
      }
      func_0x000107c3283c(&uStack_360);
      func_0x000107c3283c(&uStack_280);
      FUN_1005f73e4(&uStack_1a0);
      if ((bStack_518 & 1) == 0) {
        func_0x000107c2a038(&uStack_1a0,*param_2,param_4);
        if ((cStack_188 == '\x01') &&
           (CONCAT71(uStack_1a0._1_7_,(undefined1)uStack_1a0) != lStack_198)) {
          FUN_10054f8dc(&uStack_360,&uStack_1a0);
          uVar5 = uStack_350;
          uVar24 = uStack_358;
          uVar11 = uStack_360;
          uStack_280 = uStack_360;
          uStack_278 = uStack_358;
          uStack_270 = uStack_350;
          uStack_358 = 0;
          uStack_360 = 0;
          uStack_350 = 0;
          if (bStack_518 == 1) {
            func_0x00010065acbc(&uStack_530,&uStack_280);
          }
          else {
            uStack_530 = uVar11;
            uStack_528 = uVar24;
            uStack_520 = uVar5;
            uStack_270 = 0;
            uStack_280 = 0;
            uStack_278 = 0;
            bStack_518 = 1;
          }
          func_0x0001006b5e5c();
          FUN_100100fec(&uStack_360);
        }
        FUN_1002a2294(&uStack_1a0);
      }
      func_0x00010869cf4c(auStack_588,&uStack_530);
      func_0x0001006b7be8(&uStack_530);
    }
    ppuVar10 = &PTR_PTR_11326af28;
    if (*(undefined ***)(lVar26 + 0x20) != (undefined **)0x0) {
      ppuVar10 = *(undefined ***)(lVar26 + 0x20);
    }
    if (*(int *)((long)ppuVar10 + 0x24) == 2) {
      ppuVar10 = (undefined **)ppuVar10[3];
    }
    else {
      ppuVar10 = &PTR_PTR_11326aee0;
    }
    FUN_1006b7758(&uStack_360,ppuVar10);
    uStack_530 = uStack_530 & 0xffffffffffffff00;
    bStack_518 = 0;
    if (cStack_348 == '\x01') {
      FUN_1006b77dc(&uStack_1a0,param_4,lVar26,param_2 + 6);
      func_0x000100602604(&uStack_530,&uStack_1a0);
      func_0x000107c60ca0(&uStack_1a0);
    }
    FUN_1006b78fc(&uStack_b0,&uStack_360);
    FUN_1006b7938(&uStack_380,auStack_588);
    uStack_3a0 = uStack_3a0 & 0xffffffffffffff00;
    uStack_388 = bStack_518 == 1;
    if ((bool)uStack_388) {
      uStack_398 = uStack_528;
      uStack_3a0 = uStack_530;
      uStack_390 = uStack_520;
      uStack_520 = 0;
      uStack_530 = 0;
      uStack_528 = 0;
    }
    FUN_1006b7970(&uStack_280,lVar26);
    uVar24 = *(undefined8 *)(lVar26 + 0x30);
    func_0x0001006b5dd0(*(undefined8 *)(lVar26 + 0x18));
    FUN_100696384(&lStack_80);
    ppuVar10 = &PTR_PTR_11326af10;
    if (*(undefined ***)(lVar26 + 0x28) != (undefined **)0x0) {
      ppuVar10 = *(undefined ***)(lVar26 + 0x28);
    }
    FUN_1006b7aac(&uStack_1a0,&uStack_b0,&uStack_380,&uStack_3a0,&uStack_280,uVar24,&lStack_80,
                  *(undefined1 *)(lVar26 + 0x38),*(undefined4 *)(ppuVar10 + 2));
    FUN_100100fec(&lStack_80);
    func_0x0001006b7bc8(&uStack_280);
    FUN_1001148fc(&uStack_3a0);
    func_0x0001006b7be8(&uStack_380);
    FUN_1002a2294(&uStack_b0);
    FUN_1006b7c9c(auStack_4e8,&uStack_1a0);
    FUN_1006b7cb8(&uStack_1a0);
    FUN_1001148fc(&uStack_530);
    FUN_1002a2294(&uStack_360);
    func_0x0001006b7be8(auStack_588);
  }
  (**(code **)(*(long *)param_2[4] + 0x18))(&uStack_530,(long *)param_2[4],param_3,param_4);
  if ((char)param_2[0xe] == '\x01') {
    func_0x000107c29fa0(*param_2,param_4);
  }
  func_0x0001006b5f34();
  uVar11 = (ulong)*(uint *)(param_3 + 0x104);
  func_0x00010069c264();
  uStack_360 = uStack_360 & 0xffffffffffffff00;
  bStack_2f0 = 0;
  auStack_588[0] = 0;
  bStack_538 = 0;
  iVar23 = (int)uVar11;
  uVar11 = uVar11 >> 0x20;
  if ((uVar11 == 0) || (iVar23 != 5 && iVar23 != 2)) {
    if ((uVar11 == 0) || (iVar23 != 7)) goto LAB_1006b4fcc;
    func_0x0001006b5f14(*(undefined1 *)(param_3 + 0x11));
    if ((extraout_w8 >> 4 & 1) != 0) {
      func_0x000107c29e34(&uStack_1a0,*(undefined8 *)(param_3 + 200));
      func_0x000107c29208(auStack_588,&uStack_1a0);
      func_0x000104be1234(&uStack_1a0);
    }
    lVar26 = 0;
    uVar22 = 0;
  }
  else {
    FUN_10066ca48(&uStack_1a0,param_4,param_2,(long)param_2 + 0x74);
    FUN_1006b7d24(&uStack_360,&uStack_1a0);
    FUN_10066dfc8(&uStack_1a0);
LAB_1006b4fcc:
    uVar22 = 0;
    lVar26 = 0;
    if (uVar11 == 0) {
      func_0x0001006b5f14();
    }
    else if (iVar23 == 2) {
      uVar22 = *param_2;
      FUN_1006b7dc4(uVar22,param_2[10],param_4);
      uVar22 = uVar22 & 0xffffffff;
      lVar26 = 1;
    }
  }
  uStack_1a0._0_1_ = 0;
  uStack_c8 = 0;
  if ((((bStack_2f0 & 1) != 0) || ((bStack_538 & 1) != 0)) || ((int)lVar26 != 0)) {
    FUN_10066dd50(auStack_600,&uStack_360);
    FUN_10066dd94(auStack_658,auStack_588);
    func_0x00010066ddd8(&uStack_280,auStack_600,auStack_658,uVar22 | lVar26 << 8);
    FUN_10066dee8(&uStack_1a0,&uStack_280);
    FUN_10066dfa0(&uStack_280);
    FUN_10066df80(auStack_658);
    FUN_10066dfc8(auStack_600);
  }
  uStack_380 = uStack_380 & 0xffffffffffffff00;
  uStack_368 = 0;
  if (*(char *)(param_3 + 0x10) < '\0') {
    func_0x0001006b5ddc(*(undefined8 *)(param_3 + 0xa0));
    func_0x00010869026c(&uStack_380,&uStack_280);
    func_0x0001006b5e5c();
  }
  FUN_10054f8dc(auStack_670,param_4);
  uVar11 = *(ulong *)(param_3 + 0x60) & 0xfffffffffffffffc;
  cVar2 = *(char *)(uVar11 + 0x17);
  if (cVar2 < '\0') {
    if (*(long *)(uVar11 + 8) == 0) goto LAB_1006b50dc;
LAB_1006b50c8:
    func_0x0001002a8308(auStack_690);
  }
  else {
    if (cVar2 != '\0') goto LAB_1006b50c8;
LAB_1006b50dc:
    auStack_690[0] = 0;
    uStack_678 = 0;
  }
  puStack_6a8 = puStack_3b8;
  lStack_6b0 = lStack_3c0;
  puStack_6a0 = puStack_3b0;
  puStack_3b0 = (ulong *)0x0;
  puStack_3b8 = (ulong *)0x0;
  lStack_3c0 = 0;
  ppuVar10 = &PTR_PTR_11326be88;
  if (*(undefined ***)(param_3 + 0x70) != (undefined **)0x0) {
    ppuVar10 = *(undefined ***)(param_3 + 0x70);
  }
  func_0x0001006b612c(&uStack_3a0,ppuVar10,*(undefined4 *)(param_3 + 0xf0));
  iVar23 = *(int *)(param_3 + 0xf0);
  uStack_6c8 = uStack_3f8;
  uStack_6d0 = uStack_400;
  uStack_6c0 = uStack_3f0;
  uStack_3f0 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_6e8 = uStack_418;
  uStack_6f0 = uStack_420;
  uStack_6e0 = uStack_410;
  uStack_420 = 0;
  uStack_418 = 0;
  uStack_410 = 0;
  func_0x0001005fad5c(auStack_708,param_6);
  FUN_1006b618c(auStack_7d0,auStack_4e8);
  puStack_7e8 = puStack_3d8;
  uStack_7f0 = uStack_3e0;
  puStack_7e0 = apuStack_3d0[0];
  apuStack_3d0[0] = (ulong *)0x0;
  puStack_3d8 = (ulong *)0x0;
  uStack_3e0 = 0;
  func_0x000107c610b4(&uStack_280,&uStack_530,0x48);
  func_0x0001006b61c0();
  func_0x0001006b5f34();
  FUN_1006b61e4();
  FUN_100606fd8(auStack_810,&uStack_380);
  FUN_1006b6230(&uStack_850,param_3);
  uStack_828 = uStack_848;
  uStack_830 = uStack_850;
  uStack_820 = uStack_840;
  uStack_840 = 0;
  uStack_848 = 0;
  uStack_850 = 0;
  uStack_818 = 1;
  FUN_10066f670(auStack_930,&uStack_1a0);
  FUN_1006b6594(auStack_950,param_3);
  (**(code **)(*(long *)param_2[8] + 0x18))();
  FUN_10066d6d8(&uStack_b0,*param_2,param_4);
  uVar1 = uStack_90;
  cVar2 = (char)uStack_90;
  uVar21 = (uint)uStack_98;
  FUN_10066dc24(&uStack_b0);
  uVar11 = param_2[0xc];
  if (uVar11 == 0) {
    uVar17 = 0;
    iVar20 = 0;
    uVar19 = 0;
    iVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    if ((uVar1 & 1) == 0) goto LAB_1006b52f0;
LAB_1006b5300:
    iStack_a8 = iVar6;
    if (cVar2 == '\0') {
      uVar21 = 0;
    }
    uStack_ac = uVar19 | uVar17;
    uVar16 = 1;
    uStack_b0 = uVar21;
  }
  else {
    FUN_1006b685c(uVar11,param_4);
    iVar20 = (int)(uVar11 >> 0x20);
    uVar19 = (uint)uVar11 & 0xffffff00;
    uVar17 = (uint)uVar11 & 0xff;
    iVar6 = iVar20;
    uVar7 = uVar19;
    uVar8 = uVar17;
    if ((uVar1 & 1) != 0) goto LAB_1006b5300;
LAB_1006b52f0:
    uVar17 = uVar8;
    uVar19 = uVar7;
    iVar6 = iVar20;
    if (iVar20 != 0) goto LAB_1006b5300;
    uVar16 = 0;
    uStack_b0 = uStack_b0 & 0xffffff00;
  }
  uStack_a4 = CONCAT31(uStack_a4._1_3_,uVar16);
  plVar18 = (long *)CONCAT44(uStack_ac,uStack_b0);
  lVar26 = param_3;
  FUN_1006b61e4();
  if ((int)lVar26 != 2) {
    if ((((int)lVar26 == 0) && (*(int *)(param_3 + 0xf0) == 1)) && ((char)param_2[0x1f] == '\x01'))
    {
      FUN_10056337c();
    }
    goto LAB_1006b544c;
  }
  if ((char)param_2[0x18] != '\x01') goto LAB_1006b544c;
  puVar9 = param_2 + 0x10;
  func_0x000108679cf0();
  if (((long)*puVar9 < 1) || (*(int *)(param_3 + 0x50) == 0)) goto LAB_1006b544c;
  lStack_80 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  iStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_98 = 0;
  plStack_a0 = (long *)0x0;
  uStack_90 = 0x3f800000;
  func_0x000107c291ac(&uStack_b0);
  func_0x0001006b5f20();
  plVar12 = plStack_a0;
  for (lVar26 = extraout_x8_02 << 3; plStack_a0 = plVar12, lVar26 != 0; lVar26 = lVar26 + -8) {
    uStack_b8 = *(undefined8 *)(*plVar18 + 0x10);
    func_0x00010867b28c(&uStack_b0,&uStack_b8);
    plVar18 = plVar18 + 1;
    plVar12 = plStack_a0;
  }
  uVar11 = 0;
  for (plVar18 = plVar12; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
    uVar11 = uVar11 + 1;
  }
  plVar18 = plVar12;
  if ((ulong)(lStack_70 - lStack_80 >> 3) < uVar11) {
    func_0x00010065ae44(&lStack_80);
    plVar12 = &lStack_80;
    FUN_10065b998(plVar12,uVar11);
    FUN_10065bb24(&lStack_80,plVar12);
LAB_1006b56cc:
    func_0x000107c2921c(&lStack_80,plVar18);
  }
  else {
    uVar22 = lStack_78 - lStack_80 >> 3;
    if (uVar22 < uVar11) {
      while (0 < (long)uVar22) {
        uVar22 = uVar22 - 1;
        plVar18 = (long *)*plVar18;
      }
      func_0x000107c29220(plVar12,plVar18);
      goto LAB_1006b56cc;
    }
    func_0x000107c29220(plVar12,0);
    lStack_78 = (long)plVar12;
  }
  func_0x0001006b5f14();
  func_0x00010867bb84(&uStack_b0);
  func_0x000107c29f80(&uStack_b0,*param_2,param_4,&lStack_80,0);
  if ((ulong)(lStack_78 - lStack_80 >> 3) <=
      (ulong)((CONCAT44(uStack_a4,iStack_a8) - CONCAT44(uStack_ac,uStack_b0)) / 0x1a8)) {
    uVar13 = param_2[2];
    FUN_100671198(uVar13);
    uVar22 = CONCAT44(uStack_a4,iStack_a8);
    for (uVar11 = CONCAT44(uStack_ac,uStack_b0); uVar11 != uVar22; uVar11 = uVar11 + 0x1a8) {
      uVar14 = uVar11;
      func_0x000107c29df0(uVar11,uVar13);
      if ((uVar14 & 1) != 0) {
        ppuVar10 = &PTR_PTR_11326cb58;
        if (*(undefined ***)(uVar11 + 0x68) != (undefined **)0x0) {
          ppuVar10 = *(undefined ***)(uVar11 + 0x68);
        }
        uVar14 = *param_2 + 0x40;
        FUN_1006933e4(uVar14,ppuVar10);
        if ((uVar14 & 1) != 0) break;
      }
    }
    func_0x0001006b5f14();
  }
  func_0x00010867b9fc(&uStack_b0);
  FUN_1006573e4(&lStack_80);
LAB_1006b544c:
  FUN_1006b68d0(param_1,auStack_670,auStack_690,&lStack_6b0,&uStack_3a0,iVar23 == 1,uVar25,puVar15,
                iStack_974);
  FUN_10066f12c(auStack_950);
  FUN_10066d68c(auStack_930);
  FUN_1006b6db8(&uStack_830);
  FUN_1006b6d94(&uStack_850);
  FUN_1005fce88(auStack_810);
  FUN_1006b6dec(&uStack_7f0);
  FUN_1006b6e3c(auStack_7d0);
  func_0x0001005fb56c(auStack_708);
  func_0x0001005fb56c(&uStack_6f0);
  func_0x0001005fb56c(&uStack_6d0);
  FUN_1006b6e5c(&lStack_6b0);
  FUN_1001148fc(auStack_690);
  FUN_100100fec(auStack_670);
  FUN_1005fce88(&uStack_380);
  FUN_10066d68c(&uStack_1a0);
  FUN_10066df80(auStack_588);
  FUN_10066dfc8(&uStack_360);
  FUN_1006b6e3c(auStack_4e8);
  func_0x0001005fb56c(&uStack_420);
  func_0x0001005fb56c(&uStack_400);
  FUN_1006b6dec(&uStack_3e0);
  FUN_1006b6e5c(&lStack_3c0);
  return;
}



/* Entry: 1006b5a74; end: 1006b5ae7;  */

void FUN_1006b5a74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  FUN_1006b472c();
  if (*(int *)(param_1 + 0x200) == 0) {
    FUN_1006b6f8c(param_2,param_4,0);
  }
  else {
    func_0x000107c29204(param_2,param_1);
    uVar1 = 2;
    if ((int)param_2 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x200);
    }
    *(undefined4 *)(param_1 + 0x200) = uVar1;
  }
  return;
}



/* Entry: 1006b5ae8; end: 1006b5b07;  */

void FUN_1006b5ae8(void)

{
  return;
}



/* Entry: 1006b5b08; end: 1006b5b47;  */

void FUN_1006b5b08(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001006b5af8();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_1006b5b64();
  }
  lVar1 = param_4 + unaff_x20 * 0x20;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x20;
  return;
}



/* Entry: 1006b5b48; end: 1006b5b63;  */

void FUN_1006b5b48(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  FUN_1006b5b48();
  return;
}



/* Entry: 1006b5b64; end: 1006b5b83;  */

void FUN_1006b5b64(void)

{
  FUN_1006b5b48();
  return;
}



/* Entry: 1006b5b84; end: 1006b5ba7;  */

void FUN_1006b5b84(void)

{
  return;
}



/* Entry: 1006b5ba8; end: 1006b5bdb;  */

void FUN_1006b5ba8(long *param_1)

{
  long extraout_x8;
  
  func_0x0001006b5b98();
  FUN_1006b5bdc(param_1 + 2,*param_1,param_1[1],extraout_x8 + (*param_1 - param_1[1]));
  FUN_1006b5ce8();
  return;
}



/* Entry: 1006b5bdc; end: 1006b5c7f;  */

void FUN_1006b5bdc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x20) {
    func_0x000105282b10(param_4,lVar1);
    param_4 = lStack_38 + 0x20;
  }
  uStack_48 = 1;
  FUN_1006b5c80(param_1,param_2,param_3);
  FUN_1006b5cb8(&uStack_60);
  return;
}



/* Entry: 1006b5c80; end: 1006b5caf;  */

void FUN_1006b5c80(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    FUN_100100fec();
  }
  return;
}



/* Entry: 1006b5cb0; end: 1006b5cb7;  */

void FUN_1006b5cb0(void)

{
  return;
}



/* Entry: 1006b5cb8; end: 1006b5ce7;  */

long FUN_1006b5cb8(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x000104be0b24(param_1);
  }
  return param_1;
}



/* Entry: 1006b5ce8; end: 1006b5d47;  */

void FUN_1006b5ce8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  unaff_x19[1] = unaff_x21;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1006b5d48; end: 1006b5dab;  */

long * FUN_1006b5d48(long *param_1)

{
  func_0x0001006b5d40();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 1006b5dac; end: 1006b5e0b;  */

void FUN_1006b5dac(void)

{
  return;
}



/* Entry: 1006b5e0c; end: 1006b5e4f;  */

void FUN_1006b5e0c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 extraout_x8;
  undefined8 in_register_00005008;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001006b5df4();
  uVar1 = *param_4;
  uVar2 = *param_5;
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  param_2[2] = extraout_x8;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  *(undefined4 *)(param_2 + 3) = uVar1;
  *(undefined4 *)((long)param_2 + 0x1c) = uVar2;
  FUN_100100fec(&uStack_38);
  return;
}



/* Entry: 1006b5e50; end: 1006b5e73;  */

void FUN_1006b5e50(void)

{
  return;
}



/* Entry: 1006b5e74; end: 1006b5ee3;  */

undefined1  [16] FUN_1006b5e74(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  long extraout_x8;
  long extraout_x9;
  long unaff_x26;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auStack_48 [40];
  
  func_0x0001006b46c0();
  if ((ulong)(extraout_x9 / 0x18) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      func_0x000104be0f08();
      func_0x000105282e00();
      func_0x000105282dec();
      if (extraout_x8 != 0) {
        unaff_x26 = extraout_x8;
      }
      uVar2 = *(int *)(unaff_x26 + 0x18) - 1;
      lVar1 = 0;
      if (uVar2 < 3) {
        lVar1 = (ulong)uVar2 + 1;
      }
      auVar4._8_8_ = *(long *)(unaff_x26 + 0x10) * 60000;
      auVar4._0_8_ = lVar1;
      return auVar4;
    }
    FUN_1006b5ae8();
    param_1 = auStack_48;
    func_0x000105282ba8(param_1);
    func_0x0001006b5b8c();
    func_0x000105282b68();
    func_0x000105282e00();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1006b5ee4; end: 1006b5f43;  */

undefined1  [16] FUN_1006b5ee4(long param_1)

{
  long lVar1;
  uint uVar2;
  long unaff_x26;
  undefined1 auVar3 [16];
  
  if (param_1 != 0) {
    unaff_x26 = param_1;
  }
  uVar2 = *(int *)(unaff_x26 + 0x18) - 1;
  lVar1 = 0;
  if (uVar2 < 3) {
    lVar1 = (ulong)uVar2 + 1;
  }
  auVar3._8_8_ = *(long *)(unaff_x26 + 0x10) * 60000;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 1006b5f44; end: 1006b603b;  */

void FUN_1006b5f44(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined1 uVar5;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  long unaff_x21;
  undefined1 auStack_108 [72];
  undefined1 auStack_c0 [64];
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined8 uStack_48;
  
  func_0x00010066f7f8();
  auStack_c0[0] = 0;
  uStack_80 = 0;
  uStack_78 = 0x1006b6124;
  ppuStack_70 = &PTR_DAT_110a7a100;
  puStack_58 = auStack_c0;
  uStack_68 = param_1;
  uStack_60 = param_3;
  uStack_48 = extraout_x8;
  FUN_10066f8fc();
  if ((int)param_1 == 0) {
    uVar1 = *(undefined8 *)(unaff_x21 + 8);
    FUN_100671198(uVar1);
    FUN_1006b603c(auStack_108,param_2,uVar1,*(undefined8 *)(unaff_x21 + 0x58));
    func_0x000100671370();
    func_0x000100671380();
    param_3 = *(undefined8 *)(unaff_x21 + 0x18);
    FUN_100671490();
    func_0x000100671504();
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[0x40] = 0;
  }
  puVar2 = &uStack_78;
  FUN_1005ed4a0();
  FUN_10067181c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  FUN_1005ed4a0(&uStack_78);
  func_0x000107c33ee8();
  puVar3 = puVar2;
  func_0x000104bd46a0();
  FUN_1006711d8();
  ppuVar4 = &PTR_PTR_11326c970;
  if ((undefined **)puVar3[0x11] != (undefined **)0x0) {
    ppuVar4 = (undefined **)puVar3[0x11];
  }
  FUN_1006b60b8(ppuVar4,param_3);
  if (((ulong)ppuVar4 & 1) == 0) {
    uVar5 = 0;
    *(undefined1 *)puVar2 = 0;
  }
  else {
    ppuVar4 = &PTR_PTR_11326c970;
    if (*(undefined ***)(param_2 + 0x88) != (undefined **)0x0) {
      ppuVar4 = *(undefined ***)(param_2 + 0x88);
    }
    func_0x000107c29d9c(puVar2,ppuVar4);
    uVar5 = 1;
  }
  *(undefined1 *)(puVar2 + 8) = uVar5;
  return;
}



/* Entry: 1006b603c; end: 1006b60b7;  */

void FUN_1006b603c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  undefined1 *unaff_x19;
  long unaff_x22;
  
  FUN_1006711d8();
  ppuVar1 = &PTR_PTR_11326c970;
  if (*(undefined ***)(param_1 + 0x88) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x88);
  }
  FUN_1006b60b8(ppuVar1,param_3);
  if (((ulong)ppuVar1 & 1) == 0) {
    uVar2 = 0;
    *unaff_x19 = 0;
  }
  else {
    ppuVar1 = &PTR_PTR_11326c970;
    if (*(undefined ***)(unaff_x22 + 0x88) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(unaff_x22 + 0x88);
    }
    func_0x000107c29d9c(ppuVar1);
    uVar2 = 1;
  }
  unaff_x19[0x40] = uVar2;
  return;
}



/* Entry: 1006b60b8; end: 1006b6113;  */

bool FUN_1006b60b8(long param_1,ulong param_2)

{
  bool bVar1;
  
  if ((((*(uint *)(param_1 + 0x10) & 1) == 0) && ((*(uint *)(param_1 + 0x10) >> 1 & 1) == 0)) ||
     (func_0x000107c29d98(), (param_2 & 1) == 0)) {
    bVar1 = (*(int *)(param_1 + 0x34) != 0 || *(int *)(param_1 + 0x30) != 0) ||
            (*(long *)(param_1 + 0x38) != 0 || *(long *)(param_1 + 0x28) != 0);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1006b6114; end: 1006b618b;  */

void FUN_1006b6114(void)

{
  return;
}



/* Entry: 1006b618c; end: 1006b61b7;  */

undefined1 * FUN_1006b618c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0xc0] = 0;
  func_0x0001006b6178();
  return param_1;
}



/* Entry: 1006b61b8; end: 1006b61e3;  */

void FUN_1006b61b8(void)

{
  return;
}



/* Entry: 1006b61e4; end: 1006b621b;  */

undefined4 FUN_1006b61e4(long param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x10) < '\0') {
    return 1;
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0x104);
  func_0x00010069c264();
  bVar1 = false;
  bVar2 = true;
  if (uVar3 >> 0x20 != 0) {
    bVar2 = 7 < (uint)uVar3;
    bVar1 = (uint)uVar3 == 8;
  }
  if (bVar2 && !bVar1) {
    return 0;
  }
  return *(undefined4 *)(&UNK_10df61c00 + (uVar3 & 0xf) * 4);
}



/* Entry: 1006b621c; end: 1006b622f;  */

undefined8 FUN_1006b621c(void)

{
  return 0;
}



/* Entry: 1006b6230; end: 1006b636b;  */

void FUN_1006b6230(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(int *)(param_2 + 0xf0) == 1) {
    func_0x0001006b6224();
  }
  else if (*(int *)(param_2 + 0xf0) == 0) {
    func_0x0001006b6224();
    func_0x0001006b6224();
  }
  ppuVar1 = &PTR_PTR_11327a950;
  if (*(undefined ***)(param_2 + 0xb0) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0xb0);
  }
  if (ppuVar1[3] == (undefined *)0x28de80) {
    func_0x0001006b6224();
  }
  else if (ppuVar1[3] == (undefined *)0x93a80) {
    func_0x0001006b6224();
  }
  ppuVar1 = &PTR_PTR_11327a978;
  if (*(undefined ***)(param_2 + 0xa8) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0xa8);
  }
  if (((ulong)ppuVar1[3] & 1) == 0) {
    ppuVar1 = &PTR_PTR_11326be88;
    if (*(undefined ***)(param_2 + 0x70) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_2 + 0x70);
    }
    if (*(int *)((long)ppuVar1 + 0x1c) == 1) {
      ppuVar1 = (undefined **)ppuVar1[2];
    }
    else {
      ppuVar1 = &PTR_PTR_11326be60;
    }
    if (*(char *)((long)ppuVar1 + 0x22) != '\x01') {
      return;
    }
  }
  func_0x0001006b6224();
  return;
}



/* Entry: 1006b636c; end: 1006b63af;  */

undefined4 * FUN_1006b636c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 2);
  if (puVar1 < *(undefined4 **)(param_1 + 4)) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_1006b63c4();
  }
  *(undefined4 **)(param_1 + 2) = puVar2;
  return puVar2 + -1;
}



/* Entry: 1006b63b0; end: 1006b63c3;  */

void FUN_1006b63b0(void)

{
  return;
}



/* Entry: 1006b63c4; end: 1006b642f;  */

undefined8 FUN_1006b63c4(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_48 [16];
  undefined4 *puStack_38;
  
  FUN_1006b63b0();
  FUN_1006b6430();
  FUN_1006b6470();
  FUN_1006b6480(auStack_48);
  *puStack_38 = *unaff_x20;
  puStack_38 = puStack_38 + 1;
  func_0x0001006b5b8c();
  FUN_1006b64fc();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_1006b6530();
  return uVar1;
}



/* Entry: 1006b6430; end: 1006b646f;  */

undefined1  [16] FUN_1006b6430(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3e == 0) {
    uVar1 = param_1[2] - *param_1 >> 1;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7ffffffffffffffb < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0x3fffffffffffffff;
    }
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = uVar1;
    return auVar2;
  }
  func_0x000104be1194();
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1006b6470; end: 1006b647f;  */

void FUN_1006b6470(void)

{
  return;
}



/* Entry: 1006b6480; end: 1006b64bf;  */

void FUN_1006b6480(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001006b5af8();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_1006b64dc();
  }
  lVar1 = param_4 + unaff_x20 * 4;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 4;
  return;
}



/* Entry: 1006b64c0; end: 1006b64db;  */

void FUN_1006b64c0(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3e == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  FUN_1006b64c0();
  return;
}



/* Entry: 1006b64dc; end: 1006b64fb;  */

void FUN_1006b64dc(void)

{
  FUN_1006b64c0();
  return;
}



/* Entry: 1006b64fc; end: 1006b652f;  */

void FUN_1006b64fc(long *param_1)

{
  long extraout_x8;
  
  func_0x0001006b5b98();
  func_0x000107c610b4(extraout_x8 - (param_1[1] - *param_1));
  FUN_1006b5ce8();
  return;
}



/* Entry: 1006b6530; end: 1006b653f;  */

undefined8 * FUN_1006b6530(void)

{
  long in_stack_00000008;
  
  func_0x0001006b6538();
  if (in_stack_00000008 != 0) {
    func_0x000107c60e14();
  }
  return &stack0x00000008;
}



/* Entry: 1006b6540; end: 1006b656b;  */

long * FUN_1006b6540(long *param_1)

{
  func_0x0001006b6538();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 1006b656c; end: 1006b6593;  */

void FUN_1006b656c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -4;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1006b6594; end: 1006b6617;  */

void FUN_1006b6594(undefined8 param_1,long param_2)

{
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  if ((*(byte *)(param_2 + 0x11) >> 3 & 1) == 0) {
    FUN_100696d50();
  }
  else {
    FUN_1006b78d8(*(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x18));
    func_0x000107c3403c();
    func_0x000107c34078();
    func_0x000107c33fe4();
    uStack_28 = 1;
    FUN_10066f4d0(param_1,auStack_40);
    FUN_1005fce88(auStack_40);
    func_0x000107c33fb8();
  }
  return;
}



/* Entry: 1006b6618; end: 1006b66f3;  */

long FUN_1006b6618(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = param_1[1];
  if ((uVar8 != 0) && (param_1[3] != 0)) {
    uVar3 = param_2;
    func_0x000107c29eec();
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      uVar10 = uVar3 & uVar9;
    }
    else {
      uVar10 = uVar3;
      if (uVar8 <= uVar3) {
        uVar1 = 0;
        uVar7 = (uint)uVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)uVar3 / uVar7;
        }
        uVar10 = (ulong)((uint)uVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + uVar10 * 8);
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        uVar5 = plVar6[1];
        if (uVar5 != uVar3) break;
        lVar4 = (long)(plVar6 + 2);
        FUN_1006760a8(lVar4,param_2);
        if ((int)lVar4 != 0) {
          return (long)plVar6;
        }
      }
      if ((uVar8 & uVar9) == 0) {
        uVar5 = uVar5 & uVar9;
      }
      else if (uVar8 <= uVar5) {
        uVar2 = 0;
        if (uVar8 != 0) {
          uVar2 = uVar5 / uVar8;
        }
        uVar5 = uVar5 - uVar2 * uVar8;
      }
    } while (uVar5 == uVar10);
  }
  return 0;
}



/* Entry: 1006b66f4; end: 1006b677f;  */

undefined1  [16] FUN_1006b66f4(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_48 [24];
  
  lVar1 = param_1 + 0x18;
  FUN_1006b6618();
  if (lVar1 != 0) {
    plVar6 = *(long **)(lVar1 + 0x28);
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x10))();
    if (plVar2 < plVar6) {
      uVar5 = (ulong)plVar6 & 0xffffffffffffff00;
      uVar4 = (ulong)plVar6 & 0xff;
      uVar3 = 1;
      goto LAB_1006b6768;
    }
    func_0x00010869f670(auStack_48,param_1 + 0x18,lVar1);
    func_0x00010869f78c();
  }
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = 0;
LAB_1006b6768:
  auVar7._0_8_ = uVar5 | uVar4;
  auVar7._8_8_ = uVar3;
  return auVar7;
}



/* Entry: 1006b6780; end: 1006b685b;  */

long FUN_1006b6780(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = param_1[1];
  if ((uVar8 != 0) && (param_1[3] != 0)) {
    uVar3 = param_2;
    func_0x000107c29eec();
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      uVar10 = uVar3 & uVar9;
    }
    else {
      uVar10 = uVar3;
      if (uVar8 <= uVar3) {
        uVar1 = 0;
        uVar7 = (uint)uVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)uVar3 / uVar7;
        }
        uVar10 = (ulong)((uint)uVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + uVar10 * 8);
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        uVar5 = plVar6[1];
        if (uVar3 != uVar5) break;
        lVar4 = (long)(plVar6 + 2);
        FUN_1006760a8(lVar4,param_2);
        if ((int)lVar4 != 0) {
          return (long)plVar6;
        }
      }
      if ((uVar8 & uVar9) == 0) {
        uVar5 = uVar5 & uVar9;
      }
      else if (uVar8 <= uVar5) {
        uVar2 = 0;
        if (uVar8 != 0) {
          uVar2 = uVar5 / uVar8;
        }
        uVar5 = uVar5 - uVar2 * uVar8;
      }
    } while (uVar5 == uVar10);
  }
  return 0;
}



/* Entry: 1006b685c; end: 1006b68c7;  */

ulong FUN_1006b685c(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  plVar1 = param_1 + 10;
  FUN_1006b6780();
  if (plVar1 != (long *)0x0) {
    param_1 = (long *)*param_1;
    (**(code **)(*param_1 + 0x10))();
    if ((long)param_1 < plVar1[7]) {
      uVar4 = *(uint *)(plVar1 + 5) & 0xffffff00;
      uVar3 = *(uint *)(plVar1 + 5) & 0xff;
      uVar2 = 0x100000000;
      goto LAB_1006b68b8;
    }
  }
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
LAB_1006b68b8:
  return uVar2 | (uVar4 | uVar3);
}



/* Entry: 1006b68c8; end: 1006b68cf;  */

void FUN_1006b68c8(void)

{
  return;
}



/* Entry: 1006b68d0; end: 1006b69d3;  */

long FUN_1006b68d0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  long lVar1;
  undefined8 extraout_x14;
  undefined8 extraout_x15;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined1 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined1 in_stack_000000d0;
  undefined4 in_stack_000000d4;
  undefined8 in_stack_000000d8;
  undefined1 uStack00000000000000e0;
  undefined1 uStack00000000000000e1;
  undefined4 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined1 uStack0000000000000138;
  undefined1 uStack0000000000000139;
  undefined4 in_stack_0000013c;
  undefined1 in_stack_00000140;
  
  lVar1 = param_1;
  FUN_1006b69d4(param_1,param_2);
  *(undefined1 *)(lVar1 + 0x18) = 0;
  *(undefined1 *)(lVar1 + 0x30) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    *(undefined8 *)(lVar1 + 0x28) = param_3[2];
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar2 = *param_4;
  *(undefined8 *)(param_1 + 0x40) = param_4[1];
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(param_1 + 0x58) = param_5[1];
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined4 *)(param_1 + 0x70) = param_6;
  *(undefined8 *)(param_1 + 0x78) = param_7;
  *(undefined8 *)(param_1 + 0x80) = param_8;
  *(undefined4 *)(param_1 + 0x88) = param_9;
  *(undefined8 *)(param_1 + 0x90) = extraout_x15;
  *(undefined8 *)(param_1 + 0x98) = extraout_x14;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  uVar2 = *in_stack_00000018;
  *(undefined8 *)(param_1 + 0xa8) = in_stack_00000018[1];
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = in_stack_00000018[2];
  *in_stack_00000018 = 0;
  in_stack_00000018[1] = 0;
  in_stack_00000018[2] = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  uVar2 = *in_stack_00000020;
  *(undefined8 *)(param_1 + 0xc0) = in_stack_00000020[1];
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 200) = in_stack_00000020[2];
  *in_stack_00000020 = 0;
  in_stack_00000020[1] = 0;
  in_stack_00000020[2] = 0;
  *(undefined8 *)(param_1 + 0xd0) = in_stack_00000028;
  *(undefined4 *)(param_1 + 0xd8) = in_stack_00000030;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  uVar2 = *in_stack_00000038;
  *(undefined8 *)(param_1 + 0xe8) = in_stack_00000038[1];
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  *(undefined8 *)(param_1 + 0xf0) = in_stack_00000038[2];
  *in_stack_00000038 = 0;
  in_stack_00000038[1] = 0;
  in_stack_00000038[2] = 0;
  *(undefined8 *)(param_1 + 0xf8) = in_stack_00000040;
  *(undefined8 *)(param_1 + 0x100) = in_stack_00000048;
  *(undefined8 *)(param_1 + 0x108) = in_stack_00000050;
  *(undefined1 *)(param_1 + 0x110) = in_stack_00000058;
  *(undefined8 *)(param_1 + 0x118) = in_stack_00000060;
  *(undefined8 *)(param_1 + 0x120) = in_stack_00000068;
  *(undefined8 *)(param_1 + 0x128) = in_stack_00000070;
  *(undefined8 *)(param_1 + 0x130) = in_stack_00000078;
  FUN_1006b618c(param_1 + 0x138,in_stack_00000080);
  *(undefined4 *)(param_1 + 0x200) = in_stack_00000088;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  uVar2 = *in_stack_00000090;
  *(undefined8 *)(param_1 + 0x210) = in_stack_00000090[1];
  *(undefined8 *)(param_1 + 0x208) = uVar2;
  *(undefined8 *)(param_1 + 0x218) = in_stack_00000090[2];
  *in_stack_00000090 = 0;
  in_stack_00000090[1] = 0;
  in_stack_00000090[2] = 0;
  func_0x000107c610b4(param_1 + 0x220,in_stack_00000098,0x48);
  *(undefined8 *)(param_1 + 0x268) = in_stack_000000a0;
  *(undefined4 *)(param_1 + 0x270) = in_stack_000000a8;
  *(undefined8 *)(param_1 + 0x278) = in_stack_000000b0;
  *(undefined8 *)(param_1 + 0x280) = in_stack_000000b8;
  *(undefined8 *)(param_1 + 0x288) = in_stack_000000c0;
  *(undefined8 *)(param_1 + 0x290) = in_stack_000000c8;
  *(undefined1 *)(param_1 + 0x298) = in_stack_000000d0;
  *(undefined4 *)(param_1 + 0x29c) = in_stack_000000d4;
  FUN_10061fb2c(param_1 + 0x2a0,in_stack_000000d8);
  *(undefined1 *)(param_1 + 0x2c0) = uStack00000000000000e0;
  *(undefined1 *)(param_1 + 0x2c1) = uStack00000000000000e1;
  *(undefined4 *)(param_1 + 0x2c4) = in_stack_000000e8;
  *(undefined8 *)(param_1 + 0x2c8) = in_stack_000000f0;
  *(undefined8 *)(param_1 + 0x2d0) = in_stack_000000f8;
  FUN_1006b6d2c(param_1 + 0x2d8,in_stack_00000100);
  FUN_10066f0b4(param_1 + 0x2f8,in_stack_00000108);
  FUN_10066f0f0(param_1 + 0x3d8,in_stack_00000110);
  *(undefined8 *)(param_1 + 0x3f8) = in_stack_00000118;
  *(undefined8 *)(param_1 + 0x400) = in_stack_00000120;
  *(undefined8 *)(param_1 + 0x408) = in_stack_00000128;
  *(undefined8 *)(param_1 + 0x410) = in_stack_00000130;
  *(undefined1 *)(param_1 + 0x418) = uStack0000000000000138;
  *(undefined1 *)(param_1 + 0x419) = uStack0000000000000139;
  *(undefined4 *)(param_1 + 0x41c) = in_stack_0000013c;
  *(undefined1 *)(param_1 + 0x420) = in_stack_00000140;
  return param_1;
}



/* Entry: 1006b69d4; end: 1006b69f7;  */

void FUN_1006b69d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
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
  return;
}



/* Entry: 1006b69f8; end: 1006b6d1b;  */

long FUN_1006b69f8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  long lVar1;
  undefined8 extraout_x14;
  undefined8 extraout_x15;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined1 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined1 in_stack_000000d0;
  undefined4 in_stack_000000d4;
  undefined8 in_stack_000000d8;
  undefined1 uStack00000000000000e0;
  undefined1 uStack00000000000000e1;
  undefined4 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined1 uStack0000000000000138;
  undefined1 uStack0000000000000139;
  undefined4 in_stack_0000013c;
  undefined1 in_stack_00000140;
  
  lVar1 = param_1;
  FUN_1006b69d4();
  *(undefined1 *)(lVar1 + 0x18) = 0;
  *(undefined1 *)(lVar1 + 0x30) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    *(undefined8 *)(lVar1 + 0x28) = param_3[2];
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar2 = *param_4;
  *(undefined8 *)(param_1 + 0x40) = param_4[1];
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(param_1 + 0x58) = param_5[1];
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined4 *)(param_1 + 0x70) = param_6;
  *(undefined8 *)(param_1 + 0x78) = param_7;
  *(undefined8 *)(param_1 + 0x80) = param_8;
  *(undefined4 *)(param_1 + 0x88) = param_9;
  *(undefined8 *)(param_1 + 0x90) = extraout_x15;
  *(undefined8 *)(param_1 + 0x98) = extraout_x14;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  uVar2 = *in_stack_00000018;
  *(undefined8 *)(param_1 + 0xa8) = in_stack_00000018[1];
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = in_stack_00000018[2];
  *in_stack_00000018 = 0;
  in_stack_00000018[1] = 0;
  in_stack_00000018[2] = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  uVar2 = *in_stack_00000020;
  *(undefined8 *)(param_1 + 0xc0) = in_stack_00000020[1];
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 200) = in_stack_00000020[2];
  *in_stack_00000020 = 0;
  in_stack_00000020[1] = 0;
  in_stack_00000020[2] = 0;
  *(undefined8 *)(param_1 + 0xd0) = in_stack_00000028;
  *(undefined4 *)(param_1 + 0xd8) = in_stack_00000030;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  uVar2 = *in_stack_00000038;
  *(undefined8 *)(param_1 + 0xe8) = in_stack_00000038[1];
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  *(undefined8 *)(param_1 + 0xf0) = in_stack_00000038[2];
  *in_stack_00000038 = 0;
  in_stack_00000038[1] = 0;
  in_stack_00000038[2] = 0;
  *(undefined8 *)(param_1 + 0xf8) = in_stack_00000040;
  *(undefined8 *)(param_1 + 0x100) = in_stack_00000048;
  *(undefined8 *)(param_1 + 0x108) = in_stack_00000050;
  *(undefined1 *)(param_1 + 0x110) = in_stack_00000058;
  *(undefined8 *)(param_1 + 0x118) = in_stack_00000060;
  *(undefined8 *)(param_1 + 0x120) = in_stack_00000068;
  *(undefined8 *)(param_1 + 0x128) = in_stack_00000070;
  *(undefined8 *)(param_1 + 0x130) = in_stack_00000078;
  FUN_1006b618c(param_1 + 0x138,in_stack_00000080);
  *(undefined4 *)(param_1 + 0x200) = in_stack_00000088;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  uVar2 = *in_stack_00000090;
  *(undefined8 *)(param_1 + 0x210) = in_stack_00000090[1];
  *(undefined8 *)(param_1 + 0x208) = uVar2;
  *(undefined8 *)(param_1 + 0x218) = in_stack_00000090[2];
  *in_stack_00000090 = 0;
  in_stack_00000090[1] = 0;
  in_stack_00000090[2] = 0;
  func_0x000107c610b4(param_1 + 0x220,in_stack_00000098,0x48);
  *(undefined8 *)(param_1 + 0x268) = in_stack_000000a0;
  *(undefined4 *)(param_1 + 0x270) = in_stack_000000a8;
  *(undefined8 *)(param_1 + 0x278) = in_stack_000000b0;
  *(undefined8 *)(param_1 + 0x280) = in_stack_000000b8;
  *(undefined8 *)(param_1 + 0x288) = in_stack_000000c0;
  *(undefined8 *)(param_1 + 0x290) = in_stack_000000c8;
  *(undefined1 *)(param_1 + 0x298) = in_stack_000000d0;
  *(undefined4 *)(param_1 + 0x29c) = in_stack_000000d4;
  FUN_10061fb2c(param_1 + 0x2a0,in_stack_000000d8);
  *(undefined1 *)(param_1 + 0x2c0) = uStack00000000000000e0;
  *(undefined1 *)(param_1 + 0x2c1) = uStack00000000000000e1;
  *(undefined4 *)(param_1 + 0x2c4) = in_stack_000000e8;
  *(undefined8 *)(param_1 + 0x2c8) = in_stack_000000f0;
  *(undefined8 *)(param_1 + 0x2d0) = in_stack_000000f8;
  FUN_1006b6d2c(param_1 + 0x2d8,in_stack_00000100);
  FUN_10066f0b4(param_1 + 0x2f8,in_stack_00000108);
  FUN_10066f0f0(param_1 + 0x3d8,in_stack_00000110);
  *(undefined8 *)(param_1 + 0x3f8) = in_stack_00000118;
  *(undefined8 *)(param_1 + 0x400) = in_stack_00000120;
  *(undefined8 *)(param_1 + 0x408) = in_stack_00000128;
  *(undefined8 *)(param_1 + 0x410) = in_stack_00000130;
  *(undefined1 *)(param_1 + 0x418) = uStack0000000000000138;
  *(undefined1 *)(param_1 + 0x419) = uStack0000000000000139;
  *(undefined4 *)(param_1 + 0x41c) = in_stack_0000013c;
  *(undefined1 *)(param_1 + 0x420) = in_stack_00000140;
  return param_1;
}



/* Entry: 1006b6d1c; end: 1006b6d2b;  */

void FUN_1006b6d1c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 1006b6d2c; end: 1006b6d4f;  */

void FUN_1006b6d2c(void)

{
  FUN_1006b6d1c();
  FUN_1006b6d50();
  return;
}



/* Entry: 1006b6d50; end: 1006b6d93;  */

void FUN_1006b6d50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
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
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  return;
}



/* Entry: 1006b6d94; end: 1006b6db7;  */

void FUN_1006b6d94(void)

{
  FUN_100292090();
  FUN_1006b6dd8();
  return;
}



/* Entry: 1006b6db8; end: 1006b6dd7;  */

void FUN_1006b6db8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1006b6d94();
  }
  return;
}



/* Entry: 1006b6dd8; end: 1006b6deb;  */

void FUN_1006b6dd8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1006b6dec; end: 1006b6e3b;  */

void FUN_1006b6dec(void)

{
  FUN_100292090();
  func_0x0001006b6e10();
  return;
}



/* Entry: 1006b6e3c; end: 1006b6e5b;  */

void FUN_1006b6e3c(long param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    FUN_1006b7cb8();
  }
  return;
}



/* Entry: 1006b6e5c; end: 1006b6eab;  */

void FUN_1006b6e5c(void)

{
  FUN_100292090();
  func_0x0001006b6e80();
  return;
}



/* Entry: 1006b6eac; end: 1006b6f6f;  */

long FUN_1006b6eac(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar8 = (long *)param_1[1];
  if ((plVar8 != (long *)0x0) && (param_1[3] != 0)) {
    plVar3 = param_1;
    func_0x000107c32840();
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      plVar10 = (long *)((ulong)plVar3 & uVar9);
    }
    else {
      plVar10 = plVar3;
      if (plVar8 <= plVar3) {
        uVar1 = 0;
        uVar7 = (uint)plVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)plVar3 / uVar7;
        }
        plVar10 = (long *)(ulong)((uint)plVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)plVar10 * 8);
    plVar4 = plVar3;
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        plVar5 = (long *)plVar6[1];
        if (plVar3 != plVar5) break;
        func_0x000107c32854();
        if ((int)plVar4 != 0) {
          return (long)plVar6;
        }
      }
      if (((ulong)plVar8 & uVar9) == 0) {
        plVar5 = (long *)((ulong)plVar5 & uVar9);
      }
      else if (plVar8 <= plVar5) {
        uVar2 = 0;
        if (plVar8 != (long *)0x0) {
          uVar2 = (ulong)plVar5 / (ulong)plVar8;
        }
        plVar5 = (long *)((long)plVar5 - uVar2 * (long)plVar8);
      }
    } while (plVar5 == plVar10);
  }
  return 0;
}



/* Entry: 1006b6f70; end: 1006b6f8b;  */

bool FUN_1006b6f70(long param_1)

{
  FUN_1006b6eac();
  return param_1 != 0;
}



/* Entry: 1006b6f8c; end: 1006b709b;  */

void FUN_1006b6f8c(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [64];
  undefined1 auStack_d8 [24];
  undefined1 uStack_c0;
  
  plVar1 = param_1 + 0x20;
  FUN_1006b6f70();
  if (((ulong)plVar1 & 1) == 0) {
    if ((param_3 & 1) == 0) {
      return;
    }
  }
  else {
    plVar1 = param_1 + 0x20;
    func_0x000107c29214(plVar1,param_2);
    if (*(byte *)(plVar1 + 3) == param_3) {
      return;
    }
  }
  func_0x000107c29210(auStack_d8,param_1,param_2);
  uVar2 = *(undefined8 *)(*param_1 + 0x18);
  FUN_10002b838(auStack_130,&UNK_10f4b154e);
  FUN_10054b97c(auStack_118,uVar2,auStack_130);
  func_0x000107c60ca0(auStack_130);
  uStack_c0 = (undefined1)param_3;
  func_0x000107c2a034(*param_1,auStack_d8);
  FUN_10054cbac(auStack_118);
  func_0x000107c29218(param_1 + 0x20,param_2,auStack_d8);
  FUN_10054d120(auStack_118);
  func_0x000107c290b4(auStack_d8);
  return;
}



/* Entry: 1006b709c; end: 1006b70b7;  */

void FUN_1006b709c(void)

{
  return;
}



/* Entry: 1006b70b8; end: 1006b7183;  */

void FUN_1006b70b8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong extraout_x8;
  long extraout_x9;
  ulong uVar3;
  long *unaff_x19;
  long lVar4;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x000100657c9c();
  uVar2 = *(ulong *)(param_1 + 8);
  if (uVar2 < *(ulong *)(param_1 + 0x10)) {
    FUN_1006b7234();
    lVar4 = uVar2 + 0x428;
  }
  else {
    FUN_1006b7184(0xd980);
    uVar2 = (long)(uVar2 - *unaff_x19) / 0x428 + 1;
    if (extraout_x8 < uVar2) {
      func_0x000107c29088();
      return;
    }
    uVar1 = (extraout_x9 - *unaff_x19) / 0x428;
    uVar3 = uVar1 * 2;
    if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
      uVar3 = uVar2;
    }
    if (0x1ecc07b301ecbf < uVar1) {
      uVar3 = extraout_x8;
    }
    FUN_1006b7194(auStack_48,uVar3);
    FUN_1006b7234();
    lStack_38 = lStack_38 + 0x428;
    func_0x0001006b7404();
    FUN_1006b7410();
    lVar4 = unaff_x19[1];
    FUN_1006b74b0(auStack_48);
  }
  unaff_x19[1] = lVar4;
  return;
}



/* Entry: 1006b7184; end: 1006b7193;  */

void FUN_1006b7184(void)

{
  return;
}



/* Entry: 1006b7194; end: 1006b71eb;  */

void FUN_1006b7194(long param_1,long param_2,long param_3,undefined8 param_4)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000100657c9c();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    FUN_1006b7184(0xd981);
    if (extraout_x8 <= unaff_x20) {
      func_0x000104bd35f4();
      lVar1 = param_1 + param_3 * extraout_x8_00;
      *unaff_x19 = param_1;
      unaff_x19[1] = lVar1;
      unaff_x19[2] = lVar1;
      unaff_x19[3] = param_1 + unaff_x20 * extraout_x8_00;
      return;
    }
    func_0x000107c60e20(unaff_x20 * 0x428);
  }
  FUN_1006b71ec(0x428);
  return;
}



/* Entry: 1006b71ec; end: 1006b7233;  */

void FUN_1006b71ec(long param_1,long param_2)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  lVar1 = param_2 + unaff_x21 * param_1;
  *unaff_x19 = param_2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_2 + unaff_x20 * param_1;
  return;
}



/* Entry: 1006b7234; end: 1006b73ef;  */

long FUN_1006b7234(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = param_1;
  lVar3 = param_2;
  func_0x0001006b7210();
  *(undefined1 *)(lVar2 + 0x18) = 0;
  *(undefined1 *)(lVar2 + 0x30) = 0;
  if (*(char *)(lVar3 + 0x30) == '\x01') {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(lVar2 + 0x20) = uVar5;
    *(undefined8 *)(lVar2 + 0x18) = uVar4;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  func_0x000107c610b4(param_1 + 0x50,param_2 + 0x50,0x50);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  uVar5 = 0;
  uVar6 = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_1006b73f0();
  *(undefined8 *)(param_2 + 0xa8) = uVar6;
  *(undefined8 *)(param_2 + 0xa0) = uVar5;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = uVar6;
  *(undefined8 *)(param_1 + 0xb8) = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_2 + 0xc0) = uVar6;
  *(undefined8 *)(param_2 + 0xb8) = uVar5;
  *(undefined8 *)(param_2 + 200) = 0;
  uVar1 = *(undefined4 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  *(undefined8 *)(param_1 + 0xf0) = uVar6;
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  uVar4 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = uVar4;
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_2 + 0xe8) = uVar6;
  *(undefined8 *)(param_2 + 0xe0) = uVar5;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  uVar5 = *(undefined8 *)(param_2 + 0x129);
  uVar4 = *(undefined8 *)(param_2 + 0x121);
  uVar9 = *(undefined8 *)(param_2 + 0x110);
  uVar8 = *(undefined8 *)(param_2 + 0x108);
  uVar7 = *(undefined8 *)(param_2 + 0x120);
  uVar6 = *(undefined8 *)(param_2 + 0x118);
  uVar10 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = uVar10;
  *(undefined8 *)(param_1 + 0x110) = uVar9;
  *(undefined8 *)(param_1 + 0x108) = uVar8;
  *(undefined8 *)(param_1 + 0x120) = uVar7;
  *(undefined8 *)(param_1 + 0x118) = uVar6;
  *(undefined8 *)(param_1 + 0x129) = uVar5;
  *(undefined8 *)(param_1 + 0x121) = uVar4;
  FUN_1006b618c(param_1 + 0x138,param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 0x208);
  uVar4 = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  *(undefined8 *)(param_1 + 0x210) = uVar4;
  *(undefined8 *)(param_2 + 0x218) = 0;
  *(undefined8 *)(param_2 + 0x210) = 0;
  *(undefined8 *)(param_2 + 0x208) = 0;
  func_0x000107c610b4(param_1 + 0x220,param_2 + 0x220,0x80);
  FUN_10061fb2c(param_1 + 0x2a0,param_2 + 0x2a0);
  uVar5 = *(undefined8 *)(param_2 + 0x2c8);
  uVar4 = *(undefined8 *)(param_2 + 0x2c0);
  *(undefined1 *)(param_1 + 0x2d0) = *(undefined1 *)(param_2 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2c8) = uVar5;
  *(undefined8 *)(param_1 + 0x2c0) = uVar4;
  FUN_1006b6d2c(param_1 + 0x2d8,param_2 + 0x2d8);
  FUN_10066f0b4(param_1 + 0x2f8,param_2 + 0x2f8);
  FUN_10066f0f0(param_1 + 0x3d8,param_2 + 0x3d8);
  uVar5 = *(undefined8 *)(param_2 + 0x400);
  uVar4 = *(undefined8 *)(param_2 + 0x3f8);
  uVar7 = *(undefined8 *)(param_2 + 0x410);
  uVar6 = *(undefined8 *)(param_2 + 0x408);
  uVar8 = *(undefined8 *)(param_2 + 0x411);
  *(undefined8 *)(param_1 + 0x419) = *(undefined8 *)(param_2 + 0x419);
  *(undefined8 *)(param_1 + 0x411) = uVar8;
  *(undefined8 *)(param_1 + 0x400) = uVar5;
  *(undefined8 *)(param_1 + 0x3f8) = uVar4;
  *(undefined8 *)(param_1 + 0x410) = uVar7;
  *(undefined8 *)(param_1 + 0x408) = uVar6;
  return param_1;
}



/* Entry: 1006b73f0; end: 1006b740f;  */

void FUN_1006b73f0(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xb0) = *(undefined8 *)(unaff_x20 + 0xb0);
  return;
}



/* Entry: 1006b7410; end: 1006b7493;  */

void FUN_1006b7410(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  FUN_100658238();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x428) * 0x428;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x428) {
    FUN_1006b7234(lVar2,lVar3);
    lVar2 = lVar2 + 0x428;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x428) {
    func_0x0001006b74f4(lVar4);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x000100658504();
  return;
}


