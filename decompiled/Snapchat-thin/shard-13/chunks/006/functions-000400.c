/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a8f9ba8; end: 10a8f9c4f;  */

undefined8 * FUN_10a8f9ba8(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8f9c50);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a8f9c50; end: 10a8f9dbf;  */

void FUN_10a8f9c50(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "InteractorKind";
  uStack_88 = 0x4ffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  puStack_70 = &UNK_10f6821fc;
  uStack_68 = 0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Unknown";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8f9dc0(param_1,&pcStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "LeftHand";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8f9dc0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "RightHand";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8f9dc0();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a8f9dc0; end: 10a8f9e63;  */

undefined8 * FUN_10a8f9dc0(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8f9e64);
      (*pcVar1)();
    }
    puStack_38 = (undefined8 *)(double)param_3;
    aiStack_40[0] = 3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a8f9e64; end: 10a8fa00b;  */

void FUN_10a8f9e64(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6822a5;
  uStack_88 = 0x4ffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  puStack_70 = &UNK_10f6821fc;
  uStack_68 = 0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6822b0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8fa00c(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6822b9;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8fa00c();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f647175;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8fa00c();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6822c3;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8fa00c();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a8fa00c; end: 10a8fa0af;  */

undefined8 * FUN_10a8fa00c(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8fa0b0);
      (*pcVar1)();
    }
    puStack_38 = (undefined8 *)(double)param_3;
    aiStack_40[0] = 3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a8fa0b0; end: 10a8fa147;  */

undefined1  [16] FUN_10a8fa0b0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x13;
  auVar1._0_8_ = &UNK_10f6827dc;
  return auVar1;
}



/* Entry: 10a8fa148; end: 10a8fa90b;  */

void FUN_10a8fa148(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  FUN_10a003e74(param_1,&UNK_10f6821e5,0x16);
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c2df38;
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    *(undefined8 *)(param_1 + 0x1c0) = 0x13;
    puVar6 = *(undefined8 **)(param_1 + 0x1b8);
  }
  else {
    *(undefined1 *)(param_1 + 0x1cf) = 0x13;
    puVar6 = (undefined8 *)(param_1 + 0x1b8);
  }
  *(undefined4 *)((long)puVar6 + 0xf) = 0x736e6f69;
  puVar6[1] = 0x6974704f656c6261;
  *puVar6 = 0x7463617265746e49;
  *(undefined1 *)((long)puVar6 + 0x13) = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0x4ffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  puStack_a0 = &UNK_10f6827f0;
  uStack_58 = 0x17700000177;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a052690(param_1 + 0x168,&puStack_a0);
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,4);
  if ((uVar5 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c2df38;
    uStack_a8 = 0;
    puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,&UNK_10f6827f0,&ppuStack_b0,&puStack_a0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a911ee4,0,0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6822d3,FUN_10a912020,FUN_10a9120d8);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6822ea,FUN_10a912220,FUN_10a9122dc);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6822fa,FUN_10a9123c0,FUN_10a91247c);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f682308,FUN_10a912560,FUN_10a91261c);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68231a,FUN_10a912700,FUN_10a9127cc);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f682324,FUN_10a912890,FUN_10a912948);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    puStack_a0 = *(undefined **)(lVar1 + -0x68);
    uStack_78 = *(undefined8 *)(lVar1 + -0x40);
    uVar7 = *(ulong *)(lVar1 + -0x48);
    uVar8 = *(ulong *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_58 = *(undefined8 *)(lVar1 + -0x20);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uStack_50 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar2 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar3 = uStack_80._4_4_;
    uVar5 = param_1;
    uStack_88 = uVar8;
    uStack_80 = uVar7;
    FUN_10a0051e8(param_1,uVar8 & 0xffffffff,uVar2,uStack_50 & 0xffffffff,uVar7 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&puStack_a0,(undefined8 *)(param_1 + 0x1b8),&UNK_10f6827f0,0x13);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8fa4bc);
  (*pcVar4)();
}



/* Entry: 10a8fa90c; end: 10a8fa9e3;  */

/* WARNING: Removing unreachable block (ram,0x00010a8fa9a4) */

undefined1  [16] FUN_10a8fa90c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6827dc,0x13);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a913584(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8fa9e4; end: 10a8faaff;  */

void FUN_10a8fa9e4(undefined8 param_1)

{
  undefined1 uStack_a9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f682388;
  uStack_88 = 0x4ffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  puStack_70 = &UNK_10f6821fc;
  uStack_68 = 0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8fab00(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f682398;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 0;
  FUN_10a8fab58(param_1,&puStack_a8,&uStack_a9);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f68239d;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 1;
  FUN_10a8fab58(param_1,&puStack_a8,&uStack_a9);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a8fab00; end: 10a8fab57;  */

ulong FUN_10a8fab00(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a8fab58; end: 10a8fabaf;  */

ulong FUN_10a8fab58(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a913b7c(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a8fabb0; end: 10a8fadc7;  */

void FUN_10a8fabb0(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6823a4;
  uStack_88 = 0x4ffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  puStack_70 = &UNK_10f6821fc;
  uStack_68 = 0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f682398;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8fadc8(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f4ed72d;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8fadc8();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6823b2;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8fadc8();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6823bb;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8fadc8();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6823ca;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8fadc8();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f2f9bc2;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8fadc8();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a8fadc8; end: 10a8fae6f;  */

undefined8 * FUN_10a8fadc8(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8fae70);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a8fae70; end: 10a8faf8b;  */

void FUN_10a8fae70(undefined8 param_1)

{
  undefined1 uStack_a9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6823cf;
  uStack_88 = 0x4ffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  puStack_70 = &UNK_10f6821fc;
  uStack_68 = 0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a8faf8c(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6823e1;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 0;
  FUN_10a8fafe4(param_1,&puStack_a8,&uStack_a9);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6823e8;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6821fc;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17700000177;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 1;
  FUN_10a8fafe4(param_1,&puStack_a8,&uStack_a9);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a8faf8c; end: 10a8fafe3;  */

ulong FUN_10a8faf8c(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a8fafe4; end: 10a8fb03b;  */

ulong FUN_10a8fafe4(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a913bf0(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a8fb03c; end: 10a8fb093;  */

undefined8 * FUN_10a8fb03c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x138;
  __Znwm();
  FUN_10a9156a4();
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 10a8fb094; end: 10a8fb0cf;  */

long * FUN_10a8fb094(long *param_1)

{
  long lVar1;
  
  FUN_10a8fb0d0(*param_1);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010a915dbc(param_1);
  }
  return param_1;
}



/* Entry: 10a8fb0d0; end: 10a8fb453;  */

/* WARNING: Removing unreachable block (ram,0x00010a8fb390) */
/* WARNING: Removing unreachable block (ram,0x00010a8fb3a0) */

void FUN_10a8fb0d0(long param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auStack_1d8 [288];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  ulong uStack_60;
  char cStack_58;
  undefined1 uStack_50;
  
  if ((*(byte *)(param_1 + 0xf4) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0xf4) = 1;
  lVar4 = *(long *)(param_1 + 0xf8);
  __ZNSt3__15mutex4lockEv(lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  __ZNSt3__15mutex6unlockEv(lVar4);
  FUN_10a2b6d0c(param_1 + 0x108);
  if (*(char *)(param_1 + 0xa8) != '\x01') {
    return;
  }
  uStack_a8 = *(undefined8 *)(param_1 + 0x48);
  uStack_b0 = *(undefined8 *)(param_1 + 0x40);
  uStack_a0 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uStack_90 = *(ulong *)(param_1 + 0x60);
  uStack_98 = *(undefined8 *)(param_1 + 0x58);
  uStack_88 = *(ulong *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  lStack_78 = *(long *)(param_1 + 0x78);
  lVar4 = *(long *)(param_1 + 0x70);
  plVar6 = *(long **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  plStack_68 = *(long **)(param_1 + 0x88);
  lVar8 = *(long *)(param_1 + 0x80);
  plVar5 = *(long **)(param_1 + 0x88);
  *(long *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  cVar2 = *(char *)(param_1 + 0x98);
  cStack_58 = cVar2 == '\x01';
  if ((bool)cStack_58) {
    uStack_60 = *(ulong *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  uStack_50 = *(undefined1 *)(param_1 + 0xa0);
  lStack_80 = lVar4;
  lStack_70 = lVar8;
  FUN_10a90e1b8();
  if (*(long *)(param_1 + 0x78) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined1 *)(param_1 + 0xa8) = 0;
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  if (cVar2 != '\0') {
    FUN_10a009538(auStack_1d8,&UNK_10f682833);
    FUN_10a05bde0(auStack_b8,auStack_1d8);
    func_0x000109d1b350(uStack_60,auStack_b8);
    __ZNSt13exception_ptrD1Ev(auStack_b8);
    __ZNSt13runtime_errorD2Ev(auStack_1d8);
  }
  if (lVar8 == 0) {
    if ((plVar6 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 == (long *)0x0)
       ) goto LAB_10a8fb2fc;
    if (lVar4 != 0) goto LAB_10a8fb250;
  }
  else {
    plVar6 = plVar5;
    lVar4 = lVar8;
    if (plVar5 != (long *)0x0) {
      plVar5 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
LAB_10a8fb250:
    *(undefined1 *)(lVar4 + 0xac) = 0;
    *(code **)(lVar4 + 0x28) = FUN_10a915694;
    puVar7 = (undefined8 *)(lVar4 + 0x30);
    (**(code **)*puVar7)(puVar7);
    *puVar7 = &PTR_DAT_110ae9180;
    puVar7 = (undefined8 *)(lVar4 + 0x70);
    *(undefined **)(lVar4 + 0x68) = &UNK_1053a6a3c;
    (**(code **)*puVar7)(puVar7);
    *puVar7 = &PTR_DAT_110ae9180;
    if (plVar6 == (long *)0x0) goto LAB_10a8fb2fc;
  }
  plVar5 = plVar6 + 1;
  do {
    lVar4 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10a8fb2fc:
  uVar1 = uStack_90;
  if (-1 < (long)uStack_88) {
    uVar1 = uStack_88 >> 0x38;
  }
  if (uVar1 != 0) {
    FUN_10a25ff5c(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x940),&uStack_98);
  }
  if ((cStack_58 == '\x01') && (uStack_60 != 0)) {
    func_0x0001092b4274(&uStack_60);
  }
  plVar5 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (lStack_78 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10a8fb454; end: 10a8fb4df;  */

undefined8 FUN_10a8fb454(void)

{
  return 0x80000;
}



/* Entry: 10a8fb4e0; end: 10a8fb543;  */

void FUN_10a8fb4e0(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_50 = 0xffffffff00000001;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f6821fc;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0xf5;
  uStack_18 = 0xffffffff;
  FUN_10a8fb544(param_1,&uStack_58);
  FUN_10a915f24();
  return;
}



/* Entry: 10a8fb544; end: 10a8fb61b;  */

/* WARNING: Removing unreachable block (ram,0x00010a8fb5dc) */

undefined1  [16] FUN_10a8fb544(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f682998,0x15);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a915e28(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8fb61c; end: 10a8fb713;  */

void FUN_10a8fb61c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a8fb714; end: 10a8fb767;  */

void FUN_10a8fb714(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0x94;
  uStack_18 = 0xffffffff;
  FUN_10a8fb768(param_1,&uStack_58);
  FUN_10a916418();
  return;
}



/* Entry: 10a8fb768; end: 10a8fb83f;  */

/* WARNING: Removing unreachable block (ram,0x00010a8fb800) */

undefined1  [16] FUN_10a8fb768(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6829ae,10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a91631c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8fb840; end: 10a8fbc3f;  */

void FUN_10a8fb840(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f66355b,0xe);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c2d480;
  pppuVar2 = (undefined8 ***)&UNK_10f6821fc;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c2d480;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a8fbc20;
    FUN_10a054dac(param_1,&UNK_10f64f5cc,FUN_10a9164d4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x200,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2dd3dd,FUN_10a9166c8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6823ed,FUN_10a916828,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6823f9,FUN_10a9169f0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f30a89d,FUN_10a916aa0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f410265,FUN_10a916b50,FUN_10a916c80);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f685026,FUN_10a916e44,FUN_10a916f00);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f682403,FUN_10a916ff0,FUN_10a9170a8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f682415,FUN_10a917168,FUN_10a917224);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f66355b,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a8fbc20:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8fbc24);
  (*pcVar6)();
}



/* Entry: 10a8fbc40; end: 10a8fbd23;  */

undefined8 * FUN_10a8fbc40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2cb98;
  param_1[3] = &PTR_FUN_110c2cc10;
  FUN_10a9162c4(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a8fbd24; end: 10a8fbd2b;  */

void FUN_10a8fbd24(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -3;
  *puVar1 = &PTR_FUN_110c2cb98;
  *param_1 = &PTR_FUN_110c2cc10;
  FUN_10a9162c4(param_1 + 1);
  *puVar1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 10a8fbd2c; end: 10a8fbe03;  */

undefined8 * FUN_10a8fbd2c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  uVar2 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar1,uVar2);
  *param_1 = &PTR_FUN_110c2cc50;
  param_1[2] = &PTR_FUN_110c2ccf0;
  param_1[7] = &PTR_FUN_110c2cd48;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = param_1 + 0x20;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110b3f0e8;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 3) = 1;
  param_1[0x22] = puVar1 + 3;
  param_1[0x23] = puVar1;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  return param_1;
}



/* Entry: 10a8fbe04; end: 10a8fbec3;  */

undefined8 * FUN_10a8fbe04(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c2cc50;
  puVar1[2] = &PTR_FUN_110c2ccf0;
  puVar1[7] = &PTR_FUN_110c2cd48;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x1f] = puVar1 + 0x20;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110b3f0e8;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 3) = 1;
  param_1[0x22] = puVar1 + 3;
  param_1[0x23] = puVar1;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  return param_1;
}



/* Entry: 10a8fbec4; end: 10a8fc037;  */

void FUN_10a8fbec4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 **appuStack_70 [2];
  char cStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10aa88ae4(&ppuStack_58);
  uVar2 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar2 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_70,uVar2 + 0x10,&ppuStack_88);
  pppuVar3 = (undefined8 ***)appuStack_70[0];
  if (-1 < cStack_59) {
    pppuVar3 = appuStack_70;
  }
  if (uVar2 != 0) {
    pppuVar4 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar4 = &ppuStack_58;
    }
    _memmove(pppuVar3,pppuVar4,uVar2);
  }
  puVar1 = (undefined8 *)((long)pppuVar3 + uVar2);
  puVar1[1] = 0x203a746e756f4373;
  *puVar1 = 0x6d6574737973202c;
  *(undefined1 *)(puVar1 + 2) = 0;
  __ZNSt3__19to_stringEm(&ppuStack_88,*(undefined8 *)(param_2 + 0x108));
  pppuVar3 = (undefined8 ***)ppuStack_88;
  if (-1 < (char)bStack_71) {
    uStack_80 = (ulong)bStack_71;
    pppuVar3 = &ppuStack_88;
  }
  pppuVar4 = appuStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar4,pppuVar3,uStack_80);
  ppuVar5 = *pppuVar4;
  param_1[1] = pppuVar4[1];
  *param_1 = ppuVar5;
  param_1[2] = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  if ((char)bStack_71 < '\0') {
    __ZdlPv(ppuStack_88);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(appuStack_70[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a8fc038; end: 10a8fc03f;  */

void FUN_10a8fc038(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 **appuStack_70 [2];
  char cStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10aa88ae4(&ppuStack_58);
  uVar2 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar2 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_70,uVar2 + 0x10,&ppuStack_88);
  pppuVar3 = (undefined8 ***)appuStack_70[0];
  if (-1 < cStack_59) {
    pppuVar3 = appuStack_70;
  }
  if (uVar2 != 0) {
    pppuVar4 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar4 = &ppuStack_58;
    }
    _memmove(pppuVar3,pppuVar4,uVar2);
  }
  puVar1 = (undefined8 *)((long)pppuVar3 + uVar2);
  puVar1[1] = 0x203a746e756f4373;
  *puVar1 = 0x6d6574737973202c;
  *(undefined1 *)(puVar1 + 2) = 0;
  __ZNSt3__19to_stringEm(&ppuStack_88,*(undefined8 *)(param_2 + 0xf8));
  pppuVar3 = (undefined8 ***)ppuStack_88;
  if (-1 < (char)bStack_71) {
    uStack_80 = (ulong)bStack_71;
    pppuVar3 = &ppuStack_88;
  }
  pppuVar4 = appuStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar4,pppuVar3,uStack_80);
  ppuVar5 = *pppuVar4;
  param_1[1] = pppuVar4[1];
  *param_1 = ppuVar5;
  param_1[2] = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  if ((char)bStack_71 < '\0') {
    __ZdlPv(ppuStack_88);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(appuStack_70[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a8fc040; end: 10a8fc56f;  */

/* WARNING: Possible PIC construction at 0x00010a8fc158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a8fc21c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a8fc15c) */
/* WARNING: Removing unreachable block (ram,0x00010a8fc164) */
/* WARNING: Removing unreachable block (ram,0x00010a8fc168) */
/* WARNING: Removing unreachable block (ram,0x00010a8fc170) */
/* WARNING: Removing unreachable block (ram,0x00010a8fc178) */
/* WARNING: Removing unreachable block (ram,0x00010a8fc17c) */
/* WARNING: Removing unreachable block (ram,0x00010a8fc220) */
/* WARNING: Removing unreachable block (ram,0x00010a8fc228) */
/* WARNING: Removing unreachable block (ram,0x00010a8fc22c) */
/* WARNING: Removing unreachable block (ram,0x00010a8fc234) */
/* WARNING: Removing unreachable block (ram,0x00010a8fc23c) */
/* WARNING: Removing unreachable block (ram,0x00010a8fc240) */

long * FUN_10a8fc040(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined **ppuVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  code **ppcVar17;
  undefined8 ***pppuVar18;
  undefined8 uVar19;
  undefined8 **ppuVar20;
  undefined8 **ppuVar21;
  undefined1 auStack_1c0 [8];
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long *plStack_198;
  code **ppcStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 **ppuStack_170;
  code *pcStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined7 uStack_118;
  char cStack_111;
  long lStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 **ppuStack_f8;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  long *plStack_e0;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long lStack_70;
  
  ppuVar20 = &puStack_160;
  ppuVar12 = (undefined **)&puStack_160;
  pppuVar18 = (undefined8 ***)&stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010aa70acc();
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c2cd58);
  plVar8 = param_2;
  if ((int)plVar7 == 0) {
    ppcVar17 = &pcStack_f0;
    pcStack_f0 = FUN_10a917448;
    ppuStack_e8 = &PTR_FUN_110c2e2f0;
    plStack_e0 = param_1;
    FUN_10a38b538(param_2,&PTR_DAT_110c2db40,&pcStack_f0,0);
    (*(code *)*ppuStack_e8)(&ppuStack_e8);
    if (((ulong)plVar8 & 1) == 0) {
      puStack_160 = (undefined8 **)0x0;
      uStack_158 = 0;
      plVar7 = param_1 + 0x1c;
      uVar19 = 0x10a8fc220;
      goto SUB_10a8fc608;
    }
  }
  else {
    (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c2cd58,0);
    uVar6 = (uint)plVar8;
    FUN_10a8fc570(param_1 + 0x1c,(long)(int)uVar6);
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c2cd78);
    if (0 < (int)uVar6) {
      ppcVar17 = (code **)0x0;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,ppcVar17);
        pcStack_b0 = FUN_10a917398;
        ppuStack_a8 = &PTR_FUN_110c2e2d8;
        plVar7 = param_2;
        plStack_a0 = param_1;
        FUN_10a38b538(param_2,&PTR_DAT_110c2db40,&pcStack_b0,0);
        (*(code *)*ppuStack_a8)(&ppuStack_a8);
        if (((ulong)plVar7 & 1) == 0) {
          puStack_160 = (undefined8 **)0x0;
          uStack_158 = 0;
          plVar7 = param_1 + 0x1c;
          uVar19 = 0x10a8fc15c;
          ppuVar20 = &puStack_160;
          ppuVar12 = (undefined **)&puStack_160;
          goto SUB_10a8fc608;
        }
        (**(code **)(*param_2 + 0x220))(param_2);
        uVar1 = (int)ppcVar17 + 1;
        ppcVar17 = (code **)(ulong)uVar1;
      } while (uVar1 != uVar6);
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  plVar8 = param_1 + 0x1f;
  ppcVar17 = (code **)(param_1 + 0x20);
  FUN_10a917314(plVar8,param_1[0x20]);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = (long)ppcVar17;
  ppuVar12 = &PTR_DAT_110c2cd98;
  (**(code **)(*param_2 + 0x210))(param_2);
  param_1 = param_2;
  (**(code **)(*param_2 + 0x208))();
  if ((uint)param_1 != 0) {
    ppcVar17 = (code **)0x0;
    do {
      (**(code **)(*param_2 + 0x218))(param_2,ppcVar17);
      (**(code **)(*param_2 + 0xa0))(&puStack_128,param_2,&PTR_DAT_110c2cdb8);
      plVar9 = (long *)0x138;
      __Znwm();
      plVar10 = plVar9 + 1;
      *plVar10 = 0;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_DAT_110c2e6d8;
      plVar7 = plVar9 + 3;
      FUN_10a941558(plVar7,param_2);
      plStack_138 = plVar7;
      plStack_130 = plVar9;
      if (cStack_111 < '\0') {
        func_0x000107c3192c(&puStack_160,puStack_128,uStack_120);
      }
      else {
        uStack_158 = uStack_120;
        puStack_160 = puStack_128;
        lStack_150 = CONCAT17(cStack_111,uStack_118);
      }
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      ppuVar12 = (undefined **)&ppuStack_f8;
      plVar10 = plVar8;
      plStack_148 = plVar7;
      plStack_140 = plVar9;
      FUN_10a917590(plVar8,ppuVar12,&puStack_160);
      if (*plVar10 == 0) {
        lVar11 = 0x48;
        __Znwm();
        uStack_100 = 0;
        lStack_110 = lVar11;
        plStack_108 = plVar8;
        if (lStack_150 < 0) {
          func_0x000107c3192c(lVar11 + 0x20,puStack_160,uStack_158);
        }
        else {
          *(undefined8 *)(lVar11 + 0x28) = uStack_158;
          *(undefined8 **)(lVar11 + 0x20) = puStack_160;
          *(long *)(lVar11 + 0x30) = lStack_150;
        }
        *(long **)(lVar11 + 0x40) = plStack_140;
        *(long **)(lVar11 + 0x38) = plStack_148;
        plStack_148 = (long *)0x0;
        plStack_140 = (long *)0x0;
        ppuVar12 = (undefined **)ppuStack_f8;
        FUN_10a917614(plVar8,ppuStack_f8,plVar10,lVar11);
      }
      plVar7 = plStack_140;
      if (plStack_140 != (long *)0x0) {
        plVar9 = plStack_140 + 1;
        do {
          lVar11 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_140 + 0x10))(plStack_140);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if (lStack_150 < 0) {
        __ZdlPv(puStack_160);
      }
      (**(code **)(*param_2 + 0x220))(param_2);
      plVar7 = plStack_130;
      if (plStack_130 != (long *)0x0) {
        plVar9 = plStack_130 + 1;
        do {
          lVar11 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_130 + 0x10))(plStack_130);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if (cStack_111 < '\0') {
        __ZdlPv(puStack_128);
      }
      uVar6 = (int)ppcVar17 + 1;
      ppcVar17 = (code **)(ulong)uVar6;
    } while (uVar6 != (uint)param_1);
  }
  (**(code **)(*param_2 + 0x220))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_2;
  }
  ___stack_chk_fail();
  FUN_10a0e3194(&puStack_160);
  plVar7 = param_2;
  __Unwind_Resume();
  ppuVar20 = (undefined8 **)auStack_1c0;
  pcStack_168 = FUN_10a8fc570;
  lVar11 = *plVar7;
  if ((undefined8 ***)(plVar7[2] - lVar11 >> 4) < ppuVar12) {
    ppcStack_190 = ppcVar17;
    plStack_188 = param_1;
    plStack_180 = plVar8;
    plStack_178 = param_2;
    ppuStack_170 = pppuVar18;
    if ((ulong)ppuVar12 >> 0x3c != 0) {
      uVar19 = 0x10a8fc608;
      FUN_10a0cfe84();
      pppuVar18 = &ppuStack_170;
SUB_10a8fc608:
      *(code ***)((long)ppuVar20 + -0x30) = ppcVar17;
      *(long **)((long)ppuVar20 + -0x28) = param_1;
      *(long **)((long)ppuVar20 + -0x20) = plVar8;
      *(long **)((long)ppuVar20 + -0x18) = param_2;
      *(undefined8 ****)((long)ppuVar20 + -0x10) = pppuVar18;
      *(undefined8 *)((long)ppuVar20 + -8) = uVar19;
      puVar3 = (undefined8 *)plVar7[1];
      if (puVar3 < (undefined8 *)plVar7[2]) {
        ppuVar20 = (undefined8 **)*ppuVar12;
        puVar16 = puVar3 + 2;
        puVar3[1] = ppuVar12[1];
        *puVar3 = ppuVar20;
        *ppuVar12 = (undefined *)0x0;
        ppuVar12[1] = (undefined *)0x0;
        plVar8 = plVar7;
      }
      else {
        lVar11 = (long)puVar3 - *plVar7;
        uVar2 = (lVar11 >> 4) + 1;
        if (uVar2 >> 0x3c != 0) {
          plVar8 = plVar7;
          FUN_10a0cfe84();
          *(undefined ***)((long)ppuVar20 + -0x80) = ppuVar12;
          *(long **)((long)ppuVar20 + -0x78) = plVar7;
          *(undefined1 **)((long)ppuVar20 + -0x70) = (undefined1 *)((long)ppuVar20 + -0x10);
          *(code **)((long)ppuVar20 + -0x68) = FUN_10a8fc6ec;
          FUN_10a917538(plVar8 + 3);
          if (*(char *)((long)plVar8 + 0x17) < '\0') {
            __ZdlPv(*plVar8);
          }
          return plVar8;
        }
        uVar13 = plVar7[2] - *plVar7;
        uVar15 = (long)uVar13 >> 3;
        if (uVar15 <= uVar2) {
          uVar15 = uVar2;
        }
        if (0x7fffffffffffffef < uVar13) {
          uVar15 = 0xfffffffffffffff;
        }
        *(long **)((long)ppuVar20 + -0x38) = plVar7;
        plVar8 = plVar7;
        FUN_10a0cfe98();
        puVar3 = (undefined8 *)((long)plVar8 + lVar11);
        ppuVar21 = (undefined8 **)*ppuVar12;
        puVar16 = puVar3 + 2;
        puVar3[1] = ppuVar12[1];
        *puVar3 = ppuVar21;
        *ppuVar12 = (undefined *)0x0;
        ppuVar12[1] = (undefined *)0x0;
        lVar14 = (long)puVar3 - (plVar7[1] - *plVar7);
        _memcpy(lVar14);
        lVar11 = *plVar7;
        *plVar7 = lVar14;
        plVar7[1] = (long)puVar16;
        lVar14 = plVar7[2];
        plVar7[2] = (long)(plVar8 + uVar15 * 2);
        *(long *)((long)ppuVar20 + -0x48) = lVar11;
        *(long *)((long)ppuVar20 + -0x40) = lVar14;
        *(long *)((long)ppuVar20 + -0x58) = lVar11;
        *(long *)((long)ppuVar20 + -0x50) = lVar11;
        plVar8 = (long *)((long)ppuVar20 + -0x58);
        func_0x00010a0cfecc(plVar8);
      }
      plVar7[1] = (long)puVar16;
      return plVar8;
    }
    lVar14 = plVar7[1];
    plVar8 = plVar7;
    plStack_198 = plVar7;
    FUN_10a0cfe98();
    lVar11 = (long)plVar8 + (lVar14 - lVar11);
    lVar14 = lVar11 - (plVar7[1] - *plVar7);
    _memcpy(lVar14);
    lStack_1b8 = *plVar7;
    *plVar7 = lVar14;
    plVar7[1] = lVar11;
    lStack_1a0 = plVar7[2];
    plVar7[2] = (long)(plVar8 + (long)ppuVar12 * 2);
    plVar7 = &lStack_1b8;
    lStack_1b0 = lStack_1b8;
    lStack_1a8 = lStack_1b8;
    func_0x00010a0cfecc(plVar7);
  }
  return plVar7;
}



/* Entry: 10a8fc570; end: 10a8fc6eb;  */

long * FUN_10a8fc570(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar4 = *param_1;
  if ((undefined8 *)(param_1[2] - lVar4 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_10a0cfe84();
      puVar2 = (undefined8 *)param_1[1];
      if (puVar2 < (undefined8 *)param_1[2]) {
        uVar9 = *param_2;
        puVar8 = puVar2 + 2;
        puVar2[1] = param_2[1];
        *puVar2 = uVar9;
        *param_2 = 0;
        param_2[1] = 0;
        plVar3 = param_1;
      }
      else {
        lVar4 = (long)puVar2 - *param_1;
        uVar1 = (lVar4 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_10a0cfe84();
          FUN_10a917538(param_1 + 3);
          if (*(char *)((long)param_1 + 0x17) < '\0') {
            __ZdlPv(*param_1);
          }
          return param_1;
        }
        uVar5 = param_1[2] - *param_1;
        uVar7 = (long)uVar5 >> 3;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7fffffffffffffef < uVar5) {
          uVar7 = 0xfffffffffffffff;
        }
        plVar3 = param_1;
        plStack_98 = param_1;
        FUN_10a0cfe98();
        puVar2 = (undefined8 *)((long)plVar3 + lVar4);
        uVar9 = *param_2;
        puVar8 = puVar2 + 2;
        puVar2[1] = param_2[1];
        *puVar2 = uVar9;
        *param_2 = 0;
        param_2[1] = 0;
        lVar4 = (long)puVar2 - (param_1[1] - *param_1);
        _memcpy(lVar4);
        lStack_b8 = *param_1;
        *param_1 = lVar4;
        param_1[1] = (long)puVar8;
        lStack_a0 = param_1[2];
        param_1[2] = (long)(plVar3 + uVar7 * 2);
        plVar3 = &lStack_b8;
        lStack_b0 = lStack_b8;
        lStack_a8 = lStack_b8;
        func_0x00010a0cfecc(plVar3);
      }
      param_1[1] = (long)puVar8;
      return plVar3;
    }
    lVar6 = param_1[1];
    plVar3 = param_1;
    plStack_38 = param_1;
    FUN_10a0cfe98();
    lVar4 = (long)plVar3 + (lVar6 - lVar4);
    lVar6 = lVar4 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lStack_58 = *param_1;
    *param_1 = lVar6;
    param_1[1] = lVar4;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar3 + (long)param_2 * 2);
    param_1 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a0cfecc(param_1);
  }
  return param_1;
}



/* Entry: 10a8fc6ec; end: 10a8fc723;  */

undefined8 * FUN_10a8fc6ec(undefined8 *param_1)

{
  FUN_10a917538(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a8fc724; end: 10a8fc8e7;  */

void FUN_10a8fc724(long param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x40))
            (param_2,&PTR_DAT_110c2cd58,
             (ulong)(*(long *)(param_1 + 0xe8) - *(long *)(param_1 + 0xe0)) >> 4);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c2cd78);
  if (*(long *)(param_1 + 0xe8) != *(long *)(param_1 + 0xe0)) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      (**(code **)(*param_2 + 0x10))(param_2);
      if ((ulong)(*(long *)(param_1 + 0xe8) - *(long *)(param_1 + 0xe0) >> 4) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a8fc8e8);
        (*pcVar2)();
      }
      FUN_10a38b7b4(param_2,&PTR_DAT_110c2db40,*(long *)(param_1 + 0xe0) + lVar6,&UNK_10f682435,10);
      (**(code **)(*param_2 + 0x20))(param_2);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (uVar7 < (ulong)(*(long *)(param_1 + 0xe8) - *(long *)(param_1 + 0xe0) >> 4));
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c2cd98);
  plVar4 = *(long **)(param_1 + 0xf8);
  while (plVar4 != (long *)(param_1 + 0x100)) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110c2cdb8,plVar4 + 4);
    (**(code **)(*param_2 + 0x120))(param_2,plVar4[7],0);
    (**(code **)(*param_2 + 0x20))(param_2);
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar3 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar3);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010a8fc8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a8fc8e8; end: 10a8fcb07;  */

void FUN_10a8fc8e8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  puVar6 = param_1 + 1;
  *puVar6 = 0;
  param_1[2] = 0;
  *param_1 = puVar6;
  plVar8 = *(long **)(param_2 + 0xf8);
  while (plVar8 != (long *)(param_2 + 0x100)) {
    if (*(char *)((long)plVar8 + 0x37) < '\0') {
      func_0x000107c3192c(&lStack_a0,plVar8[4],plVar8[5]);
    }
    else {
      lStack_98 = plVar8[5];
      lStack_a0 = plVar8[4];
      lStack_90 = plVar8[6];
    }
    plStack_80 = (long *)plVar8[8];
    lStack_88 = plVar8[7];
    if (plVar8[8] != 0) {
      plVar1 = (long *)(plVar8[8] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lStack_90 < 0) {
      func_0x000107c3192c(&lStack_70,lStack_a0,lStack_98);
    }
    else {
      lStack_68 = lStack_98;
      lStack_70 = lStack_a0;
      lStack_60 = lStack_90;
    }
    puVar4 = param_1;
    func_0x000107c27bc4(param_1,puVar6,&uStack_48,auStack_50,&lStack_70);
    puVar7 = (undefined8 *)*puVar4;
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x38;
      __Znwm();
      puVar7[5] = lStack_68;
      puVar7[4] = lStack_70;
      puVar7[6] = lStack_60;
      lStack_68 = 0;
      lStack_60 = 0;
      lStack_70 = 0;
      func_0x000107c27bc8(param_1,uStack_48,puVar4,puVar7);
    }
    puVar4 = (undefined8 *)puVar7[1];
    if ((undefined8 *)puVar7[1] == (undefined8 *)0x0) {
      do {
        puVar6 = (undefined8 *)puVar7[2];
        bVar3 = (undefined8 *)*puVar6 != puVar7;
        puVar7 = puVar6;
      } while (bVar3);
    }
    else {
      do {
        puVar6 = puVar4;
        puVar4 = (undefined8 *)*puVar6;
      } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
    }
    if (lStack_60 < 0) {
      __ZdlPv(lStack_70);
    }
    plVar1 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      plVar9 = plStack_80 + 1;
      do {
        lVar5 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (lStack_90 < 0) {
      __ZdlPv(lStack_a0);
    }
    plVar1 = (long *)plVar8[1];
    plVar9 = plVar8;
    if ((long *)plVar8[1] == (long *)0x0) {
      do {
        plVar8 = (long *)plVar9[2];
        bVar3 = (long *)*plVar8 != plVar9;
        plVar9 = plVar8;
      } while (bVar3);
    }
    else {
      do {
        plVar8 = plVar1;
        plVar1 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a8fcb08; end: 10a8fcbeb;  */

void FUN_10a8fcb08(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  puVar4 = (undefined8 *)0x48;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110c2e318;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[3] = &PTR_FUN_110c2cb98;
  puVar4[6] = &PTR_FUN_110c2cc10;
  puVar4[8] = plStack_28;
  puVar4[7] = uStack_30;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  return;
}



/* Entry: 10a8fcbec; end: 10a8fcd17;  */

void FUN_10a8fcbec(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  undefined ***pppuVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *extraout_x8_01;
  undefined **ppuVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  ulong uVar19;
  undefined *puVar20;
  long lStack_290;
  long *plStack_288;
  undefined *puStack_278;
  long *plStack_270;
  undefined *puStack_268;
  long *plStack_260;
  undefined *puStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined4 uStack_1d8;
  undefined3 uStack_1d4;
  undefined1 uStack_1d1;
  undefined1 uStack_1c1;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined **appuStack_1a0 [7];
  long lStack_168;
  code **ppcStack_160;
  undefined ***pppuStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined7 uStack_138;
  undefined4 uStack_131;
  undefined1 uStack_12d;
  undefined1 uStack_121;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined ***pppuStack_110;
  code *pcStack_108;
  undefined **appuStack_100 [7];
  long lStack_c8;
  code **ppcStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  code *pcStack_68;
  undefined **appuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a91776c;
  appuStack_60[0] = &PTR_FUN_110c2e358;
  plVar13 = *(long **)(param_2 + 0x118);
  uStack_78 = *(undefined8 *)(param_2 + 0x118);
  uStack_80 = *(undefined8 *)(param_2 + 0x110);
  if (plVar13 != (long *)0x0) {
    plVar6 = plVar13 + 1;
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_81 = 9;
  uStack_98 = 0x6b63616264656546;
  uStack_90 = 0x5f;
  lStack_70 = param_2;
  FUN_10a917858(param_1,&uStack_80,&uStack_98,&pcStack_68);
  if (plVar13 != (long *)0x0) {
    plVar6 = plVar13 + 1;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  pppuVar5 = appuStack_60;
  (*(code *)*appuStack_60[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a084504(&uStack_80);
  (*(code *)*appuStack_60[0])(appuStack_60);
  pppuVar17 = pppuVar5;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a8fcd18;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_108 = FUN_10a9179dc;
  appuStack_100[0] = &PTR_FUN_110c2e3c0;
  ppuVar14 = pppuVar17[0x23];
  ppuStack_118 = pppuVar17[0x23];
  ppuStack_120 = pppuVar17[0x22];
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar15 = ppuVar14 + 1;
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
      if (bVar4) {
        *ppuVar15 = *ppuVar15 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_121 = 0xb;
  uStack_138 = 0x74616c756d6953;
  uStack_131 = 0x5f6e6f69;
  uStack_12d = 0;
  pppuStack_110 = pppuVar17;
  ppcStack_c0 = &pcStack_68;
  pppuStack_b8 = pppuVar5;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_10a917858(extraout_x8,&ppuStack_120,&uStack_138,&pcStack_108);
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar15 = ppuVar14 + 1;
    do {
      puVar11 = *ppuVar15;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
      if (bVar4) {
        *ppuVar15 = puVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(*ppuVar14 + 0x10))(ppuVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
    }
  }
  pppuVar5 = appuStack_100;
  (*(code *)*appuStack_100[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a084504(&ppuStack_120);
  (*(code *)*appuStack_100[0])(appuStack_100);
  pppuVar17 = pppuVar5;
  __Unwind_Resume();
  pcStack_148 = FUN_10a8fce4c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_1a8 = FUN_10a917ac8;
  appuStack_1a0[0] = &PTR_FUN_110c2e3d8;
  ppuVar14 = pppuVar17[0x23];
  ppuStack_1b8 = pppuVar17[0x23];
  ppuStack_1c0 = pppuVar17[0x22];
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar15 = ppuVar14 + 1;
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
      if (bVar4) {
        *ppuVar15 = *ppuVar15 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_1c1 = 7;
  uStack_1d8 = 0x7074754f;
  uStack_1d4 = 0x5f7475;
  uStack_1d1 = 0;
  pppuStack_1b0 = pppuVar17;
  ppcStack_160 = &pcStack_108;
  pppuStack_158 = pppuVar5;
  ppuStack_150 = &puStack_b0;
  FUN_10a917858(extraout_x8_00,&ppuStack_1c0,&uStack_1d8,&pcStack_1a8);
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar15 = ppuVar14 + 1;
    do {
      puVar11 = *ppuVar15;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
      if (bVar4) {
        *ppuVar15 = puVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(*ppuVar14 + 0x10))(ppuVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
    }
  }
  pppuVar5 = appuStack_1a0;
  (*(code *)*appuStack_1a0[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a084504(&ppuStack_1c0);
  (*(code *)*appuStack_1a0[0])(appuStack_1a0);
  __Unwind_Resume();
  ppuVar14 = pppuVar5[10];
  if (ppuVar14 == (undefined **)0x0) {
    plVar6 = (long *)0x148;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_DAT_110c2e460;
    plVar13 = plVar6 + 3;
    FUN_10a8fbd2c(plVar13,0);
    plStack_248 = plVar13;
    plStack_240 = plVar6;
    FUN_10a917d88(&plStack_248,plVar6 + 8,plVar13);
    FUN_10a917c24(extraout_x8_01,&plStack_248);
    if (plStack_240 != (long *)0x0) {
      plVar13 = plStack_240 + 1;
      do {
        lVar10 = *plVar13;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_240;
      } while (cVar2 != '\0');
      goto LAB_10a8fd1e4;
    }
  }
  else {
    puVar11 = ppuVar14[0x10b];
    plVar13 = (long *)ppuVar14[0x10c];
    if (plVar13 != (long *)0x0) {
      plVar6 = plVar13 + 1;
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = (long *)0x130;
    puStack_278 = puVar11;
    plStack_270 = plVar13;
    __Znwm();
    FUN_10a8fbd2c();
    puStack_268 = puVar11;
    plStack_260 = plVar13;
    if (plVar13 != (long *)0x0) {
      plVar7 = plVar13 + 1;
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar7 = plVar13 + 2;
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
    plVar7 = (long *)0x30;
    puStack_258 = puVar11;
    plStack_250 = plVar13;
    plStack_248 = plVar6;
    __Znwm();
    puStack_258 = (undefined *)0x0;
    plStack_250 = (long *)0x0;
    *plVar7 = (long)&PTR_DAT_110c2e400;
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar7[3] = (long)plVar6;
    plVar7[4] = (long)puVar11;
    plVar7[5] = (long)plVar13;
    plStack_240 = plVar7;
    FUN_10a917d88(&plStack_248,plVar6 + 5,plVar6);
    FUN_10a917c24(extraout_x8_01,&plStack_248);
    plVar13 = plStack_240;
    if (plStack_240 != (long *)0x0) {
      plVar6 = plStack_240 + 1;
      do {
        lVar10 = *plVar6;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_240 + 0x10))(plStack_240);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    if (plStack_250 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar13 = plStack_260;
    if (plStack_260 != (long *)0x0) {
      plVar6 = plStack_260 + 1;
      do {
        lVar10 = *plVar6;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_260 + 0x10))(plStack_260);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    if ((puStack_278 != (undefined *)0x0) &&
       (plVar13 = (long *)*extraout_x8_01, plVar13 != (long *)0x0)) {
      plStack_240 = (long *)extraout_x8_01[1];
      if (plStack_240 != (long *)0x0) {
        plVar6 = plStack_240 + 1;
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_248 = plVar13;
      FUN_10aa88c30(puStack_278,&plStack_248);
      plVar13 = plStack_240;
      if (plStack_240 != (long *)0x0) {
        plVar6 = plStack_240 + 1;
        do {
          lVar10 = *plVar6;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_240 + 0x10))(plStack_240);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
    }
    if (plStack_270 != (long *)0x0) {
      plVar13 = plStack_270 + 1;
      do {
        lVar10 = *plVar13;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_270;
      } while (cVar2 != '\0');
LAB_10a8fd1e4:
      if (lVar10 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  pppuVar17 = (undefined ***)*extraout_x8_01;
  if (pppuVar17 != pppuVar5) {
    pppuVar16 = pppuVar17 + 0x1c;
    ppuVar15 = *pppuVar16;
    ppuVar14 = pppuVar5[0x1c];
    ppuVar1 = pppuVar5[0x1d];
    uVar12 = (long)ppuVar1 - (long)ppuVar14;
    ppuVar9 = pppuVar17[0x1e];
    if ((ulong)((long)ppuVar9 - (long)ppuVar15) < uVar12) {
      uVar12 = (long)uVar12 >> 4;
      if (ppuVar15 != (undefined **)0x0) {
        ppuVar8 = pppuVar17[0x1d];
        ppuVar9 = ppuVar15;
        if (ppuVar8 != ppuVar15) {
          do {
            ppuVar8 = ppuVar8 + -2;
            FUN_10a0e3194();
          } while (ppuVar8 != ppuVar15);
          ppuVar9 = *pppuVar16;
        }
        pppuVar17[0x1d] = ppuVar15;
        __ZdlPv(ppuVar9);
        ppuVar9 = (undefined **)0x0;
        *pppuVar16 = (undefined **)0x0;
        pppuVar17[0x1d] = (undefined **)0x0;
        pppuVar17[0x1e] = (undefined **)0x0;
      }
      if (uVar12 >> 0x3c != 0) {
        FUN_10a0cfe84();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a8fd590);
        (*pcVar3)();
      }
      uVar19 = (long)ppuVar9 >> 3;
      if ((ulong)((long)ppuVar9 >> 3) <= uVar12) {
        uVar19 = uVar12;
      }
      if ((undefined **)0x7fffffffffffffef < ppuVar9) {
        uVar19 = 0xfffffffffffffff;
      }
      FUN_10a0cffb4(pppuVar16,uVar19);
      ppuVar9 = pppuVar17[0x1d];
      for (; ppuVar14 != ppuVar1; ppuVar14 = ppuVar14 + 2) {
        puVar11 = ppuVar14[1];
        puVar20 = *ppuVar14;
        ppuVar9[1] = ppuVar14[1];
        *ppuVar9 = puVar20;
        if (puVar11 != (undefined *)0x0) {
          plVar13 = (long *)(puVar11 + 8);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuVar9 = ppuVar9 + 2;
      }
    }
    else {
      ppuVar9 = pppuVar17[0x1d];
      uVar19 = (long)ppuVar9 - (long)ppuVar15;
      if (uVar12 <= uVar19) {
        if (ppuVar14 != ppuVar1) {
          do {
            FUN_10a19ad28(ppuVar15,ppuVar14);
            ppuVar14 = ppuVar14 + 2;
            ppuVar15 = ppuVar15 + 2;
          } while (ppuVar14 != ppuVar1);
          ppuVar9 = pppuVar17[0x1d];
        }
        while (ppuVar9 != ppuVar15) {
          ppuVar9 = ppuVar9 + -2;
          FUN_10a0e3194();
        }
        pppuVar17[0x1d] = ppuVar15;
        goto LAB_10a8fd3a8;
      }
      ppuVar8 = (undefined **)((long)ppuVar14 + uVar19);
      if (ppuVar9 != ppuVar15) {
        do {
          FUN_10a19ad28(ppuVar15,ppuVar14);
          ppuVar14 = ppuVar14 + 2;
          ppuVar15 = ppuVar15 + 2;
          uVar19 = uVar19 - 0x10;
        } while (uVar19 != 0);
        ppuVar9 = pppuVar17[0x1d];
      }
      for (; ppuVar8 != ppuVar1; ppuVar8 = ppuVar8 + 2) {
        puVar11 = ppuVar8[1];
        puVar20 = *ppuVar8;
        ppuVar9[1] = ppuVar8[1];
        *ppuVar9 = puVar20;
        if (puVar11 != (undefined *)0x0) {
          plVar13 = (long *)(puVar11 + 8);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuVar9 = ppuVar9 + 2;
      }
    }
    pppuVar17[0x1d] = ppuVar9;
  }
LAB_10a8fd3a8:
  pppuVar17 = (undefined ***)pppuVar5[0x1f];
  while (pppuVar17 != pppuVar5 + 0x20) {
    lVar10 = *extraout_x8_01;
    FUN_10a942b5c(&lStack_290,pppuVar17[7]);
    plVar13 = (long *)(lVar10 + 0xf8);
    plVar6 = plVar13;
    FUN_10a917590(plVar13,&puStack_258,pppuVar17 + 4);
    plVar7 = (long *)*plVar6;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x48;
      __Znwm();
      uStack_238 = 0;
      plStack_248 = plVar7;
      plStack_240 = plVar13;
      if (*(char *)((long)pppuVar17 + 0x37) < '\0') {
        func_0x000107c3192c(plVar7 + 4,pppuVar17[4],pppuVar17[5]);
      }
      else {
        ppuVar15 = pppuVar17[5];
        ppuVar14 = pppuVar17[4];
        plVar7[6] = (long)pppuVar17[6];
        plVar7[5] = (long)ppuVar15;
        plVar7[4] = (long)ppuVar14;
      }
      plVar7[7] = 0;
      plVar7[8] = 0;
      FUN_10a917614(plVar13,puStack_258,plVar6,plVar7);
    }
    if (plStack_288 != (long *)0x0) {
      plVar13 = plStack_288 + 1;
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar13 = (long *)plVar7[8];
    plVar7[8] = (long)plStack_288;
    plVar7[7] = lStack_290;
    if (plVar13 != (long *)0x0) {
      plVar6 = plVar13 + 1;
      do {
        lVar10 = *plVar6;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plVar13 = plStack_288;
    if (plStack_288 != (long *)0x0) {
      plVar6 = plStack_288 + 1;
      do {
        lVar10 = *plVar6;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_288 + 0x10))(plStack_288);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    pppuVar16 = (undefined ***)pppuVar17[1];
    pppuVar18 = pppuVar17;
    if ((undefined ***)pppuVar17[1] == (undefined ***)0x0) {
      do {
        pppuVar17 = (undefined ***)pppuVar18[2];
        bVar4 = (undefined ***)*pppuVar17 != pppuVar18;
        pppuVar18 = pppuVar17;
      } while (bVar4);
    }
    else {
      do {
        pppuVar17 = pppuVar16;
        pppuVar16 = (undefined ***)*pppuVar17;
      } while ((undefined ***)*pppuVar17 != (undefined ***)0x0);
    }
  }
  return;
}



/* Entry: 10a8fcd18; end: 10a8fce4b;  */

void FUN_10a8fcd18(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  undefined ***pppuVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined **ppuVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  ulong uVar19;
  undefined *puVar20;
  long lStack_1f0;
  long *plStack_1e8;
  undefined *puStack_1d8;
  long *plStack_1d0;
  undefined *puStack_1c8;
  long *plStack_1c0;
  undefined *puStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_138;
  undefined3 uStack_134;
  undefined1 uStack_131;
  undefined1 uStack_121;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined ***pppuStack_110;
  code *pcStack_108;
  undefined **appuStack_100 [7];
  long lStack_c8;
  code **ppcStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined7 uStack_98;
  undefined4 uStack_91;
  undefined1 uStack_8d;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  code *pcStack_68;
  undefined **appuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a9179dc;
  appuStack_60[0] = &PTR_FUN_110c2e3c0;
  plVar13 = *(long **)(param_2 + 0x118);
  uStack_78 = *(undefined8 *)(param_2 + 0x118);
  uStack_80 = *(undefined8 *)(param_2 + 0x110);
  if (plVar13 != (long *)0x0) {
    plVar6 = plVar13 + 1;
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_81 = 0xb;
  uStack_98 = 0x74616c756d6953;
  uStack_91 = 0x5f6e6f69;
  uStack_8d = 0;
  lStack_70 = param_2;
  FUN_10a917858(param_1,&uStack_80,&uStack_98,&pcStack_68);
  if (plVar13 != (long *)0x0) {
    plVar6 = plVar13 + 1;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  pppuVar5 = appuStack_60;
  (*(code *)*appuStack_60[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a084504(&uStack_80);
  (*(code *)*appuStack_60[0])(appuStack_60);
  pppuVar17 = pppuVar5;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a8fce4c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_108 = FUN_10a917ac8;
  appuStack_100[0] = &PTR_FUN_110c2e3d8;
  ppuVar14 = pppuVar17[0x23];
  ppuStack_118 = pppuVar17[0x23];
  ppuStack_120 = pppuVar17[0x22];
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar15 = ppuVar14 + 1;
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
      if (bVar4) {
        *ppuVar15 = *ppuVar15 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_121 = 7;
  uStack_138 = 0x7074754f;
  uStack_134 = 0x5f7475;
  uStack_131 = 0;
  pppuStack_110 = pppuVar17;
  ppcStack_c0 = &pcStack_68;
  pppuStack_b8 = pppuVar5;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_10a917858(extraout_x8,&ppuStack_120,&uStack_138,&pcStack_108);
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar15 = ppuVar14 + 1;
    do {
      puVar11 = *ppuVar15;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
      if (bVar4) {
        *ppuVar15 = puVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(*ppuVar14 + 0x10))(ppuVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
    }
  }
  pppuVar5 = appuStack_100;
  (*(code *)*appuStack_100[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a084504(&ppuStack_120);
  (*(code *)*appuStack_100[0])(appuStack_100);
  __Unwind_Resume();
  ppuVar14 = pppuVar5[10];
  if (ppuVar14 == (undefined **)0x0) {
    plVar6 = (long *)0x148;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_DAT_110c2e460;
    plVar13 = plVar6 + 3;
    FUN_10a8fbd2c(plVar13,0);
    plStack_1a8 = plVar13;
    plStack_1a0 = plVar6;
    FUN_10a917d88(&plStack_1a8,plVar6 + 8,plVar13);
    FUN_10a917c24(extraout_x8_00,&plStack_1a8);
    if (plStack_1a0 != (long *)0x0) {
      plVar13 = plStack_1a0 + 1;
      do {
        lVar10 = *plVar13;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_1a0;
      } while (cVar2 != '\0');
      goto LAB_10a8fd1e4;
    }
  }
  else {
    puVar11 = ppuVar14[0x10b];
    plVar13 = (long *)ppuVar14[0x10c];
    if (plVar13 != (long *)0x0) {
      plVar6 = plVar13 + 1;
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = (long *)0x130;
    puStack_1d8 = puVar11;
    plStack_1d0 = plVar13;
    __Znwm();
    FUN_10a8fbd2c();
    puStack_1c8 = puVar11;
    plStack_1c0 = plVar13;
    if (plVar13 != (long *)0x0) {
      plVar7 = plVar13 + 1;
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar7 = plVar13 + 2;
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
    plVar7 = (long *)0x30;
    puStack_1b8 = puVar11;
    plStack_1b0 = plVar13;
    plStack_1a8 = plVar6;
    __Znwm();
    puStack_1b8 = (undefined *)0x0;
    plStack_1b0 = (long *)0x0;
    *plVar7 = (long)&PTR_DAT_110c2e400;
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar7[3] = (long)plVar6;
    plVar7[4] = (long)puVar11;
    plVar7[5] = (long)plVar13;
    plStack_1a0 = plVar7;
    FUN_10a917d88(&plStack_1a8,plVar6 + 5,plVar6);
    FUN_10a917c24(extraout_x8_00,&plStack_1a8);
    plVar13 = plStack_1a0;
    if (plStack_1a0 != (long *)0x0) {
      plVar6 = plStack_1a0 + 1;
      do {
        lVar10 = *plVar6;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    if (plStack_1b0 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar13 = plStack_1c0;
    if (plStack_1c0 != (long *)0x0) {
      plVar6 = plStack_1c0 + 1;
      do {
        lVar10 = *plVar6;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    if ((puStack_1d8 != (undefined *)0x0) &&
       (plVar13 = (long *)*extraout_x8_00, plVar13 != (long *)0x0)) {
      plStack_1a0 = (long *)extraout_x8_00[1];
      if (plStack_1a0 != (long *)0x0) {
        plVar6 = plStack_1a0 + 1;
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_1a8 = plVar13;
      FUN_10aa88c30(puStack_1d8,&plStack_1a8);
      plVar13 = plStack_1a0;
      if (plStack_1a0 != (long *)0x0) {
        plVar6 = plStack_1a0 + 1;
        do {
          lVar10 = *plVar6;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
    }
    if (plStack_1d0 != (long *)0x0) {
      plVar13 = plStack_1d0 + 1;
      do {
        lVar10 = *plVar13;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_1d0;
      } while (cVar2 != '\0');
LAB_10a8fd1e4:
      if (lVar10 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  pppuVar17 = (undefined ***)*extraout_x8_00;
  if (pppuVar17 != pppuVar5) {
    pppuVar16 = pppuVar17 + 0x1c;
    ppuVar15 = *pppuVar16;
    ppuVar14 = pppuVar5[0x1c];
    ppuVar1 = pppuVar5[0x1d];
    uVar12 = (long)ppuVar1 - (long)ppuVar14;
    ppuVar9 = pppuVar17[0x1e];
    if ((ulong)((long)ppuVar9 - (long)ppuVar15) < uVar12) {
      uVar12 = (long)uVar12 >> 4;
      if (ppuVar15 != (undefined **)0x0) {
        ppuVar8 = pppuVar17[0x1d];
        ppuVar9 = ppuVar15;
        if (ppuVar8 != ppuVar15) {
          do {
            ppuVar8 = ppuVar8 + -2;
            FUN_10a0e3194();
          } while (ppuVar8 != ppuVar15);
          ppuVar9 = *pppuVar16;
        }
        pppuVar17[0x1d] = ppuVar15;
        __ZdlPv(ppuVar9);
        ppuVar9 = (undefined **)0x0;
        *pppuVar16 = (undefined **)0x0;
        pppuVar17[0x1d] = (undefined **)0x0;
        pppuVar17[0x1e] = (undefined **)0x0;
      }
      if (uVar12 >> 0x3c != 0) {
        FUN_10a0cfe84();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a8fd590);
        (*pcVar3)();
      }
      uVar19 = (long)ppuVar9 >> 3;
      if ((ulong)((long)ppuVar9 >> 3) <= uVar12) {
        uVar19 = uVar12;
      }
      if ((undefined **)0x7fffffffffffffef < ppuVar9) {
        uVar19 = 0xfffffffffffffff;
      }
      FUN_10a0cffb4(pppuVar16,uVar19);
      ppuVar9 = pppuVar17[0x1d];
      for (; ppuVar14 != ppuVar1; ppuVar14 = ppuVar14 + 2) {
        puVar11 = ppuVar14[1];
        puVar20 = *ppuVar14;
        ppuVar9[1] = ppuVar14[1];
        *ppuVar9 = puVar20;
        if (puVar11 != (undefined *)0x0) {
          plVar13 = (long *)(puVar11 + 8);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuVar9 = ppuVar9 + 2;
      }
    }
    else {
      ppuVar9 = pppuVar17[0x1d];
      uVar19 = (long)ppuVar9 - (long)ppuVar15;
      if (uVar12 <= uVar19) {
        if (ppuVar14 != ppuVar1) {
          do {
            FUN_10a19ad28(ppuVar15,ppuVar14);
            ppuVar14 = ppuVar14 + 2;
            ppuVar15 = ppuVar15 + 2;
          } while (ppuVar14 != ppuVar1);
          ppuVar9 = pppuVar17[0x1d];
        }
        while (ppuVar9 != ppuVar15) {
          ppuVar9 = ppuVar9 + -2;
          FUN_10a0e3194();
        }
        pppuVar17[0x1d] = ppuVar15;
        goto LAB_10a8fd3a8;
      }
      ppuVar8 = (undefined **)((long)ppuVar14 + uVar19);
      if (ppuVar9 != ppuVar15) {
        do {
          FUN_10a19ad28(ppuVar15,ppuVar14);
          ppuVar14 = ppuVar14 + 2;
          ppuVar15 = ppuVar15 + 2;
          uVar19 = uVar19 - 0x10;
        } while (uVar19 != 0);
        ppuVar9 = pppuVar17[0x1d];
      }
      for (; ppuVar8 != ppuVar1; ppuVar8 = ppuVar8 + 2) {
        puVar11 = ppuVar8[1];
        puVar20 = *ppuVar8;
        ppuVar9[1] = ppuVar8[1];
        *ppuVar9 = puVar20;
        if (puVar11 != (undefined *)0x0) {
          plVar13 = (long *)(puVar11 + 8);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuVar9 = ppuVar9 + 2;
      }
    }
    pppuVar17[0x1d] = ppuVar9;
  }
LAB_10a8fd3a8:
  pppuVar17 = (undefined ***)pppuVar5[0x1f];
  while (pppuVar17 != pppuVar5 + 0x20) {
    lVar10 = *extraout_x8_00;
    FUN_10a942b5c(&lStack_1f0,pppuVar17[7]);
    plVar13 = (long *)(lVar10 + 0xf8);
    plVar6 = plVar13;
    FUN_10a917590(plVar13,&puStack_1b8,pppuVar17 + 4);
    plVar7 = (long *)*plVar6;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x48;
      __Znwm();
      uStack_198 = 0;
      plStack_1a8 = plVar7;
      plStack_1a0 = plVar13;
      if (*(char *)((long)pppuVar17 + 0x37) < '\0') {
        func_0x000107c3192c(plVar7 + 4,pppuVar17[4],pppuVar17[5]);
      }
      else {
        ppuVar15 = pppuVar17[5];
        ppuVar14 = pppuVar17[4];
        plVar7[6] = (long)pppuVar17[6];
        plVar7[5] = (long)ppuVar15;
        plVar7[4] = (long)ppuVar14;
      }
      plVar7[7] = 0;
      plVar7[8] = 0;
      FUN_10a917614(plVar13,puStack_1b8,plVar6,plVar7);
    }
    if (plStack_1e8 != (long *)0x0) {
      plVar13 = plStack_1e8 + 1;
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar13 = (long *)plVar7[8];
    plVar7[8] = (long)plStack_1e8;
    plVar7[7] = lStack_1f0;
    if (plVar13 != (long *)0x0) {
      plVar6 = plVar13 + 1;
      do {
        lVar10 = *plVar6;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plVar13 = plStack_1e8;
    if (plStack_1e8 != (long *)0x0) {
      plVar6 = plStack_1e8 + 1;
      do {
        lVar10 = *plVar6;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    pppuVar16 = (undefined ***)pppuVar17[1];
    pppuVar18 = pppuVar17;
    if ((undefined ***)pppuVar17[1] == (undefined ***)0x0) {
      do {
        pppuVar17 = (undefined ***)pppuVar18[2];
        bVar4 = (undefined ***)*pppuVar17 != pppuVar18;
        pppuVar18 = pppuVar17;
      } while (bVar4);
    }
    else {
      do {
        pppuVar17 = pppuVar16;
        pppuVar16 = (undefined ***)*pppuVar17;
      } while ((undefined ***)*pppuVar17 != (undefined ***)0x0);
    }
  }
  return;
}



/* Entry: 10a8fce4c; end: 10a8fcf7b;  */

void FUN_10a8fce4c(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  undefined ***pppuVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  long *extraout_x8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined ***pppuVar15;
  undefined *puVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  ulong uVar19;
  undefined *puVar20;
  long lStack_150;
  long *plStack_148;
  undefined *puStack_138;
  long *plStack_130;
  undefined *puStack_128;
  long *plStack_120;
  undefined *puStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_98;
  undefined3 uStack_94;
  undefined1 uStack_91;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  code *pcStack_68;
  undefined **appuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a917ac8;
  appuStack_60[0] = &PTR_FUN_110c2e3d8;
  plVar12 = *(long **)(param_2 + 0x118);
  uStack_78 = *(undefined8 *)(param_2 + 0x118);
  uStack_80 = *(undefined8 *)(param_2 + 0x110);
  if (plVar12 != (long *)0x0) {
    plVar6 = plVar12 + 1;
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_81 = 7;
  uStack_98 = 0x7074754f;
  uStack_94 = 0x5f7475;
  uStack_91 = 0;
  lStack_70 = param_2;
  FUN_10a917858(param_1,&uStack_80,&uStack_98,&pcStack_68);
  if (plVar12 != (long *)0x0) {
    plVar6 = plVar12 + 1;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  pppuVar5 = appuStack_60;
  (*(code *)*appuStack_60[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a084504(&uStack_80);
  (*(code *)*appuStack_60[0])(appuStack_60);
  __Unwind_Resume();
  ppuVar14 = pppuVar5[10];
  if (ppuVar14 == (undefined **)0x0) {
    plVar6 = (long *)0x148;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_DAT_110c2e460;
    plVar12 = plVar6 + 3;
    FUN_10a8fbd2c(plVar12,0);
    plStack_108 = plVar12;
    plStack_100 = plVar6;
    FUN_10a917d88(&plStack_108,plVar6 + 8,plVar12);
    FUN_10a917c24(extraout_x8,&plStack_108);
    if (plStack_100 != (long *)0x0) {
      plVar12 = plStack_100 + 1;
      do {
        lVar10 = *plVar12;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_100;
      } while (cVar2 != '\0');
      goto LAB_10a8fd1e4;
    }
  }
  else {
    puVar16 = ppuVar14[0x10b];
    plVar12 = (long *)ppuVar14[0x10c];
    if (plVar12 != (long *)0x0) {
      plVar6 = plVar12 + 1;
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = (long *)0x130;
    puStack_138 = puVar16;
    plStack_130 = plVar12;
    __Znwm();
    FUN_10a8fbd2c();
    puStack_128 = puVar16;
    plStack_120 = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar7 = plVar12 + 1;
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar7 = plVar12 + 2;
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
    plVar7 = (long *)0x30;
    puStack_118 = puVar16;
    plStack_110 = plVar12;
    plStack_108 = plVar6;
    __Znwm();
    puStack_118 = (undefined *)0x0;
    plStack_110 = (long *)0x0;
    *plVar7 = (long)&PTR_DAT_110c2e400;
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar7[3] = (long)plVar6;
    plVar7[4] = (long)puVar16;
    plVar7[5] = (long)plVar12;
    plStack_100 = plVar7;
    FUN_10a917d88(&plStack_108,plVar6 + 5,plVar6);
    FUN_10a917c24(extraout_x8,&plStack_108);
    plVar12 = plStack_100;
    if (plStack_100 != (long *)0x0) {
      plVar6 = plStack_100 + 1;
      do {
        lVar10 = *plVar6;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_100 + 0x10))(plStack_100);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if (plStack_110 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar12 = plStack_120;
    if (plStack_120 != (long *)0x0) {
      plVar6 = plStack_120 + 1;
      do {
        lVar10 = *plVar6;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_120 + 0x10))(plStack_120);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if ((puStack_138 != (undefined *)0x0) &&
       (plVar12 = (long *)*extraout_x8, plVar12 != (long *)0x0)) {
      plStack_100 = (long *)extraout_x8[1];
      if (plStack_100 != (long *)0x0) {
        plVar6 = plStack_100 + 1;
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_108 = plVar12;
      FUN_10aa88c30(puStack_138,&plStack_108);
      plVar12 = plStack_100;
      if (plStack_100 != (long *)0x0) {
        plVar6 = plStack_100 + 1;
        do {
          lVar10 = *plVar6;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_100 + 0x10))(plStack_100);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
    }
    if (plStack_130 != (long *)0x0) {
      plVar12 = plStack_130 + 1;
      do {
        lVar10 = *plVar12;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_130;
      } while (cVar2 != '\0');
LAB_10a8fd1e4:
      if (lVar10 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  pppuVar17 = (undefined ***)*extraout_x8;
  if (pppuVar17 != pppuVar5) {
    pppuVar15 = pppuVar17 + 0x1c;
    ppuVar13 = *pppuVar15;
    ppuVar14 = pppuVar5[0x1c];
    ppuVar1 = pppuVar5[0x1d];
    uVar11 = (long)ppuVar1 - (long)ppuVar14;
    ppuVar9 = pppuVar17[0x1e];
    if ((ulong)((long)ppuVar9 - (long)ppuVar13) < uVar11) {
      uVar11 = (long)uVar11 >> 4;
      if (ppuVar13 != (undefined **)0x0) {
        ppuVar8 = pppuVar17[0x1d];
        ppuVar9 = ppuVar13;
        if (ppuVar8 != ppuVar13) {
          do {
            ppuVar8 = ppuVar8 + -2;
            FUN_10a0e3194();
          } while (ppuVar8 != ppuVar13);
          ppuVar9 = *pppuVar15;
        }
        pppuVar17[0x1d] = ppuVar13;
        __ZdlPv(ppuVar9);
        ppuVar9 = (undefined **)0x0;
        *pppuVar15 = (undefined **)0x0;
        pppuVar17[0x1d] = (undefined **)0x0;
        pppuVar17[0x1e] = (undefined **)0x0;
      }
      if (uVar11 >> 0x3c != 0) {
        FUN_10a0cfe84();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a8fd590);
        (*pcVar3)();
      }
      uVar19 = (long)ppuVar9 >> 3;
      if ((ulong)((long)ppuVar9 >> 3) <= uVar11) {
        uVar19 = uVar11;
      }
      if ((undefined **)0x7fffffffffffffef < ppuVar9) {
        uVar19 = 0xfffffffffffffff;
      }
      FUN_10a0cffb4(pppuVar15,uVar19);
      ppuVar9 = pppuVar17[0x1d];
      for (; ppuVar14 != ppuVar1; ppuVar14 = ppuVar14 + 2) {
        puVar16 = ppuVar14[1];
        puVar20 = *ppuVar14;
        ppuVar9[1] = ppuVar14[1];
        *ppuVar9 = puVar20;
        if (puVar16 != (undefined *)0x0) {
          plVar12 = (long *)(puVar16 + 8);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = *plVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuVar9 = ppuVar9 + 2;
      }
    }
    else {
      ppuVar9 = pppuVar17[0x1d];
      uVar19 = (long)ppuVar9 - (long)ppuVar13;
      if (uVar11 <= uVar19) {
        if (ppuVar14 != ppuVar1) {
          do {
            FUN_10a19ad28(ppuVar13,ppuVar14);
            ppuVar14 = ppuVar14 + 2;
            ppuVar13 = ppuVar13 + 2;
          } while (ppuVar14 != ppuVar1);
          ppuVar9 = pppuVar17[0x1d];
        }
        while (ppuVar9 != ppuVar13) {
          ppuVar9 = ppuVar9 + -2;
          FUN_10a0e3194();
        }
        pppuVar17[0x1d] = ppuVar13;
        goto LAB_10a8fd3a8;
      }
      ppuVar8 = (undefined **)((long)ppuVar14 + uVar19);
      if (ppuVar9 != ppuVar13) {
        do {
          FUN_10a19ad28(ppuVar13,ppuVar14);
          ppuVar14 = ppuVar14 + 2;
          ppuVar13 = ppuVar13 + 2;
          uVar19 = uVar19 - 0x10;
        } while (uVar19 != 0);
        ppuVar9 = pppuVar17[0x1d];
      }
      for (; ppuVar8 != ppuVar1; ppuVar8 = ppuVar8 + 2) {
        puVar16 = ppuVar8[1];
        puVar20 = *ppuVar8;
        ppuVar9[1] = ppuVar8[1];
        *ppuVar9 = puVar20;
        if (puVar16 != (undefined *)0x0) {
          plVar12 = (long *)(puVar16 + 8);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = *plVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuVar9 = ppuVar9 + 2;
      }
    }
    pppuVar17[0x1d] = ppuVar9;
  }
LAB_10a8fd3a8:
  pppuVar17 = (undefined ***)pppuVar5[0x1f];
  while (pppuVar17 != pppuVar5 + 0x20) {
    lVar10 = *extraout_x8;
    FUN_10a942b5c(&lStack_150,pppuVar17[7]);
    plVar12 = (long *)(lVar10 + 0xf8);
    plVar6 = plVar12;
    FUN_10a917590(plVar12,&puStack_118,pppuVar17 + 4);
    plVar7 = (long *)*plVar6;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x48;
      __Znwm();
      uStack_f8 = 0;
      plStack_108 = plVar7;
      plStack_100 = plVar12;
      if (*(char *)((long)pppuVar17 + 0x37) < '\0') {
        func_0x000107c3192c(plVar7 + 4,pppuVar17[4],pppuVar17[5]);
      }
      else {
        ppuVar13 = pppuVar17[5];
        ppuVar14 = pppuVar17[4];
        plVar7[6] = (long)pppuVar17[6];
        plVar7[5] = (long)ppuVar13;
        plVar7[4] = (long)ppuVar14;
      }
      plVar7[7] = 0;
      plVar7[8] = 0;
      FUN_10a917614(plVar12,puStack_118,plVar6,plVar7);
    }
    if (plStack_148 != (long *)0x0) {
      plVar12 = plStack_148 + 1;
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar12 = (long *)plVar7[8];
    plVar7[8] = (long)plStack_148;
    plVar7[7] = lStack_150;
    if (plVar12 != (long *)0x0) {
      plVar6 = plVar12 + 1;
      do {
        lVar10 = *plVar6;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    plVar12 = plStack_148;
    if (plStack_148 != (long *)0x0) {
      plVar6 = plStack_148 + 1;
      do {
        lVar10 = *plVar6;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_148 + 0x10))(plStack_148);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    pppuVar15 = (undefined ***)pppuVar17[1];
    pppuVar18 = pppuVar17;
    if ((undefined ***)pppuVar17[1] == (undefined ***)0x0) {
      do {
        pppuVar17 = (undefined ***)pppuVar18[2];
        bVar4 = (undefined ***)*pppuVar17 != pppuVar18;
        pppuVar18 = pppuVar17;
      } while (bVar4);
    }
    else {
      do {
        pppuVar17 = pppuVar15;
        pppuVar15 = (undefined ***)*pppuVar17;
      } while ((undefined ***)*pppuVar17 != (undefined ***)0x0);
    }
  }
  return;
}



/* Entry: 10a8fcf7c; end: 10a8fd607;  */

void FUN_10a8fcf7c(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lStack_b0;
  long *plStack_a8;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  lVar16 = *(long *)(param_2 + 0x50);
  if (lVar16 == 0) {
    plVar6 = (long *)0x148;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_DAT_110c2e460;
    plVar13 = plVar6 + 3;
    FUN_10a8fbd2c(plVar13,0);
    plStack_68 = plVar13;
    plStack_60 = plVar6;
    FUN_10a917d88(&plStack_68,plVar6 + 8,plVar13);
    FUN_10a917c24(param_1,&plStack_68);
    if (plStack_60 != (long *)0x0) {
      plVar13 = plStack_60 + 1;
      do {
        lVar16 = *plVar13;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_60;
      } while (cVar3 != '\0');
      goto LAB_10a8fd1e4;
    }
  }
  else {
    lVar17 = *(long *)(lVar16 + 0x858);
    plVar13 = *(long **)(lVar16 + 0x860);
    if (plVar13 != (long *)0x0) {
      plVar6 = plVar13 + 1;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = (long *)0x130;
    lStack_98 = lVar17;
    plStack_90 = plVar13;
    __Znwm();
    FUN_10a8fbd2c();
    lStack_88 = lVar17;
    plStack_80 = plVar13;
    if (plVar13 != (long *)0x0) {
      plVar7 = plVar13 + 1;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar7 = plVar13 + 2;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
    plVar7 = (long *)0x30;
    lStack_78 = lVar17;
    plStack_70 = plVar13;
    plStack_68 = plVar6;
    __Znwm();
    lStack_78 = 0;
    plStack_70 = (long *)0x0;
    *plVar7 = (long)&PTR_DAT_110c2e400;
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar7[3] = (long)plVar6;
    plVar7[4] = lVar17;
    plVar7[5] = (long)plVar13;
    plStack_60 = plVar7;
    FUN_10a917d88(&plStack_68,plVar6 + 5,plVar6);
    FUN_10a917c24(param_1,&plStack_68);
    plVar13 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      plVar6 = plStack_60 + 1;
      do {
        lVar16 = *plVar6;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    if (plStack_70 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar13 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      plVar6 = plStack_80 + 1;
      do {
        lVar16 = *plVar6;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    if ((lStack_98 != 0) && (plVar13 = (long *)*param_1, plVar13 != (long *)0x0)) {
      plStack_60 = (long *)param_1[1];
      if (plStack_60 != (long *)0x0) {
        plVar6 = plStack_60 + 1;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plStack_68 = plVar13;
      FUN_10aa88c30(lStack_98,&plStack_68);
      plVar13 = plStack_60;
      if (plStack_60 != (long *)0x0) {
        plVar6 = plStack_60 + 1;
        do {
          lVar16 = *plVar6;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *plVar6 = lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_60 + 0x10))(plStack_60);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
    }
    if (plStack_90 != (long *)0x0) {
      plVar13 = plStack_90 + 1;
      do {
        lVar16 = *plVar13;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_90;
      } while (cVar3 != '\0');
LAB_10a8fd1e4:
      if (lVar16 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  lVar16 = *param_1;
  if (lVar16 != param_2) {
    plVar13 = (long *)(lVar16 + 0xe0);
    puVar15 = (undefined8 *)*plVar13;
    puVar14 = *(undefined8 **)(param_2 + 0xe0);
    puVar2 = *(undefined8 **)(param_2 + 0xe8);
    uVar11 = (long)puVar2 - (long)puVar14;
    uVar9 = *(ulong *)(lVar16 + 0xf0);
    if (uVar9 - (long)puVar15 < uVar11) {
      uVar11 = (long)uVar11 >> 4;
      if (puVar15 != (undefined8 *)0x0) {
        puVar8 = *(undefined8 **)(lVar16 + 0xe8);
        puVar10 = puVar15;
        if (puVar8 != puVar15) {
          do {
            puVar8 = puVar8 + -2;
            FUN_10a0e3194();
          } while (puVar8 != puVar15);
          puVar10 = (undefined8 *)*plVar13;
        }
        *(undefined8 **)(lVar16 + 0xe8) = puVar15;
        __ZdlPv(puVar10);
        uVar9 = 0;
        *plVar13 = 0;
        *(undefined8 *)(lVar16 + 0xe8) = 0;
        *(undefined8 *)(lVar16 + 0xf0) = 0;
      }
      if (uVar11 >> 0x3c != 0) {
        FUN_10a0cfe84();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8fd590);
        (*pcVar4)();
      }
      uVar1 = (long)uVar9 >> 3;
      if ((ulong)((long)uVar9 >> 3) <= uVar11) {
        uVar1 = uVar11;
      }
      if (0x7fffffffffffffef < uVar9) {
        uVar1 = 0xfffffffffffffff;
      }
      FUN_10a0cffb4(plVar13,uVar1);
      puVar10 = *(undefined8 **)(lVar16 + 0xe8);
      for (; puVar14 != puVar2; puVar14 = puVar14 + 2) {
        lVar17 = puVar14[1];
        uVar18 = *puVar14;
        puVar10[1] = puVar14[1];
        *puVar10 = uVar18;
        if (lVar17 != 0) {
          plVar13 = (long *)(lVar17 + 8);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = *plVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar10 = puVar10 + 2;
      }
    }
    else {
      puVar10 = *(undefined8 **)(lVar16 + 0xe8);
      uVar9 = (long)puVar10 - (long)puVar15;
      if (uVar11 <= uVar9) {
        if (puVar14 != puVar2) {
          do {
            FUN_10a19ad28(puVar15,puVar14);
            puVar14 = puVar14 + 2;
            puVar15 = puVar15 + 2;
          } while (puVar14 != puVar2);
          puVar10 = *(undefined8 **)(lVar16 + 0xe8);
        }
        while (puVar10 != puVar15) {
          puVar10 = puVar10 + -2;
          FUN_10a0e3194();
        }
        *(undefined8 **)(lVar16 + 0xe8) = puVar15;
        goto LAB_10a8fd3a8;
      }
      puVar8 = (undefined8 *)((long)puVar14 + uVar9);
      if (puVar10 != puVar15) {
        do {
          FUN_10a19ad28(puVar15,puVar14);
          puVar14 = puVar14 + 2;
          puVar15 = puVar15 + 2;
          uVar9 = uVar9 - 0x10;
        } while (uVar9 != 0);
        puVar10 = *(undefined8 **)(lVar16 + 0xe8);
      }
      for (; puVar8 != puVar2; puVar8 = puVar8 + 2) {
        lVar17 = puVar8[1];
        uVar18 = *puVar8;
        puVar10[1] = puVar8[1];
        *puVar10 = uVar18;
        if (lVar17 != 0) {
          plVar13 = (long *)(lVar17 + 8);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = *plVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar10 = puVar10 + 2;
      }
    }
    *(undefined8 **)(lVar16 + 0xe8) = puVar10;
  }
LAB_10a8fd3a8:
  plVar13 = *(long **)(param_2 + 0xf8);
  while (plVar13 != (long *)(param_2 + 0x100)) {
    lVar16 = *param_1;
    FUN_10a942b5c(&lStack_b0,plVar13[7]);
    plVar6 = (long *)(lVar16 + 0xf8);
    plVar7 = plVar6;
    FUN_10a917590(plVar6,&lStack_78,plVar13 + 4);
    plVar12 = (long *)*plVar7;
    if (plVar12 == (long *)0x0) {
      plVar12 = (long *)0x48;
      __Znwm();
      uStack_58 = 0;
      plStack_68 = plVar12;
      plStack_60 = plVar6;
      if (*(char *)((long)plVar13 + 0x37) < '\0') {
        func_0x000107c3192c(plVar12 + 4,plVar13[4],plVar13[5]);
      }
      else {
        lVar17 = plVar13[5];
        lVar16 = plVar13[4];
        plVar12[6] = plVar13[6];
        plVar12[5] = lVar17;
        plVar12[4] = lVar16;
      }
      plVar12[7] = 0;
      plVar12[8] = 0;
      FUN_10a917614(plVar6,lStack_78,plVar7,plVar12);
    }
    if (plStack_a8 != (long *)0x0) {
      plVar6 = plStack_a8 + 1;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = (long *)plVar12[8];
    plVar12[8] = (long)plStack_a8;
    plVar12[7] = lStack_b0;
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 1;
      do {
        lVar16 = *plVar7;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar7 = plStack_a8 + 1;
      do {
        lVar16 = *plVar7;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = (long *)plVar13[1];
    plVar7 = plVar13;
    if ((long *)plVar13[1] == (long *)0x0) {
      do {
        plVar13 = (long *)plVar7[2];
        bVar5 = (long *)*plVar13 != plVar7;
        plVar7 = plVar13;
      } while (bVar5);
    }
    else {
      do {
        plVar13 = plVar6;
        plVar6 = (long *)*plVar13;
      } while ((long *)*plVar13 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a8fd608; end: 10a8fd69b;  */

void FUN_10a8fd608(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 0x20);
  plVar5 = *(long **)(lVar4 + 0xf8);
  while (plVar5 != (long *)(lVar4 + 0x100)) {
    lVar3 = plVar5[7];
    FUN_10a9427c8(lVar3,param_2);
    if ((int)lVar3 != 0) {
      FUN_10a9423d8(plVar5[7],param_2,param_3);
    }
    plVar1 = (long *)plVar5[1];
    plVar6 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar6[2];
        bVar2 = (long *)*plVar5 != plVar6;
        plVar6 = plVar5;
      } while (bVar2);
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a8fd69c; end: 10a8fd6a3;  */

void FUN_10a8fd69c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 8);
  plVar5 = *(long **)(lVar4 + 0xf8);
  while (plVar5 != (long *)(lVar4 + 0x100)) {
    lVar3 = plVar5[7];
    FUN_10a9427c8(lVar3,param_2);
    if ((int)lVar3 != 0) {
      FUN_10a9423d8(plVar5[7],param_2,param_3);
    }
    plVar1 = (long *)plVar5[1];
    plVar6 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar6[2];
        bVar2 = (long *)*plVar5 != plVar6;
        plVar6 = plVar5;
      } while (bVar2);
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a8fd6a4; end: 10a8fd737;  */

void FUN_10a8fd6a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 0x20);
  plVar5 = *(long **)(lVar4 + 0xf8);
  while (plVar5 != (long *)(lVar4 + 0x100)) {
    lVar3 = plVar5[7];
    FUN_10a9427c8(lVar3,param_2);
    if ((int)lVar3 != 0) {
      FUN_10a942590(plVar5[7],param_2,param_3);
    }
    plVar1 = (long *)plVar5[1];
    plVar6 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar6[2];
        bVar2 = (long *)*plVar5 != plVar6;
        plVar6 = plVar5;
      } while (bVar2);
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a8fd738; end: 10a8fd73f;  */

void FUN_10a8fd738(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 8);
  plVar5 = *(long **)(lVar4 + 0xf8);
  while (plVar5 != (long *)(lVar4 + 0x100)) {
    lVar3 = plVar5[7];
    FUN_10a9427c8(lVar3,param_2);
    if ((int)lVar3 != 0) {
      FUN_10a942590(plVar5[7],param_2,param_3);
    }
    plVar1 = (long *)plVar5[1];
    plVar6 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar6[2];
        bVar2 = (long *)*plVar5 != plVar6;
        plVar6 = plVar5;
      } while (bVar2);
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a8fd740; end: 10a8fd7c7;  */

void FUN_10a8fd740(long param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 0x20);
  plVar5 = *(long **)(lVar4 + 0xf8);
  while( true ) {
    if (plVar5 == (long *)(lVar4 + 0x100)) {
      return;
    }
    uVar3 = plVar5[7];
    FUN_10a9427c8(uVar3,param_2);
    if ((uVar3 & 1) != 0) break;
    plVar1 = (long *)plVar5[1];
    plVar6 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar6[2];
        bVar2 = (long *)*plVar5 != plVar6;
        plVar6 = plVar5;
      } while (bVar2);
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a8fd7c8; end: 10a8fd7cf;  */

void FUN_10a8fd7c8(long param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 8);
  plVar5 = *(long **)(lVar4 + 0xf8);
  while( true ) {
    if (plVar5 == (long *)(lVar4 + 0x100)) {
      return;
    }
    uVar3 = plVar5[7];
    FUN_10a9427c8(uVar3,param_2);
    if ((uVar3 & 1) != 0) break;
    plVar1 = (long *)plVar5[1];
    plVar6 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar6[2];
        bVar2 = (long *)*plVar5 != plVar6;
        plVar6 = plVar5;
      } while (bVar2);
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a8fd7d0; end: 10a8fd8c7;  */

void FUN_10a8fd7d0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar3 = *(long *)(param_2 + 0x20);
  plVar4 = *(long **)(lVar3 + 0xf8);
  while (plVar4 != (long *)(lVar3 + 0x100)) {
    FUN_10a94296c(&lStack_60,plVar4[7]);
    FUN_10a1869ec(param_1,param_1[1],lStack_60,lStack_58,
                  (lStack_58 - lStack_60 >> 3) * -0x5555555555555555);
    puStack_48 = (undefined1 *)&lStack_60;
    FUN_10a0426d8(&puStack_48);
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a8fd8c8; end: 10a8fd8cf;  */

void FUN_10a8fd8c8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar3 = *(long *)(param_2 + 8);
  plVar4 = *(long **)(lVar3 + 0xf8);
  while (plVar4 != (long *)(lVar3 + 0x100)) {
    FUN_10a94296c(&lStack_60,plVar4[7]);
    FUN_10a1869ec(param_1,param_1[1],lStack_60,lStack_58,
                  (lStack_58 - lStack_60 >> 3) * -0x5555555555555555);
    puStack_48 = (undefined1 *)&lStack_60;
    FUN_10a0426d8(&puStack_48);
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a8fd8d0; end: 10a8fd97f;  */

void FUN_10a8fd8d0(long param_1,uint param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_2 < 0x20) {
    uVar4 = (ulong)param_2;
    lVar1 = param_1 + uVar4 * 0x10;
    lVar3 = *(long *)(lVar1 + 0x80);
    *(undefined8 *)(lVar1 + 0x78) = 0;
    *(undefined8 *)(lVar1 + 0x80) = 0;
    if (lVar3 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *(float *)(param_1 + uVar4 * 4 + 0x278) = -*(float *)(param_1 + 0x1404);
    *(undefined1 *)(param_1 + uVar4 + 0x340) = 0;
    *(undefined1 *)(param_1 + uVar4 + 0x360) = 1;
    if (*(char *)(param_1 + 0x3c0 + uVar4 * 0x44) == '\x01') {
      *(undefined1 *)(param_1 + 0x3c0 + uVar4 * 0x44) = 0;
    }
    param_1 = param_1 + uVar4 * 0x40;
    *(undefined4 *)(param_1 + 0xc00) = 0x3f800000;
    *(undefined8 *)(param_1 + 0xc0c) = 0;
    *(undefined8 *)(param_1 + 0xc04) = 0;
    *(undefined4 *)(param_1 + 0xc14) = 0x3f800000;
    *(undefined8 *)(param_1 + 0xc20) = 0;
    *(undefined8 *)(param_1 + 0xc18) = 0;
    *(undefined4 *)(param_1 + 0xc28) = 0x3f800000;
    *(undefined8 *)(param_1 + 0xc34) = 0;
    *(undefined8 *)(param_1 + 0xc2c) = 0;
    *(undefined4 *)(param_1 + 0xc3c) = 0x3f800000;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a8fd980);
  (*pcVar2)();
}



/* Entry: 10a8fd980; end: 10a8fda3b;  */

void FUN_10a8fd980(long *param_1,uint *param_2)

{
  uint uVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *param_1;
  uVar1 = *param_2;
  uVar5 = (ulong)uVar1;
  if (lVar7 != 0 && uVar1 != 0) {
    plVar6 = (long *)(lVar7 + 0x40);
    uVar3 = uVar5 & 0x3fff;
    uVar4 = (*(long *)(lVar7 + 0x48) - *plVar6 >> 4) * 0x4ec4ec4ec4ec4ec5;
    if (((uVar3 <= uVar4 && uVar4 - uVar3 != 0) &&
        (pcVar2 = (char *)(*plVar6 + uVar3 * 0xd0), *(uint *)(pcVar2 + 4) == uVar1)) &&
       (*pcVar2 != '\x02')) {
      FUN_10a91038c(lVar7 + 0x20,uVar5);
      FUN_10a977a0c(plVar6,uVar5);
      FUN_10a977ab4(plVar6,uVar5);
      *(long *)(lVar7 + 0x60) = *(long *)(lVar7 + 0x60) + -1;
    }
  }
  *param_2 = 0;
  return;
}



/* Entry: 10a8fda3c; end: 10a8fdb67;  */

ulong FUN_10a8fda3c(long param_1)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uStack_24;
  
  if (*(long *)(param_1 + 0x2f8) != *(long *)(param_1 + 0x300)) {
    puVar2 = (uint *)(*(long *)(param_1 + 0x300) + -4);
    uStack_24 = *puVar2;
    *(uint **)(param_1 + 0x300) = puVar2;
    puVar2 = *(uint **)(param_1 + 0x318);
    lVar1 = (long)puVar2 - (long)*(uint **)(param_1 + 0x310);
    if (lVar1 != 0) {
      uVar4 = lVar1 >> 2;
      puVar3 = *(uint **)(param_1 + 0x310);
      do {
        uVar5 = uVar4 >> 1;
        puVar2 = puVar3 + uVar5 + 1;
        uVar4 = uVar4 + (uVar4 >> 1 ^ 0xffffffffffffffff);
        if (uStack_24 <= puVar3[uVar5]) {
          puVar2 = puVar3;
          uVar4 = uVar5;
        }
        puVar3 = puVar2;
      } while (uVar4 != 0);
    }
    FUN_10a18f698(param_1 + 0x310,puVar2,&uStack_24);
    FUN_10a0e6678(param_1 + 0x328,&uStack_24);
    return (ulong)uStack_24 | 0x100000000;
  }
  return 0;
}



/* Entry: 10a8fdb68; end: 10a8fdc17;  */

void FUN_10a8fdb68(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_2;
  *param_2 = 0;
  *param_1 = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)(param_1 + 1) = uVar1;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar2 = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined1 *)((long)param_2 + 0x24) = 1;
  *(undefined1 *)((long)param_1 + 0x24) = uVar2;
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  param_2[5] = 0;
  param_2[6] = 0;
  uVar3 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar3;
  param_2[7] = 0;
  param_2[8] = 0;
  uVar3 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar3;
  param_2[9] = 0;
  param_2[10] = 0;
  uVar3 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar3;
  param_2[0xc] = 0;
  param_2[0xb] = 0;
  uVar3 = param_2[0xd];
  param_2[0xd] = 0;
  param_1[0xd] = uVar3;
  uVar3 = param_2[0xe];
  param_2[0xe] = 0;
  param_1[0xe] = uVar3;
  uVar2 = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)(param_2 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0xf) = uVar2;
  uVar3 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar3;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  return;
}



/* Entry: 10a8fdc18; end: 10a8fddff;  */

long FUN_10a8fdc18(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plStack_40;
  long *plStack_38;
  
  plStack_40 = (long *)0x0;
  plStack_38 = (long *)0x0;
  plVar5 = *(long **)(param_1 + 0x88);
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_38 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar5 = *(long **)(param_1 + 0x80);
      plStack_40 = plVar5;
      goto LAB_10a8fdc58;
    }
  }
  plVar5 = (long *)0x0;
LAB_10a8fdc58:
  FUN_10a8fd980(&plStack_40,param_1);
  if (plVar5 != (long *)0x0) {
    uVar2 = *(uint *)(param_1 + 4);
    uVar10 = (ulong)uVar2;
    if (uVar2 != 0) {
      lVar6 = plVar5[4];
      uVar8 = uVar10 & 0x3fff;
      uVar9 = (plVar5[5] - lVar6 >> 3) * -0x3333333333333333;
      if (((uVar8 <= uVar9 && uVar9 - uVar8 != 0) &&
          (pcVar7 = (char *)(lVar6 + uVar8 * 0x28), *(uint *)(pcVar7 + 4) == uVar2)) &&
         (*pcVar7 != '\x02')) {
        FUN_10a977780(plVar5,uVar10);
        FUN_10a91000c(plVar5 + 4,uVar10);
        plVar5 = plStack_40;
      }
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (plVar5 != (long *)0x0) {
    uVar2 = *(uint *)(param_1 + 8);
    uVar10 = (ulong)uVar2;
    if (uVar2 != 0) {
      uVar8 = uVar10 & 0x3fff;
      uVar9 = (plVar5[1] - *plVar5 >> 3) * -0x71c71c71c71c71c7;
      if (((uVar8 <= uVar9 && uVar9 - uVar8 != 0) &&
          (pcVar7 = (char *)(*plVar5 + uVar8 * 0x48), *(uint *)(pcVar7 + 4) == uVar2)) &&
         (*pcVar7 != '\x02')) {
        func_0x00010a977544(plVar5,uVar10);
        FUN_10a9775b4(plVar5,uVar10);
      }
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  lVar6 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar6 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lVar6 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (lVar6 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0617bc(param_1 + 0x58);
  FUN_10a0e3194(param_1 + 0x48);
  FUN_10a0e3194(param_1 + 0x38);
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a8fde00; end: 10a8fdf27;  */

void FUN_10a8fde00(uint *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  long lStack_30;
  long *plStack_28;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    uVar7 = (ulong)uVar2 & 0x3fff;
    lVar8 = *(long *)(param_2 + 0x40);
    uVar9 = (*(long *)(param_2 + 0x48) - lVar8 >> 4) * 0x4ec4ec4ec4ec4ec5;
    if (((uVar7 <= uVar9 && uVar9 - uVar7 != 0) &&
        (pcVar10 = (char *)(lVar8 + uVar7 * 0xd0), *(uint *)(pcVar10 + 4) == uVar2)) &&
       (*pcVar10 != '\x02')) {
      if ((param_1[0x1a] == 1) && (lStack_30 = *(long *)(param_1 + 0xe), lStack_30 != 0)) {
        plStack_28 = *(long **)(param_1 + 0x10);
      }
      else {
        lStack_30 = *(long *)(param_1 + 0x12);
        plStack_28 = *(long **)(param_1 + 0x14);
      }
      if (plStack_28 != (long *)0x0) {
        plVar6 = plStack_28 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar8 = *(long *)(param_2 + 0x40);
        uVar7 = (ulong)*param_1 & 0x3fff;
        uVar9 = (*(long *)(param_2 + 0x48) - lVar8 >> 4) * 0x4ec4ec4ec4ec4ec5;
      }
      if (uVar9 <= uVar7) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a8fdf28);
        (*pcVar5)();
      }
      plVar6 = (long *)(lVar8 + uVar7 * 0xd0 + 0x38);
      if (*plVar6 != lStack_30) {
        FUN_10a19ad28(plVar6,&lStack_30);
      }
      plVar6 = plStack_28;
      if (plStack_28 != (long *)0x0) {
        plVar1 = plStack_28 + 1;
        do {
          lVar8 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_28 + 0x10))(plStack_28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
  }
  return;
}



/* Entry: 10a8fdf28; end: 10a8fe097;  */

long * FUN_10a8fdf28(ulong *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  plVar2 = (long *)param_1[1];
  if (plVar2 < (long *)param_1[2]) {
    FUN_10a8fdb68(plVar2,param_2);
    plVar4 = plVar2 + 0x12;
  }
  else {
    lVar11 = (long)plVar2 - *param_1;
    uVar9 = (lVar11 >> 4) * -0x71c71c71c71c71c7 + 1;
    if (0x1c71c71c71c71c7 < uVar9) {
      FUN_10a90f6c4();
LAB_10a8fe094:
      uVar5 = (uint)param_2;
      func_0x000109ffded8();
      plVar4 = (long *)0x0;
      if ((uVar5 != 0) && (lVar11 = *plVar2, lVar11 != 0)) {
        uVar9 = (ulong)(uVar5 & 0x3fff);
        uVar8 = (*(long *)(lVar11 + 0x48) - *(long *)(lVar11 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
        if ((uVar8 < uVar9 || uVar8 - uVar9 == 0) ||
           (pcVar6 = (char *)(*(long *)(lVar11 + 0x40) + uVar9 * 0xd0),
           *(uint *)(pcVar6 + 4) != uVar5)) {
          return (long *)0x0;
        }
        plVar4 = (long *)(ulong)(*pcVar6 != '\x02');
      }
      return plVar4;
    }
    lVar7 = (long)((long)param_1[2] - *param_1) >> 4;
    uVar8 = lVar7 * 0x1c71c71c71c71c72;
    if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
      uVar8 = uVar9;
    }
    if (0xe38e38e38e38e2 < (ulong)(lVar7 * -0x71c71c71c71c71c7)) {
      uVar8 = 0x1c71c71c71c71c7;
    }
    if (uVar8 == 0) {
      lVar7 = 0;
    }
    else {
      if (0x1c71c71c71c71c7 < uVar8) goto LAB_10a8fe094;
      lVar7 = uVar8 * 0x90;
      __Znwm();
    }
    plVar4 = (long *)(lVar7 + lVar11);
    plVar2 = plVar4;
    FUN_10a8fdb68(plVar4,param_2);
    plVar10 = (long *)*param_1;
    plVar1 = (long *)param_1[1];
    uVar9 = (long)plVar4 + ((long)plVar10 - (long)plVar1);
    uVar3 = uVar9;
    plVar12 = plVar10;
    if (plVar1 != plVar10) {
      do {
        FUN_10a8fdb68(uVar3,plVar12);
        plVar12 = plVar12 + 0x12;
        uVar3 = uVar3 + 0x90;
      } while (plVar12 != plVar1);
      do {
        plVar2 = plVar10;
        FUN_10a8fdc18(plVar10);
        plVar10 = plVar10 + 0x12;
      } while (plVar10 != plVar1);
      plVar10 = (long *)*param_1;
    }
    plVar4 = plVar4 + 0x12;
    *param_1 = uVar9;
    param_1[1] = (ulong)plVar4;
    param_1[2] = lVar7 + uVar8 * 0x90;
    if (plVar10 != (long *)0x0) {
      __ZdlPv(plVar10);
      plVar2 = plVar10;
    }
  }
  param_1[1] = (ulong)plVar4;
  return plVar2;
}



/* Entry: 10a8fe098; end: 10a8fe103;  */

bool FUN_10a8fe098(long *param_1,uint param_2)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  
  bVar1 = false;
  if ((param_2 != 0) && (lVar4 = *param_1, lVar4 != 0)) {
    uVar2 = (ulong)(param_2 & 0x3fff);
    uVar5 = (*(long *)(lVar4 + 0x48) - *(long *)(lVar4 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
    if ((uVar5 < uVar2 || uVar5 - uVar2 == 0) ||
       (pcVar3 = (char *)(*(long *)(lVar4 + 0x40) + uVar2 * 0xd0), *(uint *)(pcVar3 + 4) != param_2)
       ) {
      return false;
    }
    bVar1 = *pcVar3 != '\x02';
  }
  return bVar1;
}



/* Entry: 10a8fe104; end: 10a8fe15f;  */

void FUN_10a8fe104(long *param_1,undefined1 param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = (uint)param_1;
  FUN_10a90f6d8(uVar2,1);
  uVar3 = (ulong)(uVar2 & 0x3fff);
  uVar4 = (param_1[1] - *param_1 >> 3) * -0x3333333333333333;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    *(undefined1 *)(*param_1 + uVar3 * 0x28 + 0x20) = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8fe160);
  (*pcVar1)();
}



/* Entry: 10a8fe160; end: 10a8fe1b7;  */

void FUN_10a8fe160(long *param_1,uint param_2,undefined4 param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uStack_14;
  
  uVar2 = (ulong)(param_2 & 0x3fff);
  uVar3 = (param_1[1] - *param_1 >> 3) * -0x3333333333333333;
  uStack_14 = param_3;
  if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
    FUN_10a90fc98(*param_1 + uVar2 * 0x28 + 8,&uStack_14);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8fe1b8);
  (*pcVar1)();
}



/* Entry: 10a8fe1b8; end: 10a8fe207;  */

void FUN_10a8fe1b8(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    pcVar2 = (char *)param_1[1];
    for (pcVar1 = (char *)*param_1; pcVar1 != pcVar2; pcVar1 = pcVar1 + 0x48) {
      if ((((*pcVar1 != '\x02') && (*(long *)(pcVar1 + 0x18) == *(long *)(pcVar1 + 0x20))) &&
          (*(int *)(pcVar1 + 0x40) == 0)) && (*(int *)(pcVar1 + 0x30) == 0)) {
        *pcVar1 = '\x01';
      }
    }
  }
  return;
}



/* Entry: 10a8fe208; end: 10a8fe3eb;  */

void FUN_10a8fe208(long param_1,ulong param_2,ulong *param_3)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  undefined4 *puVar13;
  ulong uStack_58;
  ulong uStack_50;
  undefined4 uStack_48;
  
  if ((*(long *)(param_1 + 0x1550) != 0) &&
     (uVar8 = (*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 4) * -0x71c71c71c71c71c7,
     param_2 <= uVar8 && uVar8 - param_2 != 0)) {
    puVar13 = (undefined4 *)(*(long *)(param_1 + 0x60) + param_2 * 0x90);
    uVar10 = param_3[1];
    uVar8 = *param_3;
    if (param_3[1] != 0) {
      plVar9 = (long *)(param_3[1] + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar7 = *(long *)(puVar13 + 0xc);
    *(ulong *)(puVar13 + 0xc) = uVar10;
    *(ulong *)(puVar13 + 10) = uVar8;
    if (lVar7 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    uVar2 = puVar13[2];
    plVar9 = *(long **)(param_1 + 0x1550);
    if (uVar2 != 0 && plVar9 != (long *)0x0) {
      uVar8 = (ulong)uVar2 & 0x3fff;
      lVar7 = *plVar9;
      uVar10 = (plVar9[1] - lVar7 >> 3) * -0x71c71c71c71c71c7;
      if (((uVar8 <= uVar10 && uVar10 - uVar8 != 0) &&
          (pcVar12 = (char *)(lVar7 + uVar8 * 0x48), *(uint *)(pcVar12 + 4) == uVar2)) &&
         (*pcVar12 != '\x02')) {
        uVar11 = *param_3;
        if (uVar11 == 0) {
          uStack_58 = uStack_58 & 0xffffffff00000000;
          uStack_48 = 0;
          FUN_10a90fda4(lVar7 + uVar8 * 0x48 + 0x30,&uStack_58);
        }
        else {
          uStack_50 = param_3[1];
          if (uStack_50 != 0) {
            plVar1 = (long *)(uStack_50 + 0x10);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = *plVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            lVar7 = *plVar9;
            uVar10 = (plVar9[1] - lVar7 >> 3) * -0x71c71c71c71c71c7;
          }
          uStack_48 = 1;
          uStack_58 = uVar11;
          if (uVar10 <= uVar8) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8fe3d4);
            (*pcVar6)();
          }
          FUN_10a90fda4(lVar7 + uVar8 * 0x48 + 0x30,&uStack_58);
        }
        FUN_10a3f9220(&uStack_58);
      }
    }
    FUN_10a8fe3ec(param_1 + 0x1550,*puVar13,*(undefined1 *)(puVar13 + 9));
    func_0x00010a8fe450(*(undefined8 *)(param_1 + 0x1550),puVar13[1],*(undefined1 *)(puVar13 + 9));
    uVar3 = puVar13[2];
    if (*(char *)(puVar13 + 9) == '\x01') {
      uVar8 = *param_3;
      FUN_10a8fe508(uVar8);
    }
    else {
      uVar8 = 0;
    }
    func_0x00010a8fe4a8(*(undefined8 *)(param_1 + 0x1550),uVar3,uVar8);
  }
  return;
}



/* Entry: 10a8fe3ec; end: 10a8fe507;  */

void FUN_10a8fe3ec(long *param_1,uint param_2,byte param_3)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  ulong uVar4;
  
  if ((param_2 != 0) && (lVar3 = *param_1, lVar3 != 0)) {
    uVar1 = (ulong)(param_2 & 0x3fff);
    uVar4 = (*(long *)(lVar3 + 0x48) - *(long *)(lVar3 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
    if ((uVar1 <= uVar4 && uVar4 - uVar1 != 0) &&
       ((pbVar2 = (byte *)(*(long *)(lVar3 + 0x40) + uVar1 * 0xd0), *(uint *)(pbVar2 + 4) == param_2
        && (*pbVar2 != 2)))) {
      *pbVar2 = param_3 ^ 1;
    }
  }
  return;
}



/* Entry: 10a8fe508; end: 10a8fe6ab;  */

bool FUN_10a8fe508(long param_1)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  if ((((param_1 == 0) || ((*(ushort *)(param_1 + 0x180) & 0x217) != 0)) ||
      (lVar6 = *(long *)(*(long *)(param_1 + 0x178) + 0x30), lVar6 == 0)) ||
     (((*(ushort *)(lVar6 + 0x118) & 0x108) != 0 ||
      (plVar7 = *(long **)(lVar6 + 0x148), plVar7 == (long *)0x0)))) {
    bVar4 = false;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x140);
    plVar5 = plVar7 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5 = plVar7;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 == (long *)0x0) {
      bVar4 = false;
    }
    else {
      bVar4 = lVar6 != 0;
      plVar1 = plVar5 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar2) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  return bVar4;
}



/* Entry: 10a8fe6ac; end: 10a8fe7a7;  */

void FUN_10a8fe6ac(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_40;
  long lStack_38;
  long *plStack_30;
  long lStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lStack_28 = param_2;
    FUN_10a91a638(&lStack_38,&uStack_40,&lStack_28);
    FUN_10a1ddaa4(lStack_38,0x16);
    *(byte *)(lStack_38 + 0x2b8) = *(byte *)(lStack_38 + 0x2b8) & 0xfe;
    *(undefined1 *)(lStack_38 + 0x2fc) = 1;
    uStack_40 = 0x100000001;
    FUN_10a1ddfe4(lStack_38,&uStack_40);
    *(undefined1 *)(lStack_38 + 0x304) = 0;
    *(undefined1 *)(lStack_38 + 8) = 1;
    *(undefined1 *)(lStack_38 + 800) = 2;
    *(undefined8 *)(lStack_38 + 0x32c) = 0;
    *(undefined8 *)(lStack_38 + 0x324) = 0;
    *(undefined1 *)(lStack_38 + 0x334) = 0;
    FUN_10a2c7dc0(param_1,lStack_28,&lStack_38);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
      }
    }
  }
  return;
}



/* Entry: 10a8fe7a8; end: 10a8fe81f;  */

undefined8 * FUN_10a8fe7a8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    FUN_10a8ff6e4(param_1);
    uVar3 = param_2[1];
    uVar2 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    param_1[1] = uVar3;
    *param_1 = uVar2;
    uVar3 = param_2[3];
    uVar2 = param_2[2];
    param_2[2] = 0;
    param_2[3] = 0;
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    uVar3 = param_2[5];
    uVar2 = param_2[4];
    param_2[4] = 0;
    param_2[5] = 0;
    lVar1 = param_1[5];
    param_1[5] = uVar3;
    param_1[4] = uVar2;
    if (lVar1 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    lVar1 = param_2[5];
    param_2[4] = 0;
    param_2[5] = 0;
    if (lVar1 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a8fe820; end: 10a8fe903;  */

void FUN_10a8fe820(long param_1,code *param_2,long *param_3,int param_4)

{
  long lVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plStack_130;
  long *plStack_128;
  long lStack_120;
  undefined1 uStack_118;
  long alStack_110 [6];
  undefined1 uStack_d9;
  code *pcStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  undefined1 uStack_90;
  long lStack_68;
  
  if (*param_3 == 0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x1f0);
  if (lVar7 != 0) {
    lVar8 = param_1 + 0x1f0;
    do {
      lVar1 = 8;
      if (*(ulong *)(param_2 + 0x18) <= *(ulong *)(lVar7 + 0x38)) {
        lVar1 = 0;
        lVar8 = lVar7;
      }
      lVar7 = *(long *)(lVar7 + lVar1);
    } while (lVar7 != 0);
    if (((lVar8 != param_1 + 0x1f0) && (*(ulong *)(lVar8 + 0x38) <= *(ulong *)(param_2 + 0x18))) &&
       (plVar9 = *(long **)(lVar8 + 0x40), plVar9 != (long *)0x0)) {
      FUN_10a32f140(plVar9,param_3);
      if (param_4 == 0) {
        return;
      }
      plVar6 = plVar9;
      (**(code **)(*plVar9 + 0x20))();
      FUN_10a18ef08();
      if (((ulong)plVar6 & 1) != 0) {
        return;
      }
      FUN_10a351a84(plVar9 + 0x33,&stack0xffffffffffffffb0);
      return;
    }
  }
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x1e8;
  uStack_118 = 0;
  lVar7 = param_1;
  lStack_120 = param_1;
  pcStack_a8 = param_2;
  FUN_10a36599c(param_1,param_2,&UNK_10dd5b8f9,&pcStack_a8,alStack_110);
  plVar9 = *(long **)(lVar7 + 0x40);
  if ((plVar9 == (long *)0x0) || ((**(code **)(*plVar9 + 0x28))(), (int)plVar9 == 0x1d)) {
    uStack_118 = 1;
    plVar6 = (long *)0x1e0;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110bc5b10;
    plVar9 = plVar6 + 3;
    FUN_10a34effc(plVar9,param_2,0x1d);
    plStack_130 = plVar9;
    plStack_128 = plVar6;
    FUN_10a34f708(&plStack_130,plVar6 + 5,plVar9);
    plStack_98 = plStack_130 + 4;
    uVar2 = *(ushort *)((long)plStack_130 + 0x109);
    *(ushort *)((long)plStack_130 + 0x109) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
    *(ushort *)(plStack_130 + 10) =
         *(ushort *)(plStack_130 + 10) & 0xff80 | *(ushort *)(plStack_130 + 10) + 1 & 0x7f;
    uStack_90 = 1;
    pcStack_a8 = FUN_10a1d3648;
    ppuStack_a0 = &PTR_FUN_110bad818;
    FUN_10a32f140(plStack_130,param_3);
    alStack_110[1] = 0;
    alStack_110[0] = 0;
    alStack_110[3] = 0;
    alStack_110[2] = 0;
    alStack_110[4] = 0x3e8000000000000;
    FUN_10a351a84(plStack_130 + 0x33,alStack_110);
    plStack_b8 = plStack_128;
    plStack_c0 = plStack_130;
    if (plStack_128 != (long *)0x0) {
      plVar9 = plStack_128 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_c8 = *(long **)(lVar7 + 0x48);
    uStack_d0 = *(undefined8 *)(lVar7 + 0x40);
    if (*(long *)(lVar7 + 0x48) != 0) {
      plVar9 = (long *)(*(long *)(lVar7 + 0x48) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a336c44(alStack_110,param_1,&plStack_c0,1,&uStack_d0,1);
    lVar7 = alStack_110[0];
    pcStack_d8 = param_2;
    FUN_10a36599c(alStack_110[0],param_2,&UNK_10dd5b8f9,&pcStack_d8,&uStack_d9);
    FUN_10a336cdc(lVar7 + 0x40,plStack_130,plStack_128);
    FUN_10a365790(alStack_110);
    plVar9 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar6 = plStack_c8 + 1;
      do {
        lVar7 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar9 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar6 = plStack_b8 + 1;
      do {
        lVar7 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    FUN_10a044790(&pcStack_a8);
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
    plVar9 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      plVar6 = plStack_128 + 1;
      do {
        lVar7 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    FUN_10a365e38(&lStack_120);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a00946c(&UNK_10f64f7bf);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a336bc8);
  (*pcVar5)();
}



/* Entry: 10a8fe904; end: 10a8fe9ab;  */

float FUN_10a8fe904(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  undefined8 uStack_40;
  long *plStack_38;
  
  if (*param_1 == 0) {
    fVar5 = 0.0;
  }
  else {
    FUN_10a1f2d1c(&uStack_40);
    func_0x00010a1de5f0(uStack_40);
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    fVar5 = (float)(int)uStack_40;
  }
  return fVar5;
}



/* Entry: 10a8fe9ac; end: 10a8fea0b;  */

void FUN_10a8fe9ac(long param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (((*param_2 != 0) && (*(int *)(param_1 + 0xc) == 0)) && (*(int *)(param_1 + 8) != 0)) {
    lVar2 = *param_2 + 0x20;
    FUN_10a8fe104(lVar2,0);
    *(int *)(param_1 + 0xc) = (int)lVar2;
    uVar3 = (ulong)(*(uint *)(param_1 + 8) & 0x3fff);
    lVar2 = *(long *)*param_2;
    uVar4 = (((long *)*param_2)[1] - lVar2 >> 3) * -0x71c71c71c71c71c7;
    if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
      FUN_10a9776bc(lVar2 + uVar3 * 0x48 + 0x18,&stack0xffffffffffffffec);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a9776bc);
    (*pcVar1)();
  }
  return;
}



/* Entry: 10a8fea0c; end: 10a8feabb;  */

void FUN_10a8fea0c(long param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  uint uStack_14;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar2 = *(uint *)(param_1 + 0xc);
    if (uVar2 != 0) {
      lVar1 = *(long *)(param_2 + 0x20);
      uVar5 = (ulong)uVar2 & 0x3fff;
      uVar6 = (*(long *)(param_2 + 0x28) - lVar1 >> 3) * -0x3333333333333333;
      if (((uVar5 <= uVar6 && uVar6 - uVar5 != 0) &&
          (pcVar4 = (char *)(lVar1 + uVar5 * 0x28), *(uint *)(pcVar4 + 4) == uVar2)) &&
         (*pcVar4 != '\x02')) {
        uVar5 = (ulong)(param_3 & 0x3fff);
        uVar6 = (*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 4) * 0x4ec4ec4ec4ec4ec5;
        if (((uVar5 <= uVar6 && uVar6 - uVar5 != 0) &&
            (pcVar4 = (char *)(*(long *)(param_2 + 0x40) + uVar5 * 0xd0),
            *(uint *)(pcVar4 + 4) == param_3)) && (*pcVar4 != '\x02')) {
          uVar5 = (ulong)(uVar2 & 0x3fff);
          lVar1 = *(long *)(param_2 + 0x20);
          uVar6 = (*(long *)(param_2 + 0x28) - lVar1 >> 3) * -0x3333333333333333;
          uStack_14 = param_3;
          if (uVar5 <= uVar6 && uVar6 - uVar5 != 0) {
            FUN_10a90fc98(lVar1 + uVar5 * 0x28 + 8,&uStack_14);
            return;
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a8fe1b8);
          (*pcVar3)();
        }
      }
    }
  }
  return;
}



/* Entry: 10a8feabc; end: 10a8fec3f;  */

void FUN_10a8feabc(long *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong unaff_x22;
  long lVar10;
  undefined8 uVar11;
  float fStack_94;
  undefined8 auStack_90 [2];
  char cStack_79;
  ulong uStack_70;
  undefined4 *puStack_68;
  
  puVar5 = (undefined4 *)param_1[1];
  if (puVar5 < (undefined4 *)param_1[2]) {
    uVar3 = *param_2;
    *param_2 = 0;
    *puVar5 = uVar3;
    uVar11 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(puVar5 + 2) = uVar11;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    uVar11 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(puVar5 + 6) = uVar11;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    puVar5 = puVar5 + 10;
LAB_10a8fec20:
    param_1[1] = (long)puVar5;
    return;
  }
  lVar10 = (long)puVar5 - *param_1;
  uVar6 = (lVar10 >> 3) * -0x3333333333333333 + 1;
  puVar5 = param_2;
  if (uVar6 < 0x666666666666667) {
    lVar9 = param_1[2] - *param_1 >> 3;
    unaff_x22 = lVar9 * -0x6666666666666666;
    if (unaff_x22 < uVar6 || unaff_x22 - uVar6 == 0) {
      unaff_x22 = uVar6;
    }
    if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
      unaff_x22 = 0x666666666666666;
    }
    if (unaff_x22 < 0x666666666666667) {
      lVar9 = unaff_x22 * 0x28;
      __Znwm();
      puVar5 = (undefined4 *)(lVar9 + lVar10);
      uVar3 = *param_2;
      *param_2 = 0;
      *puVar5 = uVar3;
      uVar11 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(puVar5 + 2) = uVar11;
      *(undefined8 *)(param_2 + 2) = 0;
      *(undefined8 *)(param_2 + 4) = 0;
      uVar11 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(puVar5 + 6) = uVar11;
      *(undefined8 *)(param_2 + 6) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      puVar4 = (undefined4 *)*param_1;
      puVar2 = (undefined4 *)param_1[1];
      puVar1 = (undefined4 *)((long)puVar5 + ((long)puVar4 - (long)puVar2));
      puVar7 = puVar4;
      puVar8 = puVar1;
      if ((long)puVar4 - (long)puVar2 != 0) {
        do {
          uVar3 = *puVar7;
          *puVar7 = 0;
          *puVar8 = uVar3;
          uVar11 = *(undefined8 *)(puVar7 + 2);
          *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar7 + 4);
          *(undefined8 *)(puVar8 + 2) = uVar11;
          *(undefined8 *)(puVar7 + 2) = 0;
          *(undefined8 *)(puVar7 + 4) = 0;
          uVar11 = *(undefined8 *)(puVar7 + 6);
          *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(puVar7 + 8);
          *(undefined8 *)(puVar8 + 6) = uVar11;
          *(undefined8 *)(puVar7 + 6) = 0;
          *(undefined8 *)(puVar7 + 8) = 0;
          puVar7 = puVar7 + 10;
          puVar8 = puVar8 + 10;
        } while (puVar7 != puVar2);
        do {
          FUN_10a9412d0();
          puVar4 = puVar4 + 10;
        } while (puVar4 != puVar2);
        puVar4 = (undefined4 *)*param_1;
      }
      puVar5 = puVar5 + 10;
      *param_1 = (long)puVar1;
      param_1[1] = (long)puVar5;
      param_1[2] = lVar9 + unaff_x22 * 0x28;
      if (puVar4 != (undefined4 *)0x0) {
        __ZdlPv();
      }
      goto LAB_10a8fec20;
    }
  }
  else {
    FUN_10a90fee4();
  }
  func_0x000109ffded8();
  uStack_70 = unaff_x22;
  puStack_68 = param_2;
  func_0x000107c2b074(auStack_90,&PTR_DAT_110c2de58);
  fStack_94 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x54));
  FUN_10a0d9bd4(puVar5,auStack_90,&fStack_94);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  func_0x000107c2b074(auStack_90,&PTR_DAT_110c2de70);
  fStack_94 = (float)NEON_ucvtf((int)param_1[0x2ae]);
  FUN_10a0d9bd4(puVar5,auStack_90,&fStack_94);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  func_0x000107c2b074(auStack_90,&PTR_DAT_110c2dd68);
  FUN_10a0da430(puVar5,auStack_90,param_3);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  func_0x000107c2b074(auStack_90,&PTR_DAT_110c2dd80);
  FUN_10a0da430(puVar5,auStack_90,param_3);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  func_0x000107c2b074(auStack_90,&PTR_DAT_110c2dd98);
  FUN_10a0da430(puVar5,auStack_90,param_4);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  func_0x000107c2b074(auStack_90,&PTR_DAT_110c2ddc8);
  fStack_94 = (float)(int)param_1[10];
  FUN_10a0d9bd4(puVar5,auStack_90,&fStack_94);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  return;
}



/* Entry: 10a8fec40; end: 10a8fedeb;  */

void FUN_10a8fec40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fStack_54;
  undefined8 auStack_50 [2];
  char cStack_39;
  
  func_0x000107c2b074(auStack_50,&PTR_DAT_110c2de58);
  fStack_54 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x54));
  FUN_10a0d9bd4(param_2,auStack_50,&fStack_54);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  func_0x000107c2b074(auStack_50,&PTR_DAT_110c2de70);
  fStack_54 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x1570));
  FUN_10a0d9bd4(param_2,auStack_50,&fStack_54);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  func_0x000107c2b074(auStack_50,&PTR_DAT_110c2dd68);
  FUN_10a0da430(param_2,auStack_50,param_3);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  func_0x000107c2b074(auStack_50,&PTR_DAT_110c2dd80);
  FUN_10a0da430(param_2,auStack_50,param_3);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  func_0x000107c2b074(auStack_50,&PTR_DAT_110c2dd98);
  FUN_10a0da430(param_2,auStack_50,param_4);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  func_0x000107c2b074(auStack_50,&PTR_DAT_110c2ddc8);
  fStack_54 = (float)*(int *)(param_1 + 0x50);
  FUN_10a0d9bd4(param_2,auStack_50,&fStack_54);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  return;
}



/* Entry: 10a8fedec; end: 10a8fef13;  */

void FUN_10a8fedec(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar3 = *(undefined4 **)(param_1 + 0x68);
  for (puVar2 = *(undefined4 **)(param_1 + 0x60); puVar2 != puVar3; puVar2 = puVar2 + 0x24) {
    *(char *)(puVar2 + 9) = (char)param_2;
    plVar7 = *(long **)(puVar2 + 0xc);
    if (plVar7 == (long *)0x0) {
      uVar9 = 0;
      plVar7 = (long *)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar7 == (long *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(puVar2 + 10);
      }
    }
    FUN_10a8fe3ec(param_1 + 0x1550,*puVar2,param_2);
    func_0x00010a8fe450(*(undefined8 *)(param_1 + 0x1550),puVar2[1],param_2);
    uVar4 = puVar2[2];
    if ((int)param_2 == 0) {
      uVar9 = 0;
    }
    else {
      FUN_10a8fe508(uVar9);
    }
    func_0x00010a8fe4a8(*(undefined8 *)(param_1 + 0x1550),uVar4,uVar9);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar8 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  return;
}



/* Entry: 10a8fef14; end: 10a8fef6b;  */

void FUN_10a8fef14(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010a332658(*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x54));
  }
  plVar1 = *(long **)(param_1 + 0x40);
  for (plVar2 = *(long **)(param_1 + 0x38); plVar2 != plVar1; plVar2 = plVar2 + 2) {
    if (*plVar2 != 0) {
      func_0x00010a332658(*plVar2,*(undefined4 *)(param_1 + 0x54));
    }
  }
  return;
}



/* Entry: 10a8fef6c; end: 10a8ff193;  */

uint * FUN_10a8fef6c(undefined4 param_1,undefined4 param_2,uint *param_3,long *param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  *(undefined8 *)(param_3 + 4) = param_5;
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined8 *)(param_3 + 6) = param_6;
  lVar7 = *param_4;
  *(long *)(param_3 + 8) = lVar7;
  lVar8 = param_4[1];
  *(long *)(param_3 + 10) = lVar8;
  if (lVar8 != 0) {
    plVar10 = (long *)(lVar8 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar7 = *param_4;
  }
  if (lVar7 != 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    lVar7 = lVar7 + 0x88;
    FUN_10a9768e0(lVar7,param_5,param_6,&uStack_68);
    *param_3 = (uint)lVar7;
    lVar7 = *param_4 + 0x68;
    FUN_10a97d38c(lVar7,3);
    param_3[1] = (uint)lVar7;
    uVar6 = (ulong)*param_3 & 0x3fff;
    lVar8 = *(long *)(*param_4 + 0x88);
    uVar9 = (*(long *)(*param_4 + 0x90) - lVar8 >> 7) * -0x5555555555555555;
    if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
LAB_10a8ff158:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8ff15c);
      (*pcVar4)();
    }
    lVar8 = lVar8 + uVar6 * 0x180;
    *(uint *)(lVar8 + 8) = (uint)lVar7;
    *(int *)(lVar8 + 0x20) = (int)param_7;
    uVar11 = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(lVar8 + 0x28) = uVar11;
    *(undefined4 *)(lVar8 + 0xf0) = 0;
    *(undefined1 *)(lVar8 + 0xf4) = 1;
    *(undefined4 *)(lVar8 + 0x114) = param_1;
    *(undefined1 *)(lVar8 + 0x118) = 1;
    *(undefined4 *)(lVar8 + 0x10c) = param_2;
    *(undefined1 *)(lVar8 + 0x110) = 1;
    *(undefined4 *)(lVar8 + 0xfc) = 0;
    *(undefined1 *)(lVar8 + 0x100) = 1;
    *(undefined4 *)(lVar8 + 0x104) = 0x42c80000;
    *(undefined1 *)(lVar8 + 0x108) = 1;
    *(undefined2 *)(lVar8 + 0xf8) = 0x101;
    FUN_10a8ff194(param_3,param_4,param_8,param_9);
    plVar10 = (long *)*param_4;
    if (plVar10 != (long *)0x0) {
      uVar1 = *param_3;
      plVar5 = plVar10;
      FUN_10a977418(plVar10,0,param_7,0,0);
      param_3[2] = (uint)plVar5;
      uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
      uStack_58 = 0;
      uVar6 = (ulong)((uint)plVar5 & 0x3fff);
      uVar9 = (plVar10[1] - *plVar10 >> 3) * -0x71c71c71c71c71c7;
      if (uVar9 < uVar6 || uVar9 - uVar6 == 0) goto LAB_10a8ff158;
      FUN_10a90fda4(*plVar10 + uVar6 * 0x48 + 0x30,&uStack_68);
      FUN_10a3f9220(&uStack_68);
      FUN_10a8fe1b8(*param_4);
    }
    FUN_10a8ff5f8(param_3,param_4,1);
  }
  return param_3;
}



/* Entry: 10a8ff194; end: 10a8ff5f7;  */

void FUN_10a8ff194(long param_1,long *param_2,long *param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  code *pcVar14;
  undefined8 ******ppppppuVar15;
  undefined8 *******pppppppuVar16;
  long lVar17;
  undefined8 *****pppppuVar18;
  ulong uVar19;
  char *pcVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  undefined8 ******ppppppuVar29;
  undefined8 ******ppppppuVar30;
  undefined8 *******pppppppuVar31;
  undefined8 ******ppppppuStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 uStack_90;
  undefined8 ******ppppppuStack_88;
  undefined8 ******ppppppuStack_80;
  undefined8 ******ppppppuStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 ******ppppppuStack_68;
  long *plVar28;
  
  lVar21 = *param_2;
  if (lVar21 == 0) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 4);
  if (uVar4 == 0) {
    return;
  }
  uVar19 = (ulong)uVar4 & 0x3fff;
  uVar24 = (*(long *)(lVar21 + 0x70) - *(long *)(lVar21 + 0x68) >> 4) * -0x5555555555555555;
  if (uVar24 < uVar19 || uVar24 - uVar19 == 0) {
    return;
  }
  pcVar20 = (char *)(*(long *)(lVar21 + 0x68) + uVar19 * 0x30);
  if (*(uint *)(pcVar20 + 4) != uVar4) {
    return;
  }
  if (*pcVar20 == '\x02') {
    return;
  }
  uVar4 = param_4;
  if (3 < param_4) {
    uVar4 = 4;
  }
  uVar2 = 4;
  if (0 < (int)param_4) {
    uVar2 = uVar4;
  }
  uVar19 = (ulong)uVar2;
  ppppuStack_a0 = (undefined8 *****)0x0;
  ppppuStack_98 = (undefined8 *****)0x0;
  uStack_90 = 0;
  FUN_10a067a68(&ppppuStack_a0,uVar19);
  lVar21 = 4;
  do {
    if (lVar21 == 0) goto LAB_10a8ff590;
    if (*param_3 != 0) {
      FUN_10a069ac8(&ppppuStack_a0,param_3);
    }
    param_3 = param_3 + 2;
    lVar21 = lVar21 + -1;
    uVar19 = uVar19 - 1;
  } while (uVar19 != 0);
  if (ppppuStack_a0 != ppppuStack_98) {
    uVar19 = (ulong)*(uint *)(param_1 + 4) & 0x3fff;
    lVar21 = *(long *)(*param_2 + 0x68);
    uVar24 = (*(long *)(*param_2 + 0x70) - lVar21 >> 4) * -0x5555555555555555;
    if (uVar24 < uVar19 || uVar24 - uVar19 == 0) {
LAB_10a8ff590:
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10a8ff594);
      (*pcVar14)();
    }
    lVar21 = lVar21 + uVar19 * 0x30;
    plVar3 = *(long **)(lVar21 + 8);
    lVar17 = (long)ppppuStack_98 - (long)ppppuStack_a0 >> 4;
    lVar25 = (long)*(long **)(lVar21 + 0x10) - (long)plVar3;
    plVar27 = plVar3;
    if (lVar25 != 0) {
      do {
        plVar28 = plVar27 + 2;
        if (*plVar27 == 0) goto LAB_10a8ff334;
        plVar27 = plVar28;
      } while (plVar28 != *(long **)(lVar21 + 0x10));
    }
    if (lVar25 == (long)ppppuStack_98 - (long)ppppuStack_a0) {
      lVar22 = 0;
      lVar25 = lVar25 >> 4;
      do {
        if (lVar25 == 0) goto LAB_10a8ff590;
        lVar26 = *(long *)((long)plVar3 + lVar22);
        if (((lVar26 == 0) || (*(long *)(lVar26 + 0x28) != *(long *)((long)ppppuStack_a0 + lVar22)))
           || (*(char *)(lVar26 + 0x60) != '\x02')) {
LAB_10a8ff51c:
          lVar17 = 0;
          uVar19 = 0;
          goto LAB_10a8ff524;
        }
        iVar8 = -(uint)((float)*(undefined8 *)(lVar26 + 100) == 0.0);
        iVar9 = -(uint)((float)((ulong)*(undefined8 *)(lVar26 + 100) >> 0x20) == 0.0);
        iVar10 = -(uint)((float)*(undefined8 *)(lVar26 + 0x6c) == 0.0);
        iVar11 = -(uint)((float)((ulong)*(undefined8 *)(lVar26 + 0x6c) >> 0x20) == 0.0);
        auVar7[1] = ~(byte)((uint)iVar8 >> 8);
        auVar7[0] = ~(byte)iVar8;
        auVar7[2] = ~(byte)((uint)iVar8 >> 0x10);
        auVar7[3] = ~(byte)((uint)iVar8 >> 0x18);
        auVar7[4] = ~(byte)iVar9;
        auVar7[5] = ~(byte)((uint)iVar9 >> 8);
        auVar7[6] = ~(byte)((uint)iVar9 >> 0x10);
        auVar7[7] = ~(byte)((uint)iVar9 >> 0x18);
        auVar7[8] = ~(byte)iVar10;
        auVar7[9] = ~(byte)((uint)iVar10 >> 8);
        auVar7[10] = ~(byte)((uint)iVar10 >> 0x10);
        auVar7[0xb] = ~(byte)((uint)iVar10 >> 0x18);
        auVar7[0xc] = ~(byte)iVar11;
        auVar7[0xd] = ~(byte)((uint)iVar11 >> 8);
        auVar7[0xe] = ~(byte)((uint)iVar11 >> 0x10);
        auVar7[0xf] = ~(byte)((uint)iVar11 >> 0x18);
        uVar4 = NEON_umaxv(auVar7,4);
        if ((uVar4 & 1) != 0) goto LAB_10a8ff51c;
        lVar25 = lVar25 + -1;
        lVar22 = lVar22 + 0x10;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    else {
LAB_10a8ff334:
      ppppppuStack_b8 = (undefined8 *******)0x0;
      ppppppuStack_b0 = (undefined8 *******)0x0;
      ppppppuStack_a8 = (undefined8 *******)0x0;
      FUN_10a42e0e0(&ppppppuStack_b8);
      if (ppppuStack_98 != ppppuStack_a0) {
        uVar19 = 0;
        do {
          ppppuVar13 = ppppuStack_98;
          ppppuVar12 = ppppuStack_a0;
          ppppppuVar15 = (undefined8 ******)0x90;
          __Znwm();
          ppppppuVar29 = ppppppuVar15 + 1;
          *ppppppuVar29 = (undefined8 *****)0x0;
          ppppppuVar15[2] = (undefined8 *****)0x0;
          *ppppppuVar15 = (undefined8 *****)&PTR_DAT_110bd9c58;
          ppppppuVar30 = ppppppuVar15 + 3;
          *ppppppuVar30 = (undefined8 *****)&PTR_DAT_110bd6cc8;
          *(undefined1 *)(ppppppuVar15 + 4) = 0;
          ppppppuVar15[7] = (undefined8 *****)0x0;
          ppppppuVar15[6] = (undefined8 *****)0x0;
          ppppppuVar15[9] = (undefined8 *****)0x0;
          ppppppuVar15[8] = (undefined8 *****)0x0;
          ppppppuVar15[0xb] = (undefined8 *****)0x0;
          ppppppuVar15[10] = (undefined8 *****)0x0;
          ppppppuVar15[0xd] = (undefined8 *****)0x0;
          ppppppuVar15[0xc] = (undefined8 *****)0x0;
          ppppppuVar15[0xe] = (undefined8 *****)0x0;
          ppppppuVar15[5] = (undefined8 *****)&PTR_DAT_110bd6d28;
          *(undefined1 *)(ppppppuVar15 + 0xf) = 0;
          *(undefined8 *)((long)ppppppuVar15 + 0x84) = 0x3f80000000000000;
          *(undefined8 *)((long)ppppppuVar15 + 0x7c) = 0;
          *(undefined1 *)((long)ppppppuVar15 + 0x8c) = 0;
          if ((ulong)((long)ppppuVar13 - (long)ppppuVar12 >> 4) <= uVar19) goto LAB_10a8ff590;
          pppppuVar18 = (undefined8 *****)(ppppuVar12 + uVar19 * 2);
          FUN_10a8ffa80(ppppppuVar30,*pppppuVar18,pppppuVar18[1]);
          if (ppppppuStack_b0 < ppppppuStack_a8) {
            *ppppppuStack_b0 = ppppppuVar30;
            ppppppuStack_b0[1] = ppppppuVar15;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar29,0x10);
              if (bVar6) {
                *ppppppuVar29 = (undefined8 *****)((long)*ppppppuVar29 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            ppppppuStack_b0 = ppppppuStack_b0 + 2;
          }
          else {
            lVar21 = (long)ppppppuStack_b0 - (long)ppppppuStack_b8;
            uVar24 = (lVar21 >> 4) + 1;
            if (uVar24 >> 0x3c != 0) {
              FUN_10a438bb0();
              goto LAB_10a8ff590;
            }
            uVar23 = (long)ppppppuStack_a8 - (long)ppppppuStack_b8 >> 3;
            if (uVar23 <= uVar24) {
              uVar23 = uVar24;
            }
            if (0x7fffffffffffffef < (ulong)((long)ppppppuStack_a8 - (long)ppppppuStack_b8)) {
              uVar23 = 0xfffffffffffffff;
            }
            ppppppuStack_68 = &ppppppuStack_b8;
            pppppppuVar16 = &ppppppuStack_b8;
            FUN_10a438bc4();
            puVar1 = (undefined8 *)((long)pppppppuVar16 + lVar21);
            *puVar1 = ppppppuVar30;
            puVar1[1] = ppppppuVar15;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar29,0x10);
              if (bVar6) {
                *ppppppuVar29 = (undefined8 *****)((long)*ppppppuVar29 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            pppppppuVar31 =
                 (undefined8 *******)
                 ((long)puVar1 - ((long)ppppppuStack_b0 - (long)ppppppuStack_b8));
            _memcpy(pppppppuVar31);
            ppppppuStack_78 = ppppppuStack_b8;
            ppppppuStack_70 = ppppppuStack_a8;
            ppppppuStack_88 = ppppppuStack_b8;
            ppppppuStack_80 = ppppppuStack_b8;
            ppppppuStack_b8 = pppppppuVar31;
            ppppppuStack_b0 = (undefined8 ******)(puVar1 + 2);
            ppppppuStack_a8 = pppppppuVar16 + uVar23 * 2;
            func_0x00010a438bf8(&ppppppuStack_88);
            ppppppuStack_b0 = (undefined8 ******)(puVar1 + 2);
          }
          do {
            pppppuVar18 = *ppppppuVar29;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar29,0x10);
            if (bVar6) {
              *ppppppuVar29 = (undefined8 *****)((long)pppppuVar18 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (pppppuVar18 == (undefined8 *****)0x0) {
            (*(code *)(*ppppppuVar15)[2])(ppppppuVar15);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar15);
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < (ulong)((long)ppppuStack_98 - (long)ppppuStack_a0 >> 4));
      }
      if (ppppppuStack_b8 != ppppppuStack_b0) {
        FUN_10a8ffb30(*param_2 + 0x68,*(undefined4 *)(param_1 + 4),&ppppppuStack_b8);
      }
      ppppppuStack_88 = &ppppppuStack_b8;
      FUN_10a3f9078(&ppppppuStack_88);
    }
  }
LAB_10a8ff55c:
  ppppppuStack_88 = (undefined8 ******)&ppppuStack_a0;
  FUN_10a04a568(&ppppppuStack_88);
  return;
  while( true ) {
    FUN_10a8ffa80(*(undefined8 *)(lVar25 + lVar17),*(undefined8 *)((long)ppppuStack_a0 + lVar17),
                  ((undefined8 *)((long)ppppuStack_a0 + lVar17))[1]);
    uVar19 = uVar19 + 1;
    lVar17 = lVar17 + 0x10;
    if ((ulong)((long)ppppuStack_98 - (long)ppppuStack_a0 >> 4) <= uVar19) break;
LAB_10a8ff524:
    lVar25 = *(long *)(lVar21 + 8);
    if ((ulong)(*(long *)(lVar21 + 0x10) - lVar25 >> 4) <= uVar19) goto LAB_10a8ff590;
  }
  goto LAB_10a8ff55c;
}



/* Entry: 10a8ff5f8; end: 10a8ff6e3;  */

void FUN_10a8ff5f8(uint *param_1,long *param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar1 = *param_1;
    if (uVar1 != 0) {
      uVar4 = (ulong)uVar1 & 0x3fff;
      uVar6 = (*(long *)(lVar2 + 0x90) - *(long *)(lVar2 + 0x88) >> 7) * -0x5555555555555555;
      if (((uVar4 <= uVar6 && uVar6 - uVar4 != 0) &&
          (pbVar5 = (byte *)(*(long *)(lVar2 + 0x88) + uVar4 * 0x180),
          *(uint *)(pbVar5 + 4) == uVar1)) && (*pbVar5 != 2)) {
        *pbVar5 = (byte)param_3 ^ 1;
      }
    }
    if (param_3 == 0) {
      bVar3 = 1;
    }
    else {
      FUN_10a5e5ef0();
      bVar3 = (byte)lVar2 ^ 1;
    }
    uVar1 = param_1[2];
    if (uVar1 != 0) {
      uVar4 = (ulong)uVar1 & 0x3fff;
      lVar2 = *(long *)*param_2;
      uVar6 = (((long *)*param_2)[1] - lVar2 >> 3) * -0x71c71c71c71c71c7;
      if (((uVar4 <= uVar6 && uVar6 - uVar4 != 0) &&
          (pbVar5 = (byte *)(lVar2 + uVar4 * 0x48), *(uint *)(pbVar5 + 4) == uVar1)) &&
         (*pbVar5 != 2)) {
        *pbVar5 = bVar3;
      }
    }
  }
  return;
}



/* Entry: 10a8ff6e4; end: 10a8ff95f;  */

void FUN_10a8ff6e4(uint *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  
  plVar4 = *(long **)(param_1 + 10);
  if (plVar4 == (long *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      plVar9 = *(long **)(param_1 + 8);
      if (plVar9 != (long *)0x0) {
        uVar1 = param_1[3];
        uVar10 = (ulong)uVar1;
        if (uVar1 != 0) {
          lVar5 = plVar9[4];
          uVar7 = uVar10 & 0x3fff;
          uVar8 = (plVar9[5] - lVar5 >> 3) * -0x3333333333333333;
          if (((uVar7 <= uVar8 && uVar8 - uVar7 != 0) &&
              (pcVar6 = (char *)(lVar5 + uVar7 * 0x28), *(uint *)(pcVar6 + 4) == uVar1)) &&
             (*pcVar6 != '\x02')) {
            FUN_10a977780(plVar9,uVar10);
            FUN_10a91000c(plVar9 + 4,uVar10);
          }
        }
        uVar1 = param_1[2];
        uVar10 = (ulong)uVar1;
        if (uVar1 != 0) {
          uVar7 = uVar10 & 0x3fff;
          uVar8 = (plVar9[1] - *plVar9 >> 3) * -0x71c71c71c71c71c7;
          if (((uVar7 <= uVar8 && uVar8 - uVar7 != 0) &&
              (pcVar6 = (char *)(*plVar9 + uVar7 * 0x48), *(uint *)(pcVar6 + 4) == uVar1)) &&
             (*pcVar6 != '\x02')) {
            func_0x00010a977544(plVar9,uVar10);
            FUN_10a9775b4(plVar9,uVar10);
          }
        }
        uVar1 = param_1[1];
        uVar10 = (ulong)uVar1;
        if (uVar1 != 0) {
          plVar11 = plVar9 + 0xd;
          uVar7 = uVar10 & 0x3fff;
          uVar8 = (plVar9[0xe] - *plVar11 >> 4) * -0x5555555555555555;
          if (((uVar7 <= uVar8 && uVar8 - uVar7 != 0) &&
              (pcVar6 = (char *)(*plVar11 + uVar7 * 0x30), *(uint *)(pcVar6 + 4) == uVar1)) &&
             (*pcVar6 != '\x02')) {
            FUN_10a97d404(plVar11,uVar10);
            FUN_10a97d5e0(plVar11,uVar10);
          }
        }
        uVar1 = *param_1;
        uVar10 = (ulong)uVar1;
        if (uVar1 != 0) {
          plVar11 = plVar9 + 0x11;
          uVar7 = uVar10 & 0x3fff;
          uVar8 = (plVar9[0x12] - *plVar11 >> 7) * -0x5555555555555555;
          if (((uVar7 <= uVar8 && uVar8 - uVar7 != 0) &&
              (pcVar6 = (char *)(*plVar11 + uVar7 * 0x180), *(uint *)(pcVar6 + 4) == uVar1)) &&
             (*pcVar6 != '\x02')) {
            func_0x00010a976a90(plVar11,uVar10);
            FUN_10a976b94(plVar11,uVar10);
          }
        }
      }
    }
    lVar5 = *(long *)(param_1 + 10);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar4 != (long *)0x0) {
      plVar9 = plVar4 + 1;
      do {
        lVar5 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a8ff960; end: 10a8ff993;  */

long FUN_10a8ff960(long param_1)

{
  FUN_10a8ff6e4();
  if (*(long *)(param_1 + 0x28) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a8ff994; end: 10a8ffa1f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010a8ff9e0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10a8ff994(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_3;
  if (lVar1 == 0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    uVar2 = param_4;
    FUN_10a8ffa20();
    FUN_10a8fef6c(param_2,0x3f800000,param_1,param_3,lVar1,uVar2,0xffffd954,param_4,4);
    FUN_10a8fe9ac();
  }
  return;
}



/* Entry: 10a8ffa20; end: 10a8ffa7f;  */

undefined1  [16] FUN_10a8ffa20(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  short sVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uStack_40;
  long *plStack_38;
  
  uVar2 = *(ushort *)(*(long *)(param_1 + 0xa8) + 0xd14);
  uVar10 = (ulong)uVar2;
  sVar11 = 0x40;
  if (uVar10 != 0xfffe) {
    sVar11 = uVar2 + 1;
  }
  *(short *)(*(long *)(param_1 + 0xa8) + 0xd14) = sVar11;
  if (uVar10 < 0x40) {
    lVar5 = 1L << (uVar10 & 0x3f);
    uVar10 = 0;
  }
  else {
    if (uVar2 == 0xffff) {
      plVar6 = (long *)&UNK_10f653a3a;
      FUN_10a00946c();
      puVar9 = &uStack_40;
      if (param_3 != (long *)0x0) {
        plVar8 = param_3 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = *plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar7 = plVar6;
      uStack_40 = param_2;
      plStack_38 = param_3;
      (**(code **)(*plVar6 + 0x48))(plVar6,&uStack_40);
      plVar8 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
        do {
          lVar5 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          plVar7 = plVar8;
        }
      }
      *(undefined1 *)(plVar6 + 0xc) = 2;
      *(undefined8 *)((long)plVar6 + 0x6c) = 0;
      *(undefined8 *)((long)plVar6 + 100) = 0;
      auVar13._8_8_ = puVar9;
      auVar13._0_8_ = plVar7;
      return auVar13;
    }
    lVar5 = 0;
  }
  auVar12._8_8_ = uVar10;
  auVar12._0_8_ = lVar5;
  return auVar12;
}



/* Entry: 10a8ffa80; end: 10a8ffb2f;  */

void FUN_10a8ffa80(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (param_3 != (long *)0x0) {
    plVar1 = param_3 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_30 = param_2;
  plStack_28 = param_3;
  (**(code **)(*param_1 + 0x48))(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  *(undefined1 *)(param_1 + 0xc) = 2;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  return;
}



/* Entry: 10a8ffb30; end: 10a8ffc4f;  */

long * FUN_10a8ffb30(long *param_1,uint param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  
  uVar6 = (ulong)(param_2 & 0x3fff);
  uVar11 = (param_1[1] - *param_1 >> 4) * -0x5555555555555555;
  if (uVar11 < uVar6 || uVar11 - uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a8ffb80);
    (*pcVar5)();
  }
  lVar7 = *param_1 + uVar6 * 0x30;
  plVar12 = (long *)(lVar7 + 8);
  if (plVar12 != param_3) {
    plVar13 = (long *)*param_3;
    plVar2 = (long *)param_3[1];
    uVar6 = (long)plVar2 - (long)plVar13 >> 4;
    plVar14 = (long *)*plVar12;
    if ((ulong)(*(long *)(lVar7 + 0x18) - (long)plVar14 >> 4) < uVar6) {
      plVar14 = plVar12;
      plVar9 = plVar13;
      FUN_10a438e74();
      if (uVar6 >> 0x3c != 0) {
        FUN_10a438bb0();
        lVar10 = plVar9[1];
        lVar7 = *plVar9;
        if (plVar9[1] != 0) {
          plVar12 = (long *)(plVar9[1] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = *plVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar12 = (long *)plVar14[1];
        plVar14[1] = lVar10;
        *plVar14 = lVar7;
        if (plVar12 != (long *)0x0) {
          plVar13 = plVar12 + 1;
          do {
            lVar7 = *plVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        return plVar14;
      }
      uVar8 = *(long *)(lVar7 + 0x18) - *plVar12;
      uVar11 = (long)uVar8 >> 3;
      if (uVar11 <= uVar6) {
        uVar11 = uVar6;
      }
      if (0x7fffffffffffffef < uVar8) {
        uVar11 = 0xfffffffffffffff;
      }
      FUN_10a5e7214(plVar12,uVar11);
      plVar9 = *(long **)(lVar7 + 0x10);
      for (; plVar13 != plVar2; plVar13 = plVar13 + 2) {
        lVar10 = plVar13[1];
        lVar15 = *plVar13;
        plVar9[1] = plVar13[1];
        *plVar9 = lVar15;
        if (lVar10 != 0) {
          plVar14 = (long *)(lVar10 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = *plVar14 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar9 = plVar9 + 2;
      }
    }
    else {
      plVar9 = *(long **)(lVar7 + 0x10);
      lVar10 = (long)plVar9 - (long)plVar14;
      if (uVar6 <= (ulong)(lVar10 >> 4)) {
        if (plVar13 != plVar2) {
          do {
            FUN_10a910248(plVar14,plVar13);
            plVar13 = plVar13 + 2;
            plVar14 = plVar14 + 2;
          } while (plVar13 != plVar2);
          plVar9 = *(long **)(lVar7 + 0x10);
        }
        while (plVar9 != plVar14) {
          plVar9 = plVar9 + -2;
          FUN_10a3f90e8();
        }
        *(long **)(lVar7 + 0x10) = plVar14;
        return plVar9;
      }
      plVar1 = (long *)((long)plVar13 + lVar10);
      plVar12 = plVar9;
      if (plVar9 != plVar14) {
        do {
          FUN_10a910248(plVar14,plVar13);
          plVar13 = (long *)((long)plVar13 + 0x10);
          plVar14 = plVar14 + 2;
          lVar10 = lVar10 + -0x10;
        } while (lVar10 != 0);
        plVar9 = *(long **)(lVar7 + 0x10);
        plVar12 = plVar9;
      }
      for (; plVar1 != plVar2; plVar1 = plVar1 + 2) {
        lVar10 = plVar1[1];
        lVar15 = *plVar1;
        plVar9[1] = plVar1[1];
        *plVar9 = lVar15;
        if (lVar10 != 0) {
          plVar13 = (long *)(lVar10 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = *plVar13 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plVar9 = plVar9 + 2;
      }
    }
    *(long **)(lVar7 + 0x10) = plVar9;
    return plVar12;
  }
  return plVar12;
}



/* Entry: 10a8ffc50; end: 10a9000c7;  */

void FUN_10a8ffc50(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_e8 [2];
  char cStack_d1;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x000109887da8(appuStack_e8,&UNK_10f663709,0x16);
  pppuVar1 = (undefined8 ***)appuStack_e8[0];
  if (-1 < cStack_d1) {
    pppuVar1 = appuStack_e8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c2daa8;
  pppuVar2 = (undefined8 ***)&UNK_10f6821fc;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0xffffffffffffffff;
  uStack_a8 = 0x100000064;
  uStack_90 = 0;
  puStack_98 = (undefined *)0x0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_60 = 0;
  ppuStack_c0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_c0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_d0 = &PTR_DAT_110c2daa8;
    uStack_c8 = 0;
    ppuStack_c0 = (undefined8 **)&PTR_DAT_110bd9df0;
    uStack_b8 = 0;
    uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_d0,&ppuStack_c0);
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(appuStack_e8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9000a8;
    FUN_10a054dac(param_1,&DAT_10f51a652,FUN_10a9181b0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9000a8;
    FUN_10a054dac(param_1,&DAT_10f3909e3,FUN_10a91836c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uStack_b8 = 0;
  uStack_b0 = 0;
  ppuStack_c0 = (undefined8 **)&DAT_10f3f415b;
  uStack_a0 = 0xffffffffffffffff;
  uStack_a8 = 0x800000064;
  puStack_98 = &UNK_10f6821fc;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 0x94;
  uStack_70._0_4_ = 0xffffffff;
  uStack_68 = 0;
  uStack_60 = 0;
  uVar7 = param_1;
  func_0x00010a918490(param_1,&ppuStack_c0);
  uStack_b8 = 0;
  uStack_b0 = 0;
  ppuStack_c0 = (undefined8 **)0x10f2862aa;
  uStack_a0 = 0xffffffffffffffff;
  uStack_a8 = 0x100000064;
  puStack_98 = &UNK_10f6821fc;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 0x94;
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_60 = 0;
  func_0x00010a918490();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a9000a8;
    FUN_10a054dac(param_1,&UNK_10f68249c,FUN_10a9185a8,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f305a7e,FUN_10a918774,FUN_10a918830);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6824a9,FUN_10a918da4,FUN_10a918e5c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f448783,FUN_10a918f1c,FUN_10a918fd4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6824b2,FUN_10a919094,FUN_10a919168);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6824c4,FUN_10a919234,FUN_10a91930c);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_b8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_c0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_98 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_b0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_88 = *(undefined8 *)(lVar3 + -0x30);
    uStack_90 = *(undefined8 *)(lVar3 + -0x38);
    uStack_78 = *(undefined8 *)(lVar3 + -0x20);
    uStack_80 = *(undefined8 *)(lVar3 + -0x28);
    uStack_60 = *(undefined8 *)(lVar3 + -8);
    uStack_68 = *(undefined8 *)(lVar3 + -0x10);
    uStack_70 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_a8._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_a8._4_4_;
    uStack_a0._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_a0._4_4_;
    uVar7 = param_1;
    uStack_a8 = uVar9;
    uStack_a0 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_70 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_c0,param_1 + 0x1b8,&UNK_10f663709,0x16);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a9000a8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9000ac);
  (*pcVar6)();
}



/* Entry: 10a9000c8; end: 10a900257;  */

void FUN_10a9000c8(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6824d6;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x800000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x93;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6824e7;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x93;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a900258(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6824ee;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x93;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a900258();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f3bac74;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x93;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a900258();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6824f7;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x93;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a900258();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a900258; end: 10a9002ff;  */

undefined8 * FUN_10a900258(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a900300);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a900300; end: 10a9003f7;  */

undefined8 * FUN_10a900300(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  param_1[0x138] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x13b) = 0x100;
  param_1[0x13a] = 0;
  param_1[0x139] = 0;
  puVar1 = param_1;
  FUN_10a4213cc(param_1,&PTR_PTR_110c2d1e0,param_2,param_3,0);
  lVar2 = 0;
  *puVar1 = &PTR_FUN_110c2cdf0;
  puVar1[2] = &PTR_DAT_110c2d028;
  puVar1[7] = &PTR_DAT_110c2d080;
  puVar1[0xd] = &PTR_DAT_110c2d0a0;
  puVar1[0x138] = &PTR_DAT_110c2d1a0;
  puVar1[0x16] = &PTR_DAT_110c2d110;
  puVar1[0x17] = &PTR_DAT_110c2d140;
  puVar1[0x9f] = 0;
  puVar1[0x9e] = 0;
  puVar1[0xa1] = 0;
  puVar1[0xa0] = 0;
  puVar1[0xa3] = 0;
  puVar1[0xa2] = 0;
  *(undefined4 *)(puVar1 + 0xa4) = 0x3f800000;
  *(undefined2 *)(puVar1 + 0xa5) = 1;
  *(undefined8 *)((long)puVar1 + 0x534) = 0;
  *(undefined8 *)((long)puVar1 + 0x53c) = 0;
  *(undefined8 *)((long)puVar1 + 0x52c) = 0;
  puVar1[0xab] = 0;
  puVar1[0xaa] = 0;
  *(undefined4 *)((long)puVar1 + 0x544) = 0;
  puVar1[0xa9] = puVar1 + 0xaa;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2 + 0x568);
    *(undefined8 *)((long)param_1 + lVar2 + 0x570) = 0;
    *puVar1 = 0;
    *(undefined8 **)((long)param_1 + lVar2 + 0x560) = puVar1;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x60);
  _bzero(param_1 + 0xb8,0x400);
  return param_1;
}



/* Entry: 10a9003f8; end: 10a9006f7;  */

void FUN_10a9003f8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x00010a052384(param_1 + 0x136);
  if (param_1[0x135] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x99f) < '\0') {
    __ZdlPv(param_1[0x131]);
  }
  func_0x00010a052384(param_1 + 0x12f);
  if (param_1[0x12e] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x967) < '\0') {
    __ZdlPv(param_1[0x12a]);
  }
  func_0x00010a052384(param_1 + 0x128);
  if (param_1[0x127] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x92f) < '\0') {
    __ZdlPv(param_1[0x123]);
  }
  func_0x00010a052384(param_1 + 0x121);
  if (param_1[0x120] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x8f7) < '\0') {
    __ZdlPv(param_1[0x11c]);
  }
  func_0x00010a052384(param_1 + 0x11a);
  if (param_1[0x119] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x8bf) < '\0') {
    __ZdlPv(param_1[0x115]);
  }
  func_0x00010a052384(param_1 + 0x113);
  if (param_1[0x112] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x887) < '\0') {
    __ZdlPv(param_1[0x10e]);
  }
  func_0x00010a052384(param_1 + 0x10c);
  if (param_1[0x10b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x84f) < '\0') {
    __ZdlPv(param_1[0x107]);
  }
  func_0x00010a052384(param_1 + 0x105);
  if (param_1[0x104] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x817) < '\0') {
    __ZdlPv(param_1[0x100]);
  }
  func_0x00010a052384(param_1 + 0xfe);
  if (param_1[0xfd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x7df) < '\0') {
    __ZdlPv(param_1[0xf9]);
  }
  func_0x00010a9194e4(param_1 + 0xf7);
  func_0x00010a9194e4(param_1 + 0xf5);
  func_0x00010a91948c(param_1 + 0xf3);
  func_0x00010a9193dc(param_1 + 0xf1);
  func_0x00010a91948c(param_1 + 0xef);
  func_0x00010a9193dc(param_1 + 0xed);
  func_0x00010a9193dc(param_1 + 0xeb);
  func_0x00010a919434(param_1 + 0xe9);
  func_0x00010a9193dc(param_1 + 0xe7);
  func_0x00010a052384(param_1 + 0xe5);
  if (param_1[0xe4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x717) < '\0') {
    __ZdlPv(param_1[0xe0]);
  }
  func_0x00010a494dd8(param_1 + 0xde);
  func_0x00010a052384(param_1 + 0xdc);
  if (param_1[0xdb] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6cf) < '\0') {
    __ZdlPv(param_1[0xd7]);
  }
  func_0x00010a494c90(param_1 + 0xd5);
  func_0x00010a052384(param_1 + 0xd3);
  if (param_1[0xd2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x687) < '\0') {
    __ZdlPv(param_1[0xce]);
  }
  func_0x00010a493d08(param_1 + 0xcc);
  func_0x00010a052384(param_1 + 0xca);
  if (param_1[0xc9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x63f) < '\0') {
    __ZdlPv(param_1[0xc5]);
  }
  func_0x00010a493d08(param_1 + 0xc3);
  func_0x00010a052384(param_1 + 0xc1);
  if (param_1[0xc0] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f7) < '\0') {
    __ZdlPv(param_1[0xbc]);
  }
  func_0x00010a4952ac(param_1 + 0xba);
  if (param_1[0xb9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lVar2 = 0x5b0;
  do {
    func_0x00010a9102c4(*(undefined8 *)((long)param_1 + lVar2));
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != 0x550);
  func_0x00010a9195cc(param_1[0xaa]);
  plVar1 = (long *)param_1[0xa2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a91953c(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0xa0];
  param_1[0xa0] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  FUN_10a9162c4(param_1 + 0x9e);
  *param_1 = &PTR_FUN_110c2d4b0;
  param_1[2] = &PTR_DAT_110bd5880;
  param_1[7] = &PTR_DAT_110bd58d8;
  param_1[0xd] = &PTR_DAT_110bd58f8;
  param_1[0x16] = &PTR_DAT_110bd5968;
  param_1[0x138] = &PTR_DAT_110c2d710;
  param_1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9c);
  func_0x00010a004e5c(param_1 + 0x9a);
  param_1[0x72] = &PTR_FUN_110b9ec48;
  func_0x00010a04aad4(&stack0xffffffffffffffd8);
  func_0x00010a04aad4(&stack0xffffffffffffffd8);
  func_0x00010a04aad4(&stack0xffffffffffffffd8);
  func_0x00010a04aad4(&stack0xffffffffffffffd8);
  FUN_10a0617bc(param_1 + 0x7e);
  func_0x00010a04aad4(&stack0xffffffffffffffd8);
  func_0x00010a04aad4(&stack0xffffffffffffffd8);
  lVar2 = param_1[0x71];
  param_1[0x71] = 0;
  if (lVar2 != 0) {
    FUN_10a447854();
  }
  param_1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6c);
  FUN_10a44a358(param_1 + 0x65);
  plVar1 = (long *)param_1[0x62];
  param_1[0x62] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x60,0);
  FUN_10a4477fc(param_1 + 0x5e);
  func_0x00010a4477a4(param_1 + 0x5c);
  func_0x00010a4476d0(param_1 + 0x57);
  FUN_10a44763c(param_1 + 0x54);
  if (param_1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4c);
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1,&PTR_PTR_110c2d1e8);
  return;
}



/* Entry: 10a9006f8; end: 10a900733;  */

void FUN_10a9006f8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x00010a052384(param_1 + 0x136);
  if (param_1[0x135] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x99f) < '\0') {
    __ZdlPv(param_1[0x131]);
  }
  func_0x00010a052384(param_1 + 0x12f);
  if (param_1[0x12e] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x967) < '\0') {
    __ZdlPv(param_1[0x12a]);
  }
  func_0x00010a052384(param_1 + 0x128);
  if (param_1[0x127] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x92f) < '\0') {
    __ZdlPv(param_1[0x123]);
  }
  func_0x00010a052384(param_1 + 0x121);
  if (param_1[0x120] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x8f7) < '\0') {
    __ZdlPv(param_1[0x11c]);
  }
  func_0x00010a052384(param_1 + 0x11a);
  if (param_1[0x119] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x8bf) < '\0') {
    __ZdlPv(param_1[0x115]);
  }
  func_0x00010a052384(param_1 + 0x113);
  if (param_1[0x112] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x887) < '\0') {
    __ZdlPv(param_1[0x10e]);
  }
  func_0x00010a052384(param_1 + 0x10c);
  if (param_1[0x10b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x84f) < '\0') {
    __ZdlPv(param_1[0x107]);
  }
  func_0x00010a052384(param_1 + 0x105);
  if (param_1[0x104] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x817) < '\0') {
    __ZdlPv(param_1[0x100]);
  }
  func_0x00010a052384(param_1 + 0xfe);
  if (param_1[0xfd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x7df) < '\0') {
    __ZdlPv(param_1[0xf9]);
  }
  func_0x00010a9194e4(param_1 + 0xf7);
  func_0x00010a9194e4(param_1 + 0xf5);
  func_0x00010a91948c(param_1 + 0xf3);
  func_0x00010a9193dc(param_1 + 0xf1);
  func_0x00010a91948c(param_1 + 0xef);
  func_0x00010a9193dc(param_1 + 0xed);
  func_0x00010a9193dc(param_1 + 0xeb);
  func_0x00010a919434(param_1 + 0xe9);
  func_0x00010a9193dc(param_1 + 0xe7);
  func_0x00010a052384(param_1 + 0xe5);
  if (param_1[0xe4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x717) < '\0') {
    __ZdlPv(param_1[0xe0]);
  }
  func_0x00010a494dd8(param_1 + 0xde);
  func_0x00010a052384(param_1 + 0xdc);
  if (param_1[0xdb] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6cf) < '\0') {
    __ZdlPv(param_1[0xd7]);
  }
  func_0x00010a494c90(param_1 + 0xd5);
  func_0x00010a052384(param_1 + 0xd3);
  if (param_1[0xd2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x687) < '\0') {
    __ZdlPv(param_1[0xce]);
  }
  func_0x00010a493d08(param_1 + 0xcc);
  func_0x00010a052384(param_1 + 0xca);
  if (param_1[0xc9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x63f) < '\0') {
    __ZdlPv(param_1[0xc5]);
  }
  func_0x00010a493d08(param_1 + 0xc3);
  func_0x00010a052384(param_1 + 0xc1);
  if (param_1[0xc0] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f7) < '\0') {
    __ZdlPv(param_1[0xbc]);
  }
  func_0x00010a4952ac(param_1 + 0xba);
  if (param_1[0xb9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lVar2 = 0x5b0;
  do {
    func_0x00010a9102c4(*(undefined8 *)((long)param_1 + lVar2));
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != 0x550);
  func_0x00010a9195cc(param_1[0xaa]);
  plVar1 = (long *)param_1[0xa2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a91953c(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0xa0];
  param_1[0xa0] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  FUN_10a9162c4(param_1 + 0x9e);
  *param_1 = &PTR_FUN_110c2d4b0;
  param_1[2] = &PTR_DAT_110bd5880;
  param_1[7] = &PTR_DAT_110bd58d8;
  param_1[0xd] = &PTR_DAT_110bd58f8;
  param_1[0x16] = &PTR_DAT_110bd5968;
  param_1[0x138] = &PTR_DAT_110c2d710;
  param_1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9c);
  func_0x00010a004e5c(param_1 + 0x9a);
  param_1[0x72] = &PTR_FUN_110b9ec48;
  func_0x00010a04aad4(&stack0xffffffffffffffd8);
  func_0x00010a04aad4(&stack0xffffffffffffffd8);
  func_0x00010a04aad4(&stack0xffffffffffffffd8);
  func_0x00010a04aad4(&stack0xffffffffffffffd8);
  FUN_10a0617bc(param_1 + 0x7e);
  func_0x00010a04aad4(&stack0xffffffffffffffd8);
  func_0x00010a04aad4(&stack0xffffffffffffffd8);
  lVar2 = param_1[0x71];
  param_1[0x71] = 0;
  if (lVar2 != 0) {
    FUN_10a447854();
  }
  param_1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6c);
  FUN_10a44a358(param_1 + 0x65);
  plVar1 = (long *)param_1[0x62];
  param_1[0x62] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x60,0);
  FUN_10a4477fc(param_1 + 0x5e);
  func_0x00010a4477a4(param_1 + 0x5c);
  func_0x00010a4476d0(param_1 + 0x57);
  FUN_10a44763c(param_1 + 0x54);
  if (param_1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4c);
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1,&PTR_PTR_110c2d1e8);
  return;
}



/* Entry: 10a900734; end: 10a9007bf;  */

void FUN_10a900734(void)

{
  FUN_10a9003f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9007c0; end: 10a9007ef;  */

void FUN_10a9007c0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a9003f8((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a9007f0; end: 10a900d2b;  */

/* WARNING: Removing unreachable block (ram,0x00010a900bd4) */

void FUN_10a9007f0(long param_1,undefined **param_2)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined **ppuVar18;
  int iVar19;
  undefined **unaff_x26;
  undefined **unaff_x27;
  long *plVar20;
  undefined **unaff_x28;
  undefined *puStack_1f0;
  long *plStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  code **ppcStack_1a8;
  undefined8 *puStack_1a0;
  undefined **ppuStack_198;
  long lStack_190;
  undefined **ppuStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined **ppuStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  undefined *puStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined8 *puStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a42241c();
  ppuVar9 = (undefined **)0x10a919888;
  ppuVar8 = &PTR_DAT_110c2e4b8;
  puStack_148 = (undefined *)0x10a919888;
  ppuStack_140 = &PTR_DAT_110c2e4b8;
  ppuVar7 = &puStack_148;
  puVar16 = &uStack_108;
  uStack_108 = 0x10a919888;
  ppuStack_100 = &PTR_DAT_110c2e4b8;
  uStack_b8 = CONCAT17(8,(undefined7)uStack_b8);
  uStack_c8 = 0x7465737341786676;
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  pcStack_b0 = FUN_10a91964c;
  ppuStack_a8 = &PTR_FUN_110c2e4a0;
  puVar5 = (undefined8 *)0x58;
  lStack_138 = param_1;
  lStack_f8 = param_1;
  __Znwm();
  ppuVar18 = &pcStack_b0;
  *puVar5 = 0x10a919888;
  puVar5[1] = &PTR_DAT_110c2e4b8;
  puVar5[2] = param_1;
  puVar5[9] = uStack_c0;
  puVar5[8] = uStack_c8;
  puVar5[10] = uStack_b8;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  puStack_a0 = puVar5;
  func_0x000107c2b054(auStack_160,&UNK_10f6821fc);
  (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110c2d218,&pcStack_b0,0,auStack_160);
  if (cStack_149 < '\0') {
    __ZdlPv(auStack_160[0]);
  }
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  if (uStack_b8 < 0) {
    __ZdlPv(uStack_c8);
  }
  (*(code *)*ppuStack_100)(&ppuStack_100);
  (*(code *)*ppuStack_140)(&ppuStack_140);
  ppuVar11 = &PTR_DAT_110c2d238;
  ppuVar6 = param_2;
  (**(code **)(*param_2 + 0x200))();
  if ((int)ppuVar6 != 0) {
    ppuVar11 = &PTR_DAT_110c2d258;
    ppuVar6 = param_2;
    (**(code **)(*param_2 + 0x200))();
    if ((int)ppuVar6 != 0) {
      ppuVar7 = param_2;
      (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c2d258,0);
      FUN_10a9198b4(param_1 + 0x500,
                    (long)((float)(ulong)(long)(int)ppuVar7 / *(float *)(param_1 + 0x520)));
      ppuVar11 = &PTR_DAT_110c2d238;
      (**(code **)(*param_2 + 0x210))(param_2);
      if (0 < (int)ppuVar7) {
        puVar16 = (undefined8 *)0x0;
        ppuVar18 = &PTR_DAT_110c2d278;
        unaff_x26 = &PTR_DAT_110c2d2d8;
        unaff_x27 = &PTR_DAT_110c2d2f8;
        unaff_x28 = &PTR_DAT_110c2d318;
        ppuStack_168 = ppuVar7;
        do {
          (**(code **)(*param_2 + 0x218))(param_2,puVar16);
          (**(code **)(*param_2 + 0xa0))(&uStack_108,param_2,&PTR_DAT_110c2d278);
          lVar15 = param_1 + 0x500;
          FUN_10a919a84(lVar15,&uStack_108,&uStack_108);
          lVar12 = *(long *)(lVar15 + 0x30);
          if (lVar12 != 0) {
            lVar14 = 0;
            do {
              *(undefined8 *)(*(long *)(lVar15 + 0x28) + lVar14 * 8) = 0;
              lVar14 = lVar14 + 1;
            } while (lVar12 != lVar14);
            uVar13 = *(undefined8 *)(lVar15 + 0x38);
            *(undefined8 *)(lVar15 + 0x38) = 0;
            *(undefined8 *)(lVar15 + 0x40) = 0;
            func_0x00010a919588(uVar13);
          }
          ppuVar11 = &PTR_DAT_110c2d298;
          ppuVar6 = param_2;
          (**(code **)(*param_2 + 0x200))();
          if ((int)ppuVar6 != 0) {
            ppuVar11 = &PTR_DAT_110c2d2b8;
            ppuVar6 = param_2;
            (**(code **)(*param_2 + 0x200))();
            if ((int)ppuVar6 != 0) {
              ppuVar8 = param_2;
              (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c2d2b8,0);
              lVar15 = param_1 + 0x500;
              FUN_10a919a84(lVar15,&uStack_108,&uStack_108);
              iVar19 = (int)ppuVar8;
              FUN_10a919d2c(lVar15 + 0x28,
                            (long)((float)(ulong)(long)iVar19 / *(float *)(lVar15 + 0x48)));
              ppuVar11 = &PTR_DAT_110c2d298;
              (**(code **)(*param_2 + 0x210))(param_2);
              if (0 < iVar19) {
                iVar17 = 0;
                do {
                  (**(code **)(*param_2 + 0x218))(param_2,iVar17);
                  (**(code **)(*param_2 + 0xa0))(&pcStack_b0,param_2,&PTR_DAT_110c2d2d8);
                  ppuVar9 = param_2;
                  (**(code **)(*param_2 + 0x28))(param_2,&PTR_DAT_110c2d2f8,0);
                  lVar15 = param_1 + 0x500;
                  FUN_10a919a84(lVar15,&uStack_108,&uStack_108);
                  lVar15 = lVar15 + 0x28;
                  FUN_10a919f30(lVar15,&pcStack_b0,&pcStack_b0);
                  *(undefined ***)(lVar15 + 0x30) = ppuVar9;
                  *(undefined8 *)(lVar15 + 0x38) = 0;
                  ppuVar9 = param_2;
                  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c2d318,0);
                  lVar15 = param_1 + 0x500;
                  FUN_10a919a84(lVar15,&uStack_108,&uStack_108);
                  lVar15 = lVar15 + 0x28;
                  ppuVar11 = &pcStack_b0;
                  FUN_10a919f30(lVar15,ppuVar11,&pcStack_b0);
                  *(char *)(lVar15 + 0x28) = (char)ppuVar9;
                  (**(code **)(*param_2 + 0x220))(param_2);
                  iVar17 = iVar17 + 1;
                } while (iVar19 != iVar17);
              }
              (**(code **)(*param_2 + 0x220))(param_2);
              ppuVar7 = ppuStack_168;
            }
          }
          (**(code **)(*param_2 + 0x220))(param_2);
          if (lStack_f8 < 0) {
            __ZdlPv(uStack_108);
          }
          uVar1 = (int)puVar16 + 1;
          puVar16 = (undefined8 *)(ulong)uVar1;
        } while (uVar1 != (uint)ppuVar7);
      }
      (**(code **)(*param_2 + 0x220))();
      ppuVar6 = param_2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_149 < '\0') {
    __ZdlPv(auStack_160[0]);
  }
  (*(code *)*ppuStack_a8)(ppuVar18 + 1);
  if (uStack_b8 < 0) {
    __ZdlPv(uStack_c8);
  }
  (*(code *)*ppuStack_100)(puVar16 + 1);
  (*(code *)*ppuStack_140)(ppuVar7 + 1);
  ppuVar10 = ppuVar6;
  __Unwind_Resume();
  pcStack_178 = FUN_10a900d2c;
  ppuStack_1d0 = unaff_x28;
  ppuStack_1c8 = unaff_x27;
  ppuStack_1c0 = unaff_x26;
  ppuStack_1b8 = ppuVar8;
  ppuStack_1b0 = ppuVar9;
  ppcStack_1a8 = (code **)ppuVar18;
  puStack_1a0 = puVar16;
  ppuStack_198 = ppuVar7;
  lStack_190 = param_1;
  ppuStack_188 = ppuVar6;
  puStack_180 = &stack0xfffffffffffffff0;
  FUN_10a422a34();
  puStack_1e0 = &UNK_10f66355b;
  uStack_1d8 = 0xe;
  plStack_1e8 = (long *)ppuVar10[0x9f];
  puStack_1f0 = ppuVar10[0x9e];
  if (ppuVar10[0x9f] != (undefined *)0x0) {
    plVar20 = (long *)(ppuVar10[0x9f] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = *plVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*ppuVar11 + 0x108))(ppuVar11,&PTR_DAT_110c2d218,&puStack_1f0,&puStack_1e0);
  plVar20 = plStack_1e8;
  if (plStack_1e8 != (long *)0x0) {
    plVar2 = plStack_1e8 + 1;
    do {
      lVar15 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  (**(code **)(*ppuVar11 + 0x40))(ppuVar11,&PTR_DAT_110c2d258,*(undefined4 *)(ppuVar10 + 0xa3));
  (**(code **)(*ppuVar11 + 0x18))(ppuVar11,&PTR_DAT_110c2d238);
  for (puVar16 = (undefined8 *)ppuVar10[0xa2]; puVar16 != (undefined8 *)0x0;
      puVar16 = (undefined8 *)*puVar16) {
    (**(code **)(*ppuVar11 + 0x10))(ppuVar11);
    FUN_10a00d760(ppuVar11,&PTR_DAT_110c2d278,puVar16 + 2);
    (**(code **)(*ppuVar11 + 0x40))(ppuVar11,&PTR_DAT_110c2d2b8,*(undefined4 *)(puVar16 + 8));
    (**(code **)(*ppuVar11 + 0x18))(ppuVar11,&PTR_DAT_110c2d298);
    for (plVar20 = (long *)puVar16[7]; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
      (**(code **)(*ppuVar11 + 0x10))(ppuVar11);
      FUN_10a00d760(ppuVar11,&PTR_DAT_110c2d2d8,plVar20 + 2);
      (**(code **)(*ppuVar11 + 0x58))(ppuVar11,&PTR_DAT_110c2d2f8,plVar20[6]);
      (**(code **)(*ppuVar11 + 0x70))(ppuVar11,&PTR_DAT_110c2d318,*(undefined1 *)(plVar20 + 5));
      (**(code **)(*ppuVar11 + 0x20))(ppuVar11);
    }
    (**(code **)(*ppuVar11 + 0x20))(ppuVar11);
    (**(code **)(*ppuVar11 + 0x20))(ppuVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a900f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar11 + 0x20))(ppuVar11);
  return;
}



/* Entry: 10a900d2c; end: 10a900f73;  */

void FUN_10a900d2c(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uStack_80;
  long *plStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  FUN_10a422a34();
  puStack_70 = &UNK_10f66355b;
  uStack_68 = 0xe;
  plStack_78 = *(long **)(param_1 + 0x4f8);
  uStack_80 = *(undefined8 *)(param_1 + 0x4f0);
  if (*(long *)(param_1 + 0x4f8) != 0) {
    plVar4 = (long *)(*(long *)(param_1 + 0x4f8) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110c2d218,&uStack_80,&puStack_70);
  plVar4 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar5 = plStack_78 + 1;
    do {
      lVar3 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c2d258,*(undefined4 *)(param_1 + 0x518));
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c2d238);
  for (plVar4 = *(long **)(param_1 + 0x510); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110c2d278,plVar4 + 2);
    (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c2d2b8,*(undefined4 *)(plVar4 + 8));
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c2d298);
    for (plVar5 = (long *)plVar4[7]; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      (**(code **)(*param_2 + 0x10))(param_2);
      FUN_10a00d760(param_2,&PTR_DAT_110c2d2d8,plVar5 + 2);
      (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c2d2f8,plVar5[6]);
      (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c2d318,*(undefined1 *)(plVar5 + 5));
      (**(code **)(*param_2 + 0x20))(param_2);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a900f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a900f74; end: 10a901223;  */

void FUN_10a900f74(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    plVar10 = param_2;
    uVar9 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_58 = (long *)param_2[9];
    lStack_60 = param_2[8];
    lVar11 = param_4 + 0x88;
    func_0x00010a35bf90(lVar11,&lStack_60);
    puVar4 = (undefined8 *)((ulong)&lStack_60 | 8);
    plVar10 = &lStack_60;
    if (lVar11 != 0) {
      puVar4 = (undefined8 *)(lVar11 + 0x28);
      plVar10 = (long *)(lVar11 + 0x20);
    }
    uVar9 = *puVar4;
    plVar10 = (long *)*plVar10;
  }
  lVar11 = param_2[0x2e];
  FUN_10a3dd220(lVar11);
  FUN_10a581e2c(lVar11,plVar10,uVar9);
  plVar10 = (long *)0x28;
  __Znwm();
  plVar7 = plVar10 + 1;
  *plVar7 = 0;
  *plVar10 = (long)&PTR_FUN_110c2e4e0;
  plVar10[2] = 0;
  plVar10[3] = lVar11;
  plVar10[4] = (long)FUN_10a3df8cc;
  if (lVar11 != 0) {
    if (*(long *)(lVar11 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar6) {
          *plVar7 = *plVar7 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar10 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar11 + 0x28) = lVar11;
      *(long **)(lVar11 + 0x30) = plVar10;
    }
    else {
      if (*(long *)(*(long *)(lVar11 + 0x30) + 8) != -1) goto LAB_10a9010e0;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar6) {
          *plVar7 = *plVar7 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar10 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar11 + 0x28) = lVar11;
      *(long **)(lVar11 + 0x30) = plVar10;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar8 = *plVar7;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
LAB_10a9010e0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar11 + 0x150,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar11 + 0x180) & 0xfffc;
  *(ushort *)(lVar11 + 0x180) = uVar3 | *(ushort *)(lVar11 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar11 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  if (plVar10 != (long *)0x0) {
    plVar7 = plVar10 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = *plVar7 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_60 = lVar11;
  plStack_58 = plVar10;
  FUN_10a3c7ce8(param_3,&lStack_60);
  plVar7 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar8 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x128))();
  *(undefined1 *)(lVar11 + 0x20c) = 0;
  *(int *)(lVar11 + 0x210) = (int)plVar7;
  FUN_10a422d34(param_2,lVar11,param_4);
  FUN_10a908d3c(lVar11 + 0x4f0,param_2[0x9e],param_2[0x9f]);
  *param_1 = lVar11;
  param_1[1] = (long)plVar10;
  return;
}



/* Entry: 10a901224; end: 10a901227;  */

/* WARNING: Removing unreachable block (ram,0x00010a906128) */
/* WARNING: Removing unreachable block (ram,0x00010a905a0c) */
/* WARNING: Removing unreachable block (ram,0x00010a9059a0) */
/* WARNING: Removing unreachable block (ram,0x00010a907420) */
/* WARNING: Removing unreachable block (ram,0x00010a906a94) */
/* WARNING: Removing unreachable block (ram,0x00010a905684) */
/* WARNING: Removing unreachable block (ram,0x00010a9053e0) */
/* WARNING: Removing unreachable block (ram,0x00010a905260) */
/* WARNING: Removing unreachable block (ram,0x00010a905518) */
/* WARNING: Removing unreachable block (ram,0x00010a9068ec) */
/* WARNING: Removing unreachable block (ram,0x00010a906ff4) */
/* WARNING: Removing unreachable block (ram,0x00010a9078d0) */
/* WARNING: Removing unreachable block (ram,0x00010a9071c8) */
/* WARNING: Removing unreachable block (ram,0x00010a907678) */
/* WARNING: Removing unreachable block (ram,0x00010a905d84) */
/* WARNING: Removing unreachable block (ram,0x00010a9064cc) */
/* WARNING: Removing unreachable block (ram,0x00010a905d78) */
/* WARNING: Removing unreachable block (ram,0x00010a9058d4) */
/* WARNING: Removing unreachable block (ram,0x00010a9058d8) */
/* WARNING: Removing unreachable block (ram,0x00010a9058e0) */
/* WARNING: Removing unreachable block (ram,0x00010a9058e8) */
/* WARNING: Removing unreachable block (ram,0x00010a9058ec) */
/* WARNING: Removing unreachable block (ram,0x00010a906454) */
/* WARNING: Removing unreachable block (ram,0x00010a905898) */
/* WARNING: Removing unreachable block (ram,0x00010a9071bc) */
/* WARNING: Removing unreachable block (ram,0x00010a907414) */
/* WARNING: Removing unreachable block (ram,0x00010a9078c4) */
/* WARNING: Removing unreachable block (ram,0x00010a905994) */
/* WARNING: Removing unreachable block (ram,0x00010a9070b8) */
/* WARNING: Removing unreachable block (ram,0x00010a905df0) */
/* WARNING: Removing unreachable block (ram,0x00010a9060b0) */
/* WARNING: Removing unreachable block (ram,0x00010a907540) */
/* WARNING: Removing unreachable block (ram,0x00010a9060bc) */
/* WARNING: Removing unreachable block (ram,0x00010a906358) */
/* WARNING: Removing unreachable block (ram,0x00010a9079f0) */
/* WARNING: Removing unreachable block (ram,0x00010a906394) */
/* WARNING: Removing unreachable block (ram,0x00010a906398) */
/* WARNING: Removing unreachable block (ram,0x00010a9063a0) */
/* WARNING: Removing unreachable block (ram,0x00010a9063a8) */
/* WARNING: Removing unreachable block (ram,0x00010a9063ac) */
/* WARNING: Removing unreachable block (ram,0x00010a906460) */
/* WARNING: Removing unreachable block (ram,0x00010a9066e0) */
/* WARNING: Removing unreachable block (ram,0x00010a90671c) */
/* WARNING: Removing unreachable block (ram,0x00010a906720) */
/* WARNING: Removing unreachable block (ram,0x00010a906728) */
/* WARNING: Removing unreachable block (ram,0x00010a906730) */
/* WARNING: Removing unreachable block (ram,0x00010a906734) */
/* WARNING: Removing unreachable block (ram,0x00010a9067e0) */
/* WARNING: Removing unreachable block (ram,0x00010a9067ec) */
/* WARNING: Removing unreachable block (ram,0x00010a906858) */
/* WARNING: Removing unreachable block (ram,0x00010a906fe8) */
/* WARNING: Removing unreachable block (ram,0x00010a9070f4) */
/* WARNING: Removing unreachable block (ram,0x00010a9070f8) */
/* WARNING: Removing unreachable block (ram,0x00010a907100) */
/* WARNING: Removing unreachable block (ram,0x00010a907108) */
/* WARNING: Removing unreachable block (ram,0x00010a90710c) */
/* WARNING: Removing unreachable block (ram,0x00010a9072e8) */
/* WARNING: Removing unreachable block (ram,0x00010a9072f4) */
/* WARNING: Removing unreachable block (ram,0x00010a90754c) */
/* WARNING: Removing unreachable block (ram,0x00010a90766c) */
/* WARNING: Removing unreachable block (ram,0x00010a907798) */
/* WARNING: Removing unreachable block (ram,0x00010a9077a4) */
/* WARNING: Removing unreachable block (ram,0x00010a9079fc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a901224(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *******ppppppplVar10;
  long *plVar11;
  undefined4 *puVar12;
  int iVar13;
  long ****pppplVar14;
  undefined4 uVar15;
  int iVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  uint uVar19;
  char cVar20;
  code *pcVar21;
  bool bVar22;
  uint uVar23;
  undefined **ppuVar24;
  byte *pbVar25;
  long ******pppppplVar26;
  long lVar27;
  long **pplVar28;
  long *****ppppplVar29;
  long *plVar30;
  long *plVar31;
  undefined8 *puVar32;
  long *****ppppplVar33;
  long *****ppppplVar34;
  long **pplVar35;
  uint uVar36;
  undefined1 *puVar37;
  long *******ppppppplVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  undefined8 in_x6;
  undefined8 in_x7;
  byte bVar41;
  int iVar42;
  undefined *puVar43;
  long *plVar44;
  long ******pppppplVar45;
  long lVar46;
  long ***ppplVar47;
  long *******ppppppplVar48;
  long *plVar49;
  ulong uVar50;
  long lVar51;
  long ******pppppplVar52;
  long lVar53;
  ulong uVar54;
  long ****pppplVar55;
  char *pcVar56;
  long ******pppppplVar57;
  ulong uVar58;
  uint uVar59;
  long *******ppppppplVar60;
  long ******pppppplVar61;
  long ****pppplVar62;
  uint uVar63;
  long *****ppppplVar64;
  long lVar65;
  long lVar66;
  long *plVar67;
  long ******pppppplVar68;
  undefined8 uVar69;
  long *plVar70;
  long *******ppppppplVar71;
  ulong uVar72;
  long ****pppplVar73;
  long lVar74;
  long ******pppppplVar75;
  long *******ppppppplVar76;
  long **pplVar77;
  float fVar78;
  undefined4 uVar79;
  long ***ppplVar80;
  float fVar81;
  undefined4 uVar82;
  float fVar83;
  undefined4 uVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined4 uVar89;
  float fVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  long *plVar93;
  long ******pppppplStack_2a8;
  long *****ppppplStack_280;
  long *plStack_278;
  long *****ppppplStack_270;
  long *plStack_268;
  long *plStack_260;
  long *****ppppplStack_258;
  long *plStack_250;
  long **pplStack_248;
  long ******pppppplStack_240;
  long *plStack_238;
  long *plStack_230;
  long **pplStack_228;
  long *plStack_220;
  long *plStack_218;
  long ******pppppplStack_210;
  long ******pppppplStack_208;
  long *plStack_200;
  long *****ppppplStack_1f8;
  long *****ppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  long *******ppppppplStack_1d8;
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c8;
  long *******ppppppplStack_1c0;
  long *plStack_1b8;
  long ******pppppplStack_1b0;
  undefined8 uStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  long lStack_190;
  long lStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  long *****ppppplStack_158;
  long ******pppppplStack_150;
  long *******ppppppplStack_148;
  long *******ppppppplStack_140;
  long *******ppppppplStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  undefined8 uStack_108;
  long *******ppppppplStack_100;
  long ******pppppplStack_f8;
  long *****ppppplStack_f0;
  long *****ppppplStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long ******pppppplStack_d0;
  long ******pppppplStack_c8;
  undefined8 uStack_c0;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplVar94;
  long *******ppppppplVar95;
  
  if (param_1[0x9e] == 0) {
    return;
  }
  if (0x177 < *(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18)) {
    FUN_10a907f80(param_1,0);
    if (param_1[0x2e] == 0) {
      ppuVar24 = &PTR___tlv_bootstrap_11340dee8;
      (*(code *)PTR___tlv_bootstrap_11340dee8)();
      puVar43 = *ppuVar24;
      if (puVar43 != (undefined *)0x0) goto LAB_10a901328;
      FUN_10a3ca004();
      pbVar25 = (byte *)0x113836510;
      FUN_10ad0621c();
      uVar72 = (ulong)(*pbVar25 >> 4 & 4);
      puVar43 = ppuVar24[uVar72 + 7];
      if (puVar43 != (undefined *)0x0) goto LAB_10a901328;
      FUN_10a3ca05c(ppuVar24,uVar72);
      puVar43 = ppuVar24[uVar72 + 7];
      uStack_170 = (long *******)&UNK_10f646d35;
      ppppppplStack_168 = (long *******)0x26;
    }
    else {
      puVar43 = *(undefined **)(*(long *)(param_1[0x2e] + 0x100) + 0x260);
      uStack_170 = (long *******)&UNK_10f653c20;
      ppppppplStack_168 = (long *******)0x21;
    }
    if (puVar43 != (undefined *)0x0) {
LAB_10a901328:
      plVar31 = *(long **)(puVar43 + 0x228);
      (**(code **)(*plVar31 + 0x68))();
      if (0xf < *(int *)((long)plVar31 + 0x8c)) {
        FUN_10a8fc8e8(&pplStack_228,param_1[0x9e]);
        pplStack_248 = &plStack_220;
        if (pplStack_228 != pplStack_248) {
          ppppppplVar48 = (long *******)(param_1 + 0xa9);
          pppppplVar52 = (long ******)(param_1 + 0xaa);
          plStack_278 = param_1 + 0x2a;
          uVar89 = 0x4b18967f;
          pplVar35 = pplStack_228;
          plStack_250 = param_1;
          do {
            lVar46 = param_1[0x9e];
            lVar51 = lVar46 + 0xf8;
            FUN_10a9176b0(lVar51,pplVar35 + 4);
            if (lVar46 + 0x100 != lVar51) {
              plVar31 = *(long **)(lVar51 + 0x38);
              plVar30 = *(long **)(lVar51 + 0x40);
              if (plVar30 != (long *)0x0) {
                plVar49 = plVar30 + 1;
                do {
                  cVar20 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar49,0x10);
                  if (bVar22) {
                    *plVar49 = *plVar49 + 1;
                    cVar20 = ExclusiveMonitorsStatus();
                  }
                } while (cVar20 != '\0');
              }
              plStack_238 = plVar31;
              plStack_230 = plVar30;
              if (plVar31 != (long *)0x0) {
                uVar36 = *(uint *)(plVar31 + 0x10);
                if (uVar36 < 0xf4241) {
                  ppppplStack_258 =
                       (long *****)
                       CONCAT44(ppppplStack_258._4_4_,*(undefined4 *)((long)plVar31 + 0x7c));
                  if (uVar36 < 2) {
                    uVar36 = 1;
                  }
                  fVar90 = *(float *)((long)plVar31 + 0x84);
                  lVar51 = plVar31[0x11];
                  uVar91 = *(undefined8 *)((long)plVar31 + 0x8c);
                  uVar17 = *(undefined1 *)((long)plVar31 + 0x94);
                  uVar18 = *(undefined1 *)((long)plVar31 + 0x95);
                  bVar41 = *(byte *)((long)plVar31 + 0x96);
                  pppppplStack_240 =
                       (long ******)
                       CONCAT44(pppppplStack_240._4_4_,(uint)*(byte *)((long)plVar31 + 0x97));
                  lVar46 = plVar31[0x13];
                  uVar15 = *(undefined4 *)((long)plVar31 + 0xbc);
                  lStack_188 = plVar31[0x19];
                  lStack_190 = plVar31[0x18];
                  lVar53 = plVar31[0x1a];
                  uVar69 = *(undefined8 *)((long)plVar31 + 0x9c);
                  plStack_268 = *(long **)((long)plVar31 + 0xac);
                  ppppplStack_270 = *(long ******)((long)plVar31 + 0xa4);
                  uVar92 = *(undefined8 *)((long)plVar31 + 0xb4);
                  lVar65 = param_1[0x2e];
                  FUN_10a3dea28();
                  (**(code **)(*plStack_250 + 0x50))(&uStack_170);
                  ppppppplVar60 = ppppppplStack_168;
                  ppppppplStack_d8 = ppppppplStack_168;
                  ppppppplStack_e0 = uStack_170;
                  if (ppppppplStack_168 == (long *******)0x0) {
                    ppppppplVar60 = (long *******)0x0;
                  }
                  else {
                    ppppppplVar94 = ppppppplStack_168 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                      if (bVar22) {
                        *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppppplStack_168 != (long *******)0x0) {
                      ppppppplVar94 = ppppppplStack_168 + 1;
                      do {
                        pppppplVar68 = *ppppppplVar94;
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                        if (bVar22) {
                          *ppppppplVar94 = (long ******)((long)pppppplVar68 + -1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      if (pppppplVar68 == (long ******)0x0) {
                        (*(code *)(*ppppppplStack_168)[2])(ppppppplStack_168);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
                        ppppppplVar60 = ppppppplStack_d8;
                      }
                    }
                  }
                  ppppppplVar94 = ppppppplStack_e0;
                  if ((long *****)plVar31[5] == (long *****)0x0) {
                    ppppppplVar94 = ppppppplStack_e0 + 0x2a;
                    if (*(char *)((long)ppppppplStack_e0 + 0x167) < '\0') {
                      ppppppplVar94 = (long *******)*ppppppplVar94;
                    }
                    func_0x00010ae06f08(1,0x12,&UNK_10f6821fc,&UNK_10f6821fc,0xffffffff,
                                        &UNK_10f68273f,in_x6,in_x7,ppppppplVar94);
                    ppppppplStack_1a0._0_5_ = (uint5)(uint)ppppppplStack_1a0;
                    pppppplStack_1b0 = (long ******)0x0;
                    uStack_1a8 = (long ******)0x0;
                    ppppppplStack_1a0 =
                         (long *******)((ulong)ppppppplStack_1a0 & 0xffffffffffffff00);
                  }
                  else {
                    pppppplStack_210 = (long ******)0x0;
                    pppppplStack_208 = (long ******)0x0;
                    plVar44 = *(long **)(lVar65 + 0x38);
                    plVar49 = *(long **)(lVar65 + 0x30);
                    for (plVar30 = plVar49; plVar30 != plVar44; plVar30 = plVar30 + 1) {
                      puVar32 = *(undefined8 **)(*plVar30 + 200);
LAB_10a90158c:
                      if (puVar32 != *(undefined8 **)(*plVar30 + 0xd0)) {
                        pppppplVar68 = (long ******)*puVar32;
                        if ((long *****)plVar31[5] != *pppppplVar68) goto code_r0x00010a9015a4;
                        pppppplStack_2a8 = (long ******)puVar32[1];
                        pppppplVar26 = pppppplVar68;
                        if (pppppplStack_2a8 != (long ******)0x0) {
                          pppppplVar26 = pppppplStack_2a8 + 1;
                          do {
                            cVar20 = '\x01';
                            bVar22 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                            if (bVar22) {
                              *pppppplVar26 = (long *****)((long)*pppppplVar26 + 1);
                              cVar20 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar20 != '\0');
                          pppppplVar26 = (long ******)*puVar32;
                        }
                        ppppplVar33 = pppppplVar26[0x62];
                        ppppplVar34 = pppppplVar26[99];
                        pppppplStack_210 = pppppplVar68;
                        pppppplStack_208 = pppppplStack_2a8;
                        FUN_10a8fda3c();
                        if ((ulong)pppppplVar26 >> 0x20 != 0) {
                          if (((long)ppppplVar34 - (long)ppppplVar33 & 0x3fffffffcU) == 0) {
                            *(undefined4 *)(pppppplVar68 + 0x280) = 0;
                          }
                          uVar23 = (uint)pppppplVar26;
                          uVar59 = uVar23 & 0xff;
                          uVar63 = uVar23 >> 8;
                          uVar19 = *(int *)(pppppplVar68 + 0x2ae) +
                                   *(int *)(pppppplVar68 + 0x2ae) * uVar23;
                          uVar23 = *(uint *)((long)pppppplVar68 + 0x54);
                          if (*(uint *)((long)pppppplVar68 + 0x54) <= uVar19) {
                            uVar23 = uVar19;
                          }
                          *(uint *)((long)pppppplVar68 + 0x54) = uVar23;
                          *(byte *)((long)pppppplVar68 + 0x140f) =
                               *(byte *)((long)pppppplVar68 + 0x140f) | bVar41;
                          *(byte *)(pppppplVar68 + 0x282) =
                               *(byte *)(pppppplVar68 + 0x282) | (byte)pppppplStack_240;
                          lVar66 = *plVar30;
                          if (lVar66 == 0) {
                            plVar49 = *(long **)(lVar65 + 0x30);
                            plVar44 = *(long **)(lVar65 + 0x38);
                            bVar22 = true;
                            goto LAB_10a901764;
                          }
                          bVar22 = true;
                          goto LAB_10a901770;
                        }
                        ppppppplVar60 = ppppppplVar94 + 0x2a;
                        if (*(char *)((long)ppppppplVar94 + 0x167) < '\0') {
                          ppppppplVar60 = (long *******)*ppppppplVar60;
                        }
                        __ZNSt3__19to_stringEi(&uStack_170,0x20);
                        ppppppplVar94 = uStack_170;
                        if (-1 < (long)ppppppplStack_160) {
                          ppppppplVar94 = (long *******)&uStack_170;
                        }
                        func_0x00010ae06f08(1,0x12,&UNK_10f6821fc,&UNK_10f6821fc,0xffffffff,
                                            &UNK_10f68275f,in_x6,in_x7,ppppppplVar60,ppppppplVar94);
                        if ((long)ppppppplStack_160 < 0) {
                          __ZdlPv(uStack_170);
                        }
                        ppppppplStack_1a0._0_5_ = (uint5)(uint)ppppppplStack_1a0;
                        pppppplStack_1b0 = (long ******)0x0;
                        uStack_1a8 = (long ******)0x0;
                        ppppppplStack_1a0 =
                             (long *******)((ulong)ppppppplStack_1a0 & 0xffffffffffffff00);
                        goto joined_r0x00010a9016e0;
                      }
                    }
                    pppppplStack_2a8 = (long ******)0x0;
                    bVar22 = false;
                    uVar59 = 0;
                    uVar63 = 0;
                    pppppplVar68 = (long ******)0x0;
LAB_10a901764:
                    if (plVar49 == plVar44) goto LAB_10a903268;
                    lVar66 = plVar44[-1];
LAB_10a901770:
                    iVar42 = 2;
                    if (bVar41 != 0) {
                      iVar42 = 3;
                    }
                    iVar13 = 4;
                    if ((int)pppppplStack_240 == 0) {
                      iVar13 = iVar42;
                    }
                    iVar16 = *(int *)(lVar66 + 0x124);
                    iVar42 = iVar13;
                    if (iVar13 <= iVar16) {
                      iVar42 = iVar16;
                    }
                    *(int *)(lVar66 + 0x124) = iVar42;
                    if (iVar16 < iVar13) {
                      FUN_10a93f6f4(lVar66,lVar65 + 0x68);
                    }
                    if (pppppplVar68 == (long ******)0x0) {
                      ppppppplVar38 = *(long ********)(lVar65 + 0x68);
                      ppppppplVar95 = *(long ********)(lVar65 + 0x70);
                      pppppplVar68 = (long ******)0x1598;
                      __Znwm();
                      pppppplVar68[1] = (long *****)0x0;
                      pppppplVar68[2] = (long *****)0x0;
                      *pppppplVar68 = (long *****)&PTR_FUN_110c2e530;
                      if (ppppppplVar95 != (long *******)0x0) {
                        ppppppplVar76 = ppppppplVar95 + 1;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                          if (bVar22) {
                            *ppppppplVar76 = (long ******)((long)*ppppppplVar76 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      pppppplVar26 = (long ******)plVar31[5];
                      ppppplVar33 = (long *****)plVar31[6];
                      if (ppppplVar33 != (long *****)0x0) {
                        ppppplVar34 = ppppplVar33 + 1;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppplVar34,0x10);
                          if (bVar22) {
                            *ppppplVar34 = (long ****)((long)*ppppplVar34 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      ppppplVar34 = (long *****)plVar31[7];
                      ppppplVar64 = (long *****)plVar31[8];
                      if (ppppplVar64 != (long *****)0x0) {
                        ppppplVar29 = ppppplVar64 + 1;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppplVar29,0x10);
                          if (bVar22) {
                            *ppppplVar29 = (long ****)((long)*ppppplVar29 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      pppppplStack_c8 = (long ******)0x0;
                      uStack_c0._0_1_ = 0;
                      uStack_c0._1_5_ = 0;
                      uStack_c0._6_2_ = 0;
                      uStack_b8 = 0;
                      uStack_b2 = 0;
                      ppppplStack_1f8 = ppppplVar34;
                      ppppplStack_1f0 = ppppplVar64;
                      ppppppplStack_1e0 = (long *******)pppppplVar26;
                      ppppppplStack_1d8 = (long *******)ppppplVar33;
                      ppppppplStack_1c8 = ppppppplVar38;
                      ppppppplStack_1c0 = ppppppplVar95;
                      FUN_10a2e23e0(&pppppplStack_c8,plVar31[9],plVar31[10],
                                    plVar31[10] - plVar31[9] >> 4);
                      pppppplVar68[3] = (long *****)pppppplVar26;
                      pppppplVar68[4] = ppppplVar33;
                      ppppppplStack_1e0 = (long *******)0x0;
                      ppppppplStack_1d8 = (long *******)0x0;
                      if (pppppplVar26 == (long ******)0x0) {
                        pppppplVar68[5] = (long *****)0x0;
                        pppppplVar68[6] = (long *****)0x0;
                      }
                      else {
                        FUN_10ab46af4();
                        ppppplVar33 = pppppplVar26[1];
                        ppppplVar29 = *pppppplVar26;
                        pppppplVar68[6] = pppppplVar26[1];
                        pppppplVar68[5] = ppppplVar29;
                        if (ppppplVar33 != (long *****)0x0) {
                          ppppplVar33 = ppppplVar33 + 1;
                          do {
                            cVar20 = '\x01';
                            bVar22 = (bool)ExclusiveMonitorPass(ppppplVar33,0x10);
                            if (bVar22) {
                              *ppppplVar33 = (long ****)((long)*ppppplVar33 + 1);
                              cVar20 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar20 != '\0');
                        }
                      }
                      pppppplVar45 = pppppplStack_c8;
                      pppppplVar26 = pppppplVar68 + 3;
                      pppppplVar68[7] = (long *****)pppppplStack_c8;
                      pppppplVar75 = (long ******)
                                     CONCAT26(uStack_c0._6_2_,
                                              CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                      pppppplVar68[9] = (long *****)CONCAT26(uStack_b2,uStack_b8);
                      pppppplVar68[8] = (long *****)pppppplVar75;
                      uStack_c0._0_1_ = 0;
                      uStack_c0._1_5_ = 0;
                      uStack_c0._6_2_ = 0;
                      uStack_b8 = 0;
                      uStack_b2 = 0;
                      pppppplStack_c8 = (long ******)0x0;
                      pppppplVar61 = pppppplVar68 + 10;
                      *pppppplVar61 = (long *****)0x0;
                      pppppplVar68[0xb] = (long *****)0x0;
                      pppppplVar68[0xc] = (long *****)0x0;
                      if ((long)pppppplVar75 - (long)pppppplVar45 != 0) {
                        uVar72 = (long)pppppplVar75 - (long)pppppplVar45 >> 4;
                        if (uVar72 >> 0x3c != 0) {
                          FUN_10a4afcc4();
                          goto LAB_10a903268;
                        }
                        pppppplVar45 = pppppplVar61;
                        pppppplStack_150 = pppppplVar61;
                        FUN_10a4afcd8();
                        ppppplVar33 = (long *****)
                                      ((long)pppppplVar45 -
                                      ((long)pppppplVar68[0xb] - (long)pppppplVar68[10]));
                        _memcpy(ppppplVar33);
                        uStack_170 = (long *******)pppppplVar68[10];
                        pppppplVar68[10] = ppppplVar33;
                        pppppplVar68[0xb] = (long *****)pppppplVar45;
                        ppppplStack_158 = pppppplVar68[0xc];
                        pppppplVar68[0xc] = (long *****)(pppppplVar45 + uVar72 * 2);
                        ppppppplStack_168 = uStack_170;
                        ppppppplStack_160 = uStack_170;
                        func_0x00010a4afd0c(&uStack_170);
                        pppppplVar45 = (long ******)pppppplVar68[7];
                        pppppplVar75 = (long ******)pppppplVar68[8];
                      }
                      for (; pppppplVar45 != pppppplVar75; pppppplVar45 = pppppplVar45 + 2) {
                        ppppplVar33 = *pppppplVar45;
                        if (ppppplVar33 != (long *****)0x0) {
                          FUN_10ab46af4();
                          FUN_10a90f550(pppppplVar61,ppppplVar33);
                        }
                      }
                      *(undefined4 *)(pppppplVar68 + 0xd) = ppppplStack_258._0_4_;
                      *(uint *)((long)pppppplVar68 + 0x6c) = uVar36;
                      *(undefined4 *)(pppppplVar68 + 0xe) = 0;
                      _bzero(pppppplVar68 + 0xf,0x218);
                      FUN_109ffe100(pppppplVar68 + 0x62,0x20);
                      lVar74 = 0;
                      pppppplVar68[0x68] = (long *****)0x0;
                      pppppplVar68[0x67] = (long *****)0x0;
                      pppppplVar68[0x6a] = (long *****)0x0;
                      pppppplVar68[0x69] = (long *****)0x0;
                      pppppplVar68[0x66] = (long *****)0x0;
                      pppppplVar68[0x65] = (long *****)0x0;
                      do {
                        *(undefined1 *)((long)pppppplVar68 + lVar74 + 0x398) = 0;
                        *(undefined1 *)((long)pppppplVar68 + lVar74 + 0x3d8) = 0;
                        lVar74 = lVar74 + 0x44;
                      } while (lVar74 != 0x880);
                      lVar74 = 0xc18;
                      do {
                        puVar32 = (undefined8 *)((long)pppppplVar68 + lVar74);
                        puVar32[1] = 0;
                        *puVar32 = 0x3f800000;
                        puVar32[3] = 0;
                        puVar32[2] = 0x3f80000000000000;
                        puVar32[5] = 0x3f800000;
                        puVar32[4] = 0;
                        puVar32[7] = 0x3f80000000000000;
                        puVar32[6] = 0;
                        lVar74 = lVar74 + 0x40;
                      } while (lVar74 != 0x1418);
                      *(undefined4 *)(pppppplVar68 + 0x283) = 0;
                      *(float *)((long)pppppplVar68 + 0x141c) = fVar90;
                      *(undefined4 *)(pppppplVar68 + 0x284) = 0;
                      *(char *)((long)pppppplVar68 + 0x1424) = (char)lVar46;
                      *(undefined1 *)((long)pppppplVar68 + 0x1425) = uVar18;
                      *(undefined1 *)((long)pppppplVar68 + 0x1426) = uVar18;
                      *(undefined2 *)((long)pppppplVar68 + 0x1427) = 0;
                      *(undefined4 *)(pppppplVar68 + 0x286) = 0x3f800000;
                      *(undefined8 *)((long)pppppplVar68 + 0x143c) = 0;
                      *(undefined8 *)((long)pppppplVar68 + 0x1434) = 0;
                      pppppplVar68[0x28a] = (long *****)0x0;
                      pppppplVar68[0x289] = (long *****)0x0;
                      *(undefined4 *)((long)pppppplVar68 + 0x1444) = 0x3f800000;
                      *(undefined4 *)(pppppplVar68 + 0x28b) = 0x3f800000;
                      *(undefined8 *)((long)pppppplVar68 + 0x1464) = 0;
                      *(undefined8 *)((long)pppppplVar68 + 0x145c) = 0;
                      *(undefined4 *)((long)pppppplVar68 + 0x146c) = 0x3f800000;
                      *(undefined1 *)((long)pppppplVar68 + 0x1514) = 0;
                      *(undefined1 *)(pppppplVar68 + 0x2a3) = 0;
                      *(undefined4 *)((long)pppppplVar68 + 0x151c) = 0;
                      *(undefined1 *)(pppppplVar68 + 0x2a4) = 0;
                      *(undefined1 *)((long)pppppplVar68 + 0x152c) = 0;
                      *(undefined1 *)(pppppplVar68 + 0x2a6) = 0;
                      *(undefined4 *)((long)pppppplVar68 + 0x1534) = 0;
                      pppppplVar68[0x28f] = (long *****)0x0;
                      pppppplVar68[0x28e] = (long *****)0x0;
                      pppppplVar68[0x291] = (long *****)0x0;
                      pppppplVar68[0x290] = (long *****)0x0;
                      pppppplVar68[0x293] = (long *****)0x0;
                      pppppplVar68[0x292] = (long *****)0x0;
                      pppppplVar68[0x295] = (long *****)0x0;
                      pppppplVar68[0x294] = (long *****)0x0;
                      pppppplVar68[0x297] = (long *****)0x0;
                      pppppplVar68[0x296] = (long *****)0x0;
                      pppppplVar68[0x299] = (long *****)0x0;
                      pppppplVar68[0x298] = (long *****)0x0;
                      pppppplVar68[0x29b] = (long *****)0x0;
                      pppppplVar68[0x29a] = (long *****)0x0;
                      pppppplVar68[0x29d] = (long *****)0x0;
                      pppppplVar68[0x29c] = (long *****)0x0;
                      pppppplVar68[0x29f] = (long *****)0x0;
                      pppppplVar68[0x29e] = (long *****)0x0;
                      *(undefined8 *)((long)pppppplVar68 + 0x1501) = 0;
                      *(undefined8 *)((long)pppppplVar68 + 0x14f9) = 0;
                      pppppplVar68[0x2a7] = (long *****)0x3f800000;
                      *(undefined4 *)(pppppplVar68 + 0x2a8) = 0;
                      *(undefined8 *)((long)pppppplVar68 + 0x1544) = uVar69;
                      *(long **)((long)pppppplVar68 + 0x1554) = plStack_268;
                      *(long ******)((long)pppppplVar68 + 0x154c) = ppppplStack_270;
                      *(undefined8 *)((long)pppppplVar68 + 0x155c) = uVar92;
                      pppppplVar68[0x2ad] = (long *****)ppppppplVar38;
                      pppppplVar68[0x2ae] = (long *****)ppppppplVar95;
                      pppppplVar68[0x2af] = ppppplVar34;
                      pppppplVar68[0x2b0] = ppppplVar64;
                      *(uint *)(pppppplVar68 + 0x2b1) = uVar36;
                      *(undefined8 *)((long)pppppplVar68 + 0x158c) = 0xffffffff;
                      *(undefined1 *)((long)pppppplVar68 + 0x1594) = 0;
                      ppppplVar34 = pppppplVar68[99];
                      ppppplVar33 = pppppplVar68[0x62];
                      if (ppppplVar34 != ppppplVar33) {
                        iVar42 = 0;
                        ppppplVar64 = ppppplVar34;
                        do {
                          ppppplVar64 = (long *****)((long)ppppplVar64 + -4);
                          *(int *)ppppplVar64 = iVar42;
                          iVar42 = iVar42 + 1;
                        } while (ppppplVar64 != ppppplVar33);
                        do {
                          ppppplVar64 = (long *****)((long)ppppplVar33 + 4);
                          FUN_10a8fd8d0(pppppplVar26,*(undefined4 *)ppppplVar33);
                          ppppplVar33 = ppppplVar64;
                        } while (ppppplVar64 != ppppplVar34);
                      }
                      uStack_170 = &pppppplStack_c8;
                      FUN_10a0d4a18(&uStack_170);
                      pppppplStack_210 = pppppplVar26;
                      pppppplStack_208 = pppppplVar68;
                      if (pppppplStack_2a8 != (long ******)0x0) {
                        pppppplVar68 = pppppplStack_2a8 + 1;
                        do {
                          ppppplVar33 = *pppppplVar68;
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                          if (bVar22) {
                            *pppppplVar68 = (long *****)((long)ppppplVar33 + -1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                        if (ppppplVar33 == (long *****)0x0) {
                          (*(code *)(*pppppplStack_2a8)[2])(pppppplStack_2a8);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplStack_2a8);
                        }
                      }
                      pppppplVar68 = pppppplStack_210;
                      fVar85 = SUB84(pppppplStack_210[0x2a8],0);
                      fVar87 = (float)*(undefined8 *)((long)pppppplStack_210 + 0x1534);
                      fVar81 = fVar85 - fVar87;
                      fVar86 = (float)((ulong)pppppplStack_210[0x2a8] >> 0x20);
                      fVar88 = (float)((ulong)*(undefined8 *)((long)pppppplStack_210 + 0x1534) >>
                                      0x20);
                      fVar83 = fVar86 - fVar88;
                      fVar78 = *(float *)(pppppplStack_210 + 0x2a9) -
                               *(float *)((long)pppppplStack_210 + 0x153c);
                      *(float *)((long)pppppplStack_210 + 0x1504) =
                           SQRT(fVar81 * fVar81 + fVar83 * fVar83 + fVar78 * fVar78) * 0.5;
                      *(undefined1 *)(pppppplStack_210 + 0x2a0) = 0;
                      if (*(int *)(pppppplStack_210 + 0x2a6) == 1) {
                        if (*(char *)((long)pppppplStack_210 + 0x14fc) == '\x01') {
                          *(undefined1 *)((long)pppppplStack_210 + 0x14fc) = 0;
                        }
                        if (*(char *)((long)pppppplStack_210 + 0x1514) == '\x01') {
                          *(undefined1 *)((long)pppppplStack_210 + 0x1514) = 0;
                        }
                      }
                      else {
                        pppppplStack_210[0x29e] =
                             (long *****)CONCAT44((fVar86 + fVar88) * 0.5,(fVar85 + fVar87) * 0.5);
                        *(float *)(pppppplStack_210 + 0x29f) =
                             (*(float *)(pppppplStack_210 + 0x2a9) +
                             *(float *)((long)pppppplStack_210 + 0x153c)) * 0.5;
                        if ((*(byte *)((long)pppppplStack_210 + 0x14fc) & 1) == 0) {
                          *(undefined1 *)((long)pppppplStack_210 + 0x14fc) = 1;
                        }
                        *(float *)(pppppplStack_210 + 0x2a1) = fVar81 * 0.5;
                        *(float *)((long)pppppplStack_210 + 0x150c) = fVar83 * 0.5;
                        *(float *)(pppppplStack_210 + 0x2a2) = fVar78 * 0.5;
                        if ((*(byte *)((long)pppppplStack_210 + 0x1514) & 1) == 0) {
                          *(undefined1 *)((long)pppppplStack_210 + 0x1514) = 1;
                        }
                      }
                      pppppplVar26 = pppppplStack_210;
                      FUN_10a8fda3c();
                      *(undefined4 *)(pppppplVar68 + 0x280) = 0;
                      *(float *)((long)pppppplVar68 + 0x1404) = fVar90;
                      *(byte *)((long)pppppplVar68 + 0x140f) = bVar41;
                      *(char *)(pppppplVar68 + 0x282) = (char)pppppplStack_240;
                      *(char *)(pppppplVar68 + 0x2a3) = (char)lVar51;
                      *(undefined8 *)((long)pppppplVar68 + 0x151c) = uVar91;
                      if (((ulong)pppppplVar26 >> 0x20 == 0) ||
                         (pppppplStack_240 = pppppplVar26, 0x1f < ((ulong)pppppplVar26 & 0xffffffff)
                         )) goto LAB_10a903268;
                      *(undefined1 *)
                       ((long)pppppplVar68 + ((ulong)pppppplVar26 & 0xffffffff) + 0x340) = uVar17;
                      FUN_10a9091e4(pppppplVar68,lVar66 + 0x70,1);
                      pppppplVar26 = (long ******)pppppplStack_210[5];
                      for (pppppplVar68 = (long ******)pppppplStack_210[4];
                          pppppplVar45 = pppppplStack_210, pppppplVar68 != pppppplVar26;
                          pppppplVar68 = pppppplVar68 + 2) {
                        FUN_10a9091e4(pppppplVar68,lVar66 + 0x30,1);
                      }
                      lVar51 = *(long *)(lVar65 + 0x68);
                      if (lVar51 != 0) {
                        uVar36 = *(uint *)(lVar66 + 0xc);
                        if (uVar36 != 0) {
                          uVar72 = (ulong)uVar36 & 0x3fff;
                          uVar54 = (*(long *)(lVar51 + 0x28) - *(long *)(lVar51 + 0x20) >> 3) *
                                   -0x3333333333333333;
                          if (((uVar72 <= uVar54 && uVar54 - uVar72 != 0) &&
                              (pcVar56 = (char *)(*(long *)(lVar51 + 0x20) + uVar72 * 0x28),
                              *(uint *)(pcVar56 + 4) == uVar36)) && (*pcVar56 != '\x02')) {
                            lVar51 = lVar51 + 0x40;
                            func_0x00010a97784c(lVar51,lVar65 + 0x50,pppppplStack_210);
                            *(int *)(pppppplVar45 + 0xb) = (int)lVar51;
                            FUN_10a8fea0c(lVar66,*(undefined8 *)(lVar65 + 0x68),lVar51);
                            pppppplVar68 = pppppplVar45;
                          }
                        }
                      }
                      pppppplVar26 = pppppplStack_208;
                      pppppplVar45 = pppppplStack_210;
                      ppppppplVar38 = (long *******)(lVar66 + 0xf8);
                      uVar72 = ((ulong)(uint)((int)pppppplStack_210 << 3) + 8 ^
                               (ulong)pppppplStack_210 >> 0x20) * -0x622015f714c7d297;
                      uVar72 = ((ulong)pppppplStack_210 >> 0x20 ^ uVar72 >> 0x2f ^ uVar72) *
                               -0x622015f714c7d297;
                      pppppplVar61 = (long ******)((uVar72 ^ uVar72 >> 0x2f) * -0x622015f714c7d297);
                      pppppplVar75 = *(long *******)(lVar66 + 0x100);
                      if (pppppplVar75 != (long ******)0x0) {
                        uVar72 = (long)pppppplVar75 - 1;
                        if (((ulong)pppppplVar75 & uVar72) == 0) {
                          pppppplVar68 = (long ******)((ulong)pppppplVar61 & uVar72);
                        }
                        else {
                          pppppplVar68 = pppppplVar61;
                          if (pppppplVar75 <= pppppplVar61) {
                            uVar54 = 0;
                            if (pppppplVar75 != (long ******)0x0) {
                              uVar54 = (ulong)pppppplVar61 / (ulong)pppppplVar75;
                            }
                            pppppplVar68 = (long ******)
                                           ((long)pppppplVar61 - uVar54 * (long)pppppplVar75);
                          }
                        }
                        ppppplVar33 = (*ppppppplVar38)[(long)pppppplVar68];
                        if (ppppplVar33 != (long *****)0x0) {
                          do {
                            while( true ) {
                              ppppplVar33 = (long *****)*ppppplVar33;
                              if (ppppplVar33 == (long *****)0x0) goto LAB_10a901e14;
                              pppppplVar57 = (long ******)ppppplVar33[1];
                              if (pppppplVar57 != pppppplVar61) break;
                              if ((long ******)ppppplVar33[2] == pppppplStack_210)
                              goto LAB_10a9020c8;
                            }
                            if (((ulong)pppppplVar75 & uVar72) == 0) {
                              pppppplVar57 = (long ******)((ulong)pppppplVar57 & uVar72);
                            }
                            else if (pppppplVar75 <= pppppplVar57) {
                              uVar54 = 0;
                              if (pppppplVar75 != (long ******)0x0) {
                                uVar54 = (ulong)pppppplVar57 / (ulong)pppppplVar75;
                              }
                              pppppplVar57 = (long ******)
                                             ((long)pppppplVar57 - uVar54 * (long)pppppplVar75);
                            }
                          } while (pppppplVar57 == pppppplVar68);
                        }
                      }
LAB_10a901e14:
                      ppppppplVar95 = (long *******)0x20;
                      __Znwm();
                      ppppppplStack_160 = (long *******)0x1;
                      *ppppppplVar95 = (long ******)0x0;
                      ppppppplVar95[1] = pppppplVar61;
                      ppppppplVar95[2] = pppppplVar45;
                      ppppppplVar95[3] = pppppplVar26;
                      if (pppppplVar26 != (long ******)0x0) {
                        pppppplVar26 = pppppplVar26 + 1;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                          if (bVar22) {
                            *pppppplVar26 = (long *****)((long)*pppppplVar26 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      fVar78 = (float)(*(long *)(lVar66 + 0x110) + 1);
                      uStack_170 = ppppppplVar95;
                      ppppppplStack_168 = ppppppplVar38;
                      if ((pppppplVar75 == (long ******)0x0) ||
                         (*(float *)(lVar66 + 0x118) * (float)pppppplVar75 < fVar78)) {
                        uVar72 = 1;
                        if ((long ******)0x2 < pppppplVar75) {
                          uVar72 = (ulong)(((ulong)pppppplVar75 & (long)pppppplVar75 - 1U) != 0);
                        }
                        pppppplVar68 = (long ******)(uVar72 | (long)pppppplVar75 << 1);
                        pppppplVar26 = (long ******)(long)(fVar78 / *(float *)(lVar66 + 0x118));
                        if (pppppplVar68 <= pppppplVar26) {
                          pppppplVar68 = pppppplVar26;
                        }
                        if ((long)pppppplVar68 - 1U == 0) {
                          pppppplVar68 = (long ******)0x2;
                        }
                        else if (((ulong)pppppplVar68 & (long)pppppplVar68 - 1U) != 0) {
                          __ZNSt3__112__next_primeEm();
                        }
                        pppppplVar75 = *(long *******)(lVar66 + 0x100);
                        if (pppppplVar75 < pppppplVar68) {
LAB_10a901ed0:
                          if ((ulong)pppppplVar68 >> 0x3d != 0) {
                            func_0x000109ffded8();
                            goto LAB_10a903268;
                          }
                          pppppplVar26 = (long ******)((long)pppppplVar68 << 3);
                          __Znwm();
                          pppppplVar45 = *ppppppplVar38;
                          *ppppppplVar38 = pppppplVar26;
                          if (pppppplVar45 != (long ******)0x0) {
                            __ZdlPv();
                          }
                          pppppplVar26 = (long ******)0x0;
                          *(long *******)(lVar66 + 0x100) = pppppplVar68;
                          do {
                            (*ppppppplVar38)[(long)pppppplVar26] = (long *****)0x0;
                            pppppplVar26 = (long ******)((long)pppppplVar26 + 1);
                          } while (pppppplVar68 != pppppplVar26);
                          ppppplVar33 = *(long ******)(lVar66 + 0x108);
                          pppppplVar75 = pppppplVar68;
                          if (ppppplVar33 != (long *****)0x0) {
                            pppppplVar26 = (long ******)ppppplVar33[1];
                            uVar72 = (long)pppppplVar68 - 1;
                            if (((ulong)pppppplVar68 & uVar72) == 0) {
                              pppppplVar26 = (long ******)((ulong)pppppplVar26 & uVar72);
                            }
                            else if (pppppplVar68 <= pppppplVar26) {
                              uVar54 = 0;
                              if (pppppplVar68 != (long ******)0x0) {
                                uVar54 = (ulong)pppppplVar26 / (ulong)pppppplVar68;
                              }
                              pppppplVar26 = (long ******)
                                             ((long)pppppplVar26 - uVar54 * (long)pppppplVar68);
                            }
                            (*ppppppplVar38)[(long)pppppplVar26] = (long *****)(lVar66 + 0x108);
                            ppppplVar34 = (long *****)*ppppplVar33;
                            while (ppppplVar34 != (long *****)0x0) {
                              pppppplVar45 = (long ******)ppppplVar34[1];
                              if (((ulong)pppppplVar68 & uVar72) == 0) {
                                pppppplVar45 = (long ******)((ulong)pppppplVar45 & uVar72);
                              }
                              else if (pppppplVar68 <= pppppplVar45) {
                                uVar54 = 0;
                                if (pppppplVar68 != (long ******)0x0) {
                                  uVar54 = (ulong)pppppplVar45 / (ulong)pppppplVar68;
                                }
                                pppppplVar45 = (long ******)
                                               ((long)pppppplVar45 - uVar54 * (long)pppppplVar68);
                              }
                              ppppplVar64 = ppppplVar34;
                              if (pppppplVar45 != pppppplVar26) {
                                pppppplVar57 = *ppppppplVar38;
                                if (pppppplVar57[(long)pppppplVar45] == (long *****)0x0) {
                                  pppppplVar57[(long)pppppplVar45] = ppppplVar33;
                                  pppppplVar26 = pppppplVar45;
                                }
                                else {
                                  *ppppplVar33 = *ppppplVar34;
                                  *ppppplVar34 = *pppppplVar57[(long)pppppplVar45];
                                  *pppppplVar57[(long)pppppplVar45] = (long ****)ppppplVar34;
                                  ppppplVar64 = ppppplVar33;
                                }
                              }
                              ppppplVar33 = ppppplVar64;
                              ppppplVar34 = (long *****)*ppppplVar64;
                            }
                          }
                        }
                        else if (pppppplVar68 < pppppplVar75) {
                          pppppplVar26 = (long ******)
                                         (long)((float)*(ulong *)(lVar66 + 0x110) /
                                               *(float *)(lVar66 + 0x118));
                          if ((pppppplVar75 < (long ******)0x3) ||
                             (((ulong)pppppplVar75 & (long)pppppplVar75 - 1U) != 0)) {
                            __ZNSt3__112__next_primeEm();
                          }
                          else if ((long ******)0x1 < pppppplVar26) {
                            pppppplVar26 = (long ******)
                                           (1L << (-LZCOUNT((long)pppppplVar26 + -1) & 0x3fU));
                          }
                          if (pppppplVar68 <= pppppplVar26) {
                            pppppplVar68 = pppppplVar26;
                          }
                          if (pppppplVar68 < pppppplVar75) {
                            if (pppppplVar68 != (long ******)0x0) goto LAB_10a901ed0;
                            pppppplVar68 = *ppppppplVar38;
                            *ppppppplVar38 = (long ******)0x0;
                            if (pppppplVar68 != (long ******)0x0) {
                              __ZdlPv();
                            }
                            *(undefined8 *)(lVar66 + 0x100) = 0;
                            pppppplVar75 = (long ******)0x0;
                          }
                          else {
                            pppppplVar75 = *(long *******)(lVar66 + 0x100);
                          }
                        }
                        if (((ulong)pppppplVar75 & (long)pppppplVar75 - 1U) == 0) {
                          pppppplVar68 = (long ******)
                                         ((long)pppppplVar75 - 1U & (ulong)pppppplVar61);
                        }
                        else {
                          pppppplVar68 = pppppplVar61;
                          if (pppppplVar75 <= pppppplVar61) {
                            uVar72 = 0;
                            if (pppppplVar75 != (long ******)0x0) {
                              uVar72 = (ulong)pppppplVar61 / (ulong)pppppplVar75;
                            }
                            pppppplVar68 = (long ******)
                                           ((long)pppppplVar61 - uVar72 * (long)pppppplVar75);
                          }
                        }
                      }
                      pppppplVar45 = *ppppppplVar38;
                      pppppplVar26 = (long ******)pppppplVar45[(long)pppppplVar68];
                      if (pppppplVar26 == (long ******)0x0) {
                        *ppppppplVar95 = *(long *******)(lVar66 + 0x108);
                        *(long ********)(lVar66 + 0x108) = ppppppplVar95;
                        pppppplVar45[(long)pppppplVar68] = (long *****)(lVar66 + 0x108);
                        if (*ppppppplVar95 != (long ******)0x0) {
                          pppppplVar26 = (long ******)(*ppppppplVar95)[1];
                          if (((ulong)pppppplVar75 & (long)pppppplVar75 - 1U) == 0) {
                            pppppplVar26 = (long ******)
                                           ((ulong)pppppplVar26 & (long)pppppplVar75 - 1U);
                          }
                          else if (pppppplVar75 <= pppppplVar26) {
                            uVar72 = 0;
                            if (pppppplVar75 != (long ******)0x0) {
                              uVar72 = (ulong)pppppplVar26 / (ulong)pppppplVar75;
                            }
                            pppppplVar26 = (long ******)
                                           ((long)pppppplVar26 - uVar72 * (long)pppppplVar75);
                          }
                          pppppplVar26 = *ppppppplVar38 + (long)pppppplVar26;
                          goto LAB_10a9020b4;
                        }
                      }
                      else {
                        *ppppppplVar95 = (long ******)*pppppplVar26;
LAB_10a9020b4:
                        *pppppplVar26 = (long *****)ppppppplVar95;
                      }
                      *(long *)(lVar66 + 0x110) = *(long *)(lVar66 + 0x110) + 1;
LAB_10a9020c8:
                      pppppplVar26 = pppppplStack_208;
                      pppppplVar68 = pppppplStack_210;
                      puVar32 = *(undefined8 **)(lVar66 + 0xd0);
                      if (puVar32 < *(undefined8 **)(lVar66 + 0xd8)) {
                        *puVar32 = pppppplStack_210;
                        puVar32[1] = pppppplStack_208;
                        if (pppppplStack_208 != (long ******)0x0) {
                          pppppplVar26 = pppppplStack_208 + 1;
                          do {
                            cVar20 = '\x01';
                            bVar22 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                            if (bVar22) {
                              *pppppplVar26 = (long *****)((long)*pppppplVar26 + 1);
                              cVar20 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar20 != '\0');
                        }
                        puVar32 = puVar32 + 2;
                      }
                      else {
                        lVar51 = *(long *)(lVar66 + 200);
                        lVar74 = (long)puVar32 - lVar51;
                        lVar46 = lVar74 >> 4;
                        uVar72 = lVar46 + 1;
                        if (uVar72 >> 0x3c != 0) {
                          FUN_10a910504();
                          goto LAB_10a903268;
                        }
                        uVar50 = (long)*(undefined8 **)(lVar66 + 0xd8) - lVar51;
                        uVar54 = (long)uVar50 >> 3;
                        if (uVar54 <= uVar72) {
                          uVar54 = uVar72;
                        }
                        if (0x7fffffffffffffef < uVar50) {
                          uVar54 = 0xfffffffffffffff;
                        }
                        if (uVar54 >> 0x3c != 0) {
                          func_0x000109ffded8();
                          goto LAB_10a903268;
                        }
                        lVar27 = uVar54 << 4;
                        __Znwm();
                        puVar39 = (undefined8 *)(lVar27 + lVar74);
                        *puVar39 = pppppplVar68;
                        puVar39[1] = pppppplVar26;
                        if (pppppplVar26 != (long ******)0x0) {
                          pppppplVar26 = pppppplVar26 + 1;
                          do {
                            cVar20 = '\x01';
                            bVar22 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                            if (bVar22) {
                              *pppppplVar26 = (long *****)((long)*pppppplVar26 + 1);
                              cVar20 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar20 != '\0');
                          lVar51 = *(long *)(lVar66 + 200);
                          lVar74 = *(long *)(lVar66 + 0xd0) - lVar51;
                          lVar46 = lVar74 >> 4;
                        }
                        puVar32 = puVar39 + 2;
                        _memcpy(puVar39 + lVar46 * -2,lVar51,lVar74);
                        *(undefined8 **)(lVar66 + 200) = puVar39 + lVar46 * -2;
                        *(undefined8 **)(lVar66 + 0xd0) = puVar32;
                        *(ulong *)(lVar66 + 0xd8) = lVar27 + uVar54 * 0x10;
                        if (lVar51 != 0) {
                          __ZdlPv(lVar51);
                        }
                      }
                      uVar59 = (uint)pppppplStack_240 & 0xff;
                      uVar63 = (uint)pppppplStack_240 >> 8;
                      *(undefined8 **)(lVar66 + 0xd0) = puVar32;
                    }
                    else if (!bVar22) goto LAB_10a903268;
                    uVar36 = uVar59 | uVar63 << 8;
                    if (0x1f < uVar36) goto LAB_10a903268;
                    if (ppppppplVar60 != (long *******)0x0) {
                      ppppppplVar38 = ppppppplVar60 + 2;
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                        if (bVar22) {
                          *ppppppplVar38 = (long ******)((long)*ppppppplVar38 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                    }
                    ppppplStack_258 = (long *****)CONCAT44(ppppplStack_258._4_4_,uVar59);
                    ppppplVar33 = pppppplVar68[(ulong)uVar36 * 2 + 0x10];
                    pppppplVar68[(ulong)uVar36 * 2 + 0xf] = (long *****)ppppppplVar94;
                    pppppplVar68[(ulong)uVar36 * 2 + 0x10] = (long *****)ppppppplVar60;
                    if (ppppplVar33 != (long *****)0x0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    FUN_10a93fc58(lVar66);
                    pppppplStack_240 = *(long *******)(lVar66 + 0xd0);
                    for (pppppplVar68 = *(long *******)(lVar66 + 200);
                        pppppplVar68 != pppppplStack_240; pppppplVar68 = pppppplVar68 + 2) {
                      ppppplVar33 = *pppppplVar68;
                      pppplVar55 = ppppplVar33[0x65];
                      pppplVar73 = ppppplVar33[0x66];
                      if (pppplVar55 != pppplVar73) {
                        do {
                          uVar36 = *(uint *)pppplVar55;
                          ppppplVar33 = *pppppplVar68;
                          func_0x00010a8fdae4(ppppplVar33,(ulong)uVar36);
                          bVar22 = ((ulong)ppppplVar33[0x23] & 0x13) == 0;
                          uStack_170 = (long *******)CONCAT71(uStack_170._1_7_,bVar22);
                          pppppplStack_c8 =
                               (long ******)CONCAT71(pppppplStack_c8._1_7_,bVar22 && fVar90 == 0.0);
                          if (0x1f < uVar36) goto LAB_10a903268;
                          lVar51 = *(long *)(lVar65 + 0x78) + (ulong)uVar36 * 0x20;
                          ppppplVar33 = *pppppplVar68;
                          if (ppppplVar33[2] != (long ****)0x0) {
                            FUN_10a917fc0(ppppplVar33[2],lVar51 + 0x2800,&uStack_170);
                            ppppplVar33 = *pppppplVar68;
                          }
                          pppplVar14 = ppppplVar33[8];
                          for (pppplVar62 = ppppplVar33[7]; pppplVar62 != pppplVar14;
                              pppplVar62 = pppplVar62 + 2) {
                            if (*pppplVar62 != (long ***)0x0) {
                              FUN_10a917fc0(*pppplVar62,lVar51 + 0x2800,&pppppplStack_c8);
                            }
                          }
                          pppplVar55 = (long ****)((long)pppplVar55 + 4);
                        } while (pppplVar55 != pppplVar73);
                        ppppplVar33 = *pppppplVar68;
                      }
                      if (ppppplVar33[0x62] == ppppplVar33[99]) {
                        iVar42 = 0;
                      }
                      else {
                        iVar42 = *(int *)((long)ppppplVar33[99] + -4) + 1;
                      }
                      pppppplStack_c8 = (long ******)CONCAT44(pppppplStack_c8._4_4_,iVar42);
                      func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2dea0);
                      FUN_10a90a334(ppppplVar33,&uStack_170,&pppppplStack_c8);
                      if ((long)ppppppplStack_160 < 0) {
                        __ZdlPv(uStack_170);
                      }
                      ppppplVar33 = *pppppplVar68;
                      func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2e6b0);
                      func_0x00010a90a39c(ppppplVar33,&uStack_170,lVar66 + 0xb0);
                      if ((long)ppppppplStack_160 < 0) {
                        __ZdlPv(uStack_170);
                      }
                      ppppplVar33 = *pppppplVar68;
                      func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2e698);
                      pppplVar73 = ppppplVar33[8];
                      for (pppplVar55 = ppppplVar33[7]; pppplVar55 != pppplVar73;
                          pppplVar55 = pppplVar55 + 2) {
                        if (*pppplVar55 != (long ***)0x0) {
                          FUN_10a0da430(*pppplVar55,&uStack_170,lVar66 + 0xb0);
                        }
                      }
                      if ((long)ppppppplStack_160 < 0) {
                        __ZdlPv(uStack_170);
                      }
                      if (*(int *)(lVar66 + 0x120) == 0) {
                        ppppplVar33 = *pppppplVar68;
                        func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2e680);
                        FUN_10a90a334(ppppplVar33,&uStack_170,(long)*pppppplVar68 + 0x1524);
                        if ((long)ppppppplStack_160 < 0) {
                          __ZdlPv(uStack_170);
                        }
                        ppppplVar33 = *pppppplVar68;
                        func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2e650);
                        FUN_10a90a334(ppppplVar33,&uStack_170,(long)*pppppplVar68 + 0x1524);
                        if ((long)ppppppplStack_160 < 0) {
                          __ZdlPv(uStack_170);
                        }
                        ppppplVar33 = *pppppplVar68;
                        func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2e668);
                        FUN_10a90a334(ppppplVar33,&uStack_170,*pppppplVar68 + 0x2a5);
                        if ((long)ppppppplStack_160 < 0) {
                          __ZdlPv(uStack_170);
                        }
                        FUN_10a8fef14(*pppppplVar68);
                        ppppplVar33 = *pppppplVar68;
                        func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2e698);
                        func_0x00010a90a39c(ppppplVar33,&uStack_170,lVar66 + 0xb0);
                        if ((long)ppppppplStack_160 < 0) {
                          __ZdlPv(uStack_170);
                        }
                        (*pppppplVar68)[0x66] = (*pppppplVar68)[0x65];
                      }
                    }
                    plVar30 = *(long **)(lVar65 + 0x38);
                    for (plVar31 = *(long **)(lVar65 + 0x30); plVar31 != plVar30;
                        plVar31 = plVar31 + 1) {
                      lVar51 = *plVar31;
                      if (*(int *)(lVar51 + 0x120) == 0) {
                        FUN_10a9092a4(lVar51 + 0x30,lVar51 + 0xb0);
                        FUN_10a9092a4(*plVar31 + 0x70,*plVar31 + 0xb0);
                        func_0x00010a91ace0(*plVar31 + 0xf8);
                      }
                      else {
                        *(undefined4 *)(lVar51 + 0xb8) = 1;
                      }
                    }
                    if (pppppplStack_208 != (long ******)0x0) {
                      pppppplVar68 = pppppplStack_208 + 1;
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                        if (bVar22) {
                          *pppppplVar68 = (long *****)((long)*pppppplVar68 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                    }
                    ppppppplStack_1a0 =
                         (long *******)((ulong)ppppplStack_258 & 0xffffffff | 0x100000000);
                    pppppplStack_2a8 = pppppplStack_208;
                    pppppplStack_1b0 = pppppplStack_210;
                    uStack_1a8 = pppppplStack_208;
joined_r0x00010a9016e0:
                    ppppppplVar60 = ppppppplStack_d8;
                    if (pppppplStack_2a8 != (long ******)0x0) {
                      pppppplVar68 = pppppplStack_2a8 + 1;
                      do {
                        ppppplVar33 = *pppppplVar68;
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                        if (bVar22) {
                          *pppppplVar68 = (long *****)((long)ppppplVar33 + -1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      if (ppppplVar33 == (long *****)0x0) {
                        (*(code *)(*pppppplStack_2a8)[2])(pppppplStack_2a8);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplStack_2a8);
                        ppppppplVar60 = ppppppplStack_d8;
                      }
                    }
                  }
                  if (ppppppplVar60 != (long *******)0x0) {
                    ppppppplVar94 = ppppppplVar60 + 1;
                    do {
                      pppppplVar68 = *ppppppplVar94;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                      if (bVar22) {
                        *ppppppplVar94 = (long ******)((long)pppppplVar68 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar68 == (long ******)0x0) {
                      (*(code *)(*ppppppplVar60)[2])(ppppppplVar60);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
                    }
                  }
                  ppppppplVar60 = ppppppplStack_1a0;
                  pppppplVar68 = uStack_1a8;
                  if ((pppppplStack_1b0 != (long ******)0x0) &&
                     (((ulong)ppppppplStack_1a0 & 0x1ffffffe0) == 0x100000000)) {
                    if (uStack_1a8 != (long ******)0x0) {
                      pppppplVar26 = uStack_1a8 + 2;
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                        if (bVar22) {
                          *pppppplVar26 = (long *****)((long)*pppppplVar26 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                    }
                    pppppplVar45 = (long ******)*pppppplVar52;
                    pppppplVar26 = pppppplVar52;
                    pppppplStack_240 = pppppplStack_1b0;
                    while (pppppplVar75 = pppppplVar26, pppppplVar45 != (long ******)0x0) {
                      while( true ) {
                        pppppplVar75 = pppppplVar45;
                        pplVar28 = pplVar35 + 4;
                        FUN_10a003e3c(pplVar28,pppppplVar75 + 4);
                        if (((uint)pplVar28 >> 7 & 1) != 0) break;
                        uVar36 = (int)pppppplVar75 + 0x20;
                        ppppppplVar94 = (long *******)(pplVar35 + 4);
                        FUN_10a003e3c();
                        if ((uVar36 >> 7 & 1) == 0) {
                          ppppppplVar38 = (long *******)*pppppplVar26;
                          if (ppppppplVar38 == (long *******)0x0) goto LAB_10a902634;
                          goto LAB_10a9026c0;
                        }
                        pppppplVar26 = pppppplVar75 + 1;
                        pppppplVar45 = (long ******)*pppppplVar26;
                        if ((long ******)*pppppplVar26 == (long ******)0x0) goto LAB_10a902634;
                      }
                      pppppplVar26 = pppppplVar75;
                      pppppplVar45 = (long ******)*pppppplVar75;
                    }
LAB_10a902634:
                    ppppppplVar94 = (long *******)0x50;
                    __Znwm();
                    ppppppplStack_160 = (long *******)0x0;
                    uStack_170 = ppppppplVar94;
                    ppppppplStack_168 = ppppppplVar48;
                    if (*(char *)((long)pplVar35 + 0x37) < '\0') {
                      func_0x000107c3192c(ppppppplVar94 + 4,pplVar35[4],pplVar35[5]);
                    }
                    else {
                      pppppplVar61 = (long ******)pplVar35[5];
                      pppppplVar45 = (long ******)pplVar35[4];
                      ppppppplVar94[6] = (long ******)pplVar35[6];
                      ppppppplVar94[5] = pppppplVar61;
                      ppppppplVar94[4] = pppppplVar45;
                    }
                    plVar31 = plStack_250;
                    ppppppplVar94[7] = (long ******)0x0;
                    ppppppplVar94[8] = (long ******)0x0;
                    ppppppplVar94[9] = (long ******)0x0;
                    *ppppppplVar94 = (long ******)0x0;
                    ppppppplVar94[1] = (long ******)0x0;
                    ppppppplVar94[2] = pppppplVar75;
                    *pppppplVar26 = (long *****)ppppppplVar94;
                    if ((long ******)**ppppppplVar48 != (long ******)0x0) {
                      *ppppppplVar48 = (long ******)**ppppppplVar48;
                      ppppppplVar94 = (long *******)*pppppplVar26;
                    }
                    func_0x000107c2b058(plStack_250[0xaa]);
                    plVar31[0xab] = plVar31[0xab] + 1;
                    ppppppplVar38 = uStack_170;
LAB_10a9026c0:
                    pppppplVar26 = ppppppplVar38[8];
                    ppppppplVar38[7] = pppppplStack_240;
                    ppppppplVar38[8] = pppppplVar68;
                    if (pppppplVar26 != (long ******)0x0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    plVar31 = plStack_238;
                    *(int *)(ppppppplVar38 + 9) = (int)ppppppplVar60;
                    *(char *)((long)ppppppplVar38 + 0x4c) = (char)((ulong)ppppppplVar60 >> 0x20);
                    if ((((ulong)ppppppplVar60 & 0x1f) == 0) &&
                       (pppppplVar68 = pppppplStack_240 + 0xc,
                       *pppppplVar68 == pppppplStack_240[0xd])) {
                      ppppppplStack_1c8 = (long *******)0x0;
                      ppppppplStack_1c0 = (long *******)0x0;
                      plStack_1b8 = (long *)0x0;
                      ppppppplStack_1e0 = (long *******)0x0;
                      ppppppplStack_1d8 = (long *******)0x0;
                      ppppppplStack_1d0 = (long *******)0x0;
                      ppppplStack_1f8 = (long *****)0x0;
                      ppppplStack_1f0 = (long *****)0x0;
                      ppppppplStack_1e8 = (long *******)0x0;
                      pppppplStack_210 = (long ******)0x0;
                      pppppplStack_208 = (long ******)0x0;
                      plStack_200 = (long *)0x0;
                      lVar46 = plStack_250[0x9e];
                      ppppppplStack_168 = (long *******)0x0;
                      uStack_170 = (long *******)0x0;
                      ppppplStack_158 = (long *****)0x0;
                      ppppppplStack_160 = (long *******)0x0;
                      pppppplStack_150 = (long ******)CONCAT44(pppppplStack_150._4_4_,0x3f800000);
                      pppppplStack_c8 = (long ******)0x0;
                      lVar51 = plStack_238[0x1b];
                      if (plStack_238[0x1c] != lVar51) {
                        do {
                          ppppppplVar94 = (long *******)(lVar51 + (long)pppppplStack_c8 * 0x18);
                          func_0x000109567428(&uStack_170,ppppppplVar94,ppppppplVar94,
                                              &pppppplStack_c8);
                          pppppplStack_c8 = (long ******)((long)pppppplStack_c8 + 1);
                          lVar51 = plVar31[0x1b];
                        } while (pppppplStack_c8 <
                                 (long ******)((plVar31[0x1c] - lVar51 >> 3) * -0x5555555555555555))
                        ;
                      }
                      lVar51 = plVar31[0xd];
                      if (lVar51 - plVar31[0xc] == 0) {
                        ppppplStack_280 = (long *****)0x0;
                        ppppplStack_270 = (long *****)0x0;
                        lVar66 = lVar51;
                      }
                      else {
                        ppppplStack_280 =
                             (long *****)((lVar51 - plVar31[0xc] >> 3) * -0x5555555555555555);
                        if ((ulong)ppppplStack_280 >> 0x3e != 0) {
                          FUN_10a910344();
LAB_10a903268:
                    /* WARNING: Does not return */
                          pcVar21 = (code *)SoftwareBreakpoint(1,0x10a90326c);
                          (*pcVar21)();
                        }
                        FUN_10a910358();
                        ppppplStack_270 =
                             (long *****)((long)ppppplStack_280 + (long)ppppppplVar94 * 4);
                        lVar51 = plVar31[0xc];
                        lVar66 = plVar31[0xd];
                      }
                      func_0x000107c27e9c(&ppppppplStack_1c8,
                                          (lVar66 - lVar51 >> 3) * -0x5555555555555555);
                      func_0x000107c28300(&ppppppplStack_1e0,
                                          (plVar31[0xd] - plVar31[0xc] >> 3) * -0x5555555555555555);
                      func_0x000104becb10(&ppppplStack_1f8,
                                          (plVar31[0xd] - plVar31[0xc] >> 3) * -0x5555555555555555);
                      FUN_10a8fc570(&pppppplStack_210,
                                    (plVar31[0xd] - plVar31[0xc] >> 3) * -0x5555555555555555);
                      lVar51 = plVar31[0xc];
                      ppppplStack_258 = ppppplStack_280;
                      if (plVar31[0xd] != lVar51) {
                        uVar72 = 0;
                        do {
                          lVar51 = lVar51 + uVar72 * 0x18;
                          puVar32 = &uStack_170;
                          lVar66 = lVar51;
                          func_0x000109240a28();
                          if (puVar32 == (undefined8 *)0x0) {
                            FUN_109ffdddc(&UNK_10f639994);
                            goto LAB_10a903268;
                          }
                          uVar54 = puVar32[5];
                          if ((ulong)(plVar31[0x1f] - plVar31[0x1e] >> 2) <= uVar54) {
                            FUN_10a04b1c0();
                            goto LAB_10a903268;
                          }
                          uVar79 = *(undefined4 *)(plVar31[0x1e] + uVar54 * 4);
                          if (ppppplStack_258 < ppppplStack_270) {
                            *(undefined4 *)ppppplStack_258 = uVar79;
                            ppppplVar33 = ppppplStack_280;
                            ppppplStack_258 = (long *****)((long)ppppplStack_258 + 4);
                          }
                          else {
                            lVar74 = (long)ppppplStack_258 - (long)ppppplStack_280;
                            uVar50 = (lVar74 >> 2) + 1;
                            if (uVar50 >> 0x3e != 0) {
                              FUN_10a910344();
                              goto LAB_10a903268;
                            }
                            uVar58 = (long)ppppplStack_270 - (long)ppppplStack_280 >> 1;
                            if (uVar58 <= uVar50) {
                              uVar58 = uVar50;
                            }
                            if (0x7ffffffffffffffb <
                                (ulong)((long)ppppplStack_270 - (long)ppppplStack_280)) {
                              uVar58 = 0x3fffffffffffffff;
                            }
                            FUN_10a910358();
                            puVar12 = (undefined4 *)(uVar58 + lVar74);
                            ppppplStack_270 = (long *****)(uVar58 + lVar66 * 4);
                            ppppplVar33 = (long *****)(puVar12 + -(lVar74 >> 2));
                            ppppplStack_258 = (long *****)(puVar12 + 1);
                            *puVar12 = uVar79;
                            _memcpy(ppppplVar33,ppppplStack_280,lVar74);
                            if (ppppplStack_280 != (long *****)0x0) {
                              __ZdlPv(ppppplStack_280);
                            }
                          }
                          ppppplStack_280 = ppppplVar33;
                          if ((ulong)(plVar31[0x22] - plVar31[0x21] >> 2) <= uVar54) {
                            FUN_10a04b1c0();
                            goto LAB_10a903268;
                          }
                          func_0x000109febdc8(&ppppppplStack_1c8,plVar31[0x21] + uVar54 * 4);
                          FUN_10a904d90(&pppppplStack_c8,plStack_250,pplVar35 + 4,lVar51);
                          ppppppplStack_e0 =
                               (long *******)
                               CONCAT26(uStack_c0._6_2_,
                                        CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                          FUN_10a908c78(&ppppppplStack_1e0,&ppppppplStack_e0);
                          func_0x0001078db3d4(&ppppplStack_1f8,&pppppplStack_c8);
                          lVar51 = *(long *)(lVar46 + 0xe0);
                          if (uVar72 < (ulong)(*(long *)(lVar46 + 0xe8) - lVar51 >> 4)) {
                            puVar32 = (undefined8 *)(lVar51 + uVar72 * 0x10);
                            ppppppplStack_d8 = (long *******)puVar32[1];
                            ppppppplStack_e0 = (long *******)*puVar32;
                            if (puVar32[1] != 0) {
                              plVar30 = (long *)(puVar32[1] + 8);
                              do {
                                cVar20 = '\x01';
                                bVar22 = (bool)ExclusiveMonitorPass(plVar30,0x10);
                                if (bVar22) {
                                  *plVar30 = *plVar30 + 1;
                                  cVar20 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar20 != '\0');
                            }
                          }
                          else {
                            ppppppplStack_e0 = (long *******)0x0;
                            ppppppplStack_d8 = (long *******)0x0;
                          }
                          FUN_10a0b5098(&pppppplStack_210,&ppppppplStack_e0);
                          ppppppplVar60 = ppppppplStack_d8;
                          if (ppppppplStack_d8 != (long *******)0x0) {
                            ppppppplVar94 = ppppppplStack_d8 + 1;
                            do {
                              pppppplVar26 = *ppppppplVar94;
                              cVar20 = '\x01';
                              bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                              if (bVar22) {
                                *ppppppplVar94 = (long ******)((long)pppppplVar26 + -1);
                                cVar20 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar20 != '\0');
                            if (pppppplVar26 == (long ******)0x0) {
                              (*(code *)(*ppppppplStack_d8)[2])(ppppppplStack_d8);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
                            }
                          }
                          uVar72 = uVar72 + 1;
                          lVar51 = plVar31[0xc];
                        } while (uVar72 < (ulong)((plVar31[0xd] - lVar51 >> 3) * -0x5555555555555555
                                                 ));
                      }
                      func_0x000109240b0c(&uStack_170);
                      plVar31 = plStack_238;
                      pppppplVar26 = pppppplStack_240;
                      pppppplStack_c8 = (long ******)0x0;
                      uStack_c0._0_1_ = 0;
                      uStack_c0._1_5_ = 0;
                      uStack_c0._6_2_ = 0;
                      ppppplVar33 = pppppplStack_240[0x10];
                      if (ppppplVar33 == (long *****)0x0) {
                        ppppplVar33 = (long *****)0x0;
LAB_10a902a68:
                        pppppplVar45 = (long ******)0x0;
                      }
                      else {
                        __ZNSt3__119__shared_weak_count4lockEv();
                        uStack_c0._0_1_ = SUB81(ppppplVar33,0);
                        uStack_c0._1_5_ = (undefined5)((ulong)ppppplVar33 >> 8);
                        uStack_c0._6_2_ = (undefined2)((ulong)ppppplVar33 >> 0x30);
                        if (ppppplVar33 == (long *****)0x0) goto LAB_10a902a68;
                        pppppplVar45 = (long ******)pppppplVar26[0xf];
                        pppppplStack_c8 = pppppplVar45;
                      }
                      if (pppppplVar26[0x2aa] != (long *****)0x0) {
                        ppppplVar34 = pppppplVar26[0xc];
                        ppppplVar64 = pppppplVar26[0xd];
                        while (ppppplVar64 != ppppplVar34) {
                          ppppplVar64 = ppppplVar64 + -0x12;
                          FUN_10a8fdc18();
                        }
                        pppppplStack_240[0xd] = ppppplVar34;
                        lVar51 = plVar31[9];
                        if (plVar31[10] != lVar51) {
                          ppppplVar33 = (long *****)0x0;
                          ppppplStack_270 =
                               (long *****)
                               CONCAT44(ppppplStack_270._4_4_,*(undefined4 *)(pppppplVar45 + 0x42));
                          ppppplVar34 = pppppplVar45[0x2d];
                          ppppplStack_258 =
                               (long *****)((long)ppppplStack_258 - (long)ppppplStack_280 >> 2);
                          pppppplVar26 = pppppplStack_240;
                          do {
                            uStack_170 = (long *******)0x0;
                            ppppppplStack_168 =
                                 (long *******)((ulong)ppppppplStack_168 & 0xffffffff00000000);
                            ppppppplStack_160 = (long *******)0x0;
                            ppppplStack_158 = (long *****)0x0;
                            pppppplStack_150 =
                                 (long ******)
                                 CONCAT35((int3)((ulong)pppppplStack_150 >> 0x28),0x100000000);
                            ppppppplStack_140 = (long *******)0x0;
                            ppppppplStack_148 = (long *******)0x0;
                            ppppppplStack_130 = (long *******)0x0;
                            ppppppplStack_138 = (long *******)0x0;
                            ppppppplStack_120 = (long *******)0x0;
                            ppppppplStack_128 = (long *******)0x0;
                            ppppppplStack_110 = (long *******)0x0;
                            ppppppplStack_118 = (long *******)0x0;
                            ppppppplStack_100 = (long *******)0x0;
                            uStack_108 = (long *******)0x0;
                            pppppplStack_f8 =
                                 (long ******)((ulong)pppppplStack_f8 & 0xffffffffffffff00);
                            ppppplStack_e8 = pppppplVar26[0x2ab];
                            ppppplStack_f0 = pppppplVar26[0x2aa];
                            if (pppppplVar26[0x2ab] != (long *****)0x0) {
                              ppppplVar64 = pppppplVar26[0x2ab] + 2;
                              do {
                                cVar20 = '\x01';
                                bVar22 = (bool)ExclusiveMonitorPass(ppppplVar64,0x10);
                                if (bVar22) {
                                  *ppppplVar64 = (long ****)((long)*ppppplVar64 + 1);
                                  cVar20 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar20 != '\0');
                            }
                            plVar30 = (long *)(lVar51 + (long)ppppplVar33 * 0x10);
                            func_0x00010a04a780(&ppppppplStack_118,plVar30);
                            if (ppppplVar33 < ppppplStack_258) {
                              uVar79 = *(undefined4 *)
                                        ((long)ppppplStack_280 + (long)ppppplVar33 * 4);
                            }
                            else {
                              uVar79 = 0;
                            }
                            if (ppppplVar33 <
                                (long *****)((long)ppppppplStack_1c0 - (long)ppppppplStack_1c8 >> 2)
                               ) {
                              uVar82 = *(undefined4 *)
                                        ((long)ppppppplStack_1c8 + (long)ppppplVar33 * 4);
                            }
                            else {
                              uVar82 = 0;
                            }
                            uStack_108 = (long *******)CONCAT44(uVar82,uVar79);
                            if (ppppplVar33 <
                                (long *****)((long)ppppppplStack_1d8 - (long)ppppppplStack_1e0 >> 3)
                               ) {
                              ppppppplStack_100 = (long *******)ppppppplStack_1e0[(long)ppppplVar33]
                              ;
                            }
                            else {
                              ppppppplStack_100 = (long *******)0x0;
                            }
                            if (ppppplVar33 < ppppplStack_1f0) {
                              bVar41 = (byte)((ulong)ppppplStack_1f8[(ulong)ppppplVar33 >> 6] >>
                                             ((ulong)ppppplVar33 & 0x3f)) & 1;
                            }
                            else {
                              bVar41 = 0;
                            }
                            pppppplStack_f8 = (long ******)CONCAT71(pppppplStack_f8._1_7_,bVar41);
                            if (ppppplVar33 <
                                (long *****)((long)pppppplStack_208 - (long)pppppplStack_210 >> 4))
                            {
                              pppppplVar45 = pppppplStack_210 + (long)ppppplVar33 * 2;
                              ppppppplStack_d8 = (long *******)pppppplVar45[1];
                              ppppppplStack_e0 = (long *******)*pppppplVar45;
                              if (pppppplVar45[1] != (long *****)0x0) {
                                ppppplVar64 = pppppplVar45[1] + 1;
                                do {
                                  cVar20 = '\x01';
                                  bVar22 = (bool)ExclusiveMonitorPass(ppppplVar64,0x10);
                                  if (bVar22) {
                                    *ppppplVar64 = (long ****)((long)*ppppplVar64 + 1);
                                    cVar20 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar20 != '\0');
                              }
                            }
                            else {
                              ppppppplStack_e0 = (long *******)0x0;
                              ppppppplStack_d8 = (long *******)0x0;
                            }
                            FUN_10a19ad28(&ppppppplStack_138,&ppppppplStack_e0);
                            ppppppplVar60 = ppppppplStack_d8;
                            if (ppppppplStack_d8 != (long *******)0x0) {
                              ppppppplVar94 = ppppppplStack_d8 + 1;
                              do {
                                pppppplVar45 = *ppppppplVar94;
                                cVar20 = '\x01';
                                bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                                if (bVar22) {
                                  *ppppppplVar94 = (long ******)((long)pppppplVar45 + -1);
                                  cVar20 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar20 != '\0');
                              if (pppppplVar45 == (long ******)0x0) {
                                (*(code *)(*ppppppplStack_d8)[2])(ppppppplStack_d8);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
                              }
                            }
                            FUN_10a19ad28(&ppppppplStack_128,lVar65 + 0x20);
                            pppppplStack_150 =
                                 (long ******)
                                 CONCAT44(pppppplStack_150._4_4_,
                                          uStack_108._4_4_ + (int)ppppplStack_270);
                            if ((char)pppppplStack_f8 == '\x01') {
                              ppppplStack_158 = (long *****)0x0;
                              ppppppplStack_160 = ppppppplStack_100;
                            }
                            else {
                              ppppppplStack_160 = (long *******)ppppplVar34[0x26];
                              ppppplStack_158 = (long *****)ppppplVar34[0x27];
                            }
                            if (*plVar30 == 0) {
                              FUN_10a8fdf28(pppppplVar68,&uStack_170);
                            }
                            else {
                              ppppppplStack_e0 = ppppppplStack_128;
                              ppppppplStack_d8 = ppppppplStack_120;
                              if (((int)uStack_108 == 1) && (ppppppplStack_138 != (long *******)0x0)
                                 ) {
                                ppppppplStack_e0 = ppppppplStack_138;
                                ppppppplStack_d8 = ppppppplStack_130;
                              }
                              if (ppppppplStack_d8 != (long *******)0x0) {
                                ppppppplVar60 = ppppppplStack_d8 + 1;
                                do {
                                  cVar20 = '\x01';
                                  bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar60,0x10);
                                  if (bVar22) {
                                    *ppppppplVar60 = (long ******)((long)*ppppppplVar60 + 1);
                                    cVar20 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar20 != '\0');
                              }
                              ppppplVar64 = pppppplVar26[0x2aa] + 8;
                              func_0x00010a97784c(ppppplVar64,&ppppppplStack_e0,plVar30);
                              uStack_170 = (long *******)
                                           CONCAT44(uStack_170._4_4_,(uint)ppppplVar64);
                              pppppplVar45 = pppppplVar26 + 0x2aa;
                              FUN_10a8fe098(pppppplVar45,ppppplVar64);
                              if ((int)pppppplVar45 != 0) {
                                uVar72 = (ulong)((uint)ppppplVar64 & 0x3fff);
                                pppplVar55 = pppppplVar26[0x2aa][8];
                                uVar54 = ((long)pppppplVar26[0x2aa][9] - (long)pppplVar55 >> 4) *
                                         0x4ec4ec4ec4ec4ec5;
                                if (uVar54 < uVar72 || uVar54 - uVar72 == 0) goto LAB_10a903268;
                                *(undefined4 *)(pppplVar55 + uVar72 * 0x1a + 0xd) = 0x3f800000;
                                *(undefined8 *)((long)pppplVar55 + uVar72 * 0xd0 + 0x74) = 0;
                                *(undefined8 *)((long)pppplVar55 + uVar72 * 0xd0 + 0x6c) = 0;
                                *(undefined4 *)((long)pppplVar55 + uVar72 * 0xd0 + 0x7c) =
                                     0x3f800000;
                                pppplVar55[uVar72 * 0x1a + 0x10] = (long ***)0x0;
                                pppplVar55[uVar72 * 0x1a + 0x11] = (long ***)0x0;
                                *(undefined4 *)(pppplVar55 + uVar72 * 0x1a + 0x12) = 0x3f800000;
                                *(undefined8 *)((long)pppplVar55 + uVar72 * 0xd0 + 0x9c) = 0;
                                *(undefined8 *)((long)pppplVar55 + uVar72 * 0xd0 + 0x94) = 0;
                                *(undefined4 *)((long)pppplVar55 + uVar72 * 0xd0 + 0xa4) =
                                     0x3f800000;
                                *(char *)((long)pppplVar55 + uVar72 * 0xd0 + 0xaa) = (char)uVar15;
                                *(long *)((long)pppplVar55 + uVar72 * 0xd0 + 0xbc) = lStack_188;
                                *(long *)((long)pppplVar55 + uVar72 * 0xd0 + 0xb4) = lStack_190;
                                *(int *)((long)pppplVar55 + uVar72 * 0xd0 + 0xc4) = (int)lVar53;
                                pppppplVar26 = pppppplStack_240;
                              }
                              FUN_10a8fde00(&uStack_170,pppppplVar26[0x2aa]);
                              ppppplVar64 = pppppplVar26[0x2aa] + 4;
                              FUN_10a8fe104(ppppplVar64,0);
                              ppppppplVar60 = uStack_170;
                              uVar36 = (uint)ppppplVar64;
                              uStack_170 = (long *******)CONCAT44(uVar36,(undefined4)uStack_170);
                              ppppplVar29 = pppppplVar26[0x2aa];
                              if ((uVar36 != 0) && (ppppplVar29 != (long *****)0x0)) {
                                pppplVar55 = ppppplVar29[4];
                                uVar72 = (ulong)(uVar36 & 0x3fff);
                                uVar54 = ((long)ppppplVar29[5] - (long)pppplVar55 >> 3) *
                                         -0x3333333333333333;
                                if ((uVar72 <= uVar54 && uVar54 - uVar72 != 0) &&
                                   ((pppplVar55 = pppplVar55 + uVar72 * 5,
                                    *(uint *)((long)pppplVar55 + 4) == uVar36 &&
                                    (*(char *)pppplVar55 != '\x02')))) {
                                  FUN_10a8fe160(ppppplVar29 + 4,ppppplVar64,
                                                (ulong)ppppppplVar60 & 0xffffffff);
                                  ppppplVar29 = pppppplStack_240[0x2aa];
                                }
                              }
                              FUN_10a977418(ppppplVar29,0,0,0,(ulong)pppppplStack_150 & 0xffffffff);
                              uVar36 = (uint)ppppplVar29;
                              ppppppplStack_168 =
                                   (long *******)CONCAT44(ppppppplStack_168._4_4_,uVar36);
                              ppppplVar64 = pppppplStack_240[0x2aa];
                              if ((uVar36 != 0) && (ppppplVar64 != (long *****)0x0)) {
                                uVar72 = (ulong)(uVar36 & 0x3fff);
                                uVar54 = ((long)ppppplVar64[1] - (long)*ppppplVar64 >> 3) *
                                         -0x71c71c71c71c71c7;
                                if ((uVar72 <= uVar54 && uVar54 - uVar72 != 0) &&
                                   ((pppplVar55 = *ppppplVar64 + uVar72 * 9,
                                    *(uint *)((long)pppplVar55 + 4) == uVar36 &&
                                    (*(char *)pppplVar55 != '\x02')))) {
                                  FUN_10a97765c(ppppplVar64,ppppplVar29,uStack_170._4_4_);
                                  uVar72 = (ulong)ppppppplStack_168 & 0x3fff;
                                  uVar54 = ((long)ppppplVar64[1] - (long)*ppppplVar64 >> 3) *
                                           -0x71c71c71c71c71c7;
                                  if (uVar54 < uVar72 || uVar54 - uVar72 == 0) goto LAB_10a903268;
                                  *(undefined1 *)(*ppppplVar64 + uVar72 * 9) = 1;
                                  ppppplVar64 = pppppplStack_240[0x2aa];
                                }
                              }
                              pppppplVar26 = pppppplStack_240;
                              FUN_10a8fe1b8(ppppplVar64);
                              plVar30 = (long *)*plVar30;
                              FUN_10ab46af4();
                              plStack_180 = (long *)*plVar30;
                              plVar30 = (long *)plVar30[1];
                              if (plVar30 != (long *)0x0) {
                                plVar49 = plVar30 + 1;
                                do {
                                  cVar20 = '\x01';
                                  bVar22 = (bool)ExclusiveMonitorPass(plVar49,0x10);
                                  if (bVar22) {
                                    *plVar49 = *plVar49 + 1;
                                    cVar20 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar20 != '\0');
                              }
                              plStack_178 = plVar30;
                              if (plStack_180 != (long *)0x0) {
                                if (*(int *)(pppppplVar26 + 0x2a6) == 1) {
                                  *(undefined4 *)((long)plStack_180 + 0x22c) = 0xcb18967f;
                                  plStack_180[0x46] = -0x34e7698034e76981;
                                  uVar79 = uVar89;
                                  uVar82 = uVar89;
                                  uVar84 = uVar89;
                                }
                                else {
                                  ppppplVar64 = pppppplVar26[0x2a7];
                                  *(undefined4 *)((long)plStack_180 + 0x22c) =
                                       *(undefined4 *)((long)pppppplVar26 + 0x1534);
                                  plStack_180[0x46] = (long)ppppplVar64;
                                  uVar79 = *(undefined4 *)(pppppplVar26 + 0x2a8);
                                  uVar82 = *(undefined4 *)((long)pppppplVar26 + 0x1544);
                                  uVar84 = *(undefined4 *)(pppppplVar26 + 0x2a9);
                                }
                                *(undefined4 *)(plStack_180 + 0x47) = uVar79;
                                *(undefined4 *)((long)plStack_180 + 0x23c) = uVar82;
                                *(undefined4 *)(plStack_180 + 0x48) = uVar84;
                                func_0x00010a3327d4(plStack_180,2);
                              }
                              if (plVar30 != (long *)0x0) {
                                plVar49 = plVar30 + 1;
                                do {
                                  lVar51 = *plVar49;
                                  cVar20 = '\x01';
                                  bVar22 = (bool)ExclusiveMonitorPass(plVar49,0x10);
                                  if (bVar22) {
                                    *plVar49 = lVar51 + -1;
                                    cVar20 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar20 != '\0');
                                if (lVar51 == 0) {
                                  (**(code **)(*plVar30 + 0x10))(plVar30);
                                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
                                }
                              }
                              FUN_10a8fdf28(pppppplVar68,&uStack_170);
                              ppppppplVar60 = ppppppplStack_d8;
                              if (ppppppplStack_d8 != (long *******)0x0) {
                                ppppppplVar94 = ppppppplStack_d8 + 1;
                                do {
                                  pppppplVar45 = *ppppppplVar94;
                                  cVar20 = '\x01';
                                  bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                                  if (bVar22) {
                                    *ppppppplVar94 = (long ******)((long)pppppplVar45 + -1);
                                    cVar20 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar20 != '\0');
                                if (pppppplVar45 == (long ******)0x0) {
                                  (*(code *)(*ppppppplStack_d8)[2])(ppppppplStack_d8);
                                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
                                }
                              }
                            }
                            FUN_10a8fdc18(&uStack_170);
                            ppppplVar33 = (long *****)((long)ppppplVar33 + 1);
                            lVar51 = plVar31[9];
                          } while (ppppplVar33 < (long *****)(plVar31[10] - lVar51 >> 4));
                          ppppplVar33 = (long *****)
                                        CONCAT26(uStack_c0._6_2_,
                                                 CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                        }
                      }
                      if (ppppplVar33 != (long *****)0x0) {
                        ppppplVar34 = ppppplVar33 + 1;
                        do {
                          pppplVar55 = *ppppplVar34;
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppplVar34,0x10);
                          if (bVar22) {
                            *ppppplVar34 = (long ****)((long)pppplVar55 + -1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                        if (pppplVar55 == (long ****)0x0) {
                          (*(code *)(*ppppplVar33)[2])(ppppplVar33);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar33);
                        }
                      }
                      uStack_170 = &pppppplStack_210;
                      FUN_10a0cffec(&uStack_170);
                      if (ppppplStack_1f8 != (long *****)0x0) {
                        __ZdlPv();
                      }
                      if (ppppppplStack_1e0 != (long *******)0x0) {
                        ppppppplStack_1d8 = ppppppplStack_1e0;
                        __ZdlPv();
                      }
                      if (ppppppplStack_1c8 != (long *******)0x0) {
                        ppppppplStack_1c0 = ppppppplStack_1c8;
                        __ZdlPv();
                      }
                      if (ppppplStack_280 != (long *****)0x0) {
                        __ZdlPv();
                      }
                    }
                  }
                  pppppplVar68 = uStack_1a8;
                  param_1 = plStack_250;
                  plVar30 = plStack_230;
                  if (uStack_1a8 != (long ******)0x0) {
                    pppppplVar26 = uStack_1a8 + 1;
                    do {
                      ppppplVar33 = *pppppplVar26;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                      if (bVar22) {
                        *pppppplVar26 = (long *****)((long)ppppplVar33 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar33 == (long *****)0x0) {
                      (*(code *)(*uStack_1a8)[2])(uStack_1a8);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar68);
                      plVar30 = plStack_230;
                    }
                  }
                }
                else {
                  plVar31 = plStack_278;
                  if (*(char *)((long)param_1 + 0x167) < '\0') {
                    plVar31 = (long *)*plStack_278;
                  }
                  __ZNSt3__19to_stringEj(&uStack_170,999999);
                  ppppppplVar60 = uStack_170;
                  if (-1 < (long)ppppppplStack_160) {
                    ppppppplVar60 = (long *******)&uStack_170;
                  }
                  func_0x00010ae06f08(1,0x12,&UNK_10f6821fc,&UNK_10f6821fc,0xffffffff,&UNK_10f6825cc
                                      ,in_x6,in_x7,plVar31,ppppppplVar60);
                  param_1 = plStack_250;
                  if ((long)ppppppplStack_160 < 0) {
                    __ZdlPv(uStack_170);
                  }
                }
              }
              if (plVar30 != (long *)0x0) {
                plVar31 = plVar30 + 1;
                do {
                  lVar51 = *plVar31;
                  cVar20 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                  if (bVar22) {
                    *plVar31 = lVar51 + -1;
                    cVar20 = ExclusiveMonitorsStatus();
                  }
                } while (cVar20 != '\0');
                if (lVar51 == 0) {
                  (**(code **)(*plVar30 + 0x10))(plVar30);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
                }
              }
            }
            pplVar28 = (long **)pplVar35[1];
            pplVar77 = pplVar35;
            if ((long **)pplVar35[1] == (long **)0x0) {
              do {
                pplVar35 = (long **)pplVar77[2];
                bVar22 = (long **)*pplVar35 != pplVar77;
                pplVar77 = pplVar35;
              } while (bVar22);
            }
            else {
              do {
                pplVar35 = pplVar28;
                pplVar28 = (long **)*pplVar35;
              } while ((long **)*pplVar35 != (long **)0x0);
            }
          } while (pplVar35 != pplStack_248);
        }
        func_0x000107c27bf0(&pplStack_228,plStack_220);
      }
      return;
    }
    FUN_10a0edfc4(&uStack_170);
  }
  lVar46 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a9085f8();
  lVar51 = param_1[0x2d];
  if (param_1[0x2e] == 0) {
    ppuVar24 = &PTR___tlv_bootstrap_11340dee8;
    (*(code *)PTR___tlv_bootstrap_11340dee8)();
    puVar43 = *ppuVar24;
    if (puVar43 != (undefined *)0x0) goto LAB_10a9050c8;
    FUN_10a3ca004();
    pbVar25 = (byte *)0x113836510;
    FUN_10ad0621c();
    uVar72 = (ulong)(*pbVar25 >> 4 & 4);
    puVar43 = ppuVar24[uVar72 + 7];
    if (puVar43 != (undefined *)0x0) goto LAB_10a9050c8;
    FUN_10a3ca05c(ppuVar24,uVar72);
    puVar43 = ppuVar24[uVar72 + 7];
    uStack_c0._0_1_ = 0x35;
    uStack_c0._1_5_ = 0x10f646d;
    uStack_c0._6_2_ = 0;
    uStack_b8 = 0x26;
    uStack_b2 = 0;
    if (puVar43 != (undefined *)0x0) goto LAB_10a9050c8;
  }
  else {
    puVar43 = *(undefined **)(*(long *)(param_1[0x2e] + 0x100) + 0x260);
    uStack_c0._0_1_ = 0x20;
    uStack_c0._1_5_ = 0x10f653c;
    uStack_c0._6_2_ = 0;
    uStack_b8 = 0x21;
    uStack_b2 = 0;
    if (puVar43 == (undefined *)0x0) {
      FUN_10a0edfc4(&uStack_c0);
      goto LAB_10a907c3c;
    }
LAB_10a9050c8:
    plVar31 = *(long **)(puVar43 + 0x228);
    (**(code **)(*plVar31 + 0x68))();
    if (0xf < *(int *)((long)plVar31 + 0x8c)) {
      FUN_10a8fc8e8(&ppppppplStack_d8,param_1[0x9e]);
      if (ppppppplStack_d8 != &pppppplStack_d0) {
        plVar31 = param_1 + 0xbc;
        plVar30 = param_1 + 0xc3;
        plVar49 = param_1 + 0xc5;
        plVar44 = param_1 + 0xcc;
        plVar1 = param_1 + 0xce;
        plVar2 = param_1 + 0xd7;
        plVar3 = param_1 + 0xe0;
        plVar4 = param_1 + 0xeb;
        plVar5 = param_1 + 0xed;
        plVar6 = param_1 + 0xef;
        plVar7 = param_1 + 0xf1;
        plVar8 = param_1 + 0xf3;
        plVar9 = param_1 + 0xf5;
        plVar93 = param_1 + 0x123;
        ppppppplVar48 = ppppppplStack_d8;
        do {
          ppppppplVar60 = ppppppplVar48 + 4;
          lVar65 = param_1[0x9e];
          lVar53 = lVar65 + 0xf8;
          FUN_10a9176b0(lVar53,ppppppplVar60);
          if (lVar65 + 0x100 != lVar53) {
            ppppplStack_e8 = *(long ******)(lVar53 + 0x38);
            ppppppplStack_e0 = *(long ********)(lVar53 + 0x40);
            if (ppppppplStack_e0 != (long *******)0x0) {
              ppppppplVar94 = ppppppplStack_e0 + 1;
              do {
                cVar20 = '\x01';
                bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                if (bVar22) {
                  *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                  cVar20 = ExclusiveMonitorsStatus();
                }
              } while (cVar20 != '\0');
            }
            if (ppppplStack_e8 != (long *****)0x0) {
              pppppplStack_f8 = (long ******)ppppplStack_e8[3];
              ppppplStack_f0 = (long *****)ppppplStack_e8[4];
              if (ppppplStack_f0 != (long *****)0x0) {
                ppppplVar33 = ppppplStack_f0 + 1;
                do {
                  cVar20 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(ppppplVar33,0x10);
                  if (bVar22) {
                    *ppppplVar33 = (long ****)((long)*ppppplVar33 + 1);
                    cVar20 = ExclusiveMonitorsStatus();
                  }
                } while (cVar20 != '\0');
              }
              if (pppppplStack_f8 != (long ******)0x0) {
                lVar65 = param_1[0x2e];
                ppppppplVar94 = ppppppplVar60;
                __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                          (&uStack_c0,&UNK_10f682546,ppppppplVar60);
                lVar53 = lVar65;
                FUN_10a3dd220(lVar65);
                func_0x00010a0fda30();
                FUN_10a3dd268(lVar65,lVar53,ppppppplVar94,&uStack_c0);
                FUN_10a0c3500(lVar65,lVar51);
                func_0x00010a3e4590(lVar65,0);
                ppppppplVar94 = (long *******)&ppppppplStack_128;
                puVar43 = &UNK_10f6821fc;
                func_0x000107c2b054(ppppppplVar94,&UNK_10f6821fc);
                uVar69 = *(undefined8 *)(lVar65 + 0x120);
                func_0x00010a0fda30();
                FUN_10a3b8ecc(&ppppppplStack_110,uVar69,ppppppplVar94,puVar43);
                ppppppplVar94 = ppppppplStack_128;
                ppppppplVar38 = ppppppplStack_120;
                if (-1 < (long)ppppppplStack_118) {
                  ppppppplVar94 = (long *******)&ppppppplStack_128;
                  ppppppplVar38 = (long *******)((ulong)ppppppplStack_118 >> 0x38);
                }
                func_0x000107c2c4d8(ppppppplStack_110 + 0x2a,ppppppplVar94,ppppppplVar38);
                ppppppplStack_198 = uStack_108;
                ppppppplStack_1a0 = ppppppplStack_110;
                if (uStack_108 != (long *******)0x0) {
                  ppppppplVar94 = uStack_108 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                    if (bVar22) {
                      *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                }
                ppppppplVar95 = (long *******)0x0;
                ppppppplVar94 = (long *******)0x0;
                ppppppplStack_a8 = (long *******)0x0;
                ppppppplStack_b0 = (long *******)0x0;
                uStack_c0._0_1_ = 0x18;
                uStack_c0._1_5_ = 0x10a0d4f;
                uStack_c0._6_2_ = 0;
                uStack_b8 = 0x110950c70;
                uStack_b2 = 0;
                FUN_10a3e4814(lVar65,&ppppppplStack_1a0,&uStack_c0);
                (**(code **)CONCAT26(uStack_b2,uStack_b8))(&uStack_b8);
                ppppppplVar38 = ppppppplStack_198;
                if (ppppppplStack_198 != (long *******)0x0) {
                  ppppppplVar76 = ppppppplStack_198 + 1;
                  do {
                    pppppplVar52 = *ppppppplVar76;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                    if (bVar22) {
                      *ppppppplVar76 = (long ******)((long)pppppplVar52 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (pppppplVar52 == (long ******)0x0) {
                    (*(code *)(*ppppppplStack_198)[2])(ppppppplStack_198);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar38);
                  }
                }
                if ((long)ppppppplStack_118 < 0) {
                  __ZdlPv(ppppppplStack_128);
                }
                (*(code *)(*ppppppplStack_110)[0xd])(ppppppplStack_110,0);
                ppppppplVar38 = ppppppplStack_110;
                __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                          (&uStack_c0,"system",ppppppplVar60);
                puVar37 = (undefined1 *)
                          CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                uVar72 = CONCAT26(uStack_b2,uStack_b8);
                if (-1 < (long)ppppppplStack_b0) {
                  puVar37 = (undefined1 *)&uStack_c0;
                  uVar72 = (ulong)ppppppplStack_b0 >> 0x38;
                }
                func_0x000107c2c4d8(ppppppplVar38 + 0x2a,puVar37,uVar72);
                *(undefined1 *)(ppppppplStack_110 + 1) = 1;
                ppppppplVar38 = &pppppplStack_f8;
                ppppppplVar71 = ppppppplStack_110;
                FUN_10a39c6b8();
                ppppplVar33 = ppppplStack_e8;
                ppppppplVar76 = ppppppplStack_110;
                if (ppppplStack_e8[5] != (long ****)0x0) {
                  func_0x000107c2b054(&ppppppplStack_128,&UNK_10f682551);
                  ppppppplStack_138 = (long *******)ppppplVar33[5];
                  ppppppplVar94 = (long *******)ppppplVar33[6];
                  if (ppppppplVar94 == (long *******)0x0) {
                    ppppppplVar95 = (long *******)0x0;
                  }
                  else {
                    ppppppplVar38 = ppppppplVar94 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                      if (bVar22) {
                        *ppppppplVar38 = (long ******)((long)*ppppppplVar38 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    ppppppplVar95 = ppppppplVar94 + 2;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar95,0x10);
                      if (bVar22) {
                        *ppppppplVar95 = (long ******)((long)*ppppppplVar95 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                      if (bVar22) {
                        *ppppppplVar38 = (long ******)((long)*ppppppplVar38 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                      ppppppplVar95 = ppppppplVar94;
                    } while (cVar20 != '\0');
                  }
                  ppppppplStack_b0 = (long *******)0xe00000000000000;
                  uStack_b2 = 0;
                  uStack_b8 = 0x6c6169726574;
                  uStack_c0._6_2_ = 0x614d;
                  uStack_c0._1_5_ = 0x2e74657373;
                  uStack_c0._0_1_ = 0x41;
                  ppppppplVar38 = (long *******)&ppppppplStack_128;
                  ppppppplStack_130 = ppppppplVar94;
                  ppppppplStack_a8 = ppppppplStack_138;
                  FUN_10a39a09c(ppppppplVar76,ppppppplVar38,&uStack_c0);
                  if (ppppppplVar94 != (long *******)0x0) {
                    ppppppplVar76 = ppppppplVar94 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar76;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                      if (bVar22) {
                        *ppppppplVar76 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplVar94)[2])(ppppppplVar94);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                    }
                  }
                  ppppppplVar71 = ppppppplVar95;
                  if (ppppppplVar95 != (long *******)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  ppppppplVar76 = ppppppplStack_130;
                  if (ppppppplStack_130 != (long *******)0x0) {
                    ppppppplVar10 = ppppppplStack_130 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar10;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar10,0x10);
                      if (bVar22) {
                        *ppppppplVar10 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplStack_130)[2])(ppppppplStack_130);
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                      ppppppplVar71 = ppppppplVar76;
                    }
                  }
                  if ((long)ppppppplStack_118 < 0) {
                    ppppppplVar71 = ppppppplStack_128;
                    __ZdlPv();
                  }
                }
                ppppplVar33 = ppppplStack_e8;
                ppppppplVar76 = ppppppplStack_110;
                if (ppppplStack_e8[7] != (long ****)0x0) {
                  func_0x000107c2b054(&ppppppplStack_128,&UNK_10f682563);
                  ppppppplStack_148 = (long *******)ppppplVar33[7];
                  ppppppplVar94 = (long *******)ppppplVar33[8];
                  if (ppppppplVar94 == (long *******)0x0) {
                    ppppppplVar95 = (long *******)0x0;
                  }
                  else {
                    ppppppplVar38 = ppppppplVar94 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                      if (bVar22) {
                        *ppppppplVar38 = (long ******)((long)*ppppppplVar38 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    ppppppplVar95 = ppppppplVar94 + 2;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar95,0x10);
                      if (bVar22) {
                        *ppppppplVar95 = (long ******)((long)*ppppppplVar95 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                      if (bVar22) {
                        *ppppppplVar38 = (long ******)((long)*ppppppplVar38 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                      ppppppplVar95 = ppppppplVar94;
                    } while (cVar20 != '\0');
                  }
                  ppppppplStack_b0 = (long *******)0xe00000000000000;
                  uStack_b2 = 0;
                  uStack_b8 = 0x6c6169726574;
                  uStack_c0._6_2_ = 0x614d;
                  uStack_c0._1_5_ = 0x2e74657373;
                  uStack_c0._0_1_ = 0x41;
                  ppppppplVar38 = (long *******)&ppppppplStack_128;
                  ppppppplStack_140 = ppppppplVar94;
                  ppppppplStack_a8 = ppppppplStack_148;
                  FUN_10a39a09c(ppppppplVar76,ppppppplVar38,&uStack_c0);
                  if (ppppppplVar94 != (long *******)0x0) {
                    ppppppplVar76 = ppppppplVar94 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar76;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                      if (bVar22) {
                        *ppppppplVar76 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplVar94)[2])(ppppppplVar94);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                    }
                  }
                  ppppppplVar71 = ppppppplVar95;
                  if (ppppppplVar95 != (long *******)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  ppppppplVar76 = ppppppplStack_140;
                  if (ppppppplStack_140 != (long *******)0x0) {
                    ppppppplVar10 = ppppppplStack_140 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar10;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar10,0x10);
                      if (bVar22) {
                        *ppppppplVar10 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplStack_140)[2])(ppppppplStack_140);
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                      ppppppplVar71 = ppppppplVar76;
                    }
                  }
                  if ((long)ppppppplStack_118 < 0) {
                    ppppppplVar71 = ppppppplStack_128;
                    __ZdlPv();
                  }
                }
                ppppppplVar76 = ppppppplStack_110;
                if (*(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18) < 0x15c) {
                  pppplVar55 = ppppplStack_e8[9];
                  if (ppppplStack_e8[10] != pppplVar55) {
                    ppppppplVar38 = (long *******)*pppplVar55;
                    ppppppplVar71 = (long *******)pppplVar55[1];
                    if (ppppppplVar71 != (long *******)0x0) {
                      ppppppplVar10 = ppppppplVar71 + 1;
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar10,0x10);
                        if (bVar22) {
                          *ppppppplVar10 = (long ******)((long)*ppppppplVar10 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                    }
                    ppppppplStack_1a0 = ppppppplVar38;
                    ppppppplStack_198 = ppppppplVar71;
                    if (ppppppplVar38 != (long *******)0x0) {
                      func_0x000107c2b054(&ppppppplStack_128,&UNK_10f682589);
                      if (ppppppplVar71 == (long *******)0x0) {
                        ppppppplVar95 = (long *******)0x0;
                      }
                      else {
                        ppppppplVar94 = ppppppplVar71 + 1;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                          if (bVar22) {
                            *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                        ppppppplVar95 = ppppppplVar71 + 2;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar95,0x10);
                          if (bVar22) {
                            *ppppppplVar95 = (long ******)((long)*ppppppplVar95 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                          if (bVar22) {
                            *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                          ppppppplVar95 = ppppppplVar71;
                        } while (cVar20 != '\0');
                      }
                      ppppppplStack_b0 = (long *******)0xe00000000000000;
                      uStack_b2 = 0;
                      uStack_b8 = 0x6c6169726574;
                      uStack_c0._6_2_ = 0x614d;
                      uStack_c0._1_5_ = 0x2e74657373;
                      uStack_c0._0_1_ = 0x41;
                      ppppppplStack_1d8 = ppppppplVar38;
                      ppppppplStack_1d0 = ppppppplVar71;
                      ppppppplStack_a8 = ppppppplVar38;
                      FUN_10a39a09c(ppppppplVar76,&ppppppplStack_128,&uStack_c0);
                      if (ppppppplVar71 != (long *******)0x0) {
                        ppppppplVar94 = ppppppplVar71 + 1;
                        do {
                          pppppplVar52 = *ppppppplVar94;
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                          if (bVar22) {
                            *ppppppplVar94 = (long ******)((long)pppppplVar52 + -1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                        if (pppppplVar52 == (long ******)0x0) {
                          (*(code *)(*ppppppplVar71)[2])(ppppppplVar71);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar71);
                        }
                      }
                      if (ppppppplVar95 != (long *******)0x0) {
                        __ZNSt3__119__shared_weak_count14__release_weakEv();
                      }
                      ppppppplVar94 = ppppppplStack_1d0;
                      if (ppppppplStack_1d0 != (long *******)0x0) {
                        ppppppplVar38 = ppppppplStack_1d0 + 1;
                        do {
                          pppppplVar52 = *ppppppplVar38;
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                          if (bVar22) {
                            *ppppppplVar38 = (long ******)((long)pppppplVar52 + -1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                        if (pppppplVar52 == (long ******)0x0) {
                          (*(code *)(*ppppppplStack_1d0)[2])(ppppppplStack_1d0);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                        }
                      }
                      ppppppplVar94 = ppppppplVar71;
                      if ((long)ppppppplStack_118 < 0) {
                        __ZdlPv(ppppppplStack_128);
                      }
                    }
                    ppppppplVar38 = ppppppplStack_198;
                    if (ppppppplStack_198 != (long *******)0x0) {
                      ppppppplVar76 = ppppppplStack_198 + 1;
                      do {
                        pppppplVar52 = *ppppppplVar76;
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                        if (bVar22) {
                          *ppppppplVar76 = (long ******)((long)pppppplVar52 + -1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      if (pppppplVar52 == (long ******)0x0) {
                        (*(code *)(*ppppppplStack_198)[2])(ppppppplStack_198);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar38);
                      }
                    }
                  }
                  ppppppplVar38 = ppppppplStack_110;
                  lVar53 = param_1[0x9e];
                  if ((*(long **)(lVar53 + 0xe0) != *(long **)(lVar53 + 0xe8)) &&
                     (**(long **)(lVar53 + 0xe0) != 0)) {
                    func_0x000107c2b054(&ppppppplStack_128,&UNK_10f68253a);
                    puVar32 = *(undefined8 **)(lVar53 + 0xe0);
                    if (*(undefined8 **)(lVar53 + 0xe8) == puVar32) goto LAB_10a907c3c;
                    ppppppplStack_1e8 = (long *******)*puVar32;
                    ppppppplVar94 = (long *******)puVar32[1];
                    if (ppppppplVar94 == (long *******)0x0) {
                      ppppppplVar95 = (long *******)0x0;
                    }
                    else {
                      ppppppplVar76 = ppppppplVar94 + 1;
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                        if (bVar22) {
                          *ppppppplVar76 = (long ******)((long)*ppppppplVar76 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      ppppppplVar95 = ppppppplVar94 + 2;
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar95,0x10);
                        if (bVar22) {
                          *ppppppplVar95 = (long ******)((long)*ppppppplVar95 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                        if (bVar22) {
                          *ppppppplVar76 = (long ******)((long)*ppppppplVar76 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                        ppppppplVar95 = ppppppplVar94;
                      } while (cVar20 != '\0');
                    }
                    ppppppplStack_b0 = (long *******)0x1000000000000000;
                    uStack_b2 = 0x6873;
                    uStack_b8 = 0x654d7265646e;
                    uStack_c0._6_2_ = 0x6552;
                    uStack_c0._1_5_ = 0x2e74657373;
                    uStack_c0._0_1_ = 0x41;
                    ppppppplStack_1e0 = ppppppplVar94;
                    ppppppplStack_a8 = ppppppplStack_1e8;
                    FUN_10a39a09c(ppppppplVar38,&ppppppplStack_128,&uStack_c0);
                    if (ppppppplVar94 != (long *******)0x0) {
                      ppppppplVar38 = ppppppplVar94 + 1;
                      do {
                        pppppplVar52 = *ppppppplVar38;
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                        if (bVar22) {
                          *ppppppplVar38 = (long ******)((long)pppppplVar52 + -1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      if (pppppplVar52 == (long ******)0x0) {
                        (*(code *)(*ppppppplVar94)[2])(ppppppplVar94);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                      }
                    }
                    if (ppppppplVar95 != (long *******)0x0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    ppppppplVar38 = ppppppplStack_1e0;
                    if (ppppppplStack_1e0 != (long *******)0x0) {
                      ppppppplVar76 = ppppppplStack_1e0 + 1;
                      do {
                        pppppplVar52 = *ppppppplVar76;
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                        if (bVar22) {
                          *ppppppplVar76 = (long ******)((long)pppppplVar52 + -1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      if (pppppplVar52 == (long ******)0x0) {
                        (*(code *)(*ppppppplStack_1e0)[2])(ppppppplStack_1e0);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar38);
                      }
                    }
                    if ((long)ppppppplStack_118 < 0) {
                      __ZdlPv(ppppppplStack_128);
                    }
                  }
                }
                else {
                  func_0x00010a0fda30();
                  puVar32 = (undefined8 *)0x80;
                  __Znwm();
                  puVar32[1] = 0;
                  puVar32[2] = 0;
                  *puVar32 = &PTR_FUN_110bde0d8;
                  *(undefined1 *)(puVar32 + 4) = 0;
                  puVar32[7] = 0;
                  puVar32[6] = 0;
                  pppplVar55 = (long ****)(puVar32 + 8);
                  puVar32[9] = 0;
                  *pppplVar55 = (long ***)0x0;
                  puVar32[0xc] = ppppppplVar38;
                  puVar32[0xd] = 0;
                  puVar32[0xe] = 0;
                  puVar32[0xf] = 0;
                  puVar39 = puVar32 + 3;
                  *puVar39 = &PTR_DAT_110bdb408;
                  puVar32[5] = &PTR_FUN_110bdb490;
                  puVar32[10] = &PTR_FUN_110bdb4e8;
                  puVar32[0xb] = ppppppplVar71;
                  uStack_c0._0_1_ = SUB81(puVar39,0);
                  uStack_c0._1_5_ = (undefined5)((ulong)puVar39 >> 8);
                  uStack_c0._6_2_ = (undefined2)((ulong)puVar39 >> 0x30);
                  uStack_b8 = SUB86(puVar32,0);
                  uStack_b2 = (undefined2)((ulong)puVar32 >> 0x30);
                  FUN_10a4951fc(&uStack_c0);
                  lVar66 = CONCAT26(uStack_b2,uStack_b8);
                  lVar53 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0))
                  ;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  plVar70 = (long *)param_1[0xbb];
                  param_1[0xbb] = lVar66;
                  param_1[0xba] = lVar53;
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  ppppplVar33 = (long *****)param_1[0xba];
                  if (ppppplVar33 + 10 != ppppplStack_e8 + 0xc) {
                    pppplVar55 = ppppplStack_e8[0xc];
                    FUN_10a105cdc(ppppplVar33 + 10,pppplVar55,ppppplStack_e8[0xd],
                                  ((long)ppppplStack_e8[0xd] - (long)pppplVar55 >> 3) *
                                  -0x5555555555555555);
                    ppppplVar33 = (long *****)param_1[0xba];
                  }
                  pppppplStack_150 = (long ******)param_1[0xbb];
                  ppppplVar34 = ppppplVar33;
                  if (pppppplStack_150 != (long ******)0x0) {
                    pppppplVar52 = pppppplStack_150 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                      if (bVar22) {
                        *pppppplVar52 = (long *****)((long)*pppppplVar52 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    ppppplVar34 = (long *****)param_1[0xba];
                  }
                  ppppplStack_158 = ppppplVar33;
                  (*(code *)(*ppppplVar34)[7])();
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  ppppppplStack_b0 = (long *******)0x0;
                  func_0x000107c2c4d8(&uStack_c0,ppppplVar34,pppplVar55);
                  pppppplVar52 = pppppplStack_150;
                  if (pppppplStack_150 != (long ******)0x0) {
                    pppppplVar68 = pppppplStack_150 + 2;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                      if (bVar22) {
                        *pppppplVar68 = (long *****)((long)*pppppplVar68 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                  }
                  ppppppplStack_a8 = (long *******)ppppplStack_158;
                  ppppplVar33 = ppppplStack_158 + 2;
                  (*(code *)(*ppppplVar33)[3])();
                  pppppplVar68 = (long ******)0x0;
                  if ((((ulong)ppppplVar33 & 1) == 0) &&
                     (pppppplVar68 = pppppplVar52, pppppplVar52 != (long ******)0x0)) {
                    pppppplVar26 = pppppplVar52 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                      if (bVar22) {
                        *pppppplVar26 = (long *****)((long)*pppppplVar26 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                  }
                  if (*(char *)((long)param_1 + 0x5f7) < '\0') {
                    __ZdlPv(*plVar31);
                  }
                  ppppppplVar38 = ppppppplStack_a8;
                  param_1[0xbd] = CONCAT26(uStack_b2,uStack_b8);
                  *plVar31 = CONCAT26(uStack_c0._6_2_,
                                      CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                  param_1[0xbe] = (long)ppppppplStack_b0;
                  ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                  uStack_c0._0_1_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  ppppppplVar94 = (long *******)0x0;
                  lVar53 = param_1[0xc0];
                  param_1[0xc0] = (long)pppppplVar52;
                  param_1[0xbf] = (long)ppppppplVar38;
                  if (lVar53 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0xc1,&stack0xffffffffffffff68);
                  if (pppppplVar68 != (long ******)0x0) {
                    pppppplVar52 = pppppplVar68 + 1;
                    do {
                      ppppplVar33 = *pppppplVar52;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                      if (bVar22) {
                        *pppppplVar52 = (long *****)((long)ppppplVar33 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar33 == (long *****)0x0) {
                      (*(code *)(*pppppplVar68)[2])(pppppplVar68);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar68);
                    }
                  }
                  pppppplVar52 = pppppplStack_150;
                  if (pppppplStack_150 != (long ******)0x0) {
                    pppppplVar26 = pppppplStack_150 + 1;
                    do {
                      ppppplVar33 = *pppppplVar26;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                      if (bVar22) {
                        *pppppplVar26 = (long *****)((long)ppppplVar33 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar33 == (long *****)0x0) {
                      (*(code *)(*pppppplStack_150)[2])(pppppplStack_150);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar52);
                    }
                  }
                  ppppppplVar38 = ppppppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f682575);
                  puVar37 = (undefined1 *)&uStack_c0;
                  FUN_10a39a09c(ppppppplVar38,puVar37,plVar31);
                  func_0x00010a0fda30();
                  FUN_10a91a250(&uStack_c0,ppppppplVar38,puVar37);
                  FUN_10a908708(plVar30,&uStack_c0);
                  plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  ppppplVar33 = ppppplStack_e8;
                  ppppppplStack_120 = (long *******)0x0;
                  ppppppplStack_128 = (long *******)0x0;
                  ppppppplStack_118 = (long *******)0x0;
                  ppppppplVar38 =
                       (long *******)((long)ppppplStack_e8[10] - (long)ppppplStack_e8[9] >> 4);
                  FUN_10a904f5c(&ppppppplStack_128,ppppppplVar38);
                  pppplVar73 = ppppplVar33[10];
                  ppppppplVar95 = ppppppplStack_128;
                  for (pppplVar55 = ppppplVar33[9]; ppppppplStack_128 = ppppppplVar95,
                      pppplVar55 != pppplVar73; pppplVar55 = pppplVar55 + 2) {
                    if (ppppppplStack_120 < ppppppplStack_118) {
                      ppplVar47 = pppplVar55[1];
                      pppppplVar52 = (long ******)*pppplVar55;
                      ppppppplStack_120[1] = (long ******)pppplVar55[1];
                      *ppppppplStack_120 = pppppplVar52;
                      if (ppplVar47 != (long ***)0x0) {
                        ppplVar47 = ppplVar47 + 2;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppplVar47,0x10);
                          if (bVar22) {
                            *ppplVar47 = (long **)((long)*ppplVar47 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      ppppppplVar76 = ppppppplStack_120 + 2;
                    }
                    else {
                      lVar53 = (long)ppppppplStack_120 - (long)ppppppplVar95;
                      uVar72 = (lVar53 >> 4) + 1;
                      if (uVar72 >> 0x3c != 0) {
                        FUN_10a34d61c();
                        goto LAB_10a907c3c;
                      }
                      uVar54 = (long)ppppppplStack_118 - (long)ppppppplVar95 >> 3;
                      if (uVar54 <= uVar72) {
                        uVar54 = uVar72;
                      }
                      if (0x7fffffffffffffef <
                          (ulong)((long)ppppppplStack_118 - (long)ppppppplVar95)) {
                        uVar54 = 0xfffffffffffffff;
                      }
                      ppppppplVar94 = (long *******)&ppppppplStack_128;
                      ppppppplVar95 = (long *******)&ppppppplStack_128;
                      FUN_10a34d630();
                      plVar70 = (long *)((long)ppppppplVar95 + lVar53);
                      ppplVar47 = pppplVar55[1];
                      ppplVar80 = *pppplVar55;
                      plVar70[1] = (long)pppplVar55[1];
                      *plVar70 = (long)ppplVar80;
                      if (ppplVar47 != (long ***)0x0) {
                        ppplVar47 = ppplVar47 + 2;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppplVar47,0x10);
                          if (bVar22) {
                            *ppplVar47 = (long **)((long)*ppplVar47 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      ppppppplVar76 = (long *******)(plVar70 + 2);
                      ppppppplVar71 =
                           (long *******)
                           ((long)plVar70 - ((long)ppppppplStack_120 - (long)ppppppplStack_128));
                      ppppppplVar38 = ppppppplStack_128;
                      _memcpy(ppppppplVar71);
                      ppppppplStack_b0 = ppppppplStack_128;
                      ppppppplStack_a8 = ppppppplStack_118;
                      uStack_c0._0_1_ = SUB81(ppppppplStack_128,0);
                      uStack_c0._1_5_ = (undefined5)((ulong)ppppppplStack_128 >> 8);
                      uStack_c0._6_2_ = (undefined2)((ulong)ppppppplStack_128 >> 0x30);
                      uStack_b8 = SUB86(ppppppplStack_128,0);
                      ppppppplStack_128 = ppppppplVar71;
                      ppppppplStack_120 = ppppppplVar76;
                      ppppppplStack_118 = ppppppplVar95 + uVar54 * 2;
                      uStack_b2 = uStack_c0._6_2_;
                      FUN_10a35a1bc(&uStack_c0);
                    }
                    ppppppplVar95 = ppppppplStack_128;
                    ppppppplStack_120 = ppppppplVar76;
                  }
                  if ((long ********)(*plVar30 + 0x50) != &ppppppplStack_128) {
                    FUN_10a34d2ec();
                    ppppppplVar38 = ppppppplVar95;
                  }
                  uStack_c0._0_1_ = SUB81(&ppppppplStack_128,0);
                  uStack_c0._1_5_ = (undefined5)((ulong)&ppppppplStack_128 >> 8);
                  uStack_c0._6_2_ = (undefined2)((ulong)&ppppppplStack_128 >> 0x30);
                  FUN_10a34c804(&uStack_c0);
                  ppppppplStack_168 = (long *******)param_1[0xc3];
                  ppppppplStack_160 = (long *******)param_1[0xc4];
                  ppppppplVar95 = ppppppplStack_168;
                  if (ppppppplStack_160 != (long *******)0x0) {
                    ppppppplVar95 = ppppppplStack_160 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar95,0x10);
                      if (bVar22) {
                        *ppppppplVar95 = (long ******)((long)*ppppppplVar95 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    ppppppplVar95 = (long *******)*plVar30;
                  }
                  (*(code *)(*ppppppplVar95)[7])();
                  FUN_10a90876c(&uStack_c0,&ppppppplStack_168,ppppppplVar95,ppppppplVar38);
                  if (*(char *)((long)param_1 + 0x63f) < '\0') {
                    __ZdlPv(*plVar49);
                  }
                  ppppppplVar95 = ppppppplStack_a8;
                  param_1[0xc6] = CONCAT26(uStack_b2,uStack_b8);
                  *plVar49 = CONCAT26(uStack_c0._6_2_,
                                      CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                  param_1[199] = (long)ppppppplStack_b0;
                  ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                  uStack_c0._0_1_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  ppppppplVar38 = (long *******)0x0;
                  lVar53 = param_1[0xc9];
                  param_1[0xc9] = (long)ppppppplVar94;
                  param_1[200] = (long)ppppppplVar95;
                  if (lVar53 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0xca,&stack0xffffffffffffff68);
                  if (pppppplVar68 != (long ******)0x0) {
                    pppppplVar52 = pppppplVar68 + 1;
                    do {
                      ppppplVar33 = *pppppplVar52;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                      if (bVar22) {
                        *pppppplVar52 = (long *****)((long)ppppplVar33 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar33 == (long *****)0x0) {
                      (*(code *)(*pppppplVar68)[2])(pppppplVar68);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar68);
                    }
                  }
                  ppppppplVar94 = ppppppplStack_160;
                  if (ppppppplStack_160 != (long *******)0x0) {
                    ppppppplVar95 = ppppppplStack_160 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar95;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar95,0x10);
                      if (bVar22) {
                        *ppppppplVar95 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplStack_160)[2])(ppppppplStack_160);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                    }
                  }
                  ppppppplVar94 = ppppppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f682589);
                  puVar37 = (undefined1 *)&uStack_c0;
                  FUN_10a39a09c(ppppppplVar94,puVar37,plVar49);
                  func_0x00010a0fda30();
                  FUN_10a91a250(&uStack_c0,ppppppplVar94,puVar37);
                  FUN_10a908708(plVar44,&uStack_c0);
                  plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  ppppppplStack_120 = (long *******)0x0;
                  ppppppplStack_128 = (long *******)0x0;
                  ppppppplStack_118 = (long *******)0x0;
                  lVar53 = param_1[0x9e];
                  ppppppplVar94 =
                       (long *******)(*(long *)(lVar53 + 0xe8) - *(long *)(lVar53 + 0xe0) >> 4);
                  FUN_10a904f5c(&ppppppplStack_128,ppppppplVar94);
                  puVar39 = *(undefined8 **)(lVar53 + 0xe8);
                  ppppppplVar95 = ppppppplStack_128;
                  for (puVar32 = *(undefined8 **)(lVar53 + 0xe0); ppppppplStack_128 = ppppppplVar95,
                      puVar32 != puVar39; puVar32 = puVar32 + 2) {
                    if (ppppppplStack_120 < ppppppplStack_118) {
                      lVar53 = puVar32[1];
                      pppppplVar52 = (long ******)*puVar32;
                      ppppppplStack_120[1] = (long ******)puVar32[1];
                      *ppppppplStack_120 = pppppplVar52;
                      if (lVar53 != 0) {
                        plVar70 = (long *)(lVar53 + 0x10);
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                          if (bVar22) {
                            *plVar70 = *plVar70 + 1;
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      ppppppplVar76 = ppppppplStack_120 + 2;
                    }
                    else {
                      lVar53 = (long)ppppppplStack_120 - (long)ppppppplVar95;
                      uVar72 = (lVar53 >> 4) + 1;
                      if (uVar72 >> 0x3c != 0) {
                        FUN_10a34d61c();
                        goto LAB_10a907c3c;
                      }
                      uVar54 = (long)ppppppplStack_118 - (long)ppppppplVar95 >> 3;
                      if (uVar54 <= uVar72) {
                        uVar54 = uVar72;
                      }
                      if (0x7fffffffffffffef <
                          (ulong)((long)ppppppplStack_118 - (long)ppppppplVar95)) {
                        uVar54 = 0xfffffffffffffff;
                      }
                      ppppppplVar38 = (long *******)&ppppppplStack_128;
                      ppppppplVar95 = (long *******)&ppppppplStack_128;
                      FUN_10a34d630();
                      puVar40 = (undefined8 *)((long)ppppppplVar95 + lVar53);
                      lVar53 = puVar32[1];
                      uVar69 = *puVar32;
                      puVar40[1] = puVar32[1];
                      *puVar40 = uVar69;
                      if (lVar53 != 0) {
                        plVar70 = (long *)(lVar53 + 0x10);
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                          if (bVar22) {
                            *plVar70 = *plVar70 + 1;
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      ppppppplVar76 = (long *******)(puVar40 + 2);
                      ppppppplVar71 =
                           (long *******)
                           ((long)puVar40 - ((long)ppppppplStack_120 - (long)ppppppplStack_128));
                      ppppppplVar94 = ppppppplStack_128;
                      _memcpy(ppppppplVar71);
                      ppppppplStack_b0 = ppppppplStack_128;
                      ppppppplStack_a8 = ppppppplStack_118;
                      uStack_c0._0_1_ = SUB81(ppppppplStack_128,0);
                      uStack_c0._1_5_ = (undefined5)((ulong)ppppppplStack_128 >> 8);
                      uStack_c0._6_2_ = (undefined2)((ulong)ppppppplStack_128 >> 0x30);
                      uStack_b8 = SUB86(ppppppplStack_128,0);
                      ppppppplStack_128 = ppppppplVar71;
                      ppppppplStack_120 = ppppppplVar76;
                      ppppppplStack_118 = ppppppplVar95 + uVar54 * 2;
                      uStack_b2 = uStack_c0._6_2_;
                      FUN_10a35a1bc(&uStack_c0);
                    }
                    ppppppplVar95 = ppppppplStack_128;
                    ppppppplStack_120 = ppppppplVar76;
                  }
                  if ((long ********)(*plVar44 + 0x50) != &ppppppplStack_128) {
                    FUN_10a34d2ec();
                    ppppppplVar94 = ppppppplVar95;
                  }
                  uStack_c0._0_1_ = SUB81(&ppppppplStack_128,0);
                  uStack_c0._1_5_ = (undefined5)((ulong)&ppppppplStack_128 >> 8);
                  uStack_c0._6_2_ = (undefined2)((ulong)&ppppppplStack_128 >> 0x30);
                  FUN_10a34c804(&uStack_c0);
                  plStack_178 = (long *)param_1[0xcd];
                  plStack_180 = (long *)param_1[0xcc];
                  plVar70 = plStack_180;
                  if (param_1[0xcd] != 0) {
                    plVar70 = (long *)(param_1[0xcd] + 8);
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                      if (bVar22) {
                        *plVar70 = *plVar70 + 1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    plVar70 = (long *)*plVar44;
                  }
                  (**(code **)(*plVar70 + 0x38))();
                  FUN_10a90876c(&uStack_c0,&plStack_180,plVar70,ppppppplVar94);
                  if (*(char *)((long)param_1 + 0x687) < '\0') {
                    __ZdlPv(*plVar1);
                  }
                  ppppppplVar94 = ppppppplStack_a8;
                  param_1[0xcf] = CONCAT26(uStack_b2,uStack_b8);
                  *plVar1 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0)
                                    );
                  param_1[0xd0] = (long)ppppppplStack_b0;
                  ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                  uStack_c0._0_1_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  lVar53 = param_1[0xd2];
                  param_1[0xd2] = (long)ppppppplVar38;
                  param_1[0xd1] = (long)ppppppplVar94;
                  if (lVar53 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0xd3,&stack0xffffffffffffff68);
                  if (pppppplVar68 != (long ******)0x0) {
                    pppppplVar52 = pppppplVar68 + 1;
                    do {
                      ppppplVar33 = *pppppplVar52;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                      if (bVar22) {
                        *pppppplVar52 = (long *****)((long)ppppplVar33 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar33 == (long *****)0x0) {
                      (*(code *)(*pppppplVar68)[2])(pppppplVar68);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar68);
                    }
                  }
                  plVar70 = plStack_178;
                  if (plStack_178 != (long *)0x0) {
                    plVar67 = plStack_178 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plStack_178 + 0x10))(plStack_178);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  ppppppplVar94 = ppppppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f682599);
                  puVar37 = (undefined1 *)&uStack_c0;
                  FUN_10a39a09c(ppppppplVar94,puVar37,plVar1);
                  func_0x00010a0fda30();
                  puVar32 = (undefined8 *)0x80;
                  __Znwm();
                  puVar32[1] = 0;
                  puVar32[2] = 0;
                  *puVar32 = &PTR_FUN_110bddf98;
                  *(undefined1 *)(puVar32 + 4) = 0;
                  puVar32[7] = 0;
                  puVar32[6] = 0;
                  puVar32[9] = 0;
                  puVar32[8] = 0;
                  puVar32[0xc] = puVar37;
                  puVar32[0xd] = 0;
                  puVar32[0xe] = 0;
                  puVar32[0xf] = 0;
                  puVar39 = puVar32 + 3;
                  *puVar39 = &PTR_DAT_110bdade8;
                  puVar32[5] = &PTR_DAT_110bdae70;
                  puVar32[10] = &PTR_FUN_110bdaec8;
                  puVar32[0xb] = ppppppplVar94;
                  uStack_c0._0_1_ = SUB81(puVar39,0);
                  uStack_c0._1_5_ = (undefined5)((ulong)puVar39 >> 8);
                  uStack_c0._6_2_ = (undefined2)((ulong)puVar39 >> 0x30);
                  uStack_b8 = SUB86(puVar32,0);
                  uStack_b2 = (undefined2)((ulong)puVar32 >> 0x30);
                  FUN_10a494be0(&uStack_c0);
                  lVar66 = CONCAT26(uStack_b2,uStack_b8);
                  lVar53 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0))
                  ;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  plVar70 = (long *)param_1[0xd6];
                  param_1[0xd6] = lVar66;
                  param_1[0xd5] = lVar53;
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  ppppplVar33 = ppppplStack_e8;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  ppppppplStack_b0 = (long *******)0x0;
                  lVar53 = (long)ppppplStack_e8[10] - (long)ppppplStack_e8[9] >> 4;
                  func_0x000107c27e9c(&uStack_c0,lVar53);
                  if (ppppplVar33[10] != ppppplVar33[9]) {
                    uVar72 = 0;
                    do {
                      FUN_10a942378(&ppppppplStack_128,ppppplStack_e8,uVar72);
                      FUN_10a904d90(&ppppppplStack_1a0,param_1,ppppppplVar60,&ppppppplStack_128);
                      uStack_1a8 = (long ******)
                                   CONCAT44((int)ppppppplStack_198,(undefined4)uStack_1a8);
                      lVar53 = (long)&uStack_1a8 + 4;
                      FUN_109febd04(&uStack_c0,lVar53);
                      if ((long)ppppppplStack_118 < 0) {
                        __ZdlPv(ppppppplStack_128);
                      }
                      uVar72 = uVar72 + 1;
                    } while (uVar72 < (ulong)((long)ppppplVar33[10] - (long)ppppplVar33[9] >> 4));
                  }
                  if ((undefined8 *)(param_1[0xd5] + 0x50) != &uStack_c0) {
                    lVar53 = CONCAT26(uStack_c0._6_2_,
                                      CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                    FUN_10a0ea4a0();
                  }
                  if (CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0)) != 0
                     ) {
                    uStack_b2 = uStack_c0._6_2_;
                    uStack_b8 = CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0);
                    __ZdlPv();
                  }
                  plVar67 = (long *)param_1[0xd5];
                  pppppplVar52 = (long ******)param_1[0xd6];
                  plVar70 = plVar67;
                  if (pppppplVar52 != (long ******)0x0) {
                    pppppplVar68 = pppppplVar52 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                      if (bVar22) {
                        *pppppplVar68 = (long *****)((long)*pppppplVar68 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    plVar70 = (long *)param_1[0xd5];
                  }
                  plStack_1b8 = plVar67;
                  pppppplStack_1b0 = pppppplVar52;
                  (**(code **)(*plVar70 + 0x38))();
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  ppppppplStack_b0 = (long *******)0x0;
                  func_0x000107c2c4d8(&uStack_c0,plVar70,lVar53);
                  if (pppppplVar52 != (long ******)0x0) {
                    pppppplVar68 = pppppplVar52 + 2;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                      if (bVar22) {
                        *pppppplVar68 = (long *****)((long)*pppppplVar68 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                  }
                  plVar70 = plVar67 + 2;
                  ppppppplStack_a8 = (long *******)plVar67;
                  (**(code **)(*plVar70 + 0x18))();
                  pppppplVar68 = (long ******)0x0;
                  if ((((ulong)plVar70 & 1) == 0) &&
                     (pppppplVar68 = pppppplVar52, pppppplVar52 != (long ******)0x0)) {
                    pppppplVar26 = pppppplVar52 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                      if (bVar22) {
                        *pppppplVar26 = (long *****)((long)*pppppplVar26 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                  }
                  if (*(char *)((long)param_1 + 0x6cf) < '\0') {
                    __ZdlPv(*plVar2);
                  }
                  ppppppplVar94 = ppppppplStack_a8;
                  param_1[0xd8] = CONCAT26(uStack_b2,uStack_b8);
                  *plVar2 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0)
                                    );
                  param_1[0xd9] = (long)ppppppplStack_b0;
                  ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                  uStack_c0._0_1_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  lVar53 = param_1[0xdb];
                  param_1[0xdb] = (long)pppppplVar52;
                  param_1[0xda] = (long)ppppppplVar94;
                  if (lVar53 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0xdc,&stack0xffffffffffffff68);
                  if (pppppplVar68 != (long ******)0x0) {
                    pppppplVar52 = pppppplVar68 + 1;
                    do {
                      ppppplVar33 = *pppppplVar52;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                      if (bVar22) {
                        *pppppplVar52 = (long *****)((long)ppppplVar33 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar33 == (long *****)0x0) {
                      (*(code *)(*pppppplVar68)[2])(pppppplVar68);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar68);
                    }
                  }
                  pppppplVar52 = pppppplStack_1b0;
                  if (pppppplStack_1b0 != (long ******)0x0) {
                    pppppplVar68 = pppppplStack_1b0 + 1;
                    do {
                      ppppplVar33 = *pppppplVar68;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                      if (bVar22) {
                        *pppppplVar68 = (long *****)((long)ppppplVar33 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar33 == (long *****)0x0) {
                      (*(code *)(*pppppplStack_1b0)[2])(pppppplStack_1b0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar52);
                    }
                  }
                  ppppppplVar94 = ppppppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f6825a7);
                  puVar37 = (undefined1 *)&uStack_c0;
                  FUN_10a39a09c(ppppppplVar94,puVar37,plVar2);
                  func_0x00010a0fda30();
                  puVar32 = (undefined8 *)0x80;
                  __Znwm();
                  puVar32[1] = 0;
                  puVar32[2] = 0;
                  *puVar32 = &PTR_FUN_110bddfe8;
                  *(undefined1 *)(puVar32 + 4) = 0;
                  puVar32[7] = 0;
                  puVar32[6] = 0;
                  puVar32[9] = 0;
                  puVar32[8] = 0;
                  puVar32[0xc] = puVar37;
                  puVar32[0xd] = 0;
                  puVar32[0xe] = 0;
                  puVar32[0xf] = 0;
                  puVar39 = puVar32 + 3;
                  *puVar39 = &PTR_DAT_110bdaee8;
                  puVar32[5] = &PTR_DAT_110bdaf70;
                  puVar32[10] = &PTR_FUN_110bdafc8;
                  puVar32[0xb] = ppppppplVar94;
                  uStack_c0._0_1_ = SUB81(puVar39,0);
                  uStack_c0._1_5_ = (undefined5)((ulong)puVar39 >> 8);
                  uStack_c0._6_2_ = (undefined2)((ulong)puVar39 >> 0x30);
                  uStack_b8 = SUB86(puVar32,0);
                  uStack_b2 = (undefined2)((ulong)puVar32 >> 0x30);
                  FUN_10a494d28(&uStack_c0);
                  lVar66 = CONCAT26(uStack_b2,uStack_b8);
                  lVar53 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0))
                  ;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  plVar70 = (long *)param_1[0xdf];
                  param_1[0xdf] = lVar66;
                  param_1[0xde] = lVar53;
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  ppppplVar33 = ppppplStack_e8;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  ppppppplStack_b0 = (long *******)0x0;
                  func_0x000104becb10(&uStack_c0,
                                      (long)ppppplStack_e8[10] - (long)ppppplStack_e8[9] >> 4);
                  if (ppppplVar33[10] != ppppplVar33[9]) {
                    uVar72 = 0;
                    do {
                      FUN_10a942378(&ppppppplStack_128,ppppplStack_e8,uVar72);
                      FUN_10a904d90(&ppppppplStack_1a0,param_1,ppppppplVar60,&ppppppplStack_128);
                      func_0x0001078db3d4(&uStack_c0,&ppppppplStack_1a0);
                      if ((long)ppppppplStack_118 < 0) {
                        __ZdlPv(ppppppplStack_128);
                      }
                      uVar72 = uVar72 + 1;
                    } while (uVar72 < (ulong)((long)ppppplVar33[10] - (long)ppppplVar33[9] >> 4));
                  }
                  puVar37 = (undefined1 *)&uStack_c0;
                  func_0x000108b0402c(param_1[0xde] + 0x50,puVar37);
                  if (CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0)) != 0
                     ) {
                    __ZdlPv();
                  }
                  ppppppplVar38 = (long *******)param_1[0xde];
                  ppppppplVar76 = (long *******)param_1[0xdf];
                  ppppppplVar94 = ppppppplVar38;
                  if (ppppppplVar76 != (long *******)0x0) {
                    ppppppplVar94 = ppppppplVar76 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                      if (bVar22) {
                        *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    ppppppplVar94 = (long *******)param_1[0xde];
                  }
                  ppppppplStack_1c8 = ppppppplVar38;
                  ppppppplStack_1c0 = ppppppplVar76;
                  (*(code *)(*ppppppplVar94)[7])();
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  ppppppplStack_b0 = (long *******)0x0;
                  func_0x000107c2c4d8(&uStack_c0,ppppppplVar94,puVar37);
                  if (ppppppplVar76 != (long *******)0x0) {
                    ppppppplVar94 = ppppppplVar76 + 2;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                      if (bVar22) {
                        *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                  }
                  ppppppplVar95 = ppppppplVar38 + 2;
                  ppppppplStack_a8 = ppppppplVar38;
                  (*(code *)(*ppppppplVar95)[3])();
                  ppppppplVar94 = (long *******)0x0;
                  if ((((ulong)ppppppplVar95 & 1) == 0) &&
                     (ppppppplVar94 = ppppppplVar76, ppppppplVar76 != (long *******)0x0)) {
                    ppppppplVar38 = ppppppplVar76 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                      if (bVar22) {
                        *ppppppplVar38 = (long ******)((long)*ppppppplVar38 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                  }
                  if (*(char *)((long)param_1 + 0x717) < '\0') {
                    __ZdlPv(*plVar3);
                  }
                  ppppppplVar38 = ppppppplStack_a8;
                  param_1[0xe1] = CONCAT26(uStack_b2,uStack_b8);
                  *plVar3 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0)
                                    );
                  param_1[0xe2] = (long)ppppppplStack_b0;
                  ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                  uStack_c0._0_1_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  ppppppplVar95 = (long *******)0x0;
                  lVar53 = param_1[0xe4];
                  param_1[0xe4] = (long)ppppppplVar76;
                  param_1[0xe3] = (long)ppppppplVar38;
                  if (lVar53 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0xe5,&stack0xffffffffffffff68);
                  if (ppppppplVar94 != (long *******)0x0) {
                    ppppppplVar38 = ppppppplVar94 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar38;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                      if (bVar22) {
                        *ppppppplVar38 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplVar94)[2])(ppppppplVar94);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                    }
                  }
                  ppppppplVar38 = ppppppplStack_1c0;
                  if (ppppppplStack_1c0 != (long *******)0x0) {
                    ppppppplVar76 = ppppppplStack_1c0 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar76;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                      if (bVar22) {
                        *ppppppplVar76 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplStack_1c0)[2])(ppppppplStack_1c0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar38);
                    }
                  }
                  ppppppplVar38 = ppppppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f6825b5);
                  FUN_10a39a09c(ppppppplVar38,&uStack_c0,plVar3);
                }
                (*(code *)(*ppppppplStack_110)[0xd])(ppppppplStack_110,1);
                uVar69 = 1;
                lVar53 = lVar65;
                func_0x00010a3e4590(lVar65,1);
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_c0,lVar53,uVar69);
                puVar37 = (undefined1 *)&uStack_c0;
                plVar67 = param_1 + 0xe7;
                FUN_10a908864();
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                puVar32 = (undefined8 *)0xa8;
                __Znwm();
                puVar32[0xe] = 0;
                puVar32[0xd] = 0x3f800000;
                puVar32[0x10] = 0;
                puVar32[0xf] = 0x3f80000000000000;
                puVar32[0x12] = 0x3f800000;
                puVar32[0x11] = 0;
                puVar32[1] = 0;
                puVar32[2] = 0;
                *puVar32 = &PTR_DAT_110bdde08;
                *(undefined1 *)(puVar32 + 4) = 0;
                puVar32[7] = 0;
                puVar32[6] = 0;
                puVar39 = puVar32 + 8;
                puVar32[9] = 0;
                *puVar39 = 0;
                puVar32[0xb] = plVar67;
                puVar32[0xc] = puVar37;
                puVar32[0x14] = 0x3f80000000000000;
                puVar32[0x13] = 0;
                puVar40 = puVar32 + 3;
                *puVar40 = &PTR_FUN_110bda668;
                puVar32[5] = &PTR_FUN_110bda6f0;
                puVar32[10] = &PTR_DAT_110bda748;
                uStack_c0._0_1_ = SUB81(puVar40,0);
                uStack_c0._1_5_ = (undefined5)((ulong)puVar40 >> 8);
                uStack_c0._6_2_ = (undefined2)((ulong)puVar40 >> 0x30);
                uStack_b8 = SUB86(puVar32,0);
                uStack_b2 = (undefined2)((ulong)puVar32 >> 0x30);
                plVar70 = &uStack_c0;
                FUN_10a4945bc(plVar70);
                lVar66 = CONCAT26(uStack_b2,uStack_b8);
                lVar53 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                uStack_c0._0_1_ = 0;
                uStack_c0._1_5_ = 0;
                uStack_c0._6_2_ = 0;
                uStack_b8 = 0;
                uStack_b2 = 0;
                plVar67 = (long *)param_1[0xea];
                param_1[0xea] = lVar66;
                param_1[0xe9] = lVar53;
                if (plVar67 != (long *)0x0) {
                  plVar11 = plVar67 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                    plVar70 = plVar67;
                  }
                }
                plVar67 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar67 != (long *)0x0) {
                  plVar11 = plVar67 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                    plVar70 = plVar67;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_c0,plVar70,puVar39);
                puVar37 = (undefined1 *)&uStack_c0;
                plVar67 = plVar4;
                FUN_10a908864(plVar4,puVar37);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_c0,plVar67,puVar37);
                puVar37 = (undefined1 *)&uStack_c0;
                plVar67 = plVar5;
                FUN_10a908864(plVar5,puVar37);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a368(&uStack_c0,plVar67,puVar37);
                puVar37 = (undefined1 *)&uStack_c0;
                plVar67 = plVar6;
                func_0x00010a9088c8(plVar6,puVar37);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_c0,plVar67,puVar37);
                puVar37 = (undefined1 *)&uStack_c0;
                plVar67 = plVar7;
                FUN_10a908864(plVar7,puVar37);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a368(&uStack_c0,plVar67,puVar37);
                puVar37 = (undefined1 *)&uStack_c0;
                plVar67 = plVar8;
                func_0x00010a9088c8(plVar8,puVar37);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a3f0(&uStack_c0,plVar67,puVar37);
                puVar37 = (undefined1 *)&uStack_c0;
                plVar67 = plVar9;
                func_0x00010a90892c(plVar9,puVar37);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a3f0(&uStack_c0,plVar67,puVar37);
                puVar37 = (undefined1 *)&uStack_c0;
                func_0x00010a90892c(param_1 + 0xf7,puVar37);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar67 = plVar70 + 1;
                  do {
                    lVar53 = *plVar67;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                    if (bVar22) {
                      *plVar67 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                  }
                }
                ppppplStack_1f8 = (long *****)param_1[0xe7];
                ppppplStack_1f0 = (long *****)param_1[0xe8];
                ppppplVar33 = ppppplStack_1f8;
                if (ppppplStack_1f0 != (long *****)0x0) {
                  ppppplVar33 = ppppplStack_1f0 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppplVar33,0x10);
                    if (bVar22) {
                      *ppppplVar33 = (long ****)((long)*ppppplVar33 + 1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  ppppplVar33 = (long *****)param_1[0xe7];
                }
                (*(code *)(*ppppplVar33)[7])();
                FUN_10a908990(&uStack_c0,&ppppplStack_1f8,ppppplVar33,puVar37);
                if (*(char *)((long)param_1 + 0x7df) < '\0') {
                  __ZdlPv(param_1[0xf9]);
                }
                ppppppplVar38 = ppppppplStack_a8;
                param_1[0xfa] = CONCAT26(uStack_b2,uStack_b8);
                param_1[0xf9] =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                param_1[0xfb] = (long)ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = param_1[0xfd];
                param_1[0xfd] = (long)ppppppplVar95;
                param_1[0xfc] = (long)ppppppplVar38;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar37 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0xfe,puVar37);
                if (ppppppplVar94 != (long *******)0x0) {
                  ppppppplVar38 = ppppppplVar94 + 1;
                  do {
                    pppppplVar52 = *ppppppplVar38;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                    if (bVar22) {
                      *ppppppplVar38 = (long ******)((long)pppppplVar52 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (pppppplVar52 == (long ******)0x0) {
                    (*(code *)(*ppppppplVar94)[2])(ppppppplVar94);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                  }
                }
                ppppplVar33 = ppppplStack_1f0;
                if (ppppplStack_1f0 != (long *****)0x0) {
                  ppppplVar34 = ppppplStack_1f0 + 1;
                  do {
                    pppplVar55 = *ppppplVar34;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppplVar34,0x10);
                    if (bVar22) {
                      *ppppplVar34 = (long ****)((long)pppplVar55 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (pppplVar55 == (long ****)0x0) {
                    (*(code *)(*ppppplStack_1f0)[2])(ppppplStack_1f0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar33);
                  }
                }
                pppppplVar68 = (long ******)param_1[0xe9];
                plVar70 = (long *)param_1[0xea];
                pppppplVar52 = pppppplVar68;
                if (plVar70 != (long *)0x0) {
                  plVar67 = plVar70 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                    if (bVar22) {
                      *plVar67 = *plVar67 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  pppppplVar52 = (long ******)param_1[0xe9];
                }
                pppppplStack_208 = pppppplVar68;
                plStack_200 = plVar70;
                (*(code *)(*pppppplVar52)[7])();
                uStack_b8 = 0;
                uStack_b2 = 0;
                uStack_c0._0_1_ = 0;
                uStack_c0._1_5_ = 0;
                uStack_c0._6_2_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                ppppppplStack_b0 = (long *******)0x0;
                func_0x000107c2c4d8(&uStack_c0,pppppplVar52,puVar37);
                if (plVar70 != (long *)0x0) {
                  plVar67 = plVar70 + 2;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                    if (bVar22) {
                      *plVar67 = *plVar67 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                }
                pppppplVar52 = pppppplVar68 + 2;
                ppppppplStack_a8 = (long *******)pppppplVar68;
                (*(code *)(*pppppplVar52)[3])();
                plVar67 = (long *)0x0;
                if ((((ulong)pppppplVar52 & 1) == 0) && (plVar67 = plVar70, plVar70 != (long *)0x0))
                {
                  plVar11 = plVar70 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = *plVar11 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                }
                if (*(char *)((long)param_1 + 0x817) < '\0') {
                  __ZdlPv(param_1[0x100]);
                }
                ppppppplVar94 = ppppppplStack_a8;
                param_1[0x101] = CONCAT26(uStack_b2,uStack_b8);
                param_1[0x100] =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                param_1[0x102] = (long)ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = param_1[0x104];
                param_1[0x104] = (long)plVar70;
                param_1[0x103] = (long)ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar37 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x105,puVar37);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                plVar70 = plStack_200;
                if (plStack_200 != (long *)0x0) {
                  plVar11 = plStack_200 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plStack_200 + 0x10))(plStack_200);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                  }
                }
                plStack_218 = (long *)param_1[0xeb];
                pppppplStack_210 = (long ******)param_1[0xec];
                plVar70 = plStack_218;
                if (pppppplStack_210 != (long ******)0x0) {
                  pppppplVar52 = pppppplStack_210 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                    if (bVar22) {
                      *pppppplVar52 = (long *****)((long)*pppppplVar52 + 1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  plVar70 = (long *)*plVar4;
                }
                (**(code **)(*plVar70 + 0x38))();
                FUN_10a908990(&uStack_c0,&plStack_218,plVar70,puVar37);
                if (*(char *)((long)param_1 + 0x84f) < '\0') {
                  __ZdlPv(param_1[0x107]);
                }
                ppppppplVar94 = ppppppplStack_a8;
                param_1[0x108] = CONCAT26(uStack_b2,uStack_b8);
                param_1[0x107] =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                param_1[0x109] = (long)ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = param_1[0x10b];
                param_1[0x10b] = 0;
                param_1[0x10a] = (long)ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar37 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x10c,puVar37);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                pppppplVar52 = pppppplStack_210;
                if (pppppplStack_210 != (long ******)0x0) {
                  pppppplVar68 = pppppplStack_210 + 1;
                  do {
                    ppppplVar33 = *pppppplVar68;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                    if (bVar22) {
                      *pppppplVar68 = (long *****)((long)ppppplVar33 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (ppppplVar33 == (long *****)0x0) {
                    (*(code *)(*pppppplStack_210)[2])(pppppplStack_210);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar52);
                  }
                }
                pplStack_228 = (long **)param_1[0xed];
                plStack_220 = (long *)param_1[0xee];
                pplVar35 = pplStack_228;
                if (plStack_220 != (long *)0x0) {
                  plVar70 = plStack_220 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = *plVar70 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  pplVar35 = (long **)*plVar5;
                }
                (*(code *)(*pplVar35)[7])();
                FUN_10a908990(&uStack_c0,&pplStack_228,pplVar35,puVar37);
                if (*(char *)((long)param_1 + 0x887) < '\0') {
                  __ZdlPv(param_1[0x10e]);
                }
                ppppppplVar94 = ppppppplStack_a8;
                param_1[0x10f] = CONCAT26(uStack_b2,uStack_b8);
                param_1[0x10e] =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                param_1[0x110] = (long)ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = param_1[0x112];
                param_1[0x112] = 0;
                param_1[0x111] = (long)ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar37 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x113,puVar37);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                plVar70 = plStack_220;
                if (plStack_220 != (long *)0x0) {
                  plVar11 = plStack_220 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plStack_220 + 0x10))(plStack_220);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                  }
                }
                plStack_238 = (long *)param_1[0xef];
                plStack_230 = (long *)param_1[0xf0];
                plVar70 = plStack_238;
                if (plStack_230 != (long *)0x0) {
                  plVar70 = plStack_230 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = *plVar70 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  plVar70 = (long *)*plVar6;
                }
                (**(code **)(*plVar70 + 0x38))();
                FUN_10a908a88(&uStack_c0,&plStack_238,plVar70,puVar37);
                if (*(char *)((long)param_1 + 0x8bf) < '\0') {
                  __ZdlPv(param_1[0x115]);
                }
                ppppppplVar94 = ppppppplStack_a8;
                param_1[0x116] = CONCAT26(uStack_b2,uStack_b8);
                param_1[0x115] =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                param_1[0x117] = (long)ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = param_1[0x119];
                param_1[0x119] = 0;
                param_1[0x118] = (long)ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar37 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x11a,puVar37);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                plVar70 = plStack_230;
                if (plStack_230 != (long *)0x0) {
                  plVar11 = plStack_230 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plStack_230 + 0x10))(plStack_230);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                  }
                }
                pplStack_248 = (long **)param_1[0xf1];
                pppppplStack_240 = (long ******)param_1[0xf2];
                pplVar35 = pplStack_248;
                if (pppppplStack_240 != (long ******)0x0) {
                  pppppplVar52 = pppppplStack_240 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                    if (bVar22) {
                      *pppppplVar52 = (long *****)((long)*pppppplVar52 + 1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  pplVar35 = (long **)*plVar7;
                }
                (*(code *)(*pplVar35)[7])();
                FUN_10a908990(&uStack_c0,&pplStack_248,pplVar35,puVar37);
                if (*(char *)((long)param_1 + 0x967) < '\0') {
                  __ZdlPv(param_1[0x12a]);
                }
                ppppppplVar94 = ppppppplStack_a8;
                param_1[299] = CONCAT26(uStack_b2,uStack_b8);
                param_1[0x12a] =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                param_1[300] = (long)ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = param_1[0x12e];
                param_1[0x12e] = 0;
                param_1[0x12d] = (long)ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar37 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x12f,puVar37);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                pppppplVar52 = pppppplStack_240;
                if (pppppplStack_240 != (long ******)0x0) {
                  pppppplVar68 = pppppplStack_240 + 1;
                  do {
                    ppppplVar33 = *pppppplVar68;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                    if (bVar22) {
                      *pppppplVar68 = (long *****)((long)ppppplVar33 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (ppppplVar33 == (long *****)0x0) {
                    (*(code *)(*pppppplStack_240)[2])(pppppplStack_240);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar52);
                  }
                }
                ppppplStack_258 = (long *****)param_1[0xf3];
                plStack_250 = (long *)param_1[0xf4];
                ppppplVar33 = ppppplStack_258;
                if (plStack_250 != (long *)0x0) {
                  plVar70 = plStack_250 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = *plVar70 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  ppppplVar33 = (long *****)*plVar8;
                }
                (*(code *)(*ppppplVar33)[7])();
                FUN_10a908a88(&uStack_c0,&ppppplStack_258,ppppplVar33,puVar37);
                if (*(char *)((long)param_1 + 0x99f) < '\0') {
                  __ZdlPv(param_1[0x131]);
                }
                ppppppplVar94 = ppppppplStack_a8;
                param_1[0x132] = CONCAT26(uStack_b2,uStack_b8);
                param_1[0x131] =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                param_1[0x133] = (long)ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = param_1[0x135];
                param_1[0x135] = 0;
                param_1[0x134] = (long)ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar37 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x136,puVar37);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                plVar70 = plStack_250;
                if (plStack_250 != (long *)0x0) {
                  plVar11 = plStack_250 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plStack_250 + 0x10))(plStack_250);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                  }
                }
                plStack_268 = (long *)param_1[0xf5];
                plStack_260 = (long *)param_1[0xf6];
                plVar70 = plStack_268;
                if (plStack_260 != (long *)0x0) {
                  plVar70 = plStack_260 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = *plVar70 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  plVar70 = (long *)*plVar9;
                }
                (**(code **)(*plVar70 + 0x38))();
                FUN_10a908b80(&uStack_c0,&plStack_268,plVar70,puVar37);
                if (*(char *)((long)param_1 + 0x8f7) < '\0') {
                  __ZdlPv(param_1[0x11c]);
                }
                ppppppplVar94 = ppppppplStack_a8;
                param_1[0x11d] = CONCAT26(uStack_b2,uStack_b8);
                param_1[0x11c] =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                param_1[0x11e] = (long)ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = param_1[0x120];
                param_1[0x120] = 0;
                param_1[0x11f] = (long)ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar37 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x121,puVar37);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                plVar70 = plStack_260;
                if (plStack_260 != (long *)0x0) {
                  plVar11 = plStack_260 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plStack_260 + 0x10))(plStack_260);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                  }
                }
                plStack_278 = (long *)param_1[0xf7];
                ppppplStack_270 = (long *****)param_1[0xf8];
                plVar70 = plStack_278;
                if (ppppplStack_270 != (long *****)0x0) {
                  ppppplVar33 = ppppplStack_270 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppplVar33,0x10);
                    if (bVar22) {
                      *ppppplVar33 = (long ****)((long)*ppppplVar33 + 1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  plVar70 = (long *)param_1[0xf7];
                }
                (**(code **)(*plVar70 + 0x38))();
                FUN_10a908b80(&uStack_c0,&plStack_278,plVar70,puVar37);
                if (*(char *)((long)param_1 + 0x92f) < '\0') {
                  __ZdlPv(*plVar93);
                }
                ppppppplVar94 = ppppppplStack_a8;
                plVar93[1] = CONCAT26(uStack_b2,uStack_b8);
                *plVar93 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0))
                ;
                plVar93[2] = (long)ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = param_1[0x127];
                param_1[0x127] = 0;
                param_1[0x126] = (long)ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                func_0x00010a328268(param_1 + 0x128,&stack0xffffffffffffff68);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                ppppplVar33 = ppppplStack_270;
                if (ppppplStack_270 != (long *****)0x0) {
                  ppppplVar34 = ppppplStack_270 + 1;
                  do {
                    pppplVar55 = *ppppplVar34;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppplVar34,0x10);
                    if (bVar22) {
                      *ppppplVar34 = (long ****)((long)pppplVar55 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (pppplVar55 == (long ****)0x0) {
                    (*(code *)(*ppppplStack_270)[2])(ppppplStack_270);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar33);
                  }
                }
                if (uStack_108 != (long *******)0x0) {
                  ppppppplVar94 = uStack_108 + 2;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                    if (bVar22) {
                      *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                }
                lVar53 = param_1[0xb9];
                param_1[0xb9] = (long)uStack_108;
                param_1[0xb8] = (long)ppppppplStack_110;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                func_0x00010a0d77bc(&uStack_c0,lVar65);
                plVar70 = param_1 + 0xac;
                ppppppplStack_128 = ppppppplVar60;
                FUN_10a91a478(plVar70,ppppppplVar60,&ppppppplStack_128);
                plVar67 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar67 != (long *)0x0) {
                  plVar11 = plVar67 + 2;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = *plVar11 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                }
                lVar53 = plVar70[8];
                plVar70[8] = CONCAT26(uStack_b2,uStack_b8);
                plVar70[7] = CONCAT26(uStack_c0._6_2_,
                                      CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv(lVar53);
                  plVar67 = (long *)CONCAT26(uStack_b2,uStack_b8);
                }
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                ppppppplVar60 = uStack_108;
                if (uStack_108 != (long *******)0x0) {
                  ppppppplVar94 = uStack_108 + 1;
                  do {
                    pppppplVar52 = *ppppppplVar94;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                    if (bVar22) {
                      *ppppppplVar94 = (long ******)((long)pppppplVar52 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (pppppplVar52 == (long ******)0x0) {
                    (*(code *)(*uStack_108)[2])(uStack_108);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
                  }
                }
              }
              ppppplVar33 = ppppplStack_f0;
              if (ppppplStack_f0 != (long *****)0x0) {
                ppppplVar34 = ppppplStack_f0 + 1;
                do {
                  pppplVar55 = *ppppplVar34;
                  cVar20 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(ppppplVar34,0x10);
                  if (bVar22) {
                    *ppppplVar34 = (long ****)((long)pppplVar55 + -1);
                    cVar20 = ExclusiveMonitorsStatus();
                  }
                } while (cVar20 != '\0');
                if (pppplVar55 == (long ****)0x0) {
                  (*(code *)(*ppppplStack_f0)[2])(ppppplStack_f0);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar33);
                }
              }
            }
            ppppppplVar60 = ppppppplStack_e0;
            if (ppppppplStack_e0 != (long *******)0x0) {
              ppppppplVar94 = ppppppplStack_e0 + 1;
              do {
                pppppplVar52 = *ppppppplVar94;
                cVar20 = '\x01';
                bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                if (bVar22) {
                  *ppppppplVar94 = (long ******)((long)pppppplVar52 + -1);
                  cVar20 = ExclusiveMonitorsStatus();
                }
              } while (cVar20 != '\0');
              if (pppppplVar52 == (long ******)0x0) {
                (*(code *)(*ppppppplStack_e0)[2])(ppppppplStack_e0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
              }
            }
          }
          ppppppplVar60 = (long *******)ppppppplVar48[1];
          ppppppplVar94 = ppppppplVar48;
          if ((long *******)ppppppplVar48[1] == (long *******)0x0) {
            do {
              ppppppplVar48 = (long *******)ppppppplVar94[2];
              bVar22 = (long *******)*ppppppplVar48 != ppppppplVar94;
              ppppppplVar94 = ppppppplVar48;
            } while (bVar22);
          }
          else {
            do {
              ppppppplVar48 = ppppppplVar60;
              ppppppplVar60 = (long *******)*ppppppplVar48;
            } while ((long *******)*ppppppplVar48 != (long *******)0x0);
          }
        } while (ppppppplVar48 != &pppppplStack_d0);
      }
      func_0x000107c27bf0(&ppppppplStack_d8,pppppplStack_d0);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar46) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a0edfc4(&uStack_c0);
LAB_10a907c3c:
                    /* WARNING: Does not return */
  pcVar21 = (code *)SoftwareBreakpoint(1,0x10a907c40);
  (*pcVar21)();
code_r0x00010a9015a4:
  puVar32 = puVar32 + 2;
  goto LAB_10a90158c;
}



/* Entry: 10a901228; end: 10a903507;  */

/* WARNING: Removing unreachable block (ram,0x00010a906128) */
/* WARNING: Removing unreachable block (ram,0x00010a905a0c) */
/* WARNING: Removing unreachable block (ram,0x00010a9059a0) */
/* WARNING: Removing unreachable block (ram,0x00010a907420) */
/* WARNING: Removing unreachable block (ram,0x00010a906a94) */
/* WARNING: Removing unreachable block (ram,0x00010a905684) */
/* WARNING: Removing unreachable block (ram,0x00010a9053e0) */
/* WARNING: Removing unreachable block (ram,0x00010a905260) */
/* WARNING: Removing unreachable block (ram,0x00010a905518) */
/* WARNING: Removing unreachable block (ram,0x00010a9068ec) */
/* WARNING: Removing unreachable block (ram,0x00010a906ff4) */
/* WARNING: Removing unreachable block (ram,0x00010a9078d0) */
/* WARNING: Removing unreachable block (ram,0x00010a9071c8) */
/* WARNING: Removing unreachable block (ram,0x00010a907678) */
/* WARNING: Removing unreachable block (ram,0x00010a905d84) */
/* WARNING: Removing unreachable block (ram,0x00010a9064cc) */
/* WARNING: Removing unreachable block (ram,0x00010a905d78) */
/* WARNING: Removing unreachable block (ram,0x00010a9058d4) */
/* WARNING: Removing unreachable block (ram,0x00010a9058d8) */
/* WARNING: Removing unreachable block (ram,0x00010a9058e0) */
/* WARNING: Removing unreachable block (ram,0x00010a9058e8) */
/* WARNING: Removing unreachable block (ram,0x00010a9058ec) */
/* WARNING: Removing unreachable block (ram,0x00010a906454) */
/* WARNING: Removing unreachable block (ram,0x00010a905898) */
/* WARNING: Removing unreachable block (ram,0x00010a9071bc) */
/* WARNING: Removing unreachable block (ram,0x00010a907414) */
/* WARNING: Removing unreachable block (ram,0x00010a9078c4) */
/* WARNING: Removing unreachable block (ram,0x00010a905994) */
/* WARNING: Removing unreachable block (ram,0x00010a9070b8) */
/* WARNING: Removing unreachable block (ram,0x00010a905df0) */
/* WARNING: Removing unreachable block (ram,0x00010a9060b0) */
/* WARNING: Removing unreachable block (ram,0x00010a907540) */
/* WARNING: Removing unreachable block (ram,0x00010a9060bc) */
/* WARNING: Removing unreachable block (ram,0x00010a906358) */
/* WARNING: Removing unreachable block (ram,0x00010a9079f0) */
/* WARNING: Removing unreachable block (ram,0x00010a906394) */
/* WARNING: Removing unreachable block (ram,0x00010a906398) */
/* WARNING: Removing unreachable block (ram,0x00010a9063a0) */
/* WARNING: Removing unreachable block (ram,0x00010a9063a8) */
/* WARNING: Removing unreachable block (ram,0x00010a9063ac) */
/* WARNING: Removing unreachable block (ram,0x00010a906460) */
/* WARNING: Removing unreachable block (ram,0x00010a9066e0) */
/* WARNING: Removing unreachable block (ram,0x00010a90671c) */
/* WARNING: Removing unreachable block (ram,0x00010a906720) */
/* WARNING: Removing unreachable block (ram,0x00010a906728) */
/* WARNING: Removing unreachable block (ram,0x00010a906730) */
/* WARNING: Removing unreachable block (ram,0x00010a906734) */
/* WARNING: Removing unreachable block (ram,0x00010a9067e0) */
/* WARNING: Removing unreachable block (ram,0x00010a9067ec) */
/* WARNING: Removing unreachable block (ram,0x00010a906858) */
/* WARNING: Removing unreachable block (ram,0x00010a906fe8) */
/* WARNING: Removing unreachable block (ram,0x00010a9070f4) */
/* WARNING: Removing unreachable block (ram,0x00010a9070f8) */
/* WARNING: Removing unreachable block (ram,0x00010a907100) */
/* WARNING: Removing unreachable block (ram,0x00010a907108) */
/* WARNING: Removing unreachable block (ram,0x00010a90710c) */
/* WARNING: Removing unreachable block (ram,0x00010a9072e8) */
/* WARNING: Removing unreachable block (ram,0x00010a9072f4) */
/* WARNING: Removing unreachable block (ram,0x00010a90754c) */
/* WARNING: Removing unreachable block (ram,0x00010a90766c) */
/* WARNING: Removing unreachable block (ram,0x00010a907798) */
/* WARNING: Removing unreachable block (ram,0x00010a9077a4) */
/* WARNING: Removing unreachable block (ram,0x00010a9079fc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a901228(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *******ppppppplVar10;
  long *plVar11;
  undefined4 *puVar12;
  int iVar13;
  long ****pppplVar14;
  undefined4 uVar15;
  int iVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  uint uVar19;
  char cVar20;
  code *pcVar21;
  bool bVar22;
  uint uVar23;
  undefined **ppuVar24;
  byte *pbVar25;
  long ******pppppplVar26;
  long lVar27;
  long **pplVar28;
  long *****ppppplVar29;
  long *plVar30;
  long *plVar31;
  undefined8 *puVar32;
  long *****ppppplVar33;
  long *****ppppplVar34;
  long **pplVar35;
  uint uVar36;
  undefined1 *puVar37;
  long *******ppppppplVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  undefined8 in_x6;
  undefined8 in_x7;
  byte bVar41;
  int iVar42;
  undefined *puVar43;
  long *plVar44;
  long ******pppppplVar45;
  long lVar46;
  long ***ppplVar47;
  long *******ppppppplVar48;
  long *plVar49;
  ulong uVar50;
  long lVar51;
  long ******pppppplVar52;
  long lVar53;
  ulong uVar54;
  long ****pppplVar55;
  char *pcVar56;
  long ******pppppplVar57;
  ulong uVar58;
  uint uVar59;
  long *******ppppppplVar60;
  long ******pppppplVar61;
  long ****pppplVar62;
  uint uVar63;
  long *****ppppplVar64;
  long lVar65;
  long lVar66;
  long *plVar67;
  long ******pppppplVar68;
  undefined8 uVar69;
  long *plVar70;
  long *******ppppppplVar71;
  ulong uVar72;
  long ****pppplVar73;
  long lVar74;
  long ******pppppplVar75;
  long *******ppppppplVar76;
  long **pplVar77;
  float fVar78;
  undefined4 uVar79;
  long ***ppplVar80;
  float fVar81;
  undefined4 uVar82;
  float fVar83;
  undefined4 uVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined4 uVar89;
  float fVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  long *plVar93;
  long ******pppppplStack_2a8;
  long *****ppppplStack_280;
  long *plStack_278;
  long *****ppppplStack_270;
  long *plStack_268;
  long *plStack_260;
  long *****ppppplStack_258;
  long *plStack_250;
  long **pplStack_248;
  long ******pppppplStack_240;
  long *plStack_238;
  long *plStack_230;
  long **pplStack_228;
  long *plStack_220;
  long *plStack_218;
  long ******pppppplStack_210;
  long ******pppppplStack_208;
  long *plStack_200;
  long *****ppppplStack_1f8;
  long *****ppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  long *******ppppppplStack_1d8;
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c8;
  long *******ppppppplStack_1c0;
  long *plStack_1b8;
  long ******pppppplStack_1b0;
  undefined8 uStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  long lStack_190;
  long lStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  long *****ppppplStack_158;
  long ******pppppplStack_150;
  long *******ppppppplStack_148;
  long *******ppppppplStack_140;
  long *******ppppppplStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  undefined8 uStack_108;
  long *******ppppppplStack_100;
  long ******pppppplStack_f8;
  long *****ppppplStack_f0;
  long *****ppppplStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long ******pppppplStack_d0;
  long ******pppppplStack_c8;
  undefined8 uStack_c0;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplVar94;
  long *******ppppppplVar95;
  
  if (param_1[0x9e] == 0) {
    return;
  }
  if (0x177 < *(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18)) {
    FUN_10a907f80(param_1,0);
    if (param_1[0x2e] == 0) {
      ppuVar24 = &PTR___tlv_bootstrap_11340dee8;
      (*(code *)PTR___tlv_bootstrap_11340dee8)();
      puVar43 = *ppuVar24;
      if (puVar43 != (undefined *)0x0) goto LAB_10a901328;
      FUN_10a3ca004();
      pbVar25 = (byte *)0x113836510;
      FUN_10ad0621c();
      uVar72 = (ulong)(*pbVar25 >> 4 & 4);
      puVar43 = ppuVar24[uVar72 + 7];
      if (puVar43 != (undefined *)0x0) goto LAB_10a901328;
      FUN_10a3ca05c(ppuVar24,uVar72);
      puVar43 = ppuVar24[uVar72 + 7];
      uStack_170 = (long *******)&UNK_10f646d35;
      ppppppplStack_168 = (long *******)0x26;
    }
    else {
      puVar43 = *(undefined **)(*(long *)(param_1[0x2e] + 0x100) + 0x260);
      uStack_170 = (long *******)&UNK_10f653c20;
      ppppppplStack_168 = (long *******)0x21;
    }
    if (puVar43 != (undefined *)0x0) {
LAB_10a901328:
      plVar31 = *(long **)(puVar43 + 0x228);
      (**(code **)(*plVar31 + 0x68))();
      if (0xf < *(int *)((long)plVar31 + 0x8c)) {
        FUN_10a8fc8e8(&pplStack_228,param_1[0x9e]);
        pplStack_248 = &plStack_220;
        if (pplStack_228 != pplStack_248) {
          ppppppplVar48 = (long *******)(param_1 + 0xa9);
          pppppplVar52 = (long ******)(param_1 + 0xaa);
          plStack_278 = param_1 + 0x2a;
          uVar89 = 0x4b18967f;
          pplVar35 = pplStack_228;
          plStack_250 = param_1;
          do {
            lVar46 = param_1[0x9e];
            lVar51 = lVar46 + 0xf8;
            FUN_10a9176b0(lVar51,pplVar35 + 4);
            if (lVar46 + 0x100 != lVar51) {
              plVar31 = *(long **)(lVar51 + 0x38);
              plVar30 = *(long **)(lVar51 + 0x40);
              if (plVar30 != (long *)0x0) {
                plVar49 = plVar30 + 1;
                do {
                  cVar20 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar49,0x10);
                  if (bVar22) {
                    *plVar49 = *plVar49 + 1;
                    cVar20 = ExclusiveMonitorsStatus();
                  }
                } while (cVar20 != '\0');
              }
              plStack_238 = plVar31;
              plStack_230 = plVar30;
              if (plVar31 != (long *)0x0) {
                uVar36 = *(uint *)(plVar31 + 0x10);
                if (uVar36 < 0xf4241) {
                  ppppplStack_258 =
                       (long *****)
                       CONCAT44(ppppplStack_258._4_4_,*(undefined4 *)((long)plVar31 + 0x7c));
                  if (uVar36 < 2) {
                    uVar36 = 1;
                  }
                  fVar90 = *(float *)((long)plVar31 + 0x84);
                  lVar51 = plVar31[0x11];
                  uVar91 = *(undefined8 *)((long)plVar31 + 0x8c);
                  uVar17 = *(undefined1 *)((long)plVar31 + 0x94);
                  uVar18 = *(undefined1 *)((long)plVar31 + 0x95);
                  bVar41 = *(byte *)((long)plVar31 + 0x96);
                  pppppplStack_240 =
                       (long ******)
                       CONCAT44(pppppplStack_240._4_4_,(uint)*(byte *)((long)plVar31 + 0x97));
                  lVar46 = plVar31[0x13];
                  uVar15 = *(undefined4 *)((long)plVar31 + 0xbc);
                  lStack_188 = plVar31[0x19];
                  lStack_190 = plVar31[0x18];
                  lVar53 = plVar31[0x1a];
                  uVar69 = *(undefined8 *)((long)plVar31 + 0x9c);
                  plStack_268 = *(long **)((long)plVar31 + 0xac);
                  ppppplStack_270 = *(long ******)((long)plVar31 + 0xa4);
                  uVar92 = *(undefined8 *)((long)plVar31 + 0xb4);
                  lVar65 = param_1[0x2e];
                  FUN_10a3dea28();
                  (**(code **)(*plStack_250 + 0x50))(&uStack_170);
                  ppppppplVar60 = ppppppplStack_168;
                  ppppppplStack_d8 = ppppppplStack_168;
                  ppppppplStack_e0 = uStack_170;
                  if (ppppppplStack_168 == (long *******)0x0) {
                    ppppppplVar60 = (long *******)0x0;
                  }
                  else {
                    ppppppplVar94 = ppppppplStack_168 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                      if (bVar22) {
                        *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppppplStack_168 != (long *******)0x0) {
                      ppppppplVar94 = ppppppplStack_168 + 1;
                      do {
                        pppppplVar68 = *ppppppplVar94;
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                        if (bVar22) {
                          *ppppppplVar94 = (long ******)((long)pppppplVar68 + -1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      if (pppppplVar68 == (long ******)0x0) {
                        (*(code *)(*ppppppplStack_168)[2])(ppppppplStack_168);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
                        ppppppplVar60 = ppppppplStack_d8;
                      }
                    }
                  }
                  ppppppplVar94 = ppppppplStack_e0;
                  if ((long *****)plVar31[5] == (long *****)0x0) {
                    ppppppplVar94 = ppppppplStack_e0 + 0x2a;
                    if (*(char *)((long)ppppppplStack_e0 + 0x167) < '\0') {
                      ppppppplVar94 = (long *******)*ppppppplVar94;
                    }
                    func_0x00010ae06f08(1,0x12,&UNK_10f6821fc,&UNK_10f6821fc,0xffffffff,
                                        &UNK_10f68273f,in_x6,in_x7,ppppppplVar94);
                    ppppppplStack_1a0._0_5_ = (uint5)(uint)ppppppplStack_1a0;
                    pppppplStack_1b0 = (long ******)0x0;
                    uStack_1a8 = (long ******)0x0;
                    ppppppplStack_1a0 =
                         (long *******)((ulong)ppppppplStack_1a0 & 0xffffffffffffff00);
                  }
                  else {
                    pppppplStack_210 = (long ******)0x0;
                    pppppplStack_208 = (long ******)0x0;
                    plVar44 = *(long **)(lVar65 + 0x38);
                    plVar49 = *(long **)(lVar65 + 0x30);
                    for (plVar30 = plVar49; plVar30 != plVar44; plVar30 = plVar30 + 1) {
                      puVar32 = *(undefined8 **)(*plVar30 + 200);
LAB_10a90158c:
                      if (puVar32 != *(undefined8 **)(*plVar30 + 0xd0)) {
                        pppppplVar68 = (long ******)*puVar32;
                        if ((long *****)plVar31[5] != *pppppplVar68) goto code_r0x00010a9015a4;
                        pppppplStack_2a8 = (long ******)puVar32[1];
                        pppppplVar26 = pppppplVar68;
                        if (pppppplStack_2a8 != (long ******)0x0) {
                          pppppplVar26 = pppppplStack_2a8 + 1;
                          do {
                            cVar20 = '\x01';
                            bVar22 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                            if (bVar22) {
                              *pppppplVar26 = (long *****)((long)*pppppplVar26 + 1);
                              cVar20 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar20 != '\0');
                          pppppplVar26 = (long ******)*puVar32;
                        }
                        ppppplVar33 = pppppplVar26[0x62];
                        ppppplVar34 = pppppplVar26[99];
                        pppppplStack_210 = pppppplVar68;
                        pppppplStack_208 = pppppplStack_2a8;
                        FUN_10a8fda3c();
                        if ((ulong)pppppplVar26 >> 0x20 != 0) {
                          if (((long)ppppplVar34 - (long)ppppplVar33 & 0x3fffffffcU) == 0) {
                            *(undefined4 *)(pppppplVar68 + 0x280) = 0;
                          }
                          uVar23 = (uint)pppppplVar26;
                          uVar59 = uVar23 & 0xff;
                          uVar63 = uVar23 >> 8;
                          uVar19 = *(int *)(pppppplVar68 + 0x2ae) +
                                   *(int *)(pppppplVar68 + 0x2ae) * uVar23;
                          uVar23 = *(uint *)((long)pppppplVar68 + 0x54);
                          if (*(uint *)((long)pppppplVar68 + 0x54) <= uVar19) {
                            uVar23 = uVar19;
                          }
                          *(uint *)((long)pppppplVar68 + 0x54) = uVar23;
                          *(byte *)((long)pppppplVar68 + 0x140f) =
                               *(byte *)((long)pppppplVar68 + 0x140f) | bVar41;
                          *(byte *)(pppppplVar68 + 0x282) =
                               *(byte *)(pppppplVar68 + 0x282) | (byte)pppppplStack_240;
                          lVar66 = *plVar30;
                          if (lVar66 == 0) {
                            plVar49 = *(long **)(lVar65 + 0x30);
                            plVar44 = *(long **)(lVar65 + 0x38);
                            bVar22 = true;
                            goto LAB_10a901764;
                          }
                          bVar22 = true;
                          goto LAB_10a901770;
                        }
                        ppppppplVar60 = ppppppplVar94 + 0x2a;
                        if (*(char *)((long)ppppppplVar94 + 0x167) < '\0') {
                          ppppppplVar60 = (long *******)*ppppppplVar60;
                        }
                        __ZNSt3__19to_stringEi(&uStack_170,0x20);
                        ppppppplVar94 = uStack_170;
                        if (-1 < (long)ppppppplStack_160) {
                          ppppppplVar94 = (long *******)&uStack_170;
                        }
                        func_0x00010ae06f08(1,0x12,&UNK_10f6821fc,&UNK_10f6821fc,0xffffffff,
                                            &UNK_10f68275f,in_x6,in_x7,ppppppplVar60,ppppppplVar94);
                        if ((long)ppppppplStack_160 < 0) {
                          __ZdlPv(uStack_170);
                        }
                        ppppppplStack_1a0._0_5_ = (uint5)(uint)ppppppplStack_1a0;
                        pppppplStack_1b0 = (long ******)0x0;
                        uStack_1a8 = (long ******)0x0;
                        ppppppplStack_1a0 =
                             (long *******)((ulong)ppppppplStack_1a0 & 0xffffffffffffff00);
                        goto joined_r0x00010a9016e0;
                      }
                    }
                    pppppplStack_2a8 = (long ******)0x0;
                    bVar22 = false;
                    uVar59 = 0;
                    uVar63 = 0;
                    pppppplVar68 = (long ******)0x0;
LAB_10a901764:
                    if (plVar49 == plVar44) goto LAB_10a903268;
                    lVar66 = plVar44[-1];
LAB_10a901770:
                    iVar42 = 2;
                    if (bVar41 != 0) {
                      iVar42 = 3;
                    }
                    iVar13 = 4;
                    if ((int)pppppplStack_240 == 0) {
                      iVar13 = iVar42;
                    }
                    iVar16 = *(int *)(lVar66 + 0x124);
                    iVar42 = iVar13;
                    if (iVar13 <= iVar16) {
                      iVar42 = iVar16;
                    }
                    *(int *)(lVar66 + 0x124) = iVar42;
                    if (iVar16 < iVar13) {
                      FUN_10a93f6f4(lVar66,lVar65 + 0x68);
                    }
                    if (pppppplVar68 == (long ******)0x0) {
                      ppppppplVar38 = *(long ********)(lVar65 + 0x68);
                      ppppppplVar95 = *(long ********)(lVar65 + 0x70);
                      pppppplVar68 = (long ******)0x1598;
                      __Znwm();
                      pppppplVar68[1] = (long *****)0x0;
                      pppppplVar68[2] = (long *****)0x0;
                      *pppppplVar68 = (long *****)&PTR_FUN_110c2e530;
                      if (ppppppplVar95 != (long *******)0x0) {
                        ppppppplVar76 = ppppppplVar95 + 1;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                          if (bVar22) {
                            *ppppppplVar76 = (long ******)((long)*ppppppplVar76 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      pppppplVar26 = (long ******)plVar31[5];
                      ppppplVar33 = (long *****)plVar31[6];
                      if (ppppplVar33 != (long *****)0x0) {
                        ppppplVar34 = ppppplVar33 + 1;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppplVar34,0x10);
                          if (bVar22) {
                            *ppppplVar34 = (long ****)((long)*ppppplVar34 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      ppppplVar34 = (long *****)plVar31[7];
                      ppppplVar64 = (long *****)plVar31[8];
                      if (ppppplVar64 != (long *****)0x0) {
                        ppppplVar29 = ppppplVar64 + 1;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppplVar29,0x10);
                          if (bVar22) {
                            *ppppplVar29 = (long ****)((long)*ppppplVar29 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      pppppplStack_c8 = (long ******)0x0;
                      uStack_c0._0_1_ = 0;
                      uStack_c0._1_5_ = 0;
                      uStack_c0._6_2_ = 0;
                      uStack_b8 = 0;
                      uStack_b2 = 0;
                      ppppplStack_1f8 = ppppplVar34;
                      ppppplStack_1f0 = ppppplVar64;
                      ppppppplStack_1e0 = (long *******)pppppplVar26;
                      ppppppplStack_1d8 = (long *******)ppppplVar33;
                      ppppppplStack_1c8 = ppppppplVar38;
                      ppppppplStack_1c0 = ppppppplVar95;
                      FUN_10a2e23e0(&pppppplStack_c8,plVar31[9],plVar31[10],
                                    plVar31[10] - plVar31[9] >> 4);
                      pppppplVar68[3] = (long *****)pppppplVar26;
                      pppppplVar68[4] = ppppplVar33;
                      ppppppplStack_1e0 = (long *******)0x0;
                      ppppppplStack_1d8 = (long *******)0x0;
                      if (pppppplVar26 == (long ******)0x0) {
                        pppppplVar68[5] = (long *****)0x0;
                        pppppplVar68[6] = (long *****)0x0;
                      }
                      else {
                        FUN_10ab46af4();
                        ppppplVar33 = pppppplVar26[1];
                        ppppplVar29 = *pppppplVar26;
                        pppppplVar68[6] = pppppplVar26[1];
                        pppppplVar68[5] = ppppplVar29;
                        if (ppppplVar33 != (long *****)0x0) {
                          ppppplVar33 = ppppplVar33 + 1;
                          do {
                            cVar20 = '\x01';
                            bVar22 = (bool)ExclusiveMonitorPass(ppppplVar33,0x10);
                            if (bVar22) {
                              *ppppplVar33 = (long ****)((long)*ppppplVar33 + 1);
                              cVar20 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar20 != '\0');
                        }
                      }
                      pppppplVar45 = pppppplStack_c8;
                      pppppplVar26 = pppppplVar68 + 3;
                      pppppplVar68[7] = (long *****)pppppplStack_c8;
                      pppppplVar75 = (long ******)
                                     CONCAT26(uStack_c0._6_2_,
                                              CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                      pppppplVar68[9] = (long *****)CONCAT26(uStack_b2,uStack_b8);
                      pppppplVar68[8] = (long *****)pppppplVar75;
                      uStack_c0._0_1_ = 0;
                      uStack_c0._1_5_ = 0;
                      uStack_c0._6_2_ = 0;
                      uStack_b8 = 0;
                      uStack_b2 = 0;
                      pppppplStack_c8 = (long ******)0x0;
                      pppppplVar61 = pppppplVar68 + 10;
                      *pppppplVar61 = (long *****)0x0;
                      pppppplVar68[0xb] = (long *****)0x0;
                      pppppplVar68[0xc] = (long *****)0x0;
                      if ((long)pppppplVar75 - (long)pppppplVar45 != 0) {
                        uVar72 = (long)pppppplVar75 - (long)pppppplVar45 >> 4;
                        if (uVar72 >> 0x3c != 0) {
                          FUN_10a4afcc4();
                          goto LAB_10a903268;
                        }
                        pppppplVar45 = pppppplVar61;
                        pppppplStack_150 = pppppplVar61;
                        FUN_10a4afcd8();
                        ppppplVar33 = (long *****)
                                      ((long)pppppplVar45 -
                                      ((long)pppppplVar68[0xb] - (long)pppppplVar68[10]));
                        _memcpy(ppppplVar33);
                        uStack_170 = (long *******)pppppplVar68[10];
                        pppppplVar68[10] = ppppplVar33;
                        pppppplVar68[0xb] = (long *****)pppppplVar45;
                        ppppplStack_158 = pppppplVar68[0xc];
                        pppppplVar68[0xc] = (long *****)(pppppplVar45 + uVar72 * 2);
                        ppppppplStack_168 = uStack_170;
                        ppppppplStack_160 = uStack_170;
                        func_0x00010a4afd0c(&uStack_170);
                        pppppplVar45 = (long ******)pppppplVar68[7];
                        pppppplVar75 = (long ******)pppppplVar68[8];
                      }
                      for (; pppppplVar45 != pppppplVar75; pppppplVar45 = pppppplVar45 + 2) {
                        ppppplVar33 = *pppppplVar45;
                        if (ppppplVar33 != (long *****)0x0) {
                          FUN_10ab46af4();
                          FUN_10a90f550(pppppplVar61,ppppplVar33);
                        }
                      }
                      *(undefined4 *)(pppppplVar68 + 0xd) = ppppplStack_258._0_4_;
                      *(uint *)((long)pppppplVar68 + 0x6c) = uVar36;
                      *(undefined4 *)(pppppplVar68 + 0xe) = 0;
                      _bzero(pppppplVar68 + 0xf,0x218);
                      FUN_109ffe100(pppppplVar68 + 0x62,0x20);
                      lVar74 = 0;
                      pppppplVar68[0x68] = (long *****)0x0;
                      pppppplVar68[0x67] = (long *****)0x0;
                      pppppplVar68[0x6a] = (long *****)0x0;
                      pppppplVar68[0x69] = (long *****)0x0;
                      pppppplVar68[0x66] = (long *****)0x0;
                      pppppplVar68[0x65] = (long *****)0x0;
                      do {
                        *(undefined1 *)((long)pppppplVar68 + lVar74 + 0x398) = 0;
                        *(undefined1 *)((long)pppppplVar68 + lVar74 + 0x3d8) = 0;
                        lVar74 = lVar74 + 0x44;
                      } while (lVar74 != 0x880);
                      lVar74 = 0xc18;
                      do {
                        puVar32 = (undefined8 *)((long)pppppplVar68 + lVar74);
                        puVar32[1] = 0;
                        *puVar32 = 0x3f800000;
                        puVar32[3] = 0;
                        puVar32[2] = 0x3f80000000000000;
                        puVar32[5] = 0x3f800000;
                        puVar32[4] = 0;
                        puVar32[7] = 0x3f80000000000000;
                        puVar32[6] = 0;
                        lVar74 = lVar74 + 0x40;
                      } while (lVar74 != 0x1418);
                      *(undefined4 *)(pppppplVar68 + 0x283) = 0;
                      *(float *)((long)pppppplVar68 + 0x141c) = fVar90;
                      *(undefined4 *)(pppppplVar68 + 0x284) = 0;
                      *(char *)((long)pppppplVar68 + 0x1424) = (char)lVar46;
                      *(undefined1 *)((long)pppppplVar68 + 0x1425) = uVar18;
                      *(undefined1 *)((long)pppppplVar68 + 0x1426) = uVar18;
                      *(undefined2 *)((long)pppppplVar68 + 0x1427) = 0;
                      *(undefined4 *)(pppppplVar68 + 0x286) = 0x3f800000;
                      *(undefined8 *)((long)pppppplVar68 + 0x143c) = 0;
                      *(undefined8 *)((long)pppppplVar68 + 0x1434) = 0;
                      pppppplVar68[0x28a] = (long *****)0x0;
                      pppppplVar68[0x289] = (long *****)0x0;
                      *(undefined4 *)((long)pppppplVar68 + 0x1444) = 0x3f800000;
                      *(undefined4 *)(pppppplVar68 + 0x28b) = 0x3f800000;
                      *(undefined8 *)((long)pppppplVar68 + 0x1464) = 0;
                      *(undefined8 *)((long)pppppplVar68 + 0x145c) = 0;
                      *(undefined4 *)((long)pppppplVar68 + 0x146c) = 0x3f800000;
                      *(undefined1 *)((long)pppppplVar68 + 0x1514) = 0;
                      *(undefined1 *)(pppppplVar68 + 0x2a3) = 0;
                      *(undefined4 *)((long)pppppplVar68 + 0x151c) = 0;
                      *(undefined1 *)(pppppplVar68 + 0x2a4) = 0;
                      *(undefined1 *)((long)pppppplVar68 + 0x152c) = 0;
                      *(undefined1 *)(pppppplVar68 + 0x2a6) = 0;
                      *(undefined4 *)((long)pppppplVar68 + 0x1534) = 0;
                      pppppplVar68[0x28f] = (long *****)0x0;
                      pppppplVar68[0x28e] = (long *****)0x0;
                      pppppplVar68[0x291] = (long *****)0x0;
                      pppppplVar68[0x290] = (long *****)0x0;
                      pppppplVar68[0x293] = (long *****)0x0;
                      pppppplVar68[0x292] = (long *****)0x0;
                      pppppplVar68[0x295] = (long *****)0x0;
                      pppppplVar68[0x294] = (long *****)0x0;
                      pppppplVar68[0x297] = (long *****)0x0;
                      pppppplVar68[0x296] = (long *****)0x0;
                      pppppplVar68[0x299] = (long *****)0x0;
                      pppppplVar68[0x298] = (long *****)0x0;
                      pppppplVar68[0x29b] = (long *****)0x0;
                      pppppplVar68[0x29a] = (long *****)0x0;
                      pppppplVar68[0x29d] = (long *****)0x0;
                      pppppplVar68[0x29c] = (long *****)0x0;
                      pppppplVar68[0x29f] = (long *****)0x0;
                      pppppplVar68[0x29e] = (long *****)0x0;
                      *(undefined8 *)((long)pppppplVar68 + 0x1501) = 0;
                      *(undefined8 *)((long)pppppplVar68 + 0x14f9) = 0;
                      pppppplVar68[0x2a7] = (long *****)0x3f800000;
                      *(undefined4 *)(pppppplVar68 + 0x2a8) = 0;
                      *(undefined8 *)((long)pppppplVar68 + 0x1544) = uVar69;
                      *(long **)((long)pppppplVar68 + 0x1554) = plStack_268;
                      *(long ******)((long)pppppplVar68 + 0x154c) = ppppplStack_270;
                      *(undefined8 *)((long)pppppplVar68 + 0x155c) = uVar92;
                      pppppplVar68[0x2ad] = (long *****)ppppppplVar38;
                      pppppplVar68[0x2ae] = (long *****)ppppppplVar95;
                      pppppplVar68[0x2af] = ppppplVar34;
                      pppppplVar68[0x2b0] = ppppplVar64;
                      *(uint *)(pppppplVar68 + 0x2b1) = uVar36;
                      *(undefined8 *)((long)pppppplVar68 + 0x158c) = 0xffffffff;
                      *(undefined1 *)((long)pppppplVar68 + 0x1594) = 0;
                      ppppplVar34 = pppppplVar68[99];
                      ppppplVar33 = pppppplVar68[0x62];
                      if (ppppplVar34 != ppppplVar33) {
                        iVar42 = 0;
                        ppppplVar64 = ppppplVar34;
                        do {
                          ppppplVar64 = (long *****)((long)ppppplVar64 + -4);
                          *(int *)ppppplVar64 = iVar42;
                          iVar42 = iVar42 + 1;
                        } while (ppppplVar64 != ppppplVar33);
                        do {
                          ppppplVar64 = (long *****)((long)ppppplVar33 + 4);
                          FUN_10a8fd8d0(pppppplVar26,*(undefined4 *)ppppplVar33);
                          ppppplVar33 = ppppplVar64;
                        } while (ppppplVar64 != ppppplVar34);
                      }
                      uStack_170 = &pppppplStack_c8;
                      FUN_10a0d4a18(&uStack_170);
                      pppppplStack_210 = pppppplVar26;
                      pppppplStack_208 = pppppplVar68;
                      if (pppppplStack_2a8 != (long ******)0x0) {
                        pppppplVar68 = pppppplStack_2a8 + 1;
                        do {
                          ppppplVar33 = *pppppplVar68;
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                          if (bVar22) {
                            *pppppplVar68 = (long *****)((long)ppppplVar33 + -1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                        if (ppppplVar33 == (long *****)0x0) {
                          (*(code *)(*pppppplStack_2a8)[2])(pppppplStack_2a8);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplStack_2a8);
                        }
                      }
                      pppppplVar68 = pppppplStack_210;
                      fVar85 = SUB84(pppppplStack_210[0x2a8],0);
                      fVar87 = (float)*(undefined8 *)((long)pppppplStack_210 + 0x1534);
                      fVar81 = fVar85 - fVar87;
                      fVar86 = (float)((ulong)pppppplStack_210[0x2a8] >> 0x20);
                      fVar88 = (float)((ulong)*(undefined8 *)((long)pppppplStack_210 + 0x1534) >>
                                      0x20);
                      fVar83 = fVar86 - fVar88;
                      fVar78 = *(float *)(pppppplStack_210 + 0x2a9) -
                               *(float *)((long)pppppplStack_210 + 0x153c);
                      *(float *)((long)pppppplStack_210 + 0x1504) =
                           SQRT(fVar81 * fVar81 + fVar83 * fVar83 + fVar78 * fVar78) * 0.5;
                      *(undefined1 *)(pppppplStack_210 + 0x2a0) = 0;
                      if (*(int *)(pppppplStack_210 + 0x2a6) == 1) {
                        if (*(char *)((long)pppppplStack_210 + 0x14fc) == '\x01') {
                          *(undefined1 *)((long)pppppplStack_210 + 0x14fc) = 0;
                        }
                        if (*(char *)((long)pppppplStack_210 + 0x1514) == '\x01') {
                          *(undefined1 *)((long)pppppplStack_210 + 0x1514) = 0;
                        }
                      }
                      else {
                        pppppplStack_210[0x29e] =
                             (long *****)CONCAT44((fVar86 + fVar88) * 0.5,(fVar85 + fVar87) * 0.5);
                        *(float *)(pppppplStack_210 + 0x29f) =
                             (*(float *)(pppppplStack_210 + 0x2a9) +
                             *(float *)((long)pppppplStack_210 + 0x153c)) * 0.5;
                        if ((*(byte *)((long)pppppplStack_210 + 0x14fc) & 1) == 0) {
                          *(undefined1 *)((long)pppppplStack_210 + 0x14fc) = 1;
                        }
                        *(float *)(pppppplStack_210 + 0x2a1) = fVar81 * 0.5;
                        *(float *)((long)pppppplStack_210 + 0x150c) = fVar83 * 0.5;
                        *(float *)(pppppplStack_210 + 0x2a2) = fVar78 * 0.5;
                        if ((*(byte *)((long)pppppplStack_210 + 0x1514) & 1) == 0) {
                          *(undefined1 *)((long)pppppplStack_210 + 0x1514) = 1;
                        }
                      }
                      pppppplVar26 = pppppplStack_210;
                      FUN_10a8fda3c();
                      *(undefined4 *)(pppppplVar68 + 0x280) = 0;
                      *(float *)((long)pppppplVar68 + 0x1404) = fVar90;
                      *(byte *)((long)pppppplVar68 + 0x140f) = bVar41;
                      *(char *)(pppppplVar68 + 0x282) = (char)pppppplStack_240;
                      *(char *)(pppppplVar68 + 0x2a3) = (char)lVar51;
                      *(undefined8 *)((long)pppppplVar68 + 0x151c) = uVar91;
                      if (((ulong)pppppplVar26 >> 0x20 == 0) ||
                         (pppppplStack_240 = pppppplVar26, 0x1f < ((ulong)pppppplVar26 & 0xffffffff)
                         )) goto LAB_10a903268;
                      *(undefined1 *)
                       ((long)pppppplVar68 + ((ulong)pppppplVar26 & 0xffffffff) + 0x340) = uVar17;
                      FUN_10a9091e4(pppppplVar68,lVar66 + 0x70,1);
                      pppppplVar26 = (long ******)pppppplStack_210[5];
                      for (pppppplVar68 = (long ******)pppppplStack_210[4];
                          pppppplVar45 = pppppplStack_210, pppppplVar68 != pppppplVar26;
                          pppppplVar68 = pppppplVar68 + 2) {
                        FUN_10a9091e4(pppppplVar68,lVar66 + 0x30,1);
                      }
                      lVar51 = *(long *)(lVar65 + 0x68);
                      if (lVar51 != 0) {
                        uVar36 = *(uint *)(lVar66 + 0xc);
                        if (uVar36 != 0) {
                          uVar72 = (ulong)uVar36 & 0x3fff;
                          uVar54 = (*(long *)(lVar51 + 0x28) - *(long *)(lVar51 + 0x20) >> 3) *
                                   -0x3333333333333333;
                          if (((uVar72 <= uVar54 && uVar54 - uVar72 != 0) &&
                              (pcVar56 = (char *)(*(long *)(lVar51 + 0x20) + uVar72 * 0x28),
                              *(uint *)(pcVar56 + 4) == uVar36)) && (*pcVar56 != '\x02')) {
                            lVar51 = lVar51 + 0x40;
                            func_0x00010a97784c(lVar51,lVar65 + 0x50,pppppplStack_210);
                            *(int *)(pppppplVar45 + 0xb) = (int)lVar51;
                            FUN_10a8fea0c(lVar66,*(undefined8 *)(lVar65 + 0x68),lVar51);
                            pppppplVar68 = pppppplVar45;
                          }
                        }
                      }
                      pppppplVar26 = pppppplStack_208;
                      pppppplVar45 = pppppplStack_210;
                      ppppppplVar38 = (long *******)(lVar66 + 0xf8);
                      uVar72 = ((ulong)(uint)((int)pppppplStack_210 << 3) + 8 ^
                               (ulong)pppppplStack_210 >> 0x20) * -0x622015f714c7d297;
                      uVar72 = ((ulong)pppppplStack_210 >> 0x20 ^ uVar72 >> 0x2f ^ uVar72) *
                               -0x622015f714c7d297;
                      pppppplVar61 = (long ******)((uVar72 ^ uVar72 >> 0x2f) * -0x622015f714c7d297);
                      pppppplVar75 = *(long *******)(lVar66 + 0x100);
                      if (pppppplVar75 != (long ******)0x0) {
                        uVar72 = (long)pppppplVar75 - 1;
                        if (((ulong)pppppplVar75 & uVar72) == 0) {
                          pppppplVar68 = (long ******)((ulong)pppppplVar61 & uVar72);
                        }
                        else {
                          pppppplVar68 = pppppplVar61;
                          if (pppppplVar75 <= pppppplVar61) {
                            uVar54 = 0;
                            if (pppppplVar75 != (long ******)0x0) {
                              uVar54 = (ulong)pppppplVar61 / (ulong)pppppplVar75;
                            }
                            pppppplVar68 = (long ******)
                                           ((long)pppppplVar61 - uVar54 * (long)pppppplVar75);
                          }
                        }
                        ppppplVar33 = (*ppppppplVar38)[(long)pppppplVar68];
                        if (ppppplVar33 != (long *****)0x0) {
                          do {
                            while( true ) {
                              ppppplVar33 = (long *****)*ppppplVar33;
                              if (ppppplVar33 == (long *****)0x0) goto LAB_10a901e14;
                              pppppplVar57 = (long ******)ppppplVar33[1];
                              if (pppppplVar57 != pppppplVar61) break;
                              if ((long ******)ppppplVar33[2] == pppppplStack_210)
                              goto LAB_10a9020c8;
                            }
                            if (((ulong)pppppplVar75 & uVar72) == 0) {
                              pppppplVar57 = (long ******)((ulong)pppppplVar57 & uVar72);
                            }
                            else if (pppppplVar75 <= pppppplVar57) {
                              uVar54 = 0;
                              if (pppppplVar75 != (long ******)0x0) {
                                uVar54 = (ulong)pppppplVar57 / (ulong)pppppplVar75;
                              }
                              pppppplVar57 = (long ******)
                                             ((long)pppppplVar57 - uVar54 * (long)pppppplVar75);
                            }
                          } while (pppppplVar57 == pppppplVar68);
                        }
                      }
LAB_10a901e14:
                      ppppppplVar95 = (long *******)0x20;
                      __Znwm();
                      ppppppplStack_160 = (long *******)0x1;
                      *ppppppplVar95 = (long ******)0x0;
                      ppppppplVar95[1] = pppppplVar61;
                      ppppppplVar95[2] = pppppplVar45;
                      ppppppplVar95[3] = pppppplVar26;
                      if (pppppplVar26 != (long ******)0x0) {
                        pppppplVar26 = pppppplVar26 + 1;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                          if (bVar22) {
                            *pppppplVar26 = (long *****)((long)*pppppplVar26 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      fVar78 = (float)(*(long *)(lVar66 + 0x110) + 1);
                      uStack_170 = ppppppplVar95;
                      ppppppplStack_168 = ppppppplVar38;
                      if ((pppppplVar75 == (long ******)0x0) ||
                         (*(float *)(lVar66 + 0x118) * (float)pppppplVar75 < fVar78)) {
                        uVar72 = 1;
                        if ((long ******)0x2 < pppppplVar75) {
                          uVar72 = (ulong)(((ulong)pppppplVar75 & (long)pppppplVar75 - 1U) != 0);
                        }
                        pppppplVar68 = (long ******)(uVar72 | (long)pppppplVar75 << 1);
                        pppppplVar26 = (long ******)(long)(fVar78 / *(float *)(lVar66 + 0x118));
                        if (pppppplVar68 <= pppppplVar26) {
                          pppppplVar68 = pppppplVar26;
                        }
                        if ((long)pppppplVar68 - 1U == 0) {
                          pppppplVar68 = (long ******)0x2;
                        }
                        else if (((ulong)pppppplVar68 & (long)pppppplVar68 - 1U) != 0) {
                          __ZNSt3__112__next_primeEm();
                        }
                        pppppplVar75 = *(long *******)(lVar66 + 0x100);
                        if (pppppplVar75 < pppppplVar68) {
LAB_10a901ed0:
                          if ((ulong)pppppplVar68 >> 0x3d != 0) {
                            func_0x000109ffded8();
                            goto LAB_10a903268;
                          }
                          pppppplVar26 = (long ******)((long)pppppplVar68 << 3);
                          __Znwm();
                          pppppplVar45 = *ppppppplVar38;
                          *ppppppplVar38 = pppppplVar26;
                          if (pppppplVar45 != (long ******)0x0) {
                            __ZdlPv();
                          }
                          pppppplVar26 = (long ******)0x0;
                          *(long *******)(lVar66 + 0x100) = pppppplVar68;
                          do {
                            (*ppppppplVar38)[(long)pppppplVar26] = (long *****)0x0;
                            pppppplVar26 = (long ******)((long)pppppplVar26 + 1);
                          } while (pppppplVar68 != pppppplVar26);
                          ppppplVar33 = *(long ******)(lVar66 + 0x108);
                          pppppplVar75 = pppppplVar68;
                          if (ppppplVar33 != (long *****)0x0) {
                            pppppplVar26 = (long ******)ppppplVar33[1];
                            uVar72 = (long)pppppplVar68 - 1;
                            if (((ulong)pppppplVar68 & uVar72) == 0) {
                              pppppplVar26 = (long ******)((ulong)pppppplVar26 & uVar72);
                            }
                            else if (pppppplVar68 <= pppppplVar26) {
                              uVar54 = 0;
                              if (pppppplVar68 != (long ******)0x0) {
                                uVar54 = (ulong)pppppplVar26 / (ulong)pppppplVar68;
                              }
                              pppppplVar26 = (long ******)
                                             ((long)pppppplVar26 - uVar54 * (long)pppppplVar68);
                            }
                            (*ppppppplVar38)[(long)pppppplVar26] = (long *****)(lVar66 + 0x108);
                            ppppplVar34 = (long *****)*ppppplVar33;
                            while (ppppplVar34 != (long *****)0x0) {
                              pppppplVar45 = (long ******)ppppplVar34[1];
                              if (((ulong)pppppplVar68 & uVar72) == 0) {
                                pppppplVar45 = (long ******)((ulong)pppppplVar45 & uVar72);
                              }
                              else if (pppppplVar68 <= pppppplVar45) {
                                uVar54 = 0;
                                if (pppppplVar68 != (long ******)0x0) {
                                  uVar54 = (ulong)pppppplVar45 / (ulong)pppppplVar68;
                                }
                                pppppplVar45 = (long ******)
                                               ((long)pppppplVar45 - uVar54 * (long)pppppplVar68);
                              }
                              ppppplVar64 = ppppplVar34;
                              if (pppppplVar45 != pppppplVar26) {
                                pppppplVar57 = *ppppppplVar38;
                                if (pppppplVar57[(long)pppppplVar45] == (long *****)0x0) {
                                  pppppplVar57[(long)pppppplVar45] = ppppplVar33;
                                  pppppplVar26 = pppppplVar45;
                                }
                                else {
                                  *ppppplVar33 = *ppppplVar34;
                                  *ppppplVar34 = *pppppplVar57[(long)pppppplVar45];
                                  *pppppplVar57[(long)pppppplVar45] = (long ****)ppppplVar34;
                                  ppppplVar64 = ppppplVar33;
                                }
                              }
                              ppppplVar33 = ppppplVar64;
                              ppppplVar34 = (long *****)*ppppplVar64;
                            }
                          }
                        }
                        else if (pppppplVar68 < pppppplVar75) {
                          pppppplVar26 = (long ******)
                                         (long)((float)*(ulong *)(lVar66 + 0x110) /
                                               *(float *)(lVar66 + 0x118));
                          if ((pppppplVar75 < (long ******)0x3) ||
                             (((ulong)pppppplVar75 & (long)pppppplVar75 - 1U) != 0)) {
                            __ZNSt3__112__next_primeEm();
                          }
                          else if ((long ******)0x1 < pppppplVar26) {
                            pppppplVar26 = (long ******)
                                           (1L << (-LZCOUNT((long)pppppplVar26 + -1) & 0x3fU));
                          }
                          if (pppppplVar68 <= pppppplVar26) {
                            pppppplVar68 = pppppplVar26;
                          }
                          if (pppppplVar68 < pppppplVar75) {
                            if (pppppplVar68 != (long ******)0x0) goto LAB_10a901ed0;
                            pppppplVar68 = *ppppppplVar38;
                            *ppppppplVar38 = (long ******)0x0;
                            if (pppppplVar68 != (long ******)0x0) {
                              __ZdlPv();
                            }
                            *(undefined8 *)(lVar66 + 0x100) = 0;
                            pppppplVar75 = (long ******)0x0;
                          }
                          else {
                            pppppplVar75 = *(long *******)(lVar66 + 0x100);
                          }
                        }
                        if (((ulong)pppppplVar75 & (long)pppppplVar75 - 1U) == 0) {
                          pppppplVar68 = (long ******)
                                         ((long)pppppplVar75 - 1U & (ulong)pppppplVar61);
                        }
                        else {
                          pppppplVar68 = pppppplVar61;
                          if (pppppplVar75 <= pppppplVar61) {
                            uVar72 = 0;
                            if (pppppplVar75 != (long ******)0x0) {
                              uVar72 = (ulong)pppppplVar61 / (ulong)pppppplVar75;
                            }
                            pppppplVar68 = (long ******)
                                           ((long)pppppplVar61 - uVar72 * (long)pppppplVar75);
                          }
                        }
                      }
                      pppppplVar45 = *ppppppplVar38;
                      pppppplVar26 = (long ******)pppppplVar45[(long)pppppplVar68];
                      if (pppppplVar26 == (long ******)0x0) {
                        *ppppppplVar95 = *(long *******)(lVar66 + 0x108);
                        *(long ********)(lVar66 + 0x108) = ppppppplVar95;
                        pppppplVar45[(long)pppppplVar68] = (long *****)(lVar66 + 0x108);
                        if (*ppppppplVar95 != (long ******)0x0) {
                          pppppplVar26 = (long ******)(*ppppppplVar95)[1];
                          if (((ulong)pppppplVar75 & (long)pppppplVar75 - 1U) == 0) {
                            pppppplVar26 = (long ******)
                                           ((ulong)pppppplVar26 & (long)pppppplVar75 - 1U);
                          }
                          else if (pppppplVar75 <= pppppplVar26) {
                            uVar72 = 0;
                            if (pppppplVar75 != (long ******)0x0) {
                              uVar72 = (ulong)pppppplVar26 / (ulong)pppppplVar75;
                            }
                            pppppplVar26 = (long ******)
                                           ((long)pppppplVar26 - uVar72 * (long)pppppplVar75);
                          }
                          pppppplVar26 = *ppppppplVar38 + (long)pppppplVar26;
                          goto LAB_10a9020b4;
                        }
                      }
                      else {
                        *ppppppplVar95 = (long ******)*pppppplVar26;
LAB_10a9020b4:
                        *pppppplVar26 = (long *****)ppppppplVar95;
                      }
                      *(long *)(lVar66 + 0x110) = *(long *)(lVar66 + 0x110) + 1;
LAB_10a9020c8:
                      pppppplVar26 = pppppplStack_208;
                      pppppplVar68 = pppppplStack_210;
                      puVar32 = *(undefined8 **)(lVar66 + 0xd0);
                      if (puVar32 < *(undefined8 **)(lVar66 + 0xd8)) {
                        *puVar32 = pppppplStack_210;
                        puVar32[1] = pppppplStack_208;
                        if (pppppplStack_208 != (long ******)0x0) {
                          pppppplVar26 = pppppplStack_208 + 1;
                          do {
                            cVar20 = '\x01';
                            bVar22 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                            if (bVar22) {
                              *pppppplVar26 = (long *****)((long)*pppppplVar26 + 1);
                              cVar20 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar20 != '\0');
                        }
                        puVar32 = puVar32 + 2;
                      }
                      else {
                        lVar51 = *(long *)(lVar66 + 200);
                        lVar74 = (long)puVar32 - lVar51;
                        lVar46 = lVar74 >> 4;
                        uVar72 = lVar46 + 1;
                        if (uVar72 >> 0x3c != 0) {
                          FUN_10a910504();
                          goto LAB_10a903268;
                        }
                        uVar50 = (long)*(undefined8 **)(lVar66 + 0xd8) - lVar51;
                        uVar54 = (long)uVar50 >> 3;
                        if (uVar54 <= uVar72) {
                          uVar54 = uVar72;
                        }
                        if (0x7fffffffffffffef < uVar50) {
                          uVar54 = 0xfffffffffffffff;
                        }
                        if (uVar54 >> 0x3c != 0) {
                          func_0x000109ffded8();
                          goto LAB_10a903268;
                        }
                        lVar27 = uVar54 << 4;
                        __Znwm();
                        puVar39 = (undefined8 *)(lVar27 + lVar74);
                        *puVar39 = pppppplVar68;
                        puVar39[1] = pppppplVar26;
                        if (pppppplVar26 != (long ******)0x0) {
                          pppppplVar26 = pppppplVar26 + 1;
                          do {
                            cVar20 = '\x01';
                            bVar22 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                            if (bVar22) {
                              *pppppplVar26 = (long *****)((long)*pppppplVar26 + 1);
                              cVar20 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar20 != '\0');
                          lVar51 = *(long *)(lVar66 + 200);
                          lVar74 = *(long *)(lVar66 + 0xd0) - lVar51;
                          lVar46 = lVar74 >> 4;
                        }
                        puVar32 = puVar39 + 2;
                        _memcpy(puVar39 + lVar46 * -2,lVar51,lVar74);
                        *(undefined8 **)(lVar66 + 200) = puVar39 + lVar46 * -2;
                        *(undefined8 **)(lVar66 + 0xd0) = puVar32;
                        *(ulong *)(lVar66 + 0xd8) = lVar27 + uVar54 * 0x10;
                        if (lVar51 != 0) {
                          __ZdlPv(lVar51);
                        }
                      }
                      uVar59 = (uint)pppppplStack_240 & 0xff;
                      uVar63 = (uint)pppppplStack_240 >> 8;
                      *(undefined8 **)(lVar66 + 0xd0) = puVar32;
                    }
                    else if (!bVar22) goto LAB_10a903268;
                    uVar36 = uVar59 | uVar63 << 8;
                    if (0x1f < uVar36) goto LAB_10a903268;
                    if (ppppppplVar60 != (long *******)0x0) {
                      ppppppplVar38 = ppppppplVar60 + 2;
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                        if (bVar22) {
                          *ppppppplVar38 = (long ******)((long)*ppppppplVar38 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                    }
                    ppppplStack_258 = (long *****)CONCAT44(ppppplStack_258._4_4_,uVar59);
                    ppppplVar33 = pppppplVar68[(ulong)uVar36 * 2 + 0x10];
                    pppppplVar68[(ulong)uVar36 * 2 + 0xf] = (long *****)ppppppplVar94;
                    pppppplVar68[(ulong)uVar36 * 2 + 0x10] = (long *****)ppppppplVar60;
                    if (ppppplVar33 != (long *****)0x0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    FUN_10a93fc58(lVar66);
                    pppppplStack_240 = *(long *******)(lVar66 + 0xd0);
                    for (pppppplVar68 = *(long *******)(lVar66 + 200);
                        pppppplVar68 != pppppplStack_240; pppppplVar68 = pppppplVar68 + 2) {
                      ppppplVar33 = *pppppplVar68;
                      pppplVar55 = ppppplVar33[0x65];
                      pppplVar73 = ppppplVar33[0x66];
                      if (pppplVar55 != pppplVar73) {
                        do {
                          uVar36 = *(uint *)pppplVar55;
                          ppppplVar33 = *pppppplVar68;
                          func_0x00010a8fdae4(ppppplVar33,(ulong)uVar36);
                          bVar22 = ((ulong)ppppplVar33[0x23] & 0x13) == 0;
                          uStack_170 = (long *******)CONCAT71(uStack_170._1_7_,bVar22);
                          pppppplStack_c8 =
                               (long ******)CONCAT71(pppppplStack_c8._1_7_,bVar22 && fVar90 == 0.0);
                          if (0x1f < uVar36) goto LAB_10a903268;
                          lVar51 = *(long *)(lVar65 + 0x78) + (ulong)uVar36 * 0x20;
                          ppppplVar33 = *pppppplVar68;
                          if (ppppplVar33[2] != (long ****)0x0) {
                            FUN_10a917fc0(ppppplVar33[2],lVar51 + 0x2800,&uStack_170);
                            ppppplVar33 = *pppppplVar68;
                          }
                          pppplVar14 = ppppplVar33[8];
                          for (pppplVar62 = ppppplVar33[7]; pppplVar62 != pppplVar14;
                              pppplVar62 = pppplVar62 + 2) {
                            if (*pppplVar62 != (long ***)0x0) {
                              FUN_10a917fc0(*pppplVar62,lVar51 + 0x2800,&pppppplStack_c8);
                            }
                          }
                          pppplVar55 = (long ****)((long)pppplVar55 + 4);
                        } while (pppplVar55 != pppplVar73);
                        ppppplVar33 = *pppppplVar68;
                      }
                      if (ppppplVar33[0x62] == ppppplVar33[99]) {
                        iVar42 = 0;
                      }
                      else {
                        iVar42 = *(int *)((long)ppppplVar33[99] + -4) + 1;
                      }
                      pppppplStack_c8 = (long ******)CONCAT44(pppppplStack_c8._4_4_,iVar42);
                      func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2dea0);
                      FUN_10a90a334(ppppplVar33,&uStack_170,&pppppplStack_c8);
                      if ((long)ppppppplStack_160 < 0) {
                        __ZdlPv(uStack_170);
                      }
                      ppppplVar33 = *pppppplVar68;
                      func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2e6b0);
                      func_0x00010a90a39c(ppppplVar33,&uStack_170,lVar66 + 0xb0);
                      if ((long)ppppppplStack_160 < 0) {
                        __ZdlPv(uStack_170);
                      }
                      ppppplVar33 = *pppppplVar68;
                      func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2e698);
                      pppplVar73 = ppppplVar33[8];
                      for (pppplVar55 = ppppplVar33[7]; pppplVar55 != pppplVar73;
                          pppplVar55 = pppplVar55 + 2) {
                        if (*pppplVar55 != (long ***)0x0) {
                          FUN_10a0da430(*pppplVar55,&uStack_170,lVar66 + 0xb0);
                        }
                      }
                      if ((long)ppppppplStack_160 < 0) {
                        __ZdlPv(uStack_170);
                      }
                      if (*(int *)(lVar66 + 0x120) == 0) {
                        ppppplVar33 = *pppppplVar68;
                        func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2e680);
                        FUN_10a90a334(ppppplVar33,&uStack_170,(long)*pppppplVar68 + 0x1524);
                        if ((long)ppppppplStack_160 < 0) {
                          __ZdlPv(uStack_170);
                        }
                        ppppplVar33 = *pppppplVar68;
                        func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2e650);
                        FUN_10a90a334(ppppplVar33,&uStack_170,(long)*pppppplVar68 + 0x1524);
                        if ((long)ppppppplStack_160 < 0) {
                          __ZdlPv(uStack_170);
                        }
                        ppppplVar33 = *pppppplVar68;
                        func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2e668);
                        FUN_10a90a334(ppppplVar33,&uStack_170,*pppppplVar68 + 0x2a5);
                        if ((long)ppppppplStack_160 < 0) {
                          __ZdlPv(uStack_170);
                        }
                        FUN_10a8fef14(*pppppplVar68);
                        ppppplVar33 = *pppppplVar68;
                        func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2e698);
                        func_0x00010a90a39c(ppppplVar33,&uStack_170,lVar66 + 0xb0);
                        if ((long)ppppppplStack_160 < 0) {
                          __ZdlPv(uStack_170);
                        }
                        (*pppppplVar68)[0x66] = (*pppppplVar68)[0x65];
                      }
                    }
                    plVar30 = *(long **)(lVar65 + 0x38);
                    for (plVar31 = *(long **)(lVar65 + 0x30); plVar31 != plVar30;
                        plVar31 = plVar31 + 1) {
                      lVar51 = *plVar31;
                      if (*(int *)(lVar51 + 0x120) == 0) {
                        FUN_10a9092a4(lVar51 + 0x30,lVar51 + 0xb0);
                        FUN_10a9092a4(*plVar31 + 0x70,*plVar31 + 0xb0);
                        func_0x00010a91ace0(*plVar31 + 0xf8);
                      }
                      else {
                        *(undefined4 *)(lVar51 + 0xb8) = 1;
                      }
                    }
                    if (pppppplStack_208 != (long ******)0x0) {
                      pppppplVar68 = pppppplStack_208 + 1;
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                        if (bVar22) {
                          *pppppplVar68 = (long *****)((long)*pppppplVar68 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                    }
                    ppppppplStack_1a0 =
                         (long *******)((ulong)ppppplStack_258 & 0xffffffff | 0x100000000);
                    pppppplStack_2a8 = pppppplStack_208;
                    pppppplStack_1b0 = pppppplStack_210;
                    uStack_1a8 = pppppplStack_208;
joined_r0x00010a9016e0:
                    ppppppplVar60 = ppppppplStack_d8;
                    if (pppppplStack_2a8 != (long ******)0x0) {
                      pppppplVar68 = pppppplStack_2a8 + 1;
                      do {
                        ppppplVar33 = *pppppplVar68;
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                        if (bVar22) {
                          *pppppplVar68 = (long *****)((long)ppppplVar33 + -1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      if (ppppplVar33 == (long *****)0x0) {
                        (*(code *)(*pppppplStack_2a8)[2])(pppppplStack_2a8);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplStack_2a8);
                        ppppppplVar60 = ppppppplStack_d8;
                      }
                    }
                  }
                  if (ppppppplVar60 != (long *******)0x0) {
                    ppppppplVar94 = ppppppplVar60 + 1;
                    do {
                      pppppplVar68 = *ppppppplVar94;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                      if (bVar22) {
                        *ppppppplVar94 = (long ******)((long)pppppplVar68 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar68 == (long ******)0x0) {
                      (*(code *)(*ppppppplVar60)[2])(ppppppplVar60);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
                    }
                  }
                  ppppppplVar60 = ppppppplStack_1a0;
                  pppppplVar68 = uStack_1a8;
                  if ((pppppplStack_1b0 != (long ******)0x0) &&
                     (((ulong)ppppppplStack_1a0 & 0x1ffffffe0) == 0x100000000)) {
                    if (uStack_1a8 != (long ******)0x0) {
                      pppppplVar26 = uStack_1a8 + 2;
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                        if (bVar22) {
                          *pppppplVar26 = (long *****)((long)*pppppplVar26 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                    }
                    pppppplVar45 = (long ******)*pppppplVar52;
                    pppppplVar26 = pppppplVar52;
                    pppppplStack_240 = pppppplStack_1b0;
                    while (pppppplVar75 = pppppplVar26, pppppplVar45 != (long ******)0x0) {
                      while( true ) {
                        pppppplVar75 = pppppplVar45;
                        pplVar28 = pplVar35 + 4;
                        FUN_10a003e3c(pplVar28,pppppplVar75 + 4);
                        if (((uint)pplVar28 >> 7 & 1) != 0) break;
                        uVar36 = (int)pppppplVar75 + 0x20;
                        ppppppplVar94 = (long *******)(pplVar35 + 4);
                        FUN_10a003e3c();
                        if ((uVar36 >> 7 & 1) == 0) {
                          ppppppplVar38 = (long *******)*pppppplVar26;
                          if (ppppppplVar38 == (long *******)0x0) goto LAB_10a902634;
                          goto LAB_10a9026c0;
                        }
                        pppppplVar26 = pppppplVar75 + 1;
                        pppppplVar45 = (long ******)*pppppplVar26;
                        if ((long ******)*pppppplVar26 == (long ******)0x0) goto LAB_10a902634;
                      }
                      pppppplVar26 = pppppplVar75;
                      pppppplVar45 = (long ******)*pppppplVar75;
                    }
LAB_10a902634:
                    ppppppplVar94 = (long *******)0x50;
                    __Znwm();
                    ppppppplStack_160 = (long *******)0x0;
                    uStack_170 = ppppppplVar94;
                    ppppppplStack_168 = ppppppplVar48;
                    if (*(char *)((long)pplVar35 + 0x37) < '\0') {
                      func_0x000107c3192c(ppppppplVar94 + 4,pplVar35[4],pplVar35[5]);
                    }
                    else {
                      pppppplVar61 = (long ******)pplVar35[5];
                      pppppplVar45 = (long ******)pplVar35[4];
                      ppppppplVar94[6] = (long ******)pplVar35[6];
                      ppppppplVar94[5] = pppppplVar61;
                      ppppppplVar94[4] = pppppplVar45;
                    }
                    plVar31 = plStack_250;
                    ppppppplVar94[7] = (long ******)0x0;
                    ppppppplVar94[8] = (long ******)0x0;
                    ppppppplVar94[9] = (long ******)0x0;
                    *ppppppplVar94 = (long ******)0x0;
                    ppppppplVar94[1] = (long ******)0x0;
                    ppppppplVar94[2] = pppppplVar75;
                    *pppppplVar26 = (long *****)ppppppplVar94;
                    if ((long ******)**ppppppplVar48 != (long ******)0x0) {
                      *ppppppplVar48 = (long ******)**ppppppplVar48;
                      ppppppplVar94 = (long *******)*pppppplVar26;
                    }
                    func_0x000107c2b058(plStack_250[0xaa]);
                    plVar31[0xab] = plVar31[0xab] + 1;
                    ppppppplVar38 = uStack_170;
LAB_10a9026c0:
                    pppppplVar26 = ppppppplVar38[8];
                    ppppppplVar38[7] = pppppplStack_240;
                    ppppppplVar38[8] = pppppplVar68;
                    if (pppppplVar26 != (long ******)0x0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    plVar31 = plStack_238;
                    *(int *)(ppppppplVar38 + 9) = (int)ppppppplVar60;
                    *(char *)((long)ppppppplVar38 + 0x4c) = (char)((ulong)ppppppplVar60 >> 0x20);
                    if ((((ulong)ppppppplVar60 & 0x1f) == 0) &&
                       (pppppplVar68 = pppppplStack_240 + 0xc,
                       *pppppplVar68 == pppppplStack_240[0xd])) {
                      ppppppplStack_1c8 = (long *******)0x0;
                      ppppppplStack_1c0 = (long *******)0x0;
                      plStack_1b8 = (long *)0x0;
                      ppppppplStack_1e0 = (long *******)0x0;
                      ppppppplStack_1d8 = (long *******)0x0;
                      ppppppplStack_1d0 = (long *******)0x0;
                      ppppplStack_1f8 = (long *****)0x0;
                      ppppplStack_1f0 = (long *****)0x0;
                      ppppppplStack_1e8 = (long *******)0x0;
                      pppppplStack_210 = (long ******)0x0;
                      pppppplStack_208 = (long ******)0x0;
                      plStack_200 = (long *)0x0;
                      lVar46 = plStack_250[0x9e];
                      ppppppplStack_168 = (long *******)0x0;
                      uStack_170 = (long *******)0x0;
                      ppppplStack_158 = (long *****)0x0;
                      ppppppplStack_160 = (long *******)0x0;
                      pppppplStack_150 = (long ******)CONCAT44(pppppplStack_150._4_4_,0x3f800000);
                      pppppplStack_c8 = (long ******)0x0;
                      lVar51 = plStack_238[0x1b];
                      if (plStack_238[0x1c] != lVar51) {
                        do {
                          ppppppplVar94 = (long *******)(lVar51 + (long)pppppplStack_c8 * 0x18);
                          func_0x000109567428(&uStack_170,ppppppplVar94,ppppppplVar94,
                                              &pppppplStack_c8);
                          pppppplStack_c8 = (long ******)((long)pppppplStack_c8 + 1);
                          lVar51 = plVar31[0x1b];
                        } while (pppppplStack_c8 <
                                 (long ******)((plVar31[0x1c] - lVar51 >> 3) * -0x5555555555555555))
                        ;
                      }
                      lVar51 = plVar31[0xd];
                      if (lVar51 - plVar31[0xc] == 0) {
                        ppppplStack_280 = (long *****)0x0;
                        ppppplStack_270 = (long *****)0x0;
                        lVar66 = lVar51;
                      }
                      else {
                        ppppplStack_280 =
                             (long *****)((lVar51 - plVar31[0xc] >> 3) * -0x5555555555555555);
                        if ((ulong)ppppplStack_280 >> 0x3e != 0) {
                          FUN_10a910344();
LAB_10a903268:
                    /* WARNING: Does not return */
                          pcVar21 = (code *)SoftwareBreakpoint(1,0x10a90326c);
                          (*pcVar21)();
                        }
                        FUN_10a910358();
                        ppppplStack_270 =
                             (long *****)((long)ppppplStack_280 + (long)ppppppplVar94 * 4);
                        lVar51 = plVar31[0xc];
                        lVar66 = plVar31[0xd];
                      }
                      func_0x000107c27e9c(&ppppppplStack_1c8,
                                          (lVar66 - lVar51 >> 3) * -0x5555555555555555);
                      func_0x000107c28300(&ppppppplStack_1e0,
                                          (plVar31[0xd] - plVar31[0xc] >> 3) * -0x5555555555555555);
                      func_0x000104becb10(&ppppplStack_1f8,
                                          (plVar31[0xd] - plVar31[0xc] >> 3) * -0x5555555555555555);
                      FUN_10a8fc570(&pppppplStack_210,
                                    (plVar31[0xd] - plVar31[0xc] >> 3) * -0x5555555555555555);
                      lVar51 = plVar31[0xc];
                      ppppplStack_258 = ppppplStack_280;
                      if (plVar31[0xd] != lVar51) {
                        uVar72 = 0;
                        do {
                          lVar51 = lVar51 + uVar72 * 0x18;
                          puVar32 = &uStack_170;
                          lVar66 = lVar51;
                          func_0x000109240a28();
                          if (puVar32 == (undefined8 *)0x0) {
                            FUN_109ffdddc(&UNK_10f639994);
                            goto LAB_10a903268;
                          }
                          uVar54 = puVar32[5];
                          if ((ulong)(plVar31[0x1f] - plVar31[0x1e] >> 2) <= uVar54) {
                            FUN_10a04b1c0();
                            goto LAB_10a903268;
                          }
                          uVar79 = *(undefined4 *)(plVar31[0x1e] + uVar54 * 4);
                          if (ppppplStack_258 < ppppplStack_270) {
                            *(undefined4 *)ppppplStack_258 = uVar79;
                            ppppplVar33 = ppppplStack_280;
                            ppppplStack_258 = (long *****)((long)ppppplStack_258 + 4);
                          }
                          else {
                            lVar74 = (long)ppppplStack_258 - (long)ppppplStack_280;
                            uVar50 = (lVar74 >> 2) + 1;
                            if (uVar50 >> 0x3e != 0) {
                              FUN_10a910344();
                              goto LAB_10a903268;
                            }
                            uVar58 = (long)ppppplStack_270 - (long)ppppplStack_280 >> 1;
                            if (uVar58 <= uVar50) {
                              uVar58 = uVar50;
                            }
                            if (0x7ffffffffffffffb <
                                (ulong)((long)ppppplStack_270 - (long)ppppplStack_280)) {
                              uVar58 = 0x3fffffffffffffff;
                            }
                            FUN_10a910358();
                            puVar12 = (undefined4 *)(uVar58 + lVar74);
                            ppppplStack_270 = (long *****)(uVar58 + lVar66 * 4);
                            ppppplVar33 = (long *****)(puVar12 + -(lVar74 >> 2));
                            ppppplStack_258 = (long *****)(puVar12 + 1);
                            *puVar12 = uVar79;
                            _memcpy(ppppplVar33,ppppplStack_280,lVar74);
                            if (ppppplStack_280 != (long *****)0x0) {
                              __ZdlPv(ppppplStack_280);
                            }
                          }
                          ppppplStack_280 = ppppplVar33;
                          if ((ulong)(plVar31[0x22] - plVar31[0x21] >> 2) <= uVar54) {
                            FUN_10a04b1c0();
                            goto LAB_10a903268;
                          }
                          func_0x000109febdc8(&ppppppplStack_1c8,plVar31[0x21] + uVar54 * 4);
                          FUN_10a904d90(&pppppplStack_c8,plStack_250,pplVar35 + 4,lVar51);
                          ppppppplStack_e0 =
                               (long *******)
                               CONCAT26(uStack_c0._6_2_,
                                        CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                          FUN_10a908c78(&ppppppplStack_1e0,&ppppppplStack_e0);
                          func_0x0001078db3d4(&ppppplStack_1f8,&pppppplStack_c8);
                          lVar51 = *(long *)(lVar46 + 0xe0);
                          if (uVar72 < (ulong)(*(long *)(lVar46 + 0xe8) - lVar51 >> 4)) {
                            puVar32 = (undefined8 *)(lVar51 + uVar72 * 0x10);
                            ppppppplStack_d8 = (long *******)puVar32[1];
                            ppppppplStack_e0 = (long *******)*puVar32;
                            if (puVar32[1] != 0) {
                              plVar30 = (long *)(puVar32[1] + 8);
                              do {
                                cVar20 = '\x01';
                                bVar22 = (bool)ExclusiveMonitorPass(plVar30,0x10);
                                if (bVar22) {
                                  *plVar30 = *plVar30 + 1;
                                  cVar20 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar20 != '\0');
                            }
                          }
                          else {
                            ppppppplStack_e0 = (long *******)0x0;
                            ppppppplStack_d8 = (long *******)0x0;
                          }
                          FUN_10a0b5098(&pppppplStack_210,&ppppppplStack_e0);
                          ppppppplVar60 = ppppppplStack_d8;
                          if (ppppppplStack_d8 != (long *******)0x0) {
                            ppppppplVar94 = ppppppplStack_d8 + 1;
                            do {
                              pppppplVar26 = *ppppppplVar94;
                              cVar20 = '\x01';
                              bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                              if (bVar22) {
                                *ppppppplVar94 = (long ******)((long)pppppplVar26 + -1);
                                cVar20 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar20 != '\0');
                            if (pppppplVar26 == (long ******)0x0) {
                              (*(code *)(*ppppppplStack_d8)[2])(ppppppplStack_d8);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
                            }
                          }
                          uVar72 = uVar72 + 1;
                          lVar51 = plVar31[0xc];
                        } while (uVar72 < (ulong)((plVar31[0xd] - lVar51 >> 3) * -0x5555555555555555
                                                 ));
                      }
                      func_0x000109240b0c(&uStack_170);
                      plVar31 = plStack_238;
                      pppppplVar26 = pppppplStack_240;
                      pppppplStack_c8 = (long ******)0x0;
                      uStack_c0._0_1_ = 0;
                      uStack_c0._1_5_ = 0;
                      uStack_c0._6_2_ = 0;
                      ppppplVar33 = pppppplStack_240[0x10];
                      if (ppppplVar33 == (long *****)0x0) {
                        ppppplVar33 = (long *****)0x0;
LAB_10a902a68:
                        pppppplVar45 = (long ******)0x0;
                      }
                      else {
                        __ZNSt3__119__shared_weak_count4lockEv();
                        uStack_c0._0_1_ = SUB81(ppppplVar33,0);
                        uStack_c0._1_5_ = (undefined5)((ulong)ppppplVar33 >> 8);
                        uStack_c0._6_2_ = (undefined2)((ulong)ppppplVar33 >> 0x30);
                        if (ppppplVar33 == (long *****)0x0) goto LAB_10a902a68;
                        pppppplVar45 = (long ******)pppppplVar26[0xf];
                        pppppplStack_c8 = pppppplVar45;
                      }
                      if (pppppplVar26[0x2aa] != (long *****)0x0) {
                        ppppplVar34 = pppppplVar26[0xc];
                        ppppplVar64 = pppppplVar26[0xd];
                        while (ppppplVar64 != ppppplVar34) {
                          ppppplVar64 = ppppplVar64 + -0x12;
                          FUN_10a8fdc18();
                        }
                        pppppplStack_240[0xd] = ppppplVar34;
                        lVar51 = plVar31[9];
                        if (plVar31[10] != lVar51) {
                          ppppplVar33 = (long *****)0x0;
                          ppppplStack_270 =
                               (long *****)
                               CONCAT44(ppppplStack_270._4_4_,*(undefined4 *)(pppppplVar45 + 0x42));
                          ppppplVar34 = pppppplVar45[0x2d];
                          ppppplStack_258 =
                               (long *****)((long)ppppplStack_258 - (long)ppppplStack_280 >> 2);
                          pppppplVar26 = pppppplStack_240;
                          do {
                            uStack_170 = (long *******)0x0;
                            ppppppplStack_168 =
                                 (long *******)((ulong)ppppppplStack_168 & 0xffffffff00000000);
                            ppppppplStack_160 = (long *******)0x0;
                            ppppplStack_158 = (long *****)0x0;
                            pppppplStack_150 =
                                 (long ******)
                                 CONCAT35((int3)((ulong)pppppplStack_150 >> 0x28),0x100000000);
                            ppppppplStack_140 = (long *******)0x0;
                            ppppppplStack_148 = (long *******)0x0;
                            ppppppplStack_130 = (long *******)0x0;
                            ppppppplStack_138 = (long *******)0x0;
                            ppppppplStack_120 = (long *******)0x0;
                            ppppppplStack_128 = (long *******)0x0;
                            ppppppplStack_110 = (long *******)0x0;
                            ppppppplStack_118 = (long *******)0x0;
                            ppppppplStack_100 = (long *******)0x0;
                            uStack_108 = (long *******)0x0;
                            pppppplStack_f8 =
                                 (long ******)((ulong)pppppplStack_f8 & 0xffffffffffffff00);
                            ppppplStack_e8 = pppppplVar26[0x2ab];
                            ppppplStack_f0 = pppppplVar26[0x2aa];
                            if (pppppplVar26[0x2ab] != (long *****)0x0) {
                              ppppplVar64 = pppppplVar26[0x2ab] + 2;
                              do {
                                cVar20 = '\x01';
                                bVar22 = (bool)ExclusiveMonitorPass(ppppplVar64,0x10);
                                if (bVar22) {
                                  *ppppplVar64 = (long ****)((long)*ppppplVar64 + 1);
                                  cVar20 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar20 != '\0');
                            }
                            plVar30 = (long *)(lVar51 + (long)ppppplVar33 * 0x10);
                            func_0x00010a04a780(&ppppppplStack_118,plVar30);
                            if (ppppplVar33 < ppppplStack_258) {
                              uVar79 = *(undefined4 *)
                                        ((long)ppppplStack_280 + (long)ppppplVar33 * 4);
                            }
                            else {
                              uVar79 = 0;
                            }
                            if (ppppplVar33 <
                                (long *****)((long)ppppppplStack_1c0 - (long)ppppppplStack_1c8 >> 2)
                               ) {
                              uVar82 = *(undefined4 *)
                                        ((long)ppppppplStack_1c8 + (long)ppppplVar33 * 4);
                            }
                            else {
                              uVar82 = 0;
                            }
                            uStack_108 = (long *******)CONCAT44(uVar82,uVar79);
                            if (ppppplVar33 <
                                (long *****)((long)ppppppplStack_1d8 - (long)ppppppplStack_1e0 >> 3)
                               ) {
                              ppppppplStack_100 = (long *******)ppppppplStack_1e0[(long)ppppplVar33]
                              ;
                            }
                            else {
                              ppppppplStack_100 = (long *******)0x0;
                            }
                            if (ppppplVar33 < ppppplStack_1f0) {
                              bVar41 = (byte)((ulong)ppppplStack_1f8[(ulong)ppppplVar33 >> 6] >>
                                             ((ulong)ppppplVar33 & 0x3f)) & 1;
                            }
                            else {
                              bVar41 = 0;
                            }
                            pppppplStack_f8 = (long ******)CONCAT71(pppppplStack_f8._1_7_,bVar41);
                            if (ppppplVar33 <
                                (long *****)((long)pppppplStack_208 - (long)pppppplStack_210 >> 4))
                            {
                              pppppplVar45 = pppppplStack_210 + (long)ppppplVar33 * 2;
                              ppppppplStack_d8 = (long *******)pppppplVar45[1];
                              ppppppplStack_e0 = (long *******)*pppppplVar45;
                              if (pppppplVar45[1] != (long *****)0x0) {
                                ppppplVar64 = pppppplVar45[1] + 1;
                                do {
                                  cVar20 = '\x01';
                                  bVar22 = (bool)ExclusiveMonitorPass(ppppplVar64,0x10);
                                  if (bVar22) {
                                    *ppppplVar64 = (long ****)((long)*ppppplVar64 + 1);
                                    cVar20 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar20 != '\0');
                              }
                            }
                            else {
                              ppppppplStack_e0 = (long *******)0x0;
                              ppppppplStack_d8 = (long *******)0x0;
                            }
                            FUN_10a19ad28(&ppppppplStack_138,&ppppppplStack_e0);
                            ppppppplVar60 = ppppppplStack_d8;
                            if (ppppppplStack_d8 != (long *******)0x0) {
                              ppppppplVar94 = ppppppplStack_d8 + 1;
                              do {
                                pppppplVar45 = *ppppppplVar94;
                                cVar20 = '\x01';
                                bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                                if (bVar22) {
                                  *ppppppplVar94 = (long ******)((long)pppppplVar45 + -1);
                                  cVar20 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar20 != '\0');
                              if (pppppplVar45 == (long ******)0x0) {
                                (*(code *)(*ppppppplStack_d8)[2])(ppppppplStack_d8);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
                              }
                            }
                            FUN_10a19ad28(&ppppppplStack_128,lVar65 + 0x20);
                            pppppplStack_150 =
                                 (long ******)
                                 CONCAT44(pppppplStack_150._4_4_,
                                          uStack_108._4_4_ + (int)ppppplStack_270);
                            if ((char)pppppplStack_f8 == '\x01') {
                              ppppplStack_158 = (long *****)0x0;
                              ppppppplStack_160 = ppppppplStack_100;
                            }
                            else {
                              ppppppplStack_160 = (long *******)ppppplVar34[0x26];
                              ppppplStack_158 = (long *****)ppppplVar34[0x27];
                            }
                            if (*plVar30 == 0) {
                              FUN_10a8fdf28(pppppplVar68,&uStack_170);
                            }
                            else {
                              ppppppplStack_e0 = ppppppplStack_128;
                              ppppppplStack_d8 = ppppppplStack_120;
                              if (((int)uStack_108 == 1) && (ppppppplStack_138 != (long *******)0x0)
                                 ) {
                                ppppppplStack_e0 = ppppppplStack_138;
                                ppppppplStack_d8 = ppppppplStack_130;
                              }
                              if (ppppppplStack_d8 != (long *******)0x0) {
                                ppppppplVar60 = ppppppplStack_d8 + 1;
                                do {
                                  cVar20 = '\x01';
                                  bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar60,0x10);
                                  if (bVar22) {
                                    *ppppppplVar60 = (long ******)((long)*ppppppplVar60 + 1);
                                    cVar20 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar20 != '\0');
                              }
                              ppppplVar64 = pppppplVar26[0x2aa] + 8;
                              func_0x00010a97784c(ppppplVar64,&ppppppplStack_e0,plVar30);
                              uStack_170 = (long *******)
                                           CONCAT44(uStack_170._4_4_,(uint)ppppplVar64);
                              pppppplVar45 = pppppplVar26 + 0x2aa;
                              FUN_10a8fe098(pppppplVar45,ppppplVar64);
                              if ((int)pppppplVar45 != 0) {
                                uVar72 = (ulong)((uint)ppppplVar64 & 0x3fff);
                                pppplVar55 = pppppplVar26[0x2aa][8];
                                uVar54 = ((long)pppppplVar26[0x2aa][9] - (long)pppplVar55 >> 4) *
                                         0x4ec4ec4ec4ec4ec5;
                                if (uVar54 < uVar72 || uVar54 - uVar72 == 0) goto LAB_10a903268;
                                *(undefined4 *)(pppplVar55 + uVar72 * 0x1a + 0xd) = 0x3f800000;
                                *(undefined8 *)((long)pppplVar55 + uVar72 * 0xd0 + 0x74) = 0;
                                *(undefined8 *)((long)pppplVar55 + uVar72 * 0xd0 + 0x6c) = 0;
                                *(undefined4 *)((long)pppplVar55 + uVar72 * 0xd0 + 0x7c) =
                                     0x3f800000;
                                pppplVar55[uVar72 * 0x1a + 0x10] = (long ***)0x0;
                                pppplVar55[uVar72 * 0x1a + 0x11] = (long ***)0x0;
                                *(undefined4 *)(pppplVar55 + uVar72 * 0x1a + 0x12) = 0x3f800000;
                                *(undefined8 *)((long)pppplVar55 + uVar72 * 0xd0 + 0x9c) = 0;
                                *(undefined8 *)((long)pppplVar55 + uVar72 * 0xd0 + 0x94) = 0;
                                *(undefined4 *)((long)pppplVar55 + uVar72 * 0xd0 + 0xa4) =
                                     0x3f800000;
                                *(char *)((long)pppplVar55 + uVar72 * 0xd0 + 0xaa) = (char)uVar15;
                                *(long *)((long)pppplVar55 + uVar72 * 0xd0 + 0xbc) = lStack_188;
                                *(long *)((long)pppplVar55 + uVar72 * 0xd0 + 0xb4) = lStack_190;
                                *(int *)((long)pppplVar55 + uVar72 * 0xd0 + 0xc4) = (int)lVar53;
                                pppppplVar26 = pppppplStack_240;
                              }
                              FUN_10a8fde00(&uStack_170,pppppplVar26[0x2aa]);
                              ppppplVar64 = pppppplVar26[0x2aa] + 4;
                              FUN_10a8fe104(ppppplVar64,0);
                              ppppppplVar60 = uStack_170;
                              uVar36 = (uint)ppppplVar64;
                              uStack_170 = (long *******)CONCAT44(uVar36,(undefined4)uStack_170);
                              ppppplVar29 = pppppplVar26[0x2aa];
                              if ((uVar36 != 0) && (ppppplVar29 != (long *****)0x0)) {
                                pppplVar55 = ppppplVar29[4];
                                uVar72 = (ulong)(uVar36 & 0x3fff);
                                uVar54 = ((long)ppppplVar29[5] - (long)pppplVar55 >> 3) *
                                         -0x3333333333333333;
                                if ((uVar72 <= uVar54 && uVar54 - uVar72 != 0) &&
                                   ((pppplVar55 = pppplVar55 + uVar72 * 5,
                                    *(uint *)((long)pppplVar55 + 4) == uVar36 &&
                                    (*(char *)pppplVar55 != '\x02')))) {
                                  FUN_10a8fe160(ppppplVar29 + 4,ppppplVar64,
                                                (ulong)ppppppplVar60 & 0xffffffff);
                                  ppppplVar29 = pppppplStack_240[0x2aa];
                                }
                              }
                              FUN_10a977418(ppppplVar29,0,0,0,(ulong)pppppplStack_150 & 0xffffffff);
                              uVar36 = (uint)ppppplVar29;
                              ppppppplStack_168 =
                                   (long *******)CONCAT44(ppppppplStack_168._4_4_,uVar36);
                              ppppplVar64 = pppppplStack_240[0x2aa];
                              if ((uVar36 != 0) && (ppppplVar64 != (long *****)0x0)) {
                                uVar72 = (ulong)(uVar36 & 0x3fff);
                                uVar54 = ((long)ppppplVar64[1] - (long)*ppppplVar64 >> 3) *
                                         -0x71c71c71c71c71c7;
                                if ((uVar72 <= uVar54 && uVar54 - uVar72 != 0) &&
                                   ((pppplVar55 = *ppppplVar64 + uVar72 * 9,
                                    *(uint *)((long)pppplVar55 + 4) == uVar36 &&
                                    (*(char *)pppplVar55 != '\x02')))) {
                                  FUN_10a97765c(ppppplVar64,ppppplVar29,uStack_170._4_4_);
                                  uVar72 = (ulong)ppppppplStack_168 & 0x3fff;
                                  uVar54 = ((long)ppppplVar64[1] - (long)*ppppplVar64 >> 3) *
                                           -0x71c71c71c71c71c7;
                                  if (uVar54 < uVar72 || uVar54 - uVar72 == 0) goto LAB_10a903268;
                                  *(undefined1 *)(*ppppplVar64 + uVar72 * 9) = 1;
                                  ppppplVar64 = pppppplStack_240[0x2aa];
                                }
                              }
                              pppppplVar26 = pppppplStack_240;
                              FUN_10a8fe1b8(ppppplVar64);
                              plVar30 = (long *)*plVar30;
                              FUN_10ab46af4();
                              plStack_180 = (long *)*plVar30;
                              plVar30 = (long *)plVar30[1];
                              if (plVar30 != (long *)0x0) {
                                plVar49 = plVar30 + 1;
                                do {
                                  cVar20 = '\x01';
                                  bVar22 = (bool)ExclusiveMonitorPass(plVar49,0x10);
                                  if (bVar22) {
                                    *plVar49 = *plVar49 + 1;
                                    cVar20 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar20 != '\0');
                              }
                              plStack_178 = plVar30;
                              if (plStack_180 != (long *)0x0) {
                                if (*(int *)(pppppplVar26 + 0x2a6) == 1) {
                                  *(undefined4 *)((long)plStack_180 + 0x22c) = 0xcb18967f;
                                  plStack_180[0x46] = -0x34e7698034e76981;
                                  uVar79 = uVar89;
                                  uVar82 = uVar89;
                                  uVar84 = uVar89;
                                }
                                else {
                                  ppppplVar64 = pppppplVar26[0x2a7];
                                  *(undefined4 *)((long)plStack_180 + 0x22c) =
                                       *(undefined4 *)((long)pppppplVar26 + 0x1534);
                                  plStack_180[0x46] = (long)ppppplVar64;
                                  uVar79 = *(undefined4 *)(pppppplVar26 + 0x2a8);
                                  uVar82 = *(undefined4 *)((long)pppppplVar26 + 0x1544);
                                  uVar84 = *(undefined4 *)(pppppplVar26 + 0x2a9);
                                }
                                *(undefined4 *)(plStack_180 + 0x47) = uVar79;
                                *(undefined4 *)((long)plStack_180 + 0x23c) = uVar82;
                                *(undefined4 *)(plStack_180 + 0x48) = uVar84;
                                func_0x00010a3327d4(plStack_180,2);
                              }
                              if (plVar30 != (long *)0x0) {
                                plVar49 = plVar30 + 1;
                                do {
                                  lVar51 = *plVar49;
                                  cVar20 = '\x01';
                                  bVar22 = (bool)ExclusiveMonitorPass(plVar49,0x10);
                                  if (bVar22) {
                                    *plVar49 = lVar51 + -1;
                                    cVar20 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar20 != '\0');
                                if (lVar51 == 0) {
                                  (**(code **)(*plVar30 + 0x10))(plVar30);
                                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
                                }
                              }
                              FUN_10a8fdf28(pppppplVar68,&uStack_170);
                              ppppppplVar60 = ppppppplStack_d8;
                              if (ppppppplStack_d8 != (long *******)0x0) {
                                ppppppplVar94 = ppppppplStack_d8 + 1;
                                do {
                                  pppppplVar45 = *ppppppplVar94;
                                  cVar20 = '\x01';
                                  bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                                  if (bVar22) {
                                    *ppppppplVar94 = (long ******)((long)pppppplVar45 + -1);
                                    cVar20 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar20 != '\0');
                                if (pppppplVar45 == (long ******)0x0) {
                                  (*(code *)(*ppppppplStack_d8)[2])(ppppppplStack_d8);
                                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
                                }
                              }
                            }
                            FUN_10a8fdc18(&uStack_170);
                            ppppplVar33 = (long *****)((long)ppppplVar33 + 1);
                            lVar51 = plVar31[9];
                          } while (ppppplVar33 < (long *****)(plVar31[10] - lVar51 >> 4));
                          ppppplVar33 = (long *****)
                                        CONCAT26(uStack_c0._6_2_,
                                                 CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                        }
                      }
                      if (ppppplVar33 != (long *****)0x0) {
                        ppppplVar34 = ppppplVar33 + 1;
                        do {
                          pppplVar55 = *ppppplVar34;
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppplVar34,0x10);
                          if (bVar22) {
                            *ppppplVar34 = (long ****)((long)pppplVar55 + -1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                        if (pppplVar55 == (long ****)0x0) {
                          (*(code *)(*ppppplVar33)[2])(ppppplVar33);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar33);
                        }
                      }
                      uStack_170 = &pppppplStack_210;
                      FUN_10a0cffec(&uStack_170);
                      if (ppppplStack_1f8 != (long *****)0x0) {
                        __ZdlPv();
                      }
                      if (ppppppplStack_1e0 != (long *******)0x0) {
                        ppppppplStack_1d8 = ppppppplStack_1e0;
                        __ZdlPv();
                      }
                      if (ppppppplStack_1c8 != (long *******)0x0) {
                        ppppppplStack_1c0 = ppppppplStack_1c8;
                        __ZdlPv();
                      }
                      if (ppppplStack_280 != (long *****)0x0) {
                        __ZdlPv();
                      }
                    }
                  }
                  pppppplVar68 = uStack_1a8;
                  param_1 = plStack_250;
                  plVar30 = plStack_230;
                  if (uStack_1a8 != (long ******)0x0) {
                    pppppplVar26 = uStack_1a8 + 1;
                    do {
                      ppppplVar33 = *pppppplVar26;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                      if (bVar22) {
                        *pppppplVar26 = (long *****)((long)ppppplVar33 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar33 == (long *****)0x0) {
                      (*(code *)(*uStack_1a8)[2])(uStack_1a8);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar68);
                      plVar30 = plStack_230;
                    }
                  }
                }
                else {
                  plVar31 = plStack_278;
                  if (*(char *)((long)param_1 + 0x167) < '\0') {
                    plVar31 = (long *)*plStack_278;
                  }
                  __ZNSt3__19to_stringEj(&uStack_170,999999);
                  ppppppplVar60 = uStack_170;
                  if (-1 < (long)ppppppplStack_160) {
                    ppppppplVar60 = (long *******)&uStack_170;
                  }
                  func_0x00010ae06f08(1,0x12,&UNK_10f6821fc,&UNK_10f6821fc,0xffffffff,&UNK_10f6825cc
                                      ,in_x6,in_x7,plVar31,ppppppplVar60);
                  param_1 = plStack_250;
                  if ((long)ppppppplStack_160 < 0) {
                    __ZdlPv(uStack_170);
                  }
                }
              }
              if (plVar30 != (long *)0x0) {
                plVar31 = plVar30 + 1;
                do {
                  lVar51 = *plVar31;
                  cVar20 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                  if (bVar22) {
                    *plVar31 = lVar51 + -1;
                    cVar20 = ExclusiveMonitorsStatus();
                  }
                } while (cVar20 != '\0');
                if (lVar51 == 0) {
                  (**(code **)(*plVar30 + 0x10))(plVar30);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
                }
              }
            }
            pplVar28 = (long **)pplVar35[1];
            pplVar77 = pplVar35;
            if ((long **)pplVar35[1] == (long **)0x0) {
              do {
                pplVar35 = (long **)pplVar77[2];
                bVar22 = (long **)*pplVar35 != pplVar77;
                pplVar77 = pplVar35;
              } while (bVar22);
            }
            else {
              do {
                pplVar35 = pplVar28;
                pplVar28 = (long **)*pplVar35;
              } while ((long **)*pplVar35 != (long **)0x0);
            }
          } while (pplVar35 != pplStack_248);
        }
        func_0x000107c27bf0(&pplStack_228,plStack_220);
      }
      return;
    }
    FUN_10a0edfc4(&uStack_170);
  }
  lVar46 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a9085f8();
  lVar51 = param_1[0x2d];
  if (param_1[0x2e] == 0) {
    ppuVar24 = &PTR___tlv_bootstrap_11340dee8;
    (*(code *)PTR___tlv_bootstrap_11340dee8)();
    puVar43 = *ppuVar24;
    if (puVar43 != (undefined *)0x0) goto LAB_10a9050c8;
    FUN_10a3ca004();
    pbVar25 = (byte *)0x113836510;
    FUN_10ad0621c();
    uVar72 = (ulong)(*pbVar25 >> 4 & 4);
    puVar43 = ppuVar24[uVar72 + 7];
    if (puVar43 != (undefined *)0x0) goto LAB_10a9050c8;
    FUN_10a3ca05c(ppuVar24,uVar72);
    puVar43 = ppuVar24[uVar72 + 7];
    uStack_c0._0_1_ = 0x35;
    uStack_c0._1_5_ = 0x10f646d;
    uStack_c0._6_2_ = 0;
    uStack_b8 = 0x26;
    uStack_b2 = 0;
    if (puVar43 != (undefined *)0x0) goto LAB_10a9050c8;
  }
  else {
    puVar43 = *(undefined **)(*(long *)(param_1[0x2e] + 0x100) + 0x260);
    uStack_c0._0_1_ = 0x20;
    uStack_c0._1_5_ = 0x10f653c;
    uStack_c0._6_2_ = 0;
    uStack_b8 = 0x21;
    uStack_b2 = 0;
    if (puVar43 == (undefined *)0x0) {
      FUN_10a0edfc4(&uStack_c0);
      goto LAB_10a907c3c;
    }
LAB_10a9050c8:
    plVar31 = *(long **)(puVar43 + 0x228);
    (**(code **)(*plVar31 + 0x68))();
    if (0xf < *(int *)((long)plVar31 + 0x8c)) {
      FUN_10a8fc8e8(&ppppppplStack_d8,param_1[0x9e]);
      if (ppppppplStack_d8 != &pppppplStack_d0) {
        plVar31 = param_1 + 0xbc;
        plVar30 = param_1 + 0xc3;
        plVar49 = param_1 + 0xc5;
        plVar44 = param_1 + 0xcc;
        plVar1 = param_1 + 0xce;
        plVar2 = param_1 + 0xd7;
        plVar3 = param_1 + 0xe0;
        plVar4 = param_1 + 0xeb;
        plVar5 = param_1 + 0xed;
        plVar6 = param_1 + 0xef;
        plVar7 = param_1 + 0xf1;
        plVar8 = param_1 + 0xf3;
        plVar9 = param_1 + 0xf5;
        plVar93 = param_1 + 0x123;
        ppppppplVar48 = ppppppplStack_d8;
        do {
          ppppppplVar60 = ppppppplVar48 + 4;
          lVar65 = param_1[0x9e];
          lVar53 = lVar65 + 0xf8;
          FUN_10a9176b0(lVar53,ppppppplVar60);
          if (lVar65 + 0x100 != lVar53) {
            ppppplStack_e8 = *(long ******)(lVar53 + 0x38);
            ppppppplStack_e0 = *(long ********)(lVar53 + 0x40);
            if (ppppppplStack_e0 != (long *******)0x0) {
              ppppppplVar94 = ppppppplStack_e0 + 1;
              do {
                cVar20 = '\x01';
                bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                if (bVar22) {
                  *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                  cVar20 = ExclusiveMonitorsStatus();
                }
              } while (cVar20 != '\0');
            }
            if (ppppplStack_e8 != (long *****)0x0) {
              pppppplStack_f8 = (long ******)ppppplStack_e8[3];
              ppppplStack_f0 = (long *****)ppppplStack_e8[4];
              if (ppppplStack_f0 != (long *****)0x0) {
                ppppplVar33 = ppppplStack_f0 + 1;
                do {
                  cVar20 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(ppppplVar33,0x10);
                  if (bVar22) {
                    *ppppplVar33 = (long ****)((long)*ppppplVar33 + 1);
                    cVar20 = ExclusiveMonitorsStatus();
                  }
                } while (cVar20 != '\0');
              }
              if (pppppplStack_f8 != (long ******)0x0) {
                lVar65 = param_1[0x2e];
                ppppppplVar94 = ppppppplVar60;
                __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                          (&uStack_c0,&UNK_10f682546,ppppppplVar60);
                lVar53 = lVar65;
                FUN_10a3dd220(lVar65);
                func_0x00010a0fda30();
                FUN_10a3dd268(lVar65,lVar53,ppppppplVar94,&uStack_c0);
                FUN_10a0c3500(lVar65,lVar51);
                func_0x00010a3e4590(lVar65,0);
                ppppppplVar94 = (long *******)&ppppppplStack_128;
                puVar43 = &UNK_10f6821fc;
                func_0x000107c2b054(ppppppplVar94,&UNK_10f6821fc);
                uVar69 = *(undefined8 *)(lVar65 + 0x120);
                func_0x00010a0fda30();
                FUN_10a3b8ecc(&ppppppplStack_110,uVar69,ppppppplVar94,puVar43);
                ppppppplVar94 = ppppppplStack_128;
                ppppppplVar38 = ppppppplStack_120;
                if (-1 < (long)ppppppplStack_118) {
                  ppppppplVar94 = (long *******)&ppppppplStack_128;
                  ppppppplVar38 = (long *******)((ulong)ppppppplStack_118 >> 0x38);
                }
                func_0x000107c2c4d8(ppppppplStack_110 + 0x2a,ppppppplVar94,ppppppplVar38);
                ppppppplStack_198 = uStack_108;
                ppppppplStack_1a0 = ppppppplStack_110;
                if (uStack_108 != (long *******)0x0) {
                  ppppppplVar94 = uStack_108 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                    if (bVar22) {
                      *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                }
                ppppppplVar95 = (long *******)0x0;
                ppppppplVar94 = (long *******)0x0;
                ppppppplStack_a8 = (long *******)0x0;
                ppppppplStack_b0 = (long *******)0x0;
                uStack_c0._0_1_ = 0x18;
                uStack_c0._1_5_ = 0x10a0d4f;
                uStack_c0._6_2_ = 0;
                uStack_b8 = 0x110950c70;
                uStack_b2 = 0;
                FUN_10a3e4814(lVar65,&ppppppplStack_1a0,&uStack_c0);
                (**(code **)CONCAT26(uStack_b2,uStack_b8))(&uStack_b8);
                ppppppplVar38 = ppppppplStack_198;
                if (ppppppplStack_198 != (long *******)0x0) {
                  ppppppplVar76 = ppppppplStack_198 + 1;
                  do {
                    pppppplVar52 = *ppppppplVar76;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                    if (bVar22) {
                      *ppppppplVar76 = (long ******)((long)pppppplVar52 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (pppppplVar52 == (long ******)0x0) {
                    (*(code *)(*ppppppplStack_198)[2])(ppppppplStack_198);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar38);
                  }
                }
                if ((long)ppppppplStack_118 < 0) {
                  __ZdlPv(ppppppplStack_128);
                }
                (*(code *)(*ppppppplStack_110)[0xd])(ppppppplStack_110,0);
                ppppppplVar38 = ppppppplStack_110;
                __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                          (&uStack_c0,"system",ppppppplVar60);
                puVar37 = (undefined1 *)
                          CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                uVar72 = CONCAT26(uStack_b2,uStack_b8);
                if (-1 < (long)ppppppplStack_b0) {
                  puVar37 = (undefined1 *)&uStack_c0;
                  uVar72 = (ulong)ppppppplStack_b0 >> 0x38;
                }
                func_0x000107c2c4d8(ppppppplVar38 + 0x2a,puVar37,uVar72);
                *(undefined1 *)(ppppppplStack_110 + 1) = 1;
                ppppppplVar38 = &pppppplStack_f8;
                ppppppplVar71 = ppppppplStack_110;
                FUN_10a39c6b8();
                ppppplVar33 = ppppplStack_e8;
                ppppppplVar76 = ppppppplStack_110;
                if (ppppplStack_e8[5] != (long ****)0x0) {
                  func_0x000107c2b054(&ppppppplStack_128,&UNK_10f682551);
                  ppppppplStack_138 = (long *******)ppppplVar33[5];
                  ppppppplVar94 = (long *******)ppppplVar33[6];
                  if (ppppppplVar94 == (long *******)0x0) {
                    ppppppplVar95 = (long *******)0x0;
                  }
                  else {
                    ppppppplVar38 = ppppppplVar94 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                      if (bVar22) {
                        *ppppppplVar38 = (long ******)((long)*ppppppplVar38 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    ppppppplVar95 = ppppppplVar94 + 2;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar95,0x10);
                      if (bVar22) {
                        *ppppppplVar95 = (long ******)((long)*ppppppplVar95 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                      if (bVar22) {
                        *ppppppplVar38 = (long ******)((long)*ppppppplVar38 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                      ppppppplVar95 = ppppppplVar94;
                    } while (cVar20 != '\0');
                  }
                  ppppppplStack_b0 = (long *******)0xe00000000000000;
                  uStack_b2 = 0;
                  uStack_b8 = 0x6c6169726574;
                  uStack_c0._6_2_ = 0x614d;
                  uStack_c0._1_5_ = 0x2e74657373;
                  uStack_c0._0_1_ = 0x41;
                  ppppppplVar38 = (long *******)&ppppppplStack_128;
                  ppppppplStack_130 = ppppppplVar94;
                  ppppppplStack_a8 = ppppppplStack_138;
                  FUN_10a39a09c(ppppppplVar76,ppppppplVar38,&uStack_c0);
                  if (ppppppplVar94 != (long *******)0x0) {
                    ppppppplVar76 = ppppppplVar94 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar76;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                      if (bVar22) {
                        *ppppppplVar76 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplVar94)[2])(ppppppplVar94);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                    }
                  }
                  ppppppplVar71 = ppppppplVar95;
                  if (ppppppplVar95 != (long *******)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  ppppppplVar76 = ppppppplStack_130;
                  if (ppppppplStack_130 != (long *******)0x0) {
                    ppppppplVar10 = ppppppplStack_130 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar10;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar10,0x10);
                      if (bVar22) {
                        *ppppppplVar10 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplStack_130)[2])(ppppppplStack_130);
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                      ppppppplVar71 = ppppppplVar76;
                    }
                  }
                  if ((long)ppppppplStack_118 < 0) {
                    ppppppplVar71 = ppppppplStack_128;
                    __ZdlPv();
                  }
                }
                ppppplVar33 = ppppplStack_e8;
                ppppppplVar76 = ppppppplStack_110;
                if (ppppplStack_e8[7] != (long ****)0x0) {
                  func_0x000107c2b054(&ppppppplStack_128,&UNK_10f682563);
                  ppppppplStack_148 = (long *******)ppppplVar33[7];
                  ppppppplVar94 = (long *******)ppppplVar33[8];
                  if (ppppppplVar94 == (long *******)0x0) {
                    ppppppplVar95 = (long *******)0x0;
                  }
                  else {
                    ppppppplVar38 = ppppppplVar94 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                      if (bVar22) {
                        *ppppppplVar38 = (long ******)((long)*ppppppplVar38 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    ppppppplVar95 = ppppppplVar94 + 2;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar95,0x10);
                      if (bVar22) {
                        *ppppppplVar95 = (long ******)((long)*ppppppplVar95 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                      if (bVar22) {
                        *ppppppplVar38 = (long ******)((long)*ppppppplVar38 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                      ppppppplVar95 = ppppppplVar94;
                    } while (cVar20 != '\0');
                  }
                  ppppppplStack_b0 = (long *******)0xe00000000000000;
                  uStack_b2 = 0;
                  uStack_b8 = 0x6c6169726574;
                  uStack_c0._6_2_ = 0x614d;
                  uStack_c0._1_5_ = 0x2e74657373;
                  uStack_c0._0_1_ = 0x41;
                  ppppppplVar38 = (long *******)&ppppppplStack_128;
                  ppppppplStack_140 = ppppppplVar94;
                  ppppppplStack_a8 = ppppppplStack_148;
                  FUN_10a39a09c(ppppppplVar76,ppppppplVar38,&uStack_c0);
                  if (ppppppplVar94 != (long *******)0x0) {
                    ppppppplVar76 = ppppppplVar94 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar76;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                      if (bVar22) {
                        *ppppppplVar76 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplVar94)[2])(ppppppplVar94);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                    }
                  }
                  ppppppplVar71 = ppppppplVar95;
                  if (ppppppplVar95 != (long *******)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  ppppppplVar76 = ppppppplStack_140;
                  if (ppppppplStack_140 != (long *******)0x0) {
                    ppppppplVar10 = ppppppplStack_140 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar10;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar10,0x10);
                      if (bVar22) {
                        *ppppppplVar10 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplStack_140)[2])(ppppppplStack_140);
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                      ppppppplVar71 = ppppppplVar76;
                    }
                  }
                  if ((long)ppppppplStack_118 < 0) {
                    ppppppplVar71 = ppppppplStack_128;
                    __ZdlPv();
                  }
                }
                ppppppplVar76 = ppppppplStack_110;
                if (*(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18) < 0x15c) {
                  pppplVar55 = ppppplStack_e8[9];
                  if (ppppplStack_e8[10] != pppplVar55) {
                    ppppppplVar38 = (long *******)*pppplVar55;
                    ppppppplVar71 = (long *******)pppplVar55[1];
                    if (ppppppplVar71 != (long *******)0x0) {
                      ppppppplVar10 = ppppppplVar71 + 1;
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar10,0x10);
                        if (bVar22) {
                          *ppppppplVar10 = (long ******)((long)*ppppppplVar10 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                    }
                    ppppppplStack_1a0 = ppppppplVar38;
                    ppppppplStack_198 = ppppppplVar71;
                    if (ppppppplVar38 != (long *******)0x0) {
                      func_0x000107c2b054(&ppppppplStack_128,&UNK_10f682589);
                      if (ppppppplVar71 == (long *******)0x0) {
                        ppppppplVar95 = (long *******)0x0;
                      }
                      else {
                        ppppppplVar94 = ppppppplVar71 + 1;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                          if (bVar22) {
                            *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                        ppppppplVar95 = ppppppplVar71 + 2;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar95,0x10);
                          if (bVar22) {
                            *ppppppplVar95 = (long ******)((long)*ppppppplVar95 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                          if (bVar22) {
                            *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                          ppppppplVar95 = ppppppplVar71;
                        } while (cVar20 != '\0');
                      }
                      ppppppplStack_b0 = (long *******)0xe00000000000000;
                      uStack_b2 = 0;
                      uStack_b8 = 0x6c6169726574;
                      uStack_c0._6_2_ = 0x614d;
                      uStack_c0._1_5_ = 0x2e74657373;
                      uStack_c0._0_1_ = 0x41;
                      ppppppplStack_1d8 = ppppppplVar38;
                      ppppppplStack_1d0 = ppppppplVar71;
                      ppppppplStack_a8 = ppppppplVar38;
                      FUN_10a39a09c(ppppppplVar76,&ppppppplStack_128,&uStack_c0);
                      if (ppppppplVar71 != (long *******)0x0) {
                        ppppppplVar94 = ppppppplVar71 + 1;
                        do {
                          pppppplVar52 = *ppppppplVar94;
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                          if (bVar22) {
                            *ppppppplVar94 = (long ******)((long)pppppplVar52 + -1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                        if (pppppplVar52 == (long ******)0x0) {
                          (*(code *)(*ppppppplVar71)[2])(ppppppplVar71);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar71);
                        }
                      }
                      if (ppppppplVar95 != (long *******)0x0) {
                        __ZNSt3__119__shared_weak_count14__release_weakEv();
                      }
                      ppppppplVar94 = ppppppplStack_1d0;
                      if (ppppppplStack_1d0 != (long *******)0x0) {
                        ppppppplVar38 = ppppppplStack_1d0 + 1;
                        do {
                          pppppplVar52 = *ppppppplVar38;
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                          if (bVar22) {
                            *ppppppplVar38 = (long ******)((long)pppppplVar52 + -1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                        if (pppppplVar52 == (long ******)0x0) {
                          (*(code *)(*ppppppplStack_1d0)[2])(ppppppplStack_1d0);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                        }
                      }
                      ppppppplVar94 = ppppppplVar71;
                      if ((long)ppppppplStack_118 < 0) {
                        __ZdlPv(ppppppplStack_128);
                      }
                    }
                    ppppppplVar38 = ppppppplStack_198;
                    if (ppppppplStack_198 != (long *******)0x0) {
                      ppppppplVar76 = ppppppplStack_198 + 1;
                      do {
                        pppppplVar52 = *ppppppplVar76;
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                        if (bVar22) {
                          *ppppppplVar76 = (long ******)((long)pppppplVar52 + -1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      if (pppppplVar52 == (long ******)0x0) {
                        (*(code *)(*ppppppplStack_198)[2])(ppppppplStack_198);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar38);
                      }
                    }
                  }
                  ppppppplVar38 = ppppppplStack_110;
                  lVar53 = param_1[0x9e];
                  if ((*(long **)(lVar53 + 0xe0) != *(long **)(lVar53 + 0xe8)) &&
                     (**(long **)(lVar53 + 0xe0) != 0)) {
                    func_0x000107c2b054(&ppppppplStack_128,&UNK_10f68253a);
                    puVar32 = *(undefined8 **)(lVar53 + 0xe0);
                    if (*(undefined8 **)(lVar53 + 0xe8) == puVar32) goto LAB_10a907c3c;
                    ppppppplStack_1e8 = (long *******)*puVar32;
                    ppppppplVar94 = (long *******)puVar32[1];
                    if (ppppppplVar94 == (long *******)0x0) {
                      ppppppplVar95 = (long *******)0x0;
                    }
                    else {
                      ppppppplVar76 = ppppppplVar94 + 1;
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                        if (bVar22) {
                          *ppppppplVar76 = (long ******)((long)*ppppppplVar76 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      ppppppplVar95 = ppppppplVar94 + 2;
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar95,0x10);
                        if (bVar22) {
                          *ppppppplVar95 = (long ******)((long)*ppppppplVar95 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                        if (bVar22) {
                          *ppppppplVar76 = (long ******)((long)*ppppppplVar76 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                        ppppppplVar95 = ppppppplVar94;
                      } while (cVar20 != '\0');
                    }
                    ppppppplStack_b0 = (long *******)0x1000000000000000;
                    uStack_b2 = 0x6873;
                    uStack_b8 = 0x654d7265646e;
                    uStack_c0._6_2_ = 0x6552;
                    uStack_c0._1_5_ = 0x2e74657373;
                    uStack_c0._0_1_ = 0x41;
                    ppppppplStack_1e0 = ppppppplVar94;
                    ppppppplStack_a8 = ppppppplStack_1e8;
                    FUN_10a39a09c(ppppppplVar38,&ppppppplStack_128,&uStack_c0);
                    if (ppppppplVar94 != (long *******)0x0) {
                      ppppppplVar38 = ppppppplVar94 + 1;
                      do {
                        pppppplVar52 = *ppppppplVar38;
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                        if (bVar22) {
                          *ppppppplVar38 = (long ******)((long)pppppplVar52 + -1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      if (pppppplVar52 == (long ******)0x0) {
                        (*(code *)(*ppppppplVar94)[2])(ppppppplVar94);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                      }
                    }
                    if (ppppppplVar95 != (long *******)0x0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    ppppppplVar38 = ppppppplStack_1e0;
                    if (ppppppplStack_1e0 != (long *******)0x0) {
                      ppppppplVar76 = ppppppplStack_1e0 + 1;
                      do {
                        pppppplVar52 = *ppppppplVar76;
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                        if (bVar22) {
                          *ppppppplVar76 = (long ******)((long)pppppplVar52 + -1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      if (pppppplVar52 == (long ******)0x0) {
                        (*(code *)(*ppppppplStack_1e0)[2])(ppppppplStack_1e0);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar38);
                      }
                    }
                    if ((long)ppppppplStack_118 < 0) {
                      __ZdlPv(ppppppplStack_128);
                    }
                  }
                }
                else {
                  func_0x00010a0fda30();
                  puVar32 = (undefined8 *)0x80;
                  __Znwm();
                  puVar32[1] = 0;
                  puVar32[2] = 0;
                  *puVar32 = &PTR_FUN_110bde0d8;
                  *(undefined1 *)(puVar32 + 4) = 0;
                  puVar32[7] = 0;
                  puVar32[6] = 0;
                  pppplVar55 = (long ****)(puVar32 + 8);
                  puVar32[9] = 0;
                  *pppplVar55 = (long ***)0x0;
                  puVar32[0xc] = ppppppplVar38;
                  puVar32[0xd] = 0;
                  puVar32[0xe] = 0;
                  puVar32[0xf] = 0;
                  puVar39 = puVar32 + 3;
                  *puVar39 = &PTR_DAT_110bdb408;
                  puVar32[5] = &PTR_FUN_110bdb490;
                  puVar32[10] = &PTR_FUN_110bdb4e8;
                  puVar32[0xb] = ppppppplVar71;
                  uStack_c0._0_1_ = SUB81(puVar39,0);
                  uStack_c0._1_5_ = (undefined5)((ulong)puVar39 >> 8);
                  uStack_c0._6_2_ = (undefined2)((ulong)puVar39 >> 0x30);
                  uStack_b8 = SUB86(puVar32,0);
                  uStack_b2 = (undefined2)((ulong)puVar32 >> 0x30);
                  FUN_10a4951fc(&uStack_c0);
                  lVar66 = CONCAT26(uStack_b2,uStack_b8);
                  lVar53 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0))
                  ;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  plVar70 = (long *)param_1[0xbb];
                  param_1[0xbb] = lVar66;
                  param_1[0xba] = lVar53;
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  ppppplVar33 = (long *****)param_1[0xba];
                  if (ppppplVar33 + 10 != ppppplStack_e8 + 0xc) {
                    pppplVar55 = ppppplStack_e8[0xc];
                    FUN_10a105cdc(ppppplVar33 + 10,pppplVar55,ppppplStack_e8[0xd],
                                  ((long)ppppplStack_e8[0xd] - (long)pppplVar55 >> 3) *
                                  -0x5555555555555555);
                    ppppplVar33 = (long *****)param_1[0xba];
                  }
                  pppppplStack_150 = (long ******)param_1[0xbb];
                  ppppplVar34 = ppppplVar33;
                  if (pppppplStack_150 != (long ******)0x0) {
                    pppppplVar52 = pppppplStack_150 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                      if (bVar22) {
                        *pppppplVar52 = (long *****)((long)*pppppplVar52 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    ppppplVar34 = (long *****)param_1[0xba];
                  }
                  ppppplStack_158 = ppppplVar33;
                  (*(code *)(*ppppplVar34)[7])();
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  ppppppplStack_b0 = (long *******)0x0;
                  func_0x000107c2c4d8(&uStack_c0,ppppplVar34,pppplVar55);
                  pppppplVar52 = pppppplStack_150;
                  if (pppppplStack_150 != (long ******)0x0) {
                    pppppplVar68 = pppppplStack_150 + 2;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                      if (bVar22) {
                        *pppppplVar68 = (long *****)((long)*pppppplVar68 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                  }
                  ppppppplStack_a8 = (long *******)ppppplStack_158;
                  ppppplVar33 = ppppplStack_158 + 2;
                  (*(code *)(*ppppplVar33)[3])();
                  pppppplVar68 = (long ******)0x0;
                  if ((((ulong)ppppplVar33 & 1) == 0) &&
                     (pppppplVar68 = pppppplVar52, pppppplVar52 != (long ******)0x0)) {
                    pppppplVar26 = pppppplVar52 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                      if (bVar22) {
                        *pppppplVar26 = (long *****)((long)*pppppplVar26 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                  }
                  if (*(char *)((long)param_1 + 0x5f7) < '\0') {
                    __ZdlPv(*plVar31);
                  }
                  ppppppplVar38 = ppppppplStack_a8;
                  param_1[0xbd] = CONCAT26(uStack_b2,uStack_b8);
                  *plVar31 = CONCAT26(uStack_c0._6_2_,
                                      CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                  param_1[0xbe] = (long)ppppppplStack_b0;
                  ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                  uStack_c0._0_1_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  ppppppplVar94 = (long *******)0x0;
                  lVar53 = param_1[0xc0];
                  param_1[0xc0] = (long)pppppplVar52;
                  param_1[0xbf] = (long)ppppppplVar38;
                  if (lVar53 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0xc1,&stack0xffffffffffffff68);
                  if (pppppplVar68 != (long ******)0x0) {
                    pppppplVar52 = pppppplVar68 + 1;
                    do {
                      ppppplVar33 = *pppppplVar52;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                      if (bVar22) {
                        *pppppplVar52 = (long *****)((long)ppppplVar33 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar33 == (long *****)0x0) {
                      (*(code *)(*pppppplVar68)[2])(pppppplVar68);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar68);
                    }
                  }
                  pppppplVar52 = pppppplStack_150;
                  if (pppppplStack_150 != (long ******)0x0) {
                    pppppplVar26 = pppppplStack_150 + 1;
                    do {
                      ppppplVar33 = *pppppplVar26;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                      if (bVar22) {
                        *pppppplVar26 = (long *****)((long)ppppplVar33 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar33 == (long *****)0x0) {
                      (*(code *)(*pppppplStack_150)[2])(pppppplStack_150);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar52);
                    }
                  }
                  ppppppplVar38 = ppppppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f682575);
                  puVar37 = (undefined1 *)&uStack_c0;
                  FUN_10a39a09c(ppppppplVar38,puVar37,plVar31);
                  func_0x00010a0fda30();
                  FUN_10a91a250(&uStack_c0,ppppppplVar38,puVar37);
                  FUN_10a908708(plVar30,&uStack_c0);
                  plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  ppppplVar33 = ppppplStack_e8;
                  ppppppplStack_120 = (long *******)0x0;
                  ppppppplStack_128 = (long *******)0x0;
                  ppppppplStack_118 = (long *******)0x0;
                  ppppppplVar38 =
                       (long *******)((long)ppppplStack_e8[10] - (long)ppppplStack_e8[9] >> 4);
                  FUN_10a904f5c(&ppppppplStack_128,ppppppplVar38);
                  pppplVar73 = ppppplVar33[10];
                  ppppppplVar95 = ppppppplStack_128;
                  for (pppplVar55 = ppppplVar33[9]; ppppppplStack_128 = ppppppplVar95,
                      pppplVar55 != pppplVar73; pppplVar55 = pppplVar55 + 2) {
                    if (ppppppplStack_120 < ppppppplStack_118) {
                      ppplVar47 = pppplVar55[1];
                      pppppplVar52 = (long ******)*pppplVar55;
                      ppppppplStack_120[1] = (long ******)pppplVar55[1];
                      *ppppppplStack_120 = pppppplVar52;
                      if (ppplVar47 != (long ***)0x0) {
                        ppplVar47 = ppplVar47 + 2;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppplVar47,0x10);
                          if (bVar22) {
                            *ppplVar47 = (long **)((long)*ppplVar47 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      ppppppplVar76 = ppppppplStack_120 + 2;
                    }
                    else {
                      lVar53 = (long)ppppppplStack_120 - (long)ppppppplVar95;
                      uVar72 = (lVar53 >> 4) + 1;
                      if (uVar72 >> 0x3c != 0) {
                        FUN_10a34d61c();
                        goto LAB_10a907c3c;
                      }
                      uVar54 = (long)ppppppplStack_118 - (long)ppppppplVar95 >> 3;
                      if (uVar54 <= uVar72) {
                        uVar54 = uVar72;
                      }
                      if (0x7fffffffffffffef <
                          (ulong)((long)ppppppplStack_118 - (long)ppppppplVar95)) {
                        uVar54 = 0xfffffffffffffff;
                      }
                      ppppppplVar94 = (long *******)&ppppppplStack_128;
                      ppppppplVar95 = (long *******)&ppppppplStack_128;
                      FUN_10a34d630();
                      plVar70 = (long *)((long)ppppppplVar95 + lVar53);
                      ppplVar47 = pppplVar55[1];
                      ppplVar80 = *pppplVar55;
                      plVar70[1] = (long)pppplVar55[1];
                      *plVar70 = (long)ppplVar80;
                      if (ppplVar47 != (long ***)0x0) {
                        ppplVar47 = ppplVar47 + 2;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppplVar47,0x10);
                          if (bVar22) {
                            *ppplVar47 = (long **)((long)*ppplVar47 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      ppppppplVar76 = (long *******)(plVar70 + 2);
                      ppppppplVar71 =
                           (long *******)
                           ((long)plVar70 - ((long)ppppppplStack_120 - (long)ppppppplStack_128));
                      ppppppplVar38 = ppppppplStack_128;
                      _memcpy(ppppppplVar71);
                      ppppppplStack_b0 = ppppppplStack_128;
                      ppppppplStack_a8 = ppppppplStack_118;
                      uStack_c0._0_1_ = SUB81(ppppppplStack_128,0);
                      uStack_c0._1_5_ = (undefined5)((ulong)ppppppplStack_128 >> 8);
                      uStack_c0._6_2_ = (undefined2)((ulong)ppppppplStack_128 >> 0x30);
                      uStack_b8 = SUB86(ppppppplStack_128,0);
                      ppppppplStack_128 = ppppppplVar71;
                      ppppppplStack_120 = ppppppplVar76;
                      ppppppplStack_118 = ppppppplVar95 + uVar54 * 2;
                      uStack_b2 = uStack_c0._6_2_;
                      FUN_10a35a1bc(&uStack_c0);
                    }
                    ppppppplVar95 = ppppppplStack_128;
                    ppppppplStack_120 = ppppppplVar76;
                  }
                  if ((long ********)(*plVar30 + 0x50) != &ppppppplStack_128) {
                    FUN_10a34d2ec();
                    ppppppplVar38 = ppppppplVar95;
                  }
                  uStack_c0._0_1_ = SUB81(&ppppppplStack_128,0);
                  uStack_c0._1_5_ = (undefined5)((ulong)&ppppppplStack_128 >> 8);
                  uStack_c0._6_2_ = (undefined2)((ulong)&ppppppplStack_128 >> 0x30);
                  FUN_10a34c804(&uStack_c0);
                  ppppppplStack_168 = (long *******)param_1[0xc3];
                  ppppppplStack_160 = (long *******)param_1[0xc4];
                  ppppppplVar95 = ppppppplStack_168;
                  if (ppppppplStack_160 != (long *******)0x0) {
                    ppppppplVar95 = ppppppplStack_160 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar95,0x10);
                      if (bVar22) {
                        *ppppppplVar95 = (long ******)((long)*ppppppplVar95 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    ppppppplVar95 = (long *******)*plVar30;
                  }
                  (*(code *)(*ppppppplVar95)[7])();
                  FUN_10a90876c(&uStack_c0,&ppppppplStack_168,ppppppplVar95,ppppppplVar38);
                  if (*(char *)((long)param_1 + 0x63f) < '\0') {
                    __ZdlPv(*plVar49);
                  }
                  ppppppplVar95 = ppppppplStack_a8;
                  param_1[0xc6] = CONCAT26(uStack_b2,uStack_b8);
                  *plVar49 = CONCAT26(uStack_c0._6_2_,
                                      CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                  param_1[199] = (long)ppppppplStack_b0;
                  ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                  uStack_c0._0_1_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  ppppppplVar38 = (long *******)0x0;
                  lVar53 = param_1[0xc9];
                  param_1[0xc9] = (long)ppppppplVar94;
                  param_1[200] = (long)ppppppplVar95;
                  if (lVar53 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0xca,&stack0xffffffffffffff68);
                  if (pppppplVar68 != (long ******)0x0) {
                    pppppplVar52 = pppppplVar68 + 1;
                    do {
                      ppppplVar33 = *pppppplVar52;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                      if (bVar22) {
                        *pppppplVar52 = (long *****)((long)ppppplVar33 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar33 == (long *****)0x0) {
                      (*(code *)(*pppppplVar68)[2])(pppppplVar68);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar68);
                    }
                  }
                  ppppppplVar94 = ppppppplStack_160;
                  if (ppppppplStack_160 != (long *******)0x0) {
                    ppppppplVar95 = ppppppplStack_160 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar95;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar95,0x10);
                      if (bVar22) {
                        *ppppppplVar95 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplStack_160)[2])(ppppppplStack_160);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                    }
                  }
                  ppppppplVar94 = ppppppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f682589);
                  puVar37 = (undefined1 *)&uStack_c0;
                  FUN_10a39a09c(ppppppplVar94,puVar37,plVar49);
                  func_0x00010a0fda30();
                  FUN_10a91a250(&uStack_c0,ppppppplVar94,puVar37);
                  FUN_10a908708(plVar44,&uStack_c0);
                  plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  ppppppplStack_120 = (long *******)0x0;
                  ppppppplStack_128 = (long *******)0x0;
                  ppppppplStack_118 = (long *******)0x0;
                  lVar53 = param_1[0x9e];
                  ppppppplVar94 =
                       (long *******)(*(long *)(lVar53 + 0xe8) - *(long *)(lVar53 + 0xe0) >> 4);
                  FUN_10a904f5c(&ppppppplStack_128,ppppppplVar94);
                  puVar39 = *(undefined8 **)(lVar53 + 0xe8);
                  ppppppplVar95 = ppppppplStack_128;
                  for (puVar32 = *(undefined8 **)(lVar53 + 0xe0); ppppppplStack_128 = ppppppplVar95,
                      puVar32 != puVar39; puVar32 = puVar32 + 2) {
                    if (ppppppplStack_120 < ppppppplStack_118) {
                      lVar53 = puVar32[1];
                      pppppplVar52 = (long ******)*puVar32;
                      ppppppplStack_120[1] = (long ******)puVar32[1];
                      *ppppppplStack_120 = pppppplVar52;
                      if (lVar53 != 0) {
                        plVar70 = (long *)(lVar53 + 0x10);
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                          if (bVar22) {
                            *plVar70 = *plVar70 + 1;
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      ppppppplVar76 = ppppppplStack_120 + 2;
                    }
                    else {
                      lVar53 = (long)ppppppplStack_120 - (long)ppppppplVar95;
                      uVar72 = (lVar53 >> 4) + 1;
                      if (uVar72 >> 0x3c != 0) {
                        FUN_10a34d61c();
                        goto LAB_10a907c3c;
                      }
                      uVar54 = (long)ppppppplStack_118 - (long)ppppppplVar95 >> 3;
                      if (uVar54 <= uVar72) {
                        uVar54 = uVar72;
                      }
                      if (0x7fffffffffffffef <
                          (ulong)((long)ppppppplStack_118 - (long)ppppppplVar95)) {
                        uVar54 = 0xfffffffffffffff;
                      }
                      ppppppplVar38 = (long *******)&ppppppplStack_128;
                      ppppppplVar95 = (long *******)&ppppppplStack_128;
                      FUN_10a34d630();
                      puVar40 = (undefined8 *)((long)ppppppplVar95 + lVar53);
                      lVar53 = puVar32[1];
                      uVar69 = *puVar32;
                      puVar40[1] = puVar32[1];
                      *puVar40 = uVar69;
                      if (lVar53 != 0) {
                        plVar70 = (long *)(lVar53 + 0x10);
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                          if (bVar22) {
                            *plVar70 = *plVar70 + 1;
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      ppppppplVar76 = (long *******)(puVar40 + 2);
                      ppppppplVar71 =
                           (long *******)
                           ((long)puVar40 - ((long)ppppppplStack_120 - (long)ppppppplStack_128));
                      ppppppplVar94 = ppppppplStack_128;
                      _memcpy(ppppppplVar71);
                      ppppppplStack_b0 = ppppppplStack_128;
                      ppppppplStack_a8 = ppppppplStack_118;
                      uStack_c0._0_1_ = SUB81(ppppppplStack_128,0);
                      uStack_c0._1_5_ = (undefined5)((ulong)ppppppplStack_128 >> 8);
                      uStack_c0._6_2_ = (undefined2)((ulong)ppppppplStack_128 >> 0x30);
                      uStack_b8 = SUB86(ppppppplStack_128,0);
                      ppppppplStack_128 = ppppppplVar71;
                      ppppppplStack_120 = ppppppplVar76;
                      ppppppplStack_118 = ppppppplVar95 + uVar54 * 2;
                      uStack_b2 = uStack_c0._6_2_;
                      FUN_10a35a1bc(&uStack_c0);
                    }
                    ppppppplVar95 = ppppppplStack_128;
                    ppppppplStack_120 = ppppppplVar76;
                  }
                  if ((long ********)(*plVar44 + 0x50) != &ppppppplStack_128) {
                    FUN_10a34d2ec();
                    ppppppplVar94 = ppppppplVar95;
                  }
                  uStack_c0._0_1_ = SUB81(&ppppppplStack_128,0);
                  uStack_c0._1_5_ = (undefined5)((ulong)&ppppppplStack_128 >> 8);
                  uStack_c0._6_2_ = (undefined2)((ulong)&ppppppplStack_128 >> 0x30);
                  FUN_10a34c804(&uStack_c0);
                  plStack_178 = (long *)param_1[0xcd];
                  plStack_180 = (long *)param_1[0xcc];
                  plVar70 = plStack_180;
                  if (param_1[0xcd] != 0) {
                    plVar70 = (long *)(param_1[0xcd] + 8);
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                      if (bVar22) {
                        *plVar70 = *plVar70 + 1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    plVar70 = (long *)*plVar44;
                  }
                  (**(code **)(*plVar70 + 0x38))();
                  FUN_10a90876c(&uStack_c0,&plStack_180,plVar70,ppppppplVar94);
                  if (*(char *)((long)param_1 + 0x687) < '\0') {
                    __ZdlPv(*plVar1);
                  }
                  ppppppplVar94 = ppppppplStack_a8;
                  param_1[0xcf] = CONCAT26(uStack_b2,uStack_b8);
                  *plVar1 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0)
                                    );
                  param_1[0xd0] = (long)ppppppplStack_b0;
                  ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                  uStack_c0._0_1_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  lVar53 = param_1[0xd2];
                  param_1[0xd2] = (long)ppppppplVar38;
                  param_1[0xd1] = (long)ppppppplVar94;
                  if (lVar53 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0xd3,&stack0xffffffffffffff68);
                  if (pppppplVar68 != (long ******)0x0) {
                    pppppplVar52 = pppppplVar68 + 1;
                    do {
                      ppppplVar33 = *pppppplVar52;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                      if (bVar22) {
                        *pppppplVar52 = (long *****)((long)ppppplVar33 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar33 == (long *****)0x0) {
                      (*(code *)(*pppppplVar68)[2])(pppppplVar68);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar68);
                    }
                  }
                  plVar70 = plStack_178;
                  if (plStack_178 != (long *)0x0) {
                    plVar67 = plStack_178 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plStack_178 + 0x10))(plStack_178);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  ppppppplVar94 = ppppppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f682599);
                  puVar37 = (undefined1 *)&uStack_c0;
                  FUN_10a39a09c(ppppppplVar94,puVar37,plVar1);
                  func_0x00010a0fda30();
                  puVar32 = (undefined8 *)0x80;
                  __Znwm();
                  puVar32[1] = 0;
                  puVar32[2] = 0;
                  *puVar32 = &PTR_FUN_110bddf98;
                  *(undefined1 *)(puVar32 + 4) = 0;
                  puVar32[7] = 0;
                  puVar32[6] = 0;
                  puVar32[9] = 0;
                  puVar32[8] = 0;
                  puVar32[0xc] = puVar37;
                  puVar32[0xd] = 0;
                  puVar32[0xe] = 0;
                  puVar32[0xf] = 0;
                  puVar39 = puVar32 + 3;
                  *puVar39 = &PTR_DAT_110bdade8;
                  puVar32[5] = &PTR_DAT_110bdae70;
                  puVar32[10] = &PTR_FUN_110bdaec8;
                  puVar32[0xb] = ppppppplVar94;
                  uStack_c0._0_1_ = SUB81(puVar39,0);
                  uStack_c0._1_5_ = (undefined5)((ulong)puVar39 >> 8);
                  uStack_c0._6_2_ = (undefined2)((ulong)puVar39 >> 0x30);
                  uStack_b8 = SUB86(puVar32,0);
                  uStack_b2 = (undefined2)((ulong)puVar32 >> 0x30);
                  FUN_10a494be0(&uStack_c0);
                  lVar66 = CONCAT26(uStack_b2,uStack_b8);
                  lVar53 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0))
                  ;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  plVar70 = (long *)param_1[0xd6];
                  param_1[0xd6] = lVar66;
                  param_1[0xd5] = lVar53;
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  ppppplVar33 = ppppplStack_e8;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  ppppppplStack_b0 = (long *******)0x0;
                  lVar53 = (long)ppppplStack_e8[10] - (long)ppppplStack_e8[9] >> 4;
                  func_0x000107c27e9c(&uStack_c0,lVar53);
                  if (ppppplVar33[10] != ppppplVar33[9]) {
                    uVar72 = 0;
                    do {
                      FUN_10a942378(&ppppppplStack_128,ppppplStack_e8,uVar72);
                      FUN_10a904d90(&ppppppplStack_1a0,param_1,ppppppplVar60,&ppppppplStack_128);
                      uStack_1a8 = (long ******)
                                   CONCAT44((int)ppppppplStack_198,(undefined4)uStack_1a8);
                      lVar53 = (long)&uStack_1a8 + 4;
                      FUN_109febd04(&uStack_c0,lVar53);
                      if ((long)ppppppplStack_118 < 0) {
                        __ZdlPv(ppppppplStack_128);
                      }
                      uVar72 = uVar72 + 1;
                    } while (uVar72 < (ulong)((long)ppppplVar33[10] - (long)ppppplVar33[9] >> 4));
                  }
                  if ((undefined8 *)(param_1[0xd5] + 0x50) != &uStack_c0) {
                    lVar53 = CONCAT26(uStack_c0._6_2_,
                                      CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                    FUN_10a0ea4a0();
                  }
                  if (CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0)) != 0
                     ) {
                    uStack_b2 = uStack_c0._6_2_;
                    uStack_b8 = CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0);
                    __ZdlPv();
                  }
                  plVar67 = (long *)param_1[0xd5];
                  pppppplVar52 = (long ******)param_1[0xd6];
                  plVar70 = plVar67;
                  if (pppppplVar52 != (long ******)0x0) {
                    pppppplVar68 = pppppplVar52 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                      if (bVar22) {
                        *pppppplVar68 = (long *****)((long)*pppppplVar68 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    plVar70 = (long *)param_1[0xd5];
                  }
                  plStack_1b8 = plVar67;
                  pppppplStack_1b0 = pppppplVar52;
                  (**(code **)(*plVar70 + 0x38))();
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  ppppppplStack_b0 = (long *******)0x0;
                  func_0x000107c2c4d8(&uStack_c0,plVar70,lVar53);
                  if (pppppplVar52 != (long ******)0x0) {
                    pppppplVar68 = pppppplVar52 + 2;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                      if (bVar22) {
                        *pppppplVar68 = (long *****)((long)*pppppplVar68 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                  }
                  plVar70 = plVar67 + 2;
                  ppppppplStack_a8 = (long *******)plVar67;
                  (**(code **)(*plVar70 + 0x18))();
                  pppppplVar68 = (long ******)0x0;
                  if ((((ulong)plVar70 & 1) == 0) &&
                     (pppppplVar68 = pppppplVar52, pppppplVar52 != (long ******)0x0)) {
                    pppppplVar26 = pppppplVar52 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar26,0x10);
                      if (bVar22) {
                        *pppppplVar26 = (long *****)((long)*pppppplVar26 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                  }
                  if (*(char *)((long)param_1 + 0x6cf) < '\0') {
                    __ZdlPv(*plVar2);
                  }
                  ppppppplVar94 = ppppppplStack_a8;
                  param_1[0xd8] = CONCAT26(uStack_b2,uStack_b8);
                  *plVar2 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0)
                                    );
                  param_1[0xd9] = (long)ppppppplStack_b0;
                  ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                  uStack_c0._0_1_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  lVar53 = param_1[0xdb];
                  param_1[0xdb] = (long)pppppplVar52;
                  param_1[0xda] = (long)ppppppplVar94;
                  if (lVar53 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0xdc,&stack0xffffffffffffff68);
                  if (pppppplVar68 != (long ******)0x0) {
                    pppppplVar52 = pppppplVar68 + 1;
                    do {
                      ppppplVar33 = *pppppplVar52;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                      if (bVar22) {
                        *pppppplVar52 = (long *****)((long)ppppplVar33 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar33 == (long *****)0x0) {
                      (*(code *)(*pppppplVar68)[2])(pppppplVar68);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar68);
                    }
                  }
                  pppppplVar52 = pppppplStack_1b0;
                  if (pppppplStack_1b0 != (long ******)0x0) {
                    pppppplVar68 = pppppplStack_1b0 + 1;
                    do {
                      ppppplVar33 = *pppppplVar68;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                      if (bVar22) {
                        *pppppplVar68 = (long *****)((long)ppppplVar33 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar33 == (long *****)0x0) {
                      (*(code *)(*pppppplStack_1b0)[2])(pppppplStack_1b0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar52);
                    }
                  }
                  ppppppplVar94 = ppppppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f6825a7);
                  puVar37 = (undefined1 *)&uStack_c0;
                  FUN_10a39a09c(ppppppplVar94,puVar37,plVar2);
                  func_0x00010a0fda30();
                  puVar32 = (undefined8 *)0x80;
                  __Znwm();
                  puVar32[1] = 0;
                  puVar32[2] = 0;
                  *puVar32 = &PTR_FUN_110bddfe8;
                  *(undefined1 *)(puVar32 + 4) = 0;
                  puVar32[7] = 0;
                  puVar32[6] = 0;
                  puVar32[9] = 0;
                  puVar32[8] = 0;
                  puVar32[0xc] = puVar37;
                  puVar32[0xd] = 0;
                  puVar32[0xe] = 0;
                  puVar32[0xf] = 0;
                  puVar39 = puVar32 + 3;
                  *puVar39 = &PTR_DAT_110bdaee8;
                  puVar32[5] = &PTR_DAT_110bdaf70;
                  puVar32[10] = &PTR_FUN_110bdafc8;
                  puVar32[0xb] = ppppppplVar94;
                  uStack_c0._0_1_ = SUB81(puVar39,0);
                  uStack_c0._1_5_ = (undefined5)((ulong)puVar39 >> 8);
                  uStack_c0._6_2_ = (undefined2)((ulong)puVar39 >> 0x30);
                  uStack_b8 = SUB86(puVar32,0);
                  uStack_b2 = (undefined2)((ulong)puVar32 >> 0x30);
                  FUN_10a494d28(&uStack_c0);
                  lVar66 = CONCAT26(uStack_b2,uStack_b8);
                  lVar53 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0))
                  ;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  plVar70 = (long *)param_1[0xdf];
                  param_1[0xdf] = lVar66;
                  param_1[0xde] = lVar53;
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  ppppplVar33 = ppppplStack_e8;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  ppppppplStack_b0 = (long *******)0x0;
                  func_0x000104becb10(&uStack_c0,
                                      (long)ppppplStack_e8[10] - (long)ppppplStack_e8[9] >> 4);
                  if (ppppplVar33[10] != ppppplVar33[9]) {
                    uVar72 = 0;
                    do {
                      FUN_10a942378(&ppppppplStack_128,ppppplStack_e8,uVar72);
                      FUN_10a904d90(&ppppppplStack_1a0,param_1,ppppppplVar60,&ppppppplStack_128);
                      func_0x0001078db3d4(&uStack_c0,&ppppppplStack_1a0);
                      if ((long)ppppppplStack_118 < 0) {
                        __ZdlPv(ppppppplStack_128);
                      }
                      uVar72 = uVar72 + 1;
                    } while (uVar72 < (ulong)((long)ppppplVar33[10] - (long)ppppplVar33[9] >> 4));
                  }
                  puVar37 = (undefined1 *)&uStack_c0;
                  func_0x000108b0402c(param_1[0xde] + 0x50,puVar37);
                  if (CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0)) != 0
                     ) {
                    __ZdlPv();
                  }
                  ppppppplVar38 = (long *******)param_1[0xde];
                  ppppppplVar76 = (long *******)param_1[0xdf];
                  ppppppplVar94 = ppppppplVar38;
                  if (ppppppplVar76 != (long *******)0x0) {
                    ppppppplVar94 = ppppppplVar76 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                      if (bVar22) {
                        *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    ppppppplVar94 = (long *******)param_1[0xde];
                  }
                  ppppppplStack_1c8 = ppppppplVar38;
                  ppppppplStack_1c0 = ppppppplVar76;
                  (*(code *)(*ppppppplVar94)[7])();
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  ppppppplStack_b0 = (long *******)0x0;
                  func_0x000107c2c4d8(&uStack_c0,ppppppplVar94,puVar37);
                  if (ppppppplVar76 != (long *******)0x0) {
                    ppppppplVar94 = ppppppplVar76 + 2;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                      if (bVar22) {
                        *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                  }
                  ppppppplVar95 = ppppppplVar38 + 2;
                  ppppppplStack_a8 = ppppppplVar38;
                  (*(code *)(*ppppppplVar95)[3])();
                  ppppppplVar94 = (long *******)0x0;
                  if ((((ulong)ppppppplVar95 & 1) == 0) &&
                     (ppppppplVar94 = ppppppplVar76, ppppppplVar76 != (long *******)0x0)) {
                    ppppppplVar38 = ppppppplVar76 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                      if (bVar22) {
                        *ppppppplVar38 = (long ******)((long)*ppppppplVar38 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                  }
                  if (*(char *)((long)param_1 + 0x717) < '\0') {
                    __ZdlPv(*plVar3);
                  }
                  ppppppplVar38 = ppppppplStack_a8;
                  param_1[0xe1] = CONCAT26(uStack_b2,uStack_b8);
                  *plVar3 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0)
                                    );
                  param_1[0xe2] = (long)ppppppplStack_b0;
                  ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                  uStack_c0._0_1_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  ppppppplVar95 = (long *******)0x0;
                  lVar53 = param_1[0xe4];
                  param_1[0xe4] = (long)ppppppplVar76;
                  param_1[0xe3] = (long)ppppppplVar38;
                  if (lVar53 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0xe5,&stack0xffffffffffffff68);
                  if (ppppppplVar94 != (long *******)0x0) {
                    ppppppplVar38 = ppppppplVar94 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar38;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                      if (bVar22) {
                        *ppppppplVar38 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplVar94)[2])(ppppppplVar94);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                    }
                  }
                  ppppppplVar38 = ppppppplStack_1c0;
                  if (ppppppplStack_1c0 != (long *******)0x0) {
                    ppppppplVar76 = ppppppplStack_1c0 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar76;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                      if (bVar22) {
                        *ppppppplVar76 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplStack_1c0)[2])(ppppppplStack_1c0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar38);
                    }
                  }
                  ppppppplVar38 = ppppppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f6825b5);
                  FUN_10a39a09c(ppppppplVar38,&uStack_c0,plVar3);
                }
                (*(code *)(*ppppppplStack_110)[0xd])(ppppppplStack_110,1);
                uVar69 = 1;
                lVar53 = lVar65;
                func_0x00010a3e4590(lVar65,1);
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_c0,lVar53,uVar69);
                puVar37 = (undefined1 *)&uStack_c0;
                plVar67 = param_1 + 0xe7;
                FUN_10a908864();
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                puVar32 = (undefined8 *)0xa8;
                __Znwm();
                puVar32[0xe] = 0;
                puVar32[0xd] = 0x3f800000;
                puVar32[0x10] = 0;
                puVar32[0xf] = 0x3f80000000000000;
                puVar32[0x12] = 0x3f800000;
                puVar32[0x11] = 0;
                puVar32[1] = 0;
                puVar32[2] = 0;
                *puVar32 = &PTR_DAT_110bdde08;
                *(undefined1 *)(puVar32 + 4) = 0;
                puVar32[7] = 0;
                puVar32[6] = 0;
                puVar39 = puVar32 + 8;
                puVar32[9] = 0;
                *puVar39 = 0;
                puVar32[0xb] = plVar67;
                puVar32[0xc] = puVar37;
                puVar32[0x14] = 0x3f80000000000000;
                puVar32[0x13] = 0;
                puVar40 = puVar32 + 3;
                *puVar40 = &PTR_FUN_110bda668;
                puVar32[5] = &PTR_FUN_110bda6f0;
                puVar32[10] = &PTR_DAT_110bda748;
                uStack_c0._0_1_ = SUB81(puVar40,0);
                uStack_c0._1_5_ = (undefined5)((ulong)puVar40 >> 8);
                uStack_c0._6_2_ = (undefined2)((ulong)puVar40 >> 0x30);
                uStack_b8 = SUB86(puVar32,0);
                uStack_b2 = (undefined2)((ulong)puVar32 >> 0x30);
                plVar70 = &uStack_c0;
                FUN_10a4945bc(plVar70);
                lVar66 = CONCAT26(uStack_b2,uStack_b8);
                lVar53 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                uStack_c0._0_1_ = 0;
                uStack_c0._1_5_ = 0;
                uStack_c0._6_2_ = 0;
                uStack_b8 = 0;
                uStack_b2 = 0;
                plVar67 = (long *)param_1[0xea];
                param_1[0xea] = lVar66;
                param_1[0xe9] = lVar53;
                if (plVar67 != (long *)0x0) {
                  plVar11 = plVar67 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                    plVar70 = plVar67;
                  }
                }
                plVar67 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar67 != (long *)0x0) {
                  plVar11 = plVar67 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                    plVar70 = plVar67;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_c0,plVar70,puVar39);
                puVar37 = (undefined1 *)&uStack_c0;
                plVar67 = plVar4;
                FUN_10a908864(plVar4,puVar37);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_c0,plVar67,puVar37);
                puVar37 = (undefined1 *)&uStack_c0;
                plVar67 = plVar5;
                FUN_10a908864(plVar5,puVar37);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a368(&uStack_c0,plVar67,puVar37);
                puVar37 = (undefined1 *)&uStack_c0;
                plVar67 = plVar6;
                func_0x00010a9088c8(plVar6,puVar37);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_c0,plVar67,puVar37);
                puVar37 = (undefined1 *)&uStack_c0;
                plVar67 = plVar7;
                FUN_10a908864(plVar7,puVar37);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a368(&uStack_c0,plVar67,puVar37);
                puVar37 = (undefined1 *)&uStack_c0;
                plVar67 = plVar8;
                func_0x00010a9088c8(plVar8,puVar37);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a3f0(&uStack_c0,plVar67,puVar37);
                puVar37 = (undefined1 *)&uStack_c0;
                plVar67 = plVar9;
                func_0x00010a90892c(plVar9,puVar37);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a3f0(&uStack_c0,plVar67,puVar37);
                puVar37 = (undefined1 *)&uStack_c0;
                func_0x00010a90892c(param_1 + 0xf7,puVar37);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar67 = plVar70 + 1;
                  do {
                    lVar53 = *plVar67;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                    if (bVar22) {
                      *plVar67 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                  }
                }
                ppppplStack_1f8 = (long *****)param_1[0xe7];
                ppppplStack_1f0 = (long *****)param_1[0xe8];
                ppppplVar33 = ppppplStack_1f8;
                if (ppppplStack_1f0 != (long *****)0x0) {
                  ppppplVar33 = ppppplStack_1f0 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppplVar33,0x10);
                    if (bVar22) {
                      *ppppplVar33 = (long ****)((long)*ppppplVar33 + 1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  ppppplVar33 = (long *****)param_1[0xe7];
                }
                (*(code *)(*ppppplVar33)[7])();
                FUN_10a908990(&uStack_c0,&ppppplStack_1f8,ppppplVar33,puVar37);
                if (*(char *)((long)param_1 + 0x7df) < '\0') {
                  __ZdlPv(param_1[0xf9]);
                }
                ppppppplVar38 = ppppppplStack_a8;
                param_1[0xfa] = CONCAT26(uStack_b2,uStack_b8);
                param_1[0xf9] =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                param_1[0xfb] = (long)ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = param_1[0xfd];
                param_1[0xfd] = (long)ppppppplVar95;
                param_1[0xfc] = (long)ppppppplVar38;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar37 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0xfe,puVar37);
                if (ppppppplVar94 != (long *******)0x0) {
                  ppppppplVar38 = ppppppplVar94 + 1;
                  do {
                    pppppplVar52 = *ppppppplVar38;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar38,0x10);
                    if (bVar22) {
                      *ppppppplVar38 = (long ******)((long)pppppplVar52 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (pppppplVar52 == (long ******)0x0) {
                    (*(code *)(*ppppppplVar94)[2])(ppppppplVar94);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                  }
                }
                ppppplVar33 = ppppplStack_1f0;
                if (ppppplStack_1f0 != (long *****)0x0) {
                  ppppplVar34 = ppppplStack_1f0 + 1;
                  do {
                    pppplVar55 = *ppppplVar34;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppplVar34,0x10);
                    if (bVar22) {
                      *ppppplVar34 = (long ****)((long)pppplVar55 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (pppplVar55 == (long ****)0x0) {
                    (*(code *)(*ppppplStack_1f0)[2])(ppppplStack_1f0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar33);
                  }
                }
                pppppplVar68 = (long ******)param_1[0xe9];
                plVar70 = (long *)param_1[0xea];
                pppppplVar52 = pppppplVar68;
                if (plVar70 != (long *)0x0) {
                  plVar67 = plVar70 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                    if (bVar22) {
                      *plVar67 = *plVar67 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  pppppplVar52 = (long ******)param_1[0xe9];
                }
                pppppplStack_208 = pppppplVar68;
                plStack_200 = plVar70;
                (*(code *)(*pppppplVar52)[7])();
                uStack_b8 = 0;
                uStack_b2 = 0;
                uStack_c0._0_1_ = 0;
                uStack_c0._1_5_ = 0;
                uStack_c0._6_2_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                ppppppplStack_b0 = (long *******)0x0;
                func_0x000107c2c4d8(&uStack_c0,pppppplVar52,puVar37);
                if (plVar70 != (long *)0x0) {
                  plVar67 = plVar70 + 2;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                    if (bVar22) {
                      *plVar67 = *plVar67 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                }
                pppppplVar52 = pppppplVar68 + 2;
                ppppppplStack_a8 = (long *******)pppppplVar68;
                (*(code *)(*pppppplVar52)[3])();
                plVar67 = (long *)0x0;
                if ((((ulong)pppppplVar52 & 1) == 0) && (plVar67 = plVar70, plVar70 != (long *)0x0))
                {
                  plVar11 = plVar70 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = *plVar11 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                }
                if (*(char *)((long)param_1 + 0x817) < '\0') {
                  __ZdlPv(param_1[0x100]);
                }
                ppppppplVar94 = ppppppplStack_a8;
                param_1[0x101] = CONCAT26(uStack_b2,uStack_b8);
                param_1[0x100] =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                param_1[0x102] = (long)ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = param_1[0x104];
                param_1[0x104] = (long)plVar70;
                param_1[0x103] = (long)ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar37 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x105,puVar37);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                plVar70 = plStack_200;
                if (plStack_200 != (long *)0x0) {
                  plVar11 = plStack_200 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plStack_200 + 0x10))(plStack_200);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                  }
                }
                plStack_218 = (long *)param_1[0xeb];
                pppppplStack_210 = (long ******)param_1[0xec];
                plVar70 = plStack_218;
                if (pppppplStack_210 != (long ******)0x0) {
                  pppppplVar52 = pppppplStack_210 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                    if (bVar22) {
                      *pppppplVar52 = (long *****)((long)*pppppplVar52 + 1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  plVar70 = (long *)*plVar4;
                }
                (**(code **)(*plVar70 + 0x38))();
                FUN_10a908990(&uStack_c0,&plStack_218,plVar70,puVar37);
                if (*(char *)((long)param_1 + 0x84f) < '\0') {
                  __ZdlPv(param_1[0x107]);
                }
                ppppppplVar94 = ppppppplStack_a8;
                param_1[0x108] = CONCAT26(uStack_b2,uStack_b8);
                param_1[0x107] =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                param_1[0x109] = (long)ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = param_1[0x10b];
                param_1[0x10b] = 0;
                param_1[0x10a] = (long)ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar37 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x10c,puVar37);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                pppppplVar52 = pppppplStack_210;
                if (pppppplStack_210 != (long ******)0x0) {
                  pppppplVar68 = pppppplStack_210 + 1;
                  do {
                    ppppplVar33 = *pppppplVar68;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                    if (bVar22) {
                      *pppppplVar68 = (long *****)((long)ppppplVar33 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (ppppplVar33 == (long *****)0x0) {
                    (*(code *)(*pppppplStack_210)[2])(pppppplStack_210);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar52);
                  }
                }
                pplStack_228 = (long **)param_1[0xed];
                plStack_220 = (long *)param_1[0xee];
                pplVar35 = pplStack_228;
                if (plStack_220 != (long *)0x0) {
                  plVar70 = plStack_220 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = *plVar70 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  pplVar35 = (long **)*plVar5;
                }
                (*(code *)(*pplVar35)[7])();
                FUN_10a908990(&uStack_c0,&pplStack_228,pplVar35,puVar37);
                if (*(char *)((long)param_1 + 0x887) < '\0') {
                  __ZdlPv(param_1[0x10e]);
                }
                ppppppplVar94 = ppppppplStack_a8;
                param_1[0x10f] = CONCAT26(uStack_b2,uStack_b8);
                param_1[0x10e] =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                param_1[0x110] = (long)ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = param_1[0x112];
                param_1[0x112] = 0;
                param_1[0x111] = (long)ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar37 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x113,puVar37);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                plVar70 = plStack_220;
                if (plStack_220 != (long *)0x0) {
                  plVar11 = plStack_220 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plStack_220 + 0x10))(plStack_220);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                  }
                }
                plStack_238 = (long *)param_1[0xef];
                plStack_230 = (long *)param_1[0xf0];
                plVar70 = plStack_238;
                if (plStack_230 != (long *)0x0) {
                  plVar70 = plStack_230 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = *plVar70 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  plVar70 = (long *)*plVar6;
                }
                (**(code **)(*plVar70 + 0x38))();
                FUN_10a908a88(&uStack_c0,&plStack_238,plVar70,puVar37);
                if (*(char *)((long)param_1 + 0x8bf) < '\0') {
                  __ZdlPv(param_1[0x115]);
                }
                ppppppplVar94 = ppppppplStack_a8;
                param_1[0x116] = CONCAT26(uStack_b2,uStack_b8);
                param_1[0x115] =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                param_1[0x117] = (long)ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = param_1[0x119];
                param_1[0x119] = 0;
                param_1[0x118] = (long)ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar37 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x11a,puVar37);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                plVar70 = plStack_230;
                if (plStack_230 != (long *)0x0) {
                  plVar11 = plStack_230 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plStack_230 + 0x10))(plStack_230);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                  }
                }
                pplStack_248 = (long **)param_1[0xf1];
                pppppplStack_240 = (long ******)param_1[0xf2];
                pplVar35 = pplStack_248;
                if (pppppplStack_240 != (long ******)0x0) {
                  pppppplVar52 = pppppplStack_240 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                    if (bVar22) {
                      *pppppplVar52 = (long *****)((long)*pppppplVar52 + 1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  pplVar35 = (long **)*plVar7;
                }
                (*(code *)(*pplVar35)[7])();
                FUN_10a908990(&uStack_c0,&pplStack_248,pplVar35,puVar37);
                if (*(char *)((long)param_1 + 0x967) < '\0') {
                  __ZdlPv(param_1[0x12a]);
                }
                ppppppplVar94 = ppppppplStack_a8;
                param_1[299] = CONCAT26(uStack_b2,uStack_b8);
                param_1[0x12a] =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                param_1[300] = (long)ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = param_1[0x12e];
                param_1[0x12e] = 0;
                param_1[0x12d] = (long)ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar37 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x12f,puVar37);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                pppppplVar52 = pppppplStack_240;
                if (pppppplStack_240 != (long ******)0x0) {
                  pppppplVar68 = pppppplStack_240 + 1;
                  do {
                    ppppplVar33 = *pppppplVar68;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                    if (bVar22) {
                      *pppppplVar68 = (long *****)((long)ppppplVar33 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (ppppplVar33 == (long *****)0x0) {
                    (*(code *)(*pppppplStack_240)[2])(pppppplStack_240);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar52);
                  }
                }
                ppppplStack_258 = (long *****)param_1[0xf3];
                plStack_250 = (long *)param_1[0xf4];
                ppppplVar33 = ppppplStack_258;
                if (plStack_250 != (long *)0x0) {
                  plVar70 = plStack_250 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = *plVar70 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  ppppplVar33 = (long *****)*plVar8;
                }
                (*(code *)(*ppppplVar33)[7])();
                FUN_10a908a88(&uStack_c0,&ppppplStack_258,ppppplVar33,puVar37);
                if (*(char *)((long)param_1 + 0x99f) < '\0') {
                  __ZdlPv(param_1[0x131]);
                }
                ppppppplVar94 = ppppppplStack_a8;
                param_1[0x132] = CONCAT26(uStack_b2,uStack_b8);
                param_1[0x131] =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                param_1[0x133] = (long)ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = param_1[0x135];
                param_1[0x135] = 0;
                param_1[0x134] = (long)ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar37 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x136,puVar37);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                plVar70 = plStack_250;
                if (plStack_250 != (long *)0x0) {
                  plVar11 = plStack_250 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plStack_250 + 0x10))(plStack_250);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                  }
                }
                plStack_268 = (long *)param_1[0xf5];
                plStack_260 = (long *)param_1[0xf6];
                plVar70 = plStack_268;
                if (plStack_260 != (long *)0x0) {
                  plVar70 = plStack_260 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = *plVar70 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  plVar70 = (long *)*plVar9;
                }
                (**(code **)(*plVar70 + 0x38))();
                FUN_10a908b80(&uStack_c0,&plStack_268,plVar70,puVar37);
                if (*(char *)((long)param_1 + 0x8f7) < '\0') {
                  __ZdlPv(param_1[0x11c]);
                }
                ppppppplVar94 = ppppppplStack_a8;
                param_1[0x11d] = CONCAT26(uStack_b2,uStack_b8);
                param_1[0x11c] =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                param_1[0x11e] = (long)ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = param_1[0x120];
                param_1[0x120] = 0;
                param_1[0x11f] = (long)ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar37 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x121,puVar37);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                plVar70 = plStack_260;
                if (plStack_260 != (long *)0x0) {
                  plVar11 = plStack_260 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plStack_260 + 0x10))(plStack_260);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                  }
                }
                plStack_278 = (long *)param_1[0xf7];
                ppppplStack_270 = (long *****)param_1[0xf8];
                plVar70 = plStack_278;
                if (ppppplStack_270 != (long *****)0x0) {
                  ppppplVar33 = ppppplStack_270 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppplVar33,0x10);
                    if (bVar22) {
                      *ppppplVar33 = (long ****)((long)*ppppplVar33 + 1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  plVar70 = (long *)param_1[0xf7];
                }
                (**(code **)(*plVar70 + 0x38))();
                FUN_10a908b80(&uStack_c0,&plStack_278,plVar70,puVar37);
                if (*(char *)((long)param_1 + 0x92f) < '\0') {
                  __ZdlPv(*plVar93);
                }
                ppppppplVar94 = ppppppplStack_a8;
                plVar93[1] = CONCAT26(uStack_b2,uStack_b8);
                *plVar93 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0))
                ;
                plVar93[2] = (long)ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = param_1[0x127];
                param_1[0x127] = 0;
                param_1[0x126] = (long)ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                func_0x00010a328268(param_1 + 0x128,&stack0xffffffffffffff68);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                ppppplVar33 = ppppplStack_270;
                if (ppppplStack_270 != (long *****)0x0) {
                  ppppplVar34 = ppppplStack_270 + 1;
                  do {
                    pppplVar55 = *ppppplVar34;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppplVar34,0x10);
                    if (bVar22) {
                      *ppppplVar34 = (long ****)((long)pppplVar55 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (pppplVar55 == (long ****)0x0) {
                    (*(code *)(*ppppplStack_270)[2])(ppppplStack_270);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar33);
                  }
                }
                if (uStack_108 != (long *******)0x0) {
                  ppppppplVar94 = uStack_108 + 2;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                    if (bVar22) {
                      *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                }
                lVar53 = param_1[0xb9];
                param_1[0xb9] = (long)uStack_108;
                param_1[0xb8] = (long)ppppppplStack_110;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                func_0x00010a0d77bc(&uStack_c0,lVar65);
                plVar70 = param_1 + 0xac;
                ppppppplStack_128 = ppppppplVar60;
                FUN_10a91a478(plVar70,ppppppplVar60,&ppppppplStack_128);
                plVar67 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar67 != (long *)0x0) {
                  plVar11 = plVar67 + 2;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = *plVar11 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                }
                lVar53 = plVar70[8];
                plVar70[8] = CONCAT26(uStack_b2,uStack_b8);
                plVar70[7] = CONCAT26(uStack_c0._6_2_,
                                      CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv(lVar53);
                  plVar67 = (long *)CONCAT26(uStack_b2,uStack_b8);
                }
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                ppppppplVar60 = uStack_108;
                if (uStack_108 != (long *******)0x0) {
                  ppppppplVar94 = uStack_108 + 1;
                  do {
                    pppppplVar52 = *ppppppplVar94;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                    if (bVar22) {
                      *ppppppplVar94 = (long ******)((long)pppppplVar52 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (pppppplVar52 == (long ******)0x0) {
                    (*(code *)(*uStack_108)[2])(uStack_108);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
                  }
                }
              }
              ppppplVar33 = ppppplStack_f0;
              if (ppppplStack_f0 != (long *****)0x0) {
                ppppplVar34 = ppppplStack_f0 + 1;
                do {
                  pppplVar55 = *ppppplVar34;
                  cVar20 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(ppppplVar34,0x10);
                  if (bVar22) {
                    *ppppplVar34 = (long ****)((long)pppplVar55 + -1);
                    cVar20 = ExclusiveMonitorsStatus();
                  }
                } while (cVar20 != '\0');
                if (pppplVar55 == (long ****)0x0) {
                  (*(code *)(*ppppplStack_f0)[2])(ppppplStack_f0);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar33);
                }
              }
            }
            ppppppplVar60 = ppppppplStack_e0;
            if (ppppppplStack_e0 != (long *******)0x0) {
              ppppppplVar94 = ppppppplStack_e0 + 1;
              do {
                pppppplVar52 = *ppppppplVar94;
                cVar20 = '\x01';
                bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                if (bVar22) {
                  *ppppppplVar94 = (long ******)((long)pppppplVar52 + -1);
                  cVar20 = ExclusiveMonitorsStatus();
                }
              } while (cVar20 != '\0');
              if (pppppplVar52 == (long ******)0x0) {
                (*(code *)(*ppppppplStack_e0)[2])(ppppppplStack_e0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
              }
            }
          }
          ppppppplVar60 = (long *******)ppppppplVar48[1];
          ppppppplVar94 = ppppppplVar48;
          if ((long *******)ppppppplVar48[1] == (long *******)0x0) {
            do {
              ppppppplVar48 = (long *******)ppppppplVar94[2];
              bVar22 = (long *******)*ppppppplVar48 != ppppppplVar94;
              ppppppplVar94 = ppppppplVar48;
            } while (bVar22);
          }
          else {
            do {
              ppppppplVar48 = ppppppplVar60;
              ppppppplVar60 = (long *******)*ppppppplVar48;
            } while ((long *******)*ppppppplVar48 != (long *******)0x0);
          }
        } while (ppppppplVar48 != &pppppplStack_d0);
      }
      func_0x000107c27bf0(&ppppppplStack_d8,pppppplStack_d0);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar46) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a0edfc4(&uStack_c0);
LAB_10a907c3c:
                    /* WARNING: Does not return */
  pcVar21 = (code *)SoftwareBreakpoint(1,0x10a907c40);
  (*pcVar21)();
code_r0x00010a9015a4:
  puVar32 = puVar32 + 2;
  goto LAB_10a90158c;
}



/* Entry: 10a903508; end: 10a903513;  */

/* WARNING: Removing unreachable block (ram,0x00010a906128) */
/* WARNING: Removing unreachable block (ram,0x00010a905a0c) */
/* WARNING: Removing unreachable block (ram,0x00010a9059a0) */
/* WARNING: Removing unreachable block (ram,0x00010a907420) */
/* WARNING: Removing unreachable block (ram,0x00010a906a94) */
/* WARNING: Removing unreachable block (ram,0x00010a905684) */
/* WARNING: Removing unreachable block (ram,0x00010a9053e0) */
/* WARNING: Removing unreachable block (ram,0x00010a905260) */
/* WARNING: Removing unreachable block (ram,0x00010a905518) */
/* WARNING: Removing unreachable block (ram,0x00010a9068ec) */
/* WARNING: Removing unreachable block (ram,0x00010a906ff4) */
/* WARNING: Removing unreachable block (ram,0x00010a9078d0) */
/* WARNING: Removing unreachable block (ram,0x00010a9071c8) */
/* WARNING: Removing unreachable block (ram,0x00010a907678) */
/* WARNING: Removing unreachable block (ram,0x00010a905d84) */
/* WARNING: Removing unreachable block (ram,0x00010a9064cc) */
/* WARNING: Removing unreachable block (ram,0x00010a905d78) */
/* WARNING: Removing unreachable block (ram,0x00010a9058d4) */
/* WARNING: Removing unreachable block (ram,0x00010a9058d8) */
/* WARNING: Removing unreachable block (ram,0x00010a9058e0) */
/* WARNING: Removing unreachable block (ram,0x00010a9058e8) */
/* WARNING: Removing unreachable block (ram,0x00010a9058ec) */
/* WARNING: Removing unreachable block (ram,0x00010a906454) */
/* WARNING: Removing unreachable block (ram,0x00010a905898) */
/* WARNING: Removing unreachable block (ram,0x00010a9071bc) */
/* WARNING: Removing unreachable block (ram,0x00010a907414) */
/* WARNING: Removing unreachable block (ram,0x00010a9078c4) */
/* WARNING: Removing unreachable block (ram,0x00010a905994) */
/* WARNING: Removing unreachable block (ram,0x00010a9070b8) */
/* WARNING: Removing unreachable block (ram,0x00010a905df0) */
/* WARNING: Removing unreachable block (ram,0x00010a9060b0) */
/* WARNING: Removing unreachable block (ram,0x00010a907540) */
/* WARNING: Removing unreachable block (ram,0x00010a9060bc) */
/* WARNING: Removing unreachable block (ram,0x00010a906358) */
/* WARNING: Removing unreachable block (ram,0x00010a9079f0) */
/* WARNING: Removing unreachable block (ram,0x00010a906394) */
/* WARNING: Removing unreachable block (ram,0x00010a906398) */
/* WARNING: Removing unreachable block (ram,0x00010a9063a0) */
/* WARNING: Removing unreachable block (ram,0x00010a9063a8) */
/* WARNING: Removing unreachable block (ram,0x00010a9063ac) */
/* WARNING: Removing unreachable block (ram,0x00010a906460) */
/* WARNING: Removing unreachable block (ram,0x00010a9066e0) */
/* WARNING: Removing unreachable block (ram,0x00010a90671c) */
/* WARNING: Removing unreachable block (ram,0x00010a906720) */
/* WARNING: Removing unreachable block (ram,0x00010a906728) */
/* WARNING: Removing unreachable block (ram,0x00010a906730) */
/* WARNING: Removing unreachable block (ram,0x00010a906734) */
/* WARNING: Removing unreachable block (ram,0x00010a9067e0) */
/* WARNING: Removing unreachable block (ram,0x00010a9067ec) */
/* WARNING: Removing unreachable block (ram,0x00010a906858) */
/* WARNING: Removing unreachable block (ram,0x00010a906fe8) */
/* WARNING: Removing unreachable block (ram,0x00010a9070f4) */
/* WARNING: Removing unreachable block (ram,0x00010a9070f8) */
/* WARNING: Removing unreachable block (ram,0x00010a907100) */
/* WARNING: Removing unreachable block (ram,0x00010a907108) */
/* WARNING: Removing unreachable block (ram,0x00010a90710c) */
/* WARNING: Removing unreachable block (ram,0x00010a9072e8) */
/* WARNING: Removing unreachable block (ram,0x00010a9072f4) */
/* WARNING: Removing unreachable block (ram,0x00010a90754c) */
/* WARNING: Removing unreachable block (ram,0x00010a90766c) */
/* WARNING: Removing unreachable block (ram,0x00010a907798) */
/* WARNING: Removing unreachable block (ram,0x00010a9077a4) */
/* WARNING: Removing unreachable block (ram,0x00010a9079fc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a903508(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *******ppppppplVar10;
  long *plVar11;
  undefined4 *puVar12;
  int iVar13;
  long ****pppplVar14;
  undefined4 uVar15;
  int iVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  uint uVar19;
  char cVar20;
  code *pcVar21;
  bool bVar22;
  uint uVar23;
  undefined **ppuVar24;
  byte *pbVar25;
  long lVar26;
  long lVar27;
  long **pplVar28;
  undefined8 *puVar29;
  long *****ppppplVar30;
  long *plVar31;
  long *plVar32;
  undefined8 *puVar33;
  long *****ppppplVar34;
  long *****ppppplVar35;
  long **pplVar36;
  uint uVar37;
  undefined1 *puVar38;
  long *******ppppppplVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  undefined8 in_x6;
  undefined8 in_x7;
  byte bVar42;
  int iVar43;
  undefined *puVar44;
  long *plVar45;
  long ******pppppplVar46;
  long lVar47;
  long ***ppplVar48;
  long *******ppppppplVar49;
  long *plVar50;
  ulong uVar51;
  long ******pppppplVar52;
  long lVar53;
  ulong uVar54;
  long ****pppplVar55;
  char *pcVar56;
  long ******pppppplVar57;
  ulong uVar58;
  uint uVar59;
  long *******ppppppplVar60;
  long ******pppppplVar61;
  long ****pppplVar62;
  uint uVar63;
  long *****ppppplVar64;
  long lVar65;
  long lVar66;
  long *plVar67;
  long ******pppppplVar68;
  undefined8 uVar69;
  long *plVar70;
  long *******ppppppplVar71;
  ulong uVar72;
  long ****pppplVar73;
  long lVar74;
  long ******pppppplVar75;
  long *******ppppppplVar76;
  long **pplVar77;
  float fVar78;
  undefined4 uVar79;
  long ***ppplVar80;
  float fVar81;
  undefined4 uVar82;
  float fVar83;
  undefined4 uVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined4 uVar89;
  undefined8 uVar90;
  float fVar91;
  undefined8 uVar92;
  undefined8 *puVar93;
  long ******pppppplStack_2a8;
  long *****ppppplStack_280;
  long *plStack_278;
  long *****ppppplStack_270;
  long *plStack_268;
  long *plStack_260;
  long *****ppppplStack_258;
  long *plStack_250;
  long **pplStack_248;
  long ******pppppplStack_240;
  long *plStack_238;
  long *plStack_230;
  long **pplStack_228;
  long *plStack_220;
  long *plStack_218;
  long ******pppppplStack_210;
  long ******pppppplStack_208;
  long *plStack_200;
  long *****ppppplStack_1f8;
  long *****ppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  long *******ppppppplStack_1d8;
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c8;
  long *******ppppppplStack_1c0;
  long *plStack_1b8;
  long ******pppppplStack_1b0;
  undefined8 uStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  long lStack_190;
  long lStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  long *****ppppplStack_158;
  long ******pppppplStack_150;
  long *******ppppppplStack_148;
  long *******ppppppplStack_140;
  long *******ppppppplStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  undefined8 uStack_108;
  long *******ppppppplStack_100;
  long ******pppppplStack_f8;
  long *****ppppplStack_f0;
  long *****ppppplStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long ******pppppplStack_d0;
  long ******pppppplStack_c8;
  undefined8 uStack_c0;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplVar94;
  long *******ppppppplVar95;
  
  plVar31 = (long *)(param_1 + -0x68);
  if (*(long *)(param_1 + 0x488) == 0) {
    return;
  }
  if (0x177 < *(int *)(*(long *)(*(long *)(param_1 + 0x108) + 0xa20) + 0x18)) {
    FUN_10a907f80(plVar31,0);
    if (*(long *)(param_1 + 0x108) == 0) {
      ppuVar24 = &PTR___tlv_bootstrap_11340dee8;
      (*(code *)PTR___tlv_bootstrap_11340dee8)();
      puVar44 = *ppuVar24;
      if (puVar44 != (undefined *)0x0) goto LAB_10a901328;
      FUN_10a3ca004();
      pbVar25 = (byte *)0x113836510;
      FUN_10ad0621c();
      uVar72 = (ulong)(*pbVar25 >> 4 & 4);
      puVar44 = ppuVar24[uVar72 + 7];
      if (puVar44 != (undefined *)0x0) goto LAB_10a901328;
      FUN_10a3ca05c(ppuVar24,uVar72);
      puVar44 = ppuVar24[uVar72 + 7];
      uStack_170 = (long *******)&UNK_10f646d35;
      ppppppplStack_168 = (long *******)0x26;
    }
    else {
      puVar44 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x108) + 0x100) + 0x260);
      uStack_170 = (long *******)&UNK_10f653c20;
      ppppppplStack_168 = (long *******)0x21;
    }
    if (puVar44 != (undefined *)0x0) {
LAB_10a901328:
      plVar32 = *(long **)(puVar44 + 0x228);
      (**(code **)(*plVar32 + 0x68))();
      if (0xf < *(int *)((long)plVar32 + 0x8c)) {
        FUN_10a8fc8e8(&pplStack_228,*(undefined8 *)(param_1 + 0x488));
        pplStack_248 = &plStack_220;
        if (pplStack_228 != pplStack_248) {
          ppppppplVar49 = (long *******)(param_1 + 0x4e0);
          plStack_278 = (long *)(param_1 + 0xe8);
          uVar89 = 0x4b18967f;
          pplVar36 = pplStack_228;
          plStack_250 = plVar31;
          do {
            lVar53 = plVar31[0x9e];
            lVar47 = lVar53 + 0xf8;
            FUN_10a9176b0(lVar47,pplVar36 + 4);
            if (lVar53 + 0x100 != lVar47) {
              plVar32 = *(long **)(lVar47 + 0x38);
              plVar50 = *(long **)(lVar47 + 0x40);
              if (plVar50 != (long *)0x0) {
                plVar45 = plVar50 + 1;
                do {
                  cVar20 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar45,0x10);
                  if (bVar22) {
                    *plVar45 = *plVar45 + 1;
                    cVar20 = ExclusiveMonitorsStatus();
                  }
                } while (cVar20 != '\0');
              }
              plStack_238 = plVar32;
              plStack_230 = plVar50;
              if (plVar32 != (long *)0x0) {
                uVar37 = *(uint *)(plVar32 + 0x10);
                if (uVar37 < 0xf4241) {
                  ppppplStack_258 =
                       (long *****)
                       CONCAT44(ppppplStack_258._4_4_,*(undefined4 *)((long)plVar32 + 0x7c));
                  if (uVar37 < 2) {
                    uVar37 = 1;
                  }
                  fVar91 = *(float *)((long)plVar32 + 0x84);
                  lVar47 = plVar32[0x11];
                  uVar69 = *(undefined8 *)((long)plVar32 + 0x8c);
                  uVar17 = *(undefined1 *)((long)plVar32 + 0x94);
                  uVar18 = *(undefined1 *)((long)plVar32 + 0x95);
                  bVar42 = *(byte *)((long)plVar32 + 0x96);
                  pppppplStack_240 =
                       (long ******)
                       CONCAT44(pppppplStack_240._4_4_,(uint)*(byte *)((long)plVar32 + 0x97));
                  lVar53 = plVar32[0x13];
                  uVar15 = *(undefined4 *)((long)plVar32 + 0xbc);
                  lStack_188 = plVar32[0x19];
                  lStack_190 = plVar32[0x18];
                  lVar65 = plVar32[0x1a];
                  uVar90 = *(undefined8 *)((long)plVar32 + 0x9c);
                  plStack_268 = *(long **)((long)plVar32 + 0xac);
                  ppppplStack_270 = *(long ******)((long)plVar32 + 0xa4);
                  uVar92 = *(undefined8 *)((long)plVar32 + 0xb4);
                  lVar26 = plVar31[0x2e];
                  FUN_10a3dea28();
                  (**(code **)(*plStack_250 + 0x50))(&uStack_170);
                  ppppppplVar60 = ppppppplStack_168;
                  ppppppplStack_d8 = ppppppplStack_168;
                  ppppppplStack_e0 = uStack_170;
                  if (ppppppplStack_168 == (long *******)0x0) {
                    ppppppplVar60 = (long *******)0x0;
                  }
                  else {
                    ppppppplVar94 = ppppppplStack_168 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                      if (bVar22) {
                        *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppppplStack_168 != (long *******)0x0) {
                      ppppppplVar94 = ppppppplStack_168 + 1;
                      do {
                        pppppplVar52 = *ppppppplVar94;
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                        if (bVar22) {
                          *ppppppplVar94 = (long ******)((long)pppppplVar52 + -1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      if (pppppplVar52 == (long ******)0x0) {
                        (*(code *)(*ppppppplStack_168)[2])(ppppppplStack_168);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
                        ppppppplVar60 = ppppppplStack_d8;
                      }
                    }
                  }
                  ppppppplVar94 = ppppppplStack_e0;
                  if ((long *****)plVar32[5] == (long *****)0x0) {
                    ppppppplVar94 = ppppppplStack_e0 + 0x2a;
                    if (*(char *)((long)ppppppplStack_e0 + 0x167) < '\0') {
                      ppppppplVar94 = (long *******)*ppppppplVar94;
                    }
                    func_0x00010ae06f08(1,0x12,&UNK_10f6821fc,&UNK_10f6821fc,0xffffffff,
                                        &UNK_10f68273f,in_x6,in_x7,ppppppplVar94);
                    ppppppplStack_1a0._0_5_ = (uint5)(uint)ppppppplStack_1a0;
                    pppppplStack_1b0 = (long ******)0x0;
                    uStack_1a8 = (long ******)0x0;
                    ppppppplStack_1a0 =
                         (long *******)((ulong)ppppppplStack_1a0 & 0xffffffffffffff00);
                  }
                  else {
                    pppppplStack_210 = (long ******)0x0;
                    pppppplStack_208 = (long ******)0x0;
                    plVar45 = *(long **)(lVar26 + 0x38);
                    plVar50 = *(long **)(lVar26 + 0x30);
                    for (plVar31 = plVar50; plVar31 != plVar45; plVar31 = plVar31 + 1) {
                      puVar29 = *(undefined8 **)(*plVar31 + 200);
LAB_10a90158c:
                      if (puVar29 != *(undefined8 **)(*plVar31 + 0xd0)) {
                        pppppplVar52 = (long ******)*puVar29;
                        if ((long *****)plVar32[5] != *pppppplVar52) goto code_r0x00010a9015a4;
                        pppppplStack_2a8 = (long ******)puVar29[1];
                        pppppplVar68 = pppppplVar52;
                        if (pppppplStack_2a8 != (long ******)0x0) {
                          pppppplVar68 = pppppplStack_2a8 + 1;
                          do {
                            cVar20 = '\x01';
                            bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                            if (bVar22) {
                              *pppppplVar68 = (long *****)((long)*pppppplVar68 + 1);
                              cVar20 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar20 != '\0');
                          pppppplVar68 = (long ******)*puVar29;
                        }
                        ppppplVar34 = pppppplVar68[0x62];
                        ppppplVar35 = pppppplVar68[99];
                        pppppplStack_210 = pppppplVar52;
                        pppppplStack_208 = pppppplStack_2a8;
                        FUN_10a8fda3c();
                        if ((ulong)pppppplVar68 >> 0x20 != 0) {
                          if (((long)ppppplVar35 - (long)ppppplVar34 & 0x3fffffffcU) == 0) {
                            *(undefined4 *)(pppppplVar52 + 0x280) = 0;
                          }
                          uVar23 = (uint)pppppplVar68;
                          uVar59 = uVar23 & 0xff;
                          uVar63 = uVar23 >> 8;
                          uVar19 = *(int *)(pppppplVar52 + 0x2ae) +
                                   *(int *)(pppppplVar52 + 0x2ae) * uVar23;
                          uVar23 = *(uint *)((long)pppppplVar52 + 0x54);
                          if (*(uint *)((long)pppppplVar52 + 0x54) <= uVar19) {
                            uVar23 = uVar19;
                          }
                          *(uint *)((long)pppppplVar52 + 0x54) = uVar23;
                          *(byte *)((long)pppppplVar52 + 0x140f) =
                               *(byte *)((long)pppppplVar52 + 0x140f) | bVar42;
                          *(byte *)(pppppplVar52 + 0x282) =
                               *(byte *)(pppppplVar52 + 0x282) | (byte)pppppplStack_240;
                          lVar66 = *plVar31;
                          if (lVar66 == 0) {
                            plVar50 = *(long **)(lVar26 + 0x30);
                            plVar45 = *(long **)(lVar26 + 0x38);
                            bVar22 = true;
                            goto LAB_10a901764;
                          }
                          bVar22 = true;
                          goto LAB_10a901770;
                        }
                        ppppppplVar60 = ppppppplVar94 + 0x2a;
                        if (*(char *)((long)ppppppplVar94 + 0x167) < '\0') {
                          ppppppplVar60 = (long *******)*ppppppplVar60;
                        }
                        __ZNSt3__19to_stringEi(&uStack_170,0x20);
                        ppppppplVar94 = uStack_170;
                        if (-1 < (long)ppppppplStack_160) {
                          ppppppplVar94 = (long *******)&uStack_170;
                        }
                        func_0x00010ae06f08(1,0x12,&UNK_10f6821fc,&UNK_10f6821fc,0xffffffff,
                                            &UNK_10f68275f,in_x6,in_x7,ppppppplVar60,ppppppplVar94);
                        if ((long)ppppppplStack_160 < 0) {
                          __ZdlPv(uStack_170);
                        }
                        ppppppplStack_1a0._0_5_ = (uint5)(uint)ppppppplStack_1a0;
                        pppppplStack_1b0 = (long ******)0x0;
                        uStack_1a8 = (long ******)0x0;
                        ppppppplStack_1a0 =
                             (long *******)((ulong)ppppppplStack_1a0 & 0xffffffffffffff00);
                        goto joined_r0x00010a9016e0;
                      }
                    }
                    pppppplStack_2a8 = (long ******)0x0;
                    bVar22 = false;
                    uVar59 = 0;
                    uVar63 = 0;
                    pppppplVar52 = (long ******)0x0;
LAB_10a901764:
                    if (plVar50 == plVar45) goto LAB_10a903268;
                    lVar66 = plVar45[-1];
LAB_10a901770:
                    iVar43 = 2;
                    if (bVar42 != 0) {
                      iVar43 = 3;
                    }
                    iVar13 = 4;
                    if ((int)pppppplStack_240 == 0) {
                      iVar13 = iVar43;
                    }
                    iVar16 = *(int *)(lVar66 + 0x124);
                    iVar43 = iVar13;
                    if (iVar13 <= iVar16) {
                      iVar43 = iVar16;
                    }
                    *(int *)(lVar66 + 0x124) = iVar43;
                    if (iVar16 < iVar13) {
                      FUN_10a93f6f4(lVar66,lVar26 + 0x68);
                    }
                    if (pppppplVar52 == (long ******)0x0) {
                      ppppppplVar39 = *(long ********)(lVar26 + 0x68);
                      ppppppplVar95 = *(long ********)(lVar26 + 0x70);
                      pppppplVar52 = (long ******)0x1598;
                      __Znwm();
                      pppppplVar52[1] = (long *****)0x0;
                      pppppplVar52[2] = (long *****)0x0;
                      *pppppplVar52 = (long *****)&PTR_FUN_110c2e530;
                      if (ppppppplVar95 != (long *******)0x0) {
                        ppppppplVar76 = ppppppplVar95 + 1;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                          if (bVar22) {
                            *ppppppplVar76 = (long ******)((long)*ppppppplVar76 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      pppppplVar68 = (long ******)plVar32[5];
                      ppppplVar34 = (long *****)plVar32[6];
                      if (ppppplVar34 != (long *****)0x0) {
                        ppppplVar35 = ppppplVar34 + 1;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppplVar35,0x10);
                          if (bVar22) {
                            *ppppplVar35 = (long ****)((long)*ppppplVar35 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      ppppplVar35 = (long *****)plVar32[7];
                      ppppplVar64 = (long *****)plVar32[8];
                      if (ppppplVar64 != (long *****)0x0) {
                        ppppplVar30 = ppppplVar64 + 1;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppplVar30,0x10);
                          if (bVar22) {
                            *ppppplVar30 = (long ****)((long)*ppppplVar30 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      pppppplStack_c8 = (long ******)0x0;
                      uStack_c0._0_1_ = 0;
                      uStack_c0._1_5_ = 0;
                      uStack_c0._6_2_ = 0;
                      uStack_b8 = 0;
                      uStack_b2 = 0;
                      ppppplStack_1f8 = ppppplVar35;
                      ppppplStack_1f0 = ppppplVar64;
                      ppppppplStack_1e0 = (long *******)pppppplVar68;
                      ppppppplStack_1d8 = (long *******)ppppplVar34;
                      ppppppplStack_1c8 = ppppppplVar39;
                      ppppppplStack_1c0 = ppppppplVar95;
                      FUN_10a2e23e0(&pppppplStack_c8,plVar32[9],plVar32[10],
                                    plVar32[10] - plVar32[9] >> 4);
                      pppppplVar52[3] = (long *****)pppppplVar68;
                      pppppplVar52[4] = ppppplVar34;
                      ppppppplStack_1e0 = (long *******)0x0;
                      ppppppplStack_1d8 = (long *******)0x0;
                      if (pppppplVar68 == (long ******)0x0) {
                        pppppplVar52[5] = (long *****)0x0;
                        pppppplVar52[6] = (long *****)0x0;
                      }
                      else {
                        FUN_10ab46af4();
                        ppppplVar34 = pppppplVar68[1];
                        ppppplVar30 = *pppppplVar68;
                        pppppplVar52[6] = pppppplVar68[1];
                        pppppplVar52[5] = ppppplVar30;
                        if (ppppplVar34 != (long *****)0x0) {
                          ppppplVar34 = ppppplVar34 + 1;
                          do {
                            cVar20 = '\x01';
                            bVar22 = (bool)ExclusiveMonitorPass(ppppplVar34,0x10);
                            if (bVar22) {
                              *ppppplVar34 = (long ****)((long)*ppppplVar34 + 1);
                              cVar20 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar20 != '\0');
                        }
                      }
                      pppppplVar46 = pppppplStack_c8;
                      pppppplVar68 = pppppplVar52 + 3;
                      pppppplVar52[7] = (long *****)pppppplStack_c8;
                      pppppplVar75 = (long ******)
                                     CONCAT26(uStack_c0._6_2_,
                                              CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                      pppppplVar52[9] = (long *****)CONCAT26(uStack_b2,uStack_b8);
                      pppppplVar52[8] = (long *****)pppppplVar75;
                      uStack_c0._0_1_ = 0;
                      uStack_c0._1_5_ = 0;
                      uStack_c0._6_2_ = 0;
                      uStack_b8 = 0;
                      uStack_b2 = 0;
                      pppppplStack_c8 = (long ******)0x0;
                      pppppplVar61 = pppppplVar52 + 10;
                      *pppppplVar61 = (long *****)0x0;
                      pppppplVar52[0xb] = (long *****)0x0;
                      pppppplVar52[0xc] = (long *****)0x0;
                      if ((long)pppppplVar75 - (long)pppppplVar46 != 0) {
                        uVar72 = (long)pppppplVar75 - (long)pppppplVar46 >> 4;
                        if (uVar72 >> 0x3c != 0) {
                          FUN_10a4afcc4();
                          goto LAB_10a903268;
                        }
                        pppppplVar46 = pppppplVar61;
                        pppppplStack_150 = pppppplVar61;
                        FUN_10a4afcd8();
                        ppppplVar34 = (long *****)
                                      ((long)pppppplVar46 -
                                      ((long)pppppplVar52[0xb] - (long)pppppplVar52[10]));
                        _memcpy(ppppplVar34);
                        uStack_170 = (long *******)pppppplVar52[10];
                        pppppplVar52[10] = ppppplVar34;
                        pppppplVar52[0xb] = (long *****)pppppplVar46;
                        ppppplStack_158 = pppppplVar52[0xc];
                        pppppplVar52[0xc] = (long *****)(pppppplVar46 + uVar72 * 2);
                        ppppppplStack_168 = uStack_170;
                        ppppppplStack_160 = uStack_170;
                        func_0x00010a4afd0c(&uStack_170);
                        pppppplVar46 = (long ******)pppppplVar52[7];
                        pppppplVar75 = (long ******)pppppplVar52[8];
                      }
                      for (; pppppplVar46 != pppppplVar75; pppppplVar46 = pppppplVar46 + 2) {
                        ppppplVar34 = *pppppplVar46;
                        if (ppppplVar34 != (long *****)0x0) {
                          FUN_10ab46af4();
                          FUN_10a90f550(pppppplVar61,ppppplVar34);
                        }
                      }
                      *(undefined4 *)(pppppplVar52 + 0xd) = ppppplStack_258._0_4_;
                      *(uint *)((long)pppppplVar52 + 0x6c) = uVar37;
                      *(undefined4 *)(pppppplVar52 + 0xe) = 0;
                      _bzero(pppppplVar52 + 0xf,0x218);
                      FUN_109ffe100(pppppplVar52 + 0x62,0x20);
                      lVar74 = 0;
                      pppppplVar52[0x68] = (long *****)0x0;
                      pppppplVar52[0x67] = (long *****)0x0;
                      pppppplVar52[0x6a] = (long *****)0x0;
                      pppppplVar52[0x69] = (long *****)0x0;
                      pppppplVar52[0x66] = (long *****)0x0;
                      pppppplVar52[0x65] = (long *****)0x0;
                      do {
                        *(undefined1 *)((long)pppppplVar52 + lVar74 + 0x398) = 0;
                        *(undefined1 *)((long)pppppplVar52 + lVar74 + 0x3d8) = 0;
                        lVar74 = lVar74 + 0x44;
                      } while (lVar74 != 0x880);
                      lVar74 = 0xc18;
                      do {
                        puVar29 = (undefined8 *)((long)pppppplVar52 + lVar74);
                        puVar29[1] = 0;
                        *puVar29 = 0x3f800000;
                        puVar29[3] = 0;
                        puVar29[2] = 0x3f80000000000000;
                        puVar29[5] = 0x3f800000;
                        puVar29[4] = 0;
                        puVar29[7] = 0x3f80000000000000;
                        puVar29[6] = 0;
                        lVar74 = lVar74 + 0x40;
                      } while (lVar74 != 0x1418);
                      *(undefined4 *)(pppppplVar52 + 0x283) = 0;
                      *(float *)((long)pppppplVar52 + 0x141c) = fVar91;
                      *(undefined4 *)(pppppplVar52 + 0x284) = 0;
                      *(char *)((long)pppppplVar52 + 0x1424) = (char)lVar53;
                      *(undefined1 *)((long)pppppplVar52 + 0x1425) = uVar18;
                      *(undefined1 *)((long)pppppplVar52 + 0x1426) = uVar18;
                      *(undefined2 *)((long)pppppplVar52 + 0x1427) = 0;
                      *(undefined4 *)(pppppplVar52 + 0x286) = 0x3f800000;
                      *(undefined8 *)((long)pppppplVar52 + 0x143c) = 0;
                      *(undefined8 *)((long)pppppplVar52 + 0x1434) = 0;
                      pppppplVar52[0x28a] = (long *****)0x0;
                      pppppplVar52[0x289] = (long *****)0x0;
                      *(undefined4 *)((long)pppppplVar52 + 0x1444) = 0x3f800000;
                      *(undefined4 *)(pppppplVar52 + 0x28b) = 0x3f800000;
                      *(undefined8 *)((long)pppppplVar52 + 0x1464) = 0;
                      *(undefined8 *)((long)pppppplVar52 + 0x145c) = 0;
                      *(undefined4 *)((long)pppppplVar52 + 0x146c) = 0x3f800000;
                      *(undefined1 *)((long)pppppplVar52 + 0x1514) = 0;
                      *(undefined1 *)(pppppplVar52 + 0x2a3) = 0;
                      *(undefined4 *)((long)pppppplVar52 + 0x151c) = 0;
                      *(undefined1 *)(pppppplVar52 + 0x2a4) = 0;
                      *(undefined1 *)((long)pppppplVar52 + 0x152c) = 0;
                      *(undefined1 *)(pppppplVar52 + 0x2a6) = 0;
                      *(undefined4 *)((long)pppppplVar52 + 0x1534) = 0;
                      pppppplVar52[0x28f] = (long *****)0x0;
                      pppppplVar52[0x28e] = (long *****)0x0;
                      pppppplVar52[0x291] = (long *****)0x0;
                      pppppplVar52[0x290] = (long *****)0x0;
                      pppppplVar52[0x293] = (long *****)0x0;
                      pppppplVar52[0x292] = (long *****)0x0;
                      pppppplVar52[0x295] = (long *****)0x0;
                      pppppplVar52[0x294] = (long *****)0x0;
                      pppppplVar52[0x297] = (long *****)0x0;
                      pppppplVar52[0x296] = (long *****)0x0;
                      pppppplVar52[0x299] = (long *****)0x0;
                      pppppplVar52[0x298] = (long *****)0x0;
                      pppppplVar52[0x29b] = (long *****)0x0;
                      pppppplVar52[0x29a] = (long *****)0x0;
                      pppppplVar52[0x29d] = (long *****)0x0;
                      pppppplVar52[0x29c] = (long *****)0x0;
                      pppppplVar52[0x29f] = (long *****)0x0;
                      pppppplVar52[0x29e] = (long *****)0x0;
                      *(undefined8 *)((long)pppppplVar52 + 0x1501) = 0;
                      *(undefined8 *)((long)pppppplVar52 + 0x14f9) = 0;
                      pppppplVar52[0x2a7] = (long *****)0x3f800000;
                      *(undefined4 *)(pppppplVar52 + 0x2a8) = 0;
                      *(undefined8 *)((long)pppppplVar52 + 0x1544) = uVar90;
                      *(long **)((long)pppppplVar52 + 0x1554) = plStack_268;
                      *(long ******)((long)pppppplVar52 + 0x154c) = ppppplStack_270;
                      *(undefined8 *)((long)pppppplVar52 + 0x155c) = uVar92;
                      pppppplVar52[0x2ad] = (long *****)ppppppplVar39;
                      pppppplVar52[0x2ae] = (long *****)ppppppplVar95;
                      pppppplVar52[0x2af] = ppppplVar35;
                      pppppplVar52[0x2b0] = ppppplVar64;
                      *(uint *)(pppppplVar52 + 0x2b1) = uVar37;
                      *(undefined8 *)((long)pppppplVar52 + 0x158c) = 0xffffffff;
                      *(undefined1 *)((long)pppppplVar52 + 0x1594) = 0;
                      ppppplVar35 = pppppplVar52[99];
                      ppppplVar34 = pppppplVar52[0x62];
                      if (ppppplVar35 != ppppplVar34) {
                        iVar43 = 0;
                        ppppplVar64 = ppppplVar35;
                        do {
                          ppppplVar64 = (long *****)((long)ppppplVar64 + -4);
                          *(int *)ppppplVar64 = iVar43;
                          iVar43 = iVar43 + 1;
                        } while (ppppplVar64 != ppppplVar34);
                        do {
                          ppppplVar64 = (long *****)((long)ppppplVar34 + 4);
                          FUN_10a8fd8d0(pppppplVar68,*(undefined4 *)ppppplVar34);
                          ppppplVar34 = ppppplVar64;
                        } while (ppppplVar64 != ppppplVar35);
                      }
                      uStack_170 = &pppppplStack_c8;
                      FUN_10a0d4a18(&uStack_170);
                      pppppplStack_210 = pppppplVar68;
                      pppppplStack_208 = pppppplVar52;
                      if (pppppplStack_2a8 != (long ******)0x0) {
                        pppppplVar52 = pppppplStack_2a8 + 1;
                        do {
                          ppppplVar34 = *pppppplVar52;
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                          if (bVar22) {
                            *pppppplVar52 = (long *****)((long)ppppplVar34 + -1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                        if (ppppplVar34 == (long *****)0x0) {
                          (*(code *)(*pppppplStack_2a8)[2])(pppppplStack_2a8);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplStack_2a8);
                        }
                      }
                      pppppplVar52 = pppppplStack_210;
                      fVar85 = SUB84(pppppplStack_210[0x2a8],0);
                      fVar87 = (float)*(undefined8 *)((long)pppppplStack_210 + 0x1534);
                      fVar81 = fVar85 - fVar87;
                      fVar86 = (float)((ulong)pppppplStack_210[0x2a8] >> 0x20);
                      fVar88 = (float)((ulong)*(undefined8 *)((long)pppppplStack_210 + 0x1534) >>
                                      0x20);
                      fVar83 = fVar86 - fVar88;
                      fVar78 = *(float *)(pppppplStack_210 + 0x2a9) -
                               *(float *)((long)pppppplStack_210 + 0x153c);
                      *(float *)((long)pppppplStack_210 + 0x1504) =
                           SQRT(fVar81 * fVar81 + fVar83 * fVar83 + fVar78 * fVar78) * 0.5;
                      *(undefined1 *)(pppppplStack_210 + 0x2a0) = 0;
                      if (*(int *)(pppppplStack_210 + 0x2a6) == 1) {
                        if (*(char *)((long)pppppplStack_210 + 0x14fc) == '\x01') {
                          *(undefined1 *)((long)pppppplStack_210 + 0x14fc) = 0;
                        }
                        if (*(char *)((long)pppppplStack_210 + 0x1514) == '\x01') {
                          *(undefined1 *)((long)pppppplStack_210 + 0x1514) = 0;
                        }
                      }
                      else {
                        pppppplStack_210[0x29e] =
                             (long *****)CONCAT44((fVar86 + fVar88) * 0.5,(fVar85 + fVar87) * 0.5);
                        *(float *)(pppppplStack_210 + 0x29f) =
                             (*(float *)(pppppplStack_210 + 0x2a9) +
                             *(float *)((long)pppppplStack_210 + 0x153c)) * 0.5;
                        if ((*(byte *)((long)pppppplStack_210 + 0x14fc) & 1) == 0) {
                          *(undefined1 *)((long)pppppplStack_210 + 0x14fc) = 1;
                        }
                        *(float *)(pppppplStack_210 + 0x2a1) = fVar81 * 0.5;
                        *(float *)((long)pppppplStack_210 + 0x150c) = fVar83 * 0.5;
                        *(float *)(pppppplStack_210 + 0x2a2) = fVar78 * 0.5;
                        if ((*(byte *)((long)pppppplStack_210 + 0x1514) & 1) == 0) {
                          *(undefined1 *)((long)pppppplStack_210 + 0x1514) = 1;
                        }
                      }
                      pppppplVar68 = pppppplStack_210;
                      FUN_10a8fda3c();
                      *(undefined4 *)(pppppplVar52 + 0x280) = 0;
                      *(float *)((long)pppppplVar52 + 0x1404) = fVar91;
                      *(byte *)((long)pppppplVar52 + 0x140f) = bVar42;
                      *(char *)(pppppplVar52 + 0x282) = (char)pppppplStack_240;
                      *(char *)(pppppplVar52 + 0x2a3) = (char)lVar47;
                      *(undefined8 *)((long)pppppplVar52 + 0x151c) = uVar69;
                      if (((ulong)pppppplVar68 >> 0x20 == 0) ||
                         (pppppplStack_240 = pppppplVar68, 0x1f < ((ulong)pppppplVar68 & 0xffffffff)
                         )) goto LAB_10a903268;
                      *(undefined1 *)
                       ((long)pppppplVar52 + ((ulong)pppppplVar68 & 0xffffffff) + 0x340) = uVar17;
                      FUN_10a9091e4(pppppplVar52,lVar66 + 0x70,1);
                      pppppplVar68 = (long ******)pppppplStack_210[5];
                      for (pppppplVar52 = (long ******)pppppplStack_210[4];
                          pppppplVar46 = pppppplStack_210, pppppplVar52 != pppppplVar68;
                          pppppplVar52 = pppppplVar52 + 2) {
                        FUN_10a9091e4(pppppplVar52,lVar66 + 0x30,1);
                      }
                      lVar47 = *(long *)(lVar26 + 0x68);
                      if (lVar47 != 0) {
                        uVar37 = *(uint *)(lVar66 + 0xc);
                        if (uVar37 != 0) {
                          uVar72 = (ulong)uVar37 & 0x3fff;
                          uVar54 = (*(long *)(lVar47 + 0x28) - *(long *)(lVar47 + 0x20) >> 3) *
                                   -0x3333333333333333;
                          if (((uVar72 <= uVar54 && uVar54 - uVar72 != 0) &&
                              (pcVar56 = (char *)(*(long *)(lVar47 + 0x20) + uVar72 * 0x28),
                              *(uint *)(pcVar56 + 4) == uVar37)) && (*pcVar56 != '\x02')) {
                            lVar47 = lVar47 + 0x40;
                            func_0x00010a97784c(lVar47,lVar26 + 0x50,pppppplStack_210);
                            *(int *)(pppppplVar46 + 0xb) = (int)lVar47;
                            FUN_10a8fea0c(lVar66,*(undefined8 *)(lVar26 + 0x68),lVar47);
                            pppppplVar52 = pppppplVar46;
                          }
                        }
                      }
                      pppppplVar68 = pppppplStack_208;
                      pppppplVar46 = pppppplStack_210;
                      ppppppplVar39 = (long *******)(lVar66 + 0xf8);
                      uVar72 = ((ulong)(uint)((int)pppppplStack_210 << 3) + 8 ^
                               (ulong)pppppplStack_210 >> 0x20) * -0x622015f714c7d297;
                      uVar72 = ((ulong)pppppplStack_210 >> 0x20 ^ uVar72 >> 0x2f ^ uVar72) *
                               -0x622015f714c7d297;
                      pppppplVar61 = (long ******)((uVar72 ^ uVar72 >> 0x2f) * -0x622015f714c7d297);
                      pppppplVar75 = *(long *******)(lVar66 + 0x100);
                      if (pppppplVar75 != (long ******)0x0) {
                        uVar72 = (long)pppppplVar75 - 1;
                        if (((ulong)pppppplVar75 & uVar72) == 0) {
                          pppppplVar52 = (long ******)((ulong)pppppplVar61 & uVar72);
                        }
                        else {
                          pppppplVar52 = pppppplVar61;
                          if (pppppplVar75 <= pppppplVar61) {
                            uVar54 = 0;
                            if (pppppplVar75 != (long ******)0x0) {
                              uVar54 = (ulong)pppppplVar61 / (ulong)pppppplVar75;
                            }
                            pppppplVar52 = (long ******)
                                           ((long)pppppplVar61 - uVar54 * (long)pppppplVar75);
                          }
                        }
                        ppppplVar34 = (*ppppppplVar39)[(long)pppppplVar52];
                        if (ppppplVar34 != (long *****)0x0) {
                          do {
                            while( true ) {
                              ppppplVar34 = (long *****)*ppppplVar34;
                              if (ppppplVar34 == (long *****)0x0) goto LAB_10a901e14;
                              pppppplVar57 = (long ******)ppppplVar34[1];
                              if (pppppplVar57 != pppppplVar61) break;
                              if ((long ******)ppppplVar34[2] == pppppplStack_210)
                              goto LAB_10a9020c8;
                            }
                            if (((ulong)pppppplVar75 & uVar72) == 0) {
                              pppppplVar57 = (long ******)((ulong)pppppplVar57 & uVar72);
                            }
                            else if (pppppplVar75 <= pppppplVar57) {
                              uVar54 = 0;
                              if (pppppplVar75 != (long ******)0x0) {
                                uVar54 = (ulong)pppppplVar57 / (ulong)pppppplVar75;
                              }
                              pppppplVar57 = (long ******)
                                             ((long)pppppplVar57 - uVar54 * (long)pppppplVar75);
                            }
                          } while (pppppplVar57 == pppppplVar52);
                        }
                      }
LAB_10a901e14:
                      ppppppplVar95 = (long *******)0x20;
                      __Znwm();
                      ppppppplStack_160 = (long *******)0x1;
                      *ppppppplVar95 = (long ******)0x0;
                      ppppppplVar95[1] = pppppplVar61;
                      ppppppplVar95[2] = pppppplVar46;
                      ppppppplVar95[3] = pppppplVar68;
                      if (pppppplVar68 != (long ******)0x0) {
                        pppppplVar68 = pppppplVar68 + 1;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                          if (bVar22) {
                            *pppppplVar68 = (long *****)((long)*pppppplVar68 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      fVar78 = (float)(*(long *)(lVar66 + 0x110) + 1);
                      uStack_170 = ppppppplVar95;
                      ppppppplStack_168 = ppppppplVar39;
                      if ((pppppplVar75 == (long ******)0x0) ||
                         (*(float *)(lVar66 + 0x118) * (float)pppppplVar75 < fVar78)) {
                        uVar72 = 1;
                        if ((long ******)0x2 < pppppplVar75) {
                          uVar72 = (ulong)(((ulong)pppppplVar75 & (long)pppppplVar75 - 1U) != 0);
                        }
                        pppppplVar52 = (long ******)(uVar72 | (long)pppppplVar75 << 1);
                        pppppplVar68 = (long ******)(long)(fVar78 / *(float *)(lVar66 + 0x118));
                        if (pppppplVar52 <= pppppplVar68) {
                          pppppplVar52 = pppppplVar68;
                        }
                        if ((long)pppppplVar52 - 1U == 0) {
                          pppppplVar52 = (long ******)0x2;
                        }
                        else if (((ulong)pppppplVar52 & (long)pppppplVar52 - 1U) != 0) {
                          __ZNSt3__112__next_primeEm();
                        }
                        pppppplVar75 = *(long *******)(lVar66 + 0x100);
                        if (pppppplVar75 < pppppplVar52) {
LAB_10a901ed0:
                          if ((ulong)pppppplVar52 >> 0x3d != 0) {
                            func_0x000109ffded8();
                            goto LAB_10a903268;
                          }
                          pppppplVar68 = (long ******)((long)pppppplVar52 << 3);
                          __Znwm();
                          pppppplVar46 = *ppppppplVar39;
                          *ppppppplVar39 = pppppplVar68;
                          if (pppppplVar46 != (long ******)0x0) {
                            __ZdlPv();
                          }
                          pppppplVar68 = (long ******)0x0;
                          *(long *******)(lVar66 + 0x100) = pppppplVar52;
                          do {
                            (*ppppppplVar39)[(long)pppppplVar68] = (long *****)0x0;
                            pppppplVar68 = (long ******)((long)pppppplVar68 + 1);
                          } while (pppppplVar52 != pppppplVar68);
                          ppppplVar34 = *(long ******)(lVar66 + 0x108);
                          pppppplVar75 = pppppplVar52;
                          if (ppppplVar34 != (long *****)0x0) {
                            pppppplVar68 = (long ******)ppppplVar34[1];
                            uVar72 = (long)pppppplVar52 - 1;
                            if (((ulong)pppppplVar52 & uVar72) == 0) {
                              pppppplVar68 = (long ******)((ulong)pppppplVar68 & uVar72);
                            }
                            else if (pppppplVar52 <= pppppplVar68) {
                              uVar54 = 0;
                              if (pppppplVar52 != (long ******)0x0) {
                                uVar54 = (ulong)pppppplVar68 / (ulong)pppppplVar52;
                              }
                              pppppplVar68 = (long ******)
                                             ((long)pppppplVar68 - uVar54 * (long)pppppplVar52);
                            }
                            (*ppppppplVar39)[(long)pppppplVar68] = (long *****)(lVar66 + 0x108);
                            ppppplVar35 = (long *****)*ppppplVar34;
                            while (ppppplVar35 != (long *****)0x0) {
                              pppppplVar46 = (long ******)ppppplVar35[1];
                              if (((ulong)pppppplVar52 & uVar72) == 0) {
                                pppppplVar46 = (long ******)((ulong)pppppplVar46 & uVar72);
                              }
                              else if (pppppplVar52 <= pppppplVar46) {
                                uVar54 = 0;
                                if (pppppplVar52 != (long ******)0x0) {
                                  uVar54 = (ulong)pppppplVar46 / (ulong)pppppplVar52;
                                }
                                pppppplVar46 = (long ******)
                                               ((long)pppppplVar46 - uVar54 * (long)pppppplVar52);
                              }
                              ppppplVar64 = ppppplVar35;
                              if (pppppplVar46 != pppppplVar68) {
                                pppppplVar57 = *ppppppplVar39;
                                if (pppppplVar57[(long)pppppplVar46] == (long *****)0x0) {
                                  pppppplVar57[(long)pppppplVar46] = ppppplVar34;
                                  pppppplVar68 = pppppplVar46;
                                }
                                else {
                                  *ppppplVar34 = *ppppplVar35;
                                  *ppppplVar35 = *pppppplVar57[(long)pppppplVar46];
                                  *pppppplVar57[(long)pppppplVar46] = (long ****)ppppplVar35;
                                  ppppplVar64 = ppppplVar34;
                                }
                              }
                              ppppplVar34 = ppppplVar64;
                              ppppplVar35 = (long *****)*ppppplVar64;
                            }
                          }
                        }
                        else if (pppppplVar52 < pppppplVar75) {
                          pppppplVar68 = (long ******)
                                         (long)((float)*(ulong *)(lVar66 + 0x110) /
                                               *(float *)(lVar66 + 0x118));
                          if ((pppppplVar75 < (long ******)0x3) ||
                             (((ulong)pppppplVar75 & (long)pppppplVar75 - 1U) != 0)) {
                            __ZNSt3__112__next_primeEm();
                          }
                          else if ((long ******)0x1 < pppppplVar68) {
                            pppppplVar68 = (long ******)
                                           (1L << (-LZCOUNT((long)pppppplVar68 + -1) & 0x3fU));
                          }
                          if (pppppplVar52 <= pppppplVar68) {
                            pppppplVar52 = pppppplVar68;
                          }
                          if (pppppplVar52 < pppppplVar75) {
                            if (pppppplVar52 != (long ******)0x0) goto LAB_10a901ed0;
                            pppppplVar52 = *ppppppplVar39;
                            *ppppppplVar39 = (long ******)0x0;
                            if (pppppplVar52 != (long ******)0x0) {
                              __ZdlPv();
                            }
                            *(undefined8 *)(lVar66 + 0x100) = 0;
                            pppppplVar75 = (long ******)0x0;
                          }
                          else {
                            pppppplVar75 = *(long *******)(lVar66 + 0x100);
                          }
                        }
                        if (((ulong)pppppplVar75 & (long)pppppplVar75 - 1U) == 0) {
                          pppppplVar52 = (long ******)
                                         ((long)pppppplVar75 - 1U & (ulong)pppppplVar61);
                        }
                        else {
                          pppppplVar52 = pppppplVar61;
                          if (pppppplVar75 <= pppppplVar61) {
                            uVar72 = 0;
                            if (pppppplVar75 != (long ******)0x0) {
                              uVar72 = (ulong)pppppplVar61 / (ulong)pppppplVar75;
                            }
                            pppppplVar52 = (long ******)
                                           ((long)pppppplVar61 - uVar72 * (long)pppppplVar75);
                          }
                        }
                      }
                      pppppplVar46 = *ppppppplVar39;
                      pppppplVar68 = (long ******)pppppplVar46[(long)pppppplVar52];
                      if (pppppplVar68 == (long ******)0x0) {
                        *ppppppplVar95 = *(long *******)(lVar66 + 0x108);
                        *(long ********)(lVar66 + 0x108) = ppppppplVar95;
                        pppppplVar46[(long)pppppplVar52] = (long *****)(lVar66 + 0x108);
                        if (*ppppppplVar95 != (long ******)0x0) {
                          pppppplVar68 = (long ******)(*ppppppplVar95)[1];
                          if (((ulong)pppppplVar75 & (long)pppppplVar75 - 1U) == 0) {
                            pppppplVar68 = (long ******)
                                           ((ulong)pppppplVar68 & (long)pppppplVar75 - 1U);
                          }
                          else if (pppppplVar75 <= pppppplVar68) {
                            uVar72 = 0;
                            if (pppppplVar75 != (long ******)0x0) {
                              uVar72 = (ulong)pppppplVar68 / (ulong)pppppplVar75;
                            }
                            pppppplVar68 = (long ******)
                                           ((long)pppppplVar68 - uVar72 * (long)pppppplVar75);
                          }
                          pppppplVar68 = *ppppppplVar39 + (long)pppppplVar68;
                          goto LAB_10a9020b4;
                        }
                      }
                      else {
                        *ppppppplVar95 = (long ******)*pppppplVar68;
LAB_10a9020b4:
                        *pppppplVar68 = (long *****)ppppppplVar95;
                      }
                      *(long *)(lVar66 + 0x110) = *(long *)(lVar66 + 0x110) + 1;
LAB_10a9020c8:
                      pppppplVar68 = pppppplStack_208;
                      pppppplVar52 = pppppplStack_210;
                      puVar29 = *(undefined8 **)(lVar66 + 0xd0);
                      if (puVar29 < *(undefined8 **)(lVar66 + 0xd8)) {
                        *puVar29 = pppppplStack_210;
                        puVar29[1] = pppppplStack_208;
                        if (pppppplStack_208 != (long ******)0x0) {
                          pppppplVar68 = pppppplStack_208 + 1;
                          do {
                            cVar20 = '\x01';
                            bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                            if (bVar22) {
                              *pppppplVar68 = (long *****)((long)*pppppplVar68 + 1);
                              cVar20 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar20 != '\0');
                        }
                        puVar29 = puVar29 + 2;
                      }
                      else {
                        lVar47 = *(long *)(lVar66 + 200);
                        lVar74 = (long)puVar29 - lVar47;
                        lVar53 = lVar74 >> 4;
                        uVar72 = lVar53 + 1;
                        if (uVar72 >> 0x3c != 0) {
                          FUN_10a910504();
                          goto LAB_10a903268;
                        }
                        uVar51 = (long)*(undefined8 **)(lVar66 + 0xd8) - lVar47;
                        uVar54 = (long)uVar51 >> 3;
                        if (uVar54 <= uVar72) {
                          uVar54 = uVar72;
                        }
                        if (0x7fffffffffffffef < uVar51) {
                          uVar54 = 0xfffffffffffffff;
                        }
                        if (uVar54 >> 0x3c != 0) {
                          func_0x000109ffded8();
                          goto LAB_10a903268;
                        }
                        lVar27 = uVar54 << 4;
                        __Znwm();
                        puVar1 = (undefined8 *)(lVar27 + lVar74);
                        *puVar1 = pppppplVar52;
                        puVar1[1] = pppppplVar68;
                        if (pppppplVar68 != (long ******)0x0) {
                          pppppplVar68 = pppppplVar68 + 1;
                          do {
                            cVar20 = '\x01';
                            bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                            if (bVar22) {
                              *pppppplVar68 = (long *****)((long)*pppppplVar68 + 1);
                              cVar20 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar20 != '\0');
                          lVar47 = *(long *)(lVar66 + 200);
                          lVar74 = *(long *)(lVar66 + 0xd0) - lVar47;
                          lVar53 = lVar74 >> 4;
                        }
                        puVar29 = puVar1 + 2;
                        _memcpy(puVar1 + lVar53 * -2,lVar47,lVar74);
                        *(undefined8 **)(lVar66 + 200) = puVar1 + lVar53 * -2;
                        *(undefined8 **)(lVar66 + 0xd0) = puVar29;
                        *(ulong *)(lVar66 + 0xd8) = lVar27 + uVar54 * 0x10;
                        if (lVar47 != 0) {
                          __ZdlPv(lVar47);
                        }
                      }
                      uVar59 = (uint)pppppplStack_240 & 0xff;
                      uVar63 = (uint)pppppplStack_240 >> 8;
                      *(undefined8 **)(lVar66 + 0xd0) = puVar29;
                    }
                    else if (!bVar22) goto LAB_10a903268;
                    uVar37 = uVar59 | uVar63 << 8;
                    if (0x1f < uVar37) goto LAB_10a903268;
                    if (ppppppplVar60 != (long *******)0x0) {
                      ppppppplVar39 = ppppppplVar60 + 2;
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar39,0x10);
                        if (bVar22) {
                          *ppppppplVar39 = (long ******)((long)*ppppppplVar39 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                    }
                    ppppplStack_258 = (long *****)CONCAT44(ppppplStack_258._4_4_,uVar59);
                    ppppplVar34 = pppppplVar52[(ulong)uVar37 * 2 + 0x10];
                    pppppplVar52[(ulong)uVar37 * 2 + 0xf] = (long *****)ppppppplVar94;
                    pppppplVar52[(ulong)uVar37 * 2 + 0x10] = (long *****)ppppppplVar60;
                    if (ppppplVar34 != (long *****)0x0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    FUN_10a93fc58(lVar66);
                    pppppplStack_240 = *(long *******)(lVar66 + 0xd0);
                    for (pppppplVar52 = *(long *******)(lVar66 + 200);
                        pppppplVar52 != pppppplStack_240; pppppplVar52 = pppppplVar52 + 2) {
                      ppppplVar34 = *pppppplVar52;
                      pppplVar55 = ppppplVar34[0x65];
                      pppplVar73 = ppppplVar34[0x66];
                      if (pppplVar55 != pppplVar73) {
                        do {
                          uVar37 = *(uint *)pppplVar55;
                          ppppplVar34 = *pppppplVar52;
                          func_0x00010a8fdae4(ppppplVar34,(ulong)uVar37);
                          bVar22 = ((ulong)ppppplVar34[0x23] & 0x13) == 0;
                          uStack_170 = (long *******)CONCAT71(uStack_170._1_7_,bVar22);
                          pppppplStack_c8 =
                               (long ******)CONCAT71(pppppplStack_c8._1_7_,bVar22 && fVar91 == 0.0);
                          if (0x1f < uVar37) goto LAB_10a903268;
                          lVar47 = *(long *)(lVar26 + 0x78) + (ulong)uVar37 * 0x20;
                          ppppplVar34 = *pppppplVar52;
                          if (ppppplVar34[2] != (long ****)0x0) {
                            FUN_10a917fc0(ppppplVar34[2],lVar47 + 0x2800,&uStack_170);
                            ppppplVar34 = *pppppplVar52;
                          }
                          pppplVar14 = ppppplVar34[8];
                          for (pppplVar62 = ppppplVar34[7]; pppplVar62 != pppplVar14;
                              pppplVar62 = pppplVar62 + 2) {
                            if (*pppplVar62 != (long ***)0x0) {
                              FUN_10a917fc0(*pppplVar62,lVar47 + 0x2800,&pppppplStack_c8);
                            }
                          }
                          pppplVar55 = (long ****)((long)pppplVar55 + 4);
                        } while (pppplVar55 != pppplVar73);
                        ppppplVar34 = *pppppplVar52;
                      }
                      if (ppppplVar34[0x62] == ppppplVar34[99]) {
                        iVar43 = 0;
                      }
                      else {
                        iVar43 = *(int *)((long)ppppplVar34[99] + -4) + 1;
                      }
                      pppppplStack_c8 = (long ******)CONCAT44(pppppplStack_c8._4_4_,iVar43);
                      func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2dea0);
                      FUN_10a90a334(ppppplVar34,&uStack_170,&pppppplStack_c8);
                      if ((long)ppppppplStack_160 < 0) {
                        __ZdlPv(uStack_170);
                      }
                      ppppplVar34 = *pppppplVar52;
                      func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2e6b0);
                      func_0x00010a90a39c(ppppplVar34,&uStack_170,lVar66 + 0xb0);
                      if ((long)ppppppplStack_160 < 0) {
                        __ZdlPv(uStack_170);
                      }
                      ppppplVar34 = *pppppplVar52;
                      func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2e698);
                      pppplVar73 = ppppplVar34[8];
                      for (pppplVar55 = ppppplVar34[7]; pppplVar55 != pppplVar73;
                          pppplVar55 = pppplVar55 + 2) {
                        if (*pppplVar55 != (long ***)0x0) {
                          FUN_10a0da430(*pppplVar55,&uStack_170,lVar66 + 0xb0);
                        }
                      }
                      if ((long)ppppppplStack_160 < 0) {
                        __ZdlPv(uStack_170);
                      }
                      if (*(int *)(lVar66 + 0x120) == 0) {
                        ppppplVar34 = *pppppplVar52;
                        func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2e680);
                        FUN_10a90a334(ppppplVar34,&uStack_170,(long)*pppppplVar52 + 0x1524);
                        if ((long)ppppppplStack_160 < 0) {
                          __ZdlPv(uStack_170);
                        }
                        ppppplVar34 = *pppppplVar52;
                        func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2e650);
                        FUN_10a90a334(ppppplVar34,&uStack_170,(long)*pppppplVar52 + 0x1524);
                        if ((long)ppppppplStack_160 < 0) {
                          __ZdlPv(uStack_170);
                        }
                        ppppplVar34 = *pppppplVar52;
                        func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2e668);
                        FUN_10a90a334(ppppplVar34,&uStack_170,*pppppplVar52 + 0x2a5);
                        if ((long)ppppppplStack_160 < 0) {
                          __ZdlPv(uStack_170);
                        }
                        FUN_10a8fef14(*pppppplVar52);
                        ppppplVar34 = *pppppplVar52;
                        func_0x000107c2b074(&uStack_170,&PTR_DAT_110c2e698);
                        func_0x00010a90a39c(ppppplVar34,&uStack_170,lVar66 + 0xb0);
                        if ((long)ppppppplStack_160 < 0) {
                          __ZdlPv(uStack_170);
                        }
                        (*pppppplVar52)[0x66] = (*pppppplVar52)[0x65];
                      }
                    }
                    plVar32 = *(long **)(lVar26 + 0x38);
                    for (plVar31 = *(long **)(lVar26 + 0x30); plVar31 != plVar32;
                        plVar31 = plVar31 + 1) {
                      lVar47 = *plVar31;
                      if (*(int *)(lVar47 + 0x120) == 0) {
                        FUN_10a9092a4(lVar47 + 0x30,lVar47 + 0xb0);
                        FUN_10a9092a4(*plVar31 + 0x70,*plVar31 + 0xb0);
                        func_0x00010a91ace0(*plVar31 + 0xf8);
                      }
                      else {
                        *(undefined4 *)(lVar47 + 0xb8) = 1;
                      }
                    }
                    if (pppppplStack_208 != (long ******)0x0) {
                      pppppplVar52 = pppppplStack_208 + 1;
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                        if (bVar22) {
                          *pppppplVar52 = (long *****)((long)*pppppplVar52 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                    }
                    ppppppplStack_1a0 =
                         (long *******)((ulong)ppppplStack_258 & 0xffffffff | 0x100000000);
                    pppppplStack_2a8 = pppppplStack_208;
                    pppppplStack_1b0 = pppppplStack_210;
                    uStack_1a8 = pppppplStack_208;
joined_r0x00010a9016e0:
                    ppppppplVar60 = ppppppplStack_d8;
                    if (pppppplStack_2a8 != (long ******)0x0) {
                      pppppplVar52 = pppppplStack_2a8 + 1;
                      do {
                        ppppplVar34 = *pppppplVar52;
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                        if (bVar22) {
                          *pppppplVar52 = (long *****)((long)ppppplVar34 + -1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      if (ppppplVar34 == (long *****)0x0) {
                        (*(code *)(*pppppplStack_2a8)[2])(pppppplStack_2a8);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplStack_2a8);
                        ppppppplVar60 = ppppppplStack_d8;
                      }
                    }
                  }
                  if (ppppppplVar60 != (long *******)0x0) {
                    ppppppplVar94 = ppppppplVar60 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar94;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                      if (bVar22) {
                        *ppppppplVar94 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplVar60)[2])(ppppppplVar60);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
                    }
                  }
                  ppppppplVar60 = ppppppplStack_1a0;
                  pppppplVar52 = uStack_1a8;
                  if ((pppppplStack_1b0 != (long ******)0x0) &&
                     (((ulong)ppppppplStack_1a0 & 0x1ffffffe0) == 0x100000000)) {
                    if (uStack_1a8 != (long ******)0x0) {
                      pppppplVar68 = uStack_1a8 + 2;
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                        if (bVar22) {
                          *pppppplVar68 = (long *****)((long)*pppppplVar68 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                    }
                    pppppplVar46 = *(long *******)(param_1 + 0x4e8);
                    pppppplVar68 = (long ******)(param_1 + 0x4e8);
                    pppppplStack_240 = pppppplStack_1b0;
                    while (pppppplVar75 = pppppplVar68, pppppplVar46 != (long ******)0x0) {
                      while( true ) {
                        pppppplVar75 = pppppplVar46;
                        pplVar28 = pplVar36 + 4;
                        FUN_10a003e3c(pplVar28,pppppplVar75 + 4);
                        if (((uint)pplVar28 >> 7 & 1) != 0) break;
                        uVar37 = (int)pppppplVar75 + 0x20;
                        ppppppplVar94 = (long *******)(pplVar36 + 4);
                        FUN_10a003e3c();
                        if ((uVar37 >> 7 & 1) == 0) {
                          ppppppplVar39 = (long *******)*pppppplVar68;
                          if (ppppppplVar39 == (long *******)0x0) goto LAB_10a902634;
                          goto LAB_10a9026c0;
                        }
                        pppppplVar68 = pppppplVar75 + 1;
                        pppppplVar46 = (long ******)*pppppplVar68;
                        if ((long ******)*pppppplVar68 == (long ******)0x0) goto LAB_10a902634;
                      }
                      pppppplVar68 = pppppplVar75;
                      pppppplVar46 = (long ******)*pppppplVar75;
                    }
LAB_10a902634:
                    ppppppplVar94 = (long *******)0x50;
                    __Znwm();
                    ppppppplStack_160 = (long *******)0x0;
                    uStack_170 = ppppppplVar94;
                    ppppppplStack_168 = ppppppplVar49;
                    if (*(char *)((long)pplVar36 + 0x37) < '\0') {
                      func_0x000107c3192c(ppppppplVar94 + 4,pplVar36[4],pplVar36[5]);
                    }
                    else {
                      pppppplVar61 = (long ******)pplVar36[5];
                      pppppplVar46 = (long ******)pplVar36[4];
                      ppppppplVar94[6] = (long ******)pplVar36[6];
                      ppppppplVar94[5] = pppppplVar61;
                      ppppppplVar94[4] = pppppplVar46;
                    }
                    plVar31 = plStack_250;
                    ppppppplVar94[7] = (long ******)0x0;
                    ppppppplVar94[8] = (long ******)0x0;
                    ppppppplVar94[9] = (long ******)0x0;
                    *ppppppplVar94 = (long ******)0x0;
                    ppppppplVar94[1] = (long ******)0x0;
                    ppppppplVar94[2] = pppppplVar75;
                    *pppppplVar68 = (long *****)ppppppplVar94;
                    if ((long ******)**ppppppplVar49 != (long ******)0x0) {
                      *ppppppplVar49 = (long ******)**ppppppplVar49;
                      ppppppplVar94 = (long *******)*pppppplVar68;
                    }
                    func_0x000107c2b058(plStack_250[0xaa]);
                    plVar31[0xab] = plVar31[0xab] + 1;
                    ppppppplVar39 = uStack_170;
LAB_10a9026c0:
                    pppppplVar68 = ppppppplVar39[8];
                    ppppppplVar39[7] = pppppplStack_240;
                    ppppppplVar39[8] = pppppplVar52;
                    if (pppppplVar68 != (long ******)0x0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    plVar31 = plStack_238;
                    *(int *)(ppppppplVar39 + 9) = (int)ppppppplVar60;
                    *(char *)((long)ppppppplVar39 + 0x4c) = (char)((ulong)ppppppplVar60 >> 0x20);
                    if ((((ulong)ppppppplVar60 & 0x1f) == 0) &&
                       (pppppplVar52 = pppppplStack_240 + 0xc,
                       *pppppplVar52 == pppppplStack_240[0xd])) {
                      ppppppplStack_1c8 = (long *******)0x0;
                      ppppppplStack_1c0 = (long *******)0x0;
                      plStack_1b8 = (long *)0x0;
                      ppppppplStack_1e0 = (long *******)0x0;
                      ppppppplStack_1d8 = (long *******)0x0;
                      ppppppplStack_1d0 = (long *******)0x0;
                      ppppplStack_1f8 = (long *****)0x0;
                      ppppplStack_1f0 = (long *****)0x0;
                      ppppppplStack_1e8 = (long *******)0x0;
                      pppppplStack_210 = (long ******)0x0;
                      pppppplStack_208 = (long ******)0x0;
                      plStack_200 = (long *)0x0;
                      lVar53 = plStack_250[0x9e];
                      ppppppplStack_168 = (long *******)0x0;
                      uStack_170 = (long *******)0x0;
                      ppppplStack_158 = (long *****)0x0;
                      ppppppplStack_160 = (long *******)0x0;
                      pppppplStack_150 = (long ******)CONCAT44(pppppplStack_150._4_4_,0x3f800000);
                      pppppplStack_c8 = (long ******)0x0;
                      lVar47 = plStack_238[0x1b];
                      if (plStack_238[0x1c] != lVar47) {
                        do {
                          ppppppplVar94 = (long *******)(lVar47 + (long)pppppplStack_c8 * 0x18);
                          func_0x000109567428(&uStack_170,ppppppplVar94,ppppppplVar94,
                                              &pppppplStack_c8);
                          pppppplStack_c8 = (long ******)((long)pppppplStack_c8 + 1);
                          lVar47 = plVar31[0x1b];
                        } while (pppppplStack_c8 <
                                 (long ******)((plVar31[0x1c] - lVar47 >> 3) * -0x5555555555555555))
                        ;
                      }
                      lVar47 = plVar31[0xd];
                      if (lVar47 - plVar31[0xc] == 0) {
                        ppppplStack_280 = (long *****)0x0;
                        ppppplStack_270 = (long *****)0x0;
                        lVar66 = lVar47;
                      }
                      else {
                        ppppplStack_280 =
                             (long *****)((lVar47 - plVar31[0xc] >> 3) * -0x5555555555555555);
                        if ((ulong)ppppplStack_280 >> 0x3e != 0) {
                          FUN_10a910344();
LAB_10a903268:
                    /* WARNING: Does not return */
                          pcVar21 = (code *)SoftwareBreakpoint(1,0x10a90326c);
                          (*pcVar21)();
                        }
                        FUN_10a910358();
                        ppppplStack_270 =
                             (long *****)((long)ppppplStack_280 + (long)ppppppplVar94 * 4);
                        lVar47 = plVar31[0xc];
                        lVar66 = plVar31[0xd];
                      }
                      func_0x000107c27e9c(&ppppppplStack_1c8,
                                          (lVar66 - lVar47 >> 3) * -0x5555555555555555);
                      func_0x000107c28300(&ppppppplStack_1e0,
                                          (plVar31[0xd] - plVar31[0xc] >> 3) * -0x5555555555555555);
                      func_0x000104becb10(&ppppplStack_1f8,
                                          (plVar31[0xd] - plVar31[0xc] >> 3) * -0x5555555555555555);
                      FUN_10a8fc570(&pppppplStack_210,
                                    (plVar31[0xd] - plVar31[0xc] >> 3) * -0x5555555555555555);
                      lVar47 = plVar31[0xc];
                      ppppplStack_258 = ppppplStack_280;
                      if (plVar31[0xd] != lVar47) {
                        uVar72 = 0;
                        do {
                          lVar47 = lVar47 + uVar72 * 0x18;
                          puVar29 = &uStack_170;
                          lVar66 = lVar47;
                          func_0x000109240a28();
                          if (puVar29 == (undefined8 *)0x0) {
                            FUN_109ffdddc(&UNK_10f639994);
                            goto LAB_10a903268;
                          }
                          uVar54 = puVar29[5];
                          if ((ulong)(plVar31[0x1f] - plVar31[0x1e] >> 2) <= uVar54) {
                            FUN_10a04b1c0();
                            goto LAB_10a903268;
                          }
                          uVar79 = *(undefined4 *)(plVar31[0x1e] + uVar54 * 4);
                          if (ppppplStack_258 < ppppplStack_270) {
                            *(undefined4 *)ppppplStack_258 = uVar79;
                            ppppplVar34 = ppppplStack_280;
                            ppppplStack_258 = (long *****)((long)ppppplStack_258 + 4);
                          }
                          else {
                            lVar74 = (long)ppppplStack_258 - (long)ppppplStack_280;
                            uVar51 = (lVar74 >> 2) + 1;
                            if (uVar51 >> 0x3e != 0) {
                              FUN_10a910344();
                              goto LAB_10a903268;
                            }
                            uVar58 = (long)ppppplStack_270 - (long)ppppplStack_280 >> 1;
                            if (uVar58 <= uVar51) {
                              uVar58 = uVar51;
                            }
                            if (0x7ffffffffffffffb <
                                (ulong)((long)ppppplStack_270 - (long)ppppplStack_280)) {
                              uVar58 = 0x3fffffffffffffff;
                            }
                            FUN_10a910358();
                            puVar12 = (undefined4 *)(uVar58 + lVar74);
                            ppppplStack_270 = (long *****)(uVar58 + lVar66 * 4);
                            ppppplVar34 = (long *****)(puVar12 + -(lVar74 >> 2));
                            ppppplStack_258 = (long *****)(puVar12 + 1);
                            *puVar12 = uVar79;
                            _memcpy(ppppplVar34,ppppplStack_280,lVar74);
                            if (ppppplStack_280 != (long *****)0x0) {
                              __ZdlPv(ppppplStack_280);
                            }
                          }
                          ppppplStack_280 = ppppplVar34;
                          if ((ulong)(plVar31[0x22] - plVar31[0x21] >> 2) <= uVar54) {
                            FUN_10a04b1c0();
                            goto LAB_10a903268;
                          }
                          func_0x000109febdc8(&ppppppplStack_1c8,plVar31[0x21] + uVar54 * 4);
                          FUN_10a904d90(&pppppplStack_c8,plStack_250,pplVar36 + 4,lVar47);
                          ppppppplStack_e0 =
                               (long *******)
                               CONCAT26(uStack_c0._6_2_,
                                        CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                          FUN_10a908c78(&ppppppplStack_1e0,&ppppppplStack_e0);
                          func_0x0001078db3d4(&ppppplStack_1f8,&pppppplStack_c8);
                          lVar47 = *(long *)(lVar53 + 0xe0);
                          if (uVar72 < (ulong)(*(long *)(lVar53 + 0xe8) - lVar47 >> 4)) {
                            puVar29 = (undefined8 *)(lVar47 + uVar72 * 0x10);
                            ppppppplStack_d8 = (long *******)puVar29[1];
                            ppppppplStack_e0 = (long *******)*puVar29;
                            if (puVar29[1] != 0) {
                              plVar32 = (long *)(puVar29[1] + 8);
                              do {
                                cVar20 = '\x01';
                                bVar22 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                                if (bVar22) {
                                  *plVar32 = *plVar32 + 1;
                                  cVar20 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar20 != '\0');
                            }
                          }
                          else {
                            ppppppplStack_e0 = (long *******)0x0;
                            ppppppplStack_d8 = (long *******)0x0;
                          }
                          FUN_10a0b5098(&pppppplStack_210,&ppppppplStack_e0);
                          ppppppplVar60 = ppppppplStack_d8;
                          if (ppppppplStack_d8 != (long *******)0x0) {
                            ppppppplVar94 = ppppppplStack_d8 + 1;
                            do {
                              pppppplVar68 = *ppppppplVar94;
                              cVar20 = '\x01';
                              bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                              if (bVar22) {
                                *ppppppplVar94 = (long ******)((long)pppppplVar68 + -1);
                                cVar20 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar20 != '\0');
                            if (pppppplVar68 == (long ******)0x0) {
                              (*(code *)(*ppppppplStack_d8)[2])(ppppppplStack_d8);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
                            }
                          }
                          uVar72 = uVar72 + 1;
                          lVar47 = plVar31[0xc];
                        } while (uVar72 < (ulong)((plVar31[0xd] - lVar47 >> 3) * -0x5555555555555555
                                                 ));
                      }
                      func_0x000109240b0c(&uStack_170);
                      plVar31 = plStack_238;
                      pppppplVar68 = pppppplStack_240;
                      pppppplStack_c8 = (long ******)0x0;
                      uStack_c0._0_1_ = 0;
                      uStack_c0._1_5_ = 0;
                      uStack_c0._6_2_ = 0;
                      ppppplVar34 = pppppplStack_240[0x10];
                      if (ppppplVar34 == (long *****)0x0) {
                        ppppplVar34 = (long *****)0x0;
LAB_10a902a68:
                        pppppplVar46 = (long ******)0x0;
                      }
                      else {
                        __ZNSt3__119__shared_weak_count4lockEv();
                        uStack_c0._0_1_ = SUB81(ppppplVar34,0);
                        uStack_c0._1_5_ = (undefined5)((ulong)ppppplVar34 >> 8);
                        uStack_c0._6_2_ = (undefined2)((ulong)ppppplVar34 >> 0x30);
                        if (ppppplVar34 == (long *****)0x0) goto LAB_10a902a68;
                        pppppplVar46 = (long ******)pppppplVar68[0xf];
                        pppppplStack_c8 = pppppplVar46;
                      }
                      if (pppppplVar68[0x2aa] != (long *****)0x0) {
                        ppppplVar35 = pppppplVar68[0xc];
                        ppppplVar64 = pppppplVar68[0xd];
                        while (ppppplVar64 != ppppplVar35) {
                          ppppplVar64 = ppppplVar64 + -0x12;
                          FUN_10a8fdc18();
                        }
                        pppppplStack_240[0xd] = ppppplVar35;
                        lVar47 = plVar31[9];
                        if (plVar31[10] != lVar47) {
                          ppppplVar34 = (long *****)0x0;
                          ppppplStack_270 =
                               (long *****)
                               CONCAT44(ppppplStack_270._4_4_,*(undefined4 *)(pppppplVar46 + 0x42));
                          ppppplVar35 = pppppplVar46[0x2d];
                          ppppplStack_258 =
                               (long *****)((long)ppppplStack_258 - (long)ppppplStack_280 >> 2);
                          pppppplVar68 = pppppplStack_240;
                          do {
                            uStack_170 = (long *******)0x0;
                            ppppppplStack_168 =
                                 (long *******)((ulong)ppppppplStack_168 & 0xffffffff00000000);
                            ppppppplStack_160 = (long *******)0x0;
                            ppppplStack_158 = (long *****)0x0;
                            pppppplStack_150 =
                                 (long ******)
                                 CONCAT35((int3)((ulong)pppppplStack_150 >> 0x28),0x100000000);
                            ppppppplStack_140 = (long *******)0x0;
                            ppppppplStack_148 = (long *******)0x0;
                            ppppppplStack_130 = (long *******)0x0;
                            ppppppplStack_138 = (long *******)0x0;
                            ppppppplStack_120 = (long *******)0x0;
                            ppppppplStack_128 = (long *******)0x0;
                            ppppppplStack_110 = (long *******)0x0;
                            ppppppplStack_118 = (long *******)0x0;
                            ppppppplStack_100 = (long *******)0x0;
                            uStack_108 = (long *******)0x0;
                            pppppplStack_f8 =
                                 (long ******)((ulong)pppppplStack_f8 & 0xffffffffffffff00);
                            ppppplStack_e8 = pppppplVar68[0x2ab];
                            ppppplStack_f0 = pppppplVar68[0x2aa];
                            if (pppppplVar68[0x2ab] != (long *****)0x0) {
                              ppppplVar64 = pppppplVar68[0x2ab] + 2;
                              do {
                                cVar20 = '\x01';
                                bVar22 = (bool)ExclusiveMonitorPass(ppppplVar64,0x10);
                                if (bVar22) {
                                  *ppppplVar64 = (long ****)((long)*ppppplVar64 + 1);
                                  cVar20 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar20 != '\0');
                            }
                            plVar32 = (long *)(lVar47 + (long)ppppplVar34 * 0x10);
                            func_0x00010a04a780(&ppppppplStack_118,plVar32);
                            if (ppppplVar34 < ppppplStack_258) {
                              uVar79 = *(undefined4 *)
                                        ((long)ppppplStack_280 + (long)ppppplVar34 * 4);
                            }
                            else {
                              uVar79 = 0;
                            }
                            if (ppppplVar34 <
                                (long *****)((long)ppppppplStack_1c0 - (long)ppppppplStack_1c8 >> 2)
                               ) {
                              uVar82 = *(undefined4 *)
                                        ((long)ppppppplStack_1c8 + (long)ppppplVar34 * 4);
                            }
                            else {
                              uVar82 = 0;
                            }
                            uStack_108 = (long *******)CONCAT44(uVar82,uVar79);
                            if (ppppplVar34 <
                                (long *****)((long)ppppppplStack_1d8 - (long)ppppppplStack_1e0 >> 3)
                               ) {
                              ppppppplStack_100 = (long *******)ppppppplStack_1e0[(long)ppppplVar34]
                              ;
                            }
                            else {
                              ppppppplStack_100 = (long *******)0x0;
                            }
                            if (ppppplVar34 < ppppplStack_1f0) {
                              bVar42 = (byte)((ulong)ppppplStack_1f8[(ulong)ppppplVar34 >> 6] >>
                                             ((ulong)ppppplVar34 & 0x3f)) & 1;
                            }
                            else {
                              bVar42 = 0;
                            }
                            pppppplStack_f8 = (long ******)CONCAT71(pppppplStack_f8._1_7_,bVar42);
                            if (ppppplVar34 <
                                (long *****)((long)pppppplStack_208 - (long)pppppplStack_210 >> 4))
                            {
                              pppppplVar46 = pppppplStack_210 + (long)ppppplVar34 * 2;
                              ppppppplStack_d8 = (long *******)pppppplVar46[1];
                              ppppppplStack_e0 = (long *******)*pppppplVar46;
                              if (pppppplVar46[1] != (long *****)0x0) {
                                ppppplVar64 = pppppplVar46[1] + 1;
                                do {
                                  cVar20 = '\x01';
                                  bVar22 = (bool)ExclusiveMonitorPass(ppppplVar64,0x10);
                                  if (bVar22) {
                                    *ppppplVar64 = (long ****)((long)*ppppplVar64 + 1);
                                    cVar20 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar20 != '\0');
                              }
                            }
                            else {
                              ppppppplStack_e0 = (long *******)0x0;
                              ppppppplStack_d8 = (long *******)0x0;
                            }
                            FUN_10a19ad28(&ppppppplStack_138,&ppppppplStack_e0);
                            ppppppplVar60 = ppppppplStack_d8;
                            if (ppppppplStack_d8 != (long *******)0x0) {
                              ppppppplVar94 = ppppppplStack_d8 + 1;
                              do {
                                pppppplVar46 = *ppppppplVar94;
                                cVar20 = '\x01';
                                bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                                if (bVar22) {
                                  *ppppppplVar94 = (long ******)((long)pppppplVar46 + -1);
                                  cVar20 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar20 != '\0');
                              if (pppppplVar46 == (long ******)0x0) {
                                (*(code *)(*ppppppplStack_d8)[2])(ppppppplStack_d8);
                                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
                              }
                            }
                            FUN_10a19ad28(&ppppppplStack_128,lVar26 + 0x20);
                            pppppplStack_150 =
                                 (long ******)
                                 CONCAT44(pppppplStack_150._4_4_,
                                          uStack_108._4_4_ + (int)ppppplStack_270);
                            if ((char)pppppplStack_f8 == '\x01') {
                              ppppplStack_158 = (long *****)0x0;
                              ppppppplStack_160 = ppppppplStack_100;
                            }
                            else {
                              ppppppplStack_160 = (long *******)ppppplVar35[0x26];
                              ppppplStack_158 = (long *****)ppppplVar35[0x27];
                            }
                            if (*plVar32 == 0) {
                              FUN_10a8fdf28(pppppplVar52,&uStack_170);
                            }
                            else {
                              ppppppplStack_e0 = ppppppplStack_128;
                              ppppppplStack_d8 = ppppppplStack_120;
                              if (((int)uStack_108 == 1) && (ppppppplStack_138 != (long *******)0x0)
                                 ) {
                                ppppppplStack_e0 = ppppppplStack_138;
                                ppppppplStack_d8 = ppppppplStack_130;
                              }
                              if (ppppppplStack_d8 != (long *******)0x0) {
                                ppppppplVar60 = ppppppplStack_d8 + 1;
                                do {
                                  cVar20 = '\x01';
                                  bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar60,0x10);
                                  if (bVar22) {
                                    *ppppppplVar60 = (long ******)((long)*ppppppplVar60 + 1);
                                    cVar20 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar20 != '\0');
                              }
                              ppppplVar64 = pppppplVar68[0x2aa] + 8;
                              func_0x00010a97784c(ppppplVar64,&ppppppplStack_e0,plVar32);
                              uStack_170 = (long *******)
                                           CONCAT44(uStack_170._4_4_,(uint)ppppplVar64);
                              pppppplVar46 = pppppplVar68 + 0x2aa;
                              FUN_10a8fe098(pppppplVar46,ppppplVar64);
                              if ((int)pppppplVar46 != 0) {
                                uVar72 = (ulong)((uint)ppppplVar64 & 0x3fff);
                                pppplVar55 = pppppplVar68[0x2aa][8];
                                uVar54 = ((long)pppppplVar68[0x2aa][9] - (long)pppplVar55 >> 4) *
                                         0x4ec4ec4ec4ec4ec5;
                                if (uVar54 < uVar72 || uVar54 - uVar72 == 0) goto LAB_10a903268;
                                *(undefined4 *)(pppplVar55 + uVar72 * 0x1a + 0xd) = 0x3f800000;
                                *(undefined8 *)((long)pppplVar55 + uVar72 * 0xd0 + 0x74) = 0;
                                *(undefined8 *)((long)pppplVar55 + uVar72 * 0xd0 + 0x6c) = 0;
                                *(undefined4 *)((long)pppplVar55 + uVar72 * 0xd0 + 0x7c) =
                                     0x3f800000;
                                pppplVar55[uVar72 * 0x1a + 0x10] = (long ***)0x0;
                                pppplVar55[uVar72 * 0x1a + 0x11] = (long ***)0x0;
                                *(undefined4 *)(pppplVar55 + uVar72 * 0x1a + 0x12) = 0x3f800000;
                                *(undefined8 *)((long)pppplVar55 + uVar72 * 0xd0 + 0x9c) = 0;
                                *(undefined8 *)((long)pppplVar55 + uVar72 * 0xd0 + 0x94) = 0;
                                *(undefined4 *)((long)pppplVar55 + uVar72 * 0xd0 + 0xa4) =
                                     0x3f800000;
                                *(char *)((long)pppplVar55 + uVar72 * 0xd0 + 0xaa) = (char)uVar15;
                                *(long *)((long)pppplVar55 + uVar72 * 0xd0 + 0xbc) = lStack_188;
                                *(long *)((long)pppplVar55 + uVar72 * 0xd0 + 0xb4) = lStack_190;
                                *(int *)((long)pppplVar55 + uVar72 * 0xd0 + 0xc4) = (int)lVar65;
                                pppppplVar68 = pppppplStack_240;
                              }
                              FUN_10a8fde00(&uStack_170,pppppplVar68[0x2aa]);
                              ppppplVar64 = pppppplVar68[0x2aa] + 4;
                              FUN_10a8fe104(ppppplVar64,0);
                              ppppppplVar60 = uStack_170;
                              uVar37 = (uint)ppppplVar64;
                              uStack_170 = (long *******)CONCAT44(uVar37,(undefined4)uStack_170);
                              ppppplVar30 = pppppplVar68[0x2aa];
                              if ((uVar37 != 0) && (ppppplVar30 != (long *****)0x0)) {
                                pppplVar55 = ppppplVar30[4];
                                uVar72 = (ulong)(uVar37 & 0x3fff);
                                uVar54 = ((long)ppppplVar30[5] - (long)pppplVar55 >> 3) *
                                         -0x3333333333333333;
                                if ((uVar72 <= uVar54 && uVar54 - uVar72 != 0) &&
                                   ((pppplVar55 = pppplVar55 + uVar72 * 5,
                                    *(uint *)((long)pppplVar55 + 4) == uVar37 &&
                                    (*(char *)pppplVar55 != '\x02')))) {
                                  FUN_10a8fe160(ppppplVar30 + 4,ppppplVar64,
                                                (ulong)ppppppplVar60 & 0xffffffff);
                                  ppppplVar30 = pppppplStack_240[0x2aa];
                                }
                              }
                              FUN_10a977418(ppppplVar30,0,0,0,(ulong)pppppplStack_150 & 0xffffffff);
                              uVar37 = (uint)ppppplVar30;
                              ppppppplStack_168 =
                                   (long *******)CONCAT44(ppppppplStack_168._4_4_,uVar37);
                              ppppplVar64 = pppppplStack_240[0x2aa];
                              if ((uVar37 != 0) && (ppppplVar64 != (long *****)0x0)) {
                                uVar72 = (ulong)(uVar37 & 0x3fff);
                                uVar54 = ((long)ppppplVar64[1] - (long)*ppppplVar64 >> 3) *
                                         -0x71c71c71c71c71c7;
                                if ((uVar72 <= uVar54 && uVar54 - uVar72 != 0) &&
                                   ((pppplVar55 = *ppppplVar64 + uVar72 * 9,
                                    *(uint *)((long)pppplVar55 + 4) == uVar37 &&
                                    (*(char *)pppplVar55 != '\x02')))) {
                                  FUN_10a97765c(ppppplVar64,ppppplVar30,uStack_170._4_4_);
                                  uVar72 = (ulong)ppppppplStack_168 & 0x3fff;
                                  uVar54 = ((long)ppppplVar64[1] - (long)*ppppplVar64 >> 3) *
                                           -0x71c71c71c71c71c7;
                                  if (uVar54 < uVar72 || uVar54 - uVar72 == 0) goto LAB_10a903268;
                                  *(undefined1 *)(*ppppplVar64 + uVar72 * 9) = 1;
                                  ppppplVar64 = pppppplStack_240[0x2aa];
                                }
                              }
                              pppppplVar68 = pppppplStack_240;
                              FUN_10a8fe1b8(ppppplVar64);
                              plVar32 = (long *)*plVar32;
                              FUN_10ab46af4();
                              plStack_180 = (long *)*plVar32;
                              plVar32 = (long *)plVar32[1];
                              if (plVar32 != (long *)0x0) {
                                plVar50 = plVar32 + 1;
                                do {
                                  cVar20 = '\x01';
                                  bVar22 = (bool)ExclusiveMonitorPass(plVar50,0x10);
                                  if (bVar22) {
                                    *plVar50 = *plVar50 + 1;
                                    cVar20 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar20 != '\0');
                              }
                              plStack_178 = plVar32;
                              if (plStack_180 != (long *)0x0) {
                                if (*(int *)(pppppplVar68 + 0x2a6) == 1) {
                                  *(undefined4 *)((long)plStack_180 + 0x22c) = 0xcb18967f;
                                  plStack_180[0x46] = -0x34e7698034e76981;
                                  uVar79 = uVar89;
                                  uVar82 = uVar89;
                                  uVar84 = uVar89;
                                }
                                else {
                                  ppppplVar64 = pppppplVar68[0x2a7];
                                  *(undefined4 *)((long)plStack_180 + 0x22c) =
                                       *(undefined4 *)((long)pppppplVar68 + 0x1534);
                                  plStack_180[0x46] = (long)ppppplVar64;
                                  uVar79 = *(undefined4 *)(pppppplVar68 + 0x2a8);
                                  uVar82 = *(undefined4 *)((long)pppppplVar68 + 0x1544);
                                  uVar84 = *(undefined4 *)(pppppplVar68 + 0x2a9);
                                }
                                *(undefined4 *)(plStack_180 + 0x47) = uVar79;
                                *(undefined4 *)((long)plStack_180 + 0x23c) = uVar82;
                                *(undefined4 *)(plStack_180 + 0x48) = uVar84;
                                func_0x00010a3327d4(plStack_180,2);
                              }
                              if (plVar32 != (long *)0x0) {
                                plVar50 = plVar32 + 1;
                                do {
                                  lVar47 = *plVar50;
                                  cVar20 = '\x01';
                                  bVar22 = (bool)ExclusiveMonitorPass(plVar50,0x10);
                                  if (bVar22) {
                                    *plVar50 = lVar47 + -1;
                                    cVar20 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar20 != '\0');
                                if (lVar47 == 0) {
                                  (**(code **)(*plVar32 + 0x10))(plVar32);
                                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar32);
                                }
                              }
                              FUN_10a8fdf28(pppppplVar52,&uStack_170);
                              ppppppplVar60 = ppppppplStack_d8;
                              if (ppppppplStack_d8 != (long *******)0x0) {
                                ppppppplVar94 = ppppppplStack_d8 + 1;
                                do {
                                  pppppplVar46 = *ppppppplVar94;
                                  cVar20 = '\x01';
                                  bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                                  if (bVar22) {
                                    *ppppppplVar94 = (long ******)((long)pppppplVar46 + -1);
                                    cVar20 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar20 != '\0');
                                if (pppppplVar46 == (long ******)0x0) {
                                  (*(code *)(*ppppppplStack_d8)[2])(ppppppplStack_d8);
                                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
                                }
                              }
                            }
                            FUN_10a8fdc18(&uStack_170);
                            ppppplVar34 = (long *****)((long)ppppplVar34 + 1);
                            lVar47 = plVar31[9];
                          } while (ppppplVar34 < (long *****)(plVar31[10] - lVar47 >> 4));
                          ppppplVar34 = (long *****)
                                        CONCAT26(uStack_c0._6_2_,
                                                 CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                        }
                      }
                      if (ppppplVar34 != (long *****)0x0) {
                        ppppplVar35 = ppppplVar34 + 1;
                        do {
                          pppplVar55 = *ppppplVar35;
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppplVar35,0x10);
                          if (bVar22) {
                            *ppppplVar35 = (long ****)((long)pppplVar55 + -1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                        if (pppplVar55 == (long ****)0x0) {
                          (*(code *)(*ppppplVar34)[2])(ppppplVar34);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar34);
                        }
                      }
                      uStack_170 = &pppppplStack_210;
                      FUN_10a0cffec(&uStack_170);
                      if (ppppplStack_1f8 != (long *****)0x0) {
                        __ZdlPv();
                      }
                      if (ppppppplStack_1e0 != (long *******)0x0) {
                        ppppppplStack_1d8 = ppppppplStack_1e0;
                        __ZdlPv();
                      }
                      if (ppppppplStack_1c8 != (long *******)0x0) {
                        ppppppplStack_1c0 = ppppppplStack_1c8;
                        __ZdlPv();
                      }
                      if (ppppplStack_280 != (long *****)0x0) {
                        __ZdlPv();
                      }
                    }
                  }
                  pppppplVar52 = uStack_1a8;
                  plVar31 = plStack_250;
                  plVar50 = plStack_230;
                  if (uStack_1a8 != (long ******)0x0) {
                    pppppplVar68 = uStack_1a8 + 1;
                    do {
                      ppppplVar34 = *pppppplVar68;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                      if (bVar22) {
                        *pppppplVar68 = (long *****)((long)ppppplVar34 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar34 == (long *****)0x0) {
                      (*(code *)(*uStack_1a8)[2])(uStack_1a8);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar52);
                      plVar50 = plStack_230;
                    }
                  }
                }
                else {
                  plVar32 = plStack_278;
                  if (*(char *)((long)plVar31 + 0x167) < '\0') {
                    plVar32 = (long *)*plStack_278;
                  }
                  __ZNSt3__19to_stringEj(&uStack_170,999999);
                  ppppppplVar60 = uStack_170;
                  if (-1 < (long)ppppppplStack_160) {
                    ppppppplVar60 = (long *******)&uStack_170;
                  }
                  func_0x00010ae06f08(1,0x12,&UNK_10f6821fc,&UNK_10f6821fc,0xffffffff,&UNK_10f6825cc
                                      ,in_x6,in_x7,plVar32,ppppppplVar60);
                  plVar31 = plStack_250;
                  if ((long)ppppppplStack_160 < 0) {
                    __ZdlPv(uStack_170);
                  }
                }
              }
              if (plVar50 != (long *)0x0) {
                plVar32 = plVar50 + 1;
                do {
                  lVar47 = *plVar32;
                  cVar20 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                  if (bVar22) {
                    *plVar32 = lVar47 + -1;
                    cVar20 = ExclusiveMonitorsStatus();
                  }
                } while (cVar20 != '\0');
                if (lVar47 == 0) {
                  (**(code **)(*plVar50 + 0x10))(plVar50);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar50);
                }
              }
            }
            pplVar28 = (long **)pplVar36[1];
            pplVar77 = pplVar36;
            if ((long **)pplVar36[1] == (long **)0x0) {
              do {
                pplVar36 = (long **)pplVar77[2];
                bVar22 = (long **)*pplVar36 != pplVar77;
                pplVar77 = pplVar36;
              } while (bVar22);
            }
            else {
              do {
                pplVar36 = pplVar28;
                pplVar28 = (long **)*pplVar36;
              } while ((long **)*pplVar36 != (long **)0x0);
            }
          } while (pplVar36 != pplStack_248);
        }
        func_0x000107c27bf0(&pplStack_228,plStack_220);
      }
      return;
    }
    FUN_10a0edfc4(&uStack_170);
  }
  lVar47 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a9085f8();
  uVar90 = *(undefined8 *)(param_1 + 0x100);
  if (*(long *)(param_1 + 0x108) == 0) {
    ppuVar24 = &PTR___tlv_bootstrap_11340dee8;
    (*(code *)PTR___tlv_bootstrap_11340dee8)();
    puVar44 = *ppuVar24;
    if (puVar44 != (undefined *)0x0) goto LAB_10a9050c8;
    FUN_10a3ca004();
    pbVar25 = (byte *)0x113836510;
    FUN_10ad0621c();
    uVar72 = (ulong)(*pbVar25 >> 4 & 4);
    puVar44 = ppuVar24[uVar72 + 7];
    if (puVar44 != (undefined *)0x0) goto LAB_10a9050c8;
    FUN_10a3ca05c(ppuVar24,uVar72);
    puVar44 = ppuVar24[uVar72 + 7];
    uStack_c0._0_1_ = 0x35;
    uStack_c0._1_5_ = 0x10f646d;
    uStack_c0._6_2_ = 0;
    uStack_b8 = 0x26;
    uStack_b2 = 0;
    if (puVar44 != (undefined *)0x0) goto LAB_10a9050c8;
  }
  else {
    puVar44 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x108) + 0x100) + 0x260);
    uStack_c0._0_1_ = 0x20;
    uStack_c0._1_5_ = 0x10f653c;
    uStack_c0._6_2_ = 0;
    uStack_b8 = 0x21;
    uStack_b2 = 0;
    if (puVar44 == (undefined *)0x0) {
      FUN_10a0edfc4(&uStack_c0);
      goto LAB_10a907c3c;
    }
LAB_10a9050c8:
    plVar32 = *(long **)(puVar44 + 0x228);
    (**(code **)(*plVar32 + 0x68))();
    if (0xf < *(int *)((long)plVar32 + 0x8c)) {
      FUN_10a8fc8e8(&ppppppplStack_d8,*(undefined8 *)(param_1 + 0x488));
      if (ppppppplStack_d8 != &pppppplStack_d0) {
        puVar29 = (undefined8 *)(param_1 + 0x578);
        plVar32 = (long *)(param_1 + 0x5b0);
        puVar1 = (undefined8 *)(param_1 + 0x5c0);
        plVar50 = (long *)(param_1 + 0x5f8);
        puVar2 = (undefined8 *)(param_1 + 0x608);
        puVar3 = (undefined8 *)(param_1 + 0x650);
        puVar4 = (undefined8 *)(param_1 + 0x698);
        plVar45 = (long *)(param_1 + 0x6f0);
        plVar5 = (long *)(param_1 + 0x700);
        plVar6 = (long *)(param_1 + 0x710);
        plVar7 = (long *)(param_1 + 0x720);
        plVar8 = (long *)(param_1 + 0x730);
        plVar9 = (long *)(param_1 + 0x740);
        puVar93 = (undefined8 *)(param_1 + 0x8b0);
        ppppppplVar49 = ppppppplStack_d8;
        do {
          ppppppplVar60 = ppppppplVar49 + 4;
          lVar65 = *(long *)(param_1 + 0x488);
          lVar53 = lVar65 + 0xf8;
          FUN_10a9176b0(lVar53,ppppppplVar60);
          if (lVar65 + 0x100 != lVar53) {
            ppppplStack_e8 = *(long ******)(lVar53 + 0x38);
            ppppppplStack_e0 = *(long ********)(lVar53 + 0x40);
            if (ppppppplStack_e0 != (long *******)0x0) {
              ppppppplVar94 = ppppppplStack_e0 + 1;
              do {
                cVar20 = '\x01';
                bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                if (bVar22) {
                  *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                  cVar20 = ExclusiveMonitorsStatus();
                }
              } while (cVar20 != '\0');
            }
            if (ppppplStack_e8 != (long *****)0x0) {
              pppppplStack_f8 = (long ******)ppppplStack_e8[3];
              ppppplStack_f0 = (long *****)ppppplStack_e8[4];
              if (ppppplStack_f0 != (long *****)0x0) {
                ppppplVar34 = ppppplStack_f0 + 1;
                do {
                  cVar20 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(ppppplVar34,0x10);
                  if (bVar22) {
                    *ppppplVar34 = (long ****)((long)*ppppplVar34 + 1);
                    cVar20 = ExclusiveMonitorsStatus();
                  }
                } while (cVar20 != '\0');
              }
              if (pppppplStack_f8 != (long ******)0x0) {
                lVar65 = *(long *)(param_1 + 0x108);
                ppppppplVar94 = ppppppplVar60;
                __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                          (&uStack_c0,&UNK_10f682546,ppppppplVar60);
                lVar53 = lVar65;
                FUN_10a3dd220(lVar65);
                func_0x00010a0fda30();
                FUN_10a3dd268(lVar65,lVar53,ppppppplVar94,&uStack_c0);
                FUN_10a0c3500(lVar65,uVar90);
                func_0x00010a3e4590(lVar65,0);
                ppppppplVar94 = (long *******)&ppppppplStack_128;
                puVar44 = &UNK_10f6821fc;
                func_0x000107c2b054(ppppppplVar94,&UNK_10f6821fc);
                uVar69 = *(undefined8 *)(lVar65 + 0x120);
                func_0x00010a0fda30();
                FUN_10a3b8ecc(&ppppppplStack_110,uVar69,ppppppplVar94,puVar44);
                ppppppplVar94 = ppppppplStack_128;
                ppppppplVar39 = ppppppplStack_120;
                if (-1 < (long)ppppppplStack_118) {
                  ppppppplVar94 = (long *******)&ppppppplStack_128;
                  ppppppplVar39 = (long *******)((ulong)ppppppplStack_118 >> 0x38);
                }
                func_0x000107c2c4d8(ppppppplStack_110 + 0x2a,ppppppplVar94,ppppppplVar39);
                ppppppplStack_198 = uStack_108;
                ppppppplStack_1a0 = ppppppplStack_110;
                if (uStack_108 != (long *******)0x0) {
                  ppppppplVar94 = uStack_108 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                    if (bVar22) {
                      *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                }
                ppppppplVar95 = (long *******)0x0;
                ppppppplVar94 = (long *******)0x0;
                ppppppplStack_a8 = (long *******)0x0;
                ppppppplStack_b0 = (long *******)0x0;
                uStack_c0._0_1_ = 0x18;
                uStack_c0._1_5_ = 0x10a0d4f;
                uStack_c0._6_2_ = 0;
                uStack_b8 = 0x110950c70;
                uStack_b2 = 0;
                FUN_10a3e4814(lVar65,&ppppppplStack_1a0,&uStack_c0);
                (**(code **)CONCAT26(uStack_b2,uStack_b8))(&uStack_b8);
                ppppppplVar39 = ppppppplStack_198;
                if (ppppppplStack_198 != (long *******)0x0) {
                  ppppppplVar76 = ppppppplStack_198 + 1;
                  do {
                    pppppplVar52 = *ppppppplVar76;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                    if (bVar22) {
                      *ppppppplVar76 = (long ******)((long)pppppplVar52 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (pppppplVar52 == (long ******)0x0) {
                    (*(code *)(*ppppppplStack_198)[2])(ppppppplStack_198);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar39);
                  }
                }
                if ((long)ppppppplStack_118 < 0) {
                  __ZdlPv(ppppppplStack_128);
                }
                (*(code *)(*ppppppplStack_110)[0xd])(ppppppplStack_110,0);
                ppppppplVar39 = ppppppplStack_110;
                __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                          (&uStack_c0,"system",ppppppplVar60);
                puVar38 = (undefined1 *)
                          CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                uVar72 = CONCAT26(uStack_b2,uStack_b8);
                if (-1 < (long)ppppppplStack_b0) {
                  puVar38 = (undefined1 *)&uStack_c0;
                  uVar72 = (ulong)ppppppplStack_b0 >> 0x38;
                }
                func_0x000107c2c4d8(ppppppplVar39 + 0x2a,puVar38,uVar72);
                *(undefined1 *)(ppppppplStack_110 + 1) = 1;
                ppppppplVar39 = &pppppplStack_f8;
                ppppppplVar71 = ppppppplStack_110;
                FUN_10a39c6b8();
                ppppplVar34 = ppppplStack_e8;
                ppppppplVar76 = ppppppplStack_110;
                if (ppppplStack_e8[5] != (long ****)0x0) {
                  func_0x000107c2b054(&ppppppplStack_128,&UNK_10f682551);
                  ppppppplStack_138 = (long *******)ppppplVar34[5];
                  ppppppplVar94 = (long *******)ppppplVar34[6];
                  if (ppppppplVar94 == (long *******)0x0) {
                    ppppppplVar95 = (long *******)0x0;
                  }
                  else {
                    ppppppplVar39 = ppppppplVar94 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar39,0x10);
                      if (bVar22) {
                        *ppppppplVar39 = (long ******)((long)*ppppppplVar39 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    ppppppplVar95 = ppppppplVar94 + 2;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar95,0x10);
                      if (bVar22) {
                        *ppppppplVar95 = (long ******)((long)*ppppppplVar95 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar39,0x10);
                      if (bVar22) {
                        *ppppppplVar39 = (long ******)((long)*ppppppplVar39 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                      ppppppplVar95 = ppppppplVar94;
                    } while (cVar20 != '\0');
                  }
                  ppppppplStack_b0 = (long *******)0xe00000000000000;
                  uStack_b2 = 0;
                  uStack_b8 = 0x6c6169726574;
                  uStack_c0._6_2_ = 0x614d;
                  uStack_c0._1_5_ = 0x2e74657373;
                  uStack_c0._0_1_ = 0x41;
                  ppppppplVar39 = (long *******)&ppppppplStack_128;
                  ppppppplStack_130 = ppppppplVar94;
                  ppppppplStack_a8 = ppppppplStack_138;
                  FUN_10a39a09c(ppppppplVar76,ppppppplVar39,&uStack_c0);
                  if (ppppppplVar94 != (long *******)0x0) {
                    ppppppplVar76 = ppppppplVar94 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar76;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                      if (bVar22) {
                        *ppppppplVar76 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplVar94)[2])(ppppppplVar94);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                    }
                  }
                  ppppppplVar71 = ppppppplVar95;
                  if (ppppppplVar95 != (long *******)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  ppppppplVar76 = ppppppplStack_130;
                  if (ppppppplStack_130 != (long *******)0x0) {
                    ppppppplVar10 = ppppppplStack_130 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar10;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar10,0x10);
                      if (bVar22) {
                        *ppppppplVar10 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplStack_130)[2])(ppppppplStack_130);
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                      ppppppplVar71 = ppppppplVar76;
                    }
                  }
                  if ((long)ppppppplStack_118 < 0) {
                    ppppppplVar71 = ppppppplStack_128;
                    __ZdlPv();
                  }
                }
                ppppplVar34 = ppppplStack_e8;
                ppppppplVar76 = ppppppplStack_110;
                if (ppppplStack_e8[7] != (long ****)0x0) {
                  func_0x000107c2b054(&ppppppplStack_128,&UNK_10f682563);
                  ppppppplStack_148 = (long *******)ppppplVar34[7];
                  ppppppplVar94 = (long *******)ppppplVar34[8];
                  if (ppppppplVar94 == (long *******)0x0) {
                    ppppppplVar95 = (long *******)0x0;
                  }
                  else {
                    ppppppplVar39 = ppppppplVar94 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar39,0x10);
                      if (bVar22) {
                        *ppppppplVar39 = (long ******)((long)*ppppppplVar39 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    ppppppplVar95 = ppppppplVar94 + 2;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar95,0x10);
                      if (bVar22) {
                        *ppppppplVar95 = (long ******)((long)*ppppppplVar95 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar39,0x10);
                      if (bVar22) {
                        *ppppppplVar39 = (long ******)((long)*ppppppplVar39 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                      ppppppplVar95 = ppppppplVar94;
                    } while (cVar20 != '\0');
                  }
                  ppppppplStack_b0 = (long *******)0xe00000000000000;
                  uStack_b2 = 0;
                  uStack_b8 = 0x6c6169726574;
                  uStack_c0._6_2_ = 0x614d;
                  uStack_c0._1_5_ = 0x2e74657373;
                  uStack_c0._0_1_ = 0x41;
                  ppppppplVar39 = (long *******)&ppppppplStack_128;
                  ppppppplStack_140 = ppppppplVar94;
                  ppppppplStack_a8 = ppppppplStack_148;
                  FUN_10a39a09c(ppppppplVar76,ppppppplVar39,&uStack_c0);
                  if (ppppppplVar94 != (long *******)0x0) {
                    ppppppplVar76 = ppppppplVar94 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar76;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                      if (bVar22) {
                        *ppppppplVar76 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplVar94)[2])(ppppppplVar94);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                    }
                  }
                  ppppppplVar71 = ppppppplVar95;
                  if (ppppppplVar95 != (long *******)0x0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  ppppppplVar76 = ppppppplStack_140;
                  if (ppppppplStack_140 != (long *******)0x0) {
                    ppppppplVar10 = ppppppplStack_140 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar10;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar10,0x10);
                      if (bVar22) {
                        *ppppppplVar10 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplStack_140)[2])(ppppppplStack_140);
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                      ppppppplVar71 = ppppppplVar76;
                    }
                  }
                  if ((long)ppppppplStack_118 < 0) {
                    ppppppplVar71 = ppppppplStack_128;
                    __ZdlPv();
                  }
                }
                ppppppplVar76 = ppppppplStack_110;
                if (*(int *)(*(long *)(*(long *)(param_1 + 0x108) + 0xa20) + 0x18) < 0x15c) {
                  pppplVar55 = ppppplStack_e8[9];
                  if (ppppplStack_e8[10] != pppplVar55) {
                    ppppppplVar39 = (long *******)*pppplVar55;
                    ppppppplVar71 = (long *******)pppplVar55[1];
                    if (ppppppplVar71 != (long *******)0x0) {
                      ppppppplVar10 = ppppppplVar71 + 1;
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar10,0x10);
                        if (bVar22) {
                          *ppppppplVar10 = (long ******)((long)*ppppppplVar10 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                    }
                    ppppppplStack_1a0 = ppppppplVar39;
                    ppppppplStack_198 = ppppppplVar71;
                    if (ppppppplVar39 != (long *******)0x0) {
                      func_0x000107c2b054(&ppppppplStack_128,&UNK_10f682589);
                      if (ppppppplVar71 == (long *******)0x0) {
                        ppppppplVar95 = (long *******)0x0;
                      }
                      else {
                        ppppppplVar94 = ppppppplVar71 + 1;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                          if (bVar22) {
                            *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                        ppppppplVar95 = ppppppplVar71 + 2;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar95,0x10);
                          if (bVar22) {
                            *ppppppplVar95 = (long ******)((long)*ppppppplVar95 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                          if (bVar22) {
                            *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                          ppppppplVar95 = ppppppplVar71;
                        } while (cVar20 != '\0');
                      }
                      ppppppplStack_b0 = (long *******)0xe00000000000000;
                      uStack_b2 = 0;
                      uStack_b8 = 0x6c6169726574;
                      uStack_c0._6_2_ = 0x614d;
                      uStack_c0._1_5_ = 0x2e74657373;
                      uStack_c0._0_1_ = 0x41;
                      ppppppplStack_1d8 = ppppppplVar39;
                      ppppppplStack_1d0 = ppppppplVar71;
                      ppppppplStack_a8 = ppppppplVar39;
                      FUN_10a39a09c(ppppppplVar76,&ppppppplStack_128,&uStack_c0);
                      if (ppppppplVar71 != (long *******)0x0) {
                        ppppppplVar94 = ppppppplVar71 + 1;
                        do {
                          pppppplVar52 = *ppppppplVar94;
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                          if (bVar22) {
                            *ppppppplVar94 = (long ******)((long)pppppplVar52 + -1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                        if (pppppplVar52 == (long ******)0x0) {
                          (*(code *)(*ppppppplVar71)[2])(ppppppplVar71);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar71);
                        }
                      }
                      if (ppppppplVar95 != (long *******)0x0) {
                        __ZNSt3__119__shared_weak_count14__release_weakEv();
                      }
                      ppppppplVar94 = ppppppplStack_1d0;
                      if (ppppppplStack_1d0 != (long *******)0x0) {
                        ppppppplVar39 = ppppppplStack_1d0 + 1;
                        do {
                          pppppplVar52 = *ppppppplVar39;
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar39,0x10);
                          if (bVar22) {
                            *ppppppplVar39 = (long ******)((long)pppppplVar52 + -1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                        if (pppppplVar52 == (long ******)0x0) {
                          (*(code *)(*ppppppplStack_1d0)[2])(ppppppplStack_1d0);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                        }
                      }
                      ppppppplVar94 = ppppppplVar71;
                      if ((long)ppppppplStack_118 < 0) {
                        __ZdlPv(ppppppplStack_128);
                      }
                    }
                    ppppppplVar39 = ppppppplStack_198;
                    if (ppppppplStack_198 != (long *******)0x0) {
                      ppppppplVar76 = ppppppplStack_198 + 1;
                      do {
                        pppppplVar52 = *ppppppplVar76;
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                        if (bVar22) {
                          *ppppppplVar76 = (long ******)((long)pppppplVar52 + -1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      if (pppppplVar52 == (long ******)0x0) {
                        (*(code *)(*ppppppplStack_198)[2])(ppppppplStack_198);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar39);
                      }
                    }
                  }
                  ppppppplVar39 = ppppppplStack_110;
                  lVar53 = *(long *)(param_1 + 0x488);
                  if ((*(long **)(lVar53 + 0xe0) != *(long **)(lVar53 + 0xe8)) &&
                     (**(long **)(lVar53 + 0xe0) != 0)) {
                    func_0x000107c2b054(&ppppppplStack_128,&UNK_10f68253a);
                    puVar33 = *(undefined8 **)(lVar53 + 0xe0);
                    if (*(undefined8 **)(lVar53 + 0xe8) == puVar33) goto LAB_10a907c3c;
                    ppppppplStack_1e8 = (long *******)*puVar33;
                    ppppppplVar94 = (long *******)puVar33[1];
                    if (ppppppplVar94 == (long *******)0x0) {
                      ppppppplVar95 = (long *******)0x0;
                    }
                    else {
                      ppppppplVar76 = ppppppplVar94 + 1;
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                        if (bVar22) {
                          *ppppppplVar76 = (long ******)((long)*ppppppplVar76 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      ppppppplVar95 = ppppppplVar94 + 2;
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar95,0x10);
                        if (bVar22) {
                          *ppppppplVar95 = (long ******)((long)*ppppppplVar95 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      do {
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                        if (bVar22) {
                          *ppppppplVar76 = (long ******)((long)*ppppppplVar76 + 1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                        ppppppplVar95 = ppppppplVar94;
                      } while (cVar20 != '\0');
                    }
                    ppppppplStack_b0 = (long *******)0x1000000000000000;
                    uStack_b2 = 0x6873;
                    uStack_b8 = 0x654d7265646e;
                    uStack_c0._6_2_ = 0x6552;
                    uStack_c0._1_5_ = 0x2e74657373;
                    uStack_c0._0_1_ = 0x41;
                    ppppppplStack_1e0 = ppppppplVar94;
                    ppppppplStack_a8 = ppppppplStack_1e8;
                    FUN_10a39a09c(ppppppplVar39,&ppppppplStack_128,&uStack_c0);
                    if (ppppppplVar94 != (long *******)0x0) {
                      ppppppplVar39 = ppppppplVar94 + 1;
                      do {
                        pppppplVar52 = *ppppppplVar39;
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar39,0x10);
                        if (bVar22) {
                          *ppppppplVar39 = (long ******)((long)pppppplVar52 + -1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      if (pppppplVar52 == (long ******)0x0) {
                        (*(code *)(*ppppppplVar94)[2])(ppppppplVar94);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                      }
                    }
                    if (ppppppplVar95 != (long *******)0x0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    ppppppplVar39 = ppppppplStack_1e0;
                    if (ppppppplStack_1e0 != (long *******)0x0) {
                      ppppppplVar76 = ppppppplStack_1e0 + 1;
                      do {
                        pppppplVar52 = *ppppppplVar76;
                        cVar20 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                        if (bVar22) {
                          *ppppppplVar76 = (long ******)((long)pppppplVar52 + -1);
                          cVar20 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar20 != '\0');
                      if (pppppplVar52 == (long ******)0x0) {
                        (*(code *)(*ppppppplStack_1e0)[2])(ppppppplStack_1e0);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar39);
                      }
                    }
                    if ((long)ppppppplStack_118 < 0) {
                      __ZdlPv(ppppppplStack_128);
                    }
                  }
                }
                else {
                  func_0x00010a0fda30();
                  puVar33 = (undefined8 *)0x80;
                  __Znwm();
                  puVar33[1] = 0;
                  puVar33[2] = 0;
                  *puVar33 = &PTR_FUN_110bde0d8;
                  *(undefined1 *)(puVar33 + 4) = 0;
                  puVar33[7] = 0;
                  puVar33[6] = 0;
                  pppplVar55 = (long ****)(puVar33 + 8);
                  puVar33[9] = 0;
                  *pppplVar55 = (long ***)0x0;
                  puVar33[0xc] = ppppppplVar39;
                  puVar33[0xd] = 0;
                  puVar33[0xe] = 0;
                  puVar33[0xf] = 0;
                  puVar40 = puVar33 + 3;
                  *puVar40 = &PTR_DAT_110bdb408;
                  puVar33[5] = &PTR_FUN_110bdb490;
                  puVar33[10] = &PTR_FUN_110bdb4e8;
                  puVar33[0xb] = ppppppplVar71;
                  uStack_c0._0_1_ = SUB81(puVar40,0);
                  uStack_c0._1_5_ = (undefined5)((ulong)puVar40 >> 8);
                  uStack_c0._6_2_ = (undefined2)((ulong)puVar40 >> 0x30);
                  uStack_b8 = SUB86(puVar33,0);
                  uStack_b2 = (undefined2)((ulong)puVar33 >> 0x30);
                  FUN_10a4951fc(&uStack_c0);
                  uVar92 = CONCAT26(uStack_b2,uStack_b8);
                  uVar69 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0))
                  ;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  plVar70 = *(long **)(param_1 + 0x570);
                  *(undefined8 *)(param_1 + 0x570) = uVar92;
                  *(undefined8 *)(param_1 + 0x568) = uVar69;
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  ppppplVar34 = *(long ******)(param_1 + 0x568);
                  if (ppppplVar34 + 10 != ppppplStack_e8 + 0xc) {
                    pppplVar55 = ppppplStack_e8[0xc];
                    FUN_10a105cdc(ppppplVar34 + 10,pppplVar55,ppppplStack_e8[0xd],
                                  ((long)ppppplStack_e8[0xd] - (long)pppplVar55 >> 3) *
                                  -0x5555555555555555);
                    ppppplVar34 = *(long ******)(param_1 + 0x568);
                  }
                  pppppplStack_150 = *(long *******)(param_1 + 0x570);
                  ppppplVar35 = ppppplVar34;
                  if (pppppplStack_150 != (long ******)0x0) {
                    pppppplVar52 = pppppplStack_150 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                      if (bVar22) {
                        *pppppplVar52 = (long *****)((long)*pppppplVar52 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    ppppplVar35 = *(long ******)(param_1 + 0x568);
                  }
                  ppppplStack_158 = ppppplVar34;
                  (*(code *)(*ppppplVar35)[7])();
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  ppppppplStack_b0 = (long *******)0x0;
                  func_0x000107c2c4d8(&uStack_c0,ppppplVar35,pppplVar55);
                  pppppplVar52 = pppppplStack_150;
                  if (pppppplStack_150 != (long ******)0x0) {
                    pppppplVar68 = pppppplStack_150 + 2;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                      if (bVar22) {
                        *pppppplVar68 = (long *****)((long)*pppppplVar68 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                  }
                  ppppppplStack_a8 = (long *******)ppppplStack_158;
                  ppppplVar34 = ppppplStack_158 + 2;
                  (*(code *)(*ppppplVar34)[3])();
                  pppppplVar68 = (long ******)0x0;
                  if ((((ulong)ppppplVar34 & 1) == 0) &&
                     (pppppplVar68 = pppppplVar52, pppppplVar52 != (long ******)0x0)) {
                    pppppplVar46 = pppppplVar52 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar46,0x10);
                      if (bVar22) {
                        *pppppplVar46 = (long *****)((long)*pppppplVar46 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                  }
                  if (*(char *)(param_1 + 0x58f) < '\0') {
                    __ZdlPv(*puVar29);
                  }
                  ppppppplVar39 = ppppppplStack_a8;
                  *(ulong *)(param_1 + 0x580) = CONCAT26(uStack_b2,uStack_b8);
                  *puVar29 = CONCAT26(uStack_c0._6_2_,
                                      CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                  *(long ********)(param_1 + 0x588) = ppppppplStack_b0;
                  ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                  uStack_c0._0_1_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  ppppppplVar94 = (long *******)0x0;
                  lVar53 = *(long *)(param_1 + 0x598);
                  *(long *******)(param_1 + 0x598) = pppppplVar52;
                  *(long ********)(param_1 + 0x590) = ppppppplVar39;
                  if (lVar53 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0x5a0,&stack0xffffffffffffff68);
                  if (pppppplVar68 != (long ******)0x0) {
                    pppppplVar52 = pppppplVar68 + 1;
                    do {
                      ppppplVar34 = *pppppplVar52;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                      if (bVar22) {
                        *pppppplVar52 = (long *****)((long)ppppplVar34 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar34 == (long *****)0x0) {
                      (*(code *)(*pppppplVar68)[2])(pppppplVar68);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar68);
                    }
                  }
                  pppppplVar52 = pppppplStack_150;
                  if (pppppplStack_150 != (long ******)0x0) {
                    pppppplVar46 = pppppplStack_150 + 1;
                    do {
                      ppppplVar34 = *pppppplVar46;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar46,0x10);
                      if (bVar22) {
                        *pppppplVar46 = (long *****)((long)ppppplVar34 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar34 == (long *****)0x0) {
                      (*(code *)(*pppppplStack_150)[2])(pppppplStack_150);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar52);
                    }
                  }
                  ppppppplVar39 = ppppppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f682575);
                  puVar38 = (undefined1 *)&uStack_c0;
                  FUN_10a39a09c(ppppppplVar39,puVar38,puVar29);
                  func_0x00010a0fda30();
                  FUN_10a91a250(&uStack_c0,ppppppplVar39,puVar38);
                  FUN_10a908708(plVar32,&uStack_c0);
                  plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  ppppplVar34 = ppppplStack_e8;
                  ppppppplStack_120 = (long *******)0x0;
                  ppppppplStack_128 = (long *******)0x0;
                  ppppppplStack_118 = (long *******)0x0;
                  ppppppplVar39 =
                       (long *******)((long)ppppplStack_e8[10] - (long)ppppplStack_e8[9] >> 4);
                  FUN_10a904f5c(&ppppppplStack_128,ppppppplVar39);
                  pppplVar73 = ppppplVar34[10];
                  ppppppplVar95 = ppppppplStack_128;
                  for (pppplVar55 = ppppplVar34[9]; ppppppplStack_128 = ppppppplVar95,
                      pppplVar55 != pppplVar73; pppplVar55 = pppplVar55 + 2) {
                    if (ppppppplStack_120 < ppppppplStack_118) {
                      ppplVar48 = pppplVar55[1];
                      pppppplVar52 = (long ******)*pppplVar55;
                      ppppppplStack_120[1] = (long ******)pppplVar55[1];
                      *ppppppplStack_120 = pppppplVar52;
                      if (ppplVar48 != (long ***)0x0) {
                        ppplVar48 = ppplVar48 + 2;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppplVar48,0x10);
                          if (bVar22) {
                            *ppplVar48 = (long **)((long)*ppplVar48 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      ppppppplVar76 = ppppppplStack_120 + 2;
                    }
                    else {
                      lVar53 = (long)ppppppplStack_120 - (long)ppppppplVar95;
                      uVar72 = (lVar53 >> 4) + 1;
                      if (uVar72 >> 0x3c != 0) {
                        FUN_10a34d61c();
                        goto LAB_10a907c3c;
                      }
                      uVar54 = (long)ppppppplStack_118 - (long)ppppppplVar95 >> 3;
                      if (uVar54 <= uVar72) {
                        uVar54 = uVar72;
                      }
                      if (0x7fffffffffffffef <
                          (ulong)((long)ppppppplStack_118 - (long)ppppppplVar95)) {
                        uVar54 = 0xfffffffffffffff;
                      }
                      ppppppplVar94 = (long *******)&ppppppplStack_128;
                      ppppppplVar95 = (long *******)&ppppppplStack_128;
                      FUN_10a34d630();
                      plVar70 = (long *)((long)ppppppplVar95 + lVar53);
                      ppplVar48 = pppplVar55[1];
                      ppplVar80 = *pppplVar55;
                      plVar70[1] = (long)pppplVar55[1];
                      *plVar70 = (long)ppplVar80;
                      if (ppplVar48 != (long ***)0x0) {
                        ppplVar48 = ppplVar48 + 2;
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(ppplVar48,0x10);
                          if (bVar22) {
                            *ppplVar48 = (long **)((long)*ppplVar48 + 1);
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      ppppppplVar76 = (long *******)(plVar70 + 2);
                      ppppppplVar71 =
                           (long *******)
                           ((long)plVar70 - ((long)ppppppplStack_120 - (long)ppppppplStack_128));
                      ppppppplVar39 = ppppppplStack_128;
                      _memcpy(ppppppplVar71);
                      ppppppplStack_b0 = ppppppplStack_128;
                      ppppppplStack_a8 = ppppppplStack_118;
                      uStack_c0._0_1_ = SUB81(ppppppplStack_128,0);
                      uStack_c0._1_5_ = (undefined5)((ulong)ppppppplStack_128 >> 8);
                      uStack_c0._6_2_ = (undefined2)((ulong)ppppppplStack_128 >> 0x30);
                      uStack_b8 = SUB86(ppppppplStack_128,0);
                      ppppppplStack_128 = ppppppplVar71;
                      ppppppplStack_120 = ppppppplVar76;
                      ppppppplStack_118 = ppppppplVar95 + uVar54 * 2;
                      uStack_b2 = uStack_c0._6_2_;
                      FUN_10a35a1bc(&uStack_c0);
                    }
                    ppppppplVar95 = ppppppplStack_128;
                    ppppppplStack_120 = ppppppplVar76;
                  }
                  if ((long ********)(*plVar32 + 0x50) != &ppppppplStack_128) {
                    FUN_10a34d2ec();
                    ppppppplVar39 = ppppppplVar95;
                  }
                  uStack_c0._0_1_ = SUB81(&ppppppplStack_128,0);
                  uStack_c0._1_5_ = (undefined5)((ulong)&ppppppplStack_128 >> 8);
                  uStack_c0._6_2_ = (undefined2)((ulong)&ppppppplStack_128 >> 0x30);
                  FUN_10a34c804(&uStack_c0);
                  ppppppplStack_168 = *(long ********)(param_1 + 0x5b0);
                  ppppppplStack_160 = *(long ********)(param_1 + 0x5b8);
                  ppppppplVar95 = ppppppplStack_168;
                  if (ppppppplStack_160 != (long *******)0x0) {
                    ppppppplVar95 = ppppppplStack_160 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar95,0x10);
                      if (bVar22) {
                        *ppppppplVar95 = (long ******)((long)*ppppppplVar95 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    ppppppplVar95 = (long *******)*plVar32;
                  }
                  (*(code *)(*ppppppplVar95)[7])();
                  FUN_10a90876c(&uStack_c0,&ppppppplStack_168,ppppppplVar95,ppppppplVar39);
                  if (*(char *)(param_1 + 0x5d7) < '\0') {
                    __ZdlPv(*puVar1);
                  }
                  ppppppplVar95 = ppppppplStack_a8;
                  *(ulong *)(param_1 + 0x5c8) = CONCAT26(uStack_b2,uStack_b8);
                  *puVar1 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0)
                                    );
                  *(long ********)(param_1 + 0x5d0) = ppppppplStack_b0;
                  ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                  uStack_c0._0_1_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  ppppppplVar39 = (long *******)0x0;
                  lVar53 = *(long *)(param_1 + 0x5e0);
                  *(long ********)(param_1 + 0x5e0) = ppppppplVar94;
                  *(long ********)(param_1 + 0x5d8) = ppppppplVar95;
                  if (lVar53 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0x5e8,&stack0xffffffffffffff68);
                  if (pppppplVar68 != (long ******)0x0) {
                    pppppplVar52 = pppppplVar68 + 1;
                    do {
                      ppppplVar34 = *pppppplVar52;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                      if (bVar22) {
                        *pppppplVar52 = (long *****)((long)ppppplVar34 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar34 == (long *****)0x0) {
                      (*(code *)(*pppppplVar68)[2])(pppppplVar68);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar68);
                    }
                  }
                  ppppppplVar94 = ppppppplStack_160;
                  if (ppppppplStack_160 != (long *******)0x0) {
                    ppppppplVar95 = ppppppplStack_160 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar95;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar95,0x10);
                      if (bVar22) {
                        *ppppppplVar95 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplStack_160)[2])(ppppppplStack_160);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                    }
                  }
                  ppppppplVar94 = ppppppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f682589);
                  puVar38 = (undefined1 *)&uStack_c0;
                  FUN_10a39a09c(ppppppplVar94,puVar38,puVar1);
                  func_0x00010a0fda30();
                  FUN_10a91a250(&uStack_c0,ppppppplVar94,puVar38);
                  FUN_10a908708(plVar50,&uStack_c0);
                  plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  ppppppplStack_120 = (long *******)0x0;
                  ppppppplStack_128 = (long *******)0x0;
                  ppppppplStack_118 = (long *******)0x0;
                  lVar53 = *(long *)(param_1 + 0x488);
                  ppppppplVar94 =
                       (long *******)(*(long *)(lVar53 + 0xe8) - *(long *)(lVar53 + 0xe0) >> 4);
                  FUN_10a904f5c(&ppppppplStack_128,ppppppplVar94);
                  puVar40 = *(undefined8 **)(lVar53 + 0xe8);
                  ppppppplVar95 = ppppppplStack_128;
                  for (puVar33 = *(undefined8 **)(lVar53 + 0xe0); ppppppplStack_128 = ppppppplVar95,
                      puVar33 != puVar40; puVar33 = puVar33 + 2) {
                    if (ppppppplStack_120 < ppppppplStack_118) {
                      lVar53 = puVar33[1];
                      pppppplVar52 = (long ******)*puVar33;
                      ppppppplStack_120[1] = (long ******)puVar33[1];
                      *ppppppplStack_120 = pppppplVar52;
                      if (lVar53 != 0) {
                        plVar70 = (long *)(lVar53 + 0x10);
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                          if (bVar22) {
                            *plVar70 = *plVar70 + 1;
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      ppppppplVar76 = ppppppplStack_120 + 2;
                    }
                    else {
                      lVar53 = (long)ppppppplStack_120 - (long)ppppppplVar95;
                      uVar72 = (lVar53 >> 4) + 1;
                      if (uVar72 >> 0x3c != 0) {
                        FUN_10a34d61c();
                        goto LAB_10a907c3c;
                      }
                      uVar54 = (long)ppppppplStack_118 - (long)ppppppplVar95 >> 3;
                      if (uVar54 <= uVar72) {
                        uVar54 = uVar72;
                      }
                      if (0x7fffffffffffffef <
                          (ulong)((long)ppppppplStack_118 - (long)ppppppplVar95)) {
                        uVar54 = 0xfffffffffffffff;
                      }
                      ppppppplVar39 = (long *******)&ppppppplStack_128;
                      ppppppplVar95 = (long *******)&ppppppplStack_128;
                      FUN_10a34d630();
                      puVar41 = (undefined8 *)((long)ppppppplVar95 + lVar53);
                      lVar53 = puVar33[1];
                      uVar69 = *puVar33;
                      puVar41[1] = puVar33[1];
                      *puVar41 = uVar69;
                      if (lVar53 != 0) {
                        plVar70 = (long *)(lVar53 + 0x10);
                        do {
                          cVar20 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                          if (bVar22) {
                            *plVar70 = *plVar70 + 1;
                            cVar20 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar20 != '\0');
                      }
                      ppppppplVar76 = (long *******)(puVar41 + 2);
                      ppppppplVar71 =
                           (long *******)
                           ((long)puVar41 - ((long)ppppppplStack_120 - (long)ppppppplStack_128));
                      ppppppplVar94 = ppppppplStack_128;
                      _memcpy(ppppppplVar71);
                      ppppppplStack_b0 = ppppppplStack_128;
                      ppppppplStack_a8 = ppppppplStack_118;
                      uStack_c0._0_1_ = SUB81(ppppppplStack_128,0);
                      uStack_c0._1_5_ = (undefined5)((ulong)ppppppplStack_128 >> 8);
                      uStack_c0._6_2_ = (undefined2)((ulong)ppppppplStack_128 >> 0x30);
                      uStack_b8 = SUB86(ppppppplStack_128,0);
                      ppppppplStack_128 = ppppppplVar71;
                      ppppppplStack_120 = ppppppplVar76;
                      ppppppplStack_118 = ppppppplVar95 + uVar54 * 2;
                      uStack_b2 = uStack_c0._6_2_;
                      FUN_10a35a1bc(&uStack_c0);
                    }
                    ppppppplVar95 = ppppppplStack_128;
                    ppppppplStack_120 = ppppppplVar76;
                  }
                  if ((long ********)(*plVar50 + 0x50) != &ppppppplStack_128) {
                    FUN_10a34d2ec();
                    ppppppplVar94 = ppppppplVar95;
                  }
                  uStack_c0._0_1_ = SUB81(&ppppppplStack_128,0);
                  uStack_c0._1_5_ = (undefined5)((ulong)&ppppppplStack_128 >> 8);
                  uStack_c0._6_2_ = (undefined2)((ulong)&ppppppplStack_128 >> 0x30);
                  FUN_10a34c804(&uStack_c0);
                  plStack_178 = *(long **)(param_1 + 0x600);
                  plStack_180 = *(long **)(param_1 + 0x5f8);
                  plVar70 = plStack_180;
                  if (*(long *)(param_1 + 0x600) != 0) {
                    plVar70 = (long *)(*(long *)(param_1 + 0x600) + 8);
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                      if (bVar22) {
                        *plVar70 = *plVar70 + 1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    plVar70 = (long *)*plVar50;
                  }
                  (**(code **)(*plVar70 + 0x38))();
                  FUN_10a90876c(&uStack_c0,&plStack_180,plVar70,ppppppplVar94);
                  if (*(char *)(param_1 + 0x61f) < '\0') {
                    __ZdlPv(*puVar2);
                  }
                  ppppppplVar94 = ppppppplStack_a8;
                  *(ulong *)(param_1 + 0x610) = CONCAT26(uStack_b2,uStack_b8);
                  *puVar2 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0)
                                    );
                  *(long ********)(param_1 + 0x618) = ppppppplStack_b0;
                  ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                  uStack_c0._0_1_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  lVar53 = *(long *)(param_1 + 0x628);
                  *(long ********)(param_1 + 0x628) = ppppppplVar39;
                  *(long ********)(param_1 + 0x620) = ppppppplVar94;
                  if (lVar53 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0x630,&stack0xffffffffffffff68);
                  if (pppppplVar68 != (long ******)0x0) {
                    pppppplVar52 = pppppplVar68 + 1;
                    do {
                      ppppplVar34 = *pppppplVar52;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                      if (bVar22) {
                        *pppppplVar52 = (long *****)((long)ppppplVar34 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar34 == (long *****)0x0) {
                      (*(code *)(*pppppplVar68)[2])(pppppplVar68);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar68);
                    }
                  }
                  plVar70 = plStack_178;
                  if (plStack_178 != (long *)0x0) {
                    plVar67 = plStack_178 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plStack_178 + 0x10))(plStack_178);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  ppppppplVar94 = ppppppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f682599);
                  puVar38 = (undefined1 *)&uStack_c0;
                  FUN_10a39a09c(ppppppplVar94,puVar38,puVar2);
                  func_0x00010a0fda30();
                  puVar33 = (undefined8 *)0x80;
                  __Znwm();
                  puVar33[1] = 0;
                  puVar33[2] = 0;
                  *puVar33 = &PTR_FUN_110bddf98;
                  *(undefined1 *)(puVar33 + 4) = 0;
                  puVar33[7] = 0;
                  puVar33[6] = 0;
                  puVar33[9] = 0;
                  puVar33[8] = 0;
                  puVar33[0xc] = puVar38;
                  puVar33[0xd] = 0;
                  puVar33[0xe] = 0;
                  puVar33[0xf] = 0;
                  puVar40 = puVar33 + 3;
                  *puVar40 = &PTR_DAT_110bdade8;
                  puVar33[5] = &PTR_DAT_110bdae70;
                  puVar33[10] = &PTR_FUN_110bdaec8;
                  puVar33[0xb] = ppppppplVar94;
                  uStack_c0._0_1_ = SUB81(puVar40,0);
                  uStack_c0._1_5_ = (undefined5)((ulong)puVar40 >> 8);
                  uStack_c0._6_2_ = (undefined2)((ulong)puVar40 >> 0x30);
                  uStack_b8 = SUB86(puVar33,0);
                  uStack_b2 = (undefined2)((ulong)puVar33 >> 0x30);
                  FUN_10a494be0(&uStack_c0);
                  uVar92 = CONCAT26(uStack_b2,uStack_b8);
                  uVar69 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0))
                  ;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  plVar70 = *(long **)(param_1 + 0x648);
                  *(undefined8 *)(param_1 + 0x648) = uVar92;
                  *(undefined8 *)(param_1 + 0x640) = uVar69;
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  ppppplVar34 = ppppplStack_e8;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  ppppppplStack_b0 = (long *******)0x0;
                  lVar53 = (long)ppppplStack_e8[10] - (long)ppppplStack_e8[9] >> 4;
                  func_0x000107c27e9c(&uStack_c0,lVar53);
                  if (ppppplVar34[10] != ppppplVar34[9]) {
                    uVar72 = 0;
                    do {
                      FUN_10a942378(&ppppppplStack_128,ppppplStack_e8,uVar72);
                      FUN_10a904d90(&ppppppplStack_1a0,plVar31,ppppppplVar60,&ppppppplStack_128);
                      uStack_1a8 = (long ******)
                                   CONCAT44((int)ppppppplStack_198,(undefined4)uStack_1a8);
                      lVar53 = (long)&uStack_1a8 + 4;
                      FUN_109febd04(&uStack_c0,lVar53);
                      if ((long)ppppppplStack_118 < 0) {
                        __ZdlPv(ppppppplStack_128);
                      }
                      uVar72 = uVar72 + 1;
                    } while (uVar72 < (ulong)((long)ppppplVar34[10] - (long)ppppplVar34[9] >> 4));
                  }
                  if ((undefined8 *)(*(long *)(param_1 + 0x640) + 0x50) != &uStack_c0) {
                    lVar53 = CONCAT26(uStack_c0._6_2_,
                                      CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                    FUN_10a0ea4a0();
                  }
                  if (CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0)) != 0
                     ) {
                    uStack_b2 = uStack_c0._6_2_;
                    uStack_b8 = CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0);
                    __ZdlPv();
                  }
                  plVar67 = *(long **)(param_1 + 0x640);
                  pppppplVar52 = *(long *******)(param_1 + 0x648);
                  plVar70 = plVar67;
                  if (pppppplVar52 != (long ******)0x0) {
                    pppppplVar68 = pppppplVar52 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                      if (bVar22) {
                        *pppppplVar68 = (long *****)((long)*pppppplVar68 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    plVar70 = *(long **)(param_1 + 0x640);
                  }
                  plStack_1b8 = plVar67;
                  pppppplStack_1b0 = pppppplVar52;
                  (**(code **)(*plVar70 + 0x38))();
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  ppppppplStack_b0 = (long *******)0x0;
                  func_0x000107c2c4d8(&uStack_c0,plVar70,lVar53);
                  if (pppppplVar52 != (long ******)0x0) {
                    pppppplVar68 = pppppplVar52 + 2;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                      if (bVar22) {
                        *pppppplVar68 = (long *****)((long)*pppppplVar68 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                  }
                  plVar70 = plVar67 + 2;
                  ppppppplStack_a8 = (long *******)plVar67;
                  (**(code **)(*plVar70 + 0x18))();
                  pppppplVar68 = (long ******)0x0;
                  if ((((ulong)plVar70 & 1) == 0) &&
                     (pppppplVar68 = pppppplVar52, pppppplVar52 != (long ******)0x0)) {
                    pppppplVar46 = pppppplVar52 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar46,0x10);
                      if (bVar22) {
                        *pppppplVar46 = (long *****)((long)*pppppplVar46 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                  }
                  if (*(char *)(param_1 + 0x667) < '\0') {
                    __ZdlPv(*puVar3);
                  }
                  ppppppplVar94 = ppppppplStack_a8;
                  *(ulong *)(param_1 + 0x658) = CONCAT26(uStack_b2,uStack_b8);
                  *puVar3 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0)
                                    );
                  *(long ********)(param_1 + 0x660) = ppppppplStack_b0;
                  ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                  uStack_c0._0_1_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  lVar53 = *(long *)(param_1 + 0x670);
                  *(long *******)(param_1 + 0x670) = pppppplVar52;
                  *(long ********)(param_1 + 0x668) = ppppppplVar94;
                  if (lVar53 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0x678,&stack0xffffffffffffff68);
                  if (pppppplVar68 != (long ******)0x0) {
                    pppppplVar52 = pppppplVar68 + 1;
                    do {
                      ppppplVar34 = *pppppplVar52;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                      if (bVar22) {
                        *pppppplVar52 = (long *****)((long)ppppplVar34 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar34 == (long *****)0x0) {
                      (*(code *)(*pppppplVar68)[2])(pppppplVar68);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar68);
                    }
                  }
                  pppppplVar52 = pppppplStack_1b0;
                  if (pppppplStack_1b0 != (long ******)0x0) {
                    pppppplVar68 = pppppplStack_1b0 + 1;
                    do {
                      ppppplVar34 = *pppppplVar68;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                      if (bVar22) {
                        *pppppplVar68 = (long *****)((long)ppppplVar34 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (ppppplVar34 == (long *****)0x0) {
                      (*(code *)(*pppppplStack_1b0)[2])(pppppplStack_1b0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar52);
                    }
                  }
                  ppppppplVar94 = ppppppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f6825a7);
                  puVar38 = (undefined1 *)&uStack_c0;
                  FUN_10a39a09c(ppppppplVar94,puVar38,puVar3);
                  func_0x00010a0fda30();
                  puVar33 = (undefined8 *)0x80;
                  __Znwm();
                  puVar33[1] = 0;
                  puVar33[2] = 0;
                  *puVar33 = &PTR_FUN_110bddfe8;
                  *(undefined1 *)(puVar33 + 4) = 0;
                  puVar33[7] = 0;
                  puVar33[6] = 0;
                  puVar33[9] = 0;
                  puVar33[8] = 0;
                  puVar33[0xc] = puVar38;
                  puVar33[0xd] = 0;
                  puVar33[0xe] = 0;
                  puVar33[0xf] = 0;
                  puVar40 = puVar33 + 3;
                  *puVar40 = &PTR_DAT_110bdaee8;
                  puVar33[5] = &PTR_DAT_110bdaf70;
                  puVar33[10] = &PTR_FUN_110bdafc8;
                  puVar33[0xb] = ppppppplVar94;
                  uStack_c0._0_1_ = SUB81(puVar40,0);
                  uStack_c0._1_5_ = (undefined5)((ulong)puVar40 >> 8);
                  uStack_c0._6_2_ = (undefined2)((ulong)puVar40 >> 0x30);
                  uStack_b8 = SUB86(puVar33,0);
                  uStack_b2 = (undefined2)((ulong)puVar33 >> 0x30);
                  FUN_10a494d28(&uStack_c0);
                  uVar92 = CONCAT26(uStack_b2,uStack_b8);
                  uVar69 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0))
                  ;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  plVar70 = *(long **)(param_1 + 0x690);
                  *(undefined8 *)(param_1 + 0x690) = uVar92;
                  *(undefined8 *)(param_1 + 0x688) = uVar69;
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                  if (plVar70 != (long *)0x0) {
                    plVar67 = plVar70 + 1;
                    do {
                      lVar53 = *plVar67;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                      if (bVar22) {
                        *plVar67 = lVar53 + -1;
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*plVar70 + 0x10))(plVar70);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    }
                  }
                  ppppplVar34 = ppppplStack_e8;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  ppppppplStack_b0 = (long *******)0x0;
                  func_0x000104becb10(&uStack_c0,
                                      (long)ppppplStack_e8[10] - (long)ppppplStack_e8[9] >> 4);
                  if (ppppplVar34[10] != ppppplVar34[9]) {
                    uVar72 = 0;
                    do {
                      FUN_10a942378(&ppppppplStack_128,ppppplStack_e8,uVar72);
                      FUN_10a904d90(&ppppppplStack_1a0,plVar31,ppppppplVar60,&ppppppplStack_128);
                      func_0x0001078db3d4(&uStack_c0,&ppppppplStack_1a0);
                      if ((long)ppppppplStack_118 < 0) {
                        __ZdlPv(ppppppplStack_128);
                      }
                      uVar72 = uVar72 + 1;
                    } while (uVar72 < (ulong)((long)ppppplVar34[10] - (long)ppppplVar34[9] >> 4));
                  }
                  puVar38 = (undefined1 *)&uStack_c0;
                  func_0x000108b0402c(*(long *)(param_1 + 0x688) + 0x50,puVar38);
                  if (CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0)) != 0
                     ) {
                    __ZdlPv();
                  }
                  ppppppplVar39 = *(long ********)(param_1 + 0x688);
                  ppppppplVar76 = *(long ********)(param_1 + 0x690);
                  ppppppplVar94 = ppppppplVar39;
                  if (ppppppplVar76 != (long *******)0x0) {
                    ppppppplVar94 = ppppppplVar76 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                      if (bVar22) {
                        *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    ppppppplVar94 = *(long ********)(param_1 + 0x688);
                  }
                  ppppppplStack_1c8 = ppppppplVar39;
                  ppppppplStack_1c0 = ppppppplVar76;
                  (*(code *)(*ppppppplVar94)[7])();
                  uStack_b8 = 0;
                  uStack_b2 = 0;
                  uStack_c0._0_1_ = 0;
                  uStack_c0._1_5_ = 0;
                  uStack_c0._6_2_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  ppppppplStack_b0 = (long *******)0x0;
                  func_0x000107c2c4d8(&uStack_c0,ppppppplVar94,puVar38);
                  if (ppppppplVar76 != (long *******)0x0) {
                    ppppppplVar94 = ppppppplVar76 + 2;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                      if (bVar22) {
                        *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                  }
                  ppppppplVar95 = ppppppplVar39 + 2;
                  ppppppplStack_a8 = ppppppplVar39;
                  (*(code *)(*ppppppplVar95)[3])();
                  ppppppplVar94 = (long *******)0x0;
                  if ((((ulong)ppppppplVar95 & 1) == 0) &&
                     (ppppppplVar94 = ppppppplVar76, ppppppplVar76 != (long *******)0x0)) {
                    ppppppplVar39 = ppppppplVar76 + 1;
                    do {
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar39,0x10);
                      if (bVar22) {
                        *ppppppplVar39 = (long ******)((long)*ppppppplVar39 + 1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                  }
                  if (*(char *)(param_1 + 0x6af) < '\0') {
                    __ZdlPv(*puVar4);
                  }
                  ppppppplVar39 = ppppppplStack_a8;
                  *(ulong *)(param_1 + 0x6a0) = CONCAT26(uStack_b2,uStack_b8);
                  *puVar4 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0)
                                    );
                  *(long ********)(param_1 + 0x6a8) = ppppppplStack_b0;
                  ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                  uStack_c0._0_1_ = 0;
                  ppppppplStack_a8 = (long *******)0x0;
                  ppppppplVar95 = (long *******)0x0;
                  lVar53 = *(long *)(param_1 + 0x6b8);
                  *(long ********)(param_1 + 0x6b8) = ppppppplVar76;
                  *(long ********)(param_1 + 0x6b0) = ppppppplVar39;
                  if (lVar53 != 0) {
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                  }
                  func_0x00010a328268(param_1 + 0x6c0,&stack0xffffffffffffff68);
                  if (ppppppplVar94 != (long *******)0x0) {
                    ppppppplVar39 = ppppppplVar94 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar39;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar39,0x10);
                      if (bVar22) {
                        *ppppppplVar39 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplVar94)[2])(ppppppplVar94);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                    }
                  }
                  ppppppplVar39 = ppppppplStack_1c0;
                  if (ppppppplStack_1c0 != (long *******)0x0) {
                    ppppppplVar76 = ppppppplStack_1c0 + 1;
                    do {
                      pppppplVar52 = *ppppppplVar76;
                      cVar20 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar76,0x10);
                      if (bVar22) {
                        *ppppppplVar76 = (long ******)((long)pppppplVar52 + -1);
                        cVar20 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar20 != '\0');
                    if (pppppplVar52 == (long ******)0x0) {
                      (*(code *)(*ppppppplStack_1c0)[2])(ppppppplStack_1c0);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar39);
                    }
                  }
                  ppppppplVar39 = ppppppplStack_110;
                  func_0x000107c2b054(&uStack_c0,&UNK_10f6825b5);
                  FUN_10a39a09c(ppppppplVar39,&uStack_c0,puVar4);
                }
                (*(code *)(*ppppppplStack_110)[0xd])(ppppppplStack_110,1);
                uVar69 = 1;
                lVar53 = lVar65;
                func_0x00010a3e4590(lVar65,1);
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_c0,lVar53,uVar69);
                puVar38 = (undefined1 *)&uStack_c0;
                plVar67 = (long *)(param_1 + 0x6d0);
                FUN_10a908864();
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                puVar33 = (undefined8 *)0xa8;
                __Znwm();
                puVar33[0xe] = 0;
                puVar33[0xd] = 0x3f800000;
                puVar33[0x10] = 0;
                puVar33[0xf] = 0x3f80000000000000;
                puVar33[0x12] = 0x3f800000;
                puVar33[0x11] = 0;
                puVar33[1] = 0;
                puVar33[2] = 0;
                *puVar33 = &PTR_DAT_110bdde08;
                *(undefined1 *)(puVar33 + 4) = 0;
                puVar33[7] = 0;
                puVar33[6] = 0;
                puVar40 = puVar33 + 8;
                puVar33[9] = 0;
                *puVar40 = 0;
                puVar33[0xb] = plVar67;
                puVar33[0xc] = puVar38;
                puVar33[0x14] = 0x3f80000000000000;
                puVar33[0x13] = 0;
                puVar41 = puVar33 + 3;
                *puVar41 = &PTR_FUN_110bda668;
                puVar33[5] = &PTR_FUN_110bda6f0;
                puVar33[10] = &PTR_DAT_110bda748;
                uStack_c0._0_1_ = SUB81(puVar41,0);
                uStack_c0._1_5_ = (undefined5)((ulong)puVar41 >> 8);
                uStack_c0._6_2_ = (undefined2)((ulong)puVar41 >> 0x30);
                uStack_b8 = SUB86(puVar33,0);
                uStack_b2 = (undefined2)((ulong)puVar33 >> 0x30);
                plVar70 = &uStack_c0;
                FUN_10a4945bc(plVar70);
                uVar92 = CONCAT26(uStack_b2,uStack_b8);
                uVar69 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                uStack_c0._0_1_ = 0;
                uStack_c0._1_5_ = 0;
                uStack_c0._6_2_ = 0;
                uStack_b8 = 0;
                uStack_b2 = 0;
                plVar67 = *(long **)(param_1 + 0x6e8);
                *(undefined8 *)(param_1 + 0x6e8) = uVar92;
                *(undefined8 *)(param_1 + 0x6e0) = uVar69;
                if (plVar67 != (long *)0x0) {
                  plVar11 = plVar67 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                    plVar70 = plVar67;
                  }
                }
                plVar67 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar67 != (long *)0x0) {
                  plVar11 = plVar67 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                    plVar70 = plVar67;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_c0,plVar70,puVar40);
                puVar38 = (undefined1 *)&uStack_c0;
                plVar67 = plVar45;
                FUN_10a908864(plVar45,puVar38);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_c0,plVar67,puVar38);
                puVar38 = (undefined1 *)&uStack_c0;
                plVar67 = plVar5;
                FUN_10a908864(plVar5,puVar38);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a368(&uStack_c0,plVar67,puVar38);
                puVar38 = (undefined1 *)&uStack_c0;
                plVar67 = plVar6;
                func_0x00010a9088c8(plVar6,puVar38);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a2e0(&uStack_c0,plVar67,puVar38);
                puVar38 = (undefined1 *)&uStack_c0;
                plVar67 = plVar7;
                FUN_10a908864(plVar7,puVar38);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a368(&uStack_c0,plVar67,puVar38);
                puVar38 = (undefined1 *)&uStack_c0;
                plVar67 = plVar8;
                func_0x00010a9088c8(plVar8,puVar38);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a3f0(&uStack_c0,plVar67,puVar38);
                puVar38 = (undefined1 *)&uStack_c0;
                plVar67 = plVar9;
                func_0x00010a90892c(plVar9,puVar38);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar11 = plVar70 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                    plVar67 = plVar70;
                  }
                }
                func_0x00010a0fda30();
                func_0x00010a91a3f0(&uStack_c0,plVar67,puVar38);
                puVar38 = (undefined1 *)&uStack_c0;
                func_0x00010a90892c((long *)(param_1 + 0x750),puVar38);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar67 = plVar70 + 1;
                  do {
                    lVar53 = *plVar67;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                    if (bVar22) {
                      *plVar67 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                  }
                }
                ppppplStack_1f8 = *(long ******)(param_1 + 0x6d0);
                ppppplStack_1f0 = *(long ******)(param_1 + 0x6d8);
                ppppplVar34 = ppppplStack_1f8;
                if (ppppplStack_1f0 != (long *****)0x0) {
                  ppppplVar34 = ppppplStack_1f0 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppplVar34,0x10);
                    if (bVar22) {
                      *ppppplVar34 = (long ****)((long)*ppppplVar34 + 1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  ppppplVar34 = *(long ******)(param_1 + 0x6d0);
                }
                (*(code *)(*ppppplVar34)[7])();
                FUN_10a908990(&uStack_c0,&ppppplStack_1f8,ppppplVar34,puVar38);
                if (*(char *)(param_1 + 0x777) < '\0') {
                  __ZdlPv(*(undefined8 *)(param_1 + 0x760));
                }
                ppppppplVar39 = ppppppplStack_a8;
                *(ulong *)(param_1 + 0x768) = CONCAT26(uStack_b2,uStack_b8);
                *(undefined8 *)(param_1 + 0x760) =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                *(long ********)(param_1 + 0x770) = ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = *(long *)(param_1 + 0x780);
                *(long ********)(param_1 + 0x780) = ppppppplVar95;
                *(long ********)(param_1 + 0x778) = ppppppplVar39;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar38 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x788,puVar38);
                if (ppppppplVar94 != (long *******)0x0) {
                  ppppppplVar39 = ppppppplVar94 + 1;
                  do {
                    pppppplVar52 = *ppppppplVar39;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar39,0x10);
                    if (bVar22) {
                      *ppppppplVar39 = (long ******)((long)pppppplVar52 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (pppppplVar52 == (long ******)0x0) {
                    (*(code *)(*ppppppplVar94)[2])(ppppppplVar94);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar94);
                  }
                }
                ppppplVar34 = ppppplStack_1f0;
                if (ppppplStack_1f0 != (long *****)0x0) {
                  ppppplVar35 = ppppplStack_1f0 + 1;
                  do {
                    pppplVar55 = *ppppplVar35;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppplVar35,0x10);
                    if (bVar22) {
                      *ppppplVar35 = (long ****)((long)pppplVar55 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (pppplVar55 == (long ****)0x0) {
                    (*(code *)(*ppppplStack_1f0)[2])(ppppplStack_1f0);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar34);
                  }
                }
                pppppplVar68 = *(long *******)(param_1 + 0x6e0);
                plVar70 = *(long **)(param_1 + 0x6e8);
                pppppplVar52 = pppppplVar68;
                if (plVar70 != (long *)0x0) {
                  plVar67 = plVar70 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                    if (bVar22) {
                      *plVar67 = *plVar67 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  pppppplVar52 = *(long *******)(param_1 + 0x6e0);
                }
                pppppplStack_208 = pppppplVar68;
                plStack_200 = plVar70;
                (*(code *)(*pppppplVar52)[7])();
                uStack_b8 = 0;
                uStack_b2 = 0;
                uStack_c0._0_1_ = 0;
                uStack_c0._1_5_ = 0;
                uStack_c0._6_2_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                ppppppplStack_b0 = (long *******)0x0;
                func_0x000107c2c4d8(&uStack_c0,pppppplVar52,puVar38);
                if (plVar70 != (long *)0x0) {
                  plVar67 = plVar70 + 2;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                    if (bVar22) {
                      *plVar67 = *plVar67 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                }
                pppppplVar52 = pppppplVar68 + 2;
                ppppppplStack_a8 = (long *******)pppppplVar68;
                (*(code *)(*pppppplVar52)[3])();
                plVar67 = (long *)0x0;
                if ((((ulong)pppppplVar52 & 1) == 0) && (plVar67 = plVar70, plVar70 != (long *)0x0))
                {
                  plVar11 = plVar70 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = *plVar11 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                }
                if (*(char *)(param_1 + 0x7af) < '\0') {
                  __ZdlPv(*(undefined8 *)(param_1 + 0x798));
                }
                ppppppplVar94 = ppppppplStack_a8;
                *(ulong *)(param_1 + 0x7a0) = CONCAT26(uStack_b2,uStack_b8);
                *(undefined8 *)(param_1 + 0x798) =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                *(long ********)(param_1 + 0x7a8) = ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = *(long *)(param_1 + 0x7b8);
                *(long **)(param_1 + 0x7b8) = plVar70;
                *(long ********)(param_1 + 0x7b0) = ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar38 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x7c0,puVar38);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                plVar70 = plStack_200;
                if (plStack_200 != (long *)0x0) {
                  plVar11 = plStack_200 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plStack_200 + 0x10))(plStack_200);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                  }
                }
                plStack_218 = *(long **)(param_1 + 0x6f0);
                pppppplStack_210 = *(long *******)(param_1 + 0x6f8);
                plVar70 = plStack_218;
                if (pppppplStack_210 != (long ******)0x0) {
                  pppppplVar52 = pppppplStack_210 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                    if (bVar22) {
                      *pppppplVar52 = (long *****)((long)*pppppplVar52 + 1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  plVar70 = (long *)*plVar45;
                }
                (**(code **)(*plVar70 + 0x38))();
                FUN_10a908990(&uStack_c0,&plStack_218,plVar70,puVar38);
                if (*(char *)(param_1 + 0x7e7) < '\0') {
                  __ZdlPv(*(undefined8 *)(param_1 + 2000));
                }
                ppppppplVar94 = ppppppplStack_a8;
                *(ulong *)(param_1 + 0x7d8) = CONCAT26(uStack_b2,uStack_b8);
                *(undefined8 *)(param_1 + 2000) =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                *(long ********)(param_1 + 0x7e0) = ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = *(long *)(param_1 + 0x7f0);
                *(undefined8 *)(param_1 + 0x7f0) = 0;
                *(long ********)(param_1 + 0x7e8) = ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar38 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x7f8,puVar38);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                pppppplVar52 = pppppplStack_210;
                if (pppppplStack_210 != (long ******)0x0) {
                  pppppplVar68 = pppppplStack_210 + 1;
                  do {
                    ppppplVar34 = *pppppplVar68;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                    if (bVar22) {
                      *pppppplVar68 = (long *****)((long)ppppplVar34 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (ppppplVar34 == (long *****)0x0) {
                    (*(code *)(*pppppplStack_210)[2])(pppppplStack_210);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar52);
                  }
                }
                pplStack_228 = *(long ***)(param_1 + 0x700);
                plStack_220 = *(long **)(param_1 + 0x708);
                pplVar36 = pplStack_228;
                if (plStack_220 != (long *)0x0) {
                  plVar70 = plStack_220 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = *plVar70 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  pplVar36 = (long **)*plVar5;
                }
                (*(code *)(*pplVar36)[7])();
                FUN_10a908990(&uStack_c0,&pplStack_228,pplVar36,puVar38);
                if (*(char *)(param_1 + 0x81f) < '\0') {
                  __ZdlPv(*(undefined8 *)(param_1 + 0x808));
                }
                ppppppplVar94 = ppppppplStack_a8;
                *(ulong *)(param_1 + 0x810) = CONCAT26(uStack_b2,uStack_b8);
                *(undefined8 *)(param_1 + 0x808) =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                *(long ********)(param_1 + 0x818) = ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = *(long *)(param_1 + 0x828);
                *(undefined8 *)(param_1 + 0x828) = 0;
                *(long ********)(param_1 + 0x820) = ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar38 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x830,puVar38);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                plVar70 = plStack_220;
                if (plStack_220 != (long *)0x0) {
                  plVar11 = plStack_220 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plStack_220 + 0x10))(plStack_220);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                  }
                }
                plStack_238 = *(long **)(param_1 + 0x710);
                plStack_230 = *(long **)(param_1 + 0x718);
                plVar70 = plStack_238;
                if (plStack_230 != (long *)0x0) {
                  plVar70 = plStack_230 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = *plVar70 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  plVar70 = (long *)*plVar6;
                }
                (**(code **)(*plVar70 + 0x38))();
                FUN_10a908a88(&uStack_c0,&plStack_238,plVar70,puVar38);
                if (*(char *)(param_1 + 0x857) < '\0') {
                  __ZdlPv(*(undefined8 *)(param_1 + 0x840));
                }
                ppppppplVar94 = ppppppplStack_a8;
                *(ulong *)(param_1 + 0x848) = CONCAT26(uStack_b2,uStack_b8);
                *(undefined8 *)(param_1 + 0x840) =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                *(long ********)(param_1 + 0x850) = ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = *(long *)(param_1 + 0x860);
                *(undefined8 *)(param_1 + 0x860) = 0;
                *(long ********)(param_1 + 0x858) = ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar38 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x868,puVar38);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                plVar70 = plStack_230;
                if (plStack_230 != (long *)0x0) {
                  plVar11 = plStack_230 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plStack_230 + 0x10))(plStack_230);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                  }
                }
                pplStack_248 = *(long ***)(param_1 + 0x720);
                pppppplStack_240 = *(long *******)(param_1 + 0x728);
                pplVar36 = pplStack_248;
                if (pppppplStack_240 != (long ******)0x0) {
                  pppppplVar52 = pppppplStack_240 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(pppppplVar52,0x10);
                    if (bVar22) {
                      *pppppplVar52 = (long *****)((long)*pppppplVar52 + 1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  pplVar36 = (long **)*plVar7;
                }
                (*(code *)(*pplVar36)[7])();
                FUN_10a908990(&uStack_c0,&pplStack_248,pplVar36,puVar38);
                if (*(char *)(param_1 + 0x8ff) < '\0') {
                  __ZdlPv(*(undefined8 *)(param_1 + 0x8e8));
                }
                ppppppplVar94 = ppppppplStack_a8;
                *(ulong *)(param_1 + 0x8f0) = CONCAT26(uStack_b2,uStack_b8);
                *(undefined8 *)(param_1 + 0x8e8) =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                *(long ********)(param_1 + 0x8f8) = ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = *(long *)(param_1 + 0x908);
                *(undefined8 *)(param_1 + 0x908) = 0;
                *(long ********)(param_1 + 0x900) = ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar38 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x910,puVar38);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                pppppplVar52 = pppppplStack_240;
                if (pppppplStack_240 != (long ******)0x0) {
                  pppppplVar68 = pppppplStack_240 + 1;
                  do {
                    ppppplVar34 = *pppppplVar68;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(pppppplVar68,0x10);
                    if (bVar22) {
                      *pppppplVar68 = (long *****)((long)ppppplVar34 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (ppppplVar34 == (long *****)0x0) {
                    (*(code *)(*pppppplStack_240)[2])(pppppplStack_240);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar52);
                  }
                }
                ppppplStack_258 = *(long ******)(param_1 + 0x730);
                plStack_250 = *(long **)(param_1 + 0x738);
                ppppplVar34 = ppppplStack_258;
                if (plStack_250 != (long *)0x0) {
                  plVar70 = plStack_250 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = *plVar70 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  ppppplVar34 = (long *****)*plVar8;
                }
                (*(code *)(*ppppplVar34)[7])();
                FUN_10a908a88(&uStack_c0,&ppppplStack_258,ppppplVar34,puVar38);
                if (*(char *)(param_1 + 0x937) < '\0') {
                  __ZdlPv(*(undefined8 *)(param_1 + 0x920));
                }
                ppppppplVar94 = ppppppplStack_a8;
                *(ulong *)(param_1 + 0x928) = CONCAT26(uStack_b2,uStack_b8);
                *(undefined8 *)(param_1 + 0x920) =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                *(long ********)(param_1 + 0x930) = ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = *(long *)(param_1 + 0x940);
                *(undefined8 *)(param_1 + 0x940) = 0;
                *(long ********)(param_1 + 0x938) = ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar38 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x948,puVar38);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                plVar70 = plStack_250;
                if (plStack_250 != (long *)0x0) {
                  plVar11 = plStack_250 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plStack_250 + 0x10))(plStack_250);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                  }
                }
                plStack_268 = *(long **)(param_1 + 0x740);
                plStack_260 = *(long **)(param_1 + 0x748);
                plVar70 = plStack_268;
                if (plStack_260 != (long *)0x0) {
                  plVar70 = plStack_260 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = *plVar70 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  plVar70 = (long *)*plVar9;
                }
                (**(code **)(*plVar70 + 0x38))();
                FUN_10a908b80(&uStack_c0,&plStack_268,plVar70,puVar38);
                if (*(char *)(param_1 + 0x88f) < '\0') {
                  __ZdlPv(*(undefined8 *)(param_1 + 0x878));
                }
                ppppppplVar94 = ppppppplStack_a8;
                *(ulong *)(param_1 + 0x880) = CONCAT26(uStack_b2,uStack_b8);
                *(undefined8 *)(param_1 + 0x878) =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                *(long ********)(param_1 + 0x888) = ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = *(long *)(param_1 + 0x898);
                *(undefined8 *)(param_1 + 0x898) = 0;
                *(long ********)(param_1 + 0x890) = ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                puVar38 = &stack0xffffffffffffff68;
                func_0x00010a328268(param_1 + 0x8a0,puVar38);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                plVar70 = plStack_260;
                if (plStack_260 != (long *)0x0) {
                  plVar11 = plStack_260 + 1;
                  do {
                    lVar53 = *plVar11;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar22) {
                      *plVar11 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plStack_260 + 0x10))(plStack_260);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                  }
                }
                plStack_278 = *(long **)(param_1 + 0x750);
                ppppplStack_270 = *(long ******)(param_1 + 0x758);
                plVar70 = plStack_278;
                if (ppppplStack_270 != (long *****)0x0) {
                  ppppplVar34 = ppppplStack_270 + 1;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppplVar34,0x10);
                    if (bVar22) {
                      *ppppplVar34 = (long ****)((long)*ppppplVar34 + 1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  plVar70 = *(long **)(param_1 + 0x750);
                }
                (**(code **)(*plVar70 + 0x38))();
                FUN_10a908b80(&uStack_c0,&plStack_278,plVar70,puVar38);
                if (*(char *)(param_1 + 0x8c7) < '\0') {
                  __ZdlPv(*puVar93);
                }
                ppppppplVar94 = ppppppplStack_a8;
                puVar93[1] = CONCAT26(uStack_b2,uStack_b8);
                *puVar93 = CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0))
                ;
                puVar93[2] = ppppppplStack_b0;
                ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff);
                uStack_c0._0_1_ = 0;
                ppppppplStack_a8 = (long *******)0x0;
                lVar53 = *(long *)(param_1 + 0x8d0);
                *(undefined8 *)(param_1 + 0x8d0) = 0;
                *(long ********)(param_1 + 0x8c8) = ppppppplVar94;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                func_0x00010a328268(param_1 + 0x8d8,&stack0xffffffffffffff68);
                if (plVar67 != (long *)0x0) {
                  plVar70 = plVar67 + 1;
                  do {
                    lVar53 = *plVar70;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar70,0x10);
                    if (bVar22) {
                      *plVar70 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar67 + 0x10))(plVar67);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar67);
                  }
                }
                ppppplVar34 = ppppplStack_270;
                if (ppppplStack_270 != (long *****)0x0) {
                  ppppplVar35 = ppppplStack_270 + 1;
                  do {
                    pppplVar55 = *ppppplVar35;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppplVar35,0x10);
                    if (bVar22) {
                      *ppppplVar35 = (long ****)((long)pppplVar55 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (pppplVar55 == (long ****)0x0) {
                    (*(code *)(*ppppplStack_270)[2])(ppppplStack_270);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar34);
                  }
                }
                if (uStack_108 != (long *******)0x0) {
                  ppppppplVar94 = uStack_108 + 2;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                    if (bVar22) {
                      *ppppppplVar94 = (long ******)((long)*ppppppplVar94 + 1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                }
                lVar53 = *(long *)(param_1 + 0x560);
                *(long ********)(param_1 + 0x560) = uStack_108;
                *(long ********)(param_1 + 0x558) = ppppppplStack_110;
                if (lVar53 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                func_0x00010a0d77bc(&uStack_c0,lVar65);
                lVar53 = param_1 + 0x4f8;
                ppppppplStack_128 = ppppppplVar60;
                FUN_10a91a478(lVar53,ppppppplVar60,&ppppppplStack_128);
                plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                if (plVar70 != (long *)0x0) {
                  plVar67 = plVar70 + 2;
                  do {
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                    if (bVar22) {
                      *plVar67 = *plVar67 + 1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                }
                lVar65 = *(long *)(lVar53 + 0x40);
                *(ulong *)(lVar53 + 0x40) = CONCAT26(uStack_b2,uStack_b8);
                *(ulong *)(lVar53 + 0x38) =
                     CONCAT26(uStack_c0._6_2_,CONCAT51(uStack_c0._1_5_,(undefined1)uStack_c0));
                if (lVar65 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv(lVar65);
                  plVar70 = (long *)CONCAT26(uStack_b2,uStack_b8);
                }
                if (plVar70 != (long *)0x0) {
                  plVar67 = plVar70 + 1;
                  do {
                    lVar53 = *plVar67;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar67,0x10);
                    if (bVar22) {
                      *plVar67 = lVar53 + -1;
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (lVar53 == 0) {
                    (**(code **)(*plVar70 + 0x10))(plVar70);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar70);
                  }
                }
                ppppppplVar60 = uStack_108;
                if (uStack_108 != (long *******)0x0) {
                  ppppppplVar94 = uStack_108 + 1;
                  do {
                    pppppplVar52 = *ppppppplVar94;
                    cVar20 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                    if (bVar22) {
                      *ppppppplVar94 = (long ******)((long)pppppplVar52 + -1);
                      cVar20 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar20 != '\0');
                  if (pppppplVar52 == (long ******)0x0) {
                    (*(code *)(*uStack_108)[2])(uStack_108);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
                  }
                }
              }
              ppppplVar34 = ppppplStack_f0;
              if (ppppplStack_f0 != (long *****)0x0) {
                ppppplVar35 = ppppplStack_f0 + 1;
                do {
                  pppplVar55 = *ppppplVar35;
                  cVar20 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(ppppplVar35,0x10);
                  if (bVar22) {
                    *ppppplVar35 = (long ****)((long)pppplVar55 + -1);
                    cVar20 = ExclusiveMonitorsStatus();
                  }
                } while (cVar20 != '\0');
                if (pppplVar55 == (long ****)0x0) {
                  (*(code *)(*ppppplStack_f0)[2])(ppppplStack_f0);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar34);
                }
              }
            }
            ppppppplVar60 = ppppppplStack_e0;
            if (ppppppplStack_e0 != (long *******)0x0) {
              ppppppplVar94 = ppppppplStack_e0 + 1;
              do {
                pppppplVar52 = *ppppppplVar94;
                cVar20 = '\x01';
                bVar22 = (bool)ExclusiveMonitorPass(ppppppplVar94,0x10);
                if (bVar22) {
                  *ppppppplVar94 = (long ******)((long)pppppplVar52 + -1);
                  cVar20 = ExclusiveMonitorsStatus();
                }
              } while (cVar20 != '\0');
              if (pppppplVar52 == (long ******)0x0) {
                (*(code *)(*ppppppplStack_e0)[2])(ppppppplStack_e0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar60);
              }
            }
          }
          ppppppplVar60 = (long *******)ppppppplVar49[1];
          ppppppplVar94 = ppppppplVar49;
          if ((long *******)ppppppplVar49[1] == (long *******)0x0) {
            do {
              ppppppplVar49 = (long *******)ppppppplVar94[2];
              bVar22 = (long *******)*ppppppplVar49 != ppppppplVar94;
              ppppppplVar94 = ppppppplVar49;
            } while (bVar22);
          }
          else {
            do {
              ppppppplVar49 = ppppppplVar60;
              ppppppplVar60 = (long *******)*ppppppplVar49;
            } while ((long *******)*ppppppplVar49 != (long *******)0x0);
          }
        } while (ppppppplVar49 != &pppppplStack_d0);
      }
      func_0x000107c27bf0(&ppppppplStack_d8,pppppplStack_d0);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar47) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a0edfc4(&uStack_c0);
LAB_10a907c3c:
                    /* WARNING: Does not return */
  pcVar21 = (code *)SoftwareBreakpoint(1,0x10a907c40);
  (*pcVar21)();
code_r0x00010a9015a4:
  puVar29 = puVar29 + 2;
  goto LAB_10a90158c;
}



/* Entry: 10a903514; end: 10a90358f;  */

void FUN_10a903514(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x4f0) != 0) {
    FUN_10a907f80(param_1,0);
    FUN_10a9085f8(param_1);
    plVar5 = *(long **)(param_1 + 0x4f8);
    *(undefined8 *)(param_1 + 0x4f8) = 0;
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a903590; end: 10a903597;  */

void FUN_10a903590(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x488) != 0) {
    FUN_10a907f80(param_1 + -0x68,0);
    FUN_10a9085f8(param_1 + -0x68);
    plVar5 = *(long **)(param_1 + 0x490);
    *(undefined8 *)(param_1 + 0x490) = 0;
    *(undefined8 *)(param_1 + 0x488) = 0;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a903598; end: 10a9036cf;  */

void FUN_10a903598(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  FUN_10a42212c();
  if (param_2[9] != 0) {
    lVar6 = param_2[9] << 3;
    do {
      param_2 = param_2 + 1;
      if ((undefined **)*param_2 == &PTR_DAT_110bc32d8) {
        plVar7 = *(long **)(param_1 + 0x5a8);
        if (plVar7 == (long *)(param_1 + 0x5b0)) {
          return;
        }
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x168) + 0x130);
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x168) + 0x138);
        do {
          plVar5 = (long *)plVar7[8];
          if ((plVar5 != (long *)0x0) &&
             (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)) {
            if (plVar7[7] != 0) {
              FUN_10a3e41f0(plVar7[7] + 0x130,uVar1,uVar2);
            }
            plVar8 = plVar5 + 1;
            do {
              lVar6 = *plVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *plVar8 = lVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar6 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
          plVar5 = (long *)plVar7[1];
          plVar8 = plVar7;
          if ((long *)plVar7[1] == (long *)0x0) {
            do {
              plVar7 = (long *)plVar8[2];
              bVar4 = (long *)*plVar7 != plVar8;
              plVar8 = plVar7;
            } while (bVar4);
          }
          else {
            do {
              plVar7 = plVar5;
              plVar5 = (long *)*plVar7;
            } while ((long *)*plVar7 != (long *)0x0);
          }
        } while (plVar7 != (long *)(param_1 + 0x5b0));
        return;
      }
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  return;
}


