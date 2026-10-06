/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001f03f8; end: 001f042b;  */

void FUN_001f03f8(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_001f0d30(uVar1,param_2[1],0xaf66b0);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 001f042c; end: 001f04e3;  */

void FUN_001f042c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar5 = 0x6574496863746566;
  uVar2 = 0xea0000000000736d;
  if (bVar3 != 3) {
    uVar5 = 0xd000000000000013;
    uVar2 = 0x80000000008bdf20;
  }
  uVar1 = 0x646565466e497369;
  if (bVar3 != 2) {
    uVar1 = uVar5;
  }
  uVar5 = 0xe800000000000000;
  if (bVar3 != 2) {
    uVar5 = uVar2;
  }
  uVar2 = 0xe900000000000064;
  uVar4 = 0x6565466f54646461;
  if (bVar3 != 0) {
    uVar2 = 0xee00646565466d6f;
    uVar4 = 0x724665766f6d6572;
  }
  if (bVar3 < 2) {
    uVar5 = uVar2;
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  param_1[1] = uVar5;
  return;
}



/* Entry: 001f04e4; end: 001f0a63;  */

void FUN_001f04e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar5 = 0x6574496863746566;
  uVar2 = 0xea0000000000736d;
  if (bVar3 != 3) {
    uVar5 = 0xd000000000000013;
    uVar2 = 0x80000000008bdf20;
  }
  uVar1 = 0x646565466e497369;
  if (bVar3 != 2) {
    uVar1 = uVar5;
  }
  uVar5 = 0xe800000000000000;
  if (bVar3 != 2) {
    uVar5 = uVar2;
  }
  uVar2 = 0xe900000000000064;
  uVar4 = 0x6565466f54646461;
  if (bVar3 != 0) {
    uVar2 = 0xee00646565466d6f;
    uVar4 = 0x724665766f6d6572;
  }
  if (bVar3 < 2) {
    uVar5 = uVar2;
    uVar1 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f0a64; end: 001f0a7b;  */

void FUN_001f0a64(void)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  ulong *unaff_x20;
  
  uVar4 = *unaff_x20;
  bVar2 = (byte)unaff_x20[1];
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      lVar3 = 0xaf4058;
      func_0x000115a8(0xaf4058,&UNK_007e5230);
      _swift_initStackObject();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      *(ulong *)(lVar3 + 0x20) = uVar4;
      FUN_001da650();
      _swift_setDeallocating(lVar3);
      return;
    }
    if (bVar2 != 1) goto LAB_001ef628;
    uVar1 = (uint)uVar4 & 0xff;
    if (uVar1 == 1 || (uVar4 & 0xff) == 0) {
      if ((uVar4 & 0xff) == 0) {
        func_0x000115a8(0xaf4058,&UNK_007e5230);
      }
      else {
        func_0x000115a8(0xaf4058,&UNK_007e5230);
      }
    }
    else if (uVar1 == 2) {
      func_0x000115a8(0xaf4058,&UNK_007e5230);
    }
    else {
      if (uVar1 != 3) {
        return;
      }
      func_0x000115a8(0xaf4058,&UNK_007e5230);
    }
  }
  else if (bVar2 == 2) {
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
  else if (bVar2 == 3) {
    switch(uVar4) {
    case 4:
      func_0x000115a8(0xaf4058,&UNK_007e5230);
      break;
    case 5:
      func_0x000115a8(0xaf4058,&UNK_007e5230);
      break;
    case 6:
      func_0x000115a8(0xaf4058,&UNK_007e5230);
      break;
    case 7:
      func_0x000115a8(0xaf4058,&UNK_007e5230);
      break;
    case 8:
    case 10:
    case 0xd:
      goto LAB_001ef694;
    case 9:
      func_0x000115a8(0xaf4058,&UNK_007e5230);
      break;
    case 0xb:
      func_0x000115a8(0xaf4058,&UNK_007e5230);
      break;
    case 0xc:
      func_0x000115a8(0xaf4058,&UNK_007e5230);
      break;
    default:
      goto LAB_001ef628;
    }
  }
  else {
LAB_001ef628:
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
  _swift_initStaticObject();
  FUN_001da650();
LAB_001ef694:
  return;
}



/* Entry: 001f0a7c; end: 001f0ac7;  */

void FUN_001f0a7c(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x001f07a4(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f0ac8; end: 001f0ad3;  */

void FUN_001f0ac8(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  bVar2 = (byte)unaff_x20[1];
  uVar10 = (uint)uVar3;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      __ss6HasherV8_combineyySuF(4);
      __ss6HasherV8_combineyySuF(uVar3);
      return;
    }
    __ss6HasherV8_combineyySuF(5);
    uVar1 = uVar10 & 0xff;
    uVar4 = 0xeb00000000646565;
    uVar5 = 0x4673646e65697266;
    uVar7 = 0xed00006465654674;
    uVar8 = 0x6867696c746f7073;
    if (uVar1 != 3) {
      uVar7 = 0xe700000000000000;
      uVar8 = 0x6e776f6e6b6e75;
    }
    uVar6 = 0x79726f7473;
    if (uVar1 != 2) {
      uVar6 = uVar8;
    }
    uVar8 = 0xe500000000000000;
    if (uVar1 != 2) {
      uVar8 = uVar7;
    }
    uVar7 = 0xe300000000000000;
    uVar9 = 0x70616d;
  }
  else {
    if (bVar2 != 2) {
                    /* WARNING: Could not recover jumptable at 0x001f0968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_007e79b8)[uVar3] * 4 + 0x1f096c))();
      return;
    }
    __ss6HasherV8_combineyySuF(10);
    uVar1 = uVar10 & 0xff;
    uVar4 = 0xe900000000000064;
    uVar5 = 0x6565466f54646461;
    uVar8 = 0x6574496863746566;
    uVar7 = 0xea0000000000736d;
    if (uVar1 != 3) {
      uVar8 = 0xd000000000000013;
      uVar7 = 0x80000000008bdf20;
    }
    uVar6 = 0x646565466e497369;
    if (uVar1 != 2) {
      uVar6 = uVar8;
    }
    uVar8 = 0xe800000000000000;
    if (uVar1 != 2) {
      uVar8 = uVar7;
    }
    uVar7 = 0xee00646565466d6f;
    uVar9 = 0x724665766f6d6572;
  }
  if ((uVar3 & 0xff) != 0) {
    uVar4 = uVar7;
    uVar5 = uVar9;
  }
  if ((uVar10 & 0xff) < 2) {
    uVar8 = uVar4;
    uVar6 = uVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,uVar8);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar8);
  return;
}



/* Entry: 001f0ad4; end: 001f0b1b;  */

void FUN_001f0ad4(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x001f07a4(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f0b1c; end: 001f0d2f;  */

ulong FUN_001f0b1c(ulong *param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  cVar1 = *(char *)(param_2 + 1);
  bVar2 = (byte)param_1[1];
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      if (cVar1 == '\0') {
        return (ulong)((uint)uVar3 == (uint)*param_2);
      }
    }
    else if (cVar1 == '\x01') goto LAB_001f0b7c;
  }
  else {
    if (bVar2 != 2) {
                    /* WARNING: Could not recover jumptable at 0x001f0ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_007e79c6)[uVar3] * 4 + 0x1f0ba4))();
      return uVar3;
    }
    if (cVar1 == '\x02') {
LAB_001f0b7c:
      return (ulong)((((uint)*param_2 ^ (uint)uVar3) & 0xff) == 0);
    }
  }
  return 0;
}



/* Entry: 001f0d30; end: 001f0d9b;  */

ulong FUN_001f0d30(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 001f0d9c; end: 001f0d9f;  */

void FUN_001f0d9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e79d8;
  _swift_getWitnessTable(&UNK_007e79d8,&UNK_009bae58);
  puRam0000000000af6568 = puVar1;
  return;
}



/* Entry: 001f0da0; end: 001f0ddf;  */

void FUN_001f0da0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e79d8;
  _swift_getWitnessTable(&UNK_007e79d8,&UNK_009bae58);
  puRam0000000000af6568 = puVar1;
  return;
}



/* Entry: 001f0de0; end: 001f0de3;  */

void FUN_001f0de0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6570 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7a78;
  _swift_getWitnessTable(&UNK_007e7a78,&UNK_009baee8);
  puRam0000000000af6570 = puVar1;
  return;
}



/* Entry: 001f0de4; end: 001f0e23;  */

void FUN_001f0de4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6570 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7a78;
  _swift_getWitnessTable(&UNK_007e7a78,&UNK_009baee8);
  puRam0000000000af6570 = puVar1;
  return;
}



/* Entry: 001f0e24; end: 001f0e27;  */

void FUN_001f0e24(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6578 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7b18;
  _swift_getWitnessTable(&UNK_007e7b18,&UNK_009baf78);
  puRam0000000000af6578 = puVar1;
  return;
}



/* Entry: 001f0e28; end: 001f0e67;  */

void FUN_001f0e28(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6578 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7b18;
  _swift_getWitnessTable(&UNK_007e7b18,&UNK_009baf78);
  puRam0000000000af6578 = puVar1;
  return;
}



/* Entry: 001f0e68; end: 001f0e6b;  */

void FUN_001f0e68(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6580 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7bb8;
  _swift_getWitnessTable(&UNK_007e7bb8,&UNK_009bb008);
  puRam0000000000af6580 = puVar1;
  return;
}



/* Entry: 001f0e6c; end: 001f0eab;  */

void FUN_001f0e6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6580 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7bb8;
  _swift_getWitnessTable(&UNK_007e7bb8,&UNK_009bb008);
  puRam0000000000af6580 = puVar1;
  return;
}



/* Entry: 001f0eac; end: 001f0eaf;  */

void FUN_001f0eac(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7c58;
  _swift_getWitnessTable(&UNK_007e7c58,&UNK_009bb098);
  puRam0000000000af6588 = puVar1;
  return;
}



/* Entry: 001f0eb0; end: 001f0eef;  */

void FUN_001f0eb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7c58;
  _swift_getWitnessTable(&UNK_007e7c58,&UNK_009bb098);
  puRam0000000000af6588 = puVar1;
  return;
}



/* Entry: 001f0ef0; end: 001f0ef3;  */

void FUN_001f0ef0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6590 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7cf8;
  _swift_getWitnessTable(&UNK_007e7cf8,&UNK_009bb128);
  puRam0000000000af6590 = puVar1;
  return;
}



/* Entry: 001f0ef4; end: 001f0f33;  */

void FUN_001f0ef4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6590 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7cf8;
  _swift_getWitnessTable(&UNK_007e7cf8,&UNK_009bb128);
  puRam0000000000af6590 = puVar1;
  return;
}



/* Entry: 001f0f34; end: 001f0f57;  */

void FUN_001f0f34(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001f0f58();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001f0f58; end: 001f0f97;  */

void FUN_001f0f58(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6598 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7db4;
  _swift_getWitnessTable(&UNK_007e7db4,&UNK_009bb1b8);
  puRam0000000000af6598 = puVar1;
  return;
}



/* Entry: 001f0f98; end: 001f0f9b;  */

void FUN_001f0f98(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af65a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7df4;
  _swift_getWitnessTable(&UNK_007e7df4,&UNK_009bb1b8);
  puRam0000000000af65a0 = puVar1;
  return;
}



/* Entry: 001f0f9c; end: 001f0fdb;  */

void FUN_001f0f9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af65a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7df4;
  _swift_getWitnessTable(&UNK_007e7df4,&UNK_009bb1b8);
  puRam0000000000af65a0 = puVar1;
  return;
}



/* Entry: 001f0fdc; end: 001f13cf;  */

uint FUN_001f0fdc(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 001f13d0; end: 001f146f;  */

void FUN_001f13d0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f1470; end: 001f1473;  */

void FUN_001f1470(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af67e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7f50;
  _swift_getWitnessTable(&UNK_007e7f50,&UNK_009bb2c8);
  puRam0000000000af67e8 = puVar1;
  return;
}



/* Entry: 001f1474; end: 001f14b3;  */

void FUN_001f1474(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af67e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7f50;
  _swift_getWitnessTable(&UNK_007e7f50,&UNK_009bb2c8);
  puRam0000000000af67e8 = puVar1;
  return;
}



/* Entry: 001f14b4; end: 001f14d7;  */

undefined8 FUN_001f14b4(void)

{
  return 0;
}



/* Entry: 001f14d8; end: 001f14fb;  */

void FUN_001f14d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001f14fc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001f14fc; end: 001f153b;  */

void FUN_001f14fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af67f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7f78;
  _swift_getWitnessTable(&UNK_007e7f78,&UNK_009bb2c8);
  puRam0000000000af67f0 = puVar1;
  return;
}



/* Entry: 001f153c; end: 001f1737;  */

uint FUN_001f153c(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 001f1738; end: 001f17e3;  */

void FUN_001f1738(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f17e4; end: 001f1813;  */

undefined * FUN_001f17e4(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined1 auStack_a8 [72];
  
  lVar3 = 0xaf4058;
  func_0x000115a8(0xaf4058,&UNK_007e5230);
  _swift_initStaticObject();
  puVar10 = *(undefined **)(lVar3 + 0x10);
  puVar2 = PTR___swiftEmptySetSingleton_0099b900;
  if (puVar10 != (undefined *)0x0) {
    func_0x000115a8(0xaf40c8,&UNK_007e51c0);
    puVar2 = puVar10;
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    puVar12 = (undefined *)0x0;
    do {
      uVar11 = *(ulong *)(lVar3 + 0x20 + (long)puVar12 * 8);
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(puVar2 + 0x28));
      uVar4 = uVar11;
      __ss6HasherV8_combineyySuF();
      __ss6HasherV9_finalizeSiyF();
      uVar9 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
      uVar6 = uVar4 >> 6;
      uVar7 = *(ulong *)(puVar2 + uVar6 * 8 + 0x38);
      uVar8 = 1L << (uVar4 & 0x3f);
      lVar5 = *(long *)(puVar2 + 0x30);
      if ((uVar8 & uVar7) != 0) {
        do {
          if ((int)*(undefined8 *)(lVar5 + uVar4 * 8) == (int)uVar11) goto LAB_001da6d4;
          uVar4 = uVar4 + 1 & ~uVar9;
          uVar6 = uVar4 >> 6;
          uVar7 = *(ulong *)(puVar2 + uVar6 * 8 + 0x38);
          uVar8 = 1L << (uVar4 & 0x3f);
        } while ((uVar8 & uVar7) != 0);
      }
      *(ulong *)(puVar2 + uVar6 * 8 + 0x38) = uVar8 | uVar7;
      *(ulong *)(lVar5 + uVar4 * 8) = uVar11;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1da788);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_001da6d4:
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar10);
  }
  return puVar2;
}



/* Entry: 001f1814; end: 001f181f;  */

undefined1  [16] FUN_001f1814(void)

{
  ulong uVar1;
  undefined8 uVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  bVar3 = *unaff_x20;
  if (bVar3 < 3) {
    uVar7 = 0x80000000008bc150;
    uVar5 = 0xd000000000000011;
    if (bVar3 != 1) {
      uVar7 = 0xe900000000000049;
      uVar5 = 0x5577656976657250;
    }
    uVar2 = 0xeb00000000657661;
    uVar6 = 0x5377656976657250;
    if (bVar3 != 0) {
      uVar2 = uVar7;
      uVar6 = uVar5;
    }
    auVar9._8_8_ = uVar2;
    auVar9._0_8_ = uVar6;
    return auVar9;
  }
  uVar1 = 0x80000000008bc0f0;
  uVar7 = 0xd000000000000017;
  if (bVar3 != 5) {
    uVar1 = 0xeb00000000646e65;
    uVar7 = 0x5377656976657250;
  }
  pcVar4 = "PreviewRecoveryPersistence";
  uVar5 = 0xd000000000000016;
  if (bVar3 != 3) {
    pcVar4 = "LegacyPlayerInteraction";
    uVar5 = 0xd00000000000001a;
  }
  if (bVar3 < 5) {
    uVar1 = (ulong)pcVar4 | 0x8000000000000000;
    uVar7 = uVar5;
  }
  auVar8._8_8_ = uVar1;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 001f1820; end: 001f185f;  */

void FUN_001f1820(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af67f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8008;
  _swift_getWitnessTable(&UNK_007e8008,&UNK_009bb3b8);
  puRam0000000000af67f8 = puVar1;
  return;
}



/* Entry: 001f1860; end: 001f1883;  */

void FUN_001f1860(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001f1884();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001f1884; end: 001f18c3;  */

void FUN_001f1884(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8030;
  _swift_getWitnessTable(&UNK_007e8030,&UNK_009bb3b8);
  puRam0000000000af6800 = puVar1;
  return;
}



/* Entry: 001f18c4; end: 001f1af3;  */

int FUN_001f18c4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001f1940;
        goto LAB_001f1924;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001f1924:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_001f1940:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001f1af4; end: 001f1b9f;  */

void FUN_001f1af4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f1ba0; end: 001f1beb;  */

undefined8 FUN_001f1ba0(void)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  if (*unaff_x20 == '\x01') {
    uVar1 = 0xaf4058;
    func_0x000115a8(0xaf4058,&UNK_007e5230);
    _swift_initStaticObject();
    FUN_001da650();
    return uVar1;
  }
  return 0;
}



/* Entry: 001f1bec; end: 001f1bf7;  */

undefined1  [16] FUN_001f1bec(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  
  bVar3 = *unaff_x20;
  pcVar4 = "CalendarFetchParticipants";
  uVar6 = 0xd000000000000010;
  if (bVar3 != 3) {
    pcVar4 = "SnapchattersDependencyMonitor";
    uVar6 = 0xd000000000000019;
  }
  pcVar5 = "CalendarDeeplink";
  uVar7 = 0xd000000000000014;
  if (bVar3 != 2) {
    pcVar5 = pcVar4;
    uVar7 = uVar6;
  }
  uVar1 = 0xee00656761506472;
  uVar6 = 0x614365646f435251;
  if (bVar3 != 0) {
    uVar1 = 0x80000000008bbee0;
    uVar6 = 0xd000000000000018;
  }
  uVar2 = (ulong)pcVar5 | 0x8000000000000000;
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar7 = uVar6;
  }
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 001f1bf8; end: 001f1c37;  */

void FUN_001f1bf8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6888 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e80a8;
  _swift_getWitnessTable(&UNK_007e80a8,&UNK_009bb4a8);
  puRam0000000000af6888 = puVar1;
  return;
}



/* Entry: 001f1c38; end: 001f1c5b;  */

void FUN_001f1c38(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001f1c5c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001f1c5c; end: 001f1c9b;  */

void FUN_001f1c5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e80d0;
  _swift_getWitnessTable(&UNK_007e80d0,&UNK_009bb4a8);
  puRam0000000000af6890 = puVar1;
  return;
}



/* Entry: 001f1c9c; end: 001f1fa7;  */

int FUN_001f1c9c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001f1d18;
        goto LAB_001f1cfc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001f1cfc:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_001f1d18:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001f1fa8; end: 001f2053;  */

void FUN_001f1fa8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f2054; end: 001f209f;  */

undefined8 FUN_001f2054(void)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  if (*unaff_x20 == '\x06') {
    uVar1 = 0xaf4058;
    func_0x000115a8(0xaf4058,&UNK_007e5230);
    _swift_initStaticObject();
    FUN_001da650();
    return uVar1;
  }
  return 0;
}



/* Entry: 001f20a0; end: 001f20ab;  */

/* WARNING: Removing unreachable block (ram,0x001f2214) */
/* WARNING: Removing unreachable block (ram,0x001f2250) */
/* WARNING: Removing unreachable block (ram,0x001f227c) */
/* WARNING: Removing unreachable block (ram,0x001f2258) */
/* WARNING: Removing unreachable block (ram,0x001f221c) */
/* WARNING: Removing unreachable block (ram,0x001f225c) */
/* WARNING: Removing unreachable block (ram,0x001f2228) */

undefined1  [16] FUN_001f20a0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  char *pcVar3;
  byte bVar4;
  bool in_ZR;
  undefined1 in_CY;
  uint uVar5;
  char *pcVar7;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  int iVar13;
  char *unaff_x19;
  byte *unaff_x20;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_70 [80];
  uint uVar6;
  char *pcVar8;
  
  bVar2 = *unaff_x20;
  pcVar8 = (char *)(ulong)bVar2;
  uVar6 = (uint)bVar2;
  uVar5 = (uint)bVar2;
  uVar10 = 0xed00007265646e69;
  pcVar7 = (char *)0x6d65527070416e49;
  iVar13 = 0x7e8150;
  pcVar3 = pcVar7;
  uVar1 = (uint)bVar2;
  bVar4 = (&UNK_007e8150)[(long)pcVar8] * '\x04' + 0x40;
  switch(bVar2) {
  default:
    pcVar8 = "DiscoverFeedNotificationProcessors";
  case 0x28:
  case 0x36:
  case 0x76:
  case 0x92:
  case 0xd0:
  case 0xde:
    pcVar8 = pcVar8 + 0x530;
    goto code_r0x001f1e48;
  case 1:
  case 0x19:
  case 0x2d:
  case 0x3c:
  case 0x41:
  case 0x55:
  case 0x5d:
  case 0x65:
  case 0x68:
  case 0x6d:
  case 0x81:
  case 0xc1:
  case 0xd5:
  case 0xe9:
  case 0xfd:
    pcVar7 = "";
  case 0x2c:
    pcVar7 = (char *)((ulong)pcVar7 & 0xffffffffffff | 0xd000000000000000);
    goto code_r0x001f1f18;
  case 2:
    uVar10 = 0x80000000008bc4d0;
    pcVar8 = "";
  case 0x40:
    auVar18._0_8_ = (ulong)pcVar8 | 0xd000000000000008;
    auVar18._8_8_ = uVar10;
    return auVar18;
  case 3:
    pcVar8 = "DiscoverFeedNotificationProcessors";
  case 0x80:
    pcVar8 = pcVar8 + 0x4c0;
code_r0x001f1e94:
    uVar10 = (ulong)(pcVar8 + -0x20) | 0x8000000000000000;
    pcVar7 = (char *)0xd000000000000022;
code_r0x001f1ea8:
    auVar16._8_8_ = uVar10;
    auVar16._0_8_ = pcVar7;
    return auVar16;
  case 4:
    auVar20._8_8_ = 0x80000000008bc470;
    auVar20._0_8_ = 0xd000000000000021;
    return auVar20;
  case 5:
    goto code_r0x001f1ea8;
  case 6:
  case 0x18:
  case 0xa0:
    auVar21._8_8_ = 0x80000000008bc450;
    auVar21._0_8_ = 0xd00000000000001c;
    return auVar21;
  case 7:
    uVar10 = 0x80000000008bc430;
    pcVar7 = (char *)0xd00000000000001e;
  case 0x89:
    auVar19._8_8_ = uVar10;
    auVar19._0_8_ = pcVar7;
    return auVar19;
  case 8:
    pcVar7 = (char *)0xd000000000000011;
  case 0xaa:
  case 0xec:
    pcVar8 = "TokenRegistration";
    break;
  case 9:
    pcVar8 = "PendingNotificationRedirect";
  case 0x1a:
  case 0x2e:
  case 0x42:
  case 0x54:
  case 0x56:
  case 0x5c:
  case 0x5e:
  case 100:
  case 0x66:
  case 0x6c:
  case 0x6e:
  case 0x82:
  case 0x8a:
  case 0xc2:
  case 0xd6:
  case 0xea:
  case 0xfe:
    uVar10 = (ulong)(pcVar8 + -0x20) | 0x8000000000000000;
    pcVar8 = "";
    goto code_r0x001f1ec0;
  case 10:
    pcVar7 = (char *)0xd000000000000011;
    pcVar8 = "LoggedOutClearing";
    break;
  case 0xb:
  case 0x94:
    uVar10 = 0x80000000008bc3a0;
  case 0xe4:
    auVar15._8_8_ = uVar10;
    auVar15._0_8_ = 0xd000000000000020;
    return auVar15;
  case 0xc:
    pcVar8 = "DiscoverFeedNotificationProcessors";
  case 0x30:
    pcVar8 = pcVar8 + 0x390;
    goto code_r0x001f1e94;
  case 0x1c:
  case 0x50:
  case 0x90:
  case 0xf8:
    goto code_r0x001f1e50;
  case 0x1d:
    goto code_r0x001f2208;
  case 0x1e:
  case 0x46:
  case 0x86:
  case 0xc6:
  case 0xee:
    goto code_r0x001f1e54;
  case 0x26:
  case 0x4e:
  case 0xce:
  case 0xf6:
    goto code_r0x001f1e4c;
  case 0x31:
  case 0x69:
  case 0x71:
    goto code_r0x001f20b8;
  case 0x32:
  case 0x62:
  case 0x6a:
  case 0x72:
  case 0x96:
  case 0xd9:
  case 0xda:
    goto code_r0x001f20c0;
  case 0x33:
  case 0x5b:
  case 99:
  case 0x6b:
  case 0x73:
  case 0x97:
  case 0xdb:
    goto code_r0x001f223c;
  case 0x3d:
  case 0x7d:
  case 0x99:
    uVar5 = 0x65646e75;
  case 0xe5:
    iVar13 = 2;
    if (0xfffeff < uVar5) {
      iVar13 = 4;
    }
    if (uVar5 >> 8 < 0xff) {
      iVar13 = 1;
    }
    uVar5 = uRam6d65527070416e4a;
    if (iVar13 != 4) {
      if (iVar13 == 2) {
        uVar5 = uRam6d65527070416e4a & 0xffff;
        if ((short)uRam6d65527070416e4a != 0) goto LAB_001f21b0;
        goto LAB_001f21cc;
      }
      uVar5 = uRam6d65527070416e4a & 0xff;
    }
    if (uVar5 != 0) {
LAB_001f21b0:
      auVar30._4_4_ = 0;
      auVar30._0_4_ = ((uint)bRam6d65527070416e49 | uVar5 << 8) - 0xc;
      auVar30._8_8_ = 0xed00007265646e69;
      return auVar30;
    }
LAB_001f21cc:
    iVar13 = bRam6d65527070416e49 - 0xd;
    if (bRam6d65527070416e49 < 0xd) {
      iVar13 = -1;
    }
    auVar31._4_4_ = 0;
    auVar31._0_4_ = iVar13 + 1;
    auVar31._8_8_ = 0xed00007265646e69;
    return auVar31;
  case 0x3e:
  case 0x7e:
  case 0x9a:
  case 0xe6:
    goto code_r0x001f1f18;
  case 0x44:
    goto LAB_001f21b0;
  case 0x45:
  case 0x85:
  case 0xc5:
  case 0xed:
    in_CY = 0xf3 < param_3;
    goto code_r0x001f2208;
  case 0x58:
    goto code_r0x001f2044;
  case 0x59:
    goto code_r0x001f1ff4;
  case 0x5a:
    goto code_r0x001f2234;
  case 0x60:
    uRam6d65527070416e4a = (uint)uRam6d65527070416e4a._1_3_ << 8;
    bRam6d65527070416e49 = 0x75;
    auVar33._8_8_ = 0xed00007265646e69;
    auVar33._0_8_ = 0x6d65527070416e49;
    return auVar33;
  case 0x61:
    goto code_r0x001f20b4;
  case 0x70:
  case 0xae:
    goto code_r0x001f1f90;
  case 0x7c:
  case 0xa1:
  case 0xa2:
  case 0xa7:
    goto code_r0x001f2010;
  case 0x84:
    pcVar7 = *(char **)(pcVar8 + 0x8e8);
    goto code_r0x001f20b4;
  case 0x88:
    goto code_r0x001f1ec0;
  case 0x8e:
    goto code_r0x001f1e48;
  case 0x95:
    goto LAB_001f20bc;
  case 0x98:
    auVar29._4_4_ = 0;
    auVar29._0_4_ = bVar2 + 1;
    auVar29._8_8_ = 0xed00007265646e69;
    return auVar29;
  case 0xa3:
    goto code_r0x001f2008;
  case 0xa4:
    goto code_r0x001f1fe4;
  case 0xa5:
    goto code_r0x001f1fc8;
  case 0xa6:
  case 0xab:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case 0xc4:
    bVar2 = *unaff_x20;
    __ss6HasherV5_seedABSi_tcfC((undefined1 *)((long)register0x00000008 + 8));
    unaff_x19 = (char *)(ulong)bVar2;
    goto code_r0x001f2034;
  case 0xa8:
  case 0xfc:
    goto code_r0x001f1fd4;
  case 0xa9:
    goto code_r0x001f1fd0;
  case 0xac:
  case 0xb0:
    goto code_r0x001f200c;
  case 0xad:
    goto code_r0x001f1fe0;
  case 0xaf:
    __ss6HasherV5_seedABSi_tcfC();
    goto code_r0x001f1fc8;
  case 0xb1:
    goto code_r0x001f1ff4;
  case 0xc0:
    if (!in_ZR) {
      return ZEXT816(0xed00007265646e69) << 0x40;
    }
    pcVar7 = (char *)0xaf4058;
  case 0xd8:
    func_0x000115a8(pcVar7,&UNK_007e5230);
    uVar11 = 0xaf68a0;
    _swift_initStaticObject();
    FUN_001da650();
    auVar26._8_8_ = uVar11;
    auVar26._0_8_ = pcVar7;
    return auVar26;
  case 0xd4:
    goto code_r0x001f2034;
  case 0xe8:
    goto code_r0x001f2004;
  }
  goto code_r0x001f1f88;
code_r0x001f1fc8:
  pcVar7 = unaff_x19;
code_r0x001f1fd0:
  __ss6HasherV8_combineyySuF();
code_r0x001f1fd4:
  __ss6HasherV9_finalizeSiyF();
  goto code_r0x001f1fe0;
code_r0x001f20b4:
  if (pcVar7 != (char *)0x0) {
code_r0x001f20b8:
    auVar27._8_8_ = 0xed00007265646e69;
    auVar27._0_8_ = pcVar7;
    return auVar27;
  }
  goto LAB_001f20bc;
code_r0x001f1ff4:
  pcVar3 = (char *)(ulong)*unaff_x20;
  pcVar8 = pcVar7;
code_r0x001f2004:
  pcVar7 = pcVar3;
  __ss6HasherV8_combineyySuF(pcVar8,pcVar7);
code_r0x001f2008:
  goto code_r0x001f200c;
code_r0x001f2208:
  uVar1 = 0;
  if ((bool)in_CY) {
    uVar1 = (uint)bVar2;
  }
  iVar13 = 0x65646d;
  bVar4 = 0x75;
code_r0x001f2234:
  bRam6d65527070416e49 = bVar4;
  uVar6 = uVar1;
  iVar13 = iVar13 + 1;
  goto code_r0x001f223c;
code_r0x001f1e48:
  pcVar8 = pcVar8 + -0x20;
code_r0x001f1e4c:
  uVar10 = (ulong)pcVar8 | 0x8000000000000000;
code_r0x001f1e50:
  pcVar8 = "";
  goto code_r0x001f1e54;
code_r0x001f1f18:
  pcVar8 = "UserNotifications";
code_r0x001f1f88:
  uVar10 = (ulong)(pcVar8 + -0x20) | 0x8000000000000000;
code_r0x001f1f90:
  auVar22._8_8_ = uVar10;
  auVar22._0_8_ = pcVar7;
  return auVar22;
code_r0x001f1ec0:
  auVar17._0_8_ = (ulong)pcVar8 | 0xd000000000000011;
  auVar17._8_8_ = uVar10;
  return auVar17;
LAB_001f20bc:
code_r0x001f20c0:
  puVar9 = &UNK_007e8168;
  puVar12 = &UNK_009bb598;
  _swift_getWitnessTable(&UNK_007e8168,&UNK_009bb598);
  puRam0000000000af68e8 = puVar9;
  auVar28._8_8_ = puVar12;
  auVar28._0_8_ = puVar9;
  return auVar28;
code_r0x001f2034:
  pcVar7 = unaff_x19;
  __ss6HasherV8_combineyySuF(pcVar7);
  __ss6HasherV9_finalizeSiyF();
code_r0x001f2044:
  auVar25._8_8_ = uVar10;
  auVar25._0_8_ = pcVar7;
  return auVar25;
code_r0x001f200c:
code_r0x001f2010:
  auVar24._8_8_ = uVar10;
  auVar24._0_8_ = pcVar7;
  return auVar24;
code_r0x001f1fe0:
code_r0x001f1fe4:
  auVar23._8_8_ = uVar10;
  auVar23._0_8_ = pcVar7;
  return auVar23;
code_r0x001f223c:
  if (1 < uVar6) {
    if (uVar6 != 2) {
      uRam6d65527070416e4a = iVar13;
      auVar36._8_8_ = 0xed00007265646e69;
      auVar36._0_8_ = 0x6d65527070416e49;
      return auVar36;
    }
    uRam6d65527070416e4a = CONCAT22(uRam6d65527070416e4a._2_2_,(short)iVar13);
    auVar34._8_8_ = 0xed00007265646e69;
    auVar34._0_8_ = 0x6d65527070416e49;
    return auVar34;
  }
  if (uVar6 == 0) {
    auVar35._8_8_ = 0xed00007265646e69;
    auVar35._0_8_ = 0x6d65527070416e49;
    return auVar35;
  }
  uRam6d65527070416e4a = CONCAT31(uRam6d65527070416e4a._1_3_,(char)iVar13);
  auVar32._8_8_ = 0xed00007265646e69;
  auVar32._0_8_ = 0x6d65527070416e49;
  return auVar32;
code_r0x001f1e54:
  auVar14._8_8_ = uVar10;
  auVar14._0_8_ = ((ulong)pcVar8 | 0xd000000000000000) + 9;
  return auVar14;
}



/* Entry: 001f20ac; end: 001f20eb;  */

void FUN_001f20ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af68e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8168;
  _swift_getWitnessTable(&UNK_007e8168,&UNK_009bb598);
  puRam0000000000af68e8 = puVar1;
  return;
}



/* Entry: 001f20ec; end: 001f210f;  */

void FUN_001f20ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001f2110();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001f2110; end: 001f214f;  */

void FUN_001f2110(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af68f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8190;
  _swift_getWitnessTable(&UNK_007e8190,&UNK_009bb598);
  puRam0000000000af68f0 = puVar1;
  return;
}



/* Entry: 001f2150; end: 001f22bb;  */

int FUN_001f2150(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf3 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xc) {
      iVar2 = 4;
    }
    if (param_2 + 0xc >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001f21cc;
        goto LAB_001f21b0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001f21b0:
      return ((uint)*param_1 | uVar1 << 8) - 0xc;
    }
  }
LAB_001f21cc:
  iVar2 = *param_1 - 0xd;
  if (*param_1 < 0xd) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001f22bc; end: 001f235b;  */

void FUN_001f22bc(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f235c; end: 001f235f;  */

void FUN_001f235c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af68f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8210;
  _swift_getWitnessTable(&UNK_007e8210,&UNK_009bb688);
  puRam0000000000af68f8 = puVar1;
  return;
}



/* Entry: 001f2360; end: 001f239f;  */

void FUN_001f2360(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af68f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8210;
  _swift_getWitnessTable(&UNK_007e8210,&UNK_009bb688);
  puRam0000000000af68f8 = puVar1;
  return;
}



/* Entry: 001f23a0; end: 001f23b7;  */

undefined8 FUN_001f23a0(void)

{
  return 0;
}



/* Entry: 001f23b8; end: 001f23db;  */

void FUN_001f23b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001f23dc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001f23dc; end: 001f241b;  */

void FUN_001f23dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8238;
  _swift_getWitnessTable(&UNK_007e8238,&UNK_009bb688);
  puRam0000000000af6900 = puVar1;
  return;
}



/* Entry: 001f241c; end: 001f270b;  */

uint FUN_001f241c(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 001f270c; end: 001f27b7;  */

void FUN_001f270c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f27b8; end: 001f27ff;  */

undefined8 FUN_001f27b8(void)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  if (*unaff_x20 != '\0') {
    return 0;
  }
  uVar1 = 0xaf4058;
  func_0x000115a8(0xaf4058,&UNK_007e5230);
  _swift_initStaticObject();
  FUN_001da650();
  return uVar1;
}



/* Entry: 001f2800; end: 001f280b;  */

/* WARNING: Removing unreachable block (ram,0x001f28bc) */
/* WARNING: Removing unreachable block (ram,0x001f28d0) */
/* WARNING: Removing unreachable block (ram,0x001f28dc) */
/* WARNING: Removing unreachable block (ram,0x001f2908) */

undefined1  [16] FUN_001f2800(void)

{
  byte bVar1;
  byte in_ZR;
  undefined1 in_CY;
  undefined **ppuVar2;
  char *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined **unaff_x19;
  byte *unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_70 [80];
  
  bVar1 = *unaff_x20;
  pcVar3 = (char *)(ulong)bVar1;
  uVar6 = (uint)bVar1;
  puVar4 = (undefined *)0xe600000000000000;
  ppuVar2 = (undefined **)0x6c65736e6954;
  puVar7 = &UNK_007e82c0;
  switch(bVar1) {
  default:
    pcVar3 = "DiscoverFeedNotificationProcessors";
  case 0x28:
  case 0x36:
  case 0x76:
  case 0x92:
  case 200:
  case 0xd6:
    pcVar3 = pcVar3 + 0x270;
    goto code_r0x001f2540;
  case 1:
    pcVar3 = "DiscoverFeedNotificationProcessors";
  case 0x70:
  case 0xbc:
    puVar4 = (undefined *)((ulong)(pcVar3 + 0x230) | 0x8000000000000000);
    pcVar3 = "";
code_r0x001f26d8:
    puVar7 = (undefined *)0x10;
code_r0x001f26dc:
    ppuVar2 = (undefined **)((ulong)puVar7 | 0xd000000000000000 | (ulong)pcVar3);
code_r0x001f26e4:
    auVar19._8_8_ = puVar4;
    auVar19._0_8_ = ppuVar2;
    return auVar19;
  case 2:
    goto code_r0x001f2624;
  case 3:
    auVar15._8_8_ = 0xe300000000000000;
    auVar15._0_8_ = 0x534f43;
    return auVar15;
  case 4:
    puVar4 = (undefined *)0xee006449746e756f;
  case 0x1a:
  case 0x2e:
  case 0x42:
  case 0x56:
  case 0x5e:
  case 0x66:
  case 0x6e:
  case 0x82:
  case 0x8a:
  case 0xba:
  case 0xce:
  case 0xe2:
  case 0xf6:
  case 0xfe:
    ppuVar2 = (undefined **)0x4164756f6c43;
code_r0x001f25b8:
    ppuVar2 = (undefined **)((ulong)ppuVar2 | 0x6363000000000000);
code_r0x001f25bc:
    auVar11._8_8_ = puVar4;
    auVar11._0_8_ = ppuVar2;
    return auVar11;
  case 5:
    uVar5 = 0xef736769666e6f43;
    goto code_r0x001f2690;
  case 6:
    puVar4 = (undefined *)0xec0000007265746e;
    ppuVar2 = (undefined **)0x796c696d6146;
  case 0xab:
  case 0xb1:
    ppuVar2 = (undefined **)((ulong)ppuVar2 | 0x6543000000000000);
code_r0x001f26c0:
    auVar18._8_8_ = puVar4;
    auVar18._0_8_ = ppuVar2;
    return auVar18;
  case 7:
    ppuVar2 = (undefined **)0x10;
  case 0xa0:
    auVar16._0_8_ = (ulong)ppuVar2 | 0xd000000000000000;
    auVar16._8_8_ = 0x80000000008bc210;
    return auVar16;
  case 8:
  case 0x59:
    puVar4 = (undefined *)0xe300000000000000;
  case 0xf4:
  case 0xfc:
    auVar20._8_8_ = puVar4;
    auVar20._0_8_ = 0x574353;
    return auVar20;
  case 9:
    puVar4 = (undefined *)0xee00736b61657754;
    ppuVar2 = (undefined **)0x7375696c65646946;
  case 0x89:
    auVar13._8_8_ = puVar4;
    auVar13._0_8_ = ppuVar2;
    return auVar13;
  case 10:
    pcVar3 = "DiscoverFeedNotificationProcessors";
  case 0x84:
  case 0xa9:
    pcVar3 = pcVar3 + 0x210;
code_r0x001f26cc:
    pcVar3 = pcVar3 + -0x20;
code_r0x001f26d0:
    puVar4 = (undefined *)((ulong)pcVar3 | 0x8000000000000000);
    pcVar3 = "";
    goto code_r0x001f26d8;
  case 0xb:
    auVar10._8_8_ = 0x80000000008bc1d0;
    auVar10._0_8_ = 0xd000000000000017;
    return auVar10;
  case 0xc:
    puVar4 = (undefined *)0xef736b616577546e;
    ppuVar2 = (undefined **)0x70616e53;
  case 0x68:
    auVar12._0_8_ = (ulong)ppuVar2 & 0xffff0000ffffffff | 0x656b6f5400000000;
    auVar12._8_8_ = puVar4;
    return auVar12;
  case 0xd:
    puVar4 = &UNK_00007544;
  case 0xaa:
    puVar4 = (undefined *)((ulong)puVar4 | 0x6c700000);
code_r0x001f2688:
    uVar5 = (ulong)puVar4 & 0xffffffffffff | 0xee00786500000000;
code_r0x001f2690:
    auVar17._8_8_ = uVar5;
    auVar17._0_8_ = 0x7974697275636553;
    return auVar17;
  case 0xe:
  case 0x30:
    auVar9._8_8_ = 0xef6e6f6974616369;
    auVar9._0_8_ = 0x6669746f4e564954;
    return auVar9;
  case 0xf:
  case 0x19:
  case 0x2d:
  case 0x41:
  case 0x55:
  case 0x5d:
  case 0x65:
  case 0x6d:
  case 0x81:
    puVar4 = &UNK_00006c70;
  case 0xb9:
  case 0xcd:
  case 0xe1:
  case 0xf5:
  case 0xfd:
    puVar4 = (undefined *)((ulong)puVar4 | 0x78650000);
code_r0x001f2610:
    puVar4 = (undefined *)((ulong)puVar4 & 0xffffffffffff | 0xec00000000000000);
    ppuVar2 = (undefined **)0x7544646f6d726548;
code_r0x001f2624:
    auVar14._8_8_ = puVar4;
    auVar14._0_8_ = ppuVar2;
    return auVar14;
  case 0x18:
    goto code_r0x001f27fc;
  case 0x1c:
    goto code_r0x001f2868;
  case 0x1d:
  case 0x45:
  case 0x85:
  case 0xbd:
  case 0xe5:
code_r0x001f28f8:
    break;
  case 0x1e:
  case 0x46:
  case 0x86:
  case 0xbe:
  case 0xe6:
    goto code_r0x001f254c;
  case 0x26:
  case 0x4e:
  case 0xc6:
  case 0xee:
  case 0xf0:
    goto code_r0x001f2544;
  case 0x2c:
    goto code_r0x001f27cc;
  case 0x31:
  case 0x44:
  case 0x69:
  case 0x71:
  case 0x95:
  case 0xdc:
    goto code_r0x001f27c8;
  case 0x32:
  case 0x62:
  case 0x6a:
  case 0x72:
  case 0x96:
  case 0xd2:
    pcVar3 = (char *)(ulong)*unaff_x20;
  case 0x61:
    if ((int)pcVar3 == 0) {
      ppuVar2 = &PTR__OBJC_METACLASS___NSObject_00af4000;
code_r0x001f27d8:
      ppuVar2 = ppuVar2 + 0xb;
      func_0x000115a8(ppuVar2,&UNK_007e5230);
      puVar4 = (undefined *)0xaf6920;
      _swift_initStaticObject();
      FUN_001da650();
code_r0x001f27fc:
      auVar26._8_8_ = puVar4;
      auVar26._0_8_ = ppuVar2;
      return auVar26;
    }
code_r0x001f27c8:
    ppuVar2 = (undefined **)0x0;
code_r0x001f27cc:
    auVar25._8_8_ = 0xe600000000000000;
    auVar25._0_8_ = ppuVar2;
    return auVar25;
  case 0x33:
  case 0x5b:
  case 99:
  case 0x6b:
  case 0x73:
  case 0x97:
  case 0xd3:
  case 0xfb:
    goto code_r0x001f2934;
  case 0x3c:
    auVar27._8_8_ = 0xe600000000000000;
    auVar27._0_8_ = 0x6c65736e6954;
    return auVar27;
  case 0x3d:
    unaff_x19 = ppuVar2;
  case 0x7d:
  case 0x99:
  case 0xdd:
    FUN_001f2870();
    unaff_x19[1] = (undefined *)ppuVar2;
code_r0x001f2868:
    auVar28._8_8_ = puVar4;
    auVar28._0_8_ = ppuVar2;
    return auVar28;
  case 0x3e:
  case 0x7e:
  case 0x9a:
  case 0xde:
    goto code_r0x001f2610;
  case 0x40:
    goto code_r0x001f279c;
  case 0x50:
  case 0x7c:
  case 0x90:
  case 0xd0:
    goto code_r0x001f2548;
  case 0x54:
  case 0x5c:
  case 100:
  case 0x6c:
    auVar23._8_8_ = 0xe600000000000000;
    auVar23._0_8_ = 0x6c65736e6954;
    return auVar23;
  case 0x58:
    goto code_r0x001f25bc;
  case 0x5a:
    break;
  case 0x60:
    if (uVar6 != 2) {
      uVar6 = (uint)(byte)uRam00006c65736e6955;
      goto code_r0x001f2928;
    }
    uVar6 = (uint)uRam00006c65736e6955;
    if (uRam00006c65736e6955 == 0) goto code_r0x001f28f8;
LAB_001f2910:
    uVar6 = (uint)bRam00006c65736e6954 | uVar6 << 8;
code_r0x001f2918:
    auVar29._4_4_ = 0;
    auVar29._0_4_ = uVar6 - 0xf;
    auVar29._8_8_ = 0xe600000000000000;
    return auVar29;
  case 0x80:
    goto code_r0x001f273c;
  case 0x88:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case 0xb8:
    *(byte **)((long)register0x00000008 + 0x50) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + 0x58) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + 0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x30;
    ppuVar2 = (undefined **)(ulong)*unaff_x20;
    __ss6HasherV5_seedABSi_tcfC((undefined1 *)((long)register0x00000008 + 8));
code_r0x001f279c:
    __ss6HasherV8_combineyySuF(ppuVar2);
    __ss6HasherV9_finalizeSiyF();
    auVar24._8_8_ = puVar4;
    auVar24._0_8_ = ppuVar2;
    return auVar24;
  case 0x8e:
    goto code_r0x001f2540;
  case 0x94:
    goto code_r0x001f2918;
  case 0x98:
    goto code_r0x001f26d8;
  case 0xa1:
  case 0xa2:
  case 0xa7:
  case 0xae:
    goto code_r0x001f2708;
  case 0xa3:
    in_ZR = bVar1 == 0x7e82c0;
  case 0xb2:
    ppuVar2 = (undefined **)(ulong)in_ZR;
code_r0x001f2708:
    auVar21._8_8_ = 0xe600000000000000;
    auVar21._0_8_ = ppuVar2;
    return auVar21;
  case 0xa4:
    goto code_r0x001f26dc;
  case 0xa5:
    goto code_r0x001f26c0;
  case 0xa6:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case 0xaf:
  case 0xe0:
    ppuVar2 = (undefined **)(ulong)*unaff_x20;
    __ss6HasherV5_seedABSi_tcfC((undefined1 *)((long)register0x00000008 + 8),0);
    __ss6HasherV8_combineyySuF(ppuVar2);
code_r0x001f273c:
    __ss6HasherV9_finalizeSiyF();
code_r0x001f274c:
    auVar22._8_8_ = puVar4;
    auVar22._0_8_ = ppuVar2;
    return auVar22;
  case 0xa8:
  case 0xad:
  case 0xf8:
    goto code_r0x001f26cc;
  case 0xac:
    goto code_r0x001f26d0;
  case 0xb0:
    goto code_r0x001f2688;
  case 0xb3:
    goto code_r0x001f26e4;
  case 0xcc:
    goto code_r0x001f274c;
  case 0xd1:
    goto code_r0x001f27d8;
  case 0xe4:
    goto code_r0x001f25b8;
  case 0xf9:
    break;
  case 0xfa:
code_r0x001f2928:
    if (uVar6 != 0) goto LAB_001f2910;
  }
  in_CY = 0xf < bRam00006c65736e6954;
  uVar6 = bRam00006c65736e6954 - 0x10;
code_r0x001f2934:
  if (!(bool)in_CY) {
    uVar6 = 0xffffffff;
  }
  auVar30._4_4_ = 0;
  auVar30._0_4_ = uVar6 + 1;
  auVar30._8_8_ = 0xe600000000000000;
  return auVar30;
code_r0x001f2540:
  pcVar3 = pcVar3 + -0x20;
code_r0x001f2544:
  puVar4 = (undefined *)((ulong)pcVar3 | 0x8000000000000000);
code_r0x001f2548:
  pcVar3 = "E";
code_r0x001f254c:
  auVar8._0_8_ = (ulong)pcVar3 | 0xd000000000000001;
  auVar8._8_8_ = puVar4;
  return auVar8;
}



/* Entry: 001f280c; end: 001f284b;  */

void FUN_001f280c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e82d8;
  _swift_getWitnessTable(&UNK_007e82d8,&UNK_009bb778);
  puRam0000000000af6908 = puVar1;
  return;
}



/* Entry: 001f284c; end: 001f286f;  */

void FUN_001f284c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001f2870();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001f2870; end: 001f28af;  */

void FUN_001f2870(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8300;
  _swift_getWitnessTable(&UNK_007e8300,&UNK_009bb778);
  puRam0000000000af6910 = puVar1;
  return;
}



/* Entry: 001f28b0; end: 001f2a13;  */

int FUN_001f28b0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf0 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xf) {
      iVar2 = 4;
    }
    if (param_2 + 0xf >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001f292c;
        goto LAB_001f2910;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001f2910:
      return ((uint)*param_1 | uVar1 << 8) - 0xf;
    }
  }
LAB_001f292c:
  iVar2 = *param_1 - 0x10;
  if (*param_1 < 0x10) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001f2a14; end: 001f2b93;  */

undefined1  [16] FUN_001f2a14(char param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_1 == '\x03') {
    auVar7._8_8_ = 0x80000000008bc170;
    auVar7._0_8_ = 0xd000000000000018;
    return auVar7;
  }
  if (param_1 == '\x04') {
    auVar6._8_8_ = 0xe800000000000000;
    auVar6._0_8_ = 0x73676e6974746553;
    return auVar6;
  }
  uVar5 = 0xd000000000000012;
  lVar1 = 0xae6940;
  func_0x000115a8(0xae6940,&UNK_007da060);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x20) = 0xd000000000000013;
  *(undefined8 *)(lVar1 + 0x28) = 0x80000000008bc190;
  if (param_1 == '\0') {
    uVar4 = 0xeb00000000656764;
    uVar5 = 0x614264616f6c6572;
  }
  else if (param_1 == '\x01') {
    uVar4 = 0xe90000000000006e;
    uVar5 = 0x6f63496863746566;
  }
  else {
    uVar4 = 0x80000000008bc1b0;
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  *(undefined8 *)(lVar1 + 0x38) = uVar4;
  uVar5 = 0xae6938;
  func_0x000115a8(0xae6938,&UNK_007cdb30);
  uVar4 = uVar5;
  func_0x0002f390();
  uVar2 = 0x23;
  uVar3 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar5,uVar4);
  _swift_release(lVar1);
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = uVar2;
  return auVar8;
}



/* Entry: 001f2b94; end: 001f2ba7;  */

bool FUN_001f2b94(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 001f2ba8; end: 001f2bd3;  */

void FUN_001f2ba8(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_001f3090(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 001f2bd4; end: 001f2c43;  */

void FUN_001f2bd4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar4 = 0x6f63496863746566;
  uVar1 = 0xe90000000000006e;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xd000000000000012;
    uVar1 = 0x80000000008bc1b0;
  }
  uVar2 = 0xeb00000000656764;
  uVar3 = 0x614264616f6c6572;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar3 = uVar4;
  }
  *param_1 = uVar3;
  param_1[1] = uVar2;
  return;
}



/* Entry: 001f2c44; end: 001f2fdf;  */

void FUN_001f2c44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar5 = 0x6f63496863746566;
  uVar1 = 0xe90000000000006e;
  if (cVar3 != '\x01') {
    uVar5 = 0xd000000000000012;
    uVar1 = 0x80000000008bc1b0;
  }
  uVar2 = 0xeb00000000656764;
  uVar4 = 0x614264616f6c6572;
  if (cVar3 != '\0') {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar4,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f2fe0; end: 001f302b;  */

undefined8 FUN_001f2fe0(void)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  if (*unaff_x20 == '\x04') {
    uVar1 = 0xaf4058;
    func_0x000115a8(0xaf4058,&UNK_007e5230);
    _swift_initStaticObject();
    FUN_001da650();
    return uVar1;
  }
  return 0;
}



/* Entry: 001f302c; end: 001f3043;  */

undefined1  [16] FUN_001f302c(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *unaff_x20;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  cVar1 = *unaff_x20;
  if (cVar1 == '\x03') {
    auVar8._8_8_ = 0x80000000008bc170;
    auVar8._0_8_ = 0xd000000000000018;
    return auVar8;
  }
  if (cVar1 == '\x04') {
    auVar7._8_8_ = 0xe800000000000000;
    auVar7._0_8_ = 0x73676e6974746553;
    return auVar7;
  }
  uVar6 = 0xd000000000000012;
  lVar2 = 0xae6940;
  func_0x000115a8(0xae6940,&UNK_007da060);
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  *(undefined8 *)(lVar2 + 0x20) = 0xd000000000000013;
  *(undefined8 *)(lVar2 + 0x28) = 0x80000000008bc190;
  if (cVar1 == '\0') {
    uVar5 = 0xeb00000000656764;
    uVar6 = 0x614264616f6c6572;
  }
  else if (cVar1 == '\x01') {
    uVar5 = 0xe90000000000006e;
    uVar6 = 0x6f63496863746566;
  }
  else {
    uVar5 = 0x80000000008bc1b0;
  }
  *(undefined8 *)(lVar2 + 0x30) = uVar6;
  *(undefined8 *)(lVar2 + 0x38) = uVar5;
  uVar6 = 0xae6938;
  func_0x000115a8(0xae6938,&UNK_007cdb30);
  uVar5 = uVar6;
  func_0x0002f390();
  uVar3 = 0x23;
  uVar4 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar6,uVar5);
  _swift_release(lVar2);
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = uVar3;
  return auVar9;
}



/* Entry: 001f3044; end: 001f3083;  */

void FUN_001f3044(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x001f2e2c(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f3084; end: 001f308f;  */

bool FUN_001f3084(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  uVar2 = (uint)*param_2;
  if (bVar1 == 3) {
    if (uVar2 == 3) {
      return true;
    }
  }
  else if (bVar1 == 4) {
    if (uVar2 == 4) {
      return true;
    }
  }
  else if (1 < uVar2 - 3) {
    return bVar1 == uVar2;
  }
  return false;
}



/* Entry: 001f3090; end: 001f30f3;  */

ulong FUN_001f3090(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 001f30f4; end: 001f314f;  */

bool FUN_001f30f4(uint param_1,uint param_2)

{
  param_1 = param_1 & 0xff;
  param_2 = param_2 & 0xff;
  if (param_1 == 3) {
    if (param_2 == 3) {
      return true;
    }
  }
  else if (param_1 == 4) {
    if (param_2 == 4) {
      return true;
    }
  }
  else if (1 < param_2 - 3) {
    return param_1 == param_2;
  }
  return false;
}



/* Entry: 001f3150; end: 001f318f;  */

void FUN_001f3150(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6948 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8378;
  _swift_getWitnessTable(&UNK_007e8378,&UNK_009bb868);
  puRam0000000000af6948 = puVar1;
  return;
}



/* Entry: 001f3190; end: 001f31b3;  */

void FUN_001f3190(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001f31b4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001f31b4; end: 001f31f3;  */

void FUN_001f31b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8434;
  _swift_getWitnessTable(&UNK_007e8434,&UNK_009bb8f8);
  puRam0000000000af6950 = puVar1;
  return;
}



/* Entry: 001f31f4; end: 001f31f7;  */

void FUN_001f31f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8474;
  _swift_getWitnessTable(&UNK_007e8474,&UNK_009bb8f8);
  puRam0000000000af6958 = puVar1;
  return;
}



/* Entry: 001f31f8; end: 001f3237;  */

void FUN_001f31f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8474;
  _swift_getWitnessTable(&UNK_007e8474,&UNK_009bb8f8);
  puRam0000000000af6958 = puVar1;
  return;
}



/* Entry: 001f3238; end: 001f3527;  */

int FUN_001f3238(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001f32b4;
        goto LAB_001f3298;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001f3298:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_001f32b4:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001f3528; end: 001f36ef;  */

void FUN_001f3528(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  if (param_2 < 4) {
    uVar5 = 0x80000000008bbde0;
    uVar4 = 0xd000000000000022;
    if (param_2 != 2) {
      uVar5 = 0xe700000000000000;
      uVar4 = 0x64616f6c657270;
    }
    pcVar2 = "featureSyncJobProcessor";
    uVar3 = 0xd000000000000015;
    if (param_2 != 0) {
      pcVar2 = "esSyncJobProcessor";
      uVar3 = 0xd000000000000017;
    }
    if (param_2 < 2) {
      uVar4 = uVar3;
      uVar5 = (ulong)pcVar2 | 0x8000000000000000;
    }
  }
  else {
    uVar5 = 0x80000000008bbda0;
    uVar4 = 0xd000000000000010;
    if (param_2 != 6) {
      uVar5 = 0xef72656469766f72;
      uVar4 = 0x507463656a627573;
    }
    uVar1 = 0xee0073746e656970;
    uVar3 = 0x696365526b6e6172;
    if (param_2 != 4) {
      uVar1 = 0x80000000008bbdc0;
      uVar3 = 0xd000000000000011;
    }
    if (param_2 < 6) {
      uVar4 = uVar3;
      uVar5 = uVar1;
    }
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar4,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f36f0; end: 001f3927;  */

undefined1  [16] FUN_001f36f0(byte param_1)

{
  ulong uVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_1 < 10) {
    if (param_1 == 8) {
      auVar9._8_8_ = 0xed000064616f6c65;
      auVar9._0_8_ = 0x72506f54646e6553;
      return auVar9;
    }
    if (param_1 == 9) {
      auVar7._8_8_ = 0x80000000008be130;
      auVar7._0_8_ = 0xd000000000000022;
      return auVar7;
    }
  }
  else {
    if (param_1 == 10) {
      auVar10._8_8_ = 0x80000000008be110;
      auVar10._0_8_ = 0xd00000000000001c;
      return auVar10;
    }
    if (param_1 == 0xb) {
      auVar8._8_8_ = 0x80000000008be0f0;
      auVar8._0_8_ = 0xd000000000000010;
      return auVar8;
    }
  }
  __ss11_StringGutsV4growyySiF(0x17);
  _swift_bridgeObjectRelease(0xe000000000000000);
  if (param_1 < 4) {
    uVar5 = 0x80000000008bbde0;
    uVar4 = 0xd000000000000022;
    if (param_1 != 2) {
      uVar5 = 0xe700000000000000;
      uVar4 = 0x64616f6c657270;
    }
    pcVar2 = "featureSyncJobProcessor";
    uVar6 = 0xd000000000000015;
    if (param_1 != 0) {
      pcVar2 = "esSyncJobProcessor";
      uVar6 = 0xd000000000000017;
    }
    if (param_1 < 2) {
      uVar4 = uVar6;
      uVar5 = (ulong)pcVar2 | 0x8000000000000000;
    }
  }
  else {
    uVar5 = 0x80000000008bbda0;
    uVar4 = 0xd000000000000010;
    if (param_1 != 6) {
      uVar5 = 0xef72656469766f72;
      uVar4 = 0x507463656a627573;
    }
    uVar6 = 0x696365526b6e6172;
    uVar1 = 0xee0073746e656970;
    if (param_1 != 4) {
      uVar6 = 0xd000000000000011;
      uVar1 = 0x80000000008bbdc0;
    }
    if (param_1 < 6) {
      uVar4 = uVar6;
      uVar5 = uVar1;
    }
  }
  __sSS6appendyySSF(uVar4,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  auVar3._8_8_ = 0x80000000008be160;
  auVar3._0_8_ = 0xd000000000000015;
  return auVar3;
}



/* Entry: 001f3928; end: 001f393b;  */

bool FUN_001f3928(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 001f393c; end: 001f3967;  */

void FUN_001f393c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_001f3d08(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 001f3968; end: 001f3aaf;  */

void FUN_001f3968(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  if (3 < bVar3) {
    uVar2 = 0x80000000008bbda0;
    uVar5 = 0xd000000000000010;
    if (bVar3 != 6) {
      uVar2 = 0xef72656469766f72;
      uVar5 = 0x507463656a627573;
    }
    uVar1 = 0xee0073746e656970;
    uVar6 = 0x696365526b6e6172;
    if (bVar3 != 4) {
      uVar1 = 0x80000000008bbdc0;
      uVar6 = 0xd000000000000011;
    }
    if (bVar3 < 6) {
      uVar2 = uVar1;
      uVar5 = uVar6;
    }
    *param_1 = uVar5;
    param_1[1] = uVar2;
    return;
  }
  uVar7 = 0x80000000008bbde0;
  uVar2 = 0xd000000000000022;
  if (bVar3 != 2) {
    uVar7 = 0xe700000000000000;
    uVar2 = 0x64616f6c657270;
  }
  pcVar4 = "featureSyncJobProcessor";
  uVar5 = 0xd000000000000015;
  if (bVar3 != 0) {
    pcVar4 = "esSyncJobProcessor";
    uVar5 = 0xd000000000000017;
  }
  if (bVar3 < 2) {
    uVar7 = (ulong)pcVar4 | 0x8000000000000000;
    uVar2 = uVar5;
  }
  *param_1 = uVar2;
  param_1[1] = uVar7;
  return;
}



/* Entry: 001f3ab0; end: 001f3c5f;  */

void FUN_001f3ab0(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (param_2 < 10) {
    if (param_2 == 8) {
      uVar4 = 0;
    }
    else {
      if (param_2 != 9) {
LAB_001f3afc:
        __ss6HasherV8_combineyySuF(1);
        if (param_2 < 4) {
          uVar5 = 0x80000000008bbde0;
          uVar4 = 0xd000000000000022;
          if (param_2 != 2) {
            uVar5 = 0xe700000000000000;
            uVar4 = 0x64616f6c657270;
          }
          pcVar2 = "featureSyncJobProcessor";
          uVar3 = 0xd000000000000015;
          if (param_2 != 0) {
            pcVar2 = "esSyncJobProcessor";
            uVar3 = 0xd000000000000017;
          }
          if (param_2 < 2) {
            uVar4 = uVar3;
            uVar5 = (ulong)pcVar2 | 0x8000000000000000;
          }
        }
        else {
          uVar5 = 0x80000000008bbda0;
          uVar4 = 0xd000000000000010;
          if (param_2 != 6) {
            uVar5 = 0xef72656469766f72;
            uVar4 = 0x507463656a627573;
          }
          uVar1 = 0xee0073746e656970;
          uVar3 = 0x696365526b6e6172;
          if (param_2 != 4) {
            uVar1 = 0x80000000008bbdc0;
            uVar3 = 0xd000000000000011;
          }
          if (param_2 < 6) {
            uVar4 = uVar3;
            uVar5 = uVar1;
          }
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar5);
        return;
      }
      uVar4 = 2;
    }
  }
  else if (param_2 == 10) {
    uVar4 = 3;
  }
  else {
    if (param_2 != 0xb) goto LAB_001f3afc;
    uVar4 = 4;
  }
  __ss6HasherV8_combineyySuF(uVar4);
  return;
}



/* Entry: 001f3c60; end: 001f3c6f;  */

undefined * FUN_001f3c60(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined1 auStack_a8 [72];
  
  lVar3 = 0xaf4058;
  func_0x000115a8(0xaf4058,&UNK_007e5230);
  _swift_initStaticObject();
  puVar10 = *(undefined **)(lVar3 + 0x10);
  puVar2 = PTR___swiftEmptySetSingleton_0099b900;
  if (puVar10 != (undefined *)0x0) {
    func_0x000115a8(0xaf40c8,&UNK_007e51c0);
    puVar2 = puVar10;
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    puVar12 = (undefined *)0x0;
    do {
      uVar11 = *(ulong *)(lVar3 + 0x20 + (long)puVar12 * 8);
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(puVar2 + 0x28));
      uVar4 = uVar11;
      __ss6HasherV8_combineyySuF();
      __ss6HasherV9_finalizeSiyF();
      uVar9 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
      uVar6 = uVar4 >> 6;
      uVar7 = *(ulong *)(puVar2 + uVar6 * 8 + 0x38);
      uVar8 = 1L << (uVar4 & 0x3f);
      lVar5 = *(long *)(puVar2 + 0x30);
      if ((uVar8 & uVar7) != 0) {
        do {
          if ((int)*(undefined8 *)(lVar5 + uVar4 * 8) == (int)uVar11) goto LAB_001da6d4;
          uVar4 = uVar4 + 1 & ~uVar9;
          uVar6 = uVar4 >> 6;
          uVar7 = *(ulong *)(puVar2 + uVar6 * 8 + 0x38);
          uVar8 = 1L << (uVar4 & 0x3f);
        } while ((uVar8 & uVar7) != 0);
      }
      *(ulong *)(puVar2 + uVar6 * 8 + 0x38) = uVar8 | uVar7;
      *(ulong *)(lVar5 + uVar4 * 8) = uVar11;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1da788);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_001da6d4:
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar10);
  }
  return puVar2;
}



/* Entry: 001f3c70; end: 001f3cb3;  */

void FUN_001f3c70(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_001f3ab0(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f3cb4; end: 001f3cbb;  */

void FUN_001f3cb4(undefined8 param_1)

{
  ulong uVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  if (bVar2 < 10) {
    if (bVar2 == 8) {
      uVar5 = 0;
    }
    else {
      if (bVar2 != 9) {
LAB_001f3afc:
        __ss6HasherV8_combineyySuF(1);
        if (bVar2 < 4) {
          uVar6 = 0x80000000008bbde0;
          uVar5 = 0xd000000000000022;
          if (bVar2 != 2) {
            uVar6 = 0xe700000000000000;
            uVar5 = 0x64616f6c657270;
          }
          pcVar3 = "featureSyncJobProcessor";
          uVar4 = 0xd000000000000015;
          if (bVar2 != 0) {
            pcVar3 = "esSyncJobProcessor";
            uVar4 = 0xd000000000000017;
          }
          if (bVar2 < 2) {
            uVar5 = uVar4;
            uVar6 = (ulong)pcVar3 | 0x8000000000000000;
          }
        }
        else {
          uVar6 = 0x80000000008bbda0;
          uVar5 = 0xd000000000000010;
          if (bVar2 != 6) {
            uVar6 = 0xef72656469766f72;
            uVar5 = 0x507463656a627573;
          }
          uVar1 = 0xee0073746e656970;
          uVar4 = 0x696365526b6e6172;
          if (bVar2 != 4) {
            uVar1 = 0x80000000008bbdc0;
            uVar4 = 0xd000000000000011;
          }
          if (bVar2 < 6) {
            uVar5 = uVar4;
            uVar6 = uVar1;
          }
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar6);
        return;
      }
      uVar5 = 2;
    }
  }
  else if (bVar2 == 10) {
    uVar5 = 3;
  }
  else {
    if (bVar2 != 0xb) goto LAB_001f3afc;
    uVar5 = 4;
  }
  __ss6HasherV8_combineyySuF(uVar5);
  return;
}



/* Entry: 001f3cbc; end: 001f3cfb;  */

void FUN_001f3cbc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_001f3ab0(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f3cfc; end: 001f3d07;  */

bool FUN_001f3cfc(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *param_2;
  bVar2 = *param_1;
  if (bVar2 < 10) {
    if (bVar2 == 8) {
      if (bVar1 != 8) {
        return false;
      }
      return true;
    }
    if (bVar2 == 9) {
      if (bVar1 != 9) {
        return false;
      }
      return true;
    }
  }
  else {
    if (bVar2 == 10) {
      if (bVar1 != 10) {
        return false;
      }
      return true;
    }
    if (bVar2 == 0xb) {
      if (bVar1 != 0xb) {
        return false;
      }
      return true;
    }
  }
  if ((bVar1 & 0xfc) == 8) {
    return false;
  }
  return bVar2 == bVar1;
}



/* Entry: 001f3d08; end: 001f3d6b;  */

ulong FUN_001f3d08(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (7 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}



/* Entry: 001f3d6c; end: 001f3dff;  */

bool FUN_001f3d6c(byte param_1,byte param_2)

{
  if (param_1 < 10) {
    if (param_1 == 8) {
      if (param_2 != 8) {
        return false;
      }
      return true;
    }
    if (param_1 == 9) {
      if (param_2 != 9) {
        return false;
      }
      return true;
    }
  }
  else {
    if (param_1 == 10) {
      if (param_2 != 10) {
        return false;
      }
      return true;
    }
    if (param_1 == 0xb) {
      if (param_2 != 0xb) {
        return false;
      }
      return true;
    }
  }
  if ((param_2 & 0xfc) == 8) {
    return false;
  }
  return param_1 == param_2;
}



/* Entry: 001f3e00; end: 001f3e3f;  */

void FUN_001f3e00(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6a08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e84e8;
  _swift_getWitnessTable(&UNK_007e84e8,&UNK_009bba08);
  puRam0000000000af6a08 = puVar1;
  return;
}



/* Entry: 001f3e40; end: 001f3e63;  */

void FUN_001f3e40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001f3e64();
  *(long *)(param_1 + 8) = lVar1;
  return;
}


