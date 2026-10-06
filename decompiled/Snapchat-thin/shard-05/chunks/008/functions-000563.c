/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104261a08; end: 104261c3f;  */

long * FUN_104261a08(long *param_1,undefined8 *param_2,long *param_3,long *param_4,long *param_5,
                    long *param_6,ulong param_7)

{
  long **pplVar1;
  byte in_ZR;
  undefined1 in_CY;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  char cVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar11;
  long *unaff_x24;
  byte unaff_w25;
  undefined8 unaff_x30;
  double unaff_d8;
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  
  pplVar1 = (long **)&stack0xffffffffffffffb0;
  puStack_60 = &stack0xfffffffffffffff0;
  plVar2 = (long *)*param_2;
  plVar4 = (long *)param_2[1];
  plVar11 = (long *)param_2[2];
  plVar8 = (long *)param_2[3];
  plVar10 = (long *)param_2[4];
  cVar7 = *(char *)(param_2 + 5);
  plVar3 = plVar2;
  plVar5 = plVar4;
  switch(cVar7) {
  default:
    cVar7 = (char)param_3[5];
  case '\x1e':
  case ',':
  case 'r':
  case -0x80:
  case -0x36:
  case -0x28:
    if (cVar7 != '\0') break;
code_r0x000104261a58:
code_r0x000104261b70:
    param_4 = (long *)*param_3;
    param_5 = (long *)param_3[1];
code_r0x000104261b74:
    plVar8 = (long *)param_3[2];
    in_ZR = false;
    if (plVar2 == param_4) {
      in_ZR = plVar4 == param_5;
    }
code_r0x000104261b80:
    if ((!(bool)in_ZR) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), ((ulong)plVar2 & 1) == 0)) break;
code_r0x000104261b90:
    in_ZR = plVar11 == plVar8;
code_r0x000104261b94:
    plVar3 = (long *)(ulong)in_ZR;
    goto code_r0x000104261ba0;
  case '\x01':
    if ((char)param_3[5] == '\x01') goto code_r0x000104261b70;
    break;
  case '\x02':
    if ((char)param_3[5] == '\x02') goto code_r0x000104261b70;
    break;
  case '\x03':
    if ((char)param_3[5] == '\x03') goto code_r0x000104261b70;
    break;
  case '\x04':
    if ((char)param_3[5] == '\x04') goto code_r0x000104261b70;
    break;
  case '\x05':
    if ((char)param_3[5] == '\x05') goto code_r0x000104261b70;
    break;
  case '\x06':
    if ((char)param_3[5] == '\x06') goto code_r0x000104261b70;
    break;
  case '\a':
    if ((char)param_3[5] == '\a') goto code_r0x000104261b70;
    break;
  case '\b':
  case 'T':
    if ((char)param_3[5] == '\b') goto code_r0x000104261b70;
    break;
  case '\t':
    cVar7 = (char)param_3[5];
  case '\x13':
  case 'g':
  case -0x41:
    if (cVar7 != '\t') break;
    goto code_r0x000104261b70;
  case '\n':
    if ((char)param_3[5] == '\n') goto code_r0x000104261b3c;
    break;
  case '\v':
  case '\x1c':
  case 'p':
  case -0x38:
    in_ZR = (char)param_3[5] == '\v';
  case '5':
  case -0x77:
  case -0x1f:
    if (!(bool)in_ZR) break;
    goto code_r0x000104261b70;
  case '\f':
    if ((char)param_3[5] == '\f') {
      plVar10 = (long *)param_3[2];
      unaff_d8 = (double)param_3[3];
      if ((plVar2 == (long *)*param_3) && (plVar4 == (long *)param_3[1])) {
        if (plVar11 != plVar10) break;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        plVar3 = (long *)0x0;
        if ((((ulong)plVar2 & 1) == 0) || (plVar11 != plVar10)) goto code_r0x000104261ba0;
      }
      goto code_r0x000104261bd4;
    }
    break;
  case '\r':
    if ((char)param_3[5] == '\r') goto code_r0x000104261b70;
    break;
  case '\x0e':
    goto code_r0x000104261c24;
  case '\x0f':
  case '#':
  case 'c':
  case 'w':
  case -0x45:
  case -0x31:
    goto code_r0x000104261e34;
  case '\x10':
  case '$':
  case 'd':
  case 'x':
  case -0x44:
  case -0x30:
    goto code_r0x000104261ce8;
  case '\x11':
  case '%':
  case 'e':
  case 'y':
  case -0x43:
  case -0x2f:
    goto code_r0x000104261a58;
  case '\x12':
  case -0x32:
    plVar3 = (long *)*plVar4;
    plVar5 = (long *)plVar4[1];
    param_4 = (long *)plVar4[2];
    param_5 = (long *)plVar4[3];
    param_6 = (long *)plVar4[4];
    unaff_w25 = *(byte *)(plVar4 + 5);
    param_7 = (ulong)unaff_w25;
    plVar8 = plVar2;
    plVar10 = plVar3;
    unaff_x21 = plVar5;
    unaff_x22 = param_4;
    plVar11 = param_5;
    unaff_x24 = param_6;
code_r0x000104261df4:
    func_0x000104261c6c(plVar3,plVar5,param_4,param_5,param_6,param_7);
    plVar3 = (long *)*plVar8;
    plVar4 = (long *)plVar8[1];
    param_4 = (long *)plVar8[2];
    param_5 = (long *)plVar8[3];
code_r0x000104261e00:
    plVar2 = plVar8;
    lVar6 = plVar2[4];
    *plVar2 = (long)plVar10;
    plVar2[1] = (long)unaff_x21;
    plVar2[2] = (long)unaff_x22;
    plVar2[3] = (long)plVar11;
    plVar2[4] = (long)unaff_x24;
    lVar9 = plVar2[5];
    *(byte *)(plVar2 + 5) = unaff_w25;
    FUN_104261ce0(plVar3,plVar4,param_4,param_5,lVar6,(char)lVar9);
code_r0x000104261e28:
code_r0x000104261e34:
    return plVar2;
  case '\x14':
  case 'b':
  case 'h':
  case -0x40:
    goto code_r0x000104261d14;
  case '\"':
  case 'H':
  case 'L':
  case -0x66:
  case -0x5b:
  case -0x16:
  case -0xb:
    goto code_r0x000104261bf4;
  case '&':
    goto code_r0x000104261d70;
  case '\'':
    unaff_x24 = (long *)plVar4[4];
    unaff_w25 = *(byte *)(plVar4 + 5);
    plVar2 = plVar10;
code_r0x000104261d70:
code_r0x000104261d7c:
    func_0x000104261c6c(plVar2);
    *plVar8 = (long)plVar10;
    plVar8[1] = (long)unaff_x21;
code_r0x000104261d88:
    plVar8[2] = (long)unaff_x22;
    plVar8[3] = (long)plVar11;
    plVar8[4] = (long)unaff_x24;
    *(byte *)(plVar8 + 5) = unaff_w25;
    return plVar8;
  case '(':
  case 'D':
  case '|':
  case -0x2c:
    goto code_r0x000104261bac;
  case ')':
  case '}':
  case -0x2b:
    goto code_r0x000104261e28;
  case '2':
    goto code_r0x000104261b90;
  case '3':
  case -0x79:
  case -0x21:
code_r0x000104261b3c:
    unaff_x24 = (long *)param_3[2];
    unaff_x21 = (long *)param_3[3];
    unaff_x22 = (long *)param_3[4];
    if (plVar2 == (long *)*param_3) {
      in_ZR = plVar4 == (long *)param_3[1];
      goto code_r0x000104261b54;
    }
  case 'C':
  case -0x68:
  case -0x18:
code_r0x000104261be0:
code_r0x000104261be4:
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
code_r0x000104261be8:
    plVar3 = (long *)0x0;
    param_3 = plVar2;
code_r0x000104261bf0:
    if (((ulong)param_3 & 1) != 0) {
code_r0x000104261bf4:
      if (plVar11 == unaff_x24) {
code_r0x000104261bfc:
        in_ZR = plVar8 == unaff_x21;
code_r0x000104261c00:
        plVar2 = plVar8;
        if ((bool)in_ZR) {
          in_ZR = plVar10 == unaff_x22;
code_r0x000104261c08:
          plVar2 = plVar8;
          if ((bool)in_ZR) {
code_r0x000104261c0c:
            plVar3 = (long *)0x1;
            goto code_r0x000104261ba0;
          }
        }
code_r0x000104261c18:
code_r0x000104261c20:
code_r0x000104261c24:
code_r0x000104261c28:
code_r0x000104261c2c:
code_r0x000104261c34:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )();
        return plVar2;
      }
    }
    goto code_r0x000104261ba0;
  case '4':
  case -0x78:
  case -0x20:
    plStack_70 = plVar10;
    plStack_68 = plVar8;
    _swift_bridgeObjectRetain(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_6);
    return param_6;
  case 'B':
  case -0x69:
  case -0x19:
code_r0x000104261b54:
    if (!(bool)in_ZR) goto code_r0x000104261be0;
    if (plVar11 == unaff_x24) goto code_r0x000104261bfc;
    break;
  case 'E':
  case 'I':
  case 'N':
  case 'S':
  case 'V':
  case -0x60:
  case -0x14:
  case -0x10:
    goto code_r0x000104261be4;
  case 'F':
    goto code_r0x000104261bd8;
  case 'G':
  case 'U':
    goto code_r0x000104261c28;
  case 'J':
    goto code_r0x000104261c2c;
  case 'K':
    goto code_r0x000104261b80;
  case 'M':
  case -0x56:
  case -1:
    goto code_r0x000104261be8;
  case 'O':
  case 'Q':
  case -0x5d:
  case -0xd:
  case -5:
    goto code_r0x000104261bdc;
  case 'P':
  case -0x6a:
  case -0x1a:
    goto code_r0x000104261c34;
  case 'R':
  case -0x15:
    goto code_r0x000104261c00;
  case 'W':
  case -0x65:
  case -0x62:
  case -0x59:
  case -0x57:
  case -0x12:
  case -9:
  case -2:
    goto code_r0x000104261c08;
  case 'X':
  case -0x6d:
  case -100:
  case -0x61:
  case -0x5c:
  case -0x1d:
  case -0x11:
  case -0xc:
    goto code_r0x000104261c20;
  case 'f':
  case -0x22:
    param_3 = (long *)(ulong)((uint)param_7 & 0xff);
  case 'v':
    in_CY = 9 < (uint)param_3;
code_r0x000104261ce8:
    if ((bool)in_CY) {
      if ((int)param_3 - 0xbU < 3) {
code_r0x000104261d00:
      }
      else {
        if ((int)param_3 != 10) {
          return plVar2;
        }
        pplVar1 = &plStack_70;
        plStack_70 = plVar10;
        plStack_68 = plVar8;
code_r0x000104261d14:
        *(undefined1 **)((long)pplVar1 + 0x10) = puStack_60;
        *(undefined8 *)((long)pplVar1 + 0x18) = unaff_x30;
        _swift_bridgeObjectRelease(plVar4);
        plVar4 = param_6;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(plVar4);
    return plVar4;
  case 'z':
    goto code_r0x000104261d00;
  case '{':
    goto code_r0x000104261d7c;
  case -0x7a:
    lVar9 = *plVar4;
    *plVar2 = lVar9;
    plStack_70 = plVar10;
    plStack_68 = plVar8;
    _swift_retain(lVar9);
    return (long *)(lVar9 + 0x10);
  case -0x6e:
  case -0x1e:
    break;
  case -0x6c:
  case -0x5a:
  case -0x55:
  case -0x1c:
  case -10:
    goto code_r0x000104261c0c;
  case -0x6b:
  case -0x5f:
  case -0x1b:
  case -0xf:
  case -7:
    goto code_r0x000104261c18;
  case -0x67:
    goto code_r0x000104261b70;
  case -99:
  case -0x58:
  case -0x13:
  case -3:
    goto code_r0x000104261b74;
  case -0x5e:
  case -0xe:
  case -6:
code_r0x000104261bd4:
    param_1 = plVar8;
code_r0x000104261bd8:
    in_ZR = 0;
    if (!NAN(unaff_d8) && !NAN((double)param_1)) {
      in_ZR = unaff_d8 == (double)param_1;
    }
code_r0x000104261bdc:
    goto code_r0x000104261b94;
  case -0x46:
    goto code_r0x000104261df4;
  case -0x42:
    goto code_r0x000104261bf0;
  case -0x2e:
    goto code_r0x000104261e00;
  case -0x2d:
    goto code_r0x000104261d88;
  case -0x17:
  case -8:
    goto code_r0x000104261ba0;
  case -4:
    goto code_r0x000104261bfc;
  }
  plVar3 = (long *)0x0;
code_r0x000104261ba0:
code_r0x000104261bac:
  return plVar3;
}



/* Entry: 104261c40; end: 104261cc7;  */

long FUN_104261c40(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104261cc8; end: 104261cdf;  */

undefined8 FUN_104261cc8(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[4];
  bVar1 = *(byte *)(param_1 + 5);
  if ((9 < bVar1) && (2 < bVar1 - 0xb)) {
    if (bVar1 != 10) {
      return *param_1;
    }
    _swift_bridgeObjectRelease(uVar2,uVar2,param_1[2],param_1[3]);
    uVar2 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return uVar2;
}



/* Entry: 104261ce0; end: 104261d3b;  */

void FUN_104261ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  param_6 = param_6 & 0xff;
  if ((9 < param_6) && (2 < param_6 - 0xb)) {
    if (param_6 != 10) {
      return;
    }
    _swift_bridgeObjectRelease(param_2);
    param_2 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 104261d3c; end: 104261e37;  */

undefined8 * FUN_104261d3c(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000104261c6c(uVar1,uVar3,uVar2,uVar4,uVar6,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar5;
  return param_1;
}



/* Entry: 104261e38; end: 104261e87;  */

undefined8 * FUN_104261e38(undefined8 *param_1,undefined8 *param_2)

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
  FUN_104261ce0(uVar7,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 104261e88; end: 104261f93;  */

int FUN_104261e88(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf2 < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xf3;
  }
  uVar1 = *(byte *)(param_1 + 10) ^ 0xff;
  if (*(byte *)(param_1 + 10) < 0xe) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104261f94; end: 104261fff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104261f94(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_30;
  long lStack_28;
  
  plVar3 = &lStack_30;
  lVar1 = 0;
  FUN_1042d3eec();
  lVar2 = lVar1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11306bdf0) = 0;
  *(undefined1 *)(lVar2 + _DAT_11306bdf8) = 0;
  lStack_30 = lVar2;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  puRam0000000113813370 = (undefined1 *)plVar3;
  return;
}



/* Entry: 104262000; end: 10426203f; +[SCStoryAdHintInteractionInfo identity] */

void FUN_104262000(void)

{
  if (lRam0000000113069de0 != -1) {
    _swift_once(0x113069de0,FUN_104261f94);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813370);
  return;
}



/* Entry: 104262040; end: 10426215f; -[SCStoryAdHintInteractionInfo withExpandButtonSnapIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104262040(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 uVar7;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  lVar1 = param_1;
  _swift_getObjectType();
  lVar5 = *(long *)(param_1 + _DAT_11306bdf0);
  if (lVar5 == 0) {
    uVar7 = *(undefined1 *)(param_1 + _DAT_11306bdf8);
    _objc_retain(param_1);
    if (param_3 != 0) {
      _objc_retain(param_3);
      goto LAB_1042620d4;
    }
  }
  else {
    lVar2 = param_1;
    _objc_retain();
    lVar3 = param_3;
    _objc_retain();
    func_0x00010c067fc0(lVar5);
    uVar7 = *(undefined1 *)(lVar2 + _DAT_11306bdf8);
    if (lVar3 != 0) {
LAB_1042620d4:
      func_0x00010c067fc0(param_3);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_allocWithZone();
      func_0x00010c01e540();
      goto LAB_104262100;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_104262100:
  lVar5 = lVar1;
  _objc_allocWithZone();
  *(undefined **)(lVar5 + _DAT_11306bdf0) = puVar6;
  *(undefined1 *)(lVar5 + _DAT_11306bdf8) = uVar7;
  lStack_60 = lVar5;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 104262160; end: 10426222f; -[SCStoryAdHintInteractionInfo withExpandButtonTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104262160(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  plVar3 = &lStack_50;
  lVar1 = param_1;
  _swift_getObjectType();
  lVar4 = *(long *)(param_1 + _DAT_11306bdf0);
  if (lVar4 == 0) {
    _objc_retain(param_1);
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_1);
    func_0x00010c067fc0(lVar4);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  lVar4 = lVar1;
  _objc_allocWithZone();
  *(undefined **)(lVar4 + _DAT_11306bdf0) = puVar2;
  *(undefined1 *)(lVar4 + _DAT_11306bdf8) = param_3;
  lStack_50 = lVar4;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 104262230; end: 1042622db;  */

int FUN_104262230(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 10) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)((long)param_1 + 9)) {
    uVar1 = *(byte *)((long)param_1 + 9) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1042622dc; end: 104262347;  */

uint FUN_1042622dc(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_1590 [2744];
  undefined1 auStack_ad8 [2744];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = 0;
  _memcpy(auStack_1590,param_1,0xab2);
  _memcpy(auStack_ad8,param_2,0xab2);
  func_0x000104262968(auStack_1590,auStack_ad8);
  return uVar1 & 1;
}



/* Entry: 104262348; end: 1042626eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104262348(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  long lStack_34b0;
  long lStack_34a8;
  undefined1 auStack_34a0 [2744];
  undefined8 uStack_29e8;
  undefined1 auStack_29e0 [1448];
  undefined8 uStack_2438;
  undefined8 uStack_2430;
  undefined8 uStack_2428;
  undefined8 uStack_2420;
  undefined8 uStack_2418;
  undefined8 uStack_2410;
  undefined8 uStack_2408;
  undefined8 uStack_2400;
  undefined8 uStack_23f8;
  undefined8 uStack_23f0;
  undefined8 uStack_23e8;
  undefined8 uStack_23e0;
  undefined8 uStack_23d8;
  undefined1 uStack_23d0;
  undefined1 auStack_23c8 [776];
  undefined8 uStack_20c0;
  undefined8 uStack_20b8;
  undefined8 uStack_20b0;
  undefined8 uStack_20a8;
  undefined2 uStack_20a0;
  undefined8 uStack_2098;
  undefined8 uStack_2090;
  undefined8 uStack_2088;
  undefined8 uStack_2080;
  undefined8 uStack_2078;
  undefined8 uStack_2070;
  undefined8 uStack_2068;
  undefined8 uStack_2060;
  undefined8 uStack_2058;
  undefined8 uStack_2050;
  undefined8 uStack_2048;
  undefined8 uStack_2040;
  undefined8 uStack_2038;
  undefined8 uStack_2030;
  undefined8 uStack_2028;
  undefined8 uStack_2020;
  undefined8 uStack_2018;
  undefined8 uStack_2010;
  undefined8 uStack_2008;
  undefined8 uStack_2000;
  undefined8 uStack_1ff8;
  undefined8 uStack_1ff0;
  undefined8 uStack_1fe8;
  undefined8 uStack_1fe0;
  undefined8 uStack_1fd8;
  undefined8 uStack_1fd0;
  undefined8 uStack_1fc8;
  undefined8 uStack_1fc0;
  undefined8 uStack_1fb8;
  undefined8 uStack_1fb0;
  undefined8 uStack_1fa8;
  undefined8 uStack_1fa0;
  undefined8 uStack_1f98;
  undefined8 uStack_1f87;
  undefined8 uStack_1f78;
  undefined8 uStack_1f70;
  undefined1 uStack_1f68;
  undefined8 uStack_1f60;
  undefined8 uStack_1f58;
  undefined8 uStack_1f50;
  undefined8 uStack_1f48;
  undefined8 uStack_1f40;
  undefined2 uStack_1f38;
  undefined1 auStack_1f30 [2744];
  undefined1 auStack_1478 [1448];
  undefined1 auStack_ed0 [776];
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b17;
  undefined1 auStack_b08 [2744];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar4 = &lStack_34b0;
  func_0x00010178ed8c(auStack_1478);
  func_0x00010178e4b4(auStack_ed0);
  func_0x00010178e4d4(&uStack_bc8);
  _memcpy(auStack_29e0,auStack_1478,0x5a8);
  uStack_2430 = 0;
  uStack_2438 = 0;
  uStack_2420 = 0;
  uStack_2428 = 0;
  uStack_2418 = 1;
  uStack_2408 = 0;
  uStack_2410 = 0;
  uStack_23f8 = 0;
  uStack_2400 = 0;
  uStack_23e8 = 0;
  uStack_23f0 = 0;
  uStack_23d8 = 0;
  uStack_23e0 = 0;
  uStack_23d0 = 0;
  _memcpy(auStack_23c8,auStack_ed0,0x301);
  uStack_1f87 = uStack_b17;
  uStack_1fb0 = uStack_b40;
  uStack_1fb8 = uStack_b48;
  uStack_1fa0 = uStack_b30;
  uStack_1fa8 = uStack_b38;
  uStack_1f98 = uStack_b28;
  uStack_1ff0 = uStack_b80;
  uStack_1ff8 = uStack_b88;
  uStack_1fe0 = uStack_b70;
  uStack_1fe8 = uStack_b78;
  uStack_1fd0 = uStack_b60;
  uStack_1fd8 = uStack_b68;
  uStack_1fc0 = uStack_b50;
  uStack_1fc8 = uStack_b58;
  uStack_2030 = uStack_bc0;
  uStack_2038 = uStack_bc8;
  uStack_2020 = uStack_bb0;
  uStack_2028 = uStack_bb8;
  uStack_2010 = uStack_ba0;
  uStack_2018 = uStack_ba8;
  uStack_2088 = 0;
  uStack_2090 = 0;
  uStack_2078 = 0;
  uStack_2080 = 0;
  uStack_2068 = 0;
  uStack_2070 = 0;
  uStack_2058 = 0;
  uStack_2060 = 0;
  uStack_2048 = 0;
  uStack_2050 = 0;
  uStack_2040 = 0;
  uStack_2000 = uStack_b90;
  uStack_2008 = uStack_b98;
  uStack_1f40 = 3;
  uStack_1f38 = 0;
  uStack_2098 = 1;
  uStack_29e8 = 0x17;
  FUN_1042686d4(auStack_29e0,0x112dcbd00,&UNK_10d98e550);
  _memcpy(auStack_29e0,auStack_1478,0x5a8);
  FUN_1042686d4(&uStack_2438,0x112dcbca8,&UNK_10d98e380);
  uStack_2430 = 0;
  uStack_2438 = 0;
  uStack_2420 = 0;
  uStack_2428 = 0;
  uStack_2418 = 1;
  uStack_2408 = 0;
  uStack_2410 = 0;
  uStack_23f8 = 0;
  uStack_2400 = 0;
  uStack_23e8 = 0;
  uStack_23f0 = 0;
  uStack_23d8 = 0;
  uStack_23e0 = 0;
  uStack_23d0 = 0;
  FUN_1042686d4(auStack_23c8,0x112dcbc48,&UNK_10d98e2c0);
  _memcpy(auStack_23c8,auStack_ed0,0x301);
  uStack_20c0 = 1;
  uStack_20b0 = 1;
  uStack_20b8 = 0;
  uStack_20a8 = 0;
  uStack_20a0 = 0x202;
  FUN_1042686d4(&uStack_2098,0x112dcbc38,&UNK_10d98e290);
  uStack_2098 = 1;
  uStack_2088 = 0;
  uStack_2090 = 0;
  uStack_2078 = 0;
  uStack_2080 = 0;
  uStack_2068 = 0;
  uStack_2070 = 0;
  uStack_2058 = 0;
  uStack_2060 = 0;
  uStack_2048 = 0;
  uStack_2050 = 0;
  uStack_2040 = 0;
  FUN_1042686d4(&uStack_2038,0x112dcbc58,&UNK_10d98e2f0);
  uStack_1f87 = uStack_b17;
  uStack_1fb0 = uStack_b40;
  uStack_1fb8 = uStack_b48;
  uStack_1fa0 = uStack_b30;
  uStack_1fa8 = uStack_b38;
  uStack_1f98 = uStack_b28;
  uStack_1ff0 = uStack_b80;
  uStack_1ff8 = uStack_b88;
  uStack_1fe0 = uStack_b70;
  uStack_1fe8 = uStack_b78;
  uStack_1fd0 = uStack_b60;
  uStack_1fd8 = uStack_b68;
  uStack_1fc0 = uStack_b50;
  uStack_1fc8 = uStack_b58;
  uStack_2030 = uStack_bc0;
  uStack_2038 = uStack_bc8;
  uStack_2020 = uStack_bb0;
  uStack_2028 = uStack_bb8;
  uStack_2010 = uStack_ba0;
  uStack_2018 = uStack_ba8;
  uStack_2000 = uStack_b90;
  uStack_2008 = uStack_b98;
  uStack_1f70 = 0;
  uStack_1f78 = 1;
  uStack_1f68 = 0;
  uStack_1f58 = 0;
  uStack_1f60 = 0;
  uStack_1f50 = 1;
  uStack_1f40 = 3;
  uStack_1f48 = 0;
  uStack_1f38 = 0;
  _memcpy(auStack_1f30,&uStack_29e8,0xab2);
  _memcpy(auStack_b08,&uStack_29e8,0xab2);
  func_0x000101795250(auStack_1f30,auStack_34a0);
  func_0x00010179528c(auStack_b08);
  lVar1 = 0;
  FUN_1042d43a8();
  lVar2 = lVar1;
  _objc_allocWithZone();
  FUN_1042a6cd4(0);
  _objc_allocWithZone();
  func_0x000101795250(auStack_1f30,&uStack_29e8);
  func_0x000101795250(auStack_1f30,&uStack_29e8);
  puVar3 = auStack_1f30;
  FUN_1042a5b4c();
  func_0x00010179528c(auStack_1f30);
  func_0x00010179528c(auStack_1f30);
  *(undefined1 **)(lVar2 + _DAT_11306be28) = puVar3;
  lStack_34b0 = lVar2;
  lStack_34a8 = lVar1;
  _objc_msgSendSuper2(&lStack_34b0,PTR_s_init_1125d9248);
  func_0x00010179528c(auStack_1f30);
  puRam0000000113813378 = (undefined1 *)plVar4;
  return;
}



/* Entry: 1042626ec; end: 10426272b; +[SCStoryAdTileInteractionTrackInfo identity] */

void FUN_1042626ec(void)

{
  if (lRam0000000113069de8 != -1) {
    _swift_once(0x113069de8,FUN_104262348);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813378);
  return;
}



/* Entry: 10426272c; end: 104262907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10426272c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40a0 [2744];
  undefined1 auStack_35e8 [2744];
  undefined1 auStack_2b30 [16];
  undefined1 auStack_2b20 [2744];
  undefined1 auStack_2068 [2744];
  undefined1 auStack_15b0 [2744];
  undefined1 auStack_af8 [2744];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x0001018a91f0(auStack_af8);
  if (*(long *)(unaff_x20 + _DAT_11306be28) == 0) {
    puVar2 = auStack_af8;
  }
  else {
    _objc_retain();
    func_0x0001042a6474(auStack_2068);
    func_0x00010178e4a0(auStack_2068);
    puVar2 = auStack_2068;
  }
  _memcpy(auStack_15b0,puVar2,0xab2);
  if (param_1 == 0) {
    FUN_1042686d4(auStack_15b0,0x112dcbc88,&UNK_10d98e360);
    _memcpy(auStack_2b20,auStack_af8,0xab2);
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(param_1);
    func_0x0001042a6474(auStack_2068);
    _memcpy(auStack_35e8,auStack_2068,0xab2);
    FUN_1042686d4(auStack_15b0,0x112dcbc88,&UNK_10d98e360);
    func_0x00010178e4a0(auStack_35e8);
    _memcpy(auStack_2b20,auStack_35e8,0xab2);
    FUN_1042a6cd4(0);
    _objc_allocWithZone();
    func_0x000101795250(auStack_2068,auStack_40a0);
    puVar2 = auStack_2068;
    func_0x0001042a5b4c();
    func_0x00010179528c(auStack_2068);
  }
  _objc_allocWithZone();
  *(undefined1 **)(lVar1 + _DAT_11306be28) = puVar2;
  puVar2 = auStack_2b30;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  func_0x0001018a331c(auStack_2b20);
  return puVar2;
}



/* Entry: 104262908; end: 104262b83; -[SCStoryAdTileInteractionTrackInfo withAttachmentTrackInfo:] */

void FUN_104262908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10426272c(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104262b84; end: 104262e57;  */

long FUN_104262b84(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104262e58; end: 1042672cf;  */

undefined8 * FUN_104262e58(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar2 = param_2[0x128];
  if (lVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0xab2);
    return param_1;
  }
  *param_1 = *param_2;
  lVar1 = param_2[2];
  if (lVar1 == 1) {
    _memcpy(param_1 + 1,param_2 + 1,0x5a8);
  }
  else {
    param_1[1] = param_2[1];
    param_1[2] = lVar1;
    uVar4 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar4;
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    uVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
    uVar4 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar4;
    uVar7 = param_2[0xb];
    param_1[0xb] = uVar7;
    uVar4 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar4;
    uVar4 = param_2[0xf];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = uVar4;
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    lVar1 = param_2[0x12];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar4);
    if (lVar1 == 0) {
      uVar4 = param_2[0x1b];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar4;
      uVar4 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar4;
      uVar4 = param_2[0x1f];
      param_1[0x20] = param_2[0x20];
      param_1[0x1f] = uVar4;
      param_1[0x21] = param_2[0x21];
      uVar4 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar4;
      uVar4 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar4;
      uVar4 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar4;
      uVar4 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar4;
      uVar4 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar4;
    }
    else {
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = lVar1;
      uVar4 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar4;
      uVar4 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar4;
      uVar4 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar4;
      uVar4 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar4;
      param_1[0x1b] = param_2[0x1b];
      *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
      uVar4 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar4;
      uVar4 = param_2[0x20];
      param_1[0x1f] = param_2[0x1f];
      param_1[0x20] = uVar4;
      uVar7 = param_2[0x21];
      param_1[0x21] = uVar7;
      _swift_bridgeObjectRetain(lVar1);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar7);
    }
    *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
    uVar4 = param_2[0x23];
    param_1[0x24] = param_2[0x24];
    param_1[0x23] = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 0x124);
    *(undefined8 *)((long)param_1 + 300) = *(undefined8 *)((long)param_2 + 300);
    *(undefined8 *)((long)param_1 + 0x124) = uVar4;
    param_1[0x27] = param_2[0x27];
    uVar4 = param_2[0x34];
    uVar5 = param_2[0x37];
    uVar7 = param_2[0x36];
    param_1[0x35] = param_2[0x35];
    param_1[0x34] = uVar4;
    param_1[0x37] = uVar5;
    param_1[0x36] = uVar7;
    *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
    uVar4 = param_2[0x2c];
    uVar5 = param_2[0x2f];
    uVar7 = param_2[0x2e];
    param_1[0x2d] = param_2[0x2d];
    param_1[0x2c] = uVar4;
    param_1[0x2f] = uVar5;
    param_1[0x2e] = uVar7;
    uVar5 = param_2[0x30];
    uVar7 = param_2[0x33];
    uVar4 = param_2[0x32];
    param_1[0x31] = param_2[0x31];
    param_1[0x30] = uVar5;
    param_1[0x33] = uVar7;
    param_1[0x32] = uVar4;
    uVar5 = param_2[0x28];
    uVar7 = param_2[0x2b];
    uVar4 = param_2[0x2a];
    param_1[0x29] = param_2[0x29];
    param_1[0x28] = uVar5;
    param_1[0x2b] = uVar7;
    param_1[0x2a] = uVar4;
    uVar4 = param_2[0x41];
    uVar5 = param_2[0x44];
    uVar7 = param_2[0x43];
    param_1[0x42] = param_2[0x42];
    param_1[0x41] = uVar4;
    param_1[0x44] = uVar5;
    param_1[0x43] = uVar7;
    uVar4 = param_2[0x45];
    param_1[0x46] = param_2[0x46];
    param_1[0x45] = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 0x231);
    *(undefined8 *)((long)param_1 + 0x239) = *(undefined8 *)((long)param_2 + 0x239);
    *(undefined8 *)((long)param_1 + 0x231) = uVar4;
    uVar4 = param_2[0x39];
    uVar5 = param_2[0x3c];
    uVar7 = param_2[0x3b];
    param_1[0x3a] = param_2[0x3a];
    param_1[0x39] = uVar4;
    param_1[0x3c] = uVar5;
    param_1[0x3b] = uVar7;
    uVar4 = param_2[0x3d];
    uVar5 = param_2[0x40];
    uVar7 = param_2[0x3f];
    param_1[0x3e] = param_2[0x3e];
    param_1[0x3d] = uVar4;
    param_1[0x40] = uVar5;
    param_1[0x3f] = uVar7;
    uVar7 = param_2[0x4a];
    uVar4 = param_2[0x49];
    uVar6 = param_2[0x4c];
    uVar5 = param_2[0x4b];
    uVar8 = param_2[0x4d];
    uVar10 = param_2[0x50];
    uVar9 = param_2[0x4f];
    param_1[0x4e] = param_2[0x4e];
    param_1[0x4d] = uVar8;
    param_1[0x50] = uVar10;
    param_1[0x4f] = uVar9;
    param_1[0x4a] = uVar7;
    param_1[0x49] = uVar4;
    param_1[0x4c] = uVar6;
    param_1[0x4b] = uVar5;
    uVar7 = param_2[0x52];
    uVar4 = param_2[0x51];
    uVar6 = param_2[0x54];
    uVar5 = param_2[0x53];
    uVar9 = param_2[0x56];
    uVar8 = param_2[0x55];
    uVar10 = *(undefined8 *)((long)param_2 + 0x2b2);
    *(undefined8 *)((long)param_1 + 0x2ba) = *(undefined8 *)((long)param_2 + 0x2ba);
    *(undefined8 *)((long)param_1 + 0x2b2) = uVar10;
    param_1[0x54] = uVar6;
    param_1[0x53] = uVar5;
    param_1[0x56] = uVar9;
    param_1[0x55] = uVar8;
    param_1[0x52] = uVar7;
    param_1[0x51] = uVar4;
    param_1[0x59] = param_2[0x59];
    param_1[0x5a] = param_2[0x5a];
    *(undefined1 *)(param_1 + 0x5b) = *(undefined1 *)(param_2 + 0x5b);
    *(undefined1 *)((long)param_1 + 0x2d9) = *(undefined1 *)((long)param_2 + 0x2d9);
    uVar4 = param_2[0x5c];
    param_1[0x5d] = param_2[0x5d];
    param_1[0x5c] = uVar4;
    *(undefined1 *)(param_1 + 0x5e) = *(undefined1 *)(param_2 + 0x5e);
    uVar4 = param_2[0x5f];
    param_1[0x5f] = uVar4;
    *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
    *(undefined1 *)((long)param_1 + 0x301) = *(undefined1 *)((long)param_2 + 0x301);
    lVar1 = param_2[100];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar4);
    if (lVar1 == 1) {
      uVar4 = param_2[0x61];
      uVar5 = param_2[100];
      uVar7 = param_2[99];
      param_1[0x62] = param_2[0x62];
      param_1[0x61] = uVar4;
      param_1[100] = uVar5;
      param_1[99] = uVar7;
      uVar4 = param_2[0x65];
      param_1[0x66] = param_2[0x66];
      param_1[0x65] = uVar4;
    }
    else {
      *(undefined1 *)(param_1 + 0x61) = *(undefined1 *)(param_2 + 0x61);
      uVar4 = param_2[0x62];
      param_1[99] = param_2[99];
      param_1[0x62] = uVar4;
      param_1[100] = lVar1;
      *(undefined1 *)(param_1 + 0x65) = *(undefined1 *)(param_2 + 0x65);
      uVar4 = param_2[0x66];
      param_1[0x66] = uVar4;
      _swift_bridgeObjectRetain(lVar1);
      _swift_bridgeObjectRetain(uVar4);
    }
    *(undefined1 *)(param_1 + 0x67) = *(undefined1 *)(param_2 + 0x67);
    param_1[0x68] = param_2[0x68];
    param_1[0x69] = param_2[0x69];
    uVar6 = param_2[0x6a];
    param_1[0x6a] = uVar6;
    uVar5 = param_2[0x6b];
    param_1[0x6b] = uVar5;
    uVar7 = param_2[0x6c];
    param_1[0x6c] = uVar7;
    param_1[0x6d] = param_2[0x6d];
    *(undefined1 *)(param_1 + 0x6e) = *(undefined1 *)(param_2 + 0x6e);
    uVar4 = param_2[0x6f];
    *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
    param_1[0x6f] = uVar4;
    param_1[0x71] = param_2[0x71];
    *(undefined1 *)(param_1 + 0x72) = *(undefined1 *)(param_2 + 0x72);
    uVar4 = param_2[0x73];
    param_1[0x73] = uVar4;
    uVar8 = param_2[0x74];
    param_1[0x74] = uVar8;
    uVar9 = param_2[0x79];
    uVar11 = param_2[0x7c];
    uVar10 = param_2[0x7b];
    param_1[0x7a] = param_2[0x7a];
    param_1[0x79] = uVar9;
    param_1[0x7c] = uVar11;
    param_1[0x7b] = uVar10;
    uVar9 = param_2[0x7d];
    uVar11 = param_2[0x80];
    uVar10 = param_2[0x7f];
    param_1[0x7e] = param_2[0x7e];
    param_1[0x7d] = uVar9;
    param_1[0x80] = uVar11;
    param_1[0x7f] = uVar10;
    uVar9 = param_2[0x75];
    uVar11 = param_2[0x78];
    uVar10 = param_2[0x77];
    param_1[0x76] = param_2[0x76];
    param_1[0x75] = uVar9;
    param_1[0x78] = uVar11;
    param_1[0x77] = uVar10;
    param_1[0x81] = param_2[0x81];
    *(undefined1 *)(param_1 + 0x83) = *(undefined1 *)(param_2 + 0x83);
    param_1[0x82] = param_2[0x82];
    uVar9 = param_2[0x84];
    param_1[0x85] = param_2[0x85];
    param_1[0x84] = uVar9;
    uVar9 = param_2[0x86];
    param_1[0x87] = param_2[0x87];
    param_1[0x86] = uVar9;
    uVar9 = param_2[0x88];
    param_1[0x89] = param_2[0x89];
    param_1[0x88] = uVar9;
    uVar9 = param_2[0x8a];
    param_1[0x8a] = uVar9;
    lVar1 = param_2[0x97];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
    if (lVar1 == 1) {
      uVar4 = param_2[0x93];
      uVar5 = param_2[0x96];
      uVar7 = param_2[0x95];
      param_1[0x94] = param_2[0x94];
      param_1[0x93] = uVar4;
      param_1[0x96] = uVar5;
      param_1[0x95] = uVar7;
      uVar4 = param_2[0x97];
      param_1[0x98] = param_2[0x98];
      param_1[0x97] = uVar4;
      *(undefined2 *)(param_1 + 0x99) = *(undefined2 *)(param_2 + 0x99);
      uVar4 = param_2[0x8b];
      uVar5 = param_2[0x8e];
      uVar7 = param_2[0x8d];
      param_1[0x8c] = param_2[0x8c];
      param_1[0x8b] = uVar4;
      param_1[0x8e] = uVar5;
      param_1[0x8d] = uVar7;
      uVar4 = param_2[0x8f];
      uVar5 = param_2[0x92];
      uVar7 = param_2[0x91];
      param_1[0x90] = param_2[0x90];
      param_1[0x8f] = uVar4;
      param_1[0x92] = uVar5;
      param_1[0x91] = uVar7;
    }
    else {
      *(undefined1 *)(param_1 + 0x8b) = *(undefined1 *)(param_2 + 0x8b);
      param_1[0x8c] = param_2[0x8c];
      *(undefined1 *)(param_1 + 0x8d) = *(undefined1 *)(param_2 + 0x8d);
      param_1[0x8e] = param_2[0x8e];
      *(undefined1 *)(param_1 + 0x8f) = *(undefined1 *)(param_2 + 0x8f);
      param_1[0x90] = param_2[0x90];
      *(undefined1 *)(param_1 + 0x91) = *(undefined1 *)(param_2 + 0x91);
      *(undefined1 *)(param_1 + 0x93) = *(undefined1 *)(param_2 + 0x93);
      param_1[0x92] = param_2[0x92];
      param_1[0x94] = param_2[0x94];
      *(undefined1 *)(param_1 + 0x95) = *(undefined1 *)(param_2 + 0x95);
      param_1[0x96] = param_2[0x96];
      param_1[0x97] = lVar1;
      param_1[0x98] = param_2[0x98];
      *(undefined2 *)(param_1 + 0x99) = *(undefined2 *)(param_2 + 0x99);
      _swift_bridgeObjectRetain(lVar1);
    }
    *(undefined1 *)((long)param_1 + 0x4ca) = *(undefined1 *)((long)param_2 + 0x4ca);
    param_1[0x9a] = param_2[0x9a];
    *(undefined2 *)(param_1 + 0xa3) = *(undefined2 *)(param_2 + 0xa3);
    uVar4 = param_2[0x9f];
    uVar5 = param_2[0xa2];
    uVar7 = param_2[0xa1];
    param_1[0xa0] = param_2[0xa0];
    param_1[0x9f] = uVar4;
    param_1[0xa2] = uVar5;
    param_1[0xa1] = uVar7;
    uVar5 = param_2[0x9b];
    uVar7 = param_2[0x9e];
    uVar4 = param_2[0x9d];
    param_1[0x9c] = param_2[0x9c];
    param_1[0x9b] = uVar5;
    param_1[0x9e] = uVar7;
    param_1[0x9d] = uVar4;
    lVar1 = param_2[0xa5];
    _swift_bridgeObjectRetain();
    if (lVar1 == 0) {
      uVar4 = param_2[0xa4];
      uVar5 = param_2[0xa7];
      uVar7 = param_2[0xa6];
      param_1[0xa5] = param_2[0xa5];
      param_1[0xa4] = uVar4;
      param_1[0xa7] = uVar5;
      param_1[0xa6] = uVar7;
      param_1[0xa8] = param_2[0xa8];
    }
    else {
      param_1[0xa4] = param_2[0xa4];
      param_1[0xa5] = lVar1;
      param_1[0xa6] = param_2[0xa6];
      uVar4 = param_2[0xa7];
      param_1[0xa7] = uVar4;
      param_1[0xa8] = param_2[0xa8];
      _swift_bridgeObjectRetain(lVar1);
      _swift_bridgeObjectRetain(uVar4);
    }
    *(undefined1 *)(param_1 + 0xab) = *(undefined1 *)(param_2 + 0xab);
    uVar4 = param_2[0xa9];
    param_1[0xaa] = param_2[0xaa];
    param_1[0xa9] = uVar4;
    param_1[0xac] = param_2[0xac];
    param_1[0xad] = param_2[0xad];
    *(undefined1 *)(param_1 + 0xae) = *(undefined1 *)(param_2 + 0xae);
    uVar4 = param_2[0xaf];
    param_1[0xaf] = uVar4;
    *(undefined1 *)(param_1 + 0xb1) = *(undefined1 *)(param_2 + 0xb1);
    param_1[0xb0] = param_2[0xb0];
    uVar7 = param_2[0xb2];
    param_1[0xb2] = uVar7;
    uVar5 = param_2[0xb3];
    param_1[0xb3] = uVar5;
    uVar6 = param_2[0xb4];
    param_1[0xb4] = uVar6;
    uVar8 = param_2[0xb5];
    param_1[0xb5] = uVar8;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar4);
    _objc_retain(uVar7);
    _objc_retain(uVar5);
    _objc_retain(uVar6);
    _swift_bridgeObjectRetain(uVar8);
  }
  lVar1 = param_2[0xba];
  if (lVar1 == 1) {
    uVar4 = param_2[0xbe];
    uVar5 = param_2[0xc1];
    uVar7 = param_2[0xc0];
    param_1[0xbf] = param_2[0xbf];
    param_1[0xbe] = uVar4;
    param_1[0xc1] = uVar5;
    param_1[0xc0] = uVar7;
    uVar4 = *(undefined8 *)((long)param_2 + 0x609);
    *(undefined8 *)((long)param_1 + 0x611) = *(undefined8 *)((long)param_2 + 0x611);
    *(undefined8 *)((long)param_1 + 0x609) = uVar4;
    uVar4 = param_2[0xb6];
    uVar5 = param_2[0xb9];
    uVar7 = param_2[0xb8];
    param_1[0xb7] = param_2[0xb7];
    param_1[0xb6] = uVar4;
    param_1[0xb9] = uVar5;
    param_1[0xb8] = uVar7;
    uVar5 = param_2[0xba];
    uVar7 = param_2[0xbd];
    uVar4 = param_2[0xbc];
    param_1[0xbb] = param_2[0xbb];
    param_1[0xba] = uVar5;
    param_1[0xbd] = uVar7;
    param_1[0xbc] = uVar4;
  }
  else {
    uVar4 = param_2[0xb6];
    param_1[0xb7] = param_2[0xb7];
    param_1[0xb6] = uVar4;
    *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_2 + 0xb8);
    param_1[0xb9] = param_2[0xb9];
    param_1[0xba] = lVar1;
    *(undefined1 *)(param_1 + 0xbb) = *(undefined1 *)(param_2 + 0xbb);
    param_1[0xbc] = param_2[0xbc];
    *(undefined1 *)(param_1 + 0xbd) = *(undefined1 *)(param_2 + 0xbd);
    param_1[0xbe] = param_2[0xbe];
    *(undefined1 *)(param_1 + 0xbf) = *(undefined1 *)(param_2 + 0xbf);
    uVar4 = param_2[0xc0];
    *(undefined1 *)(param_1 + 0xc1) = *(undefined1 *)(param_2 + 0xc1);
    param_1[0xc0] = uVar4;
    param_1[0xc2] = param_2[0xc2];
    *(undefined1 *)(param_1 + 0xc3) = *(undefined1 *)(param_2 + 0xc3);
    _swift_bridgeObjectRetain();
  }
  lVar1 = param_2[0xca];
  if (lVar1 == 1) {
    _memcpy(param_1 + 0xc4,param_2 + 0xc4,0x301);
  }
  else {
    *(undefined2 *)(param_1 + 0xc4) = *(undefined2 *)(param_2 + 0xc4);
    param_1[0xc5] = param_2[0xc5];
    *(undefined1 *)(param_1 + 0xc6) = *(undefined1 *)(param_2 + 0xc6);
    param_1[199] = param_2[199];
    *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
    param_1[0xc9] = param_2[0xc9];
    param_1[0xca] = lVar1;
    *(undefined1 *)(param_1 + 0xcc) = *(undefined1 *)(param_2 + 0xcc);
    param_1[0xcb] = param_2[0xcb];
    *(undefined1 *)((long)param_1 + 0x661) = *(undefined1 *)((long)param_2 + 0x661);
    param_1[0xcd] = param_2[0xcd];
    uVar7 = param_2[0xce];
    param_1[0xce] = uVar7;
    *(undefined2 *)(param_1 + 0xcf) = *(undefined2 *)(param_2 + 0xcf);
    param_1[0xd0] = param_2[0xd0];
    *(undefined1 *)(param_1 + 0xd1) = *(undefined1 *)(param_2 + 0xd1);
    param_1[0xd2] = param_2[0xd2];
    *(undefined1 *)(param_1 + 0xd3) = *(undefined1 *)(param_2 + 0xd3);
    uVar4 = param_2[0xd4];
    *(undefined1 *)(param_1 + 0xd5) = *(undefined1 *)(param_2 + 0xd5);
    param_1[0xd4] = uVar4;
    *(undefined1 *)((long)param_1 + 0x6a9) = *(undefined1 *)((long)param_2 + 0x6a9);
    lVar1 = param_2[0xe1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar7);
    if (lVar1 == 1) {
      _memcpy(param_1 + 0xd6,param_2 + 0xd6,0x101);
    }
    else {
      param_1[0xd6] = param_2[0xd6];
      *(undefined1 *)(param_1 + 0xd7) = *(undefined1 *)(param_2 + 0xd7);
      param_1[0xd8] = param_2[0xd8];
      *(undefined1 *)(param_1 + 0xd9) = *(undefined1 *)(param_2 + 0xd9);
      param_1[0xda] = param_2[0xda];
      *(undefined1 *)(param_1 + 0xdb) = *(undefined1 *)(param_2 + 0xdb);
      *(undefined1 *)(param_1 + 0xdd) = *(undefined1 *)(param_2 + 0xdd);
      param_1[0xdc] = param_2[0xdc];
      uVar4 = param_2[0xde];
      *(undefined1 *)(param_1 + 0xdf) = *(undefined1 *)(param_2 + 0xdf);
      param_1[0xde] = uVar4;
      *(undefined1 *)((long)param_1 + 0x6f9) = *(undefined1 *)((long)param_2 + 0x6f9);
      param_1[0xe0] = param_2[0xe0];
      param_1[0xe1] = lVar1;
      param_1[0xe2] = param_2[0xe2];
      uVar7 = param_2[0xe3];
      param_1[0xe3] = uVar7;
      param_1[0xe4] = param_2[0xe4];
      *(undefined1 *)(param_1 + 0xe5) = *(undefined1 *)(param_2 + 0xe5);
      *(undefined1 *)(param_1 + 0xe7) = *(undefined1 *)(param_2 + 0xe7);
      param_1[0xe6] = param_2[0xe6];
      *(undefined1 *)(param_1 + 0xe9) = *(undefined1 *)(param_2 + 0xe9);
      param_1[0xe8] = param_2[0xe8];
      *(undefined1 *)(param_1 + 0xeb) = *(undefined1 *)(param_2 + 0xeb);
      param_1[0xea] = param_2[0xea];
      *(undefined1 *)(param_1 + 0xed) = *(undefined1 *)(param_2 + 0xed);
      param_1[0xec] = param_2[0xec];
      param_1[0xee] = param_2[0xee];
      uVar5 = param_2[0xef];
      param_1[0xef] = uVar5;
      uVar4 = param_2[0xf0];
      *(undefined1 *)(param_1 + 0xf1) = *(undefined1 *)(param_2 + 0xf1);
      param_1[0xf0] = uVar4;
      uVar4 = param_2[0xf2];
      *(undefined1 *)(param_1 + 0xf3) = *(undefined1 *)(param_2 + 0xf3);
      param_1[0xf2] = uVar4;
      param_1[0xf4] = param_2[0xf4];
      uVar4 = param_2[0xf5];
      param_1[0xf5] = uVar4;
      *(undefined1 *)(param_1 + 0xf6) = *(undefined1 *)(param_2 + 0xf6);
      _swift_bridgeObjectRetain(lVar1);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar4);
    }
    *(undefined1 *)((long)param_1 + 0x7b1) = *(undefined1 *)((long)param_2 + 0x7b1);
    param_1[0xf7] = param_2[0xf7];
    param_1[0xf8] = param_2[0xf8];
    *(undefined1 *)(param_1 + 0xf9) = *(undefined1 *)(param_2 + 0xf9);
    if (param_2[0xfa] == 1) {
      uVar4 = param_2[0xfa];
      param_1[0xfb] = param_2[0xfb];
      param_1[0xfa] = uVar4;
      param_1[0xfc] = param_2[0xfc];
    }
    else {
      param_1[0xfa] = param_2[0xfa];
      uVar4 = param_2[0xfb];
      param_1[0xfb] = uVar4;
      uVar7 = param_2[0xfc];
      param_1[0xfc] = uVar7;
      _objc_retain();
      _objc_retain(uVar4);
      _objc_retain(uVar7);
    }
    *(undefined1 *)(param_1 + 0xfd) = *(undefined1 *)(param_2 + 0xfd);
    param_1[0xfe] = param_2[0xfe];
    *(undefined1 *)(param_1 + 0xff) = *(undefined1 *)(param_2 + 0xff);
    param_1[0x100] = param_2[0x100];
    *(undefined1 *)(param_1 + 0x101) = *(undefined1 *)(param_2 + 0x101);
    lVar1 = param_2[0x103];
    if (lVar1 == 1) {
      uVar4 = param_2[0x102];
      uVar5 = param_2[0x105];
      uVar7 = param_2[0x104];
      param_1[0x103] = param_2[0x103];
      param_1[0x102] = uVar4;
      param_1[0x105] = uVar5;
      param_1[0x104] = uVar7;
      uVar4 = param_2[0x106];
      param_1[0x107] = param_2[0x107];
      param_1[0x106] = uVar4;
    }
    else {
      *(undefined2 *)(param_1 + 0x102) = *(undefined2 *)(param_2 + 0x102);
      param_1[0x103] = lVar1;
      uVar4 = param_2[0x104];
      param_1[0x104] = uVar4;
      uVar7 = param_2[0x105];
      param_1[0x105] = uVar7;
      *(undefined4 *)(param_1 + 0x106) = *(undefined4 *)(param_2 + 0x106);
      uVar5 = param_2[0x107];
      param_1[0x107] = uVar5;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar5);
    }
    param_1[0x108] = param_2[0x108];
    *(undefined1 *)(param_1 + 0x109) = *(undefined1 *)(param_2 + 0x109);
    param_1[0x10a] = param_2[0x10a];
    *(undefined2 *)(param_1 + 0x10b) = *(undefined2 *)(param_2 + 0x10b);
    if (param_2[0x10c] == 0) {
      uVar4 = param_2[0x10c];
      param_1[0x10d] = param_2[0x10d];
      param_1[0x10c] = uVar4;
      param_1[0x10e] = param_2[0x10e];
    }
    else {
      param_1[0x10c] = param_2[0x10c];
      uVar4 = param_2[0x10d];
      param_1[0x10d] = uVar4;
      uVar7 = param_2[0x10e];
      param_1[0x10e] = uVar7;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar7);
    }
    param_1[0x10f] = param_2[0x10f];
    param_1[0x110] = param_2[0x110];
    uVar4 = param_2[0x111];
    param_1[0x111] = uVar4;
    *(undefined1 *)(param_1 + 0x112) = *(undefined1 *)(param_2 + 0x112);
    *(undefined2 *)((long)param_1 + 0x891) = *(undefined2 *)((long)param_2 + 0x891);
    param_1[0x113] = param_2[0x113];
    *(undefined1 *)(param_1 + 0x114) = *(undefined1 *)(param_2 + 0x114);
    param_1[0x115] = param_2[0x115];
    uVar7 = param_2[0x116];
    param_1[0x117] = param_2[0x117];
    param_1[0x116] = uVar7;
    *(undefined2 *)(param_1 + 0x118) = *(undefined2 *)(param_2 + 0x118);
    param_1[0x119] = param_2[0x119];
    *(undefined4 *)(param_1 + 0x11a) = *(undefined4 *)(param_2 + 0x11a);
    param_1[0x11b] = param_2[0x11b];
    *(undefined1 *)(param_1 + 0x11c) = *(undefined1 *)(param_2 + 0x11c);
    param_1[0x11d] = param_2[0x11d];
    *(undefined1 *)(param_1 + 0x11e) = *(undefined1 *)(param_2 + 0x11e);
    *(undefined1 *)(param_1 + 0x120) = *(undefined1 *)(param_2 + 0x120);
    param_1[0x11f] = param_2[0x11f];
    param_1[0x121] = param_2[0x121];
    uVar7 = param_2[0x122];
    param_1[0x122] = uVar7;
    *(undefined1 *)(param_1 + 0x124) = *(undefined1 *)(param_2 + 0x124);
    param_1[0x123] = param_2[0x123];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar7);
  }
  if (param_2[0x125] == 1) {
    uVar4 = param_2[0x125];
    param_1[0x126] = param_2[0x126];
    param_1[0x125] = uVar4;
  }
  else {
    param_1[0x125] = param_2[0x125];
    param_1[0x126] = param_2[0x126];
    _swift_bridgeObjectRetain();
  }
  lVar1 = param_2[0x127];
  if (lVar1 != 1) {
    _swift_bridgeObjectRetain();
  }
  param_1[0x127] = lVar1;
  param_1[0x128] = lVar2;
  *(undefined2 *)(param_1 + 0x129) = *(undefined2 *)(param_2 + 0x129);
  lVar1 = param_2[0x12a];
  _objc_retain(lVar2);
  if (lVar1 == 0) {
    uVar4 = param_2[0x12e];
    uVar5 = param_2[0x131];
    uVar7 = param_2[0x130];
    param_1[0x12f] = param_2[0x12f];
    param_1[0x12e] = uVar4;
    param_1[0x131] = uVar5;
    param_1[0x130] = uVar7;
    uVar4 = param_2[0x132];
    param_1[0x133] = param_2[0x133];
    param_1[0x132] = uVar4;
    uVar5 = param_2[0x12a];
    uVar7 = param_2[0x12d];
    uVar4 = param_2[300];
    param_1[299] = param_2[299];
    param_1[0x12a] = uVar5;
    param_1[0x12d] = uVar7;
    param_1[300] = uVar4;
  }
  else {
    if (lVar1 == 1) {
      uVar4 = param_2[0x12e];
      uVar5 = param_2[0x131];
      uVar7 = param_2[0x130];
      param_1[0x12f] = param_2[0x12f];
      param_1[0x12e] = uVar4;
      param_1[0x131] = uVar5;
      param_1[0x130] = uVar7;
      uVar4 = param_2[0x132];
      uVar5 = param_2[0x135];
      uVar7 = param_2[0x134];
      param_1[0x133] = param_2[0x133];
      param_1[0x132] = uVar4;
      param_1[0x135] = uVar5;
      param_1[0x134] = uVar7;
      uVar4 = param_2[0x12a];
      uVar5 = param_2[0x12d];
      uVar7 = param_2[300];
      param_1[299] = param_2[299];
      param_1[0x12a] = uVar4;
      param_1[0x12d] = uVar5;
      param_1[300] = uVar7;
      goto LAB_104263a84;
    }
    param_1[0x12a] = lVar1;
    uVar4 = param_2[299];
    param_1[299] = uVar4;
    param_1[300] = param_2[300];
    *(undefined1 *)(param_1 + 0x12d) = *(undefined1 *)(param_2 + 0x12d);
    uVar7 = param_2[0x12e];
    param_1[0x12f] = param_2[0x12f];
    param_1[0x12e] = uVar7;
    uVar3 = param_2[0x131];
    _swift_bridgeObjectRetain(lVar1);
    _swift_bridgeObjectRetain(uVar4);
    if (uVar3 >> 0x3c < 0xf) {
      uVar4 = param_2[0x130];
      func_0x00010006c00c(uVar4,uVar3);
      param_1[0x130] = uVar4;
      param_1[0x131] = uVar3;
    }
    else {
      uVar4 = param_2[0x130];
      param_1[0x131] = param_2[0x131];
      param_1[0x130] = uVar4;
    }
    uVar4 = param_2[0x132];
    param_1[0x133] = param_2[0x133];
    param_1[0x132] = uVar4;
  }
  uVar3 = param_2[0x135];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0x134];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0x134] = uVar4;
    param_1[0x135] = uVar3;
  }
  else {
    uVar4 = param_2[0x134];
    param_1[0x135] = param_2[0x135];
    param_1[0x134] = uVar4;
  }
LAB_104263a84:
  lVar2 = param_2[0x13a];
  if (lVar2 == 1) {
    uVar4 = param_2[0x146];
    uVar5 = param_2[0x149];
    uVar7 = param_2[0x148];
    param_1[0x147] = param_2[0x147];
    param_1[0x146] = uVar4;
    param_1[0x149] = uVar5;
    param_1[0x148] = uVar7;
    uVar4 = param_2[0x14a];
    param_1[0x14b] = param_2[0x14b];
    param_1[0x14a] = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 0xa59);
    *(undefined8 *)((long)param_1 + 0xa61) = *(undefined8 *)((long)param_2 + 0xa61);
    *(undefined8 *)((long)param_1 + 0xa59) = uVar4;
    uVar4 = param_2[0x13e];
    uVar5 = param_2[0x141];
    uVar7 = param_2[0x140];
    param_1[0x13f] = param_2[0x13f];
    param_1[0x13e] = uVar4;
    param_1[0x141] = uVar5;
    param_1[0x140] = uVar7;
    uVar4 = param_2[0x142];
    uVar5 = param_2[0x145];
    uVar7 = param_2[0x144];
    param_1[0x143] = param_2[0x143];
    param_1[0x142] = uVar4;
    param_1[0x145] = uVar5;
    param_1[0x144] = uVar7;
    uVar4 = param_2[0x136];
    uVar5 = param_2[0x139];
    uVar7 = param_2[0x138];
    param_1[0x137] = param_2[0x137];
    param_1[0x136] = uVar4;
    param_1[0x139] = uVar5;
    param_1[0x138] = uVar7;
    uVar4 = param_2[0x13a];
    uVar5 = param_2[0x13d];
    uVar7 = param_2[0x13c];
    param_1[0x13b] = param_2[0x13b];
    param_1[0x13a] = uVar4;
    param_1[0x13d] = uVar5;
    param_1[0x13c] = uVar7;
  }
  else {
    *(undefined2 *)(param_1 + 0x136) = *(undefined2 *)(param_2 + 0x136);
    param_1[0x137] = param_2[0x137];
    *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
    param_1[0x139] = param_2[0x139];
    param_1[0x13a] = lVar2;
    lVar2 = param_2[0x143];
    _swift_bridgeObjectRetain();
    if (lVar2 == 1) {
      uVar4 = param_2[0x143];
      uVar5 = param_2[0x146];
      uVar7 = param_2[0x145];
      param_1[0x144] = param_2[0x144];
      param_1[0x143] = uVar4;
      param_1[0x146] = uVar5;
      param_1[0x145] = uVar7;
      *(undefined1 *)(param_1 + 0x147) = *(undefined1 *)(param_2 + 0x147);
      uVar4 = param_2[0x13b];
      uVar5 = param_2[0x13e];
      uVar7 = param_2[0x13d];
      param_1[0x13c] = param_2[0x13c];
      param_1[0x13b] = uVar4;
      param_1[0x13e] = uVar5;
      param_1[0x13d] = uVar7;
      uVar5 = param_2[0x13f];
      uVar7 = param_2[0x142];
      uVar4 = param_2[0x141];
      param_1[0x140] = param_2[0x140];
      param_1[0x13f] = uVar5;
      param_1[0x142] = uVar7;
      param_1[0x141] = uVar4;
    }
    else {
      param_1[0x13b] = param_2[0x13b];
      *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)(param_2 + 0x13c);
      param_1[0x13d] = param_2[0x13d];
      *(undefined1 *)(param_1 + 0x13e) = *(undefined1 *)(param_2 + 0x13e);
      param_1[0x13f] = param_2[0x13f];
      *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
      *(undefined1 *)(param_1 + 0x142) = *(undefined1 *)(param_2 + 0x142);
      param_1[0x141] = param_2[0x141];
      param_1[0x143] = lVar2;
      *(undefined1 *)(param_1 + 0x145) = *(undefined1 *)(param_2 + 0x145);
      param_1[0x144] = param_2[0x144];
      *(undefined1 *)(param_1 + 0x147) = *(undefined1 *)(param_2 + 0x147);
      param_1[0x146] = param_2[0x146];
      _objc_retain(lVar2);
    }
    param_1[0x148] = param_2[0x148];
    *(undefined1 *)(param_1 + 0x149) = *(undefined1 *)(param_2 + 0x149);
    param_1[0x14a] = param_2[0x14a];
    *(undefined1 *)(param_1 + 0x14b) = *(undefined1 *)(param_2 + 0x14b);
    param_1[0x14c] = param_2[0x14c];
    *(undefined1 *)(param_1 + 0x14d) = *(undefined1 *)(param_2 + 0x14d);
  }
  if (param_2[0x14e] == 1) {
    uVar4 = param_2[0x14e];
    param_1[0x14f] = param_2[0x14f];
    param_1[0x14e] = uVar4;
    *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
  }
  else {
    param_1[0x14e] = param_2[0x14e];
    param_1[0x14f] = param_2[0x14f];
    *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
    _swift_bridgeObjectRetain();
  }
  lVar2 = param_2[0x153];
  if (lVar2 == 1) {
    uVar4 = param_2[0x151];
    param_1[0x152] = param_2[0x152];
    param_1[0x151] = uVar4;
    param_1[0x153] = param_2[0x153];
  }
  else {
    param_1[0x151] = param_2[0x151];
    param_1[0x152] = param_2[0x152];
    param_1[0x153] = lVar2;
    _swift_bridgeObjectRetain();
  }
  param_1[0x154] = param_2[0x154];
  param_1[0x155] = param_2[0x155];
  *(undefined2 *)(param_1 + 0x156) = *(undefined2 *)(param_2 + 0x156);
  _objc_retain();
  return param_1;
}



/* Entry: 1042672d0; end: 104268333;  */

undefined8 * FUN_1042672d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_1[0x128] == 1) {
LAB_10426730c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0xab2);
    return param_1;
  }
  if (param_2[0x128] == 1) {
    func_0x00010179528c(param_1);
    goto LAB_10426730c;
  }
  *param_1 = *param_2;
  lVar4 = param_1[2];
  if (lVar4 == 1) {
LAB_104267370:
    _memcpy(param_1 + 1,param_2 + 1,0x5a8);
  }
  else {
    lVar7 = param_2[2];
    if (lVar7 == 1) {
      func_0x00010178e3b8(param_1 + 1);
      goto LAB_104267370;
    }
    param_1[1] = param_2[1];
    param_1[2] = lVar7;
    _swift_bridgeObjectRelease(lVar4,param_2 + 1);
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    uVar6 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar6;
    uVar6 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar6;
    uVar6 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar6;
    uVar6 = param_1[0xb];
    param_1[0xb] = param_2[0xb];
    _swift_bridgeObjectRelease(uVar6);
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    uVar6 = param_2[0xf];
    uVar5 = param_1[0xf];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = uVar6;
    _swift_bridgeObjectRelease(uVar5);
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    if (param_1[0x12] == 0) {
LAB_104267468:
      uVar6 = param_2[0x1b];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar6;
      uVar6 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar6;
      uVar6 = param_2[0x1f];
      param_1[0x20] = param_2[0x20];
      param_1[0x1f] = uVar6;
      param_1[0x21] = param_2[0x21];
      uVar6 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar6;
      uVar6 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar6;
      uVar6 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar6;
      uVar6 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar6;
      uVar6 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar6;
    }
    else {
      lVar4 = param_2[0x12];
      if (lVar4 == 0) {
        func_0x0001018657d8(param_1 + 0x11);
        goto LAB_104267468;
      }
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = lVar4;
      _swift_bridgeObjectRelease();
      uVar6 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar6;
      uVar6 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar6;
      uVar6 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar6;
      uVar6 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar6;
      param_1[0x1b] = param_2[0x1b];
      *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
      uVar6 = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1d] = uVar6;
      uVar6 = param_2[0x20];
      uVar5 = param_1[0x20];
      param_1[0x1f] = param_2[0x1f];
      param_1[0x20] = uVar6;
      _swift_bridgeObjectRelease(uVar5);
      uVar6 = param_1[0x21];
      param_1[0x21] = param_2[0x21];
      _swift_bridgeObjectRelease(uVar6);
    }
    *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
    uVar6 = param_2[0x23];
    param_1[0x24] = param_2[0x24];
    param_1[0x23] = uVar6;
    uVar6 = *(undefined8 *)((long)param_2 + 0x124);
    *(undefined8 *)((long)param_1 + 300) = *(undefined8 *)((long)param_2 + 300);
    *(undefined8 *)((long)param_1 + 0x124) = uVar6;
    param_1[0x27] = param_2[0x27];
    uVar6 = param_2[0x34];
    uVar9 = param_2[0x37];
    uVar5 = param_2[0x36];
    param_1[0x35] = param_2[0x35];
    param_1[0x34] = uVar6;
    param_1[0x37] = uVar9;
    param_1[0x36] = uVar5;
    *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
    uVar6 = param_2[0x2c];
    uVar9 = param_2[0x2f];
    uVar5 = param_2[0x2e];
    param_1[0x2d] = param_2[0x2d];
    param_1[0x2c] = uVar6;
    param_1[0x2f] = uVar9;
    param_1[0x2e] = uVar5;
    uVar9 = param_2[0x30];
    uVar5 = param_2[0x33];
    uVar6 = param_2[0x32];
    param_1[0x31] = param_2[0x31];
    param_1[0x30] = uVar9;
    param_1[0x33] = uVar5;
    param_1[0x32] = uVar6;
    uVar9 = param_2[0x28];
    uVar5 = param_2[0x2b];
    uVar6 = param_2[0x2a];
    param_1[0x29] = param_2[0x29];
    param_1[0x28] = uVar9;
    param_1[0x2b] = uVar5;
    param_1[0x2a] = uVar6;
    uVar6 = param_2[0x41];
    uVar9 = param_2[0x44];
    uVar5 = param_2[0x43];
    param_1[0x42] = param_2[0x42];
    param_1[0x41] = uVar6;
    param_1[0x44] = uVar9;
    param_1[0x43] = uVar5;
    uVar6 = param_2[0x45];
    param_1[0x46] = param_2[0x46];
    param_1[0x45] = uVar6;
    uVar6 = *(undefined8 *)((long)param_2 + 0x231);
    *(undefined8 *)((long)param_1 + 0x239) = *(undefined8 *)((long)param_2 + 0x239);
    *(undefined8 *)((long)param_1 + 0x231) = uVar6;
    uVar6 = param_2[0x39];
    uVar9 = param_2[0x3c];
    uVar5 = param_2[0x3b];
    param_1[0x3a] = param_2[0x3a];
    param_1[0x39] = uVar6;
    param_1[0x3c] = uVar9;
    param_1[0x3b] = uVar5;
    uVar6 = param_2[0x3d];
    uVar9 = param_2[0x40];
    uVar5 = param_2[0x3f];
    param_1[0x3e] = param_2[0x3e];
    param_1[0x3d] = uVar6;
    param_1[0x40] = uVar9;
    param_1[0x3f] = uVar5;
    uVar5 = param_2[0x4a];
    uVar6 = param_2[0x49];
    uVar10 = param_2[0x4c];
    uVar9 = param_2[0x4b];
    uVar11 = param_2[0x4d];
    uVar13 = param_2[0x50];
    uVar12 = param_2[0x4f];
    param_1[0x4e] = param_2[0x4e];
    param_1[0x4d] = uVar11;
    param_1[0x50] = uVar13;
    param_1[0x4f] = uVar12;
    param_1[0x4a] = uVar5;
    param_1[0x49] = uVar6;
    param_1[0x4c] = uVar10;
    param_1[0x4b] = uVar9;
    uVar5 = param_2[0x52];
    uVar6 = param_2[0x51];
    uVar10 = param_2[0x54];
    uVar9 = param_2[0x53];
    uVar12 = param_2[0x56];
    uVar11 = param_2[0x55];
    uVar13 = *(undefined8 *)((long)param_2 + 0x2b2);
    *(undefined8 *)((long)param_1 + 0x2ba) = *(undefined8 *)((long)param_2 + 0x2ba);
    *(undefined8 *)((long)param_1 + 0x2b2) = uVar13;
    param_1[0x54] = uVar10;
    param_1[0x53] = uVar9;
    param_1[0x56] = uVar12;
    param_1[0x55] = uVar11;
    param_1[0x52] = uVar5;
    param_1[0x51] = uVar6;
    uVar6 = param_1[0x59];
    param_1[0x59] = param_2[0x59];
    _swift_bridgeObjectRelease(uVar6);
    param_1[0x5a] = param_2[0x5a];
    *(undefined1 *)(param_1 + 0x5b) = *(undefined1 *)(param_2 + 0x5b);
    *(undefined1 *)((long)param_1 + 0x2d9) = *(undefined1 *)((long)param_2 + 0x2d9);
    uVar6 = param_2[0x5c];
    param_1[0x5d] = param_2[0x5d];
    param_1[0x5c] = uVar6;
    *(undefined1 *)(param_1 + 0x5e) = *(undefined1 *)(param_2 + 0x5e);
    uVar6 = param_1[0x5f];
    param_1[0x5f] = param_2[0x5f];
    _swift_bridgeObjectRelease(uVar6);
    *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
    *(undefined1 *)((long)param_1 + 0x301) = *(undefined1 *)((long)param_2 + 0x301);
    if (param_1[100] == 1) {
LAB_1042675e0:
      uVar6 = param_2[0x61];
      uVar9 = param_2[100];
      uVar5 = param_2[99];
      param_1[0x62] = param_2[0x62];
      param_1[0x61] = uVar6;
      param_1[100] = uVar9;
      param_1[99] = uVar5;
      uVar6 = param_2[0x65];
      param_1[0x66] = param_2[0x66];
      param_1[0x65] = uVar6;
    }
    else {
      lVar4 = param_2[100];
      if (lVar4 == 1) {
        func_0x00010186580c(param_1 + 0x61);
        goto LAB_1042675e0;
      }
      *(undefined1 *)(param_1 + 0x61) = *(undefined1 *)(param_2 + 0x61);
      param_1[0x62] = param_2[0x62];
      param_1[99] = param_2[99];
      param_1[100] = lVar4;
      _swift_bridgeObjectRelease();
      *(undefined1 *)(param_1 + 0x65) = *(undefined1 *)(param_2 + 0x65);
      uVar6 = param_1[0x66];
      param_1[0x66] = param_2[0x66];
      _swift_bridgeObjectRelease(uVar6);
    }
    *(undefined1 *)(param_1 + 0x67) = *(undefined1 *)(param_2 + 0x67);
    uVar6 = param_1[0x68];
    param_1[0x68] = param_2[0x68];
    _swift_bridgeObjectRelease(uVar6);
    param_1[0x69] = param_2[0x69];
    uVar6 = param_1[0x6a];
    param_1[0x6a] = param_2[0x6a];
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = param_1[0x6b];
    param_1[0x6b] = param_2[0x6b];
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = param_1[0x6c];
    param_1[0x6c] = param_2[0x6c];
    _swift_bridgeObjectRelease(uVar6);
    param_1[0x6d] = param_2[0x6d];
    *(undefined1 *)(param_1 + 0x6e) = *(undefined1 *)(param_2 + 0x6e);
    param_1[0x6f] = param_2[0x6f];
    *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
    param_1[0x71] = param_2[0x71];
    *(undefined1 *)(param_1 + 0x72) = *(undefined1 *)(param_2 + 0x72);
    uVar6 = param_1[0x73];
    param_1[0x73] = param_2[0x73];
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = param_1[0x74];
    param_1[0x74] = param_2[0x74];
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = param_2[0x79];
    uVar9 = param_2[0x7c];
    uVar5 = param_2[0x7b];
    param_1[0x7a] = param_2[0x7a];
    param_1[0x79] = uVar6;
    param_1[0x7c] = uVar9;
    param_1[0x7b] = uVar5;
    uVar6 = param_2[0x7d];
    uVar9 = param_2[0x80];
    uVar5 = param_2[0x7f];
    param_1[0x7e] = param_2[0x7e];
    param_1[0x7d] = uVar6;
    param_1[0x80] = uVar9;
    param_1[0x7f] = uVar5;
    uVar6 = param_2[0x75];
    uVar9 = param_2[0x78];
    uVar5 = param_2[0x77];
    param_1[0x76] = param_2[0x76];
    param_1[0x75] = uVar6;
    param_1[0x78] = uVar9;
    param_1[0x77] = uVar5;
    param_1[0x81] = param_2[0x81];
    *(undefined1 *)(param_1 + 0x83) = *(undefined1 *)(param_2 + 0x83);
    param_1[0x82] = param_2[0x82];
    uVar6 = param_2[0x84];
    param_1[0x85] = param_2[0x85];
    param_1[0x84] = uVar6;
    uVar6 = param_2[0x86];
    param_1[0x87] = param_2[0x87];
    param_1[0x86] = uVar6;
    uVar6 = param_2[0x88];
    param_1[0x89] = param_2[0x89];
    param_1[0x88] = uVar6;
    uVar6 = param_1[0x8a];
    param_1[0x8a] = param_2[0x8a];
    _swift_bridgeObjectRelease(uVar6);
    if (param_1[0x97] == 1) {
LAB_104267754:
      uVar6 = param_2[0x93];
      uVar9 = param_2[0x96];
      uVar5 = param_2[0x95];
      param_1[0x94] = param_2[0x94];
      param_1[0x93] = uVar6;
      param_1[0x96] = uVar9;
      param_1[0x95] = uVar5;
      uVar6 = param_2[0x97];
      param_1[0x98] = param_2[0x98];
      param_1[0x97] = uVar6;
      *(undefined2 *)(param_1 + 0x99) = *(undefined2 *)(param_2 + 0x99);
      uVar6 = param_2[0x8b];
      uVar9 = param_2[0x8e];
      uVar5 = param_2[0x8d];
      param_1[0x8c] = param_2[0x8c];
      param_1[0x8b] = uVar6;
      param_1[0x8e] = uVar9;
      param_1[0x8d] = uVar5;
      uVar6 = param_2[0x8f];
      uVar9 = param_2[0x92];
      uVar5 = param_2[0x91];
      param_1[0x90] = param_2[0x90];
      param_1[0x8f] = uVar6;
      param_1[0x92] = uVar9;
      param_1[0x91] = uVar5;
    }
    else {
      lVar4 = param_2[0x97];
      if (lVar4 == 1) {
        func_0x000101865840(param_1 + 0x8b);
        goto LAB_104267754;
      }
      *(undefined1 *)(param_1 + 0x8b) = *(undefined1 *)(param_2 + 0x8b);
      param_1[0x8c] = param_2[0x8c];
      *(undefined1 *)(param_1 + 0x8d) = *(undefined1 *)(param_2 + 0x8d);
      param_1[0x8e] = param_2[0x8e];
      *(undefined1 *)(param_1 + 0x8f) = *(undefined1 *)(param_2 + 0x8f);
      param_1[0x90] = param_2[0x90];
      *(undefined1 *)(param_1 + 0x91) = *(undefined1 *)(param_2 + 0x91);
      *(undefined1 *)(param_1 + 0x93) = *(undefined1 *)(param_2 + 0x93);
      param_1[0x92] = param_2[0x92];
      param_1[0x94] = param_2[0x94];
      *(undefined1 *)(param_1 + 0x95) = *(undefined1 *)(param_2 + 0x95);
      param_1[0x96] = param_2[0x96];
      param_1[0x97] = lVar4;
      _swift_bridgeObjectRelease();
      param_1[0x98] = param_2[0x98];
      *(undefined2 *)(param_1 + 0x99) = *(undefined2 *)(param_2 + 0x99);
    }
    *(undefined1 *)((long)param_1 + 0x4ca) = *(undefined1 *)((long)param_2 + 0x4ca);
    uVar6 = param_1[0x9a];
    param_1[0x9a] = param_2[0x9a];
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = param_2[0x9f];
    uVar9 = param_2[0xa2];
    uVar5 = param_2[0xa1];
    param_1[0xa0] = param_2[0xa0];
    param_1[0x9f] = uVar6;
    param_1[0xa2] = uVar9;
    param_1[0xa1] = uVar5;
    *(undefined2 *)(param_1 + 0xa3) = *(undefined2 *)(param_2 + 0xa3);
    uVar9 = param_2[0x9b];
    uVar5 = param_2[0x9e];
    uVar6 = param_2[0x9d];
    param_1[0x9c] = param_2[0x9c];
    param_1[0x9b] = uVar9;
    param_1[0x9e] = uVar5;
    param_1[0x9d] = uVar6;
    if (param_1[0xa5] == 0) {
LAB_104267884:
      uVar6 = param_2[0xa4];
      uVar9 = param_2[0xa7];
      uVar5 = param_2[0xa6];
      param_1[0xa5] = param_2[0xa5];
      param_1[0xa4] = uVar6;
      param_1[0xa7] = uVar9;
      param_1[0xa6] = uVar5;
      param_1[0xa8] = param_2[0xa8];
    }
    else {
      lVar4 = param_2[0xa5];
      if (lVar4 == 0) {
        func_0x000101865874(param_1 + 0xa4);
        goto LAB_104267884;
      }
      param_1[0xa4] = param_2[0xa4];
      param_1[0xa5] = lVar4;
      _swift_bridgeObjectRelease();
      param_1[0xa6] = param_2[0xa6];
      uVar6 = param_1[0xa7];
      param_1[0xa7] = param_2[0xa7];
      _swift_bridgeObjectRelease(uVar6);
      param_1[0xa8] = param_2[0xa8];
    }
    *(undefined1 *)(param_1 + 0xab) = *(undefined1 *)(param_2 + 0xab);
    uVar6 = param_2[0xa9];
    param_1[0xaa] = param_2[0xaa];
    param_1[0xa9] = uVar6;
    uVar6 = param_1[0xac];
    param_1[0xac] = param_2[0xac];
    _swift_bridgeObjectRelease(uVar6);
    param_1[0xad] = param_2[0xad];
    *(undefined1 *)(param_1 + 0xae) = *(undefined1 *)(param_2 + 0xae);
    uVar6 = param_1[0xaf];
    param_1[0xaf] = param_2[0xaf];
    _swift_bridgeObjectRelease(uVar6);
    param_1[0xb0] = param_2[0xb0];
    *(undefined1 *)(param_1 + 0xb1) = *(undefined1 *)(param_2 + 0xb1);
    uVar6 = param_1[0xb2];
    param_1[0xb2] = param_2[0xb2];
    _objc_release(uVar6);
    uVar6 = param_1[0xb3];
    param_1[0xb3] = param_2[0xb3];
    _objc_release(uVar6);
    uVar6 = param_1[0xb4];
    param_1[0xb4] = param_2[0xb4];
    _objc_release(uVar6);
    uVar6 = param_1[0xb5];
    param_1[0xb5] = param_2[0xb5];
    _swift_bridgeObjectRelease(uVar6);
  }
  if (param_1[0xba] == 1) {
LAB_104267954:
    uVar6 = param_2[0xbe];
    uVar9 = param_2[0xc1];
    uVar5 = param_2[0xc0];
    param_1[0xbf] = param_2[0xbf];
    param_1[0xbe] = uVar6;
    param_1[0xc1] = uVar9;
    param_1[0xc0] = uVar5;
    uVar6 = *(undefined8 *)((long)param_2 + 0x609);
    *(undefined8 *)((long)param_1 + 0x611) = *(undefined8 *)((long)param_2 + 0x611);
    *(undefined8 *)((long)param_1 + 0x609) = uVar6;
    uVar6 = param_2[0xb6];
    uVar9 = param_2[0xb9];
    uVar5 = param_2[0xb8];
    param_1[0xb7] = param_2[0xb7];
    param_1[0xb6] = uVar6;
    param_1[0xb9] = uVar9;
    param_1[0xb8] = uVar5;
    uVar9 = param_2[0xba];
    uVar5 = param_2[0xbd];
    uVar6 = param_2[0xbc];
    param_1[0xbb] = param_2[0xbb];
    param_1[0xba] = uVar9;
    param_1[0xbd] = uVar5;
    param_1[0xbc] = uVar6;
  }
  else {
    lVar4 = param_2[0xba];
    if (lVar4 == 1) {
      func_0x00010178e348(param_1 + 0xb6);
      goto LAB_104267954;
    }
    uVar6 = param_2[0xb6];
    param_1[0xb7] = param_2[0xb7];
    param_1[0xb6] = uVar6;
    *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
    *(undefined1 *)((long)param_1 + 0x5c1) = *(undefined1 *)((long)param_2 + 0x5c1);
    param_1[0xb9] = param_2[0xb9];
    param_1[0xba] = lVar4;
    _swift_bridgeObjectRelease();
    *(undefined1 *)(param_1 + 0xbb) = *(undefined1 *)(param_2 + 0xbb);
    param_1[0xbc] = param_2[0xbc];
    *(undefined1 *)(param_1 + 0xbd) = *(undefined1 *)(param_2 + 0xbd);
    param_1[0xbe] = param_2[0xbe];
    *(undefined1 *)(param_1 + 0xbf) = *(undefined1 *)(param_2 + 0xbf);
    param_1[0xc0] = param_2[0xc0];
    *(undefined1 *)(param_1 + 0xc1) = *(undefined1 *)(param_2 + 0xc1);
    *(undefined1 *)(param_1 + 0xc3) = *(undefined1 *)(param_2 + 0xc3);
    param_1[0xc2] = param_2[0xc2];
  }
  if (param_1[0xca] == 1) {
LAB_104267a08:
    _memcpy(param_1 + 0xc4,param_2 + 0xc4,0x301);
  }
  else {
    lVar4 = param_2[0xca];
    if (lVar4 == 1) {
      func_0x00010178e244(param_1 + 0xc4);
      goto LAB_104267a08;
    }
    *(undefined1 *)(param_1 + 0xc4) = *(undefined1 *)(param_2 + 0xc4);
    *(undefined1 *)((long)param_1 + 0x621) = *(undefined1 *)((long)param_2 + 0x621);
    param_1[0xc5] = param_2[0xc5];
    *(undefined1 *)(param_1 + 0xc6) = *(undefined1 *)(param_2 + 0xc6);
    param_1[199] = param_2[199];
    *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
    param_1[0xc9] = param_2[0xc9];
    param_1[0xca] = lVar4;
    _swift_bridgeObjectRelease();
    param_1[0xcb] = param_2[0xcb];
    *(undefined1 *)(param_1 + 0xcc) = *(undefined1 *)(param_2 + 0xcc);
    *(undefined1 *)((long)param_1 + 0x661) = *(undefined1 *)((long)param_2 + 0x661);
    param_1[0xcd] = param_2[0xcd];
    uVar6 = param_1[0xce];
    param_1[0xce] = param_2[0xce];
    _swift_bridgeObjectRelease(uVar6);
    *(undefined1 *)(param_1 + 0xcf) = *(undefined1 *)(param_2 + 0xcf);
    *(undefined1 *)((long)param_1 + 0x679) = *(undefined1 *)((long)param_2 + 0x679);
    param_1[0xd0] = param_2[0xd0];
    *(undefined1 *)(param_1 + 0xd1) = *(undefined1 *)(param_2 + 0xd1);
    param_1[0xd2] = param_2[0xd2];
    *(undefined1 *)(param_1 + 0xd3) = *(undefined1 *)(param_2 + 0xd3);
    param_1[0xd4] = param_2[0xd4];
    *(undefined1 *)(param_1 + 0xd5) = *(undefined1 *)(param_2 + 0xd5);
    *(undefined1 *)((long)param_1 + 0x6a9) = *(undefined1 *)((long)param_2 + 0x6a9);
    puVar1 = param_1 + 0xd6;
    if (param_1[0xe1] == 1) {
LAB_104267b10:
      _memcpy(puVar1,param_2 + 0xd6,0x101);
    }
    else {
      lVar4 = param_2[0xe1];
      if (lVar4 == 1) {
        func_0x0001017e2180(puVar1);
        goto LAB_104267b10;
      }
      *puVar1 = param_2[0xd6];
      *(undefined1 *)(param_1 + 0xd7) = *(undefined1 *)(param_2 + 0xd7);
      param_1[0xd8] = param_2[0xd8];
      *(undefined1 *)(param_1 + 0xd9) = *(undefined1 *)(param_2 + 0xd9);
      param_1[0xda] = param_2[0xda];
      *(undefined1 *)(param_1 + 0xdb) = *(undefined1 *)(param_2 + 0xdb);
      *(undefined1 *)(param_1 + 0xdd) = *(undefined1 *)(param_2 + 0xdd);
      param_1[0xdc] = param_2[0xdc];
      uVar6 = param_2[0xde];
      *(undefined1 *)(param_1 + 0xdf) = *(undefined1 *)(param_2 + 0xdf);
      param_1[0xde] = uVar6;
      *(undefined1 *)((long)param_1 + 0x6f9) = *(undefined1 *)((long)param_2 + 0x6f9);
      param_1[0xe0] = param_2[0xe0];
      param_1[0xe1] = lVar4;
      _swift_bridgeObjectRelease();
      param_1[0xe2] = param_2[0xe2];
      uVar6 = param_1[0xe3];
      param_1[0xe3] = param_2[0xe3];
      _swift_bridgeObjectRelease(uVar6);
      param_1[0xe4] = param_2[0xe4];
      *(undefined1 *)(param_1 + 0xe5) = *(undefined1 *)(param_2 + 0xe5);
      param_1[0xe6] = param_2[0xe6];
      *(undefined1 *)(param_1 + 0xe7) = *(undefined1 *)(param_2 + 0xe7);
      param_1[0xe8] = param_2[0xe8];
      *(undefined1 *)(param_1 + 0xe9) = *(undefined1 *)(param_2 + 0xe9);
      *(undefined1 *)(param_1 + 0xeb) = *(undefined1 *)(param_2 + 0xeb);
      param_1[0xea] = param_2[0xea];
      uVar6 = param_2[0xec];
      *(undefined1 *)(param_1 + 0xed) = *(undefined1 *)(param_2 + 0xed);
      param_1[0xec] = uVar6;
      param_1[0xee] = param_2[0xee];
      uVar6 = param_1[0xef];
      param_1[0xef] = param_2[0xef];
      _swift_bridgeObjectRelease(uVar6);
      param_1[0xf0] = param_2[0xf0];
      *(undefined1 *)(param_1 + 0xf1) = *(undefined1 *)(param_2 + 0xf1);
      param_1[0xf2] = param_2[0xf2];
      *(undefined1 *)(param_1 + 0xf3) = *(undefined1 *)(param_2 + 0xf3);
      param_1[0xf4] = param_2[0xf4];
      uVar6 = param_1[0xf5];
      param_1[0xf5] = param_2[0xf5];
      _swift_bridgeObjectRelease(uVar6);
      *(undefined1 *)(param_1 + 0xf6) = *(undefined1 *)(param_2 + 0xf6);
    }
    *(undefined1 *)((long)param_1 + 0x7b1) = *(undefined1 *)((long)param_2 + 0x7b1);
    param_1[0xf7] = param_2[0xf7];
    param_1[0xf8] = param_2[0xf8];
    *(undefined1 *)(param_1 + 0xf9) = *(undefined1 *)(param_2 + 0xf9);
    if (param_1[0xfa] == 1) {
LAB_104267c8c:
      lVar4 = param_2[0xfa];
      param_1[0xfb] = param_2[0xfb];
      param_1[0xfa] = lVar4;
      param_1[0xfc] = param_2[0xfc];
    }
    else {
      lVar4 = param_2[0xfa];
      if (lVar4 == 1) {
        func_0x0001017e21b4(param_1 + 0xfa);
        goto LAB_104267c8c;
      }
      param_1[0xfa] = lVar4;
      _objc_release();
      uVar6 = param_1[0xfb];
      param_1[0xfb] = param_2[0xfb];
      _objc_release(uVar6);
      uVar6 = param_1[0xfc];
      param_1[0xfc] = param_2[0xfc];
      _objc_release(uVar6);
    }
    *(undefined1 *)(param_1 + 0xfd) = *(undefined1 *)(param_2 + 0xfd);
    param_1[0xfe] = param_2[0xfe];
    *(undefined1 *)(param_1 + 0xff) = *(undefined1 *)(param_2 + 0xff);
    param_1[0x100] = param_2[0x100];
    *(undefined1 *)(param_1 + 0x101) = *(undefined1 *)(param_2 + 0x101);
    if (param_1[0x103] == 1) {
LAB_104267d18:
      uVar6 = param_2[0x102];
      uVar9 = param_2[0x105];
      uVar5 = param_2[0x104];
      param_1[0x103] = param_2[0x103];
      param_1[0x102] = uVar6;
      param_1[0x105] = uVar9;
      param_1[0x104] = uVar5;
      uVar6 = param_2[0x106];
      param_1[0x107] = param_2[0x107];
      param_1[0x106] = uVar6;
    }
    else {
      lVar4 = param_2[0x103];
      if (lVar4 == 1) {
        func_0x0001017e21e8(param_1 + 0x102);
        goto LAB_104267d18;
      }
      *(undefined2 *)(param_1 + 0x102) = *(undefined2 *)(param_2 + 0x102);
      param_1[0x103] = lVar4;
      _swift_bridgeObjectRelease();
      uVar6 = param_1[0x104];
      param_1[0x104] = param_2[0x104];
      _swift_bridgeObjectRelease(uVar6);
      uVar6 = param_1[0x105];
      param_1[0x105] = param_2[0x105];
      _swift_bridgeObjectRelease(uVar6);
      *(undefined1 *)(param_1 + 0x106) = *(undefined1 *)(param_2 + 0x106);
      *(undefined2 *)((long)param_1 + 0x831) = *(undefined2 *)((long)param_2 + 0x831);
      *(undefined1 *)((long)param_1 + 0x833) = *(undefined1 *)((long)param_2 + 0x833);
      uVar6 = param_1[0x107];
      param_1[0x107] = param_2[0x107];
      _swift_bridgeObjectRelease(uVar6);
    }
    param_1[0x108] = param_2[0x108];
    *(undefined1 *)(param_1 + 0x109) = *(undefined1 *)(param_2 + 0x109);
    param_1[0x10a] = param_2[0x10a];
    *(undefined1 *)(param_1 + 0x10b) = *(undefined1 *)(param_2 + 0x10b);
    *(undefined1 *)((long)param_1 + 0x859) = *(undefined1 *)((long)param_2 + 0x859);
    if (param_1[0x10c] == 0) {
LAB_104267e00:
      lVar4 = param_2[0x10c];
      param_1[0x10d] = param_2[0x10d];
      param_1[0x10c] = lVar4;
      param_1[0x10e] = param_2[0x10e];
    }
    else {
      lVar4 = param_2[0x10c];
      if (lVar4 == 0) {
        func_0x0001017e221c(param_1 + 0x10c);
        goto LAB_104267e00;
      }
      param_1[0x10c] = lVar4;
      _swift_bridgeObjectRelease();
      uVar6 = param_1[0x10d];
      param_1[0x10d] = param_2[0x10d];
      _swift_bridgeObjectRelease(uVar6);
      uVar6 = param_1[0x10e];
      param_1[0x10e] = param_2[0x10e];
      _swift_bridgeObjectRelease(uVar6);
    }
    uVar6 = param_1[0x10f];
    param_1[0x10f] = param_2[0x10f];
    _swift_bridgeObjectRelease(uVar6);
    param_1[0x110] = param_2[0x110];
    uVar6 = param_1[0x111];
    param_1[0x111] = param_2[0x111];
    _swift_bridgeObjectRelease(uVar6);
    *(undefined1 *)(param_1 + 0x112) = *(undefined1 *)(param_2 + 0x112);
    *(undefined1 *)((long)param_1 + 0x891) = *(undefined1 *)((long)param_2 + 0x891);
    *(undefined1 *)((long)param_1 + 0x892) = *(undefined1 *)((long)param_2 + 0x892);
    param_1[0x113] = param_2[0x113];
    *(undefined1 *)(param_1 + 0x114) = *(undefined1 *)(param_2 + 0x114);
    param_1[0x115] = param_2[0x115];
    uVar6 = param_2[0x116];
    param_1[0x117] = param_2[0x117];
    param_1[0x116] = uVar6;
    *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
    *(undefined1 *)((long)param_1 + 0x8c1) = *(undefined1 *)((long)param_2 + 0x8c1);
    param_1[0x119] = param_2[0x119];
    *(undefined1 *)(param_1 + 0x11a) = *(undefined1 *)(param_2 + 0x11a);
    *(undefined1 *)((long)param_1 + 0x8d1) = *(undefined1 *)((long)param_2 + 0x8d1);
    *(undefined1 *)((long)param_1 + 0x8d2) = *(undefined1 *)((long)param_2 + 0x8d2);
    *(undefined1 *)((long)param_1 + 0x8d3) = *(undefined1 *)((long)param_2 + 0x8d3);
    param_1[0x11b] = param_2[0x11b];
    *(undefined1 *)(param_1 + 0x11c) = *(undefined1 *)(param_2 + 0x11c);
    param_1[0x11d] = param_2[0x11d];
    *(undefined1 *)(param_1 + 0x11e) = *(undefined1 *)(param_2 + 0x11e);
    uVar6 = param_2[0x11f];
    *(undefined1 *)(param_1 + 0x120) = *(undefined1 *)(param_2 + 0x120);
    param_1[0x11f] = uVar6;
    param_1[0x121] = param_2[0x121];
    uVar6 = param_1[0x122];
    param_1[0x122] = param_2[0x122];
    _swift_bridgeObjectRelease(uVar6);
    param_1[0x123] = param_2[0x123];
    *(undefined1 *)(param_1 + 0x124) = *(undefined1 *)(param_2 + 0x124);
  }
  if (param_1[0x125] == 1) {
LAB_104267f28:
    lVar4 = param_2[0x125];
    param_1[0x126] = param_2[0x126];
    param_1[0x125] = lVar4;
  }
  else {
    lVar4 = param_2[0x125];
    if (lVar4 == 1) {
      func_0x0001018658a8(param_1 + 0x125);
      goto LAB_104267f28;
    }
    param_1[0x125] = lVar4;
    _swift_bridgeObjectRelease();
    param_1[0x126] = param_2[0x126];
  }
  plVar2 = param_1 + 0x127;
  lVar4 = param_2[0x127];
  if (param_1[0x127] == 1) {
LAB_104267f6c:
    *plVar2 = lVar4;
  }
  else {
    if (lVar4 == 1) {
      FUN_1042278f8(plVar2);
      lVar4 = param_2[0x127];
      goto LAB_104267f6c;
    }
    *plVar2 = lVar4;
    _swift_bridgeObjectRelease();
  }
  uVar6 = param_1[0x128];
  param_1[0x128] = param_2[0x128];
  _objc_release(uVar6);
  *(undefined2 *)(param_1 + 0x129) = *(undefined2 *)(param_2 + 0x129);
  plVar2 = param_1 + 0x12a;
  plVar3 = param_2 + 0x12a;
  if (param_1[0x12a] == 1) {
LAB_104267fbc:
    uVar6 = param_2[0x12e];
    uVar9 = param_2[0x131];
    uVar5 = param_2[0x130];
    param_1[0x12f] = param_2[0x12f];
    param_1[0x12e] = uVar6;
    param_1[0x131] = uVar9;
    param_1[0x130] = uVar5;
    uVar6 = param_2[0x132];
    uVar9 = param_2[0x135];
    uVar5 = param_2[0x134];
    param_1[0x133] = param_2[0x133];
    param_1[0x132] = uVar6;
    param_1[0x135] = uVar9;
    param_1[0x134] = uVar5;
    lVar4 = *plVar3;
    uVar5 = param_2[0x12d];
    uVar6 = param_2[300];
    param_1[299] = param_2[299];
    *plVar2 = lVar4;
    param_1[0x12d] = uVar5;
    param_1[300] = uVar6;
  }
  else {
    lVar4 = *plVar3;
    if (lVar4 == 1) {
      func_0x00010178e198(plVar2);
      goto LAB_104267fbc;
    }
    if (param_1[0x12a] == 0) {
LAB_1042682a8:
      uVar6 = param_2[0x12e];
      uVar9 = param_2[0x131];
      uVar5 = param_2[0x130];
      param_1[0x12f] = param_2[0x12f];
      param_1[0x12e] = uVar6;
      param_1[0x131] = uVar9;
      param_1[0x130] = uVar5;
      uVar6 = param_2[0x132];
      param_1[0x133] = param_2[0x133];
      param_1[0x132] = uVar6;
      lVar4 = *plVar3;
      uVar5 = param_2[0x12d];
      uVar6 = param_2[300];
      param_1[299] = param_2[299];
      *plVar2 = lVar4;
      param_1[0x12d] = uVar5;
      param_1[300] = uVar6;
    }
    else {
      if (lVar4 == 0) {
        func_0x0001017b6434(plVar2);
        goto LAB_1042682a8;
      }
      param_1[0x12a] = lVar4;
      _swift_bridgeObjectRelease();
      uVar6 = param_1[299];
      param_1[299] = param_2[299];
      _swift_bridgeObjectRelease(uVar6);
      param_1[300] = param_2[300];
      *(undefined1 *)(param_1 + 0x12d) = *(undefined1 *)(param_2 + 0x12d);
      uVar6 = param_2[0x12e];
      param_1[0x12f] = param_2[0x12f];
      param_1[0x12e] = uVar6;
      if ((ulong)param_1[0x131] >> 0x3c < 0xf) {
        uVar8 = param_2[0x131];
        if (0xe < uVar8 >> 0x3c) {
          func_0x0001006e5814(param_1 + 0x130);
          goto LAB_1042680a0;
        }
        uVar6 = param_1[0x130];
        param_1[0x130] = param_2[0x130];
        param_1[0x131] = uVar8;
        func_0x00010006c090(uVar6);
      }
      else {
LAB_1042680a0:
        uVar6 = param_2[0x130];
        param_1[0x131] = param_2[0x131];
        param_1[0x130] = uVar6;
      }
      uVar6 = param_2[0x132];
      param_1[0x133] = param_2[0x133];
      param_1[0x132] = uVar6;
    }
    if ((ulong)param_1[0x135] >> 0x3c < 0xf) {
      uVar8 = param_2[0x135];
      if (0xe < uVar8 >> 0x3c) {
        func_0x0001006e5814(param_1 + 0x134);
        goto LAB_104268310;
      }
      uVar6 = param_1[0x134];
      param_1[0x134] = param_2[0x134];
      param_1[0x135] = uVar8;
      func_0x00010006c090(uVar6);
    }
    else {
LAB_104268310:
      uVar6 = param_2[0x134];
      param_1[0x135] = param_2[0x135];
      param_1[0x134] = uVar6;
    }
  }
  if (param_1[0x13a] == 1) {
LAB_104267ffc:
    uVar6 = param_2[0x146];
    uVar9 = param_2[0x149];
    uVar5 = param_2[0x148];
    param_1[0x147] = param_2[0x147];
    param_1[0x146] = uVar6;
    param_1[0x149] = uVar9;
    param_1[0x148] = uVar5;
    uVar6 = param_2[0x14a];
    param_1[0x14b] = param_2[0x14b];
    param_1[0x14a] = uVar6;
    uVar6 = *(undefined8 *)((long)param_2 + 0xa59);
    *(undefined8 *)((long)param_1 + 0xa61) = *(undefined8 *)((long)param_2 + 0xa61);
    *(undefined8 *)((long)param_1 + 0xa59) = uVar6;
    uVar6 = param_2[0x13e];
    uVar9 = param_2[0x141];
    uVar5 = param_2[0x140];
    param_1[0x13f] = param_2[0x13f];
    param_1[0x13e] = uVar6;
    param_1[0x141] = uVar9;
    param_1[0x140] = uVar5;
    uVar6 = param_2[0x142];
    uVar9 = param_2[0x145];
    uVar5 = param_2[0x144];
    param_1[0x143] = param_2[0x143];
    param_1[0x142] = uVar6;
    param_1[0x145] = uVar9;
    param_1[0x144] = uVar5;
    uVar6 = param_2[0x136];
    uVar9 = param_2[0x139];
    uVar5 = param_2[0x138];
    param_1[0x137] = param_2[0x137];
    param_1[0x136] = uVar6;
    param_1[0x139] = uVar9;
    param_1[0x138] = uVar5;
    uVar6 = param_2[0x13a];
    uVar9 = param_2[0x13d];
    uVar5 = param_2[0x13c];
    param_1[0x13b] = param_2[0x13b];
    param_1[0x13a] = uVar6;
    param_1[0x13d] = uVar9;
    param_1[0x13c] = uVar5;
  }
  else {
    lVar4 = param_2[0x13a];
    if (lVar4 == 1) {
      func_0x00010178e2d8(param_1 + 0x136);
      goto LAB_104267ffc;
    }
    *(undefined1 *)(param_1 + 0x136) = *(undefined1 *)(param_2 + 0x136);
    *(undefined1 *)((long)param_1 + 0x9b1) = *(undefined1 *)((long)param_2 + 0x9b1);
    param_1[0x137] = param_2[0x137];
    *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
    param_1[0x139] = param_2[0x139];
    param_1[0x13a] = lVar4;
    _swift_bridgeObjectRelease();
    puVar1 = param_1 + 0x13b;
    if (param_1[0x143] == 1) {
LAB_104268104:
      uVar6 = param_2[0x143];
      uVar9 = param_2[0x146];
      uVar5 = param_2[0x145];
      param_1[0x144] = param_2[0x144];
      param_1[0x143] = uVar6;
      param_1[0x146] = uVar9;
      param_1[0x145] = uVar5;
      *(undefined1 *)(param_1 + 0x147) = *(undefined1 *)(param_2 + 0x147);
      uVar6 = param_2[0x13b];
      uVar9 = param_2[0x13e];
      uVar5 = param_2[0x13d];
      param_1[0x13c] = param_2[0x13c];
      *puVar1 = uVar6;
      param_1[0x13e] = uVar9;
      param_1[0x13d] = uVar5;
      uVar9 = param_2[0x13f];
      uVar5 = param_2[0x142];
      uVar6 = param_2[0x141];
      param_1[0x140] = param_2[0x140];
      param_1[0x13f] = uVar9;
      param_1[0x142] = uVar5;
      param_1[0x141] = uVar6;
    }
    else {
      lVar4 = param_2[0x143];
      if (lVar4 == 1) {
        func_0x00010180cee4(puVar1);
        goto LAB_104268104;
      }
      *puVar1 = param_2[0x13b];
      *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)(param_2 + 0x13c);
      param_1[0x13d] = param_2[0x13d];
      *(undefined1 *)(param_1 + 0x13e) = *(undefined1 *)(param_2 + 0x13e);
      param_1[0x13f] = param_2[0x13f];
      *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
      *(undefined1 *)(param_1 + 0x142) = *(undefined1 *)(param_2 + 0x142);
      param_1[0x141] = param_2[0x141];
      param_1[0x143] = lVar4;
      _objc_release();
      param_1[0x144] = param_2[0x144];
      *(undefined1 *)(param_1 + 0x145) = *(undefined1 *)(param_2 + 0x145);
      param_1[0x146] = param_2[0x146];
      *(undefined1 *)(param_1 + 0x147) = *(undefined1 *)(param_2 + 0x147);
    }
    param_1[0x148] = param_2[0x148];
    *(undefined1 *)(param_1 + 0x149) = *(undefined1 *)(param_2 + 0x149);
    param_1[0x14a] = param_2[0x14a];
    *(undefined1 *)(param_1 + 0x14b) = *(undefined1 *)(param_2 + 0x14b);
    param_1[0x14c] = param_2[0x14c];
    *(undefined1 *)(param_1 + 0x14d) = *(undefined1 *)(param_2 + 0x14d);
  }
  if (param_1[0x14e] == 1) {
LAB_1042681e8:
    lVar4 = param_2[0x14e];
    param_1[0x14f] = param_2[0x14f];
    param_1[0x14e] = lVar4;
    *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
  }
  else {
    lVar4 = param_2[0x14e];
    if (lVar4 == 1) {
      func_0x00010422792c(param_1 + 0x14e);
      goto LAB_1042681e8;
    }
    param_1[0x14e] = lVar4;
    _swift_bridgeObjectRelease();
    param_1[0x14f] = param_2[0x14f];
    *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
  }
  if (param_1[0x153] != 1) {
    lVar4 = param_2[0x153];
    if (lVar4 != 1) {
      param_1[0x151] = param_2[0x151];
      param_1[0x152] = param_2[0x152];
      param_1[0x153] = lVar4;
      _swift_bridgeObjectRelease();
      goto LAB_104268268;
    }
    func_0x000104227960(param_1 + 0x151);
  }
  uVar6 = param_2[0x151];
  param_1[0x152] = param_2[0x152];
  param_1[0x151] = uVar6;
  param_1[0x153] = param_2[0x153];
LAB_104268268:
  uVar6 = param_1[0x154];
  param_1[0x154] = param_2[0x154];
  _objc_release(uVar6);
  param_1[0x155] = param_2[0x155];
  *(undefined2 *)(param_1 + 0x156) = *(undefined2 *)(param_2 + 0x156);
  return param_1;
}



/* Entry: 104268334; end: 1042686d3;  */

int FUN_104268334(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && (*(char *)((long)param_1 + 0xab2) != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar4 = *(ulong *)(param_1 + 0x250);
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  uVar2 = (int)uVar4 - 1;
  uVar1 = uVar2;
  if (0x7fffffff < uVar2) {
    uVar1 = 0xffffffff;
  }
  iVar3 = uVar1 - 1;
  if ((int)uVar2 < 1) {
    iVar3 = -1;
  }
  return iVar3 + 1;
}



/* Entry: 1042686d4; end: 1042687a3;  */

undefined8 FUN_1042686d4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1042687a4; end: 10426899f;  */

void FUN_1042687a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17,undefined2 param_18,undefined4 param_19,undefined8 param_20,
                  undefined1 param_21,undefined4 param_22,undefined8 param_23,undefined8 *param_24)

{
  undefined8 extraout_x8;
  undefined1 auStack_3910 [2936];
  undefined8 uStack_2d98;
  undefined8 uStack_2d90;
  undefined8 uStack_2d88;
  undefined1 uStack_2d80;
  undefined8 uStack_2d78;
  undefined8 uStack_2d70;
  undefined8 uStack_2d68;
  undefined8 uStack_2d60;
  undefined8 uStack_2d58;
  undefined8 uStack_2d50;
  undefined8 uStack_2d48;
  undefined8 uStack_2d40;
  undefined8 uStack_2d38;
  undefined1 uStack_2d30;
  undefined1 auStack_2d28 [2744];
  undefined8 uStack_2270;
  undefined2 uStack_2268;
  undefined8 uStack_2260;
  undefined1 uStack_2258;
  undefined8 uStack_2250;
  undefined8 uStack_2248;
  undefined8 uStack_2240;
  undefined8 uStack_2238;
  undefined8 uStack_2230;
  undefined8 uStack_2228;
  undefined1 auStack_2220 [2744];
  undefined1 auStack_1768 [2936];
  undefined1 auStack_bf0 [2944];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000101895c44(auStack_2220);
  _memcpy(auStack_2d28,auStack_2220,0xab2);
  uStack_2d58 = param_11;
  uStack_2d50 = param_12;
  uStack_2d38 = param_13;
  uStack_2d30 = param_14;
  uStack_2d98 = param_3;
  uStack_2d90 = param_4;
  uStack_2d88 = param_5;
  uStack_2d80 = param_6;
  uStack_2d78 = param_7;
  uStack_2d70 = param_8;
  uStack_2d68 = param_9;
  uStack_2d60 = param_10;
  uStack_2d48 = param_1;
  uStack_2d40 = param_2;
  func_0x00010426875c(param_16,auStack_2d28,0x112dcbc80,&UNK_10d98ff10);
  uStack_2270 = param_17;
  uStack_2268 = param_18;
  uStack_2260 = param_20;
  uStack_2258 = param_21;
  uStack_2250 = param_23;
  uStack_2240 = param_24[1];
  uStack_2248 = *param_24;
  uStack_2230 = param_24[3];
  uStack_2238 = param_24[2];
  uStack_2228 = param_24[4];
  _memcpy(auStack_1768,&uStack_2d98,0xb78);
  _memcpy(auStack_bf0,&uStack_2d98,0xb78);
  func_0x00010178e408(auStack_1768,auStack_3910);
  func_0x00010178e444(auStack_bf0);
  _memcpy(extraout_x8,auStack_1768,0xb78);
  return;
}



/* Entry: 1042689a0; end: 1042689a3;  */

undefined8 FUN_1042689a0(ulong *param_1,ulong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_6b98 [2744];
  undefined1 auStack_60e0 [2744];
  undefined1 auStack_5628 [2744];
  undefined1 auStack_4b70 [5488];
  undefined1 auStack_3600 [2744];
  undefined1 auStack_2b48 [2744];
  undefined1 auStack_2090 [2744];
  undefined1 auStack_15d8 [2744];
  undefined1 auStack_b20 [2752];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar7 = param_1[1];
  uVar6 = param_2[1];
  if (uVar7 == 0) {
    if (uVar6 != 0) {
      return 0;
    }
  }
  else {
    if (uVar6 == 0) {
      return 0;
    }
    uVar8 = *param_1;
    if ((uVar8 != *param_2 || uVar7 != uVar6) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar8,uVar7,*param_2,uVar6,0), (uVar8 & 1) == 0)) {
      return 0;
    }
  }
  if (param_1[2] != param_2[2]) {
    return 0;
  }
  if ((((byte)param_1[3] ^ (byte)param_2[3]) & 1) != 0) {
    return 0;
  }
  uVar7 = param_1[5];
  uVar6 = param_2[5];
  if (uVar7 == 0) {
    if (uVar6 != 0) {
      return 0;
    }
  }
  else {
    if (uVar6 == 0) {
      return 0;
    }
    uVar8 = param_1[4];
    if (((uVar8 != param_2[4]) || (uVar7 != uVar6)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar8,uVar7,param_2[4],uVar6,0), (uVar8 & 1) == 0)) {
      return 0;
    }
  }
  if (param_1[6] != param_2[6]) {
    return 0;
  }
  if (param_1[7] != param_2[7]) {
    return 0;
  }
  if (param_1[8] != param_2[8]) {
    return 0;
  }
  if (param_1[9] != param_2[9]) {
    return 0;
  }
  if ((double)param_1[10] != (double)param_2[10]) {
    return 0;
  }
  if ((double)param_1[0xb] != (double)param_2[0xb]) {
    return 0;
  }
  uVar7 = param_1[0xc];
  uVar6 = param_2[0xc];
  if (uVar7 == 0) {
    if (uVar6 != 0) {
      return 0;
    }
  }
  else {
    if (uVar6 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar6);
    uVar8 = uVar7;
    _swift_bridgeObjectRetain();
    FUN_104229ba0();
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(uVar6);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  }
  if ((((byte)param_1[0xd] ^ (byte)param_2[0xd]) & 1) != 0) {
    return 0;
  }
  _memcpy(auStack_15d8,param_1 + 0xe,0xab2);
  _memcpy(auStack_2090,param_2 + 0xe,0xab2);
  _memcpy(auStack_3600,param_1 + 0xe,0xab2);
  _memcpy(auStack_2b48,param_2 + 0xe,0xab2);
  iVar3 = (int)auStack_3600;
  func_0x00010178e3ec();
  if (iVar3 == 1) {
    iVar3 = (int)auStack_2b48;
    func_0x00010178e3ec();
    if (iVar3 != 1) {
LAB_10426a250:
      _memcpy(auStack_4b70,auStack_3600,0x156a);
      func_0x000104268714(auStack_15d8,auStack_b20,0x112dcbc80,&UNK_10d98ff10);
      func_0x000104268714(auStack_2090,auStack_b20,0x112dcbc80,&UNK_10d98ff10);
      FUN_1042704c8(auStack_4b70,0x112dcde40,&UNK_10d9902d0);
      return 0;
    }
    _memcpy(auStack_4b70,auStack_3600,0xab2);
    func_0x000104268714(auStack_15d8,auStack_b20,0x112dcbc80,&UNK_10d98ff10);
    func_0x000104268714(auStack_2090,auStack_b20,0x112dcbc80,&UNK_10d98ff10);
    FUN_1042704c8(auStack_4b70,0x112dcbc80,&UNK_10d98ff10);
  }
  else {
    _memcpy(auStack_5628,auStack_3600,0xab2);
    iVar3 = (int)auStack_2b48;
    func_0x00010178e3ec();
    if (iVar3 == 1) goto LAB_10426a250;
    _memcpy(auStack_60e0,auStack_2b48,0xab2);
    _memcpy(auStack_4b70,auStack_2b48,0xab2);
    _memcpy(auStack_b20,auStack_5628,0xab2);
    func_0x000104268714(auStack_15d8,auStack_6b98,0x112dcbc80,&UNK_10d98ff10);
    func_0x000104268714(auStack_2090,auStack_6b98,0x112dcbc80,&UNK_10d98ff10);
    puVar4 = auStack_b20;
    func_0x0001042622d8(puVar4,auStack_4b70);
    FUN_1042704c8(auStack_60e0,0x112dcbc80,&UNK_10d98ff10);
    FUN_1042704c8(auStack_3600,0x112dcbc80,&UNK_10d98ff10);
    if (((ulong)puVar4 & 1) == 0) {
      return 0;
    }
  }
  uVar1 = (ushort)param_1[0x166];
  uVar2 = (ushort)param_2[0x166];
  if ((uVar1 & 0xff00) == 0x200) {
    if ((uVar2 & 0xff00) != 0x200) {
      return 0;
    }
  }
  else {
    if ((uVar2 & 0xff00) == 0x200) {
      return 0;
    }
    if ((uVar1 & 0xff) == 1) {
      if ((uVar2 & 0xff) != 1) {
        return 0;
      }
    }
    else {
      if ((uVar2 & 0xff) == 1) {
        return 0;
      }
      if (param_1[0x165] != param_2[0x165]) {
        return 0;
      }
    }
    if (((uVar1 ^ uVar2) >> 8 & 1) != 0) {
      return 0;
    }
  }
  if (param_1[0x167] != param_2[0x167]) {
    return 0;
  }
  if ((((byte)param_1[0x168] ^ (byte)param_2[0x168]) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0xb41) ^ *(byte *)((long)param_2 + 0xb41)) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0xb42) ^ *(byte *)((long)param_2 + 0xb42)) & 1) != 0) {
    return 0;
  }
  if (param_1[0x169] != param_2[0x169]) {
    return 0;
  }
  uVar13 = param_1[0x16a];
  uVar12 = param_1[0x16b];
  uVar11 = param_1[0x16c];
  uVar10 = param_1[0x16d];
  uVar9 = param_1[0x16e];
  uVar6 = param_2[0x16a];
  uVar7 = param_2[0x16b];
  uVar8 = param_2[0x16c];
  uVar14 = param_2[0x16d];
  uVar15 = param_2[0x16e];
  if (uVar12 == 0) {
    if (uVar7 == 0) {
      return 1;
    }
  }
  else if (uVar7 != 0) {
    if ((((uVar13 == uVar6) && (uVar12 == uVar7)) ||
        (uVar5 = uVar13,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar13,uVar12,uVar6,uVar7,0), (uVar5 & 1) != 0)) &&
       (((uVar11 == uVar8 && (uVar10 == uVar14)) ||
        (uVar5 = uVar11,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar11,uVar10,uVar8,uVar14,0), (uVar5 & 1) != 0)))) {
      func_0x00010421e838(uVar6,uVar7,uVar8,uVar14,uVar15);
      func_0x00010421e838(uVar13,uVar12,uVar11,uVar10,uVar9);
      _swift_bridgeObjectRelease(uVar14);
      _swift_bridgeObjectRelease(uVar7);
      func_0x000101895b9c(uVar13,uVar12,uVar11,uVar10,uVar9);
      if ((int)uVar9 != (int)uVar15) {
        return 0;
      }
      return 1;
    }
    func_0x00010421e838(uVar6,uVar7,uVar8,uVar14,uVar15);
    func_0x00010421e838(uVar13,uVar12,uVar11,uVar10,uVar9);
    _swift_bridgeObjectRelease(uVar14);
    _swift_bridgeObjectRelease(uVar7);
    uVar6 = uVar13;
    uVar7 = uVar12;
    uVar8 = uVar11;
    uVar14 = uVar10;
    uVar15 = uVar9;
    goto LAB_10426a608;
  }
  func_0x00010421e838(uVar6,uVar7,uVar8,uVar14,uVar15);
  func_0x00010421e838(uVar13,uVar12,uVar11,uVar10,uVar9);
  func_0x000101895b9c(uVar13,uVar12,uVar11,uVar10,uVar9);
LAB_10426a608:
  func_0x000101895b9c(uVar6,uVar7,uVar8,uVar14,uVar15);
  return 0;
}



/* Entry: 1042689a4; end: 104268a0f;  */

uint FUN_1042689a4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_1710 [2936];
  undefined1 auStack_b98 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = 0;
  _memcpy(auStack_1710,param_1,0xb78);
  _memcpy(auStack_b98,param_2,0xb78);
  FUN_104269f38(auStack_1710,auStack_b98);
  return uVar1 & 1;
}



/* Entry: 104268a10; end: 104268b5f;  */

void FUN_104268a10(void)

{
  undefined1 *puVar1;
  undefined1 auStack_38c8 [2936];
  undefined8 uStack_2d50;
  undefined8 uStack_2d48;
  undefined8 uStack_2d40;
  undefined1 uStack_2d38;
  undefined8 uStack_2d30;
  undefined8 uStack_2d28;
  undefined8 uStack_2d20;
  undefined8 uStack_2d18;
  undefined8 uStack_2d10;
  undefined8 uStack_2d08;
  undefined8 uStack_2d00;
  undefined1 uStack_2cf8;
  undefined7 uStack_2cf7;
  undefined1 uStack_2cf0;
  undefined8 uStack_2cef;
  undefined1 auStack_2ce0 [2744];
  undefined8 uStack_2228;
  undefined2 uStack_2220;
  undefined7 uStack_2218;
  undefined4 uStack_2211;
  undefined8 uStack_2208;
  undefined8 uStack_2200;
  undefined8 uStack_21f8;
  undefined8 uStack_21f0;
  undefined8 uStack_21e8;
  undefined8 uStack_21e0;
  undefined1 auStack_21d8 [2936];
  undefined1 auStack_1660 [2744];
  undefined1 auStack_ba8 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000101895c44(auStack_1660);
  _memcpy(auStack_2ce0,auStack_1660,0xab2);
  uStack_2d40 = 0;
  uStack_2d50 = 0;
  uStack_2d48 = 0;
  uStack_2d38 = 0;
  uStack_2d28 = 0;
  uStack_2d30 = 0;
  uStack_2d18 = 0;
  uStack_2d20 = 0;
  uStack_2d08 = 0;
  uStack_2d10 = 0;
  uStack_2cf8 = 0;
  uStack_2d00 = 0;
  uStack_2cef = 0;
  uStack_2cf7 = 0;
  uStack_2cf0 = 0;
  FUN_1042704c8(auStack_2ce0,0x112dcbc80,&UNK_10d98ff10);
  _memcpy(auStack_2ce0,auStack_1660,0xab2);
  uStack_2228 = 0;
  uStack_2220 = 0x200;
  uStack_2218 = 0;
  uStack_2211 = 0;
  uStack_2200 = 0;
  uStack_2208 = 0;
  uStack_21f0 = 0;
  uStack_21f8 = 0;
  uStack_21e0 = 0;
  uStack_21e8 = 0;
  _memcpy(auStack_21d8,&uStack_2d50,0xb78);
  _memcpy(auStack_ba8,&uStack_2d50,0xb78);
  func_0x00010178e408(auStack_21d8,auStack_38c8);
  func_0x00010178e444(auStack_ba8);
  FUN_1042d60f8(0);
  _objc_allocWithZone();
  puVar1 = auStack_21d8;
  FUN_1042d55f4();
  func_0x00010178e444(auStack_21d8);
  puRam0000000113813380 = puVar1;
  return;
}



/* Entry: 104268b60; end: 104268b9f; +[SCStoryAdTrackInfo identity] */

void FUN_104268b60(void)

{
  if (lRam0000000113069df0 != -1) {
    _swift_once(0x113069df0,FUN_104268a10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813380);
  return;
}



/* Entry: 104268ba0; end: 104268cd7; -[SCStoryAdTrackInfo withCreativeId:] */

void FUN_104268ba0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_2e38 [2936];
  long lStack_22c0;
  undefined8 uStack_22b8;
  undefined8 uStack_1748;
  undefined8 uStack_1740;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined1 auStack_bb8 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  func_0x0001042d5b90(&uStack_1748);
  uStack_bc8 = uStack_1740;
  uStack_bd0 = uStack_1748;
  FUN_1042704c8(&uStack_bd0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(&lStack_22c0,&uStack_1748,0xb78);
  lStack_22c0 = param_3;
  uStack_22b8 = param_2;
  _memcpy(auStack_bb8,&lStack_22c0,0xb78);
  _objc_allocWithZone(uVar1);
  func_0x00010178e408(auStack_bb8,auStack_2e38);
  puVar2 = auStack_bb8;
  func_0x0001042d55f4(puVar2);
  func_0x00010178e444(auStack_bb8);
  _objc_release(param_1);
  func_0x00010178e444(&lStack_22c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104268cd8; end: 104268dab; -[SCStoryAdTrackInfo withSnapCount:] */

void FUN_104268cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_22a8 [2936];
  undefined1 auStack_1730 [16];
  undefined8 uStack_1720;
  undefined1 auStack_bb8 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  func_0x0001042d5b90(auStack_1730);
  uStack_1720 = param_3;
  _memcpy(auStack_bb8,auStack_1730,0xb78);
  _objc_allocWithZone(uVar1);
  func_0x00010178e408(auStack_bb8,auStack_22a8);
  puVar2 = auStack_bb8;
  func_0x0001042d55f4(puVar2);
  func_0x00010178e444(auStack_bb8);
  _objc_release(param_1);
  func_0x00010178e444(auStack_1730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104268dac; end: 104268e7f; -[SCStoryAdTrackInfo withIsAudioOn:] */

void FUN_104268dac(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_22a8 [2936];
  undefined1 auStack_1730 [24];
  undefined1 uStack_1718;
  undefined1 auStack_bb8 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  func_0x0001042d5b90(auStack_1730);
  uStack_1718 = param_3;
  _memcpy(auStack_bb8,auStack_1730,0xb78);
  _objc_allocWithZone(uVar1);
  func_0x00010178e408(auStack_bb8,auStack_22a8);
  puVar2 = auStack_bb8;
  func_0x0001042d55f4(puVar2);
  func_0x00010178e444(auStack_bb8);
  _objc_release(param_1);
  func_0x00010178e444(auStack_1730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104268e80; end: 104268fb7; -[SCStoryAdTrackInfo withExitEvent:] */

void FUN_104268e80(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_2e38 [2936];
  undefined1 auStack_22c0 [32];
  long lStack_22a0;
  undefined8 uStack_2298;
  undefined1 auStack_1748 [32];
  undefined8 uStack_1728;
  undefined8 uStack_1720;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined1 auStack_bb8 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  func_0x0001042d5b90(auStack_1748);
  uStack_bc8 = uStack_1720;
  uStack_bd0 = uStack_1728;
  FUN_1042704c8(&uStack_bd0,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_22c0,auStack_1748,0xb78);
  lStack_22a0 = param_3;
  uStack_2298 = param_2;
  _memcpy(auStack_bb8,auStack_22c0,0xb78);
  _objc_allocWithZone(uVar1);
  func_0x00010178e408(auStack_bb8,auStack_2e38);
  puVar2 = auStack_bb8;
  func_0x0001042d55f4(puVar2);
  func_0x00010178e444(auStack_bb8);
  _objc_release(param_1);
  func_0x00010178e444(auStack_22c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104268fb8; end: 10426908b; -[SCStoryAdTrackInfo withTotalSwipeUp:] */

void FUN_104268fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_22a8 [2936];
  undefined1 auStack_1730 [48];
  undefined8 uStack_1700;
  undefined1 auStack_bb8 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  func_0x0001042d5b90(auStack_1730);
  uStack_1700 = param_3;
  _memcpy(auStack_bb8,auStack_1730,0xb78);
  _objc_allocWithZone(uVar1);
  func_0x00010178e408(auStack_bb8,auStack_22a8);
  puVar2 = auStack_bb8;
  func_0x0001042d55f4(puVar2);
  func_0x00010178e444(auStack_bb8);
  _objc_release(param_1);
  func_0x00010178e444(auStack_1730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10426908c; end: 10426915f; -[SCStoryAdTrackInfo withUniqueSwipeUp:] */

void FUN_10426908c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_22a8 [2936];
  undefined1 auStack_1730 [56];
  undefined8 uStack_16f8;
  undefined1 auStack_bb8 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  func_0x0001042d5b90(auStack_1730);
  uStack_16f8 = param_3;
  _memcpy(auStack_bb8,auStack_1730,0xb78);
  _objc_allocWithZone(uVar1);
  func_0x00010178e408(auStack_bb8,auStack_22a8);
  puVar2 = auStack_bb8;
  func_0x0001042d55f4(puVar2);
  func_0x00010178e444(auStack_bb8);
  _objc_release(param_1);
  func_0x00010178e444(auStack_1730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104269160; end: 104269233; -[SCStoryAdTrackInfo withMaxViewedSnapIndex:] */

void FUN_104269160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_22a8 [2936];
  undefined1 auStack_1730 [64];
  undefined8 uStack_16f0;
  undefined1 auStack_bb8 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  func_0x0001042d5b90(auStack_1730);
  uStack_16f0 = param_3;
  _memcpy(auStack_bb8,auStack_1730,0xb78);
  _objc_allocWithZone(uVar1);
  func_0x00010178e408(auStack_bb8,auStack_22a8);
  puVar2 = auStack_bb8;
  func_0x0001042d55f4(puVar2);
  func_0x00010178e444(auStack_bb8);
  _objc_release(param_1);
  func_0x00010178e444(auStack_1730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104269234; end: 104269307; -[SCStoryAdTrackInfo withTotalTopSnapMediaDurationInMillis:] */

void FUN_104269234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_22a8 [2936];
  undefined1 auStack_1730 [72];
  undefined8 uStack_16e8;
  undefined1 auStack_bb8 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  func_0x0001042d5b90(auStack_1730);
  uStack_16e8 = param_3;
  _memcpy(auStack_bb8,auStack_1730,0xb78);
  _objc_allocWithZone(uVar1);
  func_0x00010178e408(auStack_bb8,auStack_22a8);
  puVar2 = auStack_bb8;
  func_0x0001042d55f4(puVar2);
  func_0x00010178e444(auStack_bb8);
  _objc_release(param_1);
  func_0x00010178e444(auStack_1730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104269308; end: 1042693db; -[SCStoryAdTrackInfo withTotalTimeViewedInMillis:] */

void FUN_104269308(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_22a8 [2936];
  undefined1 auStack_1730 [80];
  undefined8 uStack_16e0;
  undefined1 auStack_bb8 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  func_0x0001042d5b90(auStack_1730);
  uStack_16e0 = param_1;
  _memcpy(auStack_bb8,auStack_1730,0xb78);
  _objc_allocWithZone(uVar1);
  func_0x00010178e408(auStack_bb8,auStack_22a8);
  puVar2 = auStack_bb8;
  func_0x0001042d55f4(puVar2);
  func_0x00010178e444(auStack_bb8);
  _objc_release(param_2);
  func_0x00010178e444(auStack_1730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1042693dc; end: 1042694af; -[SCStoryAdTrackInfo withTileTimeViewedInMillis:] */

void FUN_1042693dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_22a8 [2936];
  undefined1 auStack_1730 [88];
  undefined8 uStack_16d8;
  undefined1 auStack_bb8 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  func_0x0001042d5b90(auStack_1730);
  uStack_16d8 = param_1;
  _memcpy(auStack_bb8,auStack_1730,0xb78);
  _objc_allocWithZone(uVar1);
  func_0x00010178e408(auStack_bb8,auStack_22a8);
  puVar2 = auStack_bb8;
  func_0x0001042d55f4(puVar2);
  func_0x00010178e444(auStack_bb8);
  _objc_release(param_2);
  func_0x00010178e444(auStack_1730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1042694b0; end: 104269703;  */

undefined ** FUN_1042694b0(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_3900 [2936];
  undefined1 auStack_2d88 [96];
  undefined *puStack_2d28;
  undefined1 auStack_2210 [96];
  undefined8 uStack_21b0;
  undefined1 auStack_1698 [2744];
  undefined8 uStack_be0;
  undefined *apuStack_bd8 [367];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _swift_getObjectType();
  _objc_retain();
  func_0x0001042d5b90(auStack_2210);
  uStack_be0 = uStack_21b0;
  _memcpy(auStack_2d88,auStack_2210,0xb78);
  if (param_1 == 0) {
    FUN_1042704c8(&uStack_be0,0x113069df8,&UNK_10dce5428);
    puStack_2d28 = (undefined *)0x0;
  }
  else {
    if (param_1 >> 0x3e == 0) {
      uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = param_1;
      if (-1 < (long)param_1) {
        uVar5 = param_1 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar5 == 0) {
      FUN_1042704c8(&uStack_be0,0x113069df8,&UNK_10dce5428);
      puStack_2d28 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      apuStack_bd8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001018acd20(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104269704);
        (*pcVar2)();
      }
      uVar6 = 0;
      puVar4 = apuStack_bd8[0];
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          _objc_retain(*(undefined8 *)(param_1 + uVar6 * 8 + 0x20));
        }
        else {
          func_0x000104208f98(uVar6,param_1);
        }
        func_0x0001042a6474(auStack_1698);
        uVar1 = *(ulong *)(puVar4 + 0x10);
        apuStack_bd8[0] = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
          func_0x0001018acd20(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
        }
        puVar4 = apuStack_bd8[0];
        uVar6 = uVar6 + 1;
        *(ulong *)(apuStack_bd8[0] + 0x10) = uVar1 + 1;
        _memcpy(apuStack_bd8[0] + uVar1 * 0xab8 + 0x20,auStack_1698,0xab2);
      } while (uVar5 != uVar6);
      FUN_1042704c8(&uStack_be0,0x113069df8,&UNK_10dce5428);
      puStack_2d28 = puVar4;
    }
  }
  _memcpy(apuStack_bd8,auStack_2d88,0xb78);
  _objc_allocWithZone(unaff_x20);
  func_0x00010178e408(apuStack_bd8,auStack_3900);
  ppuVar3 = apuStack_bd8;
  func_0x0001042d55f4(ppuVar3);
  func_0x00010178e444(apuStack_bd8);
  func_0x00010178e444(auStack_2d88);
  return ppuVar3;
}



/* Entry: 104269704; end: 104269773; -[SCStoryAdTrackInfo withAdSnapTrackInfoList:] */

void FUN_104269704(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    uVar1 = 0;
    FUN_1042a6cd4(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  _objc_retain(param_1);
  lVar2 = param_3;
  FUN_1042694b0(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104269774; end: 104269847; -[SCStoryAdTrackInfo withHasCta:] */

void FUN_104269774(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_22a8 [2936];
  undefined1 auStack_1730 [104];
  undefined1 uStack_16c8;
  undefined1 auStack_bb8 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  func_0x0001042d5b90(auStack_1730);
  uStack_16c8 = param_3;
  _memcpy(auStack_bb8,auStack_1730,0xb78);
  _objc_allocWithZone(uVar1);
  func_0x00010178e408(auStack_bb8,auStack_22a8);
  puVar2 = auStack_bb8;
  func_0x0001042d55f4(puVar2);
  func_0x00010178e444(auStack_bb8);
  _objc_release(param_1);
  func_0x00010178e444(auStack_1730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104269848; end: 1042699d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104269848(long param_1)

{
  undefined1 *puVar1;
  undefined8 unaff_x20;
  undefined1 auStack_3808 [2744];
  undefined1 auStack_2d50 [2936];
  undefined1 auStack_21d8 [112];
  undefined1 auStack_2168 [2824];
  undefined1 auStack_1660 [2936];
  undefined1 auStack_ae8 [2744];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _swift_getObjectType();
  _objc_retain();
  func_0x0001042d5b90(auStack_21d8);
  if (param_1 == 0) {
    func_0x000101895c44(auStack_ae8);
  }
  else {
    func_0x0001018a91f0(auStack_1660);
    if (*(long *)(param_1 + _DAT_11306be28) == 0) {
      puVar1 = auStack_1660;
    }
    else {
      _objc_retain();
      func_0x0001042a6474(auStack_2d50);
      func_0x00010178e4a0(auStack_2d50);
      puVar1 = auStack_2d50;
    }
    _memcpy(auStack_3808,puVar1,0xab2);
    _memcpy(auStack_2d50,auStack_3808,0xab2);
    func_0x00010178e4a4(auStack_2d50);
    _memcpy(auStack_ae8,auStack_2d50,0xab2);
  }
  FUN_1042704c8(auStack_2168,0x112dcbc80,&UNK_10d98ff10);
  _memcpy(auStack_2168,auStack_ae8,0xab2);
  _memcpy(auStack_1660,auStack_21d8,0xb78);
  _objc_allocWithZone(unaff_x20);
  func_0x00010178e408(auStack_1660,auStack_2d50);
  puVar1 = auStack_1660;
  func_0x0001042d55f4(puVar1);
  func_0x00010178e444(auStack_1660);
  func_0x00010178e444(auStack_21d8);
  return puVar1;
}



/* Entry: 1042699d4; end: 104269a33; -[SCStoryAdTrackInfo withTileInteraction:] */

void FUN_1042699d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104269848(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104269a34; end: 104269b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104269a34(long param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 unaff_x20;
  long lVar3;
  undefined1 auStack_22a8 [2936];
  undefined1 auStack_1730 [2856];
  long lStack_c08;
  undefined2 uStack_c00;
  undefined1 auStack_bb8 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _swift_getObjectType();
  _objc_retain();
  func_0x0001042d5b90(auStack_1730);
  if (param_1 == 0) {
    lStack_c08 = 0;
    uStack_c00 = 0x200;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_11306bdf0);
    if (lVar3 == 0) {
      lStack_c08 = 0;
      uStack_c00 = CONCAT11(*(undefined1 *)(param_1 + _DAT_11306bdf8),1);
    }
    else {
      _objc_retain();
      func_0x00010c067fc0();
      bVar1 = *(byte *)(param_1 + _DAT_11306bdf8);
      _objc_release(param_1);
      uStack_c00 = (ushort)bVar1 << 8;
      lStack_c08 = lVar3;
    }
  }
  _memcpy(auStack_bb8,auStack_1730,0xb78);
  _objc_allocWithZone(unaff_x20);
  func_0x00010178e408(auStack_bb8,auStack_22a8);
  puVar2 = auStack_bb8;
  func_0x0001042d55f4(puVar2);
  func_0x00010178e444(auStack_bb8);
  func_0x00010178e444(auStack_1730);
  return puVar2;
}



/* Entry: 104269b80; end: 104269bdf; -[SCStoryAdTrackInfo withAdHintInteraction:] */

void FUN_104269b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104269a34(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104269be0; end: 104269cb3; -[SCStoryAdTrackInfo withTileIndexPos:] */

void FUN_104269be0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_22a8 [2936];
  undefined1 auStack_1730 [2872];
  undefined8 uStack_bf8;
  undefined1 auStack_bb8 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  func_0x0001042d5b90(auStack_1730);
  uStack_bf8 = param_3;
  _memcpy(auStack_bb8,auStack_1730,0xb78);
  _objc_allocWithZone(uVar1);
  func_0x00010178e408(auStack_bb8,auStack_22a8);
  puVar2 = auStack_bb8;
  func_0x0001042d55f4(puVar2);
  func_0x00010178e444(auStack_bb8);
  _objc_release(param_1);
  func_0x00010178e444(auStack_1730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104269cb4; end: 104269d8b; -[SCStoryAdTrackInfo withTileAutoPlayEligible:] */

void FUN_104269cb4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_22a8 [2936];
  undefined1 auStack_1730 [2881];
  undefined1 uStack_bef;
  undefined1 auStack_bb8 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  func_0x0001042d5b90(auStack_1730);
  uStack_bef = param_3;
  _memcpy(auStack_bb8,auStack_1730,0xb78);
  _objc_allocWithZone(uVar1);
  func_0x00010178e408(auStack_bb8,auStack_22a8);
  puVar2 = auStack_bb8;
  func_0x0001042d55f4(puVar2);
  func_0x00010178e444(auStack_bb8);
  _objc_release(param_1);
  func_0x00010178e444(auStack_1730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104269d8c; end: 104269e63; -[SCStoryAdTrackInfo withTileAutoPlayed:] */

void FUN_104269d8c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_22a8 [2936];
  undefined1 auStack_1730 [2882];
  undefined1 uStack_bee;
  undefined1 auStack_bb8 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  func_0x0001042d5b90(auStack_1730);
  uStack_bee = param_3;
  _memcpy(auStack_bb8,auStack_1730,0xb78);
  _objc_allocWithZone(uVar1);
  func_0x00010178e408(auStack_bb8,auStack_22a8);
  puVar2 = auStack_bb8;
  func_0x0001042d55f4(puVar2);
  func_0x00010178e444(auStack_bb8);
  _objc_release(param_1);
  func_0x00010178e444(auStack_1730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104269e64; end: 104269f37; -[SCStoryAdTrackInfo withTileAutoPlayTimeMs:] */

void FUN_104269e64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_22a8 [2936];
  undefined1 auStack_1730 [2888];
  undefined8 uStack_be8;
  undefined1 auStack_bb8 [2936];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  func_0x0001042d5b90(auStack_1730);
  uStack_be8 = param_3;
  _memcpy(auStack_bb8,auStack_1730,0xb78);
  _objc_allocWithZone(uVar1);
  func_0x00010178e408(auStack_bb8,auStack_22a8);
  puVar2 = auStack_bb8;
  func_0x0001042d55f4(puVar2);
  func_0x00010178e444(auStack_bb8);
  _objc_release(param_1);
  func_0x00010178e444(auStack_1730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104269f38; end: 10426a60f;  */

undefined8 FUN_104269f38(ulong *param_1,ulong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_6b98 [2744];
  undefined1 auStack_60e0 [2744];
  undefined1 auStack_5628 [2744];
  undefined1 auStack_4b70 [5488];
  undefined1 auStack_3600 [2744];
  undefined1 auStack_2b48 [2744];
  undefined1 auStack_2090 [2744];
  undefined1 auStack_15d8 [2744];
  undefined1 auStack_b20 [2752];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar7 = param_1[1];
  uVar6 = param_2[1];
  if (uVar7 == 0) {
    if (uVar6 != 0) {
      return 0;
    }
  }
  else {
    if (uVar6 == 0) {
      return 0;
    }
    uVar8 = *param_1;
    if ((uVar8 != *param_2 || uVar7 != uVar6) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar8,uVar7,*param_2,uVar6,0), (uVar8 & 1) == 0)) {
      return 0;
    }
  }
  if (param_1[2] != param_2[2]) {
    return 0;
  }
  if ((((byte)param_1[3] ^ (byte)param_2[3]) & 1) != 0) {
    return 0;
  }
  uVar7 = param_1[5];
  uVar6 = param_2[5];
  if (uVar7 == 0) {
    if (uVar6 != 0) {
      return 0;
    }
  }
  else {
    if (uVar6 == 0) {
      return 0;
    }
    uVar8 = param_1[4];
    if (((uVar8 != param_2[4]) || (uVar7 != uVar6)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar8,uVar7,param_2[4],uVar6,0), (uVar8 & 1) == 0)) {
      return 0;
    }
  }
  if (param_1[6] != param_2[6]) {
    return 0;
  }
  if (param_1[7] != param_2[7]) {
    return 0;
  }
  if (param_1[8] != param_2[8]) {
    return 0;
  }
  if (param_1[9] != param_2[9]) {
    return 0;
  }
  if ((double)param_1[10] != (double)param_2[10]) {
    return 0;
  }
  if ((double)param_1[0xb] != (double)param_2[0xb]) {
    return 0;
  }
  uVar7 = param_1[0xc];
  uVar6 = param_2[0xc];
  if (uVar7 == 0) {
    if (uVar6 != 0) {
      return 0;
    }
  }
  else {
    if (uVar6 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar6);
    uVar8 = uVar7;
    _swift_bridgeObjectRetain();
    FUN_104229ba0();
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(uVar6);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  }
  if ((((byte)param_1[0xd] ^ (byte)param_2[0xd]) & 1) != 0) {
    return 0;
  }
  _memcpy(auStack_15d8,param_1 + 0xe,0xab2);
  _memcpy(auStack_2090,param_2 + 0xe,0xab2);
  _memcpy(auStack_3600,param_1 + 0xe,0xab2);
  _memcpy(auStack_2b48,param_2 + 0xe,0xab2);
  iVar3 = (int)auStack_3600;
  func_0x00010178e3ec();
  if (iVar3 == 1) {
    iVar3 = (int)auStack_2b48;
    func_0x00010178e3ec();
    if (iVar3 != 1) {
LAB_10426a250:
      _memcpy(auStack_4b70,auStack_3600,0x156a);
      func_0x000104268714(auStack_15d8,auStack_b20,0x112dcbc80,&UNK_10d98ff10);
      func_0x000104268714(auStack_2090,auStack_b20,0x112dcbc80,&UNK_10d98ff10);
      FUN_1042704c8(auStack_4b70,0x112dcde40,&UNK_10d9902d0);
      return 0;
    }
    _memcpy(auStack_4b70,auStack_3600,0xab2);
    func_0x000104268714(auStack_15d8,auStack_b20,0x112dcbc80,&UNK_10d98ff10);
    func_0x000104268714(auStack_2090,auStack_b20,0x112dcbc80,&UNK_10d98ff10);
    FUN_1042704c8(auStack_4b70,0x112dcbc80,&UNK_10d98ff10);
  }
  else {
    _memcpy(auStack_5628,auStack_3600,0xab2);
    iVar3 = (int)auStack_2b48;
    func_0x00010178e3ec();
    if (iVar3 == 1) goto LAB_10426a250;
    _memcpy(auStack_60e0,auStack_2b48,0xab2);
    _memcpy(auStack_4b70,auStack_2b48,0xab2);
    _memcpy(auStack_b20,auStack_5628,0xab2);
    func_0x000104268714(auStack_15d8,auStack_6b98,0x112dcbc80,&UNK_10d98ff10);
    func_0x000104268714(auStack_2090,auStack_6b98,0x112dcbc80,&UNK_10d98ff10);
    puVar4 = auStack_b20;
    func_0x0001042622d8(puVar4,auStack_4b70);
    FUN_1042704c8(auStack_60e0,0x112dcbc80,&UNK_10d98ff10);
    FUN_1042704c8(auStack_3600,0x112dcbc80,&UNK_10d98ff10);
    if (((ulong)puVar4 & 1) == 0) {
      return 0;
    }
  }
  uVar1 = (ushort)param_1[0x166];
  uVar2 = (ushort)param_2[0x166];
  if ((uVar1 & 0xff00) == 0x200) {
    if ((uVar2 & 0xff00) != 0x200) {
      return 0;
    }
  }
  else {
    if ((uVar2 & 0xff00) == 0x200) {
      return 0;
    }
    if ((uVar1 & 0xff) == 1) {
      if ((uVar2 & 0xff) != 1) {
        return 0;
      }
    }
    else {
      if ((uVar2 & 0xff) == 1) {
        return 0;
      }
      if (param_1[0x165] != param_2[0x165]) {
        return 0;
      }
    }
    if (((uVar1 ^ uVar2) >> 8 & 1) != 0) {
      return 0;
    }
  }
  if (param_1[0x167] != param_2[0x167]) {
    return 0;
  }
  if ((((byte)param_1[0x168] ^ (byte)param_2[0x168]) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0xb41) ^ *(byte *)((long)param_2 + 0xb41)) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0xb42) ^ *(byte *)((long)param_2 + 0xb42)) & 1) != 0) {
    return 0;
  }
  if (param_1[0x169] != param_2[0x169]) {
    return 0;
  }
  uVar13 = param_1[0x16a];
  uVar12 = param_1[0x16b];
  uVar11 = param_1[0x16c];
  uVar10 = param_1[0x16d];
  uVar9 = param_1[0x16e];
  uVar6 = param_2[0x16a];
  uVar7 = param_2[0x16b];
  uVar8 = param_2[0x16c];
  uVar14 = param_2[0x16d];
  uVar15 = param_2[0x16e];
  if (uVar12 == 0) {
    if (uVar7 == 0) {
      return 1;
    }
  }
  else if (uVar7 != 0) {
    if ((((uVar13 == uVar6) && (uVar12 == uVar7)) ||
        (uVar5 = uVar13,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar13,uVar12,uVar6,uVar7,0), (uVar5 & 1) != 0)) &&
       (((uVar11 == uVar8 && (uVar10 == uVar14)) ||
        (uVar5 = uVar11,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar11,uVar10,uVar8,uVar14,0), (uVar5 & 1) != 0)))) {
      func_0x00010421e838(uVar6,uVar7,uVar8,uVar14,uVar15);
      func_0x00010421e838(uVar13,uVar12,uVar11,uVar10,uVar9);
      _swift_bridgeObjectRelease(uVar14);
      _swift_bridgeObjectRelease(uVar7);
      func_0x000101895b9c(uVar13,uVar12,uVar11,uVar10,uVar9);
      if ((int)uVar9 != (int)uVar15) {
        return 0;
      }
      return 1;
    }
    func_0x00010421e838(uVar6,uVar7,uVar8,uVar14,uVar15);
    func_0x00010421e838(uVar13,uVar12,uVar11,uVar10,uVar9);
    _swift_bridgeObjectRelease(uVar14);
    _swift_bridgeObjectRelease(uVar7);
    uVar6 = uVar13;
    uVar7 = uVar12;
    uVar8 = uVar11;
    uVar14 = uVar10;
    uVar15 = uVar9;
    goto LAB_10426a608;
  }
  func_0x00010421e838(uVar6,uVar7,uVar8,uVar14,uVar15);
  func_0x00010421e838(uVar13,uVar12,uVar11,uVar10,uVar9);
  func_0x000101895b9c(uVar13,uVar12,uVar11,uVar10,uVar9);
LAB_10426a608:
  func_0x000101895b9c(uVar6,uVar7,uVar8,uVar14,uVar15);
  return 0;
}



/* Entry: 10426a610; end: 10426a91b;  */

long FUN_10426a610(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10426a91c; end: 10426efaf;  */

undefined8 * FUN_10426a91c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  uVar5 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  uVar5 = param_2[0xc];
  param_1[0xc] = uVar5;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  lVar2 = param_2[0x136];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  if ((lVar2 == 1) || (lVar2 == 2)) {
    _memcpy(param_1 + 0xe,param_2 + 0xe,0xab2);
    goto LAB_10426b74c;
  }
  param_1[0xe] = param_2[0xe];
  lVar1 = param_2[0x10];
  if (lVar1 == 1) {
    _memcpy(param_1 + 0xf,param_2 + 0xf,0x5a8);
  }
  else {
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = lVar1;
    uVar4 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar4;
    uVar4 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar4;
    uVar4 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar4;
    uVar4 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar4;
    uVar5 = param_2[0x19];
    param_1[0x19] = uVar5;
    uVar4 = param_2[0x1a];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar4;
    uVar4 = param_2[0x1d];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1d] = uVar4;
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
    lVar1 = param_2[0x20];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar4);
    if (lVar1 == 0) {
      uVar4 = param_2[0x2b];
      uVar6 = param_2[0x2e];
      uVar5 = param_2[0x2d];
      param_1[0x2c] = param_2[0x2c];
      param_1[0x2b] = uVar4;
      param_1[0x2e] = uVar6;
      param_1[0x2d] = uVar5;
      param_1[0x2f] = param_2[0x2f];
      uVar4 = param_2[0x23];
      uVar6 = param_2[0x26];
      uVar5 = param_2[0x25];
      param_1[0x24] = param_2[0x24];
      param_1[0x23] = uVar4;
      param_1[0x26] = uVar6;
      param_1[0x25] = uVar5;
      uVar6 = param_2[0x27];
      uVar5 = param_2[0x2a];
      uVar4 = param_2[0x29];
      param_1[0x28] = param_2[0x28];
      param_1[0x27] = uVar6;
      param_1[0x2a] = uVar5;
      param_1[0x29] = uVar4;
      uVar6 = param_2[0x1f];
      uVar5 = param_2[0x22];
      uVar4 = param_2[0x21];
      param_1[0x20] = param_2[0x20];
      param_1[0x1f] = uVar6;
      param_1[0x22] = uVar5;
      param_1[0x21] = uVar4;
    }
    else {
      param_1[0x1f] = param_2[0x1f];
      param_1[0x20] = lVar1;
      param_1[0x21] = param_2[0x21];
      uVar4 = param_2[0x22];
      uVar6 = param_2[0x25];
      uVar5 = param_2[0x24];
      param_1[0x23] = param_2[0x23];
      param_1[0x22] = uVar4;
      param_1[0x25] = uVar6;
      param_1[0x24] = uVar5;
      uVar4 = param_2[0x26];
      uVar6 = param_2[0x29];
      uVar5 = param_2[0x28];
      param_1[0x27] = param_2[0x27];
      param_1[0x26] = uVar4;
      param_1[0x29] = uVar6;
      param_1[0x28] = uVar5;
      *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
      param_1[0x2b] = param_2[0x2b];
      uVar4 = param_2[0x2c];
      param_1[0x2d] = param_2[0x2d];
      param_1[0x2c] = uVar4;
      uVar4 = param_2[0x2e];
      uVar5 = param_2[0x2f];
      param_1[0x2e] = uVar4;
      param_1[0x2f] = uVar5;
      _swift_bridgeObjectRetain(lVar1);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
    }
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    uVar4 = param_2[0x31];
    param_1[0x32] = param_2[0x32];
    param_1[0x31] = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 0x194);
    *(undefined8 *)((long)param_1 + 0x19c) = *(undefined8 *)((long)param_2 + 0x19c);
    *(undefined8 *)((long)param_1 + 0x194) = uVar4;
    param_1[0x35] = param_2[0x35];
    uVar4 = param_2[0x42];
    uVar6 = param_2[0x45];
    uVar5 = param_2[0x44];
    param_1[0x43] = param_2[0x43];
    param_1[0x42] = uVar4;
    param_1[0x45] = uVar6;
    param_1[0x44] = uVar5;
    *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)(param_2 + 0x46);
    uVar4 = param_2[0x3a];
    uVar6 = param_2[0x3d];
    uVar5 = param_2[0x3c];
    param_1[0x3b] = param_2[0x3b];
    param_1[0x3a] = uVar4;
    param_1[0x3d] = uVar6;
    param_1[0x3c] = uVar5;
    uVar6 = param_2[0x3e];
    uVar5 = param_2[0x41];
    uVar4 = param_2[0x40];
    param_1[0x3f] = param_2[0x3f];
    param_1[0x3e] = uVar6;
    param_1[0x41] = uVar5;
    param_1[0x40] = uVar4;
    uVar6 = param_2[0x36];
    uVar5 = param_2[0x39];
    uVar4 = param_2[0x38];
    param_1[0x37] = param_2[0x37];
    param_1[0x36] = uVar6;
    param_1[0x39] = uVar5;
    param_1[0x38] = uVar4;
    uVar4 = param_2[0x4f];
    uVar6 = param_2[0x52];
    uVar5 = param_2[0x51];
    param_1[0x50] = param_2[0x50];
    param_1[0x4f] = uVar4;
    param_1[0x52] = uVar6;
    param_1[0x51] = uVar5;
    uVar4 = param_2[0x53];
    param_1[0x54] = param_2[0x54];
    param_1[0x53] = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 0x2a1);
    *(undefined8 *)((long)param_1 + 0x2a9) = *(undefined8 *)((long)param_2 + 0x2a9);
    *(undefined8 *)((long)param_1 + 0x2a1) = uVar4;
    uVar4 = param_2[0x47];
    uVar6 = param_2[0x4a];
    uVar5 = param_2[0x49];
    param_1[0x48] = param_2[0x48];
    param_1[0x47] = uVar4;
    param_1[0x4a] = uVar6;
    param_1[0x49] = uVar5;
    uVar4 = param_2[0x4b];
    uVar6 = param_2[0x4e];
    uVar5 = param_2[0x4d];
    param_1[0x4c] = param_2[0x4c];
    param_1[0x4b] = uVar4;
    param_1[0x4e] = uVar6;
    param_1[0x4d] = uVar5;
    uVar5 = param_2[0x58];
    uVar4 = param_2[0x57];
    uVar7 = param_2[0x5a];
    uVar6 = param_2[0x59];
    uVar8 = param_2[0x5b];
    uVar10 = param_2[0x5e];
    uVar9 = param_2[0x5d];
    param_1[0x5c] = param_2[0x5c];
    param_1[0x5b] = uVar8;
    param_1[0x5e] = uVar10;
    param_1[0x5d] = uVar9;
    param_1[0x58] = uVar5;
    param_1[0x57] = uVar4;
    param_1[0x5a] = uVar7;
    param_1[0x59] = uVar6;
    uVar5 = param_2[0x60];
    uVar4 = param_2[0x5f];
    uVar7 = param_2[0x62];
    uVar6 = param_2[0x61];
    uVar9 = param_2[100];
    uVar8 = param_2[99];
    uVar10 = *(undefined8 *)((long)param_2 + 0x322);
    *(undefined8 *)((long)param_1 + 0x32a) = *(undefined8 *)((long)param_2 + 0x32a);
    *(undefined8 *)((long)param_1 + 0x322) = uVar10;
    param_1[0x62] = uVar7;
    param_1[0x61] = uVar6;
    param_1[100] = uVar9;
    param_1[99] = uVar8;
    param_1[0x60] = uVar5;
    param_1[0x5f] = uVar4;
    param_1[0x67] = param_2[0x67];
    param_1[0x68] = param_2[0x68];
    *(undefined1 *)(param_1 + 0x69) = *(undefined1 *)(param_2 + 0x69);
    *(undefined1 *)((long)param_1 + 0x349) = *(undefined1 *)((long)param_2 + 0x349);
    uVar4 = param_2[0x6a];
    param_1[0x6b] = param_2[0x6b];
    param_1[0x6a] = uVar4;
    *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)(param_2 + 0x6c);
    uVar4 = param_2[0x6d];
    param_1[0x6d] = uVar4;
    *(undefined1 *)(param_1 + 0x6e) = *(undefined1 *)(param_2 + 0x6e);
    *(undefined1 *)((long)param_1 + 0x371) = *(undefined1 *)((long)param_2 + 0x371);
    lVar1 = param_2[0x72];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar4);
    if (lVar1 == 1) {
      uVar4 = param_2[0x6f];
      uVar6 = param_2[0x72];
      uVar5 = param_2[0x71];
      param_1[0x70] = param_2[0x70];
      param_1[0x6f] = uVar4;
      param_1[0x72] = uVar6;
      param_1[0x71] = uVar5;
      uVar4 = param_2[0x73];
      param_1[0x74] = param_2[0x74];
      param_1[0x73] = uVar4;
    }
    else {
      *(undefined1 *)(param_1 + 0x6f) = *(undefined1 *)(param_2 + 0x6f);
      uVar4 = param_2[0x70];
      param_1[0x71] = param_2[0x71];
      param_1[0x70] = uVar4;
      param_1[0x72] = lVar1;
      *(undefined1 *)(param_1 + 0x73) = *(undefined1 *)(param_2 + 0x73);
      uVar4 = param_2[0x74];
      param_1[0x74] = uVar4;
      _swift_bridgeObjectRetain(lVar1);
      _swift_bridgeObjectRetain(uVar4);
    }
    *(undefined1 *)(param_1 + 0x75) = *(undefined1 *)(param_2 + 0x75);
    param_1[0x76] = param_2[0x76];
    param_1[0x77] = param_2[0x77];
    uVar7 = param_2[0x78];
    param_1[0x78] = uVar7;
    uVar6 = param_2[0x79];
    param_1[0x79] = uVar6;
    uVar5 = param_2[0x7a];
    param_1[0x7a] = uVar5;
    param_1[0x7b] = param_2[0x7b];
    *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
    uVar4 = param_2[0x7d];
    *(undefined1 *)(param_1 + 0x7e) = *(undefined1 *)(param_2 + 0x7e);
    param_1[0x7d] = uVar4;
    param_1[0x7f] = param_2[0x7f];
    *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
    uVar4 = param_2[0x81];
    param_1[0x81] = uVar4;
    uVar8 = param_2[0x82];
    param_1[0x82] = uVar8;
    uVar9 = param_2[0x87];
    uVar11 = param_2[0x8a];
    uVar10 = param_2[0x89];
    param_1[0x88] = param_2[0x88];
    param_1[0x87] = uVar9;
    param_1[0x8a] = uVar11;
    param_1[0x89] = uVar10;
    uVar9 = param_2[0x8b];
    uVar11 = param_2[0x8e];
    uVar10 = param_2[0x8d];
    param_1[0x8c] = param_2[0x8c];
    param_1[0x8b] = uVar9;
    param_1[0x8e] = uVar11;
    param_1[0x8d] = uVar10;
    uVar9 = param_2[0x83];
    uVar11 = param_2[0x86];
    uVar10 = param_2[0x85];
    param_1[0x84] = param_2[0x84];
    param_1[0x83] = uVar9;
    param_1[0x86] = uVar11;
    param_1[0x85] = uVar10;
    param_1[0x8f] = param_2[0x8f];
    *(undefined1 *)(param_1 + 0x91) = *(undefined1 *)(param_2 + 0x91);
    param_1[0x90] = param_2[0x90];
    uVar9 = param_2[0x92];
    param_1[0x93] = param_2[0x93];
    param_1[0x92] = uVar9;
    uVar9 = param_2[0x94];
    param_1[0x95] = param_2[0x95];
    param_1[0x94] = uVar9;
    uVar9 = param_2[0x96];
    param_1[0x97] = param_2[0x97];
    param_1[0x96] = uVar9;
    uVar9 = param_2[0x98];
    param_1[0x98] = uVar9;
    lVar1 = param_2[0xa5];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
    if (lVar1 == 1) {
      uVar4 = param_2[0xa1];
      uVar6 = param_2[0xa4];
      uVar5 = param_2[0xa3];
      param_1[0xa2] = param_2[0xa2];
      param_1[0xa1] = uVar4;
      param_1[0xa4] = uVar6;
      param_1[0xa3] = uVar5;
      uVar4 = param_2[0xa5];
      param_1[0xa6] = param_2[0xa6];
      param_1[0xa5] = uVar4;
      *(undefined2 *)(param_1 + 0xa7) = *(undefined2 *)(param_2 + 0xa7);
      uVar4 = param_2[0x99];
      uVar6 = param_2[0x9c];
      uVar5 = param_2[0x9b];
      param_1[0x9a] = param_2[0x9a];
      param_1[0x99] = uVar4;
      param_1[0x9c] = uVar6;
      param_1[0x9b] = uVar5;
      uVar4 = param_2[0x9d];
      uVar6 = param_2[0xa0];
      uVar5 = param_2[0x9f];
      param_1[0x9e] = param_2[0x9e];
      param_1[0x9d] = uVar4;
      param_1[0xa0] = uVar6;
      param_1[0x9f] = uVar5;
    }
    else {
      *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)(param_2 + 0x99);
      param_1[0x9a] = param_2[0x9a];
      *(undefined1 *)(param_1 + 0x9b) = *(undefined1 *)(param_2 + 0x9b);
      param_1[0x9c] = param_2[0x9c];
      *(undefined1 *)(param_1 + 0x9d) = *(undefined1 *)(param_2 + 0x9d);
      param_1[0x9e] = param_2[0x9e];
      *(undefined1 *)(param_1 + 0x9f) = *(undefined1 *)(param_2 + 0x9f);
      *(undefined1 *)(param_1 + 0xa1) = *(undefined1 *)(param_2 + 0xa1);
      param_1[0xa0] = param_2[0xa0];
      param_1[0xa2] = param_2[0xa2];
      *(undefined1 *)(param_1 + 0xa3) = *(undefined1 *)(param_2 + 0xa3);
      param_1[0xa4] = param_2[0xa4];
      param_1[0xa5] = lVar1;
      param_1[0xa6] = param_2[0xa6];
      *(undefined2 *)(param_1 + 0xa7) = *(undefined2 *)(param_2 + 0xa7);
      _swift_bridgeObjectRetain(lVar1);
    }
    *(undefined1 *)((long)param_1 + 0x53a) = *(undefined1 *)((long)param_2 + 0x53a);
    param_1[0xa8] = param_2[0xa8];
    *(undefined2 *)(param_1 + 0xb1) = *(undefined2 *)(param_2 + 0xb1);
    uVar4 = param_2[0xad];
    uVar6 = param_2[0xb0];
    uVar5 = param_2[0xaf];
    param_1[0xae] = param_2[0xae];
    param_1[0xad] = uVar4;
    param_1[0xb0] = uVar6;
    param_1[0xaf] = uVar5;
    uVar6 = param_2[0xa9];
    uVar5 = param_2[0xac];
    uVar4 = param_2[0xab];
    param_1[0xaa] = param_2[0xaa];
    param_1[0xa9] = uVar6;
    param_1[0xac] = uVar5;
    param_1[0xab] = uVar4;
    lVar1 = param_2[0xb3];
    _swift_bridgeObjectRetain();
    if (lVar1 == 0) {
      uVar4 = param_2[0xb2];
      uVar6 = param_2[0xb5];
      uVar5 = param_2[0xb4];
      param_1[0xb3] = param_2[0xb3];
      param_1[0xb2] = uVar4;
      param_1[0xb5] = uVar6;
      param_1[0xb4] = uVar5;
      param_1[0xb6] = param_2[0xb6];
    }
    else {
      param_1[0xb2] = param_2[0xb2];
      param_1[0xb3] = lVar1;
      param_1[0xb4] = param_2[0xb4];
      uVar4 = param_2[0xb5];
      param_1[0xb5] = uVar4;
      param_1[0xb6] = param_2[0xb6];
      _swift_bridgeObjectRetain(lVar1);
      _swift_bridgeObjectRetain(uVar4);
    }
    *(undefined1 *)(param_1 + 0xb9) = *(undefined1 *)(param_2 + 0xb9);
    uVar4 = param_2[0xb7];
    param_1[0xb8] = param_2[0xb8];
    param_1[0xb7] = uVar4;
    param_1[0xba] = param_2[0xba];
    param_1[0xbb] = param_2[0xbb];
    *(undefined1 *)(param_1 + 0xbc) = *(undefined1 *)(param_2 + 0xbc);
    uVar4 = param_2[0xbd];
    param_1[0xbd] = uVar4;
    *(undefined1 *)(param_1 + 0xbf) = *(undefined1 *)(param_2 + 0xbf);
    param_1[0xbe] = param_2[0xbe];
    uVar5 = param_2[0xc0];
    param_1[0xc0] = uVar5;
    uVar6 = param_2[0xc1];
    param_1[0xc1] = uVar6;
    uVar7 = param_2[0xc2];
    param_1[0xc2] = uVar7;
    uVar8 = param_2[0xc3];
    param_1[0xc3] = uVar8;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar4);
    _objc_retain(uVar5);
    _objc_retain(uVar6);
    _objc_retain(uVar7);
    _swift_bridgeObjectRetain(uVar8);
  }
  lVar1 = param_2[200];
  if (lVar1 == 1) {
    uVar4 = param_2[0xcc];
    uVar6 = param_2[0xcf];
    uVar5 = param_2[0xce];
    param_1[0xcd] = param_2[0xcd];
    param_1[0xcc] = uVar4;
    param_1[0xcf] = uVar6;
    param_1[0xce] = uVar5;
    uVar4 = *(undefined8 *)((long)param_2 + 0x679);
    *(undefined8 *)((long)param_1 + 0x681) = *(undefined8 *)((long)param_2 + 0x681);
    *(undefined8 *)((long)param_1 + 0x679) = uVar4;
    uVar4 = param_2[0xc4];
    uVar6 = param_2[199];
    uVar5 = param_2[0xc6];
    param_1[0xc5] = param_2[0xc5];
    param_1[0xc4] = uVar4;
    param_1[199] = uVar6;
    param_1[0xc6] = uVar5;
    uVar6 = param_2[200];
    uVar5 = param_2[0xcb];
    uVar4 = param_2[0xca];
    param_1[0xc9] = param_2[0xc9];
    param_1[200] = uVar6;
    param_1[0xcb] = uVar5;
    param_1[0xca] = uVar4;
  }
  else {
    uVar4 = param_2[0xc4];
    param_1[0xc5] = param_2[0xc5];
    param_1[0xc4] = uVar4;
    *(undefined2 *)(param_1 + 0xc6) = *(undefined2 *)(param_2 + 0xc6);
    param_1[199] = param_2[199];
    param_1[200] = lVar1;
    *(undefined1 *)(param_1 + 0xc9) = *(undefined1 *)(param_2 + 0xc9);
    param_1[0xca] = param_2[0xca];
    *(undefined1 *)(param_1 + 0xcb) = *(undefined1 *)(param_2 + 0xcb);
    param_1[0xcc] = param_2[0xcc];
    *(undefined1 *)(param_1 + 0xcd) = *(undefined1 *)(param_2 + 0xcd);
    uVar4 = param_2[0xce];
    *(undefined1 *)(param_1 + 0xcf) = *(undefined1 *)(param_2 + 0xcf);
    param_1[0xce] = uVar4;
    param_1[0xd0] = param_2[0xd0];
    *(undefined1 *)(param_1 + 0xd1) = *(undefined1 *)(param_2 + 0xd1);
    _swift_bridgeObjectRetain();
  }
  lVar1 = param_2[0xd8];
  if (lVar1 == 1) {
    _memcpy(param_1 + 0xd2,param_2 + 0xd2,0x301);
  }
  else {
    *(undefined2 *)(param_1 + 0xd2) = *(undefined2 *)(param_2 + 0xd2);
    param_1[0xd3] = param_2[0xd3];
    *(undefined1 *)(param_1 + 0xd4) = *(undefined1 *)(param_2 + 0xd4);
    param_1[0xd5] = param_2[0xd5];
    *(undefined1 *)(param_1 + 0xd6) = *(undefined1 *)(param_2 + 0xd6);
    param_1[0xd7] = param_2[0xd7];
    param_1[0xd8] = lVar1;
    *(undefined1 *)(param_1 + 0xda) = *(undefined1 *)(param_2 + 0xda);
    param_1[0xd9] = param_2[0xd9];
    *(undefined1 *)((long)param_1 + 0x6d1) = *(undefined1 *)((long)param_2 + 0x6d1);
    param_1[0xdb] = param_2[0xdb];
    uVar5 = param_2[0xdc];
    param_1[0xdc] = uVar5;
    *(undefined2 *)(param_1 + 0xdd) = *(undefined2 *)(param_2 + 0xdd);
    param_1[0xde] = param_2[0xde];
    *(undefined1 *)(param_1 + 0xdf) = *(undefined1 *)(param_2 + 0xdf);
    param_1[0xe0] = param_2[0xe0];
    *(undefined1 *)(param_1 + 0xe1) = *(undefined1 *)(param_2 + 0xe1);
    uVar4 = param_2[0xe2];
    *(undefined1 *)(param_1 + 0xe3) = *(undefined1 *)(param_2 + 0xe3);
    param_1[0xe2] = uVar4;
    *(undefined1 *)((long)param_1 + 0x719) = *(undefined1 *)((long)param_2 + 0x719);
    lVar1 = param_2[0xef];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar5);
    if (lVar1 == 1) {
      _memcpy(param_1 + 0xe4,param_2 + 0xe4,0x101);
    }
    else {
      param_1[0xe4] = param_2[0xe4];
      *(undefined1 *)(param_1 + 0xe5) = *(undefined1 *)(param_2 + 0xe5);
      param_1[0xe6] = param_2[0xe6];
      *(undefined1 *)(param_1 + 0xe7) = *(undefined1 *)(param_2 + 0xe7);
      param_1[0xe8] = param_2[0xe8];
      *(undefined1 *)(param_1 + 0xe9) = *(undefined1 *)(param_2 + 0xe9);
      *(undefined1 *)(param_1 + 0xeb) = *(undefined1 *)(param_2 + 0xeb);
      param_1[0xea] = param_2[0xea];
      uVar4 = param_2[0xec];
      *(undefined1 *)(param_1 + 0xed) = *(undefined1 *)(param_2 + 0xed);
      param_1[0xec] = uVar4;
      *(undefined1 *)((long)param_1 + 0x769) = *(undefined1 *)((long)param_2 + 0x769);
      param_1[0xee] = param_2[0xee];
      param_1[0xef] = lVar1;
      param_1[0xf0] = param_2[0xf0];
      uVar5 = param_2[0xf1];
      param_1[0xf1] = uVar5;
      param_1[0xf2] = param_2[0xf2];
      *(undefined1 *)(param_1 + 0xf3) = *(undefined1 *)(param_2 + 0xf3);
      *(undefined1 *)(param_1 + 0xf5) = *(undefined1 *)(param_2 + 0xf5);
      param_1[0xf4] = param_2[0xf4];
      *(undefined1 *)(param_1 + 0xf7) = *(undefined1 *)(param_2 + 0xf7);
      param_1[0xf6] = param_2[0xf6];
      *(undefined1 *)(param_1 + 0xf9) = *(undefined1 *)(param_2 + 0xf9);
      param_1[0xf8] = param_2[0xf8];
      *(undefined1 *)(param_1 + 0xfb) = *(undefined1 *)(param_2 + 0xfb);
      param_1[0xfa] = param_2[0xfa];
      param_1[0xfc] = param_2[0xfc];
      uVar6 = param_2[0xfd];
      param_1[0xfd] = uVar6;
      uVar4 = param_2[0xfe];
      *(undefined1 *)(param_1 + 0xff) = *(undefined1 *)(param_2 + 0xff);
      param_1[0xfe] = uVar4;
      uVar4 = param_2[0x100];
      *(undefined1 *)(param_1 + 0x101) = *(undefined1 *)(param_2 + 0x101);
      param_1[0x100] = uVar4;
      param_1[0x102] = param_2[0x102];
      uVar4 = param_2[0x103];
      param_1[0x103] = uVar4;
      *(undefined1 *)(param_1 + 0x104) = *(undefined1 *)(param_2 + 0x104);
      _swift_bridgeObjectRetain(lVar1);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar4);
    }
    *(undefined1 *)((long)param_1 + 0x821) = *(undefined1 *)((long)param_2 + 0x821);
    param_1[0x105] = param_2[0x105];
    param_1[0x106] = param_2[0x106];
    *(undefined1 *)(param_1 + 0x107) = *(undefined1 *)(param_2 + 0x107);
    if (param_2[0x108] == 1) {
      uVar4 = param_2[0x108];
      param_1[0x109] = param_2[0x109];
      param_1[0x108] = uVar4;
      param_1[0x10a] = param_2[0x10a];
    }
    else {
      param_1[0x108] = param_2[0x108];
      uVar4 = param_2[0x109];
      param_1[0x109] = uVar4;
      uVar5 = param_2[0x10a];
      param_1[0x10a] = uVar5;
      _objc_retain();
      _objc_retain(uVar4);
      _objc_retain(uVar5);
    }
    *(undefined1 *)(param_1 + 0x10b) = *(undefined1 *)(param_2 + 0x10b);
    param_1[0x10c] = param_2[0x10c];
    *(undefined1 *)(param_1 + 0x10d) = *(undefined1 *)(param_2 + 0x10d);
    param_1[0x10e] = param_2[0x10e];
    *(undefined1 *)(param_1 + 0x10f) = *(undefined1 *)(param_2 + 0x10f);
    lVar1 = param_2[0x111];
    if (lVar1 == 1) {
      uVar4 = param_2[0x110];
      uVar6 = param_2[0x113];
      uVar5 = param_2[0x112];
      param_1[0x111] = param_2[0x111];
      param_1[0x110] = uVar4;
      param_1[0x113] = uVar6;
      param_1[0x112] = uVar5;
      uVar4 = param_2[0x114];
      param_1[0x115] = param_2[0x115];
      param_1[0x114] = uVar4;
    }
    else {
      *(undefined2 *)(param_1 + 0x110) = *(undefined2 *)(param_2 + 0x110);
      param_1[0x111] = lVar1;
      uVar4 = param_2[0x112];
      param_1[0x112] = uVar4;
      uVar5 = param_2[0x113];
      param_1[0x113] = uVar5;
      *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
      uVar6 = param_2[0x115];
      param_1[0x115] = uVar6;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
    }
    param_1[0x116] = param_2[0x116];
    *(undefined1 *)(param_1 + 0x117) = *(undefined1 *)(param_2 + 0x117);
    param_1[0x118] = param_2[0x118];
    *(undefined2 *)(param_1 + 0x119) = *(undefined2 *)(param_2 + 0x119);
    if (param_2[0x11a] == 0) {
      uVar4 = param_2[0x11a];
      param_1[0x11b] = param_2[0x11b];
      param_1[0x11a] = uVar4;
      param_1[0x11c] = param_2[0x11c];
    }
    else {
      param_1[0x11a] = param_2[0x11a];
      uVar4 = param_2[0x11b];
      param_1[0x11b] = uVar4;
      uVar5 = param_2[0x11c];
      param_1[0x11c] = uVar5;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
    }
    param_1[0x11d] = param_2[0x11d];
    param_1[0x11e] = param_2[0x11e];
    uVar4 = param_2[0x11f];
    param_1[0x11f] = uVar4;
    *(undefined1 *)(param_1 + 0x120) = *(undefined1 *)(param_2 + 0x120);
    *(undefined2 *)((long)param_1 + 0x901) = *(undefined2 *)((long)param_2 + 0x901);
    param_1[0x121] = param_2[0x121];
    *(undefined1 *)(param_1 + 0x122) = *(undefined1 *)(param_2 + 0x122);
    param_1[0x123] = param_2[0x123];
    uVar5 = param_2[0x124];
    param_1[0x125] = param_2[0x125];
    param_1[0x124] = uVar5;
    *(undefined2 *)(param_1 + 0x126) = *(undefined2 *)(param_2 + 0x126);
    param_1[0x127] = param_2[0x127];
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
    param_1[0x129] = param_2[0x129];
    *(undefined1 *)(param_1 + 0x12a) = *(undefined1 *)(param_2 + 0x12a);
    param_1[299] = param_2[299];
    *(undefined1 *)(param_1 + 300) = *(undefined1 *)(param_2 + 300);
    *(undefined1 *)(param_1 + 0x12e) = *(undefined1 *)(param_2 + 0x12e);
    param_1[0x12d] = param_2[0x12d];
    param_1[0x12f] = param_2[0x12f];
    uVar5 = param_2[0x130];
    param_1[0x130] = uVar5;
    *(undefined1 *)(param_1 + 0x132) = *(undefined1 *)(param_2 + 0x132);
    param_1[0x131] = param_2[0x131];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
  }
  if (param_2[0x133] == 1) {
    uVar4 = param_2[0x133];
    param_1[0x134] = param_2[0x134];
    param_1[0x133] = uVar4;
  }
  else {
    param_1[0x133] = param_2[0x133];
    param_1[0x134] = param_2[0x134];
    _swift_bridgeObjectRetain();
  }
  lVar1 = param_2[0x135];
  if (lVar1 != 1) {
    _swift_bridgeObjectRetain();
  }
  param_1[0x135] = lVar1;
  param_1[0x136] = lVar2;
  *(undefined2 *)(param_1 + 0x137) = *(undefined2 *)(param_2 + 0x137);
  lVar1 = param_2[0x138];
  _objc_retain(lVar2);
  if (lVar1 == 0) {
    uVar4 = param_2[0x13c];
    uVar6 = param_2[0x13f];
    uVar5 = param_2[0x13e];
    param_1[0x13d] = param_2[0x13d];
    param_1[0x13c] = uVar4;
    param_1[0x13f] = uVar6;
    param_1[0x13e] = uVar5;
    uVar4 = param_2[0x140];
    param_1[0x141] = param_2[0x141];
    param_1[0x140] = uVar4;
    uVar6 = param_2[0x138];
    uVar5 = param_2[0x13b];
    uVar4 = param_2[0x13a];
    param_1[0x139] = param_2[0x139];
    param_1[0x138] = uVar6;
    param_1[0x13b] = uVar5;
    param_1[0x13a] = uVar4;
LAB_10426b528:
    uVar3 = param_2[0x143];
    if (uVar3 >> 0x3c < 0xf) {
      uVar4 = param_2[0x142];
      func_0x00010006c00c(uVar4,uVar3);
      param_1[0x142] = uVar4;
      param_1[0x143] = uVar3;
    }
    else {
      uVar4 = param_2[0x142];
      param_1[0x143] = param_2[0x143];
      param_1[0x142] = uVar4;
    }
  }
  else {
    if (lVar1 != 1) {
      param_1[0x138] = lVar1;
      uVar4 = param_2[0x139];
      param_1[0x139] = uVar4;
      param_1[0x13a] = param_2[0x13a];
      *(undefined1 *)(param_1 + 0x13b) = *(undefined1 *)(param_2 + 0x13b);
      uVar5 = param_2[0x13c];
      param_1[0x13d] = param_2[0x13d];
      param_1[0x13c] = uVar5;
      uVar3 = param_2[0x13f];
      _swift_bridgeObjectRetain(lVar1);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar3 >> 0x3c < 0xf) {
        uVar4 = param_2[0x13e];
        func_0x00010006c00c(uVar4,uVar3);
        param_1[0x13e] = uVar4;
        param_1[0x13f] = uVar3;
      }
      else {
        uVar4 = param_2[0x13e];
        param_1[0x13f] = param_2[0x13f];
        param_1[0x13e] = uVar4;
      }
      uVar4 = param_2[0x140];
      param_1[0x141] = param_2[0x141];
      param_1[0x140] = uVar4;
      goto LAB_10426b528;
    }
    uVar4 = param_2[0x13c];
    uVar6 = param_2[0x13f];
    uVar5 = param_2[0x13e];
    param_1[0x13d] = param_2[0x13d];
    param_1[0x13c] = uVar4;
    param_1[0x13f] = uVar6;
    param_1[0x13e] = uVar5;
    uVar4 = param_2[0x140];
    uVar6 = param_2[0x143];
    uVar5 = param_2[0x142];
    param_1[0x141] = param_2[0x141];
    param_1[0x140] = uVar4;
    param_1[0x143] = uVar6;
    param_1[0x142] = uVar5;
    uVar4 = param_2[0x138];
    uVar6 = param_2[0x13b];
    uVar5 = param_2[0x13a];
    param_1[0x139] = param_2[0x139];
    param_1[0x138] = uVar4;
    param_1[0x13b] = uVar6;
    param_1[0x13a] = uVar5;
  }
  lVar2 = param_2[0x148];
  if (lVar2 == 1) {
    uVar4 = param_2[0x154];
    uVar6 = param_2[0x157];
    uVar5 = param_2[0x156];
    param_1[0x155] = param_2[0x155];
    param_1[0x154] = uVar4;
    param_1[0x157] = uVar6;
    param_1[0x156] = uVar5;
    uVar4 = param_2[0x158];
    param_1[0x159] = param_2[0x159];
    param_1[0x158] = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 0xac9);
    *(undefined8 *)((long)param_1 + 0xad1) = *(undefined8 *)((long)param_2 + 0xad1);
    *(undefined8 *)((long)param_1 + 0xac9) = uVar4;
    uVar4 = param_2[0x14c];
    uVar6 = param_2[0x14f];
    uVar5 = param_2[0x14e];
    param_1[0x14d] = param_2[0x14d];
    param_1[0x14c] = uVar4;
    param_1[0x14f] = uVar6;
    param_1[0x14e] = uVar5;
    uVar4 = param_2[0x150];
    uVar6 = param_2[0x153];
    uVar5 = param_2[0x152];
    param_1[0x151] = param_2[0x151];
    param_1[0x150] = uVar4;
    param_1[0x153] = uVar6;
    param_1[0x152] = uVar5;
    uVar4 = param_2[0x144];
    uVar6 = param_2[0x147];
    uVar5 = param_2[0x146];
    param_1[0x145] = param_2[0x145];
    param_1[0x144] = uVar4;
    param_1[0x147] = uVar6;
    param_1[0x146] = uVar5;
    uVar4 = param_2[0x148];
    uVar6 = param_2[0x14b];
    uVar5 = param_2[0x14a];
    param_1[0x149] = param_2[0x149];
    param_1[0x148] = uVar4;
    param_1[0x14b] = uVar6;
    param_1[0x14a] = uVar5;
  }
  else {
    *(undefined2 *)(param_1 + 0x144) = *(undefined2 *)(param_2 + 0x144);
    param_1[0x145] = param_2[0x145];
    *(undefined1 *)(param_1 + 0x146) = *(undefined1 *)(param_2 + 0x146);
    param_1[0x147] = param_2[0x147];
    param_1[0x148] = lVar2;
    lVar2 = param_2[0x151];
    _swift_bridgeObjectRetain();
    if (lVar2 == 1) {
      uVar4 = param_2[0x151];
      uVar6 = param_2[0x154];
      uVar5 = param_2[0x153];
      param_1[0x152] = param_2[0x152];
      param_1[0x151] = uVar4;
      param_1[0x154] = uVar6;
      param_1[0x153] = uVar5;
      *(undefined1 *)(param_1 + 0x155) = *(undefined1 *)(param_2 + 0x155);
      uVar4 = param_2[0x149];
      uVar6 = param_2[0x14c];
      uVar5 = param_2[0x14b];
      param_1[0x14a] = param_2[0x14a];
      param_1[0x149] = uVar4;
      param_1[0x14c] = uVar6;
      param_1[0x14b] = uVar5;
      uVar6 = param_2[0x14d];
      uVar5 = param_2[0x150];
      uVar4 = param_2[0x14f];
      param_1[0x14e] = param_2[0x14e];
      param_1[0x14d] = uVar6;
      param_1[0x150] = uVar5;
      param_1[0x14f] = uVar4;
    }
    else {
      param_1[0x149] = param_2[0x149];
      *(undefined1 *)(param_1 + 0x14a) = *(undefined1 *)(param_2 + 0x14a);
      param_1[0x14b] = param_2[0x14b];
      *(undefined1 *)(param_1 + 0x14c) = *(undefined1 *)(param_2 + 0x14c);
      param_1[0x14d] = param_2[0x14d];
      *(undefined1 *)(param_1 + 0x14e) = *(undefined1 *)(param_2 + 0x14e);
      *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
      param_1[0x14f] = param_2[0x14f];
      param_1[0x151] = lVar2;
      *(undefined1 *)(param_1 + 0x153) = *(undefined1 *)(param_2 + 0x153);
      param_1[0x152] = param_2[0x152];
      *(undefined1 *)(param_1 + 0x155) = *(undefined1 *)(param_2 + 0x155);
      param_1[0x154] = param_2[0x154];
      _objc_retain(lVar2);
    }
    param_1[0x156] = param_2[0x156];
    *(undefined1 *)(param_1 + 0x157) = *(undefined1 *)(param_2 + 0x157);
    param_1[0x158] = param_2[0x158];
    *(undefined1 *)(param_1 + 0x159) = *(undefined1 *)(param_2 + 0x159);
    param_1[0x15a] = param_2[0x15a];
    *(undefined1 *)(param_1 + 0x15b) = *(undefined1 *)(param_2 + 0x15b);
  }
  if (param_2[0x15c] == 1) {
    uVar4 = param_2[0x15c];
    param_1[0x15d] = param_2[0x15d];
    param_1[0x15c] = uVar4;
    *(undefined1 *)(param_1 + 0x15e) = *(undefined1 *)(param_2 + 0x15e);
  }
  else {
    param_1[0x15c] = param_2[0x15c];
    param_1[0x15d] = param_2[0x15d];
    *(undefined1 *)(param_1 + 0x15e) = *(undefined1 *)(param_2 + 0x15e);
    _swift_bridgeObjectRetain();
  }
  lVar2 = param_2[0x161];
  if (lVar2 == 1) {
    uVar4 = param_2[0x15f];
    param_1[0x160] = param_2[0x160];
    param_1[0x15f] = uVar4;
    param_1[0x161] = param_2[0x161];
  }
  else {
    param_1[0x15f] = param_2[0x15f];
    param_1[0x160] = param_2[0x160];
    param_1[0x161] = lVar2;
    _swift_bridgeObjectRetain();
  }
  param_1[0x162] = param_2[0x162];
  param_1[0x163] = param_2[0x163];
  *(undefined2 *)(param_1 + 0x164) = *(undefined2 *)(param_2 + 0x164);
  _objc_retain();
LAB_10426b74c:
  param_1[0x165] = param_2[0x165];
  *(undefined2 *)(param_1 + 0x166) = *(undefined2 *)(param_2 + 0x166);
  param_1[0x167] = param_2[0x167];
  *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(param_2 + 0x168);
  *(undefined2 *)((long)param_1 + 0xb41) = *(undefined2 *)((long)param_2 + 0xb41);
  param_1[0x169] = param_2[0x169];
  lVar2 = param_2[0x16b];
  if (lVar2 == 0) {
    uVar4 = param_2[0x16a];
    uVar6 = param_2[0x16d];
    uVar5 = param_2[0x16c];
    param_1[0x16b] = param_2[0x16b];
    param_1[0x16a] = uVar4;
    param_1[0x16d] = uVar6;
    param_1[0x16c] = uVar5;
    param_1[0x16e] = param_2[0x16e];
  }
  else {
    param_1[0x16a] = param_2[0x16a];
    param_1[0x16b] = lVar2;
    param_1[0x16c] = param_2[0x16c];
    uVar4 = param_2[0x16d];
    param_1[0x16d] = uVar4;
    param_1[0x16e] = param_2[0x16e];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar4);
  }
  return param_1;
}



/* Entry: 10426efb0; end: 10426efb7;  */

void FUN_10426efb0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0xb78);
  return;
}



/* Entry: 10426efb8; end: 1042700ff;  */

undefined8 * FUN_10426efb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar5 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar5 = param_2[5];
  uVar4 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  uVar5 = param_2[6];
  uVar8 = param_2[9];
  uVar4 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar8;
  param_1[8] = uVar4;
  uVar5 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  uVar5 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRelease(uVar5);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  if (param_1[0x136] != 2) {
    if (param_2[0x136] == 2) {
      func_0x0001018a331c(param_1 + 0xe);
    }
    else if (param_1[0x136] != 1) {
      if (param_2[0x136] != 1) {
        param_1[0xe] = param_2[0xe];
        if (param_1[0x10] == 1) {
LAB_10426f158:
          _memcpy(param_1 + 0xf,param_2 + 0xf,0x5a8);
        }
        else {
          lVar6 = param_2[0x10];
          if (lVar6 == 1) {
            func_0x00010178e3b8(param_1 + 0xf);
            goto LAB_10426f158;
          }
          param_1[0xf] = param_2[0xf];
          param_1[0x10] = lVar6;
          _swift_bridgeObjectRelease();
          param_1[0x11] = param_2[0x11];
          param_1[0x12] = param_2[0x12];
          uVar5 = param_2[0x13];
          param_1[0x14] = param_2[0x14];
          param_1[0x13] = uVar5;
          uVar5 = param_2[0x15];
          param_1[0x16] = param_2[0x16];
          param_1[0x15] = uVar5;
          uVar5 = param_2[0x17];
          param_1[0x18] = param_2[0x18];
          param_1[0x17] = uVar5;
          uVar5 = param_1[0x19];
          param_1[0x19] = param_2[0x19];
          _swift_bridgeObjectRelease(uVar5);
          param_1[0x1a] = param_2[0x1a];
          param_1[0x1b] = param_2[0x1b];
          uVar5 = param_2[0x1d];
          uVar4 = param_1[0x1d];
          param_1[0x1c] = param_2[0x1c];
          param_1[0x1d] = uVar5;
          _swift_bridgeObjectRelease(uVar4);
          *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
          if (param_1[0x20] == 0) {
LAB_10426f268:
            uVar5 = param_2[0x2b];
            uVar8 = param_2[0x2e];
            uVar4 = param_2[0x2d];
            param_1[0x2c] = param_2[0x2c];
            param_1[0x2b] = uVar5;
            param_1[0x2e] = uVar8;
            param_1[0x2d] = uVar4;
            param_1[0x2f] = param_2[0x2f];
            uVar5 = param_2[0x23];
            uVar8 = param_2[0x26];
            uVar4 = param_2[0x25];
            param_1[0x24] = param_2[0x24];
            param_1[0x23] = uVar5;
            param_1[0x26] = uVar8;
            param_1[0x25] = uVar4;
            uVar8 = param_2[0x27];
            uVar4 = param_2[0x2a];
            uVar5 = param_2[0x29];
            param_1[0x28] = param_2[0x28];
            param_1[0x27] = uVar8;
            param_1[0x2a] = uVar4;
            param_1[0x29] = uVar5;
            uVar8 = param_2[0x1f];
            uVar4 = param_2[0x22];
            uVar5 = param_2[0x21];
            param_1[0x20] = param_2[0x20];
            param_1[0x1f] = uVar8;
            param_1[0x22] = uVar4;
            param_1[0x21] = uVar5;
          }
          else {
            lVar6 = param_2[0x20];
            if (lVar6 == 0) {
              func_0x0001018657d8(param_1 + 0x1f);
              goto LAB_10426f268;
            }
            param_1[0x1f] = param_2[0x1f];
            param_1[0x20] = lVar6;
            _swift_bridgeObjectRelease();
            uVar5 = param_2[0x22];
            param_1[0x21] = param_2[0x21];
            param_1[0x22] = uVar5;
            param_1[0x23] = param_2[0x23];
            uVar5 = param_2[0x24];
            uVar8 = param_2[0x27];
            uVar4 = param_2[0x26];
            param_1[0x25] = param_2[0x25];
            param_1[0x24] = uVar5;
            param_1[0x27] = uVar8;
            param_1[0x26] = uVar4;
            param_1[0x28] = param_2[0x28];
            param_1[0x29] = param_2[0x29];
            *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
            param_1[0x2b] = param_2[0x2b];
            uVar5 = param_2[0x2c];
            param_1[0x2d] = param_2[0x2d];
            param_1[0x2c] = uVar5;
            uVar5 = param_1[0x2e];
            param_1[0x2e] = param_2[0x2e];
            _swift_bridgeObjectRelease(uVar5);
            uVar5 = param_1[0x2f];
            param_1[0x2f] = param_2[0x2f];
            _swift_bridgeObjectRelease(uVar5);
          }
          *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
          uVar5 = param_2[0x31];
          param_1[0x32] = param_2[0x32];
          param_1[0x31] = uVar5;
          uVar5 = *(undefined8 *)((long)param_2 + 0x194);
          *(undefined8 *)((long)param_1 + 0x19c) = *(undefined8 *)((long)param_2 + 0x19c);
          *(undefined8 *)((long)param_1 + 0x194) = uVar5;
          param_1[0x35] = param_2[0x35];
          uVar5 = param_2[0x42];
          uVar8 = param_2[0x45];
          uVar4 = param_2[0x44];
          param_1[0x43] = param_2[0x43];
          param_1[0x42] = uVar5;
          param_1[0x45] = uVar8;
          param_1[0x44] = uVar4;
          *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)(param_2 + 0x46);
          uVar5 = param_2[0x3a];
          uVar8 = param_2[0x3d];
          uVar4 = param_2[0x3c];
          param_1[0x3b] = param_2[0x3b];
          param_1[0x3a] = uVar5;
          param_1[0x3d] = uVar8;
          param_1[0x3c] = uVar4;
          uVar8 = param_2[0x3e];
          uVar4 = param_2[0x41];
          uVar5 = param_2[0x40];
          param_1[0x3f] = param_2[0x3f];
          param_1[0x3e] = uVar8;
          param_1[0x41] = uVar4;
          param_1[0x40] = uVar5;
          uVar8 = param_2[0x36];
          uVar4 = param_2[0x39];
          uVar5 = param_2[0x38];
          param_1[0x37] = param_2[0x37];
          param_1[0x36] = uVar8;
          param_1[0x39] = uVar4;
          param_1[0x38] = uVar5;
          uVar5 = param_2[0x4f];
          uVar8 = param_2[0x52];
          uVar4 = param_2[0x51];
          param_1[0x50] = param_2[0x50];
          param_1[0x4f] = uVar5;
          param_1[0x52] = uVar8;
          param_1[0x51] = uVar4;
          uVar5 = param_2[0x53];
          param_1[0x54] = param_2[0x54];
          param_1[0x53] = uVar5;
          uVar5 = *(undefined8 *)((long)param_2 + 0x2a1);
          *(undefined8 *)((long)param_1 + 0x2a9) = *(undefined8 *)((long)param_2 + 0x2a9);
          *(undefined8 *)((long)param_1 + 0x2a1) = uVar5;
          uVar5 = param_2[0x47];
          uVar8 = param_2[0x4a];
          uVar4 = param_2[0x49];
          param_1[0x48] = param_2[0x48];
          param_1[0x47] = uVar5;
          param_1[0x4a] = uVar8;
          param_1[0x49] = uVar4;
          uVar5 = param_2[0x4b];
          uVar8 = param_2[0x4e];
          uVar4 = param_2[0x4d];
          param_1[0x4c] = param_2[0x4c];
          param_1[0x4b] = uVar5;
          param_1[0x4e] = uVar8;
          param_1[0x4d] = uVar4;
          uVar4 = param_2[0x58];
          uVar5 = param_2[0x57];
          uVar9 = param_2[0x5a];
          uVar8 = param_2[0x59];
          uVar10 = param_2[0x5b];
          uVar12 = param_2[0x5e];
          uVar11 = param_2[0x5d];
          param_1[0x5c] = param_2[0x5c];
          param_1[0x5b] = uVar10;
          param_1[0x5e] = uVar12;
          param_1[0x5d] = uVar11;
          param_1[0x58] = uVar4;
          param_1[0x57] = uVar5;
          param_1[0x5a] = uVar9;
          param_1[0x59] = uVar8;
          uVar4 = param_2[0x60];
          uVar5 = param_2[0x5f];
          uVar9 = param_2[0x62];
          uVar8 = param_2[0x61];
          uVar11 = param_2[100];
          uVar10 = param_2[99];
          uVar12 = *(undefined8 *)((long)param_2 + 0x322);
          *(undefined8 *)((long)param_1 + 0x32a) = *(undefined8 *)((long)param_2 + 0x32a);
          *(undefined8 *)((long)param_1 + 0x322) = uVar12;
          param_1[0x62] = uVar9;
          param_1[0x61] = uVar8;
          param_1[100] = uVar11;
          param_1[99] = uVar10;
          param_1[0x60] = uVar4;
          param_1[0x5f] = uVar5;
          uVar5 = param_1[0x67];
          param_1[0x67] = param_2[0x67];
          _swift_bridgeObjectRelease(uVar5);
          param_1[0x68] = param_2[0x68];
          *(undefined1 *)(param_1 + 0x69) = *(undefined1 *)(param_2 + 0x69);
          *(undefined1 *)((long)param_1 + 0x349) = *(undefined1 *)((long)param_2 + 0x349);
          uVar5 = param_2[0x6a];
          param_1[0x6b] = param_2[0x6b];
          param_1[0x6a] = uVar5;
          *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)(param_2 + 0x6c);
          uVar5 = param_1[0x6d];
          param_1[0x6d] = param_2[0x6d];
          _swift_bridgeObjectRelease(uVar5);
          *(undefined1 *)(param_1 + 0x6e) = *(undefined1 *)(param_2 + 0x6e);
          *(undefined1 *)((long)param_1 + 0x371) = *(undefined1 *)((long)param_2 + 0x371);
          if (param_1[0x72] == 1) {
LAB_10426f3c0:
            uVar5 = param_2[0x6f];
            uVar8 = param_2[0x72];
            uVar4 = param_2[0x71];
            param_1[0x70] = param_2[0x70];
            param_1[0x6f] = uVar5;
            param_1[0x72] = uVar8;
            param_1[0x71] = uVar4;
            uVar5 = param_2[0x73];
            param_1[0x74] = param_2[0x74];
            param_1[0x73] = uVar5;
          }
          else {
            lVar6 = param_2[0x72];
            if (lVar6 == 1) {
              func_0x00010186580c(param_1 + 0x6f);
              goto LAB_10426f3c0;
            }
            *(undefined1 *)(param_1 + 0x6f) = *(undefined1 *)(param_2 + 0x6f);
            param_1[0x70] = param_2[0x70];
            param_1[0x71] = param_2[0x71];
            param_1[0x72] = lVar6;
            _swift_bridgeObjectRelease();
            *(undefined1 *)(param_1 + 0x73) = *(undefined1 *)(param_2 + 0x73);
            uVar5 = param_1[0x74];
            param_1[0x74] = param_2[0x74];
            _swift_bridgeObjectRelease(uVar5);
          }
          *(undefined1 *)(param_1 + 0x75) = *(undefined1 *)(param_2 + 0x75);
          uVar5 = param_1[0x76];
          param_1[0x76] = param_2[0x76];
          _swift_bridgeObjectRelease(uVar5);
          param_1[0x77] = param_2[0x77];
          uVar5 = param_1[0x78];
          param_1[0x78] = param_2[0x78];
          _swift_bridgeObjectRelease(uVar5);
          uVar5 = param_1[0x79];
          param_1[0x79] = param_2[0x79];
          _swift_bridgeObjectRelease(uVar5);
          uVar5 = param_1[0x7a];
          param_1[0x7a] = param_2[0x7a];
          _swift_bridgeObjectRelease(uVar5);
          param_1[0x7b] = param_2[0x7b];
          *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
          param_1[0x7d] = param_2[0x7d];
          *(undefined1 *)(param_1 + 0x7e) = *(undefined1 *)(param_2 + 0x7e);
          param_1[0x7f] = param_2[0x7f];
          *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
          uVar5 = param_1[0x81];
          param_1[0x81] = param_2[0x81];
          _swift_bridgeObjectRelease(uVar5);
          uVar5 = param_1[0x82];
          param_1[0x82] = param_2[0x82];
          _swift_bridgeObjectRelease(uVar5);
          uVar5 = param_2[0x87];
          uVar8 = param_2[0x8a];
          uVar4 = param_2[0x89];
          param_1[0x88] = param_2[0x88];
          param_1[0x87] = uVar5;
          param_1[0x8a] = uVar8;
          param_1[0x89] = uVar4;
          uVar5 = param_2[0x8b];
          uVar8 = param_2[0x8e];
          uVar4 = param_2[0x8d];
          param_1[0x8c] = param_2[0x8c];
          param_1[0x8b] = uVar5;
          param_1[0x8e] = uVar8;
          param_1[0x8d] = uVar4;
          uVar5 = param_2[0x83];
          uVar8 = param_2[0x86];
          uVar4 = param_2[0x85];
          param_1[0x84] = param_2[0x84];
          param_1[0x83] = uVar5;
          param_1[0x86] = uVar8;
          param_1[0x85] = uVar4;
          param_1[0x8f] = param_2[0x8f];
          *(undefined1 *)(param_1 + 0x91) = *(undefined1 *)(param_2 + 0x91);
          param_1[0x90] = param_2[0x90];
          uVar5 = param_2[0x92];
          param_1[0x93] = param_2[0x93];
          param_1[0x92] = uVar5;
          uVar5 = param_2[0x94];
          param_1[0x95] = param_2[0x95];
          param_1[0x94] = uVar5;
          uVar5 = param_2[0x96];
          param_1[0x97] = param_2[0x97];
          param_1[0x96] = uVar5;
          uVar5 = param_1[0x98];
          param_1[0x98] = param_2[0x98];
          _swift_bridgeObjectRelease(uVar5);
          if (param_1[0xa5] == 1) {
LAB_10426f534:
            uVar5 = param_2[0xa1];
            uVar8 = param_2[0xa4];
            uVar4 = param_2[0xa3];
            param_1[0xa2] = param_2[0xa2];
            param_1[0xa1] = uVar5;
            param_1[0xa4] = uVar8;
            param_1[0xa3] = uVar4;
            uVar5 = param_2[0xa5];
            param_1[0xa6] = param_2[0xa6];
            param_1[0xa5] = uVar5;
            *(undefined2 *)(param_1 + 0xa7) = *(undefined2 *)(param_2 + 0xa7);
            uVar5 = param_2[0x99];
            uVar8 = param_2[0x9c];
            uVar4 = param_2[0x9b];
            param_1[0x9a] = param_2[0x9a];
            param_1[0x99] = uVar5;
            param_1[0x9c] = uVar8;
            param_1[0x9b] = uVar4;
            uVar5 = param_2[0x9d];
            uVar8 = param_2[0xa0];
            uVar4 = param_2[0x9f];
            param_1[0x9e] = param_2[0x9e];
            param_1[0x9d] = uVar5;
            param_1[0xa0] = uVar8;
            param_1[0x9f] = uVar4;
          }
          else {
            lVar6 = param_2[0xa5];
            if (lVar6 == 1) {
              func_0x000101865840(param_1 + 0x99);
              goto LAB_10426f534;
            }
            *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)(param_2 + 0x99);
            param_1[0x9a] = param_2[0x9a];
            *(undefined1 *)(param_1 + 0x9b) = *(undefined1 *)(param_2 + 0x9b);
            param_1[0x9c] = param_2[0x9c];
            *(undefined1 *)(param_1 + 0x9d) = *(undefined1 *)(param_2 + 0x9d);
            param_1[0x9e] = param_2[0x9e];
            *(undefined1 *)(param_1 + 0x9f) = *(undefined1 *)(param_2 + 0x9f);
            *(undefined1 *)(param_1 + 0xa1) = *(undefined1 *)(param_2 + 0xa1);
            param_1[0xa0] = param_2[0xa0];
            param_1[0xa2] = param_2[0xa2];
            *(undefined1 *)(param_1 + 0xa3) = *(undefined1 *)(param_2 + 0xa3);
            param_1[0xa4] = param_2[0xa4];
            param_1[0xa5] = lVar6;
            _swift_bridgeObjectRelease();
            param_1[0xa6] = param_2[0xa6];
            *(undefined2 *)(param_1 + 0xa7) = *(undefined2 *)(param_2 + 0xa7);
          }
          *(undefined1 *)((long)param_1 + 0x53a) = *(undefined1 *)((long)param_2 + 0x53a);
          uVar5 = param_1[0xa8];
          param_1[0xa8] = param_2[0xa8];
          _swift_bridgeObjectRelease(uVar5);
          uVar5 = param_2[0xad];
          uVar8 = param_2[0xb0];
          uVar4 = param_2[0xaf];
          param_1[0xae] = param_2[0xae];
          param_1[0xad] = uVar5;
          param_1[0xb0] = uVar8;
          param_1[0xaf] = uVar4;
          *(undefined2 *)(param_1 + 0xb1) = *(undefined2 *)(param_2 + 0xb1);
          uVar8 = param_2[0xa9];
          uVar4 = param_2[0xac];
          uVar5 = param_2[0xab];
          param_1[0xaa] = param_2[0xaa];
          param_1[0xa9] = uVar8;
          param_1[0xac] = uVar4;
          param_1[0xab] = uVar5;
          if (param_1[0xb3] == 0) {
LAB_10426f664:
            uVar5 = param_2[0xb2];
            uVar8 = param_2[0xb5];
            uVar4 = param_2[0xb4];
            param_1[0xb3] = param_2[0xb3];
            param_1[0xb2] = uVar5;
            param_1[0xb5] = uVar8;
            param_1[0xb4] = uVar4;
            param_1[0xb6] = param_2[0xb6];
          }
          else {
            lVar6 = param_2[0xb3];
            if (lVar6 == 0) {
              func_0x000101865874(param_1 + 0xb2);
              goto LAB_10426f664;
            }
            param_1[0xb2] = param_2[0xb2];
            param_1[0xb3] = lVar6;
            _swift_bridgeObjectRelease();
            param_1[0xb4] = param_2[0xb4];
            uVar5 = param_1[0xb5];
            param_1[0xb5] = param_2[0xb5];
            _swift_bridgeObjectRelease(uVar5);
            param_1[0xb6] = param_2[0xb6];
          }
          *(undefined1 *)(param_1 + 0xb9) = *(undefined1 *)(param_2 + 0xb9);
          uVar5 = param_2[0xb7];
          param_1[0xb8] = param_2[0xb8];
          param_1[0xb7] = uVar5;
          uVar5 = param_1[0xba];
          param_1[0xba] = param_2[0xba];
          _swift_bridgeObjectRelease(uVar5);
          param_1[0xbb] = param_2[0xbb];
          *(undefined1 *)(param_1 + 0xbc) = *(undefined1 *)(param_2 + 0xbc);
          uVar5 = param_1[0xbd];
          param_1[0xbd] = param_2[0xbd];
          _swift_bridgeObjectRelease(uVar5);
          param_1[0xbe] = param_2[0xbe];
          *(undefined1 *)(param_1 + 0xbf) = *(undefined1 *)(param_2 + 0xbf);
          uVar5 = param_1[0xc0];
          param_1[0xc0] = param_2[0xc0];
          _objc_release(uVar5);
          uVar5 = param_1[0xc1];
          param_1[0xc1] = param_2[0xc1];
          _objc_release(uVar5);
          uVar5 = param_1[0xc2];
          param_1[0xc2] = param_2[0xc2];
          _objc_release(uVar5);
          uVar5 = param_1[0xc3];
          param_1[0xc3] = param_2[0xc3];
          _swift_bridgeObjectRelease(uVar5);
        }
        if (param_1[200] == 1) {
LAB_10426f734:
          uVar5 = param_2[0xcc];
          uVar8 = param_2[0xcf];
          uVar4 = param_2[0xce];
          param_1[0xcd] = param_2[0xcd];
          param_1[0xcc] = uVar5;
          param_1[0xcf] = uVar8;
          param_1[0xce] = uVar4;
          uVar5 = *(undefined8 *)((long)param_2 + 0x679);
          *(undefined8 *)((long)param_1 + 0x681) = *(undefined8 *)((long)param_2 + 0x681);
          *(undefined8 *)((long)param_1 + 0x679) = uVar5;
          uVar5 = param_2[0xc4];
          uVar8 = param_2[199];
          uVar4 = param_2[0xc6];
          param_1[0xc5] = param_2[0xc5];
          param_1[0xc4] = uVar5;
          param_1[199] = uVar8;
          param_1[0xc6] = uVar4;
          uVar8 = param_2[200];
          uVar4 = param_2[0xcb];
          uVar5 = param_2[0xca];
          param_1[0xc9] = param_2[0xc9];
          param_1[200] = uVar8;
          param_1[0xcb] = uVar4;
          param_1[0xca] = uVar5;
        }
        else {
          lVar6 = param_2[200];
          if (lVar6 == 1) {
            func_0x00010178e348(param_1 + 0xc4);
            goto LAB_10426f734;
          }
          uVar5 = param_2[0xc4];
          param_1[0xc5] = param_2[0xc5];
          param_1[0xc4] = uVar5;
          *(undefined1 *)(param_1 + 0xc6) = *(undefined1 *)(param_2 + 0xc6);
          *(undefined1 *)((long)param_1 + 0x631) = *(undefined1 *)((long)param_2 + 0x631);
          param_1[199] = param_2[199];
          param_1[200] = lVar6;
          _swift_bridgeObjectRelease();
          *(undefined1 *)(param_1 + 0xc9) = *(undefined1 *)(param_2 + 0xc9);
          param_1[0xca] = param_2[0xca];
          *(undefined1 *)(param_1 + 0xcb) = *(undefined1 *)(param_2 + 0xcb);
          param_1[0xcc] = param_2[0xcc];
          *(undefined1 *)(param_1 + 0xcd) = *(undefined1 *)(param_2 + 0xcd);
          param_1[0xce] = param_2[0xce];
          *(undefined1 *)(param_1 + 0xcf) = *(undefined1 *)(param_2 + 0xcf);
          *(undefined1 *)(param_1 + 0xd1) = *(undefined1 *)(param_2 + 0xd1);
          param_1[0xd0] = param_2[0xd0];
        }
        if (param_1[0xd8] == 1) {
LAB_10426f7e8:
          _memcpy(param_1 + 0xd2,param_2 + 0xd2,0x301);
        }
        else {
          lVar6 = param_2[0xd8];
          if (lVar6 == 1) {
            func_0x00010178e244(param_1 + 0xd2);
            goto LAB_10426f7e8;
          }
          *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(param_2 + 0xd2);
          *(undefined1 *)((long)param_1 + 0x691) = *(undefined1 *)((long)param_2 + 0x691);
          param_1[0xd3] = param_2[0xd3];
          *(undefined1 *)(param_1 + 0xd4) = *(undefined1 *)(param_2 + 0xd4);
          param_1[0xd5] = param_2[0xd5];
          *(undefined1 *)(param_1 + 0xd6) = *(undefined1 *)(param_2 + 0xd6);
          param_1[0xd7] = param_2[0xd7];
          param_1[0xd8] = lVar6;
          _swift_bridgeObjectRelease();
          param_1[0xd9] = param_2[0xd9];
          *(undefined1 *)(param_1 + 0xda) = *(undefined1 *)(param_2 + 0xda);
          *(undefined1 *)((long)param_1 + 0x6d1) = *(undefined1 *)((long)param_2 + 0x6d1);
          param_1[0xdb] = param_2[0xdb];
          uVar5 = param_1[0xdc];
          param_1[0xdc] = param_2[0xdc];
          _swift_bridgeObjectRelease(uVar5);
          *(undefined1 *)(param_1 + 0xdd) = *(undefined1 *)(param_2 + 0xdd);
          *(undefined1 *)((long)param_1 + 0x6e9) = *(undefined1 *)((long)param_2 + 0x6e9);
          param_1[0xde] = param_2[0xde];
          *(undefined1 *)(param_1 + 0xdf) = *(undefined1 *)(param_2 + 0xdf);
          param_1[0xe0] = param_2[0xe0];
          *(undefined1 *)(param_1 + 0xe1) = *(undefined1 *)(param_2 + 0xe1);
          param_1[0xe2] = param_2[0xe2];
          *(undefined1 *)(param_1 + 0xe3) = *(undefined1 *)(param_2 + 0xe3);
          *(undefined1 *)((long)param_1 + 0x719) = *(undefined1 *)((long)param_2 + 0x719);
          puVar1 = param_1 + 0xe4;
          if (param_1[0xef] == 1) {
LAB_10426f8f0:
            _memcpy(puVar1,param_2 + 0xe4,0x101);
          }
          else {
            lVar6 = param_2[0xef];
            if (lVar6 == 1) {
              func_0x0001017e2180(puVar1);
              goto LAB_10426f8f0;
            }
            *puVar1 = param_2[0xe4];
            *(undefined1 *)(param_1 + 0xe5) = *(undefined1 *)(param_2 + 0xe5);
            param_1[0xe6] = param_2[0xe6];
            *(undefined1 *)(param_1 + 0xe7) = *(undefined1 *)(param_2 + 0xe7);
            param_1[0xe8] = param_2[0xe8];
            *(undefined1 *)(param_1 + 0xe9) = *(undefined1 *)(param_2 + 0xe9);
            *(undefined1 *)(param_1 + 0xeb) = *(undefined1 *)(param_2 + 0xeb);
            param_1[0xea] = param_2[0xea];
            uVar5 = param_2[0xec];
            *(undefined1 *)(param_1 + 0xed) = *(undefined1 *)(param_2 + 0xed);
            param_1[0xec] = uVar5;
            *(undefined1 *)((long)param_1 + 0x769) = *(undefined1 *)((long)param_2 + 0x769);
            param_1[0xee] = param_2[0xee];
            param_1[0xef] = lVar6;
            _swift_bridgeObjectRelease();
            param_1[0xf0] = param_2[0xf0];
            uVar5 = param_1[0xf1];
            param_1[0xf1] = param_2[0xf1];
            _swift_bridgeObjectRelease(uVar5);
            param_1[0xf2] = param_2[0xf2];
            *(undefined1 *)(param_1 + 0xf3) = *(undefined1 *)(param_2 + 0xf3);
            param_1[0xf4] = param_2[0xf4];
            *(undefined1 *)(param_1 + 0xf5) = *(undefined1 *)(param_2 + 0xf5);
            param_1[0xf6] = param_2[0xf6];
            *(undefined1 *)(param_1 + 0xf7) = *(undefined1 *)(param_2 + 0xf7);
            *(undefined1 *)(param_1 + 0xf9) = *(undefined1 *)(param_2 + 0xf9);
            param_1[0xf8] = param_2[0xf8];
            uVar5 = param_2[0xfa];
            *(undefined1 *)(param_1 + 0xfb) = *(undefined1 *)(param_2 + 0xfb);
            param_1[0xfa] = uVar5;
            param_1[0xfc] = param_2[0xfc];
            uVar5 = param_1[0xfd];
            param_1[0xfd] = param_2[0xfd];
            _swift_bridgeObjectRelease(uVar5);
            param_1[0xfe] = param_2[0xfe];
            *(undefined1 *)(param_1 + 0xff) = *(undefined1 *)(param_2 + 0xff);
            param_1[0x100] = param_2[0x100];
            *(undefined1 *)(param_1 + 0x101) = *(undefined1 *)(param_2 + 0x101);
            param_1[0x102] = param_2[0x102];
            uVar5 = param_1[0x103];
            param_1[0x103] = param_2[0x103];
            _swift_bridgeObjectRelease(uVar5);
            *(undefined1 *)(param_1 + 0x104) = *(undefined1 *)(param_2 + 0x104);
          }
          *(undefined1 *)((long)param_1 + 0x821) = *(undefined1 *)((long)param_2 + 0x821);
          param_1[0x105] = param_2[0x105];
          param_1[0x106] = param_2[0x106];
          *(undefined1 *)(param_1 + 0x107) = *(undefined1 *)(param_2 + 0x107);
          if (param_1[0x108] == 1) {
LAB_10426fa6c:
            lVar6 = param_2[0x108];
            param_1[0x109] = param_2[0x109];
            param_1[0x108] = lVar6;
            param_1[0x10a] = param_2[0x10a];
          }
          else {
            lVar6 = param_2[0x108];
            if (lVar6 == 1) {
              func_0x0001017e21b4(param_1 + 0x108);
              goto LAB_10426fa6c;
            }
            param_1[0x108] = lVar6;
            _objc_release();
            uVar5 = param_1[0x109];
            param_1[0x109] = param_2[0x109];
            _objc_release(uVar5);
            uVar5 = param_1[0x10a];
            param_1[0x10a] = param_2[0x10a];
            _objc_release(uVar5);
          }
          *(undefined1 *)(param_1 + 0x10b) = *(undefined1 *)(param_2 + 0x10b);
          param_1[0x10c] = param_2[0x10c];
          *(undefined1 *)(param_1 + 0x10d) = *(undefined1 *)(param_2 + 0x10d);
          param_1[0x10e] = param_2[0x10e];
          *(undefined1 *)(param_1 + 0x10f) = *(undefined1 *)(param_2 + 0x10f);
          if (param_1[0x111] == 1) {
LAB_10426faf8:
            uVar5 = param_2[0x110];
            uVar8 = param_2[0x113];
            uVar4 = param_2[0x112];
            param_1[0x111] = param_2[0x111];
            param_1[0x110] = uVar5;
            param_1[0x113] = uVar8;
            param_1[0x112] = uVar4;
            uVar5 = param_2[0x114];
            param_1[0x115] = param_2[0x115];
            param_1[0x114] = uVar5;
          }
          else {
            lVar6 = param_2[0x111];
            if (lVar6 == 1) {
              func_0x0001017e21e8(param_1 + 0x110);
              goto LAB_10426faf8;
            }
            *(undefined2 *)(param_1 + 0x110) = *(undefined2 *)(param_2 + 0x110);
            param_1[0x111] = lVar6;
            _swift_bridgeObjectRelease();
            uVar5 = param_1[0x112];
            param_1[0x112] = param_2[0x112];
            _swift_bridgeObjectRelease(uVar5);
            uVar5 = param_1[0x113];
            param_1[0x113] = param_2[0x113];
            _swift_bridgeObjectRelease(uVar5);
            *(undefined1 *)(param_1 + 0x114) = *(undefined1 *)(param_2 + 0x114);
            *(undefined2 *)((long)param_1 + 0x8a1) = *(undefined2 *)((long)param_2 + 0x8a1);
            *(undefined1 *)((long)param_1 + 0x8a3) = *(undefined1 *)((long)param_2 + 0x8a3);
            uVar5 = param_1[0x115];
            param_1[0x115] = param_2[0x115];
            _swift_bridgeObjectRelease(uVar5);
          }
          param_1[0x116] = param_2[0x116];
          *(undefined1 *)(param_1 + 0x117) = *(undefined1 *)(param_2 + 0x117);
          param_1[0x118] = param_2[0x118];
          *(undefined1 *)(param_1 + 0x119) = *(undefined1 *)(param_2 + 0x119);
          *(undefined1 *)((long)param_1 + 0x8c9) = *(undefined1 *)((long)param_2 + 0x8c9);
          if (param_1[0x11a] == 0) {
LAB_10426fbe0:
            lVar6 = param_2[0x11a];
            param_1[0x11b] = param_2[0x11b];
            param_1[0x11a] = lVar6;
            param_1[0x11c] = param_2[0x11c];
          }
          else {
            lVar6 = param_2[0x11a];
            if (lVar6 == 0) {
              func_0x0001017e221c(param_1 + 0x11a);
              goto LAB_10426fbe0;
            }
            param_1[0x11a] = lVar6;
            _swift_bridgeObjectRelease();
            uVar5 = param_1[0x11b];
            param_1[0x11b] = param_2[0x11b];
            _swift_bridgeObjectRelease(uVar5);
            uVar5 = param_1[0x11c];
            param_1[0x11c] = param_2[0x11c];
            _swift_bridgeObjectRelease(uVar5);
          }
          uVar5 = param_1[0x11d];
          param_1[0x11d] = param_2[0x11d];
          _swift_bridgeObjectRelease(uVar5);
          param_1[0x11e] = param_2[0x11e];
          uVar5 = param_1[0x11f];
          param_1[0x11f] = param_2[0x11f];
          _swift_bridgeObjectRelease(uVar5);
          *(undefined1 *)(param_1 + 0x120) = *(undefined1 *)(param_2 + 0x120);
          *(undefined1 *)((long)param_1 + 0x901) = *(undefined1 *)((long)param_2 + 0x901);
          *(undefined1 *)((long)param_1 + 0x902) = *(undefined1 *)((long)param_2 + 0x902);
          param_1[0x121] = param_2[0x121];
          *(undefined1 *)(param_1 + 0x122) = *(undefined1 *)(param_2 + 0x122);
          param_1[0x123] = param_2[0x123];
          uVar5 = param_2[0x124];
          param_1[0x125] = param_2[0x125];
          param_1[0x124] = uVar5;
          *(undefined1 *)(param_1 + 0x126) = *(undefined1 *)(param_2 + 0x126);
          *(undefined1 *)((long)param_1 + 0x931) = *(undefined1 *)((long)param_2 + 0x931);
          param_1[0x127] = param_2[0x127];
          *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 0x128);
          *(undefined1 *)((long)param_1 + 0x941) = *(undefined1 *)((long)param_2 + 0x941);
          *(undefined1 *)((long)param_1 + 0x942) = *(undefined1 *)((long)param_2 + 0x942);
          *(undefined1 *)((long)param_1 + 0x943) = *(undefined1 *)((long)param_2 + 0x943);
          param_1[0x129] = param_2[0x129];
          *(undefined1 *)(param_1 + 0x12a) = *(undefined1 *)(param_2 + 0x12a);
          param_1[299] = param_2[299];
          *(undefined1 *)(param_1 + 300) = *(undefined1 *)(param_2 + 300);
          uVar5 = param_2[0x12d];
          *(undefined1 *)(param_1 + 0x12e) = *(undefined1 *)(param_2 + 0x12e);
          param_1[0x12d] = uVar5;
          param_1[0x12f] = param_2[0x12f];
          uVar5 = param_1[0x130];
          param_1[0x130] = param_2[0x130];
          _swift_bridgeObjectRelease(uVar5);
          param_1[0x131] = param_2[0x131];
          *(undefined1 *)(param_1 + 0x132) = *(undefined1 *)(param_2 + 0x132);
        }
        if (param_1[0x133] == 1) {
LAB_10426fd08:
          lVar6 = param_2[0x133];
          param_1[0x134] = param_2[0x134];
          param_1[0x133] = lVar6;
        }
        else {
          lVar6 = param_2[0x133];
          if (lVar6 == 1) {
            func_0x0001018658a8(param_1 + 0x133);
            goto LAB_10426fd08;
          }
          param_1[0x133] = lVar6;
          _swift_bridgeObjectRelease();
          param_1[0x134] = param_2[0x134];
        }
        plVar2 = param_1 + 0x135;
        lVar6 = param_2[0x135];
        if (param_1[0x135] == 1) {
LAB_10426fd4c:
          *plVar2 = lVar6;
        }
        else {
          if (lVar6 == 1) {
            FUN_1042278f8(plVar2);
            lVar6 = param_2[0x135];
            goto LAB_10426fd4c;
          }
          *plVar2 = lVar6;
          _swift_bridgeObjectRelease();
        }
        uVar5 = param_1[0x136];
        param_1[0x136] = param_2[0x136];
        _objc_release(uVar5);
        *(undefined2 *)(param_1 + 0x137) = *(undefined2 *)(param_2 + 0x137);
        plVar2 = param_1 + 0x138;
        plVar3 = param_2 + 0x138;
        if (param_1[0x138] == 1) {
LAB_10426fd9c:
          uVar5 = param_2[0x13c];
          uVar8 = param_2[0x13f];
          uVar4 = param_2[0x13e];
          param_1[0x13d] = param_2[0x13d];
          param_1[0x13c] = uVar5;
          param_1[0x13f] = uVar8;
          param_1[0x13e] = uVar4;
          uVar5 = param_2[0x140];
          uVar8 = param_2[0x143];
          uVar4 = param_2[0x142];
          param_1[0x141] = param_2[0x141];
          param_1[0x140] = uVar5;
          param_1[0x143] = uVar8;
          param_1[0x142] = uVar4;
          lVar6 = *plVar3;
          uVar4 = param_2[0x13b];
          uVar5 = param_2[0x13a];
          param_1[0x139] = param_2[0x139];
          *plVar2 = lVar6;
          param_1[0x13b] = uVar4;
          param_1[0x13a] = uVar5;
        }
        else {
          lVar6 = *plVar3;
          if (lVar6 == 1) {
            func_0x00010178e198(plVar2);
            goto LAB_10426fd9c;
          }
          if (param_1[0x138] == 0) {
LAB_104270074:
            uVar5 = param_2[0x13c];
            uVar8 = param_2[0x13f];
            uVar4 = param_2[0x13e];
            param_1[0x13d] = param_2[0x13d];
            param_1[0x13c] = uVar5;
            param_1[0x13f] = uVar8;
            param_1[0x13e] = uVar4;
            uVar5 = param_2[0x140];
            param_1[0x141] = param_2[0x141];
            param_1[0x140] = uVar5;
            lVar6 = *plVar3;
            uVar4 = param_2[0x13b];
            uVar5 = param_2[0x13a];
            param_1[0x139] = param_2[0x139];
            *plVar2 = lVar6;
            param_1[0x13b] = uVar4;
            param_1[0x13a] = uVar5;
          }
          else {
            if (lVar6 == 0) {
              func_0x0001017b6434(plVar2);
              goto LAB_104270074;
            }
            param_1[0x138] = lVar6;
            _swift_bridgeObjectRelease();
            uVar5 = param_1[0x139];
            param_1[0x139] = param_2[0x139];
            _swift_bridgeObjectRelease(uVar5);
            param_1[0x13a] = param_2[0x13a];
            *(undefined1 *)(param_1 + 0x13b) = *(undefined1 *)(param_2 + 0x13b);
            uVar5 = param_2[0x13c];
            param_1[0x13d] = param_2[0x13d];
            param_1[0x13c] = uVar5;
            if ((ulong)param_1[0x13f] >> 0x3c < 0xf) {
              uVar7 = param_2[0x13f];
              if (0xe < uVar7 >> 0x3c) {
                func_0x0001006e5814(param_1 + 0x13e);
                goto LAB_10426fe80;
              }
              uVar5 = param_1[0x13e];
              param_1[0x13e] = param_2[0x13e];
              param_1[0x13f] = uVar7;
              func_0x00010006c090(uVar5);
            }
            else {
LAB_10426fe80:
              uVar5 = param_2[0x13e];
              param_1[0x13f] = param_2[0x13f];
              param_1[0x13e] = uVar5;
            }
            uVar5 = param_2[0x140];
            param_1[0x141] = param_2[0x141];
            param_1[0x140] = uVar5;
          }
          if ((ulong)param_1[0x143] >> 0x3c < 0xf) {
            uVar7 = param_2[0x143];
            if (0xe < uVar7 >> 0x3c) {
              func_0x0001006e5814(param_1 + 0x142);
              goto LAB_1042700dc;
            }
            uVar5 = param_1[0x142];
            param_1[0x142] = param_2[0x142];
            param_1[0x143] = uVar7;
            func_0x00010006c090(uVar5);
          }
          else {
LAB_1042700dc:
            uVar5 = param_2[0x142];
            param_1[0x143] = param_2[0x143];
            param_1[0x142] = uVar5;
          }
        }
        if (param_1[0x148] == 1) {
LAB_10426fddc:
          uVar5 = param_2[0x154];
          uVar8 = param_2[0x157];
          uVar4 = param_2[0x156];
          param_1[0x155] = param_2[0x155];
          param_1[0x154] = uVar5;
          param_1[0x157] = uVar8;
          param_1[0x156] = uVar4;
          uVar5 = param_2[0x158];
          param_1[0x159] = param_2[0x159];
          param_1[0x158] = uVar5;
          uVar5 = *(undefined8 *)((long)param_2 + 0xac9);
          *(undefined8 *)((long)param_1 + 0xad1) = *(undefined8 *)((long)param_2 + 0xad1);
          *(undefined8 *)((long)param_1 + 0xac9) = uVar5;
          uVar5 = param_2[0x14c];
          uVar8 = param_2[0x14f];
          uVar4 = param_2[0x14e];
          param_1[0x14d] = param_2[0x14d];
          param_1[0x14c] = uVar5;
          param_1[0x14f] = uVar8;
          param_1[0x14e] = uVar4;
          uVar5 = param_2[0x150];
          uVar8 = param_2[0x153];
          uVar4 = param_2[0x152];
          param_1[0x151] = param_2[0x151];
          param_1[0x150] = uVar5;
          param_1[0x153] = uVar8;
          param_1[0x152] = uVar4;
          uVar5 = param_2[0x144];
          uVar8 = param_2[0x147];
          uVar4 = param_2[0x146];
          param_1[0x145] = param_2[0x145];
          param_1[0x144] = uVar5;
          param_1[0x147] = uVar8;
          param_1[0x146] = uVar4;
          uVar5 = param_2[0x148];
          uVar8 = param_2[0x14b];
          uVar4 = param_2[0x14a];
          param_1[0x149] = param_2[0x149];
          param_1[0x148] = uVar5;
          param_1[0x14b] = uVar8;
          param_1[0x14a] = uVar4;
        }
        else {
          lVar6 = param_2[0x148];
          if (lVar6 == 1) {
            func_0x00010178e2d8(param_1 + 0x144);
            goto LAB_10426fddc;
          }
          *(undefined1 *)(param_1 + 0x144) = *(undefined1 *)(param_2 + 0x144);
          *(undefined1 *)((long)param_1 + 0xa21) = *(undefined1 *)((long)param_2 + 0xa21);
          param_1[0x145] = param_2[0x145];
          *(undefined1 *)(param_1 + 0x146) = *(undefined1 *)(param_2 + 0x146);
          param_1[0x147] = param_2[0x147];
          param_1[0x148] = lVar6;
          _swift_bridgeObjectRelease();
          puVar1 = param_1 + 0x149;
          if (param_1[0x151] == 1) {
LAB_10426fee4:
            uVar5 = param_2[0x151];
            uVar8 = param_2[0x154];
            uVar4 = param_2[0x153];
            param_1[0x152] = param_2[0x152];
            param_1[0x151] = uVar5;
            param_1[0x154] = uVar8;
            param_1[0x153] = uVar4;
            *(undefined1 *)(param_1 + 0x155) = *(undefined1 *)(param_2 + 0x155);
            uVar5 = param_2[0x149];
            uVar8 = param_2[0x14c];
            uVar4 = param_2[0x14b];
            param_1[0x14a] = param_2[0x14a];
            *puVar1 = uVar5;
            param_1[0x14c] = uVar8;
            param_1[0x14b] = uVar4;
            uVar8 = param_2[0x14d];
            uVar4 = param_2[0x150];
            uVar5 = param_2[0x14f];
            param_1[0x14e] = param_2[0x14e];
            param_1[0x14d] = uVar8;
            param_1[0x150] = uVar4;
            param_1[0x14f] = uVar5;
          }
          else {
            lVar6 = param_2[0x151];
            if (lVar6 == 1) {
              func_0x00010180cee4(puVar1);
              goto LAB_10426fee4;
            }
            *puVar1 = param_2[0x149];
            *(undefined1 *)(param_1 + 0x14a) = *(undefined1 *)(param_2 + 0x14a);
            param_1[0x14b] = param_2[0x14b];
            *(undefined1 *)(param_1 + 0x14c) = *(undefined1 *)(param_2 + 0x14c);
            param_1[0x14d] = param_2[0x14d];
            *(undefined1 *)(param_1 + 0x14e) = *(undefined1 *)(param_2 + 0x14e);
            *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
            param_1[0x14f] = param_2[0x14f];
            param_1[0x151] = lVar6;
            _objc_release();
            param_1[0x152] = param_2[0x152];
            *(undefined1 *)(param_1 + 0x153) = *(undefined1 *)(param_2 + 0x153);
            param_1[0x154] = param_2[0x154];
            *(undefined1 *)(param_1 + 0x155) = *(undefined1 *)(param_2 + 0x155);
          }
          param_1[0x156] = param_2[0x156];
          *(undefined1 *)(param_1 + 0x157) = *(undefined1 *)(param_2 + 0x157);
          param_1[0x158] = param_2[0x158];
          *(undefined1 *)(param_1 + 0x159) = *(undefined1 *)(param_2 + 0x159);
          param_1[0x15a] = param_2[0x15a];
          *(undefined1 *)(param_1 + 0x15b) = *(undefined1 *)(param_2 + 0x15b);
        }
        if (param_1[0x15c] == 1) {
LAB_10426ffc8:
          lVar6 = param_2[0x15c];
          param_1[0x15d] = param_2[0x15d];
          param_1[0x15c] = lVar6;
          *(undefined1 *)(param_1 + 0x15e) = *(undefined1 *)(param_2 + 0x15e);
        }
        else {
          lVar6 = param_2[0x15c];
          if (lVar6 == 1) {
            func_0x00010422792c(param_1 + 0x15c);
            goto LAB_10426ffc8;
          }
          param_1[0x15c] = lVar6;
          _swift_bridgeObjectRelease();
          param_1[0x15d] = param_2[0x15d];
          *(undefined1 *)(param_1 + 0x15e) = *(undefined1 *)(param_2 + 0x15e);
        }
        if (param_1[0x161] == 1) {
LAB_10427001c:
          uVar5 = param_2[0x15f];
          param_1[0x160] = param_2[0x160];
          param_1[0x15f] = uVar5;
          param_1[0x161] = param_2[0x161];
        }
        else {
          lVar6 = param_2[0x161];
          if (lVar6 == 1) {
            func_0x000104227960(param_1 + 0x15f);
            goto LAB_10427001c;
          }
          param_1[0x15f] = param_2[0x15f];
          param_1[0x160] = param_2[0x160];
          param_1[0x161] = lVar6;
          _swift_bridgeObjectRelease();
        }
        uVar5 = param_1[0x162];
        param_1[0x162] = param_2[0x162];
        _objc_release(uVar5);
        param_1[0x163] = param_2[0x163];
        *(undefined2 *)(param_1 + 0x164) = *(undefined2 *)(param_2 + 0x164);
        goto LAB_10426f07c;
      }
      func_0x00010179528c(param_1 + 0xe);
    }
  }
  _memcpy(param_1 + 0xe,param_2 + 0xe,0xab2);
LAB_10426f07c:
  param_1[0x165] = param_2[0x165];
  *(undefined2 *)(param_1 + 0x166) = *(undefined2 *)(param_2 + 0x166);
  param_1[0x167] = param_2[0x167];
  *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(param_2 + 0x168);
  *(undefined1 *)((long)param_1 + 0xb41) = *(undefined1 *)((long)param_2 + 0xb41);
  *(undefined1 *)((long)param_1 + 0xb42) = *(undefined1 *)((long)param_2 + 0xb42);
  param_1[0x169] = param_2[0x169];
  if (param_1[0x16b] != 0) {
    lVar6 = param_2[0x16b];
    if (lVar6 != 0) {
      param_1[0x16a] = param_2[0x16a];
      param_1[0x16b] = lVar6;
      _swift_bridgeObjectRelease();
      param_1[0x16c] = param_2[0x16c];
      uVar5 = param_1[0x16d];
      param_1[0x16d] = param_2[0x16d];
      _swift_bridgeObjectRelease(uVar5);
      param_1[0x16e] = param_2[0x16e];
      return param_1;
    }
    func_0x000101865874(param_1 + 0x16a);
  }
  uVar5 = param_2[0x16a];
  uVar8 = param_2[0x16d];
  uVar4 = param_2[0x16c];
  param_1[0x16b] = param_2[0x16b];
  param_1[0x16a] = uVar5;
  param_1[0x16d] = uVar8;
  param_1[0x16c] = uVar4;
  param_1[0x16e] = param_2[0x16e];
  return param_1;
}



/* Entry: 104270100; end: 1042704c7;  */

int FUN_104270100(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x2de] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1042704c8; end: 104270507;  */

undefined8 FUN_1042704c8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 104270508; end: 104270517; -[SCAdInitMetadata adsPreferences] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104270508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113069e00));
  return;
}



/* Entry: 104270518; end: 104270573; -[SCAdInitMetadata said] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104270518(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113069e08))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113069e08);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104270574; end: 104270583; -[SCAdInitMetadata initResponseTTLInSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104270574(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069e10);
}



/* Entry: 104270584; end: 104270607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104270584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113069e00) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069e08);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113069e10) = param_1;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104270608; end: 1042706af; -[SCAdInitMetadata initWithAdsPreferences:said:initResponseTTLInSec:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104270608(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_2;
  _swift_getObjectType();
  if (param_5 == 0) {
    param_5 = 0;
    param_3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_2 + _DAT_113069e00) = param_4;
  plVar1 = (long *)(param_2 + _DAT_113069e08);
  *plVar1 = param_5;
  plVar1[1] = param_3;
  *(undefined8 *)(param_2 + _DAT_113069e10) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_2;
  lStack_48 = lVar3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 1042706b0; end: 104270773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042706b0(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  if ((param_2 & 0xff) == 2) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    func_0x00010430c668(0);
    _objc_allocWithZone();
    uVar2 = (ulong)(param_2 & 0x1010101);
    func_0x00010430c32c(uVar2,uVar3);
  }
  *(ulong *)(unaff_x20 + _DAT_113069e00) = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069e08);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113069e10) = param_1;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104270774; end: 104270777; -[SCAdInitMetadata copyWithZone:] */

void FUN_104270774(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104270778; end: 10427079f; -[SCAdInitMetadata description] */

void FUN_104270778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_104270858();
  _swift_bridgeObjectRelease(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042707a0; end: 10427081b; -[SCAdInitMetadata init] */

void FUN_1042707a0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataServices/AdInitMetadataWrapper.swift",
             0x2a,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042707e8);
  (*pcVar1)();
}



/* Entry: 10427081c; end: 104270857; -[SCAdInitMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427081c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113069e00));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113069e08 + 8))
  ;
  return;
}



/* Entry: 104270858; end: 10427093b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104270858(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
  lVar2 = *(long *)(param_1 + _DAT_113069e00);
  if (lVar2 == 0) {
    uVar3 = 2;
  }
  else {
    uVar3 = 0x100;
    if (*(char *)(lVar2 + _DAT_11306cf88) == '\0') {
      uVar3 = 0;
    }
    uVar4 = 0x10000;
    if (*(char *)(lVar2 + _DAT_11306cf90) == '\0') {
      uVar4 = 0;
    }
    uVar1 = 0x1000000;
    if (*(char *)(lVar2 + _DAT_11306cf98) == '\0') {
      uVar1 = 0;
    }
    uVar3 = uVar3 | *(byte *)(lVar2 + _DAT_11306cf80) | uVar4 | uVar1;
  }
  _swift_bridgeObjectRetain(*(undefined8 *)(param_1 + _DAT_113069e08 + 8));
  return uVar3;
}



/* Entry: 10427093c; end: 10427095b;  */

void FUN_10427093c(void)

{
  _objc_opt_self(&PTR_PTR_112991538);
  return;
}



/* Entry: 10427095c; end: 1042709b7; -[SCAdConsumptionSpeed inventoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10427095c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113069e40))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113069e40);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042709b8; end: 1042709c7; -[SCAdConsumptionSpeed inventorySubtype] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042709b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069e48);
}



/* Entry: 1042709c8; end: 1042709d7; -[SCAdConsumptionSpeed contentTopSnapViewCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1042709c8(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113069e50);
}



/* Entry: 1042709d8; end: 1042709e7; -[SCAdConsumptionSpeed contentTopSnapViewTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1042709d8(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113069e58);
}



/* Entry: 1042709e8; end: 1042709f7; -[SCAdConsumptionSpeed contentBottomSnapViewCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1042709e8(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113069e60);
}



/* Entry: 1042709f8; end: 104270a07; -[SCAdConsumptionSpeed contentBottomSnapViewTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1042709f8(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113069e68);
}



/* Entry: 104270a08; end: 104270a17; -[SCAdConsumptionSpeed contentSwipeCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104270a08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069e70);
}



/* Entry: 104270a18; end: 104270a27; -[SCAdConsumptionSpeed totalContentHammerTaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104270a18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069e78);
}



/* Entry: 104270a28; end: 104270a37; -[SCAdConsumptionSpeed adTopSnapViewCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_104270a28(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113069e80);
}



/* Entry: 104270a38; end: 104270a47; -[SCAdConsumptionSpeed adTopSnapViewTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_104270a38(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113069e88);
}



/* Entry: 104270a48; end: 104270a57; -[SCAdConsumptionSpeed adBottomSnapViewCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_104270a48(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113069e90);
}



/* Entry: 104270a58; end: 104270a67; -[SCAdConsumptionSpeed adBottomSnapViewTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_104270a58(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113069e98);
}



/* Entry: 104270a68; end: 104270a77; -[SCAdConsumptionSpeed adSwipeCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104270a68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069ea0);
}



/* Entry: 104270a78; end: 104270a87; -[SCAdConsumptionSpeed totalAdsHammerTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104270a78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069ea8);
}



/* Entry: 104270a88; end: 104270a97; -[SCAdConsumptionSpeed startTimestampMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104270a88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113069eb0);
}



/* Entry: 104270a98; end: 104270d77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104270a98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113069e40);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_113069e48) = param_11;
  *(undefined4 *)(unaff_x20 + _DAT_113069e50) = param_1;
  *(undefined4 *)(unaff_x20 + _DAT_113069e58) = param_2;
  *(undefined4 *)(unaff_x20 + _DAT_113069e60) = param_3;
  *(undefined4 *)(unaff_x20 + _DAT_113069e68) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113069e70) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_113069e78) = param_13;
  *(undefined4 *)(unaff_x20 + _DAT_113069e80) = param_5;
  *(undefined4 *)(unaff_x20 + _DAT_113069e88) = param_6;
  *(undefined4 *)(unaff_x20 + _DAT_113069e90) = param_7;
  *(undefined4 *)(unaff_x20 + _DAT_113069e98) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113069ea0) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_113069ea8) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_113069eb0) = param_17;
  _objc_msgSendSuper2(auStack_a0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104270d78; end: 104270e63; -[SCAdConsumptionSpeed initWithInventoryType:inventorySubtype:contentTopSnapViewCount:contentTopSnapViewTime:contentBottomSnapViewCount:contentBottomSnapViewTime:contentSwipeCount:totalContentHammerTaps:adTopSnapViewCount:adTopSnapViewTime:adBottomSnapViewCount:adBottomSnapViewTime:adSwipeCount:totalAdsHammerTap:startTimestampMillis:] */

void FUN_104270d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  if (param_11 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_11);
  }
  func_0x000104270c08(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 104270e64; end: 104270fab;  */

void FUN_104270e64(undefined8 param_1)

{
  _objc_allocWithZone();
  func_0x000104270e94(param_1);
  return;
}



/* Entry: 104270fac; end: 104270fdf; -[SCAdConsumptionSpeed hash] */

undefined8 FUN_104270fac(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104270fe0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104270fe0; end: 1042711f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104270fe0(void)

{
  float fVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  double dVar4;
  float fVar5;
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  if (((undefined8 *)(unaff_x20 + _DAT_113069e40))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113069e40);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113069e48));
  fVar5 = 0.0;
  fVar1 = fVar5;
  if (*(float *)(unaff_x20 + _DAT_113069e50) != 0.0) {
    fVar1 = *(float *)(unaff_x20 + _DAT_113069e50);
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar1);
  fVar1 = fVar5;
  if (*(float *)(unaff_x20 + _DAT_113069e58) != 0.0) {
    fVar1 = *(float *)(unaff_x20 + _DAT_113069e58);
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar1);
  fVar1 = fVar5;
  if (*(float *)(unaff_x20 + _DAT_113069e60) != 0.0) {
    fVar1 = *(float *)(unaff_x20 + _DAT_113069e60);
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar1);
  fVar1 = fVar5;
  if (*(float *)(unaff_x20 + _DAT_113069e68) != 0.0) {
    fVar1 = *(float *)(unaff_x20 + _DAT_113069e68);
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar1);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113069e70));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113069e78));
  fVar1 = fVar5;
  if (*(float *)(unaff_x20 + _DAT_113069e80) != 0.0) {
    fVar1 = *(float *)(unaff_x20 + _DAT_113069e80);
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar1);
  fVar1 = fVar5;
  if (*(float *)(unaff_x20 + _DAT_113069e88) != 0.0) {
    fVar1 = *(float *)(unaff_x20 + _DAT_113069e88);
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar1);
  fVar1 = fVar5;
  if (*(float *)(unaff_x20 + _DAT_113069e90) != 0.0) {
    fVar1 = *(float *)(unaff_x20 + _DAT_113069e90);
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar1);
  if (*(float *)(unaff_x20 + _DAT_113069e98) != 0.0) {
    fVar5 = *(float *)(unaff_x20 + _DAT_113069e98);
  }
  __ss6HasherV8_combineyys6UInt32VF(fVar5);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113069ea0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113069ea8));
  dVar4 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113069eb0) != 0.0) {
    dVar4 = *(double *)(unaff_x20 + _DAT_113069eb0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042711f4; end: 1042714ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042711f4(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint uStack_d4;
  long lStack_d0;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_c8);
  if (lStack_b0 == 0) {
    func_0x00010006e7f4(auStack_c8);
  }
  else {
    plVar3 = &lStack_d0;
    _swift_dynamicCast(plVar3,auStack_c8,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar4 = ((long *)(unaff_x20 + _DAT_113069e40))[1];
      lVar5 = ((long *)(lStack_d0 + _DAT_113069e40))[1];
      if (lVar4 == 0 || lVar5 == 0) {
        uStack_d4 = (uint)(lVar4 == 0 && lVar5 == 0);
      }
      else {
        lVar8 = *(long *)(unaff_x20 + _DAT_113069e40);
        if (lVar8 == *(long *)(lStack_d0 + _DAT_113069e40) && lVar4 == lVar5) {
          uStack_d4 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_d4 = (uint)lVar8;
        }
      }
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113069e48);
      uVar7 = *(undefined8 *)(lStack_d0 + _DAT_113069e48);
      fVar19 = *(float *)(unaff_x20 + _DAT_113069e50);
      fVar14 = *(float *)(lStack_d0 + _DAT_113069e50);
      fVar20 = *(float *)(unaff_x20 + _DAT_113069e58);
      fVar15 = *(float *)(lStack_d0 + _DAT_113069e58);
      fVar21 = *(float *)(unaff_x20 + _DAT_113069e60);
      fVar16 = *(float *)(lStack_d0 + _DAT_113069e60);
      fVar22 = *(float *)(unaff_x20 + _DAT_113069e68);
      fVar17 = *(float *)(lStack_d0 + _DAT_113069e68);
      lVar8 = *(long *)(unaff_x20 + _DAT_113069e70);
      lVar9 = *(long *)(lStack_d0 + _DAT_113069e70);
      lVar10 = *(long *)(unaff_x20 + _DAT_113069e78);
      lVar11 = *(long *)(lStack_d0 + _DAT_113069e78);
      fVar23 = *(float *)(unaff_x20 + _DAT_113069e80);
      fVar18 = *(float *)(lStack_d0 + _DAT_113069e80);
      fVar26 = *(float *)(unaff_x20 + _DAT_113069e88);
      fVar27 = *(float *)(lStack_d0 + _DAT_113069e88);
      fVar28 = *(float *)(unaff_x20 + _DAT_113069e90);
      fVar29 = *(float *)(lStack_d0 + _DAT_113069e90);
      fVar30 = *(float *)(unaff_x20 + _DAT_113069e98);
      fVar31 = *(float *)(lStack_d0 + _DAT_113069e98);
      lVar12 = *(long *)(unaff_x20 + _DAT_113069ea0);
      lVar13 = *(long *)(lStack_d0 + _DAT_113069ea0);
      lVar5 = *(long *)(unaff_x20 + _DAT_113069ea8);
      lVar4 = *(long *)(lStack_d0 + _DAT_113069ea8);
      dVar24 = *(double *)(unaff_x20 + _DAT_113069eb0);
      dVar25 = *(double *)(lStack_d0 + _DAT_113069eb0);
      _objc_release();
      uVar1 = 0;
      if (fVar19 == fVar14) {
        uVar1 = uStack_d4 & (int)uVar6 == (int)uVar7;
      }
      uVar2 = 0;
      if (fVar20 == fVar15) {
        uVar2 = uVar1;
      }
      uVar1 = 0;
      if (fVar21 == fVar16) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (fVar22 == fVar17) {
        uVar2 = uVar1;
      }
      uVar1 = 0;
      if (lVar8 == lVar9) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (lVar10 == lVar11) {
        uVar2 = uVar1;
      }
      uVar1 = 0;
      if (fVar23 == fVar18) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (fVar26 == fVar27) {
        uVar2 = uVar1;
      }
      uVar1 = 0;
      if (fVar28 == fVar29) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (fVar30 == fVar31) {
        uVar2 = uVar1;
      }
      uVar1 = 0;
      if (lVar12 == lVar13) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (lVar5 == lVar4) {
        uVar2 = uVar1;
      }
      if (dVar24 != dVar25) {
        return 0;
      }
      return uVar2;
    }
  }
  return 0;
}



/* Entry: 1042714ac; end: 10427152b; -[SCAdConsumptionSpeed isEqual:] */

uint FUN_1042714ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1042711f4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10427152c; end: 10427152f; -[SCAdConsumptionSpeed copyWithZone:] */

void FUN_10427152c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104271530; end: 104271563; -[SCAdConsumptionSpeed description] */

void FUN_104271530(void)

{
  undefined1 auStack_70 [96];
  
  func_0x0001042715f4(auStack_70);
  FUN_1042716d8(auStack_70);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104271564; end: 1042715df; -[SCAdConsumptionSpeed init] */

void FUN_104271564(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdConsumptionSpeedWrapper.swift",0x2e,2,0x96,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042715ac);
  (*pcVar1)();
}



/* Entry: 1042715e0; end: 1042716d7; -[SCAdConsumptionSpeed .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042715e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113069e40 + 8))
  ;
  return;
}



/* Entry: 1042716d8; end: 10427170b;  */

undefined8 FUN_1042716d8(undefined8 param_1)

{
  FUN_1041fba28();
  return param_1;
}



/* Entry: 10427170c; end: 10427172b;  */

void FUN_10427170c(void)

{
  _objc_opt_self(&PTR_PTR_112991610);
  return;
}



/* Entry: 10427172c; end: 104271783;  */

undefined8 FUN_10427172c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104271a90();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104271784; end: 104271793; -[SCAdEngagementSignal unplayedUserStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104271784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113069ee0));
  return;
}



/* Entry: 104271794; end: 1042717a3; -[SCAdEngagementSignal availableStoriesCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104271794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113069ee8));
  return;
}



/* Entry: 1042717a4; end: 104271807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042717a4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113069ee0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113069ee8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104271808; end: 10427187f; -[SCAdEngagementSignal initWithUnplayedUserStories:availableStoriesCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104271808(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113069ee0) = param_3;
  *(undefined8 *)(param_1 + _DAT_113069ee8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}


