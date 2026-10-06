/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000fda30; end: 000fdc73;  */

void FUN_000fda30(void)

{
  func_0x000fcd68();
  return;
}



/* Entry: 000fdc74; end: 000fdc9f;  */

void FUN_000fdc74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_0099b708)();
  return;
}



/* Entry: 000fdca0; end: 000fde03;  */

undefined8 * FUN_000fdca0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    _swift_bridgeObjectRetain(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 000fde04; end: 000fdeff;  */

int FUN_000fde04(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7fffffeb < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffec;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (0x14 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -0x13;
  }
  return iVar1;
}



/* Entry: 000fdf00; end: 000fdff7;  */

void FUN_000fdf00(void)

{
  return;
}



/* Entry: 000fdff8; end: 000fe843;  */

void FUN_000fdff8(dword *param_1,ulong param_2)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  ulong uVar4;
  char *pcVar5;
  dword *pdVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong *unaff_x20;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  long lVar19;
  dword *pdStack_70;
  ulong uStack_68;
  
  uVar14 = *unaff_x20;
  uVar4 = uVar14;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar9 = uVar14;
  if ((uVar4 & 1) == 0) {
    uVar9 = 0;
    FUN_000540b4(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
  }
  uVar4 = *(ulong *)(uVar9 + 0x10);
  uVar14 = uVar9;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar4) {
    uVar14 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    FUN_000540b4(uVar14,uVar4 + 1,1,uVar9);
  }
  *(ulong *)(uVar14 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar14 + uVar4 + 0x20) = 0x22;
  *unaff_x20 = uVar14;
  uVar4 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar4 = param_2 >> 0x38 & 0xf;
  }
  if (uVar4 != 0) {
    _swift_bridgeObjectRetain(param_2);
    puVar18 = (undefined1 *)0x0;
    do {
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          pdVar6 = (dword *)((param_2 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            pdVar6 = param_1;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
          }
        }
        else {
          pdStack_70 = param_1;
          uStack_68 = param_2 & 0xffffffffffffff;
          pdVar6 = (dword *)&pdStack_70;
        }
        pbVar10 = (byte *)((long)pdVar6 + (long)puVar18);
        uVar16 = (uint)*pbVar10;
        if ((char)*pbVar10 < '\0') {
          uVar11 = (uint)LZCOUNT(uVar16 << 0x18 ^ 0xffffffff);
          if (uVar11 < 3) {
            if (uVar11 != 1) {
              uVar16 = pbVar10[1] & 0x3f | (uVar16 & 0x1f) << 6;
              pdVar6 = (dword *)((long)&MACH_HEADER.magic + 2);
              goto joined_r0x000fe1a0;
            }
            goto LAB_000fe13c;
          }
          if (uVar11 == 3) {
            uVar16 = (uVar16 & 0xf) << 0xc | (pbVar10[1] & 0x3f) << 6 | pbVar10[2] & 0x3f;
            pdVar6 = (dword *)((long)&MACH_HEADER.magic + 3);
joined_r0x000fe1a0:
            uVar9 = (ulong)uVar16;
            if (0xb < uVar16) goto LAB_000fe0e8;
            goto LAB_000fe148;
          }
          uVar16 = (uVar16 & 0xf) << 0x12 | (pbVar10[1] & 0x3f) << 0xc | (pbVar10[2] & 0x3f) << 6 |
                   pbVar10[3] & 0x3f;
          pdVar6 = &MACH_HEADER.cputype;
        }
        else {
LAB_000fe13c:
          pdVar6 = (dword *)((long)&MACH_HEADER.magic + 1);
        }
        uVar9 = (ulong)uVar16;
        if (uVar16 < 0xc) goto LAB_000fe148;
LAB_000fe0e8:
        iVar15 = (int)uVar9;
        if (0x21 < iVar15) {
          if (iVar15 == 0x22) {
            pcVar5 = "\\\"";
          }
          else {
            if (iVar15 != 0x5c) goto LAB_000fe1a8;
            pcVar5 = "\\\\";
          }
          goto LAB_000fe09c;
        }
        if (iVar15 == 0xc) {
          pcVar5 = "\\f";
          goto LAB_000fe09c;
        }
        if (iVar15 == 0xd) {
          pcVar5 = "\\r";
          goto LAB_000fe09c;
        }
LAB_000fe1a8:
        uVar16 = (uint)uVar9;
        if ((uVar16 < 0x20) || (uVar16 - 0x7f < 0x21)) {
          FUN_000c7840("\\u00",4);
          if (lRam0000000000aef478 != -1) {
            _swift_once(0xaef478,FUN_000fea54);
          }
          lVar19 = lRam0000000000aef480;
          uVar14 = (uVar9 & 0xffffffff) >> 4;
          if (*(ulong *)(lRam0000000000aef480 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0xfe7bc);
            (*pcVar3)();
          }
          lVar13 = lRam0000000000aef480 + 0x20;
          uVar2 = *(undefined1 *)(lVar13 + uVar14);
          uVar17 = *unaff_x20;
          uVar14 = uVar17;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar7 = uVar17;
          if ((uVar14 & 1) == 0) {
            uVar7 = 0;
            FUN_000540b4(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
          }
          uVar14 = *(ulong *)(uVar7 + 0x10);
          lVar1 = uVar14 + 1;
          uVar17 = uVar7;
          if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar14) {
            uVar17 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
            FUN_000540b4(uVar17,lVar1,1,uVar7);
          }
          *(long *)(uVar17 + 0x10) = lVar1;
          *(undefined1 *)(uVar17 + uVar14 + 0x20) = uVar2;
          if (*(ulong *)(lVar19 + 0x10) <= (uVar9 & 0xf)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0xfe7c0);
            (*pcVar3)();
          }
          uVar2 = *(undefined1 *)(lVar13 + (uVar9 & 0xf));
          lVar19 = uVar14 + 2;
          uVar14 = uVar17;
          if ((long)(*(ulong *)(uVar17 + 0x18) >> 1) < lVar19) {
            uVar14 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
            FUN_000540b4(uVar14,lVar19,1,uVar17);
          }
          *(long *)(uVar14 + 0x10) = lVar19;
          *(undefined1 *)(uVar14 + lVar1 + 0x20) = uVar2;
        }
        else {
          if (0x7e < uVar16) {
            if (uVar16 < 0x800) {
              uVar17 = *unaff_x20;
              uVar14 = uVar17;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar7 = uVar17;
              if ((uVar14 & 1) == 0) {
                uVar7 = 0;
                FUN_000540b4(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
              }
              uVar14 = *(ulong *)(uVar7 + 0x10);
              uVar17 = *(ulong *)(uVar7 + 0x18);
              uVar12 = uVar17 >> 1;
              lVar13 = uVar14 + 1;
              uVar8 = uVar7;
              if (uVar12 <= uVar14) {
                uVar8 = (ulong)(1 < uVar17);
                FUN_000540b4(uVar8,lVar13,1,uVar7);
                uVar17 = *(ulong *)(uVar8 + 0x18);
                uVar12 = uVar17 >> 1;
              }
              *(long *)(uVar8 + 0x10) = lVar13;
              *(byte *)(uVar8 + uVar14 + 0x20) = (byte)(uVar16 >> 6) | 0xc0;
              lVar19 = uVar14 + 2;
              uVar7 = uVar8;
              if ((long)uVar12 < lVar19) {
                uVar7 = (ulong)(1 < uVar17);
                FUN_000540b4(uVar7,lVar19,1,uVar8);
              }
LAB_000fe3f0:
              *(long *)(uVar7 + 0x10) = lVar19;
              lVar13 = uVar7 + lVar13;
            }
            else {
              if (uVar16 - 0x800 >> 0xb < 0x1f) {
                uVar17 = *unaff_x20;
                uVar14 = uVar17;
                _swift_isUniquelyReferenced_nonNull_native();
                uVar7 = uVar17;
                if ((uVar14 & 1) == 0) {
                  uVar7 = 0;
                  FUN_000540b4(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
                }
                uVar14 = *(ulong *)(uVar7 + 0x10);
                uVar17 = *(ulong *)(uVar7 + 0x18);
                uVar12 = uVar17 >> 1;
                lVar19 = uVar14 + 1;
                uVar8 = uVar7;
                if (uVar12 <= uVar14) {
                  uVar8 = (ulong)(1 < uVar17);
                  FUN_000540b4(uVar8,lVar19,1,uVar7);
                  uVar17 = *(ulong *)(uVar8 + 0x18);
                  uVar12 = uVar17 >> 1;
                }
                *(long *)(uVar8 + 0x10) = lVar19;
                *(byte *)(uVar8 + uVar14 + 0x20) = (byte)(uVar16 >> 0xc) | 0xe0;
                lVar13 = uVar14 + 2;
                uVar7 = uVar8;
                if ((long)uVar12 < lVar13) {
                  uVar7 = (ulong)(1 < uVar17);
                  FUN_000540b4(uVar7,lVar13,1,uVar8);
                  uVar17 = *(ulong *)(uVar7 + 0x18);
                  uVar12 = uVar17 >> 1;
                }
                *(long *)(uVar7 + 0x10) = lVar13;
                *(byte *)(uVar7 + lVar19 + 0x20) = (byte)(uVar16 >> 6) & 0x3f | 0x80;
                lVar19 = uVar14 + 3;
                if ((long)uVar12 < lVar19) {
                  uVar14 = (ulong)(1 < uVar17);
                  FUN_000540b4(uVar14,lVar19,1,uVar7);
                  uVar7 = uVar14;
                }
                goto LAB_000fe3f0;
              }
              uVar11 = (uVar16 >> 0x12 & 0xff) + 0xf0;
              if (uVar11 >> 8 != 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0xfe7c4);
                (*pcVar3)();
              }
              uVar17 = *unaff_x20;
              uVar14 = uVar17;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar7 = uVar17;
              if ((uVar14 & 1) == 0) {
                uVar7 = 0;
                FUN_000540b4(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
              }
              uVar14 = *(ulong *)(uVar7 + 0x10);
              uVar17 = *(ulong *)(uVar7 + 0x18);
              uVar12 = uVar17 >> 1;
              lVar19 = uVar14 + 1;
              uVar8 = uVar7;
              if (uVar12 <= uVar14) {
                uVar8 = (ulong)(1 < uVar17);
                FUN_000540b4(uVar8,lVar19,1,uVar7);
                uVar17 = *(ulong *)(uVar8 + 0x18);
                uVar12 = uVar17 >> 1;
              }
              *(long *)(uVar8 + 0x10) = lVar19;
              *(char *)(uVar8 + uVar14 + 0x20) = (char)uVar11;
              lVar1 = uVar14 + 2;
              uVar7 = uVar8;
              if ((long)uVar12 < lVar1) {
                uVar7 = (ulong)(1 < uVar17);
                FUN_000540b4(uVar7,lVar1,1,uVar8);
                uVar17 = *(ulong *)(uVar7 + 0x18);
                uVar12 = uVar17 >> 1;
              }
              *(long *)(uVar7 + 0x10) = lVar1;
              *(byte *)(uVar7 + lVar19 + 0x20) = (byte)(uVar16 >> 0xc) & 0x3f | 0x80;
              lVar13 = uVar14 + 3;
              uVar8 = uVar7;
              if ((long)uVar12 < lVar13) {
                uVar8 = (ulong)(1 < uVar17);
                FUN_000540b4(uVar8,lVar13,1,uVar7);
                uVar17 = *(ulong *)(uVar8 + 0x18);
                uVar12 = uVar17 >> 1;
              }
              *(long *)(uVar8 + 0x10) = lVar13;
              *(byte *)(uVar8 + lVar1 + 0x20) = (byte)(uVar16 >> 6) & 0x3f | 0x80;
              lVar19 = uVar14 + 4;
              uVar7 = uVar8;
              if ((long)uVar12 < lVar19) {
                uVar7 = (ulong)(1 < uVar17);
                FUN_000540b4(uVar7,lVar19,1,uVar8);
              }
              *(long *)(uVar7 + 0x10) = lVar19;
              lVar13 = uVar7 + lVar13;
            }
            *(byte *)(lVar13 + 0x20) = (byte)uVar9 & 0x3f | 0x80;
            *unaff_x20 = uVar7;
            goto LAB_000fe0a4;
          }
          uVar17 = *unaff_x20;
          uVar14 = uVar17;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar7 = uVar17;
          if ((uVar14 & 1) == 0) {
            uVar7 = 0;
            FUN_000540b4(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
          }
          uVar17 = *(ulong *)(uVar7 + 0x10);
          uVar14 = uVar7;
          if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar17) {
            uVar14 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
            FUN_000540b4(uVar14,uVar17 + 1,1,uVar7);
          }
          *(ulong *)(uVar14 + 0x10) = uVar17 + 1;
          *(byte *)(uVar14 + uVar17 + 0x20) = (byte)uVar9;
        }
        *unaff_x20 = uVar14;
      }
      else {
        uVar9 = (long)puVar18 << 0x10;
        pdVar6 = param_1;
        __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                  (uVar9,param_1,param_2);
        if (0xb < (int)uVar9) goto LAB_000fe0e8;
LAB_000fe148:
        iVar15 = (int)uVar9;
        if (iVar15 == 8) {
          pcVar5 = "\\b";
        }
        else if (iVar15 == 9) {
          pcVar5 = "\\t";
        }
        else {
          if (iVar15 != 10) goto LAB_000fe1a8;
          pcVar5 = "\\n";
        }
LAB_000fe09c:
        FUN_000c7840(pcVar5,2);
      }
LAB_000fe0a4:
      puVar18 = (undefined1 *)((long)pdVar6 + (long)puVar18);
    } while ((long)puVar18 < (long)uVar4);
    _swift_bridgeObjectRelease(param_2);
    uVar14 = *unaff_x20;
  }
  uVar4 = uVar14;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar9 = uVar14;
  if ((uVar4 & 1) == 0) {
    uVar9 = 0;
    FUN_000540b4(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
  }
  uVar4 = *(ulong *)(uVar9 + 0x10);
  uVar14 = uVar9;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar4) {
    uVar14 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    FUN_000540b4(uVar14,uVar4 + 1,1,uVar9);
  }
  *(ulong *)(uVar14 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar14 + uVar4 + 0x20) = 0x22;
  *unaff_x20 = uVar14;
  return;
}



/* Entry: 000fe844; end: 000fe93f;  */

void FUN_000fe844(double param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  char cVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  if ((((ulong)param_1 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) {
    __sSd16debugDescriptionSSvg();
    if ((param_3 >> 0x3c & 1) == 0) {
      uVar8 = param_2 & 0xffffffffffff;
      if ((param_3 & 0x2000000000000000) != 0) {
        uVar8 = param_3 >> 0x38 & 0xf;
      }
    }
    else {
      uVar8 = param_2;
      __sSS8UTF8ViewV13_foreignCountSiyF(param_2,param_3);
    }
    uVar14 = *unaff_x20;
    lVar3 = *(long *)(uVar14 + 0x10);
    if (SCARRY8(lVar3,uVar8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc7af8);
      (*pcVar1)();
    }
    uVar4 = uVar14;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)uVar4 == 0) ||
       (uVar13 = *(ulong *)(uVar14 + 0x18) >> 1, (long)uVar13 < (long)(lVar3 + uVar8))) {
      FUN_000540b4();
      uVar13 = *(ulong *)(uVar4 + 0x18) >> 1;
      uVar14 = uVar4;
    }
    lVar11 = uVar13 - *(long *)(uVar14 + 0x10);
    lVar3 = uVar14 + *(long *)(uVar14 + 0x10) + 0x20;
    __ss11_StringGutsV8copyUTF84intoSiSgSrys5UInt8VG_tF(lVar3,lVar11,param_2,param_3);
    if (((uint)lVar11 & 0xff) != 1) {
      _swift_bridgeObjectRelease(param_3);
      if (lVar3 < (long)uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0xc7afc);
        (*pcVar1)();
      }
      if (0 < lVar3) {
        if (SCARRY8(*(long *)(uVar14 + 0x10),lVar3)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0xc7b00);
          (*pcVar1)();
        }
        *(long *)(uVar14 + 0x10) = *(long *)(uVar14 + 0x10) + lVar3;
      }
      *unaff_x20 = uVar14;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc7b04);
    (*pcVar1)();
  }
  if (((ulong)param_1 & 0xfffffffffffff) == 0) {
    if (0.0 <= param_1) {
      pcVar6 = "\"Infinity\"";
      lVar3 = 10;
    }
    else {
      pcVar6 = "\"-Infinity\"";
      lVar3 = 0xb;
    }
  }
  else {
    pcVar6 = "\"NaN\"";
    lVar3 = 5;
  }
  uVar8 = *unaff_x20;
  lVar11 = *(long *)(uVar8 + 0x10);
  if (SCARRY8(lVar11,lVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc7944);
    (*pcVar1)();
  }
  uVar14 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((int)uVar14 != 0) {
    uVar13 = *(ulong *)(uVar8 + 0x18);
    uVar4 = uVar13 >> 1;
    if (lVar11 + lVar3 <= (long)uVar4) goto LAB_000c78ac;
  }
  FUN_000540b4();
  uVar13 = *(ulong *)(uVar14 + 0x18);
  uVar4 = uVar13 >> 1;
  uVar8 = uVar14;
LAB_000c78ac:
  uVar14 = *(ulong *)(uVar8 + 0x10);
  lVar11 = uVar4 - uVar14;
  if ((lVar3 == 0) || (lVar11 == 0)) {
    pcVar5 = (char *)0x0;
    if (pcVar6 != (char *)0x0) {
      pcVar5 = pcVar6;
    }
    pcVar10 = (char *)0x0;
    if (pcVar6 != (char *)0x0) {
      pcVar10 = pcVar6 + lVar3;
    }
    lVar12 = 0;
  }
  else {
    lVar12 = lVar3;
    if (lVar11 <= lVar3) {
      lVar12 = lVar11;
    }
    _memcpy(uVar8 + uVar14 + 0x20,pcVar6,lVar12);
    pcVar5 = pcVar6 + lVar12;
    pcVar10 = pcVar6 + lVar3;
  }
  if (lVar12 < lVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc7948);
    (*pcVar1)();
  }
  if (0 < lVar12) {
    bVar2 = SCARRY8(uVar14,lVar12);
    uVar14 = uVar14 + lVar12;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xc794c);
      (*pcVar1)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar14;
  }
  if ((lVar12 != lVar11 || pcVar5 == (char *)0x0) || pcVar10 == pcVar5) {
LAB_000c7924:
    *unaff_x20 = uVar8;
    return;
  }
  pcVar6 = pcVar5 + 1;
  cVar9 = *pcVar5;
  uVar4 = uVar8;
  do {
    while( true ) {
      uVar7 = uVar13 >> 1;
      if ((long)(uVar14 + 1) <= (long)uVar7) break;
      uVar8 = (ulong)(1 < uVar13);
      FUN_000540b4(uVar8,uVar14 + 1,1,uVar4);
      uVar13 = *(ulong *)(uVar8 + 0x18);
      uVar7 = uVar13 >> 1;
      if ((long)uVar7 <= (long)uVar14) goto LAB_000c7954;
LAB_000c7970:
      lVar3 = uVar14 + 0x20;
      pcVar5 = pcVar6;
      do {
        *(char *)(uVar8 + lVar3) = cVar9;
        if (pcVar5 == pcVar10) {
          *(long *)(uVar8 + 0x10) = lVar3 + -0x1f;
          goto LAB_000c7924;
        }
        cVar9 = *pcVar5;
        pcVar6 = pcVar6 + 1;
        lVar3 = lVar3 + 1;
        pcVar5 = pcVar5 + 1;
      } while (lVar3 - uVar7 != 0x20);
      uVar13 = *(ulong *)(uVar8 + 0x18);
      *(ulong *)(uVar8 + 0x10) = uVar7;
      uVar4 = uVar8;
      uVar14 = uVar7;
    }
    uVar8 = uVar4;
    if ((long)uVar14 < (long)uVar7) goto LAB_000c7970;
LAB_000c7954:
    *(ulong *)(uVar8 + 0x10) = uVar14;
    uVar4 = uVar8;
  } while( true );
}



/* Entry: 000fe940; end: 000fea53;  */

undefined * FUN_000fe940(void)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar4 = PTR___swiftEmptyArrayStorage_0099b8f0;
  FUN_000c7b04(&UNK_00005a41);
  FUN_000c7b04(&UNK_00007a61);
  FUN_000c7b04(&UNK_00003930);
  puVar5 = puVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar3 = puVar4;
  if (((ulong)puVar5 & 1) == 0) {
    puVar3 = (undefined *)0x0;
    FUN_000540b4(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
  }
  uVar2 = *(ulong *)(puVar3 + 0x10);
  uVar6 = *(ulong *)(puVar3 + 0x18);
  uVar7 = uVar6 >> 1;
  puVar4 = puVar3;
  if (uVar7 <= uVar2) {
    puVar4 = (undefined *)(ulong)(1 < uVar6);
    FUN_000540b4(puVar4,uVar2 + 1,1,puVar3);
    uVar6 = *(ulong *)(puVar4 + 0x18);
    uVar7 = uVar6 >> 1;
  }
  *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
  puVar4[uVar2 + 0x20] = 0x2b;
  lVar1 = uVar2 + 2;
  puVar5 = puVar4;
  if ((long)uVar7 < lVar1) {
    puVar5 = (undefined *)(ulong)(1 < uVar6);
    FUN_000540b4(puVar5,lVar1,1,puVar4);
  }
  *(long *)(puVar5 + 0x10) = lVar1;
  puVar5[uVar2 + 0x21] = 0x2f;
  return puVar5;
}



/* Entry: 000fea54; end: 000feaa3;  */

void FUN_000fea54(void)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  FUN_000c7b04(&UNK_00003930);
  FUN_000c7b04(&UNK_00004641);
  puRam0000000000aef480 = puVar1;
  return;
}



/* Entry: 000feaa4; end: 000febc7;  */

void FUN_000feaa4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x22;
  *unaff_x20 = uVar3;
  FUN_000c7690(param_1,param_2);
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x22;
  *unaff_x20 = uVar3;
  return;
}



/* Entry: 000febc8; end: 000fedff;  */

void FUN_000febc8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  
  if (*(char *)((long)unaff_x20 + 9) != '\x01') {
    uVar1 = unaff_x20[1];
    uVar3 = *unaff_x20;
    uVar2 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar3;
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar2 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar2) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_000540b4(uVar3,uVar2 + 1,1,uVar4);
      uVar4 = uVar3;
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    *(char *)(uVar4 + uVar2 + 0x20) = (char)uVar1;
    *unaff_x20 = uVar4;
  }
  FUN_000feaa4(param_1,param_2);
  uVar4 = *unaff_x20;
  uVar1 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar4;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_000540b4(uVar4,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar4 + uVar1 + 0x20) = 0x3a;
  *unaff_x20 = uVar4;
  *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  return;
}



/* Entry: 000fee00; end: 000ff6eb;  */

void FUN_000fee00(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  
  uVar4 = *unaff_x20;
  if (*(char *)((long)unaff_x20 + 9) != '\x01') {
    uVar2 = unaff_x20[1];
    uVar1 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar4,uVar1 + 1,1,uVar3);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    *(char *)(uVar4 + uVar1 + 0x20) = (char)uVar2;
    *unaff_x20 = uVar4;
  }
  uVar2 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar1 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
    FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar4 = *(ulong *)(uVar1 + 0x10);
  uVar2 = uVar1;
  if (*(ulong *)(uVar1 + 0x18) >> 1 <= uVar4) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar1 + 0x18));
    FUN_000540b4(uVar2,uVar4 + 1,1,uVar1);
  }
  *(ulong *)(uVar2 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar2 + uVar4 + 0x20) = 0x7b;
  *unaff_x20 = uVar2;
  *(undefined2 *)(unaff_x20 + 1) = 0x100;
  return;
}



/* Entry: 000ff6ec; end: 001000bf;  */

void FUN_000ff6ec(byte *param_1,long param_2,ulong *param_3)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_1 == (byte *)0x0) {
    return;
  }
  param_2 = param_2 - (long)param_1;
  if (param_2 == 0) {
    return;
  }
  lVar5 = 0;
  uVar6 = 0;
  do {
    uVar7 = uVar6;
    if (lVar5 == 3) {
      if (lRam0000000000aef488 != -1) {
        _swift_once(0xaef488,0xfe924);
      }
      lVar5 = lRam0000000000aef490;
      uVar6 = uVar7 >> 0x12 & 0x3f;
      if (*(ulong *)(lRam0000000000aef490 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xffd80);
        (*pcVar3)();
      }
      lVar1 = lRam0000000000aef490 + 0x20;
      uVar8 = *(undefined1 *)(lVar1 + uVar6);
      uVar11 = *param_3;
      uVar6 = uVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar11;
      uVar12 = uVar11;
      if ((uVar6 & 1) == 0) {
        uVar12 = 0;
        FUN_000540b4(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
        *param_3 = uVar12;
      }
      uVar6 = *(ulong *)(uVar12 + 0x10);
      uVar11 = uVar12;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar6) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_000540b4(uVar11,uVar6 + 1,1,uVar12);
        *param_3 = uVar11;
      }
      *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar11 + uVar6 + 0x20) = uVar8;
      uVar6 = uVar7 >> 0xc & 0x3f;
      if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xffd84);
        (*pcVar3)();
      }
      uVar11 = *param_3;
      uVar8 = *(undefined1 *)(lVar1 + uVar6);
      uVar6 = uVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar11;
      uVar12 = uVar11;
      if ((uVar6 & 1) == 0) {
        uVar12 = 0;
        FUN_000540b4(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
        *param_3 = uVar12;
      }
      uVar6 = *(ulong *)(uVar12 + 0x10);
      uVar11 = uVar12;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar6) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_000540b4(uVar11,uVar6 + 1,1,uVar12);
        *param_3 = uVar11;
      }
      *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar11 + uVar6 + 0x20) = uVar8;
      uVar6 = uVar7 >> 6 & 0x3f;
      if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xffd88);
        (*pcVar3)();
      }
      uVar11 = *param_3;
      uVar8 = *(undefined1 *)(lVar1 + uVar6);
      uVar6 = uVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar11;
      uVar12 = uVar11;
      if ((uVar6 & 1) == 0) {
        uVar12 = 0;
        FUN_000540b4(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
        *param_3 = uVar12;
      }
      uVar6 = *(ulong *)(uVar12 + 0x10);
      uVar11 = uVar12;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar6) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_000540b4(uVar11,uVar6 + 1,1,uVar12);
        *param_3 = uVar11;
      }
      *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar11 + uVar6 + 0x20) = uVar8;
      if (*(ulong *)(lVar5 + 0x10) <= (uVar7 & 0x3f)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xffd8c);
        (*pcVar3)();
      }
      uVar12 = *param_3;
      uVar8 = *(undefined1 *)(lVar1 + (uVar7 & 0x3f));
      uVar6 = uVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar12;
      uVar7 = uVar12;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        FUN_000540b4(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
        *param_3 = uVar7;
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar12 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_000540b4(uVar12,uVar6 + 1,1,uVar7);
        *param_3 = uVar12;
      }
      lVar5 = 0;
      uVar7 = 0;
      *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar12 + uVar6 + 0x20) = uVar8;
    }
    bVar4 = SCARRY8(lVar5,1);
    lVar5 = lVar5 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xffd7c);
      (*pcVar3)();
    }
    bVar2 = *param_1;
    uVar11 = (ulong)bVar2;
    uVar12 = uVar7 << 8;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
    uVar6 = uVar11 | uVar12;
  } while (param_2 != 0);
  if (lVar5 == 1) {
    if (lRam0000000000aef488 != -1) {
      _swift_once(0xaef488,0xfe924);
    }
    lVar5 = lRam0000000000aef490;
    uVar6 = (ulong)(bVar2 >> 2);
    if (*(ulong *)(lRam0000000000aef490 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xffde4);
      (*pcVar3)();
    }
    lVar1 = lRam0000000000aef490 + 0x20;
    uVar8 = *(undefined1 *)(lVar1 + uVar6);
    uVar12 = *param_3;
    uVar6 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    *param_3 = uVar12;
    uVar7 = uVar12;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      FUN_000540b4(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *param_3 = uVar7;
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar12 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_000540b4(uVar12,uVar6 + 1,1,uVar7);
      *param_3 = uVar12;
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uVar12 + uVar6 + 0x20) = uVar8;
    uVar6 = (uVar11 & 3) * 0x10;
    if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xffea0);
      (*pcVar3)();
    }
    uVar12 = *param_3;
    uVar8 = *(undefined1 *)(lVar1 + uVar6);
    uVar6 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    *param_3 = uVar12;
    uVar7 = uVar12;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      FUN_000540b4(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *param_3 = uVar7;
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar12 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_000540b4(uVar12,uVar6 + 1,1,uVar7);
      *param_3 = uVar12;
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uVar12 + uVar6 + 0x20) = uVar8;
    uVar7 = *param_3;
    uVar6 = *(ulong *)(uVar7 + 0x10);
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_000540b4(uVar7,uVar6 + 1,1);
      *param_3 = uVar7;
    }
    *(ulong *)(uVar7 + 0x10) = uVar6 + 1;
    uVar8 = 0x3d;
    *(undefined1 *)(uVar7 + uVar6 + 0x20) = 0x3d;
    uVar6 = *param_3;
LAB_000ffd38:
    uVar7 = *(ulong *)(uVar6 + 0x10);
    lVar5 = uVar7 + 1;
    if (uVar7 < *(ulong *)(uVar6 + 0x18) >> 1) goto LAB_000ffd48;
    uVar12 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_000540b4(uVar12,lVar5,1,uVar6);
  }
  else {
    if (lVar5 != 2) {
      if (lVar5 != 3) {
        return;
      }
      if (lRam0000000000aef488 != -1) {
        _swift_once(0xaef488,0xfe924);
      }
      lVar5 = lRam0000000000aef490;
      uVar6 = (uVar7 & 0xffffffffffffff) >> 10 & 0x3f;
      if (*(ulong *)(lRam0000000000aef490 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xffe00);
        (*pcVar3)();
      }
      lVar1 = lRam0000000000aef490 + 0x20;
      uVar8 = *(undefined1 *)(lVar1 + uVar6);
      uVar9 = *param_3;
      uVar6 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar9;
      uVar10 = uVar9;
      if ((uVar6 & 1) == 0) {
        uVar10 = 0;
        FUN_000540b4(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
        *param_3 = uVar10;
      }
      uVar6 = *(ulong *)(uVar10 + 0x10);
      uVar9 = uVar10;
      if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar6) {
        uVar9 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
        FUN_000540b4(uVar9,uVar6 + 1,1,uVar10);
        *param_3 = uVar9;
      }
      *(ulong *)(uVar9 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar9 + uVar6 + 0x20) = uVar8;
      uVar6 = (uVar7 & 0xffffffffffffff) >> 4 & 0x3f;
      if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xffef0);
        (*pcVar3)();
      }
      uVar10 = *param_3;
      uVar8 = *(undefined1 *)(lVar1 + uVar6);
      uVar6 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar10;
      uVar7 = uVar10;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        FUN_000540b4(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
        *param_3 = uVar7;
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar10 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_000540b4(uVar10,uVar6 + 1,1,uVar7);
        *param_3 = uVar10;
      }
      *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar10 + uVar6 + 0x20) = uVar8;
      uVar6 = (uVar11 | uVar12) >> 6 & 0x3f;
      if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xffffc);
        (*pcVar3)();
      }
      uVar12 = *param_3;
      uVar8 = *(undefined1 *)(lVar1 + uVar6);
      uVar6 = uVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar12;
      uVar7 = uVar12;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        FUN_000540b4(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
        *param_3 = uVar7;
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar12 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_000540b4(uVar12,uVar6 + 1,1,uVar7);
        *param_3 = uVar12;
      }
      *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
      *(undefined1 *)(uVar12 + uVar6 + 0x20) = uVar8;
      if (*(ulong *)(lVar5 + 0x10) <= (uVar11 & 0x3f)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000c0);
        (*pcVar3)();
      }
      uVar12 = *param_3;
      uVar8 = *(undefined1 *)(lVar1 + (uVar11 & 0x3f));
      uVar7 = uVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar12;
      uVar6 = uVar12;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0;
        FUN_000540b4(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
        *param_3 = uVar6;
      }
      goto LAB_000ffd38;
    }
    if (lRam0000000000aef488 != -1) {
      _swift_once(0xaef488,0xfe924);
    }
    lVar5 = lRam0000000000aef490;
    uVar6 = (uVar12 & 0xffffffffffff00) >> 10 & 0x3f;
    if (*(ulong *)(lRam0000000000aef490 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xffdc8);
      (*pcVar3)();
    }
    lVar1 = lRam0000000000aef490 + 0x20;
    uVar8 = *(undefined1 *)(lVar1 + uVar6);
    uVar10 = *param_3;
    uVar6 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    *param_3 = uVar10;
    uVar7 = uVar10;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      FUN_000540b4(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      *param_3 = uVar7;
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar10 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_000540b4(uVar10,uVar6 + 1,1,uVar7);
      *param_3 = uVar10;
    }
    *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uVar10 + uVar6 + 0x20) = uVar8;
    uVar6 = (uVar11 | uVar12 & 0xffffffffffff00) >> 4 & 0x3f;
    if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xffe50);
      (*pcVar3)();
    }
    uVar12 = *param_3;
    uVar8 = *(undefined1 *)(lVar1 + uVar6);
    uVar6 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    *param_3 = uVar12;
    uVar7 = uVar12;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      FUN_000540b4(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *param_3 = uVar7;
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar12 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_000540b4(uVar12,uVar6 + 1,1,uVar7);
      *param_3 = uVar12;
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uVar12 + uVar6 + 0x20) = uVar8;
    uVar6 = (uVar11 & 0xf) * 4;
    if (*(ulong *)(lVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xfff40);
      (*pcVar3)();
    }
    uVar12 = *param_3;
    uVar8 = *(undefined1 *)(lVar1 + uVar6);
    uVar6 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    *param_3 = uVar12;
    uVar7 = uVar12;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      FUN_000540b4(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *param_3 = uVar7;
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar12 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_000540b4(uVar12,uVar6 + 1,1,uVar7);
      *param_3 = uVar12;
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uVar12 + uVar6 + 0x20) = uVar8;
    uVar6 = *param_3;
    uVar7 = *(ulong *)(uVar6 + 0x10);
    lVar5 = uVar7 + 1;
    if (uVar7 < *(ulong *)(uVar6 + 0x18) >> 1) {
      uVar8 = 0x3d;
      goto LAB_000ffd48;
    }
    uVar12 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_000540b4(uVar12,lVar5,1,uVar6);
    uVar8 = 0x3d;
  }
  *param_3 = uVar12;
  uVar6 = uVar12;
LAB_000ffd48:
  *(long *)(uVar6 + 0x10) = lVar5;
  *(undefined1 *)(uVar6 + uVar7 + 0x20) = uVar8;
  return;
}



/* Entry: 001000c0; end: 001000f3;  */

undefined8 * FUN_001000c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 001000f4; end: 001000fb;  */

void FUN_001000f4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*param_1);
  return;
}



/* Entry: 001000fc; end: 00100147;  */

undefined8 * FUN_001000fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  return param_1;
}



/* Entry: 00100148; end: 0010015b;  */

void FUN_00100148(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Entry: 0010015c; end: 00100197;  */

undefined8 * FUN_0010015c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  return param_1;
}



/* Entry: 00100198; end: 00100247;  */

int FUN_00100198(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 10) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00100248; end: 001002af;  */

void FUN_00100248(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 001002b0; end: 001002d3;  */

bool FUN_001002b0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 001002d4; end: 0010037f;  */

void FUN_001002d4(void)

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



/* Entry: 00100380; end: 00100383;  */

void FUN_00100380(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aef498 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d9970;
  _swift_getWitnessTable(&UNK_007d9970,&UNK_009ad758);
  puRam0000000000aef498 = puVar1;
  return;
}



/* Entry: 00100384; end: 001003c3;  */

void FUN_00100384(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aef498 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d9970;
  _swift_getWitnessTable(&UNK_007d9970,&UNK_009ad758);
  puRam0000000000aef498 = puVar1;
  return;
}



/* Entry: 001003c4; end: 00100527;  */

int FUN_001003c4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00100440;
        goto LAB_00100424;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00100424:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_00100440:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 00100528; end: 0010066f;  */

uint FUN_00100528(uint param_1)

{
  return param_1 & 1;
}



/* Entry: 00100670; end: 001006f3;  */

long FUN_00100670(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 001006f4; end: 0010079f;  */

undefined8 * FUN_001006f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar1 = param_2[2];
  uVar4 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  uVar2 = param_2[4];
  uVar5 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar5;
  uVar3 = param_2[6];
  uVar6 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar6;
  uVar7 = param_2[8];
  param_1[8] = uVar7;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  _swift_bridgeObjectRetain();
  _swift_retain(uVar1);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  return param_1;
}



/* Entry: 001007a0; end: 001008b3;  */

undefined8 * FUN_001007a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar1);
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
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  *(undefined1 *)((long)param_1 + 0x4a) = *(undefined1 *)((long)param_2 + 0x4a);
  *(undefined1 *)((long)param_1 + 0x4b) = *(undefined1 *)((long)param_2 + 0x4b);
  return param_1;
}



/* Entry: 001008b4; end: 001008d7;  */

void FUN_001008b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  uVar7 = *(undefined8 *)((long)param_2 + 0x3c);
  *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)((long)param_2 + 0x44);
  *(undefined8 *)((long)param_1 + 0x3c) = uVar7;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 001008d8; end: 0010098b;  */

undefined8 * FUN_001008d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  _swift_release(param_1[2]);
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
  _swift_bridgeObjectRelease(param_1[6]);
  uVar1 = param_1[7];
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  *(undefined1 *)((long)param_1 + 0x4a) = *(undefined1 *)((long)param_2 + 0x4a);
  *(undefined1 *)((long)param_1 + 0x4b) = *(undefined1 *)((long)param_2 + 0x4b);
  return param_1;
}



/* Entry: 0010098c; end: 00100a37;  */

int FUN_0010098c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x4c) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00100a38; end: 00100d5b;  */

void FUN_00100a38(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  long extraout_x8;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x20;
  long lVar14;
  int iVar15;
  undefined1 *puVar16;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar16 = (undefined1 *)*unaff_x20;
  puVar6 = puVar16;
  puVar9 = param_2;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    puVar9 = (undefined1 *)(*(long *)(puVar16 + 0x10) + 1);
    puVar6 = (undefined1 *)0x0;
    FUN_000540b4(0,puVar9,1,puVar16);
    puVar16 = puVar6;
  }
  uVar2 = *(ulong *)(puVar16 + 0x10);
  puVar1 = (undefined1 *)(uVar2 + 1);
  if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar2) {
    puVar6 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
    puVar9 = puVar1;
    FUN_000540b4(puVar6,puVar1,1,puVar16);
    puVar16 = puVar6;
  }
  *(undefined1 **)(puVar16 + 0x10) = puVar1;
  puVar16[uVar2 + 0x20] = 0x22;
  *unaff_x20 = puVar16;
  uVar4 = (uint)((ulong)param_2 >> 0x20);
  uVar10 = uVar4 >> 0x1e;
  iVar15 = (int)param_1;
  iVar12 = (int)((ulong)param_1 >> 0x20);
  if (uVar4 >> 0x1e < 2) {
    if (uVar10 == 0) {
      if (((ulong)param_2 >> 0x30 & 0xff) != 0) {
LAB_00100af4:
        if (uVar10 == 2) {
          lVar14 = *(long *)(param_1 + 0x10);
          lVar3 = *(long *)(param_1 + 0x18);
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          puVar16 = puVar6;
          if (puVar6 != (undefined1 *)0x0) {
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar14,(long)puVar16)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100d54);
              (*pcVar5)();
            }
            puVar6 = puVar6 + (lVar14 - (long)puVar16);
          }
          puVar9 = (undefined1 *)(lVar3 - lVar14);
          if (SBORROW8(lVar3,lVar14)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100d50);
            (*pcVar5)();
          }
          __s10Foundation13__DataStorageC7_lengthSivg();
          if ((long)puVar9 <= (long)puVar16) {
            puVar16 = puVar9;
          }
          puVar9 = (undefined1 *)0x0;
          if (puVar6 != (undefined1 *)0x0) {
            puVar9 = puVar16 + (long)puVar6;
          }
        }
        else if (uVar10 == 1) {
          lVar14 = (long)iVar15;
          puVar16 = (undefined1 *)((param_1 >> 0x20) - lVar14);
          if (param_1 >> 0x20 < lVar14) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100d4c);
            (*pcVar5)();
          }
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          if (puVar6 == (undefined1 *)0x0) {
            __s10Foundation13__DataStorageC7_lengthSivg();
            puVar6 = (undefined1 *)0x0;
          }
          else {
            puVar9 = puVar6;
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar14,(long)puVar9)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100d58);
              (*pcVar5)();
            }
            puVar6 = puVar6 + (lVar14 - (long)puVar9);
            __s10Foundation13__DataStorageC7_lengthSivg();
            if (puVar6 != (undefined1 *)0x0) {
              if ((long)puVar16 <= (long)puVar9) {
                puVar9 = puVar16;
              }
              puVar9 = puVar9 + (long)puVar6;
              goto LAB_00100c54;
            }
          }
          puVar9 = (undefined1 *)0x0;
        }
        else {
          uStack_5e = (undefined1)param_1;
          uStack_5d = (undefined1)((ulong)param_1 >> 8);
          uStack_5c = (undefined1)((ulong)param_1 >> 0x10);
          uStack_5b = (undefined1)((ulong)param_1 >> 0x18);
          uStack_5a = (undefined1)((ulong)param_1 >> 0x20);
          uStack_59 = (undefined1)((ulong)param_1 >> 0x28);
          uStack_58 = (undefined1)((ulong)param_1 >> 0x30);
          uStack_57 = (undefined1)((ulong)param_1 >> 0x38);
          uStack_56 = SUB81(param_2,0);
          uStack_55 = (undefined1)((ulong)param_2 >> 8);
          uStack_54 = (undefined1)((ulong)param_2 >> 0x10);
          uStack_53 = (undefined1)((ulong)param_2 >> 0x18);
          uStack_52 = (undefined1)((ulong)param_2 >> 0x20);
          uStack_51 = (undefined1)((ulong)param_2 >> 0x28);
          puVar9 = (undefined1 *)((ulong)param_2 >> 0x30 & 0xff);
          puVar6 = &uStack_5e;
        }
LAB_00100c54:
        FUN_000ff6ec(puVar6);
      }
    }
    else {
      if (SBORROW4(iVar12,iVar15)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100d48);
        (*pcVar5)();
      }
      if (0 < iVar12 - iVar15) goto LAB_00100af4;
    }
  }
  else if (uVar10 == 2) {
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100d44);
      (*pcVar5)();
    }
    if (0 < *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) goto LAB_00100af4;
  }
  puVar13 = (undefined8 *)*unaff_x20;
  puVar7 = puVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    puVar9 = (undefined1 *)(puVar13[2] + 1);
    puVar7 = (undefined8 *)0x0;
    FUN_000540b4(0,puVar9,1,puVar13);
    puVar13 = puVar7;
  }
  uVar2 = puVar13[2];
  puVar6 = (undefined1 *)(uVar2 + 1);
  if ((ulong)puVar13[3] >> 1 <= uVar2) {
    puVar7 = (undefined8 *)(ulong)(1 < (ulong)puVar13[3]);
    puVar9 = puVar6;
    FUN_000540b4(puVar7,puVar6,1,puVar13);
    puVar13 = puVar7;
  }
  puVar13[2] = puVar6;
  *(undefined1 *)((long)puVar13 + uVar2 + 0x20) = 0x22;
  *unaff_x20 = puVar13;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = unaff_x20[3];
  puVar13 = puVar7;
  if (*(char *)((long)unaff_x20 + 0x4a) == '\x01') {
    if ((*(long *)(lVar14 + 0x10) == 0) || (FUN_000e1d94(), ((ulong)puVar9 & 1) == 0)) {
LAB_00100de4:
      lVar14 = unaff_x20[8];
      if (lVar14 != 0) {
        if ((*(long *)(lVar14 + 0x10) == 0) || (FUN_000e1d94(puVar7), ((ulong)puVar9 & 1) == 0)) {
          lStack_c0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          FUN_00105bf4(*(long *)(lVar14 + 0x38) + (long)puVar7 * 0x28,&uStack_e0);
          if (lStack_c8 != 0) {
            FUN_0001393c(&uStack_e0,lStack_c8);
            lVar14 = *(long *)(lStack_c8 + -8);
            (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar14 + 0x40));
            (**(code **)(lVar14 + 0x10))(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
            func_0x00105c38(&uStack_e0,0xaedb70,&UNK_007d8040);
            (**(code **)(lStack_c0 + 0x18))(auStack_108,lStack_c8,lStack_c0);
            (**(code **)(lVar14 + 8))
                      (auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_c8);
            FUN_0001393c(auStack_108,uStack_f0);
            uVar8 = uStack_f0;
            lVar14 = lStack_e8;
            (**(code **)(lStack_e8 + 0x10))(uStack_f0,lStack_e8);
            FUN_00011670(auStack_108);
            func_0x000fed0c(uVar8,lVar14);
            _swift_bridgeObjectRelease(lVar14);
            return;
          }
        }
        puVar13 = &uStack_e0;
        func_0x00105c38(puVar13,0xaedb70,&UNK_007d8040);
      }
      func_0x000c7144();
      _swift_allocError(&UNK_009ad758,puVar13,0,0);
      *(undefined1 *)puVar13 = 4;
      _swift_willThrow();
      return;
    }
    puVar11 = (undefined8 *)(*(long *)(lVar14 + 0x38) + (long)puVar13 * 0x28 + 0x18);
  }
  else if (((*(long *)(lVar14 + 0x10) == 0) || (FUN_000e1d94(), ((ulong)puVar9 & 1) == 0)) ||
          (puVar11 = (undefined8 *)(*(long *)(lVar14 + 0x38) + (long)puVar13 * 0x28),
          *(char *)(puVar11 + 2) == '\x01')) goto LAB_00100de4;
  FUN_000febc8(*puVar11,puVar11[1]);
  return;
}



/* Entry: 00100d5c; end: 00100f83;  */

void FUN_00100d5c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  puVar1 = param_1;
  if (*(char *)(unaff_x20 + 0x4a) == '\x01') {
    if ((*(long *)(lVar4 + 0x10) == 0) || (FUN_000e1d94(), (param_2 & 1) == 0)) {
LAB_00100de4:
      lVar4 = *(long *)(unaff_x20 + 0x40);
      if (lVar4 != 0) {
        if ((*(long *)(lVar4 + 0x10) == 0) || (FUN_000e1d94(param_1), (param_2 & 1) == 0)) {
          lStack_60 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          lStack_68 = 0;
          uStack_70 = 0;
        }
        else {
          FUN_00105bf4(*(long *)(lVar4 + 0x38) + (long)param_1 * 0x28,&uStack_80);
          if (lStack_68 != 0) {
            FUN_0001393c(&uStack_80,lStack_68);
            lVar4 = *(long *)(lStack_68 + -8);
            (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar4 + 0x40));
            (**(code **)(lVar4 + 0x10))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
            func_0x00105c38(&uStack_80,0xaedb70,&UNK_007d8040);
            (**(code **)(lStack_60 + 0x18))(auStack_a8,lStack_68,lStack_60);
            (**(code **)(lVar4 + 8))
                      (auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_68);
            FUN_0001393c(auStack_a8,uStack_90);
            uVar2 = uStack_90;
            lVar4 = lStack_88;
            (**(code **)(lStack_88 + 0x10))(uStack_90,lStack_88);
            FUN_00011670(auStack_a8);
            func_0x000fed0c(uVar2,lVar4);
            _swift_bridgeObjectRelease(lVar4);
            return;
          }
        }
        puVar1 = &uStack_80;
        func_0x00105c38(puVar1,0xaedb70,&UNK_007d8040);
      }
      func_0x000c7144();
      _swift_allocError(&UNK_009ad758,puVar1,0,0);
      *(undefined1 *)puVar1 = 4;
      _swift_willThrow();
      return;
    }
    puVar3 = (undefined8 *)(*(long *)(lVar4 + 0x38) + (long)puVar1 * 0x28 + 0x18);
  }
  else if (((*(long *)(lVar4 + 0x10) == 0) || (FUN_000e1d94(), (param_2 & 1) == 0)) ||
          (puVar3 = (undefined8 *)(*(long *)(lVar4 + 0x38) + (long)puVar1 * 0x28),
          *(char *)(puVar3 + 2) == '\x01')) goto LAB_00100de4;
  FUN_000febc8(*puVar3,puVar3[1]);
  return;
}



/* Entry: 00100f84; end: 00101073;  */

void FUN_00100f84(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    if ((char)unaff_x20[9] == '\x01') {
      if (param_1 < 0) {
        uVar3 = *unaff_x20;
        uVar1 = uVar3;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar2 = uVar3;
        if ((uVar1 & 1) == 0) {
          uVar2 = 0;
          FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
        }
        uVar1 = *(ulong *)(uVar2 + 0x10);
        uVar3 = uVar2;
        if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
          uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
          FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
        }
        *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
        *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x2d;
        *unaff_x20 = uVar3;
        param_1 = -param_1;
      }
      func_0x000fef20(param_1);
    }
    else {
      func_0x000feff4(param_1);
    }
  }
  return;
}



/* Entry: 00101074; end: 001013d3;  */

/* WARNING: Removing unreachable block (ram,0x00101340) */
/* WARNING: Removing unreachable block (ram,0x001011a0) */
/* WARNING: Removing unreachable block (ram,0x001011a4) */

void FUN_00101074(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x12;
  ulong *unaff_x20;
  ulong uVar5;
  long lVar6;
  long unaff_x21;
  undefined1 *puVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  code *pcStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  long lStack_68;
  
  lVar8 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar11 = (long)puVar7 - extraout_x12;
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    uVar5 = *unaff_x20;
    uVar1 = uVar5;
    lStack_68 = param_1;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar5;
    pcStack_70 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
      FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar4 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_000540b4(uVar5,uVar1 + 1,1,uVar4);
    }
    lVar6 = lStack_68;
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5b;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar2 = lStack_68;
    __sSa8endIndexSivg(lStack_68,param_5);
    if (lVar2 != 0) {
      __sSayxSicig(lVar11,0,lVar6,param_5);
      pcVar10 = *(code **)(lVar8 + 0x20);
      (*pcVar10)(puVar7,lVar11,param_5);
      (*pcStack_70)();
      pcVar9 = *(code **)(lVar8 + 8);
      (*pcVar9)(puVar7,param_5);
      lVar8 = lVar6;
      __sSa8endIndexSivg(lVar6,param_5);
      if (lVar8 != 1) {
        lVar8 = 1;
        pcStack_88 = pcVar9;
        pcStack_80 = pcVar10;
        uStack_78 = param_4;
        do {
          __sSayxSicig(lVar11,lVar8,lVar6,param_5);
          lVar2 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x101350);
            (*pcVar9)();
          }
          (*pcStack_80)(puVar7,lVar11,param_5);
          uVar5 = *unaff_x20;
          uVar1 = uVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar4 = uVar5;
          if ((uVar1 & 1) == 0) {
            uVar4 = 0;
            FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar1 = *(ulong *)(uVar4 + 0x10);
          uVar5 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            FUN_000540b4(uVar5,uVar1 + 1,1,uVar4);
          }
          *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x2c;
          *unaff_x20 = uVar5;
          (*pcStack_70)();
          (*pcStack_88)(puVar7,param_5);
          lVar6 = lStack_68;
          lVar3 = lStack_68;
          __sSa8endIndexSivg(lStack_68,param_5);
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar3);
      }
    }
    uVar5 = *unaff_x20;
    uVar1 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
      FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar4 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_000540b4(uVar5,uVar1 + 1,1,uVar4);
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5d;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 001013d4; end: 0010161f;  */

void FUN_001013d4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  long unaff_x21;
  long lVar9;
  long lVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  lVar10 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    (**(code **)(lVar10 + 0x10))(lVar9,param_1,param_3);
    uVar1 = 0xaeda28;
    func_0x000115a8(0xaeda28,&UNK_007d78d0);
    puVar2 = &uStack_a0;
    _swift_dynamicCast(puVar2,lVar9,param_3,uVar1,6);
    if ((int)puVar2 == 0) {
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uVar7 = 0x7d78d8;
      func_0x00105c38(&uStack_a0,0xaeda30);
      if (((*(byte *)((long)unaff_x20 + 0x49) & 1) == 0) &&
         (FUN_000dfdd8(param_3,param_4), (uVar7 & 0xff) != 1)) {
        FUN_000feaa4();
      }
      else {
        (**(code **)(param_4 + 0x28))(param_3,param_4);
        if (param_3 < 0) {
          uVar8 = *unaff_x20;
          uVar3 = uVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar4 = uVar8;
          if ((uVar3 & 1) == 0) {
            uVar4 = 0;
            FUN_000540b4(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
          }
          uVar3 = *(ulong *)(uVar4 + 0x10);
          uVar8 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
            uVar8 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            FUN_000540b4(uVar8,uVar3 + 1,1,uVar4);
          }
          *(ulong *)(uVar8 + 0x10) = uVar3 + 1;
          *(undefined1 *)(uVar8 + uVar3 + 0x20) = 0x2d;
          *unaff_x20 = uVar8;
        }
        func_0x000fef20();
      }
    }
    else {
      FUN_00105bdc(&uStack_a0,auStack_78);
      FUN_0001393c(auStack_78,uStack_60);
      uVar7 = 0x1000000;
      if (*(char *)((long)unaff_x20 + 0x4b) == '\0') {
        uVar7 = 0;
      }
      uVar6 = 0x10000;
      if (*(char *)((long)unaff_x20 + 0x4a) == '\0') {
        uVar6 = 0;
      }
      uVar5 = 0x100;
      if (*(char *)((long)unaff_x20 + 0x49) == '\0') {
        uVar5 = 0;
      }
      (**(code **)(lStack_58 + 8))(uVar5 | (byte)unaff_x20[9] | uVar6 | uVar7,uStack_60,lStack_58);
      func_0x000c79f0();
      FUN_00011670(auStack_78);
    }
  }
  return;
}



/* Entry: 00101620; end: 00101baf;  */

/* WARNING: Removing unreachable block (ram,0x00101908) */

void FUN_00101620(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long extraout_x8;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong *unaff_x20;
  ulong uVar11;
  long unaff_x21;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong auStack_70 [2];
  ulong uStack_58;
  
  lVar14 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = (long)&uStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    (**(code **)(lVar14 + 0x10))(lVar12,param_1,param_3);
    uVar3 = 0xaeda28;
    func_0x000115a8(0xaeda28,&UNK_007d78d0);
    puVar4 = &uStack_110;
    _swift_dynamicCast(puVar4,lVar12,param_3,uVar3,6);
    if ((int)puVar4 == 0) {
      uStack_f0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      func_0x00105c38(&uStack_110,0xaeda30,&UNK_007d78d8);
      puVar5 = param_3;
      _swift_conformsToProtocol(param_3,&DAT_00844958);
      if (puVar5 == (undefined1 *)0x0) {
        func_0x000c7144();
        _swift_allocError(&UNK_009ad758,puVar5,0,0);
        *puVar5 = 4;
        _swift_willThrow();
      }
      else {
        (**(code **)(puVar5 + 8))(&uStack_b8,param_3,puVar5);
        uStack_138 = unaff_x20[2];
        uStack_140 = unaff_x20[3];
        uStack_118 = unaff_x20[4];
        uStack_120 = unaff_x20[5];
        uStack_128 = unaff_x20[6];
        uStack_130 = unaff_x20[7];
        uVar13 = unaff_x20[8];
        uStack_58 = uStack_b0;
        uStack_78 = uStack_a0;
        auStack_70[0] = uStack_a8;
        uStack_88 = uStack_90;
        uStack_80 = uStack_98;
        unaff_x20[5] = uStack_a0;
        unaff_x20[4] = uStack_a8;
        unaff_x20[7] = uStack_90;
        unaff_x20[6] = uStack_98;
        unaff_x20[3] = uStack_b0;
        unaff_x20[2] = uStack_b8;
        _swift_bridgeObjectRetain(uVar13);
        _swift_retain(uStack_b8);
        FUN_00105b20(&uStack_58,auStack_e0,0xaeddc0,&UNK_007d9aa0);
        FUN_00105b20(auStack_70,auStack_e0,0xaeddc8,&UNK_007da040);
        FUN_00105b20(&uStack_78,auStack_e0,0xaeddc8,&UNK_007da040);
        FUN_00105b20(&uStack_80,auStack_e0,0xae6938,&UNK_007cdb30);
        FUN_00105b20(&uStack_88,auStack_e0,0xaeddd0,&UNK_007da050);
        FUN_00105648(param_1);
        (**(code **)(param_4 + 0x48))();
        uVar2 = uStack_138;
        uVar1 = uStack_140;
        uVar11 = *unaff_x20;
        uVar6 = uVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar7 = uVar11;
        if ((uVar6 & 1) == 0) {
          uVar7 = 0;
          FUN_000540b4(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
        }
        uVar6 = *(ulong *)(uVar7 + 0x10);
        uVar11 = uVar7;
        if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
          uVar11 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
          FUN_000540b4(uVar11,uVar6 + 1,1,uVar7);
        }
        *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
        *(undefined1 *)(uVar11 + uVar6 + 0x20) = 0x7d;
        _swift_release(uStack_b8);
        func_0x00105c38(&uStack_58,0xaeddc0,&UNK_007d9aa0);
        func_0x00105c38(auStack_70,0xaeddc8,&UNK_007da040);
        func_0x00105c38(&uStack_78,0xaeddc8,&UNK_007da040);
        func_0x00105c38(&uStack_80,0xae6938,&UNK_007cdb30);
        func_0x00105c38(&uStack_88,0xaeddd0,&UNK_007da050);
        *unaff_x20 = uVar11;
        *(undefined2 *)(unaff_x20 + 1) = 0x2c;
        _swift_release(unaff_x20[2]);
        _swift_bridgeObjectRelease(unaff_x20[3]);
        _swift_bridgeObjectRelease(unaff_x20[4]);
        _swift_bridgeObjectRelease(unaff_x20[5]);
        _swift_bridgeObjectRelease(unaff_x20[6]);
        uVar6 = unaff_x20[7];
        unaff_x20[2] = uVar2;
        unaff_x20[3] = uVar1;
        unaff_x20[4] = uStack_118;
        unaff_x20[5] = uStack_120;
        unaff_x20[6] = uStack_128;
        unaff_x20[7] = uStack_130;
        _swift_bridgeObjectRelease(uVar6);
        _swift_bridgeObjectRelease(unaff_x20[8]);
        unaff_x20[8] = uVar13;
      }
    }
    else {
      FUN_00105bdc(&uStack_110,auStack_e0);
      FUN_0001393c(auStack_e0,uStack_c8);
      uVar10 = 0x1000000;
      if (*(char *)((long)unaff_x20 + 0x4b) == '\0') {
        uVar10 = 0;
      }
      uVar9 = 0x10000;
      if (*(char *)((long)unaff_x20 + 0x4a) == '\0') {
        uVar9 = 0;
      }
      uVar8 = 0x100;
      if (*(char *)((long)unaff_x20 + 0x49) == '\0') {
        uVar8 = 0;
      }
      (**(code **)(lStack_c0 + 8))(uVar8 | (byte)unaff_x20[9] | uVar9 | uVar10,uStack_c8,lStack_c0);
      func_0x000c79f0();
      FUN_00011670(auStack_e0);
    }
  }
  return;
}



/* Entry: 00101bb0; end: 00101bc3;  */

void FUN_00101bb0(void)

{
  FUN_00101620();
  return;
}



/* Entry: 00101bc4; end: 00101e7b;  */

void FUN_00101bc4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    uVar5 = *unaff_x20;
    uVar1 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar5,uVar1 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5b;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      fVar8 = *(float *)(param_1 + 0x20);
      if ((((uint)fVar8 ^ 0xffffffff) & 0x7f800000) == 0) {
        if (((uint)fVar8 & 0x7fffff) == 0) {
          if (0.0 <= fVar8) {
            pcVar2 = "\"Infinity\"";
            uVar4 = 10;
          }
          else {
            pcVar2 = "\"-Infinity\"";
            uVar4 = 0xb;
          }
        }
        else {
          pcVar2 = "\"NaN\"";
          uVar4 = 5;
        }
        FUN_000c7840(pcVar2,uVar4);
      }
      else {
        __sSf16debugDescriptionSSvg();
        func_0x000c79f0();
      }
      if (lVar6 != 1) {
        lVar6 = lVar6 + -1;
        pfVar7 = (float *)(param_1 + 0x24);
        do {
          fVar8 = *pfVar7;
          uVar5 = *unaff_x20;
          uVar1 = uVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar3 = uVar5;
          if ((uVar1 & 1) == 0) {
            uVar3 = 0;
            FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar1 = *(ulong *)(uVar3 + 0x10);
          uVar5 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_000540b4(uVar5,uVar1 + 1,1,uVar3);
          }
          *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x2c;
          *unaff_x20 = uVar5;
          if ((((uint)fVar8 ^ 0xffffffff) & 0x7f800000) == 0) {
            if (((uint)fVar8 & 0x7fffff) == 0) {
              if (0.0 <= fVar8) {
                FUN_000c7840("\"Infinity\"",10);
              }
              else {
                FUN_000c7840("\"-Infinity\"",0xb);
              }
            }
            else {
              FUN_000c7840("\"NaN\"",5);
            }
          }
          else {
            __sSf16debugDescriptionSSvg(fVar8);
            func_0x000c79f0();
          }
          lVar6 = lVar6 + -1;
          pfVar7 = pfVar7 + 1;
        } while (lVar6 != 0);
      }
      uVar5 = *unaff_x20;
    }
    uVar1 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar5,uVar1 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5d;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 00101e7c; end: 00102133;  */

void FUN_00101e7c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar5;
  long lVar6;
  double *pdVar7;
  double dVar8;
  
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    uVar5 = *unaff_x20;
    uVar1 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar5,uVar1 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5b;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      dVar8 = *(double *)(param_1 + 0x20);
      if ((((ulong)dVar8 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
        if (((ulong)dVar8 & 0xfffffffffffff) == 0) {
          if (0.0 <= dVar8) {
            pcVar2 = "\"Infinity\"";
            uVar4 = 10;
          }
          else {
            pcVar2 = "\"-Infinity\"";
            uVar4 = 0xb;
          }
        }
        else {
          pcVar2 = "\"NaN\"";
          uVar4 = 5;
        }
        FUN_000c7840(pcVar2,uVar4);
      }
      else {
        __sSd16debugDescriptionSSvg();
        func_0x000c79f0();
      }
      if (lVar6 != 1) {
        lVar6 = lVar6 + -1;
        pdVar7 = (double *)(param_1 + 0x28);
        do {
          dVar8 = *pdVar7;
          uVar5 = *unaff_x20;
          uVar1 = uVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar3 = uVar5;
          if ((uVar1 & 1) == 0) {
            uVar3 = 0;
            FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar1 = *(ulong *)(uVar3 + 0x10);
          uVar5 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_000540b4(uVar5,uVar1 + 1,1,uVar3);
          }
          *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x2c;
          *unaff_x20 = uVar5;
          if ((((ulong)dVar8 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
            if (((ulong)dVar8 & 0xfffffffffffff) == 0) {
              if (0.0 <= dVar8) {
                FUN_000c7840("\"Infinity\"",10);
              }
              else {
                FUN_000c7840("\"-Infinity\"",0xb);
              }
            }
            else {
              FUN_000c7840("\"NaN\"",5);
            }
          }
          else {
            __sSd16debugDescriptionSSvg(dVar8);
            func_0x000c79f0();
          }
          lVar6 = lVar6 + -1;
          pdVar7 = pdVar7 + 1;
        } while (lVar6 != 0);
      }
      uVar5 = *unaff_x20;
    }
    uVar1 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar5,uVar1 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar5 + uVar1 + 0x20) = 0x5d;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 00102134; end: 0010231f;  */

void FUN_00102134(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined4 *puVar6;
  
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    uVar4 = *unaff_x20;
    uVar2 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x5b;
    *unaff_x20 = uVar4;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 != 0) {
      func_0x000fef20(*(undefined4 *)(param_1 + 0x20));
      lVar5 = lVar5 + -1;
      if (lVar5 != 0) {
        puVar6 = (undefined4 *)(param_1 + 0x24);
        do {
          uVar1 = *puVar6;
          uVar4 = *unaff_x20;
          uVar2 = uVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar3 = uVar4;
          if ((uVar2 & 1) == 0) {
            uVar3 = 0;
            FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
          }
          uVar2 = *(ulong *)(uVar3 + 0x10);
          uVar4 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
            uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
          }
          *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
          *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2c;
          *unaff_x20 = uVar4;
          func_0x000fef20(uVar1);
          lVar5 = lVar5 + -1;
          puVar6 = puVar6 + 1;
        } while (lVar5 != 0);
      }
      uVar4 = *unaff_x20;
    }
    uVar2 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
      uVar3 = uVar4;
    }
    *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar3 + uVar2 + 0x20) = 0x5d;
    *unaff_x20 = uVar3;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 00102320; end: 00102797;  */

void FUN_00102320(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  uVar1 = unaff_x20[9];
  FUN_00100d5c(param_2);
  if ((char)uVar1 == '\x01') {
    if (unaff_x21 != 0) {
      return;
    }
    uVar3 = *unaff_x20;
    uVar1 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar4 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      FUN_000540b4(uVar4,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar4 + uVar1 + 0x20) = 0x5b;
    *unaff_x20 = uVar4;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      func_0x000fef20(*(undefined8 *)(param_1 + 0x20));
      lVar6 = lVar6 + -1;
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)(param_1 + 0x28);
        do {
          uVar5 = *puVar7;
          uVar3 = *unaff_x20;
          uVar1 = uVar3;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar2 = uVar3;
          if ((uVar1 & 1) == 0) {
            uVar2 = 0;
            FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
          }
          uVar1 = *(ulong *)(uVar2 + 0x10);
          uVar3 = uVar2;
          if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
            FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
          }
          *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x2c;
          *unaff_x20 = uVar3;
          func_0x000fef20(uVar5);
          lVar6 = lVar6 + -1;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
      }
      uVar4 = *unaff_x20;
    }
    uVar1 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
  }
  else {
    if (unaff_x21 != 0) {
      return;
    }
    uVar3 = *unaff_x20;
    uVar1 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar3 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x5b;
    *unaff_x20 = uVar3;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = *(ulong *)(uVar3 + 0x10);
      uVar2 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
        uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_000540b4(uVar2,uVar1 + 1,1,uVar3);
      }
      *(ulong *)(uVar2 + 0x10) = uVar1 + 1;
      *(undefined1 *)(uVar2 + uVar1 + 0x20) = 0x22;
      *unaff_x20 = uVar2;
      func_0x000fef20(uVar5);
      uVar3 = *unaff_x20;
      uVar1 = uVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar2 = uVar3;
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
        FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
      }
      uVar1 = *(ulong *)(uVar2 + 0x10);
      uVar3 = uVar2;
      if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
        uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
        FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
      }
      *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
      *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x22;
      *unaff_x20 = uVar3;
      lVar6 = lVar6 + -1;
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)(param_1 + 0x28);
        do {
          uVar5 = *puVar7;
          uVar2 = *(ulong *)(uVar3 + 0x10);
          uVar1 = uVar2 + 1;
          uVar4 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
            uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_000540b4(uVar4,uVar1,1,uVar3);
          }
          *(ulong *)(uVar4 + 0x10) = uVar1;
          *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2c;
          uVar3 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            FUN_000540b4(uVar3,uVar2 + 2,1,uVar4);
          }
          *(ulong *)(uVar3 + 0x10) = uVar2 + 2;
          *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x22;
          *unaff_x20 = uVar3;
          func_0x000fef20(uVar5);
          uVar3 = *unaff_x20;
          uVar1 = uVar3;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar2 = uVar3;
          if ((uVar1 & 1) == 0) {
            uVar2 = 0;
            FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
          }
          uVar1 = *(ulong *)(uVar2 + 0x10);
          uVar3 = uVar2;
          if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
            uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
            FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
          }
          *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
          *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x22;
          *unaff_x20 = uVar3;
          lVar6 = lVar6 + -1;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
      }
    }
  }
  uVar1 = *(ulong *)(uVar3 + 0x10);
  uVar2 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_000540b4(uVar2,uVar1 + 1,1,uVar3);
  }
  *(ulong *)(uVar2 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar2 + uVar1 + 0x20) = 0x5d;
  *unaff_x20 = uVar2;
  *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  return;
}



/* Entry: 00102798; end: 00102a87;  */

void FUN_00102798(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar5;
  long lVar6;
  int *piVar7;
  
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    uVar4 = *unaff_x20;
    uVar2 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x5b;
    *unaff_x20 = uVar4;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      lVar5 = (long)*(int *)(param_1 + 0x20);
      if (*(int *)(param_1 + 0x20) < 0) {
        uVar2 = uVar4;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = uVar4;
        if ((uVar2 & 1) == 0) {
          uVar3 = 0;
          FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
        }
        uVar2 = *(ulong *)(uVar3 + 0x10);
        uVar4 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
          uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
        }
        *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
        *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2d;
        *unaff_x20 = uVar4;
        lVar5 = -lVar5;
      }
      func_0x000fef20(lVar5);
      lVar6 = lVar6 + -1;
      if (lVar6 != 0) {
        piVar7 = (int *)(param_1 + 0x24);
        do {
          iVar1 = *piVar7;
          lVar5 = (long)iVar1;
          uVar4 = *unaff_x20;
          uVar2 = uVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar3 = uVar4;
          if ((uVar2 & 1) == 0) {
            uVar3 = 0;
            FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
          }
          uVar2 = *(ulong *)(uVar3 + 0x10);
          uVar4 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
            uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
          }
          *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
          *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2c;
          *unaff_x20 = uVar4;
          if (iVar1 < 0) {
            uVar2 = uVar4;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar3 = uVar4;
            if ((uVar2 & 1) == 0) {
              uVar3 = 0;
              FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
            }
            uVar2 = *(ulong *)(uVar3 + 0x10);
            uVar4 = uVar3;
            if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
              uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
              FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
            }
            *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
            *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2d;
            *unaff_x20 = uVar4;
            lVar5 = -lVar5;
          }
          func_0x000fef20(lVar5);
          lVar6 = lVar6 + -1;
          piVar7 = piVar7 + 1;
        } while (lVar6 != 0);
      }
      uVar4 = *unaff_x20;
    }
    uVar2 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x5d;
    *unaff_x20 = uVar4;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 00102a88; end: 00102f9b;  */

void FUN_00102a88(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  uVar8 = unaff_x20[9];
  FUN_00100d5c(param_2);
  if ((char)uVar8 == '\x01') {
    if (unaff_x21 != 0) {
      return;
    }
    uVar5 = *unaff_x20;
    uVar8 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar8 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar8 = *(ulong *)(uVar3 + 0x10);
    uVar6 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar6,uVar8 + 1,1,uVar3);
    }
    *(ulong *)(uVar6 + 0x10) = uVar8 + 1;
    *(undefined1 *)(uVar6 + uVar8 + 0x20) = 0x5b;
    *unaff_x20 = uVar6;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      lVar7 = *(long *)(param_1 + 0x20);
      if (lVar7 < 0) {
        uVar8 = uVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = uVar6;
        if ((uVar8 & 1) == 0) {
          uVar3 = 0;
          FUN_000540b4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
        }
        uVar8 = *(ulong *)(uVar3 + 0x10);
        uVar5 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          FUN_000540b4(uVar5,uVar8 + 1,1,uVar3);
        }
        *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
        *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x2d;
        *unaff_x20 = uVar5;
        lVar7 = -lVar7;
      }
      func_0x000fef20(lVar7);
      lVar9 = lVar9 + -1;
      if (lVar9 != 0) {
        plVar10 = (long *)(param_1 + 0x28);
        do {
          lVar7 = *plVar10;
          uVar5 = *unaff_x20;
          uVar8 = uVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar3 = uVar5;
          if ((uVar8 & 1) == 0) {
            uVar3 = 0;
            FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar8 = *(ulong *)(uVar3 + 0x10);
          uVar5 = uVar3;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_000540b4(uVar5,uVar8 + 1,1,uVar3);
          }
          *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
          *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x2c;
          *unaff_x20 = uVar5;
          if (lVar7 < 0) {
            uVar8 = uVar5;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar3 = uVar5;
            if ((uVar8 & 1) == 0) {
              uVar3 = 0;
              FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
            }
            uVar8 = *(ulong *)(uVar3 + 0x10);
            uVar5 = uVar3;
            if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
              uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
              FUN_000540b4(uVar5,uVar8 + 1,1,uVar3);
            }
            *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
            *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x2d;
            *unaff_x20 = uVar5;
            lVar7 = -lVar7;
          }
          func_0x000fef20(lVar7);
          lVar9 = lVar9 + -1;
          plVar10 = plVar10 + 1;
        } while (lVar9 != 0);
      }
      uVar6 = *unaff_x20;
    }
    uVar8 = uVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar6;
    if ((uVar8 & 1) == 0) {
      uVar5 = 0;
      FUN_000540b4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    }
  }
  else {
    if (unaff_x21 != 0) {
      return;
    }
    uVar5 = *unaff_x20;
    uVar8 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar5;
    if ((uVar8 & 1) == 0) {
      uVar3 = 0;
      FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar8 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_000540b4(uVar5,uVar8 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
    *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x5b;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      bVar4 = false;
      plVar10 = (long *)(param_1 + 0x20);
      do {
        lVar7 = *plVar10;
        uVar8 = *(ulong *)(uVar5 + 0x10);
        if (bVar4) {
          uVar3 = uVar8 + 1;
          uVar6 = uVar5;
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar8) {
            uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            FUN_000540b4(uVar6,uVar3,1,uVar5);
          }
          *(ulong *)(uVar6 + 0x10) = uVar3;
          *(undefined1 *)(uVar6 + uVar8 + 0x20) = 0x2c;
          uVar5 = uVar6;
          uVar8 = uVar3;
        }
        lVar1 = uVar8 + 1;
        uVar3 = uVar5;
        if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar8) {
          uVar3 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
          FUN_000540b4(uVar3,lVar1,1,uVar5);
        }
        *(long *)(uVar3 + 0x10) = lVar1;
        *(undefined1 *)(uVar3 + uVar8 + 0x20) = 0x22;
        *unaff_x20 = uVar3;
        if (lVar7 < 0) {
          lVar2 = uVar8 + 2;
          uVar8 = uVar3;
          if ((long)(*(ulong *)(uVar3 + 0x18) >> 1) < lVar2) {
            uVar8 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_000540b4(uVar8,lVar2,1,uVar3);
          }
          *(long *)(uVar8 + 0x10) = lVar2;
          *(undefined1 *)(uVar8 + lVar1 + 0x20) = 0x2d;
          *unaff_x20 = uVar8;
          lVar7 = -lVar7;
        }
        func_0x000fef20(lVar7);
        uVar5 = *unaff_x20;
        uVar8 = uVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = uVar5;
        if ((uVar8 & 1) == 0) {
          uVar3 = 0;
          FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
        }
        uVar8 = *(ulong *)(uVar3 + 0x10);
        uVar5 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar8) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          FUN_000540b4(uVar5,uVar8 + 1,1,uVar3);
        }
        *(ulong *)(uVar5 + 0x10) = uVar8 + 1;
        *(undefined1 *)(uVar5 + uVar8 + 0x20) = 0x22;
        *unaff_x20 = uVar5;
        bVar4 = true;
        lVar9 = lVar9 + -1;
        plVar10 = plVar10 + 1;
      } while (lVar9 != 0);
    }
  }
  uVar8 = *(ulong *)(uVar5 + 0x10);
  uVar3 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar8) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_000540b4(uVar3,uVar8 + 1,1,uVar5);
  }
  *(ulong *)(uVar3 + 0x10) = uVar8 + 1;
  *(undefined1 *)(uVar3 + uVar8 + 0x20) = 0x5d;
  *unaff_x20 = uVar3;
  *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  return;
}



/* Entry: 00102f9c; end: 001031d3;  */

void FUN_00102f9c(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar8;
  
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    uVar7 = *unaff_x20;
    uVar2 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar7;
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
      FUN_000540b4(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar2 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_000540b4(uVar7,uVar2 + 1,1,uVar5);
    }
    *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar7 + uVar2 + 0x20) = 0x5b;
    *unaff_x20 = uVar7;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 != 0) {
      if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
        pcVar3 = "false";
        uVar6 = 5;
      }
      else {
        pcVar3 = "true";
        uVar6 = 4;
      }
      FUN_000c7840(pcVar3,uVar6);
      lVar8 = lVar8 + -1;
      if (lVar8 != 0) {
        pcVar3 = (char *)(param_1 + 0x21);
        do {
          cVar1 = *pcVar3;
          uVar7 = *unaff_x20;
          uVar2 = uVar7;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar5 = uVar7;
          if ((uVar2 & 1) == 0) {
            uVar5 = 0;
            FUN_000540b4(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
          }
          uVar2 = *(ulong *)(uVar5 + 0x10);
          uVar7 = uVar5;
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
            uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            FUN_000540b4(uVar7,uVar2 + 1,1,uVar5);
          }
          *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
          *(undefined1 *)(uVar7 + uVar2 + 0x20) = 0x2c;
          *unaff_x20 = uVar7;
          if (cVar1 == '\0') {
            uVar6 = 5;
            pcVar4 = "false";
          }
          else {
            uVar6 = 4;
            pcVar4 = "true";
          }
          FUN_000c7840(pcVar4,uVar6);
          pcVar3 = pcVar3 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      uVar7 = *unaff_x20;
    }
    uVar2 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar7;
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
      FUN_000540b4(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar2 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_000540b4(uVar7,uVar2 + 1,1,uVar5);
    }
    *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
    *(undefined1 *)(uVar7 + uVar2 + 0x20) = 0x5d;
    *unaff_x20 = uVar7;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 001031d4; end: 001033f7;  */

void FUN_001031d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined8 *puVar7;
  
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    uVar5 = *unaff_x20;
    uVar3 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_000540b4(uVar5,uVar3 + 1,1,uVar4);
    }
    *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
    *(undefined1 *)(uVar5 + uVar3 + 0x20) = 0x5b;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      _swift_bridgeObjectRetain(uVar2);
      FUN_000fdff8(uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      lVar6 = lVar6 + -1;
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)(param_1 + 0x38);
        do {
          uVar1 = puVar7[-1];
          uVar2 = *puVar7;
          uVar5 = *unaff_x20;
          _swift_bridgeObjectRetain(uVar2);
          uVar3 = uVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar4 = uVar5;
          if ((uVar3 & 1) == 0) {
            uVar4 = 0;
            FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          }
          uVar3 = *(ulong *)(uVar4 + 0x10);
          uVar5 = uVar4;
          if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
            uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
            FUN_000540b4(uVar5,uVar3 + 1,1,uVar4);
          }
          puVar7 = puVar7 + 2;
          *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
          *(undefined1 *)(uVar5 + uVar3 + 0x20) = 0x2c;
          *unaff_x20 = uVar5;
          FUN_000fdff8(uVar1,uVar2);
          _swift_bridgeObjectRelease(uVar2);
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      uVar5 = *unaff_x20;
    }
    uVar3 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      FUN_000540b4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_000540b4(uVar5,uVar3 + 1,1,uVar4);
    }
    *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
    *(undefined1 *)(uVar5 + uVar3 + 0x20) = 0x5d;
    *unaff_x20 = uVar5;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 001033f8; end: 0010385f;  */

void FUN_001033f8(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong *puVar6;
  uint uVar7;
  int iVar8;
  ulong *unaff_x20;
  ulong *puVar9;
  long unaff_x21;
  ulong unaff_x22;
  long lVar10;
  int iVar11;
  ulong *unaff_x24;
  undefined8 unaff_x25;
  ulong uVar12;
  undefined1 auStack_f0 [16];
  ulong *puStack_e0;
  ulong *puStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined8 uStack_c0;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_76;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar5 = param_2;
  FUN_00100d5c(param_2);
  puVar9 = unaff_x20;
  if (unaff_x21 == 0) {
    puVar9 = (ulong *)*unaff_x20;
    param_2 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)param_2 & 1) == 0) {
      puVar5 = (ulong *)(puVar9[2] + 1);
      param_2 = (ulong *)0x0;
      param_3 = (ulong *)((long)&MACH_HEADER.magic + 1);
      FUN_000540b4(0,puVar5);
      param_4 = puVar9;
      puVar9 = param_2;
    }
    uVar12 = puVar9[2];
    unaff_x24 = (ulong *)(uVar12 + 1);
    if (puVar9[3] >> 1 <= uVar12) {
      param_2 = (ulong *)(ulong)(1 < puVar9[3]);
      param_3 = (ulong *)((long)&MACH_HEADER.magic + 1);
      puVar5 = unaff_x24;
      FUN_000540b4(param_2,unaff_x24);
      param_4 = puVar9;
      puVar9 = param_2;
    }
    puVar9[2] = (ulong)unaff_x24;
    *(undefined1 *)((long)puVar9 + uVar12 + 0x20) = 0x5b;
    *unaff_x20 = (ulong)puVar9;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    uVar12 = param_1[2];
    if (uVar12 != 0) {
      unaff_x25 = 0;
      param_1 = param_1 + 5;
      do {
        param_2 = (ulong *)param_1[-1];
        unaff_x24 = (ulong *)*param_1;
        puVar5 = param_2;
        func_0x00023304(param_2,unaff_x24);
        if ((int)unaff_x25 != 0) {
          uVar1 = puVar9[2];
          if (puVar9[3] >> 1 <= uVar1) {
            puVar5 = (ulong *)(ulong)(1 < puVar9[3]);
            param_3 = (ulong *)((long)&MACH_HEADER.magic + 1);
            FUN_000540b4(puVar5,uVar1 + 1);
            param_4 = puVar9;
            puVar9 = puVar5;
          }
          puVar9[2] = uVar1 + 1;
          *(undefined1 *)((long)puVar9 + uVar1 + 0x20) = 0x2c;
          *unaff_x20 = (ulong)puVar9;
        }
        uVar1 = puVar9[2];
        if (puVar9[3] >> 1 <= uVar1) {
          puVar5 = (ulong *)(ulong)(1 < puVar9[3]);
          param_3 = (ulong *)((long)&MACH_HEADER.magic + 1);
          FUN_000540b4(puVar5,uVar1 + 1);
          param_4 = puVar9;
          puVar9 = puVar5;
        }
        puVar9[2] = uVar1 + 1;
        *(undefined1 *)((long)puVar9 + uVar1 + 0x20) = 0x22;
        *unaff_x20 = (ulong)puVar9;
        uVar3 = (uint)((ulong)unaff_x24 >> 0x20);
        uVar7 = uVar3 >> 0x1e;
        iVar11 = (int)param_2;
        iVar8 = (int)((ulong)param_2 >> 0x20);
        if (uVar3 >> 0x1e < 2) {
          if (uVar7 == 0) {
            if (((ulong)unaff_x24 >> 0x30 & 0xff) != 0) {
LAB_00103540:
              if (uVar7 == 2) {
                uVar1 = param_2[2];
                uVar2 = param_2[3];
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                puVar9 = puVar5;
                if (puVar5 != (ulong *)0x0) {
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(uVar1,(long)puVar9)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1037f8);
                    (*pcVar4)();
                  }
                  puVar5 = (ulong *)((uVar1 - (long)puVar9) + (long)puVar5);
                }
                puVar6 = (ulong *)(uVar2 - uVar1);
                if (SBORROW8(uVar2,uVar1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1037f4);
                  (*pcVar4)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if (puVar5 == (ulong *)0x0) {
                  lVar10 = 0;
                }
                else {
                  if ((long)puVar6 <= (long)puVar9) {
                    puVar9 = puVar6;
                  }
                  lVar10 = (long)puVar9 + (long)puVar5;
                }
              }
              else if (uVar7 == 1) {
                lVar10 = (long)iVar11;
                puVar9 = (ulong *)(((long)param_2 >> 0x20) - lVar10);
                if ((long)param_2 >> 0x20 < lVar10) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1037f0);
                  (*pcVar4)();
                }
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (puVar5 == (ulong *)0x0) {
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  puVar5 = (ulong *)0x0;
                }
                else {
                  puVar6 = puVar5;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar10,(long)puVar6)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1037fc);
                    (*pcVar4)();
                  }
                  puVar5 = (ulong *)((lVar10 - (long)puVar6) + (long)puVar5);
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  if (puVar5 != (ulong *)0x0) {
                    if ((long)puVar9 <= (long)puVar6) {
                      puVar6 = puVar9;
                    }
                    lVar10 = (long)puVar6 + (long)puVar5;
                    goto LAB_001036a0;
                  }
                }
                lVar10 = 0;
              }
              else {
                uStack_76._0_1_ = SUB81(param_2,0);
                uStack_76._1_1_ = (undefined1)((ulong)param_2 >> 8);
                uStack_76._2_1_ = (undefined1)((ulong)param_2 >> 0x10);
                uStack_76._3_1_ = (undefined1)((ulong)param_2 >> 0x18);
                uStack_76._4_1_ = (undefined1)((ulong)param_2 >> 0x20);
                uStack_76._5_1_ = (undefined1)((ulong)param_2 >> 0x28);
                uStack_76._6_1_ = (undefined1)((ulong)param_2 >> 0x30);
                uStack_76._7_1_ = (undefined1)((ulong)param_2 >> 0x38);
                uStack_6e = SUB81(unaff_x24,0);
                uStack_6d = (undefined1)((ulong)unaff_x24 >> 8);
                uStack_6c = (undefined1)((ulong)unaff_x24 >> 0x10);
                uStack_6b = (undefined1)((ulong)unaff_x24 >> 0x18);
                uStack_6a = (undefined1)((ulong)unaff_x24 >> 0x20);
                uStack_69 = (undefined1)((ulong)unaff_x24 >> 0x28);
                lVar10 = (long)&uStack_76 + ((ulong)unaff_x24 >> 0x30 & 0xff);
                puVar5 = &uStack_76;
              }
LAB_001036a0:
              param_3 = unaff_x20;
              FUN_000ff6ec(puVar5,lVar10);
            }
          }
          else {
            if (SBORROW4(iVar8,iVar11)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1037e8);
              (*pcVar4)();
            }
            if (0 < iVar8 - iVar11) goto LAB_00103540;
          }
        }
        else if (uVar7 == 2) {
          if (SBORROW8(param_2[3],param_2[2])) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1037ec);
            (*pcVar4)();
          }
          if (0 < (long)(param_2[3] - param_2[2])) goto LAB_00103540;
        }
        puVar9 = (ulong *)*unaff_x20;
        puVar5 = puVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar6 = puVar9;
        if (((ulong)puVar5 & 1) == 0) {
          puVar6 = (ulong *)0x0;
          param_3 = (ulong *)((long)&MACH_HEADER.magic + 1);
          FUN_000540b4(0,puVar9[2] + 1);
          param_4 = puVar9;
        }
        uVar1 = puVar6[2];
        puVar9 = puVar6;
        if (puVar6[3] >> 1 <= uVar1) {
          puVar9 = (ulong *)(ulong)(1 < puVar6[3]);
          param_3 = (ulong *)((long)&MACH_HEADER.magic + 1);
          FUN_000540b4(puVar9,uVar1 + 1);
          param_4 = puVar6;
        }
        param_1 = param_1 + 2;
        puVar9[2] = uVar1 + 1;
        *(undefined1 *)((long)puVar9 + uVar1 + 0x20) = 0x22;
        puVar5 = unaff_x24;
        FUN_00023358(param_2,unaff_x24);
        *unaff_x20 = (ulong)puVar9;
        unaff_x25 = 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    unaff_x22 = puVar9[2];
    param_1 = (ulong *)(unaff_x22 + 1);
    if (puVar9[3] >> 1 <= unaff_x22) {
      param_2 = (ulong *)(ulong)(1 < puVar9[3]);
      param_3 = (ulong *)((long)&MACH_HEADER.magic + 1);
      puVar5 = param_1;
      FUN_000540b4(param_2,param_1);
      param_4 = puVar9;
      puVar9 = param_2;
    }
    puVar9[2] = (ulong)param_1;
    *(undefined1 *)((long)puVar9 + unaff_x22 + 0x20) = 0x5d;
    *unaff_x20 = (ulong)puVar9;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = param_3;
  uStack_c0 = unaff_x25;
  puStack_b0 = unaff_x24;
  puStack_a8 = param_1;
  uStack_a0 = unaff_x22;
  _swift_conformsToProtocol(param_3,&DAT_00843adc);
  if (puVar6 == (ulong *)0x0 || param_3 == (ulong *)0x0) {
    uStack_d0 = *(undefined1 *)((long)puVar9 + 0x49);
    pcVar4 = FUN_00105b68;
  }
  else {
    uStack_d0 = (undefined1)puVar9[9];
    uStack_cf = *(undefined1 *)((long)puVar9 + 0x49);
    uStack_ce = *(undefined1 *)((long)puVar9 + 0x4a);
    uStack_cd = *(undefined1 *)((long)puVar9 + 0x4b);
    pcVar4 = (code *)0x105b84;
  }
  puStack_e0 = param_3;
  puStack_d8 = param_4;
  FUN_00101074(param_2,puVar5,pcVar4,auStack_f0,param_3);
  return;
}



/* Entry: 00103860; end: 0010391b;  */

void FUN_00103860(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  
  lVar1 = param_3;
  _swift_conformsToProtocol(param_3,&DAT_00843adc);
  if (lVar1 == 0 || param_3 == 0) {
    uStack_50 = *(undefined1 *)(unaff_x20 + 0x49);
    pcVar2 = FUN_00105b68;
  }
  else {
    uStack_50 = *(undefined1 *)(unaff_x20 + 0x48);
    uStack_4f = *(undefined1 *)(unaff_x20 + 0x49);
    uStack_4e = *(undefined1 *)(unaff_x20 + 0x4a);
    uStack_4d = *(undefined1 *)(unaff_x20 + 0x4b);
    pcVar2 = (code *)0x105b84;
  }
  lStack_60 = param_3;
  uStack_58 = param_4;
  FUN_00101074(param_1,param_2,pcVar2,auStack_70,param_3);
  return;
}



/* Entry: 0010391c; end: 00103a0b;  */

void FUN_0010391c(undefined8 param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined8 uVar1;
  long extraout_x8;
  long extraout_x12;
  long unaff_x21;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(param_4 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar1 = 0xaeda28;
  func_0x000115a8(0xaeda28,&UNK_007d78d0);
  _swift_dynamicCast(auStack_68,auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4,
                     uVar1,7);
  FUN_0001393c(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))(param_3 & 0x1010101,uStack_50,lStack_48);
  if (unaff_x21 == 0) {
    func_0x000c79f0();
  }
  FUN_00011670(auStack_68);
  return;
}



/* Entry: 00103a0c; end: 00103b13;  */

void FUN_00103a0c(ulong *param_1,undefined8 param_2,uint param_3,long param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (((param_3 & 1) == 0) && (FUN_000dfdd8(param_4,param_5), (param_3 & 0xff) != 1)) {
    FUN_000feaa4();
    return;
  }
  (**(code **)(param_5 + 0x28))(param_4,param_5);
  if (param_4 < 0) {
    uVar3 = *param_1;
    uVar1 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar3 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      FUN_000540b4(uVar3,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x2d;
    *param_1 = uVar3;
  }
  func_0x000fef20();
  return;
}



/* Entry: 00103b14; end: 001043bb;  */

/* WARNING: Removing unreachable block (ram,0x00103d04) */
/* WARNING: Removing unreachable block (ram,0x0010432c) */
/* WARNING: Removing unreachable block (ram,0x00103d0c) */
/* WARNING: Removing unreachable block (ram,0x00104124) */
/* WARNING: Removing unreachable block (ram,0x001041f0) */

void FUN_00103b14(long param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined1 *puVar9;
  ulong *unaff_x20;
  ulong uVar10;
  ulong uVar11;
  long unaff_x21;
  ulong uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined1 auStack_130 [8];
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  ulong uStack_f8;
  undefined1 *puStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong auStack_70 [2];
  ulong uStack_58;
  
  pcVar15 = *(code **)(param_3 + -8);
  lStack_c8 = param_1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(pcVar15 + 0x40));
  puVar9 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar12 = ((long)puVar9 - extraout_x12) - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    uVar10 = *unaff_x20;
    uVar5 = uVar10;
    puStack_f0 = param_3;
    uStack_e8 = uVar12 - extraout_x12_01;
    lStack_e0 = (long)puVar9 - extraout_x12;
    lStack_d0 = param_4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar11 = uVar10;
    pcStack_d8 = pcVar15;
    if ((uVar5 & 1) == 0) {
      uVar11 = 0;
      FUN_000540b4(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    }
    uVar5 = *(ulong *)(uVar11 + 0x10);
    uVar10 = uVar11;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
      FUN_000540b4(uVar10,uVar5 + 1,1,uVar11);
    }
    puVar1 = puStack_f0;
    *(ulong *)(uVar10 + 0x10) = uVar5 + 1;
    *(undefined1 *)(uVar10 + uVar5 + 0x20) = 0x5b;
    *unaff_x20 = uVar10;
    *(undefined2 *)(unaff_x20 + 1) = 0x100;
    puVar2 = puStack_f0;
    _swift_conformsToProtocol(puStack_f0,&DAT_00843adc);
    lVar14 = lStack_c8;
    lVar13 = lStack_d0;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = puVar1;
      _swift_conformsToProtocol(puVar1,&DAT_00844958);
      pcVar15 = pcStack_d8;
      if (puVar2 == (undefined1 *)0x0) {
        func_0x000c7144();
        _swift_allocError(&UNK_009ad758,puVar2,0,0);
        *puVar2 = 4;
        _swift_willThrow();
        return;
      }
      (**(code **)(puVar2 + 8))(&uStack_b8,puVar1,puVar2);
      uStack_e8 = unaff_x20[2];
      uStack_f8 = unaff_x20[3];
      pcStack_100 = (code *)unaff_x20[4];
      uStack_108 = unaff_x20[5];
      uStack_118 = unaff_x20[6];
      uStack_120 = unaff_x20[7];
      uStack_110 = unaff_x20[8];
      uStack_58 = uStack_b0;
      uStack_78 = uStack_a0;
      auStack_70[0] = uStack_a8;
      uStack_88 = uStack_90;
      uStack_80 = uStack_98;
      unaff_x20[5] = uStack_a0;
      unaff_x20[4] = uStack_a8;
      unaff_x20[7] = uStack_90;
      unaff_x20[6] = uStack_98;
      unaff_x20[3] = uStack_b0;
      unaff_x20[2] = uStack_b8;
      _swift_bridgeObjectRetain();
      uStack_128 = uStack_b8;
      _swift_retain(uStack_b8);
      FUN_00105b20(&uStack_58,auStack_c0,0xaeddc0,&UNK_007d9aa0);
      FUN_00105b20(auStack_70,auStack_c0,0xaeddc8,&UNK_007da040);
      FUN_00105b20(&uStack_78,auStack_c0,0xaeddc8,&UNK_007da040);
      FUN_00105b20(&uStack_80,auStack_c0,0xae6938,&UNK_007cdb30);
      FUN_00105b20(&uStack_88,auStack_c0,0xaeddd0,&UNK_007da050);
      lVar13 = lStack_c8;
      lVar14 = lStack_c8;
      __sSa8endIndexSivg(lStack_c8,puVar1);
      if (lVar14 != 0) {
        lVar14 = 0;
        do {
          lVar4 = lStack_e0;
          __sSayxSicig(lStack_e0,lVar14,lVar13,puVar1);
          lVar3 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x104338);
            (*pcVar15)();
          }
          (**(code **)(pcVar15 + 0x20))(puVar9,lVar4,puVar1);
          lVar13 = lStack_d0;
          func_0x001057dc(puVar9);
          (**(code **)(lVar13 + 0x48))();
          uVar11 = *unaff_x20;
          uVar12 = uVar11;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar5 = uVar11;
          if ((uVar12 & 1) == 0) {
            uVar5 = 0;
            FUN_000540b4(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
          }
          uVar12 = *(ulong *)(uVar5 + 0x10);
          uVar11 = uVar5;
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar12) {
            uVar11 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            FUN_000540b4(uVar11,uVar12 + 1,1,uVar5);
          }
          pcVar15 = pcStack_d8;
          *(ulong *)(uVar11 + 0x10) = uVar12 + 1;
          *(undefined1 *)(uVar11 + uVar12 + 0x20) = 0x7d;
          (**(code **)(pcStack_d8 + 8))(puVar9,puVar1);
          lVar13 = lStack_c8;
          *unaff_x20 = uVar11;
          *(undefined2 *)(unaff_x20 + 1) = 0x2c;
          lVar4 = lStack_c8;
          __sSa8endIndexSivg(lStack_c8,puVar1);
          lVar14 = lVar14 + 1;
        } while (lVar3 != lVar4);
      }
      _swift_release(uStack_128);
      func_0x00105c38(&uStack_58,0xaeddc0,&UNK_007d9aa0);
      func_0x00105c38(auStack_70,0xaeddc8,&UNK_007da040);
      func_0x00105c38(&uStack_78,0xaeddc8,&UNK_007da040);
      func_0x00105c38(&uStack_80,0xae6938,&UNK_007cdb30);
      func_0x00105c38(&uStack_88,0xaeddd0,&UNK_007da050);
      _swift_release(unaff_x20[2]);
      _swift_bridgeObjectRelease(unaff_x20[3]);
      _swift_bridgeObjectRelease(unaff_x20[4]);
      _swift_bridgeObjectRelease(unaff_x20[5]);
      _swift_bridgeObjectRelease(unaff_x20[6]);
      uVar12 = unaff_x20[7];
      unaff_x20[2] = uStack_e8;
      unaff_x20[3] = uStack_f8;
      unaff_x20[4] = (ulong)pcStack_100;
      unaff_x20[5] = uStack_108;
      unaff_x20[6] = uStack_118;
      unaff_x20[7] = uStack_120;
      _swift_bridgeObjectRelease(uVar12);
      _swift_bridgeObjectRelease(unaff_x20[8]);
      unaff_x20[8] = uStack_110;
    }
    else {
      lVar3 = lStack_c8;
      __sSa8endIndexSivg(lStack_c8,puVar1);
      pcVar15 = pcStack_d8;
      uVar5 = uStack_e8;
      if (lVar3 != 0) {
        uVar8 = 0x1000000;
        if (*(char *)((long)unaff_x20 + 0x4b) == '\0') {
          uVar8 = 0;
        }
        uVar7 = 0x10000;
        if (*(char *)((long)unaff_x20 + 0x4a) == '\0') {
          uVar7 = 0;
        }
        uVar6 = 0x100;
        if (*(char *)((long)unaff_x20 + 0x49) == '\0') {
          uVar6 = 0;
        }
        uVar6 = uVar6 | (byte)unaff_x20[9];
        uStack_108 = uVar12;
        __sSayxSicig(uStack_e8,0,lVar14,puVar1);
        pcVar15 = *(code **)(pcVar15 + 0x20);
        (*pcVar15)(uStack_108,uVar5,puVar1);
        uVar12 = uStack_108;
        lStack_e0 = CONCAT44(lStack_e0._4_4_,uVar6);
        uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar7 | uVar8);
        FUN_0010d058(uVar6 | uVar7 | uVar8,puVar1,lVar13);
        pcStack_100 = pcVar15;
        func_0x000c79f0();
        pcVar15 = *(code **)(pcStack_d8 + 8);
        (*pcVar15)(uVar12,puVar1);
        lVar13 = lVar14;
        __sSa8endIndexSivg(lVar14,puVar1);
        if (lVar13 != 1) {
          lVar13 = 1;
          pcStack_d8 = pcVar15;
          do {
            uVar5 = uStack_e8;
            __sSayxSicig(uStack_e8,lVar13,lVar14,puVar1);
            lVar3 = lVar13 + 1;
            if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x10433c);
              (*pcVar15)();
            }
            (*pcStack_100)(uVar12,uVar5,puVar1);
            uVar10 = *unaff_x20;
            uVar5 = uVar10;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar11 = uVar10;
            if ((uVar5 & 1) == 0) {
              uVar11 = 0;
              FUN_000540b4(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
            }
            uVar5 = *(ulong *)(uVar11 + 0x10);
            uVar10 = uVar11;
            if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
              uVar10 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
              FUN_000540b4(uVar10,uVar5 + 1,1,uVar11);
            }
            *(ulong *)(uVar10 + 0x10) = uVar5 + 1;
            *(undefined1 *)(uVar10 + uVar5 + 0x20) = 0x2c;
            *unaff_x20 = uVar10;
            FUN_0010d058((uint)lStack_e0 | (uint)uStack_f8,puVar1,lStack_d0);
            func_0x000c79f0();
            (*pcStack_d8)(uVar12,puVar1);
            lVar14 = lStack_c8;
            lVar4 = lStack_c8;
            __sSa8endIndexSivg(lStack_c8,puVar1);
            lVar13 = lVar13 + 1;
          } while (lVar3 != lVar4);
        }
      }
    }
    uVar11 = *unaff_x20;
    uVar12 = uVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar11;
    if ((uVar12 & 1) == 0) {
      uVar5 = 0;
      FUN_000540b4(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
    }
    uVar12 = *(ulong *)(uVar5 + 0x10);
    uVar11 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar12) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_000540b4(uVar11,uVar12 + 1,1,uVar5);
    }
    *(ulong *)(uVar11 + 0x10) = uVar12 + 1;
    *(undefined1 *)(uVar11 + uVar12 + 0x20) = 0x5d;
    *unaff_x20 = uVar11;
    *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  }
  return;
}



/* Entry: 001043bc; end: 001043cf;  */

void FUN_001043bc(void)

{
  FUN_00103b14();
  return;
}



/* Entry: 001043d0; end: 001044db;  */

void FUN_001043d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  uVar3 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  lStack_b0 = param_5;
  lStack_a8 = param_6;
  uStack_90 = param_3;
  uStack_88 = param_4;
  lStack_80 = param_5;
  lStack_78 = param_6;
  uStack_70 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar3,param_3,&UNK_008441f0,&UNK_00844200);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_6 + 8),param_4,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar3,param_3,uVar1,&UNK_008441f0,&UNK_008441f8);
  FUN_00104578(param_1,param_2,FUN_00105cac,auStack_a0,0x105b04,auStack_d0,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 001044dc; end: 00104577;  */

void FUN_001044dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,long param_7)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_009adb10,&PTR_DAT_009adb40,param_4);
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(param_7 + 8) + 0x30))
              (param_3,2,param_1,&UNK_009adb10,&PTR_DAT_009adb40,param_5);
  }
  return;
}



/* Entry: 00104578; end: 00104f8f;  */

/* WARNING: Removing unreachable block (ram,0x00104a8c) */
/* WARNING: Removing unreachable block (ram,0x00104f00) */
/* WARNING: Removing unreachable block (ram,0x00104f50) */

void FUN_00104578(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 code *param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long extraout_x8;
  long lVar13;
  long lVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  code *pcVar22;
  long unaff_x20;
  long unaff_x21;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  undefined1 auStack_200 [8];
  long lStack_1f8;
  long lStack_198;
  ulong uStack_190;
  undefined1 auStack_140 [16];
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined2 uStack_f8;
  undefined *puStack_f0;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined1 uStack_e4;
  char cStack_e3;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [48];
  
  lVar12 = *(long *)(param_8 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  puVar16 = auStack_200 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar13 = (long)puVar16 - extraout_x12;
  lVar14 = *(long *)(param_7 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar14 + 0x40));
  puVar17 = (undefined1 *)(lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar27 = (long)puVar17 - extraout_x12_00;
  lVar5 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,param_7,param_8,"key value ",0);
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lVar25 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar25 + 0x40));
  lVar23 = lVar27 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar21 = lVar23 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar24 = lVar21 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar28 = lVar24 - extraout_x12_03;
  FUN_00100d5c(param_2);
  uVar11 = param_9;
  if (unaff_x21 != 0) {
    return;
  }
  func_0x000c79f0(0x7b,0xe100000000000000);
  uStack_e6 = *(undefined1 *)(unaff_x20 + 0x48);
  uStack_e5 = *(undefined1 *)(unaff_x20 + 0x49);
  uStack_e4 = *(undefined1 *)(unaff_x20 + 0x4a);
  cStack_e3 = *(char *)(unaff_x20 + 0x4b);
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0x100;
  puStack_f0 = PTR___swiftEmptyArrayStorage_0099b8f0;
  uStack_e8 = 0x100;
  if (cStack_e3 != '\x01') {
    lVar13 = param_7;
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      _swift_retain();
      __ss17_NativeDictionaryVyAByxq_Gs05__RawB7StorageCncfC();
      __ss17_NativeDictionaryV12makeIteratorAB0D0Vyxq__GyF(auStack_e0);
      lVar24 = -0xa8;
      puVar10 = auStack_e0;
      __sSD8IteratorV7_nativeAByxq__Gs17_NativeDictionaryVAAVyxq__Gn_tcfC
                (auStack_b8,puVar10,param_7,param_8,uVar11);
    }
    else {
      puVar1 = (undefined1 *)((ulong)param_1 & 0xffffffffffffff8);
      if ((undefined1 *)0x7fffffffffffffff < param_1) {
        puVar1 = param_1;
      }
      puVar10 = puVar1;
      __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
      _swift_unknownObjectRetain(puVar1);
      lVar24 = -0x80;
      __sSD8IteratorV6_cocoaAByxq__Gs17__CocoaDictionaryVAACn_tcfC
                (auStack_90,puVar10,param_7,param_8,uVar11);
    }
    lStack_1f8 = *(long *)((long)&param_9 + lVar24);
    lVar27 = *(long *)(&stack0xfffffffffffffff0 + lVar24);
    lVar28 = *(long *)(&stack0xfffffffffffffff8 + lVar24);
    uVar20 = lStack_1f8 + 0x40U >> 6;
    lVar18 = *(long *)(&stack0x00000008 + lVar24);
    uVar19 = *(ulong *)(&stack0x00000010 + lVar24);
    do {
      lStack_198 = lVar18;
      if (lVar27 < 0) {
        __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
        uStack_190 = uVar19;
        if (puVar10 == (undefined1 *)0x0) {
LAB_00104d80:
          uVar7 = 1;
        }
        else {
          __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF(lVar23);
          _swift_unknownObjectRelease(puVar10);
          __ss26_forceBridgeFromObjectiveCyxyXl_xmtlF
                    (lVar23 + *(int *)(lVar5 + 0x30),lVar13,param_8,param_8);
          _swift_unknownObjectRelease(lVar13);
          uVar7 = 0;
        }
      }
      else {
        uVar15 = uVar19;
        if (uVar19 == 0) {
          uVar26 = uVar20;
          if ((long)uVar20 <= lVar18 + 1) {
            uVar26 = lVar18 + 1;
          }
          lVar13 = lVar18;
          do {
            lStack_198 = lVar13 + 1;
            if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x104f8c);
              (*pcVar3)();
            }
            if ((long)uVar20 <= lStack_198) {
              uStack_190 = 0;
              lStack_198 = uVar26 - 1;
              goto LAB_00104d80;
            }
            uVar15 = *(ulong *)(lVar28 + lStack_198 * 8);
            lVar13 = lVar13 + 1;
          } while (uVar15 == 0);
        }
        uVar26 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
        uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
        uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
        uVar26 = LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) | lStack_198 << 6;
        lVar13 = lVar27;
        __ss17_NativeDictionaryV5_keysSpyxGvg(lVar27,param_7,param_8,uVar11);
        (**(code **)(lVar14 + 0x10))(lVar23,lVar13 + *(long *)(lVar14 + 0x48) * uVar26,param_7);
        FUN_000f880c(lVar27,param_7,param_8,uVar11);
        iVar2 = *(int *)(lVar5 + 0x30);
        lVar13 = lVar27;
        __ss17_NativeDictionaryV7_valuesSpyq_Gvg(lVar27,param_7,param_8,uVar11);
        (**(code **)(lVar12 + 0x10))
                  (lVar23 + iVar2,lVar13 + *(long *)(lVar12 + 0x48) * uVar26,param_8);
        FUN_000f880c(lVar27,param_7,param_8,uVar11);
        uVar7 = 0;
        uStack_190 = uVar15 - 1 & uVar15;
      }
      lVar24 = *(long *)(lVar5 + -8);
      (**(code **)(lVar24 + 0x38))(lVar23,uVar7,1,lVar5);
      (**(code **)(lVar25 + 0x20))(lVar21,lVar23,lVar6);
      lVar13 = lVar21;
      (**(code **)(lVar24 + 0x30))(lVar21,1,lVar5);
      if ((int)lVar13 == 1) goto LAB_00104ea8;
      iVar2 = *(int *)(lVar5 + 0x30);
      (**(code **)(lVar14 + 0x20))(puVar17,lVar21,param_7);
      (**(code **)(lVar12 + 0x20))(puVar16,lVar21 + iVar2,param_8);
      (*param_5)(&uStack_108,puVar17,puVar16);
      (**(code **)(lVar12 + 8))(puVar16,param_8);
      puVar10 = puVar17;
      lVar13 = param_7;
      (**(code **)(lVar14 + 8))();
      lVar18 = lStack_198;
      uVar19 = uStack_190;
    } while( true );
  }
  uStack_120 = uVar11;
  uVar7 = 0;
  lStack_130 = param_7;
  lStack_128 = param_8;
  uStack_118 = param_3;
  uStack_110 = param_4;
  __sSDMa(0,param_7,param_8,uVar11);
  puVar8 = PTR___sSDyxq_GSTsMc_0099af00;
  _swift_getWitnessTable(PTR___sSDyxq_GSTsMc_0099af00,uVar7);
  pcVar3 = FUN_00105a8c;
  __sSTsE6sorted2bySay7ElementQzGSbAD_ADtKXE_tKF(FUN_00105a8c,auStack_140,uVar7,puVar8);
  pcVar22 = (code *)0x0;
  while( true ) {
    pcVar9 = pcVar3;
    __sSa8endIndexSivg(pcVar3,lVar5);
    if (pcVar22 == pcVar9) {
      uVar11 = 1;
    }
    else {
      __sSayxSicig(lVar24,pcVar22,pcVar3,lVar5);
      bVar4 = SCARRY8((long)pcVar22,1);
      pcVar22 = pcVar22 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104f90);
        (*pcVar3)();
      }
      uVar11 = 0;
    }
    lVar23 = *(long *)(lVar5 + -8);
    (**(code **)(lVar23 + 0x38))(lVar24,uVar11,1,lVar5);
    (**(code **)(lVar25 + 0x20))(lVar28,lVar24,lVar6);
    lVar21 = lVar28;
    (**(code **)(lVar23 + 0x30))(lVar28,1,lVar5);
    if ((int)lVar21 == 1) break;
    iVar2 = *(int *)(lVar5 + 0x30);
    (**(code **)(lVar14 + 0x20))(lVar27,lVar28,param_7);
    (**(code **)(lVar12 + 0x20))(lVar13,lVar28 + iVar2,param_8);
    (*param_5)(&uStack_108,lVar27,lVar13);
    (**(code **)(lVar12 + 8))(lVar13,param_8);
    (**(code **)(lVar14 + 8))(lVar27,param_7);
  }
  _swift_bridgeObjectRelease(pcVar3);
LAB_00104ed4:
  _swift_bridgeObjectRetain(puStack_f0);
  FUN_00053fc4();
  func_0x000c79f0(0x7d,0xe100000000000000);
  func_0x000f4310(&uStack_108);
  return;
LAB_00104ea8:
  FUN_000ddfa4(lVar27,lVar28,lStack_1f8,lVar18,uVar19);
  goto LAB_00104ed4;
}



/* Entry: 00104f90; end: 00105067;  */

void FUN_00104f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  uStack_b0 = param_3;
  uStack_a8 = param_4;
  lStack_a0 = param_5;
  uStack_98 = param_6;
  uStack_80 = param_3;
  uStack_78 = param_4;
  lStack_70 = param_5;
  uStack_68 = param_6;
  uStack_60 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_008441f0,&UNK_008441f8);
  FUN_00104578(param_1,param_2,0x105ab8,auStack_90,FUN_00105ae8,auStack_c0,uVar1,param_4,uVar2);
  return;
}



/* Entry: 00105068; end: 001050e7;  */

void FUN_00105068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_009adb10,&PTR_DAT_009adb40,param_4);
  if (unaff_x21 == 0) {
    FUN_001064d0(param_3,param_5,param_7);
  }
  return;
}



/* Entry: 001050e8; end: 001051c3;  */

void FUN_001050e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  lStack_b0 = param_5;
  uStack_a8 = param_6;
  uStack_a0 = param_7;
  uStack_80 = param_3;
  uStack_78 = param_4;
  lStack_70 = param_5;
  uStack_68 = param_6;
  uStack_60 = param_7;
  uStack_58 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_008441f0,&UNK_008441f8);
  FUN_00104578(param_1,param_2,FUN_001055f8,auStack_90,FUN_00105628,auStack_d0,uVar1,param_4,uVar2);
  return;
}



/* Entry: 001051c4; end: 00105243;  */

void FUN_001051c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x21;
  
  (**(code **)(*(long *)(param_6 + 8) + 0x30))
            (param_2,1,param_1,&UNK_009adb10,&PTR_DAT_009adb40,param_4);
  if (unaff_x21 == 0) {
    FUN_00106680(param_3,param_5,param_8);
  }
  return;
}



/* Entry: 00105244; end: 0010527f;  */

void FUN_00105244(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_00100d5c();
  if (unaff_x21 == 0) {
    func_0x000fe8b4(param_1);
  }
  return;
}



/* Entry: 00105280; end: 001052bb;  */

void FUN_00105280(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_00100d5c();
  if (unaff_x21 == 0) {
    FUN_000fe844(param_1);
  }
  return;
}



/* Entry: 001052bc; end: 001052f7;  */

void FUN_001052bc(void)

{
  FUN_0010537c();
  return;
}



/* Entry: 001052f8; end: 00105343;  */

void FUN_001052f8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    if ((*(byte *)(unaff_x20 + 0x48) & 1) == 0) {
      func_0x000ff37c(param_1);
    }
    else {
      func_0x000fef20(param_1);
    }
  }
  return;
}



/* Entry: 00105344; end: 0010537b;  */

void FUN_00105344(undefined4 param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    func_0x000fef20(param_1);
  }
  return;
}



/* Entry: 0010537c; end: 001053b3;  */

void FUN_0010537c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    func_0x000ff2d0(param_1);
  }
  return;
}



/* Entry: 001053b4; end: 00105407;  */

void FUN_001053b4(ulong param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  long unaff_x21;
  
  FUN_00100d5c(param_2);
  if (unaff_x21 == 0) {
    if ((param_1 & 1) == 0) {
      pcVar1 = "false";
      uVar2 = 5;
    }
    else {
      pcVar1 = "true";
      uVar2 = 4;
    }
    FUN_000c7840(pcVar1,uVar2);
  }
  return;
}



/* Entry: 00105408; end: 0010543f;  */

void FUN_00105408(void)

{
  FUN_00105440();
  return;
}



/* Entry: 00105440; end: 0010548b;  */

void FUN_00105440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,code *param_6)

{
  long unaff_x21;
  
  FUN_00100d5c(param_3);
  if (unaff_x21 == 0) {
    (*param_6)(param_1,param_2);
  }
  return;
}



/* Entry: 0010548c; end: 001055f3;  */

void FUN_0010548c(void)

{
  FUN_001013d4();
  return;
}



/* Entry: 001055f4; end: 001055f7;  */

void FUN_001055f4(void)

{
  return;
}



/* Entry: 001055f8; end: 00105627;  */

uint FUN_001055f8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x10))
            (param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Entry: 00105628; end: 00105647;  */

void FUN_00105628(void)

{
  FUN_001051c4();
  return;
}



/* Entry: 00105648; end: 001058fb;  */

void FUN_00105648(undefined8 param_1,ulong *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = param_3;
  uStack_38 = param_4;
  func_0x00016cc8(auStack_58);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))();
  FUN_00105bf4(auStack_58,auStack_a8);
  uVar2 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  uVar3 = 0xaef4a0;
  func_0x000115a8(0xaef4a0,&UNK_007d9aa8);
  puVar4 = &uStack_80;
  _swift_dynamicCast(puVar4,auStack_a8,uVar2,uVar3,0xe);
  lVar1 = lStack_60;
  uVar6 = uStack_68;
  if ((int)puVar4 == 0) {
    lStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    func_0x00105c38(&uStack_80,0xaef4a8,&UNK_007d9ab0);
    uVar6 = 0;
  }
  else {
    FUN_0001393c(&uStack_80,uStack_68);
    (**(code **)(lVar1 + 0x10))(uVar6,lVar1);
    FUN_00011670(&uStack_80);
  }
  _swift_bridgeObjectRelease(param_2[8]);
  param_2[8] = uVar6;
  uVar7 = *param_2;
  uVar6 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar5 = uVar7;
  if ((uVar6 & 1) == 0) {
    uVar5 = 0;
    FUN_000540b4(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
  }
  uVar6 = *(ulong *)(uVar5 + 0x10);
  uVar7 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar6) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_000540b4(uVar7,uVar6 + 1,1,uVar5);
  }
  *(ulong *)(uVar7 + 0x10) = uVar6 + 1;
  *(undefined1 *)(uVar7 + uVar6 + 0x20) = 0x7b;
  *param_2 = uVar7;
  *(undefined2 *)(param_2 + 1) = 0x100;
  FUN_00011670(auStack_58);
  return;
}



/* Entry: 001058fc; end: 00105a7b;  */

void FUN_001058fc(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_198 [80];
  undefined *puStack_148;
  undefined2 uStack_140;
  undefined6 uStack_13e;
  undefined2 uStack_138;
  undefined6 uStack_136;
  undefined2 uStack_130;
  undefined6 uStack_12e;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined2 uStack_120;
  undefined6 uStack_11e;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined2 uStack_10e;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  byte bStack_100;
  byte bStack_ff;
  byte bStack_fe;
  byte bStack_fd;
  undefined *puStack_f8;
  undefined2 uStack_f0;
  undefined8 uStack_ee;
  undefined8 uStack_e6;
  undefined8 uStack_de;
  undefined8 uStack_d6;
  undefined8 uStack_ce;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined6 uStack_be;
  undefined8 uStack_b8;
  byte bStack_b0;
  byte bStack_af;
  byte bStack_ae;
  byte bStack_ad;
  undefined6 uStack_a6;
  undefined2 uStack_a0;
  undefined6 uStack_9e;
  undefined2 uStack_98;
  undefined6 uStack_96;
  undefined2 uStack_90;
  undefined6 uStack_8e;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined1 auStack_70 [48];
  
  puVar1 = param_2;
  _swift_conformsToProtocol(param_2,&DAT_00844958);
  if (puVar1 == (undefined1 *)0x0 || param_2 == (undefined1 *)0x0) {
    func_0x000c7144();
    _swift_allocError(&UNK_009ad758,puVar1,0,0);
    *puVar1 = 4;
    _swift_willThrow();
  }
  else {
    (**(code **)(puVar1 + 8))(auStack_70,param_2,puVar1);
    uStack_98 = (undefined2)auStack_70._8_8_;
    uStack_96 = SUB86(auStack_70._8_8_,2);
    uStack_a0 = (undefined2)auStack_70._0_8_;
    uStack_9e = SUB86(auStack_70._0_8_,2);
    uStack_88 = (undefined2)auStack_70._24_8_;
    uStack_86 = SUB86(auStack_70._24_8_,2);
    uStack_90 = (undefined2)auStack_70._16_8_;
    uStack_8e = SUB86(auStack_70._16_8_,2);
    uStack_78 = (undefined2)auStack_70._40_8_;
    uStack_76 = SUB86(auStack_70._40_8_,2);
    uStack_80 = (undefined2)auStack_70._32_8_;
    uStack_7e = SUB86(auStack_70._32_8_,2);
    bStack_100 = (byte)param_4 & 1;
    bStack_ff = (byte)((ulong)param_4 >> 8) & 1;
    bStack_fe = (byte)((ulong)param_4 >> 0x10) & 1;
    bStack_fd = (byte)((ulong)param_4 >> 0x18) & 1;
    puStack_148 = PTR___swiftEmptyArrayStorage_0099b8f0;
    uStack_140 = 0x100;
    uStack_136 = uStack_9e;
    uStack_130 = uStack_98;
    uStack_13e = uStack_a6;
    uStack_138 = uStack_a0;
    uStack_126 = uStack_8e;
    uStack_120 = uStack_88;
    uStack_12e = uStack_96;
    uStack_128 = uStack_90;
    uStack_116 = uStack_7e;
    uStack_11e = uStack_86;
    uStack_118 = uStack_80;
    uStack_10e = SUB82(auStack_70._40_8_,2);
    uStack_10c = SUB84(auStack_70._40_8_,4);
    uStack_108 = 0;
    uStack_104 = 0;
    puStack_f8 = PTR___swiftEmptyArrayStorage_0099b8f0;
    uStack_f0 = 0x100;
    uStack_b8 = 0;
    uStack_ce = CONCAT26(uStack_80,uStack_86);
    uStack_c6 = uStack_7e;
    uStack_c0 = uStack_78;
    uStack_d6 = CONCAT26(uStack_88,uStack_8e);
    uStack_de = CONCAT26(uStack_90,uStack_96);
    uStack_e6 = CONCAT26(uStack_98,uStack_9e);
    uStack_ee = CONCAT26(uStack_a0,uStack_a6);
    uStack_110 = uStack_78;
    uStack_be = uStack_76;
    bStack_b0 = bStack_100;
    bStack_af = bStack_ff;
    bStack_ae = bStack_fe;
    bStack_ad = bStack_fd;
    func_0x00105c78(&puStack_148,auStack_198);
    func_0x000c7208(&puStack_f8);
    param_1[5] = CONCAT62(uStack_11e,uStack_120);
    param_1[4] = CONCAT62(uStack_126,uStack_128);
    param_1[7] = CONCAT44(uStack_10c,CONCAT22(uStack_10e,uStack_110));
    param_1[6] = CONCAT62(uStack_116,uStack_118);
    *(ulong *)((long)param_1 + 0x44) =
         CONCAT17(bStack_fd,CONCAT16(bStack_fe,CONCAT15(bStack_ff,CONCAT14(bStack_100,uStack_104))))
    ;
    *(ulong *)((long)param_1 + 0x3c) = CONCAT44(uStack_108,uStack_10c);
    param_1[1] = CONCAT62(uStack_13e,uStack_140);
    *param_1 = puStack_148;
    param_1[3] = CONCAT62(uStack_12e,uStack_130);
    param_1[2] = CONCAT62(uStack_136,uStack_138);
  }
  return;
}



/* Entry: 00105a7c; end: 00105a8b;  */

ulong FUN_00105a7c(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}



/* Entry: 00105a8c; end: 00105ae7;  */

uint FUN_00105a8c(uint param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x28))();
  return param_1 & 1;
}



/* Entry: 00105ae8; end: 00105b1f;  */

void FUN_00105ae8(void)

{
  FUN_00105068();
  return;
}



/* Entry: 00105b20; end: 00105b67;  */

undefined8 FUN_00105b20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x000115a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 00105b68; end: 00105bdb;  */

void FUN_00105b68(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00103a0c(param_1,param_2,*(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
               *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 00105bdc; end: 00105bf3;  */

undefined8 * FUN_00105bdc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 00105bf4; end: 00105cab;  */

long FUN_00105bf4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 00105cac; end: 00105caf;  */

uint FUN_00105cac(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x10))
            (param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Entry: 00105cb0; end: 00105dc7;  */

void FUN_00105cb0(void)

{
  func_0x001052e4();
  return;
}



/* Entry: 00105dc8; end: 00105e8f;  */

void FUN_00105dc8(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  if (param_3 == 1) {
    if (*(char *)((long)unaff_x20 + 0x11) == '\x01') {
      *unaff_x20 = ",";
      unaff_x20[1] = 1;
      *(undefined2 *)(unaff_x20 + 2) = 2;
      goto LAB_00105e68;
    }
    if ((*(byte *)(unaff_x20 + 2) & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x105e8c);
      (*pcVar1)();
    }
    pcVar2 = (char *)*unaff_x20;
    if (pcVar2 == (char *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x105e90);
      (*pcVar1)();
    }
    uVar3 = unaff_x20[1];
  }
  else {
    pcVar2 = ":";
    uVar3 = 1;
  }
  FUN_000c7840(pcVar2,uVar3);
LAB_00105e68:
  FUN_000fdff8(param_1,param_2);
  return;
}



/* Entry: 00105e90; end: 00105f4f;  */

void FUN_00105e90(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long *unaff_x20;
  
  if (param_2 == 1) {
    if (*(char *)((long)unaff_x20 + 0x11) == '\x01') {
      *unaff_x20 = (long)",";
      unaff_x20[1] = 1;
      *(undefined2 *)(unaff_x20 + 2) = 2;
    }
    else {
      if ((*(byte *)(unaff_x20 + 2) & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x105f4c);
        (*pcVar1)();
      }
      if (*unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x105f50);
        (*pcVar1)();
      }
      FUN_000c7840(*unaff_x20,unaff_x20[1]);
    }
    func_0x000ff15c(param_1);
  }
  else {
    FUN_000c7840(":",1);
    func_0x000ff2d0(param_1);
  }
  return;
}



/* Entry: 00105f50; end: 001060ab;  */

void FUN_00105f50(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x20;
  ulong uVar4;
  
  if (param_2 == 1) {
    if (*(char *)((long)unaff_x20 + 0x11) == '\x01') {
      *unaff_x20 = (long)",";
      unaff_x20[1] = 1;
      *(undefined2 *)(unaff_x20 + 2) = 2;
    }
    else {
      if ((*(byte *)(unaff_x20 + 2) & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x106058);
        (*pcVar1)();
      }
      if (*unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10605c);
        (*pcVar1)();
      }
      FUN_000c7840(*unaff_x20,unaff_x20[1]);
    }
  }
  else {
    FUN_000c7840(":",1);
    if (*(char *)((long)unaff_x20 + 0x22) == '\x01') {
      if (param_1 < 0) {
        uVar4 = unaff_x20[3];
        uVar2 = uVar4;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = uVar4;
        if ((uVar2 & 1) == 0) {
          uVar3 = 0;
          FUN_000540b4(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
        }
        uVar2 = *(ulong *)(uVar3 + 0x10);
        uVar4 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
          uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          FUN_000540b4(uVar4,uVar2 + 1,1,uVar3);
        }
        *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
        *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x2d;
        unaff_x20[3] = uVar4;
        param_1 = -param_1;
      }
      func_0x000fef20(param_1);
      return;
    }
  }
  func_0x000feff4(param_1);
  return;
}



/* Entry: 001060ac; end: 0010615f;  */

void FUN_001060ac(ulong param_1,long param_2)

{
  code *pcVar1;
  long *unaff_x20;
  
  if (param_2 == 1) {
    if (*(char *)((long)unaff_x20 + 0x11) == '\x01') {
      *unaff_x20 = (long)",";
      unaff_x20[1] = 1;
      *(undefined2 *)(unaff_x20 + 2) = 2;
    }
    else {
      if ((*(byte *)(unaff_x20 + 2) & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10615c);
        (*pcVar1)();
      }
      if (*unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x106160);
        (*pcVar1)();
      }
      FUN_000c7840(*unaff_x20,unaff_x20[1]);
    }
    func_0x000ff498(param_1);
  }
  else {
    FUN_000c7840(":",1);
    func_0x000fef20(param_1 & 0xffffffff);
  }
  return;
}



/* Entry: 00106160; end: 00106227;  */

void FUN_00106160(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long *unaff_x20;
  
  if (param_2 == 1) {
    if (*(char *)((long)unaff_x20 + 0x11) == '\x01') {
      *unaff_x20 = (long)",";
      unaff_x20[1] = 1;
      *(undefined2 *)(unaff_x20 + 2) = 2;
    }
    else {
      if ((*(byte *)(unaff_x20 + 2) & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x106224);
        (*pcVar1)();
      }
      if (*unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x106228);
        (*pcVar1)();
      }
      FUN_000c7840(*unaff_x20,unaff_x20[1]);
    }
  }
  else {
    FUN_000c7840(":",1);
    if (*(char *)((long)unaff_x20 + 0x22) == '\x01') {
      func_0x000fef20(param_1);
      return;
    }
  }
  func_0x000ff37c(param_1);
  return;
}



/* Entry: 00106228; end: 001062fb;  */

void FUN_00106228(uint param_1,long param_2)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  if (param_2 == 1) {
    if (*(char *)((long)unaff_x20 + 0x11) == '\x01') {
      *unaff_x20 = (long)",";
      unaff_x20[1] = 1;
      *(undefined2 *)(unaff_x20 + 2) = 2;
    }
    else {
      if ((*(byte *)(unaff_x20 + 2) & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1062f8);
        (*pcVar1)();
      }
      if (*unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1062fc);
        (*pcVar1)();
      }
      FUN_000c7840(*unaff_x20,unaff_x20[1]);
    }
    func_0x000ff5b4(param_1 & 1);
  }
  else {
    FUN_000c7840(":",1);
    if ((param_1 & 1) == 0) {
      pcVar2 = "false";
      uVar3 = 5;
    }
    else {
      pcVar2 = "true";
      uVar3 = 4;
    }
    FUN_000c7840(pcVar2,uVar3);
  }
  return;
}



/* Entry: 001062fc; end: 00106353;  */

void FUN_001062fc(undefined8 param_1)

{
  FUN_000c7840(":",1);
  func_0x000fe8b4(param_1);
  return;
}



/* Entry: 00106354; end: 001063ab;  */

void FUN_00106354(undefined8 param_1)

{
  FUN_000c7840(":",1);
  FUN_000fe844(param_1);
  return;
}



/* Entry: 001063ac; end: 00106437;  */

void FUN_001063ac(void)

{
  FUN_00105e90();
  return;
}



/* Entry: 00106438; end: 00106497;  */

void FUN_00106438(undefined8 param_1,undefined8 param_2)

{
  FUN_000c7840(":",1);
  FUN_00100a38(param_1,param_2);
  return;
}



/* Entry: 00106498; end: 001064cf;  */

void FUN_00106498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_001064d0(param_1,param_3,param_4);
  return;
}



/* Entry: 001064d0; end: 0010667f;  */

void FUN_001064d0(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long unaff_x20;
  ulong uVar8;
  long lStack_68;
  long lStack_60;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar3 = param_3;
  FUN_000c7840(":",1);
  uVar7 = (uint)lVar3;
  if (((*(byte *)(unaff_x20 + 0x23) & 1) == 0) &&
     (lVar3 = param_2, lVar5 = param_3, FUN_000dfdd8(), (uVar7 & 0xff) != 1)) {
    if (lVar3 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 - lVar3;
    }
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
    if (lVar6 == 0) {
      puStack_50 = PTR___sSWN_0099b108;
      puStack_48 = PTR___sSWs19_HasContiguousBytessWP_0099b110;
      plVar2 = &lStack_68;
      lStack_68 = lVar3;
      lStack_60 = lVar5;
      FUN_0001393c();
      lVar3 = *plVar2;
      if (lVar3 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = plVar2[1] - lVar3;
      }
      __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(lVar3,lVar6);
      FUN_00011670(&lStack_68);
    }
    FUN_000fdff8();
    _swift_bridgeObjectRelease(lVar6);
    return;
  }
  (**(code **)(param_3 + 0x28))(param_2,param_3);
  if (param_2 < 0) {
    uVar8 = *(ulong *)(unaff_x20 + 0x18);
    uVar1 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar8;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
      FUN_000540b4(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    }
    uVar1 = *(ulong *)(uVar4 + 0x10);
    uVar8 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_000540b4(uVar8,uVar1 + 1,1,uVar4);
    }
    *(ulong *)(uVar8 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar8 + uVar1 + 0x20) = 0x2d;
    *(ulong *)(unaff_x20 + 0x18) = uVar8;
  }
  func_0x000fef20();
  return;
}



/* Entry: 00106680; end: 00106737;  */

void FUN_00106680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long unaff_x20;
  long unaff_x21;
  
  FUN_000c7840(":",1);
  uVar3 = 0x1000000;
  if (*(char *)(unaff_x20 + 0x25) == '\0') {
    uVar3 = 0;
  }
  uVar2 = 0x10000;
  if (*(char *)(unaff_x20 + 0x24) == '\0') {
    uVar2 = 0;
  }
  uVar1 = 0x100;
  if (*(char *)(unaff_x20 + 0x23) == '\0') {
    uVar1 = 0;
  }
  FUN_0010d058(uVar1 | *(byte *)(unaff_x20 + 0x22) | uVar2 | uVar3,param_2,param_3);
  if (unaff_x21 == 0) {
    func_0x000c79f0();
  }
  return;
}



/* Entry: 00106738; end: 00106763;  */

long FUN_00106738(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 00106764; end: 0010676b;  */

void FUN_00106764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 0010676c; end: 001067b7;  */

undefined8 * FUN_0010676c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  *(undefined4 *)((long)param_1 + 0x22) = *(undefined4 *)((long)param_2 + 0x22);
  _swift_bridgeObjectRetain();
  return param_1;
}


