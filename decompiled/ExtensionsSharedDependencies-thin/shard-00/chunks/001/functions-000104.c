/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001eb3a8; end: 001eb3e7;  */

void FUN_001eb3a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af59f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7180;
  _swift_getWitnessTable(&UNK_007e7180,&UNK_009ba5c8);
  puRam0000000000af59f0 = puVar1;
  return;
}



/* Entry: 001eb3e8; end: 001eb40b;  */

void FUN_001eb3e8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001eb40c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001eb40c; end: 001eb44b;  */

void FUN_001eb40c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af59f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e723c;
  _swift_getWitnessTable(&UNK_007e723c,&UNK_009ba658);
  puRam0000000000af59f8 = puVar1;
  return;
}



/* Entry: 001eb44c; end: 001eb44f;  */

void FUN_001eb44c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5a00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e727c;
  _swift_getWitnessTable(&UNK_007e727c,&UNK_009ba658);
  puRam0000000000af5a00 = puVar1;
  return;
}



/* Entry: 001eb450; end: 001eb48f;  */

void FUN_001eb450(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5a00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e727c;
  _swift_getWitnessTable(&UNK_007e727c,&UNK_009ba658);
  puRam0000000000af5a00 = puVar1;
  return;
}



/* Entry: 001eb490; end: 001eba1b;  */

uint FUN_001eb490(uint *param_1,int param_2)

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



/* Entry: 001eba1c; end: 001ebc2f;  */

undefined1  [16] FUN_001eba1c(byte param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_1 < 5) {
    if (param_1 == 2) {
      auVar8._8_8_ = 0x80000000008bc8e0;
      auVar8._0_8_ = 0xd00000000000001c;
      return auVar8;
    }
    if (param_1 == 3) {
      auVar11._8_8_ = 0x80000000008bc8c0;
      auVar11._0_8_ = 0xd000000000000011;
      return auVar11;
    }
    if (param_1 == 4) {
      auVar6._8_8_ = 0x80000000008bc880;
      auVar6._0_8_ = 0xd000000000000010;
      return auVar6;
    }
  }
  else {
    if (param_1 == 5) {
      auVar9._8_8_ = 0xee00676e69707061;
      auVar9._0_8_ = 0x4d6b726f7774656e;
      return auVar9;
    }
    if (param_1 == 6) {
      auVar12._8_8_ = 0x80000000008bc860;
      auVar12._0_8_ = 0xd000000000000017;
      return auVar12;
    }
    if (param_1 == 7) {
      auVar7._8_8_ = 0x80000000008bc840;
      auVar7._0_8_ = 0xd000000000000018;
      return auVar7;
    }
  }
  lVar1 = 0xae6940;
  func_0x000115a8(0xae6940,&UNK_007da060);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x20) = 0xd000000000000013;
  *(undefined8 *)(lVar1 + 0x28) = 0x80000000008bc8a0;
  uVar2 = 0x6d6f7250776f6873;
  if (param_1 != 1) {
    uVar2 = 0x635365736f707865;
  }
  uVar3 = 0xea00000000007470;
  if (param_1 != 1) {
    uVar3 = 0xeb0000000065706f;
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  uVar2 = 0xae6938;
  func_0x000115a8(0xae6938,&UNK_007cdb30);
  uVar3 = uVar2;
  func_0x0002f390();
  uVar4 = 0x23;
  uVar5 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar2,uVar3);
  _swift_release(lVar1);
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = uVar4;
  return auVar10;
}



/* Entry: 001ebc30; end: 001ebc43;  */

bool FUN_001ebc30(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 001ebc44; end: 001ebcbb;  */

void FUN_001ebc44(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 001ebcbc; end: 001ebd07;  */

void FUN_001ebcbc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x6d6f7250776f6873;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x635365736f707865;
  }
  uVar2 = 0xea00000000007470;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xeb0000000065706f;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 001ebd08; end: 001ebf77;  */

void FUN_001ebd08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0x6d6f7250776f6873;
  if (cVar3 != '\x01') {
    uVar1 = 0x635365736f707865;
  }
  uVar2 = 0xea00000000007470;
  if (cVar3 != '\x01') {
    uVar2 = 0xeb0000000065706f;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ebf78; end: 001ebf87;  */

undefined8 FUN_001ebf78(void)

{
  return 0;
}



/* Entry: 001ebf88; end: 001ebfcb;  */

void FUN_001ebf88(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x001ebe84(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ebfcc; end: 001ebfd3;  */

void FUN_001ebfcc(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  if (bVar2 < 5) {
    if (bVar2 == 2) {
      uVar3 = 0;
    }
    else if (bVar2 == 3) {
      uVar3 = 1;
    }
    else {
      if (bVar2 != 4) {
LAB_001ebef0:
        __ss6HasherV8_combineyySuF(2);
        uVar3 = 0x6d6f7250776f6873;
        if (bVar2 != 1) {
          uVar3 = 0x635365736f707865;
        }
        uVar1 = 0xea00000000007470;
        if (bVar2 != 1) {
          uVar1 = 0xeb0000000065706f;
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar1);
        return;
      }
      uVar3 = 3;
    }
  }
  else if (bVar2 == 5) {
    uVar3 = 4;
  }
  else if (bVar2 == 6) {
    uVar3 = 5;
  }
  else {
    if (bVar2 != 7) goto LAB_001ebef0;
    uVar3 = 6;
  }
  __ss6HasherV8_combineyySuF(uVar3);
  return;
}



/* Entry: 001ebfd4; end: 001ec013;  */

void FUN_001ebfd4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x001ebe84(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ec014; end: 001ec0e3;  */

bool FUN_001ec014(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *param_1;
  uVar3 = (uint)bVar1;
  uVar2 = (uint)*param_2;
  if (bVar1 < 5) {
    if (uVar3 == 2) {
      if (uVar2 != 2) {
        return false;
      }
      return true;
    }
    if (bVar1 == 3) {
      if (uVar2 != 3) {
        return false;
      }
      return true;
    }
    if (bVar1 == 4) {
      if (uVar2 != 4) {
        return false;
      }
      return true;
    }
  }
  else {
    if (bVar1 == 5) {
      if (uVar2 != 5) {
        return false;
      }
      return true;
    }
    if (bVar1 == 6) {
      if (uVar2 != 6) {
        return false;
      }
      return true;
    }
    if (uVar3 == 7) {
      if (uVar2 != 7) {
        return false;
      }
      return true;
    }
  }
  if (uVar2 - 2 < 6) {
    return false;
  }
  return uVar3 == uVar2;
}



/* Entry: 001ec0e4; end: 001ec123;  */

void FUN_001ec0e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7328;
  _swift_getWitnessTable(&UNK_007e7328,&UNK_009ba768);
  puRam0000000000af5b10 = puVar1;
  return;
}



/* Entry: 001ec124; end: 001ec147;  */

void FUN_001ec124(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ec148();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001ec148; end: 001ec187;  */

void FUN_001ec148(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e73e4;
  _swift_getWitnessTable(&UNK_007e73e4,&UNK_009ba7f8);
  puRam0000000000af5b18 = puVar1;
  return;
}



/* Entry: 001ec188; end: 001ec18b;  */

void FUN_001ec188(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7424;
  _swift_getWitnessTable(&UNK_007e7424,&UNK_009ba7f8);
  puRam0000000000af5b20 = puVar1;
  return;
}



/* Entry: 001ec18c; end: 001ec1cb;  */

void FUN_001ec18c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7424;
  _swift_getWitnessTable(&UNK_007e7424,&UNK_009ba7f8);
  puRam0000000000af5b20 = puVar1;
  return;
}



/* Entry: 001ec1cc; end: 001ec4bb;  */

int FUN_001ec1cc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001ec248;
        goto LAB_001ec22c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001ec22c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_001ec248:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001ec4bc; end: 001ec76f;  */

void FUN_001ec4bc(long param_1,byte param_2)

{
  long lVar1;
  
  if (param_2 < 3) {
    if (((int)param_1 != 0xce) && ((int)param_1 != 0x7f)) {
      lVar1 = 0xaf4058;
      func_0x000115a8(0xaf4058,&UNK_007e5230);
      _swift_initStackObject();
      *(undefined8 *)(lVar1 + 0x18) = 2;
      *(undefined8 *)(lVar1 + 0x10) = 1;
      *(long *)(lVar1 + 0x20) = param_1;
      FUN_001da650();
      _swift_setDeallocating(lVar1);
      return;
    }
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
  else if (param_2 == 3) {
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
  else if (param_1 == 0) {
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
  else if (param_1 == 1) {
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
  else {
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
  _swift_initStaticObject();
  FUN_001da650();
  return;
}



/* Entry: 001ec770; end: 001ec783;  */

bool FUN_001ec770(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 001ec784; end: 001eca57;  */

void FUN_001ec784(void)

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
  uVar1 = 0x80000000008bcb00;
  uVar4 = 0xd000000000000015;
  if (bVar3 != 3) {
    uVar1 = 0xe900000000000077;
    uVar4 = 0x6569566775626564;
  }
  uVar2 = 0x80000000008bcb20;
  uVar5 = 0xd000000000000013;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  uVar1 = 0xe90000000000006c;
  uVar4 = 0x65646f4d64616f6c;
  if (bVar3 != 0) {
    uVar1 = 0xeb000000006c6564;
    uVar4 = 0x6f4d64616f6c6e75;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar5,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001eca58; end: 001ecb07;  */

void FUN_001eca58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar1 = 0x80000000008bcb00;
  uVar4 = 0xd000000000000015;
  if (bVar3 != 3) {
    uVar1 = 0xe900000000000077;
    uVar4 = 0x6569566775626564;
  }
  uVar2 = 0x80000000008bcb20;
  uVar5 = 0xd000000000000013;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  uVar1 = 0xe90000000000006c;
  uVar4 = 0x65646f4d64616f6c;
  if (bVar3 != 0) {
    uVar1 = 0xeb000000006c6564;
    uVar4 = 0x6f4d64616f6c6e75;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  *param_1 = uVar5;
  param_1[1] = uVar2;
  return;
}



/* Entry: 001ecb08; end: 001ecc63;  */

void FUN_001ecb08(undefined8 param_1,ulong param_2,byte param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    if (param_3 != 2) {
      if (param_3 == 3) {
        __ss6HasherV8_combineyySuF(4);
        uVar1 = (uint)param_2 & 0xff;
        uVar5 = 0x80000000008bcb00;
        uVar4 = 0xd000000000000015;
        if (uVar1 != 3) {
          uVar5 = 0xe900000000000077;
          uVar4 = 0x6569566775626564;
        }
        uVar3 = 0x80000000008bcb20;
        uVar2 = 0xd000000000000013;
        if (uVar1 != 2) {
          uVar3 = uVar5;
          uVar2 = uVar4;
        }
        uVar5 = 0xe90000000000006c;
        uVar4 = 0x65646f4d64616f6c;
        if ((param_2 & 0xff) != 0) {
          uVar5 = 0xeb000000006c6564;
          uVar4 = 0x6f4d64616f6c6e75;
        }
        if (uVar1 == 1 || (param_2 & 0xff) == 0) {
          uVar2 = uVar4;
        }
        if (uVar1 == 1 || (param_2 & 0xff) == 0) {
          uVar3 = uVar5;
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar3);
        return;
      }
      if (param_2 == 0) {
        param_2 = 3;
      }
      else if (param_2 == 1) {
        param_2 = 5;
      }
      else {
        param_2 = 6;
      }
      goto LAB_001ecc40;
    }
    uVar5 = 2;
  }
  __ss6HasherV8_combineyySuF(uVar5);
LAB_001ecc40:
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 001ecc64; end: 001ecc7b;  */

void FUN_001ecc64(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  if (*(byte *)(unaff_x20 + 1) < 3) {
    if (((int)lVar2 != 0xce) && ((int)lVar2 != 0x7f)) {
      lVar1 = 0xaf4058;
      func_0x000115a8(0xaf4058,&UNK_007e5230);
      _swift_initStackObject();
      *(undefined8 *)(lVar1 + 0x18) = 2;
      *(undefined8 *)(lVar1 + 0x10) = 1;
      *(long *)(lVar1 + 0x20) = lVar2;
      FUN_001da650();
      _swift_setDeallocating(lVar1);
      return;
    }
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
  else if (*(byte *)(unaff_x20 + 1) == 3) {
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
  else if (lVar2 == 0) {
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
  else if (lVar2 == 1) {
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
  else {
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
  _swift_initStaticObject();
  FUN_001da650();
  return;
}



/* Entry: 001ecc7c; end: 001eccc7;  */

void FUN_001ecc7c(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_001ecb08(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001eccc8; end: 001eccd3;  */

void FUN_001eccc8(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  
  uVar7 = *unaff_x20;
  bVar4 = (byte)unaff_x20[1];
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
  }
  else {
    if (bVar4 != 2) {
      if (bVar4 == 3) {
        __ss6HasherV8_combineyySuF(4);
        uVar1 = (uint)uVar7 & 0xff;
        uVar6 = 0x80000000008bcb00;
        uVar5 = 0xd000000000000015;
        if (uVar1 != 3) {
          uVar6 = 0xe900000000000077;
          uVar5 = 0x6569566775626564;
        }
        uVar3 = 0x80000000008bcb20;
        uVar2 = 0xd000000000000013;
        if (uVar1 != 2) {
          uVar3 = uVar6;
          uVar2 = uVar5;
        }
        uVar6 = 0xe90000000000006c;
        uVar5 = 0x65646f4d64616f6c;
        if ((uVar7 & 0xff) != 0) {
          uVar6 = 0xeb000000006c6564;
          uVar5 = 0x6f4d64616f6c6e75;
        }
        if (uVar1 == 1 || (uVar7 & 0xff) == 0) {
          uVar2 = uVar5;
        }
        if (uVar1 == 1 || (uVar7 & 0xff) == 0) {
          uVar3 = uVar6;
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar3);
        return;
      }
      if (uVar7 == 0) {
        uVar7 = 3;
      }
      else if (uVar7 == 1) {
        uVar7 = 5;
      }
      else {
        uVar7 = 6;
      }
      goto LAB_001ecc40;
    }
    uVar6 = 2;
  }
  __ss6HasherV8_combineyySuF(uVar6);
LAB_001ecc40:
  __ss6HasherV8_combineyySuF(uVar7);
  return;
}



/* Entry: 001eccd4; end: 001ecd1b;  */

void FUN_001eccd4(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_001ecb08(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ecd1c; end: 001ecdff;  */

bool FUN_001ecd1c(long *param_1,long *param_2)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar3 = *param_2;
  cVar1 = (char)param_2[1];
  bVar2 = *(byte *)(param_1 + 1);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      if (cVar1 == '\0') {
LAB_001ecdc0:
        return (uint)lVar4 == (uint)lVar3;
      }
    }
    else if (cVar1 == '\x01') goto LAB_001ecdc0;
  }
  else if (bVar2 == 2) {
    if (cVar1 == '\x02') goto LAB_001ecdc0;
  }
  else if (bVar2 == 3) {
    if (cVar1 == '\x03') {
      return (((uint)lVar3 ^ (uint)lVar4) & 0xff) == 0;
    }
  }
  else if (lVar4 == 0) {
    if ((cVar1 == '\x04') && (lVar3 == 0)) {
      return true;
    }
  }
  else if (lVar4 == 1) {
    if ((cVar1 == '\x04') && (lVar3 == 1)) {
      return true;
    }
  }
  else if ((cVar1 == '\x04') && (lVar3 == 2)) {
    return true;
  }
  return false;
}



/* Entry: 001ece00; end: 001ece63;  */

ulong FUN_001ece00(undefined8 param_1,undefined8 param_2)

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



/* Entry: 001ece64; end: 001ece67;  */

void FUN_001ece64(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7498;
  _swift_getWitnessTable(&UNK_007e7498,&UNK_009ba908);
  puRam0000000000af5c58 = puVar1;
  return;
}



/* Entry: 001ece68; end: 001ecea7;  */

void FUN_001ece68(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7498;
  _swift_getWitnessTable(&UNK_007e7498,&UNK_009ba908);
  puRam0000000000af5c58 = puVar1;
  return;
}



/* Entry: 001ecea8; end: 001ececb;  */

void FUN_001ecea8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ececc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001ececc; end: 001ecf0b;  */

void FUN_001ececc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5c60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7554;
  _swift_getWitnessTable(&UNK_007e7554,&UNK_009ba998);
  puRam0000000000af5c60 = puVar1;
  return;
}



/* Entry: 001ecf0c; end: 001ecf0f;  */

void FUN_001ecf0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7594;
  _swift_getWitnessTable(&UNK_007e7594,&UNK_009ba998);
  puRam0000000000af5c68 = puVar1;
  return;
}



/* Entry: 001ecf10; end: 001ecf4f;  */

void FUN_001ecf10(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7594;
  _swift_getWitnessTable(&UNK_007e7594,&UNK_009ba998);
  puRam0000000000af5c68 = puVar1;
  return;
}



/* Entry: 001ecf50; end: 001ed183;  */

int FUN_001ecf50(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001ecfcc;
        goto LAB_001ecfb0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001ecfb0:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_001ecfcc:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001ed184; end: 001ed333;  */

void FUN_001ed184(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1 & 0xff;
  uVar2 = param_1 >> 5 & 7;
  if (uVar2 < 3) {
    if (uVar2 != 0) {
      if (uVar2 != 1) {
        uVar3 = 0xaf4058;
        func_0x000115a8(0xaf4058,&UNK_007e5230);
        _swift_initStaticObject();
        FUN_001da650();
        if ((param_1 & 0x1f) != 1) {
          return;
        }
        _swift_initStaticObject(uVar3,0xaf5d60);
        FUN_001ee898();
        return;
      }
      if ((param_1 & 0x1f) == 2) {
        func_0x000115a8(0xaf4058,&UNK_007e5230);
        goto LAB_001ed320;
      }
    }
LAB_001ed21c:
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
  else {
    if (uVar2 < 5) {
      if (uVar2 == 3) {
        if (uVar1 - 0x61 < 2) {
          return;
        }
        if (uVar1 == 0x60) goto LAB_001ed21c;
      }
      else if (1 < uVar1 - 0x82) {
        if (uVar1 == 0x80) {
          func_0x000115a8(0xaf4058,&UNK_007e5230);
        }
        else {
          func_0x000115a8(0xaf4058,&UNK_007e5230);
        }
        goto LAB_001ed320;
      }
    }
    else {
      if (uVar2 != 5) {
        if (uVar1 == 0xc0) {
          return;
        }
        func_0x000115a8(0xaf4058,&UNK_007e5230);
        goto LAB_001ed320;
      }
      if (1 < uVar1 - 0xa0) {
        if (uVar1 == 0xa2) {
          return;
        }
        goto LAB_001ed21c;
      }
    }
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
LAB_001ed320:
  _swift_initStaticObject();
  FUN_001da650();
  return;
}



/* Entry: 001ed334; end: 001ed78f;  */

undefined1  [16] FUN_001ed334(uint param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  char *pcVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  uVar1 = param_1 & 0xff;
  uVar3 = param_1 >> 5 & 7;
  if (2 < uVar3) {
    if (uVar3 < 5) {
      if (uVar3 == 3) {
        pcVar10 = "riesPresentationDataSource";
        uVar11 = 0xd000000000000012;
        if (uVar1 != 0x62) {
          pcVar10 = "MemoriesS2RLogging";
          uVar11 = 0xd00000000000002a;
        }
        uVar2 = 0xee0070756b636142;
        uVar8 = 0x736569726f6d654d;
        if (uVar1 != 0x60) {
          uVar2 = 0x80000000008bdd90;
          uVar8 = 0xd000000000000016;
        }
        uVar9 = (ulong)pcVar10 | 0x8000000000000000;
        if (uVar1 < 0x62) {
          uVar11 = uVar8;
          uVar9 = uVar2;
        }
      }
      else {
        pcVar10 = "MemoriesRecentThumbnailProvider";
        uVar11 = 0xd00000000000001d;
        if (uVar1 != 0x82) {
          pcVar10 = "nsitionCoordinator";
          uVar11 = 0xd00000000000001f;
        }
        uVar2 = 0x80000000008bdd20;
        uVar8 = 0xd000000000000012;
        if (uVar1 != 0x80) {
          uVar2 = 0xec00000065766153;
          uVar8 = 0x736569726f6d654d;
        }
        uVar9 = (ulong)pcVar10 | 0x8000000000000000;
        if (uVar1 < 0x82) {
          uVar11 = uVar8;
          uVar9 = uVar2;
        }
      }
    }
    else if (uVar3 == 5) {
      pcVar10 = "MemoriesClientGenManager";
      uVar11 = 0xd000000000000021;
      if (uVar1 != 0xa2) {
        pcVar10 = "ntLoggingProvider";
        uVar11 = 0xd000000000000018;
      }
      uVar8 = 0xd000000000000022;
      pcVar4 = "MemoriesHighlightDataSourceSetup";
      if (uVar1 != 0xa0) {
        uVar8 = 0xd000000000000020;
        pcVar4 = "MemoriesExperimentServiceProvider";
      }
      if (uVar1 < 0xa2) {
        pcVar10 = pcVar4 + 0x10;
        uVar11 = uVar8;
      }
      uVar9 = (ulong)pcVar10 | 0x8000000000000000;
    }
    else {
      uVar11 = 0xd000000000000021;
      uVar9 = 0x80000000008bdc00;
      if (uVar1 != 0xc0) {
        uVar11 = 0x736569726f6d654d;
        uVar9 = 0xee006f77546d654d;
      }
    }
    goto LAB_001ed77c;
  }
  if (uVar3 == 0) {
    lVar6 = 0xae6940;
    func_0x000115a8(0xae6940,&UNK_007da060);
    _swift_allocObject();
    *(undefined8 *)(lVar6 + 0x18) = 4;
    *(undefined8 *)(lVar6 + 0x10) = 2;
    *(undefined8 *)(lVar6 + 0x20) = 0xd000000000000012;
    *(undefined8 *)(lVar6 + 0x28) = 0x80000000008bde30;
    if (uVar1 == 0) {
      pcVar10 = "doubleEncryptionResolver";
LAB_001ed6ec:
      pcVar10 = pcVar10 + -0x20;
      uVar11 = 0xd000000000000018;
    }
    else if (uVar1 == 1) {
      pcVar10 = "encryptionInfoProvider";
      uVar11 = 0xd000000000000017;
    }
    else {
      pcVar10 = "MemoriesEncryption";
      uVar11 = 0xd000000000000016;
    }
LAB_001ed71c:
    *(undefined8 *)(lVar6 + 0x30) = uVar11;
    *(ulong *)(lVar6 + 0x38) = (ulong)pcVar10 | 0x8000000000000000;
  }
  else {
    if (uVar3 == 1) {
      lVar6 = 0xae6940;
      func_0x000115a8(0xae6940,&UNK_007da060);
      _swift_allocObject();
      *(undefined8 *)(lVar6 + 0x18) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 2;
      *(undefined8 *)(lVar6 + 0x20) = 0xd000000000000013;
      *(undefined8 *)(lVar6 + 0x28) = 0x80000000008bddb0;
      if ((param_1 & 0x1f) == 0) {
        pcVar10 = "opportunisticRetranscode";
        goto LAB_001ed6ec;
      }
      if ((param_1 & 0x1f) == 1) {
        pcVar10 = "snapDocTranscodeForExport";
        uVar11 = 0xd000000000000010;
      }
      else {
        pcVar10 = "MemoriesTranscoding";
        uVar11 = 0xd000000000000019;
      }
      goto LAB_001ed71c;
    }
    lVar6 = 0xae6940;
    func_0x000115a8(0xae6940,&UNK_007da060);
    _swift_allocObject();
    *(undefined8 *)(lVar6 + 0x18) = 4;
    *(undefined8 *)(lVar6 + 0x10) = 2;
    *(undefined8 *)(lVar6 + 0x20) = 0x736569726f6d654d;
    *(undefined8 *)(lVar6 + 0x28) = 0xea00000000004955;
    bVar5 = (param_1 & 0x1f) != 1;
    uVar11 = 0x7475436b63697571;
    if (bVar5) {
      uVar11 = 0x6c6172656e6567;
    }
    uVar8 = 0xe800000000000000;
    if (bVar5) {
      uVar8 = 0xe700000000000000;
    }
    *(undefined8 *)(lVar6 + 0x30) = uVar11;
    *(undefined8 *)(lVar6 + 0x38) = uVar8;
  }
  uVar7 = 0xae6938;
  func_0x000115a8(0xae6938,&UNK_007cdb30);
  uVar8 = uVar7;
  func_0x0002f390();
  uVar11 = 0x23;
  uVar9 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar7,uVar8);
  _swift_release(lVar6);
LAB_001ed77c:
  auVar12._8_8_ = uVar9;
  auVar12._0_8_ = uVar11;
  return auVar12;
}



/* Entry: 001ed790; end: 001ed7a3;  */

bool FUN_001ed790(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 001ed7a4; end: 001ed7d7;  */

void FUN_001ed7a4(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_001eeaa0(uVar1,param_2[1],0xaf6010);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 001ed7d8; end: 001ed82f;  */

void FUN_001ed7d8(undefined8 *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *unaff_x20;
  
  uVar3 = 0xd000000000000016;
  pcVar4 = "MemoriesEncryption";
  if (*unaff_x20 == '\x01') {
    uVar3 = 0xd000000000000017;
    pcVar4 = "encryptionInfoProvider";
  }
  pcVar1 = "doubleEncryptionInvoker";
  uVar2 = 0xd000000000000018;
  if (*unaff_x20 != '\0') {
    pcVar1 = pcVar4;
    uVar2 = uVar3;
  }
  *param_1 = uVar2;
  param_1[1] = (ulong)pcVar1 | 0x8000000000000000;
  return;
}



/* Entry: 001ed830; end: 001ed9f7;  */

void FUN_001ed830(void)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar5 = 0xd000000000000016;
  cVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  pcVar4 = "MemoriesEncryption";
  if (cVar2 == '\x01') {
    uVar5 = 0xd000000000000017;
    pcVar4 = "encryptionInfoProvider";
  }
  pcVar1 = "doubleEncryptionInvoker";
  uVar3 = 0xd000000000000018;
  if (cVar2 != '\0') {
    pcVar1 = pcVar4;
    uVar3 = uVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar3,(ulong)pcVar1 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar1 | 0x8000000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ed9f8; end: 001eda53;  */

void FUN_001ed9f8(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  pcVar1 = "snapDocTranscodeForExport";
  uVar3 = 0xd000000000000010;
  if (*unaff_x20 != '\x01') {
    pcVar1 = "MemoriesTranscoding";
    uVar3 = 0xd000000000000019;
  }
  pcVar2 = "snapDocTranscode";
  uVar4 = 0xd000000000000018;
  if (*unaff_x20 != '\0') {
    pcVar2 = pcVar1;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = (ulong)pcVar2 | 0x8000000000000000;
  return;
}



/* Entry: 001eda54; end: 001edbf3;  */

void FUN_001eda54(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  pcVar1 = "snapDocTranscodeForExport";
  uVar4 = 0xd000000000000010;
  if (cVar3 != '\x01') {
    pcVar1 = "MemoriesTranscoding";
    uVar4 = 0xd000000000000019;
  }
  pcVar2 = "snapDocTranscode";
  uVar5 = 0xd000000000000018;
  if (cVar3 != '\0') {
    pcVar2 = pcVar1;
    uVar5 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar5,(ulong)pcVar2 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar2 | 0x8000000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001edbf4; end: 001edc6b;  */

void FUN_001edbf4(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 001edc6c; end: 001edcab;  */

void FUN_001edc6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x7475436b63697571;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6c6172656e6567;
  }
  uVar2 = 0xe800000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 001edcac; end: 001ede03;  */

void FUN_001edcac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0x7475436b63697571;
  if (cVar3 != '\x01') {
    uVar1 = 0x6c6172656e6567;
  }
  uVar2 = 0xe800000000000000;
  if (cVar3 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ede04; end: 001ee02b;  */

void FUN_001ede04(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  
  uVar9 = param_2 & 0xff;
  uVar4 = param_2 >> 5 & 7;
  if (2 < uVar4) {
    if (uVar4 < 5) {
      if (uVar4 == 3) {
        if (uVar9 < 0x62) {
          if (uVar9 == 0x60) {
            uVar7 = 2;
          }
          else {
            uVar7 = 3;
          }
        }
        else if (uVar9 == 0x62) {
          uVar7 = 4;
        }
        else {
          uVar7 = 5;
        }
      }
      else if (uVar9 < 0x82) {
        if (uVar9 == 0x80) {
          uVar7 = 6;
        }
        else {
          uVar7 = 7;
        }
      }
      else if (uVar9 == 0x82) {
        uVar7 = 8;
      }
      else {
        uVar7 = 9;
      }
    }
    else if (uVar4 == 5) {
      if (uVar9 < 0xa2) {
        if (uVar9 == 0xa0) {
          uVar7 = 10;
        }
        else {
          uVar7 = 0xb;
        }
      }
      else if (uVar9 == 0xa2) {
        uVar7 = 0xc;
      }
      else {
        uVar7 = 0xd;
      }
    }
    else if (uVar9 == 0xc0) {
      uVar7 = 0xe;
    }
    else {
      uVar7 = 0x10;
    }
    __ss6HasherV8_combineyySuF(uVar7);
    return;
  }
  if (uVar4 == 0) {
    __ss6HasherV8_combineyySuF(0);
    pcVar1 = "doubleEncryptionResolver";
    pcVar2 = "doubleEncryptionInvoker";
    pcVar3 = "encryptionInfoProvider";
    bVar6 = uVar9 == 1;
    uVar7 = 0xd000000000000017;
    if (!bVar6) {
      uVar7 = 0xd000000000000016;
    }
  }
  else {
    if (uVar4 != 1) {
      __ss6HasherV8_combineyySuF(0xf);
      bVar6 = (param_2 & 0x1f) != 1;
      uVar7 = 0x7475436b63697571;
      if (bVar6) {
        uVar7 = 0x6c6172656e6567;
      }
      uVar8 = 0xe800000000000000;
      if (bVar6) {
        uVar8 = 0xe700000000000000;
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar7,uVar8);
      goto LAB_001edf7c;
    }
    uVar9 = param_2 & 0x1f;
    __ss6HasherV8_combineyySuF(1);
    pcVar1 = "opportunisticRetranscode";
    pcVar2 = "snapDocTranscode";
    uVar7 = 0xd000000000000010;
    pcVar3 = "snapDocTranscodeForExport";
    bVar6 = uVar9 == 1;
    if (!bVar6) {
      uVar7 = 0xd000000000000019;
    }
  }
  if (!bVar6) {
    pcVar2 = pcVar3;
  }
  uVar5 = 0xd000000000000018;
  if (uVar9 != 0) {
    uVar5 = uVar7;
    pcVar1 = pcVar2;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  uVar8 = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
LAB_001edf7c:
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar8);
  return;
}



/* Entry: 001ee02c; end: 001ee03b;  */

void FUN_001ee02c(void)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20 >> 5;
  uVar3 = (uint)*unaff_x20;
  if (bVar1 < 3) {
    if (bVar1 != 0) {
      if (bVar1 != 1) {
        uVar2 = 0xaf4058;
        func_0x000115a8(0xaf4058,&UNK_007e5230);
        _swift_initStaticObject();
        FUN_001da650();
        if ((uVar3 & 0x1f) != 1) {
          return;
        }
        _swift_initStaticObject(uVar2,0xaf5d60);
        FUN_001ee898();
        return;
      }
      if ((uVar3 & 0x1f) == 2) {
        func_0x000115a8(0xaf4058,&UNK_007e5230);
        goto LAB_001ed320;
      }
    }
LAB_001ed21c:
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
  else {
    if (bVar1 < 5) {
      if (bVar1 == 3) {
        if (uVar3 - 0x61 < 2) {
          return;
        }
        if (uVar3 == 0x60) goto LAB_001ed21c;
      }
      else if (1 < uVar3 - 0x82) {
        if (uVar3 == 0x80) {
          func_0x000115a8(0xaf4058,&UNK_007e5230);
        }
        else {
          func_0x000115a8(0xaf4058,&UNK_007e5230);
        }
        goto LAB_001ed320;
      }
    }
    else {
      if (bVar1 != 5) {
        if (uVar3 == 0xc0) {
          return;
        }
        func_0x000115a8(0xaf4058,&UNK_007e5230);
        goto LAB_001ed320;
      }
      if (1 < uVar3 - 0xa0) {
        if (uVar3 == 0xa2) {
          return;
        }
        goto LAB_001ed21c;
      }
    }
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
LAB_001ed320:
  _swift_initStaticObject();
  FUN_001da650();
  return;
}



/* Entry: 001ee03c; end: 001ee07f;  */

void FUN_001ee03c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_001ede04(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ee080; end: 001ee087;  */

void FUN_001ee080(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte bVar9;
  byte *unaff_x20;
  
  bVar9 = *unaff_x20;
  bVar4 = bVar9 >> 5;
  if (2 < bVar4) {
    if (bVar4 < 5) {
      if (bVar4 == 3) {
        if (bVar9 < 0x62) {
          if (bVar9 == 0x60) {
            uVar7 = 2;
          }
          else {
            uVar7 = 3;
          }
        }
        else if (bVar9 == 0x62) {
          uVar7 = 4;
        }
        else {
          uVar7 = 5;
        }
      }
      else if (bVar9 < 0x82) {
        if (bVar9 == 0x80) {
          uVar7 = 6;
        }
        else {
          uVar7 = 7;
        }
      }
      else if (bVar9 == 0x82) {
        uVar7 = 8;
      }
      else {
        uVar7 = 9;
      }
    }
    else if (bVar4 == 5) {
      if (bVar9 < 0xa2) {
        if (bVar9 == 0xa0) {
          uVar7 = 10;
        }
        else {
          uVar7 = 0xb;
        }
      }
      else if (bVar9 == 0xa2) {
        uVar7 = 0xc;
      }
      else {
        uVar7 = 0xd;
      }
    }
    else if (bVar9 == 0xc0) {
      uVar7 = 0xe;
    }
    else {
      uVar7 = 0x10;
    }
    __ss6HasherV8_combineyySuF(uVar7);
    return;
  }
  if (bVar4 == 0) {
    __ss6HasherV8_combineyySuF(0);
    pcVar1 = "doubleEncryptionResolver";
    pcVar2 = "doubleEncryptionInvoker";
    pcVar3 = "encryptionInfoProvider";
    bVar6 = bVar9 == 1;
    uVar7 = 0xd000000000000017;
    if (!bVar6) {
      uVar7 = 0xd000000000000016;
    }
  }
  else {
    if (bVar4 != 1) {
      __ss6HasherV8_combineyySuF(0xf);
      bVar6 = (bVar9 & 0x1f) != 1;
      uVar7 = 0x7475436b63697571;
      if (bVar6) {
        uVar7 = 0x6c6172656e6567;
      }
      uVar8 = 0xe800000000000000;
      if (bVar6) {
        uVar8 = 0xe700000000000000;
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar7,uVar8);
      goto LAB_001edf7c;
    }
    bVar9 = bVar9 & 0x1f;
    __ss6HasherV8_combineyySuF(1);
    pcVar1 = "opportunisticRetranscode";
    pcVar2 = "snapDocTranscode";
    uVar7 = 0xd000000000000010;
    pcVar3 = "snapDocTranscodeForExport";
    bVar6 = bVar9 == 1;
    if (!bVar6) {
      uVar7 = 0xd000000000000019;
    }
  }
  if (!bVar6) {
    pcVar2 = pcVar3;
  }
  uVar5 = 0xd000000000000018;
  if (bVar9 != 0) {
    uVar5 = uVar7;
    pcVar1 = pcVar2;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  uVar8 = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
LAB_001edf7c:
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar8);
  return;
}



/* Entry: 001ee088; end: 001ee0c7;  */

void FUN_001ee088(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_001ede04(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ee0c8; end: 001ee0d3;  */

bool FUN_001ee0c8(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = *param_2;
  bVar2 = *param_1;
  bVar3 = bVar2 >> 5;
  if (bVar3 < 3) {
    if (bVar3 == 0) {
      if (bVar1 < 0x20) {
        return bVar2 == bVar1;
      }
    }
    else if (bVar3 == 1) {
      if ((bVar1 & 0xe0) == 0x20) {
LAB_001ee998:
        return ((bVar1 ^ bVar2) & 0x1f) == 0;
      }
    }
    else if ((bVar1 & 0xe0) == 0x40) goto LAB_001ee998;
  }
  else if (bVar3 < 5) {
    if (bVar3 == 3) {
      if (bVar2 < 0x62) {
        if (bVar2 == 0x60) {
          if (bVar1 == 0x60) {
            return true;
          }
        }
        else if (bVar1 == 0x61) {
          return true;
        }
      }
      else if (bVar2 == 0x62) {
        if (bVar1 == 0x62) {
          return true;
        }
      }
      else if (bVar1 == 99) {
        return true;
      }
    }
    else if (bVar2 < 0x82) {
      if (bVar2 == 0x80) {
        if (bVar1 == 0x80) {
          return true;
        }
      }
      else if (bVar1 == 0x81) {
        return true;
      }
    }
    else if (bVar2 == 0x82) {
      if (bVar1 == 0x82) {
        return true;
      }
    }
    else if (bVar1 == 0x83) {
      return true;
    }
  }
  else if (bVar3 == 5) {
    if (bVar2 < 0xa2) {
      if (bVar2 == 0xa0) {
        if (bVar1 == 0xa0) {
          return true;
        }
      }
      else if (bVar1 == 0xa1) {
        return true;
      }
    }
    else if (bVar2 == 0xa2) {
      if (bVar1 == 0xa2) {
        return true;
      }
    }
    else if (bVar1 == 0xa3) {
      return true;
    }
  }
  else if (bVar2 == 0xc0) {
    if (bVar1 == 0xc0) {
      return true;
    }
  }
  else if (bVar1 == 0xc1) {
    return true;
  }
  return false;
}



/* Entry: 001ee0d4; end: 001ee1c3;  */

undefined8 FUN_001ee0d4(ulong *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x20;
  ulong uVar4;
  long lVar5;
  long alStack_88 [9];
  
  lVar5 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(alStack_88,*(undefined8 *)(lVar5 + 0x28));
  uVar4 = param_2;
  __ss6HasherV8_combineyySuF();
  __ss6HasherV9_finalizeSiyF();
  uVar2 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar4 = uVar4 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0) {
    do {
      uVar3 = *(ulong *)(*(long *)(lVar5 + 0x30) + uVar4 * 8);
      if ((int)uVar3 == (int)param_2) {
        uVar1 = 0;
        goto LAB_001ee1a8;
      }
      uVar4 = uVar4 + 1 & ~uVar2;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar5);
  alStack_88[0] = *unaff_x20;
  FUN_001ee1c4(param_2,uVar4,lVar5);
  *unaff_x20 = alStack_88[0];
  uVar1 = 1;
  uVar3 = param_2;
LAB_001ee1a8:
  *param_1 = uVar3;
  return uVar1;
}



/* Entry: 001ee1c4; end: 001ee2f3;  */

void FUN_001ee1c4(ulong param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 auStack_78 [72];
  
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_001ee504();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_001ee2f4(uVar3 + 1);
    }
    else {
      FUN_001ee644();
    }
    lVar4 = *unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(auStack_78,*(undefined8 *)(lVar4 + 0x28));
    param_2 = param_1;
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if ((int)*(undefined8 *)(*(long *)(lVar4 + 0x30) + param_2 * 8) == (int)param_1) {
          __ss50ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&UNK_009b8418);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1ee2f4);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar2 = *unaff_x20;
  lVar4 = lVar2 + (param_2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x38) = *(ulong *)(lVar4 + 0x38) | 1L << (param_2 & 0x3f);
  *(ulong *)(*(long *)(lVar2 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1ee2e4);
  (*pcVar1)();
}



/* Entry: 001ee2f4; end: 001ee503;  */

void FUN_001ee2f4(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0xaf40c8;
  func_0x000115a8(0xaf40c8,&UNK_007e51c0);
  lVar5 = lVar13;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar13,lVar1,0,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_001ee4cc:
    _swift_release(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar13 + 0x38);
  lVar1 = lVar5 + 0x38;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1ee500);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) goto LAB_001ee4cc;
        uVar12 = ((ulong *)(lVar13 + 0x38))[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar7;
    }
    uVar14 = *(ulong *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar15 << 6) * 8);
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    uVar10 = uVar14;
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1ee504);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar10 != uVar6) {
          uVar8 = uVar10;
        }
        bVar2 = (bool)(uVar10 == uVar6 | bVar2);
        uVar10 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar14;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 001ee504; end: 001ee643;  */

void FUN_001ee504(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x000115a8(0xaf40c8,&UNK_007e51c0);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  __ss11_SetStorageC4copy8originalAByxGs05__RawaB0C_tFZ();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      _memmove(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1ee644);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_001ee624;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
           *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
    } while( true );
  }
LAB_001ee624:
  _swift_release(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 001ee644; end: 001ee897;  */

void FUN_001ee644(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0xaf40c8;
  func_0x000115a8(0xaf40c8,&UNK_007e51c0);
  lVar5 = lVar13;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar13,lVar1,1,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_001ee864:
    _swift_release(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *puVar14;
  lVar1 = lVar5 + 0x38;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1ee894);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar16) {
          uVar12 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
          if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
            *puVar14 = -1L << (uVar12 & 0x3f);
          }
          else {
            _bzero(puVar14,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_001ee864;
        }
        uVar12 = puVar14[lVar16];
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar7;
    }
    uVar15 = *(ulong *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar16 << 6) * 8);
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    uVar10 = uVar15;
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1ee898);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar10 != uVar6) {
          uVar8 = uVar10;
        }
        bVar2 = (bool)(uVar10 == uVar6 | bVar2);
        uVar10 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar15;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Entry: 001ee898; end: 001ee8ef;  */

undefined8 FUN_001ee898(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x20);
    uStack_38 = param_2;
    do {
      FUN_001ee0d4(auStack_40,*puVar2);
      lVar1 = lVar1 + -1;
      param_2 = uStack_38;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0);
  }
  return param_2;
}



/* Entry: 001ee8f0; end: 001eea9f;  */

bool FUN_001ee8f0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1 & 0xff;
  uVar2 = param_2 & 0xff;
  uVar3 = param_1 >> 5 & 7;
  if (uVar3 < 3) {
    if (uVar3 == 0) {
      if (uVar2 < 0x20) {
        return uVar1 == uVar2;
      }
    }
    else if (uVar3 == 1) {
      if ((param_2 & 0xe0) == 0x20) {
LAB_001ee998:
        return ((uVar2 ^ uVar1) & 0x1f) == 0;
      }
    }
    else if ((param_2 & 0xe0) == 0x40) goto LAB_001ee998;
  }
  else if (uVar3 < 5) {
    if (uVar3 == 3) {
      if (uVar1 < 0x62) {
        if (uVar1 == 0x60) {
          if (uVar2 == 0x60) {
            return true;
          }
        }
        else if (uVar2 == 0x61) {
          return true;
        }
      }
      else if (uVar1 == 0x62) {
        if (uVar2 == 0x62) {
          return true;
        }
      }
      else if (uVar2 == 99) {
        return true;
      }
    }
    else if (uVar1 < 0x82) {
      if (uVar1 == 0x80) {
        if (uVar2 == 0x80) {
          return true;
        }
      }
      else if (uVar2 == 0x81) {
        return true;
      }
    }
    else if (uVar1 == 0x82) {
      if (uVar2 == 0x82) {
        return true;
      }
    }
    else if (uVar2 == 0x83) {
      return true;
    }
  }
  else if (uVar3 == 5) {
    if (uVar1 < 0xa2) {
      if (uVar1 == 0xa0) {
        if (uVar2 == 0xa0) {
          return true;
        }
      }
      else if (uVar2 == 0xa1) {
        return true;
      }
    }
    else if (uVar1 == 0xa2) {
      if (uVar2 == 0xa2) {
        return true;
      }
    }
    else if (uVar2 == 0xa3) {
      return true;
    }
  }
  else if (uVar1 == 0xc0) {
    if (uVar2 == 0xc0) {
      return true;
    }
  }
  else if (uVar2 == 0xc1) {
    return true;
  }
  return false;
}



/* Entry: 001eeaa0; end: 001eeb0b;  */

ulong FUN_001eeaa0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 001eeb0c; end: 001eeb0f;  */

void FUN_001eeb0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5f70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e75f0;
  _swift_getWitnessTable(&UNK_007e75f0,&UNK_009baaa8);
  puRam0000000000af5f70 = puVar1;
  return;
}



/* Entry: 001eeb10; end: 001eeb4f;  */

void FUN_001eeb10(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5f70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e75f0;
  _swift_getWitnessTable(&UNK_007e75f0,&UNK_009baaa8);
  puRam0000000000af5f70 = puVar1;
  return;
}



/* Entry: 001eeb50; end: 001eeb53;  */

void FUN_001eeb50(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5f78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7690;
  _swift_getWitnessTable(&UNK_007e7690,&UNK_009bab38);
  puRam0000000000af5f78 = puVar1;
  return;
}



/* Entry: 001eeb54; end: 001eeb93;  */

void FUN_001eeb54(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5f78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7690;
  _swift_getWitnessTable(&UNK_007e7690,&UNK_009bab38);
  puRam0000000000af5f78 = puVar1;
  return;
}



/* Entry: 001eeb94; end: 001eeb97;  */

void FUN_001eeb94(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5f80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7730;
  _swift_getWitnessTable(&UNK_007e7730,&UNK_009babc8);
  puRam0000000000af5f80 = puVar1;
  return;
}



/* Entry: 001eeb98; end: 001eebd7;  */

void FUN_001eeb98(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5f80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7730;
  _swift_getWitnessTable(&UNK_007e7730,&UNK_009babc8);
  puRam0000000000af5f80 = puVar1;
  return;
}



/* Entry: 001eebd8; end: 001eebfb;  */

void FUN_001eebd8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001eebfc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001eebfc; end: 001eec3b;  */

void FUN_001eebfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5f88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e77ec;
  _swift_getWitnessTable(&UNK_007e77ec,&UNK_009bac58);
  puRam0000000000af5f88 = puVar1;
  return;
}



/* Entry: 001eec3c; end: 001eec3f;  */

void FUN_001eec3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5f90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e782c;
  _swift_getWitnessTable(&UNK_007e782c,&UNK_009bac58);
  puRam0000000000af5f90 = puVar1;
  return;
}



/* Entry: 001eec40; end: 001eec7f;  */

void FUN_001eec40(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5f90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e782c;
  _swift_getWitnessTable(&UNK_007e782c,&UNK_009bac58);
  puRam0000000000af5f90 = puVar1;
  return;
}



/* Entry: 001eec80; end: 001ef24f;  */

int FUN_001eec80(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001eed28;
        goto LAB_001eed0c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001eed0c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_001eed28:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001ef250; end: 001ef2fb;  */

void FUN_001ef250(void)

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



/* Entry: 001ef2fc; end: 001ef353;  */

undefined8 FUN_001ef2fc(void)

{
  undefined8 uVar1;
  byte *unaff_x20;
  
  if ((1 << (ulong)(*unaff_x20 & 0x1f) & 0xd7U) != 0) {
    return 0;
  }
  uVar1 = 0xaf4058;
  func_0x000115a8(0xaf4058,&UNK_007e5230);
  _swift_initStaticObject();
  FUN_001da650();
  return uVar1;
}



/* Entry: 001ef354; end: 001ef35f;  */

undefined1  [16] FUN_001ef354(void)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  bVar3 = *unaff_x20;
  if (3 < bVar3) {
    pcVar2 = "TweakUsageReporter";
    uVar4 = 0xd000000000000015;
    if (bVar3 != 6) {
      pcVar2 = "SpectaclesDeviceConnection";
      uVar4 = 0xd000000000000012;
    }
    pcVar1 = "NavigationServicesPrewarm";
    uVar5 = 0xd00000000000001a;
    if (bVar3 != 4) {
      pcVar1 = "SaberStartupReporting";
      uVar5 = 0xd000000000000019;
    }
    if (bVar3 < 6) {
      pcVar2 = pcVar1;
      uVar4 = uVar5;
    }
    auVar7._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
    auVar7._0_8_ = uVar4;
    return auVar7;
  }
  pcVar2 = "UserSessionRepositoryPrewarm";
  uVar4 = 0xd00000000000001a;
  if (bVar3 != 2) {
    pcVar2 = "UserStorageServicesCleanup";
    uVar4 = 0xd00000000000001c;
  }
  pcVar1 = "geServicesPrewarm";
  uVar5 = 0xd000000000000024;
  if (bVar3 != 0) {
    pcVar1 = "UserStorageServicesPrewarm";
    uVar5 = 0xd000000000000021;
  }
  if (bVar3 < 2) {
    pcVar2 = pcVar1;
    uVar4 = uVar5;
  }
  auVar6._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 001ef360; end: 001ef39f;  */

void FUN_001ef360(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af60a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e78f8;
  _swift_getWitnessTable(&UNK_007e78f8,&UNK_009bad68);
  puRam0000000000af60a8 = puVar1;
  return;
}



/* Entry: 001ef3a0; end: 001ef3c3;  */

void FUN_001ef3a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001ef3c4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001ef3c4; end: 001ef403;  */

void FUN_001ef3c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af60b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7920;
  _swift_getWitnessTable(&UNK_007e7920,&UNK_009bad68);
  puRam0000000000af60b0 = puVar1;
  return;
}



/* Entry: 001ef404; end: 001ef567;  */

int FUN_001ef404(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf8 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 7) {
      iVar2 = 4;
    }
    if (param_2 + 7 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001ef480;
        goto LAB_001ef464;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001ef464:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_001ef480:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001ef568; end: 001ef82f;  */

void FUN_001ef568(ulong param_1,byte param_2)

{
  uint uVar1;
  long lVar2;
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      lVar2 = 0xaf4058;
      func_0x000115a8(0xaf4058,&UNK_007e5230);
      _swift_initStackObject();
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      *(ulong *)(lVar2 + 0x20) = param_1;
      FUN_001da650();
      _swift_setDeallocating(lVar2);
      return;
    }
    if (param_2 != 1) goto LAB_001ef628;
    uVar1 = (uint)param_1 & 0xff;
    if (uVar1 == 1 || (param_1 & 0xff) == 0) {
      if ((param_1 & 0xff) == 0) {
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
  else if (param_2 == 2) {
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
  else if (param_2 == 3) {
    switch(param_1) {
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



/* Entry: 001ef830; end: 001efcdb;  */

undefined1  [16] FUN_001ef830(ulong param_1,byte param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      uVar2 = 0xd000000000000013;
      uVar4 = 0x80000000008bdfc0;
      goto LAB_001efb0c;
    }
    lVar3 = 0xae6940;
    func_0x000115a8(0xae6940,&UNK_007da060);
    _swift_allocObject();
    *(undefined8 *)(lVar3 + 0x18) = 4;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    *(undefined8 *)(lVar3 + 0x20) = 0xd000000000000017;
    *(undefined8 *)(lVar3 + 0x28) = 0x80000000008bdfa0;
    uVar1 = (uint)param_1 & 0xff;
    if (uVar1 == 1 || (param_1 & 0xff) == 0) {
      if ((param_1 & 0xff) == 0) {
        uVar5 = 0xeb00000000646565;
        uVar6 = 0x4673646e65697266;
      }
      else {
        uVar5 = 0xe300000000000000;
        uVar6 = 0x70616d;
      }
    }
    else if (uVar1 == 2) {
      uVar5 = 0xe500000000000000;
      uVar6 = 0x79726f7473;
    }
    else if (uVar1 == 3) {
      uVar5 = 0xed00006465654674;
      uVar6 = 0x6867696c746f7073;
    }
    else {
      uVar6 = 0x6e776f6e6b6e75;
      uVar5 = 0xe700000000000000;
    }
  }
  else {
    if (param_2 != 2) {
      uVar5 = 0xee00676e6974726f;
      uVar6 = 0x706552646e756f53;
                    /* WARNING: Could not recover jumptable at 0x001ef9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_007e79aa)[param_1] * 4 + 0x1ef9c0))
                (0x706552646e756f53,0xee00676e6974726f);
      auVar7._8_8_ = uVar5;
      auVar7._0_8_ = uVar6;
      return auVar7;
    }
    lVar3 = 0xae6940;
    func_0x000115a8(0xae6940,&UNK_007da060);
    _swift_allocObject();
    *(undefined8 *)(lVar3 + 0x18) = 4;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    uVar6 = 0xd000000000000013;
    *(undefined8 *)(lVar3 + 0x20) = 0xd000000000000013;
    *(undefined8 *)(lVar3 + 0x28) = 0x80000000008bdf00;
    uVar1 = (uint)param_1 & 0xff;
    if (uVar1 == 1 || (param_1 & 0xff) == 0) {
      if ((param_1 & 0xff) == 0) {
        uVar5 = 0xe900000000000064;
        uVar6 = 0x6565466f54646461;
      }
      else {
        uVar5 = 0xee00646565466d6f;
        uVar6 = 0x724665766f6d6572;
      }
    }
    else if (uVar1 == 2) {
      uVar5 = 0xe800000000000000;
      uVar6 = 0x646565466e497369;
    }
    else if (uVar1 == 3) {
      uVar5 = 0xea0000000000736d;
      uVar6 = 0x6574496863746566;
    }
    else {
      uVar5 = 0x80000000008bdf20;
    }
  }
  *(undefined8 *)(lVar3 + 0x30) = uVar6;
  *(undefined8 *)(lVar3 + 0x38) = uVar5;
  uVar6 = 0xae6938;
  func_0x000115a8(0xae6938,&UNK_007cdb30);
  uVar5 = uVar6;
  func_0x0002f390();
  uVar2 = 0x23;
  uVar4 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar6,uVar5);
  _swift_release(lVar3);
LAB_001efb0c:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = uVar2;
  return auVar8;
}



/* Entry: 001efcdc; end: 001efd0f;  */

undefined8 FUN_001efcdc(void)

{
  return 1;
}



/* Entry: 001efd10; end: 001efd63;  */

void FUN_001efd10(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0xd000000000000018,0x80000000008be040);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001efd64; end: 001efd7f;  */

void FUN_001efd64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00778470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_0099af98)
            (param_1,0xd000000000000018,0x80000000008be040);
  return;
}



/* Entry: 001efd80; end: 001efdcf;  */

void FUN_001efd80(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0xd000000000000018,0x80000000008be040);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001efdd0; end: 001efe77;  */

undefined8 FUN_001efdd0(void)

{
  return 1;
}



/* Entry: 001efe78; end: 001efeab;  */

void FUN_001efe78(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_001f0d30(uVar1,param_2[1],0xaf6750);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 001efeac; end: 001eff53;  */

void FUN_001efeac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar4 = 0xeb00000000646565;
  uVar5 = 0xed00006465654674;
  uVar2 = 0x6867696c746f7073;
  if (bVar3 != 3) {
    uVar5 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e75;
  }
  uVar1 = 0x79726f7473;
  if (bVar3 != 2) {
    uVar1 = uVar2;
  }
  uVar2 = 0xe500000000000000;
  if (bVar3 != 2) {
    uVar2 = uVar5;
  }
  uVar5 = 0x4673646e65697266;
  if (bVar3 != 0) {
    uVar4 = 0xe300000000000000;
    uVar5 = 0x70616d;
  }
  if (bVar3 < 2) {
    uVar2 = uVar4;
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 001eff54; end: 001f01e3;  */

void FUN_001eff54(void)

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
  uVar4 = 0xeb00000000646565;
  uVar5 = 0xed00006465654674;
  uVar2 = 0x6867696c746f7073;
  if (bVar3 != 3) {
    uVar5 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e75;
  }
  uVar1 = 0x79726f7473;
  if (bVar3 != 2) {
    uVar1 = uVar2;
  }
  uVar2 = 0xe500000000000000;
  if (bVar3 != 2) {
    uVar2 = uVar5;
  }
  uVar5 = 0x4673646e65697266;
  if (bVar3 != 0) {
    uVar4 = 0xe300000000000000;
    uVar5 = 0x70616d;
  }
  if (bVar3 < 2) {
    uVar2 = uVar4;
    uVar1 = uVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f01e4; end: 001f025f;  */

undefined8 FUN_001f01e4(void)

{
  return 1;
}



/* Entry: 001f0260; end: 001f02cb;  */

void FUN_001f0260(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 001f02cc; end: 001f030f;  */

void FUN_001f02cc(undefined8 *param_1)

{
  *param_1 = 0x616f4c6b63617274;
  param_1[1] = 0xeb00000000726564;
  return;
}



/* Entry: 001f0310; end: 001f035b;  */

void FUN_001f0310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,param_3,param_4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f035c; end: 001f039b;  */

void FUN_001f035c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00778470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_0099af98)
            (param_1,0x616f4c6b63617274,0xeb00000000726564);
  return;
}



/* Entry: 001f039c; end: 001f03e3;  */

void FUN_001f039c(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,in_x3,in_x4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f03e4; end: 001f03f7;  */

bool FUN_001f03e4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}


