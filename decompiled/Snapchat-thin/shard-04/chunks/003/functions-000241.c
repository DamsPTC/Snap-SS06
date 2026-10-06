/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10339e7b4; end: 10339e817;  */

/* WARNING: Possible PIC construction at 0x00010339e7c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010339e7cc) */

void FUN_10339e7b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10339e818; end: 10339e883;  */

undefined8 * FUN_10339e818(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10339e884; end: 10339e8c7;  */

undefined8 * FUN_10339e884(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 10339e8c8; end: 10339e95f;  */

int FUN_10339e8c8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10339e960; end: 10339ea37;  */

/* WARNING: Possible PIC construction at 0x00010339e990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010339e9ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a1770: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010339e9f0) */
/* WARNING: Removing unreachable block (ram,0x00010339e994) */
/* WARNING: Removing unreachable block (ram,0x0001033a1774) */
/* WARNING: Type propagation algorithm not settling */

ulong * FUN_10339e960(ulong *param_1,ulong *param_2)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *unaff_x19;
  ulong uVar19;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  ulong *unaff_x22;
  ulong *unaff_x23;
  ulong *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long lVar20;
  long lVar21;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar22;
  undefined8 unaff_x30;
  
  puVar13 = (ulong *)*param_2;
  puVar9 = (ulong *)param_2[1];
  if ((ulong *)*param_1 != puVar13 || (ulong *)param_1[1] != puVar9) {
    puVar15 = (ulong *)0x0;
    puVar18 = (ulong *)*param_1;
    puVar17 = (ulong *)param_1[1];
    goto code_r0x000107c605b8;
  }
  uVar14 = param_2[3];
  if (param_1[3] == 0) {
    if (uVar14 != 0) {
      return (ulong *)0x0;
    }
  }
  else {
    if (uVar14 == 0) {
      return (ulong *)0x0;
    }
    uVar8 = param_1[2];
    if ((uVar8 != param_2[2] || param_1[3] != uVar14) && (func_0x000107c605b8(), (uVar8 & 1) == 0))
    {
      return (ulong *)0x0;
    }
  }
  puVar13 = (ulong *)param_2[4];
  puVar9 = (ulong *)param_2[5];
  if (((ulong *)param_1[4] != puVar13) || (bVar6 = (ulong *)param_1[5] == puVar9, !(bool)bVar6)) {
    puVar15 = (ulong *)0x0;
    puVar18 = (ulong *)param_1[4];
    puVar17 = (ulong *)param_1[5];
    goto code_r0x000107c605b8;
  }
  uVar14 = param_1[6];
  FUN_1033a1180(uVar14,param_1[7],(char)param_1[8],param_2[6],param_2[7],(char)param_2[8]);
  if ((uVar14 & 1) == 0) {
    return (ulong *)0x0;
  }
  puVar11 = (ulong *)param_1[9];
  puVar12 = (ulong *)param_1[10];
  puVar9 = (ulong *)param_2[9];
  puVar15 = (ulong *)param_2[10];
  cVar1 = (char)param_2[0xb];
  bVar2 = (byte)param_1[0xb];
  puVar13 = (ulong *)(ulong)bVar2;
  puVar5 = &stack0xffffffffffffffc0;
  puVar22 = &stack0xfffffffffffffff0;
  switch(bVar2) {
  default:
    bVar6 = cVar1 == '\0';
  case 0x70:
    puVar12 = puVar9;
    if ((bool)bVar6) {
code_r0x0001033a11bc:
      puVar5 = (undefined1 *)register0x00000008;
      puVar22 = unaff_x29;
code_r0x0001033a11cc:
      *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
      *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
      *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
      *(ulong **)(puVar5 + -0x40) = unaff_x24;
      *(ulong **)(puVar5 + -0x38) = unaff_x23;
      *(ulong **)(puVar5 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar5 + -0x28) = unaff_x21;
      *(ulong **)(puVar5 + -0x20) = unaff_x20;
      *(ulong **)(puVar5 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar5 + -0x10) = puVar22;
      *(undefined8 *)(puVar5 + -8) = unaff_x30;
      if ((ulong)puVar11 >> 0x3e == 0) {
        puVar13 = (ulong *)((ulong *)((ulong)puVar11 & 0xffffffffffffff8))[2];
      }
      else {
        puVar13 = (ulong *)((ulong)puVar11 & 0xffffffffffffff8);
        if (((ulong)puVar11 & 0x8000000000000000) != 0) {
          puVar13 = puVar11;
        }
        func_0x000107c60480();
      }
      if ((ulong)puVar12 >> 0x3e == 0) {
        puVar9 = (ulong *)((ulong *)((ulong)puVar12 & 0xffffffffffffff8))[2];
      }
      else {
        puVar9 = (ulong *)((ulong)puVar12 & 0xffffffffffffff8);
        if (((ulong)puVar12 & 0x8000000000000000) != 0) {
          puVar9 = puVar12;
        }
        func_0x000107c60480();
      }
      if (puVar13 == puVar9) {
        if (puVar13 != (ulong *)0x0) {
          puVar15 = (ulong *)((ulong)puVar11 & 0xffffffffffffff8);
          *(ulong **)(puVar5 + -0x68) = puVar15;
          puVar9 = puVar15;
          if (((ulong)puVar11 & 0x8000000000000000) != 0) {
            puVar9 = puVar11;
          }
          puVar15 = puVar15 + 4;
          if ((ulong)puVar11 >> 0x3e != 0) {
            puVar15 = puVar9;
          }
          puVar18 = (ulong *)((ulong)puVar12 & 0xffffffffffffff8);
          *(ulong **)(puVar5 + -0x70) = puVar18;
          puVar9 = puVar18;
          if (((ulong)puVar12 & 0x8000000000000000) != 0) {
            puVar9 = puVar12;
          }
          puVar18 = puVar18 + 4;
          if ((ulong)puVar12 >> 0x3e != 0) {
            puVar18 = puVar9;
          }
          if (puVar15 != puVar18) {
            if ((long)puVar13 < 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1033a1180);
              (*pcVar4)();
            }
            FUN_1033a17c8(0,0x112e0e4a8,&PTR_PTR_1126a8d40);
            if ((((ulong)puVar12 | (ulong)puVar11) & 0xc000000000000001) == 0) {
              lVar20 = *(long *)(*(long *)(puVar5 + -0x68) + 0x10);
              lVar21 = *(long *)(*(long *)(puVar5 + -0x70) + 0x10);
              puVar9 = puVar11 + 4;
              puVar15 = puVar12 + 4;
              do {
                puVar13 = (ulong *)((long)puVar13 - 1);
                if (lVar20 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1033a1120);
                  (*pcVar4)();
                }
                if (lVar21 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1033a1124);
                  (*pcVar4)();
                }
                uVar8 = *puVar9;
                uVar19 = *puVar15;
                func_0x000107c61174();
                func_0x000107c61174(uVar19);
                uVar14 = uVar8;
                func_0x000107c60118(uVar8,uVar19);
                uVar7 = (uint)uVar14;
                func_0x000107c61170(uVar8);
                func_0x000107c61170(uVar19);
                if ((uVar14 & 1) == 0) break;
                lVar21 = lVar21 + -1;
                lVar20 = lVar20 + -1;
                puVar9 = puVar9 + 1;
                puVar15 = puVar15 + 1;
              } while (puVar13 != (ulong *)0x0);
            }
            else {
              lVar20 = 4;
              do {
                puVar13 = (ulong *)((long)puVar13 - 1);
                uVar14 = lVar20 - 4;
                if (((ulong)puVar11 & 0xc000000000000001) == 0) {
                  if (*(long *)(*(long *)(puVar5 + -0x68) + 0x10) <= (long)uVar14) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1033a1128);
                    (*pcVar4)();
                  }
                  uVar8 = puVar11[lVar20];
                  func_0x000107c61174();
                  if (((ulong)puVar12 & 0xc000000000000001) == 0) goto LAB_1033a1048;
LAB_1033a1018:
                  func_0x000101c6fbd8(uVar14,puVar12);
                }
                else {
                  uVar8 = uVar14;
                  func_0x000101c6fbd8(uVar14,puVar11);
                  if (((ulong)puVar12 & 0xc000000000000001) != 0) goto LAB_1033a1018;
LAB_1033a1048:
                  if (*(long *)(*(long *)(puVar5 + -0x70) + 0x10) <= (long)uVar14) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1033a112c);
                    (*pcVar4)();
                  }
                  uVar14 = puVar12[lVar20];
                  func_0x000107c61174(uVar14);
                }
                uVar19 = uVar8;
                func_0x000107c60118(uVar8,uVar14);
                uVar7 = (uint)uVar19;
                func_0x000107c61170(uVar8);
                func_0x000107c61170(uVar14);
              } while (((uVar19 & 1) != 0) && (lVar20 = lVar20 + 1, puVar13 != (ulong *)0x0));
            }
            goto LAB_1033a1158;
          }
        }
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
LAB_1033a1158:
      return (ulong *)(ulong)(uVar7 & 1);
    }
    break;
  case 1:
    if (cVar1 == '\x01') {
      bVar6 = puVar11 == puVar9;
      goto code_r0x0001033a1310;
    }
    break;
  case 2:
    if (cVar1 == '\x02') goto code_r0x0001033a1334;
    break;
  case 3:
    if (cVar1 != '\x03') break;
    if (puVar11 != (ulong *)0x0) {
      if (puVar9 != (ulong *)0x0) {
        FUN_1033a17c8(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
        func_0x000107c61174(puVar9);
        unaff_x19 = puVar11;
        unaff_x22 = puVar9;
        unaff_x23 = puVar12;
        unaff_x24 = puVar15;
        goto code_r0x0001033a12b4;
      }
      break;
    }
    if (puVar9 != (ulong *)0x0) break;
    goto code_r0x0001033a13b8;
  case 4:
  case 0x5e:
  case 0x66:
    if (cVar1 == '\x04') {
      puVar12 = (ulong *)0x112d36000;
      goto code_r0x0001033a11e0;
    }
    break;
  case 5:
    if (cVar1 == '\x05') goto code_r0x0001033a1334;
    break;
  case 6:
    bVar6 = cVar1 == '\x06';
  case 0x16:
    if ((bool)bVar6) goto code_r0x0001033a1334;
    break;
  case 7:
  case 0x36:
  case 0x47:
  case 0x96:
  case 0xa7:
  case 0xab:
  case 0xc6:
  case 0xd7:
  case 0xe6:
  case 0xf7:
    if (cVar1 != '\a') goto code_r0x0001033a12fc;
  case 0x37:
  case 0x3e:
  case 0x40:
  case 0x48:
  case 0x97:
  case 0x9e:
  case 0xa0:
  case 0xa8:
  case 199:
  case 0xce:
  case 0xd0:
  case 0xd8:
  case 0xdd:
  case 0xe7:
  case 0xee:
  case 0xf0:
  case 0xf8:
code_r0x0001033a1334:
    if (puVar11 == puVar9) {
code_r0x0001033a133c:
      if (puVar12 == puVar15) {
code_r0x0001033a1344:
        uVar7 = 1;
        goto code_r0x0001033a1434;
      }
    }
code_r0x0001033a134c:
    puVar13 = puVar9;
code_r0x0001033a1350:
    puVar9 = puVar15;
code_r0x0001033a1354:
    puVar15 = (ulong *)0x0;
code_r0x0001033a135c:
code_r0x0001033a1364:
code_r0x0001033a1368:
    puVar18 = puVar11;
    puVar17 = puVar12;
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(puVar18,puVar17,puVar13,puVar9,puVar15);
    return puVar18;
  case 8:
  case 0x54:
  case 0xff:
    if (cVar1 == '\b') goto code_r0x0001033a1378;
    break;
  case 9:
    uVar14 = (long)puVar12 + (ulong)(puVar11 >= (ulong *)0x3);
    if ((long)-uVar14 < 0 != SCARRY8(~uVar14,(ulong)(puVar11 < (ulong *)0x3)))
    goto code_r0x0001033a1384;
    if (puVar11 == (ulong *)0x0 && puVar12 == (ulong *)0x0) {
      if ((cVar1 == '\t') && (puVar15 == (ulong *)0x0 && puVar9 == (ulong *)0x0))
      goto code_r0x0001033a1344;
      break;
    }
    if (puVar11 != (ulong *)0x1 || puVar12 != (ulong *)0x0) {
      if (cVar1 == '\t') {
        if (puVar9 != (ulong *)0x2) goto code_r0x0001033a1410;
        goto code_r0x0001033a1428;
      }
      break;
    }
    if (cVar1 != '\t') break;
    if (puVar9 != (ulong *)0x1) goto code_r0x0001033a1250;
    goto code_r0x0001033a1428;
  case 0xe:
code_r0x0001033a1310:
    uVar7 = (uint)bVar6;
    goto code_r0x0001033a1434;
  case 0x1e:
    goto code_r0x0001033a1350;
  case 0x26:
  case 0xb6:
code_r0x0001033a13f0:
    if (puVar9 == (ulong *)0x3) goto code_r0x0001033a1428;
    break;
  case 0x2e:
code_r0x0001033a1410:
    break;
  case 0x38:
  case 0x39:
  case 0x4d:
  case 0x51:
  case 0x52:
  case 0x98:
  case 0x99:
  case 0xae:
  case 200:
  case 0xc9:
  case 0xe8:
  case 0xe9:
    goto code_r0x0001033a137c;
  case 0x3a:
  case 0x9a:
  case 0xca:
  case 0xea:
    goto code_r0x0001033a135c;
  case 0x3b:
  case 0x42:
  case 0x44:
  case 0x4a:
  case 0x50:
  case 0x9b:
  case 0xa2:
  case 0xa4:
  case 0xaa:
  case 0xad:
  case 0xaf:
  case 0xb2:
  case 0xcb:
  case 0xd2:
  case 0xd4:
  case 0xda:
  case 0xdf:
  case 0xeb:
  case 0xf2:
  case 0xf4:
  case 0xfa:
    goto code_r0x0001033a1344;
  case 0x3c:
  case 0x9c:
  case 0xcc:
  case 0xec:
code_r0x0001033a1394:
    if (puVar13 == (ulong *)0x0 && puVar12 == (ulong *)0x0) {
      if (cVar1 == '\t') {
        bVar6 = puVar9 == (ulong *)0x4;
        goto code_r0x0001033a13ac;
      }
    }
    else if ((cVar1 == '\t') && (puVar9 == (ulong *)0x5)) goto code_r0x0001033a1428;
    break;
  case 0x3d:
  case 0x9d:
  case 0xcd:
  case 0xed:
    goto code_r0x0001033a12e4;
  case 0x3f:
  case 0x45:
  case 0x4f:
  case 0x9f:
  case 0xa5:
  case 0xb0:
  case 0xcf:
  case 0xd5:
  case 0xef:
  case 0xf5:
    goto code_r0x0001033a1368;
  case 0x41:
  case 0x49:
  case 0x55:
  case 0xa1:
  case 0xa9:
  case 0xd1:
  case 0xd9:
  case 0xf1:
  case 0xf9:
    goto code_r0x0001033a134c;
  case 0x43:
  case 0xa3:
  case 0xd3:
  case 0xf3:
    goto code_r0x0001033a1364;
  case 0x46:
  case 0xa6:
  case 0xb1:
  case 0xd6:
  case 0xdc:
  case 0xde:
  case 0xf6:
  case 0xfd:
    goto code_r0x0001033a1380;
  case 0x4b:
    goto code_r0x0001033a12b8;
  case 0x4c:
code_r0x0001033a1384:
    if (puVar11 != (ulong *)0x3 || puVar12 != (ulong *)0x0) {
      puVar13 = (ulong *)((ulong)puVar11 ^ 4);
      goto code_r0x0001033a1394;
    }
    if (cVar1 == '\t') goto code_r0x0001033a13f0;
    break;
  case 0x4e:
  case 0x56:
  case 0xfe:
    goto code_r0x0001033a1354;
  case 0x53:
    goto code_r0x0001033a12e0;
  case 0x57:
  case 0xfc:
    goto code_r0x0001033a133c;
  case 0x6e:
  case 0x86:
    goto code_r0x0001033a11cc;
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x8a:
  case 0x8b:
  case 0x8c:
    uVar16 = puVar11[1];
    bVar6 = (byte)puVar11[2];
    uVar14 = *puVar12;
    uVar8 = puVar12[1];
    cVar1 = (char)puVar12[2];
    uVar19 = (ulong)*(uint *)((long)puVar11 + 1) << 8 | (ulong)*(uint3 *)((long)puVar11 + 5) << 0x28
             | (ulong)*(byte *)((long)puVar13 + 0x10dbbc3aa) * 4 + 0x1033a11b0;
    if (bVar6 < 2) {
      if (bVar6 == 0) {
        if (cVar1 != '\0') {
          return (ulong *)0x0;
        }
        uVar10 = 0;
        FUN_1033a17c8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(uVar19,uVar14,uVar10);
      }
      else {
        if (cVar1 != '\x01') {
          return (ulong *)0x0;
        }
        if (uVar19 == uVar14 && uVar16 == uVar8) goto LAB_1033a1704;
        func_0x000107c605b8(uVar19,uVar16,uVar14,uVar8,0);
      }
      if ((uVar19 & 1) == 0) {
        return (ulong *)0x0;
      }
    }
    else {
      if (bVar6 == 2) {
        if (cVar1 != '\x02') {
          return (ulong *)0x0;
        }
        uVar8 = uVar14 & 1;
      }
      else {
        uVar3 = uVar16 + (uVar19 >= 2);
        if ((long)-uVar3 < 0 == SCARRY8(~uVar3,(ulong)(uVar19 < 2))) {
          if (uVar19 == 0 && uVar16 == 0) {
            if (cVar1 != '\x03') {
              return (ulong *)0x0;
            }
            if (uVar8 != 0 || uVar14 != 0) {
              return (ulong *)0x0;
            }
            goto LAB_1033a1704;
          }
          if (cVar1 != '\x03') {
            return (ulong *)0x0;
          }
          if (uVar14 != 1) {
            return (ulong *)0x0;
          }
        }
        else if (uVar19 == 2 && uVar16 == 0) {
          if (cVar1 != '\x03') {
            return (ulong *)0x0;
          }
          if (uVar14 != 2) {
            return (ulong *)0x0;
          }
        }
        else {
          if (cVar1 != '\x03') {
            return (ulong *)0x0;
          }
          if (uVar14 != 3) {
            return (ulong *)0x0;
          }
        }
      }
      if (uVar8 != 0) {
        return (ulong *)0x0;
      }
    }
LAB_1033a1704:
    if (*(char *)((long)puVar11 + 0x11) == *(char *)((long)puVar12 + 0x11)) {
      puVar17 = (ulong *)puVar11[4];
      puVar9 = (ulong *)puVar12[4];
      if (puVar17 == (ulong *)0x1) {
        if (puVar9 != (ulong *)0x1) {
          return (ulong *)0x0;
        }
      }
      else if (puVar17 == (ulong *)0x0) {
        if (puVar9 != (ulong *)0x0) {
          return (ulong *)0x0;
        }
      }
      else {
        if (puVar9 < (ulong *)0x2) {
          return (ulong *)0x0;
        }
        puVar18 = (ulong *)puVar11[3];
        puVar13 = (ulong *)puVar12[3];
        if ((puVar18 != puVar13) || (puVar17 != puVar9)) {
          puVar15 = (ulong *)0x0;
          goto code_r0x000107c605b8;
        }
      }
      uVar14 = puVar11[5];
      FUN_1033a0f2c(uVar14,puVar12[5]);
      if ((uVar14 & 1) != 0) {
        return (ulong *)(ulong)(puVar11[6] == puVar12[6]);
      }
    }
    return (ulong *)0x0;
  case 0x75:
  case 0x8d:
code_r0x0001033a13ac:
    if ((bool)bVar6) goto code_r0x0001033a1428;
    break;
  case 0x76:
  case 0x7e:
code_r0x0001033a1250:
    break;
  case 0x88:
    goto code_r0x0001033a11bc;
  case 0xac:
  case 0xb3:
code_r0x0001033a1378:
    puVar13 = (ulong *)(ulong)((uint)puVar9 ^ (uint)puVar11);
code_r0x0001033a137c:
    puVar13 = (ulong *)(ulong)((uint)puVar13 ^ 1);
code_r0x0001033a1380:
    uVar7 = (uint)puVar13;
    goto code_r0x0001033a1434;
  case 0xb7:
    uVar14 = (long)puVar12 + (ulong)(puVar11 > puVar13);
    if ((long)-uVar14 < 0 == SCARRY8(~uVar14,(ulong)(puVar11 <= puVar13))) {
      if (puVar11 == (ulong *)0x0 && puVar12 == (ulong *)0x0) {
        if (cVar1 != '\x03') {
          return (ulong *)0x0;
        }
        if (puVar15 != (ulong *)0x0 || puVar9 != (ulong *)0x0) {
          return (ulong *)0x0;
        }
        return (ulong *)0x1;
      }
      if (cVar1 != '\x03') {
        return (ulong *)0x0;
      }
      if (puVar9 != (ulong *)0x1) {
        return (ulong *)0x0;
      }
    }
    else if (puVar11 == (ulong *)0x2 && puVar12 == (ulong *)0x0) {
      if (cVar1 != '\x03') {
        return (ulong *)0x0;
      }
      if (puVar9 != (ulong *)0x2) {
        return (ulong *)0x0;
      }
    }
    else {
      if (cVar1 != '\x03') {
        return (ulong *)0x0;
      }
      if (puVar9 != (ulong *)0x3) {
        return (ulong *)0x0;
      }
    }
    if (puVar15 != (ulong *)0x0) {
      return (ulong *)0x0;
    }
    return (ulong *)0x1;
  case 0xb8:
    return (ulong *)(ulong)((bVar2 ^ 1) & 1);
  case 0xba:
code_r0x0001033a11e0:
    uVar10 = 0;
    FUN_1033a17c8(0,puVar12 + 0x106,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(puVar11,puVar9,uVar10);
    uVar7 = (uint)puVar11;
    goto code_r0x0001033a1434;
  case 0xdb:
code_r0x0001033a12fc:
    break;
  case 0xfb:
code_r0x0001033a12b4:
    puVar11 = unaff_x19;
code_r0x0001033a12b8:
    func_0x000107c61174();
    unaff_x20 = puVar11;
    func_0x000107c60118();
    func_0x000107c61170(puVar11);
    func_0x000107c61170(unaff_x22);
code_r0x0001033a12e0:
    puVar12 = unaff_x23;
code_r0x0001033a12e4:
    puVar15 = unaff_x24;
    if (((ulong)unaff_x20 & 1) == 0) break;
code_r0x0001033a13b8:
    if (puVar12 != (ulong *)0x0) {
      if ((puVar15 != (ulong *)0x0) && (puVar12 == puVar15)) goto code_r0x0001033a1344;
      break;
    }
code_r0x0001033a1428:
    if (puVar15 != (ulong *)0x0) break;
    goto code_r0x0001033a1344;
  }
  uVar7 = 0;
code_r0x0001033a1434:
  return (ulong *)(ulong)(uVar7 & 1);
}



/* Entry: 10339ea38; end: 10339eaa3;  */

void FUN_10339ea38(long param_1,long param_2)

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



/* Entry: 10339eaa4; end: 10339eb4f;  */

void FUN_10339eaa4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10339eb50; end: 10339ebc3;  */

bool FUN_10339eb50(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10339ebc4; end: 10339ec1b;  */

uint FUN_10339ebc4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_1033a1598(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10339ec1c; end: 10339f207;  */

void FUN_10339ec1c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [32];
  long lStack_c0;
  undefined1 auStack_b8 [32];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)&lStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lStack_f0 = lVar12;
    lStack_e8 = param_2;
    func_0x000107c600f4(lVar11);
    func_0x000100e15a08();
    func_0x000107c601c0(&puStack_98,lVar3,param_2);
    puVar2 = PTR___sypN_11034f1a8;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while (lStack_80 != 0) {
      func_0x000100102924(&puStack_98,auStack_b8);
      func_0x000100102924(auStack_b8,auStack_e0);
      uVar6 = 0;
      FUN_1033a17c8(0,0x112e0e4a8,&PTR_PTR_1126a8d40);
      plVar7 = &lStack_c0;
      func_0x000107c6147c(plVar7,auStack_e0,puVar2 + 8,uVar6,6);
      lVar12 = lStack_c0;
      if ((((ulong)plVar7 & 1) != 0) && (lStack_c0 != 0)) {
        puVar5 = puVar8;
        func_0x000107c61550();
        if (((int)puVar5 == 0) ||
           (((long)puVar8 < 0 || (puVar5 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)))) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar4 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar8) {
              puVar4 = puVar8;
            }
            func_0x000107c60480(puVar4);
          }
          puVar5 = (undefined *)0x0;
          func_0x000101c7007c(0,puVar4 + 1,1,puVar8);
        }
        uVar10 = (ulong)puVar5 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar10 + 0x10);
        puVar8 = puVar5;
        if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
          func_0x000101c7007c(puVar8,uVar1 + 1,1,puVar5);
          uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
        *(long *)(uVar10 + uVar1 * 8 + 0x20) = lVar12;
      }
      func_0x000107c601c0(&puStack_98,lVar3,param_2);
    }
    (**(code **)(lStack_f0 + 8))(lVar11,lVar3);
    func_0x0001000285a8(0x112f60400,&UNK_10dbbc108);
    uStack_90 = 0;
    uStack_88 = 0;
    ppuVar9 = &puStack_98;
    puStack_98 = puVar8;
    func_0x000100854cb0(ppuVar9);
    lVar3 = lStack_e8;
    uVar6 = *(undefined8 *)(lStack_e8 + 0x90);
    func_0x000100471e0c(uVar6,1);
    func_0x000107c61574(ppuVar9);
    func_0x000103dbf524(uVar6);
    func_0x000107c61574(lVar3);
    func_0x000107c6142c(puVar8);
    func_0x000107c61574(uVar6);
  }
  return;
}



/* Entry: 10339f208; end: 10339f3bf;  */

void FUN_10339f208(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar2 = &UNK_11064a340;
    func_0x000107c613fc(&UNK_11064a340,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = 0x1033a1c40;
    *(long *)(puVar2 + 0x18) = param_2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_78 = FUN_1033a1c48;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1020ca174;
    puStack_80 = &UNK_11064a358;
    ppuVar3 = &puStack_98;
    puStack_70 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_70;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar2);
    puVar2 = &UNK_11064a390;
    func_0x000107c613fc(&UNK_11064a390,0x20,7);
    *(code **)(puVar2 + 0x10) = FUN_1033a1c68;
    *(long *)(puVar2 + 0x18) = param_2;
    pcStack_78 = FUN_1033a1c70;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100de58f0;
    puStack_80 = &UNK_11064a3a8;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar2;
    func_0x000107c60bc4(ppuVar4);
    puVar2 = puStack_70;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar2);
    pcStack_78 = FUN_10339f534;
    puStack_70 = (undefined *)0x0;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_10006eb60;
    puStack_80 = &UNK_11064a3d0;
    ppuVar5 = &puStack_98;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_70);
    func_0x000107c4c75c(param_1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61578(param_2,3);
  }
  return;
}



/* Entry: 10339f3c0; end: 10339f44f;  */

void FUN_10339f3c0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar2 = 0x112f60400;
  func_0x0001000285a8(0x112f60400,&UNK_10dbbc108);
  uStack_40 = 0;
  uStack_38 = 1;
  puVar1 = &uStack_48;
  uStack_48 = param_1;
  func_0x000100854cb0(puVar1,uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  func_0x000100471e0c(uVar2,1);
  func_0x000107c61574(puVar1);
  func_0x000103dbf524(uVar2);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 10339f450; end: 10339f533;  */

void FUN_10339f450(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  lVar5 = param_2;
  if (param_2 == 0) {
    func_0x000106b24678();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10339f534);
      (*pcVar1)();
    }
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    param_1 = lVar2;
  }
  func_0x0001000285a8(0x112f60400,&UNK_10dbbc108);
  uStack_48 = 2;
  lStack_58 = param_1;
  lStack_50 = lVar5;
  func_0x000107c61434(param_2);
  plVar3 = &lStack_58;
  func_0x000100854cb0(plVar3);
  uVar4 = *(undefined8 *)(param_3 + 0x90);
  func_0x000100471e0c(uVar4,1);
  func_0x000107c61574(plVar3);
  func_0x000103dbf524(uVar4);
  func_0x000107c6142c(lVar5);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 10339f534; end: 10339f547;  */

void FUN_10339f534(void)

{
  return;
}



/* Entry: 10339f548; end: 10339f593;  */

void FUN_10339f548(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10339f594; end: 10339f717;  */

void FUN_10339f594(long param_1,undefined1 *param_2,long param_3,long param_4,undefined1 *param_5)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined1 *puVar5;
  long lStack_70;
  undefined1 *puStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  
  plVar2 = &lStack_70;
  plVar3 = &lStack_70;
  puVar5 = auStack_58;
  func_0x000107c61428(param_3 + 0x10,puVar5,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    return;
  }
  if (param_2 == (undefined1 *)0x0) {
    lVar4 = param_3;
    func_0x000108b9aaec();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10339f718);
      (*pcVar1)();
    }
    param_1 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
LAB_10339f680:
    func_0x0001000285a8(0x112f60400,&UNK_10dbbc108);
    uStack_60 = 7;
    lStack_70 = param_1;
    puStack_68 = puVar5;
    func_0x000107c61434(param_2);
    func_0x000100854cb0(&lStack_70);
    lVar4 = *(long *)(param_3 + 0x90);
    func_0x000100471e0c(lVar4,1);
    func_0x000107c61574(plVar3);
    func_0x000103dbf524(lVar4);
    func_0x000107c6142c(puVar5);
  }
  else {
    if (param_2 != (undefined1 *)0x1) {
      lVar4 = param_3;
      puVar5 = param_2;
      if (param_2 == (undefined1 *)0x2) goto LAB_10339f6f4;
      goto LAB_10339f680;
    }
    func_0x0001000285a8(0x112f60400,&UNK_10dbbc108);
    uStack_60 = 6;
    lStack_70 = param_4;
    puStack_68 = param_5;
    func_0x000100854cb0(&lStack_70);
    lVar4 = *(long *)(param_3 + 0x90);
    func_0x000100471e0c(lVar4,1);
    func_0x000107c61574(plVar2);
    func_0x000103dbf524(lVar4);
  }
  func_0x000107c61574(param_3);
LAB_10339f6f4:
  func_0x000107c61574(lVar4);
  return;
}



/* Entry: 10339f718; end: 10339f74b;  */

/* WARNING: Possible PIC construction at 0x00010339f72c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010339f730) */

void FUN_10339f718(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 10339f74c; end: 10339f7b3;  */

void FUN_10339f74c(long param_1)

{
  undefined8 uVar1;
  
  func_0x000103dbf870();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c6157c();
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x60));
  func_0x0001000834e4(param_1 + 0x68);
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0x90));
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0xa0,7);
  return;
}



/* Entry: 10339f7b4; end: 10339f873;  */

void FUN_10339f7b4(undefined8 param_1)

{
  if (lRam0000000112f606b8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7602d0);
  return;
}



/* Entry: 10339f874; end: 10339f8cb;  */

void FUN_10339f874(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010339ee98(&uStack_58,*param_2,param_2[1],*(undefined1 *)(param_2 + 2),param_3);
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[3] = uStack_40;
  param_1[2] = uStack_48;
  param_1[5] = uStack_30;
  param_1[4] = uStack_38;
  param_1[6] = uStack_28;
  return;
}



/* Entry: 10339f8cc; end: 10339f8db;  */

/* WARNING: Possible PIC construction at 0x0001033a1a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a1b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a1b24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a1c10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033a1b14) */
/* WARNING: Removing unreachable block (ram,0x0001033a1a88) */
/* WARNING: Removing unreachable block (ram,0x0001033a1c14) */

void FUN_10339f8cc(long *param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  bVar3 = *(byte *)(param_1 + 2);
  ppuVar5 = &puStack_80;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar4 = uVar7;
  func_0x000107c614f0(uVar7);
  func_0x000100bc7fa4();
  if (bVar3 < 6) {
    if (bVar3 == 3) {
      func_0x000100bc7fa4(uVar4);
      puVar6 = PTR_PTR_1126a5e20;
      func_0x000107c610f8(PTR_PTR_1126a5e20);
      func_0x000107c4809c();
      func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar6);
      return;
    }
    if (bVar3 != 5) {
      return;
    }
    func_0x000100bc7fa4(uVar4);
    func_0x0001000a8868(unaff_x20 + 0x68,*(undefined8 *)(unaff_x20 + 0x80));
    ppuVar5 = (undefined **)&UNK_11064a0e8;
    func_0x000107c613fc(&UNK_11064a0e8,0x18,7);
    func_0x000107c61644((undefined *)((long)ppuVar5 + 0x10));
    puVar6 = &UNK_11064a2f0;
    func_0x000107c613fc(&UNK_11064a2f0,0x28,7);
    *(undefined ***)(puVar6 + 0x10) = ppuVar5;
    *(long *)(puVar6 + 0x18) = lVar1;
    *(long *)(puVar6 + 0x20) = lVar2;
    func_0x000107c6157c(ppuVar5);
    FUN_10339e414(lVar1,lVar2,5);
    uVar4 = 0;
    FUN_10339743c(0);
    FUN_1033972e4(lVar1,lVar2,FUN_1033a1c2c,puVar6,uVar4,&PTR_DAT_110649b30);
  }
  else {
    if (bVar3 != 6) {
      if (bVar3 != 9) {
        return;
      }
      if (lVar1 == 0 && lVar2 == 0) {
        puVar6 = &UNK_11064a0e8;
        func_0x000107c613fc(&UNK_11064a0e8,0x18,7);
        func_0x000107c61644(puVar6 + 0x10);
        uStack_60 = 0x1033a1c38;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        pcStack_70 = FUN_10339f548;
        puStack_68 = &UNK_11064a308;
        puStack_58 = puVar6;
        func_0x000107c60bc4(&puStack_80);
        ppuVar5 = (undefined **)puStack_58;
        goto code_r0x000107c61574;
      }
      if (lVar1 != 2 || lVar2 != 0) {
        return;
      }
    }
    func_0x0001000285a8(0x112f60400,&UNK_10dbbc108);
    puStack_80 = (undefined *)0x0;
    uStack_78 = 0;
    pcStack_70 = (code *)CONCAT71(pcStack_70._1_7_,9);
    func_0x000100854cb0(&puStack_80);
    func_0x000100471e0c(uVar7,1);
  }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(ppuVar5);
  return;
}



/* Entry: 10339f8dc; end: 10339f97b;  */

void FUN_10339f8dc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  puVar1 = &uStack_50;
  func_0x0001000285a8(0x112f60400,&UNK_10dbbc108);
  uStack_48 = 0;
  uStack_50 = 1;
  uStack_40 = 8;
  func_0x000107c6157c(param_1);
  func_0x000100854cb0(&uStack_50);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  func_0x000100471e0c(uVar2,1);
  func_0x000107c61574(puVar1);
  func_0x000103dbf524(uVar2);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 10339f97c; end: 10339f97f;  */

void FUN_10339f97c(void)

{
  return;
}



/* Entry: 10339f980; end: 10339fbdb;  */

void FUN_10339f980(undefined8 param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar2 = &puStack_90;
  ppuVar3 = &puStack_90;
  ppuVar4 = &puStack_90;
  ppuVar6 = &puStack_90;
  uStack_70 = 0x10339f538;
  puStack_68 = (undefined *)0x0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_10006eb60;
  puStack_78 = &UNK_11064a100;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  uStack_70 = 0x10339f53c;
  puStack_68 = (undefined *)0x0;
  puStack_90 = puVar8;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_10006eb60;
  puStack_78 = &UNK_11064a128;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  uStack_70 = 0x10339f540;
  puStack_68 = (undefined *)0x0;
  puStack_90 = puVar8;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_10006eb60;
  puStack_78 = &UNK_11064a150;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  puVar5 = &UNK_11064a188;
  func_0x000107c613fc(&UNK_11064a188,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x1033a1824;
  *(undefined8 *)(puVar5 + 0x18) = unaff_x20;
  uStack_70 = 0x1033a248c;
  puStack_90 = puVar8;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e2fab8;
  puStack_78 = &UNK_11064a1a0;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar8 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar8);
  func_0x000107c4c61c(param_1);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  uVar7 = 0;
  func_0x000107c61544(0,"",0x78,0x12f,0x2f,1);
  if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10339fbd0);
    (*pcVar1)();
  }
  uVar7 = 0;
  func_0x000107c61544(0,"",0x78,0x131,0x1c,1);
  if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10339fbd4);
    (*pcVar1)();
  }
  uVar7 = 0;
  func_0x000107c61544(0,"",0x78,0x133,0x1e,1);
  func_0x000107c61574();
  if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10339fbd8);
    (*pcVar1)();
  }
  puVar8 = puVar5;
  func_0x000107c61544(puVar5,"",0x78,0x135,0x15,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar8 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10339fbdc);
  (*pcVar1)();
}



/* Entry: 10339fbdc; end: 10339ff33;  */

void FUN_10339fbdc(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  ulong uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar3 = &UNK_11064a1d8;
  func_0x000107c613fc(&UNK_11064a1d8,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_1033a1828;
  *(long *)(puVar3 + 0x18) = unaff_x20;
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1033a1848;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_11064a1f0;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar5 = puStack_78;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  puVar5 = &UNK_11064a228;
  func_0x000107c613fc(&UNK_11064a228,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1033a1868;
  *(long *)(puVar5 + 0x18) = unaff_x20;
  pcStack_80 = FUN_1033a1870;
  puStack_a0 = puVar10;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e2fcec;
  puStack_88 = &UNK_11064a240;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_78;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_11064a278;
  func_0x000107c613fc(&UNK_11064a278,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_1033a1890;
  *(long *)(puVar7 + 0x18) = unaff_x20;
  pcStack_80 = (code *)0x1033a2490;
  puStack_a0 = puVar10;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_11064a290;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar1 = puStack_78;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  pcStack_80 = (code *)0x10339f544;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar10;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10006eb60;
  puStack_88 = &UNK_11064a2b8;
  ppuVar9 = &puStack_a0;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c61574(puStack_78);
  func_0x000107c4c758(param_1);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar4);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x90);
  func_0x000107c614f0(uVar12);
  puVar10 = &UNK_11064a0e8;
  func_0x000107c613fc(&UNK_11064a0e8,0x18,7);
  func_0x000107c61644(puVar10 + 0x10);
  func_0x000107c6157c(puVar10);
  func_0x00010090569c(FUN_1033a18b0,puVar10,uVar12);
  func_0x000107c61574();
  func_0x000107c61578(puVar10,2);
  puVar10 = puVar3;
  func_0x000107c61544(puVar3,"",0x78,0x13b,0x1d,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar3);
  if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10339ff28);
    (*pcVar2)();
  }
  puVar3 = puVar5;
  func_0x000107c61544(puVar5,"",0x78,0x13d,0x14,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar5);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10339ff2c);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x78,0x13f,0x16,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10339ff30);
    (*pcVar2)();
  }
  uVar11 = 0;
  func_0x000107c61544(0,"",0x78,0x141,0x14,1);
  if ((uVar11 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10339ff34);
  (*pcVar2)();
}



/* Entry: 10339ff34; end: 10339ffa3;  */

void FUN_10339ff34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_10339f980(param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10339ffa4; end: 10339ffc3;  */

void FUN_10339ffa4(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  if (param_3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  return;
}



/* Entry: 10339ffc4; end: 1033a0003;  */

/* WARNING: Possible PIC construction at 0x00010339fff0: Changing call to branch */

void FUN_10339ffc4(undefined8 *param_1)

{
  ulong uVar1;
  
  FUN_1033a0004(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  uVar1 = param_1[4];
  if (uVar1 < 2) {
    uVar1 = param_1[5];
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1033a0004; end: 1033a0023;  */

void FUN_1033a0004(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  if (param_3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 1033a0024; end: 1033a019f;  */

undefined8 * FUN_1033a0024(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = param_2[1];
  uVar2 = *(undefined1 *)(param_2 + 2);
  FUN_10339ffa4(uVar4,uVar1,uVar2);
  *param_1 = uVar4;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = uVar2;
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  uVar3 = param_2[4];
  if (uVar3 < 2) {
    uVar4 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar4;
  }
  else {
    param_1[3] = param_2[3];
    param_1[4] = uVar3;
    func_0x000107c61434();
  }
  uVar4 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar4;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1033a01a0; end: 1033a0283;  */

undefined8 FUN_1033a01a0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f607e8;
  func_0x0001000285a8(0x112f607e8,&UNK_10dbbc460);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1033a0284; end: 1033a0427;  */

int FUN_1033a0284(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1033a0428; end: 1033a05cf;  */

void FUN_1033a0428(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  puVar1 = &uStack_50;
  func_0x0001000285a8(0x112f60400,&UNK_10dbbc108);
  uStack_48 = 0;
  uStack_50 = 3;
  uStack_40 = 9;
  func_0x000100854cb0(&uStack_50);
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  func_0x000100471e0c(uVar2,1);
  func_0x000107c61574(puVar1);
  func_0x000103dbf524(uVar2);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 1033a05d0; end: 1033a05f3;  */

void FUN_1033a05d0(undefined1 *param_1,long param_2)

{
  if (*(char *)(param_2 + 0x11) != '\0') {
    *param_1 = 0;
    return;
  }
  *param_1 = *(ulong *)(param_2 + 0x20) < 2;
  return;
}



/* Entry: 1033a05f4; end: 1033a063f;  */

void FUN_1033a05f4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x11) == '\0' && 1 < uVar1) {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    func_0x000107c61434();
  }
  else {
    uVar2 = 0;
    uVar1 = 0;
  }
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1033a0640; end: 1033a06a7;  */

void FUN_1033a0640(undefined1 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(char *)(param_2 + 0x11) == '\x01') {
    uVar2 = *(ulong *)(param_2 + 0x28);
    if (uVar2 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar2) {
        uVar1 = uVar2;
      }
      func_0x000107c60480();
    }
    *param_1 = uVar1 == 0;
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 1033a06a8; end: 1033a0757;  */

void FUN_1033a06a8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uVar1 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_a8,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    *(undefined8 *)((long)param_1 + 0x51) = 0;
    *(undefined8 *)((long)param_1 + 0x49) = 0;
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
  }
  else {
    FUN_1033a0758(&uStack_90,uVar1);
    func_0x000107c61574(param_3);
    param_1[5] = uStack_68;
    param_1[4] = uStack_70;
    param_1[7] = uStack_58;
    param_1[6] = uStack_60;
    param_1[9] = CONCAT71(uStack_47,uStack_48);
    param_1[8] = uStack_50;
    *(undefined8 *)((long)param_1 + 0x51) = uStack_3f;
    *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_40,uStack_47);
    param_1[1] = uStack_88;
    *param_1 = uStack_90;
    param_1[3] = uStack_78;
    param_1[2] = uStack_80;
  }
  return;
}



/* Entry: 1033a0758; end: 1033a0913;  */

void FUN_1033a0758(ulong *param_1,ulong param_2,undefined8 param_3,char param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_78 [24];
  
  if (param_4 != '\0') {
    uVar9 = 0;
    puVar10 = (undefined1 *)0x0;
    uVar5 = 0;
    puVar6 = (undefined1 *)0x0;
    uVar7 = 0;
    puVar8 = (undefined1 *)0x0;
    uVar4 = 0;
    puVar11 = (undefined1 *)0x0;
    uVar3 = 0;
    uVar2 = 0;
    goto LAB_1033a08d0;
  }
  puVar8 = auStack_78;
  func_0x000107c61428(unaff_x20 + 0x10,puVar8,0,0);
  uVar5 = *(ulong *)(unaff_x20 + 0x38);
  if (uVar5 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    puVar10 = puVar8;
    if ((long)uVar4 < 2) goto LAB_1033a07e4;
LAB_1033a0844:
    func_0x000108b9a8ac();
    func_0x000107c61180();
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a0914);
      (*pcVar1)();
    }
    puVar6 = (undefined1 *)0x0;
    uVar5 = 0;
  }
  else {
    uVar4 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar4 = uVar5;
    }
    func_0x000107c60480();
    puVar10 = puVar8;
    if (1 < (long)uVar4) goto LAB_1033a0844;
LAB_1033a07e4:
    func_0x000106b24828();
    func_0x000107c61180();
    if (uVar4 == 0) {
      uVar5 = 0;
      puVar6 = (undefined1 *)0x0;
      puVar8 = puVar10;
    }
    else {
      uVar5 = uVar4;
      func_0x000107c5faec();
      puVar8 = puVar10;
      func_0x000107c61170();
      puVar6 = puVar10;
    }
    func_0x000106b24858();
    func_0x000107c61180();
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a082c);
      (*pcVar1)();
    }
  }
  uVar7 = uVar4;
  func_0x000107c5faec();
  puVar10 = puVar8;
  func_0x000107c61170();
  func_0x000106b24810();
  func_0x000107c61180();
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a0910);
    (*pcVar1)();
  }
  uVar9 = uVar4;
  func_0x000107c5faec();
  puVar11 = puVar10;
  func_0x000107c61170(uVar4);
  func_0x000107c4e3e4();
  func_0x000107c61180();
  uVar4 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  uVar2 = 9;
  uVar3 = 5;
LAB_1033a08d0:
  *param_1 = uVar9;
  param_1[1] = (ulong)puVar10;
  param_1[2] = uVar5;
  param_1[3] = (ulong)puVar6;
  param_1[4] = uVar7;
  param_1[5] = (ulong)puVar8;
  param_1[6] = uVar4;
  param_1[7] = (ulong)puVar11;
  param_1[8] = uVar3;
  param_1[9] = uVar3;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = uVar2;
  return;
}



/* Entry: 1033a0914; end: 1033a0997;  */

void FUN_1033a0914(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  if ((char)param_2[2] == '\x01') {
    lVar1 = *param_2;
    lVar2 = param_2[1];
    lVar4 = lVar2;
    func_0x000107c61434();
    func_0x000106b24840();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1033a0998);
      (*pcVar3)();
    }
    lVar5 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
    *param_1 = lVar5;
    param_1[1] = param_3;
    param_1[2] = lVar1;
    param_1[3] = lVar2;
  }
  else {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1033a0998; end: 1033a09df;  */

void FUN_1033a0998(undefined8 *param_1,long param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 1033a09e0; end: 1033a0ac3;  */

void FUN_1033a09e0(undefined1 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uVar6;
  long lVar7;
  
  if (*(char *)((long)param_2 + 0x11) != '\x01') {
    *param_1 = 0;
    return;
  }
  lVar1 = *param_2;
  lVar7 = param_2[1];
  lVar3 = param_2[2];
  uVar5 = param_2[5];
  lVar2 = param_2[6];
  if (uVar5 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    if (uVar4 != 0) {
      if (1 < lVar2) goto LAB_1033a0a6c;
LAB_1033a0a28:
      if (0 < (long)uVar4) goto LAB_1033a0a94;
      goto LAB_1033a0a74;
    }
  }
  else {
    uVar4 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar4 = uVar5;
    }
    uVar5 = uVar4;
    func_0x000107c60480();
    if (uVar5 == 0) {
      uVar6 = 0;
      goto LAB_1033a0aa0;
    }
    func_0x000107c60480();
    if (lVar2 < 2) goto LAB_1033a0a28;
LAB_1033a0a6c:
    if ((long)uVar4 < lVar2) {
LAB_1033a0a74:
      if (((char)lVar3 != '\x03') ||
         (lVar7 = lVar7 + -1 + (ulong)(lVar1 != 0),
         lVar7 != 0 || CARRY8(lVar7 - 1,(ulong)(1 < lVar1 - 1U)))) {
        uVar6 = 1;
        goto LAB_1033a0aa0;
      }
    }
  }
LAB_1033a0a94:
  uVar6 = 0;
LAB_1033a0aa0:
  *param_1 = uVar6;
  return;
}



/* Entry: 1033a0ac4; end: 1033a0aff;  */

code * FUN_1033a0ac4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = PTR___sSbN_11034dd40;
  pcVar3 = FUN_1033a05d0;
  func_0x000103dbf46c();
  uVar2 = param_1;
  FUN_1033a0d98();
  func_0x000104884898();
  func_0x000107c61574(param_1);
  func_0x0001000bfde0(FUN_1033a05d0,0,puVar1);
  func_0x000107c61574(uVar2);
  return pcVar3;
}



/* Entry: 1033a0b00; end: 1033a0bbf;  */

code * FUN_1033a0b00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar4 = *unaff_x20;
  func_0x000103dbf46c();
  uVar1 = 0x1033a2494;
  func_0x0001000bfde0(0x1033a2494,0,&UNK_11064a598);
  func_0x000107c61574(param_1);
  func_0x0001033a0dd8();
  func_0x000104884898();
  func_0x000107c61574(uVar1);
  puVar2 = &UNK_11064a0e8;
  func_0x000107c613fc(&UNK_11064a0e8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,uVar4);
  pcVar3 = FUN_1033a0f24;
  func_0x0001000d5158(FUN_1033a0f24,puVar2,&UNK_110649e98);
  func_0x000107c61574(param_1);
  func_0x000107c61574(puVar2);
  return pcVar3;
}



/* Entry: 1033a0bc0; end: 1033a0be3;  */

code * FUN_1033a0bc0(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = 0x1033a2498;
  pcVar2 = FUN_1033a0914;
  func_0x000103dbf46c();
  func_0x0001000bfde0(0x1033a2498,0,&UNK_11064a598);
  func_0x000107c61574(param_1);
  func_0x0001033a0dd8();
  func_0x000104884898();
  func_0x000107c61574(uVar1);
  (*(code *)&SUB_1000d5158)(FUN_1033a0914,0,&UNK_110649f28);
  func_0x000107c61574(param_1);
  return pcVar2;
}



/* Entry: 1033a0be4; end: 1033a0c57;  */

undefined8 FUN_1033a0be4(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  func_0x000103dbf46c();
  uVar1 = 0x112e0e4a0;
  func_0x0001000285a8(0x112e0e4a0,&UNK_10dbbc510);
  pcVar2 = FUN_1033a0998;
  func_0x0001000bfde0(FUN_1033a0998,0,uVar1);
  func_0x000107c61574(param_1);
  FUN_1033a0e60();
  func_0x000104884898();
  func_0x000107c61574(pcVar2);
  return param_1;
}



/* Entry: 1033a0c58; end: 1033a0c7b;  */

undefined8 FUN_1033a0c58(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR___sSbN_11034dd40;
  uVar2 = 0x1033a249c;
  uVar3 = 0x1033a09a4;
  func_0x000103dbf46c();
  func_0x0001000bfde0(0x1033a249c,0,&UNK_11064a598);
  func_0x000107c61574(param_1);
  func_0x0001033a0dd8();
  func_0x000104884898();
  func_0x000107c61574(uVar2);
  (*(code *)&SUB_1000bfde0)(0x1033a09a4,0,puVar1);
  func_0x000107c61574(param_1);
  return uVar3;
}



/* Entry: 1033a0c7c; end: 1033a0d17;  */

undefined8
FUN_1033a0c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,code *param_6)

{
  func_0x000103dbf46c();
  func_0x0001000bfde0(param_3,0,&UNK_11064a598);
  func_0x000107c61574(param_1);
  func_0x0001033a0dd8();
  func_0x000104884898();
  func_0x000107c61574(param_3);
  (*param_6)(param_4,0,param_5);
  func_0x000107c61574(param_1);
  return param_4;
}



/* Entry: 1033a0d18; end: 1033a0d2b;  */

code * FUN_1033a0d18(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = PTR___sSbN_11034dd40;
  pcVar3 = FUN_1033a09e0;
  func_0x000103dbf46c();
  uVar2 = param_1;
  FUN_1033a0d98();
  func_0x000104884898();
  func_0x000107c61574(param_1);
  func_0x0001000bfde0(FUN_1033a09e0,0,puVar1);
  func_0x000107c61574(uVar2);
  return pcVar3;
}



/* Entry: 1033a0d2c; end: 1033a0d97;  */

undefined8
FUN_1033a0d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000103dbf46c();
  uVar1 = param_1;
  FUN_1033a0d98();
  func_0x000104884898();
  func_0x000107c61574(param_1);
  func_0x0001000bfde0(param_3,0,param_4);
  func_0x000107c61574(uVar1);
  return param_3;
}



/* Entry: 1033a0d98; end: 1033a0e17;  */

void FUN_1033a0d98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f607f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbbc4d4;
  func_0x000107c61520(&UNK_10dbbc4d4,&UNK_110649fd8);
  puRam0000000112f607f0 = puVar1;
  return;
}



/* Entry: 1033a0e18; end: 1033a0e5f;  */

undefined8 * FUN_1033a0e18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined1 *)(param_1 + 2);
  FUN_10339ffa4(uVar1,uVar2,uVar3);
  *param_2 = uVar1;
  param_2[1] = uVar2;
  *(undefined1 *)(param_2 + 2) = uVar3;
  return param_2;
}



/* Entry: 1033a0e60; end: 1033a0ecf;  */

void FUN_1033a0e60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f60800 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e0e4a0;
  func_0x00010002969c(0x112e0e4a0,&UNK_10dbbc510);
  uVar2 = uVar1;
  FUN_1033a0ed0();
  puVar3 = PTR___sSayxGSQsSQRzlMc_11034dd00;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSQsSQRzlMc_11034dd00,uVar1,&uStack_28);
  puRam0000000112f60800 = puVar3;
  return;
}



/* Entry: 1033a0ed0; end: 1033a0f23;  */

void FUN_1033a0ed0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f60808 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1033a17c8(0xff,0x112e0e4a8,&PTR_PTR_1126a8d40);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112f60808 = puVar2;
  return;
}



/* Entry: 1033a0f24; end: 1033a0f2b;  */

void FUN_1033a0f24(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uVar2 = *param_2;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_a8,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    *(undefined8 *)((long)param_1 + 0x51) = 0;
    *(undefined8 *)((long)param_1 + 0x49) = 0;
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
  }
  else {
    FUN_1033a0758(&uStack_90,uVar2);
    func_0x000107c61574(lVar1);
    param_1[5] = uStack_68;
    param_1[4] = uStack_70;
    param_1[7] = uStack_58;
    param_1[6] = uStack_60;
    param_1[9] = CONCAT71(uStack_47,uStack_48);
    param_1[8] = uStack_50;
    *(undefined8 *)((long)param_1 + 0x51) = uStack_3f;
    *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_40,uStack_47);
    param_1[1] = uStack_88;
    *param_1 = uStack_90;
    param_1[3] = uStack_78;
    param_1[2] = uStack_80;
  }
  return;
}



/* Entry: 1033a0f2c; end: 1033a117f;  */

uint FUN_1033a0f2c(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar9 == uVar2) {
    if (uVar9 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a1180);
          (*pcVar1)();
        }
        FUN_1033a17c8(0,0x112e0e4a8,&PTR_PTR_1126a8d40);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar12 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar10 = (ulong *)(param_1 + 0x20);
          puVar11 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar9 = uVar9 - 1;
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a1120);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a1124);
              (*pcVar1)();
            }
            uVar5 = *puVar10;
            uVar7 = *puVar11;
            func_0x000107c61174();
            func_0x000107c61174(uVar7);
            uVar2 = uVar5;
            func_0x000107c60118(uVar5,uVar7);
            uVar8 = (uint)uVar2;
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar12 = lVar12 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 != 0);
        }
        else {
          lVar12 = 4;
          do {
            uVar9 = uVar9 - 1;
            uVar2 = lVar12 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a1128);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar12 * 8);
              func_0x000107c61174();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_1033a1048;
LAB_1033a1018:
              func_0x000101c6fbd8(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              func_0x000101c6fbd8(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_1033a1018;
LAB_1033a1048:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a112c);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar12 * 8);
              func_0x000107c61174(uVar2);
            }
            uVar4 = uVar3;
            func_0x000107c60118(uVar3,uVar2);
            uVar8 = (uint)uVar4;
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar12 = lVar12 + 1, uVar9 != 0));
        }
        goto LAB_1033a1158;
      }
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
LAB_1033a1158:
  return uVar8 & 1;
}



/* Entry: 1033a1180; end: 1033a1447;  */

/* WARNING: Possible PIC construction at 0x0001033a1770: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033a1774) */
/* WARNING: Type propagation algorithm not settling */

ulong * FUN_1033a1180(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                     char param_6)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  byte in_ZR;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  ulong uVar15;
  ulong *unaff_x22;
  ulong *unaff_x23;
  ulong *unaff_x24;
  undefined8 unaff_x25;
  long lVar16;
  long lVar17;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar18;
  undefined8 unaff_x30;
  
  puVar10 = (ulong *)((ulong)param_3 & 0xff);
  puVar5 = &stack0xffffffffffffffc0;
  puVar18 = &stack0xfffffffffffffff0;
  switch(puVar10) {
  default:
    in_ZR = param_6 == '\0';
  case (ulong *)0x70:
    param_2 = param_4;
    if ((bool)in_ZR) {
code_r0x0001033a11bc:
      puVar5 = (undefined1 *)register0x00000008;
      puVar18 = unaff_x29;
code_r0x0001033a11cc:
      *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
      *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
      *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
      *(ulong **)(puVar5 + -0x40) = unaff_x24;
      *(ulong **)(puVar5 + -0x38) = unaff_x23;
      *(ulong **)(puVar5 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar5 + -0x28) = unaff_x21;
      *(ulong **)(puVar5 + -0x20) = unaff_x20;
      *(ulong **)(puVar5 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar5 + -0x10) = puVar18;
      *(undefined8 *)(puVar5 + -8) = unaff_x30;
      if ((ulong)param_1 >> 0x3e == 0) {
        puVar10 = (ulong *)((ulong *)((ulong)param_1 & 0xffffffffffffff8))[2];
      }
      else {
        puVar10 = (ulong *)((ulong)param_1 & 0xffffffffffffff8);
        if (((ulong)param_1 & 0x8000000000000000) != 0) {
          puVar10 = param_1;
        }
        func_0x000107c60480();
      }
      if ((ulong)param_2 >> 0x3e == 0) {
        puVar7 = (ulong *)((ulong *)((ulong)param_2 & 0xffffffffffffff8))[2];
      }
      else {
        puVar7 = (ulong *)((ulong)param_2 & 0xffffffffffffff8);
        if (((ulong)param_2 & 0x8000000000000000) != 0) {
          puVar7 = param_2;
        }
        func_0x000107c60480();
      }
      if (puVar10 == puVar7) {
        if (puVar10 != (ulong *)0x0) {
          puVar12 = (ulong *)((ulong)param_1 & 0xffffffffffffff8);
          *(ulong **)(puVar5 + -0x68) = puVar12;
          puVar7 = puVar12;
          if (((ulong)param_1 & 0x8000000000000000) != 0) {
            puVar7 = param_1;
          }
          puVar12 = puVar12 + 4;
          if ((ulong)param_1 >> 0x3e != 0) {
            puVar12 = puVar7;
          }
          puVar13 = (ulong *)((ulong)param_2 & 0xffffffffffffff8);
          *(ulong **)(puVar5 + -0x70) = puVar13;
          puVar7 = puVar13;
          if (((ulong)param_2 & 0x8000000000000000) != 0) {
            puVar7 = param_2;
          }
          puVar13 = puVar13 + 4;
          if ((ulong)param_2 >> 0x3e != 0) {
            puVar13 = puVar7;
          }
          if (puVar12 != puVar13) {
            if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1033a1180);
              (*pcVar4)();
            }
            FUN_1033a17c8(0,0x112e0e4a8,&PTR_PTR_1126a8d40);
            if ((((ulong)param_2 | (ulong)param_1) & 0xc000000000000001) == 0) {
              lVar16 = *(long *)(*(long *)(puVar5 + -0x68) + 0x10);
              lVar17 = *(long *)(*(long *)(puVar5 + -0x70) + 0x10);
              puVar7 = param_1 + 4;
              puVar12 = param_2 + 4;
              do {
                puVar10 = (ulong *)((long)puVar10 + -1);
                if (lVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1033a1120);
                  (*pcVar4)();
                }
                if (lVar17 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1033a1124);
                  (*pcVar4)();
                }
                uVar8 = *puVar7;
                uVar14 = *puVar12;
                func_0x000107c61174();
                func_0x000107c61174(uVar14);
                uVar15 = uVar8;
                func_0x000107c60118(uVar8,uVar14);
                uVar6 = (uint)uVar15;
                func_0x000107c61170(uVar8);
                func_0x000107c61170(uVar14);
                if ((uVar15 & 1) == 0) break;
                lVar17 = lVar17 + -1;
                lVar16 = lVar16 + -1;
                puVar7 = puVar7 + 1;
                puVar12 = puVar12 + 1;
              } while (puVar10 != (ulong *)0x0);
            }
            else {
              lVar16 = 4;
              do {
                puVar10 = (ulong *)((long)puVar10 + -1);
                uVar15 = lVar16 - 4;
                if (((ulong)param_1 & 0xc000000000000001) == 0) {
                  if (*(long *)(*(long *)(puVar5 + -0x68) + 0x10) <= (long)uVar15) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1033a1128);
                    (*pcVar4)();
                  }
                  uVar8 = param_1[lVar16];
                  func_0x000107c61174();
                  if (((ulong)param_2 & 0xc000000000000001) == 0) goto LAB_1033a1048;
LAB_1033a1018:
                  func_0x000101c6fbd8(uVar15,param_2);
                }
                else {
                  uVar8 = uVar15;
                  func_0x000101c6fbd8(uVar15,param_1);
                  if (((ulong)param_2 & 0xc000000000000001) != 0) goto LAB_1033a1018;
LAB_1033a1048:
                  if (*(long *)(*(long *)(puVar5 + -0x70) + 0x10) <= (long)uVar15) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1033a112c);
                    (*pcVar4)();
                  }
                  uVar15 = param_2[lVar16];
                  func_0x000107c61174(uVar15);
                }
                uVar14 = uVar8;
                func_0x000107c60118(uVar8,uVar15);
                uVar6 = (uint)uVar14;
                func_0x000107c61170(uVar8);
                func_0x000107c61170(uVar15);
              } while (((uVar14 & 1) != 0) && (lVar16 = lVar16 + 1, puVar10 != (ulong *)0x0));
            }
            goto LAB_1033a1158;
          }
        }
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
      }
LAB_1033a1158:
      return (ulong *)(ulong)(uVar6 & 1);
    }
    break;
  case (ulong *)0x1:
    if (param_6 == '\x01') {
      in_ZR = param_1 == param_4;
      goto code_r0x0001033a1310;
    }
    break;
  case (ulong *)0x2:
    if (param_6 == '\x02') goto code_r0x0001033a1334;
    break;
  case (ulong *)0x3:
    if (param_6 != '\x03') break;
    if (param_1 != (ulong *)0x0) {
      if (param_4 != (ulong *)0x0) {
        FUN_1033a17c8(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
        func_0x000107c61174(param_4);
        unaff_x19 = param_1;
        unaff_x22 = param_4;
        unaff_x23 = param_2;
        unaff_x24 = param_5;
        goto code_r0x0001033a12b4;
      }
      break;
    }
    if (param_4 != (ulong *)0x0) break;
    goto code_r0x0001033a13b8;
  case (ulong *)0x4:
  case (ulong *)0x5e:
  case (ulong *)0x66:
    if (param_6 == '\x04') {
      param_2 = (ulong *)0x112d36000;
      goto code_r0x0001033a11e0;
    }
    break;
  case (ulong *)0x5:
    if (param_6 == '\x05') goto code_r0x0001033a1334;
    break;
  case (ulong *)0x6:
    in_ZR = param_6 == '\x06';
  case (ulong *)0x16:
    if ((bool)in_ZR) goto code_r0x0001033a1334;
    break;
  case (ulong *)0x7:
  case (ulong *)0x36:
  case (ulong *)0x47:
  case (ulong *)0x96:
  case (ulong *)0xa7:
  case (ulong *)0xab:
  case (ulong *)0xc6:
  case (ulong *)0xd7:
  case (ulong *)0xe6:
  case (ulong *)0xf7:
    if (param_6 != '\a') goto code_r0x0001033a12fc;
  case (ulong *)0x37:
  case (ulong *)0x3e:
  case (ulong *)0x40:
  case (ulong *)0x48:
  case (ulong *)0x97:
  case (ulong *)0x9e:
  case (ulong *)0xa0:
  case (ulong *)0xa8:
  case (ulong *)0xc7:
  case (ulong *)0xce:
  case (ulong *)0xd0:
  case (ulong *)0xd8:
  case (ulong *)0xdd:
  case (ulong *)0xe7:
  case (ulong *)0xee:
  case (ulong *)0xf0:
  case (ulong *)0xf8:
code_r0x0001033a1334:
    if (param_1 == param_4) {
code_r0x0001033a133c:
      if (param_2 == param_5) {
code_r0x0001033a1344:
        uVar6 = 1;
        goto code_r0x0001033a1434;
      }
    }
code_r0x0001033a134c:
    param_3 = param_4;
code_r0x0001033a1350:
    param_4 = param_5;
code_r0x0001033a1354:
    param_5 = (ulong *)0x0;
code_r0x0001033a135c:
code_r0x0001033a1364:
code_r0x0001033a1368:
    puVar7 = param_1;
    puVar10 = param_2;
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(puVar7,puVar10,param_3,param_4,param_5);
    return puVar7;
  case (ulong *)0x8:
  case (ulong *)0x54:
  case (ulong *)0xff:
    if (param_6 == '\b') goto code_r0x0001033a1378;
    break;
  case (ulong *)0x9:
    uVar15 = (long)param_2 + (ulong)(param_1 >= (ulong *)0x3);
    if ((long)-uVar15 < 0 != SCARRY8(~uVar15,(ulong)(param_1 < (ulong *)0x3)))
    goto code_r0x0001033a1384;
    if (param_1 == (ulong *)0x0 && param_2 == (ulong *)0x0) {
      if ((param_6 == '\t') && (param_5 == (ulong *)0x0 && param_4 == (ulong *)0x0))
      goto code_r0x0001033a1344;
      break;
    }
    if (param_1 != (ulong *)0x1 || param_2 != (ulong *)0x0) {
      if (param_6 == '\t') {
        if (param_4 != (ulong *)0x2) goto code_r0x0001033a1410;
        goto code_r0x0001033a1428;
      }
      break;
    }
    if (param_6 != '\t') break;
    if (param_4 != (ulong *)0x1) goto code_r0x0001033a1250;
    goto code_r0x0001033a1428;
  case (ulong *)0xe:
code_r0x0001033a1310:
    uVar6 = (uint)in_ZR;
    goto code_r0x0001033a1434;
  case (ulong *)0x1e:
    goto code_r0x0001033a1350;
  case (ulong *)0x26:
  case (ulong *)0xb6:
code_r0x0001033a13f0:
    if (param_4 == (ulong *)0x3) goto code_r0x0001033a1428;
    break;
  case (ulong *)0x2e:
code_r0x0001033a1410:
    break;
  case (ulong *)0x38:
  case (ulong *)0x39:
  case (ulong *)0x4d:
  case (ulong *)0x51:
  case (ulong *)0x52:
  case (ulong *)0x98:
  case (ulong *)0x99:
  case (ulong *)0xae:
  case (ulong *)0xc8:
  case (ulong *)0xc9:
  case (ulong *)0xe8:
  case (ulong *)0xe9:
    goto code_r0x0001033a137c;
  case (ulong *)0x3a:
  case (ulong *)0x9a:
  case (ulong *)0xca:
  case (ulong *)0xea:
    goto code_r0x0001033a135c;
  case (ulong *)0x3b:
  case (ulong *)0x42:
  case (ulong *)0x44:
  case (ulong *)0x4a:
  case (ulong *)0x50:
  case (ulong *)0x9b:
  case (ulong *)0xa2:
  case (ulong *)0xa4:
  case (ulong *)0xaa:
  case (ulong *)0xad:
  case (ulong *)0xaf:
  case (ulong *)0xb2:
  case (ulong *)0xcb:
  case (ulong *)0xd2:
  case (ulong *)0xd4:
  case (ulong *)0xda:
  case (ulong *)0xdf:
  case (ulong *)0xeb:
  case (ulong *)0xf2:
  case (ulong *)0xf4:
  case (ulong *)0xfa:
    goto code_r0x0001033a1344;
  case (ulong *)0x3c:
  case (ulong *)0x9c:
  case (ulong *)0xcc:
  case (ulong *)0xec:
code_r0x0001033a1394:
    if (puVar10 == (ulong *)0x0 && param_2 == (ulong *)0x0) {
      if (param_6 == '\t') {
        in_ZR = param_4 == (ulong *)0x4;
        goto code_r0x0001033a13ac;
      }
    }
    else if ((param_6 == '\t') && (param_4 == (ulong *)0x5)) goto code_r0x0001033a1428;
    break;
  case (ulong *)0x3d:
  case (ulong *)0x9d:
  case (ulong *)0xcd:
  case (ulong *)0xed:
    goto code_r0x0001033a12e4;
  case (ulong *)0x3f:
  case (ulong *)0x45:
  case (ulong *)0x4f:
  case (ulong *)0x9f:
  case (ulong *)0xa5:
  case (ulong *)0xb0:
  case (ulong *)0xcf:
  case (ulong *)0xd5:
  case (ulong *)0xef:
  case (ulong *)0xf5:
    goto code_r0x0001033a1368;
  case (ulong *)0x41:
  case (ulong *)0x49:
  case (ulong *)0x55:
  case (ulong *)0xa1:
  case (ulong *)0xa9:
  case (ulong *)0xd1:
  case (ulong *)0xd9:
  case (ulong *)0xf1:
  case (ulong *)0xf9:
    goto code_r0x0001033a134c;
  case (ulong *)0x43:
  case (ulong *)0xa3:
  case (ulong *)0xd3:
  case (ulong *)0xf3:
    goto code_r0x0001033a1364;
  case (ulong *)0x46:
  case (ulong *)0xa6:
  case (ulong *)0xb1:
  case (ulong *)0xd6:
  case (ulong *)0xdc:
  case (ulong *)0xde:
  case (ulong *)0xf6:
  case (ulong *)0xfd:
    goto code_r0x0001033a1380;
  case (ulong *)0x4b:
    goto code_r0x0001033a12b8;
  case (ulong *)0x4c:
code_r0x0001033a1384:
    if (param_1 != (ulong *)0x3 || param_2 != (ulong *)0x0) {
      puVar10 = (ulong *)((ulong)param_1 ^ 4);
      goto code_r0x0001033a1394;
    }
    if (param_6 == '\t') goto code_r0x0001033a13f0;
    break;
  case (ulong *)0x4e:
  case (ulong *)0x56:
  case (ulong *)0xfe:
    goto code_r0x0001033a1354;
  case (ulong *)0x53:
    goto code_r0x0001033a12e0;
  case (ulong *)0x57:
  case (ulong *)0xfc:
    goto code_r0x0001033a133c;
  case (ulong *)0x6e:
  case (ulong *)0x86:
    goto code_r0x0001033a11cc;
  case (ulong *)0x72:
  case (ulong *)0x73:
  case (ulong *)0x74:
  case (ulong *)0x8a:
  case (ulong *)0x8b:
  case (ulong *)0x8c:
    uVar11 = param_1[1];
    bVar1 = (byte)param_1[2];
    uVar15 = *param_2;
    uVar8 = param_2[1];
    cVar2 = (char)param_2[2];
    uVar14 = (ulong)*(uint *)((long)param_1 + 1) << 8 | (ulong)*(uint3 *)((long)param_1 + 5) << 0x28
             | (ulong)*(byte *)((long)puVar10 + 0x10dbbc3aa) * 4 + 0x1033a11b0;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (cVar2 != '\0') {
          return (ulong *)0x0;
        }
        uVar9 = 0;
        FUN_1033a17c8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(uVar14,uVar15,uVar9);
      }
      else {
        if (cVar2 != '\x01') {
          return (ulong *)0x0;
        }
        if (uVar14 == uVar15 && uVar11 == uVar8) goto LAB_1033a1704;
        func_0x000107c605b8(uVar14,uVar11,uVar15,uVar8,0);
      }
      if ((uVar14 & 1) == 0) {
        return (ulong *)0x0;
      }
    }
    else {
      if (bVar1 == 2) {
        if (cVar2 != '\x02') {
          return (ulong *)0x0;
        }
        uVar8 = uVar15 & 1;
      }
      else {
        uVar3 = uVar11 + (uVar14 >= 2);
        if ((long)-uVar3 < 0 == SCARRY8(~uVar3,(ulong)(uVar14 < 2))) {
          if (uVar14 == 0 && uVar11 == 0) {
            if (cVar2 != '\x03') {
              return (ulong *)0x0;
            }
            if (uVar8 != 0 || uVar15 != 0) {
              return (ulong *)0x0;
            }
            goto LAB_1033a1704;
          }
          if (cVar2 != '\x03') {
            return (ulong *)0x0;
          }
          if (uVar15 != 1) {
            return (ulong *)0x0;
          }
        }
        else if (uVar14 == 2 && uVar11 == 0) {
          if (cVar2 != '\x03') {
            return (ulong *)0x0;
          }
          if (uVar15 != 2) {
            return (ulong *)0x0;
          }
        }
        else {
          if (cVar2 != '\x03') {
            return (ulong *)0x0;
          }
          if (uVar15 != 3) {
            return (ulong *)0x0;
          }
        }
      }
      if (uVar8 != 0) {
        return (ulong *)0x0;
      }
    }
LAB_1033a1704:
    if (*(char *)((long)param_1 + 0x11) == *(char *)((long)param_2 + 0x11)) {
      puVar10 = (ulong *)param_1[4];
      param_4 = (ulong *)param_2[4];
      if (puVar10 == (ulong *)0x1) {
        if (param_4 != (ulong *)0x1) {
          return (ulong *)0x0;
        }
      }
      else if (puVar10 == (ulong *)0x0) {
        if (param_4 != (ulong *)0x0) {
          return (ulong *)0x0;
        }
      }
      else {
        if (param_4 < (ulong *)0x2) {
          return (ulong *)0x0;
        }
        puVar7 = (ulong *)param_1[3];
        param_3 = (ulong *)param_2[3];
        if ((puVar7 != param_3) || (puVar10 != param_4)) {
          param_5 = (ulong *)0x0;
          goto code_r0x000107c605b8;
        }
      }
      uVar15 = param_1[5];
      FUN_1033a0f2c(uVar15,param_2[5]);
      if ((uVar15 & 1) != 0) {
        return (ulong *)(ulong)(param_1[6] == param_2[6]);
      }
    }
    return (ulong *)0x0;
  case (ulong *)0x75:
  case (ulong *)0x8d:
code_r0x0001033a13ac:
    if ((bool)in_ZR) goto code_r0x0001033a1428;
    break;
  case (ulong *)0x76:
  case (ulong *)0x7e:
code_r0x0001033a1250:
    break;
  case (ulong *)0x88:
    goto code_r0x0001033a11bc;
  case (ulong *)0xac:
  case (ulong *)0xb3:
code_r0x0001033a1378:
    puVar10 = (ulong *)(ulong)((uint)param_4 ^ (uint)param_1);
code_r0x0001033a137c:
    puVar10 = (ulong *)(ulong)((uint)puVar10 ^ 1);
code_r0x0001033a1380:
    uVar6 = (uint)puVar10;
    goto code_r0x0001033a1434;
  case (ulong *)0xb7:
    uVar15 = (long)param_2 + (ulong)(param_1 > puVar10);
    if ((long)-uVar15 < 0 == SCARRY8(~uVar15,(ulong)(param_1 <= puVar10))) {
      if (param_1 == (ulong *)0x0 && param_2 == (ulong *)0x0) {
        if (param_6 != '\x03') {
          return (ulong *)0x0;
        }
        if (param_5 != (ulong *)0x0 || param_4 != (ulong *)0x0) {
          return (ulong *)0x0;
        }
        return (ulong *)0x1;
      }
      if (param_6 != '\x03') {
        return (ulong *)0x0;
      }
      if (param_4 != (ulong *)0x1) {
        return (ulong *)0x0;
      }
    }
    else if (param_1 == (ulong *)0x2 && param_2 == (ulong *)0x0) {
      if (param_6 != '\x03') {
        return (ulong *)0x0;
      }
      if (param_4 != (ulong *)0x2) {
        return (ulong *)0x0;
      }
    }
    else {
      if (param_6 != '\x03') {
        return (ulong *)0x0;
      }
      if (param_4 != (ulong *)0x3) {
        return (ulong *)0x0;
      }
    }
    if (param_5 != (ulong *)0x0) {
      return (ulong *)0x0;
    }
    return (ulong *)0x1;
  case (ulong *)0xb8:
    return (ulong *)(ulong)(((uint)puVar10 ^ 1) & 1);
  case (ulong *)0xba:
code_r0x0001033a11e0:
    uVar9 = 0;
    FUN_1033a17c8(0,param_2 + 0x106,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(param_1,param_4,uVar9);
    uVar6 = (uint)param_1;
    goto code_r0x0001033a1434;
  case (ulong *)0xdb:
code_r0x0001033a12fc:
    break;
  case (ulong *)0xfb:
code_r0x0001033a12b4:
    param_1 = unaff_x19;
code_r0x0001033a12b8:
    func_0x000107c61174();
    unaff_x20 = param_1;
    func_0x000107c60118();
    func_0x000107c61170(param_1);
    func_0x000107c61170(unaff_x22);
code_r0x0001033a12e0:
    param_2 = unaff_x23;
code_r0x0001033a12e4:
    param_5 = unaff_x24;
    if (((ulong)unaff_x20 & 1) == 0) break;
code_r0x0001033a13b8:
    if (param_2 != (ulong *)0x0) {
      if ((param_5 != (ulong *)0x0) && (param_2 == param_5)) goto code_r0x0001033a1344;
      break;
    }
code_r0x0001033a1428:
    if (param_5 != (ulong *)0x0) break;
    goto code_r0x0001033a1344;
  }
  uVar6 = 0;
code_r0x0001033a1434:
  return (ulong *)(ulong)(uVar6 & 1);
}



/* Entry: 1033a1448; end: 1033a1597;  */

ulong FUN_1033a1448(ulong param_1,long param_2,byte param_3,ulong param_4,long param_5,char param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      if (param_6 == '\0') {
        uVar2 = 0;
        FUN_1033a17c8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(param_1,param_4,uVar2);
        return (ulong)((uint)param_1 & 1);
      }
    }
    else if (param_6 == '\x01') {
      if ((param_1 == param_4) && (param_2 == param_5)) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(param_1,param_2,param_4,param_5,0);
      return param_1;
    }
  }
  else {
    if (param_3 == 2) {
      if (param_6 != '\x02') {
        return 0;
      }
      return (ulong)(((uint)param_4 ^ (uint)param_1 ^ 1) & 1);
    }
    uVar1 = param_2 + (ulong)(param_1 >= 2);
    if ((long)-uVar1 < 0 == SCARRY8(~uVar1,(ulong)(param_1 < 2))) {
      if (param_1 == 0 && param_2 == 0) {
        if (param_6 != '\x03') {
          return 0;
        }
        if (param_5 != 0 || param_4 != 0) {
          return 0;
        }
        return 1;
      }
      if (param_6 != '\x03') {
        return 0;
      }
      if (param_4 != 1) {
        return 0;
      }
    }
    else if (param_1 == 2 && param_2 == 0) {
      if (param_6 != '\x03') {
        return 0;
      }
      if (param_4 != 2) {
        return 0;
      }
    }
    else {
      if (param_6 != '\x03') {
        return 0;
      }
      if (param_4 != 3) {
        return 0;
      }
    }
    if (param_5 == 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1033a1598; end: 1033a17c7;  */

bool FUN_1033a1598(byte *param_1,ulong *param_2)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = *(ulong *)(param_1 + 8);
  bVar1 = param_1[0x10];
  uVar5 = *param_2;
  uVar7 = param_2[1];
  cVar2 = (char)param_2[2];
  uVar8 = (ulong)*(uint *)(param_1 + 1) << 8 | (ulong)*(uint3 *)(param_1 + 5) << 0x28 |
          (ulong)*param_1;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (cVar2 != '\0') {
        return false;
      }
      uVar4 = 0;
      FUN_1033a17c8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c60118(uVar8,uVar5,uVar4);
    }
    else {
      if (cVar2 != '\x01') {
        return false;
      }
      if (uVar8 == uVar5 && uVar6 == uVar7) goto LAB_1033a1704;
      func_0x000107c605b8(uVar8,uVar6,uVar5,uVar7,0);
    }
    if ((uVar8 & 1) == 0) {
      return false;
    }
  }
  else if (bVar1 == 2) {
    if (cVar2 != '\x02') {
      return false;
    }
    if ((((uint)*param_1 ^ (uint)uVar5) & 1) != 0) {
      return false;
    }
  }
  else {
    uVar3 = uVar6 + (uVar8 >= 2);
    if ((long)-uVar3 < 0 == SCARRY8(~uVar3,(ulong)(uVar8 < 2))) {
      if (uVar8 == 0 && uVar6 == 0) {
        if (cVar2 != '\x03') {
          return false;
        }
        if (uVar7 != 0 || uVar5 != 0) {
          return false;
        }
        goto LAB_1033a1704;
      }
      if (cVar2 != '\x03') {
        return false;
      }
      if (uVar5 != 1) {
        return false;
      }
    }
    else if (uVar8 == 2 && uVar6 == 0) {
      if (cVar2 != '\x03') {
        return false;
      }
      if (uVar5 != 2) {
        return false;
      }
    }
    else {
      if (cVar2 != '\x03') {
        return false;
      }
      if (uVar5 != 3) {
        return false;
      }
    }
    if (uVar7 != 0) {
      return false;
    }
  }
LAB_1033a1704:
  if (param_1[0x11] != *(byte *)((long)param_2 + 0x11)) {
    return false;
  }
  uVar7 = *(ulong *)(param_1 + 0x20);
  uVar5 = param_2[4];
  if (uVar7 == 1) {
    if (uVar5 != 1) {
      return false;
    }
  }
  else if (uVar7 == 0) {
    if (uVar5 != 0) {
      return false;
    }
  }
  else {
    if (uVar5 < 2) {
      return false;
    }
    uVar8 = *(ulong *)(param_1 + 0x18);
    if (((uVar8 != param_2[3]) || (uVar7 != uVar5)) &&
       (func_0x000107c605b8(uVar8,uVar7,param_2[3],uVar5,0), (uVar8 & 1) == 0)) {
      return false;
    }
  }
  uVar5 = *(ulong *)(param_1 + 0x28);
  FUN_1033a0f2c(uVar5,param_2[5]);
  if ((uVar5 & 1) == 0) {
    return false;
  }
  return *(ulong *)(param_1 + 0x30) == param_2[6];
}



/* Entry: 1033a17c8; end: 1033a1807;  */

void FUN_1033a17c8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1033a1808; end: 1033a1827;  */

void FUN_1033a1808(long param_1,long param_2)

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



/* Entry: 1033a1828; end: 1033a1847;  */

void FUN_1033a1828(void)

{
  func_0x0001033a04b8(2);
  return;
}



/* Entry: 1033a1848; end: 1033a1867;  */

void FUN_1033a1848(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1033a1868; end: 1033a186f;  */

void FUN_1033a1868(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  puVar1 = &uStack_50;
  func_0x0001000285a8(0x112f60400,&UNK_10dbbc108);
  uStack_48 = 0;
  uStack_50 = 3;
  uStack_40 = 9;
  func_0x000100854cb0(&uStack_50);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
  func_0x000100471e0c(uVar2,1);
  func_0x000107c61574(puVar1);
  func_0x000103dbf524(uVar2);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 1033a1870; end: 1033a188f;  */

void FUN_1033a1870(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1033a1890; end: 1033a18af;  */

void FUN_1033a1890(void)

{
  func_0x0001033a04b8(4);
  return;
}



/* Entry: 1033a18b0; end: 1033a18b7;  */

void FUN_1033a18b0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x60);
    func_0x000107c61174(uVar3);
    uVar2 = uVar3;
    func_0x000107c4ffe8();
    func_0x000107c61180();
    func_0x000107c61574(lVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 1033a18b8; end: 1033a1973;  */

bool FUN_1033a18b8(ulong param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  
  if (param_1 == 0) {
    if (param_3 == 0) {
LAB_1033a193c:
      if (param_2 == 0) {
        return param_4 == 0;
      }
      return param_4 != 0 && param_2 == param_4;
    }
  }
  else if (param_3 != 0) {
    FUN_1033a17c8(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
    func_0x000107c61174(param_3);
    func_0x000107c61174();
    uVar1 = param_1;
    func_0x000107c60118();
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    if ((uVar1 & 1) != 0) goto LAB_1033a193c;
  }
  return false;
}



/* Entry: 1033a1974; end: 1033a1c2b;  */

/* WARNING: Possible PIC construction at 0x0001033a1a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a1b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a1b24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a1c10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033a1b14) */
/* WARNING: Removing unreachable block (ram,0x0001033a1a88) */
/* WARNING: Removing unreachable block (ram,0x0001033a1c14) */

void FUN_1033a1974(long param_1,long param_2,byte param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar1 = uVar4;
  func_0x000107c614f0(uVar4);
  func_0x000100bc7fa4();
  if (param_3 < 6) {
    if (param_3 == 3) {
      func_0x000100bc7fa4(uVar1);
      puVar3 = PTR_PTR_1126a5e20;
      func_0x000107c610f8(PTR_PTR_1126a5e20);
      func_0x000107c4809c();
      func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
    if (param_3 != 5) {
      return;
    }
    func_0x000100bc7fa4(uVar1);
    func_0x0001000a8868(unaff_x20 + 0x68,*(undefined8 *)(unaff_x20 + 0x80));
    ppuVar2 = (undefined **)&UNK_11064a0e8;
    func_0x000107c613fc(&UNK_11064a0e8,0x18,7);
    func_0x000107c61644((undefined *)((long)ppuVar2 + 0x10));
    puVar3 = &UNK_11064a2f0;
    func_0x000107c613fc(&UNK_11064a2f0,0x28,7);
    *(undefined ***)(puVar3 + 0x10) = ppuVar2;
    *(long *)(puVar3 + 0x18) = param_1;
    *(long *)(puVar3 + 0x20) = param_2;
    func_0x000107c6157c(ppuVar2);
    FUN_10339e414(param_1,param_2,5);
    uVar1 = 0;
    FUN_10339743c(0);
    FUN_1033972e4(param_1,param_2,FUN_1033a1c2c,puVar3,uVar1,&PTR_DAT_110649b30);
  }
  else {
    if (param_3 != 6) {
      if (param_3 != 9) {
        return;
      }
      if (param_1 == 0 && param_2 == 0) {
        puVar3 = &UNK_11064a0e8;
        func_0x000107c613fc(&UNK_11064a0e8,0x18,7);
        func_0x000107c61644(puVar3 + 0x10);
        uStack_60 = 0x1033a1c38;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        pcStack_70 = FUN_10339f548;
        puStack_68 = &UNK_11064a308;
        puStack_58 = puVar3;
        func_0x000107c60bc4(&puStack_80);
        ppuVar2 = (undefined **)puStack_58;
        goto code_r0x000107c61574;
      }
      if (param_1 != 2 || param_2 != 0) {
        return;
      }
    }
    func_0x0001000285a8(0x112f60400,&UNK_10dbbc108);
    puStack_80 = (undefined *)0x0;
    uStack_78 = 0;
    pcStack_70 = (code *)CONCAT71(pcStack_70._1_7_,9);
    func_0x000100854cb0(&puStack_80);
    func_0x000100471e0c(uVar4,1);
  }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(ppuVar2);
  return;
}



/* Entry: 1033a1c2c; end: 1033a1c47;  */

void FUN_1033a1c2c(long param_1,undefined1 *param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  long lStack_70;
  undefined1 *puStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  puVar7 = *(undefined1 **)(unaff_x20 + 0x20);
  plVar3 = &lStack_70;
  plVar4 = &lStack_70;
  puVar6 = auStack_58;
  func_0x000107c61428(lVar2 + 0x10,puVar6,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    return;
  }
  if (param_2 == (undefined1 *)0x0) {
    lVar5 = lVar2;
    func_0x000108b9aaec();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10339f718);
      (*pcVar1)();
    }
    param_1 = lVar5;
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
LAB_10339f680:
    func_0x0001000285a8(0x112f60400,&UNK_10dbbc108);
    uStack_60 = 7;
    lStack_70 = param_1;
    puStack_68 = puVar6;
    func_0x000107c61434(param_2);
    func_0x000100854cb0(&lStack_70);
    lVar5 = *(long *)(lVar2 + 0x90);
    func_0x000100471e0c(lVar5,1);
    func_0x000107c61574(plVar4);
    func_0x000103dbf524(lVar5);
    func_0x000107c6142c(puVar6);
  }
  else {
    if (param_2 != (undefined1 *)0x1) {
      lVar5 = lVar2;
      puVar6 = param_2;
      if (param_2 == (undefined1 *)0x2) goto LAB_10339f6f4;
      goto LAB_10339f680;
    }
    func_0x0001000285a8(0x112f60400,&UNK_10dbbc108);
    uStack_60 = 6;
    lStack_70 = lVar5;
    puStack_68 = puVar7;
    func_0x000100854cb0(&lStack_70);
    lVar5 = *(long *)(lVar2 + 0x90);
    func_0x000100471e0c(lVar5,1);
    func_0x000107c61574(plVar3);
    func_0x000103dbf524(lVar5);
  }
  func_0x000107c61574(lVar2);
LAB_10339f6f4:
  func_0x000107c61574(lVar5);
  return;
}



/* Entry: 1033a1c48; end: 1033a1c67;  */

void FUN_1033a1c48(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1033a1c68; end: 1033a1c6f;  */

void FUN_1033a1c68(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  lVar5 = param_2;
  if (param_2 == 0) {
    func_0x000106b24678();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10339f534);
      (*pcVar1)();
    }
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    param_1 = lVar2;
  }
  func_0x0001000285a8(0x112f60400,&UNK_10dbbc108);
  uStack_48 = 2;
  lStack_58 = param_1;
  lStack_50 = lVar5;
  func_0x000107c61434(param_2);
  plVar3 = &lStack_58;
  func_0x000100854cb0(plVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x90);
  func_0x000100471e0c(uVar4,1);
  func_0x000107c61574(plVar3);
  func_0x000103dbf524(uVar4);
  func_0x000107c6142c(lVar5);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 1033a1c70; end: 1033a1c8f;  */

void FUN_1033a1c70(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1033a1c90; end: 1033a1cbb;  */

void FUN_1033a1c90(undefined8 param_1,ulong param_2)

{
  if (param_2 < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 1033a1cbc; end: 1033a1e1f;  */

undefined8 * FUN_1033a1cbc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    func_0x000107c61434(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 1033a1e20; end: 1033a208f;  */

int FUN_1033a1e20(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 1033a2090; end: 1033a20d7;  */

undefined8 * FUN_1033a2090(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  (*param_4)(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 1033a20d8; end: 1033a20eb;  */

undefined8 * FUN_1033a20d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_10339ffa4(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_1033a0004(uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 1033a20ec; end: 1033a214b;  */

undefined8 *
FUN_1033a20ec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4,code *param_5
             )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  (*param_4)(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  (*param_5)(uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 1033a214c; end: 1033a2157;  */

undefined8 * FUN_1033a214c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_1033a0004(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1033a2158; end: 1033a219b;  */

undefined8 * FUN_1033a2158(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  (*param_4)(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1033a219c; end: 1033a226b;  */

int FUN_1033a219c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1033a226c; end: 1033a2293;  */

void FUN_1033a226c(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1[1]);
  return;
}



/* Entry: 1033a2294; end: 1033a22ef;  */

undefined8 * FUN_1033a2294(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 1033a22f0; end: 1033a232b;  */

undefined8 * FUN_1033a22f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 1033a232c; end: 1033a23eb;  */

int FUN_1033a232c(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1033a23ec; end: 1033a242b;  */

void FUN_1033a23ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f60810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbbc5a4;
  func_0x000107c61520(&UNK_10dbbc5a4,&UNK_11064a508);
  puRam0000000112f60810 = puVar1;
  return;
}



/* Entry: 1033a242c; end: 1033a24b7;  */

undefined8 * FUN_1033a242c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  func_0x000107c615f0(uVar1);
  return param_1;
}



/* Entry: 1033a24b8; end: 1033a26ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033a24b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f60818) = 0;
  lVar1 = unaff_x20 + _DAT_112f60820;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112f60828;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112f60830;
  puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112f60838;
  FUN_1033a4208();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c6142c(param_3);
  }
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_initWithStyle_reuseIdentifier__1125f1528,
                      param_1,param_2);
  func_0x000107c61170(param_2);
  func_0x000107c61174();
  func_0x000107c58e44();
  func_0x000107c58f58(0,0,0,0x7fefffffffffffff,puVar4);
  puVar6 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar5 = puVar6;
  func_0x000107c4acb0(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  puVar6 = puVar5;
  if (iVar2 != 0) {
    puVar6 = puVar4;
    func_0x000107c40510(puVar4);
    func_0x000107c61180();
    FUN_1033a2700();
    func_0x000107c61170(puVar6);
    puVar6 = *(undefined1 **)(puVar4 + _DAT_112f60828);
    func_0x000107c5ce8c(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61174(puVar4);
  puVar5 = puVar4;
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x0001033a2984();
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x0001033a2c04(puVar5,puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  return puVar4;
}



/* Entry: 1033a2700; end: 1033a2e9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a2700(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f60828);
  func_0x000107c3d89c(param_1,param_2,uVar7);
  func_0x000107c5a050(uVar7);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar2 = 0x112d360b8;
  FUN_1033a4228(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 7;
  *(undefined8 *)(lVar2 + 0x10) = 3;
  uVar5 = uVar7;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c4acb0(param_1);
  func_0x000107c61180();
  uVar4 = uVar5;
  func_0x000107c40284(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(lVar2 + 0x20) = uVar4;
  uVar5 = uVar7;
  func_0x000107c3f764();
  func_0x000107c61180();
  func_0x000107c3f764(param_1);
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_1);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  uVar5 = uVar7;
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x000107c40290(0x4045000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  uVar5 = 0;
  func_0x0001033a42c4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar6 = lVar2;
  func_0x000107c5fc48(lVar2,uVar5);
  func_0x000107c61574(lVar2);
  func_0x000107c3d048(puVar1);
  func_0x000107c61170(lVar6);
  if (lRam0000000112f608b8 != -1) {
    func_0x000107c61568(0x112f608b8,FUN_1033a30f4);
  }
  func_0x000107c59e10(uVar7);
  uVar5 = 0x69726f682e79656b;
  func_0x000107c5fadc(0x69726f682e79656b,0xee006c61746e6f7a);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5c604();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c55258(uVar7);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c182230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_setContentMode__11263e2a8,2);
  return;
}



/* Entry: 1033a2e9c; end: 1033a2ee3; -[_TtC26SCPasskeyManagementFeature20PasskeyTableViewCell initWithStyle:reuseIdentifier:] */

void FUN_1033a2e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  FUN_1033a24b8(param_3,param_4,param_2);
  return;
}



/* Entry: 1033a2ee4; end: 1033a2fff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033a2ee4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112f60818;
  *(undefined8 *)(unaff_x20 + _DAT_112f60818) = 0;
  lVar1 = unaff_x20 + _DAT_112f60820;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar3 = _DAT_112f60828;
  puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar6;
  lVar4 = _DAT_112f60830;
  puVar6 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar4) = puVar6;
  lVar5 = _DAT_112f60838;
  FUN_1033a4208();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + lVar5) = puVar6;
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar2));
  FUN_1033a42a0(lVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar3));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar4));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar5));
  func_0x000107c61464();
  return 0;
}



/* Entry: 1033a3000; end: 1033a302b; -[_TtC26SCPasskeyManagementFeature20PasskeyTableViewCell initWithCoder:] */

undefined8 FUN_1033a3000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1033a2ee4();
  return 0;
}



/* Entry: 1033a302c; end: 1033a30cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a302c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f60818);
  if (lVar2 != 0) {
    lVar1 = unaff_x20 + _DAT_112f60820;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_10339df48(0);
      func_0x000107c61174(lVar2);
      FUN_10339e040();
      func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 1033a30cc; end: 1033a30f3; -[_TtC26SCPasskeyManagementFeature20PasskeyTableViewCell attemptsToDeletePasskey] */

void FUN_1033a30cc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1033a302c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033a30f4; end: 1033a318f;  */

void FUN_1033a30f4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  puRam0000000113807230 = puVar1;
  return;
}



/* Entry: 1033a3190; end: 1033a31f7; -[_TtC26SCPasskeyManagementFeature20PasskeyTableViewCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033a31ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a31cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033a31b0) */
/* WARNING: Removing unreachable block (ram,0x0001033a31d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a3190(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f60818));
  return;
}



/* Entry: 1033a31f8; end: 1033a3217;  */

void FUN_1033a31f8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d4fe0);
  return;
}



/* Entry: 1033a3218; end: 1033a330f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033a3218(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112f60880;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112f60880);
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    func_0x000107c61168();
    func_0x000107c43b9c();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033a3294);
      (*pcVar2)();
    }
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    puVar3 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar3);
  return puVar4;
}



/* Entry: 1033a3310; end: 1033a39e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1033a3310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  
  lVar10 = _DAT_112f60868;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar10) = puVar3;
  lVar10 = _DAT_112f60870;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar10) = puVar3;
  lVar10 = _DAT_112f60878;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar10) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f60880) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f60888) = 0;
  FUN_1033a4208();
  puVar4 = &stack0xffffffffffffff70;
  func_0x000107c61154(param_1,param_2,param_3,param_4,puVar4,PTR_s_initWithFrame__1125e2948);
  lVar10 = _DAT_112f60868;
  uVar11 = *(undefined8 *)(puVar4 + _DAT_112f60868);
  puVar5 = puVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3d89c();
  func_0x000107c5a050(uVar11);
  func_0x000107c61170(uVar11);
  lVar1 = lRam0000000112f608b8;
  uVar11 = *(undefined8 *)(puVar4 + lVar10);
  func_0x000107c61174(uVar11);
  if (lVar1 != -1) {
    func_0x000107c61568(0x112f608b8,FUN_1033a30f4);
  }
  func_0x000107c59c78();
  func_0x000107c61170(uVar11);
  func_0x000107c56ba8(*(undefined8 *)(puVar4 + lVar10));
  func_0x000107c5a100(*(undefined8 *)(puVar4 + lVar10));
  lVar1 = _DAT_112f60870;
  uVar11 = *(undefined8 *)(puVar5 + _DAT_112f60870);
  func_0x000107c61174(uVar11);
  func_0x000107c3d89c(puVar5);
  func_0x000107c5a050(uVar11);
  func_0x000107c61170(uVar11);
  lVar6 = lRam0000000112f608c0;
  uVar11 = *(undefined8 *)(puVar5 + lVar1);
  func_0x000107c61174(uVar11);
  if (lVar6 != -1) {
    func_0x000107c61568(0x112f608c0,0x1033a3128);
  }
  func_0x000107c59c78(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c56ba8(*(undefined8 *)(puVar5 + lVar1));
  func_0x000107c5a100(*(undefined8 *)(puVar5 + lVar1));
  lVar2 = _DAT_112f60878;
  uVar11 = *(undefined8 *)(puVar5 + _DAT_112f60878);
  func_0x000107c61174(uVar11);
  func_0x000107c3d89c(puVar5);
  func_0x000107c5a050(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c59c78(*(undefined8 *)(puVar5 + lVar2));
  func_0x000107c56ba8(*(undefined8 *)(puVar5 + lVar2));
  func_0x000107c5a100(*(undefined8 *)(puVar5 + lVar2));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  lVar6 = 0x112d360b8;
  FUN_1033a4228(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 0x15;
  *(undefined8 *)(lVar6 + 0x10) = 10;
  uVar7 = *(undefined8 *)(puVar4 + lVar10);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar8 = puVar5;
  func_0x000107c4acb0(puVar5);
  func_0x000107c61180();
  uVar11 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(lVar6 + 0x20) = uVar11;
  uVar7 = *(undefined8 *)(puVar4 + lVar10);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar8 = puVar5;
  func_0x000107c5ce8c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar11 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(lVar6 + 0x28) = uVar11;
  uVar7 = *(undefined8 *)(puVar4 + lVar10);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar8 = puVar5;
  func_0x000107c5cbe4(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar11 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(lVar6 + 0x30) = uVar11;
  uVar7 = *(undefined8 *)(puVar5 + lVar1);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar8 = puVar5;
  func_0x000107c4acb0(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar11 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(lVar6 + 0x38) = uVar11;
  uVar7 = *(undefined8 *)(puVar5 + lVar1);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar8 = puVar5;
  func_0x000107c5ce8c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar11 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(lVar6 + 0x40) = uVar11;
  uVar7 = *(undefined8 *)(puVar5 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(puVar4 + lVar10);
  func_0x000107c3ec1c(uVar9);
  func_0x000107c61180();
  uVar11 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  *(undefined8 *)(lVar6 + 0x48) = uVar11;
  uVar7 = *(undefined8 *)(puVar5 + lVar2);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar4 = puVar5;
  func_0x000107c4acb0(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar11 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar4);
  *(undefined8 *)(lVar6 + 0x50) = uVar11;
  uVar7 = *(undefined8 *)(puVar5 + lVar2);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar4 = puVar5;
  func_0x000107c5ce8c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar11 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar4);
  *(undefined8 *)(lVar6 + 0x58) = uVar11;
  uVar7 = *(undefined8 *)(puVar5 + lVar2);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(puVar5 + lVar1);
  func_0x000107c3ec1c(uVar9);
  func_0x000107c61180();
  uVar11 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  *(undefined8 *)(lVar6 + 0x60) = uVar11;
  uVar7 = *(undefined8 *)(puVar5 + lVar2);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar4 = puVar5;
  func_0x000107c3ec1c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar11 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar4);
  *(undefined8 *)(lVar6 + 0x68) = uVar11;
  uVar11 = 0;
  func_0x0001033a42c4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar10 = lVar6;
  func_0x000107c5fc48(lVar6,uVar11);
  func_0x000107c61574(lVar6);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar10);
  return puVar5;
}



/* Entry: 1033a39e4; end: 1033a3a03; -[_TtC26SCPasskeyManagementFeature17PasskeyDetailView initWithFrame:] */

void FUN_1033a39e4(void)

{
  FUN_1033a3310();
  return;
}


