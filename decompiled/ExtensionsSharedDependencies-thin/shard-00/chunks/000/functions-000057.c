/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001215ec; end: 00121747;  */

void FUN_001215ec(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x000115a8(0xaf0388,&UNK_007da348);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      _memmove(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_001216c8;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        _swift_bridgeObjectRetain();
        if (uVar6 != 0) break;
LAB_001216c8:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x121748);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_00121720;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_00121720:
  _swift_release(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 00121748; end: 001229cf;  */

void FUN_00121748(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0xae8160;
  func_0x000115a8(0xae8160,&UNK_007d6500);
  lVar7 = lVar15;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_001219d0:
    _swift_release(lVar15);
LAB_001219d8:
    *unaff_x20 = lVar7;
    return;
  }
  puVar17 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar16 = uVar16 & *puVar17;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar18 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x121a00);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) == 0) {
            _swift_release(lVar15);
            goto LAB_001219d8;
          }
          uVar16 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
          if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
            *puVar17 = -1L << (uVar16 & 0x3f);
          }
          else {
            _bzero(puVar17,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar15 + 0x10) = 0;
          goto LAB_001219d0;
        }
        uVar16 = puVar17[lVar18];
        lVar10 = lVar10 + 1;
      } while (uVar16 == 0);
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar18 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar18 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    lVar10 = *(long *)(lVar15 + 0x38) + uVar9 * 0x20;
    if ((param_2 & 1) == 0) {
      FUN_000232c8(lVar10,auStack_80);
      _swift_bridgeObjectRetain(uVar3);
    }
    else {
      FUN_000252c8(lVar10,auStack_80);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_c8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_c8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar6,uVar3);
    __ss6HasherV9_finalizeSiyF();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x121a04);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    FUN_000252c8(auStack_80,*(long *)(lVar7 + 0x38) + uVar9 * 0x20);
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar18;
  } while( true );
}



/* Entry: 001229d0; end: 00122a4f;  */

undefined * FUN_001229d0(long param_1)

{
  long lVar1;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [40];
  undefined *puStack_38;
  
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    do {
      FUN_00122a60(param_1,auStack_60);
      FUN_00122aa4(auStack_60,auStack_88);
      func_0x00120588(auStack_88);
      FUN_00011670(auStack_88);
      param_1 = param_1 + 0x28;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return puStack_38;
}



/* Entry: 00122a50; end: 00122a5f;  */

undefined1  [16] FUN_00122a50(void)

{
  return ZEXT816(0x9ae878);
}



/* Entry: 00122a60; end: 00122aa3;  */

long FUN_00122a60(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 00122aa4; end: 00122abb;  */

undefined8 * FUN_00122aa4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 00122abc; end: 00122dc3;  */

void FUN_00122abc(byte *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 auStack_88 [32];
  uint uStack_68;
  byte bStack_64;
  
  if (param_2 == 0) {
    return;
  }
  uVar5 = 0;
  pbVar1 = param_1 + param_2;
  uStack_68 = 0;
  pbVar10 = param_1;
  do {
    bStack_64 = (byte)uVar5;
    do {
      while ((uVar5 & 0xff) != 0) {
        if ((uStack_68 >> 7 & 1) != 0) {
          pbVar9 = pbVar10;
          uVar7 = uStack_68;
          uVar6 = uVar5;
          if (pbVar10 != (byte *)0x0) goto LAB_00122bd4;
          goto LAB_00122cf0;
        }
        pbVar9 = param_1;
        FUN_00122dd8();
        pcVar3 = (code *)auStack_88;
        puVar4 = (uint *)PTR___ss7UnicodeO4UTF8O13ForwardParserVN_0099b898;
        FUN_00122dc4(pcVar3,PTR___ss7UnicodeO4UTF8O13ForwardParserVN_0099b898,pbVar9);
        if ((char)puVar4[1] == '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x122dc4);
          (*pcVar3)();
        }
        *puVar4 = *puVar4 >> 8;
        *(char *)(puVar4 + 1) = (char)puVar4[1] + -8;
        (*pcVar3)(auStack_88,0);
        uVar5 = (uint)bStack_64;
      }
      if ((pbVar10 == (byte *)0x0) || (pbVar1 == pbVar10)) goto LAB_00122d74;
      uVar5 = 0;
      pbVar9 = pbVar10 + 1;
      bVar2 = *pbVar10;
      pbVar10 = pbVar9;
    } while (-1 < (char)bVar2);
    uVar7 = uStack_68 & 0xffffff00 | (uint)bVar2;
    uVar6 = 8;
LAB_00122bd4:
    pbVar10 = pbVar9;
    uVar5 = uVar6;
    if (pbVar9 != pbVar1) {
      pbVar10 = pbVar9 + 1;
      uVar7 = (uint)*pbVar9 << (ulong)(uVar6 & 0x1f) | (-0xff << (ulong)(uVar6 & 0x1f)) - 1U & uVar7
      ;
      uVar5 = uVar6 + 8;
      if ((uVar5 & 0xff) < 0x20) {
        if (pbVar10 != pbVar1) {
          pbVar10 = pbVar9 + 2;
          uVar7 = (uint)pbVar9[1] << (ulong)(uVar5 & 0x1f) |
                  (-0xff << (ulong)(uVar5 & 0x1f)) - 1U & uVar7;
          uVar5 = uVar6 + 0x10;
          if (0x1f < (uVar5 & 0xff)) goto LAB_00122cf0;
          if (pbVar10 != pbVar1) {
            pbVar10 = pbVar9 + 3;
            uVar7 = (uint)pbVar9[2] << (ulong)(uVar5 & 0x1f) |
                    (-0xff << (ulong)(uVar5 & 0x1f)) - 1U & uVar7;
            uVar5 = uVar6 + 0x18;
            if (0x1f < (uVar5 & 0xff)) goto LAB_00122cf0;
            if (pbVar10 != pbVar1) {
              pbVar10 = pbVar9 + 4;
              uVar7 = (uint)pbVar9[3] << (ulong)(uVar5 & 0x1f) |
                      (-0xff << (ulong)(uVar5 & 0x1f)) - 1U & uVar7;
              uVar5 = uVar6 + 0x20;
              if ((uVar6 & 0xff) < 0xe0) goto LAB_00122cf0;
              if (pbVar10 != pbVar1) {
                pbVar10 = pbVar9 + 5;
                uVar7 = (uint)pbVar9[4] << (ulong)(uVar6 & 0x1f) |
                        (-0xff << (ulong)(uVar6 & 0x1f)) - 1U & uVar7;
                uVar5 = uVar6 + 0x28;
                if (0x1f < (uVar5 & 0xff)) goto LAB_00122cf0;
              }
            }
          }
        }
        if ((uVar5 & 0xff) == 0) {
LAB_00122d74:
          __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
          return;
        }
      }
    }
LAB_00122cf0:
    if ((uVar7 & 0xc0e0) == 0x80c0) {
      if ((uVar7 & 0x1e) == 0) goto LAB_00122da4;
      iVar8 = 0x10;
    }
    else if ((uVar7 & 0xc0c0f0) == 0x8080e0) {
      if (((uVar7 & 0x200f) == 0) || ((uVar7 & 0x200f) == 0x200d)) goto LAB_00122da4;
      iVar8 = 0x18;
    }
    else {
      if ((((uVar7 & 0xc0c0c0f8) != 0x808080f0) || ((uVar7 & 0x3007) == 0)) ||
         (0x400 < ((uVar7 & 0x3007) >> 8 | (uVar7 & 7) << 8))) {
LAB_00122da4:
        __ss7UnicodeO4UTF8O13ForwardParserV14_invalidLengths5UInt8VyF
                  (CONCAT44(uVar5,uVar7) & 0xffffffffff);
        return;
      }
      iVar8 = 0x20;
    }
    uStack_68 = uVar7 >> iVar8;
    uVar5 = uVar5 - iVar8;
  } while( true );
}



/* Entry: 00122dc4; end: 00122dd7;  */

undefined8 FUN_00122dc4(void)

{
  return 0x122dd4;
}



/* Entry: 00122dd8; end: 00122e17;  */

void FUN_00122dd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af0398 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___ss7UnicodeO4UTF8O13ForwardParserVs10_UTFParsersMc_0099b8a0;
  _swift_getWitnessTable
            (PTR___ss7UnicodeO4UTF8O13ForwardParserVs10_UTFParsersMc_0099b8a0,
             PTR___ss7UnicodeO4UTF8O13ForwardParserVN_0099b898);
  puRam0000000000af0398 = puVar1;
  return;
}



/* Entry: 00122e18; end: 00122e87;  */

undefined * FUN_00122e18(undefined8 param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x122e88);
    (*pcVar1)();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (param_2,PTR___ss5UInt8VN_0099b7a8);
    *(undefined **)(puVar2 + 0x10) = param_2;
    _memset(puVar2 + 0x20,param_1,param_2);
  }
  return puVar2;
}



/* Entry: 00122e88; end: 00122edf;  */

void FUN_00122e88(undefined8 *param_1,undefined8 param_2)

{
  FUN_00122e18();
  *param_1 = param_2;
  return;
}



/* Entry: 00122ee0; end: 00122f23;  */

void FUN_00122ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  __sSa15withUnsafeBytesyqd__qd__SWKXEKlF
            (param_1,param_2,*unaff_x20,PTR___ss5UInt8VN_0099b7a8,param_3);
  return;
}



/* Entry: 00122f24; end: 00122f6f;  */

void FUN_00122f24(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  FUN_000d4dcc();
  *param_1 = param_3;
  param_1[1] = uVar1;
  FUN_0012323c(param_1,param_2);
  return;
}



/* Entry: 00122f70; end: 00122fc7;  */

void FUN_00122f70(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  lVar2 = param_3;
  FUN_001235dc();
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_2,param_3);
  *param_1 = uVar1;
  param_1[1] = lVar2;
  return;
}



/* Entry: 00122fc8; end: 0012301f;  */

ulong FUN_00122fc8(void)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  uVar2 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar5 = uVar2 >> 0x1e;
  if (1 < uVar2 >> 0x1e) {
    if (uVar5 != 2) {
      return 0;
    }
    if (!SBORROW8(*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x10))) {
      return *(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10);
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x12301c);
    (*pcVar3)();
  }
  if (uVar5 == 0) {
    return (ulong)unaff_x20[1] >> 0x30 & 0xff;
  }
  iVar4 = (int)((ulong)lVar1 >> 0x20);
  if (!SBORROW4(iVar4,(int)lVar1)) {
    return (long)(iVar4 - (int)lVar1);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x123020);
  (*pcVar3)();
}



/* Entry: 00123020; end: 0012304f;  */

void FUN_00123020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  __s10Foundation4DataV15withUnsafeBytesyxxSWKXEKlF(param_1,param_2,*unaff_x20,unaff_x20[1],param_3)
  ;
  return;
}



/* Entry: 00123050; end: 0012311b;  */

void FUN_00123050(ulong *param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = param_2;
  if (param_2 != 0) {
    if (param_3 != 0) {
      if (param_3 < 0xf) {
        param_3 = param_3 + param_2;
        FUN_000541a4();
        param_3 = param_3 & 0xffffffffffffff;
        uVar2 = param_2;
      }
      else {
        uVar1 = 0;
        __s10Foundation13__DataStorageCMa();
        _swift_allocObject();
        __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(param_2,param_3,uVar1);
        if (param_3 < 0x7fffffff) {
          uVar2 = param_3 << 0x20;
          param_3 = param_2 | 0x4000000000000000;
        }
        else {
          uVar2 = 0;
          __s10Foundation4DataV14RangeReferenceCMa();
          _swift_allocObject();
          *(undefined8 *)(uVar2 + 0x10) = 0;
          *(ulong *)(uVar2 + 0x18) = param_3;
          param_3 = param_2 | 0x8000000000000000;
        }
      }
      goto LAB_00123098;
    }
    uVar2 = 0;
  }
  param_3 = 0xc000000000000000;
LAB_00123098:
  *param_1 = uVar2;
  param_1[1] = param_3;
  return;
}



/* Entry: 0012311c; end: 0012313f;  */

void FUN_0012311c(long param_1,long param_2)

{
  if (param_1 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 - param_1;
  }
  FUN_00123140(param_1,param_2);
  return;
}



/* Entry: 00123140; end: 0012323b;  */

void FUN_00123140(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  
  lVar4 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar4 + 0x40));
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_5,PTR___sSTTL_0099b0d0,PTR___s8IteratorSTTl_0099ae68);
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,uVar2,PTR___sSiN_0099b2c0,0,0);
  iVar1 = *(int *)(lVar3 + 0x30);
  (**(code **)(lVar4 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4,param_5);
  lVar3 = param_1;
  __sST13_copyContents12initializing8IteratorQz_SitSry7ElementQzG_tFTj
            (param_1,param_2,param_3,param_5,param_6);
  *(long *)(param_1 + iVar1) = lVar3;
  return;
}



/* Entry: 0012323c; end: 0012349f;  */

void FUN_0012323c(undefined8 param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar1 = *param_2;
  uVar11 = param_2[1];
  uVar5 = (uint)(uVar11 >> 0x20);
  uVar10 = uVar5 >> 0x1e;
  if (uVar5 >> 0x1e < 2) {
    if (uVar10 == 0) {
      FUN_00023358(lVar1,uVar11);
      uStack_70._0_7_ = (undefined7)uVar11;
      lStack_78 = lVar1;
      _memset(&lStack_78,param_3 & 0xffffffff,uVar11 >> 0x30 & 0xff);
      uVar11 = uStack_70 & 0xffffffffffffff;
    }
    else {
      _swift_retain(uVar11 & 0x3fffffffffffffff);
      FUN_00023358(lVar1,uVar11);
      param_2[1] = -0x4000000000000000;
      *param_2 = 0;
      lStack_78 = lVar1;
      uStack_70 = uVar11 & 0x3fffffffffffffff;
      FUN_00023358(0,0xc000000000000000);
      FUN_001234a0(param_1,&lStack_78,param_3);
      uVar11 = uStack_70 | 0x4000000000000000;
    }
    *param_2 = lStack_78;
    param_2[1] = uVar11;
  }
  else if (uVar10 == 2) {
    _swift_retain(lVar1);
    _swift_retain(uVar11 & 0x3fffffffffffffff);
    FUN_00023358(lVar1,uVar11);
    param_2[1] = -0x4000000000000000;
    *param_2 = 0;
    lVar8 = 0;
    lStack_78 = lVar1;
    uStack_70 = uVar11 & 0x3fffffffffffffff;
    FUN_00023358(0,0xc000000000000000);
    __s10Foundation4DataV10LargeSliceV21ensureUniqueReferenceyyF();
    uVar11 = uStack_70;
    lVar6 = lStack_78;
    lVar1 = *(long *)(lStack_78 + 0x10);
    lVar2 = *(long *)(lStack_78 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (lVar8 == 0) goto LAB_0012349c;
    lVar9 = lVar8;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar3 = lVar1 - lVar9;
    if (SBORROW8(lVar1,lVar9)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x123494);
      (*pcVar7)();
    }
    lVar4 = lVar2 - lVar1;
    if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x123498);
      (*pcVar7)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (lVar4 <= lVar9) {
      lVar9 = lVar4;
    }
    _memset(lVar8 + lVar3,param_3,lVar9);
    *param_2 = lVar6;
    param_2[1] = uVar11 | 0x8000000000000000;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_0012349c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1234a0);
  (*pcVar7)();
}



/* Entry: 001234a0; end: 00123543;  */

void FUN_001234a0(int *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  __s10Foundation4DataV11InlineSliceV21ensureUniqueReferenceyyF();
  lVar7 = (long)*param_1;
  iVar1 = param_1[1];
  if (iVar1 < *param_1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x12353c);
    (*pcVar3)();
  }
  lVar6 = *(long *)(param_1 + 2);
  lVar4 = lVar6;
  _swift_retain();
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar2 = lVar7 - lVar5;
    if (!SBORROW8(lVar7,lVar5)) {
      lVar7 = iVar1 - lVar7;
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (lVar7 <= lVar5) {
        lVar5 = lVar7;
      }
      _memset(lVar4 + lVar2,param_2,lVar5);
      _swift_release(lVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x123540);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x123544);
  (*pcVar3)();
}



/* Entry: 00123544; end: 001235db;  */

void FUN_00123544(ulong param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  if ((long)param_1 < 0xf) {
    FUN_00135504(param_1);
  }
  else {
    __s10Foundation13__DataStorageCMa();
    _swift_allocObject();
    __s10Foundation13__DataStorageC6lengthACSi_tcfc(param_1);
    if (0x7ffffffe < param_1) {
      lVar1 = 0;
      __s10Foundation4DataV14RangeReferenceCMa();
      _swift_allocObject();
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(ulong *)(lVar1 + 0x18) = param_1;
    }
  }
  return;
}



/* Entry: 001235dc; end: 00123a67;  */

undefined1  [16] FUN_001235dc(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long extraout_x12;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  ulong auStack_100 [4];
  ulong auStack_e0 [2];
  char acStack_d0 [2];
  undefined4 uStack_ce;
  undefined2 uStack_ca;
  undefined6 uStack_c8;
  undefined1 auStack_c2 [2];
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined6 uStack_90;
  undefined2 uStack_8a;
  undefined6 uStack_88;
  ushort uStack_82;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_3,param_2,PTR___sSTTL_0099b0d0,PTR___s8IteratorSTTl_0099ae68);
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,lVar4,PTR___sSiN_0099b2c0,0,0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)auStack_e0 - extraout_x8;
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar16 - extraout_x8_00;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(param_2 - 8) + 0x40));
  lVar12 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar12,param_1,param_2);
  uVar6 = 0xaf03a0;
  func_0x000115a8(0xaf03a0,&UNK_007da3b0);
  puVar7 = &uStack_c0;
  _swift_dynamicCast(puVar7,lVar12,param_2,uVar6,6);
  if (((ulong)puVar7 & 1) != 0) {
    func_0x00123ae0(&uStack_c0,&uStack_90);
    uVar6 = uStack_70;
    uVar8 = uStack_78;
    FUN_0001393c(&uStack_90,uStack_78);
    __s10Foundation15ContiguousBytesP010withUnsafeC0yqd__qd__SWKXEKlFTj
              (&uStack_c0,0x535e8,0,PTR___s10Foundation4DataV15_RepresentationON_0099c368,uVar8,
               uVar6);
    FUN_00011670(&uStack_90);
    uVar13 = uStack_c0;
    uVar8 = uStack_b8;
    goto LAB_001239f8;
  }
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  FUN_00123a68(&uStack_c0);
  __sST32withContiguousStorageIfAvailableyqd__Sgqd__SRy7ElementQzGKXEKlFTj
            (&uStack_90,FUN_00123050,0,PTR___s10Foundation4DataV15_RepresentationON_0099c368,param_2
             ,param_3);
  auStack_e0[0] = CONCAT26(uStack_8a,uStack_90);
  uVar8 = CONCAT26(uStack_82,uStack_88);
  uVar13 = auStack_e0[0];
  if (uStack_82 >> 0xc < 0xf) goto LAB_001239f8;
  uVar13 = param_2;
  uVar11 = param_3;
  __sST19underestimatedCountSivgTj();
  FUN_00123544();
  uStack_c0 = uVar13;
  uStack_b8 = uVar11;
  uStack_80 = param_2;
  uStack_78 = param_3;
  uStack_70 = param_1;
  __s10Foundation4DataV15_RepresentationO22withUnsafeMutableBytesyxxSwKXEKlF
            (lVar16,FUN_00123ab0,&uStack_90,lVar5);
  uVar13 = *(ulong *)(lVar16 + *(int *)(lVar5 + 0x30));
  (**(code **)(lVar15 + 0x20))(lVar14,lVar16,lVar4);
  uVar1 = (uint)(uStack_b8 >> 0x20);
  uVar9 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar9 == 0) {
      uVar11 = uStack_b8 >> 0x30 & 0xff;
    }
    else {
      iVar10 = (int)(uStack_c0 >> 0x20);
      if (SBORROW4(iVar10,(int)uStack_c0)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x123a64);
        (*pcVar3)();
      }
      uVar11 = (ulong)(iVar10 - (int)uStack_c0);
    }
    if (uVar13 == uVar11) goto LAB_0012389c;
LAB_00123878:
    if (uVar9 == 2) {
      uVar8 = *(ulong *)(uStack_c0 + 0x18);
    }
    else if (uVar9 == 1) {
      uVar8 = (long)uStack_c0 >> 0x20;
    }
    else {
      uVar8 = uStack_b8 >> 0x30 & 0xff;
    }
LAB_001239d0:
    if ((long)uVar8 < (long)uVar13) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x123a5c);
      (*pcVar3)();
    }
    __s10Foundation4DataV15_RepresentationO15replaceSubrange_4with5countySnySiG_SVSgSitF
              (uVar13,uVar8,0,0);
LAB_001239e8:
    (**(code **)(lVar15 + 8))(lVar14,lVar4);
    uVar13 = uStack_c0;
    uVar8 = uStack_b8;
  }
  else {
    if (uVar9 == 2) {
      if (SBORROW8(*(long *)(uStack_c0 + 0x18),*(long *)(uStack_c0 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x123a60);
        (*pcVar3)();
      }
      if (uVar13 != *(long *)(uStack_c0 + 0x18) - *(long *)(uStack_c0 + 0x10)) goto LAB_00123878;
    }
    else if (uVar13 != 0) {
      uVar8 = 0;
      goto LAB_001239d0;
    }
LAB_0012389c:
    _swift_getAssociatedConformanceWitness
              (param_3,param_2,lVar4,PTR___sSTTL_0099b0d0,PTR___sST8IteratorST_StTn_0099b0c8);
    uStack_90 = 0;
    uStack_8a = 0;
    uStack_88 = 0;
    __sSt4next7ElementQzSgyFTj(acStack_d0,lVar4,param_3);
    if (acStack_d0[1] != '\x01') {
      uVar13 = 0;
      do {
        *(char *)((long)&uStack_90 + (uVar13 & 0xff)) = acStack_d0[0];
        uVar1 = ((uint)uVar13 & 0xff) + 1;
        uVar13 = (ulong)uVar1;
        if ((uVar1 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x123a58);
          (*pcVar3)();
        }
        if ((uVar1 & 0xff) == 0xe) {
          acStack_d0[0] = (char)uStack_90;
          acStack_d0[1] = (char)((uint6)uStack_90 >> 8);
          uStack_ce = (undefined4)((uint6)uStack_90 >> 0x10);
          uStack_ca = uStack_8a;
          uStack_c8 = uStack_88;
          __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF(acStack_d0,auStack_c2);
          uVar13 = 0;
        }
        __sSt4next7ElementQzSgyFTj(acStack_d0,lVar4,param_3);
      } while (acStack_d0[1] != '\x01');
      if ((uVar13 & 0xff) != 0) {
        acStack_d0[0] = (char)uStack_90;
        acStack_d0[1] = (char)((uint6)uStack_90 >> 8);
        uStack_ce = (undefined4)((uint6)uStack_90 >> 0x10);
        uStack_ca = uStack_8a;
        uStack_c8 = uStack_88;
        __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF
                  (acStack_d0,acStack_d0 + (uVar13 & 0xff));
        func_0x00123acc(auStack_e0[0],uVar8);
        goto LAB_001239e8;
      }
    }
    (**(code **)(lVar15 + 8))(lVar14,lVar4);
    func_0x00123acc(auStack_e0[0],uVar8);
    uVar13 = uStack_c0;
    uVar8 = uStack_b8;
  }
LAB_001239f8:
  uStack_b8 = uVar8;
  uStack_c0 = uVar13;
  uVar13 = uStack_b8;
  uVar8 = uStack_c0;
  auVar2._8_8_ = uStack_b8;
  auVar2._0_8_ = uStack_c0;
  func_0x00023304(uStack_c0,uStack_b8);
  uVar11 = uVar8;
  FUN_00023358(uVar8,uVar13);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return auVar2;
  }
  ___stack_chk_fail();
  *(ulong *)(lVar12 + -0x20) = uVar13;
  *(ulong *)(lVar12 + -0x18) = uVar8;
  *(undefined1 **)(lVar12 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar12 + -8) = FUN_00123a68;
  lVar4 = 0xaf03a8;
  func_0x000115a8(0xaf03a8,&UNK_007da3b8);
  (**(code **)(*(long *)(lVar4 + -8) + 8))(uVar11,lVar4);
  auVar17._8_8_ = lVar4;
  auVar17._0_8_ = uVar11;
  return auVar17;
}



/* Entry: 00123a68; end: 00123aaf;  */

undefined8 FUN_00123a68(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0xaf03a8;
  func_0x000115a8(0xaf03a8,&UNK_007da3b8);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 00123ab0; end: 00123acb;  */

void FUN_00123ab0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_0012311c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
               *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 00123acc; end: 00123af7;  */

void FUN_00123acc(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release();
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 00123af8; end: 00123ebf;  */

long FUN_00123af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_00124784();
  _swift_allocObject();
  *(undefined1 *)(lVar1 + 0x10) = 3;
  *(undefined8 *)(lVar1 + 0x18) = 0xd000000000000049;
  *(undefined8 *)(lVar1 + 0x20) = 0x80000000008b8910;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  *(undefined8 *)(lVar1 + 0x38) = param_3;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  *(undefined8 *)(lVar1 + 0x48) = param_5;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  return lVar1;
}



/* Entry: 00123ec0; end: 00123ec7;  */

long FUN_00123ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_00124784();
  _swift_allocObject();
  *(undefined1 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0xd00000000000003c;
  *(undefined8 *)(lVar1 + 0x20) = 0x80000000008b8a40;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  *(undefined8 *)(lVar1 + 0x38) = param_3;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  *(undefined8 *)(lVar1 + 0x48) = param_5;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  return lVar1;
}



/* Entry: 00123ec8; end: 00123f67;  */

long FUN_00123ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_00124784();
  _swift_allocObject();
  *(undefined1 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x18) = 0xd000000000000093;
  *(undefined8 *)(lVar1 + 0x20) = 0x80000000008b8b40;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  *(undefined8 *)(lVar1 + 0x38) = param_3;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  *(undefined8 *)(lVar1 + 0x48) = param_5;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  return lVar1;
}



/* Entry: 00123f68; end: 00123fa7;  */

void FUN_00123f68(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 00123fa8; end: 00123faf;  */

undefined1 FUN_00123fa8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 00123fb0; end: 00124077;  */

void FUN_00123fb0(undefined1 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *unaff_x20;
  ulong uVar11;
  
  uVar8 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar11 = *unaff_x20;
  uVar9 = uVar11;
  if ((uVar8 & 1) == 0) {
    uVar7 = *(undefined1 *)(uVar11 + 0x10);
    uVar1 = *(undefined8 *)(uVar11 + 0x18);
    uVar4 = *(undefined8 *)(uVar11 + 0x20);
    uVar2 = *(undefined8 *)(uVar11 + 0x28);
    uVar5 = *(undefined8 *)(uVar11 + 0x30);
    uVar3 = *(undefined8 *)(uVar11 + 0x38);
    uVar6 = *(undefined8 *)(uVar11 + 0x40);
    uVar10 = *(undefined8 *)(uVar11 + 0x48);
    uVar9 = 0;
    FUN_00124784();
    _swift_allocObject();
    *(undefined1 *)(uVar9 + 0x10) = uVar7;
    *(undefined8 *)(uVar9 + 0x18) = uVar1;
    *(undefined8 *)(uVar9 + 0x20) = uVar4;
    *(undefined8 *)(uVar9 + 0x28) = uVar2;
    *(undefined8 *)(uVar9 + 0x30) = uVar5;
    *(undefined8 *)(uVar9 + 0x38) = uVar3;
    *(undefined8 *)(uVar9 + 0x40) = uVar6;
    *(undefined8 *)(uVar9 + 0x48) = uVar10;
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_release(uVar11);
    *unaff_x20 = uVar9;
  }
  *(undefined1 *)(uVar9 + 0x10) = param_1;
  return;
}



/* Entry: 00124078; end: 00124097;  */

code * FUN_00124078(undefined8 *param_1)

{
  long *unaff_x20;
  
  *param_1 = unaff_x20;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(*unaff_x20 + 0x10);
  return FUN_00124098;
}



/* Entry: 00124098; end: 00124173;  */

void FUN_00124098(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulong uVar13;
  
  puVar12 = (ulong *)*param_1;
  uVar7 = *(undefined1 *)(param_1 + 1);
  if ((param_2 & 1) == 0) {
    uVar9 = *puVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar13 = *puVar12;
    uVar10 = uVar13;
    if ((uVar9 & 1) == 0) {
      uVar8 = *(undefined1 *)(uVar13 + 0x10);
      uVar1 = *(undefined8 *)(uVar13 + 0x18);
      uVar4 = *(undefined8 *)(uVar13 + 0x20);
      uVar2 = *(undefined8 *)(uVar13 + 0x28);
      uVar5 = *(undefined8 *)(uVar13 + 0x30);
      uVar3 = *(undefined8 *)(uVar13 + 0x38);
      uVar6 = *(undefined8 *)(uVar13 + 0x40);
      uVar11 = *(undefined8 *)(uVar13 + 0x48);
      uVar10 = 0;
      FUN_00124784();
      _swift_allocObject();
      *(undefined1 *)(uVar10 + 0x10) = uVar8;
      *(undefined8 *)(uVar10 + 0x18) = uVar1;
      *(undefined8 *)(uVar10 + 0x20) = uVar4;
      *(undefined8 *)(uVar10 + 0x28) = uVar2;
      *(undefined8 *)(uVar10 + 0x30) = uVar5;
      *(undefined8 *)(uVar10 + 0x38) = uVar3;
      *(undefined8 *)(uVar10 + 0x40) = uVar6;
      *(undefined8 *)(uVar10 + 0x48) = uVar11;
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      _swift_release(uVar13);
      *puVar12 = uVar10;
    }
    *(undefined1 *)(uVar10 + 0x10) = uVar7;
  }
  else {
    FUN_00123fb0(uVar7);
  }
  return;
}



/* Entry: 00124174; end: 0012419f;  */

undefined1  [16] FUN_00124174(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x18);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_1 + 0x20));
  return auVar1;
}



/* Entry: 001241a0; end: 0012427f;  */

void FUN_001241a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x20;
  long lVar10;
  undefined8 uVar11;
  
  iVar7 = (int)*unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  lVar10 = *unaff_x20;
  if (iVar7 == 0) {
    uVar6 = *(undefined1 *)(lVar10 + 0x10);
    uVar1 = *(undefined8 *)(lVar10 + 0x18);
    uVar11 = *(undefined8 *)(lVar10 + 0x20);
    uVar2 = *(undefined8 *)(lVar10 + 0x28);
    uVar4 = *(undefined8 *)(lVar10 + 0x30);
    uVar3 = *(undefined8 *)(lVar10 + 0x38);
    uVar5 = *(undefined8 *)(lVar10 + 0x40);
    uVar9 = *(undefined8 *)(lVar10 + 0x48);
    lVar8 = 0;
    FUN_00124784();
    _swift_allocObject();
    *(undefined1 *)(lVar8 + 0x10) = uVar6;
    *(undefined8 *)(lVar8 + 0x18) = uVar1;
    *(undefined8 *)(lVar8 + 0x20) = uVar11;
    *(undefined8 *)(lVar8 + 0x28) = uVar2;
    *(undefined8 *)(lVar8 + 0x30) = uVar4;
    *(undefined8 *)(lVar8 + 0x38) = uVar3;
    *(undefined8 *)(lVar8 + 0x40) = uVar5;
    *(undefined8 *)(lVar8 + 0x48) = uVar9;
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_release(lVar10);
    *unaff_x20 = lVar8;
  }
  else {
    uVar11 = *(undefined8 *)(lVar10 + 0x20);
    lVar8 = lVar10;
  }
  *(undefined8 *)(lVar8 + 0x18) = param_1;
  *(undefined8 *)(lVar8 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar11);
  return;
}



/* Entry: 00124280; end: 001242bf;  */

undefined1  [16] FUN_00124280(undefined8 *param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[2] = unaff_x20;
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x20);
  *param_1 = *(undefined8 *)(*unaff_x20 + 0x18);
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_001242c0;
  return auVar2;
}



/* Entry: 001242c0; end: 001243bf;  */

void FUN_001242c0(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  
  uVar1 = *param_1;
  uVar5 = param_1[1];
  plVar12 = (long *)param_1[2];
  if ((param_2 & 1) == 0) {
    iVar9 = (int)*plVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar13 = *plVar12;
    if (iVar9 == 0) {
      uVar8 = *(undefined1 *)(lVar13 + 0x10);
      uVar2 = *(undefined8 *)(lVar13 + 0x18);
      uVar14 = *(undefined8 *)(lVar13 + 0x20);
      uVar3 = *(undefined8 *)(lVar13 + 0x28);
      uVar6 = *(undefined8 *)(lVar13 + 0x30);
      uVar4 = *(undefined8 *)(lVar13 + 0x38);
      uVar7 = *(undefined8 *)(lVar13 + 0x40);
      uVar11 = *(undefined8 *)(lVar13 + 0x48);
      lVar10 = 0;
      FUN_00124784();
      _swift_allocObject();
      *(undefined1 *)(lVar10 + 0x10) = uVar8;
      *(undefined8 *)(lVar10 + 0x18) = uVar2;
      *(undefined8 *)(lVar10 + 0x20) = uVar14;
      *(undefined8 *)(lVar10 + 0x28) = uVar3;
      *(undefined8 *)(lVar10 + 0x30) = uVar6;
      *(undefined8 *)(lVar10 + 0x38) = uVar4;
      *(undefined8 *)(lVar10 + 0x40) = uVar7;
      *(undefined8 *)(lVar10 + 0x48) = uVar11;
      _swift_bridgeObjectRetain(uVar14);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar7);
      _swift_release(lVar13);
      *plVar12 = lVar10;
    }
    else {
      uVar14 = *(undefined8 *)(lVar13 + 0x20);
      lVar10 = lVar13;
    }
    *(undefined8 *)(lVar10 + 0x18) = uVar1;
    *(undefined8 *)(lVar10 + 0x20) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    FUN_001241a0(uVar1,uVar5);
    uVar14 = uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar14);
  return;
}



/* Entry: 001243c0; end: 0012441f;  */

void FUN_001243c0(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = 0;
  FUN_00124784();
  _swift_allocObject();
  *(undefined1 *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  uVar2 = *param_4;
  uVar4 = param_4[3];
  uVar3 = param_4[2];
  *(undefined8 *)(lVar1 + 0x30) = param_4[1];
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  *(undefined8 *)(lVar1 + 0x40) = uVar4;
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  *(undefined8 *)(lVar1 + 0x48) = param_4[4];
  return;
}



/* Entry: 00124420; end: 00124447;  */

void FUN_00124420(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_0099b708)();
  return;
}



/* Entry: 00124448; end: 0012446f;  */

void FUN_00124448(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  __ss6HasherV8_combineyySuF(param_1,*unaff_x20);
  return;
}



/* Entry: 00124470; end: 00124573;  */

void FUN_00124470(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00124574; end: 0012465f;  */

void FUN_00124574(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 00124660; end: 00124667;  */

undefined1  [16] FUN_00124660(void)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *unaff_x20;
  undefined1 auVar5 [16];
  
  bVar3 = *unaff_x20;
  pcVar2 = "JSON encoding error";
  if (bVar3 != 2) {
    pcVar2 = "ssage+TextFormatAdditions.swift";
  }
  pcVar1 = "Stream decoding error";
  if (bVar3 != 0) {
    pcVar1 = "JSON decoding error";
  }
  uVar4 = 0xd000000000000013;
  if (bVar3 < 2) {
    pcVar2 = pcVar1;
    uVar4 = 0xd000000000000015;
  }
  auVar5._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 00124668; end: 00124693;  */

undefined1  [16] FUN_00124668(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 00124694; end: 001246c7;  */

void FUN_00124694(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 001246c8; end: 001246db;  */

undefined8 FUN_001246c8(void)

{
  return 0x1246d8;
}



/* Entry: 001246dc; end: 00124707;  */

undefined1  [16] FUN_001246dc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 00124708; end: 0012473b;  */

void FUN_00124708(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 0012473c; end: 00124783;  */

undefined1  [16] FUN_0012473c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x12474c;
  return auVar1;
}



/* Entry: 00124784; end: 001247a3;  */

void FUN_00124784(void)

{
  _objc_opt_self(&PTR_PTR_00af0400);
  return;
}



/* Entry: 001247a4; end: 001247d7;  */

void FUN_001247a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  _swift_bridgeObjectRetain(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(param_5);
  return;
}



/* Entry: 001247d8; end: 001247db;  */

bool FUN_001247d8(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar2 & 1) != 0)) &&
     ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar2 & 1) != 0)))) {
    bVar1 = param_1[4] == param_2[4];
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 001247dc; end: 0012486f;  */

void FUN_001247dc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[2],unaff_x20[3]);
  __ss6HasherV8_combineyySuF(unaff_x20[4]);
  return;
}



/* Entry: 00124870; end: 001248eb;  */

void FUN_00124870(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  uVar5 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar1,uVar3);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar2,uVar4);
  __ss6HasherV8_combineyySuF(uVar5);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001248ec; end: 0012493b;  */

void FUN_001248ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  return;
}



/* Entry: 0012493c; end: 001249b3;  */

void FUN_0012493c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  uVar5 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar1,uVar3);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar2,uVar4);
  __ss6HasherV8_combineyySuF(uVar5);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001249b4; end: 001249fb;  */

uint FUN_001249b4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_00124cdc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 001249fc; end: 00124b33;  */

undefined1  [16] FUN_001249fc(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  bVar5 = *(byte *)(param_1 + 0x10);
  pcVar2 = "JSON encoding error";
  if (bVar5 != 2) {
    pcVar2 = "ssage+TextFormatAdditions.swift";
  }
  pcVar1 = "Stream decoding error";
  if (bVar5 != 0) {
    pcVar1 = "JSON decoding error";
  }
  uVar3 = 0xd000000000000013;
  if (bVar5 < 2) {
    pcVar2 = pcVar1;
    uVar3 = 0xd000000000000015;
  }
  __sSS6appendyySSF(uVar3,(ulong)pcVar2 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar2 | 0x8000000000000000);
  __sSS6appendyySSF(0x2074612820,0xe500000000000000);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&uStack_68,&uStack_40,&UNK_009aea30,PTR___ss26DefaultStringInterpolationVN_0099b698,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0);
  __sSS6appendyySSF(0x203a29,0xe300000000000000);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _swift_bridgeObjectRetain(uVar4);
  __sSS6appendyySSF(uVar3,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  auVar6._8_8_ = uStack_38;
  auVar6._0_8_ = uStack_40;
  return auVar6;
}



/* Entry: 00124b34; end: 00124b3b;  */

undefined1  [16] FUN_00124b34(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  long lVar7;
  long *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar7 = *unaff_x20;
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  bVar5 = *(byte *)(lVar7 + 0x10);
  pcVar2 = "JSON encoding error";
  if (bVar5 != 2) {
    pcVar2 = "ssage+TextFormatAdditions.swift";
  }
  pcVar1 = "Stream decoding error";
  if (bVar5 != 0) {
    pcVar1 = "JSON decoding error";
  }
  uVar3 = 0xd000000000000013;
  if (bVar5 < 2) {
    pcVar2 = pcVar1;
    uVar3 = 0xd000000000000015;
  }
  __sSS6appendyySSF(uVar3,(ulong)pcVar2 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar2 | 0x8000000000000000);
  __sSS6appendyySSF(0x2074612820,0xe500000000000000);
  uStack_60 = *(undefined8 *)(lVar7 + 0x30);
  uStack_68 = *(undefined8 *)(lVar7 + 0x28);
  uStack_50 = *(undefined8 *)(lVar7 + 0x40);
  uStack_58 = *(undefined8 *)(lVar7 + 0x38);
  uStack_48 = *(undefined8 *)(lVar7 + 0x48);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&uStack_68,&uStack_40,&UNK_009aea30,PTR___ss26DefaultStringInterpolationVN_0099b698,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0);
  __sSS6appendyySSF(0x203a29,0xe300000000000000);
  uVar3 = *(undefined8 *)(lVar7 + 0x18);
  uVar4 = *(undefined8 *)(lVar7 + 0x20);
  _swift_bridgeObjectRetain(uVar4);
  __sSS6appendyySSF(uVar3,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  auVar6._8_8_ = uStack_38;
  auVar6._0_8_ = uStack_40;
  return auVar6;
}



/* Entry: 00124b3c; end: 00124c2b;  */

undefined1  [16] FUN_00124b3c(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  uStack_68 = CONCAT71(uStack_68._1_7_,*(undefined1 *)(param_1 + 0x10));
  puVar4 = &UNK_009ae9b0;
  puVar3 = &uStack_68;
  __sSS10reflectingSSx_tclufC();
  puStack_40 = puVar3;
  puStack_38 = puVar4;
  __sSS6appendyySSF(0x2074612820,0xe500000000000000);
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  puVar4 = &UNK_009aea30;
  __sSS10reflectingSSx_tclufC(&uStack_68,&UNK_009aea30);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x203a29,0xe300000000000000);
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  _swift_bridgeObjectRetain();
  puVar4 = PTR___sSSN_0099b040;
  __sSS10reflectingSSx_tclufC(&uStack_68,PTR___sSSN_0099b040);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  auVar2._8_8_ = puStack_38;
  auVar2._0_8_ = puStack_40;
  return auVar2;
}



/* Entry: 00124c2c; end: 00124c3b;  */

undefined1  [16] FUN_00124c2c(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  long *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  lVar4 = *unaff_x20;
  uStack_68 = CONCAT71(uStack_68._1_7_,*(undefined1 *)(lVar4 + 0x10));
  puVar5 = &UNK_009ae9b0;
  puVar3 = &uStack_68;
  __sSS10reflectingSSx_tclufC();
  puStack_40 = puVar3;
  puStack_38 = puVar5;
  __sSS6appendyySSF(0x2074612820,0xe500000000000000);
  uStack_68 = *(undefined8 *)(lVar4 + 0x28);
  uStack_60 = *(undefined8 *)(lVar4 + 0x30);
  uStack_58 = *(undefined8 *)(lVar4 + 0x38);
  uVar1 = *(undefined8 *)(lVar4 + 0x40);
  uStack_48 = *(undefined8 *)(lVar4 + 0x48);
  uStack_50 = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  puVar5 = &UNK_009aea30;
  __sSS10reflectingSSx_tclufC(&uStack_68,&UNK_009aea30);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x203a29,0xe300000000000000);
  uStack_68 = *(undefined8 *)(lVar4 + 0x18);
  uStack_60 = *(undefined8 *)(lVar4 + 0x20);
  _swift_bridgeObjectRetain();
  puVar5 = PTR___sSSN_0099b040;
  __sSS10reflectingSSx_tclufC(&uStack_68,PTR___sSSN_0099b040);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  auVar2._8_8_ = puStack_38;
  auVar2._0_8_ = puStack_40;
  return auVar2;
}



/* Entry: 00124c3c; end: 00124cdb;  */

long FUN_00124c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_00124784();
  _swift_allocObject();
  *(undefined1 *)(lVar1 + 0x10) = param_6;
  *(undefined8 *)(lVar1 + 0x18) = 0xd00000000000003c;
  *(undefined8 *)(lVar1 + 0x20) = 0x80000000008b8a40;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  *(undefined8 *)(lVar1 + 0x38) = param_3;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  *(undefined8 *)(lVar1 + 0x48) = param_5;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  return lVar1;
}



/* Entry: 00124cdc; end: 00124d57;  */

bool FUN_00124cdc(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar2 & 1) != 0)) &&
     ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar2 & 1) != 0)))) {
    bVar1 = param_1[4] == param_2[4];
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 00124d58; end: 00124d5b;  */

void FUN_00124d58(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af03b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007da468;
  _swift_getWitnessTable(&UNK_007da468,&UNK_009ae9b0);
  puRam0000000000af03b0 = puVar1;
  return;
}



/* Entry: 00124d5c; end: 00124d9b;  */

void FUN_00124d5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af03b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007da468;
  _swift_getWitnessTable(&UNK_007da468,&UNK_009ae9b0);
  puRam0000000000af03b0 = puVar1;
  return;
}



/* Entry: 00124d9c; end: 00124d9f;  */

void FUN_00124d9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af03b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007da4d0;
  _swift_getWitnessTable(&UNK_007da4d0,&UNK_009aea30);
  puRam0000000000af03b8 = puVar1;
  return;
}



/* Entry: 00124da0; end: 00124ddf;  */

void FUN_00124da0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af03b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007da4d0;
  _swift_getWitnessTable(&UNK_007da4d0,&UNK_009aea30);
  puRam0000000000af03b8 = puVar1;
  return;
}



/* Entry: 00124de0; end: 00124dff;  */

undefined1  [16] FUN_00124de0(void)

{
  return ZEXT816(0x9ae930);
}



/* Entry: 00124e00; end: 00124e97;  */

long FUN_00124e00(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 00124e98; end: 00124f0b;  */

undefined8 * FUN_00124e98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 00124f0c; end: 00124f57;  */

undefined8 * FUN_00124f0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 00124f58; end: 001251a7;  */

int FUN_00124f58(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 001251a8; end: 001251e7;  */

void FUN_001251a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af0470 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007da650;
  _swift_getWitnessTable(&UNK_007da650,&UNK_009aeb50);
  puRam0000000000af0470 = puVar1;
  return;
}



/* Entry: 001251e8; end: 00125217;  */

bool FUN_001251e8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 00125218; end: 001252bf;  */

void FUN_00125218(void)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar4 = *(long *)(unaff_x20 + 0x58);
  if (((0 < lVar4) &&
      (pcVar1 = *(char **)(unaff_x20 + 0x28), pcVar1 != *(char **)(unaff_x20 + 0x30))) &&
     ((*pcVar1 == ';' || (*pcVar1 == ',')))) {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_00138a3c();
  }
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x98);
  FUN_00135ce4(&uStack_50,uVar3,*(undefined8 *)(unaff_x20 + 0xa0),*(undefined2 *)(unaff_x20 + 0x60))
  ;
  if ((unaff_x21 == 0) && (((uint)uVar3 & 0xff) != 1)) {
    if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1252c0);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + 0x58) = lVar4 + 1;
  }
  return;
}



/* Entry: 001252c0; end: 001253e3;  */

void FUN_001252c0(float *param_1,uint param_2)

{
  char *pcVar1;
  float *pfVar2;
  undefined1 uVar3;
  long unaff_x20;
  char *pcVar4;
  float fVar5;
  
  pfVar2 = param_1;
  FUN_00138a3c();
  pcVar4 = *(char **)(unaff_x20 + 0x28);
  pcVar1 = *(char **)(unaff_x20 + 0x30);
  if ((pcVar4 == pcVar1) || (*pcVar4 != ':')) {
    uVar3 = 0;
LAB_00125368:
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,pfVar2,0,0);
    *(undefined1 *)pfVar2 = uVar3;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar4 + 1;
    FUN_00138a3c();
    func_0x0013977c();
    if ((param_2 & 0xff) == 1) {
      pcVar4 = *(char **)(unaff_x20 + 0x28);
      if ((pcVar4 != pcVar1) && (*pcVar4 == '-')) {
        *(char **)(unaff_x20 + 0x28) = pcVar4 + 1;
      }
      pfVar2 = (float *)0xae65a8;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
      _swift_initStaticObject();
      FUN_00139918();
      if (((ulong)pfVar2 & 1) == 0) {
        *(char **)(unaff_x20 + 0x28) = pcVar4;
        FUN_001399a8();
        if (((ulong)pfVar2 & 0xff00000000) == 0x100000000) {
          uVar3 = 1;
          goto LAB_00125368;
        }
        fVar5 = SUB84(pfVar2,0);
      }
      else {
        fVar5 = NAN;
      }
    }
    else {
      fVar5 = (float)(double)pfVar2;
    }
    *param_1 = fVar5;
  }
  return;
}



/* Entry: 001253e4; end: 00125503;  */

void FUN_001253e4(undefined4 *param_1,uint param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  long unaff_x20;
  char *pcVar4;
  
  puVar2 = param_1;
  FUN_00138a3c();
  pcVar4 = *(char **)(unaff_x20 + 0x28);
  pcVar1 = *(char **)(unaff_x20 + 0x30);
  if ((pcVar4 == pcVar1) || (*pcVar4 != ':')) {
    uVar3 = 0;
LAB_00125488:
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar2,0,0);
    *(undefined1 *)puVar2 = uVar3;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar4 + 1;
    FUN_00138a3c();
    func_0x0013977c();
    if ((param_2 & 0xff) == 1) {
      pcVar4 = *(char **)(unaff_x20 + 0x28);
      if ((pcVar4 != pcVar1) && (*pcVar4 == '-')) {
        *(char **)(unaff_x20 + 0x28) = pcVar4 + 1;
      }
      puVar2 = (undefined4 *)0xae65a8;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
      _swift_initStaticObject();
      FUN_00139918();
      if (((ulong)puVar2 & 1) == 0) {
        *(char **)(unaff_x20 + 0x28) = pcVar4;
        FUN_001399a8();
        if (((ulong)puVar2 & 0xff00000000) == 0x100000000) {
          uVar3 = 1;
          goto LAB_00125488;
        }
      }
      else {
        puVar2 = (undefined4 *)0x7fc00000;
      }
    }
    else {
      puVar2 = (undefined4 *)(ulong)(uint)(float)(double)puVar2;
    }
    *param_1 = (int)puVar2;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}



/* Entry: 00125504; end: 00125977;  */

void FUN_00125504(double *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  bool bVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 uVar12;
  long unaff_x20;
  double dVar13;
  double dVar14;
  float fVar15;
  
  pdVar7 = param_1;
  FUN_00138a3c();
  pbVar10 = *(byte **)(unaff_x20 + 0x28);
  pbVar3 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar10 == pbVar3) || (*pbVar10 != 0x3a)) {
LAB_001257fc:
    uVar12 = 0;
    goto LAB_00125800;
  }
  *(byte **)(unaff_x20 + 0x28) = pbVar10 + 1;
  FUN_00138a3c();
  uVar9 = (uint)param_2;
  pbVar10 = *(byte **)(unaff_x20 + 0x28);
  if ((pbVar10 != pbVar3) && (*pbVar10 == 0x5b)) {
    *(byte **)(unaff_x20 + 0x28) = pbVar10 + 1;
    FUN_00138a3c();
    bVar5 = true;
    do {
      pdVar6 = (double *)0xae65a8;
      pbVar10 = *(byte **)(unaff_x20 + 0x28);
      if (pbVar10 == pbVar3) {
        if (!bVar5) goto LAB_00125680;
      }
      else {
        bVar4 = *pbVar10;
        if (bVar4 == 0x5d) {
          *(byte **)(unaff_x20 + 0x28) = pbVar10 + 1;
          FUN_00138a3c();
          return;
        }
        if (!bVar5) {
          if (bVar4 < 0x24) {
            do {
              if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
                if ((ulong)bVar4 != 0x23) break;
                pbVar11 = pbVar10 + 1;
                do {
                  pbVar10 = pbVar3;
                  if (pbVar11 == pbVar3) break;
                  pbVar10 = pbVar11 + 1;
                  bVar4 = *pbVar11;
                  pbVar11 = pbVar10;
                } while (bVar4 != 10 && bVar4 != 0xd);
              }
              else {
                pbVar10 = pbVar10 + 1;
              }
              *(byte **)(unaff_x20 + 0x28) = pbVar10;
              if ((pbVar10 == pbVar3) || (bVar4 = *pbVar10, 0x23 < bVar4)) break;
            } while( true );
          }
LAB_00125680:
          if ((pbVar10 != pbVar3) && (*pbVar10 == 0x2c)) {
            do {
              pbVar10 = pbVar10 + 1;
LAB_00125698:
              *(byte **)(unaff_x20 + 0x28) = pbVar10;
              if ((pbVar10 == pbVar3) || (bVar4 = *pbVar10, 0x23 < bVar4)) goto LAB_0012561c;
            } while ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) != 0);
            if ((ulong)bVar4 != 0x23) goto LAB_0012561c;
            pbVar11 = pbVar10 + 1;
            do {
              pbVar10 = pbVar3;
              if (pbVar11 == pbVar3) break;
              pbVar10 = pbVar11 + 1;
              bVar4 = *pbVar11;
              pbVar11 = pbVar10;
            } while (bVar4 != 10 && bVar4 != 0xd);
            goto LAB_00125698;
          }
          goto LAB_001257fc;
        }
      }
LAB_0012561c:
      func_0x0013977c();
      if (((uint)param_2 & 0xff) == 1) {
        pbVar10 = *(byte **)(unaff_x20 + 0x28);
        if ((pbVar10 != pbVar3) && (*pbVar10 == 0x2d)) {
          *(byte **)(unaff_x20 + 0x28) = pbVar10 + 1;
        }
        func_0x000115a8(0xae65a8,&UNK_007cd3b0);
        param_2 = 0xaf04b0;
        pdVar7 = pdVar6;
        _swift_initStaticObject();
        FUN_00139918();
        if (((ulong)pdVar7 & 1) == 0) {
          *(byte **)(unaff_x20 + 0x28) = pbVar10;
          if (pbVar10 == pbVar3) goto LAB_0012590c;
          bVar4 = *pbVar10;
          if (bVar4 == 0x2d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar10 + 1;
          }
          pdVar7 = pdVar6;
          _swift_initStaticObject(pdVar6,0xaf0570);
          param_2 = 0xaf05a0;
          _swift_initStaticObject();
          FUN_00139918();
          if ((((ulong)pdVar7 & 1) == 0) && (FUN_00139918(), ((ulong)pdVar6 & 1) == 0))
          goto LAB_00125930;
          fVar15 = -INFINITY;
          if (bVar4 != 0x2d) {
            fVar15 = INFINITY;
          }
        }
        else {
          fVar15 = NAN;
        }
      }
      else {
        fVar15 = (float)(double)pdVar7;
      }
      dVar14 = *param_1;
      pdVar7 = (double *)dVar14;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)pdVar7 & 1) == 0) {
        param_2 = *(long *)((long)dVar14 + 0x10) + 1;
        pdVar7 = (double *)0x0;
        FUN_000d610c(0,param_2,1,dVar14);
        dVar14 = (double)pdVar7;
      }
      uVar2 = *(ulong *)((long)dVar14 + 0x10);
      lVar1 = uVar2 + 1;
      if (*(ulong *)((long)dVar14 + 0x18) >> 1 <= uVar2) {
        pdVar7 = (double *)(ulong)(1 < *(ulong *)((long)dVar14 + 0x18));
        param_2 = lVar1;
        FUN_000d610c(pdVar7,lVar1,1,dVar14);
        dVar14 = (double)pdVar7;
      }
      bVar5 = false;
      *(long *)((long)dVar14 + 0x10) = lVar1;
      *(float *)((long)dVar14 + uVar2 * 4 + 0x20) = fVar15;
      *param_1 = dVar14;
    } while( true );
  }
  func_0x0013977c();
  if ((uVar9 & 0xff) != 1) {
    fVar15 = (float)(double)pdVar7;
LAB_001258c0:
    dVar13 = *param_1;
    dVar14 = dVar13;
    _swift_isUniquelyReferenced_nonNull_native();
    dVar8 = dVar13;
    if (((ulong)dVar14 & 1) == 0) {
      dVar8 = 0.0;
      FUN_000d610c(0,*(long *)((long)dVar13 + 0x10) + 1,1,dVar13);
    }
    uVar2 = *(ulong *)((long)dVar8 + 0x10);
    dVar14 = dVar8;
    if (*(ulong *)((long)dVar8 + 0x18) >> 1 <= uVar2) {
      dVar14 = (double)(ulong)(1 < *(ulong *)((long)dVar8 + 0x18));
      FUN_000d610c(dVar14,uVar2 + 1,1,dVar8);
    }
    *(ulong *)((long)dVar14 + 0x10) = uVar2 + 1;
    *(float *)((long)dVar14 + uVar2 * 4 + 0x20) = fVar15;
    *param_1 = dVar14;
    return;
  }
  pbVar10 = *(byte **)(unaff_x20 + 0x28);
  if ((pbVar10 != pbVar3) && (*pbVar10 == 0x2d)) {
    *(byte **)(unaff_x20 + 0x28) = pbVar10 + 1;
  }
  pdVar7 = (double *)0xae65a8;
  func_0x000115a8(0xae65a8,&UNK_007cd3b0);
  _swift_initStaticObject();
  FUN_00139918();
  if (((ulong)pdVar7 & 1) != 0) {
    fVar15 = NAN;
    goto LAB_001258c0;
  }
  *(byte **)(unaff_x20 + 0x28) = pbVar10;
  FUN_001399a8();
  if (((ulong)pdVar7 & 0xff00000000) != 0x100000000) {
    fVar15 = SUB84(pdVar7,0);
    goto LAB_001258c0;
  }
LAB_0012590c:
  uVar12 = 1;
LAB_00125800:
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,pdVar7,0,0);
  *(undefined1 *)pdVar7 = uVar12;
  _swift_willThrow();
  return;
LAB_00125930:
  *(byte **)(unaff_x20 + 0x28) = pbVar10;
  pdVar7 = pdVar6;
  goto LAB_0012590c;
}



/* Entry: 00125978; end: 00125a9b;  */

void FUN_00125978(double *param_1,uint param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  long unaff_x20;
  char *pcVar3;
  double *pdVar4;
  
  pdVar4 = param_1;
  FUN_00138a3c();
  pcVar3 = *(char **)(unaff_x20 + 0x28);
  pcVar1 = *(char **)(unaff_x20 + 0x30);
  if ((pcVar3 == pcVar1) || (*pcVar3 != ':')) {
    uVar2 = 0;
LAB_00125a20:
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,pdVar4,0,0);
    *(undefined1 *)pdVar4 = uVar2;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
    FUN_00138a3c();
    func_0x0013977c();
    if ((param_2 & 0xff) == 1) {
      pcVar3 = *(char **)(unaff_x20 + 0x28);
      if ((pcVar3 != pcVar1) && (*pcVar3 == '-')) {
        *(char **)(unaff_x20 + 0x28) = pcVar3 + 1;
      }
      pdVar4 = (double *)0xae65a8;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
      _swift_initStaticObject();
      FUN_00139918();
      if (((ulong)pdVar4 & 1) == 0) {
        *(char **)(unaff_x20 + 0x28) = pcVar3;
        FUN_001399a8();
        if (((ulong)pdVar4 & 0xff00000000) == 0x100000000) {
          uVar2 = 1;
          goto LAB_00125a20;
        }
        pdVar4 = (double *)(double)SUB84(pdVar4,0);
      }
      else {
        pdVar4 = (double *)0x7ff8000000000000;
      }
    }
    *param_1 = (double)pdVar4;
  }
  return;
}



/* Entry: 00125a9c; end: 00125bbb;  */

void FUN_00125a9c(double *param_1,uint param_2)

{
  char *pcVar1;
  double *pdVar2;
  undefined1 uVar3;
  long unaff_x20;
  char *pcVar4;
  
  pdVar2 = param_1;
  FUN_00138a3c();
  pcVar4 = *(char **)(unaff_x20 + 0x28);
  pcVar1 = *(char **)(unaff_x20 + 0x30);
  if ((pcVar4 == pcVar1) || (*pcVar4 != ':')) {
    uVar3 = 0;
LAB_00125b40:
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,pdVar2,0,0);
    *(undefined1 *)pdVar2 = uVar3;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar4 + 1;
    FUN_00138a3c();
    func_0x0013977c();
    if ((param_2 & 0xff) == 1) {
      pcVar4 = *(char **)(unaff_x20 + 0x28);
      if ((pcVar4 != pcVar1) && (*pcVar4 == '-')) {
        *(char **)(unaff_x20 + 0x28) = pcVar4 + 1;
      }
      pdVar2 = (double *)0xae65a8;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
      _swift_initStaticObject();
      FUN_00139918();
      if (((ulong)pdVar2 & 1) == 0) {
        *(char **)(unaff_x20 + 0x28) = pcVar4;
        FUN_001399a8();
        if (((ulong)pdVar2 & 0xff00000000) == 0x100000000) {
          uVar3 = 1;
          goto LAB_00125b40;
        }
        pdVar2 = (double *)(double)SUB84(pdVar2,0);
      }
      else {
        pdVar2 = (double *)0x7ff8000000000000;
      }
    }
    *param_1 = (double)pdVar2;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}



/* Entry: 00125bbc; end: 0012602b;  */

void FUN_00125bbc(ulong *param_1,long param_2)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 uVar11;
  long unaff_x20;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  
  puVar5 = param_1;
  FUN_00138a3c();
  pbVar9 = *(byte **)(unaff_x20 + 0x28);
  pbVar2 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar9 == pbVar2) || (*pbVar9 != 0x3a)) {
LAB_00125eb0:
    uVar11 = 0;
    goto LAB_00125eb4;
  }
  *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
  FUN_00138a3c();
  uVar8 = (uint)param_2;
  pbVar9 = *(byte **)(unaff_x20 + 0x28);
  if ((pbVar9 != pbVar2) && (*pbVar9 == 0x5b)) {
    *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
    FUN_00138a3c();
    bVar4 = true;
    do {
      puVar13 = (undefined1 *)0xae65a8;
      pbVar9 = *(byte **)(unaff_x20 + 0x28);
      if (pbVar9 == pbVar2) {
        if (!bVar4) goto LAB_00125d38;
      }
      else {
        bVar3 = *pbVar9;
        if (bVar3 == 0x5d) {
          *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
          FUN_00138a3c();
          return;
        }
        if (!bVar4) {
          if (bVar3 < 0x24) {
            do {
              if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
                if ((ulong)bVar3 != 0x23) break;
                pbVar10 = pbVar9 + 1;
                do {
                  pbVar9 = pbVar2;
                  if (pbVar10 == pbVar2) break;
                  pbVar9 = pbVar10 + 1;
                  bVar3 = *pbVar10;
                  pbVar10 = pbVar9;
                } while (bVar3 != 10 && bVar3 != 0xd);
              }
              else {
                pbVar9 = pbVar9 + 1;
              }
              *(byte **)(unaff_x20 + 0x28) = pbVar9;
              if ((pbVar9 == pbVar2) || (bVar3 = *pbVar9, 0x23 < bVar3)) break;
            } while( true );
          }
LAB_00125d38:
          if ((pbVar9 != pbVar2) && (*pbVar9 == 0x2c)) {
            do {
              pbVar9 = pbVar9 + 1;
LAB_00125d50:
              *(byte **)(unaff_x20 + 0x28) = pbVar9;
              if ((pbVar9 == pbVar2) || (bVar3 = *pbVar9, 0x23 < bVar3)) goto LAB_00125cd4;
            } while ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0);
            if ((ulong)bVar3 != 0x23) goto LAB_00125cd4;
            pbVar10 = pbVar9 + 1;
            do {
              pbVar9 = pbVar2;
              if (pbVar10 == pbVar2) break;
              pbVar9 = pbVar10 + 1;
              bVar3 = *pbVar10;
              pbVar10 = pbVar9;
            } while (bVar3 != 10 && bVar3 != 0xd);
            goto LAB_00125d50;
          }
          goto LAB_00125eb0;
        }
      }
LAB_00125cd4:
      func_0x0013977c();
      puVar14 = (undefined1 *)puVar5;
      if (((uint)param_2 & 0xff) == 1) {
        pbVar9 = *(byte **)(unaff_x20 + 0x28);
        if ((pbVar9 != pbVar2) && (*pbVar9 == 0x2d)) {
          *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
        }
        func_0x000115a8(0xae65a8,&UNK_007cd3b0);
        param_2 = 0xaf0480;
        puVar5 = (ulong *)puVar13;
        _swift_initStaticObject();
        FUN_00139918();
        if (((ulong)puVar5 & 1) == 0) {
          *(byte **)(unaff_x20 + 0x28) = pbVar9;
          if (pbVar9 == pbVar2) goto LAB_00125fbc;
          bVar3 = *pbVar9;
          if (bVar3 == 0x2d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
          }
          puVar14 = puVar13;
          _swift_initStaticObject(puVar13,0xaf0570);
          param_2 = 0xaf05a0;
          _swift_initStaticObject();
          FUN_00139918();
          if ((((ulong)puVar14 & 1) == 0) && (FUN_00139918(), ((ulong)puVar13 & 1) == 0))
          goto LAB_00125fe4;
          puVar14 = (undefined1 *)0xfff0000000000000;
          if (bVar3 != 0x2d) {
            puVar14 = (undefined1 *)0x7ff0000000000000;
          }
        }
        else {
          puVar14 = (undefined1 *)0x7ff8000000000000;
        }
      }
      puVar13 = (undefined1 *)*param_1;
      puVar5 = (ulong *)puVar13;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar5 & 1) == 0) {
        param_2 = *(long *)(puVar13 + 0x10) + 1;
        puVar5 = (ulong *)0x0;
        func_0x000d620c(0,param_2,1,puVar13);
        puVar13 = (undefined1 *)puVar5;
      }
      uVar6 = *(ulong *)(puVar13 + 0x10);
      lVar1 = uVar6 + 1;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar6) {
        puVar5 = (ulong *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
        param_2 = lVar1;
        func_0x000d620c(puVar5,lVar1,1,puVar13);
        puVar13 = (undefined1 *)puVar5;
      }
      bVar4 = false;
      *(long *)(puVar13 + 0x10) = lVar1;
      *(undefined1 **)(puVar13 + uVar6 * 8 + 0x20) = puVar14;
      *param_1 = (ulong)puVar13;
    } while( true );
  }
  func_0x0013977c();
  if ((uVar8 & 0xff) != 1) {
LAB_00125f70:
    uVar12 = *param_1;
    uVar6 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar7 = uVar12;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      func_0x000d620c(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar12 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x000d620c(uVar12,uVar6 + 1,1,uVar7);
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    *(ulong **)(uVar12 + uVar6 * 8 + 0x20) = puVar5;
    *param_1 = uVar12;
    return;
  }
  pbVar9 = *(byte **)(unaff_x20 + 0x28);
  if ((pbVar9 != pbVar2) && (*pbVar9 == 0x2d)) {
    *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
  }
  puVar5 = (ulong *)0xae65a8;
  func_0x000115a8(0xae65a8,&UNK_007cd3b0);
  _swift_initStaticObject();
  FUN_00139918();
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = (ulong *)0x7ff8000000000000;
    goto LAB_00125f70;
  }
  *(byte **)(unaff_x20 + 0x28) = pbVar9;
  FUN_001399a8();
  if (((ulong)puVar5 & 0xff00000000) != 0x100000000) {
    puVar5 = (ulong *)(double)SUB84(puVar5,0);
    goto LAB_00125f70;
  }
LAB_00125fbc:
  uVar11 = 1;
LAB_00125eb4:
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,puVar5,0,0);
  *(undefined1 *)puVar5 = uVar11;
  _swift_willThrow();
  return;
LAB_00125fe4:
  *(byte **)(unaff_x20 + 0x28) = pbVar9;
  puVar5 = (ulong *)puVar13;
  goto LAB_00125fbc;
}



/* Entry: 0012602c; end: 001260d3;  */

void FUN_0012602c(int *param_1)

{
  char *pcVar1;
  int *piVar2;
  undefined1 uVar3;
  long unaff_x20;
  long unaff_x21;
  
  piVar2 = param_1;
  FUN_00138a3c();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    uVar3 = 0;
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_00138a3c();
    FUN_001363c8();
    if (unaff_x21 != 0) {
      return;
    }
    if (piVar2 == (int *)(long)(int)piVar2) {
      *param_1 = (int)piVar2;
      return;
    }
    uVar3 = 1;
  }
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,piVar2,0,0);
  *(undefined1 *)piVar2 = uVar3;
  _swift_willThrow();
  return;
}



/* Entry: 001260d4; end: 0012617f;  */

void FUN_001260d4(int *param_1)

{
  char *pcVar1;
  int *piVar2;
  undefined1 uVar3;
  long unaff_x20;
  long unaff_x21;
  
  piVar2 = param_1;
  FUN_00138a3c();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    uVar3 = 0;
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_00138a3c();
    FUN_001363c8();
    if (unaff_x21 != 0) {
      return;
    }
    if (piVar2 == (int *)(long)(int)piVar2) {
      *param_1 = (int)piVar2;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
    uVar3 = 1;
  }
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,piVar2,0,0);
  *(undefined1 *)piVar2 = uVar3;
  _swift_willThrow();
  return;
}



/* Entry: 00126180; end: 001264e3;  */

void FUN_00126180(ulong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 uVar9;
  long unaff_x20;
  ulong uVar10;
  long unaff_x21;
  ulong *puVar11;
  ulong *puVar12;
  
  puVar4 = param_1;
  FUN_00138a3c();
  pbVar7 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar7 == pbVar1) || (*pbVar7 != 0x3a)) {
LAB_001263e8:
    uVar9 = 0;
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
    FUN_00138a3c();
    pbVar7 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar7 != pbVar1) && (*pbVar7 == 0x5b)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
      FUN_00138a3c();
      bVar3 = true;
      do {
        pbVar7 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar7 == pbVar1) {
          if (!bVar3) goto LAB_001262d4;
        }
        else {
          bVar2 = *pbVar7;
          if (bVar2 == 0x5d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar7 + 1;
            FUN_00138a3c();
            return;
          }
          if (!bVar3) {
            if (bVar2 < 0x24) {
              do {
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) break;
                  pbVar8 = pbVar7 + 1;
                  while (pbVar7 = pbVar1, pbVar8 != pbVar1) {
                    pbVar7 = pbVar8 + 1;
                    bVar2 = *pbVar8;
                    if ((bVar2 == 10) || (pbVar8 = pbVar7, bVar2 == 0xd)) break;
                  }
                }
                else {
                  pbVar7 = pbVar7 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar7;
                if ((pbVar7 == pbVar1) || (bVar2 = *pbVar7, 0x23 < bVar2)) break;
              } while( true );
            }
LAB_001262d4:
            if ((pbVar7 != pbVar1) && (*pbVar7 == 0x2c)) {
              do {
                pbVar7 = pbVar7 + 1;
LAB_001262ec:
                *(byte **)(unaff_x20 + 0x28) = pbVar7;
                if ((pbVar7 == pbVar1) || (bVar2 = *pbVar7, 0x23 < bVar2)) goto LAB_00126288;
              } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
              if ((ulong)bVar2 != 0x23) goto LAB_00126288;
              pbVar8 = pbVar7 + 1;
              while (pbVar7 = pbVar1, pbVar8 != pbVar1) {
                pbVar7 = pbVar8 + 1;
                bVar2 = *pbVar8;
                if ((bVar2 == 10) || (pbVar8 = pbVar7, bVar2 == 0xd)) break;
              }
              goto LAB_001262ec;
            }
            goto LAB_001263e8;
          }
        }
LAB_00126288:
        if (pbVar7 == pbVar1) goto LAB_00126450;
        pbVar8 = pbVar7 + 1;
        if (*pbVar7 == 0x2d) {
          *(byte **)(unaff_x20 + 0x28) = pbVar8;
          if ((pbVar8 == pbVar1) || (*pbVar8 - 0x3a < 0xfffffff6)) goto LAB_00126450;
          FUN_00136484();
          if (unaff_x21 != 0) {
            return;
          }
          if ((long)puVar4 < 0) goto LAB_00126450;
          puVar11 = (ulong *)-(long)puVar4;
        }
        else {
          FUN_00136484();
          if (unaff_x21 != 0) {
            return;
          }
          puVar11 = puVar4;
          if ((long)puVar4 < 0) goto LAB_00126450;
        }
        if (puVar11 != (ulong *)(long)(int)puVar11) goto LAB_00126450;
        puVar12 = (ulong *)*param_1;
        puVar4 = puVar12;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar4 & 1) == 0) {
          puVar4 = (ulong *)0x0;
          FUN_000d60f8(0,puVar12[2] + 1,1,puVar12);
          puVar12 = puVar4;
        }
        uVar5 = puVar12[2];
        if (puVar12[3] >> 1 <= uVar5) {
          puVar4 = (ulong *)(ulong)(1 < puVar12[3]);
          FUN_000d60f8(puVar4,uVar5 + 1,1,puVar12);
          puVar12 = puVar4;
        }
        bVar3 = false;
        puVar12[2] = uVar5 + 1;
        *(int *)((long)puVar12 + uVar5 * 4 + 0x20) = (int)puVar11;
        *param_1 = (ulong)puVar12;
      } while( true );
    }
    FUN_001363c8();
    if (unaff_x21 != 0) {
      return;
    }
    if (puVar4 == (ulong *)(long)(int)puVar4) {
      uVar10 = *param_1;
      uVar5 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar6 = uVar10;
      if ((uVar5 & 1) == 0) {
        uVar6 = 0;
        FUN_000d60f8(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar5 = *(ulong *)(uVar6 + 0x10);
      uVar10 = uVar6;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_000d60f8(uVar10,uVar5 + 1,1,uVar6);
      }
      *(ulong *)(uVar10 + 0x10) = uVar5 + 1;
      *(int *)(uVar10 + uVar5 * 4 + 0x20) = (int)puVar4;
      *param_1 = uVar10;
      return;
    }
LAB_00126450:
    uVar9 = 1;
  }
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,puVar4,0,0);
  *(undefined1 *)puVar4 = uVar9;
  _swift_willThrow();
  return;
}



/* Entry: 001264e4; end: 00126853;  */

void FUN_001264e4(ulong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 uVar10;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  
  puVar11 = param_1;
  FUN_00138a3c();
  pbVar8 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar8 != pbVar1) && (*pbVar8 == 0x3a)) {
    *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
    FUN_00138a3c();
    pbVar8 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar8 == pbVar1) || (*pbVar8 != 0x5b)) {
      FUN_001363c8();
      if (unaff_x21 != 0) {
        return;
      }
      uVar12 = *param_1;
      uVar6 = uVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = uVar12;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        func_0x000b9888(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar12 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        func_0x000b9888(uVar12,uVar6 + 1,1,uVar7);
      }
      *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
      *(ulong **)(uVar12 + uVar6 * 8 + 0x20) = puVar11;
      *param_1 = uVar12;
      return;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
    FUN_00138a3c();
    bVar3 = true;
    do {
      pbVar8 = *(byte **)(unaff_x20 + 0x28);
      if (pbVar8 == pbVar1) {
        if (!bVar3) goto LAB_00126638;
      }
      else {
        bVar2 = *pbVar8;
        if (bVar2 == 0x5d) {
          *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
          FUN_00138a3c();
          return;
        }
        if (!bVar3) {
          if (bVar2 < 0x24) {
            do {
              if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                if ((ulong)bVar2 != 0x23) break;
                pbVar9 = pbVar8 + 1;
                while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
                  pbVar8 = pbVar9 + 1;
                  bVar2 = *pbVar9;
                  if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
                }
              }
              else {
                pbVar8 = pbVar8 + 1;
              }
              *(byte **)(unaff_x20 + 0x28) = pbVar8;
              if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) break;
            } while( true );
          }
LAB_00126638:
          if ((pbVar8 != pbVar1) && (*pbVar8 == 0x2c)) {
            do {
              pbVar8 = pbVar8 + 1;
LAB_00126650:
              *(byte **)(unaff_x20 + 0x28) = pbVar8;
              if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) goto LAB_001265ec;
            } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
            if ((ulong)bVar2 != 0x23) goto LAB_001265ec;
            pbVar9 = pbVar8 + 1;
            while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
              pbVar8 = pbVar9 + 1;
              bVar2 = *pbVar9;
              if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
            }
            goto LAB_00126650;
          }
          break;
        }
      }
LAB_001265ec:
      if (pbVar8 == pbVar1) goto LAB_001267fc;
      pbVar9 = pbVar8 + 1;
      if (*pbVar8 == 0x2d) {
        *(byte **)(unaff_x20 + 0x28) = pbVar9;
        if ((pbVar9 == pbVar1) || (*pbVar9 - 0x3a < 0xfffffff6)) goto LAB_001267fc;
        FUN_00136484();
        if (unaff_x21 != 0) {
          return;
        }
        if (-1 < (long)puVar11) {
          puVar11 = (ulong *)-(long)puVar11;
          goto LAB_001266c8;
        }
        if (puVar11 != (ulong *)0x8000000000000000) goto LAB_001267fc;
        puVar13 = (ulong *)*param_1;
        puVar11 = puVar13;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar4 = (ulong *)0x8000000000000000;
      }
      else {
        FUN_00136484();
        if (unaff_x21 != 0) {
          return;
        }
        if ((long)puVar11 < 0) goto LAB_001267fc;
LAB_001266c8:
        puVar13 = (ulong *)*param_1;
        puVar5 = puVar13;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar4 = puVar11;
        puVar11 = puVar5;
      }
      if (((ulong)puVar11 & 1) == 0) {
        puVar11 = (ulong *)0x0;
        func_0x000b9888(0,puVar13[2] + 1,1,puVar13);
        puVar13 = puVar11;
      }
      uVar6 = puVar13[2];
      if (puVar13[3] >> 1 <= uVar6) {
        puVar11 = (ulong *)(ulong)(1 < puVar13[3]);
        func_0x000b9888(puVar11,uVar6 + 1,1,puVar13);
        puVar13 = puVar11;
      }
      bVar3 = false;
      puVar13[2] = uVar6 + 1;
      puVar13[uVar6 + 4] = (ulong)puVar4;
      *param_1 = (ulong)puVar13;
    } while( true );
  }
  uVar10 = 0;
LAB_00126768:
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,puVar11,0,0);
  *(undefined1 *)puVar11 = uVar10;
  _swift_willThrow();
  return;
LAB_001267fc:
  uVar10 = 1;
  goto LAB_00126768;
}



/* Entry: 00126854; end: 001268fb;  */

void FUN_00126854(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  long unaff_x20;
  long unaff_x21;
  
  puVar2 = param_1;
  FUN_00138a3c();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    uVar3 = 0;
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_00138a3c();
    FUN_00136484();
    if (unaff_x21 != 0) {
      return;
    }
    if ((ulong)puVar2 >> 0x20 == 0) {
      *param_1 = (int)puVar2;
      return;
    }
    uVar3 = 1;
  }
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,puVar2,0,0);
  *(undefined1 *)puVar2 = uVar3;
  _swift_willThrow();
  return;
}



/* Entry: 001268fc; end: 001269a7;  */

void FUN_001268fc(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  long unaff_x20;
  long unaff_x21;
  
  puVar2 = param_1;
  FUN_00138a3c();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    uVar3 = 0;
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_00138a3c();
    FUN_00136484();
    if (unaff_x21 != 0) {
      return;
    }
    if ((ulong)puVar2 >> 0x20 == 0) {
      *param_1 = (int)puVar2;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
    uVar3 = 1;
  }
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,puVar2,0,0);
  *(undefined1 *)puVar2 = uVar3;
  _swift_willThrow();
  return;
}



/* Entry: 001269a8; end: 00126cbb;  */

void FUN_001269a8(ulong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 uVar10;
  long unaff_x20;
  ulong uVar11;
  long unaff_x21;
  undefined1 *puVar12;
  
  puVar4 = param_1;
  FUN_00138a3c();
  pbVar8 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar8 == pbVar1) || (*pbVar8 != 0x3a)) {
LAB_00126bc0:
    uVar10 = 0;
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
    FUN_00138a3c();
    pbVar8 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar8 != pbVar1) && (*pbVar8 == 0x5b)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
      FUN_00138a3c();
      bVar3 = true;
      do {
        pbVar8 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar8 == pbVar1) {
          if (!bVar3) goto LAB_00126b08;
        }
        else {
          bVar2 = *pbVar8;
          if (bVar2 == 0x5d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
            FUN_00138a3c();
            return;
          }
          if (!bVar3) {
            if (bVar2 < 0x24) {
              do {
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) break;
                  pbVar9 = pbVar8 + 1;
                  while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
                    pbVar8 = pbVar9 + 1;
                    bVar2 = *pbVar9;
                    if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
                  }
                }
                else {
                  pbVar8 = pbVar8 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) break;
              } while( true );
            }
LAB_00126b08:
            if ((pbVar8 != pbVar1) && (*pbVar8 == 0x2c)) {
              do {
                pbVar8 = pbVar8 + 1;
LAB_00126b20:
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) goto LAB_00126ab0;
              } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
              if ((ulong)bVar2 != 0x23) goto LAB_00126ab0;
              pbVar9 = pbVar8 + 1;
              while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
                pbVar8 = pbVar9 + 1;
                bVar2 = *pbVar9;
                if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
              }
              goto LAB_00126b20;
            }
            goto LAB_00126bc0;
          }
        }
LAB_00126ab0:
        FUN_00136484();
        if (unaff_x21 != 0) {
          return;
        }
        if ((ulong)puVar4 >> 0x20 != 0) goto LAB_00126c28;
        puVar12 = (undefined1 *)*param_1;
        puVar5 = puVar12;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar5 & 1) == 0) {
          puVar5 = (undefined1 *)0x0;
          FUN_000d630c(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
          puVar12 = puVar5;
        }
        uVar6 = *(ulong *)(puVar12 + 0x10);
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar6) {
          puVar5 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
          FUN_000d630c(puVar5,uVar6 + 1,1,puVar12);
          puVar12 = puVar5;
        }
        bVar3 = false;
        *(ulong *)(puVar12 + 0x10) = uVar6 + 1;
        *(int *)(puVar12 + uVar6 * 4 + 0x20) = (int)puVar4;
        *param_1 = (ulong)puVar12;
        puVar4 = (ulong *)puVar5;
      } while( true );
    }
    FUN_00136484();
    if (unaff_x21 != 0) {
      return;
    }
    if ((ulong)puVar4 >> 0x20 == 0) {
      uVar11 = *param_1;
      uVar6 = uVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = uVar11;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        FUN_000d630c(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar11 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_000d630c(uVar11,uVar6 + 1,1,uVar7);
      }
      *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
      *(int *)(uVar11 + uVar6 * 4 + 0x20) = (int)puVar4;
      *param_1 = uVar11;
      return;
    }
LAB_00126c28:
    uVar10 = 1;
  }
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,puVar4,0,0);
  *(undefined1 *)puVar4 = uVar10;
  _swift_willThrow();
  return;
}



/* Entry: 00126cbc; end: 00126d53;  */

void FUN_00126cbc(undefined8 *param_1,code *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  long unaff_x20;
  long unaff_x21;
  
  puVar2 = param_1;
  FUN_00138a3c();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar2,0,0);
    *(undefined1 *)puVar2 = 0;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_00138a3c();
    (*param_2)();
    if (unaff_x21 == 0) {
      *param_1 = puVar2;
    }
  }
  return;
}



/* Entry: 00126d54; end: 00126def;  */

void FUN_00126d54(undefined8 *param_1,code *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  long unaff_x20;
  long unaff_x21;
  
  puVar2 = param_1;
  FUN_00138a3c();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar2,0,0);
    *(undefined1 *)puVar2 = 0;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_00138a3c();
    (*param_2)();
    if (unaff_x21 == 0) {
      *param_1 = puVar2;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  return;
}



/* Entry: 00126df0; end: 001270e3;  */

void FUN_00126df0(ulong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long unaff_x20;
  long unaff_x21;
  ulong uVar10;
  ulong *puVar11;
  
  puVar4 = param_1;
  FUN_00138a3c();
  pbVar8 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar8 == pbVar1) || (*pbVar8 != 0x3a)) {
LAB_00127000:
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar4,0,0);
    *(undefined1 *)puVar4 = 0;
    _swift_willThrow();
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
    FUN_00138a3c();
    pbVar8 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar8 != pbVar1) && (*pbVar8 == 0x5b)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
      FUN_00138a3c();
      bVar3 = true;
      do {
        pbVar8 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar8 == pbVar1) {
          if (!bVar3) goto LAB_00126f48;
        }
        else {
          bVar2 = *pbVar8;
          if (bVar2 == 0x5d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
            FUN_00138a3c();
            return;
          }
          if (!bVar3) {
            if (bVar2 < 0x24) {
              do {
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) break;
                  pbVar9 = pbVar8 + 1;
                  while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
                    pbVar8 = pbVar9 + 1;
                    bVar2 = *pbVar9;
                    if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
                  }
                }
                else {
                  pbVar8 = pbVar8 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) break;
              } while( true );
            }
LAB_00126f48:
            if ((pbVar8 != pbVar1) && (*pbVar8 == 0x2c)) {
              do {
                pbVar8 = pbVar8 + 1;
LAB_00126f60:
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) goto LAB_00126ef8;
              } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
              if ((ulong)bVar2 != 0x23) goto LAB_00126ef8;
              pbVar9 = pbVar8 + 1;
              while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
                pbVar8 = pbVar9 + 1;
                bVar2 = *pbVar9;
                if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
              }
              goto LAB_00126f60;
            }
            goto LAB_00127000;
          }
        }
LAB_00126ef8:
        FUN_00136484();
        if (unaff_x21 != 0) {
          return;
        }
        puVar11 = (ulong *)*param_1;
        puVar5 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar5 & 1) == 0) {
          puVar5 = (ulong *)0x0;
          FUN_000d6418(0,puVar11[2] + 1,1,puVar11);
          puVar11 = puVar5;
        }
        uVar6 = puVar11[2];
        if (puVar11[3] >> 1 <= uVar6) {
          puVar5 = (ulong *)(ulong)(1 < puVar11[3]);
          FUN_000d6418(puVar5,uVar6 + 1,1,puVar11);
          puVar11 = puVar5;
        }
        bVar3 = false;
        puVar11[2] = uVar6 + 1;
        puVar11[uVar6 + 4] = (ulong)puVar4;
        *param_1 = (ulong)puVar11;
        puVar4 = puVar5;
      } while( true );
    }
    FUN_00136484();
    if (unaff_x21 == 0) {
      uVar10 = *param_1;
      uVar6 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = uVar10;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        FUN_000d6418(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar10 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_000d6418(uVar10,uVar6 + 1,1,uVar7);
      }
      *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
      *(ulong **)(uVar10 + uVar6 * 8 + 0x20) = puVar4;
      *param_1 = uVar10;
    }
  }
  return;
}



/* Entry: 001270e4; end: 0012717b;  */

void FUN_001270e4(byte *param_1)

{
  char *pcVar1;
  byte bVar2;
  byte *pbVar3;
  long unaff_x20;
  long unaff_x21;
  
  pbVar3 = param_1;
  FUN_00138a3c();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,pbVar3,0,0);
    *pbVar3 = 0;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_00138a3c();
    bVar2 = (byte)pbVar3;
    FUN_0013662c();
    if (unaff_x21 == 0) {
      *param_1 = bVar2 & 1;
    }
  }
  return;
}



/* Entry: 0012717c; end: 00127477;  */

void FUN_0012717c(ulong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long unaff_x20;
  long unaff_x21;
  ulong uVar10;
  ulong *puVar11;
  
  puVar4 = param_1;
  FUN_00138a3c();
  pbVar8 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar8 == pbVar1) || (*pbVar8 != 0x3a)) {
LAB_00127390:
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar4,0,0);
    *(undefined1 *)puVar4 = 0;
    _swift_willThrow();
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
    FUN_00138a3c();
    pbVar8 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar8 != pbVar1) && (*pbVar8 == 0x5b)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
      FUN_00138a3c();
      bVar3 = true;
      do {
        pbVar8 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar8 == pbVar1) {
          if (!bVar3) goto LAB_001272d8;
        }
        else {
          bVar2 = *pbVar8;
          if (bVar2 == 0x5d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
            FUN_00138a3c();
            return;
          }
          if (!bVar3) {
            if (bVar2 < 0x24) {
              do {
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar2 != 0x23) break;
                  pbVar9 = pbVar8 + 1;
                  while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
                    pbVar8 = pbVar9 + 1;
                    bVar2 = *pbVar9;
                    if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
                  }
                }
                else {
                  pbVar8 = pbVar8 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) break;
              } while( true );
            }
LAB_001272d8:
            if ((pbVar8 != pbVar1) && (*pbVar8 == 0x2c)) {
              do {
                pbVar8 = pbVar8 + 1;
LAB_001272f0:
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar1) || (bVar2 = *pbVar8, 0x23 < bVar2)) goto LAB_00127284;
              } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0);
              if ((ulong)bVar2 != 0x23) goto LAB_00127284;
              pbVar9 = pbVar8 + 1;
              while (pbVar8 = pbVar1, pbVar9 != pbVar1) {
                pbVar8 = pbVar9 + 1;
                bVar2 = *pbVar9;
                if ((bVar2 == 10) || (pbVar9 = pbVar8, bVar2 == 0xd)) break;
              }
              goto LAB_001272f0;
            }
            goto LAB_00127390;
          }
        }
LAB_00127284:
        FUN_0013662c();
        if (unaff_x21 != 0) {
          return;
        }
        puVar11 = (ulong *)*param_1;
        puVar5 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar5 & 1) == 0) {
          puVar5 = (ulong *)0x0;
          FUN_000d642c(0,puVar11[2] + 1,1,puVar11);
          puVar11 = puVar5;
        }
        uVar6 = puVar11[2];
        if (puVar11[3] >> 1 <= uVar6) {
          puVar5 = (ulong *)(ulong)(1 < puVar11[3]);
          FUN_000d642c(puVar5,uVar6 + 1,1,puVar11);
          puVar11 = puVar5;
        }
        bVar3 = false;
        puVar11[2] = uVar6 + 1;
        *(byte *)((long)puVar11 + uVar6 + 0x20) = (byte)puVar4 & 1;
        *param_1 = (ulong)puVar11;
        puVar4 = puVar5;
      } while( true );
    }
    FUN_0013662c();
    if (unaff_x21 == 0) {
      uVar10 = *param_1;
      uVar6 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = uVar10;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        FUN_000d642c(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar10 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_000d642c(uVar10,uVar6 + 1,1,uVar7);
      }
      *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
      *(byte *)(uVar10 + uVar6 + 0x20) = (byte)puVar4 & 1;
      *param_1 = uVar10;
    }
  }
  return;
}



/* Entry: 00127478; end: 0012751b;  */

void FUN_00127478(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  long unaff_x20;
  long unaff_x21;
  
  puVar2 = param_1;
  FUN_00138a3c();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar2,0,0);
    *(undefined1 *)puVar2 = 0;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_00138a3c();
    FUN_00136880();
    if (unaff_x21 == 0) {
      _swift_bridgeObjectRelease(param_1[1]);
      *param_1 = puVar2;
      param_1[1] = param_2;
    }
  }
  return;
}



/* Entry: 0012751c; end: 001275bf;  */

void FUN_0012751c(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  long unaff_x20;
  long unaff_x21;
  
  puVar2 = param_1;
  FUN_00138a3c();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar2,0,0);
    *(undefined1 *)puVar2 = 0;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_00138a3c();
    FUN_00136880();
    if (unaff_x21 == 0) {
      _swift_bridgeObjectRelease(param_1[1]);
      *param_1 = puVar2;
      param_1[1] = param_2;
    }
  }
  return;
}



/* Entry: 001275c0; end: 001278d7;  */

void FUN_001275c0(ulong *param_1,ulong param_2)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long unaff_x20;
  long unaff_x21;
  ulong uVar11;
  ulong *puVar12;
  
  puVar5 = param_1;
  FUN_00138a3c();
  pbVar9 = *(byte **)(unaff_x20 + 0x28);
  pbVar2 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar9 == pbVar2) || (*pbVar9 != 0x3a)) {
LAB_001277e4:
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar5,0,0);
    *(undefined1 *)puVar5 = 0;
    _swift_willThrow();
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
    FUN_00138a3c();
    pbVar9 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar9 != pbVar2) && (*pbVar9 == 0x5b)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
      FUN_00138a3c();
      bVar4 = true;
      do {
        pbVar9 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar9 == pbVar2) {
          if (!bVar4) goto LAB_0012772c;
        }
        else {
          bVar3 = *pbVar9;
          if (bVar3 == 0x5d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar9 + 1;
            FUN_00138a3c();
            return;
          }
          if (!bVar4) {
            if (bVar3 < 0x24) {
              do {
                if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar3 != 0x23) break;
                  pbVar10 = pbVar9 + 1;
                  while (pbVar9 = pbVar2, pbVar10 != pbVar2) {
                    pbVar9 = pbVar10 + 1;
                    bVar3 = *pbVar10;
                    if ((bVar3 == 10) || (pbVar10 = pbVar9, bVar3 == 0xd)) break;
                  }
                }
                else {
                  pbVar9 = pbVar9 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar9;
                if ((pbVar9 == pbVar2) || (bVar3 = *pbVar9, 0x23 < bVar3)) break;
              } while( true );
            }
LAB_0012772c:
            if ((pbVar9 != pbVar2) && (*pbVar9 == 0x2c)) {
              do {
                pbVar9 = pbVar9 + 1;
LAB_00127744:
                *(byte **)(unaff_x20 + 0x28) = pbVar9;
                if ((pbVar9 == pbVar2) || (bVar3 = *pbVar9, 0x23 < bVar3)) goto LAB_001276cc;
              } while ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0);
              if ((ulong)bVar3 != 0x23) goto LAB_001276cc;
              pbVar10 = pbVar9 + 1;
              while (pbVar9 = pbVar2, pbVar10 != pbVar2) {
                pbVar9 = pbVar10 + 1;
                bVar3 = *pbVar10;
                if ((bVar3 == 10) || (pbVar10 = pbVar9, bVar3 == 0xd)) break;
              }
              goto LAB_00127744;
            }
            goto LAB_001277e4;
          }
        }
LAB_001276cc:
        FUN_00136880();
        if (unaff_x21 != 0) {
          return;
        }
        puVar12 = (ulong *)*param_1;
        puVar6 = puVar12;
        uVar7 = param_2;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar6 & 1) == 0) {
          uVar7 = puVar12[2] + 1;
          puVar6 = (ulong *)0x0;
          FUN_0002a0e4(0,uVar7,1,puVar12);
          puVar12 = puVar6;
        }
        uVar11 = puVar12[2];
        uVar8 = uVar11 + 1;
        if (puVar12[3] >> 1 <= uVar11) {
          puVar6 = (ulong *)(ulong)(1 < puVar12[3]);
          uVar7 = uVar8;
          FUN_0002a0e4(puVar6,uVar8,1,puVar12);
          puVar12 = puVar6;
        }
        bVar4 = false;
        puVar12[2] = uVar8;
        puVar12[uVar11 * 2 + 4] = (ulong)puVar5;
        puVar12[uVar11 * 2 + 5] = param_2;
        *param_1 = (ulong)puVar12;
        puVar5 = puVar6;
        param_2 = uVar7;
      } while( true );
    }
    FUN_00136880();
    if (unaff_x21 == 0) {
      uVar11 = *param_1;
      uVar7 = uVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar8 = uVar11;
      if ((uVar7 & 1) == 0) {
        uVar8 = 0;
        FUN_0002a0e4(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
      }
      uVar7 = *(ulong *)(uVar8 + 0x10);
      uVar11 = uVar8;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar7) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_0002a0e4(uVar11,uVar7 + 1,1,uVar8);
      }
      *(ulong *)(uVar11 + 0x10) = uVar7 + 1;
      lVar1 = uVar11 + uVar7 * 0x10;
      *(ulong **)(lVar1 + 0x20) = puVar5;
      *(ulong *)(lVar1 + 0x28) = param_2;
      *param_1 = uVar11;
    }
  }
  return;
}



/* Entry: 001278d8; end: 00127987;  */

void FUN_001278d8(undefined8 *param_1,code *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  
  puVar2 = param_1;
  pcVar3 = param_2;
  FUN_00138a3c();
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if ((pcVar1 == *(char **)(unaff_x20 + 0x30)) || (*pcVar1 != ':')) {
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar2,0,0);
    *(undefined1 *)puVar2 = 0;
    _swift_willThrow();
  }
  else {
    *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    FUN_00138a3c();
    FUN_00136a64();
    if (unaff_x21 == 0) {
      (*param_2)(*param_1,param_1[1]);
      *param_1 = puVar2;
      param_1[1] = pcVar3;
    }
  }
  return;
}



/* Entry: 00127988; end: 00127cbb;  */

void FUN_00127988(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long unaff_x20;
  long unaff_x21;
  ulong uVar10;
  
  puVar5 = param_1;
  FUN_00138a3c();
  pbVar8 = *(byte **)(unaff_x20 + 0x28);
  pbVar2 = *(byte **)(unaff_x20 + 0x30);
  if ((pbVar8 == pbVar2) || (*pbVar8 != 0x3a)) {
LAB_00127bb4:
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,puVar5,0,0);
    *(undefined1 *)puVar5 = 0;
    _swift_willThrow();
  }
  else {
    *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
    FUN_00138a3c();
    pbVar8 = *(byte **)(unaff_x20 + 0x28);
    if ((pbVar8 != pbVar2) && (*pbVar8 == 0x5b)) {
      *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
      FUN_00138a3c();
      bVar4 = true;
      do {
        pbVar8 = *(byte **)(unaff_x20 + 0x28);
        if (pbVar8 == pbVar2) {
          if (!bVar4) goto LAB_00127afc;
        }
        else {
          bVar3 = *pbVar8;
          if (bVar3 == 0x5d) {
            *(byte **)(unaff_x20 + 0x28) = pbVar8 + 1;
            FUN_00138a3c();
            return;
          }
          if (!bVar4) {
            if (bVar3 < 0x24) {
              do {
                if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
                  if ((ulong)bVar3 != 0x23) break;
                  pbVar9 = pbVar8 + 1;
                  while (pbVar8 = pbVar2, pbVar9 != pbVar2) {
                    pbVar8 = pbVar9 + 1;
                    bVar3 = *pbVar9;
                    if ((bVar3 == 10) || (pbVar9 = pbVar8, bVar3 == 0xd)) break;
                  }
                }
                else {
                  pbVar8 = pbVar8 + 1;
                }
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar2) || (bVar3 = *pbVar8, 0x23 < bVar3)) break;
              } while( true );
            }
LAB_00127afc:
            if ((pbVar8 != pbVar2) && (*pbVar8 == 0x2c)) {
              do {
                pbVar8 = pbVar8 + 1;
LAB_00127b14:
                *(byte **)(unaff_x20 + 0x28) = pbVar8;
                if ((pbVar8 == pbVar2) || (bVar3 = *pbVar8, 0x23 < bVar3)) goto LAB_00127a94;
              } while ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0);
              if ((ulong)bVar3 != 0x23) goto LAB_00127a94;
              pbVar9 = pbVar8 + 1;
              while (pbVar8 = pbVar2, pbVar9 != pbVar2) {
                pbVar8 = pbVar9 + 1;
                bVar3 = *pbVar9;
                if ((bVar3 == 10) || (pbVar9 = pbVar8, bVar3 == 0xd)) break;
              }
              goto LAB_00127b14;
            }
            goto LAB_00127bb4;
          }
        }
LAB_00127a94:
        FUN_00136a64();
        if (unaff_x21 != 0) {
          return;
        }
        uVar10 = *param_1;
        func_0x00023304();
        uVar7 = uVar10;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar6 = uVar10;
        if ((uVar7 & 1) == 0) {
          uVar6 = 0;
          func_0x000d651c(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
        }
        uVar7 = *(ulong *)(uVar6 + 0x10);
        uVar10 = uVar6;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar7) {
          uVar10 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
          func_0x000d651c(uVar10,uVar7 + 1,1,uVar6);
        }
        *(ulong *)(uVar10 + 0x10) = uVar7 + 1;
        lVar1 = uVar10 + uVar7 * 0x10;
        *(ulong **)(lVar1 + 0x20) = puVar5;
        *(undefined8 *)(lVar1 + 0x28) = param_2;
        FUN_00023358();
        bVar4 = false;
        *param_1 = uVar10;
      } while( true );
    }
    FUN_00136a64();
    if (unaff_x21 == 0) {
      uVar10 = *param_1;
      func_0x00023304();
      uVar7 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar6 = uVar10;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0;
        func_0x000d651c(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar7 = *(ulong *)(uVar6 + 0x10);
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar7) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        func_0x000d651c(uVar10,uVar7 + 1,1,uVar6);
        uVar6 = uVar10;
      }
      *(ulong *)(uVar6 + 0x10) = uVar7 + 1;
      lVar1 = uVar6 + uVar7 * 0x10;
      *(ulong **)(lVar1 + 0x20) = puVar5;
      *(undefined8 *)(lVar1 + 0x28) = param_2;
      FUN_00023358();
      *param_1 = uVar6;
    }
  }
  return;
}



/* Entry: 00127cbc; end: 00127f17;  */

void FUN_00127cbc(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar4;
  code *pcVar5;
  long unaff_x21;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar2 = (undefined1 *)0x0;
  uStack_70 = param_1;
  lStack_68 = param_3;
  __sSqMa(0,param_2);
  lVar6 = *(long *)(puVar2 + -8);
  puVar3 = puVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar8 = puVar7 + -extraout_x12;
  lVar9 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  lVar4 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar4 - extraout_x12_00;
  FUN_00136d1c();
  lVar1 = lStack_68;
  if (unaff_x21 != 0) {
    return;
  }
  lStack_78 = lVar4;
  if ((param_4 & 0xff) == 1) {
    FUN_001363c8();
    if (puVar3 != (undefined1 *)(long)(int)puVar3) {
      FUN_000c723c();
      _swift_allocError(&UNK_009aeed8,puVar3,0,0);
      *puVar3 = 0;
      goto LAB_00127f08;
    }
    (**(code **)(lVar1 + 0x20))(puVar7);
    puVar3 = puVar7;
    (**(code **)(lVar9 + 0x30))(puVar7,1,param_2);
    lVar10 = lStack_78;
    puVar8 = puVar7;
    if ((int)puVar3 != 1) {
      pcVar5 = *(code **)(lVar9 + 0x20);
      (*pcVar5)(lStack_78,puVar7,param_2);
      goto LAB_00127ed4;
    }
  }
  else {
    func_0x000e0258(puVar8);
    puVar3 = puVar8;
    (**(code **)(lVar9 + 0x30))(puVar8,1,param_2);
    if ((int)puVar3 != 1) {
      pcVar5 = *(code **)(lVar9 + 0x20);
      (*pcVar5)(lVar10,puVar8,param_2);
LAB_00127ed4:
      (*pcVar5)(uStack_70,lVar10,param_2);
      return;
    }
  }
  (**(code **)(lVar6 + 8))(puVar8,puVar2);
  FUN_000c723c();
  _swift_allocError(&UNK_009aeed8,puVar8,0,0);
  *puVar8 = 8;
LAB_00127f08:
  _swift_willThrow();
  return;
}


