/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001e67c0; end: 001e67ff;  */

void FUN_001e67c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af53b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6898;
  _swift_getWitnessTable(&UNK_007e6898,&UNK_009b9c88);
  puRam0000000000af53b8 = puVar1;
  return;
}



/* Entry: 001e6800; end: 001e6823;  */

void FUN_001e6800(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001e6824();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001e6824; end: 001e6863;  */

void FUN_001e6824(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af53c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e68c0;
  _swift_getWitnessTable(&UNK_007e68c0,&UNK_009b9c88);
  puRam0000000000af53c0 = puVar1;
  return;
}



/* Entry: 001e6864; end: 001e69db;  */

int FUN_001e6864(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001e68e0;
        goto LAB_001e68c4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001e68c4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_001e68e0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001e69dc; end: 001e6a87;  */

void FUN_001e69dc(void)

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



/* Entry: 001e6a88; end: 001e6a8b;  */

void FUN_001e6a88(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af53c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6940;
  _swift_getWitnessTable(&UNK_007e6940,&UNK_009b9d78);
  puRam0000000000af53c8 = puVar1;
  return;
}



/* Entry: 001e6a8c; end: 001e6acb;  */

void FUN_001e6a8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af53c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6940;
  _swift_getWitnessTable(&UNK_007e6940,&UNK_009b9d78);
  puRam0000000000af53c8 = puVar1;
  return;
}



/* Entry: 001e6acc; end: 001e6b3f;  */

undefined8 FUN_001e6acc(void)

{
  return 0;
}



/* Entry: 001e6b40; end: 001e6b63;  */

void FUN_001e6b40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001e6b64();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001e6b64; end: 001e6ba3;  */

void FUN_001e6b64(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af53d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6968;
  _swift_getWitnessTable(&UNK_007e6968,&UNK_009b9d78);
  puRam0000000000af53d0 = puVar1;
  return;
}



/* Entry: 001e6ba4; end: 001e6d0f;  */

int FUN_001e6ba4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001e6c20;
        goto LAB_001e6c04;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001e6c04:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_001e6c20:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001e6d10; end: 001e6daf;  */

void FUN_001e6d10(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e6db0; end: 001e6ddf;  */

undefined * FUN_001e6db0(void)

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



/* Entry: 001e6de0; end: 001e6dff;  */

undefined1  [16] FUN_001e6de0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x80000000008bbe60;
  auVar1._0_8_ = 0xd00000000000001d;
  return auVar1;
}



/* Entry: 001e6e00; end: 001e6e3f;  */

void FUN_001e6e00(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af53d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e69f8;
  _swift_getWitnessTable(&UNK_007e69f8,&UNK_009b9e68);
  puRam0000000000af53d8 = puVar1;
  return;
}



/* Entry: 001e6e40; end: 001e6e63;  */

void FUN_001e6e40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001e6e64();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001e6e64; end: 001e6ea3;  */

void FUN_001e6e64(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af53e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6a20;
  _swift_getWitnessTable(&UNK_007e6a20,&UNK_009b9e68);
  puRam0000000000af53e0 = puVar1;
  return;
}



/* Entry: 001e6ea4; end: 001e6f8f;  */

uint FUN_001e6ea4(uint *param_1,int param_2)

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



/* Entry: 001e6f90; end: 001e716f;  */

void FUN_001e6f90(long param_1,char param_2)

{
  long lVar1;
  
  if (param_2 == '\x01') {
    lVar1 = 0xaf4058;
    func_0x000115a8(0xaf4058,&UNK_007e5230);
    _swift_initStackObject();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = param_1;
    FUN_001da650();
    _swift_setDeallocating(lVar1);
  }
  else if (param_2 == '\x02') {
    if (param_1 < 10) {
      if (param_1 - 5U < 3) {
        func_0x000115a8(0xaf4058,&UNK_007e5230);
      }
      else if (param_1 == 0) {
        func_0x000115a8(0xaf4058,&UNK_007e5230);
      }
      else {
        if (param_1 != 8) {
          return;
        }
        func_0x000115a8(0xaf4058,&UNK_007e5230);
      }
    }
    else if (param_1 < 0xc) {
      if (param_1 == 10) {
        func_0x000115a8(0xaf4058,&UNK_007e5230);
      }
      else {
        if (param_1 != 0xb) {
          return;
        }
        func_0x000115a8(0xaf4058,&UNK_007e5230);
      }
    }
    else if (param_1 == 0xc) {
      func_0x000115a8(0xaf4058,&UNK_007e5230);
    }
    else if (param_1 == 0xd) {
      func_0x000115a8(0xaf4058,&UNK_007e5230);
    }
    else {
      if (param_1 != 0xe) {
        return;
      }
      func_0x000115a8(0xaf4058,&UNK_007e5230);
    }
    _swift_initStaticObject();
    FUN_001da650();
  }
  return;
}



/* Entry: 001e7170; end: 001e7543;  */

undefined1  [16] FUN_001e7170(ulong param_1,char param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_2 == '\0') {
    lVar2 = 0xae6940;
    func_0x000115a8(0xae6940,&UNK_007da060);
    _swift_allocObject();
    *(undefined8 *)(lVar2 + 0x18) = 4;
    *(undefined8 *)(lVar2 + 0x10) = 2;
    *(undefined8 *)(lVar2 + 0x20) = 0x7461686370616e53;
    *(undefined8 *)(lVar2 + 0x28) = 0xec00000073726574;
    uVar1 = (uint)param_1 & 0xff;
    if (uVar1 == 1 || (param_1 & 0xff) == 0) {
      if ((param_1 & 0xff) == 0) {
        uVar3 = 0xe900000000000061;
        uVar6 = 0x7461446775626564;
      }
      else {
        uVar3 = 0xec00000072656c64;
        uVar6 = 0x6e6148726f727265;
      }
    }
    else if (uVar1 == 2) {
      uVar3 = 0xe800000000000000;
      uVar6 = 0x6863746566657270;
    }
    else {
      uVar3 = 0xee00726567676f4c;
      uVar6 = 0x656e656870617267;
    }
    *(undefined8 *)(lVar2 + 0x30) = uVar6;
    *(undefined8 *)(lVar2 + 0x38) = uVar3;
    uVar6 = 0xae6938;
    func_0x000115a8(0xae6938,&UNK_007cdb30);
    uVar4 = uVar6;
    func_0x0002f390();
    uVar3 = 0x23;
    uVar5 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar6,uVar4);
    _swift_release(lVar2);
  }
  else {
    if (param_2 != '\x01') {
      uVar6 = 0xee00746567646957;
      uVar3 = 0x65646f6370616e53;
                    /* WARNING: Could not recover jumptable at 0x001e7264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_007e6aa0)[param_1] * 4 + 0x1e7268))
                (0x65646f6370616e53,0xee00746567646957);
      auVar7._8_8_ = uVar6;
      auVar7._0_8_ = uVar3;
      return auVar7;
    }
    uVar5 = 0x80000000008bd660;
    uVar3 = 0xd000000000000029;
  }
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar3;
  return auVar8;
}



/* Entry: 001e7544; end: 001e7557;  */

bool FUN_001e7544(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 001e7558; end: 001e7583;  */

void FUN_001e7558(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_001e7d84(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 001e7584; end: 001e761b;  */

void FUN_001e7584(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar1 = 0x6863746566657270;
  if (bVar4 != 2) {
    uVar1 = 0x656e656870617267;
  }
  uVar3 = 0xe800000000000000;
  if (bVar4 != 2) {
    uVar3 = 0xee00726567676f4c;
  }
  uVar2 = 0xe900000000000061;
  uVar5 = 0x7461446775626564;
  if (bVar4 != 0) {
    uVar2 = 0xec00000072656c64;
    uVar5 = 0x6e6148726f727265;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  param_1[1] = uVar3;
  return;
}



/* Entry: 001e761c; end: 001e7a27;  */

void FUN_001e761c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0x6863746566657270;
  if (bVar4 != 2) {
    uVar1 = 0x656e656870617267;
  }
  uVar3 = 0xe800000000000000;
  if (bVar4 != 2) {
    uVar3 = 0xee00726567676f4c;
  }
  uVar2 = 0xe900000000000061;
  uVar5 = 0x7461446775626564;
  if (bVar4 != 0) {
    uVar2 = 0xec00000072656c64;
    uVar5 = 0x6e6148726f727265;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar1 = uVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e7a28; end: 001e7a3f;  */

void FUN_001e7a28(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  if ((char)unaff_x20[1] == '\x01') {
    lVar1 = 0xaf4058;
    func_0x000115a8(0xaf4058,&UNK_007e5230);
    _swift_initStackObject();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = lVar2;
    FUN_001da650();
    _swift_setDeallocating(lVar1);
  }
  else if ((char)unaff_x20[1] == '\x02') {
    if (lVar2 < 10) {
      if (lVar2 - 5U < 3) {
        func_0x000115a8(0xaf4058,&UNK_007e5230);
      }
      else if (lVar2 == 0) {
        func_0x000115a8(0xaf4058,&UNK_007e5230);
      }
      else {
        if (lVar2 != 8) {
          return;
        }
        func_0x000115a8(0xaf4058,&UNK_007e5230);
      }
    }
    else if (lVar2 < 0xc) {
      if (lVar2 == 10) {
        func_0x000115a8(0xaf4058,&UNK_007e5230);
      }
      else {
        if (lVar2 != 0xb) {
          return;
        }
        func_0x000115a8(0xaf4058,&UNK_007e5230);
      }
    }
    else if (lVar2 == 0xc) {
      func_0x000115a8(0xaf4058,&UNK_007e5230);
    }
    else if (lVar2 == 0xd) {
      func_0x000115a8(0xaf4058,&UNK_007e5230);
    }
    else {
      if (lVar2 != 0xe) {
        return;
      }
      func_0x000115a8(0xaf4058,&UNK_007e5230);
    }
    _swift_initStaticObject();
    FUN_001da650();
  }
  return;
}



/* Entry: 001e7a40; end: 001e7a8b;  */

void FUN_001e7a40(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x001e787c(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e7a8c; end: 001e7a97;  */

void FUN_001e7a8c(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  
  uVar6 = *unaff_x20;
  if ((char)unaff_x20[1] == '\0') {
    __ss6HasherV8_combineyySuF(1);
    uVar1 = (uint)uVar6 & 0xff;
    uVar3 = 0x6863746566657270;
    if (uVar1 != 2) {
      uVar3 = 0x656e656870617267;
    }
    uVar4 = 0xe800000000000000;
    if (uVar1 != 2) {
      uVar4 = 0xee00726567676f4c;
    }
    uVar2 = 0xe900000000000061;
    uVar5 = 0x7461446775626564;
    if ((uVar6 & 0xff) != 0) {
      uVar2 = 0xec00000072656c64;
      uVar5 = 0x6e6148726f727265;
    }
    if (uVar1 == 1 || (uVar6 & 0xff) == 0) {
      uVar3 = uVar5;
    }
    if (uVar1 == 1 || (uVar6 & 0xff) == 0) {
      uVar4 = uVar2;
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar4);
    return;
  }
  if ((char)unaff_x20[1] != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x001e7984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_007e6ab4)[uVar6] * 4 + 0x1e7988))();
    return;
  }
  __ss6HasherV8_combineyySuF(3);
  __ss6HasherV8_combineyySuF(uVar6);
  return;
}



/* Entry: 001e7a98; end: 001e7adf;  */

void FUN_001e7a98(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x001e787c(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e7ae0; end: 001e7d83;  */

ulong FUN_001e7ae0(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if ((char)param_1[1] == '\0') {
    if (*(char *)(param_2 + 1) == '\0') {
      return (ulong)((((uint)*param_2 ^ (uint)uVar1) & 0xff) == 0);
    }
  }
  else {
    if ((char)param_1[1] != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x001e7b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_007e6ac8)[uVar1] * 4 + 0x1e7b48))();
      return uVar1;
    }
    if (*(char *)(param_2 + 1) == '\x01') {
      return (ulong)((uint)uVar1 == (uint)*param_2);
    }
  }
  return 0;
}



/* Entry: 001e7d84; end: 001e7de7;  */

ulong FUN_001e7d84(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 001e7de8; end: 001e7deb;  */

void FUN_001e7de8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5618 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6ae8;
  _swift_getWitnessTable(&UNK_007e6ae8,&UNK_009b9f58);
  puRam0000000000af5618 = puVar1;
  return;
}



/* Entry: 001e7dec; end: 001e7e2b;  */

void FUN_001e7dec(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5618 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6ae8;
  _swift_getWitnessTable(&UNK_007e6ae8,&UNK_009b9f58);
  puRam0000000000af5618 = puVar1;
  return;
}



/* Entry: 001e7e2c; end: 001e7e4f;  */

void FUN_001e7e2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001e7e50();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001e7e50; end: 001e7e8f;  */

void FUN_001e7e50(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5620 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6ba4;
  _swift_getWitnessTable(&UNK_007e6ba4,&UNK_009b9fe8);
  puRam0000000000af5620 = puVar1;
  return;
}



/* Entry: 001e7e90; end: 001e7e93;  */

void FUN_001e7e90(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5628 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6be4;
  _swift_getWitnessTable(&UNK_007e6be4,&UNK_009b9fe8);
  puRam0000000000af5628 = puVar1;
  return;
}



/* Entry: 001e7e94; end: 001e7ed3;  */

void FUN_001e7e94(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5628 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6be4;
  _swift_getWitnessTable(&UNK_007e6be4,&UNK_009b9fe8);
  puRam0000000000af5628 = puVar1;
  return;
}



/* Entry: 001e7ed4; end: 001e810f;  */

int FUN_001e7ed4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001e7f50;
        goto LAB_001e7f34;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001e7f34:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_001e7f50:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001e8110; end: 001e81af;  */

void FUN_001e8110(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e81b0; end: 001e81b3;  */

void FUN_001e81b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af56b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6c50;
  _swift_getWitnessTable(&UNK_007e6c50,&UNK_009ba0f8);
  puRam0000000000af56b8 = puVar1;
  return;
}



/* Entry: 001e81b4; end: 001e81f3;  */

void FUN_001e81b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af56b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6c50;
  _swift_getWitnessTable(&UNK_007e6c50,&UNK_009ba0f8);
  puRam0000000000af56b8 = puVar1;
  return;
}



/* Entry: 001e81f4; end: 001e821f;  */

undefined8 FUN_001e81f4(void)

{
  return 0;
}



/* Entry: 001e8220; end: 001e8243;  */

void FUN_001e8220(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001e8244();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001e8244; end: 001e8283;  */

void FUN_001e8244(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af56c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6c78;
  _swift_getWitnessTable(&UNK_007e6c78,&UNK_009ba0f8);
  puRam0000000000af56c0 = puVar1;
  return;
}



/* Entry: 001e8284; end: 001e836f;  */

uint FUN_001e8284(uint *param_1,int param_2)

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



/* Entry: 001e8370; end: 001e84c7;  */

void FUN_001e8370(long param_1,byte param_2)

{
  long lVar1;
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      return;
    }
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
  else {
    if (param_2 == 2) {
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
    if (param_2 != 3) {
                    /* WARNING: Could not recover jumptable at 0x001e8430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_007e6d00)[param_1] * 4 + 0x1e8434))(0);
      return;
    }
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
  _swift_initStaticObject();
  FUN_001da650();
  return;
}



/* Entry: 001e84c8; end: 001e89ef;  */

undefined1  [16] FUN_001e84c8(ulong param_1,byte param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      lVar5 = 0xae6940;
      func_0x000115a8(0xae6940,&UNK_007da060);
      _swift_allocObject();
      *(undefined8 *)(lVar5 + 0x18) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      *(undefined8 *)(lVar5 + 0x20) = 0x6c697542736e654c;
      *(undefined8 *)(lVar5 + 0x28) = 0xeb00000000726564;
      uVar1 = (uint)param_1 & 0xff;
      if (uVar1 == 1 || (param_1 & 0xff) == 0) {
        if ((param_1 & 0xff) == 0) {
          uVar7 = 0x80000000008bd890;
          uVar9 = 0xd000000000000010;
        }
        else {
          uVar7 = 0xea0000000000736e;
          uVar9 = 0x654c657461657263;
        }
      }
      else if (uVar1 == 2) {
        uVar7 = 0xe900000000000073;
        uVar9 = 0x65736e654c746567;
      }
      else {
        uVar7 = 0xef74736575716552;
        uVar9 = 0x70747448736e656c;
      }
      *(undefined8 *)(lVar5 + 0x30) = uVar9;
    }
    else {
      uVar9 = 0xd000000000000017;
      lVar5 = 0xae6940;
      func_0x000115a8(0xae6940,&UNK_007da060);
      _swift_allocObject();
      *(undefined8 *)(lVar5 + 0x18) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      *(undefined8 *)(lVar5 + 0x20) = 0x61425241736e654c;
      *(undefined8 *)(lVar5 + 0x28) = 0xe900000000000072;
      if ((param_1 & 0xff) == 0) {
        uVar9 = 0xd000000000000012;
        pcVar8 = "replyActivationWorkflow";
      }
      else if (((uint)param_1 & 0xff) == 1) {
        pcVar8 = "miniCameraLensIconWorkflow";
      }
      else {
        pcVar8 = "LensCarouselPreview";
        uVar9 = 0xd00000000000001a;
      }
      uVar7 = (ulong)pcVar8 | 0x8000000000000000;
      *(undefined8 *)(lVar5 + 0x30) = uVar9;
    }
    *(ulong *)(lVar5 + 0x38) = uVar7;
    uVar9 = 0xae6938;
    func_0x000115a8(0xae6938,&UNK_007cdb30);
    uVar4 = uVar9;
    func_0x0002f390();
    uVar3 = 0x23;
    uVar6 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar9,uVar4);
    _swift_release(lVar5);
  }
  else if (param_2 == 2) {
    uVar6 = 0xec0000006c657375;
    uVar3 = 0x6f726143736e654c;
  }
  else {
    if (param_2 != 3) {
      uVar9 = 0xec0000007265726f;
      uVar4 = 0x6c707845736e654c;
                    /* WARNING: Could not recover jumptable at 0x001e86c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_007e6d11)[param_1] * 4 + 0x1e86c4))
                (0x6c707845736e654c,0xec0000007265726f);
      auVar10._8_8_ = uVar9;
      auVar10._0_8_ = uVar4;
      return auVar10;
    }
    lVar5 = 0xae6940;
    func_0x000115a8(0xae6940,&UNK_007da060);
    _swift_allocObject();
    *(undefined8 *)(lVar5 + 0x18) = 4;
    *(undefined8 *)(lVar5 + 0x10) = 2;
    *(undefined8 *)(lVar5 + 0x20) = 0xd000000000000013;
    *(undefined8 *)(lVar5 + 0x28) = 0x80000000008bd770;
    bVar2 = (param_1 & 0xff) != 1;
    uVar9 = 0x74754265736f6c63;
    if (bVar2) {
      uVar9 = 0x766f72506e6f6369;
    }
    uVar4 = 0xeb000000006e6f74;
    if (bVar2) {
      uVar4 = 0xec00000072656469;
    }
    *(undefined8 *)(lVar5 + 0x30) = uVar9;
    *(undefined8 *)(lVar5 + 0x38) = uVar4;
    uVar9 = 0xae6938;
    func_0x000115a8(0xae6938,&UNK_007cdb30);
    uVar4 = uVar9;
    func_0x0002f390();
    uVar3 = 0x23;
    uVar6 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar9,uVar4);
    _swift_release(lVar5);
  }
  auVar11._8_8_ = uVar6;
  auVar11._0_8_ = uVar3;
  return auVar11;
}



/* Entry: 001e89f0; end: 001e8a1b;  */

void FUN_001e89f0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_001e9748(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 001e8a1c; end: 001e8ab3;  */

void FUN_001e8a1c(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  uVar1 = 0xe900000000000073;
  uVar3 = 0x65736e654c746567;
  if (bVar2 != 2) {
    uVar1 = 0xef74736575716552;
    uVar3 = 0x70747448736e656c;
  }
  uVar5 = 0x80000000008bd890;
  uVar4 = 0xd000000000000010;
  if (bVar2 != 0) {
    uVar5 = 0xea0000000000736e;
    uVar4 = 0x654c657461657263;
  }
  if (bVar2 < 2) {
    uVar1 = uVar5;
    uVar3 = uVar4;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  return;
}



/* Entry: 001e8ab4; end: 001e8d13;  */

void FUN_001e8ab4(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0xe900000000000073;
  uVar3 = 0x65736e654c746567;
  if (bVar2 != 2) {
    uVar1 = 0xef74736575716552;
    uVar3 = 0x70747448736e656c;
  }
  uVar5 = 0x80000000008bd890;
  uVar4 = 0xd000000000000010;
  if (bVar2 != 0) {
    uVar5 = 0xea0000000000736e;
    uVar4 = 0x654c657461657263;
  }
  if (bVar2 < 2) {
    uVar1 = uVar5;
    uVar3 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar3,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e8d14; end: 001e8d27;  */

bool FUN_001e8d14(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 001e8d28; end: 001e8d53;  */

void FUN_001e8d28(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x001e97ac(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 001e8d54; end: 001e8daf;  */

void FUN_001e8d54(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  pcVar1 = "miniCameraLensIconWorkflow";
  uVar3 = 0xd000000000000017;
  if (*unaff_x20 != '\x01') {
    pcVar1 = "LensCarouselPreview";
    uVar3 = 0xd00000000000001a;
  }
  pcVar2 = "replyActivationWorkflow";
  uVar4 = 0xd000000000000012;
  if (*unaff_x20 != '\0') {
    pcVar2 = pcVar1;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = (ulong)pcVar2 | 0x8000000000000000;
  return;
}



/* Entry: 001e8db0; end: 001e8f4f;  */

void FUN_001e8db0(void)

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
  pcVar1 = "miniCameraLensIconWorkflow";
  uVar4 = 0xd000000000000017;
  if (cVar3 != '\x01') {
    pcVar1 = "LensCarouselPreview";
    uVar4 = 0xd00000000000001a;
  }
  pcVar2 = "replyActivationWorkflow";
  uVar5 = 0xd000000000000012;
  if (cVar3 != '\0') {
    pcVar2 = pcVar1;
    uVar5 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar5,(ulong)pcVar2 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar2 | 0x8000000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e8f50; end: 001e8fc7;  */

void FUN_001e8f50(undefined1 *param_1,long param_2)

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



/* Entry: 001e8fc8; end: 001e9017;  */

void FUN_001e8fc8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x74754265736f6c63;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x766f72506e6f6369;
  }
  uVar2 = 0xeb000000006e6f74;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xec00000072656469;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 001e9018; end: 001e919f;  */

void FUN_001e9018(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0x74754265736f6c63;
  if (cVar3 != '\x01') {
    uVar1 = 0x766f72506e6f6369;
  }
  uVar2 = 0xeb000000006e6f74;
  if (cVar3 != '\x01') {
    uVar2 = 0xec00000072656469;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e91a0; end: 001e940f;  */

void FUN_001e91a0(undefined8 param_1,ulong param_2,byte param_3)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  
  if (param_3 < 2) {
    if (param_3 != 0) {
      __ss6HasherV8_combineyySuF(9);
      if ((param_2 & 0xff) == 0) {
        uVar5 = 0xd000000000000012;
        pcVar7 = "replyActivationWorkflow";
      }
      else {
        uVar5 = 0xd000000000000017;
        pcVar7 = "miniCameraLensIconWorkflow";
        if (((uint)param_2 & 0xff) != 1) {
          uVar5 = 0xd00000000000001a;
          pcVar7 = "LensCarouselPreview";
        }
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,(ulong)pcVar7 | 0x8000000000000000);
      uVar4 = (ulong)pcVar7 | 0x8000000000000000;
      goto LAB_001e9380;
    }
    __ss6HasherV8_combineyySuF(3);
    uVar1 = (uint)param_2 & 0xff;
    uVar4 = 0xe900000000000073;
    uVar5 = 0x65736e654c746567;
    if (uVar1 != 2) {
      uVar4 = 0xef74736575716552;
      uVar5 = 0x70747448736e656c;
    }
    uVar6 = 0x80000000008bd890;
    uVar2 = 0xd000000000000010;
    if ((param_2 & 0xff) != 0) {
      uVar6 = 0xea0000000000736e;
      uVar2 = 0x654c657461657263;
    }
    if (uVar1 == 1 || (param_2 & 0xff) == 0) {
      uVar5 = uVar2;
    }
    if (uVar1 == 1 || (param_2 & 0xff) == 0) {
      uVar4 = uVar6;
    }
  }
  else {
    if (param_3 == 2) {
      __ss6HasherV8_combineyySuF(10);
      __ss6HasherV8_combineyySuF(param_2);
      return;
    }
    if (param_3 != 3) {
                    /* WARNING: Could not recover jumptable at 0x001e930c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_007e6d22)[param_2] * 4 + 0x1e9310))();
      return;
    }
    __ss6HasherV8_combineyySuF(0xb);
    bVar3 = (param_2 & 0xff) != 1;
    uVar5 = 0x74754265736f6c63;
    if (bVar3) {
      uVar5 = 0x766f72506e6f6369;
    }
    uVar4 = 0xeb000000006e6f74;
    if (bVar3) {
      uVar4 = 0xec00000072656469;
    }
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,uVar4);
LAB_001e9380:
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar4);
  return;
}



/* Entry: 001e9410; end: 001e9427;  */

void FUN_001e9410(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = *unaff_x20;
  bVar1 = *(byte *)(unaff_x20 + 1);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      return;
    }
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
  else {
    if (bVar1 == 2) {
      lVar2 = 0xaf4058;
      func_0x000115a8(0xaf4058,&UNK_007e5230);
      _swift_initStackObject();
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      *(long *)(lVar2 + 0x20) = lVar3;
      FUN_001da650();
      _swift_setDeallocating(lVar2);
      return;
    }
    if (bVar1 != 3) {
                    /* WARNING: Could not recover jumptable at 0x001e8430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_007e6d00)[lVar3] * 4 + 0x1e8434))(0);
      return;
    }
    func_0x000115a8(0xaf4058,&UNK_007e5230);
  }
  _swift_initStaticObject();
  FUN_001da650();
  return;
}



/* Entry: 001e9428; end: 001e9473;  */

void FUN_001e9428(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_001e91a0(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e9474; end: 001e947f;  */

void FUN_001e9474(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  ulong *unaff_x20;
  
  uVar7 = *unaff_x20;
  bVar2 = (byte)unaff_x20[1];
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      __ss6HasherV8_combineyySuF(9);
      if ((uVar7 & 0xff) == 0) {
        uVar6 = 0xd000000000000012;
        pcVar9 = "replyActivationWorkflow";
      }
      else {
        uVar6 = 0xd000000000000017;
        pcVar9 = "miniCameraLensIconWorkflow";
        if (((uint)uVar7 & 0xff) != 1) {
          uVar6 = 0xd00000000000001a;
          pcVar9 = "LensCarouselPreview";
        }
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,(ulong)pcVar9 | 0x8000000000000000);
      uVar5 = (ulong)pcVar9 | 0x8000000000000000;
      goto LAB_001e9380;
    }
    __ss6HasherV8_combineyySuF(3);
    uVar1 = (uint)uVar7 & 0xff;
    uVar5 = 0xe900000000000073;
    uVar6 = 0x65736e654c746567;
    if (uVar1 != 2) {
      uVar5 = 0xef74736575716552;
      uVar6 = 0x70747448736e656c;
    }
    uVar8 = 0x80000000008bd890;
    uVar3 = 0xd000000000000010;
    if ((uVar7 & 0xff) != 0) {
      uVar8 = 0xea0000000000736e;
      uVar3 = 0x654c657461657263;
    }
    if (uVar1 == 1 || (uVar7 & 0xff) == 0) {
      uVar6 = uVar3;
    }
    if (uVar1 == 1 || (uVar7 & 0xff) == 0) {
      uVar5 = uVar8;
    }
  }
  else {
    if (bVar2 == 2) {
      __ss6HasherV8_combineyySuF(10);
      __ss6HasherV8_combineyySuF(uVar7);
      return;
    }
    if (bVar2 != 3) {
                    /* WARNING: Could not recover jumptable at 0x001e930c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_007e6d22)[uVar7] * 4 + 0x1e9310))();
      return;
    }
    __ss6HasherV8_combineyySuF(0xb);
    bVar4 = (uVar7 & 0xff) != 1;
    uVar6 = 0x74754265736f6c63;
    if (bVar4) {
      uVar6 = 0x766f72506e6f6369;
    }
    uVar5 = 0xeb000000006e6f74;
    if (bVar4) {
      uVar5 = 0xec00000072656469;
    }
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,uVar5);
LAB_001e9380:
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar5);
  return;
}



/* Entry: 001e9480; end: 001e94c7;  */

void FUN_001e9480(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_001e91a0(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e94c8; end: 001e9747;  */

ulong FUN_001e94c8(ulong *param_1,undefined8 *param_2)

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
LAB_001e9570:
        return (ulong)((((uint)*param_2 ^ (uint)uVar3) & 0xff) == 0);
      }
    }
    else if (cVar1 == '\x01') goto LAB_001e9570;
  }
  else if (bVar2 == 2) {
    if (cVar1 == '\x02') {
      return (ulong)((uint)uVar3 == (uint)*param_2);
    }
  }
  else {
    if (bVar2 != 3) {
                    /* WARNING: Could not recover jumptable at 0x001e9548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_007e6d33)[uVar3] * 4 + 0x1e954c))();
      return uVar3;
    }
    if (cVar1 == '\x03') goto LAB_001e9570;
  }
  return 0;
}



/* Entry: 001e9748; end: 001e980f;  */

ulong FUN_001e9748(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 001e9810; end: 001e9813;  */

void FUN_001e9810(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6d48;
  _swift_getWitnessTable(&UNK_007e6d48,&UNK_009ba1e8);
  puRam0000000000af5820 = puVar1;
  return;
}



/* Entry: 001e9814; end: 001e9853;  */

void FUN_001e9814(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6d48;
  _swift_getWitnessTable(&UNK_007e6d48,&UNK_009ba1e8);
  puRam0000000000af5820 = puVar1;
  return;
}



/* Entry: 001e9854; end: 001e9857;  */

void FUN_001e9854(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6de8;
  _swift_getWitnessTable(&UNK_007e6de8,&UNK_009ba278);
  puRam0000000000af5828 = puVar1;
  return;
}



/* Entry: 001e9858; end: 001e9897;  */

void FUN_001e9858(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6de8;
  _swift_getWitnessTable(&UNK_007e6de8,&UNK_009ba278);
  puRam0000000000af5828 = puVar1;
  return;
}



/* Entry: 001e9898; end: 001e989b;  */

void FUN_001e9898(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6e88;
  _swift_getWitnessTable(&UNK_007e6e88,&UNK_009ba308);
  puRam0000000000af5830 = puVar1;
  return;
}



/* Entry: 001e989c; end: 001e98db;  */

void FUN_001e989c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6e88;
  _swift_getWitnessTable(&UNK_007e6e88,&UNK_009ba308);
  puRam0000000000af5830 = puVar1;
  return;
}



/* Entry: 001e98dc; end: 001e98ff;  */

void FUN_001e98dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001e9900();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001e9900; end: 001e993f;  */

void FUN_001e9900(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6f44;
  _swift_getWitnessTable(&UNK_007e6f44,&UNK_009ba398);
  puRam0000000000af5838 = puVar1;
  return;
}



/* Entry: 001e9940; end: 001e9943;  */

void FUN_001e9940(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5840 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6f84;
  _swift_getWitnessTable(&UNK_007e6f84,&UNK_009ba398);
  puRam0000000000af5840 = puVar1;
  return;
}



/* Entry: 001e9944; end: 001e9983;  */

void FUN_001e9944(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5840 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6f84;
  _swift_getWitnessTable(&UNK_007e6f84,&UNK_009ba398);
  puRam0000000000af5840 = puVar1;
  return;
}



/* Entry: 001e9984; end: 001e9e83;  */

int FUN_001e9984(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001e9a00;
        goto LAB_001e99e4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001e99e4:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_001e9a00:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001e9e84; end: 001ea007;  */

void FUN_001e9e84(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 >> 4 & 0xf;
  if (uVar1 < 4) {
    if (1 < uVar1) {
      if (uVar1 == 2) {
        if (((param_1 & 0xff) < 0x22) && ((param_1 & 0xff) != 0x20)) {
          return;
        }
      }
      else if ((param_1 & 0xff) == 0x30) {
        return;
      }
    }
  }
  else if (uVar1 < 6) {
    if (uVar1 == 4) {
      if ((1 < (param_1 & 0xff) - 0x41) && ((param_1 & 0xff) == 0x40)) {
        return;
      }
    }
    else if ((0x51 < (param_1 & 0xff)) && ((param_1 & 0xff) != 0x52)) {
      return;
    }
  }
  else if (uVar1 == 6) {
    if (((param_1 & 0xff) < 0x62) && ((param_1 & 0xff) == 0x60)) {
      return;
    }
  }
  else if (((uVar1 == 7) && (1 < (param_1 & 0xff) - 0x72)) && ((param_1 & 0xff) == 0x70)) {
    return;
  }
  func_0x000115a8(0xaf4058,&UNK_007e5230);
  _swift_initStaticObject();
  FUN_001da650();
  return;
}



/* Entry: 001ea008; end: 001ea61f;  */

void FUN_001ea008(uint param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1 >> 4 & 0xf;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      lVar3 = 0xae6940;
      if (uVar1 == 0) {
        func_0x000115a8(0xae6940,&UNK_007da060);
        _swift_allocObject();
        *(undefined8 *)(lVar3 + 0x18) = 4;
        *(undefined8 *)(lVar3 + 0x10) = 2;
        *(undefined8 *)(lVar3 + 0x20) = 0x617373654d70614d;
        *(undefined8 *)(lVar3 + 0x28) = 0xeb00000000736567;
        bVar2 = (param_1 & 0xff) != 1;
        uVar5 = 0x4264657469736976;
        if (bVar2) {
          uVar5 = 0xd000000000000010;
        }
        uVar4 = 0xe900000000000079;
        if (bVar2) {
          uVar4 = 0x80000000008bda20;
        }
        *(undefined8 *)(lVar3 + 0x30) = uVar5;
        *(undefined8 *)(lVar3 + 0x38) = uVar4;
      }
      else {
        func_0x000115a8(0xae6940,&UNK_007da060);
        _swift_allocObject();
        *(undefined8 *)(lVar3 + 0x18) = 4;
        *(undefined8 *)(lVar3 + 0x10) = 2;
        *(undefined **)(lVar3 + 0x20) = &UNK_00004955;
        *(undefined8 *)(lVar3 + 0x28) = 0xe200000000000000;
        if ((param_1 & 0xf) == 0) {
          uVar5 = 0xe700000000000000;
          uVar4 = 0x6c6172656e6567;
        }
        else if ((param_1 & 0xf) == 1) {
          uVar5 = 0xeb00000000325665;
          uVar4 = 0x6d6f72684370616d;
        }
        else {
          uVar5 = 0x80000000008bd9c0;
          uVar4 = 0xd000000000000010;
        }
        *(undefined8 *)(lVar3 + 0x30) = uVar4;
        *(undefined8 *)(lVar3 + 0x38) = uVar5;
      }
      uVar5 = 0xae6938;
      func_0x000115a8(0xae6938,&UNK_007cdb30);
      uVar4 = uVar5;
      func_0x0002f390();
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar5,uVar4);
      _swift_release(lVar3);
    }
  }
  else if ((((uVar1 < 6) && (uVar1 != 4)) && ((param_1 & 0xff) < 0x52)) &&
          ((param_1 & 0xff) != 0x50)) {
    func_0x000115a8(0xae6940,&UNK_007da060);
    _swift_initStaticObject();
    uVar5 = 0xae6938;
    func_0x000115a8(0xae6938,&UNK_007cdb30);
    uVar4 = uVar5;
    func_0x0002f390();
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar5,uVar4);
  }
  return;
}



/* Entry: 001ea620; end: 001ea627;  */

undefined8 FUN_001ea620(void)

{
  return 1;
}



/* Entry: 001ea628; end: 001ea693;  */

void FUN_001ea628(undefined8 param_1,long param_2)

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



/* Entry: 001ea694; end: 001ea6bb;  */

void FUN_001ea694(undefined8 *param_1)

{
  *param_1 = 0x6e6f697461636f6c;
  param_1[1] = 0xef676e6972616853;
  return;
}



/* Entry: 001ea6bc; end: 001ea717;  */

void FUN_001ea6bc(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0x6e6f697461636f6c,0xef676e6972616853);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ea718; end: 001ea73b;  */

void FUN_001ea718(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00778470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_0099af98)
            (param_1,0x6e6f697461636f6c,0xef676e6972616853);
  return;
}



/* Entry: 001ea73c; end: 001ea793;  */

void FUN_001ea73c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0x6e6f697461636f6c,0xef676e6972616853);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ea794; end: 001ea7a7;  */

bool FUN_001ea794(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 001ea7a8; end: 001ea7d3;  */

void FUN_001ea7a8(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_001eb2b8(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 001ea7d4; end: 001ea83f;  */

void FUN_001ea7d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  uVar4 = 0x6d6f72684370616d;
  uVar1 = 0xeb00000000325665;
  if (cVar3 != '\x01') {
    uVar4 = 0xd000000000000010;
    uVar1 = 0x80000000008bd9c0;
  }
  uVar2 = 0x6c6172656e6567;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  uVar4 = 0xe700000000000000;
  if (cVar3 != '\0') {
    uVar4 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar4;
  return;
}



/* Entry: 001ea840; end: 001eaa1b;  */

void FUN_001ea840(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar4 = 0x6d6f72684370616d;
  uVar1 = 0xeb00000000325665;
  if (cVar3 != '\x01') {
    uVar4 = 0xd000000000000010;
    uVar1 = 0x80000000008bd9c0;
  }
  uVar2 = 0x6c6172656e6567;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  uVar4 = 0xe700000000000000;
  if (cVar3 != '\0') {
    uVar4 = uVar1;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar2,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001eaa1c; end: 001eaa93;  */

void FUN_001eaa1c(undefined1 *param_1,long param_2)

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



/* Entry: 001eaa94; end: 001eaadb;  */

void FUN_001eaa94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar2 = 0x4264657469736976;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xd000000000000010;
  }
  uVar1 = 0xe900000000000079;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x80000000008bda20;
  }
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 001eaadc; end: 001eaf3f;  */

void FUN_001eaadc(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar3 = 0x4264657469736976;
  if (cVar2 != '\x01') {
    uVar3 = 0xd000000000000010;
  }
  uVar1 = 0xe900000000000079;
  if (cVar2 != '\x01') {
    uVar1 = 0x80000000008bda20;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar3,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001eaf40; end: 001eaf4f;  */

void FUN_001eaf40(void)

{
  byte bVar1;
  byte bVar2;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  bVar2 = bVar1 >> 4;
  if (bVar2 < 4) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        if ((bVar1 < 0x22) && (bVar1 != 0x20)) {
          return;
        }
      }
      else if (bVar1 == 0x30) {
        return;
      }
    }
  }
  else if (bVar2 < 6) {
    if (bVar2 == 4) {
      if ((1 < bVar1 - 0x41) && (bVar1 == 0x40)) {
        return;
      }
    }
    else if ((0x51 < bVar1) && (bVar1 != 0x52)) {
      return;
    }
  }
  else if (bVar2 == 6) {
    if ((bVar1 < 0x62) && (bVar1 == 0x60)) {
      return;
    }
  }
  else if (((bVar2 == 7) && (1 < bVar1 - 0x72)) && (bVar1 == 0x70)) {
    return;
  }
  func_0x000115a8(0xaf4058,&UNK_007e5230);
  _swift_initStaticObject();
  FUN_001da650();
  return;
}



/* Entry: 001eaf50; end: 001eaf93;  */

void FUN_001eaf50(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x001eac4c(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001eaf94; end: 001eaf9b;  */

void FUN_001eaf94(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  bVar2 = bVar1 >> 4;
  if (bVar2 < 4) {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        __ss6HasherV8_combineyySuF(0x12);
        uVar3 = 0x4264657469736976;
        if (bVar1 != 1) {
          uVar3 = 0xd000000000000010;
        }
        uVar4 = 0xe900000000000079;
        if (bVar1 != 1) {
          uVar4 = 0x80000000008bda20;
        }
      }
      else {
        __ss6HasherV8_combineyySuF(0x19);
        if ((bVar1 & 0xf) == 0) {
          uVar3 = 0x6c6172656e6567;
          uVar4 = 0xe700000000000000;
        }
        else {
          uVar3 = 0x6d6f72684370616d;
          uVar4 = 0xeb00000000325665;
          if ((bVar1 & 0xf) != 1) {
            uVar3 = 0xd000000000000010;
            uVar4 = 0x80000000008bd9c0;
          }
        }
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar4);
      return;
    }
    if (bVar2 == 2) {
      if (bVar1 < 0x22) {
        if (bVar1 == 0x20) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else if (bVar1 == 0x22) {
        uVar3 = 2;
      }
      else {
        uVar3 = 3;
      }
    }
    else if (bVar1 < 0x32) {
      if (bVar1 == 0x30) {
        uVar3 = 4;
      }
      else {
        uVar3 = 5;
      }
    }
    else if (bVar1 == 0x32) {
      uVar3 = 6;
    }
    else {
      uVar3 = 7;
    }
  }
  else if (bVar2 < 6) {
    if (bVar2 == 4) {
      if (bVar1 < 0x42) {
        if (bVar1 == 0x40) {
          uVar3 = 8;
        }
        else {
          uVar3 = 9;
        }
      }
      else if (bVar1 == 0x42) {
        uVar3 = 10;
      }
      else {
        uVar3 = 0xb;
      }
    }
    else if (bVar1 < 0x52) {
      if (bVar1 != 0x50) {
        __ss6HasherV8_combineyySuF(0xd);
                    /* WARNING: Could not recover jumptable at 0x00778470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_0099af98)
                  (param_1,0x6e6f697461636f6c,0xef676e6972616853);
        return;
      }
      uVar3 = 0xc;
    }
    else if (bVar1 == 0x52) {
      uVar3 = 0xe;
    }
    else {
      uVar3 = 0xf;
    }
  }
  else if (bVar2 == 6) {
    if (bVar1 < 0x62) {
      if (bVar1 == 0x60) {
        uVar3 = 0x10;
      }
      else {
        uVar3 = 0x11;
      }
    }
    else if (bVar1 == 0x62) {
      uVar3 = 0x13;
    }
    else {
      uVar3 = 0x14;
    }
  }
  else if (bVar2 == 7) {
    if (bVar1 < 0x72) {
      if (bVar1 == 0x70) {
        uVar3 = 0x15;
      }
      else {
        uVar3 = 0x16;
      }
    }
    else if (bVar1 == 0x72) {
      uVar3 = 0x17;
    }
    else {
      uVar3 = 0x18;
    }
  }
  else if (bVar1 == 0x80) {
    uVar3 = 0x1a;
  }
  else if (bVar1 == 0x81) {
    uVar3 = 0x1b;
  }
  else {
    uVar3 = 0x1c;
  }
  __ss6HasherV8_combineyySuF(uVar3);
  return;
}



/* Entry: 001eaf9c; end: 001eafdb;  */

void FUN_001eaf9c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x001eac4c(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001eafdc; end: 001eb2b7;  */

bool FUN_001eafdc(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = *param_2;
  bVar2 = *param_1;
  bVar3 = bVar2 >> 4;
  if (bVar3 < 4) {
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        if (bVar1 < 0x10) {
          return bVar2 == bVar1;
        }
      }
      else if ((bVar1 & 0xf0) == 0x10) {
        return ((bVar1 ^ bVar2) & 0xf) == 0;
      }
    }
    else if (bVar3 == 2) {
      if (bVar2 < 0x22) {
        if (bVar2 == 0x20) {
          if (bVar1 == 0x20) {
            return true;
          }
        }
        else if (bVar1 == 0x21) {
          return true;
        }
      }
      else if (bVar2 == 0x22) {
        if (bVar1 == 0x22) {
          return true;
        }
      }
      else if (bVar1 == 0x23) {
        return true;
      }
    }
    else if (bVar2 < 0x32) {
      if (bVar2 == 0x30) {
        if (bVar1 == 0x30) {
          return true;
        }
      }
      else if (bVar1 == 0x31) {
        return true;
      }
    }
    else if (bVar2 == 0x32) {
      if (bVar1 == 0x32) {
        return true;
      }
    }
    else if (bVar1 == 0x33) {
      return true;
    }
  }
  else if (bVar3 < 6) {
    if (bVar3 == 4) {
      if (bVar2 < 0x42) {
        if (bVar2 == 0x40) {
          if (bVar1 == 0x40) {
            return true;
          }
        }
        else if (bVar1 == 0x41) {
          return true;
        }
      }
      else if (bVar2 == 0x42) {
        if (bVar1 == 0x42) {
          return true;
        }
      }
      else if (bVar1 == 0x43) {
        return true;
      }
    }
    else if (bVar2 < 0x52) {
      if (bVar2 == 0x50) {
        if (bVar1 == 0x50) {
          return true;
        }
      }
      else if (bVar1 == 0x51) {
        return true;
      }
    }
    else if (bVar2 == 0x52) {
      if (bVar1 == 0x52) {
        return true;
      }
    }
    else if (bVar1 == 0x53) {
      return true;
    }
  }
  else if (bVar3 == 6) {
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
  else if (bVar3 == 7) {
    if (bVar2 < 0x72) {
      if (bVar2 == 0x70) {
        if (bVar1 == 0x70) {
          return true;
        }
      }
      else if (bVar1 == 0x71) {
        return true;
      }
    }
    else if (bVar2 == 0x72) {
      if (bVar1 == 0x72) {
        return true;
      }
    }
    else if (bVar1 == 0x73) {
      return true;
    }
  }
  else if (bVar2 == 0x80) {
    if (bVar1 == 0x80) {
      return true;
    }
  }
  else if (bVar2 == 0x81) {
    if (bVar1 == 0x81) {
      return true;
    }
  }
  else if (bVar1 == 0x82) {
    return true;
  }
  return false;
}



/* Entry: 001eb2b8; end: 001eb31b;  */

ulong FUN_001eb2b8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 001eb31c; end: 001eb31f;  */

void FUN_001eb31c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af59e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7040;
  _swift_getWitnessTable(&UNK_007e7040,&UNK_009ba4a8);
  puRam0000000000af59e0 = puVar1;
  return;
}



/* Entry: 001eb320; end: 001eb35f;  */

void FUN_001eb320(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af59e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e7040;
  _swift_getWitnessTable(&UNK_007e7040,&UNK_009ba4a8);
  puRam0000000000af59e0 = puVar1;
  return;
}



/* Entry: 001eb360; end: 001eb363;  */

void FUN_001eb360(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af59e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e70e0;
  _swift_getWitnessTable(&UNK_007e70e0,&UNK_009ba538);
  puRam0000000000af59e8 = puVar1;
  return;
}



/* Entry: 001eb364; end: 001eb3a3;  */

void FUN_001eb364(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af59e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e70e0;
  _swift_getWitnessTable(&UNK_007e70e0,&UNK_009ba538);
  puRam0000000000af59e8 = puVar1;
  return;
}



/* Entry: 001eb3a4; end: 001eb3a7;  */

void FUN_001eb3a4(void)

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


