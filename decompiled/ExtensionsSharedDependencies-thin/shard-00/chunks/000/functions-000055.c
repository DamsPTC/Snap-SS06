/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00115db4; end: 00115e37;  */

ulong FUN_00115db4(int *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *unaff_x20;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if ((int)*unaff_x20 != *param_1) {
    return 0;
  }
  uVar6 = unaff_x20[1];
  pbVar9 = (byte *)unaff_x20[2];
  lVar11 = *(long *)(param_1 + 2);
  uVar8 = *(ulong *)(param_1 + 4);
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar9 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar9 >> 0x3e == 3) {
    uVar14 = 0;
    if ((((uVar6 != 0) || (pbVar9 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar14 = 0, lVar11 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar12 == 0) {
        uVar14 = (ulong)pbVar9 >> 0x30 & 0xff;
      }
      else {
        iVar13 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar13,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar14 = (ulong)(iVar13 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar6 = (ulong)(uVar14 == 0);
        goto LAB_00038af8;
      }
      uVar16 = *(long *)(lVar11 + 0x18) - *(long *)(lVar11 + 0x10);
      if (SBORROW8(*(long *)(lVar11 + 0x18),*(long *)(lVar11 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar14 != uVar16) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar12 == 2) {
        uVar14 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar14 = 0;
      if (1 < uVar15) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar16 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar13 = (int)((ulong)lVar11 >> 0x20);
      if (SBORROW4(iVar13,(int)lVar11)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar14 != (long)(iVar13 - (int)lVar11)) goto LAB_0003899c;
    }
    if (0 < (long)uVar14) {
      if (uVar12 < 2) {
        if (uVar12 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar9;
          abStack_70[9] = (byte)((ulong)pbVar9 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar9 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar9 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar9 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar9 >> 0x28);
          pbVar9 = abStack_70 + ((ulong)pbVar9 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar14 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar16 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar16) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar14 <= (long)uVar16) {
              uVar16 = uVar14;
            }
            pbVar10 = (byte *)(uVar16 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar12 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar9 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar14 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar14) + uVar6;
        }
        uVar16 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if ((long)uVar16 <= (long)uVar14) {
            uVar14 = uVar16;
          }
          pbVar10 = (byte *)(uVar14 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar9 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar10,lVar11,uVar8);
      uVar6 = (ulong)abStack_70[0];
      pbVar9 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar9 - uVar6;
  if (SBORROW8((long)pbVar9,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar14 = uVar16 & 0xffffffffffffff8;
  uVar6 = uVar14 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar8 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = lVar11 - lVar17;
  if (SBORROW8(lVar11,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar14 + 0x10);
      lVar17 = uVar8 - (long)pbVar9;
    }
    else {
      uVar8 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar8 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar8 - (long)pbVar9;
    }
    if (SBORROW8(uVar8,(long)pbVar9)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + lVar11 * 8;
    uVar8 = uVar14 + 0x20 + (long)pbVar9 * 8;
    if (uVar6 != uVar8 || uVar8 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar8,lVar17 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar14 + 0x10);
    }
    else {
      uVar8 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar8 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar14 + 0x10) = uVar8 + lVar1;
  }
  if (0 < lVar11) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar8;
}



/* Entry: 00115e38; end: 00115e5f;  */

uint FUN_00115e38(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_001117a4(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],&UNK_009b5618);
  return (uint)param_1 & 1;
}



/* Entry: 00115e60; end: 00115e63;  */

ulong FUN_00115e60(ulong *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *unaff_x20;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  uVar10 = param_1[2];
  uVar16 = param_1[3];
  uVar13 = *unaff_x20;
  uVar6 = unaff_x20[2];
  pbVar8 = (byte *)unaff_x20[3];
  if ((uVar13 != *param_1 || unaff_x20[1] != param_1[1]) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar13 & 1) == 0)) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar8 >> 0x20);
  uVar11 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar16 >> 0x20);
  uVar14 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar8 >> 0x3e == 3) {
    uVar13 = 0;
    if ((((uVar6 != 0) || (pbVar8 != (byte *)0xc000000000000000)) || (uVar16 >> 0x3e < 3)) ||
       ((uVar13 = 0, uVar10 != 0 || (uVar16 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar11 == 0) {
        uVar13 = (ulong)pbVar8 >> 0x30 & 0xff;
      }
      else {
        iVar12 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar12,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar13 = (ulong)(iVar12 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar14 != 2) {
        uVar6 = (ulong)(uVar13 == 0);
        goto LAB_00038af8;
      }
      uVar15 = *(long *)(uVar10 + 0x18) - *(long *)(uVar10 + 0x10);
      if (SBORROW8(*(long *)(uVar10 + 0x18),*(long *)(uVar10 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar13 != uVar15) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar11 == 2) {
        uVar13 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar13 = 0;
      if (1 < uVar14) goto LAB_00038898;
LAB_000388cc:
      if (uVar14 == 0) {
        uVar15 = uVar16 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar12 = (int)(uVar10 >> 0x20);
      if (SBORROW4(iVar12,(int)uVar10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar13 != (long)(iVar12 - (int)uVar10)) goto LAB_0003899c;
    }
    if (0 < (long)uVar13) {
      if (uVar11 < 2) {
        if (uVar11 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar8;
          abStack_70[9] = (byte)((ulong)pbVar8 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar8 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar8 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar8 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar8 >> 0x28);
          pbVar8 = abStack_70 + ((ulong)pbVar8 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar13 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar15 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar15)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar15) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar13 <= (long)uVar15) {
              uVar15 = uVar13;
            }
            pbVar9 = (byte *)(uVar15 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar11 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar8 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar13 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar13)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar13) + uVar6;
        }
        uVar15 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if ((long)uVar15 <= (long)uVar13) {
            uVar13 = uVar15;
          }
          pbVar9 = (byte *)(uVar13 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar8 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar9,uVar10,uVar16);
      uVar6 = (ulong)abStack_70[0];
      pbVar8 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar8 - uVar6;
  if (SBORROW8((long)pbVar8,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar15 = *unaff_x20;
  uVar16 = uVar15 & 0xffffffffffffff8;
  uVar6 = uVar16 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar13 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = uVar10 - lVar17;
  if (SBORROW8(uVar10,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar15 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar16 + 0x10);
      lVar17 = uVar13 - (long)pbVar8;
    }
    else {
      uVar13 = uVar16;
      if ((uVar15 & 0x8000000000000000) != 0) {
        uVar13 = uVar15;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar13 - (long)pbVar8;
    }
    if (SBORROW8(uVar13,(long)pbVar8)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + uVar10 * 8;
    uVar13 = uVar16 + 0x20 + (long)pbVar8 * 8;
    if (uVar6 != uVar13 || uVar13 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar13,lVar17 << 3);
    }
    if (uVar15 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar13 = uVar16;
      if ((uVar15 & 0x8000000000000000) != 0) {
        uVar13 = uVar15;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar13,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar16 + 0x10) = uVar13 + lVar1;
  }
  if (0 < (long)uVar10) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar13;
}



/* Entry: 00115e64; end: 00115edb;  */

ulong FUN_00115e64(ulong *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *unaff_x20;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  uVar10 = param_1[2];
  uVar16 = param_1[3];
  uVar13 = *unaff_x20;
  uVar6 = unaff_x20[2];
  pbVar8 = (byte *)unaff_x20[3];
  if ((uVar13 != *param_1 || unaff_x20[1] != param_1[1]) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar13 & 1) == 0)) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar8 >> 0x20);
  uVar11 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar16 >> 0x20);
  uVar14 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar8 >> 0x3e == 3) {
    uVar13 = 0;
    if ((((uVar6 != 0) || (pbVar8 != (byte *)0xc000000000000000)) || (uVar16 >> 0x3e < 3)) ||
       ((uVar13 = 0, uVar10 != 0 || (uVar16 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar11 == 0) {
        uVar13 = (ulong)pbVar8 >> 0x30 & 0xff;
      }
      else {
        iVar12 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar12,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar13 = (ulong)(iVar12 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar14 != 2) {
        uVar6 = (ulong)(uVar13 == 0);
        goto LAB_00038af8;
      }
      uVar15 = *(long *)(uVar10 + 0x18) - *(long *)(uVar10 + 0x10);
      if (SBORROW8(*(long *)(uVar10 + 0x18),*(long *)(uVar10 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar13 != uVar15) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar11 == 2) {
        uVar13 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar13 = 0;
      if (1 < uVar14) goto LAB_00038898;
LAB_000388cc:
      if (uVar14 == 0) {
        uVar15 = uVar16 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar12 = (int)(uVar10 >> 0x20);
      if (SBORROW4(iVar12,(int)uVar10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar13 != (long)(iVar12 - (int)uVar10)) goto LAB_0003899c;
    }
    if (0 < (long)uVar13) {
      if (uVar11 < 2) {
        if (uVar11 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar8;
          abStack_70[9] = (byte)((ulong)pbVar8 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar8 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar8 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar8 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar8 >> 0x28);
          pbVar8 = abStack_70 + ((ulong)pbVar8 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar13 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar15 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar15)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar15) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar13 <= (long)uVar15) {
              uVar15 = uVar13;
            }
            pbVar9 = (byte *)(uVar15 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar11 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar8 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar13 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar13)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar13) + uVar6;
        }
        uVar15 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if ((long)uVar15 <= (long)uVar13) {
            uVar13 = uVar15;
          }
          pbVar9 = (byte *)(uVar13 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar8 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar9,uVar10,uVar16);
      uVar6 = (ulong)abStack_70[0];
      pbVar8 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar8 - uVar6;
  if (SBORROW8((long)pbVar8,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar15 = *unaff_x20;
  uVar16 = uVar15 & 0xffffffffffffff8;
  uVar6 = uVar16 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar13 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = uVar10 - lVar17;
  if (SBORROW8(uVar10,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar15 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar16 + 0x10);
      lVar17 = uVar13 - (long)pbVar8;
    }
    else {
      uVar13 = uVar16;
      if ((uVar15 & 0x8000000000000000) != 0) {
        uVar13 = uVar15;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar13 - (long)pbVar8;
    }
    if (SBORROW8(uVar13,(long)pbVar8)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + uVar10 * 8;
    uVar13 = uVar16 + 0x20 + (long)pbVar8 * 8;
    if (uVar6 != uVar13 || uVar13 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar13,lVar17 << 3);
    }
    if (uVar15 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar13 = uVar16;
      if ((uVar15 & 0x8000000000000000) != 0) {
        uVar13 = uVar15;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar13,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar16 + 0x10) = uVar13 + lVar1;
  }
  if (0 < (long)uVar10) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar13;
}



/* Entry: 00115edc; end: 00115eef;  */

undefined8 FUN_00115edc(void)

{
  return 1;
}



/* Entry: 00115ef0; end: 00115f6f;  */

/* WARNING: Removing unreachable block (ram,0x00115f3c) */

void FUN_00115ef0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 *unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*param_4)(&uStack_80,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 00115f70; end: 00115f7b;  */

uint FUN_00115f70(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong *unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [40];
  
  uVar4 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  iVar3 = (int)&uStack_a0;
  FUN_000ea51c(param_1,auStack_78);
  uVar6 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  _swift_dynamicCast(&uStack_a0,auStack_78,uVar6,&UNK_009b5698,6);
  uVar9 = uStack_88;
  uVar8 = uStack_90;
  uVar7 = uStack_98;
  uVar6 = uStack_a0;
  if (iVar3 == 0) {
    uStack_98 = 0xf000000000000000;
    uStack_a0 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uVar6 = 0;
    uVar7 = 0xf000000000000000;
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    FUN_00038814(uVar4,uVar1,uStack_a0,uStack_98);
    if ((uVar4 & 1) != 0) {
      FUN_00038814(uVar5,uVar2,uVar8,uVar9);
      uVar10 = (uint)uVar5;
      FUN_00115fe4(uVar6,uVar7,uVar8,uVar9);
      goto LAB_00112158;
    }
  }
  FUN_00115fe4(uVar6,uVar7,uVar8,uVar9);
  uVar10 = 0;
LAB_00112158:
  return uVar10 & 1;
}



/* Entry: 00115f7c; end: 00115fe3;  */

ulong FUN_00115f7c(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *unaff_x20;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar10 = param_1[2];
  uVar16 = param_1[3];
  uVar13 = *unaff_x20;
  uVar6 = unaff_x20[2];
  pbVar8 = (byte *)unaff_x20[3];
  FUN_00038814(uVar13,unaff_x20[1],*param_1,param_1[1]);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar8 >> 0x20);
  uVar11 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar16 >> 0x20);
  uVar14 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar8 >> 0x3e == 3) {
    uVar13 = 0;
    if ((((uVar6 != 0) || (pbVar8 != (byte *)0xc000000000000000)) || (uVar16 >> 0x3e < 3)) ||
       ((uVar13 = 0, lVar10 != 0 || (uVar16 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar11 == 0) {
        uVar13 = (ulong)pbVar8 >> 0x30 & 0xff;
      }
      else {
        iVar12 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar12,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar13 = (ulong)(iVar12 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar14 != 2) {
        uVar6 = (ulong)(uVar13 == 0);
        goto LAB_00038af8;
      }
      uVar15 = *(long *)(lVar10 + 0x18) - *(long *)(lVar10 + 0x10);
      if (SBORROW8(*(long *)(lVar10 + 0x18),*(long *)(lVar10 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar13 != uVar15) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar11 == 2) {
        uVar13 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar13 = 0;
      if (1 < uVar14) goto LAB_00038898;
LAB_000388cc:
      if (uVar14 == 0) {
        uVar15 = uVar16 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar12 = (int)((ulong)lVar10 >> 0x20);
      if (SBORROW4(iVar12,(int)lVar10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar13 != (long)(iVar12 - (int)lVar10)) goto LAB_0003899c;
    }
    if (0 < (long)uVar13) {
      if (uVar11 < 2) {
        if (uVar11 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar8;
          abStack_70[9] = (byte)((ulong)pbVar8 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar8 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar8 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar8 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar8 >> 0x28);
          pbVar8 = abStack_70 + ((ulong)pbVar8 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar13 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar15 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar15)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar15) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar13 <= (long)uVar15) {
              uVar15 = uVar13;
            }
            pbVar9 = (byte *)(uVar15 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar11 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar8 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar13 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar13)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar13) + uVar6;
        }
        uVar15 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if ((long)uVar15 <= (long)uVar13) {
            uVar13 = uVar15;
          }
          pbVar9 = (byte *)(uVar13 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar8 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar9,lVar10,uVar16);
      uVar6 = (ulong)abStack_70[0];
      pbVar8 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar8 - uVar6;
  if (SBORROW8((long)pbVar8,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar15 = *unaff_x20;
  uVar16 = uVar15 & 0xffffffffffffff8;
  uVar6 = uVar16 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar13 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = lVar10 - lVar17;
  if (SBORROW8(lVar10,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar15 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar16 + 0x10);
      lVar17 = uVar13 - (long)pbVar8;
    }
    else {
      uVar13 = uVar16;
      if ((uVar15 & 0x8000000000000000) != 0) {
        uVar13 = uVar15;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar13 - (long)pbVar8;
    }
    if (SBORROW8(uVar13,(long)pbVar8)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + lVar10 * 8;
    uVar13 = uVar16 + 0x20 + (long)pbVar8 * 8;
    if (uVar6 != uVar13 || uVar13 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar13,lVar17 << 3);
    }
    if (uVar15 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar13 = uVar16;
      if ((uVar15 & 0x8000000000000000) != 0) {
        uVar13 = uVar15;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar13,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar16 + 0x10) = uVar13 + lVar1;
  }
  if (0 < lVar10) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar13;
}



/* Entry: 00115fe4; end: 0011601f;  */

void FUN_00115fe4(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  FUN_00023358();
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_4 & 0x3fffffffffffffff);
  return;
}



/* Entry: 00116020; end: 00116057;  */

void FUN_00116020(char param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == '\x02') {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 00116058; end: 001160bb;  */

void FUN_00116058(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
    FUN_00023358(param_3,param_4);
    FUN_00116410(param_5,param_6,param_7);
  }
  return;
}



/* Entry: 001160bc; end: 001160f3;  */

void FUN_001160bc(undefined8 *param_1)

{
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 001160f4; end: 001161cf;  */

undefined8 FUN_001160f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xaefe20;
  func_0x000115a8(0xaefe20,&UNK_007e0850);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 001161d0; end: 00116217;  */

void FUN_001161d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  if (param_1 != 0) {
    _swift_bridgeObjectRelease();
    FUN_00023358(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_5);
    return;
  }
  return;
}



/* Entry: 00116218; end: 0011627f;  */

void FUN_00116218(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  _swift_bridgeObjectRelease();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 00116280; end: 00116293;  */

void FUN_00116280(undefined8 param_1,ulong param_2)

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



/* Entry: 00116294; end: 001162ef;  */

void FUN_00116294(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    FUN_00023358();
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_3);
    return;
  }
  return;
}



/* Entry: 001162f0; end: 0011630f;  */

void FUN_001162f0(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x71) = 0;
  *(undefined8 *)((long)param_1 + 0x69) = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 00116310; end: 001163a7;  */

void FUN_00116310(void)

{
  long in_x4;
  
  if (in_x4 == 1) {
    return;
  }
  FUN_00023358();
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(in_x4);
  return;
}



/* Entry: 001163a8; end: 0011640f;  */

void FUN_001163a8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x82) = 0;
  *(undefined8 *)((long)param_1 + 0x7a) = 0;
  return;
}



/* Entry: 00116410; end: 0011643b;  */

void FUN_00116410(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    FUN_00023358();
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(param_3);
    return;
  }
  return;
}



/* Entry: 0011643c; end: 00116463;  */

void FUN_0011643c(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 00116464; end: 001164f7;  */

void FUN_00116464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    _swift_bridgeObjectRelease();
    FUN_00023358(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_4);
    return;
  }
  return;
}



/* Entry: 001164f8; end: 00116513;  */

void FUN_001164f8(undefined8 *param_1)

{
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 00116514; end: 00116553;  */

undefined8 FUN_00116514(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000115a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 00116554; end: 001165b7;  */

void FUN_00116554(void)

{
  return;
}



/* Entry: 001165b8; end: 001165e3;  */

undefined1  [16] FUN_001165b8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 001165e4; end: 001165eb;  */

undefined1  [16] FUN_001165e4(void)

{
  long unaff_x20;
  
  return *(undefined1 (*) [16])(unaff_x20 + 0x28);
}



/* Entry: 001165ec; end: 0011663f;  */

void FUN_001165ec(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  _swift_allocObject();
  unaff_x20[2] = param_1;
  unaff_x20[3] = param_2;
  lVar2 = *(long *)(*unaff_x20 + 0x58);
  lVar1 = *(long *)(*unaff_x20 + 0x68);
  unaff_x20[4] = param_3;
  unaff_x20[5] = lVar2;
  unaff_x20[6] = lVar1;
  return;
}



/* Entry: 00116640; end: 0011665f;  */

void FUN_00116640(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *unaff_x20;
  
  unaff_x20[2] = param_1;
  unaff_x20[3] = param_2;
  unaff_x20[4] = param_3;
  lVar1 = *(long *)(*unaff_x20 + 0x68);
  unaff_x20[5] = *(long *)(*unaff_x20 + 0x58);
  unaff_x20[6] = lVar1;
  return;
}



/* Entry: 00116660; end: 001167af;  */

void FUN_00116660(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long *unaff_x20;
  long lVar4;
  long unaff_x21;
  undefined1 *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  undefined8 *puStack_98;
  undefined8 uStack_90;
  
  lVar7 = *unaff_x20;
  lVar4 = *(long *)(lVar7 + 0x50);
  lVar2 = 0;
  puStack_98 = param_1;
  uStack_90 = param_4;
  __sSqMa(0,lVar4);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_a0 + -extraout_x8;
  lVar7 = *(long *)(lVar7 + 0x60);
  pcVar6 = *(code **)(lVar7 + 0x40);
  _swift_retain();
  (*pcVar6)(puVar5,&stack0xffffffffffffff78,param_2,param_3,uStack_90,lVar4,lVar7);
  puVar1 = puStack_98;
  if (unaff_x21 == 0) {
    lVar8 = *(long *)(lVar4 + -8);
    puVar3 = puVar5;
    (**(code **)(lVar8 + 0x30))(puVar5,1,lVar4);
    if ((int)puVar3 == 1) {
      (**(code **)(lVar9 + 8))(puVar5,lVar2);
      puVar1[4] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
    }
    else {
      puVar1[3] = lVar4;
      puVar1[4] = *(undefined8 *)(lVar7 + 0x10);
      func_0x00016cc8(puVar1);
      (**(code **)(lVar8 + 0x20))();
    }
  }
  return;
}



/* Entry: 001167b0; end: 001167ef;  */

void FUN_001167b0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 001167f0; end: 001167fb;  */

undefined8 FUN_001167f0(void)

{
  long *unaff_x20;
  
  return *(undefined8 *)(*unaff_x20 + 0x10);
}



/* Entry: 001167fc; end: 0011682b;  */

undefined1  [16] FUN_001167fc(void)

{
  undefined1 auVar1 [16];
  long *unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(*unaff_x20 + 0x18);
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 0011682c; end: 00116837;  */

undefined1  [16] FUN_0011682c(void)

{
  long *unaff_x20;
  
  return *(undefined1 (*) [16])(*unaff_x20 + 0x28);
}



/* Entry: 00116838; end: 00116857;  */

void FUN_00116838(void)

{
  FUN_00116660();
  return;
}



/* Entry: 00116858; end: 0011685b;  */

void FUN_00116858(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 0011685c; end: 001168b3;  */

void FUN_0011685c(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = PTR___sBi64_WV_0099ae80 + 0x40;
  puStack_20 = &UNK_007d9cf8;
  puStack_18 = &UNK_007d9d10;
  _swift_initClassMetadata2(param_1,0,3,&puStack_28,param_1 + 0x70);
  return;
}



/* Entry: 001168b4; end: 001169e7;  */

void FUN_001168b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077b3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_0099ba28)(param_1,param_2,&UNK_00844764);
  return;
}



/* Entry: 001169e8; end: 00116a8b;  */

void FUN_001169e8(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_48;
  long lStack_40;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (param_1 == 0) {
    lVar2 = 0;
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
  }
  else {
    lVar2 = param_2 - param_1;
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(param_1);
  }
  if (lVar2 == 0) {
    plVar1 = &lStack_48;
    lStack_48 = param_1;
    lStack_40 = param_2;
    puStack_30 = PTR___sSWN_0099b108;
    puStack_28 = PTR___sSWs19_HasContiguousBytessWP_0099b110;
    FUN_0001393c();
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = plVar1[1] - lVar2;
    }
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(lVar2,lVar3);
    FUN_00011670(&lStack_48);
  }
  return;
}



/* Entry: 00116a8c; end: 00116def;  */

undefined1  [16] FUN_00116a8c(byte *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  
  if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
    bVar4 = false;
    do {
      param_2 = param_2 + -1;
      bVar1 = *param_1;
      uVar3 = (uint)bVar1;
      if (uVar3 != 0x5f) {
        bVar2 = bVar1;
        if ((bVar4) && (bVar2 = bVar1 & 0x5f, 0x19 < uVar3 - 0x61)) {
          bVar2 = bVar1;
        }
        __sSS17UnicodeScalarViewV6appendyys0A0O0B0VF(bVar2);
      }
      param_1 = param_1 + 1;
      bVar4 = uVar3 == 0x5f;
    } while (param_2 != 0);
  }
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 00116df0; end: 00116e8f;  */

void FUN_00116df0(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(lVar1 + 0x10);
  if (lVar2 != 0) {
    _swift_bridgeObjectRetain(lVar1);
    lVar3 = 0x20;
    do {
      if (*(long *)(lVar1 + lVar3) != 0) {
        _swift_slowDealloc(*(long *)(lVar1 + lVar3),0xffffffffffffffff,0xffffffffffffffff);
      }
      lVar3 = lVar3 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    _swift_bridgeObjectRelease(lVar1);
    lVar1 = *(long *)(unaff_x20 + 0x10);
  }
  _swift_bridgeObjectRelease(lVar1);
  _swift_deallocClassInstance();
  return;
}



/* Entry: 00116e90; end: 00116e93;  */

ulong FUN_00116e90(long param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 - 1;
  if (0xb < uVar1) {
    uVar1 = 0xc;
  }
  return uVar1;
}



/* Entry: 00116e94; end: 00116ebf;  */

void FUN_00116e94(void)

{
  func_0x000115a8(0xaeff70,&UNK_007d9d40);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 00116ec0; end: 00116edf;  */

long FUN_00116ec0(ulong param_1)

{
  return (param_1 & 0xff) + 1;
}



/* Entry: 00116ee0; end: 00116fb7;  */

void FUN_00116ee0(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyys6UInt64VF((ulong)bVar1 + 1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00116fb8; end: 00116fc7;  */

void FUN_00116fb8(long *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20 + 1;
  return;
}



/* Entry: 00116fc8; end: 00117007;  */

void FUN_00116fc8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaeff70;
  func_0x000115a8(0xaeff70,&UNK_007d9d40);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 00117008; end: 0011704f;  */

void FUN_00117008(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (param_2 != (undefined1 *)0x0) {
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      __ss6HasherV8_combineyys5UInt8VF(*param_2);
    }
  }
  return;
}



/* Entry: 00117050; end: 00117053;  */

bool FUN_00117050(char *param_1,char *param_2,char *param_3,char *param_4)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  
  lVar2 = 0;
  if (param_1 != (char *)0x0) {
    lVar2 = (long)param_2 - (long)param_1;
  }
  if (param_3 == (char *)0x0) {
    if (lVar2 != 0) {
      return false;
    }
  }
  else if (lVar2 != (long)param_4 - (long)param_3) {
    return false;
  }
  do {
    if (param_1 == (char *)0x0) {
      cVar4 = '\0';
      bVar1 = true;
joined_r0x000e1d28:
      if (param_3 != (char *)0x0) goto LAB_000e1d2c;
LAB_000e1d58:
      cVar5 = '\0';
      bVar3 = false;
      if (bVar1) {
        return true;
      }
    }
    else {
      if (param_1 != param_2) {
        bVar1 = false;
        cVar4 = *param_1;
        param_1 = param_1 + 1;
        goto joined_r0x000e1d28;
      }
      cVar4 = '\0';
      bVar1 = true;
      param_1 = param_2;
      if (param_3 == (char *)0x0) goto LAB_000e1d58;
LAB_000e1d2c:
      bVar3 = param_3 != param_4;
      if (bVar3) {
        cVar5 = *param_3;
        param_3 = param_3 + 1;
      }
      else {
        cVar5 = '\0';
        param_3 = param_4;
      }
      if (bVar1) {
        return !bVar3;
      }
    }
    bVar1 = false;
    if (cVar4 == cVar5) {
      bVar1 = bVar3;
    }
    if (!bVar1) {
      return false;
    }
  } while( true );
}



/* Entry: 00117054; end: 001171bb;  */

void FUN_00117054(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  if (param_1 != (undefined1 *)0x0) {
    for (; param_1 != param_2; param_1 = param_1 + 1) {
      __ss6HasherV8_combineyys5UInt8VF(*param_1);
    }
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001171bc; end: 001171d7;  */

void FUN_001171bc(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long lStack_48;
  long lStack_40;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar2 = *unaff_x20;
  lVar4 = unaff_x20[1];
  if (lVar2 == 0) {
    lVar3 = 0;
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
  }
  else {
    lVar3 = lVar4 - lVar2;
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(lVar2);
  }
  if (lVar3 == 0) {
    plVar1 = &lStack_48;
    lStack_48 = lVar2;
    lStack_40 = lVar4;
    puStack_30 = PTR___sSWN_0099b108;
    puStack_28 = PTR___sSWs19_HasContiguousBytessWP_0099b110;
    FUN_0001393c();
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = plVar1[1] - lVar2;
    }
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(lVar2,lVar4);
    FUN_00011670(&lStack_48);
  }
  return;
}



/* Entry: 001171d8; end: 00117303;  */

void FUN_001171d8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar2 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar2 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puVar3 = puVar1;
  FUN_0019be38();
  puVar4 = puVar1;
  FUN_0019bf34();
  puVar5 = puVar1;
  FUN_0019bf34();
  *param_1 = lVar2;
  param_1[1] = (long)puVar3;
  param_1[2] = (long)puVar4;
  param_1[3] = (long)puVar5;
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar1;
  return;
}



/* Entry: 00117304; end: 00119f63;  */

void FUN_00117304(long param_1)

{
  long lVar1;
  byte ****ppppbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  code *pcVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  byte ****ppppbVar13;
  byte *******pppppppbVar14;
  byte *******pppppppbVar15;
  byte *******pppppppbVar16;
  ulong uVar17;
  byte ****ppppbVar18;
  byte *******pppppppbVar19;
  byte ****ppppbVar20;
  byte *pbVar21;
  byte ****ppppbVar22;
  uint uVar23;
  long lVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong uVar27;
  byte *****pppppbVar28;
  long *unaff_x20;
  byte ******ppppppbVar29;
  byte ******ppppppbVar30;
  byte ******ppppppbVar31;
  byte ******ppppppbVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
  byte ******ppppppbVar36;
  byte ******ppppppbStack_b0;
  byte ***pppbStack_a8;
  ulong uStack_98;
  byte ******ppppppbStack_90;
  byte ***pppbStack_88;
  undefined1 uStack_80;
  byte ******ppppppbStack_78;
  byte *pbStack_70;
  
  lVar24 = *(long *)(param_1 + 0x10);
  if (lVar24 != 0) {
    lVar33 = 0;
    do {
      puVar25 = (ulong *)(param_1 + 0x20 + lVar33 * 0x38);
      ppppbVar2 = (byte ****)*puVar25;
      pppppppbVar15 = (byte *******)puVar25[1];
      ppppbVar22 = (byte ****)puVar25[2];
      uVar12 = puVar25[3];
      pppppppbVar14 = (byte *******)puVar25[4];
      uVar26 = puVar25[5];
      bVar4 = (byte)puVar25[6];
      FUN_0011b4a0(pppppppbVar15,ppppbVar22,uVar12,pppppppbVar14,uVar26,bVar4);
      FUN_0011b4a0(pppppppbVar15,ppppbVar22,uVar12,pppppppbVar14,uVar26,bVar4);
      ppppbVar20 = ppppbVar22;
      func_0x0011b4d0(pppppppbVar15,ppppbVar22,uVar12,pppppppbVar14,uVar26,bVar4);
      uVar10 = (uint)(uVar12 >> 0x20);
      uVar23 = uVar10 >> 0x1e;
      uVar34 = (uint)pppppppbVar15;
      if (uVar10 >> 0x1e < 2) {
        if (uVar23 == 0) {
          if ((uVar12 & 1) == 0) {
            if (pppppppbVar15 == (byte *******)0x0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1188b0);
              (*pcVar8)();
            }
            ppppbVar22 = (byte ****)((long)ppppbVar22 + (long)pppppppbVar15);
          }
          else {
            if ((ulong)pppppppbVar15 >> 0x20 != 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x11889c);
              (*pcVar8)();
            }
            if ((undefined *)((ulong)pppppppbVar15 & 0xfffff800) == &UNK_0000d800) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1188fc);
              (*pcVar8)();
            }
            if ((byte *******)0x10ffff < pppppppbVar15) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1188c0);
              (*pcVar8)();
            }
            if (section_00000068.segname + 7 < pppppppbVar15) {
              uVar5 = (uVar34 & 0x3f) * 0x100;
              uVar23 = (uVar5 | uVar34 >> 6 & 0x3f) * 0x100;
              uVar10 = (uVar34 >> 0x12) + (uVar23 | uVar34 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
              if ((ulong)pppppppbVar15 >> 0x10 == 0) {
                uVar10 = (uVar34 >> 0xc) + uVar23 + 0x8181e1;
              }
              uVar23 = (uVar34 >> 6) + uVar5 + 0x81c1;
              if (section_000007e8.segname + 7 < pppppppbVar15) {
                uVar23 = uVar10;
              }
            }
            else {
              uVar23 = uVar34 + 1;
            }
            ppppbVar20 = (byte ****)(ulong)(4 - ((uint)LZCOUNT(uVar23) >> 3));
            ppppppbStack_b0 =
                 (byte ******)
                 ((ulong)uVar23 + 0xfefefefefefeff &
                 (-1L << (((ulong)ppppbVar20 & 7) << 3) ^ 0xffffffffffffffffU));
            pppppppbVar15 = &ppppppbStack_b0;
            func_0x00116cec();
            ppppbVar22 = ppppbVar20;
          }
          uVar12 = unaff_x20[1];
          _swift_isUniquelyReferenced_nonNull_native();
          uVar10 = (uint)uVar12;
          ppppppbVar29 = (byte ******)unaff_x20[1];
          ppppbVar13 = ppppbVar2;
          ppppppbStack_b0 = ppppppbVar29;
          FUN_000e1d94();
          uVar26 = (ulong)~(uint)ppppbVar20 & 1;
          lVar11 = (long)ppppppbVar29[2] + uVar26;
          if (SCARRY8((long)ppppppbVar29[2],uVar26)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x118870);
            (*pcVar8)();
          }
          if ((long)ppppppbVar29[3] < lVar11) {
            func_0x001224e0(lVar11);
            ppppbVar13 = ppppbVar2;
            FUN_000e1d94();
            if (((uint)ppppbVar20 & 1) != (uVar10 & 1)) goto LAB_00118918;
LAB_0011798c:
            if (((ulong)ppppbVar20 & 1) == 0) goto LAB_00117bbc;
LAB_00117994:
            pppppbVar28 = ppppppbStack_b0[7] + (long)ppppbVar13 * 5;
            *pppppbVar28 = (byte ****)pppppppbVar15;
            pppppbVar28[1] = ppppbVar22;
            *(undefined1 *)(pppppbVar28 + 2) = 0;
            pppppbVar28[3] = (byte ****)pppppppbVar15;
            pppppbVar28[4] = ppppbVar22;
          }
          else {
            if ((uVar12 & 1) != 0) goto LAB_0011798c;
            func_0x00121480();
            if (((ulong)ppppbVar20 & 1) != 0) goto LAB_00117994;
LAB_00117bbc:
            ppppppbStack_b0[((ulong)ppppbVar13 >> 6) + 8] =
                 (byte *****)
                 ((ulong)ppppppbStack_b0[((ulong)ppppbVar13 >> 6) + 8] |
                 1L << ((ulong)ppppbVar13 & 0x3f));
            ppppppbStack_b0[6][(long)ppppbVar13] = ppppbVar2;
            pppppbVar28 = ppppppbStack_b0[7] + (long)ppppbVar13 * 5;
            *pppppbVar28 = (byte ****)pppppppbVar15;
            pppppbVar28[1] = ppppbVar22;
            *(undefined1 *)(pppppbVar28 + 2) = 0;
            pppppbVar28[3] = (byte ****)pppppppbVar15;
            pppppbVar28[4] = ppppbVar22;
            if (SCARRY8((long)ppppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1188cc);
              (*pcVar8)();
            }
            ppppppbStack_b0[2] = (byte *****)((long)ppppppbStack_b0[2] + 1);
          }
          unaff_x20[1] = (long)ppppppbStack_b0;
          uVar12 = unaff_x20[2];
          _swift_isUniquelyReferenced_nonNull_native();
          ppppppbVar29 = (byte ******)unaff_x20[2];
          pppppppbVar14 = pppppppbVar15;
          ppppbVar20 = ppppbVar22;
          ppppppbStack_b0 = ppppppbVar29;
          FUN_000e1dc4();
          uVar26 = (ulong)~(uint)ppppbVar20 & 1;
          lVar11 = (long)ppppppbVar29[2] + uVar26;
          if (SCARRY8((long)ppppppbVar29[2],uVar26)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x118874);
            (*pcVar8)();
          }
          if ((long)ppppppbVar29[3] < lVar11) {
            func_0x00122244(lVar11,uVar12);
            pppppppbVar14 = pppppppbVar15;
            ppppbVar13 = ppppbVar22;
            FUN_000e1dc4();
            if (((uint)ppppbVar20 & 1) != ((uint)ppppbVar13 & 1)) goto LAB_00118908;
LAB_00117c8c:
            if (((ulong)ppppbVar20 & 1) == 0) goto LAB_00117e28;
LAB_00117c94:
            ppppppbStack_b0[7][(long)pppppppbVar14] = ppppbVar2;
          }
          else {
            if ((uVar12 & 1) != 0) goto LAB_00117c8c;
            FUN_00121330();
            if (((ulong)ppppbVar20 & 1) != 0) goto LAB_00117c94;
LAB_00117e28:
            ppppppbStack_b0[((ulong)pppppppbVar14 >> 6) + 8] =
                 (byte *****)
                 ((ulong)ppppppbStack_b0[((ulong)pppppppbVar14 >> 6) + 8] |
                 1L << ((ulong)pppppppbVar14 & 0x3f));
            pppppbVar28 = ppppppbStack_b0[6];
            pppppbVar28[(long)pppppppbVar14 * 2] = (byte ****)pppppppbVar15;
            (pppppbVar28 + (long)pppppppbVar14 * 2)[1] = ppppbVar22;
            ppppppbStack_b0[7][(long)pppppppbVar14] = ppppbVar2;
            if (SCARRY8((long)ppppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1188d8);
              (*pcVar8)();
            }
            ppppppbStack_b0[2] = (byte *****)((long)ppppppbStack_b0[2] + 1);
          }
          unaff_x20[2] = (long)ppppppbStack_b0;
          uVar12 = unaff_x20[3];
          _swift_isUniquelyReferenced_nonNull_native();
          ppppppbVar29 = (byte ******)unaff_x20[3];
          pppppppbVar14 = pppppppbVar15;
          ppppbVar20 = ppppbVar22;
          ppppppbStack_b0 = ppppppbVar29;
          FUN_000e1dc4();
          uVar26 = (ulong)~(uint)ppppbVar20 & 1;
          lVar11 = (long)ppppppbVar29[2] + uVar26;
          if (SCARRY8((long)ppppppbVar29[2],uVar26)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x118880);
            (*pcVar8)();
          }
          if ((long)ppppppbVar29[3] < lVar11) {
            func_0x00122244(lVar11,uVar12);
            pppppppbVar14 = pppppppbVar15;
            ppppbVar13 = ppppbVar22;
            FUN_000e1dc4();
            if (((uint)ppppbVar20 & 1) != ((uint)ppppbVar13 & 1)) goto LAB_00118908;
          }
          else if ((uVar12 & 1) == 0) {
            FUN_00121330();
          }
          if (((ulong)ppppbVar20 & 1) == 0) {
            ppppppbStack_b0[((ulong)pppppppbVar14 >> 6) + 8] =
                 (byte *****)
                 ((ulong)ppppppbStack_b0[((ulong)pppppppbVar14 >> 6) + 8] |
                 1L << ((ulong)pppppppbVar14 & 0x3f));
            pppppbVar28 = ppppppbStack_b0[6];
            pppppbVar28[(long)pppppppbVar14 * 2] = (byte ****)pppppppbVar15;
            (pppppbVar28 + (long)pppppppbVar14 * 2)[1] = ppppbVar22;
            ppppppbStack_b0[7][(long)pppppppbVar14] = ppppbVar2;
            if (SCARRY8((long)ppppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1188e4);
              (*pcVar8)();
            }
            ppppppbStack_b0[2] = (byte *****)((long)ppppppbStack_b0[2] + 1);
            unaff_x20[3] = (long)ppppppbStack_b0;
          }
          else {
            ppppppbStack_b0[7][(long)pppppppbVar14] = ppppbVar2;
            unaff_x20[3] = (long)ppppppbStack_b0;
          }
        }
        else {
          if ((uVar12 & 1) == 0) {
            if (pppppppbVar15 == (byte *******)0x0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x118898);
              (*pcVar8)();
            }
            ppppppbStack_b0 = (byte ******)0x0;
            pppbStack_a8 = (byte ***)0xe000000000000000;
            if (ppppbVar22 != (byte ****)0x0) {
              pppppppbVar16 = pppppppbVar15;
              ppppbVar20 = ppppbVar22;
              bVar7 = false;
              do {
                ppppbVar20 = (byte ****)((long)ppppbVar20 - 1);
                bVar3 = *(byte *)pppppppbVar16;
                uVar10 = (uint)bVar3;
                if (uVar10 != 0x5f) {
                  bVar9 = bVar3;
                  if ((bVar7) && (bVar9 = bVar3 & 0x5f, 0x19 < uVar10 - 0x61)) {
                    bVar9 = bVar3;
                  }
                  __sSS17UnicodeScalarViewV6appendyys0A0O0B0VF(bVar9);
                }
                pppppppbVar16 = (byte *******)((long)pppppppbVar16 + 1);
                bVar7 = uVar10 == 0x5f;
              } while (ppppbVar20 != (byte ****)0x0);
            }
            pbVar21 = (byte *)((long)pppppppbVar15 + (long)ppppbVar22);
            pppppppbVar19 = (byte *******)ppppppbStack_b0;
            ppppbVar20 = (byte ****)pppbStack_a8;
            pppppppbVar16 = pppppppbVar15;
          }
          else {
            if ((ulong)pppppppbVar15 >> 0x20 != 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1188ac);
              (*pcVar8)();
            }
            if ((undefined *)((ulong)pppppppbVar15 & 0xfffff800) == &UNK_0000d800) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x118900);
              (*pcVar8)();
            }
            if ((byte *******)0x10ffff < pppppppbVar15) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1188b4);
              (*pcVar8)();
            }
            if (section_00000068.segname + 7 < pppppppbVar15) {
              uVar5 = (uVar34 & 0x3f) * 0x100;
              uVar23 = (uVar5 | uVar34 >> 6 & 0x3f) * 0x100;
              uVar10 = (uVar34 >> 0x12) + (uVar23 | uVar34 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
              if ((ulong)pppppppbVar15 >> 0x10 == 0) {
                uVar10 = (uVar34 >> 0xc) + uVar23 + 0x8181e1;
              }
              uVar23 = (uVar34 >> 6) + uVar5 + 0x81c1;
              if (section_000007e8.segname + 7 < pppppppbVar15) {
                uVar23 = uVar10;
              }
            }
            else {
              uVar23 = uVar34 + 1;
            }
            pbVar21 = (byte *)(ulong)(4 - ((uint)LZCOUNT(uVar23) >> 3));
            ppppppbStack_b0 =
                 (byte ******)
                 ((ulong)uVar23 + 0xfefefefefefeff &
                 (-1L << (((ulong)pbVar21 & 7) << 3) ^ 0xffffffffffffffffU));
            pppppppbVar16 = &ppppppbStack_b0;
            func_0x00116cec();
            pppppppbVar19 = pppppppbVar15;
            ppppbVar20 = ppppbVar22;
            __ss12StaticStringV11descriptionSSvg(pppppppbVar15,ppppbVar22,uVar12);
          }
          ppppbVar13 = ppppbVar20;
          func_0x00116b2c();
          _swift_bridgeObjectRelease(ppppbVar20);
          uStack_80 = 0;
          lVar11 = unaff_x20[1];
          ppppppbStack_90 = (byte ******)pppppppbVar19;
          pppbStack_88 = (byte ***)ppppbVar13;
          ppppppbStack_78 = (byte ******)pppppppbVar16;
          pbStack_70 = pbVar21;
          _swift_isUniquelyReferenced_nonNull_native(lVar11);
          ppppppbStack_b0 = (byte ******)unaff_x20[1];
          FUN_000f3944(&ppppppbStack_90,ppppbVar2,lVar11);
          unaff_x20[1] = (long)ppppppbStack_b0;
          lVar11 = unaff_x20[2];
          _swift_isUniquelyReferenced_nonNull_native(lVar11);
          ppppppbStack_b0 = (byte ******)unaff_x20[2];
          func_0x000f3838(ppppbVar2,pppppppbVar16,pbVar21,lVar11);
          unaff_x20[2] = (long)ppppppbStack_b0;
          lVar11 = unaff_x20[3];
          _swift_isUniquelyReferenced_nonNull_native(lVar11);
          ppppppbStack_b0 = (byte ******)unaff_x20[3];
          func_0x000f3838(ppppbVar2,pppppppbVar16,pbVar21,lVar11);
          unaff_x20[3] = (long)ppppppbStack_b0;
          _swift_isUniquelyReferenced_nonNull_native();
          ppppppbVar29 = ppppppbStack_b0;
          ppppppbStack_b0 = (byte ******)unaff_x20[3];
          func_0x000f3838(ppppbVar2,pppppppbVar19,ppppbVar13,ppppppbVar29);
          func_0x0011b4d0(pppppppbVar15,ppppbVar22,uVar12,pppppppbVar14,uVar26,bVar4);
          unaff_x20[3] = (long)ppppppbStack_b0;
        }
      }
      else if (uVar23 == 2) {
        if ((bVar4 & 1) == 0) {
          if (pppppppbVar14 == (byte *******)0x0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1188a4);
            (*pcVar8)();
          }
          ppppbVar13 = (byte ****)(uVar26 + (long)pppppppbVar14);
          if ((uVar12 & 1) != 0) goto LAB_00117748;
LAB_00117538:
          if (pppppppbVar15 == (byte *******)0x0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1188c8);
            (*pcVar8)();
          }
          ppppbVar22 = (byte ****)((long)ppppbVar22 + (long)pppppppbVar15);
        }
        else {
          if ((ulong)pppppppbVar14 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1188a8);
            (*pcVar8)();
          }
          if ((undefined *)((ulong)pppppppbVar14 & 0xfffff800) == &UNK_0000d800) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x118904);
            (*pcVar8)();
          }
          if ((byte *******)0x10ffff < pppppppbVar14) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1188b8);
            (*pcVar8)();
          }
          uVar10 = (uint)pppppppbVar14;
          if (section_00000068.segname + 7 < pppppppbVar14) {
            uVar6 = (uVar10 & 0x3f) * 0x100;
            uVar5 = (uVar6 | uVar10 >> 6 & 0x3f) * 0x100;
            uVar23 = (uVar10 >> 0x12) + (uVar5 | uVar10 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
            if ((ulong)pppppppbVar14 >> 0x10 == 0) {
              uVar23 = (uVar10 >> 0xc) + uVar5 + 0x8181e1;
            }
            uVar10 = (uVar10 >> 6) + uVar6 + 0x81c1;
            if (section_000007e8.segname + 7 < pppppppbVar14) {
              uVar10 = uVar23;
            }
          }
          else {
            uVar10 = uVar10 + 1;
          }
          ppppbVar20 = (byte ****)(ulong)(4 - ((uint)LZCOUNT(uVar10) >> 3));
          ppppppbStack_b0 =
               (byte ******)
               ((ulong)uVar10 + 0xfefefefefefeff &
               (-1L << (((ulong)ppppbVar20 & 7) << 3) ^ 0xffffffffffffffffU));
          pppppppbVar14 = &ppppppbStack_b0;
          func_0x00116cec();
          ppppbVar13 = ppppbVar20;
          if ((uVar12 & 1) == 0) goto LAB_00117538;
LAB_00117748:
          if ((ulong)pppppppbVar15 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1188c4);
            (*pcVar8)();
          }
          if ((undefined *)((ulong)pppppppbVar15 & 0xfffff800) == &UNK_0000d800) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x118908);
            (*pcVar8)();
          }
          if ((byte *******)0x10ffff < pppppppbVar15) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1188d4);
            (*pcVar8)();
          }
          if (section_00000068.segname + 7 < pppppppbVar15) {
            uVar5 = (uVar34 & 0x3f) * 0x100;
            uVar23 = (uVar5 | uVar34 >> 6 & 0x3f) * 0x100;
            uVar10 = (uVar34 >> 0x12) + (uVar23 | uVar34 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
            if ((ulong)pppppppbVar15 >> 0x10 == 0) {
              uVar10 = (uVar34 >> 0xc) + uVar23 + 0x8181e1;
            }
            uVar23 = (uVar34 >> 6) + uVar5 + 0x81c1;
            if (section_000007e8.segname + 7 < pppppppbVar15) {
              uVar23 = uVar10;
            }
          }
          else {
            uVar23 = uVar34 + 1;
          }
          ppppbVar20 = (byte ****)(ulong)(4 - ((uint)LZCOUNT(uVar23) >> 3));
          ppppppbStack_b0 =
               (byte ******)
               ((ulong)uVar23 + 0xfefefefefefeff &
               (-1L << (((ulong)ppppbVar20 & 7) << 3) ^ 0xffffffffffffffffU));
          pppppppbVar15 = &ppppppbStack_b0;
          func_0x00116cec();
          ppppbVar22 = ppppbVar20;
        }
        uVar12 = unaff_x20[1];
        _swift_isUniquelyReferenced_nonNull_native();
        uVar10 = (uint)uVar12;
        ppppppbVar29 = (byte ******)unaff_x20[1];
        ppppbVar18 = ppppbVar2;
        ppppppbStack_b0 = ppppppbVar29;
        FUN_000e1d94();
        uVar26 = (ulong)~(uint)ppppbVar20 & 1;
        lVar11 = (long)ppppppbVar29[2] + uVar26;
        if (SCARRY8((long)ppppppbVar29[2],uVar26)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x11887c);
          (*pcVar8)();
        }
        if ((long)ppppppbVar29[3] < lVar11) {
          func_0x001224e0(lVar11);
          ppppbVar18 = ppppbVar2;
          FUN_000e1d94();
          if (((uint)ppppbVar20 & 1) != (uVar10 & 1)) {
LAB_00118918:
            __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                      (PTR___sSiN_0099b2c0);
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x118928);
            (*pcVar8)();
          }
LAB_001179e0:
          if (((ulong)ppppbVar20 & 1) == 0) goto LAB_00118460;
LAB_001179e8:
          pppppbVar28 = ppppppbStack_b0[7] + (long)ppppbVar18 * 5;
          *pppppbVar28 = (byte ****)pppppppbVar14;
          pppppbVar28[1] = ppppbVar13;
          *(undefined1 *)(pppppbVar28 + 2) = 0;
          pppppbVar28[3] = (byte ****)pppppppbVar15;
          pppppbVar28[4] = ppppbVar22;
        }
        else {
          if ((uVar12 & 1) != 0) goto LAB_001179e0;
          func_0x00121480();
          if (((ulong)ppppbVar20 & 1) != 0) goto LAB_001179e8;
LAB_00118460:
          ppppppbStack_b0[((ulong)ppppbVar18 >> 6) + 8] =
               (byte *****)
               ((ulong)ppppppbStack_b0[((ulong)ppppbVar18 >> 6) + 8] |
               1L << ((ulong)ppppbVar18 & 0x3f));
          ppppppbStack_b0[6][(long)ppppbVar18] = ppppbVar2;
          pppppbVar28 = ppppppbStack_b0[7] + (long)ppppbVar18 * 5;
          *pppppbVar28 = (byte ****)pppppppbVar14;
          pppppbVar28[1] = ppppbVar13;
          *(undefined1 *)(pppppbVar28 + 2) = 0;
          pppppbVar28[3] = (byte ****)pppppppbVar15;
          pppppbVar28[4] = ppppbVar22;
          if (SCARRY8((long)ppppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1188e0);
            (*pcVar8)();
          }
          ppppppbStack_b0[2] = (byte *****)((long)ppppppbStack_b0[2] + 1);
        }
        unaff_x20[1] = (long)ppppppbStack_b0;
        uVar12 = unaff_x20[2];
        _swift_isUniquelyReferenced_nonNull_native();
        ppppppbVar29 = (byte ******)unaff_x20[2];
        pppppppbVar16 = pppppppbVar15;
        ppppbVar20 = ppppbVar22;
        ppppppbStack_b0 = ppppppbVar29;
        FUN_000e1dc4();
        uVar26 = (ulong)~(uint)ppppbVar20 & 1;
        lVar11 = (long)ppppppbVar29[2] + uVar26;
        if (SCARRY8((long)ppppppbVar29[2],uVar26)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x118888);
          (*pcVar8)();
        }
        if ((long)ppppppbVar29[3] < lVar11) {
          func_0x00122244(lVar11,uVar12);
          pppppppbVar16 = pppppppbVar15;
          ppppbVar18 = ppppbVar22;
          FUN_000e1dc4();
          if (((uint)ppppbVar20 & 1) != ((uint)ppppbVar18 & 1)) goto LAB_00118908;
LAB_0011852c:
          if (((ulong)ppppbVar20 & 1) == 0) goto LAB_001185e0;
LAB_00118534:
          ppppppbStack_b0[7][(long)pppppppbVar16] = ppppbVar2;
        }
        else {
          if ((uVar12 & 1) != 0) goto LAB_0011852c;
          FUN_00121330();
          if (((ulong)ppppbVar20 & 1) != 0) goto LAB_00118534;
LAB_001185e0:
          ppppppbStack_b0[((ulong)pppppppbVar16 >> 6) + 8] =
               (byte *****)
               ((ulong)ppppppbStack_b0[((ulong)pppppppbVar16 >> 6) + 8] |
               1L << ((ulong)pppppppbVar16 & 0x3f));
          pppppbVar28 = ppppppbStack_b0[6];
          pppppbVar28[(long)pppppppbVar16 * 2] = (byte ****)pppppppbVar15;
          (pppppbVar28 + (long)pppppppbVar16 * 2)[1] = ppppbVar22;
          ppppppbStack_b0[7][(long)pppppppbVar16] = ppppbVar2;
          if (SCARRY8((long)ppppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1188ec);
            (*pcVar8)();
          }
          ppppppbStack_b0[2] = (byte *****)((long)ppppppbStack_b0[2] + 1);
        }
        unaff_x20[2] = (long)ppppppbStack_b0;
        uVar12 = unaff_x20[3];
        _swift_isUniquelyReferenced_nonNull_native();
        ppppppbVar29 = (byte ******)unaff_x20[3];
        pppppppbVar16 = pppppppbVar15;
        ppppbVar20 = ppppbVar22;
        ppppppbStack_b0 = ppppppbVar29;
        FUN_000e1dc4();
        uVar26 = (ulong)~(uint)ppppbVar20 & 1;
        lVar11 = (long)ppppppbVar29[2] + uVar26;
        if (SCARRY8((long)ppppppbVar29[2],uVar26)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x11888c);
          (*pcVar8)();
        }
        if ((long)ppppppbVar29[3] < lVar11) {
          func_0x00122244(lVar11,uVar12);
          pppppppbVar16 = pppppppbVar15;
          ppppbVar18 = ppppbVar22;
          FUN_000e1dc4();
          if (((uint)ppppbVar20 & 1) != ((uint)ppppbVar18 & 1)) goto LAB_00118908;
LAB_001186a0:
          if (((ulong)ppppbVar20 & 1) == 0) goto LAB_001186dc;
LAB_001186a8:
          ppppppbStack_b0[7][(long)pppppppbVar16] = ppppbVar2;
        }
        else {
          if ((uVar12 & 1) != 0) goto LAB_001186a0;
          FUN_00121330();
          if (((ulong)ppppbVar20 & 1) != 0) goto LAB_001186a8;
LAB_001186dc:
          ppppppbStack_b0[((ulong)pppppppbVar16 >> 6) + 8] =
               (byte *****)
               ((ulong)ppppppbStack_b0[((ulong)pppppppbVar16 >> 6) + 8] |
               1L << ((ulong)pppppppbVar16 & 0x3f));
          pppppbVar28 = ppppppbStack_b0[6];
          pppppbVar28[(long)pppppppbVar16 * 2] = (byte ****)pppppppbVar15;
          (pppppbVar28 + (long)pppppppbVar16 * 2)[1] = ppppbVar22;
          ppppppbStack_b0[7][(long)pppppppbVar16] = ppppbVar2;
          if (SCARRY8((long)ppppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1188f0);
            (*pcVar8)();
          }
          ppppppbStack_b0[2] = (byte *****)((long)ppppppbStack_b0[2] + 1);
        }
        unaff_x20[3] = (long)ppppppbStack_b0;
        ppppppbVar29 = ppppppbStack_b0;
        _swift_isUniquelyReferenced_nonNull_native();
        ppppppbVar32 = (byte ******)unaff_x20[3];
        pppppppbVar15 = pppppppbVar14;
        ppppbVar22 = ppppbVar13;
        ppppppbStack_b0 = ppppppbVar32;
        FUN_000e1dc4();
        uVar12 = (ulong)~(uint)ppppbVar22 & 1;
        lVar11 = (long)ppppppbVar32[2] + uVar12;
        if (SCARRY8((long)ppppppbVar32[2],uVar12)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x118890);
          (*pcVar8)();
        }
        if ((long)ppppppbVar32[3] < lVar11) {
          func_0x00122244(lVar11,ppppppbVar29);
          pppppppbVar15 = pppppppbVar14;
          ppppbVar20 = ppppbVar13;
          FUN_000e1dc4();
          if (((uint)ppppbVar22 & 1) != ((uint)ppppbVar20 & 1)) {
LAB_00118908:
            __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&UNK_009ae0e0)
            ;
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x118918);
            (*pcVar8)();
          }
LAB_001187a0:
          if (((ulong)ppppbVar22 & 1) == 0) goto LAB_001187d8;
LAB_001187a8:
          ppppppbStack_b0[7][(long)pppppppbVar15] = ppppbVar2;
        }
        else {
          if (((ulong)ppppppbVar29 & 1) != 0) goto LAB_001187a0;
          FUN_00121330();
          if (((ulong)ppppbVar22 & 1) != 0) goto LAB_001187a8;
LAB_001187d8:
          ppppppbStack_b0[((ulong)pppppppbVar15 >> 6) + 8] =
               (byte *****)
               ((ulong)ppppppbStack_b0[((ulong)pppppppbVar15 >> 6) + 8] |
               1L << ((ulong)pppppppbVar15 & 0x3f));
          pppppbVar28 = ppppppbStack_b0[6];
          pppppbVar28[(long)pppppppbVar15 * 2] = (byte ****)pppppppbVar14;
          (pppppbVar28 + (long)pppppppbVar15 * 2)[1] = ppppbVar13;
          ppppppbStack_b0[7][(long)pppppppbVar15] = ppppbVar2;
          if (SCARRY8((long)ppppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1188f4);
            (*pcVar8)();
          }
          ppppppbStack_b0[2] = (byte *****)((long)ppppppbStack_b0[2] + 1);
        }
        unaff_x20[3] = (long)ppppppbStack_b0;
      }
      else {
        lVar11 = *unaff_x20;
        if ((uVar12 & 1) == 0) {
          if (pppppppbVar15 == (byte *******)0x0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1188a0);
            (*pcVar8)();
          }
          ppppbVar13 = (byte ****)((long)ppppbVar22 + (long)pppppppbVar15);
          pppppppbVar16 = pppppppbVar15;
        }
        else {
          if ((ulong)pppppppbVar15 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x118894);
            (*pcVar8)();
          }
          if ((undefined *)((ulong)pppppppbVar15 & 0xfffff800) == &UNK_0000d800) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1188f8);
            (*pcVar8)();
          }
          if ((byte *******)0x10ffff < pppppppbVar15) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1188bc);
            (*pcVar8)();
          }
          if (section_00000068.segname + 7 < pppppppbVar15) {
            uVar5 = (uVar34 & 0x3f) * 0x100;
            uVar23 = (uVar5 | uVar34 >> 6 & 0x3f) * 0x100;
            uVar10 = (uVar34 >> 0x12) + (uVar23 | uVar34 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
            if ((ulong)pppppppbVar15 >> 0x10 == 0) {
              uVar10 = (uVar34 >> 0xc) + uVar23 + 0x8181e1;
            }
            uVar23 = (uVar34 >> 6) + uVar5 + 0x81c1;
            if (section_000007e8.segname + 7 < pppppppbVar15) {
              uVar23 = uVar10;
            }
          }
          else {
            uVar23 = uVar34 + 1;
          }
          ppppbVar20 = (byte ****)(ulong)(4 - ((uint)LZCOUNT(uVar23) >> 3));
          ppppppbStack_b0 =
               (byte ******)
               ((ulong)uVar23 + 0xfefefefefefeff &
               (-1L << (((ulong)ppppbVar20 & 7) << 3) ^ 0xffffffffffffffffU));
          pppppppbVar16 = &ppppppbStack_b0;
          func_0x00116cec();
          ppppbVar13 = ppppbVar20;
        }
        uVar17 = unaff_x20[1];
        _swift_isUniquelyReferenced_nonNull_native();
        uVar10 = (uint)uVar17;
        ppppppbVar29 = (byte ******)unaff_x20[1];
        ppppbVar18 = ppppbVar2;
        ppppppbStack_b0 = ppppppbVar29;
        FUN_000e1d94();
        uVar27 = (ulong)~(uint)ppppbVar20 & 1;
        lVar1 = (long)ppppppbVar29[2] + uVar27;
        if (SCARRY8((long)ppppppbVar29[2],uVar27)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x11886c);
          (*pcVar8)();
        }
        if ((long)ppppppbVar29[3] < lVar1) {
          func_0x001224e0(lVar1);
          ppppbVar18 = ppppbVar2;
          FUN_000e1d94();
          if (((uint)ppppbVar20 & 1) != (uVar10 & 1)) goto LAB_00118918;
LAB_001179b8:
          if (((ulong)ppppbVar20 & 1) == 0) goto LAB_00117cc4;
LAB_001179c0:
          pppppbVar28 = ppppppbStack_b0[7] + (long)ppppbVar18 * 5;
          *pppppbVar28 = (byte ****)pppppppbVar16;
          pppppbVar28[1] = ppppbVar13;
          *(undefined1 *)(pppppbVar28 + 2) = 0;
          pppppbVar28[3] = (byte ****)pppppppbVar16;
          pppppbVar28[4] = ppppbVar13;
        }
        else {
          if ((uVar17 & 1) != 0) goto LAB_001179b8;
          func_0x00121480();
          if (((ulong)ppppbVar20 & 1) != 0) goto LAB_001179c0;
LAB_00117cc4:
          ppppppbStack_b0[((ulong)ppppbVar18 >> 6) + 8] =
               (byte *****)
               ((ulong)ppppppbStack_b0[((ulong)ppppbVar18 >> 6) + 8] |
               1L << ((ulong)ppppbVar18 & 0x3f));
          ppppppbStack_b0[6][(long)ppppbVar18] = ppppbVar2;
          pppppbVar28 = ppppppbStack_b0[7] + (long)ppppbVar18 * 5;
          *pppppbVar28 = (byte ****)pppppppbVar16;
          pppppbVar28[1] = ppppbVar13;
          *(undefined1 *)(pppppbVar28 + 2) = 0;
          pppppbVar28[3] = (byte ****)pppppppbVar16;
          pppppbVar28[4] = ppppbVar13;
          if (SCARRY8((long)ppppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1188d0);
            (*pcVar8)();
          }
          ppppppbStack_b0[2] = (byte *****)((long)ppppppbStack_b0[2] + 1);
        }
        unaff_x20[1] = (long)ppppppbStack_b0;
        uVar17 = unaff_x20[2];
        _swift_isUniquelyReferenced_nonNull_native();
        ppppppbVar29 = (byte ******)unaff_x20[2];
        pppppppbVar19 = pppppppbVar16;
        ppppbVar20 = ppppbVar13;
        ppppppbStack_b0 = ppppppbVar29;
        FUN_000e1dc4();
        uVar27 = (ulong)~(uint)ppppbVar20 & 1;
        lVar1 = (long)ppppppbVar29[2] + uVar27;
        if (SCARRY8((long)ppppppbVar29[2],uVar27)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x118878);
          (*pcVar8)();
        }
        if ((long)ppppppbVar29[3] < lVar1) {
          func_0x00122244(lVar1,uVar17);
          pppppppbVar19 = pppppppbVar16;
          ppppbVar18 = ppppbVar13;
          FUN_000e1dc4();
          if (((uint)ppppbVar20 & 1) != ((uint)ppppbVar18 & 1)) goto LAB_00118908;
LAB_00117d90:
          if (((ulong)ppppbVar20 & 1) == 0) goto LAB_00117f24;
LAB_00117d98:
          ppppppbStack_b0[7][(long)pppppppbVar19] = ppppbVar2;
        }
        else {
          if ((uVar17 & 1) != 0) goto LAB_00117d90;
          FUN_00121330();
          if (((ulong)ppppbVar20 & 1) != 0) goto LAB_00117d98;
LAB_00117f24:
          ppppppbStack_b0[((ulong)pppppppbVar19 >> 6) + 8] =
               (byte *****)
               ((ulong)ppppppbStack_b0[((ulong)pppppppbVar19 >> 6) + 8] |
               1L << ((ulong)pppppppbVar19 & 0x3f));
          pppppbVar28 = ppppppbStack_b0[6];
          pppppbVar28[(long)pppppppbVar19 * 2] = (byte ****)pppppppbVar16;
          (pppppbVar28 + (long)pppppppbVar19 * 2)[1] = ppppbVar13;
          ppppppbStack_b0[7][(long)pppppppbVar19] = ppppbVar2;
          if (SCARRY8((long)ppppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1188dc);
            (*pcVar8)();
          }
          ppppppbStack_b0[2] = (byte *****)((long)ppppppbStack_b0[2] + 1);
        }
        unaff_x20[2] = (long)ppppppbStack_b0;
        uVar17 = unaff_x20[3];
        _swift_isUniquelyReferenced_nonNull_native();
        ppppppbVar29 = (byte ******)unaff_x20[3];
        pppppppbVar19 = pppppppbVar16;
        ppppbVar20 = ppppbVar13;
        ppppppbStack_b0 = ppppppbVar29;
        FUN_000e1dc4();
        uVar27 = (ulong)~(uint)ppppbVar20 & 1;
        lVar1 = (long)ppppppbVar29[2] + uVar27;
        if (SCARRY8((long)ppppppbVar29[2],uVar27)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x118884);
          (*pcVar8)();
        }
        if ((long)ppppppbVar29[3] < lVar1) {
          func_0x00122244(lVar1,uVar17);
          pppppppbVar19 = pppppppbVar16;
          ppppbVar18 = ppppbVar13;
          FUN_000e1dc4();
          if (((uint)ppppbVar20 & 1) != ((uint)ppppbVar18 & 1)) goto LAB_00118908;
        }
        else if ((uVar17 & 1) == 0) {
          FUN_00121330();
        }
        if (((ulong)ppppbVar20 & 1) == 0) {
          ppppppbStack_b0[((ulong)pppppppbVar19 >> 6) + 8] =
               (byte *****)
               ((ulong)ppppppbStack_b0[((ulong)pppppppbVar19 >> 6) + 8] |
               1L << ((ulong)pppppppbVar19 & 0x3f));
          pppppbVar28 = ppppppbStack_b0[6];
          pppppbVar28[(long)pppppppbVar19 * 2] = (byte ****)pppppppbVar16;
          (pppppbVar28 + (long)pppppppbVar19 * 2)[1] = ppppbVar13;
          ppppppbStack_b0[7][(long)pppppppbVar19] = ppppbVar2;
          if (SCARRY8((long)ppppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1188e8);
            (*pcVar8)();
          }
          ppppppbStack_b0[2] = (byte *****)((long)ppppppbStack_b0[2] + 1);
        }
        else {
          ppppppbStack_b0[7][(long)pppppppbVar19] = ppppbVar2;
        }
        unaff_x20[3] = (long)ppppppbStack_b0;
        ppppppbVar29 = pppppppbVar14[2];
        if (ppppppbVar29 != (byte ******)0x0) {
          ppppppbVar32 = (byte ******)0x0;
          pppppppbVar16 = pppppppbVar14 + 6;
          do {
            if (pppppppbVar14[2] <= ppppppbVar32) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x118848);
              (*pcVar8)();
            }
            ppppppbVar36 = pppppppbVar16[-2];
            if (((ulong)*pppppppbVar16 & 1) == 0) {
              if (ppppppbVar36 == (byte ******)0x0) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x118858);
                (*pcVar8)();
              }
              ppppbVar20 = (byte ****)((long)pppppppbVar16[-1] + (long)ppppppbVar36);
            }
            else {
              if ((ulong)ppppppbVar36 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x118854);
                (*pcVar8)();
              }
              if ((undefined *)((ulong)ppppppbVar36 & 0xfffff800) == &UNK_0000d800) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x118868);
                (*pcVar8)();
              }
              if ((byte ******)0x10ffff < ppppppbVar36) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x11885c);
                (*pcVar8)();
              }
              uVar10 = (uint)ppppppbVar36;
              if (ppppppbVar36 < (byte ******)0x80) {
                uVar10 = uVar10 + 1;
              }
              else {
                uVar5 = (uVar10 & 0x3f) * 0x100;
                uVar34 = (uVar5 | uVar10 >> 6 & 0x3f) * 0x100;
                uVar23 = (uVar10 >> 0x12) + (uVar34 | uVar10 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
                if ((ulong)ppppppbVar36 >> 0x10 == 0) {
                  uVar23 = (uVar10 >> 0xc) + uVar34 + 0x8181e1;
                }
                uVar10 = (uVar10 >> 6) + uVar5 + 0x81c1;
                if ((byte ******)0x7ff < ppppppbVar36) {
                  uVar10 = uVar23;
                }
              }
              ppppppbVar30 = (byte ******)(ulong)(4 - ((uint)LZCOUNT(uVar10) >> 3));
              uStack_98 = (ulong)uVar10 + 0xfefefefefefeff &
                          (-1L << (((ulong)ppppppbVar30 & 7) << 3) ^ 0xffffffffffffffffU);
              ppppppbVar36 = ppppppbVar30;
              _swift_slowAlloc(ppppppbVar30,0xffffffffffffffff);
              _memcpy();
              _swift_beginAccess(lVar11 + 0x10,&ppppppbStack_b0,0x21,0);
              uVar35 = *(ulong *)(lVar11 + 0x10);
              uVar17 = uVar35;
              _swift_isUniquelyReferenced_nonNull_native();
              *(ulong *)(lVar11 + 0x10) = uVar35;
              uVar27 = uVar35;
              if ((uVar17 & 1) == 0) {
                uVar27 = 0;
                func_0x000d6624(0,*(long *)(uVar35 + 0x10) + 1,1,uVar35);
                *(ulong *)(lVar11 + 0x10) = uVar27;
              }
              uVar17 = *(ulong *)(uVar27 + 0x10);
              uVar35 = uVar27;
              if (*(ulong *)(uVar27 + 0x18) >> 1 <= uVar17) {
                uVar35 = (ulong)(1 < *(ulong *)(uVar27 + 0x18));
                func_0x000d6624(uVar35,uVar17 + 1,1,uVar27);
              }
              ppppbVar20 = (byte ****)((long)ppppppbVar36 + (long)ppppppbVar30);
              *(ulong *)(uVar35 + 0x10) = uVar17 + 1;
              lVar1 = uVar35 + uVar17 * 0x10;
              *(byte *******)(lVar1 + 0x20) = ppppppbVar36;
              *(byte *****)(lVar1 + 0x28) = ppppbVar20;
              *(ulong *)(lVar11 + 0x10) = uVar35;
              _swift_endAccess(&ppppppbStack_b0);
            }
            uVar17 = unaff_x20[2];
            _swift_isUniquelyReferenced_nonNull_native();
            ppppppbVar31 = (byte ******)unaff_x20[2];
            ppppppbVar30 = ppppppbVar36;
            ppppbVar13 = ppppbVar20;
            ppppppbStack_b0 = ppppppbVar31;
            FUN_000e1dc4();
            uVar27 = (ulong)~(uint)ppppbVar13 & 1;
            lVar1 = (long)ppppppbVar31[2] + uVar27;
            if (SCARRY8((long)ppppppbVar31[2],uVar27)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x11884c);
              (*pcVar8)();
            }
            if ((long)ppppppbVar31[3] < lVar1) {
              func_0x00122244(lVar1,uVar17);
              ppppppbVar30 = ppppppbVar36;
              ppppbVar18 = ppppbVar20;
              FUN_000e1dc4();
              if (((uint)ppppbVar13 & 1) != ((uint)ppppbVar18 & 1)) goto LAB_00118908;
LAB_00118200:
              if (((ulong)ppppbVar13 & 1) == 0) goto LAB_001182e0;
LAB_00118208:
              ppppppbStack_b0[7][(long)ppppppbVar30] = ppppbVar2;
            }
            else {
              if ((uVar17 & 1) != 0) goto LAB_00118200;
              FUN_00121330();
              if (((ulong)ppppbVar13 & 1) != 0) goto LAB_00118208;
LAB_001182e0:
              ppppppbStack_b0[((ulong)ppppppbVar30 >> 6) + 8] =
                   (byte *****)
                   ((ulong)ppppppbStack_b0[((ulong)ppppppbVar30 >> 6) + 8] |
                   1L << ((ulong)ppppppbVar30 & 0x3f));
              pppppbVar28 = ppppppbStack_b0[6];
              pppppbVar28[(long)ppppppbVar30 * 2] = (byte ****)ppppppbVar36;
              (pppppbVar28 + (long)ppppppbVar30 * 2)[1] = ppppbVar20;
              ppppppbStack_b0[7][(long)ppppppbVar30] = ppppbVar2;
              if (SCARRY8((long)ppppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x118860);
                (*pcVar8)();
              }
              ppppppbStack_b0[2] = (byte *****)((long)ppppppbStack_b0[2] + 1);
            }
            unaff_x20[2] = (long)ppppppbStack_b0;
            uVar17 = unaff_x20[3];
            _swift_isUniquelyReferenced_nonNull_native();
            ppppppbVar31 = (byte ******)unaff_x20[3];
            ppppppbVar30 = ppppppbVar36;
            ppppbVar13 = ppppbVar20;
            ppppppbStack_b0 = ppppppbVar31;
            FUN_000e1dc4();
            uVar27 = (ulong)~(uint)ppppbVar13 & 1;
            lVar1 = (long)ppppppbVar31[2] + uVar27;
            if (SCARRY8((long)ppppppbVar31[2],uVar27)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x118850);
              (*pcVar8)();
            }
            if ((long)ppppppbVar31[3] < lVar1) {
              func_0x00122244(lVar1,uVar17);
              ppppppbVar30 = ppppppbVar36;
              ppppbVar18 = ppppbVar20;
              FUN_000e1dc4();
              if (((uint)ppppbVar13 & 1) != ((uint)ppppbVar18 & 1)) goto LAB_00118908;
LAB_001183a0:
              if (((ulong)ppppbVar13 & 1) != 0) goto LAB_00118060;
LAB_001183a8:
              ppppppbStack_b0[((ulong)ppppppbVar30 >> 6) + 8] =
                   (byte *****)
                   ((ulong)ppppppbStack_b0[((ulong)ppppppbVar30 >> 6) + 8] |
                   1L << ((ulong)ppppppbVar30 & 0x3f));
              pppppbVar28 = ppppppbStack_b0[6];
              pppppbVar28[(long)ppppppbVar30 * 2] = (byte ****)ppppppbVar36;
              (pppppbVar28 + (long)ppppppbVar30 * 2)[1] = ppppbVar20;
              ppppppbStack_b0[7][(long)ppppppbVar30] = ppppbVar2;
              if (SCARRY8((long)ppppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x118864);
                (*pcVar8)();
              }
              ppppppbStack_b0[2] = (byte *****)((long)ppppppbStack_b0[2] + 1);
            }
            else {
              if ((uVar17 & 1) != 0) goto LAB_001183a0;
              FUN_00121330();
              if (((ulong)ppppbVar13 & 1) == 0) goto LAB_001183a8;
LAB_00118060:
              ppppppbStack_b0[7][(long)ppppppbVar30] = ppppbVar2;
            }
            ppppppbVar32 = (byte ******)((long)ppppppbVar32 + 1);
            unaff_x20[3] = (long)ppppppbStack_b0;
            pppppppbVar16 = pppppppbVar16 + 3;
          } while (ppppppbVar29 != ppppppbVar32);
        }
        func_0x0011b4d0(pppppppbVar15,ppppbVar22,uVar12,pppppppbVar14,uVar26,bVar4);
      }
      lVar33 = lVar33 + 1;
    } while (lVar33 != lVar24);
  }
  return;
}



/* Entry: 00119f64; end: 00119f9f;  */

void FUN_00119f64(undefined8 *param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_0011aea0(&uStack_50);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[5] = uStack_28;
  param_1[4] = uStack_30;
  return;
}



/* Entry: 00119fa0; end: 0011a057;  */

void FUN_00119fa0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar2 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar2 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puVar3 = puVar1;
  lStack_70 = lVar2;
  FUN_0019be38();
  puVar4 = puVar1;
  puStack_68 = puVar3;
  FUN_0019bf34();
  puVar3 = puVar1;
  puStack_60 = puVar4;
  FUN_0019bf34();
  puStack_50 = puVar1;
  puStack_48 = puVar1;
  uStack_78 = 0;
  puStack_58 = puVar3;
  FUN_000dec04(param_2,param_3,param_4,&uStack_78,&lStack_70);
  param_1[1] = (long)puStack_68;
  *param_1 = lStack_70;
  param_1[3] = (long)puStack_58;
  param_1[2] = (long)puStack_60;
  param_1[5] = (long)puStack_48;
  param_1[4] = (long)puStack_50;
  return;
}



/* Entry: 0011a058; end: 0011ac2f;  */

/* WARNING: Removing unreachable block (ram,0x0011ac08) */
/* WARNING: Removing unreachable block (ram,0x0011ac0c) */
/* WARNING: Removing unreachable block (ram,0x0011ac20) */

void FUN_0011a058(undefined1 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined1 *puVar23;
  undefined *puStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  long *plStack_88;
  undefined1 *puStack_80;
  undefined1 uStack_78;
  long *plStack_70;
  undefined1 *puStack_68;
  
  plVar7 = param_3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    _swift_beginAccess(param_3,auStack_a0,0,0);
    lVar22 = *param_3 + 1;
    if (SCARRY8(*param_3,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x11a0c4);
      (*pcVar3)();
    }
    break;
  case 1:
    _swift_beginAccess(param_3,auStack_a0,0,0);
    iVar5 = (int)plVar7;
    lVar21 = *param_3;
    FUN_000de9a0();
    lVar22 = lVar21 + iVar5;
    if (SCARRY8(lVar21,(long)iVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x11ab68);
      (*pcVar3)();
    }
    break;
  case 2:
    _swift_beginAccess(param_3,auStack_a0,0,0);
    lVar22 = *param_3 + 1;
    if (SCARRY8(*param_3,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x11a18c);
      (*pcVar3)();
    }
    goto code_r0x0011a1b4;
  case 3:
    plVar13 = param_3;
    _swift_beginAccess(param_3,auStack_a0,0,0);
    iVar5 = (int)plVar13;
    lVar21 = *param_3;
    FUN_000de9a0();
    lVar22 = lVar21 + iVar5;
    if (SCARRY8(lVar21,(long)iVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x11ab64);
      (*pcVar3)();
    }
code_r0x0011a1b4:
    puVar15 = auStack_b8;
    _swift_beginAccess(param_3,puVar15,1,0);
    *param_3 = lVar22;
    func_0x001168c0();
    puVar17 = (undefined1 *)0x0;
    if (plVar7 != (long *)0x0) {
      puVar17 = (undefined1 *)((long)plVar7 + (long)puVar15);
    }
    plVar13 = plVar7;
    func_0x00116a8c();
    uVar8 = *param_4;
    _swift_retain(uVar8);
    puVar23 = puVar15;
    func_0x00116b2c();
    _swift_bridgeObjectRelease(puVar15);
    _swift_release(uVar8);
code_r0x0011a66c:
    uStack_78 = 0;
    uVar8 = param_4[1];
    plStack_88 = plVar13;
    puStack_80 = puVar23;
    plStack_70 = plVar7;
    puStack_68 = puVar17;
    _swift_isUniquelyReferenced_nonNull_native(uVar8);
    puStack_d0 = (undefined *)param_4[1];
    param_4[1] = 0x8000000000000000;
    FUN_000f3944(&plStack_88,lVar22,uVar8);
    uVar8 = param_4[1];
    param_4[1] = puStack_d0;
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = param_4[2];
    _swift_isUniquelyReferenced_nonNull_native(uVar8);
    puStack_d0 = (undefined *)param_4[2];
    param_4[2] = 0x8000000000000000;
    func_0x000f3838(lVar22,plVar7,puVar17,uVar8);
    uVar8 = param_4[2];
    param_4[2] = puStack_d0;
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = param_4[3];
    _swift_isUniquelyReferenced_nonNull_native(uVar8);
    puStack_d0 = (undefined *)param_4[3];
    param_4[3] = 0x8000000000000000;
    func_0x000f3838(lVar22,plVar7,puVar17,uVar8);
    uVar8 = param_4[3];
    param_4[3] = puStack_d0;
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = param_4[3];
    _swift_isUniquelyReferenced_nonNull_native(uVar8);
    puStack_d0 = (undefined *)param_4[3];
    param_4[3] = 0x8000000000000000;
    goto code_r0x0011a744;
  case 4:
    _swift_beginAccess(param_3,auStack_a0,0,0);
    lVar22 = *param_3 + 1;
    if (SCARRY8(*param_3,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x11a13c);
      (*pcVar3)();
    }
    goto code_r0x0011a374;
  case 5:
    plVar13 = param_3;
    _swift_beginAccess(param_3,auStack_a0,0,0);
    iVar5 = (int)plVar13;
    lVar21 = *param_3;
    FUN_000de9a0();
    lVar22 = lVar21 + iVar5;
    if (SCARRY8(lVar21,(long)iVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x11ab6c);
      (*pcVar3)();
    }
code_r0x0011a374:
    puVar23 = auStack_b8;
    _swift_beginAccess(param_3,puVar23,1,0);
    *param_3 = lVar22;
    func_0x001168c0();
    puVar17 = (undefined1 *)0x0;
    if (plVar7 != (long *)0x0) {
      puVar17 = (undefined1 *)((long)plVar7 + (long)puVar23);
    }
    plVar13 = plVar7;
    func_0x001168c0();
    if (plVar13 == (long *)0x0) {
      puVar23 = (undefined1 *)0x0;
    }
    else {
      puVar23 = (undefined1 *)((long)plVar13 + (long)puVar23);
    }
    goto code_r0x0011a66c;
  case 6:
    _swift_beginAccess(param_3,auStack_a0,0,0);
    lVar22 = *param_3 + 1;
    if (SCARRY8(*param_3,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x11ab70);
      (*pcVar3)();
    }
    goto code_r0x0011a3d8;
  case 7:
    _swift_beginAccess(param_3,auStack_a0,0,0);
    iVar5 = (int)plVar7;
    lVar21 = *param_3;
    FUN_000de9a0();
    lVar22 = lVar21 + iVar5;
    if (SCARRY8(lVar21,(long)iVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x11a254);
      (*pcVar3)();
    }
code_r0x0011a3d8:
    puVar23 = auStack_b8;
    plVar7 = param_3;
    _swift_beginAccess(param_3,puVar23,1,0);
    *param_3 = lVar22;
    func_0x001168c0();
    puVar17 = (undefined1 *)((long)plVar7 + (long)puVar23);
    puVar15 = (undefined1 *)0x0;
    if (plVar7 != (long *)0x0) {
      puVar15 = puVar17;
    }
    uVar8 = param_4[2];
    _swift_isUniquelyReferenced_nonNull_native(uVar8);
    plStack_88 = (long *)param_4[2];
    param_4[2] = 0x8000000000000000;
    func_0x000f3838(lVar22,plVar7,puVar15,uVar8);
    uVar8 = param_4[2];
    param_4[2] = plStack_88;
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = param_4[3];
    _swift_isUniquelyReferenced_nonNull_native(uVar8);
    plStack_88 = (long *)param_4[3];
    param_4[3] = 0x8000000000000000;
    func_0x000f3838(lVar22,plVar7,puVar15,uVar8);
    uVar8 = param_4[3];
    param_4[3] = plStack_88;
    _swift_bridgeObjectRelease(uVar8);
    if (plVar7 == (long *)0x0) {
      puStack_80 = (undefined1 *)0x0;
      plVar13 = (long *)0x0;
    }
    else {
      puStack_80 = puVar17;
      plVar13 = plVar7;
      if (puVar23 != (undefined1 *)0x0) {
        puVar18 = (undefined1 *)0x0;
        do {
          if (*(byte *)((long)plVar7 + (long)puVar18) - 0x41 < 0x1a) {
            puVar17 = puVar17 + -(long)plVar7;
            __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
            puVar23 = puVar17;
            __sSS10lowercasedSSyF();
            _swift_bridgeObjectRelease(puVar17);
            uVar8 = *param_4;
            _swift_retain(uVar8);
            puVar17 = puVar23;
            func_0x00116b2c();
            _swift_bridgeObjectRelease(puVar23);
            _swift_release(uVar8);
            uVar8 = param_4[2];
            _swift_isUniquelyReferenced_nonNull_native(uVar8);
            plStack_88 = (long *)param_4[2];
            param_4[2] = 0x8000000000000000;
            func_0x000f3838(lVar22,plVar13,puVar17,uVar8);
            uVar8 = param_4[2];
            param_4[2] = plStack_88;
            _swift_bridgeObjectRelease(uVar8);
            uVar8 = param_4[3];
            _swift_isUniquelyReferenced_nonNull_native(uVar8);
            plStack_88 = (long *)param_4[3];
            param_4[3] = 0x8000000000000000;
            func_0x000f3838(lVar22,plVar13,puVar17,uVar8);
            uVar8 = param_4[3];
            param_4[3] = plStack_88;
            _swift_bridgeObjectRelease(uVar8);
            puStack_80 = puVar17;
            break;
          }
          puVar18 = puVar18 + 1;
          puStack_80 = puVar15;
        } while (puVar23 != puVar18);
      }
    }
    uStack_78 = 0;
    uVar8 = param_4[1];
    plStack_88 = plVar13;
    plStack_70 = plVar7;
    puStack_68 = puVar15;
    _swift_isUniquelyReferenced_nonNull_native(uVar8);
    puStack_d0 = (undefined *)param_4[1];
    param_4[1] = 0x8000000000000000;
    FUN_000f3944(&plStack_88,lVar22,uVar8);
    uVar8 = param_4[1];
    param_4[1] = puStack_d0;
    goto code_r0x0011ab18;
  case 8:
    _swift_beginAccess(param_3,auStack_a0,0,0);
    lVar22 = *param_3 + 1;
    if (SCARRY8(*param_3,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x11abbc);
      (*pcVar3)();
    }
    goto code_r0x0011a52c;
  case 9:
    _swift_beginAccess(param_3,auStack_a0,0,0);
    iVar5 = (int)plVar7;
    lVar21 = *param_3;
    FUN_000de9a0();
    lVar22 = lVar21 + iVar5;
    if (SCARRY8(lVar21,(long)iVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x11a168);
      (*pcVar3)();
    }
code_r0x0011a52c:
    puVar23 = auStack_b8;
    plVar7 = param_3;
    _swift_beginAccess(param_3,puVar23,1,0);
    *param_3 = lVar22;
    func_0x001168c0();
    puVar17 = (undefined1 *)0x0;
    if (plVar7 != (long *)0x0) {
      puVar17 = (undefined1 *)((long)plVar7 + (long)puVar23);
    }
    uStack_78 = 0;
    uVar8 = param_4[1];
    plStack_88 = plVar7;
    puStack_80 = puVar17;
    plStack_70 = plVar7;
    puStack_68 = puVar17;
    _swift_isUniquelyReferenced_nonNull_native(uVar8);
    puStack_d0 = (undefined *)param_4[1];
    param_4[1] = 0x8000000000000000;
    FUN_000f3944(&plStack_88,lVar22,uVar8);
    uVar8 = param_4[1];
    param_4[1] = puStack_d0;
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = param_4[2];
    _swift_isUniquelyReferenced_nonNull_native(uVar8);
    puStack_d0 = (undefined *)param_4[2];
    param_4[2] = 0x8000000000000000;
    func_0x000f3838(lVar22,plVar7,puVar17,uVar8);
    uVar8 = param_4[2];
    param_4[2] = puStack_d0;
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = param_4[3];
    _swift_isUniquelyReferenced_nonNull_native(uVar8);
    puStack_d0 = (undefined *)param_4[3];
    param_4[3] = 0x8000000000000000;
    func_0x000f3838(lVar22,plVar7,puVar17,uVar8);
    puVar9 = (undefined *)param_4[3];
    param_4[3] = puStack_d0;
    _swift_bridgeObjectRelease();
    if (*param_2 == param_2[1]) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x11ab54);
      (*pcVar3)();
    }
    FUN_000de9a0();
    if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x11ab58);
      (*pcVar3)();
    }
    puVar10 = PTR___swiftEmptyArrayStorage_0099b8f0;
    if (puVar9 != (undefined *)0x0) {
      uVar8 = 0xaedc70;
      func_0x000115a8(0xaedc70,&UNK_007d9f60);
      puVar10 = puVar9;
      __ss15ContiguousArrayV28_allocateBufferUninitialized15minimumCapacitys01_abD0VyxGSi_tFZ
                (puVar9,uVar8);
      *(undefined **)(puVar10 + 0x10) = puVar9;
    }
    puStack_d0 = puVar10 + 0x20;
    uStack_c0 = 0;
    puStack_c8 = puVar9;
    func_0x0011693c(&puStack_d0,&uStack_c0,puVar9,param_2);
    uVar6 = uStack_c0;
    if ((long)puVar9 < (long)uStack_c0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x11ab5c);
      (*pcVar3)();
    }
    *(ulong *)(puVar10 + 0x10) = uStack_c0;
    if (uStack_c0 != 0) {
      uVar14 = 0;
      plVar7 = (long *)(puVar10 + 0x28);
      do {
        if (*(ulong *)(puVar10 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x11ab40);
          (*pcVar3)();
        }
        uVar2 = plVar7[-1];
        uVar20 = 0;
        if (uVar2 != 0) {
          uVar20 = *plVar7 + uVar2;
        }
        uVar11 = param_4[2];
        _swift_isUniquelyReferenced_nonNull_native();
        puVar9 = (undefined *)param_4[2];
        param_4[2] = 0x8000000000000000;
        uVar12 = uVar2;
        uVar16 = uVar20;
        puStack_d0 = puVar9;
        FUN_000e1dc4();
        uVar19 = (ulong)~(uint)uVar16 & 1;
        lVar21 = *(long *)(puVar9 + 0x10) + uVar19;
        if (SCARRY8(*(long *)(puVar9 + 0x10),uVar19)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x11ab44);
          (*pcVar3)();
        }
        if (*(long *)(puVar9 + 0x18) < lVar21) {
          func_0x00122244(lVar21,uVar11);
          uVar12 = uVar2;
          uVar11 = uVar20;
          FUN_000e1dc4();
          if (((uint)uVar16 & 1) != ((uint)uVar11 & 1)) goto code_r0x0011ac10;
code_r0x0011a890:
          if ((uVar16 & 1) == 0) goto code_r0x0011a8bc;
code_r0x0011a898:
          *(long *)(*(long *)(puStack_d0 + 0x38) + uVar12 * 8) = lVar22;
        }
        else {
          if ((uVar11 & 1) != 0) goto code_r0x0011a890;
          FUN_00121330();
          if ((uVar16 & 1) != 0) goto code_r0x0011a898;
code_r0x0011a8bc:
          *(ulong *)(puStack_d0 + (uVar12 >> 6) * 8 + 0x40) =
               *(ulong *)(puStack_d0 + (uVar12 >> 6) * 8 + 0x40) | 1L << (uVar12 & 0x3f);
          puVar1 = (ulong *)(*(long *)(puStack_d0 + 0x30) + uVar12 * 0x10);
          *puVar1 = uVar2;
          puVar1[1] = uVar20;
          *(long *)(*(long *)(puStack_d0 + 0x38) + uVar12 * 8) = lVar22;
          if (SCARRY8(*(long *)(puStack_d0 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x11ab4c);
            (*pcVar3)();
          }
          *(long *)(puStack_d0 + 0x10) = *(long *)(puStack_d0 + 0x10) + 1;
        }
        uVar8 = param_4[2];
        param_4[2] = puStack_d0;
        _swift_bridgeObjectRelease(uVar8);
        uVar11 = param_4[3];
        _swift_isUniquelyReferenced_nonNull_native();
        puVar9 = (undefined *)param_4[3];
        param_4[3] = 0x8000000000000000;
        uVar12 = uVar2;
        uVar16 = uVar20;
        puStack_d0 = puVar9;
        FUN_000e1dc4();
        uVar19 = (ulong)~(uint)uVar16 & 1;
        lVar21 = *(long *)(puVar9 + 0x10) + uVar19;
        if (SCARRY8(*(long *)(puVar9 + 0x10),uVar19)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x11ab48);
          (*pcVar3)();
        }
        if (*(long *)(puVar9 + 0x18) < lVar21) {
          func_0x00122244(lVar21,uVar11);
          uVar12 = uVar2;
          uVar11 = uVar20;
          FUN_000e1dc4();
          if (((uint)uVar16 & 1) != ((uint)uVar11 & 1)) {
code_r0x0011ac10:
            __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&UNK_009ae0e0)
            ;
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x11ac20);
            (*pcVar3)();
          }
code_r0x0011a98c:
          if ((uVar16 & 1) != 0) goto code_r0x0011a7c8;
code_r0x0011a994:
          *(ulong *)(puStack_d0 + (uVar12 >> 6) * 8 + 0x40) =
               *(ulong *)(puStack_d0 + (uVar12 >> 6) * 8 + 0x40) | 1L << (uVar12 & 0x3f);
          puVar1 = (ulong *)(*(long *)(puStack_d0 + 0x30) + uVar12 * 0x10);
          *puVar1 = uVar2;
          puVar1[1] = uVar20;
          *(long *)(*(long *)(puStack_d0 + 0x38) + uVar12 * 8) = lVar22;
          if (SCARRY8(*(long *)(puStack_d0 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x11ab50);
            (*pcVar3)();
          }
          *(long *)(puStack_d0 + 0x10) = *(long *)(puStack_d0 + 0x10) + 1;
        }
        else {
          if ((uVar11 & 1) != 0) goto code_r0x0011a98c;
          FUN_00121330();
          if ((uVar16 & 1) == 0) goto code_r0x0011a994;
code_r0x0011a7c8:
          *(long *)(*(long *)(puStack_d0 + 0x38) + uVar12 * 8) = lVar22;
        }
        uVar14 = uVar14 + 1;
        uVar8 = param_4[3];
        param_4[3] = puStack_d0;
        _swift_bridgeObjectRelease(uVar8);
        plVar7 = plVar7 + 2;
      } while (uVar6 != uVar14);
    }
    _swift_release(puVar10);
    return;
  case 10:
    func_0x001168c0();
    plVar7 = (long *)0x0;
    if (param_1 != (undefined1 *)0x0) {
      plVar7 = param_2;
    }
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
    uVar20 = param_4[4];
    uVar6 = uVar20;
    _swift_isUniquelyReferenced_nonNull_native();
    param_4[4] = uVar20;
    uVar14 = uVar20;
    if ((uVar6 & 1) == 0) {
      uVar14 = 0;
      FUN_0002a0e4(0,*(long *)(uVar20 + 0x10) + 1,1,uVar20);
      param_4[4] = uVar14;
    }
    uVar6 = *(ulong *)(uVar14 + 0x10);
    uVar20 = uVar14;
    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar6) {
      uVar20 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
      FUN_0002a0e4(uVar20,uVar6 + 1,1,uVar14);
      param_4[4] = uVar20;
    }
    *(ulong *)(uVar20 + 0x10) = uVar6 + 1;
    lVar22 = uVar20 + uVar6 * 0x10;
    *(undefined1 **)(lVar22 + 0x20) = param_1;
    *(long **)(lVar22 + 0x28) = plVar7;
    return;
  case 0xb:
    FUN_000de9a0();
    iVar4 = (int)param_1;
    iVar5 = iVar4;
    FUN_000de9a0();
    if (SCARRY4(iVar4,iVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x11ab60);
      (*pcVar3)();
    }
    if (iVar4 <= iVar4 + iVar5) {
      uVar20 = param_4[5];
      uVar6 = uVar20;
      _swift_isUniquelyReferenced_nonNull_native();
      param_4[5] = uVar20;
      uVar14 = uVar20;
      if ((uVar6 & 1) == 0) {
        uVar14 = 0;
        func_0x000d6724(0,*(long *)(uVar20 + 0x10) + 1,1,uVar20);
        param_4[5] = uVar14;
      }
      uVar6 = *(ulong *)(uVar14 + 0x10);
      uVar20 = uVar14;
      if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar6) {
        uVar20 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
        func_0x000d6724(uVar20,uVar6 + 1,1,uVar14);
        param_4[5] = uVar20;
      }
      *(ulong *)(uVar20 + 0x10) = uVar6 + 1;
      lVar22 = uVar20 + uVar6 * 8;
      *(int *)(lVar22 + 0x20) = iVar4;
      *(int *)(lVar22 + 0x24) = iVar4 + iVar5;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x11abc0);
    (*pcVar3)();
  }
  puVar17 = auStack_b8;
  plVar13 = param_3;
  _swift_beginAccess(param_3,puVar17,1,0);
  *param_3 = lVar22;
  func_0x001168c0();
  puVar23 = (undefined1 *)0x0;
  if (plVar13 != (long *)0x0) {
    puVar23 = (undefined1 *)((long)plVar13 + (long)puVar17);
  }
  uStack_78 = 0;
  uVar8 = param_4[1];
  plStack_88 = plVar13;
  puStack_80 = puVar23;
  plStack_70 = plVar13;
  puStack_68 = puVar23;
  _swift_isUniquelyReferenced_nonNull_native(uVar8);
  puStack_d0 = (undefined *)param_4[1];
  param_4[1] = 0x8000000000000000;
  FUN_000f3944(&plStack_88,lVar22,uVar8);
  uVar8 = param_4[1];
  param_4[1] = puStack_d0;
  _swift_bridgeObjectRelease(uVar8);
  uVar8 = param_4[2];
  _swift_isUniquelyReferenced_nonNull_native(uVar8);
  puStack_d0 = (undefined *)param_4[2];
  param_4[2] = 0x8000000000000000;
  func_0x000f3838(lVar22,plVar13,puVar23,uVar8);
  uVar8 = param_4[2];
  param_4[2] = puStack_d0;
  _swift_bridgeObjectRelease(uVar8);
  uVar8 = param_4[3];
  _swift_isUniquelyReferenced_nonNull_native(uVar8);
  puStack_d0 = (undefined *)param_4[3];
  param_4[3] = 0x8000000000000000;
code_r0x0011a744:
  func_0x000f3838(lVar22,plVar13,puVar23,uVar8);
  uVar8 = param_4[3];
  param_4[3] = puStack_d0;
code_r0x0011ab18:
  _swift_bridgeObjectRelease(uVar8);
  return;
}



/* Entry: 0011ac30; end: 0011ac5f;  */

void FUN_0011ac30(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x11ac30);
  (*pcVar1)();
}



/* Entry: 0011ac60; end: 0011ac9b;  */

void FUN_0011ac60(undefined8 *param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_0011aea0(&uStack_50);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[5] = uStack_28;
  param_1[4] = uStack_30;
  return;
}



/* Entry: 0011ac9c; end: 0011ae27;  */

undefined1  [16] FUN_0011ac9c(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 ***pppuVar6;
  int iVar7;
  uint uVar8;
  ulong *unaff_x20;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined8 **ppuStack_50;
  ulong uStack_48;
  
  pppuVar6 = (undefined8 ***)*unaff_x20;
  uVar1 = unaff_x20[1];
  uVar4 = (ulong)pppuVar6 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar4 = uVar1 >> 0x38 & 0xf;
  }
  uVar3 = unaff_x20[2];
  if (uVar3 >> 0xe == uVar4 * 4) {
    uVar4 = 0;
    uVar8 = 0;
    iVar7 = 1;
    goto LAB_0011addc;
  }
  uVar8 = (uint)((ulong)pppuVar6 >> 0x3b) & 1;
  if ((uVar1 & 0x1000000000000000) == 0) {
    uVar8 = 1;
  }
  uVar9 = uVar3 & 0xc;
  uVar10 = 4L << uVar8;
  uVar5 = uVar3;
  if (uVar9 == uVar10) {
    FUN_0002269c();
  }
  if (uVar4 <= uVar5 >> 0x10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x11ad7c);
    (*pcVar2)();
  }
  if ((uVar1 >> 0x3c & 1) == 0) {
    if ((uVar1 >> 0x3d & 1) == 0) {
      if (((ulong)pppuVar6 >> 0x3c & 1) == 0) {
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppuVar6,uVar1);
      }
      else {
        pppuVar6 = (undefined8 ***)((uVar1 & 0xfffffffffffffff) + 0x20);
      }
    }
    else {
      ppuStack_50 = pppuVar6;
      uStack_48 = uVar1 & 0xffffffffffffff;
      pppuVar6 = &ppuStack_50;
    }
    uVar8 = (uint)*(byte *)((long)pppuVar6 + (uVar5 >> 0x10));
    if (uVar9 != uVar10) goto LAB_0011ad48;
LAB_0011ada0:
    FUN_0002269c();
    if ((uVar1 >> 0x3c & 1) != 0) goto LAB_0011adb8;
LAB_0011ad4c:
    uVar3 = (uVar3 & 0xffffffffffff0000) + 0x10004;
  }
  else {
    __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar5);
    uVar8 = (uint)uVar5;
    if (uVar9 == uVar10) goto LAB_0011ada0;
LAB_0011ad48:
    if ((uVar1 >> 0x3c & 1) == 0) goto LAB_0011ad4c;
LAB_0011adb8:
    if (uVar4 <= uVar3 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x11ae04);
      (*pcVar2)();
    }
    __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
  }
  unaff_x20[2] = uVar3;
  uVar4 = unaff_x20[3];
  if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x11ae00);
    (*pcVar2)();
  }
  iVar7 = 0;
  unaff_x20[3] = uVar4 + 1;
LAB_0011addc:
  auVar11._8_4_ = uVar8 & 0xff | iVar7 << 8;
  auVar11._0_8_ = uVar4;
  auVar11._12_4_ = 0;
  return auVar11;
}



/* Entry: 0011ae28; end: 0011ae7f;  */

bool FUN_0011ae28(char *param_1,char *param_2,char *param_3,char *param_4)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  
  lVar2 = 0;
  if (param_1 != (char *)0x0) {
    lVar2 = (long)param_2 - (long)param_1;
  }
  if (param_3 == (char *)0x0) {
    if (lVar2 != 0) {
      return false;
    }
  }
  else if (lVar2 != (long)param_4 - (long)param_3) {
    return false;
  }
  do {
    if (param_1 == (char *)0x0) {
      cVar4 = '\0';
      bVar1 = true;
joined_r0x000e1d28:
      if (param_3 != (char *)0x0) goto LAB_000e1d2c;
LAB_000e1d58:
      cVar5 = '\0';
      bVar3 = false;
      if (bVar1) {
        return true;
      }
    }
    else {
      if (param_1 != param_2) {
        bVar1 = false;
        cVar4 = *param_1;
        param_1 = param_1 + 1;
        goto joined_r0x000e1d28;
      }
      cVar4 = '\0';
      bVar1 = true;
      param_1 = param_2;
      if (param_3 == (char *)0x0) goto LAB_000e1d58;
LAB_000e1d2c:
      bVar3 = param_3 != param_4;
      if (bVar3) {
        cVar5 = *param_3;
        param_3 = param_3 + 1;
      }
      else {
        cVar5 = '\0';
        param_3 = param_4;
      }
      if (bVar1) {
        return !bVar3;
      }
    }
    bVar1 = false;
    if (cVar4 == cVar5) {
      bVar1 = bVar3;
    }
    if (!bVar1) {
      return false;
    }
  } while( true );
}



/* Entry: 0011ae80; end: 0011ae9f;  */

void FUN_0011ae80(void)

{
  _objc_opt_self(&PTR_PTR_00aeffd8);
  return;
}



/* Entry: 0011aea0; end: 0011af53;  */

void FUN_0011aea0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar2 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar2 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puVar3 = puVar1;
  FUN_0019be38();
  puVar4 = puVar1;
  FUN_0019bf34();
  puVar5 = puVar1;
  FUN_0019bf34();
  uVar6 = param_2;
  func_0x0014c4e4(param_2);
  _swift_bridgeObjectRelease(param_2);
  func_0x00118928(uVar6);
  _swift_bridgeObjectRelease(uVar6);
  param_1[1] = (long)puVar3;
  *param_1 = lVar2;
  param_1[3] = (long)puVar5;
  param_1[2] = (long)puVar4;
  param_1[5] = (long)puVar1;
  param_1[4] = (long)puVar1;
  return;
}



/* Entry: 0011af54; end: 0011af57;  */

void FUN_0011af54(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeff78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d9d48;
  _swift_getWitnessTable(&UNK_007d9d48,&UNK_009adfd8);
  puRam0000000000aeff78 = puVar1;
  return;
}



/* Entry: 0011af58; end: 0011af97;  */

void FUN_0011af58(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeff78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d9d48;
  _swift_getWitnessTable(&UNK_007d9d48,&UNK_009adfd8);
  puRam0000000000aeff78 = puVar1;
  return;
}



/* Entry: 0011af98; end: 0011af9b;  */

void FUN_0011af98(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000aeff80 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xaeff88;
  FUN_00016c74(0xaeff88,&UNK_007d9de8);
  puVar2 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar1);
  puRam0000000000aeff80 = puVar2;
  return;
}



/* Entry: 0011af9c; end: 0011afeb;  */

void FUN_0011af9c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000aeff80 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xaeff88;
  FUN_00016c74(0xaeff88,&UNK_007d9de8);
  puVar2 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar1);
  puRam0000000000aeff80 = puVar2;
  return;
}



/* Entry: 0011afec; end: 0011afef;  */

void FUN_0011afec(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeff90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d9e90;
  _swift_getWitnessTable(&UNK_007d9e90,&UNK_009ae0e0);
  puRam0000000000aeff90 = puVar1;
  return;
}



/* Entry: 0011aff0; end: 0011b02f;  */

void FUN_0011aff0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeff90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d9e90;
  _swift_getWitnessTable(&UNK_007d9e90,&UNK_009ae0e0);
  puRam0000000000aeff90 = puVar1;
  return;
}



/* Entry: 0011b030; end: 0011b193;  */

int FUN_0011b030(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf4 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xb) {
      iVar2 = 4;
    }
    if (param_2 + 0xb >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0011b0ac;
        goto LAB_0011b090;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0011b090:
      return ((uint)*param_1 | uVar1 << 8) - 0xb;
    }
  }
LAB_0011b0ac:
  iVar2 = *param_1 - 0xc;
  if (*param_1 < 0xc) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0011b194; end: 0011b1db;  */

void FUN_0011b194(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
  _swift_bridgeObjectRelease(param_1[2]);
  _swift_bridgeObjectRelease(param_1[3]);
  _swift_bridgeObjectRelease(param_1[4]);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_1[5]);
  return;
}



/* Entry: 0011b1dc; end: 0011b24f;  */

undefined8 * FUN_0011b1dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar1 = param_2[2];
  uVar4 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  uVar2 = param_2[4];
  uVar5 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar5);
  return param_1;
}



/* Entry: 0011b250; end: 0011b30b;  */

undefined8 * FUN_0011b250(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 0011b30c; end: 0011b377;  */

undefined8 * FUN_0011b30c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 0011b378; end: 0011b473;  */

int FUN_0011b378(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0011b474; end: 0011b49f;  */

long FUN_0011b474(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 0011b4a0; end: 0011b4e7;  */

void FUN_0011b4a0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  if (2 < param_3 >> 0x3e) {
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(param_4);
    return;
  }
  return;
}



/* Entry: 0011b4e8; end: 0011b5e3;  */

undefined8 * FUN_0011b4e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar6 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  FUN_0011b4a0(uVar1,uVar3,uVar2,uVar4,uVar6,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar5;
  return param_1;
}



/* Entry: 0011b5e4; end: 0011b633;  */

undefined8 * FUN_0011b5e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  param_1[4] = uVar8;
  uVar6 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar5;
  func_0x0011b4d0(uVar7,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 0011b634; end: 0011b787;  */

int FUN_0011b634(int *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = 0xffffffff;
  if (0x80000000 < *(uint *)((long)param_1 + 0x11)) {
    uVar1 = ~*(uint *)((long)param_1 + 0x11);
  }
  return uVar1 + 1;
}



/* Entry: 0011b788; end: 0011b897;  */

void FUN_0011b788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar1 = &uStack_b0;
  uStack_b0 = 0x2e;
  uStack_a8 = 0xe100000000000000;
  uStack_90 = param_1;
  uStack_88 = param_2;
  FUN_00033a8c();
  __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
            (&uStack_b0,PTR___sSSN_0099b040,PTR___sSSN_0099b040,param_1,param_1);
  func_0x00059828(param_3,&uStack_b0);
  FUN_0011c1b8(&uStack_90,puVar1,&uStack_b0,param_4,param_5);
  if (unaff_x21 == 0) {
    pcVar3 = *(code **)(param_6 + 0x40);
    lVar2 = 0;
    FUN_0011d7e0(0,param_5,param_6);
    (*pcVar3)(&uStack_90,lVar2,&PTR_DAT_009ae398,param_5,param_6);
    (**(code **)(*(long *)(lVar2 + -8) + 8))(&uStack_90,lVar2);
  }
  return;
}



/* Entry: 0011b898; end: 0011b8a7;  */

bool FUN_0011b898(char param_1,char param_2)

{
  return param_1 == param_2;
}



/* Entry: 0011b8a8; end: 0011b90f;  */

void FUN_0011b8a8(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 0011b910; end: 0011b923;  */

bool FUN_0011b910(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 0011b924; end: 0011b9cf;  */

void FUN_0011b924(void)

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



/* Entry: 0011b9d0; end: 0011b9d3;  */

void FUN_0011b9d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af0060 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d9f70;
  _swift_getWitnessTable(&UNK_007d9f70,&UNK_009ae330);
  puRam0000000000af0060 = puVar1;
  return;
}



/* Entry: 0011b9d4; end: 0011ba13;  */

void FUN_0011b9d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af0060 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d9f70;
  _swift_getWitnessTable(&UNK_007d9f70,&UNK_009ae330);
  puRam0000000000af0060 = puVar1;
  return;
}



/* Entry: 0011ba14; end: 0011bb87;  */

void FUN_0011ba14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_0099b708)();
  return;
}



/* Entry: 0011bb88; end: 0011bf5f;  */

undefined1  [16] FUN_0011bb88(ulong param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  ulong uStack_140;
  long lStack_138;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long alStack_70 [2];
  
  puVar2 = &uStack_140;
  uVar1 = param_3;
  _swift_conformsToProtocol(param_3,&DAT_00844958);
  if (uVar1 == 0 || param_3 == 0) {
LAB_0011be84:
    lVar8 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    uVar3 = param_1;
    FUN_00047e80(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    lVar8 = *(long *)(uVar3 + 0x10);
    pcVar9 = *(code **)(uVar1 + 8);
    (*pcVar9)(&uStack_118,param_3,uVar1);
    alStack_70[0] = lStack_108;
    if (*(long *)(lStack_108 + 0x10) == 0) {
LAB_0011bc40:
      lVar8 = 0;
      bVar10 = true;
    }
    else {
      lVar7 = uVar3 + 0x20;
      uVar4 = lVar7 + lVar8;
      FUN_000e1dc4();
      if ((uVar4 & 1) == 0) goto LAB_0011bc40;
      bVar10 = false;
      lVar8 = *(long *)(*(long *)(lStack_108 + 0x38) + lVar7 * 8);
    }
    _swift_release(uStack_118);
    uStack_78 = uStack_110;
    FUN_0011d82c(&uStack_78,0xaeddc0,&UNK_007d9aa0);
    FUN_0011d82c(alStack_70,0xaeddc8,&UNK_007da040);
    uStack_80 = uStack_100;
    FUN_0011d82c(&uStack_80,0xaeddc8,&UNK_007da040);
    uStack_88 = uStack_f8;
    FUN_0011d82c(&uStack_88,0xae6938,&UNK_007cdb30);
    uStack_90 = uStack_f0;
    FUN_0011d82c(&uStack_90,0xaeddd0,&UNK_007da050);
    _swift_release(uVar3);
    if (!bVar10) {
      (*pcVar9)(&uStack_e8,param_3);
      lStack_98 = lStack_e0;
      if ((*(long *)(lStack_e0 + 0x10) != 0) && (lVar7 = lVar8, FUN_000e1d94(), (uVar1 & 1) != 0)) {
        lVar7 = *(long *)(lStack_e0 + 0x38) + lVar7 * 0x28;
        uVar1 = *(ulong *)(lVar7 + 0x18);
        lVar7 = *(long *)(lVar7 + 0x20);
        _swift_release(uStack_e8);
        FUN_0011d82c(&lStack_98,0xaeddc0,&UNK_007d9aa0);
        uStack_a0 = uStack_d8;
        FUN_0011d82c(&uStack_a0,0xaeddc8,&UNK_007da040);
        uStack_a8 = uStack_d0;
        FUN_0011d82c(&uStack_a8,0xaeddc8,&UNK_007da040);
        uStack_b0 = uStack_c8;
        FUN_0011d82c(&uStack_b0,0xae6938,&UNK_007cdb30);
        uStack_b8 = uStack_c0;
        FUN_0011d82c(&uStack_b8,0xaeddd0,&UNK_007da050);
        if (uVar1 == 0) {
          uVar3 = 0;
          lVar5 = 0;
        }
        else {
          lVar5 = lVar7 - uVar1;
          uVar3 = uVar1;
        }
        __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
        if (lVar5 == 0) {
          puStack_128 = PTR___sSWN_0099b108;
          puStack_120 = PTR___sSWs19_HasContiguousBytessWP_0099b110;
          uStack_140 = uVar1;
          lStack_138 = lVar7;
          FUN_0001393c();
          uVar3 = *puVar2;
          if (uVar3 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = puVar2[1] - uVar3;
          }
          __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
          FUN_0011d9a4(&uStack_140);
        }
        if ((uVar3 == param_1) && (lVar5 == param_2)) {
          _swift_bridgeObjectRelease(lVar5);
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          _swift_bridgeObjectRelease(lVar5);
          if ((uVar3 & 1) == 0) goto LAB_0011be84;
        }
        uVar6 = 0;
        goto LAB_0011be8c;
      }
      _swift_release(uStack_e8);
      FUN_0011d82c(&lStack_98,0xaeddc0,&UNK_007d9aa0);
      uStack_140 = uStack_d8;
      FUN_0011d82c(&uStack_140,0xaeddc8,&UNK_007da040);
      uStack_a0 = uStack_d0;
      FUN_0011d82c(&uStack_a0,0xaeddc8,&UNK_007da040);
      uStack_a8 = uStack_c8;
      FUN_0011d82c(&uStack_a8,0xae6938,&UNK_007cdb30);
      uStack_b0 = uStack_c0;
      FUN_0011d82c(&uStack_b0,0xaeddd0,&UNK_007da050);
      goto LAB_0011be84;
    }
  }
  uVar6 = 1;
LAB_0011be8c:
  auVar11._8_8_ = uVar6;
  auVar11._0_8_ = lVar8;
  return auVar11;
}



/* Entry: 0011bf60; end: 0011c1b7;  */

void FUN_0011bf60(long param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar2 = &lStack_b0;
  uVar1 = param_2;
  _swift_conformsToProtocol(param_2,&DAT_00844958);
  if (uVar1 != 0 && param_2 != 0) {
    (**(code **)(uVar1 + 8))(&uStack_88,param_2);
    lStack_38 = lStack_80;
    if ((*(long *)(lStack_80 + 0x10) == 0) || (FUN_000e1d94(), (uVar1 & 1) == 0)) {
      _swift_release(uStack_88);
      FUN_0011d82c(&lStack_38,0xaeddc0,&UNK_007d9aa0);
      lStack_b0 = lStack_78;
      FUN_0011d82c(&lStack_b0,0xaeddc8,&UNK_007da040);
      lStack_40 = lStack_70;
      FUN_0011d82c(&lStack_40,0xaeddc8,&UNK_007da040);
      lStack_48 = lStack_68;
      FUN_0011d82c(&lStack_48,0xae6938,&UNK_007cdb30);
      lStack_50 = lStack_60;
      FUN_0011d82c(&lStack_50,0xaeddd0,&UNK_007da050);
    }
    else {
      lVar5 = *(long *)(lStack_80 + 0x38) + param_1 * 0x28;
      lVar3 = *(long *)(lVar5 + 0x18);
      lVar5 = *(long *)(lVar5 + 0x20);
      _swift_release(uStack_88);
      FUN_0011d82c(&lStack_38,0xaeddc0,&UNK_007d9aa0);
      lStack_40 = lStack_78;
      FUN_0011d82c(&lStack_40,0xaeddc8,&UNK_007da040);
      lStack_48 = lStack_70;
      FUN_0011d82c(&lStack_48,0xaeddc8,&UNK_007da040);
      lStack_50 = lStack_68;
      FUN_0011d82c(&lStack_50,0xae6938,&UNK_007cdb30);
      lStack_58 = lStack_60;
      FUN_0011d82c(&lStack_58,0xaeddd0,&UNK_007da050);
      if (lVar3 == 0) {
        lVar4 = 0;
        __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(0);
      }
      else {
        lVar4 = lVar5 - lVar3;
        __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(lVar3);
      }
      if (lVar4 == 0) {
        lStack_b0 = lVar3;
        lStack_a8 = lVar5;
        puStack_98 = PTR___sSWN_0099b108;
        puStack_90 = PTR___sSWs19_HasContiguousBytessWP_0099b110;
        FUN_0001393c();
        lVar3 = *plVar2;
        if (lVar3 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = plVar2[1] - lVar3;
        }
        __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(lVar3,lVar5);
        FUN_0011d9a4(&lStack_b0);
      }
    }
  }
  return;
}



/* Entry: 0011c1b8; end: 0011c327;  */

void FUN_0011c1b8(undefined8 *param_1,undefined1 *param_2,undefined8 *param_3,byte param_4,
                 undefined8 param_5)

{
  code *pcVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *(ulong *)(param_2 + 0x10);
  if (uVar3 != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    _swift_bridgeObjectRetain(uVar5);
    uVar6 = uVar5;
    FUN_0011bb88(uVar4,uVar5,param_5);
    _swift_bridgeObjectRelease(uVar5);
    if (((uint)uVar6 & 0xff) != 1) {
      param_1[4] = uVar4;
      *(char *)(param_1 + 5) = (char)uVar6;
      if (uVar3 <= *(ulong *)(param_2 + 0x10)) {
        puVar2 = param_2;
        if (*(ulong *)(param_2 + 0x10) != uVar3 - 1) {
          FUN_0011d86c(param_2,param_2 + 0x20,1,uVar3 << 1 | 1);
          _swift_bridgeObjectRelease(param_2);
        }
        param_1[6] = puVar2;
        uVar4 = *param_3;
        uVar6 = param_3[3];
        uVar5 = param_3[2];
        param_1[1] = param_3[1];
        *param_1 = uVar4;
        param_1[3] = uVar6;
        param_1[2] = uVar5;
        *(byte *)(param_1 + 7) = param_4 & 1;
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x11c2fc);
      (*pcVar1)();
    }
  }
  _swift_bridgeObjectRelease();
  FUN_0011d7ec();
  _swift_allocError(&UNK_009ae330,param_2,0,0);
  *param_2 = 1;
  _swift_willThrow();
  FUN_0011d82c(param_3,0xae65a0,&UNK_007ce270);
  return;
}



/* Entry: 0011c328; end: 0011c563;  */

void FUN_0011c328(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  puVar1 = (undefined1 *)0x0;
  __sSqMa(0,param_4);
  lVar9 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_80 + -extraout_x8;
  lVar8 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(*(long *)(unaff_x20 + 0x30) + 0x10) == 0) {
    func_0x00059828();
    if (lStack_68 == 0) {
      (**(code **)(lVar8 + 8))(param_1,param_4);
      FUN_0011d82c(auStack_80,0xae65a0,&UNK_007ce270);
      (**(code **)(lVar8 + 0x10))(param_1,param_2,param_4);
      return;
    }
    uVar2 = 0xae65a0;
    FUN_0011d82c(auStack_80,0xae65a0,&UNK_007ce270);
    func_0x00059828();
    func_0x000115a8(0xae65a0,&UNK_007ce270);
    puVar3 = puVar4;
    _swift_dynamicCast(puVar4,auStack_80,uVar2,param_4,6);
    if ((int)puVar3 != 0) {
      (**(code **)(lVar8 + 8))(param_1,param_4);
      (**(code **)(lVar8 + 0x38))(puVar4,0,1,param_4);
      pcVar6 = *(code **)(lVar8 + 0x20);
      (*pcVar6)(lVar7,puVar4,param_4);
      (*pcVar6)(param_1,lVar7,param_4);
      return;
    }
    (**(code **)(lVar8 + 0x38))(puVar4,1,1,param_4);
    (**(code **)(lVar9 + 8))(puVar4,puVar1);
    FUN_0011d7ec();
    _swift_allocError(&UNK_009ae330,puVar4,0,0);
    uVar5 = 0;
  }
  else {
    FUN_0011d7ec();
    _swift_allocError(&UNK_009ae330,puVar1,0,0);
    uVar5 = 1;
    puVar4 = puVar1;
  }
  *puVar4 = uVar5;
  _swift_willThrow();
  return;
}



/* Entry: 0011c564; end: 0011c717;  */

void FUN_0011c564(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  if (*(long *)(*(long *)(unaff_x20 + 0x30) + 0x10) != 0) {
    FUN_0011d7ec();
    _swift_allocError(&UNK_009ae330,param_1,0,0);
    *(undefined1 *)param_1 = 1;
    _swift_willThrow();
    return;
  }
  uVar2 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,param_3);
  func_0x00059828();
  lVar1 = lStack_48;
  FUN_0011d82c(auStack_60,0xae65a0,&UNK_007ce270);
  if (lVar1 == 0) {
LAB_0011c658:
    if (*(char *)(unaff_x20 + 0x38) == '\x01') {
      _swift_bridgeObjectRelease(*param_1);
      *param_1 = uVar2;
    }
    else {
      uVar3 = 0;
      auStack_60[0] = uVar2;
      __sSaMa(0,param_3);
      puVar4 = PTR___sSayxGSTsMc_0099b1f0;
      _swift_getWitnessTable(PTR___sSayxGSTsMc_0099b1f0,uVar3);
      __sSa6append10contentsOfyqd__n_t7ElementQyd__RszSTRd__lF(auStack_60,uVar3,uVar3,puVar4);
    }
  }
  else {
    func_0x00059828();
    if (lStack_48 == 0) {
      puVar5 = auStack_60;
      FUN_0011d82c(puVar5,0xae65a0,&UNK_007ce270);
    }
    else {
      uVar3 = 0;
      __sSaMa(0,param_3);
      puVar5 = &uStack_68;
      _swift_dynamicCast(puVar5,auStack_60,PTR___sypN_0099b8d8 + 8,uVar3,6);
      if (((ulong)puVar5 & 1) != 0) {
        _swift_bridgeObjectRelease(uVar2);
        uVar2 = uStack_68;
        goto LAB_0011c658;
      }
    }
    FUN_0011d7ec();
    _swift_allocError(&UNK_009ae330,puVar5,0,0);
    *(undefined1 *)puVar5 = 0;
    _swift_willThrow();
    _swift_bridgeObjectRelease(uVar2);
  }
  return;
}



/* Entry: 0011c718; end: 0011c923;  */

void FUN_0011c718(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 auStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_58;
  
  puVar4 = auStack_a0;
  if (*(long *)(*(long *)(unaff_x20 + 0x30) + 0x10) != 0) {
    FUN_0011d7ec();
    _swift_allocError(&UNK_009ae330,param_1,0,0);
    *(undefined1 *)param_1 = 1;
    _swift_willThrow();
    return;
  }
  uVar2 = 0;
  _swift_getTupleTypeMetadata2(0,param_3,param_4,0,0);
  uVar3 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar2);
  __sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfC();
  func_0x00059828();
  lVar1 = lStack_88;
  FUN_0011d82c(auStack_a0,0xae65a0,&UNK_007ce270);
  if (lVar1 == 0) {
LAB_0011c850:
    if (*(char *)(unaff_x20 + 0x38) == '\x01') {
      _swift_bridgeObjectRelease(*param_1);
      *param_1 = uVar3;
    }
    else {
      uStack_90 = *(undefined8 *)(param_2 + 0x10);
      uStack_78 = *(undefined8 *)(param_2 + 0x18);
      uVar2 = 0;
      lStack_88 = param_3;
      uStack_80 = param_4;
      uStack_70 = param_5;
      __sSDMa(0,param_3,param_4,param_5);
      __sSD5merge_16uniquingKeysWithySDyxq_Gn_q_q__q_tKXEtKF(uVar3,FUN_0011dd54,auStack_a0,uVar2);
    }
  }
  else {
    func_0x00059828();
    if (lStack_88 == 0) {
      FUN_0011d82c(auStack_a0,0xae65a0,&UNK_007ce270);
    }
    else {
      uVar2 = 0;
      __sSDMa(0,param_3,param_4,param_5);
      puVar4 = &uStack_58;
      _swift_dynamicCast(puVar4,auStack_a0,PTR___sypN_0099b8d8 + 8,uVar2,6);
      if (((ulong)puVar4 & 1) != 0) {
        _swift_bridgeObjectRelease(uVar3);
        uVar3 = uStack_58;
        goto LAB_0011c850;
      }
    }
    FUN_0011d7ec();
    _swift_allocError(&UNK_009ae330,puVar4,0,0);
    *(undefined1 *)puVar4 = 0;
    _swift_willThrow();
    _swift_bridgeObjectRelease(uVar3);
  }
  return;
}



/* Entry: 0011c924; end: 0011cb93;  */

void FUN_0011c924(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_a0 [64];
  
  lVar1 = 0;
  lStack_d0 = param_4;
  uStack_c8 = param_2;
  __sSqMa(0,param_3);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar7 = lVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar4 = lVar7 - extraout_x12_00;
  lVar2 = *(long *)(unaff_x20 + 0x30);
  if (*(long *)(lVar2 + 0x10) == 0) {
    (**(code **)(*(long *)(param_3 + -8) + 0x38))(lVar4,1,1,param_3);
    FUN_0011c328(param_1,lVar4,uStack_c8,lVar1);
    (**(code **)(lVar8 + 8))(lVar4,lVar1);
  }
  else {
    func_0x00059828();
    _swift_bridgeObjectRetain(lVar2);
    FUN_0011c1b8(auStack_a0);
    if (unaff_x21 == 0) {
      (**(code **)(lVar8 + 0x10))(lVar7,param_1,lVar1);
      lVar5 = *(long *)(param_3 + -8);
      pcVar3 = *(code **)(lVar5 + 0x30);
      lVar4 = lVar7;
      (*pcVar3)(lVar7,1,param_3);
      (**(code **)(lVar8 + 8))(lVar7,lVar1);
      lVar2 = lStack_d0;
      if ((int)lVar4 == 1) {
        (**(code **)(lStack_d0 + 0x10))(lVar6,param_3,lStack_d0);
        (**(code **)(lVar5 + 0x38))(lVar6,0,1,param_3);
        (**(code **)(lVar8 + 0x28))(param_1,lVar6,lVar1);
      }
      (*pcVar3)(param_1,1,param_3);
      if ((int)param_1 == 0) {
        pcVar3 = *(code **)(lVar2 + 0x40);
        lVar1 = 0;
        FUN_0011d7e0(0,param_3,lVar2);
        (*pcVar3)(auStack_a0,lVar1,&PTR_DAT_009ae398,param_3,lVar2);
      }
      else {
        lVar1 = 0;
        FUN_0011d7e0(0,param_3,lVar2);
      }
      (**(code **)(*(long *)(lVar1 + -8) + 8))(auStack_a0,lVar1);
    }
  }
  return;
}



/* Entry: 0011cb94; end: 0011cbab;  */

undefined1  [16] FUN_0011cb94(void)

{
  undefined1 uVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  auVar2._0_8_ = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  uVar1 = *(undefined1 *)(unaff_x20 + 0x28);
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  auVar2[8] = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 0011cbac; end: 0011cd73;  */

void FUN_0011cbac(undefined8 param_1,undefined8 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = 0;
  FUN_0011c328(param_1,&uStack_14,param_2,PTR___sSfN_0099b288);
  return;
}



/* Entry: 0011cd74; end: 0011cdcf;  */

void FUN_0011cd74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 0;
  uStack_24 = 1;
  func_0x000115a8(param_3,param_4);
  FUN_0011c328(param_1,&uStack_28,param_2,param_3);
  return;
}



/* Entry: 0011cdd0; end: 0011ce33;  */

void FUN_0011cdd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 1;
  func_0x000115a8(param_3,param_4);
  FUN_0011c328(param_1,&uStack_40,param_2,param_3);
  return;
}



/* Entry: 0011ce34; end: 0011ce63;  */

void FUN_0011ce34(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  uStack_11 = 0;
  FUN_0011c328(param_1,&uStack_11,param_2,PTR___sSbN_0099b220);
  return;
}


