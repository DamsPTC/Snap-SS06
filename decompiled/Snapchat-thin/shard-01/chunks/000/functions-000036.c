/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c7b694; end: 100c7b7a3; -[SCTracer resumeAsyncTrace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7b694(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + _DAT_11309bf58;
    func_0x000107c61618();
    if (param_1 != 0) {
      func_0x000107c50718();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 100c7b7a4; end: 100c7b7cb; -[SCStartupJournalManager signalAppDidStabilizeUI] */

void FUN_100c7b7a4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100c7b7cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c7b7cc; end: 100c7ba37;  */

void FUN_100c7b7cc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar9 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar13 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f804();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar12 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_100c7ba5c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar10 + 0x68))
            (lVar12,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar3
            );
  lVar2 = lVar12;
  func_0x000107c5fff0(lVar12);
  (**(code **)(lVar10 + 8))(lVar12,lVar3);
  puVar4 = &UNK_110785538;
  func_0x000107c613fc(&UNK_110785538,0x18,7);
  func_0x000107c615fc(puVar4 + 0x10);
  pcStack_70 = FUN_100c7c8dc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_110785550;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puVar4;
  func_0x000107c6157c(puVar4);
  func_0x000107c5f808(lVar11);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = uVar7;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar9,&puStack_98,uVar7,uVar8,lVar1,puVar6);
  func_0x000107c5ffe8(0,lVar11,puVar9,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(lVar2);
  (**(code **)(lStack_a0 + 8))(puVar9,lVar1);
  (**(code **)(lVar13 + 8))(lVar11,lStack_a8);
  puVar6 = puStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 100c7ba38; end: 100c7ba5b;  */

void FUN_100c7ba38(void)

{
  long unaff_x20;
  
  func_0x000107c615f8(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c7ba5c; end: 100c7ba9b;  */

void FUN_100c7ba5c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100c7ba9c; end: 100c7baaf;  */

void FUN_100c7ba9c(long param_1,long param_2)

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



/* Entry: 100c7bab0; end: 100c7bb9b;  */

void FUN_100c7bab0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_80 [16];
  long lStack_70;
  char *pcStack_68;
  undefined1 auStack_60 [16];
  char *pcStack_50;
  long lStack_48;
  char cStack_31;
  
  lVar5 = lRam000000011307c828;
  lVar4 = lRam000000011307c828;
  if (lRam000000011307c828 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    func_0x000107c610f8(PTR_PTR_1126ae820);
    func_0x000107c453e4();
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c610f8(PTR_PTR_1126ae820);
    func_0x000107c453e4();
    puVar3 = puVar2;
    func_0x0001000b625c();
    func_0x000107c610f8();
    lVar4 = 1;
    func_0x000100085c88(1,puVar1,puVar2,puVar3);
    lVar5 = 0;
  }
  cStack_31 = '\0';
  pcStack_68 = &cStack_31;
  lStack_70 = lVar4;
  pcStack_50 = pcStack_68;
  lStack_48 = lVar4;
  func_0x000107c61174(lVar5);
  FUN_100c7bb9c(FUN_100c7bcec,auStack_60,&UNK_1044732b4,auStack_80,&UNK_104473068,0);
  if (cStack_31 == '\x01') {
    FUN_100c7be28(1);
  }
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 100c7bb9c; end: 100c7bceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7bb9c(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_11307ccd0) == '\0') {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307ccd8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7bcd4);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307cce0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7bce0);
      (*pcVar1)();
    }
    if (*(byte *)(unaff_x20 + _DAT_11307cce8) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7bce8);
      (*pcVar1)();
    }
    (*param_1)(param_2,*(undefined8 *)(unaff_x20 + _DAT_11307cce0),
               *(undefined8 *)(unaff_x20 + _DAT_11307ccd8),*(byte *)(unaff_x20 + _DAT_11307cce8) & 1
              );
  }
  else if (*(char *)(unaff_x20 + _DAT_11307ccd0) == '\x01') {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307ccf0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7bcd0);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307ccf8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7bcdc);
      (*pcVar1)();
    }
    if (*(byte *)(unaff_x20 + _DAT_11307cd00) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7bce4);
      (*pcVar1)();
    }
    if (*(byte *)(unaff_x20 + _DAT_11307cd08) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7bcec);
      (*pcVar1)();
    }
    (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_11307ccf8),
               *(undefined8 *)(unaff_x20 + _DAT_11307ccf0),*(byte *)(unaff_x20 + _DAT_11307cd00) & 1
               ,*(byte *)(unaff_x20 + _DAT_11307cd08) & 1);
  }
  else {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11307cd10) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7bcd8);
      (*pcVar1)();
    }
    (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_11307cd10));
  }
  return;
}



/* Entry: 100c7bcec; end: 100c7bcf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7bcec(undefined8 *param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_60 [48];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  **(undefined1 **)(unaff_x20 + 0x10) = param_2;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *param_1;
  uVar4 = *(undefined8 *)(lVar1 + _DAT_11307c880);
  func_0x000107c61174(uVar2);
  FUN_100c7bdd8(uVar4);
  func_0x000107c61170(uVar2);
  lVar1 = lVar1 + _DAT_11307c860;
  lVar3 = lVar1;
  func_0x000107c61428(lVar1,auStack_60,0x21,0);
  if (*(long *)(lVar1 + 0x38) != 0) {
    func_0x000107c6106c();
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    func_0x000107c61558(uVar2);
    uVar4 = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(lVar1 + 0x40) = 0x8000000000000000;
    func_0x000100086a54(lVar3,2,uVar2);
    *(undefined8 *)(lVar1 + 0x40) = uVar4;
  }
  func_0x000107c614a8(auStack_60);
  return;
}



/* Entry: 100c7bcf8; end: 100c7bdd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7bcf8(undefined8 *param_1,undefined1 param_2,undefined1 *param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [48];
  
  *param_3 = param_2;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar1 = *param_1;
  uVar3 = *(undefined8 *)(param_4 + _DAT_11307c880);
  func_0x000107c61174(uVar1);
  FUN_100c7bdd8(uVar3);
  func_0x000107c61170(uVar1);
  param_4 = param_4 + _DAT_11307c860;
  lVar2 = param_4;
  func_0x000107c61428(param_4,auStack_60,0x21,0);
  if (*(long *)(param_4 + 0x38) != 0) {
    func_0x000107c6106c();
    uVar1 = *(undefined8 *)(param_4 + 0x40);
    func_0x000107c61558(uVar1);
    uVar3 = *(undefined8 *)(param_4 + 0x40);
    *(undefined8 *)(param_4 + 0x40) = 0x8000000000000000;
    func_0x000100086a54(lVar2,2,uVar1);
    *(undefined8 *)(param_4 + 0x40) = uVar3;
  }
  func_0x000107c614a8(auStack_60);
  return;
}



/* Entry: 100c7bdd8; end: 100c7be27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7bdd8(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  if (param_1 != 0) {
    lVar1 = unaff_x20 + _DAT_11309bf58;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c4e460();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 100c7be28; end: 100c7c1c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7be28(ulong param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_2c8 [96];
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  uint uStack_210;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  uint uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  undefined1 auStack_128 [24];
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  ulong uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  lVar7 = _DAT_11307c858;
  if (*(char *)(unaff_x20 + _DAT_11307c858) == '\x01') {
    puVar2 = (ulong *)(unaff_x20 + _DAT_11307c860);
    func_0x000107c61428(puVar2,auStack_128,0,0);
    uStack_188 = puVar2[1];
    uStack_190 = *puVar2;
    uStack_178 = puVar2[3];
    uStack_180 = puVar2[2];
    uStack_168 = puVar2[5];
    uStack_170 = puVar2[4];
    uStack_160 = puVar2[6];
    uStack_158 = puVar2[7];
    uStack_150 = puVar2[8];
    uStack_a8 = (undefined4)puVar2[9];
    uStack_13c = *(undefined8 *)((long)puVar2 + 0x54);
    uStack_a4 = (undefined4)*(undefined8 *)((long)puVar2 + 0x4c);
    uStack_a0 = (undefined4)((ulong)*(undefined8 *)((long)puVar2 + 0x4c) >> 0x20);
    if (uStack_158 != 0) {
      uStack_108 = puVar2[1];
      uStack_110 = *puVar2;
      uStack_f8 = puVar2[3];
      uStack_100 = puVar2[2];
      uStack_e8 = puVar2[5];
      uStack_f0 = puVar2[4];
      uStack_e0 = puVar2[6];
      uStack_d0 = puVar2[8];
      uStack_c8 = (undefined4)puVar2[9];
      uStack_bc = *(undefined8 *)((long)puVar2 + 0x54);
      uStack_c4 = (undefined4)*(undefined8 *)((long)puVar2 + 0x4c);
      uStack_c0 = (undefined4)((ulong)*(undefined8 *)((long)puVar2 + 0x4c) >> 0x20);
      *(undefined1 *)(unaff_x20 + lVar7) = 0;
      uStack_148 = uStack_a8;
      uStack_144 = uStack_a4;
      puVar2 = &uStack_190;
      uStack_140 = uStack_a0;
      uStack_d8 = uStack_158;
      uStack_b0 = uStack_150;
      uStack_9c = uStack_13c;
      uStack_90 = uStack_190;
      uStack_88 = uStack_188;
      uStack_80 = uStack_180;
      uStack_78 = uStack_178;
      uStack_70 = uStack_170;
      uStack_68 = uStack_168;
      uStack_60 = uStack_160;
      func_0x00010008718c(puVar2,&uStack_1f0);
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar3 = *puVar2;
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_11307c880);
      func_0x000107c61174(uVar3);
      func_0x000100069b5c(uVar8);
      func_0x000107c61170(uVar3);
      puVar4 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
      func_0x000107c61168();
      func_0x000107c4f2b0();
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c429e8();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      puVar4 = puVar5;
      func_0x000107c5f9e8(puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
      func_0x000107c61170(puVar5);
      if (*(long *)(puVar4 + 0x10) == 0) {
        func_0x000107c6142c(puVar4);
      }
      else {
        func_0x000107c61434(puVar4);
        uVar3 = 0;
        func_0x000100029284(0xd000000000000011);
        func_0x000107c61430(puVar4,2);
        if ((uVar3 & 1) != 0) {
          uStack_110 = CONCAT71(uStack_110._1_7_,1);
        }
      }
      if ((param_1 & 1) == 0) {
        if (lRam000000011307c830 != -1) {
          func_0x000107c61568(0x11307c830,&UNK_100087328);
        }
        uStack_19c = (undefined4)uStack_bc;
        uStack_198 = (uint)((ulong)uStack_bc >> 0x20);
        uStack_218 = CONCAT44(uStack_19c,uStack_c0);
        uStack_220 = CONCAT44(uStack_c4,uStack_c8);
        uStack_210 = uStack_198 & 0x1010101 | 0xc0000000;
      }
      else {
        if (lRam000000011307c830 != -1) {
          func_0x000107c61568(0x11307c830,&UNK_100087328);
        }
        uStack_19c = (undefined4)uStack_bc;
        uStack_198 = (uint)((ulong)uStack_bc >> 0x20);
        uStack_218 = CONCAT44(uStack_19c,uStack_c0);
        uStack_220 = CONCAT44(uStack_c4,uStack_c8);
        uStack_210 = uStack_198 & 0x1010101 | 0x80000000;
      }
      uStack_238 = uStack_e0 & 1;
      uStack_268 = uStack_110 & 0x701;
      uStack_240 = uStack_e8;
      uStack_260 = uStack_108;
      uStack_258 = uStack_100;
      uStack_250 = uStack_f8;
      uStack_248 = uStack_f0;
      uStack_230 = uStack_d8;
      uStack_228 = uStack_d0;
      uStack_1f0 = uStack_110;
      uStack_1e8 = uStack_108;
      uStack_1e0 = uStack_100;
      uStack_1d8 = uStack_f8;
      uStack_1d0 = uStack_f0;
      uStack_1c8 = uStack_e8;
      uStack_1c0 = uStack_e0;
      uStack_1b8 = uStack_d8;
      uStack_1b0 = uStack_d0;
      uStack_1a8 = uStack_c8;
      uStack_1a4 = uStack_c4;
      uStack_1a0 = uStack_c0;
      func_0x00010008718c(&uStack_1f0,auStack_2c8);
      func_0x000100087c34(&uStack_268);
      func_0x0001000880fc(&uStack_268);
      lVar1 = lRam000000011307c848;
      lVar7 = lRam000000011307c840;
      if (lRam000000011307c840 == 0) {
        lVar7 = 0;
      }
      else {
        lVar6 = lRam000000011307c840;
        func_0x000107c614f0(lRam000000011307c840);
        pcVar9 = *(code **)(lVar1 + 8);
        func_0x000107c615f0(lVar7);
        (*pcVar9)(lVar6,lVar1);
        func_0x000107c615e8(lVar7);
        lVar7 = lRam000000011307c840;
      }
      lRam000000011307c840 = 0;
      lRam000000011307c848 = 0;
      func_0x000107c615e8(lVar7);
      func_0x000100087254(&uStack_110);
    }
  }
  return;
}



/* Entry: 100c7c1c8; end: 100c7c303;  */

/* WARNING: Possible PIC construction at 0x000100c7c294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7c2d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c7c298) */

void FUN_100c7c1c8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 auStack_60 [2];
  undefined8 uStack_50;
  
  uVar2 = unaff_x20 + 0x40;
  func_0x000107c61618();
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x0001002a6ed0();
    puVar1 = PTR___sytN_11034f1b0;
    if ((uVar4 & 1) == 0) {
      func_0x0001000c2ae4(0);
      func_0x0001000c911c();
    }
    else {
      uStack_50 = param_1;
      func_0x000100075034(FUN_100c1da10,auStack_60,PTR___sytN_11034f1b0 + 8);
      uVar4 = *(ulong *)(unaff_x20 + 0x10) | 1;
      *(ulong *)(unaff_x20 + 0x10) = uVar4;
      if (uVar4 == 7) {
        uVar4 = unaff_x20 + 0x40;
        func_0x000107c61618();
        if (uVar4 != 0) {
          uVar3 = uVar4;
          func_0x0001002a6ed0();
          if ((uVar3 & 1) == 0) {
            func_0x000107c615e8(uVar2);
            uVar2 = uVar4;
          }
          else {
            func_0x000100075034(FUN_100c87308,0,puVar1 + 8);
            func_0x0001000c74f0(auStack_60);
            FUN_100c8731c(auStack_60[0]);
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
    return;
  }
  return;
}



/* Entry: 100c7c304; end: 100c7c307;  */

/* WARNING: Possible PIC construction at 0x000100c7c358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7c394: Changing call to branch */

void FUN_100c7c304(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  
  plVar5 = (long *)(unaff_x20 + 0x20);
  lVar2 = *plVar5;
  if (lVar2 == 0) {
    plVar4 = (long *)(unaff_x20 + 0x10);
    lVar2 = *plVar4;
    if (lVar2 == 0) {
      lVar2 = *plVar5;
      *plVar5 = 0;
      *(undefined8 *)(unaff_x20 + 0x28) = 0;
      func_0x000107c615e8(lVar2);
      lVar2 = *plVar4;
      *plVar4 = 0;
      *(undefined8 *)(unaff_x20 + 0x18) = 0;
    }
    else {
      lVar3 = *(long *)(unaff_x20 + 0x18);
      lVar1 = lVar2;
      func_0x000107c614f0(lVar2);
      pcVar6 = *(code **)(lVar3 + 8);
      func_0x000107c615f0(lVar2);
      (*pcVar6)(lVar1,lVar3);
    }
  }
  else {
    lVar3 = *(long *)(unaff_x20 + 0x28);
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar6 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(lVar2);
    (*pcVar6)(lVar1,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 100c7c308; end: 100c7c433;  */

/* WARNING: Possible PIC construction at 0x000100c7c358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7c394: Changing call to branch */

void FUN_100c7c308(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  
  plVar5 = (long *)(unaff_x20 + 0x20);
  lVar2 = *plVar5;
  if (lVar2 == 0) {
    plVar4 = (long *)(unaff_x20 + 0x10);
    lVar2 = *plVar4;
    if (lVar2 == 0) {
      lVar2 = *plVar5;
      *plVar5 = 0;
      *(undefined8 *)(unaff_x20 + 0x28) = 0;
      func_0x000107c615e8(lVar2);
      lVar2 = *plVar4;
      *plVar4 = 0;
      *(undefined8 *)(unaff_x20 + 0x18) = 0;
    }
    else {
      lVar3 = *(long *)(unaff_x20 + 0x18);
      lVar1 = lVar2;
      func_0x000107c614f0(lVar2);
      pcVar6 = *(code **)(lVar3 + 8);
      func_0x000107c615f0(lVar2);
      (*pcVar6)(lVar1,lVar3);
    }
  }
  else {
    lVar3 = *(long *)(unaff_x20 + 0x28);
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar6 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(lVar2);
    (*pcVar6)(lVar1,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 100c7c434; end: 100c7c48b;  */

void FUN_100c7c434(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0,0);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c4218c();
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_40,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100c7c48c; end: 100c7c48f;  */

void FUN_100c7c48c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c7c490; end: 100c7c4df;  */

void FUN_100c7c490(void)

{
  long unaff_x20;
  
  func_0x00010058d43c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100c7c4e0; end: 100c7c4e7;  */

void FUN_100c7c4e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c7c4e8; end: 100c7c54f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7c4e8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_1138154d8;
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_1130966f8 + 8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_113096700 + 8));
  return;
}



/* Entry: 100c7c550; end: 100c7c573;  */

void FUN_100c7c550(void)

{
  FUN_100c7c4e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100c7c574; end: 100c7c5a3;  */

void FUN_100c7c574(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined2 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c61174();
  FUN_100c7c5a4();
  *param_1 = uVar1;
  param_1[1] = param_3;
  *(undefined2 *)(param_1 + 2) = param_4;
  return;
}



/* Entry: 100c7c5a4; end: 100c7c5a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c7c5a4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _DAT_11307ccd0) == '\0') {
    if (*(char *)((undefined8 *)(param_1 + _DAT_11307ccd8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7c6e4);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + _DAT_11307cce0 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7c6f0);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + _DAT_11307cce8) == '\x02') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7c6f8);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307ccd8);
    func_0x000107c61170();
  }
  else if (*(char *)(param_1 + _DAT_11307ccd0) == '\x01') {
    if (*(char *)((undefined8 *)(param_1 + _DAT_11307ccf0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7c6e0);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + _DAT_11307ccf8 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7c6ec);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + _DAT_11307cd00) == '\x02') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7c6f4);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + _DAT_11307cd08) == '\x02') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7c6fc);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307ccf0);
    func_0x000107c61170();
  }
  else {
    if (*(char *)((undefined8 *)(param_1 + _DAT_11307cd10) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7c6e8);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307cd10);
    func_0x000107c61170();
  }
  return uVar2;
}



/* Entry: 100c7c5a8; end: 100c7c6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c7c5a8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _DAT_11307ccd0) == '\0') {
    if (*(char *)((undefined8 *)(param_1 + _DAT_11307ccd8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7c6e4);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + _DAT_11307cce0 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7c6f0);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + _DAT_11307cce8) == '\x02') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7c6f8);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307ccd8);
    func_0x000107c61170();
  }
  else if (*(char *)(param_1 + _DAT_11307ccd0) == '\x01') {
    if (*(char *)((undefined8 *)(param_1 + _DAT_11307ccf0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7c6e0);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + _DAT_11307ccf8 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7c6ec);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + _DAT_11307cd00) == '\x02') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7c6f4);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + _DAT_11307cd08) == '\x02') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7c6fc);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307ccf0);
    func_0x000107c61170();
  }
  else {
    if (*(char *)((undefined8 *)(param_1 + _DAT_11307cd10) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7c6e8);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307cd10);
    func_0x000107c61170();
  }
  return uVar2;
}



/* Entry: 100c7c6fc; end: 100c7c703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7c6fc(long *param_1)

{
  ushort uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_60 [14];
  undefined1 uStack_52;
  undefined1 uStack_51;
  long lStack_50;
  undefined1 uStack_41;
  
  lVar3 = 0x1130605d0;
  func_0x0001000285a8(0x1130605d0,&UNK_10dcd5ae0);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(ushort *)(param_1 + 2) >> 0xe;
  if (uVar1 == 0) {
    *(undefined8 *)(unaff_x20 + _DAT_113060468) = 0;
    uVar6 = *(ulong *)(unaff_x20 + _DAT_113060470);
    *(ulong *)(unaff_x20 + _DAT_113060470) = uVar6 | 1;
    if (uVar6 != 0) {
      return;
    }
    uStack_41 = 0;
    uVar4 = 0x1130605d8;
    func_0x0001000285a8(0x1130605d8,&UNK_10dcd5b00);
    puVar5 = &uStack_41;
  }
  else {
    if (uVar1 == 1) {
      func_0x0001040b94f4(*(ushort *)(param_1 + 2) & 1);
      return;
    }
    lStack_50 = *param_1;
    if (lStack_50 == 1) {
      uVar6 = *(ulong *)(unaff_x20 + _DAT_113060470);
      *(ulong *)(unaff_x20 + _DAT_113060470) = uVar6 | 1;
      if (uVar6 != 0) {
        return;
      }
      uStack_51 = 0;
      uVar4 = 0x1130605d8;
      func_0x0001000285a8(0x1130605d8,&UNK_10dcd5b00);
      puVar5 = &uStack_51;
    }
    else {
      if (lStack_50 != 0) {
        func_0x000107c60614(&UNK_110775728,&lStack_50,&UNK_110775728,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100c7c8dc);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(unaff_x20 + _DAT_113060470);
      *(ulong *)(unaff_x20 + _DAT_113060470) = uVar6 & 0xfffffffffffffffe;
      if (uVar6 != 1) {
        return;
      }
      uStack_52 = 1;
      uVar4 = 0x1130605d8;
      func_0x0001000285a8(0x1130605d8,&UNK_10dcd5b00);
      puVar5 = &uStack_52;
    }
  }
  func_0x000107c5fd28(auStack_60 + -extraout_x8,puVar5,uVar4);
  (**(code **)(lVar7 + 8))(auStack_60 + -extraout_x8,lVar3);
  return;
}



/* Entry: 100c7c704; end: 100c7c8db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7c704(long *param_1,long param_2)

{
  ushort uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_60 [14];
  undefined1 uStack_52;
  undefined1 uStack_51;
  long lStack_50;
  undefined1 uStack_41;
  
  lVar3 = 0x1130605d0;
  func_0x0001000285a8(0x1130605d0,&UNK_10dcd5ae0);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(ushort *)(param_1 + 2) >> 0xe;
  if (uVar1 == 0) {
    *(undefined8 *)(param_2 + _DAT_113060468) = 0;
    uVar6 = *(ulong *)(param_2 + _DAT_113060470);
    *(ulong *)(param_2 + _DAT_113060470) = uVar6 | 1;
    if (uVar6 != 0) {
      return;
    }
    uStack_41 = 0;
    uVar4 = 0x1130605d8;
    func_0x0001000285a8(0x1130605d8,&UNK_10dcd5b00);
    puVar5 = &uStack_41;
  }
  else {
    if (uVar1 == 1) {
      func_0x0001040b94f4(*(ushort *)(param_1 + 2) & 1);
      return;
    }
    lStack_50 = *param_1;
    if (lStack_50 == 1) {
      uVar6 = *(ulong *)(param_2 + _DAT_113060470);
      *(ulong *)(param_2 + _DAT_113060470) = uVar6 | 1;
      if (uVar6 != 0) {
        return;
      }
      uStack_51 = 0;
      uVar4 = 0x1130605d8;
      func_0x0001000285a8(0x1130605d8,&UNK_10dcd5b00);
      puVar5 = &uStack_51;
    }
    else {
      if (lStack_50 != 0) {
        func_0x000107c60614(&UNK_110775728,&lStack_50,&UNK_110775728,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100c7c8dc);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_2 + _DAT_113060470);
      *(ulong *)(param_2 + _DAT_113060470) = uVar6 & 0xfffffffffffffffe;
      if (uVar6 != 1) {
        return;
      }
      uStack_52 = 1;
      uVar4 = 0x1130605d8;
      func_0x0001000285a8(0x1130605d8,&UNK_10dcd5b00);
      puVar5 = &uStack_52;
    }
  }
  func_0x000107c5fd28(auStack_60 + -extraout_x8,puVar5,uVar4);
  (**(code **)(lVar7 + 8))(auStack_60 + -extraout_x8,lVar3);
  return;
}



/* Entry: 100c7c8dc; end: 100c7c8e3;  */

/* WARNING: Removing unreachable block (ram,0x000100c7c92c) */
/* WARNING: Removing unreachable block (ram,0x000100c7c98c) */

void FUN_100c7c8dc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_f0 [96];
  undefined1 auStack_90 [96];
  
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61600(lVar1);
  func_0x000100074c20(auStack_f0,4,1);
  func_0x000100074ef8(auStack_f0);
  func_0x000100076b30(auStack_f0);
  func_0x000107c61170(lVar1);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61600(lVar1);
  func_0x000100074c20(auStack_90,10,1);
  func_0x000100074ef8(auStack_90);
  func_0x000107c61170(lVar1);
  func_0x000100076b30(auStack_90);
  return;
}



/* Entry: 100c7c8e4; end: 100c7c9a7;  */

/* WARNING: Removing unreachable block (ram,0x000100c7c92c) */
/* WARNING: Removing unreachable block (ram,0x000100c7c98c) */

void FUN_100c7c8e4(long param_1)

{
  long lVar1;
  undefined1 auStack_f0 [96];
  undefined1 auStack_90 [96];
  
  lVar1 = param_1 + 0x10;
  func_0x000107c61600(lVar1);
  func_0x000100074c20(auStack_f0,4,1);
  func_0x000100074ef8(auStack_f0);
  func_0x000100076b30(auStack_f0);
  func_0x000107c61170(lVar1);
  param_1 = param_1 + 0x10;
  func_0x000107c61600(param_1);
  func_0x000100074c20(auStack_90,10,1);
  func_0x000100074ef8(auStack_90);
  func_0x000107c61170(param_1);
  func_0x000100076b30(auStack_90);
  return;
}



/* Entry: 100c7c9a8; end: 100c7cc13;  */

/* WARNING: Possible PIC construction at 0x000100c7caac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7cabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7cb00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7cb30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7cbb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7cbc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7cbd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c7cbb8) */
/* WARNING: Removing unreachable block (ram,0x000100c7cb34) */
/* WARNING: Removing unreachable block (ram,0x000100c7cac0) */
/* WARNING: Removing unreachable block (ram,0x000100c7cb04) */
/* WARNING: Removing unreachable block (ram,0x000100c7cb10) */
/* WARNING: Removing unreachable block (ram,0x000100c7cacc) */
/* WARNING: Removing unreachable block (ram,0x000100c7caec) */
/* WARNING: Removing unreachable block (ram,0x000100c7cafc) */
/* WARNING: Removing unreachable block (ram,0x000100c7cab0) */
/* WARNING: Removing unreachable block (ram,0x000100c7cbd8) */
/* WARNING: Removing unreachable block (ram,0x000100c7cc10) */
/* WARNING: Removing unreachable block (ram,0x000100c7cc28) */
/* WARNING: Removing unreachable block (ram,0x000100c7cc24) */
/* WARNING: Removing unreachable block (ram,0x000100c7cbf0) */
/* WARNING: Removing unreachable block (ram,0x000100c7ca54) */

void FUN_100c7c9a8(long param_1,long param_2)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x38;
  func_0x000107c61148();
  if (param_1 == 0) {
    func_0x000107c61170(0);
  }
  else {
    func_0x000107c61174(param_2);
    func_0x000107c4080c();
    if (param_2 != 0) {
      func_0x000107c50300(uRam0000000000000000);
      func_0x000107c61180();
      func_0x000107c40414();
      func_0x000107c61180();
      func_0x000107c5d9a4();
      func_0x000107c61180();
      func_0x000107c4d9e8();
      func_0x000107c61180();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100c7cc14; end: 100c7cd0f; -[SCZoomFactorsPillView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7cc14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b08d8;
  if ((*(byte *)(param_1 + _DAT_1127415d0) & 1) != 0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  func_0x000107c61180();
  func_0x00010085b3c8(0x4020000000000000,0x3fd0000000000000,*(undefined8 *)PTR__CGSizeZero_110347620
                      ,*(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar1,param_1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100c7cd10; end: 100c7cd5b;  */

undefined8 FUN_100c7cd10(void)

{
  code *extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x00010048b718();
  func_0x0001008333cc();
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    *(undefined1 *)(unaff_x19 + 0x90) = 1;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(char *)(unaff_x19 + 0x18) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x91) = 1;
  }
  else {
    *(undefined8 *)(unaff_x19 + 0x138) = 0;
    *(undefined8 *)(unaff_x19 + 0x140) = 0;
  }
  if (*(long *)(unaff_x19 + 0xb0) == 0) {
    func_0x000104c019cc();
    func_0x000104c01ae0();
    (*extraout_x8)();
  }
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x28);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x20) == *(long *)(lVar1 + 0x28)) {
      return 1;
    }
    func_0x000104c0070c(unaff_x19 + 0x80);
  }
  else {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x30)) {
      return 1;
    }
    func_0x0001004b972c(unaff_x19 + 0x80);
  }
  return 0;
}



/* Entry: 100c7cd5c; end: 100c7cdc7;  */

void FUN_100c7cd5c(double param_1,long param_2)

{
  code *extraout_x8;
  long unaff_x20;
  
  func_0x0001004ba6f8();
  func_0x00010046778c();
  func_0x000100467768();
  *(long *)(param_2 + 0xa0) = (long)param_1;
  func_0x0001006132f4();
  if (unaff_x20 != 0) {
    FUN_100c7cdc8();
    func_0x000100613370();
    func_0x000100613384();
    (*extraout_x8)();
    func_0x0001006134b4();
    func_0x0001006134bc();
  }
  FUN_100c7ce5c();
  return;
}



/* Entry: 100c7cdc8; end: 100c7cddb;  */

void FUN_100c7cdc8(void)

{
  long unaff_x19;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  if (*(char *)(*(long *)(unaff_x19 + 0x108) + 0x70) == '\x01') {
    func_0x000107c60dec(auStack_50,&UNK_10f73f719,*(long *)(unaff_x19 + 0x108) + 0x58);
    func_0x000100610910(auStack_38,auStack_50,unaff_x19 + 0xf0);
    func_0x000100066230(&stack0x00000028,auStack_38);
    func_0x000107c60ca0(auStack_38);
    func_0x000107c60ca0(auStack_50);
  }
  else {
    func_0x000107c60ca4(&stack0x00000028,unaff_x19 + 0xf0);
  }
  return;
}



/* Entry: 100c7cddc; end: 100c7ce5b;  */

void FUN_100c7cddc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined1 in_ZR;
  byte *pbVar1;
  undefined8 extraout_x8;
  int extraout_w10;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lStack_1a0;
  ulong uStack_198;
  long lStack_190;
  ulong uStack_188;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined1 uStack_f8;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  
  func_0x00010083352c();
  uVar3 = *param_1;
  func_0x0001008335c0();
  func_0x000100613460();
  func_0x0001008335f4();
  func_0x00010083360c();
  func_0x00010061348c();
  func_0x000100613494();
  do {
    func_0x0001006134a0();
    func_0x0001006134a8();
  } while (!(bool)in_ZR);
  func_0x0001004a4ba4();
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c35468();
  func_0x000107c354b0();
  do {
    func_0x000107c3549c();
    func_0x000107c354a4();
  } while (!(bool)in_ZR);
  func_0x000107c35498();
  pcStack_98 = FUN_100c7ce5c;
  plStack_b0 = param_4;
  uStack_a8 = uVar3;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x0001004ba868(uVar3);
  uStack_b8 = extraout_x8;
  func_0x0001004baab8(&lStack_130);
  if ((lStack_130 != 0) && (func_0x000100aba310(), ((ulong)param_4 & 1) != 0)) {
    func_0x00010048b28c();
    if (lStack_128 != 0) {
      do {
        func_0x000100abaa34();
      } while (extraout_w10 != 0);
    }
    uStack_138 = 1;
    uStack_118 = 0x100bf5ccc;
    ppuStack_110 = &PTR_DAT_110ccdbf0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_f8 = 1;
    (**(code **)(*param_4 + 0x10))();
    func_0x000100bf5394(ppuStack_110);
    func_0x0001004bab20(&uStack_148);
  }
  func_0x0001004bab20();
  func_0x0001004baba4(uStack_b8);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000100bf5394(ppuStack_110);
    func_0x0001004bab20(&uStack_148);
    pbVar1 = (byte *)&lStack_130;
    func_0x0001004bab20();
    func_0x000107c353a0();
    if ((*pbVar1 & 1) == 0) {
      lVar4 = 0;
      *pbVar1 = 1;
      for (uVar5 = 0; uVar5 < *(ulong *)(pbVar1 + 8); uVar5 = uVar5 + 1) {
        lVar2 = *(long *)(pbVar1 + 0x18);
        if (*(long *)(lVar2 + lVar4) == 0) {
          lStack_1a0 = lVar2 + lVar4 + 9;
          uStack_198 = (ulong)*(byte *)(lVar2 + lVar4 + 8);
        }
        else {
          uStack_198 = *(ulong *)(lVar2 + lVar4 + 8);
          lStack_1a0 = *(long *)(lVar2 + lVar4 + 0x10);
        }
        lVar2 = lVar2 + lVar4;
        if (*(long *)(lVar2 + 0x20) == 0) {
          lStack_190 = lVar2 + 0x29;
          uStack_188 = (ulong)*(byte *)(lVar2 + 0x28);
        }
        else {
          uStack_188 = *(ulong *)(lVar2 + 0x28);
          lStack_190 = *(long *)(lVar2 + 0x30);
        }
        func_0x000100833844(pbVar1 + 0x20,&lStack_1a0);
        lVar4 = lVar4 + 0x60;
      }
    }
    return;
  }
  return;
}



/* Entry: 100c7ce5c; end: 100c7ce67;  */

void FUN_100c7ce5c(void)

{
  undefined1 in_ZR;
  byte *pbVar1;
  undefined8 extraout_x8;
  int extraout_w10;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  ulong uVar4;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined1 uStack_68;
  undefined8 uStack_28;
  
  func_0x0001004ba868();
  uStack_28 = extraout_x8;
  func_0x0001004baab8(&lStack_a0);
  if ((lStack_a0 != 0) && (func_0x000100aba310(), ((ulong)unaff_x20 & 1) != 0)) {
    func_0x00010048b28c();
    if (lStack_98 != 0) {
      do {
        func_0x000100abaa34();
      } while (extraout_w10 != 0);
    }
    uStack_a8 = 1;
    uStack_88 = 0x100bf5ccc;
    ppuStack_80 = &PTR_DAT_110ccdbf0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_68 = 1;
    (**(code **)(*unaff_x20 + 0x10))();
    func_0x000100bf5394(ppuStack_80);
    func_0x0001004bab20(&uStack_b8);
  }
  func_0x0001004bab20();
  func_0x0001004baba4(uStack_28);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000100bf5394(ppuStack_80);
    func_0x0001004bab20(&uStack_b8);
    pbVar1 = (byte *)&lStack_a0;
    func_0x0001004bab20();
    func_0x000107c353a0();
    if ((*pbVar1 & 1) == 0) {
      lVar3 = 0;
      *pbVar1 = 1;
      for (uVar4 = 0; uVar4 < *(ulong *)(pbVar1 + 8); uVar4 = uVar4 + 1) {
        lVar2 = *(long *)(pbVar1 + 0x18);
        if (*(long *)(lVar2 + lVar3) == 0) {
          lStack_110 = lVar2 + lVar3 + 9;
          uStack_108 = (ulong)*(byte *)(lVar2 + lVar3 + 8);
        }
        else {
          uStack_108 = *(ulong *)(lVar2 + lVar3 + 8);
          lStack_110 = *(long *)(lVar2 + lVar3 + 0x10);
        }
        lVar2 = lVar2 + lVar3;
        if (*(long *)(lVar2 + 0x20) == 0) {
          lStack_100 = lVar2 + 0x29;
          uStack_f8 = (ulong)*(byte *)(lVar2 + 0x28);
        }
        else {
          uStack_f8 = *(ulong *)(lVar2 + 0x28);
          lStack_100 = *(long *)(lVar2 + 0x30);
        }
        func_0x000100833844(pbVar1 + 0x20,&lStack_110);
        lVar3 = lVar3 + 0x60;
      }
    }
    return;
  }
  return;
}



/* Entry: 100c7ce68; end: 100c7cef7;  */

void FUN_100c7ce68(double param_1,long param_2,long param_3)

{
  code *extraout_x8;
  long unaff_x20;
  
  *(long *)(param_2 + 0xe0) = *(long *)(param_2 + 0xe0) + param_3;
  *(long *)(param_2 + 200) = *(long *)(param_2 + 200) + 1;
  if ((0.0 < param_1) && (func_0x0001006132f4(), unaff_x20 != 0)) {
    FUN_100c7cdc8();
    func_0x000100613370();
    func_0x000100613384();
    (*extraout_x8)();
    func_0x0001006134b4();
    func_0x0001006134bc();
  }
  FUN_100c7ce5c();
  return;
}



/* Entry: 100c7cef8; end: 100c7cf37;  */

void FUN_100c7cef8(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0x78) = 1;
  func_0x000100834b98();
  func_0x000100834be8();
  func_0x000100834bf4();
  if (iVar1 == 0) {
    return;
  }
  func_0x000104c01a24();
                    /* WARNING: Could not recover jumptable at 0x000104c01a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100c7cf38; end: 100c7cfb7; -[SCAInstallSessionMetadata setAttStatus:] */

/* WARNING: Possible PIC construction at 0x000100c7cfa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c7cfa4) */

void FUN_100c7cf38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  FUN_100c7cfb8(param_3);
  func_0x000107c61180();
  func_0x000107c54980(param_1,param_2,&PTR____CFConstantStringClassReference_11102c918,0xb,puVar1,3,
                      param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c7cfb8; end: 100c7cff7;  */

undefined * FUN_100c7cfb8(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d98248)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 100c7cff8; end: 100c7d107;  */

void FUN_100c7cff8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puStack_90;
  long lStack_88;
  char cStack_79;
  undefined1 *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  ulong uStack_60;
  byte bStack_51;
  char *pcStack_50;
  undefined8 uStack_48;
  
  pcStack_50 = "x-envoy-overloaded";
  uStack_48 = 0x12;
  lVar1 = param_3;
  func_0x0001008354c0(param_3,&pcStack_50);
  if (param_3 + 8 == lVar1) {
    func_0x000100835528(auStack_68);
    if (-1 < (char)bStack_51) {
      uStack_60 = (ulong)bStack_51;
    }
    if (uStack_60 == 0) {
      *(undefined1 *)(param_1 + 0x110) = 0;
    }
    else {
      func_0x000100835528(&puStack_90);
      puStack_78 = puStack_90;
      if (-1 < (long)cStack_79) {
        puStack_78 = (undefined1 *)&puStack_90;
      }
      lStack_70 = lStack_88;
      if (-1 < cStack_79) {
        lStack_70 = (long)cStack_79;
      }
      lVar2 = param_3;
      func_0x0001008354c0(param_3,&puStack_78);
      *(bool *)(param_1 + 0x110) = lVar1 != lVar2;
      func_0x0001053adad4();
    }
    FUN_100c21f70();
  }
  else {
    *(undefined1 *)(param_1 + 0x110) = 1;
  }
  (**(code **)(**(long **)(param_1 + 0x48) + 0x28))(*(long **)(param_1 + 0x48),param_2,param_3);
  return;
}



/* Entry: 100c7d108; end: 100c7d13b;  */

void FUN_100c7d108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010084ed80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  return;
}



/* Entry: 100c7d13c; end: 100c7d277;  */

void FUN_100c7d13c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_188 [56];
  undefined8 uStack_150;
  long lStack_148;
  undefined4 uStack_e8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_80;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  func_0x000100c7d130();
  ppuStack_50 = &PTR_DAT_110d09db8;
  uStack_48 = 0;
  uStack_38 = 0;
  func_0x00010084f180(param_3,&ppuStack_50);
  if ((int)param_3 == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 8);
    func_0x000107c60ee4(&uStack_150,0xf0);
    uStack_e8 = 0x3f800000;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    uStack_80 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x0001053adc78();
    func_0x0001053add4c();
    func_0x000105394120();
    func_0x0001053adbd8();
    (*extraout_x8_00)(uVar1,&uStack_150,auStack_188,1);
    func_0x0001053adb44();
    func_0x0001053adad4();
    func_0x00010060867c(&uStack_150);
  }
  else {
    uStack_150 = *(undefined8 *)(unaff_x20 + 8);
    lStack_148 = *(long *)(unaff_x20 + 0x10);
    if (lStack_148 != 0) {
      do {
        func_0x000100c1fb6c();
      } while (extraout_w10 != 0);
    }
    func_0x000100c7d114();
    (*extraout_x8)();
    FUN_100c22064(&uStack_150);
  }
  func_0x000107c305b8(&ppuStack_50);
  return;
}



/* Entry: 100c7d278; end: 100c7d283;  */

void FUN_100c7d278(void)

{
  return;
}



/* Entry: 100c7d284; end: 100c7d35f;  */

void FUN_100c7d284(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  
  FUN_100c7d278();
  if (extraout_w8 == 3) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107c39e28();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_100c7d300;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x000107c305a8();
    }
  }
  else if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107c39e28();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_100c7d300;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x000107c305b0();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_100c7d300;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107c39e28();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_100c7d300;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x000107c305ac();
    }
  }
  func_0x000107c60e14();
LAB_100c7d300:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 100c7d360; end: 100c7d373;  */

void FUN_100c7d360(void)

{
  return;
}



/* Entry: 100c7d374; end: 100c7d3a3;  */

void FUN_100c7d374(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  *(undefined1 *)(param_1 + 0x20) = 0;
  func_0x000107c3c1ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c7d3a4; end: 100c7d417; -[SCPlusStoreKitServicePurchaseHandleManager _processPendingFailIfNeeded] */

/* WARNING: Possible PIC construction at 0x000100c7d400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c7d404) */

void FUN_100c7d3a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x000107c61174(lVar2);
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x000107c61174(lVar3);
  func_0x000107c3b090(param_1);
  lVar1 = lVar2;
  func_0x000107c4adac();
  if (lVar1 != 0 && lVar3 != 0) {
    func_0x000107c42d58(param_1,param_2,lVar2,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100c7d418; end: 100c7d447; -[SCPlusStoreKitServicePurchaseHandleManager _clearPendingFail] */

/* WARNING: Possible PIC construction at 0x000100c7d430: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c7d434) */

void FUN_100c7d418(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c7d448; end: 100c7d46f; -[SCInMemoryDeepLinkInfoService deepLinkURL] */

void FUN_100c7d448(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c7d470; end: 100c7d497; -[SCInMemoryDeepLinkInfoService shortLinkURL] */

void FUN_100c7d470(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c7d498; end: 100c7d4bf; -[SCInMemoryDeepLinkInfoService deepLinkId] */

void FUN_100c7d498(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c7d4c0; end: 100c7d4cf; -[SCInMemoryDeepLinkInfoService hasValidSourceType] */

bool FUN_100c7d4c0(long param_1)

{
  return *(long *)(param_1 + 8) != -1;
}



/* Entry: 100c7d4d0; end: 100c7d4e7; -[SCAInstallSessionMetadata setDeepLinkUrl:] */

void FUN_100c7d4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ed91f8,5,param_3,0);
  return;
}



/* Entry: 100c7d4e8; end: 100c7d4ff; -[SCAInstallSessionMetadata setShortLinkUrl:] */

void FUN_100c7d4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ff0698,10,param_3,0);
  return;
}



/* Entry: 100c7d500; end: 100c7d553; -[SCBareboneNavigationController endAppearanceTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7d500(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x000107c427e4(*(undefined8 *)(param_1 + _DAT_11278e2e8),param_2,param_1);
  puStack_28 = PTR_PTR_112706260;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_endAppearanceTransition_1125c2a10);
  return;
}



/* Entry: 100c7d554; end: 100c7d5c7; -[SCBareboneNavigationController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7d554(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x000107c5dea0(*(undefined8 *)(param_1 + _DAT_11278e2e8),param_2,param_1,param_3);
  puStack_38 = PTR_PTR_112706260;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_viewDidAppear__112684bd0,param_3);
  *(undefined1 *)(param_1 + _DAT_11278e300) = 0;
  return;
}



/* Entry: 100c7d5c8; end: 100c7d637; -[SIGLegacyContainerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7d5c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x000107c5dea0(*(undefined8 *)(param_1 + _DAT_11273c8f8),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126eef30;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_viewDidAppear__112684bd0,param_3);
  func_0x000107c3c320(param_1);
  return;
}



/* Entry: 100c7d638; end: 100c7d6c7; -[SCContainerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7d638(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x000107c5dea0(*(undefined8 *)(param_1 + _DAT_11278c710),param_2,param_1,param_3);
  lVar1 = param_1;
  func_0x000107c5d1bc(param_1);
  func_0x000107c61180();
  func_0x000107c403b0();
  func_0x000107c61170(lVar1);
  puStack_38 = PTR_PTR_112705608;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_viewDidAppear__112684bd0,param_3);
  return;
}



/* Entry: 100c7d6c8; end: 100c7d833; -[SCRootContainer containerVC:viewDidAppearAnimated:] */

/* WARNING: Possible PIC construction at 0x000100c7d740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7d7fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7d80c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c7d744) */
/* WARNING: Removing unreachable block (ram,0x000100c7d748) */
/* WARNING: Removing unreachable block (ram,0x000100c7d800) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7d6c8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x000107c4acbc();
  func_0x000107c61180();
  if ((uVar1 != param_1) && (uVar2 = uVar1, func_0x000107c499a8(), (uVar2 & 1) == 0)) {
    uVar2 = uVar1;
    func_0x000107c4f07c();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5d8a8();
    if ((uVar3 & 1) == 0) {
      func_0x000107c4a620(*(undefined8 *)(param_1 + (long)_DAT_11278c524));
      uVar1 = uVar2;
    }
    else {
      func_0x000107c61170(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c7d834; end: 100c7d8af; -[SIGLegacyContainerViewController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7d834(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273c8f8);
  func_0x000107c61174(param_3);
  func_0x000107c41c34(uVar1);
  puStack_38 = PTR_PTR_1126eef30;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_didMoveToParentViewController__1125bb948,param_3);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c7d8b0; end: 100c7d92b; -[SCContainerViewController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7d8b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278c710);
  func_0x000107c61174(param_3);
  func_0x000107c41c34(uVar1);
  puStack_38 = PTR_PTR_112705608;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_didMoveToParentViewController__1125bb948,param_3);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c7d92c; end: 100c7dd0b;  */

/* WARNING: Possible PIC construction at 0x000100c7d9e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7d9f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7da00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7da3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7dacc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7dadc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7db30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7db40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7db90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7dbb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7dc7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7dca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7dcc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7dce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7dc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c7dc50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c7dc34) */
/* WARNING: Removing unreachable block (ram,0x000100c7dcc8) */
/* WARNING: Removing unreachable block (ram,0x000100c7dca8) */
/* WARNING: Removing unreachable block (ram,0x000100c7dc80) */
/* WARNING: Removing unreachable block (ram,0x000100c7dc94) */
/* WARNING: Removing unreachable block (ram,0x000100c7dbb4) */
/* WARNING: Removing unreachable block (ram,0x000100c7db94) */
/* WARNING: Removing unreachable block (ram,0x000100c7db44) */
/* WARNING: Removing unreachable block (ram,0x000100c7dbc8) */
/* WARNING: Removing unreachable block (ram,0x000100c7dbd0) */
/* WARNING: Removing unreachable block (ram,0x000100c7dbd8) */
/* WARNING: Removing unreachable block (ram,0x000100c7db4c) */
/* WARNING: Removing unreachable block (ram,0x000100c7dbfc) */
/* WARNING: Removing unreachable block (ram,0x000100c7db50) */
/* WARNING: Removing unreachable block (ram,0x000100c7db58) */
/* WARNING: Removing unreachable block (ram,0x000100c7dccc) */
/* WARNING: Removing unreachable block (ram,0x000100c7db5c) */
/* WARNING: Removing unreachable block (ram,0x000100c7db34) */
/* WARNING: Removing unreachable block (ram,0x000100c7dae0) */
/* WARNING: Removing unreachable block (ram,0x000100c7dad0) */
/* WARNING: Removing unreachable block (ram,0x000100c7da40) */
/* WARNING: Removing unreachable block (ram,0x000100c7dcd4) */
/* WARNING: Removing unreachable block (ram,0x000100c7da60) */
/* WARNING: Removing unreachable block (ram,0x000100c7daf0) */
/* WARNING: Removing unreachable block (ram,0x000100c7da88) */
/* WARNING: Removing unreachable block (ram,0x000100c7da04) */
/* WARNING: Removing unreachable block (ram,0x000100c7d9f4) */
/* WARNING: Removing unreachable block (ram,0x000100c7d9e4) */
/* WARNING: Removing unreachable block (ram,0x000100c7dc54) */
/* WARNING: Removing unreachable block (ram,0x000100c7dc64) */

void FUN_100c7d92c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c5bcc0();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3f0bc(uVar2);
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c3f300();
  if (lVar3 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x000107c3f1ac(lVar1);
    func_0x000107c61180();
    func_0x000107c3f084();
    func_0x000107c61180();
    func_0x000107c4008c();
    func_0x000107c61180();
    func_0x000107c41e70();
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c426e0();
  }
  else {
    func_0x000107c61170(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c7dd0c; end: 100c7dd1b; -[SCCameraViewController snapRecoveryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c7dd0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127624e8);
}



/* Entry: 100c7dd1c; end: 100c7dd2b; -[SCSnapRecoveryServices snapRecovery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7dd1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113043c58));
  return;
}



/* Entry: 100c7dd2c; end: 100c7dd63;  */

void FUN_100c7dd2c(long param_1)

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



/* Entry: 100c7dd64; end: 100c7dd73;  */

void FUN_100c7dd64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c4ec80(uVar1);
  func_0x000107c61180();
  FUN_100c7ddec(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  FUN_100c7de0c(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 100c7dd74; end: 100c7ddeb;  */

void FUN_100c7dd74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c4ec80();
  func_0x000107c61180();
  FUN_100c7ddec(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  FUN_100c7de0c(param_1,param_2,param_3);
  return;
}



/* Entry: 100c7ddec; end: 100c7de0b;  */

void FUN_100c7ddec(void)

{
  func_0x000107c61168(&PTR_PTR_112df2500);
  return;
}



/* Entry: 100c7de0c; end: 100c7dff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7de0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_a0 [16];
  undefined8 *puStack_90;
  undefined1 auStack_80 [16];
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  (**(code **)(lVar4 + 0x68))
            (auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar1);
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efcd910);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar4 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined **)(unaff_x20 + 0x28) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  uStack_68 = 0xffffffffffffffff;
  lVar1 = *(long *)(param_3 + _DAT_113053938);
  func_0x000107c61174(param_1);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    uStack_68 = 0xffffffffffffffff;
  }
  else {
    lVar4 = lVar1;
    func_0x000107c4a990();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    puStack_90 = &uStack_68;
    puStack_70 = puStack_90;
    FUN_100c7dff4(FUN_100c7e050,auStack_80,&UNK_101a75188,auStack_a0);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
  }
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_68;
  return;
}



/* Entry: 100c7dff4; end: 100c7e04f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7dff4(code *param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113053978) == '\x01') {
    if (*(byte *)(unaff_x20 + _DAT_113053980) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c7e050);
      (*pcVar1)();
    }
    (*param_3)(*(byte *)(unaff_x20 + _DAT_113053980) & 1);
  }
  else {
    (*param_1)();
  }
  return;
}



/* Entry: 100c7e050; end: 100c7e06f;  */

void FUN_100c7e050(void)

{
  long unaff_x20;
  
  **(undefined8 **)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 100c7e070; end: 100c7e0a3;  */

void FUN_100c7e070(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c7e0a4; end: 100c7e0db; -[_TtC18SCSnapRecoveryImpl16SnapRecoveryImpl get] */

void FUN_100c7e0a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_100c7e0dc();
  func_0x000107c61174();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c7e0dc; end: 100c7e34f;  */

undefined8 FUN_100c7e0dc(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  ulong uVar8;
  undefined1 *puVar9;
  code *pcVar10;
  long lVar11;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = (long)puVar9 - extraout_x12;
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  if (uVar2 != 0) goto LAB_100c7e1f4;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010efcd8f0);
    lVar5 = lVar3;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    if (lVar5 != 0) {
      puVar6 = PTR_PTR_1126c7c48;
      func_0x000107c61168(PTR_PTR_1126c7c48);
      lVar3 = lVar5;
      func_0x000107c6148c(lVar5,puVar6);
      if (lVar3 != 0) goto LAB_100c7e1dc;
      func_0x000107c615e8(lVar5);
    }
    lVar3 = 0;
  }
LAB_100c7e1dc:
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  *(long *)(unaff_x20 + 0x20) = lVar3;
  func_0x000107c61170(uVar4);
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  if (uVar2 == 0) {
    return 0;
  }
LAB_100c7e1f4:
  func_0x000107c61174();
  uVar7 = uVar2;
  func_0x000107c5ca64();
  func_0x000107c5ee88(puVar9,(double)uVar7);
  func_0x000107c5ee7c(uVar8,0x40f5180000000000,puVar9);
  pcVar10 = *(code **)(lVar11 + 8);
  (*pcVar10)(puVar9,lVar1);
  func_0x000107c5eea0(puVar9);
  uVar7 = uVar8;
  func_0x000107c5ee78(uVar8,puVar9);
  (*pcVar10)(puVar9,lVar1);
  if ((uVar7 & 1) == 0) {
    (*pcVar10)(uVar8,lVar1);
  }
  else {
    lVar11 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar11 == 0) {
      (*pcVar10)(uVar8,lVar1);
      func_0x000107c61170(uVar2);
    }
    else {
      uVar4 = 0xd00000000000001d;
      func_0x000107c5fadc(0xd00000000000001d,0x800000010efcd8f0);
      func_0x000107c56bcc(lVar11);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar2);
      (*pcVar10)(uVar8,lVar1);
    }
    uVar2 = *(ulong *)(unaff_x20 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
  }
  func_0x000107c61170(uVar2);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar4 = 0;
  if (lVar1 != 0) {
    func_0x000107c5b20c();
    func_0x000107c61180();
    if (lVar1 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100c7e350);
      (*pcVar10)();
    }
    func_0x000107c557e0();
    func_0x000107c61170(lVar1);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  }
  return uVar4;
}



/* Entry: 100c7e350; end: 100c7e3eb; +[SCWebBrowsingUserAgentHelper fullHTTPUserAgent] */

void FUN_100c7e350(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x000107c3dfcc(param_1,param_2,0,0);
  func_0x000107c61180();
  func_0x000107c4e0d0();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ee88d8);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c7e3ec; end: 100c7e663; +[SCWebBrowsingUserAgentHelper applicationStringForURL:isAd:] */

void FUN_100c7e3ec(undefined *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
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
  if (param_3 == 0) {
    ppuVar8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d00f0;
    func_0x000107c49820();
    func_0x000107c3b62c();
    func_0x000107c61180();
    puVar1 = param_1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x000107c3ff5c();
    func_0x000107c61180();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar2 = puVar1;
    func_0x000107c4f764();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c4080c();
    if (puVar3 == (undefined *)0x0) {
      uVar11 = 0;
    }
    else {
      lVar9 = *plStack_120;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            func_0x000107c61128(puVar2);
          }
          uVar12 = *(ulong *)(lStack_128 + (long)puVar10 * 8);
          uVar11 = uVar12;
          func_0x000107c4d3e4();
          func_0x000107c61180();
          uVar4 = uVar11;
          func_0x000107c4c10c();
          func_0x000107c61180();
          uVar5 = uVar4;
          func_0x000107c49d0c();
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar11);
          if ((int)uVar5 != 0) {
            func_0x000107c5dc0c();
            func_0x000107c61180();
            uVar11 = uVar12;
            func_0x000107c5d798();
            func_0x000107c61180();
            func_0x000107c61170(uVar12);
            goto LAB_100c7e554;
          }
          puVar10 = puVar10 + 1;
        } while (puVar3 != puVar10);
        puVar3 = puVar2;
        func_0x000107c4080c(puVar2,param_2,&uStack_130,auStack_f0,0x10);
      } while (puVar3 != (undefined *)0x0);
      uVar11 = 0;
LAB_100c7e554:
      param_4 = param_4 & 0xffffffff;
    }
    func_0x000107c61170(puVar2);
    uVar4 = uVar11;
    func_0x000107c49d0c(uVar11,param_2,&PTR____CFConstantStringClassReference_110ee8838);
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar11;
      func_0x000107c49d0c(uVar11,param_2,&PTR____CFConstantStringClassReference_110e55078);
      if ((uVar4 & 1) == 0) {
        uVar4 = uVar11;
        func_0x000107c49d0c(uVar11,param_2,&PTR____CFConstantStringClassReference_110ee8858);
        if ((uVar4 & 1) == 0) {
          ppuVar8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d00f0;
          func_0x000107c49820();
        }
        else {
          ppuVar8 = (undefined **)0x1;
        }
      }
      else {
        ppuVar8 = (undefined **)0x2;
      }
    }
    else {
      ppuVar8 = (undefined **)0x0;
    }
    func_0x000107c3b62c();
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    func_0x000107c61170();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    if (ppuVar8 == (undefined **)0x2) {
      puVar2 = puVar1;
      func_0x000107c3c424();
      func_0x000107c61180();
      param_1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar3 = puVar2;
      func_0x000107c4d9e8();
      func_0x000107c61180();
      puVar10 = PTR_PTR_1126b0380;
      func_0x000107c3de0c();
      func_0x000107c61180();
      puVar6 = PTR_PTR_1126b0380;
      func_0x000107c5dd1c();
      func_0x000107c61180();
      puVar7 = puVar2;
      func_0x000107c4d9e8(puVar2,param_2,&PTR____CFConstantStringClassReference_110dceb18);
      func_0x000107c61180();
      func_0x000107c3c080(puVar1,param_2,param_4);
      func_0x000107c61180();
      func_0x000107c51804(param_1,param_2,&PTR____CFConstantStringClassReference_110ee8918);
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar10);
    }
    else {
      if (ppuVar8 != (undefined **)0x1) {
        param_1 = puVar1;
        if (ppuVar8 == (undefined **)0x0) {
          param_1 = PTR_PTR_1126b0380;
          func_0x000107c5d8e4(PTR_PTR_1126b0380);
          func_0x000107c61180();
        }
        goto LAB_107c61110;
      }
      func_0x000107c3c424();
      func_0x000107c61180();
      param_1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar3 = puVar1;
      func_0x000107c4d9e8();
      func_0x000107c61180();
      puVar2 = puVar1;
      func_0x000107c4d9e8(puVar1,param_2,&PTR____CFConstantStringClassReference_110dceb18);
      func_0x000107c61180();
      func_0x000107c51804(param_1,param_2,&PTR____CFConstantStringClassReference_110ee88f8);
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      puVar2 = puVar1;
    }
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
LAB_107c61110:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100c7e664; end: 100c7e843; +[SCWebBrowsingUserAgentHelper _expandedAgentStringFromStyle:isAd:] */

void FUN_100c7e664(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  if (param_3 == 2) {
    puVar1 = param_1;
    func_0x000107c3c424();
    func_0x000107c61180();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar2 = puVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126b0380;
    func_0x000107c3de0c();
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126b0380;
    func_0x000107c5dd1c();
    func_0x000107c61180();
    puVar5 = puVar1;
    func_0x000107c4d9e8(puVar1,param_2,&PTR____CFConstantStringClassReference_110dceb18);
    func_0x000107c61180();
    func_0x000107c3c080(param_1,param_2,param_4);
    func_0x000107c61180();
    func_0x000107c51804(puVar6,param_2,&PTR____CFConstantStringClassReference_110ee8918);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    param_1 = puVar6;
  }
  else {
    if (param_3 != 1) {
      if (param_3 == 0) {
        param_1 = PTR_PTR_1126b0380;
        func_0x000107c5d8e4(PTR_PTR_1126b0380);
        func_0x000107c61180();
      }
      goto LAB_100c7e824;
    }
    func_0x000107c3c424();
    func_0x000107c61180();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar2 = param_1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    puVar1 = param_1;
    func_0x000107c4d9e8(param_1,param_2,&PTR____CFConstantStringClassReference_110dceb18);
    func_0x000107c61180();
    func_0x000107c51804(puVar6,param_2,&PTR____CFConstantStringClassReference_110ee88f8);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    puVar1 = param_1;
    param_1 = puVar6;
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
LAB_100c7e824:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100c7e844; end: 100c7e90b; +[SCWebBrowsingUserAgentHelper _safariServicesInfoDictionary] */

void FUN_100c7e844(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372d8a0 != -1) {
    func_0x00010002a2fc(0x11372d8a0,&PTR___NSConcreteGlobalBlock_110ab51c0);
  }
  uVar1 = uRam000000011372d898;
  func_0x000107c61174(uRam000000011372d898);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c7e90c; end: 100c7e90f; -[SCCameraLensesViewControllerManager lensStateDelegate] */

void FUN_100c7e90c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c096e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_lensStateWorkflow_1126035a8);
  return;
}



/* Entry: 100c7e910; end: 100c7e953; -[SCCameraLensesViewControllerManager lensStateWorkflow] */

void FUN_100c7e910(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4b444();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c4b43c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c7e954; end: 100c7e9c7; -[SCLensStateWorkflowHandler lensStateWorkflow] */

void FUN_100c7e954(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 == 0) {
    lVar3 = param_1 + 0x50;
    func_0x000107c61148(lVar3);
    lVar1 = param_1;
    func_0x000107c40a68(param_1,param_2,lVar3);
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c4d664(*(undefined8 *)(param_1 + 0x68),param_2,*(undefined8 *)(param_1 + 0x60));
    lVar3 = *(long *)(param_1 + 0x60);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100c7e9c8; end: 100c7eb1f; -[SCLensStateWorkflowHandler createLensStateWorkflowWithLensCarouselFunnelLogger:] */

void FUN_100c7e9c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar3 = PTR_PTR_1126d12b0;
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c3f0f8();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c3f0f4();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar7);
  func_0x000107c61180();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x58);
  uVar14 = *(undefined8 *)(param_1 + 0x78);
  uVar13 = *(undefined8 *)(param_1 + 0x70);
  uVar10 = *(undefined8 *)(param_1 + 0x80);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  lVar8 = param_1 + 0xa8;
  func_0x000107c61148();
  lVar9 = param_1 + 0x48;
  func_0x000107c61148();
  func_0x000107c464ac(puVar3,param_2,param_1,uVar6,uVar7,uVar11,param_3,uVar12,uVar13,uVar14,uVar10,
                      uVar1,uVar2,lVar8,lVar9,*(undefined8 *)(param_1 + 0xb0),
                      *(undefined8 *)(param_1 + 0xb8));
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c7eb20; end: 100c7eb5f; -[SCCameraViewControllerInfoProvider cameraHardwareServices] */

void FUN_100c7eb20(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3f0f8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100c7eb60; end: 100c7ee73; -[SCLensStateWorkflowImpl initWithDelegate:cameraHardwareResource:lensLogger:lensCarouselStudySettings:lensCarouselFunnelLogger:lensCarouselActivationTracker:cameraViewType:lensCarouselSettings:lensCTAHandler:lensCarouselManager:appStartExperimentReader:cameraPreviewPresenter:lensUrlBrowsingManager:lensCarouselSessionController:lensCarouselSessionStateProvider:] */

undefined8 *
FUN_100c7eb60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  puStack_70 = PTR_PTR_112700cd0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0(puVar1 + 0x12,param_3);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 7,param_7);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    func_0x000107c61170(uVar2);
    puVar1[9] = param_9;
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0xd,param_13);
    func_0x000107c611a0(puVar1 + 0xe,param_14);
    func_0x000107c611a0(puVar1 + 0xf,param_15);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c3c614(puVar1);
  }
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100c7ee74; end: 100c7ee9b; -[SCLensStateWorkflowImpl _setup] */

void FUN_100c7ee74(long param_1)

{
  func_0x000107c3b5c4();
                    /* WARNING: Could not recover jumptable at 0x00010bf7e330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_didUpdateLensCarouselSessionStat_1125bd270,
             *(undefined8 *)(param_1 + 0x88));
  return;
}



/* Entry: 100c7ee9c; end: 100c7eedb; -[SCLensStateWorkflowImpl _enableTabSessionLoggingForCurrentCameraType] */

void FUN_100c7ee9c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = param_1;
  func_0x000107c3bb4c();
  if ((uVar1 & 1) == 0) {
    func_0x000107c3bb80(param_1);
  }
  else {
    param_1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c267c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_tabSessionLoggingEnabled__112677928,param_1);
  return;
}



/* Entry: 100c7eedc; end: 100c7eeeb; -[SCLensStateWorkflowImpl _isMainCamera] */

bool FUN_100c7eedc(long param_1)

{
  return *(long *)(param_1 + 0x48) == 0;
}



/* Entry: 100c7eeec; end: 100c7ef1b; -[SCLensLogger tabSessionLoggingEnabled:] */

void FUN_100c7eeec(long param_1,undefined8 param_2,undefined1 param_3)

{
  func_0x000107c611ec(param_1 + 0x148);
  *(undefined1 *)(param_1 + 0x13c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x148);
  return;
}



/* Entry: 100c7ef1c; end: 100c7ef93; -[SCLensLogger didUpdateLensCarouselSessionStateProvider:] */

void FUN_100c7ef1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5c734(param_3);
  func_0x000107c61180();
  func_0x000107c3b504(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c7ef94; end: 100c7efb7;  */

undefined8 FUN_100c7ef94(void)

{
  undefined8 uStack_18;
  
  func_0x0001000d224c(&uStack_18);
  return uStack_18;
}



/* Entry: 100c7efb8; end: 100c7efeb;  */

void FUN_100c7efb8(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100c7efec; end: 100c7eff7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100c7efec(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 *puVar14;
  long alStack_90 [4];
  long lStack_70;
  undefined **ppuStack_68;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar10 = *(char **)(unaff_x20 + 0x28);
  puVar2 = (undefined *)0x112f41a70;
  func_0x0001000285a8(0x112f41a70,&UNK_10db8ed68);
  func_0x000107c613fc();
  func_0x0001000c2754();
  puVar3 = (undefined *)0x112f41a78;
  func_0x0001000285a8(0x112f41a78,&UNK_10db8ed70);
  func_0x000107c613fc();
  func_0x0001000c2754();
  puVar7 = puVar3;
  puVar6 = puVar2;
  if (lVar8 != 0) {
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    lVar4 = lVar8;
    func_0x000107c615f0(lVar8);
    func_0x000107c5b3f4();
    func_0x000107c61180();
    lVar9 = lVar4;
    func_0x0001000b637c();
    func_0x000107c61170(lVar4);
    uVar5 = 0;
    FUN_100c7f304(0);
    puVar6 = &UNK_103116754;
    func_0x0001000bfde0(&UNK_103116754,0,uVar5);
    func_0x000107c61574(lVar9);
    func_0x000107c61574(puVar2);
    func_0x0001000285a8(0x112f41a88,&UNK_10db8ed88);
    lVar4 = lVar8;
    func_0x000107c5ce54(lVar8);
    func_0x000107c61180();
    lVar9 = lVar4;
    func_0x0001000b637c();
    func_0x000107c61170(lVar4);
    uVar5 = 0;
    FUN_100c7f35c(0);
    puVar7 = &UNK_10311677c;
    func_0x0001000d5158(&UNK_10311677c,0,uVar5);
    func_0x000107c61574(lVar9);
    func_0x000107c615e8(lVar8);
    func_0x000107c61574(puVar3);
  }
  lVar8 = lVar1;
  if (lVar1 == 0) {
    lVar8 = 0x112f41a80;
    func_0x0001000285a8(0x112f41a80,&UNK_10db8ed78);
    func_0x000104886440();
  }
  lVar9 = 0;
  FUN_100c7f720();
  lVar4 = lVar9;
  func_0x000107c613fc();
  *(undefined **)(lVar4 + 0x10) = puVar7;
  *(long *)(lVar4 + 0x18) = lVar8;
  *(undefined **)(lVar4 + 0x20) = puVar6;
  *(undefined8 *)(lVar4 + 0x28) = uVar12;
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(lVar1);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (pcVar10 == (char *)0x0) {
    pcVar11 = "makeLensCarouselSessionController(arBarObservable:lensCarouselLocationType:)";
    func_0x0001000c10c0(
                       "makeLensCarouselSessionController(arBarObservable:lensCarouselLocationType:)"
                       );
    func_0x000107c61180();
  }
  else {
    pcVar11 = pcVar10;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar10);
  }
  ppuStack_68 = &PTR_DAT_11060fa70;
  uVar5 = 0;
  alStack_90[1] = lVar4;
  lStack_70 = lVar9;
  func_0x00010074ccec(0);
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_90 + 1,lVar9);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  puVar14 = (undefined8 *)((long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar14);
  uVar13 = *puVar14;
  func_0x000107c6157c(lVar4);
  FUN_100c7f740(uVar12,uVar13,pcVar11,uVar5);
  func_0x000107c61574(lVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar7);
  func_0x0001000834e4(alStack_90 + 1);
  *param_1 = uVar12;
  return;
}



/* Entry: 100c7eff8; end: 100c7f303;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100c7eff8(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,char *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  char *pcVar9;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar10;
  undefined8 *puVar11;
  long alStack_90 [4];
  long lStack_70;
  undefined **ppuStack_68;
  
  puVar1 = (undefined *)0x112f41a70;
  func_0x0001000285a8(0x112f41a70,&UNK_10db8ed68);
  func_0x000107c613fc();
  func_0x0001000c2754();
  puVar2 = (undefined *)0x112f41a78;
  func_0x0001000285a8(0x112f41a78,&UNK_10db8ed70);
  func_0x000107c613fc();
  func_0x0001000c2754();
  puVar7 = puVar2;
  puVar6 = puVar1;
  if (param_2 != 0) {
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    lVar3 = param_2;
    func_0x000107c615f0(param_2);
    func_0x000107c5b3f4();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x0001000b637c();
    func_0x000107c61170(lVar3);
    uVar5 = 0;
    FUN_100c7f304(0);
    puVar6 = &UNK_103116754;
    func_0x0001000bfde0(&UNK_103116754,0,uVar5);
    func_0x000107c61574(lVar4);
    func_0x000107c61574(puVar1);
    func_0x0001000285a8(0x112f41a88,&UNK_10db8ed88);
    lVar3 = param_2;
    func_0x000107c5ce54(param_2);
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x0001000b637c();
    func_0x000107c61170(lVar3);
    uVar5 = 0;
    FUN_100c7f35c(0);
    puVar7 = &UNK_10311677c;
    func_0x0001000d5158(&UNK_10311677c,0,uVar5);
    func_0x000107c61574(lVar4);
    func_0x000107c615e8(param_2);
    func_0x000107c61574(puVar2);
  }
  lVar3 = param_3;
  if (param_3 == 0) {
    lVar3 = 0x112f41a80;
    func_0x0001000285a8(0x112f41a80,&UNK_10db8ed78);
    func_0x000104886440();
  }
  lVar8 = 0;
  FUN_100c7f720();
  lVar4 = lVar8;
  func_0x000107c613fc();
  *(undefined **)(lVar4 + 0x10) = puVar7;
  *(long *)(lVar4 + 0x18) = lVar3;
  *(undefined **)(lVar4 + 0x20) = puVar6;
  *(undefined8 *)(lVar4 + 0x28) = param_4;
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(param_3);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_5 == (char *)0x0) {
    pcVar9 = "makeLensCarouselSessionController(arBarObservable:lensCarouselLocationType:)";
    func_0x0001000c10c0(
                       "makeLensCarouselSessionController(arBarObservable:lensCarouselLocationType:)"
                       );
    func_0x000107c61180();
  }
  else {
    pcVar9 = param_5;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(param_5);
  }
  ppuStack_68 = &PTR_DAT_11060fa70;
  uVar5 = 0;
  alStack_90[1] = lVar4;
  lStack_70 = lVar8;
  func_0x00010074ccec(0);
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_90 + 1,lVar8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  puVar11 = (undefined8 *)((long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar11);
  uVar10 = *puVar11;
  func_0x000107c6157c(lVar4);
  FUN_100c7f740(param_4,uVar10,pcVar9,uVar5);
  func_0x000107c61574(lVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar7);
  func_0x0001000834e4(alStack_90 + 1);
  *param_1 = param_4;
  return;
}



/* Entry: 100c7f304; end: 100c7f317;  */

void FUN_100c7f304(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110484110;
  if (lRam0000000112e2c508 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e2c508 = param_1;
  }
  return;
}



/* Entry: 100c7f318; end: 100c7f35b;  */

void FUN_100c7f318(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 100c7f35c; end: 100c7f37b;  */

void FUN_100c7f35c(void)

{
  func_0x000107c61168(&PTR_PTR_1129c6780);
  return;
}



/* Entry: 100c7f37c; end: 100c7f383; -[SCLensLogger snapSourceObservable] */

undefined8 FUN_100c7f37c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100c7f384; end: 100c7f45b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100c7f384(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  byte bStack_31;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_113096b48);
  func_0x000107c6157c(lVar3);
  func_0x000100087bd4(&bStack_31,FUN_100c7f47c);
  func_0x000107c61574();
  if ((bStack_31 & 1) == 0) {
    FUN_100c7f490();
  }
  func_0x0001000b6d7c();
  lVar1 = _DAT_113815500;
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(lVar3 + lVar1,lVar2);
  func_0x000107c61574(*(undefined8 *)(lVar3 + _DAT_113096b40));
  func_0x000107c61574(*(undefined8 *)(lVar3 + _DAT_113096b48));
  func_0x000107c61574(*(undefined8 *)(lVar3 + _DAT_113096b50));
  return lVar3;
}



/* Entry: 100c7f45c; end: 100c7f47b;  */

void FUN_100c7f45c(void)

{
  FUN_100c7f384();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100c7f47c; end: 100c7f48f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7f47c(undefined1 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined1 *)(unaff_x20 + _DAT_113096b38);
  return;
}


