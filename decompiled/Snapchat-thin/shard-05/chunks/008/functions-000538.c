/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104183684; end: 104183797;  */

void FUN_104183684(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_b0;
  long lStack_a8;
  char cStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  long lStack_58;
  char cStack_50;
  
  if (0 < *(long *)(param_1 + 8)) {
    FUN_1041824f4(&uStack_98);
    __sSr8mutatingSryxGSRyxG_tcfC(uStack_98,uStack_90,param_3);
    uVar1 = 0xff;
    uStack_60 = param_3;
    __sSRMa(0xff,param_3);
    uVar2 = 0;
    __sSqMa(0,uVar1);
    uVar1 = 0;
    __sSrMa(0,param_3);
    func_0x000101889bb8(&uStack_b0,0x1041846f4,auStack_70,uVar2,PTR___ss5NeverON_11034ee88,uVar1,
                        PTR___ss5NeverOs5ErrorsWP_11034ee90);
    uVar1 = 0;
    if (lStack_a8 != 0) {
      uVar1 = uStack_b0;
    }
    cStack_50 = cStack_a0;
    if (lStack_a8 == 0 || cStack_a0 == '\x01') {
      cStack_50 = '\x01';
    }
    uStack_60 = uStack_b0;
    if (cStack_a0 != '\x01') {
      uStack_60 = uVar1;
    }
    lStack_58 = lStack_a8;
    func_0x000104185930(0,param_3);
    FUN_104185840();
    *(long *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 104183798; end: 1041837d7;  */

long FUN_104183798(long param_1,long param_2,long *param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1 + param_2;
  if (SCARRY8(param_1,param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1041837d4);
    (*pcVar1)();
  }
  if (param_2 < 0) {
    if ((lVar3 < 0) && (bVar2 = SCARRY8(lVar3,*param_3), lVar3 = lVar3 + *param_3, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1041837d8);
      (*pcVar1)();
    }
  }
  else {
    lVar4 = *param_3;
    bVar2 = SBORROW8(lVar3,lVar4);
    if ((lVar4 <= lVar3) && (lVar3 = lVar3 - lVar4, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1041837bc);
      (*pcVar1)();
    }
  }
  return lVar3;
}



/* Entry: 1041837d8; end: 104183d27;  */

void FUN_1041837d8(long param_1,long param_2,long *param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar2 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104183d00);
    (*pcVar3)();
  }
  if (lVar2 < 1) {
    return;
  }
  lVar8 = param_3[1];
  lVar10 = param_3[2];
  lVar7 = *param_3;
  lVar9 = 0;
  if (lVar7 <= lVar10 + param_1) {
    lVar9 = lVar7;
  }
  lVar11 = 0;
  if (lVar7 <= lVar10 + param_2) {
    lVar11 = lVar7;
  }
  lVar7 = lVar8 - param_2;
  if (SBORROW8(lVar8,param_2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104183d04);
    (*pcVar3)();
  }
  lVar9 = (lVar10 + param_1) - lVar9;
  lVar11 = (lVar10 + param_2) - lVar11;
  if (lVar7 <= param_1) {
    FUN_104183798(lVar10,lVar8,param_3);
    if (SBORROW8(lVar8,lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104183d08);
      (*pcVar3)();
    }
    lVar8 = param_3[2] + (lVar8 - lVar2);
    lVar6 = *param_3;
    lVar5 = 0;
    if (lVar6 <= lVar8) {
      lVar5 = lVar6;
    }
    if (lVar7 != 0) {
      lVar8 = lVar8 - lVar5;
      lVar5 = lVar8;
      if (lVar8 < 1) {
        lVar5 = lVar6;
      }
      lVar1 = lVar10;
      if (lVar10 < 1) {
        lVar1 = lVar6;
      }
      if (lVar11 < lVar1) {
        if (lVar5 < lVar9) {
          lVar8 = lVar6 - lVar9;
          if (SBORROW8(lVar6,lVar9)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104183d18);
            (*pcVar3)();
          }
          if (0 < lVar8) {
            lVar10 = *(long *)(*(long *)(param_5 + -8) + 0x48);
            __sSp14moveInitialize4from5countySpyxG_SitF
                      (param_4 + lVar10 * lVar11,lVar8,param_4 + lVar10 * lVar9,param_5);
            FUN_104183798(lVar11,lVar8,param_3);
            FUN_104183798(lVar9,lVar8,param_3);
          }
          if (SBORROW8(lVar7,lVar8)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104183d28);
            (*pcVar3)();
          }
          if (0 < lVar7 - lVar8) {
            lVar5 = *(long *)(*(long *)(param_5 + -8) + 0x48) * lVar11;
            lVar10 = lVar7 - lVar8;
LAB_104183ae8:
            __sSp14moveInitialize4from5countySpyxG_SitF(param_4 + lVar5,lVar10,param_4,param_5);
            FUN_104183798(lVar11,lVar10,param_3);
            lVar9 = 0;
LAB_104183cc8:
            FUN_104183798(lVar9,lVar10,param_3);
          }
        }
        else if (0 < lVar7) {
          lVar8 = *(long *)(*(long *)(param_5 + -8) + 0x48);
          __sSp14moveInitialize4from5countySpyxG_SitF
                    (param_4 + lVar8 * lVar11,lVar7,param_4 + lVar8 * lVar9,param_5);
          FUN_104183798(lVar11,lVar7,param_3);
          lVar10 = lVar7;
          goto LAB_104183cc8;
        }
      }
      else {
        lVar7 = lVar6 - lVar11;
        if (lVar5 < lVar9) {
          if (SBORROW8(lVar6,lVar11)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104183d1c);
            (*pcVar3)();
          }
          lVar5 = *(long *)(*(long *)(param_5 + -8) + 0x48);
          if (0 < lVar7) {
            __sSp14moveInitialize4from5countySpyxG_SitF
                      (param_4 + lVar5 * lVar11,lVar7,param_4 + lVar5 * lVar9,param_5);
            FUN_104183798(lVar11,lVar7,param_3);
            FUN_104183798(lVar9,lVar7,param_3);
          }
          __sSp14moveInitialize4from5countySpyxG_SitF(param_4,lVar2,param_4 + lVar5 * lVar9,param_5)
          ;
          lVar11 = 0;
          FUN_104183798(0,lVar2,param_3);
          FUN_104183798(lVar9,lVar2,param_3);
          if (0 < lVar8) {
            lVar5 = lVar11 * lVar5;
            lVar10 = lVar8;
            goto LAB_104183ae8;
          }
        }
        else {
          if (SBORROW8(lVar6,lVar11)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104183d24);
            (*pcVar3)();
          }
          if (0 < lVar7) {
            lVar8 = *(long *)(*(long *)(param_5 + -8) + 0x48);
            __sSp14moveInitialize4from5countySpyxG_SitF
                      (param_4 + lVar8 * lVar11,lVar7,param_4 + lVar8 * lVar9,param_5);
            FUN_104183798(lVar11,lVar7,param_3);
            FUN_104183798(lVar9,lVar7,param_3);
          }
          if (0 < lVar10) {
            __sSp14moveInitialize4from5countySpyxG_SitF
                      (param_4,lVar10,param_4 + *(long *)(*(long *)(param_5 + -8) + 0x48) * lVar9,
                       param_5);
            FUN_104183798(0,lVar10,param_3);
            goto LAB_104183cc8;
          }
        }
      }
    }
    lVar9 = param_3[1] - lVar2;
    if (SBORROW8(param_3[1],lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104183d0c);
      (*pcVar3)();
    }
    goto LAB_104183cdc;
  }
  lVar8 = lVar10;
  FUN_104183798(lVar10,lVar2,param_3);
  if (param_1 != 0) {
    lVar5 = *param_3;
    lVar7 = lVar11;
    if (lVar11 < 1) {
      lVar7 = lVar5;
    }
    lVar6 = lVar9;
    if (lVar9 < 1) {
      lVar6 = lVar5;
    }
    if (lVar10 < lVar6) {
      if (lVar7 < lVar8) {
        if (0 < lVar11) {
          __sSp14moveInitialize4from5countySpyxG_SitF
                    (param_4 + *(long *)(*(long *)(param_5 + -8) + 0x48) * (lVar5 - lVar2),lVar11,
                     param_4,param_5);
          FUN_104183798(lVar5 - lVar2,lVar11,param_3);
          FUN_104183798(0,lVar11,param_3);
        }
        lVar9 = lVar11;
        if (SBORROW8(param_1,lVar11)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1041838dc);
          (*pcVar3)();
        }
LAB_104183b94:
        param_1 = param_1 - lVar9;
        if (param_1 < 1) goto LAB_104183bdc;
        lVar10 = param_3[2];
        lVar7 = *(long *)(*(long *)(param_5 + -8) + 0x48);
        lVar9 = lVar7 * lVar10;
        goto LAB_104183bb0;
      }
      if (param_1 < 1) goto LAB_104183bdc;
      lVar9 = *(long *)(*(long *)(param_5 + -8) + 0x48);
      __sSp14moveInitialize4from5countySpyxG_SitF
                (param_4 + lVar9 * lVar10,param_1,param_4 + lVar9 * lVar8,param_5);
    }
    else {
      if (lVar8 <= lVar7) {
        if (SBORROW8(0,lVar9)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104183d14);
          (*pcVar3)();
        }
        if (0 < lVar9) {
          __sSp14moveInitialize4from5countySpyxG_SitF
                    (param_4,lVar9,
                     param_4 + *(long *)(*(long *)(param_5 + -8) + 0x48) * (lVar11 - lVar9),param_5)
          ;
          FUN_104183798(0,lVar9,param_3);
          FUN_104183798(lVar11 - lVar9,lVar9,param_3);
        }
        if (SBORROW8(param_1,lVar9)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104183d20);
          (*pcVar3)();
        }
        goto LAB_104183b94;
      }
      lVar7 = *(long *)(*(long *)(param_5 + -8) + 0x48);
      if (0 < lVar9) {
        __sSp14moveInitialize4from5countySpyxG_SitF(param_4,lVar9,param_4 + lVar7 * lVar2,param_5);
        FUN_104183798(0,lVar9,param_3);
        FUN_104183798(lVar2,lVar9,param_3);
        lVar5 = *param_3;
      }
      __sSp14moveInitialize4from5countySpyxG_SitF
                (param_4 + lVar7 * (lVar5 - lVar2),lVar2,param_4,param_5);
      FUN_104183798(lVar5 - lVar2,lVar2,param_3);
      FUN_104183798(0,lVar2,param_3);
      bVar4 = SBORROW8(param_1,lVar11);
      param_1 = param_1 - lVar11;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104183d10);
        (*pcVar3)();
      }
      if (param_1 < 1) goto LAB_104183bdc;
      lVar10 = param_3[2];
      lVar9 = lVar10 * lVar7;
LAB_104183bb0:
      __sSp14moveInitialize4from5countySpyxG_SitF
                (param_4 + lVar9,param_1,param_4 + lVar7 * lVar8,param_5);
    }
    FUN_104183798(lVar10,param_1,param_3);
    FUN_104183798(lVar8,param_1,param_3);
  }
LAB_104183bdc:
  param_3[2] = lVar8;
  lVar9 = param_3[1] - lVar2;
  if (SBORROW8(param_3[1],lVar2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104183bf0);
    (*pcVar3)();
  }
LAB_104183cdc:
  param_3[1] = lVar9;
  return;
}



/* Entry: 104183d28; end: 104184077;  */

undefined8 FUN_104183d28(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [16];
  undefined8 *puStack_a0;
  code *pcStack_98;
  undefined1 *puStack_90;
  undefined1 auStack_80 [16];
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  
  FUN_104184a44(0,param_3);
  uVar1 = *param_1;
  puStack_70 = param_1;
  puStack_68 = param_2;
  __ss13ManagedBufferC6create15minimumCapacity16makingHeaderWithAByxq_GSi_xAFKXEtKFZ
            (uVar1,FUN_1041844f4,auStack_80);
  uVar2 = uVar1;
  _swift_retain();
  __ss20ManagedBufferPointerV06unsafeB6ObjectAByxq_GyXl_tcfC();
  if (0 < (long)param_1[1]) {
    pcStack_98 = FUN_10418450c;
    uVar3 = 0x112d393f0;
    puStack_a0 = param_3;
    puStack_90 = auStack_80;
    puStack_70 = param_3;
    puStack_68 = param_1;
    puStack_60 = param_2;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    FUN_1040fee4c(0x104184528,auStack_b0,uVar2,&UNK_11074b8b8,param_3,uVar3,PTR___sytN_11034f1b0 + 8
                  ,PTR___ss5ErrorWS_11034ee10,auStack_b8);
  }
  _swift_release(uVar1);
  return uVar2;
}



/* Entry: 104184078; end: 104184193;  */

void FUN_104184078(undefined8 *param_1,long param_2,long param_3,long *param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  lVar4 = param_4[2] + param_2;
  lVar6 = *param_4;
  lVar1 = 0;
  if (lVar6 <= lVar4) {
    lVar1 = lVar6;
  }
  lVar5 = param_4[2] + param_3;
  lVar2 = 0;
  if (lVar6 <= lVar5) {
    lVar2 = lVar6;
  }
  if (!SBORROW8(param_3,param_2)) {
    lVar4 = lVar4 - lVar1;
    if ((param_3 - param_2 == 0) || (lVar5 = lVar5 - lVar2, lVar4 < lVar5)) {
      FUN_104185700(&uStack_48,param_5 + *(long *)(*(long *)(param_6 + -8) + 0x48) * lVar4,
                    param_3 - param_2,param_6);
    }
    else {
      if (SBORROW8(lVar6,lVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104184138);
        (*pcVar3)();
      }
      FUN_10418570c(&uStack_48,param_5 + *(long *)(*(long *)(param_6 + -8) + 0x48) * lVar4,
                    lVar6 - lVar4,param_5,lVar5);
    }
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
    *(undefined1 *)(param_1 + 4) = uStack_28;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104184134);
  (*pcVar3)();
}



/* Entry: 104184194; end: 104184227;  */

void FUN_104184194(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  FUN_1041824f4(&uStack_58,param_3,param_4,param_5);
  func_0x000104184138(*(undefined8 *)(param_3 + 0x10),uStack_58,uStack_50);
  if (cStack_38 != '\x01') {
    func_0x000104184138(0,uStack_48,uStack_40);
  }
  return;
}



/* Entry: 104184228; end: 1041842b3;  */

void FUN_104184228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_38;
  
  FUN_1041824f4(&uStack_58,param_3,param_4,param_5);
  func_0x000104184138(0,uStack_58,uStack_50);
  if (cStack_38 != '\x01') {
    func_0x000104184138();
  }
  return;
}



/* Entry: 1041842b4; end: 104184407;  */

void FUN_1041842b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_d0 [16];
  long lStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  long lStack_90;
  long lStack_88;
  char cStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  FUN_1041824f4(&lStack_78,param_3,param_4,param_5);
  lVar2 = lStack_78;
  lVar5 = lStack_70;
  __sSr8mutatingSryxGSRyxG_tcfC(lStack_78,lStack_70,param_5);
  uStack_a8 = uStack_60;
  uStack_b0 = uStack_68;
  uStack_a0 = uStack_58;
  uVar3 = 0xff;
  lStack_c0 = param_5;
  __sSRMa(0xff,param_5);
  uVar4 = 0;
  __sSqMa(0,uVar3);
  uVar3 = 0;
  __sSrMa(0,param_5);
  func_0x000101889bb8(&lStack_90,0x104184708,auStack_d0,uVar4,PTR___ss5NeverON_11034ee88,uVar3,
                      PTR___ss5NeverOs5ErrorsWP_11034ee90);
  if (lVar5 < 1) {
    lVar5 = 0;
  }
  else {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104184404);
      (*pcVar1)();
    }
    __sSp14moveInitialize4from5countySpyxG_SitF(lVar2,lVar5,param_2,param_5);
  }
  if ((cStack_80 != '\x01') && (0 < lStack_88)) {
    if (lStack_90 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104184408);
      (*pcVar1)();
    }
    __sSp14moveInitialize4from5countySpyxG_SitF
              (lStack_90,lStack_88,param_2 + *(long *)(*(long *)(param_5 + -8) + 0x48) * lVar5,
               param_5);
  }
  return;
}



/* Entry: 104184408; end: 1041844d7;  */

void FUN_104184408(long *param_1,long param_2,long param_3,long *param_4,long param_5,long param_6)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 < param_3) {
    lVar4 = param_3 - param_2;
    if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1041844d4);
      (*pcVar1)();
    }
    lVar3 = param_5 + *(long *)(*(long *)(param_6 + -8) + 0x48) * param_2;
    __sSr5start5countSryxGSpyxGSg_SitcfC(lVar3,lVar4,param_6);
    param_3 = 0;
    bVar2 = true;
    lVar5 = 0;
  }
  else {
    lVar4 = *param_4 - param_2;
    if (SBORROW8(*param_4,param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1041844d8);
      (*pcVar1)();
    }
    lVar3 = param_5 + *(long *)(*(long *)(param_6 + -8) + 0x48) * param_2;
    __sSr5start5countSryxGSpyxGSg_SitcfC(lVar3,lVar4,param_6);
    __sSr5start5countSryxGSpyxGSg_SitcfC(param_5,param_3,param_6);
    bVar2 = param_3 == 0;
    lVar5 = 0;
    if (!bVar2) {
      lVar5 = param_5;
    }
  }
  *param_1 = lVar3;
  param_1[1] = lVar4;
  param_1[2] = lVar5;
  param_1[3] = param_3;
  *(bool *)(param_1 + 4) = bVar2;
  return;
}



/* Entry: 1041844d8; end: 1041844f3;  */

void FUN_1041844d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010418588c(param_1,*(undefined8 *)(unaff_x20 + 0x10),param_2);
  return;
}



/* Entry: 1041844f4; end: 10418450b;  */

void FUN_1041844f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[2];
  uVar3 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Entry: 10418450c; end: 104184553;  */

void FUN_10418450c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_104184194(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104184554; end: 104184593;  */

void FUN_104184554(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  __ss13ManagedBufferC8capacitySivg();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = 0;
  return;
}



/* Entry: 104184594; end: 1041845af;  */

void FUN_104184594(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1041842b4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1041845b0; end: 1041845f3;  */

void FUN_1041845b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  __ss13ManagedBufferC8capacitySivg();
  uVar1 = *(undefined8 *)(lVar2 + 8);
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = 0;
  return;
}



/* Entry: 1041845f4; end: 10418460f;  */

void FUN_1041845f4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_104184228(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104184610; end: 1041846a3;  */

void FUN_104184610(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1041846a4; end: 104184743;  */

void FUN_1041846a4(void)

{
  FUN_1041844d8();
  return;
}



/* Entry: 104184744; end: 10418475b;  */

void FUN_104184744(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_104184a44(0);
  __ss13ManagedBufferC6create15minimumCapacity16makingHeaderWithAByxq_GSi_xAFKXEtKFZ
            (param_1,FUN_10418232c,0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss20ManagedBufferPointerV06unsafeB6ObjectAByxq_GyXl_tcfC_11034e950)();
  return;
}



/* Entry: 10418475c; end: 1041847af;  */

void FUN_10418475c(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  __ss13ManagedBufferC13headerAddressSpyxGvg();
  uVar1 = param_1;
  __ss13ManagedBufferC19firstElementAddressSpyq_Gvg();
  FUN_1041847b0(param_1,uVar1,*(undefined8 *)(lVar2 + lRam0000000113813178));
                    /* WARNING: Could not recover jumptable at 0x00010bdb9284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss13ManagedBufferCfd_11034e5e8)();
  return;
}



/* Entry: 1041847b0; end: 10418484f;  */

void FUN_1041847b0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = param_1[1];
  lVar1 = param_1[2];
  if (SCARRY8(lVar1,lVar5)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104184848);
    (*pcVar3)();
  }
  lVar6 = *param_1;
  if (lVar6 < lVar1 + lVar5) {
    lVar2 = lVar6 - lVar1;
    if (SBORROW8(lVar6,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10418484c);
      (*pcVar3)();
    }
    __sSp12deinitialize5countSvSi_tF
              (lVar2,param_2 + *(long *)(*(long *)(param_3 + -8) + 0x48) * lVar1);
    bVar4 = SBORROW8(lVar5,lVar2);
    lVar5 = lVar5 - lVar2;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104184850);
      (*pcVar3)();
    }
  }
  else {
    param_2 = param_2 + *(long *)(*(long *)(param_3 + -8) + 0x48) * lVar1;
  }
  __sSp12deinitialize5countSvSi_tF(lVar5,param_2,param_3);
  return;
}



/* Entry: 104184850; end: 10418486b;  */

void FUN_104184850(undefined8 param_1)

{
  FUN_10418475c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x28,7);
  return;
}



/* Entry: 10418486c; end: 1041848c3;  */

undefined1  [16] FUN_10418486c(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_40 [16];
  
  lVar1 = *unaff_x20;
  __ss13ManagedBufferC13headerAddressSpyxGvg();
  __ss13ManagedBufferC19firstElementAddressSpyq_Gvg();
  FUN_1041848c4(auStack_40,param_1,*(undefined8 *)(lVar1 + lRam0000000113813178));
  return auStack_40;
}



/* Entry: 1041848c4; end: 10418499f;  */

void FUN_1041848c4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  __ss11_StringGutsV4growyySiF(0x13);
  _swift_bridgeObjectRelease(0xe000000000000000);
  uVar1 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF(param_3,0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x3e,0xe100000000000000);
  uVar1 = param_2[1];
  FUN_104184a50(*param_2,uVar1,param_2[2]);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  *param_1 = 0x745365757165445f;
  param_1[1] = 0xee003c656761726f;
  return;
}



/* Entry: 1041849a0; end: 1041849bf;  */

void FUN_1041849a0(void)

{
  FUN_10418486c();
  return;
}



/* Entry: 1041849c0; end: 1041849ff;  */

void FUN_1041849c0(void)

{
  long lVar1;
  
  lVar1 = 0x113066100;
  func_0x0001000285a8(0x113066100,&UNK_10dcdb580);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lRam0000000113813170 = lVar1;
  return;
}



/* Entry: 104184a00; end: 104184a03;  */

void FUN_104184a00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 104184a04; end: 104184a43;  */

void FUN_104184a04(long param_1)

{
  undefined1 auStack_18 [8];
  
  _swift_initClassMetadata2(param_1,0,0,auStack_18,param_1 + lRam0000000113813178 + 8);
  return;
}



/* Entry: 104184a44; end: 104184a4f;  */

void FUN_104184a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f2d1c);
  return;
}



/* Entry: 104184a50; end: 104184bcf;  */

undefined1  [16] FUN_104184a50(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  __ss11_StringGutsV4growyySiF(0x28);
  _swift_bridgeObjectRelease(0xe000000000000000);
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar2 = PTR___sSiN_11034deb0;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x3a746e756f63202c,0xe900000000000020);
  puVar3 = puVar4;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar2,puVar4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x537472617473202c,0xed0000203a746f6c);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar2,puVar4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x40,0xe100000000000000);
  _swift_bridgeObjectRelease(0xe100000000000000);
  __sSS6appendyySSF(0x29,0xe100000000000000);
  auVar1._8_8_ = 0xeb00000000203a79;
  auVar1._0_8_ = 0x7469636170616328;
  return auVar1;
}



/* Entry: 104184bd0; end: 104184c37;  */

undefined1  [16] FUN_104184bd0(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  __ss11_StringGutsV4growyySiF(0x28);
  _swift_bridgeObjectRelease(0xe000000000000000);
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar2 = PTR___sSiN_11034deb0;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x3a746e756f63202c,0xe900000000000020);
  puVar3 = puVar4;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar2,puVar4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x537472617473202c,0xed0000203a746f6c);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar2,puVar4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x40,0xe100000000000000);
  _swift_bridgeObjectRelease(0xe100000000000000);
  __sSS6appendyySSF(0x29,0xe100000000000000);
  auVar1._8_8_ = 0xeb00000000203a79;
  auVar1._0_8_ = 0x7469636170616328;
  return auVar1;
}



/* Entry: 104184c38; end: 104184c9b;  */

undefined1  [16] FUN_104184c38(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  auVar1._8_8_ = 0xe100000000000000;
  auVar1._0_8_ = 0x40;
  return auVar1;
}



/* Entry: 104184c9c; end: 104184cb3;  */

bool FUN_104184c9c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104184cb4; end: 104184cf3;  */

void FUN_104184cb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113066108 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdb5fc;
  _swift_getWitnessTable(&UNK_10dcdb5fc,&UNK_11074b8f8);
  puRam0000000113066108 = puVar1;
  return;
}



/* Entry: 104184cf4; end: 104184d53;  */

bool FUN_104184cf4(long *param_1,long *param_2)

{
  return *param_1 < *param_2;
}



/* Entry: 104184d54; end: 1041856ff;  */

long FUN_104184d54(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar7;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  undefined8 *unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar10 = *(long *)(param_3 + 0x10);
  lVar2 = 0;
  lStack_98 = param_3;
  lStack_68 = param_1;
  __sSqMa(0,lVar10);
  lStack_a8 = *(long *)(lVar2 + -8);
  lStack_a0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = (long)&lStack_b0 - extraout_x8;
  lVar8 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar11 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar11 - extraout_x12;
  lStack_78 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_4 + -8) + 0x40));
  lVar9 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar2 = unaff_x20[2];
  lStack_70 = unaff_x20[3];
  lStack_90 = CONCAT44(lStack_90._4_4_,(uint)*(byte *)(unaff_x20 + 4));
  lStack_88 = param_2;
  lStack_80 = extraout_x12_00;
  if (*(byte *)(unaff_x20 + 4) != 1) {
    lStack_b0 = unaff_x20[1];
    lVar3 = lStack_78;
    __sST19underestimatedCountSivgTj(lStack_78,param_5);
    lVar6 = lStack_78;
    if (lStack_b0 < lVar3) {
      (**(code **)(lStack_80 + 0x10))(lVar9,param_2,lStack_78);
      lVar11 = lStack_68;
      __sST12makeIterator0B0QzyFTj(lStack_68,lVar6,param_5);
      puVar1 = PTR___sSTTL_11034db40;
      uVar4 = 0;
      _swift_getAssociatedTypeWitness
                (0,param_5,lVar6,PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
      _swift_getAssociatedConformanceWitness
                (param_5,lVar6,uVar4,puVar1,PTR___sST8IteratorST_StTn_11034db38);
      func_0x0001041850f0(lVar11,lStack_98,uVar4,param_5);
      goto LAB_104184f70;
    }
  }
  lVar6 = lStack_78;
  lStack_98 = lVar11;
  (**(code **)(lStack_80 + 0x10))(lVar9,param_2,lStack_78);
  lVar9 = unaff_x20[1];
  lVar11 = lStack_68;
  __sST13_copyContents12initializing8IteratorQz_SitSry7ElementQzG_tFTj
            (lStack_68,*unaff_x20,lVar9,lVar6,param_5);
  puVar1 = PTR___sSTTL_11034db40;
  if (lVar11 == lVar9 && (int)lStack_90 != 1) {
    lStack_90 = lVar9;
    if (lStack_70 < 1) {
      lVar9 = 0;
    }
    else {
      uVar4 = 0;
      _swift_getAssociatedTypeWitness
                (0,param_5,lVar6,PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
      _swift_getAssociatedConformanceWitness
                (param_5,lVar6,uVar4,puVar1,PTR___sST8IteratorST_StTn_11034db38);
      lVar3 = lStack_98;
      lVar11 = 0;
      do {
        __sSt4next7ElementQzSgyFTj(lVar5,uVar4,param_5);
        lVar9 = lVar5;
        (**(code **)(lVar8 + 0x30))(lVar5,1,lVar10);
        if ((int)lVar9 == 1) {
          (**(code **)(lStack_80 + 8))(lStack_88,lStack_78);
          pcVar7 = *(code **)(lStack_a8 + 8);
          lVar6 = lStack_a0;
          goto LAB_1041850b8;
        }
        (**(code **)(lVar8 + 0x20))(lVar12,lVar5,lVar10);
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1041850f0);
          (*pcVar7)();
        }
        lVar9 = *(long *)(lVar8 + 0x48);
        (**(code **)(lVar8 + 0x10))(lVar3,lVar12,lVar10);
        func_0x0001041825b8(lVar3,lVar2 + lVar9 * lVar11,lVar10);
        (**(code **)(lVar8 + 8))(lVar12,lVar10);
        lVar11 = lVar11 + 1;
        lVar6 = lStack_78;
        lVar9 = lStack_70;
      } while (lStack_70 != lVar11);
    }
    pcVar7 = *(code **)(lStack_80 + 8);
    lVar5 = lStack_88;
    lVar11 = lVar9;
LAB_1041850b8:
    (*pcVar7)(lVar5,lVar6);
    if (!SCARRY8(lStack_90,lVar11)) {
      return lStack_90 + lVar11;
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1041850ec);
    (*pcVar7)();
  }
LAB_104184f70:
  (**(code **)(lStack_80 + 8))(lStack_88,lVar6);
  return lVar11;
}



/* Entry: 104185700; end: 10418570b;  */

void FUN_104185700(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)PTR___sSR5start5countSRyxGSPyxGSg_SitcfC_11034d8d0)();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* Entry: 10418570c; end: 10418576f;  */

void FUN_10418570c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  __sSR5start5countSRyxGSPyxGSg_SitcfC(param_2,param_3,param_6);
  __sSR5start5countSRyxGSPyxGSg_SitcfC(param_4,param_5,param_6);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* Entry: 104185770; end: 10418579f;  */

void FUN_104185770(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* Entry: 1041857a0; end: 10418583f;  */

void FUN_1041857a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long extraout_x8;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + -8);
  uVar1 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  FUN_104185840(uVar1);
  (**(code **)(lVar2 + 0x10))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,param_3);
  func_0x0001041852d4(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,
                      param_3,param_4);
  return;
}



/* Entry: 104185840; end: 1041858c3;  */

undefined1  [16] FUN_104185840(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar4 = *unaff_x20;
  uVar5 = unaff_x20[1];
  lVar7 = *(long *)(param_1 + 0x10);
  FUN_1041858c4(uVar4,uVar5,lVar7);
  if (*(char *)(unaff_x20 + 4) == '\x01') {
    auVar8._8_8_ = uVar5;
    auVar8._0_8_ = uVar4;
    return auVar8;
  }
  lVar1 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  if (lVar1 == 0) {
    lVar7 = 0;
  }
  else {
    _swift_arrayDestroy();
    lVar6 = *(long *)(*(long *)(lVar7 + -8) + 0x48);
    lVar7 = lVar2 * lVar6;
    if (SUB168(SEXT816(lVar2) * SEXT816(lVar6),8) != lVar7 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104185924);
      (*pcVar3)();
    }
    lVar7 = lVar1 + lVar7;
  }
  auVar9._8_8_ = lVar7;
  auVar9._0_8_ = lVar1;
  return auVar9;
}



/* Entry: 1041858c4; end: 104185923;  */

undefined1  [16] FUN_1041858c4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    _swift_arrayDestroy();
    lVar3 = *(long *)(*(long *)(param_3 + -8) + 0x48);
    lVar2 = param_2 * lVar3;
    if (SUB168(SEXT816(param_2) * SEXT816(lVar3),8) != lVar2 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104185924);
      (*pcVar1)();
    }
    lVar2 = param_1 + lVar2;
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 104185924; end: 10418595b;  */

void FUN_104185924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7f2d98);
  return;
}



/* Entry: 10418595c; end: 104185b7b;  */

long FUN_10418595c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_100 [8];
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  char cStack_70;
  
  lVar4 = 0;
  uStack_c0 = param_1;
  __sSqMa(0,param_4);
  lStack_d0 = *(long *)(lVar4 + -8);
  lStack_c8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar7 = *(long *)(param_5 + -8);
  puStack_d8 = auStack_100 + -extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar8 = (long)(auStack_100 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar9 = *(undefined8 *)(param_6 + 8);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,param_5,PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
  lStack_f8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_f8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  uVar2 = uStack_c0;
  lVar6 = lVar8 - extraout_x8_01;
  lStack_f0 = param_4;
  uStack_e8 = param_2;
  uStack_e0 = param_3;
  lStack_a0 = param_4;
  lStack_98 = param_5;
  lStack_90 = param_6;
  uStack_88 = param_2;
  uStack_80 = param_3;
  __sST32withContiguousStorageIfAvailableyqd__Sgqd__SRy7ElementQzGKXEKlFTj
            (&lStack_78,FUN_104185c14,auStack_b0,PTR___sSiN_11034deb0,param_5,uVar9);
  if (cStack_70 == '\x01') {
    (**(code **)(lVar7 + 0x10))(lVar8,uVar2,param_5);
    lStack_78 = lVar6;
    __sST13_copyContents12initializing8IteratorQz_SitSry7ElementQzG_tFTj
              (lVar6,uStack_e8,uStack_e0,param_5,uVar9);
    _swift_getAssociatedConformanceWitness
              (uVar9,param_5,lVar4,PTR___sSTTL_11034db40,PTR___sST8IteratorST_StTn_11034db38);
    puVar1 = puStack_d8;
    __sSt4next7ElementQzSgyFTj(puStack_d8,lVar4,uVar9);
    (**(code **)(lStack_f8 + 8))(lVar6,lVar4);
    puVar5 = puVar1;
    (**(code **)(*(long *)(lStack_f0 + -8) + 0x30))(puVar1,1);
    (**(code **)(lStack_d0 + 8))(puVar1,lStack_c8);
    if ((int)puVar5 != 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104185b7c);
      (*pcVar3)();
    }
  }
  return lStack_78;
}



/* Entry: 104185b7c; end: 104185c13;  */

void FUN_104185b7c(long *param_1,ulong param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_104187f2c(param_2,param_3,param_6);
    if ((uVar2 & 1) == 0) {
      if (param_5 < param_3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104185c14);
        (*pcVar1)();
      }
      if (param_4 != 0) {
        __sSp10initialize4from5countySPyxG_SitF(param_2,param_3,param_4,param_6);
      }
    }
    else {
      param_3 = 0;
    }
  }
  *param_1 = param_3;
  return;
}



/* Entry: 104185c14; end: 104185c33;  */

void FUN_104185c14(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_104185b7c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 104185c34; end: 104185d8b;  */

undefined1  [16] FUN_104185c34(ulong param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar2 = param_2 & 0xffffffff;
  uVar3 = (ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8)) +
                        POPCOUNT((char)(uVar2 >> 0x10)) + POPCOUNT((char)(uVar2 >> 0x18)));
  uVar2 = 0;
  if (uVar3 <= param_1) {
    uVar2 = 0x20;
  }
  uVar5 = 0;
  if (uVar3 <= param_1) {
    uVar5 = uVar3;
  }
  uVar1 = (uint)(param_2 >> uVar2) & 0xffff;
  uVar4 = (ulong)(byte)(POPCOUNT((char)uVar1) + POPCOUNT((char)(uVar1 >> 8)));
  uVar3 = 0;
  if (uVar4 <= param_1 - uVar5) {
    uVar2 = uVar2 | 0x10;
    uVar3 = uVar4;
  }
  uVar3 = (param_1 - uVar5) - uVar3;
  uVar4 = (ulong)(byte)POPCOUNT((char)(param_2 >> uVar2));
  uVar5 = 0;
  if (uVar4 <= uVar3) {
    uVar2 = uVar2 | 8;
    uVar5 = uVar4;
  }
  uVar3 = uVar3 - uVar5;
  uVar4 = (ulong)(byte)POPCOUNT((byte)(param_2 >> uVar2) & 0xf);
  uVar5 = 0;
  if (uVar4 <= uVar3) {
    uVar2 = uVar2 | 4;
    uVar5 = uVar4;
  }
  uVar3 = uVar3 - uVar5;
  uVar4 = (ulong)(byte)POPCOUNT((byte)(param_2 >> uVar2) & 3);
  uVar5 = 0;
  if (uVar4 <= uVar3) {
    uVar2 = uVar2 + 2;
    uVar5 = uVar4;
  }
  uVar3 = uVar3 - uVar5;
  uVar5 = param_2 >> uVar2 & 1;
  if (uVar3 <= uVar5) {
    if (uVar5 <= uVar3) {
      uVar2 = uVar2 + 1;
    }
    if ((param_2 >> uVar2 & 1) != 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar2;
      return auVar6;
    }
  }
  return ZEXT816(1) << 0x40;
}



/* Entry: 104185d8c; end: 104185e37;  */

void FUN_104185d8c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104185e38; end: 104185e4b;  */

bool FUN_104185e38(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104185e4c; end: 104185e8b;  */

void FUN_104185e4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113066210 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdb780;
  _swift_getWitnessTable(&UNK_10dcdb780,&UNK_11074ba28);
  puRam0000000113066210 = puVar1;
  return;
}



/* Entry: 104185e8c; end: 104185ea3;  */

undefined1  [16] FUN_104185e8c(void)

{
  return ZEXT816(0x11074ba28);
}



/* Entry: 104185ea4; end: 104185f9b;  */

void FUN_104185ea4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_18;
  
  uStack_18 = *unaff_x20;
  func_0x0001014a2c84();
  __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(&uStack_18,0x10,0,PTR___sSuN_11034e220,param_1);
  return;
}



/* Entry: 104185f9c; end: 104185fd3;  */

void FUN_104185f9c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104185fd4; end: 104185ff3;  */

void FUN_104185fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSTsE32withContiguousStorageIfAvailableyqd__Sgqd__SRy7ElementQzGKXEKlF
            (param_1,param_2,param_4,param_3);
  return;
}



/* Entry: 104185ff4; end: 10418603f;  */

void FUN_104185ff4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  if (uVar3 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
    uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    lVar2 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20);
    *unaff_x20 = uVar3 - 1 & uVar3;
  }
  *param_1 = lVar2;
  *(bool *)(param_1 + 1) = uVar3 == 0;
  return;
}



/* Entry: 104186040; end: 1041860eb;  */

void FUN_104186040(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041860ec; end: 1041860ef;  */

void FUN_1041860ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113066218 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdb840;
  _swift_getWitnessTable(&UNK_10dcdb840,&UNK_11074bac0);
  puRam0000000113066218 = puVar1;
  return;
}



/* Entry: 1041860f0; end: 10418612f;  */

void FUN_1041860f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113066218 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdb840;
  _swift_getWitnessTable(&UNK_10dcdb840,&UNK_11074bac0);
  puRam0000000113066218 = puVar1;
  return;
}



/* Entry: 104186130; end: 104186133;  */

void FUN_104186130(void)

{
  undefined *puVar1;
  
  if (puRam0000000113066220 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdb870;
  _swift_getWitnessTable(&UNK_10dcdb870,&UNK_11074bac0);
  puRam0000000113066220 = puVar1;
  return;
}



/* Entry: 104186134; end: 104186173;  */

void FUN_104186134(void)

{
  undefined *puVar1;
  
  if (puRam0000000113066220 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdb870;
  _swift_getWitnessTable(&UNK_10dcdb870,&UNK_11074bac0);
  puRam0000000113066220 = puVar1;
  return;
}



/* Entry: 104186174; end: 104186183;  */

undefined1  [16] FUN_104186174(void)

{
  return ZEXT816(0x11074bac0);
}



/* Entry: 104186184; end: 104186357;  */

undefined * FUN_104186184(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 == 0) {
    uVar9 = *(ulong *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x18);
    _swift_release(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar9 = uVar9 >> 1;
  }
  else {
    puVar8 = (undefined *)
             (ulong)(byte)(POPCOUNT((char)param_1) + POPCOUNT((char)(param_1 >> 8)) +
                           POPCOUNT((char)(param_1 >> 0x10)) + POPCOUNT((char)(param_1 >> 0x18)) +
                           POPCOUNT((char)(param_1 >> 0x20)) + POPCOUNT((char)(param_1 >> 0x28)) +
                           POPCOUNT((char)(param_1 >> 0x30)) + POPCOUNT((char)(param_1 >> 0x38)));
    puVar5 = puVar8;
    func_0x000104187194(puVar8,0);
    uVar9 = (*(ulong *)(puVar5 + 0x18) >> 1) - (long)puVar8;
    uVar7 = *(ulong *)(puVar5 + 0x18) >> 1 | 0x8000000000000000;
    plVar11 = (long *)(puVar5 + 0x20);
    do {
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104186348);
        (*pcVar3)();
      }
      if (uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10418634c);
        (*pcVar3)();
      }
      uVar10 = param_1 - 1 & param_1;
      uVar2 = (param_1 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_1 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      plVar12 = plVar11 + 1;
      *plVar11 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
      uVar7 = uVar7 - 1;
      puVar8 = puVar8 + -1;
      param_1 = uVar10;
      plVar11 = plVar12;
    } while (puVar8 != (undefined *)0x0);
    if (uVar10 != 0) {
      puVar8 = puVar5;
      do {
        puVar5 = puVar8;
        if (uVar9 == 0) {
          uVar9 = *(ulong *)(puVar8 + 0x18);
          if ((long)((uVar9 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104186354);
            (*pcVar3)();
          }
          uVar7 = uVar9 & 0xfffffffffffffffe;
          if ((long)uVar9 < 2) {
            uVar7 = 1;
          }
          puVar5 = (undefined *)0x112d5dfa8;
          func_0x0001000285a8(0x112d5dfa8,&UNK_10d9473c0);
          _swift_allocObject();
          puVar6 = puVar5;
          _malloc_size();
          puVar1 = puVar6 + -0x19;
          if (0x1f < (long)puVar6) {
            puVar1 = puVar6 + -0x20;
          }
          *(ulong *)(puVar5 + 0x10) = uVar7;
          *(long *)(puVar5 + 0x18) = ((long)puVar1 >> 3) << 1;
          puVar6 = puVar5 + 0x20;
          uVar9 = *(ulong *)(puVar8 + 0x18) >> 1;
          if (*(long *)(puVar8 + 0x10) != 0) {
            if ((puVar5 != puVar8) || (puVar8 + 0x20 + uVar9 * 8 <= puVar6)) {
              _memmove(puVar6,puVar8 + 0x20,uVar9 << 3);
            }
            *(undefined8 *)(puVar8 + 0x10) = 0;
          }
          plVar12 = (long *)(puVar6 + uVar9 * 8);
          uVar9 = ((long)puVar1 >> 3 & 0x7fffffffffffffffU) - uVar9;
          _swift_release(puVar8);
        }
        bVar4 = SBORROW8(uVar9,1);
        uVar9 = uVar9 - 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104186350);
          (*pcVar3)();
        }
        uVar7 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        *plVar12 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
        uVar10 = uVar10 - 1 & uVar10;
        puVar8 = puVar5;
        plVar12 = plVar12 + 1;
      } while (uVar10 != 0);
    }
  }
  if (1 < *(ulong *)(puVar5 + 0x18)) {
    uVar7 = *(ulong *)(puVar5 + 0x18) >> 1;
    if (SBORROW8(uVar7,uVar9)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104186358);
      (*pcVar3)();
    }
    *(ulong *)(puVar5 + 0x10) = uVar7 - uVar9;
  }
  return puVar5;
}



/* Entry: 104186358; end: 10418649f;  */

long FUN_104186358(ulong *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_3;
    if (param_3 != 0) {
      if (param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1041863b4);
        (*pcVar2)();
      }
      lVar3 = 0;
      lVar4 = lVar3;
      if (param_4 != 0) {
        do {
          uVar1 = (param_4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_4 & 0x5555555555555555) << 1;
          uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
          uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          param_4 = param_4 - 1 & param_4;
          *(long *)(param_2 + lVar3 * 8) = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20);
          lVar4 = param_3;
          if (param_3 + -1 == lVar3) break;
          lVar3 = lVar3 + 1;
          lVar4 = lVar3;
        } while (param_4 != 0);
      }
    }
  }
  *param_1 = param_4;
  return lVar4;
}



/* Entry: 1041864a0; end: 1041864b3;  */

void FUN_1041864a0(void)

{
  FUN_104187214();
  return;
}



/* Entry: 1041864b4; end: 104186527;  */

void FUN_1041864b4(long param_1,long param_2,code *param_3,undefined8 param_4,long *param_5)

{
  code *pcVar1;
  long unaff_x21;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = param_2;
  if (param_1 == 0) {
    lStack_40 = 0;
  }
  else {
    lStack_40 = param_1;
    if (param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104186528);
      (*pcVar1)();
    }
    if (param_2 != 0) {
      _bzero(param_1,param_2 << 3);
    }
  }
  (*param_3)(&lStack_40);
  if (unaff_x21 != 0) {
    *param_5 = unaff_x21;
  }
  return;
}



/* Entry: 104186528; end: 104186563;  */

bool FUN_104186528(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x20;
  
  uVar1 = param_1 >> 6;
  if ((long)uVar1 < unaff_x20[1]) {
    uVar3 = *(ulong *)(*unaff_x20 + uVar1 * 8);
    uVar2 = 1L << (param_1 & 0x3f);
    *(ulong *)(*unaff_x20 + uVar1 * 8) = uVar3 & (uVar2 ^ 0xffffffffffffffff);
    return (uVar3 & uVar2) != 0;
  }
  return false;
}



/* Entry: 104186564; end: 1041865c3;  */

void FUN_104186564(ulong param_1)

{
  ulong uVar1;
  long *unaff_x20;
  
  if (param_1 != 0) {
    uVar1 = param_1 >> 6;
    if (0x3f < param_1) {
      _memset(*unaff_x20,0xff,uVar1 << 3);
    }
    if ((param_1 & 0x3f) != 0) {
      *(ulong *)(*unaff_x20 + uVar1 * 8) =
           *(ulong *)(*unaff_x20 + uVar1 * 8) | -1L << (param_1 & 0x3f) ^ 0xffffffffffffffffU;
    }
  }
  return;
}



/* Entry: 1041865c4; end: 104186663;  */

undefined1  [16] FUN_1041865c4(void)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar2 = unaff_x20[3];
  if (uVar2 == 0) {
    lVar3 = unaff_x20[2];
    while( true ) {
      uVar2 = lVar3 + 1;
      if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10418665c);
        (*pcVar1)();
      }
      if (unaff_x20[1] <= (long)uVar2) break;
      unaff_x20[2] = uVar2;
      uVar4 = *(ulong *)(*unaff_x20 + uVar2 * 8);
      unaff_x20[3] = uVar4;
      lVar3 = lVar3 + 1;
      if (uVar4 != 0) {
        unaff_x20[3] = uVar4 - 1 & uVar4;
        if ((uVar2 & 0x3ffffffffffffff) >> 0x39 == 0) {
          uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
          uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
          uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          auVar6._0_8_ = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) | uVar2 * 0x40;
          auVar6._8_8_ = 0;
          return auVar6;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104186664);
        (*pcVar1)();
      }
    }
    return ZEXT816(1) << 0x40;
  }
  unaff_x20[3] = uVar2 - 1 & uVar2;
  if ((unaff_x20[2] & 0x3ffffffffffffffU) >> 0x39 == 0) {
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    auVar5._0_8_ = unaff_x20[2] << 6 | LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    auVar5._8_8_ = 0;
    return auVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104186660);
  (*pcVar1)();
}



/* Entry: 104186664; end: 10418668b;  */

void FUN_104186664(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_1041865c4();
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 10418668c; end: 1041866bf;  */

void FUN_10418668c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  lVar1 = unaff_x20[1];
  if (lVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)*unaff_x20;
  }
  *param_1 = (undefined8 *)*unaff_x20;
  param_1[1] = lVar1;
  param_1[2] = 0;
  param_1[3] = uVar2;
  return;
}



/* Entry: 1041866c0; end: 104186773;  */

undefined * FUN_1041866c0(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined auStack_50 [32];
  
  puVar4 = auStack_50;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    puVar7 = (undefined *)0x0;
    lVar5 = param_2 << 3;
    puVar6 = param_1;
    do {
      uVar8 = *puVar6;
      uVar9 = (ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)((ulong)uVar8 >> 8)) +
                            POPCOUNT((char)((ulong)uVar8 >> 0x10)) +
                            POPCOUNT((char)((ulong)uVar8 >> 0x18)) +
                            POPCOUNT((char)((ulong)uVar8 >> 0x20)) +
                            POPCOUNT((char)((ulong)uVar8 >> 0x28)) +
                            POPCOUNT((char)((ulong)uVar8 >> 0x30)) +
                           POPCOUNT((char)((ulong)uVar8 >> 0x38)));
      bVar2 = SCARRY8((long)puVar7,uVar9);
      puVar7 = puVar7 + uVar9;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104186770);
        (*pcVar1)();
      }
      lVar5 = lVar5 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
    if (puVar7 != (undefined *)0x0) {
      puVar3 = puVar7;
      func_0x000104187194(puVar7,0);
      func_0x0001041863b4(auStack_50,puVar3 + 0x20,puVar7,param_1,param_2);
      if (puVar4 != puVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104186774);
        (*pcVar1)();
      }
    }
  }
  return puVar3;
}



/* Entry: 104186774; end: 10418677b;  */

long FUN_104186774(long *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *unaff_x20;
  
  puVar2 = (ulong *)*unaff_x20;
  lVar3 = unaff_x20[1];
  if (lVar3 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar2;
  }
  if (param_2 == (ulong *)0x0) {
    uVar7 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10418649c);
      (*pcVar4)();
    }
    lVar8 = 0;
    uVar6 = 0;
    do {
      uVar9 = uVar6;
      if (uVar5 == 0) {
        do {
          uVar7 = uVar9 + 1;
          if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104186494);
            (*pcVar4)();
          }
          if (lVar3 <= (long)uVar7) {
            uVar5 = 0;
            lVar1 = lVar3;
            if (lVar3 <= (long)(uVar6 + 1)) {
              lVar1 = uVar6 + 1;
            }
            uVar7 = lVar1 - 1;
            param_3 = lVar8;
            goto LAB_104186480;
          }
          uVar10 = puVar2[uVar7];
          uVar9 = uVar9 + 1;
        } while (uVar10 == 0);
        if ((uVar7 & 0x3ffffffffffffff) >> 0x39 != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1041864a0);
          (*pcVar4)();
        }
        uVar5 = uVar10 - 1 & uVar10;
        uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar7 * 0x40;
      }
      else {
        if ((uVar6 & 0x3ffffffffffffff) >> 0x39 != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x104186498);
          (*pcVar4)();
        }
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 - 1 & uVar5;
        uVar9 = uVar6 << 6 | LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20);
        uVar7 = uVar6;
      }
      lVar8 = lVar8 + 1;
      *param_2 = uVar9;
      param_2 = param_2 + 1;
      uVar6 = uVar7;
    } while (lVar8 != param_3);
  }
LAB_104186480:
  *param_1 = (long)puVar2;
  param_1[1] = lVar3;
  param_1[2] = uVar7;
  param_1[3] = uVar5;
  return param_3;
}



/* Entry: 10418677c; end: 10418679b;  */

void FUN_10418677c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSTsE32withContiguousStorageIfAvailableyqd__Sgqd__SRy7ElementQzGKXEKlF
            (param_1,param_2,param_4,param_3);
  return;
}



/* Entry: 10418679c; end: 104186a8f;  */

long FUN_10418679c(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = 0;
  uVar3 = param_2;
  do {
    uVar4 = *param_1;
    if (uVar4 != 0) {
      if (-1 < -lVar2) {
        uVar3 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        return LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) - lVar2;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1041867f0);
      (*pcVar1)();
    }
    lVar2 = lVar2 + -0x40;
    uVar3 = uVar3 - 1;
    param_1 = param_1 + 1;
  } while (uVar3 != 0);
  if ((param_2 & 0x3ffffffffffffff) >> 0x39 == 0) {
    return param_2 << 6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041867ec);
  (*pcVar1)();
}



/* Entry: 104186a90; end: 104186ecb;  */

long * FUN_104186a90(long *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lStack_48;
  
  plVar5 = (long *)(param_4 * 0x40);
  if ((param_4 & 0x3ffffffffffffff) >> 0x39 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104186c54);
    (*pcVar1)();
  }
  if (plVar5 < param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104186c58);
    (*pcVar1)();
  }
  if (param_1 != plVar5) {
    if ((long)param_4 <= (long)((ulong)param_1 >> 6)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104186c5c);
      (*pcVar1)();
    }
    if ((*(ulong *)(param_3 + ((ulong)param_1 >> 6) * 8) >> ((ulong)param_1 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104186c60);
      (*pcVar1)();
    }
  }
  if (param_2 == 0) {
    return param_1;
  }
  lStack_48 = -param_2;
  if (-1 < param_2) {
    lStack_48 = param_2;
  }
  if (0 < param_2) {
    uVar9 = (ulong)param_1 >> 6;
    if ((long)param_4 <= (long)uVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104186c64);
      (*pcVar1)();
    }
    plVar2 = &lStack_48;
    uVar3 = (uint)*(undefined8 *)(param_3 + uVar9 * 8) & (uint)(-1L << ((ulong)param_1 & 0x3f));
    func_0x000104185ee4(plVar2);
    if ((uVar3 & 0xff) != 1) {
      return (long *)((long)plVar2 + ((ulong)param_1 & 0xffffffffffffffc0));
    }
    lVar8 = ~uVar9 + param_4;
    lVar7 = uVar9 * -0x40;
    puVar4 = (undefined8 *)(param_3 + uVar9 * 8);
    do {
      puVar4 = puVar4 + 1;
      if (lVar8 == 0) {
        if (lStack_48 == 0) {
          return plVar5;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104186c2c);
        (*pcVar1)();
      }
      uVar3 = (uint)*puVar4;
      plVar2 = &lStack_48;
      func_0x000104185ee4(plVar2);
      lVar8 = lVar8 + -1;
      lVar7 = lVar7 + -0x40;
    } while ((uVar3 & 0xff) == 1);
    if (-1 < -lVar7) {
      return (long *)((long)plVar2 - lVar7);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104186c68);
    (*pcVar1)();
  }
  lStack_48 = lStack_48 + -1;
  uVar9 = (ulong)param_1 >> 6;
  if ((param_1 < (long *)0x40) || (((ulong)param_1 & 0x3f) != 0)) {
    uVar6 = uVar9;
    if ((long)param_4 <= (long)uVar9) goto LAB_104186be8;
    uVar3 = ~(uint)(-1L << ((ulong)param_1 & 0x3f));
  }
  else {
    uVar6 = uVar9 - 1;
    if ((long)param_4 < (long)uVar9) goto LAB_104186be8;
    uVar3 = 0xffffffff;
  }
  plVar5 = &lStack_48;
  uVar3 = (uint)*(undefined8 *)(param_3 + uVar6 * 8) & uVar3;
  func_0x000104185f3c(plVar5);
  if ((uVar3 & 0xff) != 1) {
    return plVar5 + uVar6 * 8;
  }
LAB_104186be8:
  lVar8 = uVar6 << 6;
  do {
    if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104186c50);
      (*pcVar1)();
    }
    uVar3 = (uint)*(undefined8 *)(param_3 + -8 + uVar6 * 8);
    plVar5 = &lStack_48;
    func_0x000104185f3c(plVar5);
    lVar8 = lVar8 + -0x40;
    uVar6 = uVar6 - 1;
  } while ((uVar3 & 0xff) == 1);
  return (long *)((long)plVar5 + lVar8);
}



/* Entry: 104186ecc; end: 104186f4b;  */

void FUN_104186ecc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  func_0x000104186870(uVar1,*unaff_x20,unaff_x20[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 104186f4c; end: 104186f73;  */

void FUN_104186f4c(long *param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  if ((*(ulong *)(unaff_x20 + 8) & 0x3ffffffffffffff) >> 0x39 == 0) {
    *param_1 = *(ulong *)(unaff_x20 + 8) << 6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104186f64);
  (*pcVar1)();
}



/* Entry: 104186f74; end: 104186feb;  */

void FUN_104186f74(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong *unaff_x20;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar6 = uVar2;
  FUN_10418679c(uVar2,uVar4);
  if ((uVar4 & 0x3ffffffffffffff) >> 0x39 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x104186fe0);
    (*pcVar5)();
  }
  if (uVar4 << 6 < uVar6) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x104186fe4);
    (*pcVar5)();
  }
  if (uVar1 < uVar6) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x104186fe8);
    (*pcVar5)();
  }
  if (uVar3 <= uVar4 << 6) {
    *param_1 = uVar1;
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    param_1[3] = uVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x104186fec);
  (*pcVar5)();
}



/* Entry: 104186fec; end: 104187033;  */

void FUN_104186fec(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = uVar1;
  FUN_10418679c(uVar1,uVar2);
  if ((uVar2 & 0x3ffffffffffffff) >> 0x39 == 0) {
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    param_1[3] = uVar2 << 6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104187034);
  (*pcVar3)();
}



/* Entry: 104187034; end: 1041870b3;  */

bool FUN_104187034(void)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = unaff_x20[1];
  if (lVar3 == 0) {
    return true;
  }
  plVar2 = (long *)*unaff_x20;
  do {
    lVar3 = lVar3 + -1;
    bVar1 = *plVar2 == 0;
    if (*plVar2 != 0) {
      return bVar1;
    }
    plVar2 = plVar2 + 1;
  } while (lVar3 != 0);
  return bVar1;
}



/* Entry: 1041870b4; end: 1041870e7;  */

void FUN_1041870b4(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  func_0x000104186c68(uVar1,param_3,*param_4,*unaff_x20,unaff_x20[1]);
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  return;
}



/* Entry: 1041870e8; end: 10418713b;  */

void FUN_1041870e8(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  
  if (*param_2 <= *param_1 && *param_1 < param_2[1]) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104187104);
  (*pcVar1)();
}



/* Entry: 10418713c; end: 104187213;  */

void FUN_10418713c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  func_0x0001041867f0(uVar1,*unaff_x20,unaff_x20[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 104187214; end: 10418741f;  */

void FUN_104187214(ulong param_1,code *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long extraout_x8;
  undefined1 *unaff_x21;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  ulong uStack_60;
  undefined1 *in_stack_ffffffffffffffa8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1041873f0);
    (*pcVar2)();
  }
  if (param_1 >> 0x3c != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1041873f4);
    (*pcVar2)();
  }
  uVar7 = param_1 * 8;
  if (0x400 < (long)uVar7) {
    iVar3 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    if ((iVar3 == 0) ||
       (uVar5 = uVar7, _swift_stdlib_isStackAllocationSafe(uVar7,8), (uVar5 & 1) == 0)) {
      _swift_slowAlloc(uVar7,0xffffffffffffffff);
      FUN_1041864b4(&stack0xffffffffffffffa8);
      if (unaff_x21 != (undefined1 *)0x0) {
        in_stack_ffffffffffffffa8 = puStack_68;
      }
      _swift_slowDealloc(uVar7,0xffffffffffffffff,0xffffffffffffffff);
      puVar1 = puStack_68;
      puStack_68 = in_stack_ffffffffffffffa8;
      goto joined_r0x000104187414;
    }
  }
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)(uVar7 + 0xf & 0xfffffffffffffff0);
  puStack_68 = auStack_70 + -extraout_x8;
  uStack_60 = param_1;
  if (param_1 != 0) {
    _bzero(puStack_68);
  }
  (*param_2)(&puStack_68);
  puVar1 = puStack_68;
  puStack_68 = unaff_x21;
joined_r0x000104187414:
  if (unaff_x21 != (undefined1 *)0x0) {
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    puVar1 = puStack_68;
    if (iVar3 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      _swift_willThrowTypedImpl(&puStack_68,uVar4,PTR___ss5ErrorWS_11034ee10);
      puVar1 = puStack_68;
    }
  }
  puStack_68 = puVar1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    if (puRam0000000113066228 == (undefined *)0x0) {
      puVar6 = &UNK_10dcdb8f0;
      _swift_getWitnessTable(&UNK_10dcdb8f0,&UNK_11074bc78);
      puRam0000000113066228 = puVar6;
      return;
    }
    return;
  }
  return;
}



/* Entry: 104187420; end: 104187423;  */

void FUN_104187420(void)

{
  undefined *puVar1;
  
  if (puRam0000000113066228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdb8f0;
  _swift_getWitnessTable(&UNK_10dcdb8f0,&UNK_11074bc78);
  puRam0000000113066228 = puVar1;
  return;
}



/* Entry: 104187424; end: 104187463;  */

void FUN_104187424(void)

{
  undefined *puVar1;
  
  if (puRam0000000113066228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdb8f0;
  _swift_getWitnessTable(&UNK_10dcdb8f0,&UNK_11074bc78);
  puRam0000000113066228 = puVar1;
  return;
}



/* Entry: 104187464; end: 104187467;  */

void FUN_104187464(void)

{
  undefined *puVar1;
  
  if (puRam0000000113066230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdb9f8;
  _swift_getWitnessTable(&UNK_10dcdb9f8,&UNK_11074bbf8);
  puRam0000000113066230 = puVar1;
  return;
}



/* Entry: 104187468; end: 10418754f;  */

void FUN_104187468(void)

{
  undefined *puVar1;
  
  if (puRam0000000113066230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdb9f8;
  _swift_getWitnessTable(&UNK_10dcdb9f8,&UNK_11074bbf8);
  puRam0000000113066230 = puVar1;
  return;
}



/* Entry: 104187550; end: 1041875b3;  */

void FUN_104187550(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    uVar1 = param_2;
    func_0x0001041874dc();
    uStack_38 = uVar1;
    _swift_getWitnessTable(param_4,param_2,&uStack_38);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 1041875b4; end: 1041875b7;  */

void FUN_1041875b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113066260 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdb920;
  _swift_getWitnessTable(&UNK_10dcdb920,&UNK_11074bbf8);
  puRam0000000113066260 = puVar1;
  return;
}



/* Entry: 1041875b8; end: 1041875f7;  */

void FUN_1041875b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113066260 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdb920;
  _swift_getWitnessTable(&UNK_10dcdb920,&UNK_11074bbf8);
  puRam0000000113066260 = puVar1;
  return;
}



/* Entry: 1041875f8; end: 1041875fb;  */

void FUN_1041875f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113066268 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdb6f8;
  _swift_getWitnessTable(&UNK_10dcdb6f8,&UNK_11074ba28);
  puRam0000000113066268 = puVar1;
  return;
}



/* Entry: 1041875fc; end: 1041876a3;  */

void FUN_1041875fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113066268 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdb6f8;
  _swift_getWitnessTable(&UNK_10dcdb6f8,&UNK_11074ba28);
  puRam0000000113066268 = puVar1;
  return;
}



/* Entry: 1041876a4; end: 1041876e7;  */

void FUN_1041876a4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 1041876e8; end: 10418773f;  */

int FUN_1041876e8(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 104187740; end: 10418776b;  */

long FUN_104187740(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10418776c; end: 1041877ef;  */

int FUN_10418776c(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1041877f0; end: 104187f2b;  */

undefined1  [16] FUN_1041877f0(undefined8 param_1,long param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR___sSTTL_11034db40;
  uVar9 = *(undefined8 *)(param_3 + 8);
  lVar3 = 0;
  uStack_80 = param_1;
  _swift_getAssociatedTypeWitness
            (0,uVar9,param_2,PTR___sSTTL_11034db40,PTR___s7ElementSTTl_11034d628);
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar4 = 0;
  __sSqMa(0,lVar3);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar6 - extraout_x8_00;
  lVar4 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar12 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,uVar9,param_2,puVar2,PTR___s8IteratorSTTl_11034d648);
  lStack_88 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_88 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = lVar12 - extraout_x8_02;
  uStack_70 = 0x5b;
  uStack_68 = 0xe100000000000000;
  (**(code **)(lVar4 + 0x10))(lVar12,uStack_80,param_2);
  __sST12makeIterator0B0QzyFTj(lVar8,param_2,uVar9);
  _swift_getAssociatedConformanceWitness
            (uVar9,param_2,lVar5,PTR___sSTTL_11034db40,PTR___sST8IteratorST_StTn_11034db38);
  __sSt4next7ElementQzSgyFTj(lVar7,lVar5,uVar9);
  pcVar13 = *(code **)(lVar11 + 0x30);
  lVar4 = lVar7;
  (*pcVar13)(lVar7,1,lVar3);
  if ((int)lVar4 != 1) {
    pcVar10 = *(code **)(lVar11 + 0x20);
    (*pcVar10)(puVar6,lVar7,lVar3);
    uStack_78 = 2;
    uStack_80 = 1;
    while( true ) {
      lVar4 = 0x112d38dc0;
      func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x18) = uStack_78;
      *(undefined8 *)(lVar4 + 0x10) = uStack_80;
      *(long *)(lVar4 + 0x38) = lVar3;
      func_0x0001000a9d90(lVar4 + 0x20);
      (**(code **)(lVar11 + 0x10))();
      __ss10debugPrint_9separator10terminator2toyypd_S2Sxzts16TextOutputStreamRzlF
                (lVar4,0x20,0xe100000000000000,0,0xe000000000000000,&uStack_70,PTR___sSSN_11034da80,
                 PTR___sSSs16TextOutputStreamsWP_11034dac8);
      _swift_release(lVar4);
      (**(code **)(lVar11 + 8))(puVar6,lVar3);
      __sSt4next7ElementQzSgyFTj(lVar7,lVar5,uVar9);
      lVar4 = lVar7;
      (*pcVar13)(lVar7,1,lVar3);
      if ((int)lVar4 == 1) break;
      (*pcVar10)(puVar6,lVar7,lVar3);
      __sSS6appendyySSF(0x202c,0xe200000000000000);
    }
  }
  (**(code **)(lStack_88 + 8))(lVar8,lVar5);
  __sSS6appendyySSF(0x5d,0xe100000000000000);
  auVar1._8_8_ = uStack_68;
  auVar1._0_8_ = uStack_70;
  return auVar1;
}



/* Entry: 104187f2c; end: 104187f37;  */

bool FUN_104187f2c(undefined8 param_1,long param_2)

{
  return param_2 == 0;
}



/* Entry: 104187f38; end: 104188017;  */

long FUN_104187f38(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}


