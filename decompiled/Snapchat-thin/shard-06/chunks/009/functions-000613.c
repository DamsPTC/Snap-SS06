/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104fc784c; end: 104fc7853; -[PathValidationResult operatorAtError] */

undefined1 FUN_104fc784c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104fc7854; end: 104fc785b; -[PathValidationResult setOperatorAtError:] */

void FUN_104fc7854(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 104fc785c; end: 104fc7863; -[PathValidationResult errorInLastOperation] */

undefined1 FUN_104fc785c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104fc7864; end: 104fc786b; -[PathValidationResult setErrorInLastOperation:] */

void FUN_104fc7864(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 104fc786c; end: 104fc7873; -[PathValidationResult unexpectedCharacters] */

undefined8 FUN_104fc786c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104fc7874; end: 104fc78a3; -[PathValidationResult setUnexpectedCharacters:] */

void FUN_104fc7874(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fc78a4; end: 104fc78af; -[PathValidationResult .cxx_destruct] */

void FUN_104fc78a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104fc78b0; end: 104fc795f; +[SVGPathGenerator invalidPathCharacters] */

void FUN_104fc78b0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136b9210 != -1) {
    func_0x00010002a2fc(0x1136b9210,&PTR___NSConcreteGlobalBlock_110860638);
  }
  uVar1 = uRam00000001136b9208;
  _objc_retain(uRam00000001136b9208);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fc7960; end: 104fc7a2f; +[SVGPathGenerator addPoint:toRect:] */

undefined8
FUN_104fc7960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,uint param_7)

{
  undefined8 uVar1;
  
  _CGRectIsNull(param_3,param_4,param_5,param_6);
  uVar1 = param_1;
  if (((param_7 & 1) == 0) &&
     (_CGRectContainsPoint(param_3,param_4,param_5,param_6,param_1,param_2), uVar1 = param_3,
     (param_7 & 1) == 0)) {
    _CGRectUnion(param_1,param_2,0,0,param_3,param_4,param_5,param_6);
    uVar1 = param_1;
  }
  return uVar1;
}



/* Entry: 104fc7a30; end: 104fc7b17; +[SVGPathGenerator parametersNeededForOperator:] */

undefined8 FUN_104fc7a30(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 2;
  if (param_3 < 0x61) {
    if (param_3 < 0x51) {
      if (param_3 < 0x4c) {
        if (param_3 == 0x41) {
          return 7;
        }
        if (param_3 == 0x43) {
          return 6;
        }
        if (param_3 == 0x48) {
          return 1;
        }
      }
      else if (param_3 - 0x4cU < 2) {
        return uVar3;
      }
    }
    else if (param_3 < 0x54) {
      if ((param_3 == 0x51) || (param_3 == 0x53)) {
        return 4;
      }
    }
    else {
      if (param_3 == 0x54) {
        return uVar3;
      }
      if (param_3 == 0x56) {
        return 1;
      }
    }
  }
  else {
    uVar2 = param_3 - 0x68;
    if (uVar2 < 0xf) {
      uVar1 = 1 << (ulong)(uVar2 & 0x1f);
      if ((uVar1 & 0x1030) != 0) {
        return uVar3;
      }
      if ((uVar1 & 0xa00) != 0) {
        return 4;
      }
      if ((1 << (ulong)(uVar2 & 0x1f) & 0x4001U) != 0) {
        return 1;
      }
    }
    if (param_3 == 0x61) {
      return 7;
    }
    if (param_3 == 99) {
      return 6;
    }
  }
  return 0;
}



/* Entry: 104fc7b18; end: 104fc8323; +[SVGPathGenerator insertionStringForPoint:intoString:atRange:] */

void FUN_104fc7b18(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  byte bVar8;
  uint uVar9;
  undefined *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dStack_d8;
  double dStack_b8;
  byte bStack_a9;
  ulong uStack_a8;
  
  _objc_retain(param_4);
  puVar10 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar10;
  func_0x00010c06a520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f340(param_4);
  _objc_release(puVar2);
  _objc_release(puVar10);
  uVar3 = param_4;
  func_0x00010c260c00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c260c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar3 = uVar4;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c08fa60();
    uVar6 = uVar3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    uStack_a8 = 0;
    bStack_a9 = 0;
    if (uVar5 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      dVar21 = *(double *)PTR__CGPointZero_110347540;
      dVar18 = *(double *)(PTR__CGPointZero_110347540 + 8);
      uVar9 = 0x4d;
      dVar17 = 1.79769313486232e+308;
      dStack_d8 = 1.79769313486232e+308;
      dVar20 = 1.79769313486232e+308;
      dStack_b8 = 1.79769313486232e+308;
      dVar19 = 1.79769313486232e+308;
      puVar2 = (undefined *)0x0;
      dVar12 = 360.0;
      do {
        if ((*(byte *)(uVar6 + uStack_a8) & 0xffffffdf) - 0x41 < 0x1a) {
          uVar9 = (uint)*(byte *)(uVar6 + uStack_a8);
          uStack_a8 = uStack_a8 + 1;
        }
        uVar1 = uVar9 - 0x41;
        dVar14 = dVar12;
        dVar11 = dVar18;
        if (uVar9 < 0x61) {
          if (0x50 < uVar9) {
            if (uVar9 < 0x54) {
              if (uVar9 == 0x51) {
LAB_104fc8004:
                func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
                dVar17 = dVar12;
                func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
                dVar11 = dVar17;
                func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
                dVar13 = dVar11;
                func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
                if ((bStack_a9 & 1) != 0) {
LAB_104fc8068:
                  dVar20 = 1.79769313486232e+308;
                  dVar14 = dVar13;
                  dVar19 = dVar12;
                  goto LAB_104fc815c;
                }
                dVar14 = dVar13;
                dVar19 = dVar12;
                if (uVar1 < 0x1a) {
                  dVar20 = 1.79769313486232e+308;
                  dVar18 = dVar13;
                  dVar21 = dVar11;
                }
                else {
                  dVar18 = dVar18 + dVar13;
                  dVar20 = 1.79769313486232e+308;
                  dVar21 = dVar21 + dVar11;
                }
              }
              else if (uVar9 == 0x53) {
LAB_104fc7e2c:
                dVar14 = 1.79769313486232e+308;
                if ((dVar20 != 1.79769313486232e+308) &&
                   (dVar12 = 1.79769313486232e+308, dVar14 = dVar12,
                   dStack_b8 != 1.79769313486232e+308)) goto LAB_104fc7e4c;
              }
            }
            else if (uVar9 == 0x54) {
LAB_104fc7f24:
              dVar14 = 1.79769313486232e+308;
              if ((dVar19 != 1.79769313486232e+308) &&
                 (dVar11 = 1.79769313486232e+308, dVar14 = dVar11, dVar17 != 1.79769313486232e+308))
              {
                func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
                dVar13 = dVar11;
                func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
                dVar12 = dVar21 - (dVar19 - dVar21);
                dVar17 = dVar18 - (dVar17 - dVar18);
                if ((bStack_a9 & 1) != 0) goto LAB_104fc8068;
                dVar15 = dVar21 + dVar11;
                dVar16 = dVar18 + dVar13;
                dVar14 = dStack_d8;
                dVar18 = dVar13;
                dVar19 = dVar12;
                dVar20 = dStack_d8;
                dVar21 = dVar11;
                if (0x19 < uVar1) {
                  dVar18 = dVar16;
                  dVar21 = dVar15;
                }
              }
            }
            else {
              if (uVar9 == 0x56) {
LAB_104fc7ec0:
                func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
                dVar14 = dVar12;
                dVar12 = dVar21;
                goto joined_r0x000104fc7ed8;
              }
              if (uVar9 == 0x5a) {
LAB_104fc7d84:
                dVar12 = dVar21;
                if (((uVar5 - 1 <= uStack_a8) || (*(byte *)(uVar6 + uStack_a8) == 0x7a)) ||
                   (0x19 < (*(byte *)(uVar6 + uStack_a8) & 0xffffffdf) - 0x41)) {
                  uStack_a8 = uStack_a8 + 1;
                }
                goto LAB_104fc8144;
              }
            }
            goto LAB_104fc8148;
          }
          if (uVar9 < 0x48) {
            if (uVar9 == 0x41) {
LAB_104fc7fa4:
              func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
              func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
              if ((bStack_a9 & 1) == 0) {
                func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
                dVar12 = ABS(dVar12);
                if ((360.0 < dVar12) ||
                   (((bStack_a9 & 1) == 0 &&
                    (((func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9), dVar12 != 0.0 &&
                      (dVar12 != 1.0)) ||
                     (((bStack_a9 & 1) == 0 &&
                      ((func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9), dVar12 != 0.0 &&
                       (dVar12 != 1.0)))))))))) {
                  bStack_a9 = 1;
                }
              }
LAB_104fc80d4:
              func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
              dVar14 = dVar12;
              func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
joined_r0x000104fc7ed8:
              if ((bStack_a9 & 1) != 0) goto LAB_104fc8108;
              dVar11 = dVar14;
              if (0x19 < uVar1) {
                dVar11 = dVar18 + dVar14;
                dVar12 = dVar21 + dVar12;
              }
LAB_104fc8144:
              dVar18 = dVar11;
              dVar19 = 1.79769313486232e+308;
              dVar20 = 1.79769313486232e+308;
              dVar21 = dVar12;
            }
            else if (uVar9 == 0x43) {
LAB_104fc7ddc:
              func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
              func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
LAB_104fc7e4c:
              func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
              dStack_b8 = dVar12;
              func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
              dVar11 = dStack_b8;
              func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
              dVar14 = dVar11;
              func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
              dVar20 = dVar12;
              if ((bStack_a9 & 1) != 0) {
                dVar19 = 1.79769313486232e+308;
                goto LAB_104fc815c;
              }
              if (uVar1 < 0x1a) {
                dVar18 = dVar14;
                dVar19 = 1.79769313486232e+308;
                dVar21 = dVar11;
              }
              else {
                dVar18 = dVar18 + dVar14;
                dVar19 = 1.79769313486232e+308;
                dVar21 = dVar21 + dVar11;
              }
            }
            goto LAB_104fc8148;
          }
          if (uVar9 == 0x48) {
LAB_104fc7ef0:
            func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
            dVar14 = dVar12;
            if ((bStack_a9 & 1) == 0) {
              if (0x19 < uVar1) {
                dVar11 = dVar18 + dVar18;
                dVar12 = dVar21 + dVar12;
              }
              goto LAB_104fc8144;
            }
          }
          else {
            if (uVar9 == 0x4c) goto LAB_104fc80d4;
            if (uVar9 != 0x4d) goto LAB_104fc8148;
LAB_104fc7cfc:
            func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
            dVar14 = dVar12;
            func_0x000104fc333c(uVar6,&uStack_a8,uVar5,&bStack_a9);
            if ((bStack_a9 & 1) == 0) {
              if (uVar1 < 0x1a) {
                uVar9 = 0x4c;
                dVar11 = dVar14;
              }
              else {
                uVar9 = 0x4c;
                dVar11 = dVar18 + dVar14;
                dVar12 = dVar21 + dVar12;
              }
              goto LAB_104fc8144;
            }
          }
LAB_104fc8108:
          dVar19 = 1.79769313486232e+308;
          dVar20 = 1.79769313486232e+308;
LAB_104fc815c:
          if (uVar1 < 0x1a) {
            puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25d9e0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar2;
          }
          else {
            dVar14 = param_1 - dVar21;
            puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar2);
            puVar10 = puVar7;
            func_0x00010c25cfc0();
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(puVar7);
          bVar8 = bStack_a9;
        }
        else {
          if (uVar9 < 0x71) {
            if (uVar9 < 0x68) {
              if (uVar9 == 0x61) goto LAB_104fc7fa4;
              if (uVar9 == 99) goto LAB_104fc7ddc;
            }
            else {
              if (uVar9 == 0x68) goto LAB_104fc7ef0;
              if (uVar9 == 0x6c) goto LAB_104fc80d4;
              if (uVar9 == 0x6d) goto LAB_104fc7cfc;
            }
          }
          else if (uVar9 < 0x74) {
            if (uVar9 == 0x71) goto LAB_104fc8004;
            if (uVar9 == 0x73) goto LAB_104fc7e2c;
          }
          else {
            if (uVar9 == 0x74) goto LAB_104fc7f24;
            if (uVar9 == 0x76) goto LAB_104fc7ec0;
            if (uVar9 == 0x7a) goto LAB_104fc7d84;
          }
LAB_104fc8148:
          if (uVar5 <= uStack_a8) goto LAB_104fc815c;
          puVar10 = puVar2;
          bVar8 = 0;
        }
      } while ((uStack_a8 < uVar5) && (puVar2 = puVar10, dVar12 = dVar14, (bVar8 & 1) == 0));
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 104fc8324; end: 104fc880f; +[SVGPathGenerator pointOperandRangeForString:selectionRange:] */

undefined1  [16]
FUN_104fc8324(undefined8 param_1,ulong *param_2,ulong param_3,ulong param_4,long param_5)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  undefined1 auVar15 [16];
  byte bStack_69;
  ulong uStack_68;
  
  _objc_retain(param_3);
  uVar13 = 0x7fffffffffffffff;
  if ((param_4 == 0x7fffffffffffffff) ||
     (uVar2 = param_3, func_0x00010c08fa60(), uVar2 <= param_4 - 1)) {
    lVar12 = 0;
    goto LAB_104fc87e0;
  }
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
LAB_104fc83d4:
    uVar2 = param_3;
    func_0x00010c11f380();
    if (uVar2 == 0x7fffffffffffffff || param_2 == (ulong *)0x0) goto LAB_104fc83f8;
    uVar4 = param_3;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    uVar6 = uVar4;
    _objc_retainAutorelease(uVar4);
    func_0x00010bf25f00();
    uVar7 = param_3;
    func_0x00010c08fa60();
    uVar11 = uVar5 - 1;
    if (uVar2 < uVar7 - 1) {
      uVar11 = uVar2 + 1;
    }
    uVar2 = param_3;
    uStack_68 = uVar11;
    func_0x00010bf35920();
    lVar12 = 0;
    bVar1 = false;
    bStack_69 = 0;
    do {
      iVar14 = (int)uVar2;
      if (iVar14 < 0x61) {
        if (iVar14 < 0x51) {
          if (iVar14 < 0x4c) {
            if (iVar14 == 0x41) {
LAB_104fc8644:
              func_0x000104fc333c(uVar6,&uStack_68,uVar5,&bStack_69);
              func_0x000104fc333c(uVar6,&uStack_68,uVar5,&bStack_69);
              func_0x000104fc333c(uVar6,&uStack_68,uVar5,&bStack_69);
              func_0x000104fc333c(uVar6,&uStack_68,uVar5,&bStack_69);
              param_2 = &uStack_68;
              func_0x000104fc333c(uVar6,param_2,uVar5,&bStack_69);
              uVar7 = uStack_68;
              if ((bStack_69 & 1) == 0) {
                if (param_4 < uStack_68) {
                  bVar1 = true;
                }
                else {
                  param_2 = &uStack_68;
                  func_0x000104fc333c(uVar6,param_2,uVar5,&bStack_69);
                  uVar11 = uVar7;
                  if ((bStack_69 & 1) == 0) {
                    param_2 = &uStack_68;
                    func_0x000104fc333c(uVar6,param_2,uVar5,&bStack_69);
                  }
                }
              }
              else {
                bVar1 = true;
              }
            }
            else if (iVar14 == 0x43) {
LAB_104fc8570:
              param_2 = &uStack_68;
              func_0x000104fc333c(uVar6,param_2,uVar5,&bStack_69);
              if ((bStack_69 & 1) == 0) {
                param_2 = &uStack_68;
                func_0x000104fc333c(uVar6,param_2,uVar5,&bStack_69);
                if ((bStack_69 & 1) == 0) goto LAB_104fc85a8;
              }
            }
            else if (iVar14 == 0x48) goto LAB_104fc85fc;
          }
          else {
            uVar10 = iVar14 - 0x4c;
LAB_104fc853c:
            if (uVar10 < 2) {
LAB_104fc85e0:
              param_2 = &uStack_68;
              func_0x000104fc333c(uVar6,param_2,uVar5,&bStack_69);
              if ((bStack_69 & 1) == 0) {
LAB_104fc85fc:
                param_2 = &uStack_68;
                func_0x000104fc333c(uVar6,param_2,uVar5,&bStack_69);
              }
            }
          }
        }
        else if (iVar14 < 0x54) {
          if ((iVar14 == 0x51) || (iVar14 == 0x53)) {
LAB_104fc85a8:
            param_2 = &uStack_68;
            func_0x000104fc333c(uVar6,param_2,uVar5,&bStack_69);
            if ((bStack_69 & 1) == 0) {
              param_2 = &uStack_68;
              func_0x000104fc333c(uVar6,param_2,uVar5,&bStack_69);
              if ((bStack_69 & 1) == 0) goto LAB_104fc85e0;
            }
          }
        }
        else {
          if (iVar14 == 0x54) goto LAB_104fc85e0;
          if (iVar14 == 0x56) goto LAB_104fc85fc;
          if (iVar14 == 0x5a) {
LAB_104fc8524:
            bVar1 = true;
            bStack_69 = 1;
          }
        }
      }
      else if (iVar14 < 0x71) {
        if (0x6b < iVar14) {
          uVar10 = iVar14 - 0x6c;
          goto LAB_104fc853c;
        }
        if (iVar14 == 0x61) goto LAB_104fc8644;
        if (iVar14 == 99) goto LAB_104fc8570;
        if (iVar14 == 0x68) goto LAB_104fc85fc;
      }
      else if (iVar14 < 0x74) {
        if ((iVar14 == 0x71) || (iVar14 == 0x73)) goto LAB_104fc85a8;
      }
      else {
        if (iVar14 == 0x74) goto LAB_104fc85e0;
        if (iVar14 == 0x76) goto LAB_104fc85fc;
        if (iVar14 == 0x7a) goto LAB_104fc8524;
      }
      if (param_4 < uStack_68) {
        if (!bVar1) {
          puVar8 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
          func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c06a520();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          if ((uVar11 < uStack_68) &&
             (uVar13 = param_3, func_0x00010c11f380(), uVar13 != 0x7fffffffffffffff)) {
            uStack_68 = uVar13 + (long)param_2;
          }
          uVar13 = uStack_68;
          if (param_4 < uStack_68) {
            uVar2 = param_3;
            func_0x00010c11f380();
            uVar13 = uVar11;
            if (uVar2 != 0x7fffffffffffffff) {
              uVar13 = uVar2 + (long)param_2;
            }
          }
          _objc_release(puVar9);
          uVar11 = uVar13;
        }
        if (!bVar1) {
          lVar12 = uStack_68 - uVar11;
        }
        break;
      }
      if (((bStack_69 ^ 1) & 1) == 0 && !bVar1) {
        lVar12 = uStack_68 - uVar11;
        uVar13 = uVar11;
      }
      uVar11 = uStack_68;
    } while (((bStack_69 ^ 1) & 1) != 0);
    _objc_release(uVar4);
  }
  else {
    uVar2 = param_3;
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar2;
    func_0x00010c11f340();
    _objc_release(uVar2);
    if (uVar11 == 0x7fffffffffffffff) goto LAB_104fc83d4;
LAB_104fc83f8:
    lVar12 = 0;
  }
  _objc_release(puVar3);
LAB_104fc87e0:
  _objc_release(param_3);
  auVar15._8_8_ = lVar12;
  auVar15._0_8_ = uVar13;
  return auVar15;
}



/* Entry: 104fc8810; end: 104fc8e93; +[SVGPathGenerator findFailure:] */

void FUN_104fc8810(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  int iVar13;
  ulong uStack_a8;
  byte bStack_79;
  ulong uStack_78;
  
  _objc_retain(param_4);
  puVar4 = PTR_PTR_1126b33a0;
  _objc_alloc_init(PTR_PTR_1126b33a0);
  func_0x00010c1e6fc0();
  func_0x00010c1d5ac0(puVar4);
  func_0x00010c197100(puVar4);
  func_0x00010c069be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c11f340();
  uVar10 = param_4;
  if (uVar5 == 0x7fffffffffffffff) {
    puVar6 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c06a520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f340();
    _objc_release(puVar7);
    _objc_release(puVar6);
    uVar5 = uVar10;
    func_0x00010c08fa60();
    if (uVar5 != 0) {
      uVar5 = uVar10;
      func_0x00010bf64920();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010c08fa60();
      uVar9 = uVar5;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      uStack_78 = 0;
      bStack_79 = 0;
      if (uVar8 != 0) {
        bVar1 = false;
        uVar11 = 0;
        bVar12 = 0x4d;
        do {
          if ((*(byte *)(uVar9 + uStack_78) & 0xffffffdf) - 0x41 < 0x1a) {
            bVar12 = *(byte *)(uVar9 + uStack_78);
            uStack_78 = uStack_78 + 1;
          }
          uVar3 = uStack_78;
          if (bVar1 || (bVar12 & 0xdf) == 0x4d) {
            iVar13 = 4;
            if (bVar12 < 0x61) {
              if (bVar12 < 0x51) {
                if (bVar12 < 0x48) {
                  if (bVar12 == 0x41) {
LAB_104fc8c14:
                    func_0x000104fc333c(uVar9,&uStack_78,uVar8,&bStack_79);
                    func_0x000104fc333c(uVar9,&uStack_78,uVar8,&bStack_79);
                    uVar2 = uStack_78;
                    if ((bStack_79 & 1) == 0) {
                      func_0x000104fc333c(uVar9,&uStack_78,uVar8,&bStack_79);
                      uStack_a8 = uStack_78;
                      param_1 = ABS(param_1);
                      if (param_1 <= 360.0) {
                        if ((bStack_79 & 1) != 0) goto LAB_104fc8c44;
                        func_0x000104fc333c(uVar9,&uStack_78,uVar8,&bStack_79);
                        if ((param_1 != 0.0) && (param_1 != 1.0)) {
LAB_104fc8cb0:
                          iVar13 = 2;
                          goto LAB_104fc8cb4;
                        }
                        if ((bStack_79 & 1) != 0) goto LAB_104fc8c44;
                        uStack_a8 = uStack_78;
                        func_0x000104fc333c(uVar9,&uStack_78,uVar8,&bStack_79);
                        iVar13 = 0;
                        if ((param_1 != 0.0) && (param_1 != 1.0)) goto LAB_104fc8cb0;
                      }
                      else {
                        uStack_a8 = uVar2;
                        iVar13 = 3;
LAB_104fc8cb4:
                        uVar11 = uStack_78 - uStack_a8;
                        bStack_79 = 1;
                        uStack_78 = uVar11;
                      }
                    }
                    else {
LAB_104fc8c44:
                      iVar13 = 0;
                    }
                    func_0x000104fc333c(uVar9,&uStack_78,uVar8,&bStack_79);
                    func_0x000104fc333c(uVar9,&uStack_78,uVar8,&bStack_79);
                  }
                  else if (bVar12 == 0x43) {
LAB_104fc8b2c:
                    func_0x000104fc333c(uVar9,&uStack_78,uVar8,&bStack_79);
                    func_0x000104fc333c(uVar9,&uStack_78,uVar8,&bStack_79);
                    goto LAB_104fc8b7c;
                  }
                }
                else {
                  if (bVar12 == 0x48) goto LAB_104fc8bb8;
                  if (bVar12 == 0x4c) goto LAB_104fc8ba4;
                  if (bVar12 == 0x4d) {
LAB_104fc8a44:
                    func_0x000104fc333c(uVar9,&uStack_78,uVar8,&bStack_79);
                    func_0x000104fc333c(uVar9,&uStack_78,uVar8,&bStack_79);
                    iVar13 = 0;
                    if (bStack_79 == 0) {
                      bVar12 = 0x4c;
                    }
                    bVar1 = true;
                  }
                }
              }
              else {
                if (bVar12 < 0x54) {
                  if ((bVar12 != 0x51) && (bVar12 != 0x53)) goto LAB_104fc8bd4;
LAB_104fc8b7c:
                  func_0x000104fc333c(uVar9,&uStack_78,uVar8,&bStack_79);
                  func_0x000104fc333c(uVar9,&uStack_78,uVar8,&bStack_79);
LAB_104fc8ba4:
                  func_0x000104fc333c(uVar9,&uStack_78,uVar8,&bStack_79);
LAB_104fc8bb8:
                  func_0x000104fc333c(uVar9,&uStack_78,uVar8,&bStack_79);
                }
                else {
                  if (bVar12 == 0x54) goto LAB_104fc8ba4;
                  if (bVar12 == 0x56) goto LAB_104fc8bb8;
                  if (bVar12 != 0x5a) goto LAB_104fc8bd4;
LAB_104fc8ad0:
                  if (((uVar8 - 1 <= uStack_78) || (*(byte *)(uVar9 + uStack_78) == 0x7a)) ||
                     (0x19 < (*(byte *)(uVar9 + uStack_78) & 0xffffffdf) - 0x41)) {
                    iVar13 = 0;
                    uStack_78 = uStack_78 + 1;
                    goto LAB_104fc8bd4;
                  }
                }
                iVar13 = 0;
              }
            }
            else if (bVar12 < 0x71) {
              if (bVar12 < 0x68) {
                if (bVar12 == 0x61) goto LAB_104fc8c14;
                if (bVar12 == 99) goto LAB_104fc8b2c;
              }
              else {
                if (bVar12 == 0x68) goto LAB_104fc8bb8;
                if (bVar12 == 0x6c) goto LAB_104fc8ba4;
                if (bVar12 == 0x6d) goto LAB_104fc8a44;
              }
            }
            else if (bVar12 < 0x74) {
              if ((bVar12 == 0x71) || (bVar12 == 0x73)) goto LAB_104fc8b7c;
            }
            else {
              if (bVar12 == 0x74) goto LAB_104fc8ba4;
              if (bVar12 == 0x76) goto LAB_104fc8bb8;
              if (bVar12 == 0x7a) goto LAB_104fc8ad0;
            }
          }
          else {
            bVar1 = false;
            iVar13 = 5;
            uVar11 = uStack_78;
          }
LAB_104fc8bd4:
          if ((iVar13 == 0 & bStack_79) != 0) {
            iVar13 = 1;
          }
          if (iVar13 != 0 && uVar11 == 0) goto LAB_104fc8da0;
        } while (((uStack_78 < uVar8) && (iVar13 == 0)) && ((bStack_79 & 1) == 0));
        uVar3 = uStack_78;
        if (iVar13 != 0) {
LAB_104fc8da0:
          uStack_78 = uVar3;
          func_0x00010c1d5ac0(puVar4);
          func_0x00010c196fe0(puVar4);
          func_0x00010c1e6fc0(puVar4);
          puVar6 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
          func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60(uVar10);
          func_0x00010c11f380();
          _objc_release(puVar6);
        }
      }
      func_0x00010c197100(puVar4);
      _objc_release(uVar5);
    }
  }
  else {
    func_0x00010c196fe0(puVar4);
    func_0x00010c1e6fc0(puVar4);
    func_0x00010c260c80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21b520(puVar4);
  }
  _objc_release(uVar10);
  _objc_release(param_2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104fc8e94; end: 104fc9ecf; +[SVGPathGenerator maxBoundingBoxForSVGPath:] */

double FUN_104fc8e94(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  undefined1 uStack_b1;
  ulong auStack_b0 [2];
  
  _objc_retain(param_3);
  dVar18 = *(double *)PTR__CGRectNull_1103475e8;
  dVar17 = *(double *)(PTR__CGRectNull_1103475e8 + 8);
  dVar16 = *(double *)(PTR__CGRectNull_1103475e8 + 0x10);
  dStack_c0 = *(double *)(PTR__CGRectNull_1103475e8 + 0x18);
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  dVar12 = dStack_c0;
  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c25d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar6 = uVar5;
  func_0x00010c08fa60();
  if (uVar6 != 0) {
    uVar6 = uVar5;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c08fa60();
    uVar8 = uVar6;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    auStack_b0[0] = 0;
    uStack_b1 = 0;
    if (uVar7 != 0) {
      bVar10 = 0x4d;
      dVar14 = 1.79769313486232e+308;
      dStack_d8 = *(double *)PTR__CGPointZero_110347540;
      dStack_e0 = *(double *)(PTR__CGPointZero_110347540 + 8);
      dStack_d0 = 1.79769313486232e+308;
      dStack_c8 = 1.79769313486232e+308;
      dVar15 = 1.79769313486232e+308;
      dVar20 = dStack_d8;
      dVar22 = dStack_e0;
      do {
        pbVar1 = (byte *)(uVar8 + auStack_b0[0]);
        if ((byte)((*pbVar1 & 0xdf) + 0xbf) < 0x1a) {
          auStack_b0[0] = auStack_b0[0] + 1;
          bVar10 = *pbVar1;
        }
        dStack_f0 = dVar20;
        dVar21 = dVar22;
        if (bVar10 < 0x61) {
          if (bVar10 < 0x51) {
            if (bVar10 < 0x48) {
              if (bVar10 != 0x41) {
                if (bVar10 == 0x43) {
                  func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                  dVar22 = dVar12;
                  func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                  func_0x00010befaa80(dVar12,dVar22,dVar18,dVar17,dVar16,dStack_c0,param_1);
                  dVar14 = dVar12;
                  func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                  dStack_d0 = dVar14;
                  func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                  dVar11 = dVar14;
                  dStack_c0 = dStack_d0;
                  func_0x00010befaa80(dVar14,dStack_d0,dVar12,dVar22,dVar18,dVar17,param_1);
                  dVar19 = dVar11;
                  func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                  dVar21 = dVar19;
                  func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                  dStack_f0 = dVar19;
                  dVar17 = dVar21;
                  func_0x00010befaa80(param_1);
                  bVar10 = 0x43;
LAB_104fc93d8:
                  dVar15 = 1.79769313486232e+308;
                  dVar18 = dStack_f0;
                  goto LAB_104fc9ccc;
                }
                goto LAB_104fc9e64;
              }
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              dVar16 = dVar12;
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              dVar14 = dVar16;
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              dVar15 = dVar14;
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              bVar2 = dVar15 != 0.0;
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              bVar3 = dVar15 != 0.0;
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              uVar9 = uVar8;
              dVar19 = dVar15;
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              _CGPathCreateMutable();
              _CGPathMoveToPoint(dVar20,dVar22);
              FUN_104fc3728(dVar12,dVar16,dVar14,dVar15,dVar19,uVar9,bVar2,bVar3);
              _CGPathGetBoundingBox(uVar9);
              dVar16 = dVar15;
              dVar21 = dVar19;
              func_0x00010befaa80(param_1);
              _CGRectUnion();
              dStack_f0 = dVar16;
              _CGPathRelease(uVar9);
              bVar10 = 0x41;
              dVar11 = dVar18;
              dVar20 = dVar15;
              dVar22 = dVar19;
              dStack_c0 = dVar17;
            }
            else if (bVar10 == 0x48) {
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              dStack_f0 = dVar12;
              func_0x00010befaa80(param_1);
              bVar10 = 0x48;
              dVar11 = dVar18;
              dVar16 = dStack_f0;
              dVar20 = dVar12;
              dStack_c0 = dVar17;
            }
            else if (bVar10 == 0x4c) {
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              dVar22 = dVar12;
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              dStack_f0 = dVar12;
              dVar21 = dVar22;
              func_0x00010befaa80(param_1);
              bVar10 = 0x4c;
              dVar11 = dVar18;
              dVar16 = dStack_f0;
              dVar20 = dVar12;
              dStack_c0 = dVar17;
            }
            else {
              if (bVar10 != 0x4d) goto LAB_104fc9e64;
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              dStack_e0 = dVar12;
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              dStack_f0 = dVar12;
              dVar21 = dStack_e0;
              func_0x00010befaa80(param_1);
              bVar10 = 0x4c;
              dVar11 = dVar18;
              dVar16 = dStack_f0;
              dVar20 = dVar12;
              dVar22 = dStack_e0;
              dStack_d8 = dVar12;
              dStack_c0 = dVar17;
            }
            goto LAB_104fc9cc8;
          }
          if (bVar10 < 0x54) {
            if (bVar10 == 0x51) {
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              dStack_c8 = dVar12;
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              dVar11 = dVar12;
              dVar14 = dStack_c8;
              func_0x00010befaa80(dVar12,dStack_c8,dVar18,dVar17,dVar16,dStack_c0,param_1);
              dVar19 = dVar11;
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              dVar21 = dVar19;
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              dStack_f0 = dVar19;
              dVar17 = dVar21;
              func_0x00010befaa80(param_1);
              bVar10 = 0x51;
              dVar15 = dVar12;
              dStack_c0 = dVar14;
LAB_104fc9aa8:
              dVar14 = 1.79769313486232e+308;
              dVar18 = dStack_f0;
            }
            else {
              if (bVar10 != 0x53) goto LAB_104fc9e64;
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              dStack_f0 = dVar12;
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              dVar15 = dVar12;
              dVar13 = dStack_f0;
              func_0x00010befaa80(dVar12,dStack_f0,dVar18,dVar17,dVar16,dStack_c0,param_1);
              dVar19 = dVar15;
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              dVar21 = dVar19;
              func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
              dVar11 = dVar20 - (dVar14 - dVar20);
              dStack_c0 = dVar22 - (dStack_d0 - dVar22);
              if (dVar14 == 1.79769313486232e+308) {
                dVar11 = dVar20;
                dStack_c0 = dVar22;
              }
              func_0x00010befaa80(dVar11,dStack_c0,dVar15,dVar13,dVar18,dVar17,param_1);
              dVar18 = dVar19;
              dVar17 = dVar21;
              func_0x00010befaa80(param_1);
              bVar10 = 0x53;
              dStack_e8 = dVar12;
LAB_104fc9630:
              dVar15 = 1.79769313486232e+308;
              dStack_d0 = dStack_f0;
              dVar14 = dStack_e8;
            }
          }
          else {
            if (bVar10 != 0x54) {
              if (bVar10 == 0x56) {
                func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                dVar21 = dVar12;
                func_0x00010befaa80(param_1);
                bVar10 = 0x56;
                dVar11 = dVar18;
                dVar16 = dStack_f0;
                dVar22 = dVar12;
                dStack_c0 = dVar17;
              }
              else {
                if (bVar10 != 0x5a) goto LAB_104fc9e64;
LAB_104fc9138:
                dVar11 = dVar16;
                dStack_f0 = dVar12;
                dVar16 = dVar18;
                dVar22 = dStack_e0;
                dVar21 = dVar17;
                dVar20 = dStack_d8;
                if (((uVar7 - 1 <= auStack_b0[0]) || (*(byte *)(uVar8 + auStack_b0[0]) == 0x7a)) ||
                   (0x19 < (*(byte *)(uVar8 + auStack_b0[0]) & 0xffffffdf) - 0x41)) {
                  auStack_b0[0] = auStack_b0[0] + 1;
                }
              }
              goto LAB_104fc9cc8;
            }
            func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
            dVar21 = dVar12;
            func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
            bVar2 = dVar15 == 1.79769313486232e+308;
            dVar15 = dVar20 - (dVar15 - dVar20);
            dStack_c8 = dVar22 - (dStack_c8 - dVar22);
            if (bVar2) {
              dVar15 = dVar20;
              dStack_c8 = dVar22;
            }
            dVar11 = dVar15;
            dVar14 = dStack_c8;
            func_0x00010befaa80(dVar15,dStack_c8,dVar18,dVar17,dVar16,dStack_c0,param_1);
            dStack_f0 = dVar12;
            dVar17 = dVar21;
            func_0x00010befaa80(param_1);
            bVar10 = 0x54;
            dStack_e8 = dVar12;
            dStack_c0 = dVar14;
LAB_104fc9e5c:
            dVar14 = 1.79769313486232e+308;
            dVar18 = dStack_f0;
            dVar19 = dStack_e8;
          }
        }
        else {
          if (0x70 < bVar10) {
            if (bVar10 < 0x74) {
              if (bVar10 == 0x71) {
                func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                dVar15 = dVar20 + dVar12;
                func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                dStack_c8 = dVar22 + dVar12;
                dVar11 = dVar15;
                dVar12 = dStack_c8;
                func_0x00010befaa80(dVar15,dStack_c8,dVar18,dVar17,dVar16,dStack_c0,param_1);
                dVar21 = dVar11;
                func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                dVar19 = dVar20 + dVar21;
                func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                dVar21 = dVar22 + dVar21;
                dStack_f0 = dVar19;
                dVar17 = dVar21;
                func_0x00010befaa80(param_1);
                bVar10 = 0x71;
                dStack_c0 = dVar12;
                goto LAB_104fc9aa8;
              }
              if (bVar10 == 0x73) {
                func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                dStack_e8 = dVar20 + dVar12;
                func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                dStack_f0 = dVar22 + dVar12;
                dVar12 = dStack_e8;
                dVar15 = dStack_f0;
                func_0x00010befaa80(dStack_e8,dStack_f0,dVar18,dVar17,dVar16,dStack_c0,param_1);
                dVar21 = dVar12;
                func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                dVar19 = dVar20 + dVar21;
                func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                dVar21 = dVar22 + dVar21;
                dVar11 = dVar20 - (dVar14 - dVar20);
                dStack_c0 = dVar22 - (dStack_d0 - dVar22);
                if (dVar14 == 1.79769313486232e+308) {
                  dVar11 = dVar20;
                  dStack_c0 = dVar22;
                }
                func_0x00010befaa80(dVar11,dStack_c0,dVar12,dVar15,dVar18,dVar17,param_1);
                dVar18 = dVar19;
                dVar17 = dVar21;
                func_0x00010befaa80(param_1);
                bVar10 = 0x73;
                goto LAB_104fc9630;
              }
            }
            else {
              if (bVar10 == 0x74) {
                func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                dStack_e8 = dVar20 + dVar12;
                dVar21 = dStack_e8;
                func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                dVar21 = dVar22 + dVar21;
                bVar2 = dVar15 == 1.79769313486232e+308;
                dVar15 = dVar20 - (dVar15 - dVar20);
                dStack_c8 = dVar22 - (dStack_c8 - dVar22);
                if (bVar2) {
                  dVar15 = dVar20;
                  dStack_c8 = dVar22;
                }
                dVar11 = dVar15;
                dVar12 = dStack_c8;
                func_0x00010befaa80(dVar15,dStack_c8,dVar18,dVar17,dVar16,dStack_c0,param_1);
                dStack_f0 = dStack_e8;
                dVar17 = dVar21;
                func_0x00010befaa80(param_1);
                bVar10 = 0x74;
                dStack_c0 = dVar12;
                goto LAB_104fc9e5c;
              }
              if (bVar10 == 0x76) {
                func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                dVar22 = dVar22 + dVar12;
                dVar21 = dVar22;
                func_0x00010befaa80(param_1);
                bVar10 = 0x76;
                dVar11 = dVar18;
                dVar16 = dStack_f0;
                dStack_c0 = dVar17;
                goto LAB_104fc9cc8;
              }
              if (bVar10 == 0x7a) goto LAB_104fc9138;
            }
LAB_104fc9e64:
            _NSLog(&PTR____CFConstantStringClassReference_110dc11d8);
            break;
          }
          if (bVar10 < 0x68) {
            if (bVar10 != 0x61) {
              if (bVar10 == 99) {
                func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                dVar15 = dVar20 + dVar12;
                func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                dVar12 = dVar22 + dVar12;
                func_0x00010befaa80(dVar15,dVar12,dVar18,dVar17,dVar16,dStack_c0,param_1);
                dStack_d0 = dVar15;
                func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                dVar14 = dVar20 + dStack_d0;
                func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                dStack_d0 = dVar22 + dStack_d0;
                dVar11 = dVar14;
                dStack_c0 = dStack_d0;
                func_0x00010befaa80(dVar14,dStack_d0,dVar15,dVar12,dVar18,dVar17,param_1);
                dVar21 = dVar11;
                func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                dVar19 = dVar20 + dVar21;
                func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
                dVar21 = dVar22 + dVar21;
                dStack_f0 = dVar19;
                dVar17 = dVar21;
                func_0x00010befaa80(param_1);
                bVar10 = 99;
                goto LAB_104fc93d8;
              }
              goto LAB_104fc9e64;
            }
            func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
            dVar16 = dVar12;
            func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
            dVar14 = dVar16;
            func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
            dVar15 = dVar14;
            func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
            bVar2 = dVar15 != 0.0;
            func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
            bVar3 = dVar15 != 0.0;
            func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
            dVar19 = dVar20 + dVar15;
            uVar9 = uVar8;
            func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
            dVar15 = dVar22 + dVar15;
            _CGPathCreateMutable();
            _CGPathMoveToPoint(dVar20,dVar22);
            FUN_104fc3728(dVar12,dVar16,dVar14,dVar19,dVar15,uVar9,bVar2,bVar3);
            _CGPathGetBoundingBox(uVar9);
            dVar16 = dVar19;
            dVar21 = dVar15;
            func_0x00010befaa80(param_1);
            _CGRectUnion();
            dStack_f0 = dVar16;
            _CGPathRelease(uVar9);
            bVar10 = 0x61;
            dVar11 = dVar18;
            dVar20 = dVar19;
            dVar22 = dVar15;
            dStack_c0 = dVar17;
          }
          else if (bVar10 == 0x68) {
            func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
            dVar20 = dVar20 + dVar12;
            dStack_f0 = dVar20;
            func_0x00010befaa80(param_1);
            bVar10 = 0x68;
            dVar11 = dVar18;
            dVar16 = dStack_f0;
            dStack_c0 = dVar17;
          }
          else if (bVar10 == 0x6c) {
            func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
            dVar16 = dVar12;
            func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
            dVar20 = dVar20 + dVar12;
            dVar22 = dVar22 + dVar16;
            dStack_f0 = dVar20;
            dVar21 = dVar22;
            func_0x00010befaa80(param_1);
            bVar10 = 0x6c;
            dVar11 = dVar18;
            dVar16 = dStack_f0;
            dStack_c0 = dVar17;
          }
          else {
            if (bVar10 != 0x6d) goto LAB_104fc9e64;
            func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
            dStack_e0 = dVar12;
            func_0x000104fc333c(uVar8,auStack_b0,uVar7,&uStack_b1);
            dStack_d8 = dVar20 + dVar12;
            dStack_e0 = dVar22 + dStack_e0;
            dStack_f0 = dStack_d8;
            dVar21 = dStack_e0;
            func_0x00010befaa80(param_1);
            bVar10 = 0x6c;
            dVar11 = dVar18;
            dVar16 = dStack_f0;
            dVar20 = dStack_d8;
            dVar22 = dStack_e0;
            dStack_c0 = dVar17;
          }
LAB_104fc9cc8:
          dVar17 = dVar21;
          dVar15 = 1.79769313486232e+308;
          dVar14 = dVar15;
          dVar18 = dVar16;
          dVar19 = dVar20;
          dVar21 = dVar22;
        }
LAB_104fc9ccc:
        dVar12 = dStack_f0;
        dVar16 = dVar11;
        dVar20 = dVar19;
        dVar22 = dVar21;
      } while (auStack_b0[0] < uVar7);
    }
    _objc_release(uVar6);
  }
  _objc_release(uVar5);
  _objc_release(param_3);
  return dVar18;
}



/* Entry: 104fc9ed0; end: 104fcac53; +[SVGPathGenerator newCGPathFromSVGPath:whileApplyingTransform:] */

undefined * FUN_104fc9ed0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  byte bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  byte bStack_a1;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c25d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _CGPathCreateMutable();
  uVar4 = uVar3;
  func_0x00010c08fa60();
  if (uVar4 != 0) {
    dVar10 = 0.0;
    dVar13 = 0.0;
    _CGPathMoveToPoint(puVar2,0);
    uVar4 = uVar3;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    uVar6 = uVar4;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    uStack_e0 = 0;
    bStack_a1 = 0;
    if (uVar5 != 0) {
      bVar9 = 0x4d;
      dVar18 = 1.79769313486232e+308;
      dVar16 = 1.79769313486232e+308;
      dVar17 = 1.79769313486232e+308;
      dVar21 = 1.79769313486232e+308;
      do {
        if ((*(byte *)(uVar6 + uStack_e0) & 0xffffffdf) - 0x41 < 0x1a) {
          bVar9 = *(byte *)(uVar6 + uStack_e0);
          uStack_e0 = uStack_e0 + 1;
        }
        if (bVar9 < 0x61) {
          if (bVar9 < 0x51) {
            if (bVar9 < 0x48) {
              if (bVar9 == 0x41) {
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar17 = dVar10;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar18 = dVar17;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar20 = dVar18;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar19 = dVar20;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar15 = dVar19;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar12 = dVar15;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar14 = dVar13;
                if ((bStack_a1 & 1) == 0) {
                  FUN_104fc3728(dVar10,dVar17,dVar18,dVar15,dVar12,puVar2,dVar20 != 0.0,
                                dVar19 != 0.0);
                  dVar12 = dVar10;
                  dVar14 = dVar17;
                }
                bVar9 = 0x41;
                dVar17 = 1.79769313486232e+308;
                dVar18 = 1.79769313486232e+308;
              }
              else {
                if (bVar9 != 0x43) goto LAB_104fcac38;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar17 = dVar10;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar18 = dVar17;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar16 = dVar18;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar20 = dVar16;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar12 = dVar20;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar14 = dVar13;
                if ((bStack_a1 & 1) == 0) {
                  _CGPathAddCurveToPoint(dVar10,dVar17,dVar18,dVar16,dVar20,dVar12,puVar2,0);
                  dVar12 = dVar10;
                  dVar14 = dVar17;
                }
                bVar9 = 0x43;
                dVar17 = 1.79769313486232e+308;
              }
            }
            else {
              if (bVar9 == 0x48) {
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar12 = dVar10;
                _CGPathGetCurrentPoint(puVar2);
                if ((bStack_a1 & 1) == 0) {
                  _CGPathAddLineToPoint(puVar2,0);
                  dVar12 = dVar10;
                }
                bVar9 = 0x48;
              }
              else {
                if (bVar9 == 0x4c) {
                  func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                  dVar17 = dVar10;
                  func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                  dVar12 = dVar17;
                  if ((bStack_a1 & 1) == 0) {
                    _CGPathAddLineToPoint(puVar2,0);
                    dVar12 = dVar10;
                    dVar13 = dVar17;
                  }
                }
                else {
                  if (bVar9 != 0x4d) goto LAB_104fcac38;
                  func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                  dVar17 = dVar10;
                  func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                  dVar12 = dVar17;
                  if ((bStack_a1 & 1) == 0) {
                    _CGPathMoveToPoint(puVar2,0);
                    dVar12 = dVar10;
                    dVar13 = dVar17;
                  }
                }
                bVar9 = 0x4c;
              }
LAB_104fca948:
              dVar17 = 1.79769313486232e+308;
              dVar18 = 1.79769313486232e+308;
              dVar14 = dVar13;
            }
          }
          else if (bVar9 < 0x54) {
            if (bVar9 == 0x51) {
              func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
              dVar21 = dVar10;
              func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
              dVar17 = dVar21;
              func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
              dVar18 = dVar17;
              func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
              dVar12 = dVar18;
              dVar14 = dVar13;
              if ((bStack_a1 & 1) == 0) {
                dVar12 = dVar10;
                dVar14 = dVar21;
                _CGPathAddQuadCurveToPoint(dVar10,dVar21,dVar17,dVar18,puVar2,0);
              }
              bVar9 = 0x51;
              dVar17 = dVar10;
              goto LAB_104fcab1c;
            }
            if (bVar9 != 0x53) goto LAB_104fcac38;
            _CGPathGetCurrentPoint(puVar2);
            dVar17 = dVar10;
            dVar14 = dVar13;
            func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
            dVar20 = dVar17;
            func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
            dVar19 = dVar20;
            func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
            dVar12 = dVar19;
            func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
            if ((bStack_a1 & 1) == 0) {
              dVar15 = dVar10 - (dVar18 - dVar10);
              if (dVar18 == 1.79769313486232e+308) {
                dVar15 = dVar10;
              }
              dVar14 = dVar13 - (dVar16 - dVar13);
              if (dVar18 == 1.79769313486232e+308) {
                dVar14 = dVar13;
              }
              _CGPathAddCurveToPoint(dVar15,dVar14,dVar17,dVar20,dVar19,dVar12,puVar2,0);
              bVar9 = 0x53;
              dVar12 = dVar15;
              dVar18 = dVar17;
            }
            else {
              bVar9 = 0x53;
              dVar18 = dVar17;
            }
LAB_104fcaacc:
            dVar17 = 1.79769313486232e+308;
            dVar16 = dVar20;
          }
          else {
            if (bVar9 != 0x54) {
              if (bVar9 == 0x56) {
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar12 = dVar10;
                _CGPathGetCurrentPoint(puVar2);
                if ((bStack_a1 & 1) == 0) {
                  _CGPathAddLineToPoint(puVar2,0);
                  dVar13 = dVar10;
                }
                bVar9 = 0x56;
              }
              else {
                if (bVar9 != 0x5a) goto LAB_104fcac38;
LAB_104fca144:
                _CGPathCloseSubpath(puVar2);
                dVar12 = dVar10;
                if (((uVar5 - 1 <= uStack_e0) || (*(byte *)(uVar6 + uStack_e0) == 0x7a)) ||
                   (0x19 < (*(byte *)(uVar6 + uStack_e0) & 0xffffffdf) - 0x41)) {
                  uStack_e0 = uStack_e0 + 1;
                }
              }
              goto LAB_104fca948;
            }
            _CGPathGetCurrentPoint(puVar2);
            dVar20 = dVar10;
            func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
            dVar19 = dVar20;
            func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
            dVar12 = dVar10 - (dVar17 - dVar10);
            dVar14 = dVar13 - (dVar21 - dVar13);
            dVar18 = 1.79769313486232e+308;
            bVar1 = dVar17 == 1.79769313486232e+308;
            dVar17 = dVar12;
            dVar21 = dVar14;
            if (bVar1) {
              dVar17 = dVar10;
              dVar21 = dVar13;
            }
            if ((bStack_a1 & 1) == 0) {
              dVar12 = dVar17;
              dVar14 = dVar21;
              _CGPathAddQuadCurveToPoint(dVar17,dVar21,dVar20,dVar19,puVar2,0);
              bVar9 = 0x54;
              goto LAB_104fcab1c;
            }
            bVar9 = 0x54;
          }
        }
        else {
          if (0x70 < bVar9) {
            if (bVar9 < 0x74) {
              if (bVar9 == 0x71) {
                _CGPathGetCurrentPoint(puVar2);
                dVar18 = dVar10;
                dVar14 = dVar13;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar17 = dVar18 + dVar10;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar21 = dVar13 + dVar18;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar12 = dVar18;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                if ((bStack_a1 & 1) == 0) {
                  dVar13 = dVar13 + dVar12;
                  dVar12 = dVar17;
                  dVar14 = dVar21;
                  _CGPathAddQuadCurveToPoint(dVar17,dVar21,dVar10 + dVar18,dVar13,puVar2,0);
                }
                bVar9 = 0x71;
                goto LAB_104fcab1c;
              }
              if (bVar9 == 0x73) {
                _CGPathGetCurrentPoint(puVar2);
                dVar17 = dVar10;
                dVar14 = dVar13;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar19 = dVar17 + dVar10;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar20 = dVar13 + dVar17;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar12 = dVar17;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                if ((bStack_a1 & 1) == 0) {
                  dVar15 = dVar10 - (dVar18 - dVar10);
                  if (dVar18 == 1.79769313486232e+308) {
                    dVar15 = dVar10;
                  }
                  dVar14 = dVar13 - (dVar16 - dVar13);
                  if (dVar18 == 1.79769313486232e+308) {
                    dVar14 = dVar13;
                  }
                  _CGPathAddCurveToPoint
                            (dVar15,dVar14,dVar19,dVar20,dVar10 + dVar17,dVar13 + dVar12,puVar2,0);
                  bVar9 = 0x73;
                  dVar12 = dVar15;
                  dVar18 = dVar19;
                }
                else {
                  bVar9 = 0x73;
                  dVar18 = dVar19;
                }
                goto LAB_104fcaacc;
              }
            }
            else {
              if (bVar9 == 0x74) {
                _CGPathGetCurrentPoint(puVar2);
                dVar20 = dVar10;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar12 = dVar20;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar14 = dVar10 - (dVar17 - dVar10);
                dVar18 = 1.79769313486232e+308;
                bVar1 = dVar17 == 1.79769313486232e+308;
                dVar21 = dVar13 - (dVar21 - dVar13);
                dVar17 = dVar14;
                if (bVar1) {
                  dVar21 = dVar13;
                  dVar17 = dVar10;
                }
                if ((bStack_a1 & 1) != 0) {
                  bVar9 = 0x74;
                  goto LAB_104fcab24;
                }
                dVar13 = dVar13 + dVar12;
                dVar12 = dVar17;
                dVar14 = dVar21;
                _CGPathAddQuadCurveToPoint(dVar17,dVar21,dVar20 + dVar10,dVar13,puVar2,0);
                bVar9 = 0x74;
LAB_104fcab1c:
                dVar18 = 1.79769313486232e+308;
                goto LAB_104fcab24;
              }
              if (bVar9 == 0x76) {
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar12 = dVar10;
                _CGPathGetCurrentPoint(puVar2);
                if ((bStack_a1 & 1) == 0) {
                  dVar13 = dVar10 + dVar13;
                  _CGPathAddLineToPoint(puVar2,0);
                }
                bVar9 = 0x76;
                goto LAB_104fca948;
              }
              if (bVar9 == 0x7a) goto LAB_104fca144;
            }
LAB_104fcac38:
            _NSLog(&PTR____CFConstantStringClassReference_110dc11d8);
            break;
          }
          if (0x67 < bVar9) {
            if (bVar9 == 0x68) {
              func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
              dVar12 = dVar10;
              _CGPathGetCurrentPoint(puVar2);
              if ((bStack_a1 & 1) == 0) {
                dVar12 = dVar10 + dVar12;
                _CGPathAddLineToPoint(puVar2,0);
              }
              bVar9 = 0x68;
            }
            else {
              if (bVar9 == 0x6c) {
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar17 = dVar10;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                puVar7 = puVar2;
                dVar12 = dVar17;
                _CGPathIsEmpty();
                if (((ulong)puVar7 & 1) == 0) {
                  _CGPathGetCurrentPoint(puVar2);
                  dVar10 = dVar10 + dVar12;
                  dVar17 = dVar17 + dVar13;
                }
                if ((bStack_a1 & 1) == 0) {
                  _CGPathAddLineToPoint(puVar2,0);
                  dVar12 = dVar10;
                  dVar13 = dVar17;
                }
              }
              else {
                if (bVar9 != 0x6d) goto LAB_104fcac38;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                dVar17 = dVar10;
                func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
                puVar7 = puVar2;
                dVar12 = dVar17;
                _CGPathIsEmpty();
                if (((ulong)puVar7 & 1) == 0) {
                  _CGPathGetCurrentPoint(puVar2);
                  dVar10 = dVar10 + dVar12;
                  dVar17 = dVar17 + dVar13;
                }
                if ((bStack_a1 & 1) == 0) {
                  _CGPathMoveToPoint(puVar2,0);
                  dVar12 = dVar10;
                  dVar13 = dVar17;
                }
              }
              bVar9 = 0x6c;
            }
            goto LAB_104fca948;
          }
          if (bVar9 == 0x61) {
            _CGPathGetCurrentPoint(puVar2);
            dVar17 = dVar10;
            dVar14 = dVar13;
            func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
            dVar18 = dVar17;
            func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
            dVar20 = dVar18;
            func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
            dVar19 = dVar20;
            func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
            dVar15 = dVar19;
            func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
            dVar11 = dVar15;
            func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
            dVar12 = dVar11;
            func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
            if ((bStack_a1 & 1) == 0) {
              FUN_104fc3728(dVar17,dVar18,dVar20,dVar10 + dVar11,dVar13 + dVar12,puVar2,
                            dVar19 != 0.0,dVar15 != 0.0);
              dVar12 = dVar17;
              dVar14 = dVar18;
            }
            bVar9 = 0x61;
            dVar17 = 1.79769313486232e+308;
            dVar18 = 1.79769313486232e+308;
          }
          else {
            if (bVar9 != 99) goto LAB_104fcac38;
            _CGPathGetCurrentPoint(puVar2);
            dVar17 = dVar10;
            dVar14 = dVar13;
            func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
            dVar20 = dVar17;
            func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
            dVar19 = dVar20;
            func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
            dVar18 = dVar10 + dVar19;
            func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
            dVar16 = dVar13 + dVar19;
            func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
            dVar12 = dVar19;
            func_0x000104fc333c(uVar6,&uStack_e0,uVar5,&bStack_a1);
            if ((bStack_a1 & 1) == 0) {
              dVar15 = dVar13 + dVar12;
              dVar14 = dVar13 + dVar20;
              dVar12 = dVar17 + dVar10;
              _CGPathAddCurveToPoint(dVar12,dVar14,dVar18,dVar16,dVar10 + dVar19,dVar15,puVar2,0);
            }
            bVar9 = 99;
            dVar17 = 1.79769313486232e+308;
          }
        }
LAB_104fcab24:
        if ((uVar5 <= uStack_e0) || (dVar10 = dVar12, dVar13 = dVar14, (bStack_a1 & 1) != 0)) break;
      } while( true );
    }
    if (uStack_e0 < uVar5) {
      for (; (bVar9 = *(byte *)(uVar6 + uStack_e0), uVar8 = uStack_e0,
             bVar9 < 0x21 && (1L << ((ulong)bVar9 & 0x3f) & 0x100002400U) != 0 &&
             (uVar8 = uVar5, uVar5 != uStack_e0)); uStack_e0 = uStack_e0 + 1) {
      }
      if (((bVar9 & 0xffffffdf) - 0x41 < 0x1a) &&
         ((uStack_e0 = uVar8 + 1, uVar5 <= uStack_e0 && ((bVar9 & 0xffffffdf) == 0x5a)))) {
        _CGPathCloseSubpath(puVar2);
      }
    }
    _objc_release(uVar4);
  }
  uStack_d8 = param_4[1];
  uStack_e0 = *param_4;
  uStack_c8 = param_4[3];
  uStack_d0 = param_4[2];
  uStack_b8 = param_4[5];
  uStack_c0 = param_4[4];
  uVar4 = 0;
  _CGAffineTransformIsIdentity();
  puVar7 = puVar2;
  if ((uVar4 & 1) == 0) {
    _CGPathCreateCopyByTransformingPath(puVar2,param_4);
  }
  else {
    _CGPathCreateCopy(puVar2);
  }
  _CGPathRelease(puVar2);
  _objc_release(uVar3);
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 104fcac54; end: 104fcadcf; +[SVGPathGenerator svgPathFromCGPath:] */

void FUN_104fcac54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104fcadd0;
  uStack_30 = 0x104fcade0;
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  puStack_48 = &uStack_50;
  _objc_alloc();
  func_0x00010bffc4a0();
  puStack_b8 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3010000000;
  pcStack_68 = "";
  uStack_58 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  uStack_60 = *(undefined8 *)PTR__CGPointZero_110347540;
  puStack_a8 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 4;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_104fcade8;
  puStack_c0 = &UNK_110860658;
  ppuVar2 = &puStack_d8;
  puStack_b0 = &uStack_50;
  puStack_98 = puStack_a8;
  puStack_78 = puStack_b8;
  puStack_28 = puVar1;
  _objc_retainBlock(ppuVar2);
  _CGPathApply(param_3,ppuVar2,FUN_104fb2cf4);
  uVar3 = puStack_48[5];
  func_0x00010bf51e00(uVar3);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104fcadd0; end: 104fcade7;  */

void FUN_104fcadd0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104fcade8; end: 104fcaf8b;  */

void FUN_104fcade8(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  iVar1 = *param_2;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      uVar2 = **(undefined8 **)(param_2 + 2);
      *(undefined8 *)(lVar4 + 0x28) = (*(undefined8 **)(param_2 + 2))[1];
      *(undefined8 *)(lVar4 + 0x20) = uVar2;
      func_0x00010bf06ba0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),param_2,
                          &PTR____CFConstantStringClassReference_110dc11f8);
      goto LAB_104fcaf30;
    }
    if (iVar1 != 1) goto LAB_104fcaf30;
    dVar5 = **(double **)(param_2 + 2);
    dVar6 = (*(double **)(param_2 + 2))[1];
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    if (dVar5 == *(double *)(lVar4 + 0x20)) {
      uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
      ppuVar3 = &PTR____CFConstantStringClassReference_110dc1218;
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
      if (dVar6 == *(double *)(lVar4 + 0x28)) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110dc1238;
      }
      else {
        ppuVar3 = &PTR____CFConstantStringClassReference_110dc1258;
      }
    }
  }
  else if (iVar1 == 2) {
    dVar5 = *(double *)(*(long *)(param_2 + 2) + 0x10);
    dVar6 = *(double *)(*(long *)(param_2 + 2) + 0x18);
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc1278;
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        func_0x00010bf070e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),param_2
                            ,&PTR____CFConstantStringClassReference_110dc12b8);
      }
      goto LAB_104fcaf30;
    }
    dVar5 = *(double *)(*(long *)(param_2 + 2) + 0x20);
    dVar6 = *(double *)(*(long *)(param_2 + 2) + 0x28);
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc1298;
  }
  func_0x00010bf06ba0(uVar2,param_2,ppuVar3);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(double *)(lVar4 + 0x20) = dVar5;
  *(double *)(lVar4 + 0x28) = dVar6;
LAB_104fcaf30:
  *(int *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = *param_2;
  return;
}



/* Entry: 104fcaf8c; end: 104fcb023; +[SVGRenderer rendererQueue] */

void FUN_104fcaf8c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136b9220 != -1) {
    func_0x00010002a2fc(0x1136b9220,&PTR___NSConcreteGlobalBlock_110860688);
  }
  uVar1 = uRam00000001136b9218;
  _objc_retain(uRam00000001136b9218);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fcb024; end: 104fcb027; +[SVGRenderer defaultAttributes] */

void FUN_104fcb024(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136b91f0 != -1) {
    func_0x00010002a2fc(0x1136b91f0,&PTR___NSConcreteGlobalBlock_1108605c8);
  }
  uVar1 = uRam00000001136b91e8;
  _objc_retain(uRam00000001136b91e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fcb028; end: 104fcb0ff; -[SVGRenderer initWithString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104fcb028(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e5730;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithString__1125f1410);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112718b90);
    *(undefined **)((long)puVar1 + (long)_DAT_112718b90) = puVar2;
    _objc_release(uVar4);
    _CFLocaleCopyPreferredLanguages();
    _CFArrayGetValueAtIndex();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c260c20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112718b94);
    *(undefined **)((long)puVar1 + (long)_DAT_112718b94) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
    _CFRelease(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104fcb100; end: 104fcb1d7; -[SVGRenderer initWithContentsOfURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104fcb100(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e5730;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithContentsOfURL__1125de9f0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112718b90);
    *(undefined **)((long)puVar1 + (long)_DAT_112718b90) = puVar2;
    _objc_release(uVar4);
    _CFLocaleCopyPreferredLanguages();
    _CFArrayGetValueAtIndex();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c260c20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112718b94);
    *(undefined **)((long)puVar1 + (long)_DAT_112718b94) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
    _CFRelease(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104fcb1d8; end: 104fcb213; -[SVGRenderer hidden] */

undefined8 FUN_104fcb1d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe1300();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104fcb214; end: 104fcb21b; -[SVGRenderer explicitLineScaling] */

undefined8 FUN_104fcb214(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 104fcb21c; end: 104fcb25f; -[SVGRenderer attributes] */

void FUN_104fcb21c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fcb260; end: 104fcb307; -[SVGRenderer contents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcb260(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112718b98;
  if (*(long *)(param_1 + lVar4) == 0) {
    lVar1 = param_1;
    func_0x00010c0f4840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126b3300;
      _objc_alloc();
      lVar1 = param_1;
      func_0x00010c1414e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00c560(puVar2,param_2,lVar1);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar2;
      _objc_release(uVar3);
      _objc_release(lVar1);
    }
  }
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  _objc_retain(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104fcb308; end: 104fcb3a3; -[SVGRenderer namedObjects] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcb308(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112718b9c;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    lVar4 = param_1;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init();
      func_0x00010bef9f40(lVar4,param_2,puVar1);
      puVar2 = puVar1;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar2;
      _objc_release(uVar3);
      _objc_release(puVar1);
    }
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 104fcb3a4; end: 104fcb3db; -[SVGRenderer setCurrentColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcb3a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112718ba0);
  *(undefined8 *)(param_1 + _DAT_112718ba0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fcb3dc; end: 104fcb4b7; -[SVGRenderer colorForSVGColorString:] */

void FUN_104fcb3dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc12f8);
  if ((int)lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bf410c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      lVar2 = param_3;
      FUN_104fc2398();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        func_0x00010bf410c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560();
        _objc_release(param_1);
      }
    }
  }
  else {
    func_0x00010bf5e400(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104fcb4b8; end: 104fcb653; -[SVGRenderer viewRect] */

double FUN_104fcb4b8(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  dVar5 = *(double *)PTR__CGRectZero_110347608;
  lVar1 = param_2;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (((lVar4 == 0) || (func_0x00010bf885a0(lVar3), 0.0 < param_1)) &&
     ((lVar4 = lVar1, func_0x00010c08fa60(), lVar4 == 0 ||
      (func_0x00010bf885a0(lVar1), 0.0 < param_1)))) {
    lVar4 = lVar2;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      lVar4 = lVar3;
      func_0x00010c08fa60();
      if ((lVar4 != 0) && (lVar4 = lVar1, func_0x00010c08fa60(), lVar4 != 0)) {
        func_0x00010bfb2c80(lVar3);
        func_0x00010bfb2c80(lVar1);
        dVar5 = 0.0;
      }
    }
    else {
      FUN_104fc3108(lVar2);
      dVar5 = param_1;
    }
  }
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return dVar5;
}



/* Entry: 104fcb654; end: 104fcb70f; -[SVGRenderer objectAtURL:] */

void FUN_104fcb654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000104fc141c();
  if ((int)uVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x000104fc148c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfda7c0();
    if ((int)uVar2 == 0) {
      param_1 = 0;
    }
    else {
      uVar2 = uVar1;
      func_0x00010c260c00(uVar1,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e01c0(param_1,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104fcb710; end: 104fcb77b; -[SVGRenderer objectNamed:] */

void FUN_104fcb710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0d5200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fcb77c; end: 104fcb7bf; -[SVGRenderer renderIntoContext:] */

void FUN_104fcb77c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _CGContextSetRenderingIntent(param_3,3);
  _CGContextSetInterpolationQuality(param_3,3);
                    /* WARNING: Could not recover jumptable at 0x00010c12fd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_renderIntoContext_withSVGContext_112629968,param_3,param_1);
  return;
}



/* Entry: 104fcb7c0; end: 104fcb823; -[SVGRenderer findRenderableObject:] */

void FUN_104fcb7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfaf4c0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fcb824; end: 104fcb8bf; -[SVGRenderer renderIntoContext:withSVGContext:] */

void FUN_104fcb824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3278;
  _objc_retain(param_4);
  func_0x00010bf68ce0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2287c0(PTR_PTR_1126b32d8,param_2,param_3,puVar1,param_4);
  _objc_release(param_4);
  func_0x00010bf4df40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12fd20();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fcb8c0; end: 104fcb943; -[SVGRenderer findRenderableObject:withSVGContext:] */

void FUN_104fcb8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  func_0x00010bf4df40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfaf4c0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fcb944; end: 104fcb947; -[SVGRenderer addToClipForContext:withSVGContext:objectBoundingBox:] */

void FUN_104fcb944(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addToClipForContext_withSVGConte_11259c9d8);
  return;
}



/* Entry: 104fcb948; end: 104fcb9d7; -[SVGRenderer addToClipPathForContext:withSVGContext:objectBoundingBox:] */

void FUN_104fcb948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_8);
  func_0x00010bf4df40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc0e0(param_1,param_2,param_3,param_4);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104fcb9d8; end: 104fcba3b; -[SVGRenderer getClippingTypeWithSVGContext:] */

undefined8 FUN_104fcb9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf4df40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfc3ba0();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104fcba3c; end: 104fcba3f; -[SVGRenderer getBoundingBoxWithSVGContext:] */

void FUN_104fcba3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29e110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_viewRect_112685268);
  return;
}



/* Entry: 104fcba40; end: 104fcba5f; -[SVGRenderer transform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcba40(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112718b8c);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  return;
}



/* Entry: 104fcba60; end: 104fcba6f; -[SVGRenderer colorMap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fcba60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718b90);
}



/* Entry: 104fcba70; end: 104fcbaaf; -[SVGRenderer setColorMap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcba70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112718b90;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fcbab0; end: 104fcbaef; -[SVGRenderer setNamedObjects:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcbab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112718b9c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fcbaf0; end: 104fcbaff; -[SVGRenderer currentColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fcbaf0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718ba0);
}



/* Entry: 104fcbb00; end: 104fcbb0f; -[SVGRenderer isoLanguage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fcbb00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718b94);
}



/* Entry: 104fcbb10; end: 104fcbb4f; -[SVGRenderer setIsoLanguage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcbb10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112718b94;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fcbb50; end: 104fcbbbf; -[SVGRenderer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcbb50(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112718b94,0);
  _objc_storeStrong(param_1 + _DAT_112718ba0,0);
  _objc_storeStrong(param_1 + _DAT_112718b9c,0);
  _objc_storeStrong(param_1 + _DAT_112718b90,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718b98,0);
  return;
}



/* Entry: 104fcbbc0; end: 104fcbe03;  */

bool FUN_104fcbbc0(long param_1,ulong param_2,long param_3,ulong *param_4,int param_5)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar3 = (long)((double)param_2 / 3.0) * 4;
  uVar3 = uVar3 + (uVar3 / 0x48) * 2;
  uVar4 = *param_4;
  if (uVar3 <= uVar4) {
    *param_4 = uVar3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2;
    uVar1 = (SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + param_2 / 3;
    if (uVar1 == 0) {
      uVar5 = 0;
      uVar10 = 0;
      uVar9 = 1;
    }
    else {
      uVar10 = 0;
      uVar7 = 0;
      uVar9 = 1;
      do {
        *(undefined *)(param_3 + uVar7) = (&UNK_10dd8da2c)[*(byte *)(param_1 + uVar10) >> 2];
        iVar6 = (int)uVar7;
        *(undefined *)(param_3 + (ulong)(iVar6 + 1)) =
             (&UNK_10dd8da2c)
             [(ulong)(*(byte *)(param_1 + uVar9) >> 4) |
              ((ulong)*(byte *)(param_1 + uVar10) & 3) << 4];
        iVar8 = (int)uVar9;
        *(undefined *)(param_3 + (ulong)(iVar6 + 2)) =
             (&UNK_10dd8da2c)
             [(ulong)(*(byte *)(param_1 + (ulong)(iVar8 + 1U)) >> 6) |
              ((ulong)*(byte *)(param_1 + uVar9) & 0xf) << 2];
        uVar5 = iVar6 + 4;
        *(undefined *)(param_3 + (ulong)(iVar6 + 3)) =
             (&UNK_10dd8da2c)[(ulong)*(byte *)(param_1 + (ulong)(iVar8 + 1U)) & 0x3f];
        if ((param_5 != 0) && (uVar5 % 0x4a == 0x48)) {
          *(undefined1 *)(param_3 + (ulong)uVar5) = 0xd;
          uVar5 = iVar6 + 6;
          *(undefined1 *)(param_3 + (ulong)(iVar6 + 5)) = 10;
        }
        uVar7 = (ulong)uVar5;
        uVar10 = (ulong)(iVar8 + 2);
        uVar9 = (ulong)(iVar8 + 3);
      } while (uVar10 < uVar1);
    }
    if (param_2 - uVar10 == 2) {
      *(undefined *)(param_3 + (ulong)uVar5) = (&UNK_10dd8da2c)[*(byte *)(param_1 + uVar10) >> 2];
      *(undefined *)(param_3 + (ulong)(uVar5 + 1)) =
           (&UNK_10dd8da2c)
           [(ulong)(*(byte *)(param_1 + uVar9) >> 4) | ((ulong)*(byte *)(param_1 + uVar10) & 3) << 4
           ];
      *(undefined *)(param_3 + (ulong)(uVar5 + 2)) =
           (&UNK_10dd8da2c)[((ulong)*(byte *)(param_1 + uVar9) & 0xf) * 4];
      *(undefined1 *)(param_3 + (ulong)(uVar5 + 3)) = 0x3d;
    }
    else {
      if (param_2 - uVar10 != 1) goto LAB_104fcbdf8;
      *(undefined *)(param_3 + (ulong)uVar5) = (&UNK_10dd8da2c)[*(byte *)(param_1 + uVar10) >> 2];
      *(undefined *)(param_3 + (ulong)(uVar5 + 1)) =
           (&UNK_10dd8da2c)[((ulong)*(byte *)(param_1 + uVar10) & 3) * 0x10];
      *(undefined1 *)(param_3 + (ulong)(uVar5 + 2)) = 0x3d;
      *(undefined1 *)(param_3 + (ulong)(uVar5 + 3)) = 0x3d;
    }
    if ((param_5 != 0) && ((uVar5 + 4) % 0x4a == 0x48)) {
      *(undefined1 *)(param_3 + (ulong)(uVar5 + 4)) = 0xd;
      *(undefined1 *)(param_3 + (ulong)(uVar5 + 5)) = 10;
    }
  }
LAB_104fcbdf8:
  return uVar3 <= uVar4;
}



/* Entry: 104fcbe04; end: 104fcc29b;  */

bool FUN_104fcbe04(long param_1,ulong param_2,long param_3,ulong *param_4)

{
  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  
  _memset(param_3,0x2e,*param_4);
  uVar3 = (long)((double)param_2 / 4.0) * 3;
  uVar6 = *param_4;
  if (uVar3 <= uVar6) {
    *param_4 = 0;
    if (param_2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar10 = 0;
      uVar7 = 0;
      uVar11 = 0;
      uVar8 = 0;
      do {
        lVar5 = (long)*(char *)(param_1 + uVar11);
        if (lVar5 == 0x3d) break;
        while (bVar2 = (&UNK_10dd8da6c)[lVar5], bVar2 == 0xfe) {
          pcVar1 = (char *)(param_1 + 1 + uVar11);
          uVar11 = uVar11 + 1;
          lVar5 = (long)*pcVar1;
        }
        while (uVar4 = (uint)bVar2, uVar4 == 0xfd) {
          pcVar1 = (char *)(param_1 + 1 + uVar11);
          uVar11 = uVar11 + 1;
          bVar2 = (&UNK_10dd8da6c)[*pcVar1];
        }
        if ((long)uVar8 < 3) {
          if (uVar8 == 0) {
            uVar10 = ((int)(char)bVar2 & ((int)(char)bVar2 >> 0x1f ^ 0xffffffffU)) << 2;
LAB_104fcbf88:
            uVar9 = uVar8 - 5;
            if (uVar8 < 5) {
              uVar9 = uVar8 + 1;
            }
          }
          else {
            if (uVar8 == 1) {
              uVar4 = (uVar4 & ((int)(uVar4 << 0x18) >> 0x1f ^ 0xffffffffU)) >> 4 & 3;
              goto LAB_104fcbf68;
            }
            if (uVar8 == 2) {
              uVar10 = ((int)(char)bVar2 & ((int)(char)bVar2 >> 0x1f ^ 0xffffffffU)) << 4;
              goto LAB_104fcbf88;
            }
LAB_104fcbf3c:
            uVar9 = (uVar8 + 1) % 6;
            if (uVar9 == 2 || uVar9 == 4) goto LAB_104fcbf94;
          }
          uVar11 = uVar11 + 1;
        }
        else {
          if (uVar8 != 3) {
            if (uVar8 == 4) {
              uVar10 = ((int)(char)bVar2 & ((int)(char)bVar2 >> 0x1f ^ 0xffffffffU)) << 6;
            }
            else {
              if (uVar8 != 5) goto LAB_104fcbf3c;
              uVar10 = uVar4 & ((int)(uVar4 << 0x18) >> 0x1f ^ 0xffffffffU) & 0x3f | uVar10;
              *(char *)(param_3 + uVar7) = (char)uVar10;
              uVar7 = uVar7 + 1;
            }
            goto LAB_104fcbf88;
          }
          uVar4 = 0;
          if (-1 < (char)bVar2) {
            uVar4 = bVar2 >> 2 & 0xf;
          }
LAB_104fcbf68:
          uVar10 = uVar4 | uVar10;
          *(char *)(param_3 + uVar7) = (char)uVar10;
          uVar7 = uVar7 + 1;
          uVar9 = uVar8 + 1;
        }
LAB_104fcbf94:
        uVar8 = uVar9;
      } while (uVar11 < param_2);
    }
    *param_4 = uVar7;
  }
  return uVar3 <= uVar6;
}



/* Entry: 104fcc29c; end: 104fcc333; +[GHImageCache imageCache] */

void FUN_104fcc29c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136b9230 != -1) {
    func_0x00010002a2fc(0x1136b9230,&PTR___NSConcreteGlobalBlock_1108606a8);
  }
  uVar1 = uRam00000001136b9228;
  _objc_retain(uRam00000001136b9228);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fcc334; end: 104fcc463; +[GHImageCache setCachedImage:forURL:] */

void FUN_104fcc334(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b33a8;
  if ((param_3 == 0) && (param_4 != (undefined *)0x0)) {
    func_0x00010bfe6f20(PTR_PTR_1126b33a8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_4;
    func_0x00010beec820(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0580(puVar2,param_2,puVar3,puVar4,10);
    _objc_release(puVar4);
  }
  else {
    if (param_4 == (undefined *)0x0) {
      _NSLog(&PTR____CFConstantStringClassReference_110dc1378);
      goto LAB_104fcc434;
    }
    func_0x00010bfe6f20(PTR_PTR_1126b33a8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_4;
    func_0x00010beec820(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_4;
    func_0x00010c072e60();
    uVar1 = 10;
    if ((int)puVar4 == 0) {
      uVar1 = 10000;
    }
    func_0x00010c1d0580(puVar2,param_2,param_3,puVar3,uVar1);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_104fcc434:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fcc464; end: 104fcc6f7; +[GHImageCache retrieveCachedImageFromURL:intoCallback:] */

void FUN_104fcc464(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar7 = PTR_PTR_1126b33a8;
  func_0x00010bfe6f20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(puVar7);
  if (puVar2 != (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
    puVar5 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar7);
    pcVar6 = *(code **)(param_4 + 0x10);
    puVar7 = puVar2;
    if (((ulong)puVar5 & 1) == 0) {
      puVar7 = (undefined *)0x0;
    }
    goto LAB_104fcc6c4;
  }
  lVar1 = param_3;
  func_0x00010c0f58c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0720c0();
  _objc_release(lVar1);
  lVar1 = param_3;
  if ((int)lVar3 == 0) {
    lVar3 = param_3;
    func_0x00010c0f58c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0720c0();
    _objc_release(lVar3);
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if ((int)lVar4 == 0) {
      func_0x00010c0f5800(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14d020(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    else {
      _CGDataProviderCreateWithURL();
      puVar7 = (undefined *)0x0;
      if (lVar1 != 0) {
        lVar3 = lVar1;
        _CGImageCreateWithJPEGDataProvider(lVar1,0,1,3);
        goto LAB_104fcc5c4;
      }
    }
LAB_104fcc64c:
    puVar2 = PTR_PTR_1126b33a8;
    func_0x00010bfe6f20(PTR_PTR_1126b33a8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0580(puVar2);
    _objc_release(lVar1);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  else {
    _CGDataProviderCreateWithURL();
    puVar7 = (undefined *)0x0;
    if (lVar1 == 0) goto LAB_104fcc64c;
    lVar3 = lVar1;
    _CGImageCreateWithPNGDataProvider(lVar1,0,1,3);
LAB_104fcc5c4:
    _CFRelease(lVar1);
    if (lVar3 == 0) {
      puVar7 = (undefined *)0x0;
      goto LAB_104fcc64c;
    }
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x00010bffa220();
    _CFRelease(lVar3);
    func_0x00010c1753e0(param_1);
  }
  pcVar6 = *(code **)(param_4 + 0x10);
  puVar2 = puVar7;
LAB_104fcc6c4:
  (*pcVar6)(param_4,puVar7,param_3);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fcc6f8; end: 104fcc6fb; -[SVGDocumentView renderingLayer] */

void FUN_104fcc6f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 104fcc6fc; end: 104fcc707; +[SVGDocumentView layerClass] */

void FUN_104fcc6fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126b33b0);
  return;
}



/* Entry: 104fcc708; end: 104fcc763; -[SVGDocumentView findRenderableObject:] */

void FUN_104fcc708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c1307a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfaf4a0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fcc764; end: 104fcc7b3; -[SVGDocumentView setRenderer:] */

void FUN_104fcc764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c1307a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eaae0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fcc7b4; end: 104fcc7f7; -[SVGDocumentView renderer] */

void FUN_104fcc7b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1307a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c130620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fcc7f8; end: 104fcc82f; -[SVGDocumentView setBeTransparent:] */

void FUN_104fcc7f8(undefined8 param_1)

{
  func_0x00010c1307a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16fc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fcc830; end: 104fcc86b; -[SVGDocumentView beTransparent] */

undefined8 FUN_104fcc830(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1307a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf178e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104fcc86c; end: 104fcc973; -[SVGDocumentView setArtworkPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcc86c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112718ba4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = param_3;
  _objc_release(uVar1);
  lVar5 = param_3;
  func_0x00010c08fa60();
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  if (lVar5 != 0) {
    lVar5 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bf249e0(puVar2,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf0a500(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bdc2ee0(puVar2,param_2,lVar5,&PTR____CFConstantStringClassReference_110dbff18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if (puVar3 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126b3278;
      _objc_alloc(PTR_PTR_1126b3278);
      func_0x00010c0040a0();
      func_0x00010c1eaae0(param_1,param_2,puVar4);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fcc974; end: 104fcc98f; -[SVGDocumentView copyFillColor] */

void FUN_104fcc974(void)

{
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  return;
}



/* Entry: 104fcc990; end: 104fcc993; -[SVGDocumentView drawRect:] */

void FUN_104fcc990(void)

{
  return;
}



/* Entry: 104fcc994; end: 104fcc997; +[SVGDocumentView makeSureLoaded] */

void FUN_104fcc994(void)

{
  return;
}



/* Entry: 104fcc998; end: 104fcc9a7; -[SVGDocumentView artworkPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fcc998(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718ba4);
}



/* Entry: 104fcc9a8; end: 104fcc9bb; -[SVGDocumentView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcc9a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718ba4,0);
  return;
}



/* Entry: 104fcc9bc; end: 104fccb57; -[SVGRendererLayer makeDrawingRect] */

double FUN_104fcc9bc(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                    undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  func_0x00010bf20c00();
  uVar2 = param_5;
  dVar3 = param_1;
  dVar4 = param_2;
  dVar5 = param_3;
  dVar6 = param_4;
  func_0x00010c130620();
  iVar1 = (int)uVar2;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29e100();
  _objc_release();
  _CGRectIsEmpty(dVar3,dVar4,dVar5,dVar6);
  dVar4 = param_4;
  dVar3 = param_3;
  if (iVar1 == 0) {
    dVar4 = dVar6;
    dVar3 = dVar5;
  }
  dVar6 = dVar3 / dVar4;
  func_0x00010bf4df80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0720c0();
  dVar5 = param_4;
  if ((int)uVar2 == 0) {
    uVar2 = param_5;
    func_0x00010c0720c0(param_5,param_6,*(undefined8 *)PTR__kCAGravityResizeAspectFill_110346d30);
    if ((int)uVar2 == 0) {
      uVar2 = param_5;
      func_0x00010c0720c0(param_5,param_6,*(undefined8 *)PTR__kCAGravityBottomLeft_110346d18);
      if ((int)uVar2 != 0) {
        param_1 = 0.0;
        param_2 = 0.0;
        param_3 = dVar3;
        param_4 = dVar4;
      }
      goto LAB_104fccb10;
    }
    dVar3 = param_4 * dVar6;
    if (dVar6 <= param_3 / param_4) {
      dVar3 = param_3;
      dVar5 = param_3 / dVar6;
    }
  }
  else {
    dVar3 = param_4 * dVar6;
    if (param_3 / param_4 <= dVar6) {
      dVar3 = param_3;
      dVar5 = param_3 / dVar6;
    }
  }
  param_1 = (param_3 - (double)(float)(int)dVar3) * 0.5;
  param_2 = (param_4 - (double)(float)(int)dVar5) * 0.5;
  param_3 = (double)(float)(int)dVar3;
  param_4 = (double)(float)(int)dVar5;
LAB_104fccb10:
  _CGRectIntegral(param_1,param_2,param_3,param_4);
  _objc_release(param_5);
  return param_1;
}



/* Entry: 104fccb58; end: 104fccbe7; -[SVGRendererLayer init] */

undefined1 * FUN_104fccb58(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e5738;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar2);
    func_0x00010c182d20(param_1,puVar1);
    func_0x00010c1cbda0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104fccbe8; end: 104fccc77; -[SVGRendererLayer initWithLayer:] */

undefined1 * FUN_104fccbe8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e5738;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithLayer__1125e60d8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar2);
    func_0x00010c182d20(param_1,puVar1);
    func_0x00010c1cbda0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104fccc78; end: 104fccd07; -[SVGRendererLayer initWithCoder:] */

undefined1 * FUN_104fccc78(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e5738;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithCoder__1125dd730);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar2);
    func_0x00010c182d20(param_1,puVar1);
    func_0x00010c1cbda0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104fccd08; end: 104fcce27; -[SVGRendererLayer findRenderableObject:] */

void FUN_104fccd08(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  dVar2 = param_1;
  dVar3 = param_2;
  func_0x00010c0b7120();
  uVar1 = param_5;
  dVar4 = param_3;
  dVar5 = param_4;
  func_0x00010c130620(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29e100();
  _objc_release(uVar1);
  dStack_a8 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  dStack_b0 = *(double *)PTR__CGAffineTransformIdentity_110347008;
  dStack_98 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  dStack_a0 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  dStack_88 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  dStack_90 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformScale(&dStack_80,dVar4 / param_3,dVar5 / param_4,&dStack_b0);
  dStack_a8 = dStack_78;
  dStack_b0 = dStack_80;
  dStack_98 = dStack_68;
  dStack_a0 = dStack_70;
  dStack_88 = dStack_58;
  dStack_90 = dStack_60;
  _CGAffineTransformTranslate(&dStack_80,-dVar2,-dVar3,&dStack_b0);
  func_0x00010c130620(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010bfaf4a0(dStack_60 + dStack_70 * param_2 + dStack_80 * param_1,
                      dStack_58 + dStack_68 * param_2 + dStack_78 * param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fcce28; end: 104fcce8b; -[SVGRendererLayer setRenderer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcce28(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112718ba8;
  if (param_3 != *(long *)(param_1 + lVar2)) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010c1cbd40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fcce8c; end: 104fcd2d3; -[SVGRendererLayer drawInContext:] */

void FUN_104fcce8c(double param_1,double param_2,double param_3,double param_4,undefined **param_5,
                  undefined8 param_6,ulong param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  ppuVar5 = param_5;
  func_0x00010bf20c00();
  dVar9 = param_1;
  dVar11 = param_2;
  dVar13 = param_3;
  dVar15 = param_4;
  _CGRectEqualToRect();
  if (((ulong)ppuVar5 & 1) != 0) {
    return;
  }
  func_0x00010c0b7120(param_5);
  ppuVar5 = param_5;
  dVar10 = dVar9;
  dVar12 = dVar11;
  dVar14 = dVar13;
  dVar16 = dVar15;
  func_0x00010c130620();
  iVar4 = (int)ppuVar5;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29e100();
  _objc_release();
  _CGRectIsEmpty(dVar10,dVar12,dVar14,dVar16);
  dVar17 = dVar9;
  dVar1 = dVar11;
  dVar2 = dVar13;
  dVar3 = dVar15;
  if (iVar4 == 0) {
    dVar17 = dVar10;
    dVar1 = dVar12;
    dVar2 = dVar14;
    dVar3 = dVar16;
  }
  ppuVar5 = param_5;
  func_0x00010c130620();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  uVar8 = param_7;
  _CGContextSaveGState();
  dVar10 = dVar9;
  _CGRectEqualToRect(dVar9,dVar11,dVar13,dVar15,dVar17,dVar1,dVar2,dVar3);
  if ((uVar8 & 1) != 0) goto LAB_104fcd1d8;
  ppuVar5 = param_5;
  func_0x00010bf178e0();
  if ((int)ppuVar5 == 0) {
    ppuVar5 = ppuVar7;
    func_0x00010c0720c0();
    if ((int)ppuVar5 == 0) {
      ppuVar5 = ppuVar7;
      if (ppuVar7 == (undefined **)0x0) {
        ppuVar5 = param_5;
        func_0x00010bf13d40();
        if (ppuVar5 != (undefined **)0x0) {
          _CGColorRetain();
LAB_104fcd104:
          _CGColorGetAlpha(ppuVar5);
          if (dVar10 == 0.0) {
            _CGContextClearRect(param_1,param_2,param_3,param_4);
          }
          else {
            _CGContextSetFillColorWithColor(param_7,ppuVar5);
            _CGContextFillRect(param_1,param_2,param_3,param_4,param_7);
          }
          _CGColorRelease(ppuVar5);
          goto LAB_104fcd1d8;
        }
        ppuVar5 = param_5;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar5;
        _objc_opt_respondsToSelector();
        _objc_release(ppuVar5);
        if (((ulong)ppuVar6 & 1) != 0) {
          ppuVar5 = param_5;
          func_0x00010bf6b020();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar5;
          func_0x00010bf51f60();
          _objc_release(ppuVar5);
          ppuVar5 = ppuVar6;
          _objc_retainAutorelease();
          func_0x00010bdc0fe0();
          _CGColorRetain();
          _objc_release(ppuVar6);
          if (ppuVar5 != (undefined **)0x0) goto LAB_104fcd104;
        }
        ppuVar5 = &PTR____CFConstantStringClassReference_110dc0758;
      }
      FUN_104fc2398(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      _CGContextSetFillColorWithColor(param_7,ppuVar6);
      _CGContextFillRect(param_1,param_2,param_3,param_4,param_7);
      _objc_release(ppuVar5);
      goto LAB_104fcd1d8;
    }
  }
  else {
    ppuVar5 = param_5;
    func_0x00010bf13d40();
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar5 = param_5;
      func_0x00010bf13d40(param_5);
      _CGContextSetFillColorWithColor(param_7,ppuVar5);
      _CGContextFillRect(param_1,param_2,param_3,param_4,param_7);
      goto LAB_104fcd1d8;
    }
  }
  _CGContextClearRect(param_1,param_2,param_3,param_4,param_7);
LAB_104fcd1d8:
  _CGContextTranslateCTM(dVar9,dVar11,param_7);
  _CGContextScaleCTM(dVar13 / dVar2,dVar15 / dVar3,param_7);
  _CGContextTranslateCTM(-dVar17,-dVar1,param_7);
  if ((ppuVar7 != (undefined **)0x0) &&
     (ppuVar5 = ppuVar7, func_0x00010c0720c0(), ((ulong)ppuVar5 & 1) == 0)) {
    ppuVar5 = ppuVar7;
    FUN_104fc2398();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar5 != (undefined **)0x0) {
      _CGContextSaveGState(param_7);
      ppuVar6 = ppuVar5;
      _objc_retainAutorelease(ppuVar5);
      func_0x00010bdc0fe0();
      _CGContextSetFillColorWithColor(param_7,ppuVar6);
      _CGContextFillRect(dVar17,dVar1,dVar2,dVar3,param_7);
      _CGContextRestoreGState(param_7);
    }
    _objc_release(ppuVar5);
  }
  func_0x00010c130620(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12fd00();
  _objc_release(param_5);
  _CGContextRestoreGState(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 104fcd2d4; end: 104fcd2e3; -[SVGRendererLayer renderer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fcd2d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718ba8);
}



/* Entry: 104fcd2e4; end: 104fcd2f3; -[SVGRendererLayer beTransparent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104fcd2e4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112718bac);
}



/* Entry: 104fcd2f4; end: 104fcd303; -[SVGRendererLayer setBeTransparent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcd2f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112718bac) = param_3;
  return;
}



/* Entry: 104fcd304; end: 104fcd317; -[SVGRendererLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcd304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718ba8,0);
  return;
}



/* Entry: 104fcd318; end: 104fcd3ef; -[SCSnapcodeUserInfo initWithUserId:bitmojiAvatarId:bitmojiSelfieId:] */

undefined1 *
FUN_104fcd318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5740;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fcd3f0; end: 104fcd413; -[SCSnapcodeUserInfo copyWithZone:] */

undefined8 FUN_104fcd3f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104fcd414; end: 104fcd493; -[SCSnapcodeUserInfo hash] */

undefined8 * FUN_104fcd414(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_104fcd52c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104fcd538;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_104fcd538;
          }
          goto LAB_104fcd52c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_104fcd538:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 104fcd494; end: 104fcd553; -[SCSnapcodeUserInfo isEqual:] */

long FUN_104fcd494(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104fcd52c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104fcd538;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_104fcd538;
          }
          goto LAB_104fcd52c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_104fcd538:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104fcd554; end: 104fcd55b; -[SCSnapcodeUserInfo userId] */

undefined8 FUN_104fcd554(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104fcd55c; end: 104fcd563; -[SCSnapcodeUserInfo bitmojiAvatarId] */

undefined8 FUN_104fcd55c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104fcd564; end: 104fcd56b; -[SCSnapcodeUserInfo bitmojiSelfieId] */

undefined8 FUN_104fcd564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104fcd56c; end: 104fcd5a7; -[SCSnapcodeUserInfo .cxx_destruct] */

void FUN_104fcd56c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fcd5a8; end: 104fcd5d3; +[SCGrapheneAppAppearanceSettingsMetric appSettingsUpdated] */

void FUN_104fcd5a8(void)

{
  _objc_alloc(PTR_PTR_1126b33b8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fcd5d4; end: 104fcd5ff; +[SCGrapheneAppAppearanceSettingsMetric appSettingsDismissed] */

void FUN_104fcd5d4(void)

{
  _objc_alloc(PTR_PTR_1126b33b8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fcd600; end: 104fcd69f; -[SCGrapheneAppAppearanceSettingsMetric description] */

void FUN_104fcd600(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc13f8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dc13f8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e5748;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104fcd6a0; end: 104fcd7eb; -[SCGrapheneRegistry appAppearanceSettingsGraphene] */

void FUN_104fcd6a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104fcd728;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b9240 != -1) {
    func_0x00010002a2fc(0x1136b9240,&puStack_48);
  }
  uVar1 = uRam00000001136b9238;
  _objc_retain(uRam00000001136b9238);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fcd7ec; end: 104fcd87b; -[SCLegacyMainAppBackgroundCleanupEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104fcd7ec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e5750;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112718bbc);
    *(undefined **)((long)puVar1 + (long)_DAT_112718bbc) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b33c0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112718bc0);
    *(undefined **)((long)puVar1 + (long)_DAT_112718bc0) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104fcd87c; end: 104fcda6b; -[SCLegacyMainAppBackgroundCleanupEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcd87c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  lVar5 = (long)_DAT_112718bc4;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a6420();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104fcda6c;
  puStack_88 = &UNK_110846510;
  _objc_copyWeak(auStack_80,auStack_78);
  lVar4 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + lVar5;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf75dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  lVar3 = lVar2;
  func_0x00010c25ff60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 104fcda6c; end: 104fcdac3;  */

void FUN_104fcda6c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeb040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fcdac4; end: 104fcdcfb; -[SCLegacyMainAppBackgroundCleanupEntryPoint _didEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcdac4(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  double dVar11;
  double dVar12;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  undefined4 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar2 = param_2;
  func_0x0001000882bc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2 + _DAT_112718bc8;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104fcdcfc;
  puStack_88 = &UNK_110841f80;
  lStack_80 = lVar4;
  lStack_78 = lVar2;
  _objc_retain(lVar2);
  _objc_retain(lVar4);
  ppuVar5 = &puStack_a0;
  _objc_retainBlock();
  (*(code *)ppuVar5[2])();
  lVar3 = param_2 + _DAT_112718bcc;
  _objc_loadWeakRetained();
  lVar6 = lVar3;
  func_0x00010bf145c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf17d00();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  puVar9 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0772e0();
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf145e0();
  _objc_release(puVar9);
  uStack_a8 = (undefined4)*(undefined8 *)(param_2 + _DAT_112718bc0);
  func_0x00010c296d80();
  dVar11 = 15.0;
  if ((int)puVar10 == 0) {
    dVar11 = 20.0;
  }
  if (param_1 <= dVar11) {
    dVar11 = param_1;
  }
  dVar12 = 0.0;
  if (0.0 <= dVar11 + -10.0) {
    dVar12 = dVar11 + -10.0;
  }
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_104fcdd10;
  puStack_c8 = &UNK_1108606c8;
  lStack_c0 = param_2;
  ppuStack_b8 = ppuVar5;
  lStack_b0 = lVar8;
  _objc_retain(ppuVar5);
  func_0x000100c749e0((float)dVar12,"APPSTORE",&puStack_e0);
  _objc_release(ppuStack_b8);
  _objc_release(ppuVar5);
  _objc_release(lStack_78);
  _objc_release(lStack_80);
  _objc_release(lVar2);
  _objc_release(lVar4);
  return;
}



/* Entry: 104fcdcfc; end: 104fcdd0f;  */

void FUN_104fcdcfc(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c14b0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_saveState_112630650);
    return;
  }
  return;
}



/* Entry: 104fcdd10; end: 104fcddb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcdd10(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112718bc0);
  func_0x00010c296d80();
  if (iVar1 == *(int *)(param_1 + 0x38)) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_112718bcc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf145c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94260();
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104fcddb4; end: 104fcddc3; -[SCLegacyMainAppBackgroundCleanupEntryPoint _willEnterForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcddb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfec290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112718bc0),PTR_s_increment_1125d8a68);
  return;
}



/* Entry: 104fcddc4; end: 104fcde33; -[SCLegacyMainAppBackgroundCleanupEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fcddc4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112718bcc);
  _objc_destroyWeak(param_1 + _DAT_112718bd0);
  _objc_destroyWeak(param_1 + _DAT_112718bc8);
  _objc_destroyWeak(param_1 + _DAT_112718bc4);
  _objc_storeStrong(param_1 + _DAT_112718bc0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718bbc,0);
  return;
}



/* Entry: 104fcde34; end: 104fce5ab; -[SCLegacyMainAppLogoutCleanupEntryPoint cleanUpUserData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104fcde34(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  puVar2 = PTR_PTR_1126b33c8;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = param_1;
  FUN_104fce5ac();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar16;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar19;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fa360(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aec0();
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(lVar19);
  _objc_release(lVar16);
  puVar2 = PTR_PTR_1126b33c8;
  lVar16 = param_1;
  FUN_104fce5ac(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar16;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar19;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c259700(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aec0();
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(lVar19);
  _objc_release(lVar16);
  func_0x00010bf3c5c0(PTR_PTR_1126b33d0);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae750;
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_112718bdc;
    _objc_loadWeakRetained(lVar16);
  }
  lVar19 = lVar16;
  func_0x00010bef1320(lVar16);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar19);
  _objc_release(lVar16);
  puVar5 = puVar2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bef1320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar16 = param_1;
  FUN_104fce5ac();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar16;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar19;
  func_0x00010c26b240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  _objc_release(lVar16);
  lVar16 = lVar1;
  func_0x00010c13c500();
  _objc_retainAutoreleasedReturnValue();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar19 = lVar16;
  func_0x00010bf52a60();
  if (lVar19 != 0) {
    lVar17 = *plStack_220;
    do {
      lVar18 = 0;
      do {
        if (*plStack_220 != lVar17) {
          _objc_enumerationMutation(lVar16);
        }
        uVar7 = *(undefined8 *)(lStack_228 + lVar18 * 8);
        func_0x00010c0f5800(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(uVar7);
        lVar18 = lVar18 + 1;
      } while (lVar19 != lVar18);
      lVar19 = lVar16;
      func_0x00010bf52a60();
    } while (lVar19 != 0);
  }
  uVar7 = 0;
  func_0x0001000f73a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf4dfc0();
  _objc_retainAutoreleasedReturnValue();
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  puVar10 = puVar9;
  func_0x00010bf52a60();
  if (puVar10 != (undefined *)0x0) {
    lVar19 = *plStack_260;
    do {
      puVar20 = (undefined *)0x0;
      do {
        if (*plStack_260 != lVar19) {
          _objc_enumerationMutation(puVar9);
        }
        puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(puVar11);
        puVar20 = puVar20 + 1;
      } while (puVar10 != puVar20);
      puVar10 = puVar9;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined *)0x0);
  }
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  _objc_retain(puVar5);
  puVar10 = puVar5;
  func_0x00010bf52a60();
  if (puVar10 != (undefined *)0x0) {
    lVar19 = *plStack_2a0;
    do {
      puVar20 = (undefined *)0x0;
      do {
        if (*plStack_2a0 != lVar19) {
          _objc_enumerationMutation(puVar5);
        }
        lVar21 = *(long *)(lStack_2a8 + (long)puVar20 * 8);
        lVar17 = lVar21;
        func_0x00010c11f440();
        lVar18 = lVar21;
        func_0x00010c11f440();
        lVar12 = lVar21;
        func_0x00010c11f440();
        lVar13 = lVar21;
        func_0x00010c11f440();
        lVar14 = lVar21;
        func_0x00010c11f440();
        if (((((lVar17 != 0x7fffffffffffffff || lVar18 != 0x7fffffffffffffff) ||
              lVar12 != 0x7fffffffffffffff) || lVar13 != 0x7fffffffffffffff) ||
             lVar14 != 0x7fffffffffffffff) &&
           (puVar11 = puVar4, func_0x00010bf4b900(), ((ulong)puVar11 & 1) == 0)) {
          func_0x00010c0899c0(lVar21);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar6;
          func_0x00010bf4b900();
          _objc_release(lVar21);
          if (((ulong)puVar11 & 1) == 0) {
            func_0x00010befa120(puVar3);
          }
        }
        puVar20 = puVar20 + 1;
      } while (puVar10 != puVar20);
      puVar10 = puVar5;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112718be0;
    _objc_loadWeakRetained();
  }
  lVar19 = param_1;
  func_0x00010bf145c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar17 = lVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bf17d00();
  _objc_release(lVar17);
  uVar15 = 0xffffffffffff8000;
  _dispatch_get_global_queue(0xffffffffffff8000,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_2f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2e8 = 0xc2000000;
  pcStack_2e0 = FUN_104fce5d0;
  puStack_2d8 = &UNK_11084d788;
  puStack_2d0 = puVar3;
  puStack_2c8 = puVar8;
  lStack_2c0 = lVar19;
  lStack_2b8 = lVar18;
  _objc_retain(lVar19);
  _objc_retain(puVar8);
  _objc_retain(puVar3);
  func_0x00010007380c(uVar15,&puStack_2f0);
  _objc_release(uVar15);
  _objc_release(lStack_2c0);
  _objc_release(puStack_2c8);
  _objc_release(puStack_2d0);
  _objc_release(lVar19);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release(uVar7);
  _objc_release(lVar16);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (undefined *)0x0;
  }
  ___stack_chk_fail();
  puVar2 = (undefined *)0x0;
  if (puVar4 != (undefined *)0x0) {
    puVar2 = puVar4 + _DAT_112718bd8;
    _objc_loadWeakRetained(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar2;
}



/* Entry: 104fce5ac; end: 104fce5cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fce5ac(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112718bd8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fce5d0; end: 104fce733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fce5d0(long param_1,undefined8 param_2)

{
  double dVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar3 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c12cc40(*(undefined8 *)(param_1 + 0x28),param_2,
                            *(undefined8 *)(lStack_128 + lVar6 * 8),0);
        puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf145e0();
        dVar1 = (double)CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(
                                                  uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
        _objc_release(puVar2);
        if (dVar1 < 5.0) goto LAB_104fce6cc;
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
LAB_104fce6cc:
  _objc_release(lVar4);
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94260();
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(lVar3 + _DAT_112718be0);
  _objc_destroyWeak(lVar3 + _DAT_112718bdc);
  _objc_destroyWeak(lVar3 + _DAT_112718bd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(lVar3 + _DAT_112718bd4);
  return;
}


