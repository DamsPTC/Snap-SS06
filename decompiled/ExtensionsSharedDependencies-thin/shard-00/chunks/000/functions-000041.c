/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000c6e00; end: 000c6edf;  */

int FUN_000c6e00(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xfe;
  }
  iVar1 = 0;
  if (2 < *(byte *)(param_1 + 10)) {
    iVar1 = (*(byte *)(param_1 + 10) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Entry: 000c6ee0; end: 000c6f13;  */

undefined8 FUN_000c6ee0(undefined8 param_1,undefined8 param_2)

{
  FUN_000c6b6c(param_2,param_1,&UNK_009aaae0);
  return param_2;
}



/* Entry: 000c6f14; end: 000c6f53;  */

void FUN_000c6f14(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed9c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d7d98;
  _swift_getWitnessTable(&UNK_007d7d98,&UNK_009ab310);
  puRam0000000000aed9c8 = puVar1;
  return;
}



/* Entry: 000c6f54; end: 000c6f87;  */

void FUN_000c6f54(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_1[3] + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    return;
  }
  uVar2 = (ulong)uVar1 & 0xff;
                    /* WARNING: Could not recover jumptable at 0x0077b56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_slowDealloc_0099bb50)
            (*param_1,*(long *)(*(long *)(param_1[3] + -8) + 0x40) +
                      (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),uVar2 | 7);
  return;
}



/* Entry: 000c6f88; end: 000c7003;  */

undefined8 FUN_000c6f88(undefined8 param_1)

{
  FUN_000c6b30(param_1,&UNK_009aaae0);
  return param_1;
}



/* Entry: 000c7004; end: 000c7043;  */

void FUN_000c7004(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed9d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d98e0;
  _swift_getWitnessTable(&UNK_007d98e0,&UNK_009ad5a0);
  puRam0000000000aed9d0 = puVar1;
  return;
}



/* Entry: 000c7044; end: 000c7077;  */

undefined8 FUN_000c7044(undefined8 param_1)

{
  (*(code *)(undefined *)0x10b128)();
  return param_1;
}



/* Entry: 000c7078; end: 000c70b7;  */

void FUN_000c7078(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed9d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d7948;
  _swift_getWitnessTable(&UNK_007d7948,&UNK_009aab70);
  puRam0000000000aed9d8 = puVar1;
  return;
}



/* Entry: 000c70b8; end: 000c70cf;  */

undefined8 * FUN_000c70b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 000c70d0; end: 000c7103;  */

undefined8 FUN_000c70d0(undefined8 param_1,undefined8 param_2)

{
  FUN_000c6d24(param_2,param_1,&UNK_009aaae0);
  return param_2;
}



/* Entry: 000c7104; end: 000c7183;  */

void FUN_000c7104(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeda10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007da3c0;
  _swift_getWitnessTable(&UNK_007da3c0,&UNK_009ae930);
  puRam0000000000aeda10 = puVar1;
  return;
}



/* Entry: 000c7184; end: 000c723b;  */

long FUN_000c7184(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 000c723c; end: 000c727b;  */

void FUN_000c723c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeda38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007da718;
  _swift_getWitnessTable(&UNK_007da718,&UNK_009aeed8);
  puRam0000000000aeda38 = puVar1;
  return;
}



/* Entry: 000c727c; end: 000c735b;  */

undefined8 FUN_000c727c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x13a548)(param_2,param_1);
  return param_2;
}



/* Entry: 000c735c; end: 000c739b;  */

void FUN_000c735c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeda40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_007da9c0;
  _swift_getWitnessTable(&DAT_007da9c0,&UNK_009af680);
  puRam0000000000aeda40 = puVar1;
  return;
}



/* Entry: 000c739c; end: 000c73af;  */

undefined * FUN_000c739c(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar4 = PTR___swiftEmptyArrayStorage_0099b8f0;
  puVar9 = *(undefined **)(PTR___swiftEmptyArrayStorage_0099b8f0 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  if (puVar9 != (undefined *)0x0) {
    func_0x000115a8(0xaf0378,&UNK_007da338);
    puVar6 = puVar9;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    puVar10 = (undefined8 *)(puVar4 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar11 = *puVar10;
      uVar7 = uVar2;
      uVar8 = uVar3;
      FUN_000e1dc4();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x19c010);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar6 + 0x38) + uVar7 * 8) = uVar11;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x19c014);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      puVar9 = puVar9 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar9 != (undefined *)0x0);
  }
  return puVar6;
}



/* Entry: 000c73b0; end: 000c7417;  */

void FUN_000c73b0(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 000c7418; end: 000c742b;  */

bool FUN_000c7418(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 000c742c; end: 000c74d7;  */

void FUN_000c742c(void)

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



/* Entry: 000c74d8; end: 000c74db;  */

void FUN_000c74d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeda48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d78e0;
  _swift_getWitnessTable(&UNK_007d78e0,&UNK_009aab70);
  puRam0000000000aeda48 = puVar1;
  return;
}



/* Entry: 000c74dc; end: 000c751b;  */

void FUN_000c74dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeda48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d78e0;
  _swift_getWitnessTable(&UNK_007d78e0,&UNK_009aab70);
  puRam0000000000aeda48 = puVar1;
  return;
}



/* Entry: 000c751c; end: 000c768f;  */

void FUN_000c751c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_0099b708)();
  return;
}



/* Entry: 000c7690; end: 000c783f;  */

void FUN_000c7690(undefined1 *param_1,undefined1 *param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar14 = (long)param_2 - (long)param_1;
  uVar5 = 0;
  if (param_1 != (undefined1 *)0x0) {
    uVar5 = uVar14;
  }
  uVar4 = *unaff_x20;
  lVar9 = *(long *)(uVar4 + 0x10);
  if (SCARRY8(lVar9,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc77a0);
    (*pcVar1)();
  }
  uVar12 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((int)uVar12 != 0) {
    uVar11 = *(ulong *)(uVar4 + 0x18);
    uVar3 = uVar11 >> 1;
    if ((long)(lVar9 + uVar5) <= (long)uVar3) goto LAB_000c770c;
  }
  FUN_000540b4();
  uVar11 = *(ulong *)(uVar12 + 0x18);
  uVar3 = uVar11 >> 1;
  uVar4 = uVar12;
LAB_000c770c:
  uVar12 = *(ulong *)(uVar4 + 0x10);
  uVar13 = uVar3 - uVar12;
  uVar10 = 0;
  if ((((param_1 != (undefined1 *)0x0) && (param_2 != (undefined1 *)0x0)) && (param_1 < param_2)) &&
     (uVar3 != uVar12)) {
    if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc7840);
      (*pcVar1)();
    }
    uVar10 = uVar14;
    if (uVar13 <= uVar14) {
      uVar10 = uVar13;
    }
    _memmove(uVar4 + uVar12 + 0x20,param_1,uVar10);
    param_1 = param_1 + uVar10;
  }
  if ((long)uVar10 < (long)uVar5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc77a4);
    (*pcVar1)();
  }
  if (uVar10 != 0) {
    bVar2 = SCARRY8(uVar12,uVar10);
    uVar12 = uVar12 + uVar10;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc77a8);
      (*pcVar1)();
    }
    *(ulong *)(uVar4 + 0x10) = uVar12;
  }
  if ((uVar10 != uVar13 || param_1 == (undefined1 *)0x0) || param_1 == param_2) {
LAB_000c777c:
    *unaff_x20 = uVar4;
    return;
  }
  puVar6 = param_1 + 1;
  uVar8 = *param_1;
  uVar5 = uVar4;
  do {
    while( true ) {
      uVar14 = uVar11 >> 1;
      if ((long)(uVar12 + 1) <= (long)uVar14) break;
      uVar4 = (ulong)(1 < uVar11);
      FUN_000540b4(uVar4,uVar12 + 1,1,uVar5);
      uVar11 = *(ulong *)(uVar4 + 0x18);
      uVar14 = uVar11 >> 1;
      if ((long)uVar14 <= (long)uVar12) goto LAB_000c77b0;
LAB_000c77cc:
      lVar9 = uVar12 + 0x20;
      puVar7 = puVar6;
      do {
        *(undefined1 *)(uVar4 + lVar9) = uVar8;
        if (puVar7 == param_2) {
          *(long *)(uVar4 + 0x10) = lVar9 + -0x1f;
          goto LAB_000c777c;
        }
        puVar6 = puVar7 + 1;
        uVar8 = *puVar7;
        lVar9 = lVar9 + 1;
        puVar7 = puVar6;
      } while (lVar9 - uVar14 != 0x20);
      uVar11 = *(ulong *)(uVar4 + 0x18);
      *(ulong *)(uVar4 + 0x10) = uVar14;
      uVar5 = uVar4;
      uVar12 = uVar14;
    }
    uVar4 = uVar5;
    if ((long)uVar12 < (long)uVar14) goto LAB_000c77cc;
LAB_000c77b0:
    *(ulong *)(uVar4 + 0x10) = uVar12;
    uVar5 = uVar4;
  } while( true );
}



/* Entry: 000c7840; end: 000c7b03;  */

void FUN_000c7840(undefined1 *param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  undefined1 uVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar7 = *unaff_x20;
  lVar10 = *(long *)(uVar7 + 0x10);
  if (SCARRY8(lVar10,param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc7944);
    (*pcVar1)();
  }
  uVar13 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((int)uVar13 != 0) {
    uVar12 = *(ulong *)(uVar7 + 0x18);
    uVar3 = uVar12 >> 1;
    if (lVar10 + param_2 <= (long)uVar3) goto LAB_000c78ac;
  }
  FUN_000540b4();
  uVar12 = *(ulong *)(uVar13 + 0x18);
  uVar3 = uVar12 >> 1;
  uVar7 = uVar13;
LAB_000c78ac:
  uVar13 = *(ulong *)(uVar7 + 0x10);
  lVar10 = uVar3 - uVar13;
  if ((param_2 == 0) || (lVar10 == 0)) {
    puVar4 = (undefined1 *)0x0;
    if (param_1 != (undefined1 *)0x0) {
      puVar4 = param_1;
    }
    puVar9 = (undefined1 *)0x0;
    if (param_1 != (undefined1 *)0x0) {
      puVar9 = param_1 + param_2;
    }
    lVar11 = 0;
  }
  else {
    lVar11 = param_2;
    if (lVar10 <= param_2) {
      lVar11 = lVar10;
    }
    _memcpy(uVar7 + uVar13 + 0x20,param_1,lVar11);
    puVar4 = param_1 + lVar11;
    puVar9 = param_1 + param_2;
  }
  if (lVar11 < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc7948);
    (*pcVar1)();
  }
  if (0 < lVar11) {
    bVar2 = SCARRY8(uVar13,lVar11);
    uVar13 = uVar13 + lVar11;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc794c);
      (*pcVar1)();
    }
    *(ulong *)(uVar7 + 0x10) = uVar13;
  }
  if ((lVar11 != lVar10 || puVar4 == (undefined1 *)0x0) || puVar9 == puVar4) {
LAB_000c7924:
    *unaff_x20 = uVar7;
    return;
  }
  puVar5 = puVar4 + 1;
  uVar8 = *puVar4;
  uVar3 = uVar7;
  do {
    while( true ) {
      uVar6 = uVar12 >> 1;
      if ((long)(uVar13 + 1) <= (long)uVar6) break;
      uVar7 = (ulong)(1 < uVar12);
      FUN_000540b4(uVar7,uVar13 + 1,1,uVar3);
      uVar12 = *(ulong *)(uVar7 + 0x18);
      uVar6 = uVar12 >> 1;
      if ((long)uVar6 <= (long)uVar13) goto LAB_000c7954;
LAB_000c7970:
      lVar10 = uVar13 + 0x20;
      puVar4 = puVar5;
      do {
        *(undefined1 *)(uVar7 + lVar10) = uVar8;
        if (puVar4 == puVar9) {
          *(long *)(uVar7 + 0x10) = lVar10 + -0x1f;
          goto LAB_000c7924;
        }
        uVar8 = *puVar4;
        puVar5 = puVar5 + 1;
        lVar10 = lVar10 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar10 - uVar6 != 0x20);
      uVar12 = *(ulong *)(uVar7 + 0x18);
      *(ulong *)(uVar7 + 0x10) = uVar6;
      uVar3 = uVar7;
      uVar13 = uVar6;
    }
    uVar7 = uVar3;
    if ((long)uVar13 < (long)uVar6) goto LAB_000c7970;
LAB_000c7954:
    *(ulong *)(uVar7 + 0x10) = uVar13;
    uVar3 = uVar7;
  } while( true );
}



/* Entry: 000c7b04; end: 000c7cfb;  */

void FUN_000c7b04(undefined8 param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 uStack_44;
  byte bStack_43;
  byte bStack_42;
  char cStack_41;
  
  uVar9 = (uint)param_1 & 0xff;
  uVar4 = (uint)param_1 >> 8 & 0xff;
  uVar5 = (ulong)(uVar4 - uVar9);
  if (uVar4 < uVar9) {
    uVar5 = -(ulong)(uVar9 - uVar4);
  }
  uVar8 = *unaff_x20;
  lVar11 = *(long *)(uVar8 + 0x10);
  if (SCARRY8(lVar11,uVar5 + 1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xc7bec);
    (*pcVar2)();
  }
  uVar7 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)uVar7 == 0) ||
     (uVar6 = *(ulong *)(uVar8 + 0x18) >> 1, (long)uVar6 < (long)(lVar11 + uVar5 + 1))) {
    FUN_000540b4();
    uVar6 = *(ulong *)(uVar7 + 0x18) >> 1;
    uVar8 = uVar7;
  }
  puVar12 = (undefined1 *)(uVar6 - *(long *)(uVar8 + 0x10));
  puVar3 = &uStack_44;
  FUN_000c9618(puVar3,param_1,uVar8 + *(long *)(uVar8 + 0x10) + 0x20,puVar12);
  if ((long)puVar3 <= (long)uVar5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xc7bf0);
    (*pcVar2)();
  }
  if (0 < (long)puVar3) {
    if (SCARRY8(*(long *)(uVar8 + 0x10),(long)puVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xc7c20);
      (*pcVar2)();
    }
    *(undefined1 **)(uVar8 + 0x10) = puVar3 + *(long *)(uVar8 + 0x10);
  }
  if ((puVar3 == puVar12) && (cStack_41 != '\x01')) {
    uVar5 = *(ulong *)(uVar8 + 0x10);
    uVar9 = (uint)bStack_42;
    if ((uint)bStack_42 == (uint)bStack_43) {
      uVar4 = 0;
      bVar1 = true;
    }
    else {
      uVar4 = bStack_42 + 1;
      if (uVar4 >> 8 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xc7cfc);
        (*pcVar2)();
      }
      bVar1 = false;
    }
    do {
      uVar7 = *(ulong *)(uVar8 + 0x18) >> 1;
      if ((long)uVar7 < (long)(uVar5 + 1)) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_000540b4(uVar6,uVar5 + 1,1,uVar8);
        uVar7 = *(ulong *)(uVar6 + 0x18) >> 1;
        uVar8 = uVar6;
      }
      if ((long)uVar5 < (long)uVar7) {
        lVar11 = uVar5 + 0x20;
        uVar10 = uVar9;
        do {
          uVar9 = uVar4;
          *(char *)(uVar8 + lVar11) = (char)uVar10;
          if (bVar1) {
            *(long *)(uVar8 + 0x10) = lVar11 + -0x1f;
            goto LAB_000c7bcc;
          }
          if ((uint)bStack_43 == (uVar9 & 0xff)) {
            uVar4 = 0;
            bVar1 = true;
          }
          else {
            uVar4 = (uVar9 & 0xff) + 1;
            if (uVar4 >> 8 != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0xc7cf8);
              (*pcVar2)();
            }
            bVar1 = false;
          }
          lVar11 = lVar11 + 1;
          uVar5 = uVar7;
          uVar10 = uVar9;
        } while (lVar11 - uVar7 != 0x20);
      }
      *(ulong *)(uVar8 + 0x10) = uVar5;
    } while( true );
  }
LAB_000c7bcc:
  *unaff_x20 = uVar8;
  return;
}



/* Entry: 000c7cfc; end: 000c7e07;  */

void FUN_000c7cfc(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xc7dfc);
    (*pcVar2)();
  }
  lVar5 = *unaff_x20;
  lVar6 = *(long *)(lVar5 + 0x10);
  if (!SCARRY8(lVar6,lVar1)) {
    lVar3 = lVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)lVar3 == 0) || (uVar4 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar4 < lVar6 + lVar1)) {
      FUN_000540b4();
      uVar4 = *(ulong *)(lVar3 + 0x18) >> 1;
      lVar5 = lVar3;
    }
    if (param_3 == param_4) {
      if (0 < lVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xc7d70);
        (*pcVar2)();
      }
    }
    else {
      lVar6 = *(long *)(lVar5 + 0x10);
      if ((long)(uVar4 - lVar6) < lVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xc7e04);
        (*pcVar2)();
      }
      _memcpy(lVar5 + lVar6 + 0x20,param_2 + param_3,lVar1);
      if (0 < lVar1) {
        if (SCARRY8(lVar6,lVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xc7e08);
          (*pcVar2)();
        }
        *(long *)(lVar5 + 0x10) = lVar6 + lVar1;
      }
    }
    _swift_unknownObjectRelease(param_1);
    *unaff_x20 = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xc7e00);
  (*pcVar2)();
}



/* Entry: 000c7e08; end: 000c800b;  */

void FUN_000c7e08(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc7ef4);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_0002a0e4();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc7ef8);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc7efc);
      (*pcVar1)();
    }
    _swift_arrayInitWithCopy
              (lVar4 + *(long *)(lVar4 + 0x10) * 0x10 + 0x20,param_1 + 0x20,uVar5,
               PTR___sSSN_0099b040);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0xc7f00);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 000c800c; end: 000c81df;  */

void FUN_000c800c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5,undefined4 param_6,long param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  undefined8 extraout_x12;
  long lVar3;
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_7 + -8);
  lVar2 = param_7;
  uStack_ac = param_6;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar3 + 0x40));
  (**(code **)(lVar3 + 0x10))
            (auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),extraout_x12,lVar2);
  func_0x000c6fb4(param_3,&uStack_a8);
  (**(code **)(lVar3 + 0x20))
            (param_1,auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_7);
  uStack_68 = param_10;
  lVar2 = 0;
  lStack_80 = param_7;
  uStack_78 = param_8;
  uStack_70 = param_9;
  FUN_000c81e0(0,&lStack_80);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x34));
  puVar1[1] = uStack_a0;
  *puVar1 = uStack_a8;
  puVar1[3] = uStack_90;
  puVar1[2] = uStack_98;
  puVar1[4] = uStack_88;
  *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x38)) = param_4;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x3c));
  *puVar1 = param_5;
  *(char *)(puVar1 + 1) = (char)uStack_ac;
  return;
}



/* Entry: 000c81e0; end: 000c81eb;  */

void FUN_000c81e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077b3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_0099ba28)(param_1,param_2,&UNK_00843854);
  return;
}



/* Entry: 000c81ec; end: 000c82a7;  */

void FUN_000c81ec(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_0099bfb8,PTR___s13AsyncIteratorSciTl_0099bdc8);
  lVar2 = 0;
  __sSqMa(0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000c8244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1);
  return;
}



/* Entry: 000c82a8; end: 000c82eb;  */

undefined8 FUN_000c82a8(void)

{
  return 0xc82b8;
}



/* Entry: 000c82ec; end: 000c842b;  */

void FUN_000c82ec(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4,
                 undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_9,param_7,PTR___sSciTL_0099bfb8,PTR___s13AsyncIteratorSciTl_0099bdc8);
  lVar4 = *(long *)(lVar2 + -8);
  pcVar5 = *(code **)(lVar4 + 0x38);
  (*pcVar5)(param_1,1,1,lVar2);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  (**(code **)(lVar4 + 0x20))(param_1,param_2,lVar2);
  (*pcVar5)(param_1,0,1,lVar2);
  uStack_68 = param_10;
  lVar2 = 0;
  uStack_80 = param_7;
  uStack_78 = param_8;
  uStack_70 = param_9;
  FUN_000cab18(0,&uStack_80);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x34));
  uVar6 = *param_3;
  uVar8 = param_3[3];
  uVar7 = param_3[2];
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar8;
  puVar1[2] = uVar7;
  puVar1[4] = param_3[4];
  *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x38)) = param_4;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x3c));
  *puVar1 = param_5;
  *(undefined1 *)(puVar1 + 1) = param_6;
  return;
}



/* Entry: 000c842c; end: 000c8443;  */

void FUN_000c842c(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000c8444,0,0);
  return;
}



/* Entry: 000c8444; end: 000c8557;  */

void FUN_000c8444(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x20);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x10);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar5,PTR___sSciTL_0099bfb8,PTR___s13AsyncIteratorSciTl_0099bdc8);
  lVar6 = *(long *)(lVar1 + -8);
  (**(code **)(lVar6 + 0x30))(uVar2,1,lVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000c84d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0,1);
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x40) = 0;
  *(undefined8 *)(unaff_x22 + 0x48) = 0;
  *(long *)(unaff_x22 + 0x30) = lVar6;
  *(long *)(unaff_x22 + 0x38) = lVar1;
  _swift_getAssociatedConformanceWitness
            (uVar4,uVar5,lVar1,PTR___sSciTL_0099bfb8,PTR___sSci13AsyncIteratorSci_ScITn_0099bfa8);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_0099be50 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_000c8558;
                    /* WARNING: Could not recover jumptable at 0x007787b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_0099be48)(plVar3,unaff_x22 + 0x60,lVar1,uVar4);
  return;
}



/* Entry: 000c8558; end: 000c85b3;  */

void FUN_000c8558(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_000c85b4;
  }
  else {
    pcVar1 = FUN_000c8894;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 000c85b4; end: 000c8893;  */

void FUN_000c85b4(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  
  bVar1 = *(byte *)(unaff_x22 + 0x60);
  uVar9 = *(ulong *)(unaff_x22 + 0x48);
  if (*(char *)(unaff_x22 + 0x61) == '\x01') {
    if (uVar9 == 0) {
      uVar5 = 0;
      uVar7 = 1;
LAB_000c8798:
                    /* WARNING: Could not recover jumptable at 0x000c87bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar5,uVar7);
      return;
    }
    lVar12 = *(long *)(unaff_x22 + 0x30);
    lVar3 = *(long *)(unaff_x22 + 0x38);
  }
  else {
    if (0x1c < uVar9) {
      lVar12 = *(long *)(unaff_x22 + 0x30);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
      lVar3 = 0;
      __sSqMa(0,uVar7);
      (**(code **)(*(long *)(lVar3 + -8) + 8))(uVar8,lVar3);
      (**(code **)(lVar12 + 0x38))(uVar8,1,1,uVar7);
      plVar4 = (long *)0x0;
      FUN_00124784();
      _swift_allocObject();
      *(undefined1 *)(plVar4 + 2) = 1;
      plVar4[3] = -0x2fffffffffffff7a;
      plVar4[4] = -0x7fffffffff747650;
      plVar4[5] = 0x497261567478656e;
      plVar4[6] = -0x13ffffffd6d78b92;
      plVar4[7] = -0x2fffffffffffffd8;
      plVar4[8] = -0x7fffffffff747680;
      plVar4[9] = 0x77;
      plVar6 = plVar4;
      FUN_000c7104();
      _swift_allocError(&UNK_009ae930,plVar6,0,0);
      *plVar6 = (long)plVar4;
      goto LAB_000c8748;
    }
    uVar5 = *(ulong *)(unaff_x22 + 0x40) | ((ulong)bVar1 & 0x7f) << (uVar9 & 0x3f);
    if (-1 < (char)bVar1) {
      uVar7 = 0;
      goto LAB_000c8798;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x18);
    lVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar7,uVar8,PTR___sSciTL_0099bfb8,PTR___s13AsyncIteratorSciTl_0099bdc8);
    lVar12 = *(long *)(lVar3 + -8);
    (**(code **)(lVar12 + 0x30))(uVar11,1,lVar3);
    if ((int)uVar11 == 0) {
      *(ulong *)(unaff_x22 + 0x40) = uVar5;
      *(ulong *)(unaff_x22 + 0x48) = uVar9 + 7;
      *(long *)(unaff_x22 + 0x30) = lVar12;
      *(long *)(unaff_x22 + 0x38) = lVar3;
      _swift_getAssociatedConformanceWitness
                (uVar7,uVar8,lVar3,PTR___sSciTL_0099bfb8,PTR___sSci13AsyncIteratorSci_ScITn_0099bfa8
                );
      plVar6 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_0099be50 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x50) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_000c8558;
                    /* WARNING: Could not recover jumptable at 0x007787b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_0099be48)
                (plVar6,(byte *)(unaff_x22 + 0x60),lVar3,uVar7);
      return;
    }
  }
  puVar10 = *(undefined1 **)(unaff_x22 + 0x18);
  lVar2 = 0;
  __sSqMa(0,lVar3);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(puVar10,lVar2);
  (**(code **)(lVar12 + 0x38))(puVar10,1,1,lVar3);
  FUN_000c88a0();
  _swift_allocError(&UNK_009ab1a0,puVar10,0,0);
  *puVar10 = 1;
LAB_000c8748:
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000c8770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 000c8894; end: 000c889f;  */

void FUN_000c8894(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000c889c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 000c88a0; end: 000c88df;  */

void FUN_000c88a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeda50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d7ca0;
  _swift_getWitnessTable(&UNK_007d7ca0,&UNK_009ab1a0);
  puRam0000000000aeda50 = puVar1;
  return;
}



/* Entry: 000c88e0; end: 000c88fb;  */

void FUN_000c88e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000c88fc,0,0);
  return;
}



/* Entry: 000c88fc; end: 000c8b1b;  */

void FUN_000c88fc(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *(undefined8 *)(unaff_x22 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puVar9 = PTR___swiftEmptyArrayStorage_0099b8f0;
  lVar6 = *(long *)(unaff_x22 + 0x18);
  lVar3 = lVar6;
  if (0xffffff < lVar6) {
    lVar3 = 0x1000000;
  }
  if (lVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xc8b1c);
    (*pcVar2)();
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(PTR___swiftEmptyArrayStorage_0099b8f0);
  }
  else {
    lVar6 = lVar3;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (lVar3,PTR___ss5UInt8VN_0099b7a8);
    *(long *)(lVar6 + 0x10) = lVar3;
    _bzero(lVar6 + 0x20,lVar3);
    uVar7 = *(ulong *)(unaff_x22 + 0x18);
    do {
      *(ulong *)(unaff_x22 + 0x30) = uVar7;
      uVar8 = *(ulong *)(lVar6 + 0x10);
      uVar1 = uVar8;
      if (uVar7 <= uVar8) {
        uVar1 = uVar7;
      }
      *(ulong *)(unaff_x22 + 0x38) = uVar1;
      if (uVar8 != 0) {
        puVar4 = *(undefined1 **)(unaff_x22 + 0x28);
        uVar10 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x20);
        *(undefined8 *)(unaff_x22 + 0x40) = uVar10;
        uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x10);
        *(long *)(unaff_x22 + 0x50) = lVar6;
        *(undefined8 *)(unaff_x22 + 0x58) = 0;
        *(undefined8 *)(unaff_x22 + 0x48) = uVar11;
        lVar3 = 0;
        _swift_getAssociatedTypeWitness
                  (0,uVar10,uVar11,PTR___sSciTL_0099bfb8,PTR___s13AsyncIteratorSciTl_0099bdc8);
        (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar4,1,lVar3);
        if ((int)puVar4 != 0) {
          FUN_000c88a0();
          _swift_allocError(&UNK_009ab1a0,puVar4,0,0);
          *puVar4 = 1;
          _swift_willThrow();
          _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x10));
          _swift_bridgeObjectRelease(lVar6);
                    /* WARNING: Could not recover jumptable at 0x000c8a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))();
          return;
        }
        _swift_getAssociatedConformanceWitness
                  (uVar10,uVar11,lVar3,PTR___sSciTL_0099bfb8,
                   PTR___sSci13AsyncIteratorSci_ScITn_0099bfa8);
        plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_0099be50 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x60) = plVar5;
        *plVar5 = unaff_x22;
        plVar5[1] = (long)FUN_000c8b1c;
                    /* WARNING: Could not recover jumptable at 0x007787b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_0099be48)(plVar5,unaff_x22 + 0x70,lVar3,uVar10)
        ;
        return;
      }
      _swift_bridgeObjectRetain(lVar6);
      FUN_00053fc4();
      uVar7 = *(long *)(unaff_x22 + 0x30) - *(long *)(unaff_x22 + 0x38);
    } while (uVar7 != 0 && *(long *)(unaff_x22 + 0x38) <= *(long *)(unaff_x22 + 0x30));
    _swift_bridgeObjectRelease(lVar6);
    puVar9 = *(undefined **)(unaff_x22 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x000c89e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar9);
  return;
}



/* Entry: 000c8b1c; end: 000c8b77;  */

void FUN_000c8b1c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_000c8b78;
  }
  else {
    pcVar1 = FUN_000c8dcc;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 000c8b78; end: 000c8dcb;  */

void FUN_000c8b78(undefined1 *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  ulong uVar10;
  ulong uVar11;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x70);
  uVar10 = *(ulong *)(unaff_x22 + 0x50);
  uVar11 = uVar10;
  if (*(char *)(unaff_x22 + 0x71) != '\x01') {
    _swift_isUniquelyReferenced_nonNull_native();
    uVar11 = *(ulong *)(unaff_x22 + 0x50);
    if ((uVar10 & 1) == 0) {
      func_0x000c96e4();
    }
    uVar10 = *(ulong *)(unaff_x22 + 0x58);
    uVar5 = *(ulong *)(uVar11 + 0x10);
    if (uVar5 <= uVar10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xc8c38);
      (*pcVar2)();
    }
    lVar7 = *(long *)(unaff_x22 + 0x38);
    *(undefined1 *)(uVar11 + 0x20 + uVar10) = uVar1;
    lVar4 = uVar10 + 1;
    if (lVar4 == lVar7) {
      if (uVar5 <= *(ulong *)(unaff_x22 + 0x38)) goto LAB_000c8c50;
      _swift_bridgeObjectRetain(uVar11);
      FUN_000c7cfc();
      while( true ) {
        uVar10 = *(long *)(unaff_x22 + 0x30) - *(long *)(unaff_x22 + 0x38);
        if (uVar10 == 0 || *(long *)(unaff_x22 + 0x30) < *(long *)(unaff_x22 + 0x38)) {
          _swift_bridgeObjectRelease(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000c8c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x10));
          return;
        }
        *(ulong *)(unaff_x22 + 0x30) = uVar10;
        uVar6 = *(ulong *)(uVar11 + 0x10);
        uVar5 = uVar6;
        if (uVar10 <= uVar6) {
          uVar5 = uVar10;
        }
        *(ulong *)(unaff_x22 + 0x38) = uVar5;
        if (uVar6 != 0) break;
LAB_000c8c50:
        _swift_bridgeObjectRetain(uVar11);
        FUN_00053fc4();
      }
      lVar4 = 0;
      uVar8 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x20);
      *(undefined8 *)(unaff_x22 + 0x40) = uVar8;
      uVar9 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x10);
      *(undefined8 *)(unaff_x22 + 0x48) = uVar9;
    }
    else {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
    }
    *(ulong *)(unaff_x22 + 0x50) = uVar11;
    *(long *)(unaff_x22 + 0x58) = lVar4;
    param_1 = *(undefined1 **)(unaff_x22 + 0x28);
    lVar4 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar8,uVar9,PTR___sSciTL_0099bfb8,PTR___s13AsyncIteratorSciTl_0099bdc8);
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(param_1,1,lVar4);
    if ((int)param_1 == 0) {
      _swift_getAssociatedConformanceWitness
                (uVar8,uVar9,lVar4,PTR___sSciTL_0099bfb8,PTR___sSci13AsyncIteratorSci_ScITn_0099bfa8
                );
      plVar3 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_0099be50 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x60) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_000c8b1c;
                    /* WARNING: Could not recover jumptable at 0x007787b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_0099be48)
                (plVar3,(undefined1 *)(unaff_x22 + 0x70),lVar4,uVar8);
      return;
    }
  }
  FUN_000c88a0();
  _swift_allocError(&UNK_009ab1a0,param_1,0,0);
  *param_1 = 1;
  _swift_willThrow();
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x10));
  _swift_bridgeObjectRelease(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000c8d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 000c8dcc; end: 000c8e0b;  */

void FUN_000c8dcc(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x10));
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000c8e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 000c8e0c; end: 000c8e5f;  */

void FUN_000c8e0c(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  qword unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(qword *)(unaff_x22 + 0x80) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  pcVar1 = section_00000068.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x88) = pcVar1;
  *(long *)pcVar1 = unaff_x22;
  *(code **)(pcVar1 + 8) = FUN_000c8e60;
  *(undefined8 *)(pcVar1 + 0x10) = param_2;
  *(qword *)(pcVar1 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000c8444,0,0);
  return;
}



/* Entry: 000c8e60; end: 000c8edb;  */

void FUN_000c8e60(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x90) = param_1;
  *(long *)(lVar1 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x88));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000c8eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined1 *)(lVar1 + 0xb8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000c8edc,0,0);
  return;
}



/* Entry: 000c8edc; end: 000c91bf;  */

void FUN_000c8edc(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  
  if (*(char *)(unaff_x22 + 0xb8) == '\x01') {
    lVar7 = *(long *)(unaff_x22 + 0x78);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar4 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x10),
               PTR___sSciTL_0099bfb8,PTR___s13AsyncIteratorSciTl_0099bdc8);
    lVar5 = 0;
    __sSqMa(0,lVar4);
    (**(code **)(*(long *)(lVar5 + -8) + 8))(uVar10,lVar5);
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar10,1,1,lVar4);
    lVar5 = *(long *)(lVar7 + 0x18);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar5 + -8) + 0x38);
    uVar10 = 1;
LAB_000c8f88:
    (*UNRECOVERED_JUMPTABLE)(uVar11,uVar10,1,lVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    if (*(ulong *)(unaff_x22 + 0x90) >> 0x1f == 0) {
      if (*(ulong *)(unaff_x22 + 0x90) != 0) {
        pcVar6 = section_00000068.segname + 8;
        _swift_task_alloc();
        *(char **)(unaff_x22 + 0xa0) = pcVar6;
        *(long *)pcVar6 = unaff_x22;
        *(code **)(pcVar6 + 8) = FUN_000c91c0;
        uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
        *(undefined8 *)(pcVar6 + 0x20) = *(undefined8 *)(unaff_x22 + 0x78);
        *(undefined8 *)(pcVar6 + 0x28) = uVar11;
        *(undefined8 *)(pcVar6 + 0x18) = uVar10;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000c88fc,0,0);
        return;
      }
      lVar12 = *(long *)(unaff_x22 + 0x98);
      lVar7 = *(long *)(unaff_x22 + 0x78);
      lVar4 = *(long *)(unaff_x22 + 0x80);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
      lVar5 = *(long *)(lVar7 + 0x18);
      *(undefined **)(unaff_x22 + 0x68) = PTR___swiftEmptyArrayStorage_0099b8f0;
      func_0x000c6fb4(lVar4 + *(int *)(lVar7 + 0x34),unaff_x22 + 0x38);
      uVar3 = *(undefined1 *)(lVar4 + *(int *)(lVar7 + 0x38));
      puVar1 = (undefined8 *)(lVar4 + *(int *)(lVar7 + 0x3c));
      uVar13 = *puVar1;
      uVar2 = *(undefined1 *)(puVar1 + 1);
      uVar11 = 0xae8230;
      func_0x000115a8(0xae8230,&UNK_007d78c0);
      FUN_0010b930(uVar10,unaff_x22 + 0x68,unaff_x22 + 0x38,uVar3,uVar13,uVar2,lVar5,uVar11,
                   *(undefined8 *)(lVar7 + 0x28),&PTR_DAT_009ae8c0);
      if (lVar12 == 0) {
        uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar5 + -8) + 0x38);
        uVar10 = 0;
        goto LAB_000c8f88;
      }
    }
    else {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
      lVar7 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,*(undefined8 *)(*(long *)(unaff_x22 + 0x78) + 0x20),
                 *(undefined8 *)(*(long *)(unaff_x22 + 0x78) + 0x10),PTR___sSciTL_0099bfb8,
                 PTR___s13AsyncIteratorSciTl_0099bdc8);
      lVar4 = 0;
      __sSqMa(0,lVar7);
      (**(code **)(*(long *)(lVar4 + -8) + 8))(uVar11,lVar4);
      (**(code **)(*(long *)(lVar7 + -8) + 0x38))(uVar11,1,1,lVar7);
      plVar8 = (long *)0x0;
      FUN_00124784();
      _swift_allocObject();
      *(undefined1 *)(plVar8 + 2) = 0;
      plVar8[3] = -0x2fffffffffffffc4;
      plVar8[4] = -0x7fffffffff7475c0;
      plVar8[5] = 0x29287478656e;
      plVar8[6] = -0x1a00000000000000;
      plVar8[7] = -0x2fffffffffffffd8;
      plVar8[8] = -0x7fffffffff747680;
      plVar8[9] = 0xb2;
      plVar9 = plVar8;
      FUN_000c7104();
      _swift_allocError(&UNK_009ae930,plVar9,0,0);
      *plVar9 = (long)plVar8;
      _swift_willThrow();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000c9110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 000c91c0; end: 000c9237;  */

void FUN_000c91c0(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xa0));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000c920c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0xb0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000c9238,0,0);
  return;
}



/* Entry: 000c9238; end: 000c933b;  */

void FUN_000c9238(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar8 = *(long *)(unaff_x22 + 0xa8);
  lVar2 = *(long *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar7 = *(long *)(lVar2 + 0x18);
  func_0x000c6fb4(lVar3 + *(int *)(lVar2 + 0x34),unaff_x22 + 0x10);
  uVar5 = *(undefined1 *)(lVar3 + *(int *)(lVar2 + 0x38));
  puVar1 = (undefined8 *)(lVar3 + *(int *)(lVar2 + 0x3c));
  uVar10 = *puVar1;
  uVar4 = *(undefined1 *)(puVar1 + 1);
  uVar6 = 0xae8230;
  func_0x000115a8(0xae8230,&UNK_007d78c0);
  FUN_0010b930(uVar9,(undefined8 *)(unaff_x22 + 0x60),unaff_x22 + 0x10,uVar5,uVar10,uVar4,lVar7,
               uVar6,*(undefined8 *)(lVar2 + 0x28),&PTR_DAT_009ae8c0);
  if (lVar8 == 0) {
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(*(undefined8 *)(unaff_x22 + 0x70),0,1,lVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000c9338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 000c933c; end: 000c939b;  */

void FUN_000c933c(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  qword unaff_x20;
  long unaff_x22;
  
  pcVar2 = section_000000b8.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar2;
  *(long *)pcVar2 = unaff_x22;
  *(code **)(pcVar2 + 8) = FUN_000c939c;
  *(undefined8 *)(pcVar2 + 0x78) = param_2;
  *(qword *)(pcVar2 + 0x80) = unaff_x20;
  *(undefined8 *)(pcVar2 + 0x70) = param_1;
  pcVar1 = section_00000068.sectname + 8;
  _swift_task_alloc();
  *(char **)(pcVar2 + 0x88) = pcVar1;
  *(char **)pcVar1 = pcVar2;
  *(code **)(pcVar1 + 8) = FUN_000c8e60;
  *(undefined8 *)(pcVar1 + 0x10) = param_2;
  *(qword *)(pcVar1 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000c8444,0,0);
  return;
}



/* Entry: 000c939c; end: 000c93d7;  */

void FUN_000c939c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000c93d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 000c93d8; end: 000c9463;  */

void FUN_000c93d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKFTu_0099be70
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_000c9464;
                    /* WARNING: Could not recover jumptable at 0x007787d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScIsE4next9isolation7ElementQzSgScA_pSgYi_tYa7FailureQzYKF_0099be68)
            (plVar1,param_1,param_2,param_3,param_5,param_6,unaff_x22 + 0x10);
  return;
}



/* Entry: 000c9464; end: 000c94b7;  */

void FUN_000c9464(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
  else {
    **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000c94b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 000c94b8; end: 000c95e7;  */

void FUN_000c94b8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [40];
  
  lVar7 = *(long *)(param_2 + 0x10);
  lVar9 = *(long *)(lVar7 + -8);
  lVar4 = param_2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  uVar8 = *(undefined8 *)(lVar4 + 0x20);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,lVar7,PTR___sSciTL_0099bfb8,PTR___s13AsyncIteratorSciTl_0099bdc8);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  (**(code **)(lVar9 + 0x10))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar4,lVar7,uVar8);
  func_0x000c6fb4(unaff_x20 + *(int *)(param_2 + 0x34),auStack_78);
  uVar3 = *(undefined1 *)(unaff_x20 + *(int *)(param_2 + 0x38));
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x3c));
  uVar5 = *puVar1;
  uVar2 = *(undefined1 *)(puVar1 + 1);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_2 + 0x28);
  FUN_000c82ec(param_1,lVar4,auStack_78,uVar3,uVar5,uVar2,lVar7,uVar6,uVar8);
  return;
}



/* Entry: 000c95e8; end: 000c9617;  */

void FUN_000c95e8(long param_1)

{
  FUN_000c94b8();
                    /* WARNING: Could not recover jumptable at 0x000c9614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Entry: 000c9618; end: 000c9713;  */

long FUN_000c9618(undefined1 *param_1,uint param_2,undefined1 *param_3,long param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  long lVar5;
  uint uVar6;
  
  uVar3 = param_2;
  if (param_3 == (undefined1 *)0x0) {
    uVar4 = 0;
    param_4 = 0;
  }
  else if (param_4 == 0) {
    uVar4 = 0;
  }
  else {
    if (param_4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc96d0);
      (*pcVar1)();
    }
    if ((param_2 & 0xff) == (param_2 & 0xff00) >> 8) {
      param_4 = 1;
    }
    else {
      lVar5 = -1;
      puVar2 = param_3;
      uVar6 = param_2;
      do {
        uVar3 = (uVar6 & 0xff) + 1;
        if (uVar3 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0xc96cc);
          (*pcVar1)();
        }
        param_3 = puVar2 + 1;
        *puVar2 = (char)uVar6;
        if (param_4 + lVar5 == 0) {
          uVar4 = 0;
          goto LAB_000c96ac;
        }
        lVar5 = lVar5 + -1;
        puVar2 = param_3;
        uVar6 = uVar3;
      } while ((uVar3 & 0xff) != (param_2 & 0xff00) >> 8);
      param_4 = -lVar5;
    }
    *param_3 = (char)uVar3;
    uVar4 = 1;
    uVar3 = 0;
  }
LAB_000c96ac:
  *param_1 = (char)param_2;
  param_1[1] = (char)(param_2 >> 8);
  param_1[2] = (char)uVar3;
  param_1[3] = uVar4;
  return param_4;
}



/* Entry: 000c9714; end: 000c979b;  */

void FUN_000c9714(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_007d7a88;
    puStack_30 = &UNK_007d7aa0;
    puStack_28 = &UNK_007d7ab8;
    _swift_initStructMetadata(param_1,0,4,&lStack_40,param_1 + 0x30);
  }
  return;
}



/* Entry: 000c979c; end: 000c98b3;  */

long * FUN_000c979c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar6 = *(long *)(lVar3 + 0x40);
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) == 0 && (lVar6 + 0x37U & 0xfffffffffffffff8) + 9 < 0x19)
  {
    (**(code **)(lVar3 + 0x10))(param_1);
    puVar5 = (undefined8 *)((long)param_1 + lVar6 + 7 & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)((long)param_2 + lVar6 + 7 & 0xfffffffffffffff8);
    uVar2 = puVar7[3];
    if (uVar2 < 0xffffffff) {
      uVar8 = puVar7[1];
      uVar4 = *puVar7;
      uVar10 = puVar7[3];
      uVar9 = puVar7[2];
      puVar5[4] = puVar7[4];
      puVar5[1] = uVar8;
      *puVar5 = uVar4;
      puVar5[3] = uVar10;
      puVar5[2] = uVar9;
    }
    else {
      puVar5[3] = uVar2;
      puVar5[4] = puVar7[4];
      (*(code *)**(undefined8 **)(uVar2 - 8))(puVar5,puVar7);
    }
    *(undefined1 *)(puVar5 + 5) = *(undefined1 *)(puVar7 + 5);
    puVar5 = (undefined8 *)((long)param_1 + lVar6 + 0x37 & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)((long)param_2 + lVar6 + 0x37 & 0xfffffffffffffff8);
    uVar4 = *puVar7;
    *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar7 + 1);
    *puVar5 = uVar4;
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x50) & 0xf8;
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 000c98b4; end: 000c990b;  */

void FUN_000c98b4(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar2 + 8))();
  puVar1 = (undefined8 *)(param_1 + *(long *)(lVar2 + 0x40) + 7U & 0xfffffffffffffff8);
  if ((ulong)puVar1[3] < 0xffffffff) {
    return;
  }
  if ((*(byte *)(*(long *)(puVar1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00011684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*puVar1);
  return;
}



/* Entry: 000c990c; end: 000c9ad3;  */

long FUN_000c990c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar5 + 0x10))();
  lVar2 = *(long *)(lVar5 + 0x40);
  lVar5 = lVar2 + param_1;
  lVar2 = lVar2 + param_2;
  puVar4 = (undefined8 *)(lVar5 + 7U & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)(lVar2 + 7U & 0xfffffffffffffff8);
  uVar1 = puVar6[3];
  if (uVar1 < 0xffffffff) {
    uVar7 = puVar6[1];
    uVar3 = *puVar6;
    uVar9 = puVar6[3];
    uVar8 = puVar6[2];
    puVar4[4] = puVar6[4];
    puVar4[1] = uVar7;
    *puVar4 = uVar3;
    puVar4[3] = uVar9;
    puVar4[2] = uVar8;
  }
  else {
    puVar4[3] = uVar1;
    puVar4[4] = puVar6[4];
    (*(code *)**(undefined8 **)(uVar1 - 8))(puVar4,puVar6);
  }
  *(undefined1 *)(puVar4 + 5) = *(undefined1 *)(puVar6 + 5);
  puVar4 = (undefined8 *)(lVar5 + 0x37U & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)(lVar2 + 0x37U & 0xfffffffffffffff8);
  uVar3 = *puVar6;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar6 + 1);
  *puVar4 = uVar3;
  return param_1;
}



/* Entry: 000c9ad4; end: 000c9b63;  */

long FUN_000c9ad4(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar5 + 0x20))();
  lVar1 = *(long *)(lVar5 + 0x40);
  lVar5 = lVar1 + param_1;
  lVar1 = lVar1 + param_2;
  puVar2 = (undefined8 *)(lVar5 + 7U & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(lVar1 + 7U & 0xfffffffffffffff8);
  uVar6 = puVar4[1];
  uVar3 = *puVar4;
  uVar8 = puVar4[3];
  uVar7 = puVar4[2];
  puVar2[4] = puVar4[4];
  puVar2[1] = uVar6;
  *puVar2 = uVar3;
  puVar2[3] = uVar8;
  puVar2[2] = uVar7;
  *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(puVar4 + 5);
  puVar4 = (undefined8 *)(lVar5 + 0x37U & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar1 + 0x37U & 0xfffffffffffffff8);
  uVar3 = *puVar2;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar4 = uVar3;
  return param_1;
}



/* Entry: 000c9b64; end: 000c9c13;  */

long FUN_000c9b64(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar2 + 0x28))();
  lVar4 = *(long *)(lVar2 + 0x40);
  lVar2 = lVar4 + param_1;
  puVar3 = (undefined8 *)(lVar2 + 7U & 0xfffffffffffffff8);
  if (0xfffffffe < (ulong)puVar3[3]) {
    FUN_00011670(puVar3);
  }
  lVar4 = lVar4 + param_2;
  puVar1 = (undefined8 *)(lVar4 + 7U & 0xfffffffffffffff8);
  uVar6 = puVar1[1];
  uVar5 = *puVar1;
  uVar8 = puVar1[3];
  uVar7 = puVar1[2];
  puVar3[4] = puVar1[4];
  puVar3[1] = uVar6;
  *puVar3 = uVar5;
  puVar3[3] = uVar8;
  puVar3[2] = uVar7;
  *(undefined1 *)(puVar3 + 5) = *(undefined1 *)(puVar1 + 5);
  puVar1 = (undefined8 *)(lVar2 + 0x37U & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(lVar4 + 0x37U & 0xfffffffffffffff8);
  *puVar1 = *puVar3;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar3 + 1);
  return param_1;
}



/* Entry: 000c9c14; end: 000c9d27;  */

uint * FUN_000c9c14(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  lVar9 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar9 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x7fffffff) {
    uVar2 = 0x7ffffffe;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    lVar1 = (*(long *)(lVar9 + 0x40) + 0x37U & 0xfffffffffffffff8) + 9;
    uVar6 = (uint)lVar1;
    uVar8 = 2;
    uVar4 = uVar8;
    if (uVar6 < 4) {
      uVar4 = ((param_2 - uVar2) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar4) {
      uVar8 = 4;
    }
    if (uVar4 < 0x100) {
      uVar8 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar8;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar8 = (uint)*(byte *)((long)param_1 + lVar1), *(byte *)((long)param_1 + lVar1) != 0))
      goto LAB_000c9cac;
    }
    else if (uVar3 == 2) {
      uVar8 = (uint)*(ushort *)((long)param_1 + lVar1);
      if (*(ushort *)((long)param_1 + lVar1) != 0) {
LAB_000c9cac:
        uVar5 = uVar8 - 1 << (ulong)((uVar6 & 3) << 3);
        if (uVar6 < 4) {
          uVar8 = (uint)(byte)*param_1;
        }
        else {
          uVar8 = *param_1;
          uVar5 = 0;
        }
        return (uint *)(ulong)(uVar2 + (uVar8 | uVar5) + 1);
      }
    }
    else {
      uVar8 = *(uint *)((long)param_1 + lVar1);
      if (uVar8 != 0) goto LAB_000c9cac;
    }
  }
  if (0x7ffffffd < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000c9ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x30))();
    return param_1;
  }
  uVar7 = *(ulong *)(((ulong)((long)param_1 + *(long *)(lVar9 + 0x40) + 7) & 0xffffffffffffff8) +
                    0x18);
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  uVar2 = 0;
  if (1 < (uint)uVar7 + 1) {
    uVar2 = (uint)uVar7;
  }
  return (uint *)(ulong)uVar2;
}



/* Entry: 000c9d28; end: 000c9ec3;  */

void FUN_000c9d28(uint *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar4 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar4;
  if (uVar4 < 0x7fffffff) {
    uVar2 = 0x7ffffffe;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  lVar1 = (lVar9 + 0x37U & 0xfffffffffffffff8) + 9;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar10 = 2;
    uVar3 = uVar10;
    if ((uint)lVar1 < 4) {
      uVar3 = ((param_3 - uVar2) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar3) {
      uVar10 = 4;
    }
    if (uVar3 < 0x100) {
      uVar10 = 1;
    }
    uVar5 = 0;
    if (1 < uVar3) {
      uVar5 = uVar10;
    }
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    _bzero(param_1,lVar1);
    iVar6 = 1;
    if ((uint)lVar1 < 4) {
      iVar6 = (param_2 >> 8) + 1;
      *(char *)param_1 = (char)param_2;
    }
    else {
      *param_1 = param_2;
    }
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar6;
      }
    }
    else if (uVar5 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar6;
    }
  }
  else {
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (uVar5 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      if (0x7ffffffd < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x000c9e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))(param_1);
        return;
      }
      piVar7 = (int *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
      if (param_2 < 0x7fffffff) {
        *(ulong *)(piVar7 + 6) = (ulong)param_2;
      }
      else {
        piVar7[8] = 0;
        piVar7[9] = 0;
        piVar7[2] = 0;
        piVar7[3] = 0;
        piVar7[0] = 0;
        piVar7[1] = 0;
        piVar7[6] = 0;
        piVar7[7] = 0;
        piVar7[4] = 0;
        piVar7[5] = 0;
        *piVar7 = param_2 + 0x80000001;
      }
    }
  }
  return;
}



/* Entry: 000c9ec4; end: 000c9ecb;  */

void FUN_000c9ec4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_0099b938)();
  return;
}



/* Entry: 000c9ecc; end: 000c9f73;  */

void FUN_000c9ecc(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),
             PTR___sSciTL_0099bfb8,PTR___s13AsyncIteratorSciTl_0099bdc8);
  lVar2 = 0x13f;
  __sSqMa();
  if (uVar1 < 0x40) {
    lStack_40 = *(long *)(lVar2 + -8) + 0x40;
    puStack_38 = &UNK_007d7a88;
    puStack_30 = &UNK_007d7aa0;
    puStack_28 = &UNK_007d7ab8;
    _swift_initStructMetadata(param_1,0,4,&lStack_40,param_1 + 0x30);
  }
  return;
}



/* Entry: 000c9f74; end: 000ca0ff;  */

long * FUN_000c9f74(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),PTR___sSciTL_0099bfb8
             ,PTR___s13AsyncIteratorSciTl_0099bdc8);
  lVar9 = *(long *)(lVar2 + -8);
  lVar5 = *(long *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  if ((*(uint *)(lVar9 + 0x50) & 0x1000f8) == 0 && (lVar5 + 0x37U & 0xfffffffffffffff8) + 9 < 0x19)
  {
    plVar3 = param_2;
    (**(code **)(lVar9 + 0x30))(param_2,1,lVar2);
    if ((int)plVar3 == 0) {
      (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar2);
      (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar2);
    }
    else {
      _memcpy(param_1,param_2,lVar5);
    }
    puVar7 = (undefined8 *)((long)param_1 + lVar5 + 7 & 0xfffffffffffffff8);
    puVar8 = (undefined8 *)((long)param_2 + lVar5 + 7 & 0xfffffffffffffff8);
    uVar4 = puVar8[3];
    if (uVar4 < 0xffffffff) {
      uVar10 = puVar8[1];
      uVar6 = *puVar8;
      uVar12 = puVar8[3];
      uVar11 = puVar8[2];
      puVar7[4] = puVar8[4];
      puVar7[1] = uVar10;
      *puVar7 = uVar6;
      puVar7[3] = uVar12;
      puVar7[2] = uVar11;
    }
    else {
      puVar7[3] = uVar4;
      puVar7[4] = puVar8[4];
      (*(code *)**(undefined8 **)(uVar4 - 8))(puVar7,puVar8);
    }
    *(undefined1 *)(puVar7 + 5) = *(undefined1 *)(puVar8 + 5);
    puVar7 = (undefined8 *)((long)param_1 + lVar5 + 0x37 & 0xfffffffffffffff8);
    puVar8 = (undefined8 *)((long)param_2 + lVar5 + 0x37 & 0xfffffffffffffff8);
    uVar6 = *puVar8;
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar8 + 1);
    *puVar7 = uVar6;
  }
  else {
    uVar1 = *(uint *)(lVar9 + 0x50) & 0xf8;
    lVar5 = *param_2;
    *param_1 = lVar5;
    param_1 = (long *)(lVar5 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 000ca100; end: 000ca1b3;  */

void FUN_000ca100(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),PTR___sSciTL_0099bfb8
             ,PTR___s13AsyncIteratorSciTl_0099bdc8);
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = param_1;
  (**(code **)(lVar4 + 0x30))(param_1,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 8))(param_1,lVar1);
  }
  param_1 = param_1 + *(long *)(lVar4 + 0x40);
  if (*(int *)(lVar4 + 0x54) == 0) {
    param_1 = param_1 + 1;
  }
  puVar3 = (undefined8 *)(param_1 + 7U & 0xfffffffffffffff8);
  if (0xfffffffe < (ulong)puVar3[3]) {
    if ((*(byte *)(*(long *)(puVar3[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00011684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(puVar3[3] + -8) + 8))();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(*puVar3);
    return;
  }
  return;
}



/* Entry: 000ca1b4; end: 000ca4cf;  */

long FUN_000ca1b4(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),PTR___sSciTL_0099bfb8
             ,PTR___s13AsyncIteratorSciTl_0099bdc8);
  lVar7 = *(long *)(lVar1 + -8);
  lVar8 = param_2;
  (**(code **)(lVar7 + 0x30))(param_2,1,lVar1);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar1);
    iVar5 = *(int *)(lVar7 + 0x54);
    lVar8 = *(long *)(lVar7 + 0x40);
  }
  else {
    iVar5 = *(int *)(lVar7 + 0x54);
    lVar8 = *(long *)(lVar7 + 0x40);
    lVar1 = lVar8;
    if (iVar5 == 0) {
      lVar1 = lVar8 + 1;
    }
    _memcpy(param_1,param_2,lVar1);
  }
  if (iVar5 == 0) {
    lVar8 = lVar8 + 1;
  }
  puVar4 = (undefined8 *)(lVar8 + param_1 + 7U & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)(lVar8 + param_2 + 7U & 0xfffffffffffffff8);
  uVar2 = puVar6[3];
  if (uVar2 < 0xffffffff) {
    uVar9 = puVar6[1];
    uVar3 = *puVar6;
    uVar11 = puVar6[3];
    uVar10 = puVar6[2];
    puVar4[4] = puVar6[4];
    puVar4[1] = uVar9;
    *puVar4 = uVar3;
    puVar4[3] = uVar11;
    puVar4[2] = uVar10;
  }
  else {
    puVar4[3] = uVar2;
    puVar4[4] = puVar6[4];
    (*(code *)**(undefined8 **)(uVar2 - 8))(puVar4,puVar6);
  }
  *(undefined1 *)(puVar4 + 5) = *(undefined1 *)(puVar6 + 5);
  puVar4 = (undefined8 *)(lVar8 + param_1 + 0x37U & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)(lVar8 + param_2 + 0x37U & 0xfffffffffffffff8);
  uVar3 = *puVar6;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar6 + 1);
  *puVar4 = uVar3;
  return param_1;
}



/* Entry: 000ca4d0; end: 000ca5e7;  */

long FUN_000ca4d0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),PTR___sSciTL_0099bfb8
             ,PTR___s13AsyncIteratorSciTl_0099bdc8);
  lVar6 = *(long *)(lVar1 + -8);
  lVar7 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,1,lVar1);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar6 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar1);
    iVar5 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar5 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar1 = lVar7;
    if (iVar5 == 0) {
      lVar1 = lVar7 + 1;
    }
    _memcpy(param_1,param_2,lVar1);
  }
  if (iVar5 == 0) {
    lVar7 = lVar7 + 1;
  }
  puVar2 = (undefined8 *)(lVar7 + param_1 + 7U & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(lVar7 + param_2 + 7U & 0xfffffffffffffff8);
  uVar8 = puVar4[1];
  uVar3 = *puVar4;
  uVar10 = puVar4[3];
  uVar9 = puVar4[2];
  puVar2[4] = puVar4[4];
  puVar2[1] = uVar8;
  *puVar2 = uVar3;
  puVar2[3] = uVar10;
  puVar2[2] = uVar9;
  *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(puVar4 + 5);
  puVar4 = (undefined8 *)(lVar7 + param_1 + 0x37U & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar7 + param_2 + 0x37U & 0xfffffffffffffff8);
  uVar3 = *puVar2;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar4 = uVar3;
  return param_1;
}



/* Entry: 000ca5e8; end: 000ca763;  */

long FUN_000ca5e8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),PTR___sSciTL_0099bfb8
             ,PTR___s13AsyncIteratorSciTl_0099bdc8);
  lVar6 = *(long *)(lVar1 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar3 = param_1;
  (*pcVar7)(param_1,1,lVar1);
  lVar2 = param_2;
  (*pcVar7)(param_2,1,lVar1);
  if ((int)lVar3 == 0) {
    if ((int)lVar2 == 0) {
      (**(code **)(lVar6 + 0x28))(param_1,param_2,lVar1);
      goto LAB_000ca6bc;
    }
    (**(code **)(lVar6 + 8))(param_1,lVar1);
  }
  else if ((int)lVar2 == 0) {
    (**(code **)(lVar6 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar1);
    goto LAB_000ca6bc;
  }
  lVar3 = *(long *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar3 = lVar3 + 1;
  }
  _memcpy(param_1,param_2,lVar3);
LAB_000ca6bc:
  lVar3 = *(long *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar3 = lVar3 + 1;
  }
  puVar5 = (undefined8 *)(lVar3 + param_1 + 7U & 0xfffffffffffffff8);
  if (0xfffffffe < (ulong)puVar5[3]) {
    FUN_00011670(puVar5);
  }
  puVar4 = (undefined8 *)(lVar3 + param_2 + 7U & 0xfffffffffffffff8);
  uVar9 = puVar4[1];
  uVar8 = *puVar4;
  uVar11 = puVar4[3];
  uVar10 = puVar4[2];
  puVar5[4] = puVar4[4];
  puVar5[1] = uVar9;
  *puVar5 = uVar8;
  puVar5[3] = uVar11;
  puVar5[2] = uVar10;
  *(undefined1 *)(puVar5 + 5) = *(undefined1 *)(puVar4 + 5);
  puVar4 = (undefined8 *)(lVar3 + param_1 + 0x37U & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(lVar3 + param_2 + 0x37U & 0xfffffffffffffff8);
  *puVar4 = *puVar5;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar5 + 1);
  return param_1;
}



/* Entry: 000ca764; end: 000ca8cf;  */

int FUN_000ca764(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),PTR___sSciTL_0099bfb8
             ,PTR___s13AsyncIteratorSciTl_0099bdc8);
  lVar9 = *(long *)(lVar7 + -8);
  iVar6 = *(int *)(lVar9 + 0x54);
  uVar5 = 0;
  if (iVar6 != 0) {
    uVar5 = iVar6 - 1;
  }
  uVar2 = uVar5;
  if (uVar5 < 0x7fffffff) {
    uVar2 = 0x7ffffffe;
  }
  lVar11 = *(long *)(lVar9 + 0x40);
  if (iVar6 == 0) {
    lVar11 = lVar11 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    lVar1 = (lVar11 + 0x37U & 0xfffffffffffffff8) + 9;
    uVar12 = (uint)lVar1;
    uVar10 = 2;
    uVar4 = uVar10;
    if (uVar12 < 4) {
      uVar4 = ((param_2 - uVar2) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar4) {
      uVar10 = 4;
    }
    if (uVar4 < 0x100) {
      uVar10 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar10;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar10 = (uint)*(byte *)((long)param_1 + lVar1), *(byte *)((long)param_1 + lVar1) != 0))
      goto LAB_000ca83c;
    }
    else if (uVar3 == 2) {
      uVar10 = (uint)*(ushort *)((long)param_1 + lVar1);
      if (*(ushort *)((long)param_1 + lVar1) != 0) {
LAB_000ca83c:
        uVar5 = uVar10 - 1 << (ulong)((uVar12 & 3) << 3);
        if (uVar12 < 4) {
          uVar10 = (uint)(byte)*param_1;
        }
        else {
          uVar10 = *param_1;
          uVar5 = 0;
        }
        return uVar2 + (uVar10 | uVar5) + 1;
      }
    }
    else {
      uVar10 = *(uint *)((long)param_1 + lVar1);
      if (uVar10 != 0) goto LAB_000ca83c;
    }
  }
  if (uVar5 < 0x7ffffffe) {
    uVar8 = *(ulong *)(((ulong)((long)param_1 + lVar11 + 7) & 0xffffffffffffff8) + 0x18);
    if (0xfffffffe < uVar8) {
      uVar8 = 0xffffffff;
    }
    iVar6 = 0;
    if (1 < (int)uVar8 + 1U) {
      iVar6 = (int)uVar8;
    }
  }
  else {
    (**(code **)(lVar9 + 0x30))(param_1,iVar6,lVar7);
    iVar6 = 0;
    if ((int)param_1 != 0) {
      iVar6 = (int)param_1 + -1;
    }
  }
  return iVar6;
}



/* Entry: 000ca8d0; end: 000cab17;  */

void FUN_000ca8d0(uint *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),PTR___sSciTL_0099bfb8
             ,PTR___s13AsyncIteratorSciTl_0099bdc8);
  lVar8 = *(long *)(lVar4 + -8);
  iVar6 = *(int *)(lVar8 + 0x54);
  uVar2 = 0;
  if (iVar6 != 0) {
    uVar2 = iVar6 - 1;
  }
  uVar9 = uVar2;
  if (uVar2 < 0x7fffffff) {
    uVar9 = 0x7ffffffe;
  }
  lVar10 = *(long *)(lVar8 + 0x40);
  if (iVar6 == 0) {
    lVar10 = lVar10 + 1;
  }
  lVar1 = (lVar10 + 0x37U & 0xfffffffffffffff8) + 9;
  uVar5 = 0;
  if (uVar9 <= param_3 && param_3 - uVar9 != 0) {
    uVar11 = 2;
    uVar3 = uVar11;
    if ((uint)lVar1 < 4) {
      uVar3 = ((param_3 - uVar9) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar3) {
      uVar11 = 4;
    }
    if (uVar3 < 0x100) {
      uVar11 = 1;
    }
    uVar5 = 0;
    if (1 < uVar3) {
      uVar5 = uVar11;
    }
  }
  if (uVar9 < param_2) {
    param_2 = param_2 + ~uVar9;
    _bzero(param_1,lVar1);
    iVar6 = 1;
    if ((uint)lVar1 < 4) {
      iVar6 = (param_2 >> 8) + 1;
      *(char *)param_1 = (char)param_2;
    }
    else {
      *param_1 = param_2;
    }
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar6;
      }
    }
    else if (uVar5 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar6;
    }
  }
  else {
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (uVar5 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      if (uVar2 < 0x7ffffffe) {
        piVar7 = (int *)((long)param_1 + lVar10 + 7 & 0xfffffffffffffff8);
        if (param_2 < 0x7fffffff) {
          *(ulong *)(piVar7 + 6) = (ulong)param_2;
        }
        else {
          piVar7[8] = 0;
          piVar7[9] = 0;
          piVar7[2] = 0;
          piVar7[3] = 0;
          piVar7[0] = 0;
          piVar7[1] = 0;
          piVar7[6] = 0;
          piVar7[7] = 0;
          piVar7[4] = 0;
          piVar7[5] = 0;
          *piVar7 = param_2 + 0x80000001;
        }
      }
      else {
        if (param_2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x000caac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar8 + 0x38))(param_1,param_2 + 1,iVar6,lVar4);
          return;
        }
        uVar5 = (uint)lVar10;
        uVar9 = 0xffffffff;
        if (uVar5 < 4) {
          uVar9 = ~(-1 << (ulong)((uVar5 & 3) << 3));
        }
        if (uVar5 != 0) {
          uVar9 = uVar9 & (uVar2 - param_2 ^ 0xffffffff);
          uVar2 = 4;
          if (uVar5 < 4) {
            uVar2 = uVar5;
          }
          _bzero(param_1);
          if ((int)uVar2 < 3) {
            if (uVar2 == 1) {
              *(char *)param_1 = (char)uVar9;
            }
            else {
              *(short *)param_1 = (short)uVar9;
            }
          }
          else if (uVar2 == 3) {
            *(short *)param_1 = (short)uVar9;
            *(char *)((long)param_1 + 2) = (char)(uVar9 >> 0x10);
          }
          else {
            *param_1 = uVar9;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 000cab18; end: 000cab53;  */

void FUN_000cab18(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077b3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_0099ba28)(param_1,param_2,&UNK_008438a8);
  return;
}



/* Entry: 000cab54; end: 000cabe3;  */

long FUN_000cab54(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 000cabe4; end: 000caeb7;  */

undefined8 * FUN_000cabe4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  param_1[5] = param_2[5];
  lVar1 = param_2[9];
  if (lVar1 == 0) {
    uVar2 = param_2[6];
    uVar5 = param_2[9];
    uVar4 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar5;
    param_1[8] = uVar4;
    param_1[10] = param_2[10];
  }
  else {
    uVar2 = param_2[10];
    param_1[9] = lVar1;
    param_1[10] = uVar2;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 6,param_2 + 6);
  }
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xf] = param_2[0xf];
  uVar3 = param_2[0x11];
  if (uVar3 >> 0x3c < 0xf) {
    uVar2 = param_2[0x10];
    func_0x00023304(uVar2,uVar3);
    param_1[0x10] = uVar2;
    param_1[0x11] = uVar3;
  }
  else {
    uVar2 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar2;
  }
  uVar3 = param_2[0x13];
  if (uVar3 >> 0x3c < 0xf) {
    uVar2 = param_2[0x12];
    func_0x00023304(uVar2,uVar3);
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
  }
  else {
    uVar2 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar2;
  }
  return param_1;
}



/* Entry: 000caeb8; end: 000caee3;  */

void FUN_000caeb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  uVar5 = param_2[0x10];
  uVar7 = param_2[0x13];
  uVar6 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar5;
  param_1[0x13] = uVar7;
  param_1[0x12] = uVar6;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  return;
}



/* Entry: 000caee4; end: 000cafff;  */

undefined8 * FUN_000caee4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  param_1[5] = param_2[5];
  if (param_1[9] != 0) {
    FUN_00011670(param_1 + 6);
  }
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xf] = param_2[0xf];
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  if ((ulong)param_1[0x11] >> 0x3c < 0xf) {
    uVar2 = param_2[0x11];
    if (uVar2 >> 0x3c < 0xf) {
      uVar1 = param_1[0x10];
      param_1[0x10] = param_2[0x10];
      param_1[0x11] = uVar2;
      FUN_00023358(uVar1);
      goto LAB_000cafac;
    }
    func_0x0005c328(param_1 + 0x10);
  }
  uVar1 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar1;
LAB_000cafac:
  if ((ulong)param_1[0x13] >> 0x3c < 0xf) {
    uVar2 = param_2[0x13];
    if (uVar2 >> 0x3c < 0xf) {
      uVar1 = param_1[0x12];
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = uVar2;
      FUN_00023358(uVar1);
      return param_1;
    }
    func_0x0005c328(param_1 + 0x12);
  }
  uVar1 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar1;
  return param_1;
}



/* Entry: 000cb000; end: 000cb0e7;  */

int FUN_000cb000(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x28] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x12);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 000cb0e8; end: 000cb49f;  */

void FUN_000cb0e8(undefined1 *param_1)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 uVar9;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar10;
  byte *pbVar11;
  
  if (0 < unaff_x20[5]) {
    uVar10 = unaff_x20[0x13];
    if (uVar10 >> 0x3c < 0xf) {
      lVar4 = unaff_x20[0x12];
      lVar7 = unaff_x20[0x10];
      uVar6 = unaff_x20[0x11];
      FUN_000308a8(lVar4,uVar10);
      FUN_000308a8(lVar7,uVar6);
      FUN_00023344(lVar7,uVar6);
      if (uVar6 >> 0x3c < 0xf) {
        FUN_00023344(0,0xf000000000000000);
        if (0xe < (ulong)unaff_x20[0x11] >> 0x3c) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xcb498);
          (*pcVar2)();
        }
        __s10Foundation4DataV6appendyyACF(lVar4,uVar10);
        FUN_00023344(lVar4,uVar10);
      }
      else {
        FUN_00023344(unaff_x20[0x10],unaff_x20[0x11]);
        unaff_x20[0x10] = lVar4;
        unaff_x20[0x11] = uVar10;
      }
      FUN_00023344(unaff_x20[0x12],unaff_x20[0x13]);
      unaff_x20[0x13] = -0x1000000000000000;
      unaff_x20[0x12] = 0;
    }
    else if ((*(byte *)(unaff_x20 + 4) & 1) == 0) {
      if ((char)unaff_x20[0xe] == '\x01') {
        if (unaff_x20[3] == 0) {
          lVar7 = *unaff_x20 - unaff_x20[2];
          if (SCARRY8(unaff_x20[1],lVar7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0xcb494);
            (*pcVar2)();
          }
          *unaff_x20 = unaff_x20[2];
          unaff_x20[1] = unaff_x20[1] + lVar7;
          FUN_000d3ab0();
          if (unaff_x21 != 0) {
            return;
          }
          if (((ulong)param_1 & 0xff00000000) == 0x100000000) {
            uVar9 = 1;
            goto LAB_000cb280;
          }
          FUN_000d3828();
          unaff_x20[3] = *unaff_x20;
        }
        else {
          *unaff_x20 = unaff_x20[3];
        }
      }
      else {
        FUN_000cb4a0();
        if (unaff_x21 != 0) {
          return;
        }
        if (unaff_x20[3] == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xcb49c);
          (*pcVar2)();
        }
        lVar4 = unaff_x20[2];
        lVar5 = unaff_x20[3] - lVar4;
        FUN_00135524();
        lVar7 = unaff_x20[0x10];
        uVar10 = unaff_x20[0x11];
        FUN_000308a8(lVar7,uVar10);
        FUN_00023344(lVar7,uVar10);
        if (uVar10 >> 0x3c < 0xf) {
          FUN_00023344(0,0xf000000000000000);
          if (0xe < (ulong)unaff_x20[0x11] >> 0x3c) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0xcb4a0);
            (*pcVar2)();
          }
          __s10Foundation4DataV6appendyyACF(lVar4,lVar5);
          FUN_00023358(lVar4,lVar5);
        }
        else {
          FUN_00023344(unaff_x20[0x10],unaff_x20[0x11]);
          unaff_x20[0x10] = lVar4;
          unaff_x20[0x11] = lVar5;
        }
      }
    }
  }
  uVar10 = unaff_x20[1];
  if (uVar10 == 0) {
    return;
  }
  pbVar11 = (byte *)*unaff_x20;
  unaff_x20[2] = (long)pbVar11;
  unaff_x20[3] = 0;
  bVar1 = *pbVar11;
  param_1 = (undefined1 *)(ulong)(bVar1 & 7);
  func_0x00140228();
  uVar3 = (uint)param_1;
  if ((uVar3 & 0xff) != 6) {
    *(char *)((long)unaff_x20 + 0x21) = (char)param_1;
    if ((char)bVar1 < '\0') {
      uVar6 = (ulong)(bVar1 >> 3 & 0xf);
      unaff_x20[5] = uVar6;
      if (1 < (long)uVar10) {
        uVar8 = (ulong)(char)pbVar11[1];
        if (-1 < (long)uVar8) {
          *unaff_x20 = (long)(pbVar11 + 2);
          unaff_x20[1] = uVar10 - 2;
          param_1 = (undefined1 *)(uVar6 | uVar8 << 4);
          goto LAB_000cb230;
        }
        uVar6 = uVar6 | (uVar8 & 0x7f) << 4;
        unaff_x20[5] = uVar6;
        if (uVar10 != 2) {
          bVar1 = pbVar11[2];
          param_1 = (undefined1 *)(uVar6 | (ulong)((int)(char)bVar1 & 0x7f) << 0xb);
          unaff_x20[5] = (long)param_1;
          if (-1 < (char)bVar1) {
            pbVar11 = pbVar11 + 3;
            lVar7 = uVar10 - 3;
LAB_000cb3d0:
            *unaff_x20 = (long)pbVar11;
            unaff_x20[1] = lVar7;
            goto LAB_000cb234;
          }
          if (3 < uVar10) {
            bVar1 = pbVar11[3];
            param_1 = (undefined1 *)((ulong)param_1 | (ulong)((int)(char)bVar1 & 0x7f) << 0x12);
            unaff_x20[5] = (long)param_1;
            if (-1 < (char)bVar1) {
              *unaff_x20 = (long)(pbVar11 + 4);
              unaff_x20[1] = uVar10 - 4;
              goto LAB_000cb234;
            }
            if ((uVar10 != 4) && ((ulong)pbVar11[4] < 0x10)) {
              param_1 = (undefined1 *)((ulong)param_1 | (ulong)pbVar11[4] << 0x19);
              unaff_x20[5] = (long)param_1;
              pbVar11 = pbVar11 + 5;
              lVar7 = uVar10 - 5;
              goto LAB_000cb3d0;
            }
          }
        }
      }
    }
    else {
      *unaff_x20 = (long)(pbVar11 + 1);
      if (SBORROW8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xcb490);
        (*pcVar2)();
      }
      unaff_x20[1] = uVar10 - 1;
      param_1 = (undefined1 *)(ulong)(bVar1 >> 3);
LAB_000cb230:
      unaff_x20[5] = (long)param_1;
LAB_000cb234:
      if (param_1 != (undefined1 *)0x0) {
        *(undefined1 *)(unaff_x20 + 4) = 0;
        if ((uVar3 & 0xff) != 4) {
          return;
        }
        if (((char)unaff_x20[0xc] != '\x01') && ((undefined1 *)unaff_x20[0xb] == param_1)) {
          return;
        }
      }
    }
  }
  uVar9 = 3;
LAB_000cb280:
  FUN_000d4ba8();
  _swift_allocError(&UNK_009ab010,param_1,0,0);
  *param_1 = uVar9;
  _swift_willThrow();
  return;
}



/* Entry: 000cb4a0; end: 000cb543;  */

void FUN_000cb4a0(undefined1 *param_1)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  long unaff_x21;
  
  if (unaff_x20[3] == 0) {
    lVar2 = *unaff_x20 - unaff_x20[2];
    if (SCARRY8(unaff_x20[1],lVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xcb544);
      (*pcVar1)();
    }
    *unaff_x20 = unaff_x20[2];
    unaff_x20[1] = unaff_x20[1] + lVar2;
    FUN_000d3ab0();
    if (unaff_x21 == 0) {
      if (((ulong)param_1 & 0xff00000000) == 0x100000000) {
        FUN_000d4ba8();
        _swift_allocError(&UNK_009ab010,param_1,0,0);
        *param_1 = 1;
        _swift_willThrow();
      }
      else {
        FUN_000d3828();
        unaff_x20[3] = *unaff_x20;
      }
    }
  }
  else {
    *unaff_x20 = unaff_x20[3];
  }
  return;
}



/* Entry: 000cb544; end: 000cb5c3;  */

void FUN_000cb544(undefined4 *param_1)

{
  long *unaff_x20;
  undefined4 uVar1;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x05') {
    if (unaff_x20[1] < 4) {
      FUN_000d4ba8();
      _swift_allocError(&UNK_009ab010,param_1,0,0);
      *(undefined1 *)param_1 = 1;
      _swift_willThrow();
    }
    else {
      uVar1 = *(undefined4 *)*unaff_x20;
      *unaff_x20 = (long)((undefined4 *)*unaff_x20 + 1);
      unaff_x20[1] = unaff_x20[1] + -4;
      *param_1 = uVar1;
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  return;
}



/* Entry: 000cb5c4; end: 000cb85b;  */

void FUN_000cb5c4(ulong *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  undefined4 uVar12;
  
  puVar3 = param_1;
  if (*(char *)((long)unaff_x20 + 0x21) == '\x02') {
    FUN_000cb85c();
    if (unaff_x21 != 0) {
      return;
    }
    if (puVar3 != (ulong *)0x0) {
      if (((((ulong)puVar3 & 3) == 0) && (puVar9 = (ulong *)unaff_x20[1], -1 < (long)puVar9)) &&
         (puVar3 <= puVar9)) {
        uVar10 = (ulong)puVar3 >> 2;
        puVar8 = (ulong *)*param_1;
        uVar4 = puVar8[2];
        if (SCARRY8(uVar4,uVar10)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0xcb85c);
          (*pcVar1)();
        }
        puVar3 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)puVar3 == 0) || ((long)(puVar8[3] >> 1) < (long)(uVar4 + uVar10))) {
          FUN_000d610c();
          puVar8 = puVar3;
        }
        *param_1 = (ulong)puVar8;
        if ((ulong *)((long)&MACH_HEADER.magic + 3) < puVar9) {
          lVar5 = 0;
          bVar2 = uVar10 == 1;
          uVar4 = puVar8[2];
          lVar6 = *unaff_x20;
          lVar11 = -4;
          while( true ) {
            puVar3 = (ulong *)(uVar4 + lVar5);
            uVar12 = *(undefined4 *)(lVar6 + lVar5 * 4);
            uVar7 = uVar4 + 1 + lVar5;
            if ((ulong *)(puVar8[3] >> 1) <= puVar3) {
              puVar3 = (ulong *)(ulong)(1 < puVar8[3]);
              FUN_000d610c(puVar3,uVar7,1,puVar8);
              puVar8 = puVar3;
            }
            puVar8[2] = uVar7;
            *(undefined4 *)((long)puVar8 + lVar5 * 4 + uVar4 * 4 + 0x20) = uVar12;
            if (bVar2) {
              *param_1 = (ulong)puVar8;
              *unaff_x20 = lVar6 - lVar11;
              unaff_x20[1] = (long)((long)puVar9 + -4);
              goto LAB_000cb7d0;
            }
            if (puVar9 < &MACH_HEADER.cpusubtype) break;
            bVar2 = uVar10 - 2 == lVar5;
            lVar5 = lVar5 + 1;
            lVar11 = lVar11 + -4;
            puVar9 = (ulong *)((long)puVar9 + -4);
          }
          *param_1 = (ulong)puVar8;
          *unaff_x20 = lVar6 - lVar11;
          unaff_x20[1] = (long)((long)puVar9 + -4);
        }
      }
      goto LAB_000cb664;
    }
  }
  else {
    if (*(char *)((long)unaff_x20 + 0x21) != '\x05') {
      return;
    }
    if (unaff_x20[1] < 4) {
LAB_000cb664:
      FUN_000d4ba8();
      _swift_allocError(&UNK_009ab010,puVar3,0,0);
      *(undefined1 *)puVar3 = 1;
      _swift_willThrow();
      return;
    }
    uVar12 = *(undefined4 *)*unaff_x20;
    *unaff_x20 = (long)((undefined4 *)*unaff_x20 + 1);
    unaff_x20[1] = unaff_x20[1] + -4;
    uVar7 = *param_1;
    uVar10 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar7;
    if ((uVar10 & 1) == 0) {
      uVar4 = 0;
      FUN_000d610c(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar10 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar10) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_000d610c(uVar7,uVar10 + 1,1,uVar4);
      uVar4 = uVar7;
    }
    *(ulong *)(uVar4 + 0x10) = uVar10 + 1;
    *(undefined4 *)(uVar4 + uVar10 * 4 + 0x20) = uVar12;
    *param_1 = uVar4;
  }
LAB_000cb7d0:
  *(undefined1 *)(unaff_x20 + 4) = 1;
  return;
}



/* Entry: 000cb85c; end: 000cb92f;  */

void FUN_000cb85c(undefined1 *param_1)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  undefined1 uVar6;
  
  lVar4 = unaff_x20[1];
  uVar2 = lVar4 - 1;
  if (lVar4 < 1) {
    uVar6 = 1;
  }
  else {
    pcVar3 = (char *)*unaff_x20;
    param_1 = (undefined1 *)(long)*pcVar3;
    if (-1 < (long)param_1) {
      *unaff_x20 = pcVar3 + 1;
LAB_000cb888:
      unaff_x20[1] = uVar2;
      return;
    }
    if (lVar4 == 1) {
      uVar6 = 3;
    }
    else {
      param_1 = (undefined1 *)((ulong)param_1 & 0x7f);
      pcVar3 = pcVar3 + 2;
      uVar6 = 3;
      uVar5 = 7;
      do {
        param_1 = (undefined1 *)
                  (((ulong)(byte)pcVar3[-1] & 0x7f) << (uVar5 & 0x3f) | (ulong)param_1);
        if (-1 < pcVar3[-1]) {
          uVar2 = uVar2 - 1;
          *unaff_x20 = pcVar3;
          goto LAB_000cb888;
        }
        if (uVar2 < 2) break;
        pcVar3 = pcVar3 + 1;
        uVar2 = uVar2 - 1;
        bVar1 = uVar5 < 0x39;
        uVar5 = uVar5 + 7;
      } while (bVar1);
    }
  }
  FUN_000d4ba8();
  _swift_allocError(&UNK_009ab010,param_1,0,0);
  *param_1 = uVar6;
  _swift_willThrow();
  return;
}



/* Entry: 000cb930; end: 000cb9af;  */

void FUN_000cb930(undefined8 *param_1)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x01') {
    if (unaff_x20[1] < 8) {
      FUN_000d4ba8();
      _swift_allocError(&UNK_009ab010,param_1,0,0);
      *(undefined1 *)param_1 = 1;
      _swift_willThrow();
    }
    else {
      uVar1 = *(undefined8 *)*unaff_x20;
      *unaff_x20 = (long)((undefined8 *)*unaff_x20 + 1);
      unaff_x20[1] = unaff_x20[1] + -8;
      *param_1 = uVar1;
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  return;
}



/* Entry: 000cb9b0; end: 000cbc47;  */

void FUN_000cb9b0(ulong *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  puVar3 = param_1;
  if (*(char *)((long)unaff_x20 + 0x21) == '\x02') {
    FUN_000cb85c();
    if (unaff_x21 != 0) {
      return;
    }
    if (puVar3 != (ulong *)0x0) {
      if (((((ulong)puVar3 & 7) == 0) && (puVar9 = (ulong *)unaff_x20[1], -1 < (long)puVar9)) &&
         (puVar3 <= puVar9)) {
        uVar10 = (ulong)puVar3 >> 3;
        puVar8 = (ulong *)*param_1;
        uVar4 = puVar8[2];
        if (SCARRY8(uVar4,uVar10)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0xcbc48);
          (*pcVar1)();
        }
        puVar3 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)puVar3 == 0) || ((long)(puVar8[3] >> 1) < (long)(uVar4 + uVar10))) {
          func_0x000d620c();
          puVar8 = puVar3;
        }
        *param_1 = (ulong)puVar8;
        if ((ulong *)((long)&MACH_HEADER.cputype + 3) < puVar9) {
          lVar5 = 0;
          bVar2 = uVar10 == 1;
          uVar4 = puVar8[2];
          lVar6 = *unaff_x20;
          lVar11 = -8;
          while( true ) {
            puVar3 = (ulong *)(uVar4 + lVar5);
            uVar13 = *(ulong *)(lVar6 + lVar5 * 8);
            uVar7 = uVar4 + 1 + lVar5;
            if ((ulong *)(puVar8[3] >> 1) <= puVar3) {
              puVar3 = (ulong *)(ulong)(1 < puVar8[3]);
              func_0x000d620c(puVar3,uVar7,1,puVar8);
              puVar8 = puVar3;
            }
            puVar8[2] = uVar7;
            puVar8[uVar4 + lVar5 + 4] = uVar13;
            if (bVar2) {
              *param_1 = (ulong)puVar8;
              *unaff_x20 = lVar6 - lVar11;
              unaff_x20[1] = (long)(puVar9 + -1);
              goto LAB_000cbbbc;
            }
            if (puVar9 < &MACH_HEADER.ncmds) break;
            bVar2 = uVar10 - 2 == lVar5;
            lVar5 = lVar5 + 1;
            lVar11 = lVar11 + -8;
            puVar9 = puVar9 + -1;
          }
          *param_1 = (ulong)puVar8;
          *unaff_x20 = lVar6 - lVar11;
          unaff_x20[1] = (long)(puVar9 + -1);
        }
      }
      goto LAB_000cba50;
    }
  }
  else {
    if (*(char *)((long)unaff_x20 + 0x21) != '\x01') {
      return;
    }
    if (unaff_x20[1] < 8) {
LAB_000cba50:
      FUN_000d4ba8();
      _swift_allocError(&UNK_009ab010,puVar3,0,0);
      *(undefined1 *)puVar3 = 1;
      _swift_willThrow();
      return;
    }
    uVar12 = *(undefined8 *)*unaff_x20;
    *unaff_x20 = (long)((undefined8 *)*unaff_x20 + 1);
    unaff_x20[1] = unaff_x20[1] + -8;
    uVar7 = *param_1;
    uVar10 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar7;
    if ((uVar10 & 1) == 0) {
      uVar4 = 0;
      func_0x000d620c(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar10 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar10) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x000d620c(uVar7,uVar10 + 1,1,uVar4);
      uVar4 = uVar7;
    }
    *(ulong *)(uVar4 + 0x10) = uVar10 + 1;
    *(undefined8 *)(uVar4 + uVar10 * 8 + 0x20) = uVar12;
    *param_1 = uVar4;
  }
LAB_000cbbbc:
  *(undefined1 *)(unaff_x20 + 4) = 1;
  return;
}



/* Entry: 000cbc48; end: 000cbceb;  */

long FUN_000cbc48(ulong *param_1)

{
  code *pcVar1;
  ulong *puVar2;
  long extraout_x8;
  ulong uVar3;
  long lVar4;
  long extraout_x8_00;
  undefined1 uVar5;
  long *unaff_x20;
  long unaff_x21;
  
  puVar2 = param_1;
  FUN_000cb85c();
  if (unaff_x21 != 0) {
    return extraout_x8;
  }
  if (puVar2 < (ulong *)0x7fffffff) {
    uVar3 = unaff_x20[1];
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xcbcec);
      (*pcVar1)();
    }
    if (uVar3 == 0) {
      if (puVar2 != (ulong *)0x0) goto LAB_000cbca4;
    }
    else if (uVar3 < puVar2) {
LAB_000cbca4:
      uVar5 = 1;
      goto LAB_000cbca8;
    }
    *param_1 = (ulong)puVar2;
    lVar4 = *unaff_x20;
    *unaff_x20 = lVar4 + (long)puVar2;
    unaff_x20[1] = uVar3 - (long)puVar2;
  }
  else {
    uVar5 = 3;
LAB_000cbca8:
    FUN_000d4ba8();
    _swift_allocError(&UNK_009ab010,puVar2,0,0);
    *(undefined1 *)puVar2 = uVar5;
    _swift_willThrow();
    lVar4 = extraout_x8_00;
  }
  return lVar4;
}



/* Entry: 000cbcec; end: 000cc26b;  */

void FUN_000cbcec(ulong *param_1,code *param_2)

{
  bool bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  long unaff_x20;
  long unaff_x21;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong *puStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_58;
  
  if (*(char *)(unaff_x20 + 0x21) != '\x02') {
    if (*(char *)(unaff_x20 + 0x21) != '\0') {
      return;
    }
    puVar11 = param_1;
    FUN_000cb85c();
    if (unaff_x21 != 0) {
      return;
    }
    uVar12 = *param_1;
    uVar8 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar12;
    if ((uVar8 & 1) == 0) {
      uVar4 = 0;
      (*param_2)(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar8 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar8) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      (*param_2)(uVar12,uVar8 + 1,1,uVar4);
      uVar4 = uVar12;
    }
    *(ulong *)(uVar4 + 0x10) = uVar8 + 1;
    *(int *)(uVar4 + uVar8 * 4 + 0x20) = (int)puVar11;
    *param_1 = uVar4;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
    return;
  }
  uStack_58 = 0;
  puVar11 = &uStack_58;
  FUN_000cbc48();
  uVar8 = uStack_58;
  if (unaff_x21 != 0) {
    return;
  }
  if ((long)uStack_58 < 1) {
    lVar6 = 0;
    goto LAB_000cc028;
  }
  if (uStack_58 < 8) {
    lVar6 = 0;
    uVar12 = 0;
  }
  else {
    if (uStack_58 < 0x20) {
      lVar6 = 0;
      uVar4 = 0;
    }
    else {
      lVar6 = 0;
      lVar10 = 0;
      lVar16 = 0;
      lVar17 = 0;
      uVar12 = uStack_58 & 0x7fffffffffffffe0;
      lVar18 = 0;
      lVar19 = 0;
      puVar7 = puVar11 + 2;
      lVar24 = 0;
      lVar25 = 0;
      lVar20 = 0;
      lVar21 = 0;
      lVar26 = 0;
      lVar27 = 0;
      lVar22 = 0;
      lVar23 = 0;
      lVar32 = 0;
      lVar33 = 0;
      lVar28 = 0;
      lVar29 = 0;
      lVar36 = 0;
      lVar37 = 0;
      lVar34 = 0;
      lVar35 = 0;
      lVar42 = 0;
      lVar43 = 0;
      lVar30 = 0;
      lVar31 = 0;
      lVar40 = 0;
      lVar41 = 0;
      lVar38 = 0;
      lVar39 = 0;
      lVar44 = 0;
      lVar45 = 0;
      uVar4 = uVar12;
      do {
        uVar49 = puVar7[-1];
        uVar48 = puVar7[-2];
        uVar47 = puVar7[1];
        uVar46 = *puVar7;
        lVar32 = lVar32 + (ulong)(-(-1 < (char)(uVar49 >> 0x30)) & 1);
        lVar33 = lVar33 + (ulong)(-(-1 < (long)uVar49) & 1);
        lVar22 = lVar22 + (ulong)(-(-1 < (char)(uVar49 >> 0x20)) & 1);
        lVar23 = lVar23 + (ulong)(-(-1 < (char)(uVar49 >> 0x28)) & 1);
        lVar26 = lVar26 + (ulong)(-(-1 < (char)(uVar49 >> 0x10)) & 1);
        lVar27 = lVar27 + (ulong)(-(-1 < (char)(uVar49 >> 0x18)) & 1);
        lVar24 = lVar24 + (ulong)(-(-1 < (char)(uVar48 >> 0x30)) & 1);
        lVar25 = lVar25 + (ulong)(-(-1 < (long)uVar48) & 1);
        lVar20 = lVar20 + (ulong)(-(-1 < (char)uVar49) & 1);
        lVar21 = lVar21 + (ulong)(-(-1 < (char)(uVar49 >> 8)) & 1);
        lVar18 = lVar18 + (ulong)(-(-1 < (char)(uVar48 >> 0x20)) & 1);
        lVar19 = lVar19 + (ulong)(-(-1 < (char)(uVar48 >> 0x28)) & 1);
        lVar16 = lVar16 + (ulong)(-(-1 < (char)(uVar48 >> 0x10)) & 1);
        lVar17 = lVar17 + (ulong)(-(-1 < (char)(uVar48 >> 0x18)) & 1);
        lVar6 = lVar6 + (ulong)(-(-1 < (char)uVar48) & 1);
        lVar10 = lVar10 + (ulong)(-(-1 < (char)(uVar48 >> 8)) & 1);
        lVar44 = lVar44 + (ulong)(-(-1 < (char)(uVar47 >> 0x30)) & 1);
        lVar45 = lVar45 + (ulong)(-(-1 < (long)uVar47) & 1);
        lVar38 = lVar38 + (ulong)(-(-1 < (char)(uVar47 >> 0x20)) & 1);
        lVar39 = lVar39 + (ulong)(-(-1 < (char)(uVar47 >> 0x28)) & 1);
        lVar40 = lVar40 + (ulong)(-(-1 < (char)(uVar47 >> 0x10)) & 1);
        lVar41 = lVar41 + (ulong)(-(-1 < (char)(uVar47 >> 0x18)) & 1);
        lVar42 = lVar42 + (ulong)(-(-1 < (char)(uVar46 >> 0x30)) & 1);
        lVar43 = lVar43 + (ulong)(-(-1 < (long)uVar46) & 1);
        lVar30 = lVar30 + (ulong)(-(-1 < (char)uVar47) & 1);
        lVar31 = lVar31 + (ulong)(-(-1 < (char)(uVar47 >> 8)) & 1);
        lVar34 = lVar34 + (ulong)(-(-1 < (char)(uVar46 >> 0x20)) & 1);
        lVar35 = lVar35 + (ulong)(-(-1 < (char)(uVar46 >> 0x28)) & 1);
        lVar36 = lVar36 + (ulong)(-(-1 < (char)(uVar46 >> 0x10)) & 1);
        lVar37 = lVar37 + (ulong)(-(-1 < (char)(uVar46 >> 0x18)) & 1);
        lVar28 = lVar28 + (ulong)(-(-1 < (char)uVar46) & 1);
        lVar29 = lVar29 + (ulong)(-(-1 < (char)(uVar46 >> 8)) & 1);
        puVar7 = puVar7 + 4;
        uVar4 = uVar4 - 0x20;
      } while (uVar4 != 0);
      lVar6 = lVar28 + lVar6 + lVar30 + lVar20 + lVar34 + lVar18 + lVar38 + lVar22 +
              lVar36 + lVar16 + lVar40 + lVar26 + lVar42 + lVar24 + lVar44 + lVar32 +
              lVar29 + lVar10 + lVar31 + lVar21 + lVar35 + lVar19 + lVar39 + lVar23 +
              lVar37 + lVar17 + lVar41 + lVar27 + lVar43 + lVar25 + lVar45 + lVar33;
      if (uStack_58 == uVar12) goto LAB_000cc028;
      uVar4 = uVar12;
      if ((uStack_58 & 0x18) == 0) goto LAB_000cc008;
    }
    uVar12 = uStack_58 & 0x7ffffffffffffff8;
    lVar16 = 0;
    lVar17 = 0;
    lVar18 = 0;
    lVar10 = uVar4 - uVar12;
    lVar19 = 0;
    lVar20 = 0;
    lVar21 = 0;
    lVar22 = 0;
    plVar9 = (long *)((long)puVar11 + uVar4);
    do {
      lVar23 = *plVar9;
      lVar21 = lVar21 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x30)) & 1);
      lVar22 = lVar22 + (ulong)(-(-1 < lVar23) & 1);
      lVar19 = lVar19 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x20)) & 1);
      lVar20 = lVar20 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x28)) & 1);
      lVar16 = lVar16 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x10)) & 1);
      lVar17 = lVar17 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x18)) & 1);
      lVar6 = lVar6 + (ulong)(-(-1 < (char)lVar23) & 1);
      lVar18 = lVar18 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 8)) & 1);
      lVar10 = lVar10 + 8;
      plVar9 = plVar9 + 1;
    } while (lVar10 != 0);
    lVar6 = lVar6 + lVar19 + lVar16 + lVar21 + lVar18 + lVar20 + lVar17 + lVar22;
    if (uStack_58 == uVar12) goto LAB_000cc028;
  }
LAB_000cc008:
  lVar10 = uStack_58 - uVar12;
  pbVar5 = (byte *)((long)puVar11 + uVar12);
  do {
    lVar6 = lVar6 + (ulong)(*pbVar5 >> 7 ^ 1);
    lVar10 = lVar10 + -1;
    pbVar5 = pbVar5 + 1;
  } while (lVar10 != 0);
LAB_000cc028:
  puVar13 = (undefined1 *)*param_1;
  lVar10 = *(long *)(puVar13 + 0x10);
  if (SCARRY8(lVar10,lVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xcc26c);
    (*pcVar2)();
  }
  puVar3 = puVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)puVar3 == 0) || ((long)(*(ulong *)(puVar13 + 0x18) >> 1) < lVar10 + lVar6)) {
    (*param_2)();
    puVar13 = puVar3;
  }
  uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar14 = *(undefined1 *)(unaff_x20 + 0x70);
  uStack_e8 = 1;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  uStack_80 = 0xf000000000000000;
  uStack_88 = 0;
  uStack_70 = 0xf000000000000000;
  uStack_78 = 0;
  uStack_100 = uVar8;
  uStack_f0 = 0;
  puVar3 = (undefined1 *)(unaff_x20 + 0x30);
  puStack_108 = puVar11;
  puStack_f8 = puVar11;
  func_0x000d4d64(puVar3,&uStack_d8);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_a0 = uVar15;
  uStack_98 = uVar14;
  puVar7 = puStack_108;
  uVar4 = uStack_100;
  uStack_100 = uVar8;
  while( true ) {
    puStack_108 = puVar11;
    if (uStack_100 == 0) {
      *param_1 = (ulong)puVar13;
      uStack_100 = 0;
      func_0x000d4cac(&puStack_108);
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
      return;
    }
    uVar8 = uStack_100 - 1;
    if ((long)uStack_100 < 1) break;
    puVar11 = (ulong *)((long)puStack_108 + 1);
    uVar12 = (ulong)(char)*puStack_108;
    if ((long)uVar12 < 0) {
      if (uStack_100 == 1) {
        uVar14 = 3;
        goto LAB_000cc1bc;
      }
      uVar12 = uVar12 & 0x7f;
      puVar11 = (ulong *)((long)puStack_108 + 2);
      uVar46 = 7;
      while (uVar12 = ((ulong)*(byte *)((long)puVar11 + -1) & 0x7f) << (uVar46 & 0x3f) | uVar12,
            (char)*(byte *)((long)puVar11 + -1) < '\0') {
        uVar14 = 3;
        if (uVar8 < 2) goto LAB_000cc1bc;
        puVar11 = (ulong *)((long)puVar11 + 1);
        uVar8 = uVar8 - 1;
        bVar1 = 0x38 < uVar46;
        uVar46 = uVar46 + 7;
        if (bVar1) goto LAB_000cc1bc;
      }
      uVar8 = uVar8 - 1;
    }
    uVar46 = *(ulong *)(puVar13 + 0x10);
    puStack_108 = puVar7;
    uStack_100 = uVar4;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar46) {
      puVar3 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      (*param_2)(puVar3,uVar46 + 1,1,puVar13);
      puVar13 = puVar3;
    }
    *(ulong *)(puVar13 + 0x10) = uVar46 + 1;
    *(int *)(puVar13 + uVar46 * 4 + 0x20) = (int)uVar12;
    puVar7 = puStack_108;
    uVar4 = uStack_100;
    uStack_100 = uVar8;
  }
  uVar14 = 1;
LAB_000cc1bc:
  *param_1 = (ulong)puVar13;
  FUN_000d4ba8();
  _swift_allocError(&UNK_009ab010,puVar3,0,0);
  *puVar3 = uVar14;
  _swift_willThrow();
  func_0x000d4cac(&puStack_108);
  return;
}



/* Entry: 000cc26c; end: 000cc7eb;  */

void FUN_000cc26c(ulong *param_1,code *param_2)

{
  bool bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  long unaff_x20;
  long unaff_x21;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong *puStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_58;
  
  if (*(char *)(unaff_x20 + 0x21) != '\x02') {
    if (*(char *)(unaff_x20 + 0x21) != '\0') {
      return;
    }
    puVar11 = param_1;
    FUN_000cb85c();
    if (unaff_x21 != 0) {
      return;
    }
    uVar12 = *param_1;
    uVar8 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar12;
    if ((uVar8 & 1) == 0) {
      uVar4 = 0;
      (*param_2)(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar8 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar8) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      (*param_2)(uVar12,uVar8 + 1,1,uVar4);
      uVar4 = uVar12;
    }
    *(ulong *)(uVar4 + 0x10) = uVar8 + 1;
    *(ulong **)(uVar4 + uVar8 * 8 + 0x20) = puVar11;
    *param_1 = uVar4;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
    return;
  }
  uStack_58 = 0;
  puVar11 = &uStack_58;
  FUN_000cbc48();
  uVar8 = uStack_58;
  if (unaff_x21 != 0) {
    return;
  }
  if ((long)uStack_58 < 1) {
    lVar6 = 0;
    goto LAB_000cc5a8;
  }
  if (uStack_58 < 8) {
    lVar6 = 0;
    uVar12 = 0;
  }
  else {
    if (uStack_58 < 0x20) {
      lVar6 = 0;
      uVar4 = 0;
    }
    else {
      lVar6 = 0;
      lVar10 = 0;
      lVar16 = 0;
      lVar17 = 0;
      uVar12 = uStack_58 & 0x7fffffffffffffe0;
      lVar18 = 0;
      lVar19 = 0;
      puVar7 = puVar11 + 2;
      lVar24 = 0;
      lVar25 = 0;
      lVar20 = 0;
      lVar21 = 0;
      lVar26 = 0;
      lVar27 = 0;
      lVar22 = 0;
      lVar23 = 0;
      lVar32 = 0;
      lVar33 = 0;
      lVar28 = 0;
      lVar29 = 0;
      lVar36 = 0;
      lVar37 = 0;
      lVar34 = 0;
      lVar35 = 0;
      lVar42 = 0;
      lVar43 = 0;
      lVar30 = 0;
      lVar31 = 0;
      lVar40 = 0;
      lVar41 = 0;
      lVar38 = 0;
      lVar39 = 0;
      lVar44 = 0;
      lVar45 = 0;
      uVar4 = uVar12;
      do {
        uVar49 = puVar7[-1];
        uVar48 = puVar7[-2];
        uVar47 = puVar7[1];
        uVar46 = *puVar7;
        lVar32 = lVar32 + (ulong)(-(-1 < (char)(uVar49 >> 0x30)) & 1);
        lVar33 = lVar33 + (ulong)(-(-1 < (long)uVar49) & 1);
        lVar22 = lVar22 + (ulong)(-(-1 < (char)(uVar49 >> 0x20)) & 1);
        lVar23 = lVar23 + (ulong)(-(-1 < (char)(uVar49 >> 0x28)) & 1);
        lVar26 = lVar26 + (ulong)(-(-1 < (char)(uVar49 >> 0x10)) & 1);
        lVar27 = lVar27 + (ulong)(-(-1 < (char)(uVar49 >> 0x18)) & 1);
        lVar24 = lVar24 + (ulong)(-(-1 < (char)(uVar48 >> 0x30)) & 1);
        lVar25 = lVar25 + (ulong)(-(-1 < (long)uVar48) & 1);
        lVar20 = lVar20 + (ulong)(-(-1 < (char)uVar49) & 1);
        lVar21 = lVar21 + (ulong)(-(-1 < (char)(uVar49 >> 8)) & 1);
        lVar18 = lVar18 + (ulong)(-(-1 < (char)(uVar48 >> 0x20)) & 1);
        lVar19 = lVar19 + (ulong)(-(-1 < (char)(uVar48 >> 0x28)) & 1);
        lVar16 = lVar16 + (ulong)(-(-1 < (char)(uVar48 >> 0x10)) & 1);
        lVar17 = lVar17 + (ulong)(-(-1 < (char)(uVar48 >> 0x18)) & 1);
        lVar6 = lVar6 + (ulong)(-(-1 < (char)uVar48) & 1);
        lVar10 = lVar10 + (ulong)(-(-1 < (char)(uVar48 >> 8)) & 1);
        lVar44 = lVar44 + (ulong)(-(-1 < (char)(uVar47 >> 0x30)) & 1);
        lVar45 = lVar45 + (ulong)(-(-1 < (long)uVar47) & 1);
        lVar38 = lVar38 + (ulong)(-(-1 < (char)(uVar47 >> 0x20)) & 1);
        lVar39 = lVar39 + (ulong)(-(-1 < (char)(uVar47 >> 0x28)) & 1);
        lVar40 = lVar40 + (ulong)(-(-1 < (char)(uVar47 >> 0x10)) & 1);
        lVar41 = lVar41 + (ulong)(-(-1 < (char)(uVar47 >> 0x18)) & 1);
        lVar42 = lVar42 + (ulong)(-(-1 < (char)(uVar46 >> 0x30)) & 1);
        lVar43 = lVar43 + (ulong)(-(-1 < (long)uVar46) & 1);
        lVar30 = lVar30 + (ulong)(-(-1 < (char)uVar47) & 1);
        lVar31 = lVar31 + (ulong)(-(-1 < (char)(uVar47 >> 8)) & 1);
        lVar34 = lVar34 + (ulong)(-(-1 < (char)(uVar46 >> 0x20)) & 1);
        lVar35 = lVar35 + (ulong)(-(-1 < (char)(uVar46 >> 0x28)) & 1);
        lVar36 = lVar36 + (ulong)(-(-1 < (char)(uVar46 >> 0x10)) & 1);
        lVar37 = lVar37 + (ulong)(-(-1 < (char)(uVar46 >> 0x18)) & 1);
        lVar28 = lVar28 + (ulong)(-(-1 < (char)uVar46) & 1);
        lVar29 = lVar29 + (ulong)(-(-1 < (char)(uVar46 >> 8)) & 1);
        puVar7 = puVar7 + 4;
        uVar4 = uVar4 - 0x20;
      } while (uVar4 != 0);
      lVar6 = lVar28 + lVar6 + lVar30 + lVar20 + lVar34 + lVar18 + lVar38 + lVar22 +
              lVar36 + lVar16 + lVar40 + lVar26 + lVar42 + lVar24 + lVar44 + lVar32 +
              lVar29 + lVar10 + lVar31 + lVar21 + lVar35 + lVar19 + lVar39 + lVar23 +
              lVar37 + lVar17 + lVar41 + lVar27 + lVar43 + lVar25 + lVar45 + lVar33;
      if (uStack_58 == uVar12) goto LAB_000cc5a8;
      uVar4 = uVar12;
      if ((uStack_58 & 0x18) == 0) goto LAB_000cc588;
    }
    uVar12 = uStack_58 & 0x7ffffffffffffff8;
    lVar16 = 0;
    lVar17 = 0;
    lVar18 = 0;
    lVar10 = uVar4 - uVar12;
    lVar19 = 0;
    lVar20 = 0;
    lVar21 = 0;
    lVar22 = 0;
    plVar9 = (long *)((long)puVar11 + uVar4);
    do {
      lVar23 = *plVar9;
      lVar21 = lVar21 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x30)) & 1);
      lVar22 = lVar22 + (ulong)(-(-1 < lVar23) & 1);
      lVar19 = lVar19 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x20)) & 1);
      lVar20 = lVar20 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x28)) & 1);
      lVar16 = lVar16 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x10)) & 1);
      lVar17 = lVar17 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x18)) & 1);
      lVar6 = lVar6 + (ulong)(-(-1 < (char)lVar23) & 1);
      lVar18 = lVar18 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 8)) & 1);
      lVar10 = lVar10 + 8;
      plVar9 = plVar9 + 1;
    } while (lVar10 != 0);
    lVar6 = lVar6 + lVar19 + lVar16 + lVar21 + lVar18 + lVar20 + lVar17 + lVar22;
    if (uStack_58 == uVar12) goto LAB_000cc5a8;
  }
LAB_000cc588:
  lVar10 = uStack_58 - uVar12;
  pbVar5 = (byte *)((long)puVar11 + uVar12);
  do {
    lVar6 = lVar6 + (ulong)(*pbVar5 >> 7 ^ 1);
    lVar10 = lVar10 + -1;
    pbVar5 = pbVar5 + 1;
  } while (lVar10 != 0);
LAB_000cc5a8:
  puVar13 = (undefined1 *)*param_1;
  lVar10 = *(long *)(puVar13 + 0x10);
  if (SCARRY8(lVar10,lVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xcc7ec);
    (*pcVar2)();
  }
  puVar3 = puVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)puVar3 == 0) || ((long)(*(ulong *)(puVar13 + 0x18) >> 1) < lVar10 + lVar6)) {
    (*param_2)();
    puVar13 = puVar3;
  }
  uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar14 = *(undefined1 *)(unaff_x20 + 0x70);
  uStack_e8 = 1;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  uStack_80 = 0xf000000000000000;
  uStack_88 = 0;
  uStack_70 = 0xf000000000000000;
  uStack_78 = 0;
  uStack_100 = uVar8;
  uStack_f0 = 0;
  puVar3 = (undefined1 *)(unaff_x20 + 0x30);
  puStack_108 = puVar11;
  puStack_f8 = puVar11;
  func_0x000d4d64(puVar3,&uStack_d8);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_a0 = uVar15;
  uStack_98 = uVar14;
  puVar7 = puStack_108;
  uVar4 = uStack_100;
  uStack_100 = uVar8;
  while( true ) {
    puStack_108 = puVar11;
    if (uStack_100 == 0) {
      *param_1 = (ulong)puVar13;
      uStack_100 = 0;
      func_0x000d4cac(&puStack_108);
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
      return;
    }
    uVar8 = uStack_100 - 1;
    if ((long)uStack_100 < 1) break;
    puVar11 = (ulong *)((long)puStack_108 + 1);
    uVar12 = (ulong)(char)*puStack_108;
    if ((long)uVar12 < 0) {
      if (uStack_100 == 1) {
        uVar14 = 3;
        goto LAB_000cc73c;
      }
      uVar12 = uVar12 & 0x7f;
      puVar11 = (ulong *)((long)puStack_108 + 2);
      uVar46 = 7;
      while (uVar12 = ((ulong)*(byte *)((long)puVar11 + -1) & 0x7f) << (uVar46 & 0x3f) | uVar12,
            (char)*(byte *)((long)puVar11 + -1) < '\0') {
        uVar14 = 3;
        if (uVar8 < 2) goto LAB_000cc73c;
        puVar11 = (ulong *)((long)puVar11 + 1);
        uVar8 = uVar8 - 1;
        bVar1 = 0x38 < uVar46;
        uVar46 = uVar46 + 7;
        if (bVar1) goto LAB_000cc73c;
      }
      uVar8 = uVar8 - 1;
    }
    uVar46 = *(ulong *)(puVar13 + 0x10);
    puStack_108 = puVar7;
    uStack_100 = uVar4;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar46) {
      puVar3 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      (*param_2)(puVar3,uVar46 + 1,1,puVar13);
      puVar13 = puVar3;
    }
    *(ulong *)(puVar13 + 0x10) = uVar46 + 1;
    *(ulong *)(puVar13 + uVar46 * 8 + 0x20) = uVar12;
    puVar7 = puStack_108;
    uVar4 = uStack_100;
    uStack_100 = uVar8;
  }
  uVar14 = 1;
LAB_000cc73c:
  *param_1 = (ulong)puVar13;
  FUN_000d4ba8();
  _swift_allocError(&UNK_009ab010,puVar3,0,0);
  *puVar3 = uVar14;
  _swift_willThrow();
  func_0x000d4cac(&puStack_108);
  return;
}



/* Entry: 000cc7ec; end: 000cc82b;  */

void FUN_000cc7ec(uint *param_1)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = (uint)param_1;
  if (*(char *)(unaff_x20 + 0x21) == '\0') {
    FUN_000cb85c();
    if (unaff_x21 == 0) {
      *param_1 = -(uVar1 & 1) ^ uVar1 >> 1;
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
    }
  }
  return;
}



/* Entry: 000cc82c; end: 000cc86f;  */

void FUN_000cc82c(uint *param_1)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = (uint)param_1;
  if (*(char *)(unaff_x20 + 0x21) == '\0') {
    FUN_000cb85c();
    if (unaff_x21 == 0) {
      *param_1 = -(uVar1 & 1) ^ uVar1 >> 1;
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
    }
  }
  return;
}



/* Entry: 000cc870; end: 000ccdf3;  */

void FUN_000cc870(ulong *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  long unaff_x20;
  long unaff_x21;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong *puStack_f8;
  ulong uStack_f0;
  ulong *puStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if (*(char *)(unaff_x20 + 0x21) != '\x02') {
    if (*(char *)(unaff_x20 + 0x21) != '\0') {
      return;
    }
    puVar11 = param_1;
    FUN_000cb85c();
    if (unaff_x21 != 0) {
      return;
    }
    uVar12 = *param_1;
    uVar8 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar12;
    if ((uVar8 & 1) == 0) {
      uVar4 = 0;
      FUN_000d60f8(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar8 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar8) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_000d60f8(uVar12,uVar8 + 1,1,uVar4);
      uVar4 = uVar12;
    }
    *(ulong *)(uVar4 + 0x10) = uVar8 + 1;
    *(uint *)(uVar4 + uVar8 * 4 + 0x20) = -((uint)puVar11 & 1) ^ (uint)puVar11 >> 1;
    *param_1 = uVar4;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
    return;
  }
  uStack_58 = 0;
  puVar11 = &uStack_58;
  FUN_000cbc48();
  uVar8 = uStack_58;
  if (unaff_x21 != 0) {
    return;
  }
  if ((long)uStack_58 < 1) {
    lVar6 = 0;
    goto LAB_000ccbac;
  }
  if (uStack_58 < 8) {
    lVar6 = 0;
    uVar12 = 0;
  }
  else {
    if (uStack_58 < 0x20) {
      lVar6 = 0;
      uVar4 = 0;
    }
    else {
      lVar6 = 0;
      lVar10 = 0;
      lVar16 = 0;
      lVar17 = 0;
      uVar12 = uStack_58 & 0x7fffffffffffffe0;
      lVar18 = 0;
      lVar19 = 0;
      puVar7 = puVar11 + 2;
      lVar24 = 0;
      lVar25 = 0;
      lVar20 = 0;
      lVar21 = 0;
      lVar26 = 0;
      lVar27 = 0;
      lVar22 = 0;
      lVar23 = 0;
      lVar32 = 0;
      lVar33 = 0;
      lVar28 = 0;
      lVar29 = 0;
      lVar36 = 0;
      lVar37 = 0;
      lVar34 = 0;
      lVar35 = 0;
      lVar42 = 0;
      lVar43 = 0;
      lVar30 = 0;
      lVar31 = 0;
      lVar40 = 0;
      lVar41 = 0;
      lVar38 = 0;
      lVar39 = 0;
      lVar44 = 0;
      lVar45 = 0;
      uVar4 = uVar12;
      do {
        uVar49 = puVar7[-1];
        uVar48 = puVar7[-2];
        uVar47 = puVar7[1];
        uVar46 = *puVar7;
        lVar32 = lVar32 + (ulong)(-(-1 < (char)(uVar49 >> 0x30)) & 1);
        lVar33 = lVar33 + (ulong)(-(-1 < (long)uVar49) & 1);
        lVar22 = lVar22 + (ulong)(-(-1 < (char)(uVar49 >> 0x20)) & 1);
        lVar23 = lVar23 + (ulong)(-(-1 < (char)(uVar49 >> 0x28)) & 1);
        lVar26 = lVar26 + (ulong)(-(-1 < (char)(uVar49 >> 0x10)) & 1);
        lVar27 = lVar27 + (ulong)(-(-1 < (char)(uVar49 >> 0x18)) & 1);
        lVar24 = lVar24 + (ulong)(-(-1 < (char)(uVar48 >> 0x30)) & 1);
        lVar25 = lVar25 + (ulong)(-(-1 < (long)uVar48) & 1);
        lVar20 = lVar20 + (ulong)(-(-1 < (char)uVar49) & 1);
        lVar21 = lVar21 + (ulong)(-(-1 < (char)(uVar49 >> 8)) & 1);
        lVar18 = lVar18 + (ulong)(-(-1 < (char)(uVar48 >> 0x20)) & 1);
        lVar19 = lVar19 + (ulong)(-(-1 < (char)(uVar48 >> 0x28)) & 1);
        lVar16 = lVar16 + (ulong)(-(-1 < (char)(uVar48 >> 0x10)) & 1);
        lVar17 = lVar17 + (ulong)(-(-1 < (char)(uVar48 >> 0x18)) & 1);
        lVar6 = lVar6 + (ulong)(-(-1 < (char)uVar48) & 1);
        lVar10 = lVar10 + (ulong)(-(-1 < (char)(uVar48 >> 8)) & 1);
        lVar44 = lVar44 + (ulong)(-(-1 < (char)(uVar47 >> 0x30)) & 1);
        lVar45 = lVar45 + (ulong)(-(-1 < (long)uVar47) & 1);
        lVar38 = lVar38 + (ulong)(-(-1 < (char)(uVar47 >> 0x20)) & 1);
        lVar39 = lVar39 + (ulong)(-(-1 < (char)(uVar47 >> 0x28)) & 1);
        lVar40 = lVar40 + (ulong)(-(-1 < (char)(uVar47 >> 0x10)) & 1);
        lVar41 = lVar41 + (ulong)(-(-1 < (char)(uVar47 >> 0x18)) & 1);
        lVar42 = lVar42 + (ulong)(-(-1 < (char)(uVar46 >> 0x30)) & 1);
        lVar43 = lVar43 + (ulong)(-(-1 < (long)uVar46) & 1);
        lVar30 = lVar30 + (ulong)(-(-1 < (char)uVar47) & 1);
        lVar31 = lVar31 + (ulong)(-(-1 < (char)(uVar47 >> 8)) & 1);
        lVar34 = lVar34 + (ulong)(-(-1 < (char)(uVar46 >> 0x20)) & 1);
        lVar35 = lVar35 + (ulong)(-(-1 < (char)(uVar46 >> 0x28)) & 1);
        lVar36 = lVar36 + (ulong)(-(-1 < (char)(uVar46 >> 0x10)) & 1);
        lVar37 = lVar37 + (ulong)(-(-1 < (char)(uVar46 >> 0x18)) & 1);
        lVar28 = lVar28 + (ulong)(-(-1 < (char)uVar46) & 1);
        lVar29 = lVar29 + (ulong)(-(-1 < (char)(uVar46 >> 8)) & 1);
        puVar7 = puVar7 + 4;
        uVar4 = uVar4 - 0x20;
      } while (uVar4 != 0);
      lVar6 = lVar28 + lVar6 + lVar30 + lVar20 + lVar34 + lVar18 + lVar38 + lVar22 +
              lVar36 + lVar16 + lVar40 + lVar26 + lVar42 + lVar24 + lVar44 + lVar32 +
              lVar29 + lVar10 + lVar31 + lVar21 + lVar35 + lVar19 + lVar39 + lVar23 +
              lVar37 + lVar17 + lVar41 + lVar27 + lVar43 + lVar25 + lVar45 + lVar33;
      if (uStack_58 == uVar12) goto LAB_000ccbac;
      uVar4 = uVar12;
      if ((uStack_58 & 0x18) == 0) goto LAB_000ccb8c;
    }
    uVar12 = uStack_58 & 0x7ffffffffffffff8;
    lVar16 = 0;
    lVar17 = 0;
    lVar18 = 0;
    lVar10 = uVar4 - uVar12;
    lVar19 = 0;
    lVar20 = 0;
    lVar21 = 0;
    lVar22 = 0;
    plVar9 = (long *)((long)puVar11 + uVar4);
    do {
      lVar23 = *plVar9;
      lVar21 = lVar21 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x30)) & 1);
      lVar22 = lVar22 + (ulong)(-(-1 < lVar23) & 1);
      lVar19 = lVar19 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x20)) & 1);
      lVar20 = lVar20 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x28)) & 1);
      lVar16 = lVar16 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x10)) & 1);
      lVar17 = lVar17 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x18)) & 1);
      lVar6 = lVar6 + (ulong)(-(-1 < (char)lVar23) & 1);
      lVar18 = lVar18 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 8)) & 1);
      lVar10 = lVar10 + 8;
      plVar9 = plVar9 + 1;
    } while (lVar10 != 0);
    lVar6 = lVar6 + lVar19 + lVar16 + lVar21 + lVar18 + lVar20 + lVar17 + lVar22;
    if (uStack_58 == uVar12) goto LAB_000ccbac;
  }
LAB_000ccb8c:
  lVar10 = uStack_58 - uVar12;
  pbVar5 = (byte *)((long)puVar11 + uVar12);
  do {
    lVar6 = lVar6 + (ulong)(*pbVar5 >> 7 ^ 1);
    lVar10 = lVar10 + -1;
    pbVar5 = pbVar5 + 1;
  } while (lVar10 != 0);
LAB_000ccbac:
  puVar13 = (undefined1 *)*param_1;
  lVar10 = *(long *)(puVar13 + 0x10);
  if (SCARRY8(lVar10,lVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xccdf4);
    (*pcVar2)();
  }
  puVar3 = puVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)puVar3 == 0) || ((long)(*(ulong *)(puVar13 + 0x18) >> 1) < lVar10 + lVar6)) {
    FUN_000d60f8();
    puVar13 = puVar3;
  }
  uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar14 = *(undefined1 *)(unaff_x20 + 0x70);
  uStack_d8 = 1;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_98 = 1;
  uStack_70 = 0xf000000000000000;
  uStack_78 = 0;
  uStack_60 = 0xf000000000000000;
  uStack_68 = 0;
  uStack_f0 = uVar8;
  uStack_e0 = 0;
  puVar3 = (undefined1 *)(unaff_x20 + 0x30);
  puStack_f8 = puVar11;
  puStack_e8 = puVar11;
  func_0x000d4d64(puVar3,&uStack_c8);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_90 = uVar15;
  uStack_88 = uVar14;
  puVar7 = puStack_f8;
  uVar4 = uStack_f0;
  uStack_f0 = uVar8;
  while( true ) {
    puStack_f8 = puVar11;
    if (uStack_f0 == 0) {
      *param_1 = (ulong)puVar13;
      uStack_f0 = 0;
      func_0x000d4cac(&puStack_f8);
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
      return;
    }
    uVar8 = uStack_f0 - 1;
    if ((long)uStack_f0 < 1) break;
    puVar11 = (ulong *)((long)puStack_f8 + 1);
    uVar12 = (ulong)(char)*puStack_f8;
    if ((long)uVar12 < 0) {
      if (uStack_f0 == 1) {
        uVar14 = 3;
        goto LAB_000ccd48;
      }
      uVar12 = uVar12 & 0x7f;
      puVar11 = (ulong *)((long)puStack_f8 + 2);
      uVar46 = 7;
      while (uVar12 = ((ulong)*(byte *)((long)puVar11 + -1) & 0x7f) << (uVar46 & 0x3f) | uVar12,
            (char)*(byte *)((long)puVar11 + -1) < '\0') {
        uVar14 = 3;
        if (uVar8 < 2) goto LAB_000ccd48;
        puVar11 = (ulong *)((long)puVar11 + 1);
        uVar8 = uVar8 - 1;
        bVar1 = 0x38 < uVar46;
        uVar46 = uVar46 + 7;
        if (bVar1) goto LAB_000ccd48;
      }
      uVar8 = uVar8 - 1;
    }
    uVar46 = *(ulong *)(puVar13 + 0x10);
    puStack_f8 = puVar7;
    uStack_f0 = uVar4;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar46) {
      puVar3 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      FUN_000d60f8(puVar3,uVar46 + 1,1,puVar13);
      puVar13 = puVar3;
    }
    *(ulong *)(puVar13 + 0x10) = uVar46 + 1;
    *(uint *)(puVar13 + uVar46 * 4 + 0x20) = -((uint)uVar12 & 1) ^ (uint)uVar12 >> 1;
    puVar7 = puStack_f8;
    uVar4 = uStack_f0;
    uStack_f0 = uVar8;
  }
  uVar14 = 1;
LAB_000ccd48:
  *param_1 = (ulong)puVar13;
  FUN_000d4ba8();
  _swift_allocError(&UNK_009ab010,puVar3,0,0);
  *puVar3 = uVar14;
  _swift_willThrow();
  func_0x000d4cac(&puStack_f8);
  return;
}



/* Entry: 000ccdf4; end: 000cce33;  */

void FUN_000ccdf4(ulong *param_1)

{
  ulong *puVar1;
  long unaff_x20;
  long unaff_x21;
  
  if ((*(char *)(unaff_x20 + 0x21) == '\0') && (puVar1 = param_1, FUN_000cb85c(), unaff_x21 == 0)) {
    *param_1 = -((ulong)puVar1 & 1) ^ (ulong)puVar1 >> 1;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
  }
  return;
}



/* Entry: 000cce34; end: 000cce77;  */

void FUN_000cce34(ulong *param_1)

{
  ulong *puVar1;
  long unaff_x20;
  long unaff_x21;
  
  if ((*(char *)(unaff_x20 + 0x21) == '\0') && (puVar1 = param_1, FUN_000cb85c(), unaff_x21 == 0)) {
    *param_1 = -((ulong)puVar1 & 1) ^ (ulong)puVar1 >> 1;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
  }
  return;
}



/* Entry: 000cce78; end: 000cd3fb;  */

void FUN_000cce78(ulong *param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  long unaff_x20;
  long unaff_x21;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong *puStack_f8;
  ulong uStack_f0;
  ulong *puStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if (*(char *)(unaff_x20 + 0x21) != '\x02') {
    if (*(char *)(unaff_x20 + 0x21) != '\0') {
      return;
    }
    puVar11 = param_1;
    FUN_000cb85c();
    if (unaff_x21 != 0) {
      return;
    }
    uVar12 = *param_1;
    uVar8 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar12;
    if ((uVar8 & 1) == 0) {
      uVar4 = 0;
      func_0x000b9888(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar8 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar8) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x000b9888(uVar12,uVar8 + 1,1,uVar4);
      uVar4 = uVar12;
    }
    *(ulong *)(uVar4 + 0x10) = uVar8 + 1;
    *(ulong *)(uVar4 + uVar8 * 8 + 0x20) = -((ulong)puVar11 & 1) ^ (ulong)puVar11 >> 1;
    *param_1 = uVar4;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
    return;
  }
  uStack_58 = 0;
  puVar11 = &uStack_58;
  FUN_000cbc48();
  uVar8 = uStack_58;
  if (unaff_x21 != 0) {
    return;
  }
  if ((long)uStack_58 < 1) {
    lVar6 = 0;
    goto LAB_000cd1b4;
  }
  if (uStack_58 < 8) {
    lVar6 = 0;
    uVar12 = 0;
  }
  else {
    if (uStack_58 < 0x20) {
      lVar6 = 0;
      uVar4 = 0;
    }
    else {
      lVar6 = 0;
      lVar10 = 0;
      lVar16 = 0;
      lVar17 = 0;
      uVar12 = uStack_58 & 0x7fffffffffffffe0;
      lVar18 = 0;
      lVar19 = 0;
      puVar7 = puVar11 + 2;
      lVar24 = 0;
      lVar25 = 0;
      lVar20 = 0;
      lVar21 = 0;
      lVar26 = 0;
      lVar27 = 0;
      lVar22 = 0;
      lVar23 = 0;
      lVar32 = 0;
      lVar33 = 0;
      lVar28 = 0;
      lVar29 = 0;
      lVar36 = 0;
      lVar37 = 0;
      lVar34 = 0;
      lVar35 = 0;
      lVar42 = 0;
      lVar43 = 0;
      lVar30 = 0;
      lVar31 = 0;
      lVar40 = 0;
      lVar41 = 0;
      lVar38 = 0;
      lVar39 = 0;
      lVar44 = 0;
      lVar45 = 0;
      uVar4 = uVar12;
      do {
        uVar49 = puVar7[-1];
        uVar48 = puVar7[-2];
        uVar47 = puVar7[1];
        uVar46 = *puVar7;
        lVar32 = lVar32 + (ulong)(-(-1 < (char)(uVar49 >> 0x30)) & 1);
        lVar33 = lVar33 + (ulong)(-(-1 < (long)uVar49) & 1);
        lVar22 = lVar22 + (ulong)(-(-1 < (char)(uVar49 >> 0x20)) & 1);
        lVar23 = lVar23 + (ulong)(-(-1 < (char)(uVar49 >> 0x28)) & 1);
        lVar26 = lVar26 + (ulong)(-(-1 < (char)(uVar49 >> 0x10)) & 1);
        lVar27 = lVar27 + (ulong)(-(-1 < (char)(uVar49 >> 0x18)) & 1);
        lVar24 = lVar24 + (ulong)(-(-1 < (char)(uVar48 >> 0x30)) & 1);
        lVar25 = lVar25 + (ulong)(-(-1 < (long)uVar48) & 1);
        lVar20 = lVar20 + (ulong)(-(-1 < (char)uVar49) & 1);
        lVar21 = lVar21 + (ulong)(-(-1 < (char)(uVar49 >> 8)) & 1);
        lVar18 = lVar18 + (ulong)(-(-1 < (char)(uVar48 >> 0x20)) & 1);
        lVar19 = lVar19 + (ulong)(-(-1 < (char)(uVar48 >> 0x28)) & 1);
        lVar16 = lVar16 + (ulong)(-(-1 < (char)(uVar48 >> 0x10)) & 1);
        lVar17 = lVar17 + (ulong)(-(-1 < (char)(uVar48 >> 0x18)) & 1);
        lVar6 = lVar6 + (ulong)(-(-1 < (char)uVar48) & 1);
        lVar10 = lVar10 + (ulong)(-(-1 < (char)(uVar48 >> 8)) & 1);
        lVar44 = lVar44 + (ulong)(-(-1 < (char)(uVar47 >> 0x30)) & 1);
        lVar45 = lVar45 + (ulong)(-(-1 < (long)uVar47) & 1);
        lVar38 = lVar38 + (ulong)(-(-1 < (char)(uVar47 >> 0x20)) & 1);
        lVar39 = lVar39 + (ulong)(-(-1 < (char)(uVar47 >> 0x28)) & 1);
        lVar40 = lVar40 + (ulong)(-(-1 < (char)(uVar47 >> 0x10)) & 1);
        lVar41 = lVar41 + (ulong)(-(-1 < (char)(uVar47 >> 0x18)) & 1);
        lVar42 = lVar42 + (ulong)(-(-1 < (char)(uVar46 >> 0x30)) & 1);
        lVar43 = lVar43 + (ulong)(-(-1 < (long)uVar46) & 1);
        lVar30 = lVar30 + (ulong)(-(-1 < (char)uVar47) & 1);
        lVar31 = lVar31 + (ulong)(-(-1 < (char)(uVar47 >> 8)) & 1);
        lVar34 = lVar34 + (ulong)(-(-1 < (char)(uVar46 >> 0x20)) & 1);
        lVar35 = lVar35 + (ulong)(-(-1 < (char)(uVar46 >> 0x28)) & 1);
        lVar36 = lVar36 + (ulong)(-(-1 < (char)(uVar46 >> 0x10)) & 1);
        lVar37 = lVar37 + (ulong)(-(-1 < (char)(uVar46 >> 0x18)) & 1);
        lVar28 = lVar28 + (ulong)(-(-1 < (char)uVar46) & 1);
        lVar29 = lVar29 + (ulong)(-(-1 < (char)(uVar46 >> 8)) & 1);
        puVar7 = puVar7 + 4;
        uVar4 = uVar4 - 0x20;
      } while (uVar4 != 0);
      lVar6 = lVar28 + lVar6 + lVar30 + lVar20 + lVar34 + lVar18 + lVar38 + lVar22 +
              lVar36 + lVar16 + lVar40 + lVar26 + lVar42 + lVar24 + lVar44 + lVar32 +
              lVar29 + lVar10 + lVar31 + lVar21 + lVar35 + lVar19 + lVar39 + lVar23 +
              lVar37 + lVar17 + lVar41 + lVar27 + lVar43 + lVar25 + lVar45 + lVar33;
      if (uStack_58 == uVar12) goto LAB_000cd1b4;
      uVar4 = uVar12;
      if ((uStack_58 & 0x18) == 0) goto LAB_000cd194;
    }
    uVar12 = uStack_58 & 0x7ffffffffffffff8;
    lVar16 = 0;
    lVar17 = 0;
    lVar18 = 0;
    lVar10 = uVar4 - uVar12;
    lVar19 = 0;
    lVar20 = 0;
    lVar21 = 0;
    lVar22 = 0;
    plVar9 = (long *)((long)puVar11 + uVar4);
    do {
      lVar23 = *plVar9;
      lVar21 = lVar21 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x30)) & 1);
      lVar22 = lVar22 + (ulong)(-(-1 < lVar23) & 1);
      lVar19 = lVar19 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x20)) & 1);
      lVar20 = lVar20 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x28)) & 1);
      lVar16 = lVar16 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x10)) & 1);
      lVar17 = lVar17 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 0x18)) & 1);
      lVar6 = lVar6 + (ulong)(-(-1 < (char)lVar23) & 1);
      lVar18 = lVar18 + (ulong)(-(-1 < (char)((ulong)lVar23 >> 8)) & 1);
      lVar10 = lVar10 + 8;
      plVar9 = plVar9 + 1;
    } while (lVar10 != 0);
    lVar6 = lVar6 + lVar19 + lVar16 + lVar21 + lVar18 + lVar20 + lVar17 + lVar22;
    if (uStack_58 == uVar12) goto LAB_000cd1b4;
  }
LAB_000cd194:
  lVar10 = uStack_58 - uVar12;
  pbVar5 = (byte *)((long)puVar11 + uVar12);
  do {
    lVar6 = lVar6 + (ulong)(*pbVar5 >> 7 ^ 1);
    lVar10 = lVar10 + -1;
    pbVar5 = pbVar5 + 1;
  } while (lVar10 != 0);
LAB_000cd1b4:
  puVar13 = (undefined1 *)*param_1;
  lVar10 = *(long *)(puVar13 + 0x10);
  if (SCARRY8(lVar10,lVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xcd3fc);
    (*pcVar2)();
  }
  puVar3 = puVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)puVar3 == 0) || ((long)(*(ulong *)(puVar13 + 0x18) >> 1) < lVar10 + lVar6)) {
    func_0x000b9888();
    puVar13 = puVar3;
  }
  uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar14 = *(undefined1 *)(unaff_x20 + 0x70);
  uStack_d8 = 1;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_98 = 1;
  uStack_70 = 0xf000000000000000;
  uStack_78 = 0;
  uStack_60 = 0xf000000000000000;
  uStack_68 = 0;
  uStack_f0 = uVar8;
  uStack_e0 = 0;
  puVar3 = (undefined1 *)(unaff_x20 + 0x30);
  puStack_f8 = puVar11;
  puStack_e8 = puVar11;
  func_0x000d4d64(puVar3,&uStack_c8);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_90 = uVar15;
  uStack_88 = uVar14;
  puVar7 = puStack_f8;
  uVar4 = uStack_f0;
  uStack_f0 = uVar8;
  while( true ) {
    puStack_f8 = puVar11;
    if (uStack_f0 == 0) {
      *param_1 = (ulong)puVar13;
      uStack_f0 = 0;
      func_0x000d4cac(&puStack_f8);
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
      return;
    }
    uVar8 = uStack_f0 - 1;
    if ((long)uStack_f0 < 1) break;
    puVar11 = (ulong *)((long)puStack_f8 + 1);
    uVar12 = (ulong)(char)*puStack_f8;
    if ((long)uVar12 < 0) {
      if (uStack_f0 == 1) {
        uVar14 = 3;
        goto LAB_000cd350;
      }
      uVar12 = uVar12 & 0x7f;
      puVar11 = (ulong *)((long)puStack_f8 + 2);
      uVar46 = 7;
      while (uVar12 = ((ulong)*(byte *)((long)puVar11 + -1) & 0x7f) << (uVar46 & 0x3f) | uVar12,
            (char)*(byte *)((long)puVar11 + -1) < '\0') {
        uVar14 = 3;
        if (uVar8 < 2) goto LAB_000cd350;
        puVar11 = (ulong *)((long)puVar11 + 1);
        uVar8 = uVar8 - 1;
        bVar1 = 0x38 < uVar46;
        uVar46 = uVar46 + 7;
        if (bVar1) goto LAB_000cd350;
      }
      uVar8 = uVar8 - 1;
    }
    uVar46 = *(ulong *)(puVar13 + 0x10);
    puStack_f8 = puVar7;
    uStack_f0 = uVar4;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar46) {
      puVar3 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      func_0x000b9888(puVar3,uVar46 + 1,1,puVar13);
      puVar13 = puVar3;
    }
    *(ulong *)(puVar13 + 0x10) = uVar46 + 1;
    *(ulong *)(puVar13 + uVar46 * 8 + 0x20) = -(uVar12 & 1) ^ uVar12 >> 1;
    puVar7 = puStack_f8;
    uVar4 = uStack_f0;
    uStack_f0 = uVar8;
  }
  uVar14 = 1;
LAB_000cd350:
  *param_1 = (ulong)puVar13;
  FUN_000d4ba8();
  _swift_allocError(&UNK_009ab010,puVar3,0,0);
  *puVar3 = uVar14;
  _swift_willThrow();
  func_0x000d4cac(&puStack_f8);
  return;
}



/* Entry: 000cd3fc; end: 000cd47b;  */

void FUN_000cd3fc(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 *unaff_x20;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x05') {
    if ((long)unaff_x20[1] < 4) {
      FUN_000d4ba8();
      _swift_allocError(&UNK_009ab010,param_1,0,0);
      *(undefined1 *)param_1 = 1;
      _swift_willThrow();
    }
    else {
      uVar1 = *(undefined4 *)*unaff_x20;
      *unaff_x20 = (undefined4 *)*unaff_x20 + 1;
      unaff_x20[1] = unaff_x20[1] + -4;
      *param_1 = uVar1;
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  return;
}



/* Entry: 000cd47c; end: 000cd4ff;  */

void FUN_000cd47c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 *unaff_x20;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x05') {
    if ((long)unaff_x20[1] < 4) {
      FUN_000d4ba8();
      _swift_allocError(&UNK_009ab010,param_1,0,0);
      *(undefined1 *)param_1 = 1;
      _swift_willThrow();
    }
    else {
      uVar1 = *(undefined4 *)*unaff_x20;
      *unaff_x20 = (undefined4 *)*unaff_x20 + 1;
      unaff_x20[1] = unaff_x20[1] + -4;
      *param_1 = uVar1;
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  return;
}



/* Entry: 000cd500; end: 000cd7b3;  */

void FUN_000cd500(ulong *param_1,code *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *unaff_x20;
  long unaff_x21;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x02') {
    lStack_58 = 0;
    plVar7 = &lStack_58;
    FUN_000cbc48();
    lVar4 = lStack_58;
    if (unaff_x21 == 0) {
      puVar11 = (undefined8 *)*param_1;
      lVar12 = puVar11[2];
      lVar1 = lStack_58 + 3;
      if (-1 < lStack_58) {
        lVar1 = lStack_58;
      }
      if (SCARRY8(lVar12,lVar1 >> 2)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xcd7b4);
        (*pcVar5)();
      }
      puVar8 = puVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar8 == 0) || ((long)((ulong)puVar11[3] >> 1) < lVar12 + (lVar1 >> 2))) {
        (*param_2)();
        puVar11 = puVar8;
      }
      uVar13 = unaff_x20[0xd];
      uVar3 = *(undefined1 *)(unaff_x20 + 0xe);
      uStack_d8 = 1;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_a0 = 0;
      uStack_98 = 1;
      uStack_70 = 0xf000000000000000;
      uStack_78 = 0;
      uStack_60 = 0xf000000000000000;
      uStack_68 = 0;
      lStack_f0 = lVar4;
      uStack_e0 = 0;
      puVar8 = unaff_x20 + 6;
      plStack_f8 = plVar7;
      plStack_e8 = plVar7;
      func_0x000d4d64(puVar8,&uStack_c8);
      uStack_80 = unaff_x20[0xf];
      uStack_90 = uVar13;
      uStack_88 = uVar3;
      lVar1 = lStack_f0;
      lStack_f0 = lVar4;
      while (lStack_f0 != 0) {
        lVar4 = lStack_f0 + -4;
        if (lStack_f0 < 4) {
          *param_1 = (ulong)puVar11;
          plStack_f8 = plVar7;
          FUN_000d4ba8();
          _swift_allocError(&UNK_009ab010,puVar8,0,0);
          *(undefined1 *)puVar8 = 1;
          _swift_willThrow();
          func_0x000d4cac(&plStack_f8);
          return;
        }
        lVar12 = *plVar7;
        uVar6 = puVar11[2];
        lStack_f0 = lVar1;
        if ((ulong)puVar11[3] >> 1 <= uVar6) {
          puVar8 = (undefined8 *)(ulong)(1 < (ulong)puVar11[3]);
          (*param_2)(puVar8,uVar6 + 1,1,puVar11);
          puVar11 = puVar8;
        }
        plVar7 = (long *)((long)plVar7 + 4);
        puVar11[2] = uVar6 + 1;
        *(int *)((long)puVar11 + uVar6 * 4 + 0x20) = (int)lVar12;
        lVar1 = lStack_f0;
        lStack_f0 = lVar4;
      }
      *param_1 = (ulong)puVar11;
      lStack_f0 = 0;
      plStack_f8 = plVar7;
      func_0x000d4cac(&plStack_f8);
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  else if (*(char *)((long)unaff_x20 + 0x21) == '\x05') {
    if ((long)unaff_x20[1] < 4) {
      FUN_000d4ba8();
      _swift_allocError(&UNK_009ab010,param_1,0,0);
      *(undefined1 *)param_1 = 1;
      _swift_willThrow();
    }
    else {
      uVar2 = *(undefined4 *)*unaff_x20;
      *unaff_x20 = (undefined4 *)*unaff_x20 + 1;
      unaff_x20[1] = unaff_x20[1] + -4;
      uVar10 = *param_1;
      uVar6 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar9 = uVar10;
      if ((uVar6 & 1) == 0) {
        uVar9 = 0;
        (*param_2)(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar6 = *(ulong *)(uVar9 + 0x10);
      if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar6) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
        (*param_2)(uVar10,uVar6 + 1,1,uVar9);
        uVar9 = uVar10;
      }
      *(ulong *)(uVar9 + 0x10) = uVar6 + 1;
      *(undefined4 *)(uVar9 + uVar6 * 4 + 0x20) = uVar2;
      *param_1 = uVar9;
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  return;
}



/* Entry: 000cd7b4; end: 000cd833;  */

void FUN_000cd7b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x01') {
    if (unaff_x20[1] < 8) {
      FUN_000d4ba8();
      _swift_allocError(&UNK_009ab010,param_1,0,0);
      *(undefined1 *)param_1 = 1;
      _swift_willThrow();
    }
    else {
      uVar1 = *(undefined8 *)*unaff_x20;
      *unaff_x20 = (long)((undefined8 *)*unaff_x20 + 1);
      unaff_x20[1] = unaff_x20[1] + -8;
      *param_1 = uVar1;
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  return;
}



/* Entry: 000cd834; end: 000cd8b7;  */

void FUN_000cd834(undefined8 *param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x01') {
    if (unaff_x20[1] < 8) {
      FUN_000d4ba8();
      _swift_allocError(&UNK_009ab010,param_1,0,0);
      *(undefined1 *)param_1 = 1;
      _swift_willThrow();
    }
    else {
      uVar1 = *(undefined8 *)*unaff_x20;
      *unaff_x20 = (long)((undefined8 *)*unaff_x20 + 1);
      unaff_x20[1] = unaff_x20[1] + -8;
      *param_1 = uVar1;
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  return;
}



/* Entry: 000cd8b8; end: 000cdb6b;  */

void FUN_000cd8b8(ulong *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x02') {
    lStack_58 = 0;
    plVar5 = &lStack_58;
    FUN_000cbc48();
    lVar1 = lStack_58;
    if (unaff_x21 == 0) {
      plVar9 = (long *)*param_1;
      lVar11 = plVar9[2];
      lVar2 = lStack_58 + 7;
      if (-1 < lStack_58) {
        lVar2 = lStack_58;
      }
      if (SCARRY8(lVar11,lVar2 >> 3)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xcdb6c);
        (*pcVar3)();
      }
      plVar6 = plVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)plVar6 == 0) || ((long)((ulong)plVar9[3] >> 1) < lVar11 + (lVar2 >> 3))) {
        (*param_2)();
        plVar9 = plVar6;
      }
      lVar11 = unaff_x20[0xd];
      lVar2 = unaff_x20[0xe];
      uStack_d8 = 1;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_a0 = 0;
      uStack_98 = 1;
      uStack_70 = 0xf000000000000000;
      uStack_78 = 0;
      uStack_60 = 0xf000000000000000;
      uStack_68 = 0;
      lStack_f0 = lVar1;
      uStack_e0 = 0;
      plVar6 = unaff_x20 + 6;
      plStack_f8 = plVar5;
      plStack_e8 = plVar5;
      func_0x000d4d64(plVar6,&uStack_c8);
      lStack_80 = unaff_x20[0xf];
      lStack_90 = lVar11;
      uStack_88 = (char)lVar2;
      lVar2 = lStack_f0;
      lStack_f0 = lVar1;
      while (lStack_f0 != 0) {
        lVar1 = lStack_f0 + -8;
        if (lStack_f0 < 8) {
          *param_1 = (ulong)plVar9;
          plStack_f8 = plVar5;
          FUN_000d4ba8();
          _swift_allocError(&UNK_009ab010,plVar6,0,0);
          *(undefined1 *)plVar6 = 1;
          _swift_willThrow();
          func_0x000d4cac(&plStack_f8);
          return;
        }
        lVar11 = *plVar5;
        uVar4 = plVar9[2];
        lStack_f0 = lVar2;
        if ((ulong)plVar9[3] >> 1 <= uVar4) {
          plVar6 = (long *)(ulong)(1 < (ulong)plVar9[3]);
          (*param_2)(plVar6,uVar4 + 1,1,plVar9);
          plVar9 = plVar6;
        }
        plVar5 = plVar5 + 1;
        plVar9[2] = uVar4 + 1;
        plVar9[uVar4 + 4] = lVar11;
        lVar2 = lStack_f0;
        lStack_f0 = lVar1;
      }
      *param_1 = (ulong)plVar9;
      lStack_f0 = 0;
      plStack_f8 = plVar5;
      func_0x000d4cac(&plStack_f8);
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  else if (*(char *)((long)unaff_x20 + 0x21) == '\x01') {
    if (unaff_x20[1] < 8) {
      FUN_000d4ba8();
      _swift_allocError(&UNK_009ab010,param_1,0,0);
      *(undefined1 *)param_1 = 1;
      _swift_willThrow();
    }
    else {
      uVar10 = *(undefined8 *)*unaff_x20;
      *unaff_x20 = (long)((undefined8 *)*unaff_x20 + 1);
      unaff_x20[1] = unaff_x20[1] + -8;
      uVar8 = *param_1;
      uVar4 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = uVar8;
      if ((uVar4 & 1) == 0) {
        uVar7 = 0;
        (*param_2)(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
      }
      uVar4 = *(ulong *)(uVar7 + 0x10);
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar4) {
        uVar8 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        (*param_2)(uVar8,uVar4 + 1,1,uVar7);
        uVar7 = uVar8;
      }
      *(ulong *)(uVar7 + 0x10) = uVar4 + 1;
      *(undefined8 *)(uVar7 + uVar4 * 8 + 0x20) = uVar10;
      *param_1 = uVar7;
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  return;
}


