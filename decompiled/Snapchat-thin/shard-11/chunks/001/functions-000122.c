/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10825aff4; end: 10825b0cb;  */

void FUN_10825aff4(ulong *param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  func_0x00010825c03c();
  iVar1 = (int)*param_3;
  func_0x00010825c044();
  if ((uVar2 & 1) == 0) {
    if (iVar1 != 0) {
      func_0x00010825c11c();
      iVar1 = (int)*param_2;
      func_0x00010825c03c();
      if (iVar1 != 0) {
        uVar2 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar2;
      }
    }
  }
  else {
    uVar2 = *param_1;
    if (iVar1 == 0) {
      *param_1 = *param_2;
      *param_2 = uVar2;
      iVar1 = (int)*param_3;
      FUN_10825afd4();
      if (iVar1 != 0) {
        func_0x00010825c11c();
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar2;
    }
  }
  return;
}



/* Entry: 10825b0cc; end: 10825b13f;  */

void FUN_10825b0cc(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *in_x4;
  undefined8 *unaff_x22;
  
  func_0x00010825c130();
  func_0x00010825b08c();
  uVar2 = *in_x4;
  FUN_10825afd4(uVar2,*unaff_x22);
  if ((int)uVar2 != 0) {
    uVar2 = *unaff_x22;
    *unaff_x22 = *in_x4;
    *in_x4 = uVar2;
    iVar1 = (int)*unaff_x22;
    func_0x00010825c03c();
    if (((iVar1 != 0) && (func_0x00010825bfb8(), iVar1 != 0)) && (func_0x00010825bf9c(), iVar1 != 0)
       ) {
      func_0x00010825c108();
    }
  }
  return;
}



/* Entry: 10825b140; end: 10825b2af;  */

bool FUN_10825b140(ulong *param_1,ulong *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    iVar8 = (int)param_2[-1];
    func_0x00010825c044();
    if (iVar8 != 0) {
      uVar6 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar6;
    }
    break;
  case 3:
    func_0x00010825aff4(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    func_0x00010825b08c(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_10825b0cc(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    func_0x00010825c0e0(param_1,param_1 + 1);
    lVar7 = 0;
    iVar8 = 0;
    for (puVar4 = param_1 + 3; puVar4 != param_2; puVar4 = puVar4 + 1) {
      iVar2 = (int)*puVar4;
      func_0x00010825c03c();
      if (iVar2 != 0) {
        uVar6 = *puVar4;
        lVar1 = lVar7;
        do {
          lVar9 = lVar1;
          *(undefined8 *)((long)param_1 + lVar9 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x10);
          puVar5 = param_1;
          if (lVar9 == -0x10) goto LAB_10825b250;
          uVar3 = uVar6;
          FUN_10825afd4(uVar6,*(undefined8 *)((long)param_1 + lVar9 + 8));
          lVar1 = lVar9 + -8;
        } while ((uVar3 & 1) != 0);
        puVar5 = (ulong *)((long)param_1 + lVar9 + 0x10);
LAB_10825b250:
        *puVar5 = uVar6;
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return puVar4 + 1 == param_2;
        }
      }
      lVar7 = lVar7 + 8;
    }
  }
  return true;
}



/* Entry: 10825b2b0; end: 10825b2d7;  */

void FUN_10825b2b0(long param_1)

{
  func_0x00010825c094();
  if (param_1 != 0) {
    _CFRelease();
  }
  return;
}



/* Entry: 10825b2d8; end: 10825b2ff;  */

void FUN_10825b2d8(long param_1)

{
  func_0x00010825c094();
  if (param_1 != 0) {
    _CFRelease();
  }
  return;
}



/* Entry: 10825b300; end: 10825b31f;  */

void FUN_10825b300(void)

{
  func_0x00010825c060();
  FUN_10825b320();
  return;
}



/* Entry: 10825b320; end: 10825b33f;  */

void FUN_10825b320(long param_1)

{
  func_0x00010825bf70();
  if (param_1 != 0) {
    _CFRelease();
  }
  return;
}



/* Entry: 10825b340; end: 10825b37b;  */

undefined8 * FUN_10825b340(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a32640;
  FUN_10825b2d8(param_1 + 4);
  FUN_10825b300(param_1 + 2);
  return param_1;
}



/* Entry: 10825b37c; end: 10825b383;  */

void FUN_10825b37c(undefined8 param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFArrayGetValueAtIndex_11034a4d0)(param_1,(long)param_2);
  return;
}



/* Entry: 10825b384; end: 10825b4c3;  */

void FUN_10825b384(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = param_1;
  func_0x00010825c0a4();
  _CFDictionaryCreateMutable();
  puStack_40 = puVar2;
  func_0x00010825c0b4();
  _CFDictionaryAddValue();
  _CTFontDescriptorCreateWithAttributes();
  puVar3 = (undefined8 *)0x20;
  puStack_48 = puVar2;
  __Znwm();
  *(undefined4 *)(puVar3 + 1) = 1;
  *puVar3 = &PTR_SUB_110a326d8;
  FUN_10825b4c4(&uStack_38);
  _CTFontDescriptorCreateMatchingFontDescriptors(puVar2,uStack_38);
  puVar3[2] = puVar2;
  FUN_10825b730(&uStack_38);
  *(undefined4 *)(puVar3 + 3) = 0;
  lVar4 = puVar3[2];
  if (lVar4 == 0) {
    _CFArrayCreate(0,0,0,0);
    FUN_10825b320(puVar3 + 2,lVar4);
    lVar4 = puVar3[2];
  }
  uVar1 = (undefined4)lVar4;
  _CFArrayGetCount();
  *(undefined4 *)(puVar3 + 3) = uVar1;
  *param_1 = puVar3;
  FUN_10825b84c(&puStack_48);
  FUN_10825b88c(&puStack_40);
  return;
}



/* Entry: 10825b4c4; end: 10825b563;  */

undefined8 * FUN_10825b4c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010825c0a4();
  _CFSetCreate();
  *param_1 = puVar1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return puVar1;
  }
  ___stack_chk_fail();
  *puVar1 = &PTR_SUB_110a326d8;
  FUN_10825b300(puVar1 + 2);
  return puVar1;
}



/* Entry: 10825b564; end: 10825b577;  */

void FUN_10825b564(void)

{
  func_0x00010825b538();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10825b578; end: 10825b57f;  */

undefined4 FUN_10825b578(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 10825b580; end: 10825b607;  */

void FUN_10825b580(long param_1,undefined8 param_2,undefined4 *param_3,long param_4)

{
  long lVar1;
  
  func_0x00010825c0f4();
  if (param_3 != (undefined4 *)0x0) {
    lVar1 = param_1;
    FUN_10825db28(param_1,0);
    *param_3 = (int)lVar1;
  }
  if (param_4 != 0) {
    _CTFontDescriptorCopyAttribute(param_1,*(undefined8 *)PTR__kCTFontStyleNameAttribute_11034a0d0);
    if (param_1 == 0) {
      func_0x00010825bfd4();
      FUN_1083a357c(param_4);
    }
    else {
      FUN_10825d65c();
      func_0x00010825bfd4();
    }
  }
  return;
}



/* Entry: 10825b608; end: 10825b62f;  */

void FUN_10825b608(undefined8 *param_1,long param_2)

{
  func_0x00010825c0f4();
  _CTFontCreateWithFontDescriptor(0,param_2,0);
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x00010825bf58();
    func_0x00010825c028();
    if (param_2 != 0) {
      func_0x00010825bf4c();
    }
    func_0x00010825bfdc();
  }
  func_0x00010825c020();
  return;
}



/* Entry: 10825b630; end: 10825b72f;  */

void FUN_10825b630(undefined8 *param_1,long param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 == 0) {
    *param_1 = 0;
    return;
  }
  iVar10 = 0x7fffffff;
  lVar8 = 0;
  for (lVar9 = 0; lVar6 = lVar8, lVar9 < iVar1; lVar9 = lVar9 + 1) {
    lVar6 = *(long *)(param_2 + 0x10);
    _CFArrayGetValueAtIndex(lVar6,lVar9);
    lVar7 = lVar6;
    FUN_10825db28();
    uVar2 = *param_3;
    uVar5 = (uint)lVar7;
    iVar4 = (uVar2 & 0xffff) - (uVar5 & 0xffff);
    iVar3 = ((uVar2 >> 0x10 & 0xff) - (uVar5 >> 0x10 & 0xff)) * 100;
    iVar1 = 0;
    if ((uVar2 ^ uVar5) >> 0x18 != 0) {
      iVar1 = 810000;
    }
    iVar1 = iVar1 + iVar4 * iVar4 + iVar3 * iVar3;
    if (iVar1 == 0) break;
    if (iVar10 <= iVar1) {
      lVar6 = lVar8;
      iVar1 = iVar10;
    }
    iVar10 = iVar1;
    iVar1 = *(int *)(param_2 + 0x18);
    lVar8 = lVar6;
  }
  _CTFontCreateWithFontDescriptor(0,lVar6,0);
  if (lVar6 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x00010825bf58();
    func_0x00010825c028();
    if (lVar6 != 0) {
      func_0x00010825bf4c();
    }
    func_0x00010825bfdc();
  }
  func_0x00010825c020();
  return;
}



/* Entry: 10825b730; end: 10825b757;  */

void FUN_10825b730(long param_1)

{
  func_0x00010825c094();
  if (param_1 != 0) {
    _CFRelease();
  }
  return;
}



/* Entry: 10825b758; end: 10825b777;  */

void FUN_10825b758(void)

{
  func_0x00010825c060();
  FUN_10825b778();
  return;
}



/* Entry: 10825b778; end: 10825b797;  */

void FUN_10825b778(long param_1)

{
  func_0x00010825bf70();
  if (param_1 != 0) {
    _CFRelease();
  }
  return;
}



/* Entry: 10825b798; end: 10825b80b;  */

void FUN_10825b798(undefined8 *param_1,long param_2)

{
  _CTFontCreateWithFontDescriptor(0,param_2,0);
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x00010825bf58();
    func_0x00010825c028();
    if (param_2 != 0) {
      func_0x00010825bf4c();
    }
    func_0x00010825bfdc();
  }
  func_0x00010825c020();
  return;
}



/* Entry: 10825b80c; end: 10825b82b;  */

void FUN_10825b80c(void)

{
  func_0x00010825c060();
  FUN_10825b82c();
  return;
}



/* Entry: 10825b82c; end: 10825b84b;  */

void FUN_10825b82c(long param_1)

{
  func_0x00010825bf70();
  if (param_1 != 0) {
    _CFRelease();
  }
  return;
}



/* Entry: 10825b84c; end: 10825b86b;  */

void FUN_10825b84c(void)

{
  func_0x00010825c060();
  FUN_10825b86c();
  return;
}



/* Entry: 10825b86c; end: 10825b88b;  */

void FUN_10825b86c(long param_1)

{
  func_0x00010825bf70();
  if (param_1 != 0) {
    _CFRelease();
  }
  return;
}



/* Entry: 10825b88c; end: 10825b8ab;  */

void FUN_10825b88c(void)

{
  func_0x00010825c060();
  FUN_10825b8ac();
  return;
}



/* Entry: 10825b8ac; end: 10825b8cb;  */

void FUN_10825b8ac(long param_1)

{
  func_0x00010825bf70();
  if (param_1 != 0) {
    _CFRelease();
  }
  return;
}



/* Entry: 10825b8cc; end: 10825b8fb;  */

void FUN_10825b8cc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  _CFStringCreateWithCString(0,param_2,0x8000100);
  *param_1 = uVar1;
  return;
}



/* Entry: 10825b8fc; end: 10825bb07;  */

void FUN_10825b8fc(undefined8 param_1,undefined8 *param_2,long param_3,ushort *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar1 = param_2;
  func_0x00010825c04c();
  puStack_48 = puVar1;
  func_0x00010825c04c();
  puStack_50 = puVar1;
  if ((puStack_48 == (undefined8 *)0x0) || (puVar1 == (undefined8 *)0x0)) {
    *param_2 = 0;
  }
  else {
    uVar2 = (ulong)*param_4;
    FUN_10825d9ec();
    uStack_58 = param_1;
    func_0x00010825c008();
    uStack_60 = uVar2;
    if (uVar2 != 0) {
      _CFDictionaryAddValue(puStack_50,*(undefined8 *)PTR__kCTFontWeightTrait_11034a118,uVar2);
    }
    uVar2 = (ulong)(byte)param_4[1];
    func_0x00010825db18();
    uStack_68 = param_1;
    func_0x00010825c008();
    puVar1 = (undefined8 *)0x0;
    uStack_70 = uVar2;
    if (uVar2 != 0) {
      puVar1 = puStack_50;
      _CFDictionaryAddValue(puStack_50,*(undefined8 *)PTR__kCTFontWidthTrait_11034a120,uVar2);
    }
    uStack_78 = 0;
    if (*(char *)((long)param_4 + 3) != '\0') {
      uStack_78 = 0x3fb1eb851eb851ec;
    }
    func_0x00010825c008();
    puStack_80 = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      _CFDictionaryAddValue(puStack_50,*(undefined8 *)PTR__kCTFontSlantTrait_11034a0c8,puVar1);
    }
    _CFDictionaryAddValue
              (puStack_48,*(undefined8 *)PTR__kCTFontTraitsAttribute_11034a0e0,puStack_50);
    if (param_3 != 0) {
      FUN_10825b8cc(&lStack_88,param_3);
      if (lStack_88 != 0) {
        func_0x00010825c0b4(puStack_48);
        _CFDictionaryAddValue();
      }
      func_0x00010825bfd4();
    }
    puVar1 = puStack_48;
    _CTFontDescriptorCreateWithAttributes();
    *param_2 = puVar1;
    FUN_10825bb08(&puStack_80);
    FUN_10825bb08(&uStack_70);
    FUN_10825bb08(&uStack_60);
  }
  FUN_10825b88c(&puStack_50);
  FUN_10825b88c(&puStack_48);
  return;
}



/* Entry: 10825bb08; end: 10825bb27;  */

void FUN_10825bb08(void)

{
  func_0x00010825c060();
  FUN_10825bb28();
  return;
}



/* Entry: 10825bb28; end: 10825bb47;  */

void FUN_10825bb28(long param_1)

{
  func_0x00010825bf70();
  if (param_1 != 0) {
    _CFRelease();
  }
  return;
}



/* Entry: 10825bb48; end: 10825bc4f;  */

void FUN_10825bb48(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  undefined8 **ppuStack_30;
  undefined8 **ppuStack_28;
  
  FUN_10825b8fc(&ppuStack_40);
  if ((undefined8 ***)ppuStack_40 == (undefined8 ***)0x0) {
    *param_1 = 0;
  }
  else {
    func_0x00010825c0e8();
    if ((undefined8 ***)ppuStack_40 == (undefined8 ***)0x0) {
      *param_1 = 0;
      ppuStack_28 = (undefined8 **)0x0;
    }
    else {
      ppuStack_28 = ppuStack_40;
      _CTFontGetSymbolicTraits();
      uVar2 = (uint)ppuStack_40 | (uint)((*param_3 & 0xff000000) != 0);
      uVar1 = uVar2 | 2;
      if ((*param_3 & 0xfffc) < 700) {
        uVar1 = uVar2;
      }
      pppuVar4 = (undefined8 ***)ppuStack_40;
      if (uVar1 != (uint)ppuStack_40) {
        pppuVar3 = (undefined8 ***)ppuStack_28;
        _CTFontCreateCopyWithSymbolicTraits(0,ppuStack_28,0,uVar1,uVar1);
        pppuVar4 = (undefined8 ***)0x0;
        ppuStack_30 = pppuVar3;
        if (pppuVar3 != (undefined8 ***)0x0) {
          ppuStack_30 = (undefined8 ***)0x0;
          pppuVar4 = &ppuStack_28;
          FUN_10825b82c();
        }
        func_0x00010825bfdc();
      }
      ppuStack_30 = ppuStack_28;
      ppuStack_28 = (undefined8 **)0x0;
      uStack_38 = 0;
      func_0x00010825bf58();
      func_0x00010825c028();
      if (pppuVar4 != (undefined8 ***)0x0) {
        func_0x00010825bf4c();
      }
      func_0x00010825bfdc();
    }
    func_0x00010825c020();
  }
  FUN_10825b84c(&ppuStack_40);
  return;
}



/* Entry: 10825bc50; end: 10825beff;  */

undefined8 FUN_10825bc50(char *param_1,char *param_2,char param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  
  iVar1 = 2;
  if (param_5 != 4) {
    iVar1 = param_5;
  }
  iVar2 = 0;
  if (param_5 != 3) {
    iVar2 = iVar1;
  }
  switch(param_4) {
  case 1:
  case 2:
    if (iVar2 - 1U < 2) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_10825beb0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else if (iVar2 == 5) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_10825beb0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_10825beb0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    break;
  case 3:
    if (iVar2 - 1U < 2) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_10825beb0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else if (iVar2 == 5) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_10825beb0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_10825beb0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    break;
  case 4:
    if (iVar2 - 1U < 2) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_10825beb0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else if (iVar2 == 5) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_10825beb0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_10825beb0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    break;
  case 5:
    if (iVar2 - 1U < 2) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_10825beb0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else if (iVar2 == 5) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_10825beb0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_10825beb0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    break;
  default:
    if (iVar2 - 1U < 2) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_10825beb0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      if (iVar2 != 5) {
        cVar3 = *param_2;
        do {
          cVar5 = *param_1;
          if (cVar5 != cVar3) {
            bVar6 = false;
            ClearExclusiveLocal();
            goto LAB_10825beb8;
          }
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar6) {
            *param_1 = param_3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar6 = true;
        goto LAB_10825beb8;
      }
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_10825beb0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  bVar6 = true;
LAB_10825beb8:
  if (!bVar6) {
    *param_2 = cVar5;
    return 0;
  }
  return 1;
LAB_10825beb0:
  bVar6 = false;
  ClearExclusiveLocal();
  goto LAB_10825beb8;
}



/* Entry: 10825bf00; end: 10825bf4b;  */

long * FUN_10825bf00(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10825bf4c; end: 10825c143;  */

void FUN_10825bf4c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010825bf54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10825c144; end: 10825c343;  */

undefined8 * FUN_10825c144(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [4];
  float fStack_44;
  
  puVar1 = param_1;
  FUN_1083955f4();
  puVar1[0x10] = puVar1 + 0x12;
  *puVar1 = &PTR_FUN_110a32798;
  puVar1[0x11] = 0x1000;
  puVar1[0x212] = 0;
  puVar1[0x214] = 0;
  puVar1[0x213] = 0;
  *(undefined4 *)(puVar1 + 0x215) = *(undefined4 *)(puVar1 + 6);
  *(undefined8 *)((long)puVar1 + 0x10ac) = 0;
  *(undefined2 *)((long)puVar1 + 0x10b4) = 0;
  puVar1[0x217] = 0;
  puVar1[0x224] = 0;
  *(byte *)(puVar1 + 0x225) = *(byte *)((long)puVar1 + 0x3e) >> 4 & 1;
  plVar2 = (long *)puVar1[8];
  (**(code **)(*plVar2 + 0xf8))();
  uStack_68 = 0;
  uStack_70 = 0x3f800000;
  uStack_58 = 0;
  uStack_60 = 0x3f800000;
  uStack_50 = 0x103f800000;
  puVar1 = param_1 + 1;
  FUN_108396dac(puVar1,1,auStack_48,&uStack_70,0,0,0);
  param_1[0x218] = (double)(float)uStack_70;
  param_1[0x219] = -(double)uStack_68._4_4_;
  param_1[0x21a] = -(double)uStack_70._4_4_;
  param_1[0x21b] = (double)(float)uStack_60;
  param_1[0x21c] = (double)(float)uStack_68;
  param_1[0x21d] = (double)uStack_60._4_4_;
  if ((int)puVar1 == 0) {
    param_1[0x21f] = param_1[0x219];
    param_1[0x21e] = param_1[0x218];
    param_1[0x221] = param_1[0x21b];
    param_1[0x220] = param_1[0x21a];
    uStack_78 = param_1[0x21d];
    uStack_80 = param_1[0x21c];
  }
  else {
    uStack_c8 = param_1[0x219];
    uStack_d0 = param_1[0x218];
    uStack_b8 = param_1[0x21b];
    uStack_c0 = param_1[0x21a];
    uStack_a8 = param_1[0x21d];
    uStack_b0 = param_1[0x21c];
    _CGAffineTransformInvert(&uStack_a0,&uStack_d0);
    param_1[0x21f] = uStack_98;
    param_1[0x21e] = uStack_a0;
    param_1[0x221] = uStack_88;
    param_1[0x220] = uStack_90;
  }
  param_1[0x223] = uStack_78;
  param_1[0x222] = uStack_80;
  FUN_108260c64(&uStack_a0,(double)fStack_44,plVar2,*(undefined8 *)(param_1[8] + 0x38),
                *(undefined8 *)(param_1[8] + 0x40));
  uVar3 = uStack_a0;
  uStack_a0 = 0;
  FUN_10825b82c(param_1 + 0x217,uVar3);
  FUN_10825b80c(&uStack_a0);
  uVar3 = param_1[0x217];
  _CTFontCopyGraphicsFont(uVar3,0);
  FUN_10825c344(param_1 + 0x224,uVar3);
  return param_1;
}



/* Entry: 10825c344; end: 10825c363;  */

void FUN_10825c344(long param_1)

{
  func_0x00010825d5e0();
  if (param_1 != 0) {
    _CFRelease();
  }
  return;
}



/* Entry: 10825c364; end: 10825c383;  */

void FUN_10825c364(long param_1)

{
  func_0x00010825d5e0();
  if (param_1 != 0) {
    _CFRelease();
  }
  return;
}



/* Entry: 10825c384; end: 10825c3a3;  */

void FUN_10825c384(long param_1)

{
  func_0x00010825d5e0();
  if (param_1 != 0) {
    _CFRelease();
  }
  return;
}



/* Entry: 10825c3a4; end: 10825c42f;  */

ulong * FUN_10825c3a4(ulong *param_1,ulong *param_2,int param_3,long param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar1 = param_2;
  if (param_2 < (ulong *)0x1001) {
    puVar1 = (ulong *)0x1000;
  }
  puVar3 = (ulong *)param_1[1];
  if (param_4 != 0) {
    *(bool *)param_4 = puVar1 != puVar3 && (param_3 == 0 || puVar3 < puVar1);
  }
  puVar2 = (ulong *)*param_1;
  if (puVar1 != puVar3 && (param_3 == 0 || puVar3 < puVar1)) {
    if (puVar2 != param_1 + 2) {
      _free();
    }
    puVar2 = param_1 + 2;
    if ((ulong *)0x1000 < param_2) {
      puVar2 = puVar1;
      FUN_108410808(puVar1,2);
    }
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)puVar1;
  }
  return puVar2;
}



/* Entry: 10825c430; end: 10825c44f;  */

void FUN_10825c430(long param_1)

{
  func_0x00010825d5e0();
  if (param_1 != 0) {
    _CFRelease();
  }
  return;
}



/* Entry: 10825c450; end: 10825c623;  */

void FUN_10825c450(float *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  float *pfVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  undefined2 uStack_32;
  
  pfVar3 = param_1 + 2;
  pfVar3[0] = 0.0;
  pfVar3[1] = 0.0;
  uVar1 = *(undefined1 *)(param_3 + 0x28);
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  *(undefined1 *)(param_1 + 6) = uVar1;
  *(undefined2 *)((long)param_1 + 0x1a) = 0;
  *(undefined1 *)((long)param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(*(long *)(param_2 + 0x40) + 0x48);
  uStack_32 = (undefined2)(*(uint *)(param_3 + 0x2c) >> 2);
  _CTFontGetAdvancesForGlyphs(*(undefined8 *)(param_2 + 0x10b8),1,&uStack_32,&dStack_50,1);
  dVar4 = *(double *)(param_2 + 0x10c8) * dStack_50;
  dStack_50 = *(double *)(param_2 + 0x10d0) * dStack_48 + *(double *)(param_2 + 0x10c0) * dStack_50;
  dStack_48 = *(double *)(param_2 + 0x10d8) * dStack_48 + dVar4;
  *param_1 = (float)dStack_50;
  param_1[1] = -(float)dStack_48;
  _CTFontGetBoundingRectsForGlyphs(*(undefined8 *)(param_2 + 0x10b8),1,&uStack_32,&dStack_70,1);
  uStack_98 = *(undefined8 *)(param_2 + 0x10c8);
  uStack_a0 = *(ulong *)(param_2 + 0x10c0);
  uStack_88 = *(undefined8 *)(param_2 + 0x10d8);
  uStack_90 = *(undefined8 *)(param_2 + 0x10d0);
  uStack_78 = *(undefined8 *)(param_2 + 0x10e8);
  uStack_80 = *(undefined8 *)(param_2 + 0x10e0);
  _CGRectApplyAffineTransform(&uStack_a0);
  if ((dStack_50 == 0.0) && (dStack_48 == 0.0)) {
    uVar2 = *(ulong *)(param_2 + 0x10b8);
    _CTFontCreatePathForGlyph(uVar2,uStack_32,0);
    uStack_a0 = uVar2;
    if ((uVar2 == 0) || (_CGPathIsEmpty(), (uVar2 & 1) != 0)) {
      func_0x00010825d5f8();
      return;
    }
    func_0x00010825d5f8();
  }
  if ((0.0 < dStack_60) && (0.0 < dStack_58)) {
    fVar6 = (float)dStack_60 + (float)dStack_70;
    fVar5 = (float)dStack_58 + (float)(-dStack_68 - dStack_58);
    if ((*(byte *)(param_2 + 0x1128) & 1) != 0) {
      fVar6 = fVar6 + (float)((*(uint *)(param_3 + 0x2c) & 3) << 0xe) * 1.5258789e-05;
      fVar5 = fVar5 + (float)(*(uint *)(param_3 + 0x2c) >> 4 & 0xc000) * 1.5258789e-05;
    }
    param_1[2] = (float)(int)dStack_70;
    param_1[3] = (float)(int)(-dStack_68 - dStack_58);
    param_1[4] = (float)(int)fVar6;
    param_1[5] = (float)(int)fVar5;
    FUN_108168934(0xbf800000,0xbf800000,pfVar3);
  }
  return;
}



/* Entry: 10825c624; end: 10825cdc3;  */

double * FUN_10825c624(long param_1,ushort *param_2,undefined1 *param_3)

{
  uint *puVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint *puVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  double *pdVar10;
  double dVar11;
  double *pdVar12;
  double *pdVar13;
  undefined2 *puVar14;
  double *pdVar15;
  char cVar16;
  uint uVar17;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  undefined8 extraout_x9;
  ulong extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 extraout_x9_02;
  undefined8 uVar21;
  undefined8 extraout_x9_03;
  undefined8 extraout_x9_04;
  undefined8 extraout_x9_05;
  undefined1 *puVar22;
  long extraout_x10;
  undefined8 extraout_x10_00;
  undefined8 uVar23;
  undefined8 extraout_x10_01;
  undefined8 extraout_x10_02;
  undefined8 extraout_x10_03;
  int iVar24;
  ulong uVar25;
  undefined8 extraout_x11;
  undefined8 uVar26;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  undefined8 extraout_x12;
  undefined8 uVar27;
  undefined8 extraout_x12_00;
  undefined8 extraout_x12_01;
  undefined8 extraout_x12_02;
  long lVar28;
  double *pdVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  uint uVar33;
  float fVar34;
  uint uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  ulong uVar38;
  double dVar39;
  uint uVar41;
  uint uVar42;
  undefined1 auVar40 [16];
  uint uVar43;
  float fVar44;
  undefined4 uVar45;
  double dVar46;
  undefined4 uVar47;
  double dVar48;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined8 uStack_288;
  double *pdStack_280;
  double *pdStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  double dStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  double dStack_230;
  double dStack_228;
  float fStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  uint uStack_20c;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  uint uStack_bc;
  long lStack_b8;
  long lStack_b0;
  undefined2 uStack_a2;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(ushort *)(param_1 + 0x3e);
  uVar17 = uVar4 & 0x180;
  uStack_a2 = (undefined2)(*(uint *)(param_2 + 0x16) >> 2);
  if (*(long *)(param_1 + 0x1090) == 0) {
    lVar28 = param_1;
    _CGColorSpaceCreateDeviceRGB();
    FUN_10825c364(param_1 + 0x1090,lVar28);
    uVar9 = *(undefined8 *)(param_1 + 0x1090);
    uVar33 = *(uint *)(param_1 + 0x10a8);
    uVar38 = NEON_ushl(CONCAT44(uVar33,uVar33),0xfffffff8fffffff0,4);
    auVar40._0_8_ = uVar38 & 0xff;
    auVar40._8_8_ = (uVar38 & 0xff000000ff) >> 0x20;
    auVar40 = NEON_ucvtf(auVar40,8);
    dStack_a0 = auVar40._0_8_ * 0.003921568859368563;
    dStack_98 = auVar40._8_8_ * 0.003921568859368563;
    dStack_90 = (double)(uVar33 & 0xff) * 0.003921568859368563;
    uStack_88 = 0x3ff0000000000000;
    _CGColorCreate(uVar9,&dStack_a0);
    FUN_10825c384(param_1 + 0x10a0,uVar9);
  }
  lVar28 = param_1 + 0x1000;
  bVar3 = (byte)param_2[0x14];
  bVar7 = bVar3 != 0;
  if ((uVar4 & 0x180) == 0) {
    bVar7 = 1 < bVar3;
  }
  bVar2 = false;
  if (bVar3 != 3) {
    bVar2 = bVar7;
  }
  uVar33 = *(uint *)(param_1 + 0x10ac);
  uVar38 = (ulong)uVar33;
  uVar4 = *param_2;
  uStack_bc = uVar17;
  if (((*(long *)(param_1 + 0x1098) == 0) || ((int)uVar33 < (int)(uint)uVar4)) ||
     (*(int *)(param_1 + 0x10b0) < (int)(uint)param_2[1])) {
    if ((int)uVar33 < (int)(uint)uVar4) {
      uVar17 = 1 << (ulong)(-(int)LZCOUNT(uVar4 - 1) & 0x1f);
      uVar38 = (ulong)uVar17;
      *(uint *)(param_1 + 0x10ac) = uVar17;
    }
    iVar24 = *(int *)(param_1 + 0x10b0);
    if (iVar24 < (int)(uint)param_2[1]) {
      iVar24 = 1 << (ulong)(-(int)LZCOUNT(param_2[1] - 1) & 0x1f);
      *(int *)(param_1 + 0x10b0) = iVar24;
    }
    uVar38 = -(uVar38 >> 0x1f) & 0xfffffffc00000000 | uVar38 << 2;
    lVar30 = param_1 + 0x80;
    FUN_10825c3a4(lVar30,uVar38 * (long)iVar24,0,0);
    _CGBitmapContextCreate();
    FUN_10825c430(param_1 + 0x1098,lVar30);
    _CGContextSetAllowsFontSubpixelQuantization(*(undefined8 *)(param_1 + 0x1098),0);
    _CGContextSetShouldSubpixelQuantizeFonts(*(undefined8 *)(param_1 + 0x1098),0);
    _CGContextSetAllowsFontSubpixelPositioning(*(undefined8 *)(param_1 + 0x1098),1);
    _CGContextSetShouldSubpixelPositionFonts(*(undefined8 *)(param_1 + 0x1098),1);
    _CGContextSetTextDrawingMode(*(undefined8 *)(param_1 + 0x1098),0);
    if ((char)param_2[0x14] == '\x03') {
      _CGContextSetFillColorWithColor
                (*(undefined8 *)(param_1 + 0x1098),*(undefined8 *)(param_1 + 0x10a0));
    }
    else {
      _CGContextSetGrayFillColor(0,0x3ff0000000000000,*(undefined8 *)(param_1 + 0x1098));
    }
    *(bool *)(param_1 + 0x10b4) = bVar3 == 0;
    *(byte *)(param_1 + 0x10b5) = bVar2 ^ 1;
    dStack_a0 = *(double *)(param_1 + 0x10c0);
    dStack_98 = *(double *)(param_1 + 0x10c8);
    uStack_88 = *(undefined8 *)(param_1 + 0x10d8);
    dStack_90 = *(double *)(param_1 + 0x10d0);
    uStack_80 = *(undefined8 *)(param_1 + 0x10e0);
    uStack_78 = *(undefined8 *)(param_1 + 0x10e8);
    _CGContextSetTextMatrix(*(undefined8 *)(param_1 + 0x1098),&dStack_a0);
  }
  else {
    uVar38 = uVar38 << 2;
  }
  if ((bool)*(char *)(param_1 + 0x10b4) != (bVar3 != 0)) {
    _CGContextSetShouldAntialias(*(undefined8 *)(param_1 + 0x1098),bVar3 != 0);
    *(bool *)(param_1 + 0x10b4) = bVar3 != 0;
  }
  if ((bool)*(char *)(param_1 + 0x10b5) != bVar2) {
    _CGContextSetShouldSmoothFonts(*(undefined8 *)(param_1 + 0x1098),bVar2);
    *(bool *)(param_1 + 0x10b5) = bVar2;
  }
  lStack_b8 = *(long *)(param_1 + 0x80);
  uVar4 = param_2[1];
  uVar33 = (uint)uVar4;
  uVar35 = (uint)uVar4;
  puVar1 = (uint *)(lStack_b8 +
                   (long)(int)((*(int *)(param_1 + 0x10b0) - uVar35) * *(int *)(param_1 + 0x10ac)) *
                   4);
  uVar17 = -(uint)((char)param_2[0x14] != '\x03');
  uVar5 = *param_2;
  uVar31 = (ulong)uVar5;
  lStack_b0 = lVar28;
  if (uVar5 < 0x20) {
    lVar28 = uVar38 + (uVar31 & 0x3fff) * -4;
    if (uVar5 < 8) {
      puVar18 = puVar1;
      for (; iVar24 = uVar5 + 1, uVar35 != 0; uVar35 = uVar35 - 1) {
        do {
          puVar19 = puVar18 + 1;
          *puVar18 = uVar17;
          iVar24 = iVar24 + -1;
          puVar18 = puVar19;
        } while (1 < iVar24);
        puVar18 = (uint *)((long)puVar19 + lVar28);
      }
    }
    else {
      bVar7 = (char)param_2[0x14] != '\x03';
      uVar35 = -(uint)((int)((uint)CONCAT12(bVar7,(ushort)bVar7) << 0x1f) < 0);
      uVar41 = -(uint)((int)((uint)bVar7 << 0x1f) < 0);
      uVar42 = -(uint)((int)((uint)bVar7 << 0x1f) < 0);
      uVar43 = -(uint)((int)((uint)bVar7 << 0x1f) < 0);
      puVar18 = puVar1;
      if (uVar4 != 0) {
        do {
          puVar19 = puVar18;
          uVar25 = uVar31;
          puVar6 = (uint *)((long)puVar18 + lVar28 + 0x20);
          do {
            puVar18 = puVar6;
            puVar20 = puVar19 + 8;
            puVar19[2] = uVar42;
            puVar19[3] = uVar43;
            *puVar19 = uVar35;
            puVar19[1] = uVar41;
            puVar19[6] = uVar42;
            puVar19[7] = uVar43;
            puVar19[4] = uVar35;
            puVar19[5] = uVar41;
            iVar24 = (int)uVar25;
            uVar25 = (ulong)(iVar24 - 8);
            puVar19 = puVar20;
            puVar6 = puVar18 + 8;
          } while (0xf < iVar24);
          while (iVar24 = (int)uVar25, uVar25 = (ulong)(iVar24 - 1), 0 < iVar24) {
            *puVar20 = uVar17;
            puVar18 = puVar18 + 1;
            puVar20 = puVar20 + 1;
          }
          uVar33 = uVar33 - 1;
        } while (uVar33 != 0);
      }
    }
  }
  else {
    bVar7 = uVar4 != 0;
    puVar18 = puVar1;
    while (bVar7) {
      (*(code *)PTR_DAT_113254e78)(puVar18,uVar17,uVar31);
      puVar18 = (uint *)((long)puVar18 + uVar38);
      uVar33 = uVar33 - 1;
      bVar7 = uVar33 != 0;
    }
  }
  fVar44 = 0.0;
  fVar34 = 0.0;
  uVar8 = *(char *)(lStack_b0 + 0x128) == '\x01';
  if ((bool)uVar8) {
    fVar44 = (float)((*(uint *)(param_2 + 0x16) & 3) << 0xe) / 65536.0;
    fVar34 = (float)(*(uint *)(param_2 + 0x16) >> 4 & 0xc000) / 65536.0;
  }
  dVar39 = (double)((float)(int)((uint)param_2[1] + (int)(short)param_2[2]) - fVar34);
  dVar48 = *(double *)(param_1 + 0x10f0);
  dVar11 = *(double *)(param_1 + 0x1100);
  dStack_a0 = *(double *)(param_1 + 0x1110) +
              dVar11 * dVar39 + dVar48 * (double)(fVar44 + (float)-(int)(short)param_2[3]);
  dStack_98 = *(double *)(param_1 + 0x1118) +
              *(double *)(param_1 + 0x1108) * dVar39 +
              *(double *)(param_1 + 0x10f8) * (double)(fVar44 + (float)-(int)(short)param_2[3]);
  pdVar10 = *(double **)(param_1 + 0x10b8);
  puVar14 = &uStack_a2;
  pdVar13 = &dStack_a0;
  _CTFontDrawGlyphs();
  uVar37 = SUB84(dVar11,0);
  if (lStack_b8 == 0) goto LAB_10825cd94;
  cVar16 = (char)param_2[0x14];
  if (cVar16 == '\x04') {
LAB_10825ca04:
    uVar4 = param_2[1];
    uVar5 = *param_2;
    puVar18 = puVar1;
    for (uVar17 = 0; uVar17 != uVar4; uVar17 = uVar17 + 1) {
      for (lVar28 = 0; (ulong)uVar5 * 4 - lVar28 != 0; lVar28 = lVar28 + 4) {
        uVar33 = *(uint *)((long)puVar18 + lVar28);
        *(uint *)((long)puVar18 + lVar28) =
             (uint)(byte)(&UNK_10df110c0)[(ulong)(uVar33 >> 0x10) & 0xff] << 0x10 |
             (uint)(byte)(&UNK_10df110c0)[(ulong)(uVar33 >> 8) & 0xff] << 8 |
             (uint)(byte)(&UNK_10df110c0)[(ulong)uVar33 & 0xff];
      }
      puVar18 = (uint *)((long)puVar18 + uVar38);
    }
LAB_10825caec:
    cVar16 = (char)param_2[0x14];
  }
  else if ((uStack_bc != 0) && (cVar16 == '\x01')) {
    FUN_108260580();
    if ((int)pdVar10 != 0) goto LAB_10825ca04;
    goto LAB_10825caec;
  }
  uVar37 = SUB84(dVar11,0);
  uVar8 = cVar16 == '\x04';
  switch(cVar16) {
  case '\0':
    uVar4 = *param_2;
    func_0x00010825d5d8();
    uVar9 = 0;
    uVar21 = 1;
    while( true ) {
      uVar37 = SUB84(dVar11,0);
      uVar8 = (uint)uVar9 == (uint)param_2[1];
      puVar22 = param_3;
      puVar18 = puVar1;
      uVar17 = (uint)uVar4;
      if ((uint)param_2[1] <= (uint)uVar9) break;
      while (0 < (int)uVar17) {
        uVar33 = 0;
        uVar35 = 7;
        do {
          uVar8 = (undefined1)uVar33;
          puVar19 = puVar18;
          if ((int)uVar35 < 0) break;
          puVar19 = puVar18 + 1;
          uVar33 = uVar33 | ((uint)uVar21 & (*puVar18 >> 7 ^ 0xffffffff)) << (ulong)(uVar35 & 0x1f);
          uVar8 = (undefined1)uVar33;
          uVar35 = uVar35 - 1;
          uVar17 = uVar17 - 1;
          puVar18 = puVar19;
        } while (uVar17 != 0);
        *puVar22 = uVar8;
        puVar22 = puVar22 + 1;
        puVar18 = puVar19;
      }
      func_0x00010825d598();
      uVar9 = extraout_x8;
      uVar21 = extraout_x9;
    }
    break;
  case '\x01':
    lVar28 = *(long *)(param_1 + 0x70);
    if (lVar28 == 0) {
      uVar4 = *param_2;
      uVar5 = param_2[1];
      func_0x00010825d5d8();
      func_0x00010825d600();
      uVar9 = extraout_x8_04;
      uVar21 = extraout_x9_04;
      uVar23 = extraout_x10_02;
      uVar26 = extraout_x11_01;
      uVar27 = extraout_x12_01;
      while( true ) {
        uVar37 = SUB84(dVar11,0);
        uVar8 = 1;
        if ((uint)uVar9 == (uint)uVar5) break;
        for (uVar38 = 0; uVar4 != uVar38; uVar38 = uVar38 + 1) {
          uVar17 = puVar1[uVar38];
          uVar33 = (uint)uVar21;
          param_3[uVar38] =
               (char)((uVar33 & (uVar17 ^ 0xffffffff)) * (int)uVar27 +
                      (uVar33 & (uVar17 >> 0x10 ^ 0xffffffff)) * (int)uVar23 +
                      (uVar33 & (uVar17 >> 8 ^ 0xffffffff)) * (int)uVar26 >> 8);
        }
        func_0x00010825d598();
        uVar9 = extraout_x8_05;
        uVar21 = extraout_x9_05;
        uVar23 = extraout_x10_03;
        uVar26 = extraout_x11_02;
        uVar27 = extraout_x12_02;
      }
    }
    else {
      uVar4 = *param_2;
      uVar5 = param_2[1];
      func_0x00010825d5d8();
      func_0x00010825d600();
      uVar9 = extraout_x8_01;
      uVar21 = extraout_x9_01;
      uVar23 = extraout_x10_00;
      uVar26 = extraout_x11;
      uVar27 = extraout_x12;
      while( true ) {
        uVar37 = SUB84(dVar11,0);
        uVar8 = 1;
        if ((uint)uVar9 == (uint)uVar5) break;
        for (uVar38 = 0; uVar4 != uVar38; uVar38 = uVar38 + 1) {
          uVar17 = puVar1[uVar38];
          uVar33 = (uint)uVar21;
          param_3[uVar38] =
               *(undefined1 *)
                (lVar28 + (ulong)((uVar33 & (uVar17 ^ 0xffffffff)) * (int)uVar27 +
                                  (uVar33 & (uVar17 >> 0x10 ^ 0xffffffff)) * (int)uVar23 +
                                  (uVar33 & (uVar17 >> 8 ^ 0xffffffff)) * (int)uVar26 >> 8));
        }
        func_0x00010825d598();
        uVar9 = extraout_x8_02;
        uVar21 = extraout_x9_02;
        uVar23 = extraout_x10_01;
        uVar26 = extraout_x11_00;
        uVar27 = extraout_x12_00;
      }
    }
    break;
  case '\x03':
    uVar4 = *param_2;
    func_0x00010825d5d8();
    uVar9 = 0;
    uVar38 = (ulong)param_2[1];
    lVar28 = (ulong)uVar4 << 2;
    while( true ) {
      uVar37 = SUB84(dVar11,0);
      uVar8 = 1;
      if ((int)uVar9 == (int)uVar38) break;
      for (lVar30 = 0; lVar28 != lVar30; lVar30 = lVar30 + 4) {
        uVar17 = *(uint *)((long)puVar1 + lVar30);
        *(uint *)(param_3 + lVar30) =
             uVar17 & 0xff000000 | uVar17 & 0xff00 | uVar17 >> 0x10 & 0xff | (uVar17 & 0xff) << 0x10
        ;
      }
      func_0x00010825d598();
      uVar9 = extraout_x8_00;
      uVar38 = extraout_x9_00;
      lVar28 = extraout_x10;
    }
    break;
  case '\x04':
    lVar28 = *(long *)(param_1 + 0x70);
    if (lVar28 == 0) {
      uVar4 = *param_2;
      uVar5 = param_2[1];
      func_0x00010825d5d8();
      uVar9 = 0;
      while( true ) {
        uVar37 = SUB84(dVar11,0);
        uVar8 = 1;
        if ((uint)uVar9 == (uint)uVar5) break;
        for (uVar38 = 0; uVar4 != uVar38; uVar38 = uVar38 + 1) {
          uVar17 = puVar1[uVar38];
          *(ushort *)(param_3 + uVar38 * 2) =
               ((ushort)(uVar17 >> 8) & 0xf800 | (ushort)(uVar17 >> 5) & 0x7e0) ^
               (ushort)(uVar17 >> 3) & 0x1f ^ 0xffff;
        }
        func_0x00010825d598();
        uVar9 = extraout_x8_06;
      }
    }
    else {
      lVar32 = *(long *)(param_1 + 0x68);
      lVar30 = *(long *)(param_1 + 0x78);
      uVar4 = *param_2;
      uVar5 = param_2[1];
      func_0x00010825d5d8();
      uVar9 = 0;
      uVar21 = 0xffffffff;
      while( true ) {
        uVar37 = SUB84(dVar11,0);
        uVar8 = 1;
        if ((uint)uVar9 == (uint)uVar5) break;
        for (uVar38 = 0; uVar4 != uVar38; uVar38 = uVar38 + 1) {
          uVar17 = puVar1[uVar38];
          *(ushort *)(param_3 + uVar38 * 2) =
               (*(byte *)(lVar32 + ((ulong)((uint)uVar21 ^ uVar17 >> 0x10) & 0xff)) & 0xf8) << 8 |
               (ushort)(*(byte *)(lVar28 + ((ulong)((uint)uVar21 ^ uVar17 >> 8) & 0xff)) >> 2) << 5
               | (ushort)(*(byte *)(lVar30 + ((ulong)~uVar17 & 0xff)) >> 3);
        }
        func_0x00010825d598();
        uVar9 = extraout_x8_03;
        uVar21 = extraout_x9_03;
      }
    }
  }
LAB_10825cd94:
  func_0x00010825d63c(uStack_68);
  if ((bool)uVar8) {
    return pdVar10;
  }
  ___stack_chk_fail();
  puStack_d0 = &stack0xfffffffffffffff0;
  pcStack_c8 = FUN_10825cdc4;
  uStack_128 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  dStack_1f8 = pdVar10[0x219];
  dStack_200 = pdVar10[0x218];
  dStack_1e8 = pdVar10[0x21b];
  dStack_1f0 = pdVar10[0x21a];
  dStack_1d8 = pdVar10[0x21d];
  dStack_1e0 = pdVar10[0x21c];
  dVar39 = 5.26354424712089e-315;
  fVar34 = 1.0;
  if (*(char *)(pdVar10 + 0x225) == '\x01') {
    iVar24 = (int)pdVar10 + 8;
    FUN_108397094();
    dVar11 = 5.34643470770547e-315;
    dVar48 = dVar11;
    if (iVar24 == 1) {
      dVar48 = 5.26354424712089e-315;
    }
    dVar46 = dVar11;
    dVar39 = 5.26354424712089e-315;
    if (iVar24 != 2) {
      dVar46 = dVar48;
      dVar39 = dVar11;
    }
    fVar34 = SUB84(dVar46,0);
    _CGAffineTransformMakeScale(&dStack_1c8,(double)SUB84(dVar39,0),(double)fVar34);
    dStack_230 = pdVar10[0x218];
    dStack_228 = pdVar10[0x219];
    uStack_218 = SUB84(pdVar10[0x21b],0);
    uStack_214 = (undefined4)((ulong)pdVar10[0x21b] >> 0x20);
    fStack_220 = SUB84(pdVar10[0x21a],0);
    uStack_21c = (undefined4)((ulong)pdVar10[0x21a] >> 0x20);
    dStack_208 = pdVar10[0x21d];
    uStack_210 = SUB84(pdVar10[0x21c],0);
    uStack_20c = (uint)((ulong)pdVar10[0x21c] >> 0x20);
    uStack_258 = uStack_1c0;
    dStack_260 = dStack_1c8;
    uStack_248 = uStack_1b0;
    uStack_250 = uStack_1b8;
    uStack_238 = uStack_1a0;
    uStack_240 = uStack_1a8;
    _CGAffineTransformConcat(&dStack_200,&dStack_230,&dStack_260);
  }
  dVar11 = pdVar10[0x217];
  pdVar15 = (double *)(ulong)(*(uint *)(puVar14 + 0x16) >> 2 & 0xffff);
  _CTFontCreatePathForGlyph(dVar11,pdVar15,&dStack_200);
  pdVar12 = pdVar13;
  dStack_260 = dVar11;
  FUN_108376d4c();
  if (dVar11 != 0.0) {
    func_0x00010837cf98(&dStack_1c8);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    _CGPathApply(dVar11,&dStack_1c8,FUN_10825cff8);
    FUN_10837d48c(&dStack_230,&dStack_1c8);
    pdVar15 = &dStack_230;
    FUN_108376b90(pdVar13);
    FUN_10837ca5c(dStack_230);
    if (*(char *)(pdVar10 + 0x225) == '\x01') {
      fVar44 = 1.0 / SUB84(dVar39,0);
      fStack_220 = 1.0 / fVar34;
      dVar48 = (double)(ulong)(uint)fStack_220;
      uVar37 = 0;
      bVar7 = true;
      if ((fStack_220 != 0.0) && (bVar7 = false, !NAN(fVar44))) {
        bVar7 = fVar44 == 0.0;
      }
      uStack_20c = 0;
      if (!bVar7) {
        uStack_20c = 0x10;
      }
      bVar7 = false;
      if ((fStack_220 == 1.0) && (bVar7 = false, !NAN(fVar44))) {
        bVar7 = fVar44 == 1.0;
      }
      dStack_228 = 0.0;
      dStack_230 = (double)(ulong)(uint)fVar44;
      if (!bVar7) {
        uStack_20c = uStack_20c | 2;
      }
      uStack_214 = 0;
      uStack_210 = 0x3f800000;
      uStack_21c = 0;
      uStack_218 = 0;
      pdVar15 = &dStack_230;
      func_0x000108142294(pdVar13,pdVar15,1);
    }
    pdVar12 = &dStack_1c8;
    FUN_10837d00c();
  }
  uVar8 = dVar11 == 0.0;
  bVar7 = !(bool)uVar8;
  func_0x00010825d5f8();
  func_0x00010825d63c(uStack_128);
  if (!(bool)uVar8) {
    ___stack_chk_fail();
    pdVar13 = &dStack_1c8;
    FUN_10837d00c();
    func_0x00010825d5f8();
    func_0x00010825d620();
    pcStack_268 = FUN_10825cff8;
    if (*(uint *)pdVar15 < 5) {
      pdVar29 = (double *)pdVar15[1];
      pdStack_280 = pdVar10;
      pdStack_278 = pdVar12;
      ppuStack_270 = &puStack_d0;
      switch(*(uint *)pdVar15) {
      case 0:
        *(undefined1 *)(pdVar13 + 0x11) = 0;
        dVar48 = *pdVar29;
        pdVar13[0x13] = pdVar29[1];
        pdVar13[0x12] = dVar48;
        break;
      case 1:
        dVar48 = pdVar29[1];
        if ((pdVar13[0x12] != *pdVar29) || (pdVar13[0x13] != dVar48)) {
          func_0x00010825d618();
          uVar36 = SUB84(dVar48,0);
          uVar37 = func_0x00010825d5c4();
          uStack_288 = (double)CONCAT44(uVar36,uVar37);
          FUN_10837d394();
          pdVar10 = pdVar13 + 4;
          func_0x00010837d2bc(pdVar10,&uStack_288);
          func_0x00010837dc54();
          func_0x00010837dc9c(*(uint *)(pdVar13 + 0xd) | 1);
          return pdVar10;
        }
        break;
      case 2:
        if (((pdVar13[0x12] != *pdVar29) || (pdVar13[0x13] != pdVar29[1])) ||
           ((pdVar13[0x12] != pdVar29[2] || (pdVar13[0x13] != pdVar29[3])))) {
          func_0x00010825d618(pdVar29[2],pdVar29[3]);
          func_0x00010825d5c4();
          func_0x00010825d628();
          pdVar10 = pdStack_278;
          uStack_288 = dVar39;
          func_0x00010837dbfc();
          FUN_10837d394();
          func_0x00010837dc48();
          *(undefined4 *)pdVar13 = unaff_s11;
          *(undefined4 *)((long)pdVar13 + 4) = unaff_s10;
          *(float *)(pdVar13 + 1) = fVar34;
          *(float *)((long)pdVar13 + 0xc) = SUB84(dVar39,0);
          func_0x00010837dbbc();
          func_0x00010837dc9c(*(uint *)(pdVar10 + 0xd) | 2);
          return pdVar13;
        }
        break;
      case 3:
        dVar11 = pdVar13[0x12];
        if (dVar11 == *pdVar29) {
          dVar48 = pdVar29[1];
          dVar46 = pdVar13[0x13];
          if ((((dVar46 == dVar48) && (dVar48 = pdVar29[2], dVar11 == dVar48)) &&
              (dVar48 = pdVar29[3], dVar46 == dVar48)) &&
             ((dVar48 = pdVar29[4], dVar11 == dVar48 && (dVar46 == pdVar29[5])))) {
            return pdVar13;
          }
        }
        uVar47 = SUB84(dVar48,0);
        uVar45 = SUB84(pdVar29[5],0);
        func_0x00010825d618(pdVar29[4]);
        func_0x00010825d5c4();
        uVar36 = func_0x00010825d628();
        dVar48 = pdVar29[4];
        dVar11 = pdVar29[5];
        uStack_288 = dVar39;
        FUN_10837d394();
        pdVar10 = pdVar13 + 4;
        FUN_1082d3644(pdVar10,3);
        *(undefined4 *)pdVar10 = uVar36;
        *(undefined4 *)((long)pdVar10 + 4) = uVar45;
        *(undefined4 *)(pdVar10 + 1) = uVar47;
        *(undefined4 *)((long)pdVar10 + 0xc) = uVar37;
        *(float *)(pdVar10 + 2) = (float)dVar48;
        *(float *)((long)pdVar10 + 0x14) = -(float)dVar11;
        func_0x00010837dbbc();
        func_0x00010837dc9c(*(uint *)(pdVar13 + 0xd) | 8);
        return pdVar10;
      case 4:
        if (*(char *)(pdVar13 + 0x11) == '\x01') {
          pcStack_268 = FUN_10825cff8;
          if (*(int *)(pdVar13 + 8) == 0) {
            return pdVar13;
          }
          FUN_10837d394(pdVar13);
          uStack_288 = (double)CONCAT17(5,(undefined7)uStack_288);
          func_0x00010837dbbc();
          *(undefined1 *)(pdVar13 + 0xf) = 1;
          return pdVar13;
        }
      }
    }
    return pdVar13;
  }
  return (double *)(ulong)bVar7;
}



/* Entry: 10825cdc4; end: 10825cff7;  */

long * FUN_10825cdc4(undefined8 param_1,undefined8 param_2,double param_3,undefined4 param_4,
                    long param_5,long param_6,long *param_7)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong *puVar7;
  double *pdVar8;
  float fVar9;
  undefined4 uVar10;
  double dVar11;
  float fVar12;
  undefined4 uVar13;
  double dVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long *plStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  float fStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_138 = *(undefined8 *)(param_5 + 0x10c8);
  uStack_140 = *(undefined8 *)(param_5 + 0x10c0);
  uStack_128 = *(undefined8 *)(param_5 + 0x10d8);
  uStack_130 = *(undefined8 *)(param_5 + 0x10d0);
  uStack_118 = *(undefined8 *)(param_5 + 0x10e8);
  uStack_120 = *(undefined8 *)(param_5 + 0x10e0);
  fVar16 = 1.0;
  fVar17 = 1.0;
  if (*(char *)(param_5 + 0x1128) == '\x01') {
    iVar3 = (int)param_5 + 8;
    FUN_108397094();
    fVar9 = 4.0;
    fVar12 = fVar9;
    if (iVar3 == 1) {
      fVar12 = 1.0;
    }
    param_3 = (double)(ulong)(uint)fVar12;
    fVar17 = fVar9;
    fVar16 = 1.0;
    if (iVar3 != 2) {
      fVar17 = fVar12;
      fVar16 = fVar9;
    }
    _CGAffineTransformMakeScale(&lStack_108,(double)fVar16,(double)fVar17);
    uStack_168 = *(undefined8 *)(param_5 + 0x10c8);
    uStack_170 = *(ulong *)(param_5 + 0x10c0);
    uStack_158 = (undefined4)*(undefined8 *)(param_5 + 0x10d8);
    uStack_154 = (undefined4)((ulong)*(undefined8 *)(param_5 + 0x10d8) >> 0x20);
    fStack_160 = (float)*(undefined8 *)(param_5 + 0x10d0);
    uStack_15c = (undefined4)((ulong)*(undefined8 *)(param_5 + 0x10d0) >> 0x20);
    uStack_148 = *(undefined8 *)(param_5 + 0x10e8);
    uStack_150 = (undefined4)*(undefined8 *)(param_5 + 0x10e0);
    uStack_14c = (uint)((ulong)*(undefined8 *)(param_5 + 0x10e0) >> 0x20);
    uStack_198 = uStack_100;
    lStack_1a0 = lStack_108;
    uStack_188 = uStack_f0;
    uStack_190 = uStack_f8;
    uStack_178 = uStack_e0;
    uStack_180 = uStack_e8;
    _CGAffineTransformConcat(&uStack_140,&uStack_170,&lStack_1a0);
  }
  lVar4 = *(long *)(param_5 + 0x10b8);
  puVar7 = (ulong *)(ulong)(*(uint *)(param_6 + 0x2c) >> 2 & 0xffff);
  _CTFontCreatePathForGlyph(lVar4,puVar7,&uStack_140);
  plVar5 = param_7;
  lStack_1a0 = lVar4;
  FUN_108376d4c();
  if (lVar4 != 0) {
    func_0x00010837cf98(&lStack_108);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    _CGPathApply(lVar4,&lStack_108,FUN_10825cff8);
    FUN_10837d48c(&uStack_170,&lStack_108);
    puVar7 = &uStack_170;
    FUN_108376b90(param_7);
    FUN_10837ca5c(uStack_170);
    if (*(char *)(param_5 + 0x1128) == '\x01') {
      fVar12 = 1.0 / fVar16;
      fStack_160 = 1.0 / fVar17;
      param_3 = (double)(ulong)(uint)fStack_160;
      param_4 = 0;
      bVar1 = true;
      if ((fStack_160 != 0.0) && (bVar1 = false, !NAN(fVar12))) {
        bVar1 = fVar12 == 0.0;
      }
      uStack_14c = 0;
      if (!bVar1) {
        uStack_14c = 0x10;
      }
      bVar1 = false;
      if ((fStack_160 == 1.0) && (bVar1 = false, !NAN(fVar12))) {
        bVar1 = fVar12 == 1.0;
      }
      uStack_168 = 0;
      uStack_170 = (ulong)(uint)fVar12;
      if (!bVar1) {
        uStack_14c = uStack_14c | 2;
      }
      uStack_154 = 0;
      uStack_150 = 0x3f800000;
      uStack_15c = 0;
      uStack_158 = 0;
      puVar7 = &uStack_170;
      func_0x000108142294(param_7,puVar7,1);
    }
    plVar5 = &lStack_108;
    FUN_10837d00c();
  }
  uVar2 = lVar4 == 0;
  bVar1 = !(bool)uVar2;
  func_0x00010825d5f8();
  func_0x00010825d63c(uStack_68);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    plVar6 = &lStack_108;
    FUN_10837d00c();
    func_0x00010825d5f8();
    func_0x00010825d620();
    pcStack_1a8 = FUN_10825cff8;
    if ((uint)*puVar7 < 5) {
      pdVar8 = (double *)puVar7[1];
      lStack_1c0 = param_5;
      plStack_1b8 = plVar5;
      puStack_1b0 = &stack0xfffffffffffffff0;
      switch((uint)*puVar7) {
      case 0:
        *(undefined1 *)(plVar6 + 0x11) = 0;
        dVar11 = *pdVar8;
        plVar6[0x13] = (long)pdVar8[1];
        plVar6[0x12] = (long)dVar11;
        break;
      case 1:
        dVar11 = *pdVar8;
        dVar14 = pdVar8[1];
        if (((double)plVar6[0x12] != dVar11) || ((double)plVar6[0x13] != dVar14)) {
          func_0x00010825d618();
          uVar13 = SUB84(dVar14,0);
          uVar10 = SUB84(dVar11,0);
          func_0x00010825d5c4();
          uStack_1c8 = CONCAT44(uVar13,uVar10);
          FUN_10837d394();
          plVar5 = plVar6 + 4;
          func_0x00010837d2bc(plVar5,&uStack_1c8);
          func_0x00010837dc54();
          func_0x00010837dc9c(*(uint *)(plVar6 + 0xd) | 1);
          return plVar5;
        }
        break;
      case 2:
        if ((((double)plVar6[0x12] != *pdVar8) || ((double)plVar6[0x13] != pdVar8[1])) ||
           (((double)plVar6[0x12] != pdVar8[2] || ((double)plVar6[0x13] != pdVar8[3])))) {
          func_0x00010825d618(pdVar8[2],pdVar8[3]);
          func_0x00010825d5c4();
          func_0x00010825d628();
          plVar5 = plStack_1b8;
          uStack_1c8 = (ulong)(uint)fVar16;
          func_0x00010837dbfc();
          FUN_10837d394();
          func_0x00010837dc48();
          *(undefined4 *)plVar6 = unaff_s11;
          *(undefined4 *)((long)plVar6 + 4) = unaff_s10;
          *(float *)(plVar6 + 1) = fVar17;
          *(float *)((long)plVar6 + 0xc) = fVar16;
          func_0x00010837dbbc();
          func_0x00010837dc9c(*(uint *)(plVar5 + 0xd) | 2);
          return plVar6;
        }
        break;
      case 3:
        dVar11 = (double)plVar6[0x12];
        if (dVar11 == *pdVar8) {
          param_3 = pdVar8[1];
          dVar14 = (double)plVar6[0x13];
          if ((((dVar14 == param_3) && (param_3 = pdVar8[2], dVar11 == param_3)) &&
              (param_3 = pdVar8[3], dVar14 == param_3)) &&
             ((param_3 = pdVar8[4], dVar11 == param_3 && (dVar14 == pdVar8[5])))) {
            return plVar6;
          }
        }
        uVar15 = SUB84(param_3,0);
        uVar10 = SUB84(pdVar8[4],0);
        uVar13 = SUB84(pdVar8[5],0);
        func_0x00010825d618();
        func_0x00010825d5c4();
        func_0x00010825d628();
        dVar11 = pdVar8[4];
        dVar14 = pdVar8[5];
        uStack_1c8 = (ulong)(uint)fVar16;
        FUN_10837d394();
        plVar5 = plVar6 + 4;
        FUN_1082d3644(plVar5,3);
        *(undefined4 *)plVar5 = uVar10;
        *(undefined4 *)((long)plVar5 + 4) = uVar13;
        *(undefined4 *)(plVar5 + 1) = uVar15;
        *(undefined4 *)((long)plVar5 + 0xc) = param_4;
        *(float *)(plVar5 + 2) = (float)dVar11;
        *(float *)((long)plVar5 + 0x14) = -(float)dVar14;
        func_0x00010837dbbc();
        func_0x00010837dc9c(*(uint *)(plVar6 + 0xd) | 8);
        return plVar5;
      case 4:
        if ((char)plVar6[0x11] == '\x01') {
          pcStack_1a8 = FUN_10825cff8;
          if ((int)plVar6[8] == 0) {
            return plVar6;
          }
          FUN_10837d394(plVar6);
          uStack_1c8 = CONCAT17(5,(undefined7)uStack_1c8);
          func_0x00010837dbbc();
          *(undefined1 *)(plVar6 + 0xf) = 1;
          return plVar6;
        }
      }
    }
    return plVar6;
  }
  return (long *)(ulong)bVar1;
}



/* Entry: 10825cff8; end: 10825d173;  */

void FUN_10825cff8(undefined8 param_1,undefined8 param_2,double param_3,undefined4 param_4,
                  undefined4 *param_5,uint *param_6)

{
  undefined4 *puVar1;
  long unaff_x19;
  double *pdVar2;
  undefined4 uVar3;
  double dVar4;
  undefined4 uVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  
  if (*param_6 < 5) {
    pdVar2 = *(double **)(param_6 + 2);
    switch(*param_6) {
    case 0:
      *(undefined1 *)(param_5 + 0x22) = 0;
      dVar4 = *pdVar2;
      *(double *)(param_5 + 0x26) = pdVar2[1];
      *(double *)(param_5 + 0x24) = dVar4;
      break;
    case 1:
      if ((*(double *)(param_5 + 0x24) != *pdVar2) || (*(double *)(param_5 + 0x26) != pdVar2[1])) {
        func_0x00010825d618();
        func_0x00010825d5c4();
        FUN_10837d394();
        func_0x00010837d2bc(param_5 + 8,&stack0xffffffffffffffd8);
        func_0x00010837dc54();
        func_0x00010837dc9c(param_5[0x1a] | 1);
        return;
      }
      break;
    case 2:
      if (((*(double *)(param_5 + 0x24) != *pdVar2) || (*(double *)(param_5 + 0x26) != pdVar2[1]))
         || ((*(double *)(param_5 + 0x24) != pdVar2[2] || (*(double *)(param_5 + 0x26) != pdVar2[3])
             ))) {
        func_0x00010825d618(pdVar2[2],pdVar2[3]);
        func_0x00010825d5c4();
        func_0x00010825d628();
        func_0x00010837dbfc();
        FUN_10837d394();
        func_0x00010837dc48();
        *param_5 = unaff_s11;
        param_5[1] = unaff_s10;
        param_5[2] = unaff_s9;
        param_5[3] = unaff_s8;
        func_0x00010837dbbc();
        func_0x00010837dc9c(*(uint *)(unaff_x19 + 0x68) | 2);
        return;
      }
      break;
    case 3:
      dVar4 = *(double *)(param_5 + 0x24);
      if (dVar4 == *pdVar2) {
        param_3 = pdVar2[1];
        dVar6 = *(double *)(param_5 + 0x26);
        if ((((dVar6 == param_3) && (param_3 = pdVar2[2], dVar4 == param_3)) &&
            (param_3 = pdVar2[3], dVar6 == param_3)) &&
           ((param_3 = pdVar2[4], dVar4 == param_3 && (dVar6 == pdVar2[5])))) {
          return;
        }
      }
      uVar7 = SUB84(param_3,0);
      uVar3 = SUB84(pdVar2[4],0);
      uVar5 = SUB84(pdVar2[5],0);
      func_0x00010825d618();
      func_0x00010825d5c4();
      func_0x00010825d628();
      dVar4 = pdVar2[4];
      dVar6 = pdVar2[5];
      FUN_10837d394();
      puVar1 = param_5 + 8;
      FUN_1082d3644(puVar1,3);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar1[2] = uVar7;
      puVar1[3] = param_4;
      puVar1[4] = (float)dVar4;
      puVar1[5] = -(float)dVar6;
      func_0x00010837dbbc();
      func_0x00010837dc9c(param_5[0x1a] | 8);
      return;
    case 4:
      if (*(char *)(param_5 + 0x22) == '\x01') {
        if (param_5[0x10] == 0) {
          return;
        }
        FUN_10837d394(param_5);
        func_0x00010837dbbc();
        *(undefined1 *)(param_5 + 0x1e) = 1;
        return;
      }
    }
  }
  return;
}



/* Entry: 10825d174; end: 10825d3bf;  */

void FUN_10825d174(double param_1,double param_2,double param_3,double param_4,long param_5,
                  uint *param_6)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint uVar5;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  float fVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  long lStack_48;
  
  if (param_6 == (uint *)0x0) {
    return;
  }
  _CTFontGetBoundingBox(*(undefined8 *)(param_5 + 0x10b8));
  param_4 = param_2 + param_4;
  func_0x00010825d650();
  param_6[1] = SUB84(param_4,0);
  _CTFontGetAscent(*(undefined8 *)(param_5 + 0x10b8));
  func_0x00010825d650();
  param_6[2] = SUB84(param_4,0);
  _CTFontGetDescent(*(undefined8 *)(param_5 + 0x10b8));
  dVar8 = (double)(ulong)(uint)(float)param_4;
  param_6[3] = (uint)(float)param_4;
  param_6[4] = (uint)-(float)param_2;
  _CTFontGetLeading(*(undefined8 *)(param_5 + 0x10b8));
  param_6[5] = (uint)(float)dVar8;
  param_6[6] = (uint)(float)param_3;
  fVar6 = (float)param_1;
  dVar8 = (double)(ulong)(uint)fVar6;
  param_6[8] = (uint)fVar6;
  param_6[9] = (uint)(float)(param_1 + param_3);
  param_6[7] = (uint)((float)(param_1 + param_3) - fVar6);
  _CTFontGetXHeight(*(undefined8 *)(param_5 + 0x10b8));
  dVar9 = (double)(ulong)(uint)(float)dVar8;
  param_6[10] = (uint)(float)dVar8;
  _CTFontGetCapHeight(*(undefined8 *)(param_5 + 0x10b8));
  dVar8 = (double)(ulong)(uint)(float)dVar9;
  param_6[0xb] = (uint)(float)dVar9;
  _CTFontGetUnderlineThickness(*(undefined8 *)(param_5 + 0x10b8));
  dVar9 = (double)(ulong)(uint)(float)dVar8;
  param_6[0xc] = (uint)(float)dVar8;
  _CTFontGetUnderlinePosition(*(undefined8 *)(param_5 + 0x10b8));
  func_0x00010825d650();
  param_6[0xd] = SUB84(dVar9,0);
  param_6[0xe] = 0;
  param_6[0xf] = 0;
  *param_6 = 3;
  lVar2 = *(long *)(param_5 + 0x40);
  FUN_10825e25c();
  if ((lVar2 == 0) || (_CFArrayGetCount(), lVar2 < 1)) {
    plVar3 = *(long **)(param_5 + 0x40);
    if ((char)plVar3[9] == '\x01') goto LAB_10825d288;
  }
  else {
    plVar3 = *(long **)(param_5 + 0x40);
LAB_10825d288:
    *param_6 = *param_6 | 0x10;
  }
  (**(code **)(*plVar3 + 0xe8))(&lStack_48,plVar3,0x4f532f32);
  if (lStack_48 != 0) {
    _CTFontGetSize(*(undefined8 *)(param_5 + 0x10b8));
    uVar4 = *(ulong *)(param_5 + 0x10b8);
    dVar8 = dVar9;
    _CTFontGetUnitsPerEm();
    uVar7 = SUB84(dVar8,0);
    uVar5 = (int)uVar4 << 1;
    if (*(ulong *)(lStack_48 + 0x20) < 0x60) {
      if (*(ulong *)(lStack_48 + 0x20) < 0x4e) goto LAB_10825d38c;
      lVar2 = *(long *)(lStack_48 + 0x18);
    }
    else {
      lVar2 = *(long *)(lStack_48 + 0x18);
      uVar1 = *(ushort *)(lVar2 + 0x56);
      if ((uVar1 != 0) && (((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) < uVar5)) {
        func_0x00010825d5a8();
        param_6[10] = uVar7;
        lVar2 = extraout_x9;
        uVar5 = extraout_w8;
      }
      uVar1 = *(ushort *)(lVar2 + 0x58);
      if ((uVar1 != 0) && (((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) < uVar5)) {
        func_0x00010825d5a8();
        param_6[0xb] = uVar7;
        lVar2 = extraout_x9_00;
        uVar5 = extraout_w8_00;
      }
    }
    uVar1 = *(ushort *)(lVar2 + 0x1a);
    if ((uVar1 != 0) && (((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) < uVar5)) {
      func_0x00010825d5a8();
      param_6[0xe] = uVar7;
      *param_6 = *param_6 | 4;
      lVar2 = extraout_x9_01;
      uVar5 = extraout_w8_01;
    }
    uVar1 = *(ushort *)(lVar2 + 0x1c);
    if ((uVar1 != 0) && (uVar7 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8, uVar7 < uVar5)) {
      uVar5 = SUB84((dVar9 * (double)uVar7) / (double)(uVar4 & 0xffffffff),0);
      func_0x00010825d650();
      param_6[0xf] = uVar5;
      *param_6 = *param_6 | 8;
    }
  }
LAB_10825d38c:
  func_0x0001078bddf8(&lStack_48);
  return;
}



/* Entry: 10825d3c0; end: 10825d3c3;  */

undefined8 * FUN_10825d3c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a32798;
  func_0x00010825d544(param_1 + 0x224);
  FUN_10825b80c(param_1 + 0x217);
  FUN_10825d3d8(param_1 + 0x10);
  *param_1 = &PTR_DAT_110a3fce0;
  FUN_10839775c(param_1 + 0xc);
  FUN_10810c718(param_1 + 10);
  func_0x000108115b70(param_1 + 9);
  return param_1;
}



/* Entry: 10825d3c4; end: 10825d3d7;  */

void FUN_10825d3c4(void)

{
  FUN_10825d47c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10825d3d8; end: 10825d41f;  */

long * FUN_10825d3d8(long *param_1)

{
  FUN_10825c384(param_1 + 0x204,0);
  func_0x00010825d520(param_1 + 0x203);
  func_0x00010825d4fc(param_1 + 0x202);
  if ((long *)*param_1 != param_1 + 2) {
    _free();
  }
  return param_1;
}



/* Entry: 10825d420; end: 10825d477;  */

void FUN_10825d420(undefined8 param_1,undefined8 param_2,long param_3)

{
  if ((*(byte *)(param_3 + 0x88) & 1) == 0) {
    *(undefined1 *)(param_3 + 0x88) = 1;
    func_0x000108161934((float)*(double *)(param_3 + 0x90),-(float)*(double *)(param_3 + 0x98),
                        param_3);
  }
  *(undefined8 *)(param_3 + 0x90) = param_1;
  *(undefined8 *)(param_3 + 0x98) = param_2;
  return;
}



/* Entry: 10825d478; end: 10825d47b;  */

void FUN_10825d478(undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = param_1;
  uStack_24 = param_2;
  FUN_10837d394();
  func_0x00010837d2bc(param_3 + 0x20,&uStack_28);
  func_0x00010837dc54();
  func_0x00010837dc9c(*(uint *)(param_3 + 0x68) | 1);
  return;
}



/* Entry: 10825d47c; end: 10825d567;  */

undefined8 * FUN_10825d47c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a32798;
  func_0x00010825d544(param_1 + 0x224);
  FUN_10825b80c(param_1 + 0x217);
  FUN_10825d3d8(param_1 + 0x10);
  *param_1 = &PTR_DAT_110a3fce0;
  FUN_10839775c(param_1 + 0xc);
  FUN_10810c718(param_1 + 10);
  func_0x000108115b70(param_1 + 9);
  return param_1;
}



/* Entry: 10825d568; end: 10825d597;  */

long * FUN_10825d568(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    _CFRelease();
  }
  return param_1;
}



/* Entry: 10825d598; end: 10825d65b;  */

void FUN_10825d598(void)

{
  return;
}



/* Entry: 10825d65c; end: 10825d6d3;  */

void FUN_10825d65c(void)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 *puVar10;
  long lVar11;
  long *unaff_x19;
  uint uVar12;
  undefined1 auStack_38 [8];
  
  func_0x000108260480();
  _CFStringGetLength();
  _CFStringGetMaximumSizeForEncoding();
  FUN_1083a35dc();
  FUN_1083a3588();
  _CFStringGetCString();
  uVar8 = *unaff_x19 + 8;
  _strlen();
  uVar6 = 0xfffffffe < uVar8;
  bVar7 = uVar8 == 0xffffffff;
  uVar3 = uVar8;
  if ((bool)uVar6) {
    uVar3 = 0xffffffff;
  }
  if (uVar8 != 0) {
    plVar9 = unaff_x19;
    func_0x0001083a3de8();
    uVar12 = (uint)uVar3;
    if ((!bVar7) || (func_0x0001083a3e08(), (bool)uVar6 && !bVar7)) {
      puVar10 = auStack_38;
      FUN_1083a3310(puVar10,uVar3);
      func_0x0001083a3de0();
      uVar2 = *(uint *)*unaff_x19;
      if (uVar12 <= *(uint *)*unaff_x19) {
        uVar2 = uVar12;
      }
      _memcpy();
      puVar10[(int)uVar2] = 0;
      func_0x0001083a3cdc(*unaff_x19);
    }
    else {
      func_0x0001083a3dbc();
      *(undefined1 *)((long)plVar9 + uVar3) = 0;
      *(uint *)*unaff_x19 = uVar12;
    }
    return;
  }
  lVar11 = *unaff_x19;
  *unaff_x19 = 0x1138270b0;
  if (lVar11 == 0) {
    return;
  }
  if (lVar11 != 0x1138270b0) {
    piVar1 = (int *)(lVar11 + 4);
    do {
      iVar4 = *piVar1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10825d6d4; end: 10825d85b;  */

void FUN_10825d6d4(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  if ((bRam00000001138269b8 & 1) == 0) {
    iVar5 = 0x138269b8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      uRam00000001138269a8 = 0;
      uRam00000001138269b0 = 0x100000000;
      ___cxa_guard_release(0x1138269b8);
    }
  }
  uStack_31 = *param_5 != 0;
  puStack_50 = &uStack_31;
  puStack_48 = &uStack_30;
  puStack_58 = param_2;
  plStack_40 = param_5;
  if (*param_5 == 0) {
    uStack_60 = 0x113254ca8;
    func_0x0001081efc58();
    FUN_1083a8efc(param_1,0x1138269a8,FUN_10825d9b0,*param_2);
    if (*param_1 == 0) {
      FUN_10825d85c(&uStack_68,&puStack_58);
      uVar4 = uStack_68;
      uStack_68 = 0;
      FUN_108162698(param_1,uVar4);
      func_0x0001081298a0(&uStack_68);
      lVar6 = *param_1;
      if (lVar6 != 0) {
        piVar1 = (int *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lStack_70 = lVar6;
        FUN_1083a8da8(0x1138269a8,&lStack_70);
        func_0x0001081298a0(&lStack_70);
      }
    }
    FUN_1081efc78(&uStack_60);
  }
  else {
    FUN_10825d85c(param_1,&puStack_58);
  }
  return;
}



/* Entry: 10825d85c; end: 10825d9af;  */

void FUN_10825d85c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_48;
  
  uVar5 = *(undefined8 *)*param_2;
  _CTFontCopyFontDescriptor();
  uStack_48 = uVar5;
  FUN_10825db28();
  uVar4 = (uint)*(undefined8 *)*param_2;
  _CTFontGetSymbolicTraits();
  puVar6 = (undefined8 *)0x68;
  __Znwm();
  uVar7 = *(undefined8 *)*param_2;
  *(undefined8 *)*param_2 = 0;
  lVar8 = *(long *)param_2[3];
  uVar10 = ((undefined8 *)param_2[2])[1];
  uVar9 = *(undefined8 *)param_2[2];
  *(long *)param_2[3] = 0;
  puVar6[1] = 0x100000001;
  do {
    iVar3 = iRam0000000113255f5c;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113255f5c,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      iRam0000000113255f5c = iRam0000000113255f5c + 1;
    }
  } while (cVar1 != '\0');
  *(int *)(puVar6 + 2) = iVar3;
  *(int *)((long)puVar6 + 0x14) = (int)uVar5;
  puVar6[3] = 0;
  puVar6[4] = 0;
  *(undefined1 *)(puVar6 + 5) = 0;
  *(byte *)((long)puVar6 + 0x29) = (byte)(uVar4 >> 10) & 1;
  *puVar6 = &PTR_FUN_110a32818;
  puVar6[6] = uVar7;
  puVar6[8] = uVar10;
  puVar6[7] = uVar9;
  _CTFontGetSymbolicTraits();
  *(byte *)(puVar6 + 9) = (byte)((uint)uVar7 >> 0xd) & 1;
  puVar6[10] = lVar8;
  puVar6[0xb] = 0;
  *(bool *)(puVar6 + 0xc) = lVar8 != 0;
  *(undefined2 *)((long)puVar6 + 0x61) = 0;
  *param_1 = puVar6;
  func_0x0001082604f4();
  FUN_10825b84c(&uStack_48);
  return;
}



/* Entry: 10825d9b0; end: 10825d9eb;  */

bool FUN_10825d9b0(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xf8))();
  _CFEqual(param_2,param_1);
  return (int)param_2 != 0;
}



/* Entry: 10825d9ec; end: 10825da97;  */

void FUN_10825d9ec(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  char cStack_31;
  
  cStack_31 = cRam0000000113826a70;
  if (cRam0000000113826a70 == '\0') {
    puVar1 = (undefined8 *)0x113826a70;
    func_0x000108260420(0x113826a70,&cStack_31);
    if ((int)puVar1 != 0) {
      FUN_108260824();
      puVar3 = (undefined8 *)0x1138269c8;
      for (lVar2 = 0; lVar2 != 0x44c; lVar2 = lVar2 + 100) {
        *(int *)(puVar3 + -1) = (int)lVar2;
        *puVar3 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 2;
      }
      cRam0000000113826a70 = '\x02';
      goto LAB_10825da74;
    }
  }
  do {
  } while (cRam0000000113826a70 != '\x02');
LAB_10825da74:
  FUN_10825da98(&PTR_DAT_110a327e8,param_1);
  return;
}



/* Entry: 10825da98; end: 10825db27;  */

double FUN_10825da98(undefined8 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  
  piVar5 = (int *)*param_1;
  if (param_2 < *piVar5) {
    return *(double *)(piVar5 + 2);
  }
  uVar2 = *(uint *)(param_1 + 1);
  lVar6 = (long)(int)uVar2;
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  uVar7 = (ulong)uVar2;
  piVar4 = piVar5;
  do {
    piVar3 = piVar4;
    uVar7 = uVar7 - 1;
    if (uVar7 == 0) {
      return *(double *)(piVar5 + lVar6 * 4 + -2);
    }
    iVar1 = piVar3[4];
    piVar4 = piVar3 + 4;
  } while (iVar1 <= param_2);
  return *(double *)(piVar3 + 2) +
         ((*(double *)(piVar3 + 6) - *(double *)(piVar3 + 2)) * (double)(param_2 - *piVar3)) /
         (double)(iVar1 - *piVar3);
}



/* Entry: 10825db28; end: 10825dcfb;  */

uint FUN_10825db28(ulong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  undefined4 *puVar7;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_50;
  char cStack_41;
  
  _CTFontDescriptorCopyAttribute(param_1,*(undefined8 *)PTR__kCTFontTraitsAttribute_11034a0e0);
  uStack_50 = param_1;
  FUN_10825dcfc();
  if ((param_1 & 1) == 0) {
    uVar6 = 0x50190;
    goto LAB_10825dcd8;
  }
  func_0x00010826054c();
  if ((param_1 & 1) == 0) {
    uStack_60 = 0;
  }
  func_0x00010826054c();
  if ((param_1 & 1) == 0) {
    uStack_68 = 0;
  }
  func_0x00010826054c();
  if ((param_1 & 1) == 0) {
    dStack_70 = 0.0;
  }
  cStack_41 = cRam000000011372a2b8;
  if (cRam000000011372a2b8 == '\0') {
    puVar3 = (undefined8 *)0x11372a2b8;
    func_0x000108260420(0x11372a2b8,&cStack_41);
    if ((int)puVar3 == 0) goto LAB_10825dc5c;
    FUN_108260824();
    puVar4 = puVar3;
    FUN_1082608f0();
    puVar7 = (undefined4 *)0x11372a388;
    for (lVar5 = 0; lVar5 != 0x44c; lVar5 = lVar5 + 100) {
      *(undefined8 *)(puVar7 + -0x2e) = *puVar3;
      puVar7[-0x2c] = (int)lVar5;
      *(undefined8 *)(puVar7 + -2) = *puVar4;
      *puVar7 = (int)lVar5;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 4;
      puVar3 = puVar3 + 1;
    }
    cRam000000011372a2b8 = '\x02';
  }
  else {
LAB_10825dc5c:
    do {
    } while (cRam000000011372a2b8 != '\x02');
  }
  lVar5 = 200;
  if (param_2 == 0) {
    lVar5 = 0x18;
  }
  lVar5 = lVar5 + 0x11372a2b8;
  func_0x00010825ff80(uStack_60,lVar5,0xb);
  iVar2 = 0xdf11218;
  func_0x00010825ff80(uStack_68,&UNK_10df11218,2);
  uVar1 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
  if (999 < (int)uVar1) {
    uVar1 = 1000;
  }
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  if (8 < iVar2) {
    iVar2 = 9;
  }
  uVar6 = 0x1000000;
  if (dStack_70 == 0.0) {
    uVar6 = 0;
  }
  uVar6 = uVar1 | iVar2 << 0x10 | uVar6;
LAB_10825dcd8:
  FUN_10825a994(&uStack_50);
  return uVar6;
}



/* Entry: 10825dcfc; end: 10825dd47;  */

bool FUN_10825dcfc(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  bVar1 = false;
  if (param_1 != 0) {
    func_0x000108260480();
    _CFGetTypeID();
    lVar2 = param_1;
    _CFDictionaryGetTypeID();
    bVar1 = param_1 == lVar2;
    if (bVar1) {
      *unaff_x19 = unaff_x20;
    }
  }
  return bVar1;
}



/* Entry: 10825dd48; end: 10825dd93;  */

void FUN_10825dd48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  _CFDictionaryGetValueIfPresent(param_1,param_2,&uStack_28);
  if ((int)param_1 != 0) {
    uVar1 = uStack_28;
    _CFNumberIsFloatType();
    if ((int)uVar1 != 0) {
      _CFNumberGetValue(uStack_28,0x10,param_3);
    }
  }
  return;
}



/* Entry: 10825dd94; end: 10825df33;  */

void FUN_10825dd94(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long unaff_x19;
  long unaff_x20;
  ulong uVar4;
  int iVar5;
  ulong uStack_60;
  ulong uStack_58;
  undefined1 auStack_50 [14];
  ushort uStack_42;
  
  func_0x000108260480();
  uVar4 = *(ulong *)(param_1 + 0x30);
  uVar1 = uVar4;
  _CTFontGetUnitsPerEm(uVar4);
  FUN_108260c64(&uStack_60,(double)(uVar1 & 0xffffffff),uVar4,*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  uVar1 = uStack_60;
  _CTFontGetGlyphCount();
  if (uVar1 << 2 != 0) {
    func_0x000108260554();
  }
  uVar4 = uStack_60;
  _CTFontCopyCharacterSet();
  if (uVar4 == 0) {
    if (uVar1 << 2 != 0) {
      func_0x000108260554();
    }
    uStack_58 = uStack_58 & 0xffffffffffff0000;
    do {
      if ((long)uVar1 < 1) break;
      uVar4 = uStack_60;
      _CTFontGetGlyphsForCharacters(uStack_60,&uStack_58,&uStack_42,1);
      if (((uVar4 & 1) != 0) && (*(int *)(unaff_x19 + (ulong)uStack_42 * 4) == 0)) {
        *(uint *)(unaff_x19 + (ulong)uStack_42 * 4) = (uint)(ushort)uStack_58;
        uVar1 = uVar1 - 1;
      }
      uVar3 = (uint)(ushort)uStack_58;
      uStack_58 = CONCAT62(uStack_58._2_6_,(short)(uVar3 + 1));
    } while (uVar3 + 1 >> 0x10 == 0);
  }
  else {
    uVar4 = 0;
    _CFCharacterSetCreateBitmapRepresentation();
    uStack_58 = uVar4;
    if ((uVar4 != 0) && (_CFDataGetLength(), uVar4 != 0)) {
      uVar2 = uStack_58;
      _CFDataGetBytePtr();
      FUN_108260004();
      if (uVar4 - 0x2000 != 0 && 0x1fff < (long)uVar4) {
        iVar5 = (int)((uVar4 - 0x2000) / 0x2001) + 1;
        while( true ) {
          uVar2 = uVar2 + 0x2001;
          iVar5 = iVar5 + -1;
          if (iVar5 < 1) break;
          FUN_108260004(uVar2,uStack_60,uVar1);
        }
      }
    }
    func_0x000108260478();
  }
  FUN_108260100(auStack_50);
  func_0x0001082604f4();
  return;
}



/* Entry: 10825df34; end: 10825e25b;  */

ulong FUN_10825df34(undefined8 *param_1,undefined8 param_2,double param_3,double param_4,
                   double param_5,undefined1 *param_6)

{
  char *pcVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  code *extraout_x8;
  long lVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  byte *pbVar15;
  double dVar16;
  char cStack_121;
  long lStack_120;
  long lStack_118;
  byte *pbStack_110;
  undefined1 *puStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 uStack_ca;
  ulong uStack_c8;
  undefined1 auStack_c0 [16];
  double adStack_b0 [14];
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *(ulong *)(param_6 + 0x30);
  uVar3 = uVar14;
  _CTFontGetUnitsPerEm();
  dVar16 = (double)(uVar3 & 0xffffffff);
  FUN_108260c64(&uStack_c8,uVar14,*(undefined8 *)(param_6 + 0x38),*(undefined8 *)(param_6 + 0x40));
  puVar4 = (undefined8 *)0x28;
  __Znwm();
  *puVar4 = 0x1138270b0;
  *(undefined4 *)(puVar4 + 1) = 0;
  pbVar15 = (byte *)((long)puVar4 + 0xd);
  pbVar15[0] = 0;
  pbVar15[1] = 0;
  pbVar15[2] = 0;
  pbVar15[3] = 0;
  pbVar15[4] = 0;
  pbVar15[5] = 0;
  pbVar15[6] = 0;
  pbVar15[7] = 0;
  *(undefined1 *)((long)puVar4 + 0xc) = 4;
  *(undefined8 *)((long)puVar4 + 0x1d) = 0;
  *(undefined8 *)((long)puVar4 + 0x15) = 0;
  *(undefined4 *)((long)puVar4 + 0x24) = 0;
  *param_1 = puVar4;
  uVar3 = uStack_c8;
  _CTFontCopyPostScriptName();
  if (uVar3 != 0) {
    FUN_10825d65c();
  }
  func_0x0001082604c4();
  puVar5 = param_6;
  FUN_10825e25c();
  if ((puVar5 != (undefined1 *)0x0) && (_CFArrayGetCount(), 0 < (long)puVar5)) {
    *pbVar15 = *pbVar15 | 1;
  }
  func_0x000108260574();
  puVar5 = param_6;
  (*extraout_x8)(param_6,0x4f532f32,8,2,&uStack_ca);
  if (puVar5 == (undefined1 *)0x2) {
    FUN_1083ba528(uStack_ca,puVar4);
  }
  func_0x000108260574();
  puVar5 = param_6;
  func_0x000108260410(param_6,0x676c7966);
  if (puVar5 == (undefined1 *)0x0) {
LAB_10825e068:
    func_0x000108260574();
    puVar5 = param_6;
    func_0x000108260410(param_6,0x43464620);
    uVar3 = 0;
    if (puVar5 != (undefined1 *)0x0) {
      uVar10 = 2;
      goto LAB_10825e084;
    }
  }
  else {
    func_0x000108260574();
    puVar5 = param_6;
    func_0x000108260410(param_6,0x6c6f6361);
    if (puVar5 == (undefined1 *)0x0) goto LAB_10825e068;
    uVar10 = 3;
LAB_10825e084:
    *(undefined1 *)((long)puVar4 + 0xc) = uVar10;
    uVar3 = uStack_c8;
    _CTFontGetSymbolicTraits();
    uVar2 = (uint)uVar3;
    if ((uVar2 >> 10 & 1) != 0) {
      *(uint *)(puVar4 + 1) = *(uint *)(puVar4 + 1) | 1;
    }
    if ((uVar3 & 1) != 0) {
      *(uint *)(puVar4 + 1) = *(uint *)(puVar4 + 1) | 0x40;
    }
    if ((uVar2 >> 0x1c == 0) || (0x50000000 < (uVar2 & 0xf0000000))) {
      if ((uVar3 & 0xa0000000) != 0) {
        uVar2 = 8;
        goto LAB_10825e0e4;
      }
    }
    else {
      uVar2 = 2;
LAB_10825e0e4:
      *(uint *)(puVar4 + 1) = *(uint *)(puVar4 + 1) | uVar2;
    }
    _CTFontGetSlantAngle(uStack_c8);
    *(short *)((long)puVar4 + 0xe) = (short)(int)dVar16;
    _CTFontGetAscent(uStack_c8);
    *(short *)(puVar4 + 2) = (short)(int)dVar16;
    _CTFontGetDescent(uStack_c8);
    *(short *)((long)puVar4 + 0x12) = (short)(int)dVar16;
    _CTFontGetCapHeight(uStack_c8);
    *(short *)((long)puVar4 + 0x16) = (short)(int)dVar16;
    _CTFontGetBoundingBox(uStack_c8);
    uStack_d8 = CONCAT44((float)param_3,(float)(dVar16 + param_4));
    uStack_e0 = CONCAT44((float)(param_3 + param_5),(float)dVar16);
    func_0x00010812f1a8(&uStack_e0,puVar4 + 3);
    *(undefined2 *)((long)puVar4 + 0x14) = 0;
    uVar3 = uStack_c8;
    _CTFontGetGlyphsForCharacters(uStack_c8,&UNK_10df111f8,auStack_40,4);
    if ((int)uVar3 != 0) {
      param_6 = auStack_c0;
      _CTFontGetBoundingRectsForGlyphs(uStack_c8,1,auStack_40,auStack_c0,4);
      iVar12 = 0x7fff;
      for (lVar11 = 0; uVar3 = uStack_c8, lVar11 != 0x80; lVar11 = lVar11 + 0x20) {
        iVar13 = (int)*(double *)((long)adStack_b0 + lVar11);
        if ((0 < iVar13) && (iVar13 < (short)iVar12)) {
          *(short *)((long)puVar4 + 0x14) = (short)iVar13;
          iVar12 = iVar13;
        }
      }
    }
  }
  func_0x0001082604e4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return uVar3;
  }
  ___stack_chk_fail();
  func_0x0001082604c4();
  puVar4 = param_1;
  func_0x00010826027c();
  func_0x0001082604e4();
  func_0x000108260544();
  pcStack_e8 = FUN_10825e25c;
  pcVar1 = (char *)((long)puVar4 + 0x62);
  cStack_121 = *pcVar1;
  if (cStack_121 != '\0') goto LAB_10825e334;
  pcVar6 = pcVar1;
  pbStack_110 = pbVar15;
  puStack_108 = param_6;
  uStack_100 = uVar3;
  puStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x000108260420(pcVar1,&cStack_121);
  if ((int)pcVar6 == 0) {
    do {
      cStack_121 = *pcVar1;
LAB_10825e334:
    } while (cStack_121 != '\x02');
    goto LAB_10825e33c;
  }
  lVar11 = puVar4[6];
  _CTFontCopyFontDescriptor();
  lStack_118 = lVar11;
  _CTFontDescriptorCopyAttribute();
  lStack_120 = lVar11;
  if (lVar11 == 0) {
LAB_10825e2e8:
    uVar9 = puVar4[6];
    _CTFontCopyVariationAxes(uVar9);
    FUN_10825b320(puVar4 + 0xb,uVar9);
  }
  else {
    lVar7 = lVar11;
    _CFGetTypeID();
    lVar8 = lVar7;
    _CFArrayGetTypeID();
    if (lVar7 != lVar8) goto LAB_10825e2e8;
    FUN_10825b320(puVar4 + 0xb,lVar11);
    lStack_120 = 0;
  }
  FUN_10825a994(&lStack_120);
  func_0x0001082604dc();
  *pcVar1 = '\x02';
LAB_10825e33c:
  return puVar4[0xb];
}



/* Entry: 10825e25c; end: 10825e353;  */

undefined8 FUN_10825e25c(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char cStack_41;
  long lStack_40;
  long lStack_38;
  
  pcVar1 = (char *)(param_1 + 0x62);
  cStack_41 = *pcVar1;
  if (cStack_41 != '\0') goto LAB_10825e334;
  pcVar2 = pcVar1;
  func_0x000108260420(pcVar1,&cStack_41);
  if ((int)pcVar2 == 0) {
    do {
      cStack_41 = *pcVar1;
LAB_10825e334:
    } while (cStack_41 != '\x02');
    goto LAB_10825e33c;
  }
  lVar3 = *(long *)(param_1 + 0x30);
  _CTFontCopyFontDescriptor();
  lStack_38 = lVar3;
  _CTFontDescriptorCopyAttribute();
  lStack_40 = lVar3;
  if (lVar3 == 0) {
LAB_10825e2e8:
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _CTFontCopyVariationAxes(uVar6);
    FUN_10825b320(param_1 + 0x58,uVar6);
  }
  else {
    lVar4 = lVar3;
    _CFGetTypeID();
    lVar5 = lVar4;
    _CFArrayGetTypeID();
    if (lVar4 != lVar5) goto LAB_10825e2e8;
    FUN_10825b320(param_1 + 0x58,lVar3);
    lStack_40 = 0;
  }
  FUN_10825a994(&lStack_40);
  func_0x0001082604dc();
  *pcVar1 = '\x02';
LAB_10825e33c:
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10825e354; end: 10825e7bf;  */

void FUN_10825e354(long *param_1,long *param_2,undefined4 *param_3)

{
  char *pcVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  code *pcVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  int *piVar24;
  uint *puVar25;
  char cStack_a1;
  long lStack_a0;
  long lStack_98;
  int aiStack_90 [2];
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  int *piStack_70;
  undefined8 uStack_68;
  
  *param_3 = 0;
  pcVar1 = (char *)((long)param_2 + 0x61);
  cStack_a1 = *pcVar1;
  cVar12 = cStack_a1;
  if (cStack_a1 != '\0') goto LAB_10825e78c;
  pcVar7 = pcVar1;
  func_0x000108260420(pcVar1,&cStack_a1);
  if ((int)pcVar7 == 0) {
    do {
      cVar12 = *pcVar1;
LAB_10825e78c:
    } while (cVar12 != '\x02');
    goto LAB_10825e794;
  }
  if (param_2[10] == 0) {
    lVar8 = param_2[6];
    _CTFontCopyAttribute(lVar8,*(undefined8 *)PTR__kCTFontFormatAttribute_11034a0a0);
    lStack_78 = lVar8;
    if (((lVar8 == 0) || (_CFNumberGetValue(), (int)lVar8 == 0)) || (4 < aiStack_90[0] - 1U)) {
      iVar21 = 0;
    }
    else {
      iVar21 = *(int *)(&UNK_10df11284 + (ulong)(aiStack_90[0] - 1U) * 4);
    }
    FUN_10825bb08(&lStack_78);
    plVar9 = param_2;
    (**(code **)(*param_2 + 0xd8))(param_2,0);
    lStack_78 = CONCAT44(lStack_78._4_4_,4);
    piStack_70 = (int *)0x0;
    uStack_68 = 0;
    func_0x00010840f168(&lStack_78,plVar9);
    piVar5 = piStack_70;
    (**(code **)(*param_2 + 0xd8))(param_2,piStack_70);
    uVar22 = (uint)plVar9;
    uVar17 = (ulong)(uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU));
    uVar15 = (ulong)(uStack_68._4_4_ & ((int)uStack_68._4_4_ >> 0x1f ^ 0xffffffffU));
    if (iVar21 == 0) {
      bVar3 = false;
      uVar19 = uVar15;
      piVar24 = piVar5;
      for (uVar18 = uVar17; uVar18 != 0; uVar18 = uVar18 - 1) {
        if (uVar19 == 0) goto LAB_10825e734;
        if (*piVar24 == 0x43464632 || *piVar24 == 0x43464620) {
          bVar3 = true;
        }
        uVar19 = uVar19 - 1;
        piVar24 = piVar24 + 1;
      }
      iVar13 = 0x100;
      iVar21 = 0x4f54544f;
LAB_10825e51c:
      if (!bVar3) {
        iVar21 = iVar13;
      }
    }
    else if (iVar21 == 0x31707974) {
      bVar3 = false;
      uVar19 = uVar15;
      piVar24 = piVar5;
      for (uVar18 = uVar17; uVar18 != 0; uVar18 = uVar18 - 1) {
        if (uVar19 == 0) goto LAB_10825e734;
        if (*piVar24 == 0x54595031 || *piVar24 == 0x43494420) {
          bVar3 = true;
        }
        uVar19 = uVar19 - 1;
        piVar24 = piVar24 + 1;
      }
      iVar13 = 0x4f54544f;
      iVar21 = 0x31707974;
      goto LAB_10825e51c;
    }
    lVar20 = 0;
    uVar18 = (long)(int)uVar22 << 4 | 0xc;
    aiStack_90[0] = 8;
    lStack_88 = 0;
    uStack_80 = 0;
    for (lVar8 = 0; lVar4 = lStack_88, uVar17 * 4 - lVar8 != 0; lVar8 = lVar8 + 4) {
      if (uVar15 << 2 == lVar8) goto LAB_10825e734;
      plVar10 = param_2;
      func_0x000108260410(*(undefined8 *)(*param_2 + 0xe0),param_2,
                          *(undefined4 *)((long)piVar5 + lVar8));
      func_0x00010840f37c(aiStack_90);
      lVar20 = (long)uStack_80._4_4_;
      uVar18 = ((long)plVar10 + 3U & 0xfffffffffffffffc) + uVar18;
      *(long **)(lStack_88 + lVar20 * 8 + -8) = plVar10;
    }
    FUN_1083464e4(&lStack_98,uVar18);
    uVar14 = 0;
    piVar24 = *(int **)(lStack_98 + 0x18);
    for (uVar16 = 1; (int)(uVar16 & 0xffff) < (int)uVar22 >> 1; uVar16 = (uVar16 & 0xffff) << 1) {
      uVar14 = uVar14 + 1;
    }
    *piVar24 = iVar21;
    uVar2 = (uVar22 - uVar16) * 0x10;
    *(ushort *)(piVar24 + 1) =
         (ushort)((ulong)plVar9 >> 8) & 0xff | (ushort)((uVar22 & 0xff00ff) << 8);
    *(ushort *)((long)piVar24 + 6) =
         (ushort)((uVar16 << 4) >> 8) & 0xff | (ushort)((uVar16 << 4 & 0xff00ff) << 8);
    *(ushort *)(piVar24 + 2) = (ushort)(uVar14 >> 8) & 0xff | (ushort)((uVar14 & 0xff00ff) << 8);
    *(ushort *)((long)piVar24 + 10) =
         (ushort)(uVar2 >> 8) & 0xff | (ushort)((uVar2 & 0xff00ff) << 8);
    puVar25 = (uint *)(piVar24 + 3);
    lVar8 = (long)puVar25 +
            (-((ulong)plVar9 >> 0x1f & 1) & 0xfffffff000000000 | ((ulong)plVar9 & 0xffffffff) << 4);
    for (uVar18 = 0; uVar17 != uVar18; uVar18 = uVar18 + 1) {
      if ((((uint)lVar20 & ((int)(uint)lVar20 >> 0x1f ^ 0xffffffffU)) == uVar18) ||
         (uVar15 == uVar18)) {
LAB_10825e734:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10825e738);
        (*pcVar6)();
      }
      lVar23 = *(long *)(lVar4 + uVar18 * 8);
      (**(code **)(*param_2 + 0xe0))(param_2,piVar5[uVar18],0,lVar23,lVar8);
      uVar22 = (piVar5[uVar18] & 0xff00ff00U) >> 8 | (piVar5[uVar18] & 0xff00ffU) << 8;
      *puVar25 = uVar22 >> 0x10 | uVar22 << 0x10;
      lVar11 = lVar8;
      FUN_1083ba30c(lVar8,lVar23);
      uVar22 = ((uint)lVar11 & 0xff00ff00) >> 8 | ((uint)lVar11 & 0xff00ff) << 8;
      uVar14 = (int)lVar8 - (int)piVar24;
      uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
      puVar25[1] = uVar22 >> 0x10 | uVar22 << 0x10;
      puVar25[2] = uVar14 >> 0x10 | uVar14 << 0x10;
      uVar22 = ((uint)lVar23 & 0xff00ff00) >> 8 | ((uint)lVar23 & 0xff00ff) << 8;
      puVar25[3] = uVar22 >> 0x10 | uVar22 << 0x10;
      lVar8 = lVar8 + (lVar23 + 3U & 0xfffffffffffffffc);
      puVar25 = puVar25 + 4;
    }
    FUN_10814c348(&lStack_a0,&lStack_98);
    lVar8 = lStack_a0;
    lStack_a0 = 0;
    lVar20 = param_2[10];
    param_2[10] = lVar8;
    if (lVar20 != 0) {
      func_0x000108260404();
      lVar8 = lStack_a0;
      lStack_a0 = 0;
      if (lVar8 != 0) {
        func_0x000108260404();
      }
    }
    func_0x0001078bddf8(&lStack_98);
    _free(lVar4);
    _free(piVar5);
  }
  *pcVar1 = '\x02';
LAB_10825e794:
  lVar8 = param_2[10];
  func_0x000108260460();
  *param_1 = lVar8;
  return;
}



/* Entry: 10825e7c0; end: 10825e7eb;  */

void FUN_10825e7c0(long *param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  
  *param_3 = 0;
  lVar1 = *(long *)(param_2 + 0x50);
  if (lVar1 != 0) {
    func_0x000108260460();
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10825e7ec; end: 10825e7f3;  */

undefined1 FUN_10825e7ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 10825e7f4; end: 10825e96b;  */

ulong FUN_10825e7f4(ulong param_1,long param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  float *pfVar12;
  double dStack_88;
  undefined8 uStack_80;
  float fStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uVar6;
  
  uVar2 = param_1;
  FUN_10825e25c();
  if (uVar2 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = uVar2;
    _CFArrayGetCount();
    if ((param_2 != 0) && ((long)uVar6 <= (long)param_3)) {
      uVar3 = *(ulong *)(param_1 + 0x30);
      _CTFontCopyVariation();
      uStack_68 = uVar3;
      if (uVar3 == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar9 = *(undefined8 *)PTR__kCTFontVariationAxisIdentifierKey_11034a100;
        uVar10 = *(undefined8 *)PTR__kCTFontVariationAxisDefaultValueKey_11034a0f8;
        uVar11 = uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU);
        pfVar12 = (float *)(param_2 + 4);
        for (uVar7 = 0; uVar8 = uVar11, uVar11 != uVar7; uVar7 = uVar7 + 1) {
          uVar4 = uVar2;
          func_0x000108260530();
          FUN_10825dcfc();
          uVar8 = uVar7;
          if ((uVar4 & 1) == 0) break;
          uVar4 = uStack_70;
          _CFDictionaryGetValue(uStack_70,uVar9);
          FUN_10825e96c();
          if ((uVar4 & 1) == 0) break;
          pfVar12[-1] = fStack_78;
          uVar4 = uVar3;
          _CFDictionaryGetValue(uVar3,uStack_80);
          if (uVar4 == 0) {
            uVar4 = uStack_70;
            _CFDictionaryGetValue(uStack_70,uVar10);
            iVar1 = (int)uVar4;
            FUN_10825e9c0();
            if (iVar1 == 0) break;
          }
          else {
            FUN_10825e9c0();
            if ((uVar4 & 1) == 0) break;
          }
          *pfVar12 = (float)dStack_88;
          pfVar12 = pfVar12 + 2;
        }
        uVar5 = (uint)uVar6;
        if ((long)uVar8 < (long)uVar6) {
          uVar5 = 0xffffffff;
        }
        uVar6 = (ulong)uVar5;
      }
      FUN_1082602d4(&uStack_68);
    }
  }
  return uVar6;
}



/* Entry: 10825e96c; end: 10825e9bf;  */

void FUN_10825e96c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_1082602f8(param_1,&uStack_38);
  if ((((int)param_1 != 0) &&
      (uVar1 = uStack_38, _CFNumberGetValue(uStack_38,0xb,param_2), (int)uVar1 != 0)) &&
     (param_3 != (undefined8 *)0x0)) {
    *param_3 = uStack_38;
  }
  return;
}



/* Entry: 10825e9c0; end: 10825e9ff;  */

void FUN_10825e9c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_1082602f8(param_1,&uStack_28);
  if ((int)param_1 != 0) {
    _CFNumberGetValue(uStack_28,0xd,param_2);
  }
  return;
}



/* Entry: 10825ea00; end: 10825ea43;  */

undefined8 FUN_10825ea00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _CTFontCopyGraphicsFont(uVar1,0);
  _CGFontGetUnitsPerEm();
  func_0x0001082604ec();
  return uVar1;
}



/* Entry: 10825ea44; end: 10825ebd3;  */

undefined8 * FUN_10825ea44(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  
  FUN_1083ba440(&puStack_38);
  puVar5 = puStack_38;
  if (puStack_38 == (undefined8 *)0x0) {
    lVar4 = *(long *)(param_1 + 0x30);
    _CTFontCopyLocalizedName(lVar4,*(undefined8 *)PTR__kCTFontFamilyNameKey_11034a090,&lStack_48);
    lStack_58 = lStack_48;
    puStack_68 = (undefined8 *)0x1138270b0;
    lStack_60 = 0x1138270b0;
    lStack_50 = lVar4;
    if (lStack_48 == 0) {
      func_0x0001083a3534(&lStack_60,&UNK_10f480001);
    }
    else {
      FUN_10825d65c(lStack_48,&lStack_60);
    }
    puStack_38 = (undefined8 *)0x1138270b0;
    if (lStack_50 != 0) {
      FUN_10825d65c(lStack_50,&puStack_68);
      puStack_38 = puStack_68;
    }
    puVar5 = (undefined8 *)0x20;
    __Znwm();
    if ((puStack_38 != (undefined8 *)0x0) && (puStack_38 != (undefined8 *)0x1138270b0)) {
      piVar1 = (int *)((long)puStack_38 + 4);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lStack_60 != 0 && lStack_60 != 0x1138270b0) {
      piVar1 = (int *)(lStack_60 + 4);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_40 = lStack_60;
    *puVar5 = &PTR_FUN_110a32940;
    FUN_1083a33c4(puVar5 + 1,&puStack_38);
    FUN_1083a33c4(puVar5 + 2,&lStack_40);
    *(undefined1 *)(puVar5 + 3) = 1;
    FUN_1083a3ca0(lStack_40);
    FUN_1083a3ca0(puStack_38);
    func_0x000108260518();
    FUN_1083a3ca0(lStack_60);
    FUN_10825b758(&lStack_58);
    func_0x0001082604c4();
  }
  return puVar5;
}



/* Entry: 10825ebd4; end: 10825ec5b;  */

ulong FUN_10825ebd4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_38;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  _CTFontCopyAvailableTables(uVar1,0);
  uStack_38 = uVar1;
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    _CFArrayGetCount();
    if (param_2 != 0) {
      for (uVar3 = 0; (uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU)) != uVar3;
          uVar3 = uVar3 + 1) {
        uVar2 = uStack_38;
        func_0x000108260530();
        *(int *)(param_2 + uVar3 * 4) = (int)uVar2;
      }
    }
  }
  FUN_10825b300(&uStack_38);
  return uVar1;
}



/* Entry: 10825ec5c; end: 10825ece7;  */

ulong FUN_10825ec5c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uStack_38;
  
  func_0x000108260568(param_1,param_2,param_2);
  if (uStack_38 != 0) {
    uVar2 = uStack_38;
    _CFDataGetLength();
    uVar1 = uVar2 - param_3;
    if (param_3 <= uVar2 && uVar1 != 0) {
      if (uVar1 <= param_4) {
        param_4 = uVar1;
      }
      if (param_5 != 0) {
        _CFDataGetBytePtr(uStack_38);
        _memcpy(param_5,uStack_38 + param_3,param_4);
      }
      goto LAB_10825ecc4;
    }
  }
  param_4 = 0;
LAB_10825ecc4:
  func_0x000108260478();
  return param_4;
}



/* Entry: 10825ece8; end: 10825ed6b;  */

void FUN_10825ece8(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_2;
  _CTFontCopyTable(param_2,param_3,0);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    _CTFontCopyGraphicsFont(param_2,0);
    _CGFontCopyTableForTag();
    FUN_108260128(param_1,param_2);
    func_0x0001082604ec();
  }
  return;
}



/* Entry: 10825ed6c; end: 10825edeb;  */

void FUN_10825ed6c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  func_0x000108260568(param_2,param_3,param_3);
  if (lStack_28 == 0) {
    *param_1 = 0;
  }
  else {
    lVar1 = lStack_28;
    _CFDataGetBytePtr();
    lVar2 = lStack_28;
    _CFDataGetLength(lStack_28);
    FUN_108346520(param_1,lVar1,lVar2,FUN_108260150,lStack_28);
  }
  func_0x000108260478();
  return;
}



/* Entry: 10825edec; end: 10825ee53;  */

void FUN_10825edec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130;
  __Znwm();
  FUN_10825c144();
  *param_1 = uVar1;
  return;
}



/* Entry: 10825ee54; end: 10825f033;  */

void FUN_10825ee54(undefined8 param_1,int param_2)

{
  ushort uVar1;
  char cVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108260480();
  FUN_1083970cc();
  uVar1 = *(ushort *)(unaff_x19 + 0x36);
  if ((uVar1 & 0x600) != 0) {
    *(undefined1 *)(unaff_x19 + 0x34) = 1;
    uVar1 = uVar1 & 0xfe7f | 0x100;
  }
  *(ushort *)(unaff_x19 + 0x36) = uVar1 & 0xf9df;
  FUN_108260580();
  uVar1 = *(ushort *)(unaff_x19 + 0x36);
  if ((uVar1 & 0x180) != 0) {
    uVar1 = uVar1 & 0xfe7f | 0x100;
    *(ushort *)(unaff_x19 + 0x36) = uVar1;
  }
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xfe7f;
    cVar2 = *(char *)(unaff_x19 + 0x34);
    *(ushort *)(unaff_x19 + 0x36) = uVar1;
    if (cVar2 == '\x04') {
      cVar2 = '\x01';
      *(char *)(unaff_x19 + 0x34) = '\x01';
    }
LAB_10825ef28:
    if ((*(byte *)(unaff_x20 + 0x48) & 1) == 0) {
      if ((cVar2 == '\x01') && ((uVar1 & 0x180) == 0)) {
        *(undefined4 *)(unaff_x19 + 0x2c) = 0xff000000;
        *(undefined1 *)(unaff_x19 + 0x30) = 0x40;
        goto LAB_10825efcc;
      }
    }
    else {
LAB_10825ef30:
      *(undefined1 *)(unaff_x19 + 0x34) = 3;
    }
  }
  else {
    cVar2 = *(char *)(unaff_x19 + 0x34);
    if (cVar2 != '\x04') goto LAB_10825ef28;
    uVar1 = uVar1 & 0xfe7f | 0x100;
    if (param_2 != 2) {
      cVar2 = '\x01';
      *(undefined1 *)(unaff_x19 + 0x34) = 1;
      *(ushort *)(unaff_x19 + 0x36) = uVar1;
      goto LAB_10825ef28;
    }
    *(undefined1 *)(unaff_x19 + 0x34) = 4;
    *(ushort *)(unaff_x19 + 0x36) = uVar1;
    if ((*(byte *)(unaff_x20 + 0x48) & 1) != 0) goto LAB_10825ef30;
  }
  FUN_1083955cc();
LAB_10825efcc:
  *(undefined1 *)(unaff_x19 + 0x32) = 0;
  return;
}



/* Entry: 10825f034; end: 10825f097;  */

bool FUN_10825f034(long param_1,long param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x30);
  _CTFontCopyPostScriptName();
  lStack_28 = lVar1;
  if ((param_2 != 0) && (lVar1 != 0)) {
    FUN_10825d65c(lVar1,param_2);
  }
  FUN_10825b758(&lStack_28);
  return lVar1 != 0;
}



/* Entry: 10825f098; end: 10825f14b;  */

void FUN_10825f098(long *param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1[6];
  _CTFontCopyFamilyName(lVar1);
  func_0x000108260560();
  FUN_1083a3680(param_2,lVar1);
  lVar1 = param_1[6];
  _CTFontCopyFullName(lVar1);
  func_0x000108260560();
  FUN_1083a3680(param_2 + 8,lVar1);
  lVar1 = param_1[6];
  _CTFontCopyPostScriptName(lVar1);
  func_0x000108260560();
  FUN_1083a3680(param_2 + 0x10,lVar1);
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  *(int *)(param_2 + 0x18) = (int)plVar2;
  *(undefined4 *)(param_2 + 0x68) = 0x63747874;
  *param_3 = (char)param_1[0xc];
  func_0x000108260518();
  return;
}



/* Entry: 10825f14c; end: 10825f2b3;  */

void FUN_10825f14c(long param_1,uint *param_2,uint param_3,undefined1 *param_4)

{
  undefined1 **ppuVar1;
  long lVar2;
  undefined1 **ppuVar3;
  ulong uVar4;
  undefined1 **ppuVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  undefined1 *puStack_1070;
  undefined1 auStack_1068 [2048];
  undefined1 *puStack_868;
  undefined1 auStack_860 [2048];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  ppuVar5 = &puStack_1070;
  puStack_868 = auStack_860;
  ppuVar3 = &puStack_868;
  FUN_10825f2b4(ppuVar3,(long)(int)(param_3 << 1));
  uVar8 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU));
  ppuVar1 = ppuVar3;
  for (uVar10 = uVar8; uVar10 != 0; uVar10 = uVar10 - 1) {
    uVar4 = (ulong)*param_2;
    FUN_10841071c(uVar4,ppuVar1);
    ppuVar1 = (undefined1 **)((long)ppuVar1 + uVar4 * 2);
    param_2 = param_2 + 1;
  }
  puStack_1070 = auStack_1068;
  lVar2 = ((long)ppuVar1 - (long)ppuVar3) * 0x80000000 >> 0x20;
  iVar9 = (int)((ulong)((long)ppuVar1 - (long)ppuVar3) >> 1);
  puVar7 = param_4;
  if ((int)param_3 < iVar9) {
    FUN_10825f2b4(&puStack_1070,lVar2);
    puVar7 = (undefined1 *)ppuVar5;
  }
  _CTFontGetGlyphsForCharacters(*(undefined8 *)(param_1 + 0x30),ppuVar3,puVar7,lVar2);
  if ((int)param_3 < iVar9) {
    uVar10 = 0;
    uVar4 = 0;
    while (uVar8 != uVar10) {
      lVar2 = uVar10 + uVar4;
      *(undefined2 *)(param_4 + uVar10 * 2) = *(undefined2 *)(puVar7 + lVar2 * 2);
      uVar10 = uVar10 + 1;
      uVar6 = (uint)uVar4;
      if ((*(ushort *)((long)ppuVar3 + lVar2 * 2) & 0xfc00) == 0xd800) {
        uVar6 = uVar6 + 1;
      }
      uVar4 = (ulong)uVar6;
    }
  }
  func_0x0001082603d4(&puStack_1070);
  func_0x0001082603d4(&puStack_868);
  return;
}



/* Entry: 10825f2b4; end: 10825f313;  */

void FUN_10825f2b4(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((long *)*param_1 != param_1 + 1) {
    _free();
  }
  if (param_2 < (long *)0x401) {
    plVar1 = (long *)0x0;
    if (param_2 != (long *)0x0) {
      plVar1 = param_1 + 1;
    }
  }
  else {
    FUN_10840ffdc(param_2,2);
    plVar1 = param_2;
  }
  *param_1 = (long)plVar1;
  return;
}



/* Entry: 10825f314; end: 10825f32b;  */

void FUN_10825f314(long param_1)

{
  _CTFontGetGlyphCount(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10825f32c; end: 10825f527;  */

void FUN_10825f32c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar1 = param_2;
  FUN_10825e25c();
  FUN_10825f528(&lStack_60,uVar3,lVar1,param_3);
  lStack_68 = 0;
  if (lStack_60 == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    _CFRetain(uVar3);
    FUN_10825b82c(&lStack_68,uVar3);
  }
  else {
    uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    func_0x000108260438();
    _CFDictionaryCreateMutable();
    uStack_78 = 0;
    uStack_70 = uVar3;
    if (lStack_58 != 0) {
      _CFDictionarySetValue();
      uVar3 = uStack_70;
      _CTFontDescriptorCreateWithAttributes();
      uStack_80 = uVar3;
      func_0x0001082604cc();
      FUN_10825b82c(&uStack_78,uVar3);
      func_0x000108260520();
    }
    _CFDictionarySetValue();
    uVar3 = uStack_70;
    _CTFontDescriptorCreateWithAttributes();
    uStack_80 = uVar3;
    func_0x0001082604cc();
    FUN_10825b82c(&lStack_68,uVar3);
    func_0x000108260520();
    func_0x0001082604e4();
    func_0x0001082604bc();
  }
  lVar1 = lStack_68;
  if (lStack_68 == 0) {
    *param_1 = 0;
  }
  else {
    lStack_68 = 0;
    lStack_88 = lVar1;
    plVar2 = *(long **)(param_2 + 0x50);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x70))();
    }
    plStack_90 = plVar2;
    FUN_10825d6d4(param_1,&lStack_88,uStack_50,uStack_48,&plStack_90);
    plVar2 = plStack_90;
    plStack_90 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      func_0x000108260404();
    }
    FUN_10825b80c(&lStack_88);
  }
  FUN_10825b80c(&lStack_68);
  FUN_108260158(&lStack_60);
  return;
}



/* Entry: 10825f528; end: 10825f8df;  */

void FUN_10825f528(undefined8 *param_1,undefined8 **param_2,ulong param_3,long param_4)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  bool bVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  double dVar25;
  undefined8 **ppuVar26;
  double dVar27;
  double dVar28;
  undefined8 *puStack_e8;
  undefined8 **ppuStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 **appuStack_90 [2];
  
  if (param_3 == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    uVar8 = param_3;
    _CFArrayGetCount();
    _CTFontCopyVariation();
    lVar23 = *(long *)(param_4 + 8);
    uVar5 = *(uint *)(param_4 + 0x10);
    uVar20 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    appuStack_90[0] = param_2;
    func_0x000108260438();
    uVar9 = uVar20;
    _CFDictionaryCreateMutable(uVar20,uVar8);
    uVar6 = 0;
    uStack_a0 = 0;
    uVar22 = *(undefined8 *)PTR__kCTFontVariationAxisIdentifierKey_11034a100;
    uVar15 = *(undefined8 *)PTR__kCTFontVariationAxisMinimumValueKey_11034a110;
    uVar16 = *(undefined8 *)PTR__kCTFontVariationAxisMaximumValueKey_11034a108;
    uVar24 = *(undefined8 *)PTR__kCTFontVariationAxisDefaultValueKey_11034a0f8;
    pfVar3 = (float *)(lVar23 + (ulong)uVar5 * 8 + 4);
    iVar2 = uVar5 + 1;
    dVar27 = 0.0;
    uStack_98 = uVar9;
    for (uVar21 = 0; uVar7 = uStack_98, uVar9 = uStack_a0,
        uVar21 != (uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU)); uVar21 = uVar21 + 1) {
      uVar10 = param_3;
      _CFArrayGetValueAtIndex(param_3,uVar21);
      FUN_10825dcfc();
      ppuVar26 = ppuStack_a8;
      if ((uVar10 & 1) == 0) {
LAB_10825f804:
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        goto LAB_10825f810;
      }
      ppuVar11 = ppuStack_a8;
      _CFDictionaryGetValue(ppuStack_a8,uVar22);
      FUN_10825e96c();
      if (((ulong)ppuVar11 & 1) == 0) goto LAB_10825f804;
      ppuVar11 = ppuVar26;
      _CFDictionaryGetValue(ppuVar26,uVar15);
      ppuVar12 = ppuVar26;
      _CFDictionaryGetValue(ppuVar26,uVar16);
      _CFDictionaryGetValue(ppuVar26,uVar24);
      FUN_10825e9c0(ppuVar11,&dStack_c0);
      if ((((int)ppuVar11 == 0) || (FUN_10825e9c0(ppuVar12,&dStack_c8), (int)ppuVar12 == 0)) ||
         (FUN_10825e9c0(ppuVar26,&dStack_d0), ((ulong)ppuVar26 & 1) == 0)) goto LAB_10825f804;
      dStack_d8 = dStack_d0;
      dVar28 = 0.0;
      pfVar18 = pfVar3;
      iVar17 = iVar2;
      if ((param_2 == (undefined8 **)0x0) ||
         (ppuVar26 = param_2, _CFDictionaryGetValue(param_2,uStack_b8),
         ppuVar26 == (undefined8 **)0x0)) {
        bVar14 = false;
      }
      else {
        FUN_10825e9c0();
        if (((ulong)ppuVar26 & 1) == 0) goto LAB_10825f804;
        bVar14 = true;
        dVar28 = dStack_d8;
      }
      do {
        if (iVar17 + -1 < 1) goto LAB_10825f758;
        pfVar19 = pfVar18 + -2;
        pfVar1 = pfVar18 + -3;
        pfVar18 = pfVar19;
        iVar17 = iVar17 + -1;
      } while (uStack_b0 != (uint)*pfVar1);
      dVar25 = (double)*pfVar19;
      dStack_d8 = dStack_c8;
      if (dVar25 <= dStack_c8) {
        dStack_d8 = dVar25;
      }
      if (dStack_d8 <= dStack_c0) {
        dStack_d8 = dStack_c0;
      }
      if (uStack_b0 == 0x6f70737a) {
        uVar6 = 1;
      }
LAB_10825f758:
      if (uStack_b0 == 0x6f70737a) {
        bVar4 = false;
        if (dStack_d8 == dVar28) {
          bVar4 = bVar14;
        }
        dVar27 = dStack_d8;
        if (bVar4) {
          ppuVar26 = (undefined8 **)(dStack_c0 + (dStack_c8 - dStack_c0) * 0.5);
          ppuStack_e0 = (undefined8 **)(dStack_c0 + (dStack_c8 - dStack_c0) * 0.25);
          if ((double)ppuVar26 != dVar28) {
            ppuStack_e0 = ppuVar26;
          }
          uVar9 = uVar20;
          func_0x000108260438(uVar20,0);
          _CFDictionaryCreateMutable();
          puVar13 = &uStack_a0;
          FUN_10825b8ac(puVar13,uVar9);
          func_0x00010826050c();
          puStack_e8 = puVar13;
          _CFDictionarySetValue(uStack_a0,uStack_b8,puVar13);
          ppuVar26 = &puStack_e8;
          FUN_10825bb08();
        }
      }
      func_0x00010826050c();
      ppuStack_e0 = ppuVar26;
      _CFDictionaryAddValue(uStack_98,uStack_b8,ppuVar26);
      FUN_10825bb08(&ppuStack_e0);
    }
    uStack_a0 = 0;
    uStack_98 = 0;
    *param_1 = uVar7;
    param_1[1] = uVar9;
    *(undefined1 *)(param_1 + 2) = uVar6;
    param_1[3] = dVar27;
LAB_10825f810:
    FUN_10825b88c(&uStack_a0);
    FUN_10825b88c(&uStack_98);
    FUN_1082602d4(appuStack_90);
  }
  return;
}



/* Entry: 10825f8e0; end: 10825fc7f;  */

void FUN_10825f8e0(undefined8 *param_1,long *param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*param_3 == 0) {
    plVar3 = (long *)*param_2;
    func_0x000108260460();
    plVar4 = plVar3;
    (**(code **)(*plVar3 + 0x58))();
    plVar5 = plVar3;
    (**(code **)(*plVar3 + 0x60))();
    if (plVar5 == (long *)0x0) {
      FUN_1083466ac(&lStack_a0,plVar3,plVar4);
      func_0x00010826048c();
    }
    else {
      FUN_108346520(&lStack_a0);
    }
    lVar6 = lStack_a0;
    if (lStack_a0 == 0) {
      *param_1 = 0;
    }
    else {
      lStack_a0 = 0;
      lStack_98 = 0;
      uStack_b0 = 0;
      uVar1 = *(undefined8 *)(lVar6 + 0x18);
      uVar2 = *(undefined8 *)(lVar6 + 0x20);
      lStack_88 = 0;
      lStack_80 = lVar6;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_58 = 0;
      uStack_50 = 0x108260198;
      uStack_48 = 0;
      lVar8 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
      lVar6 = lVar8;
      _CFAllocatorCreate(lVar8,&lStack_88);
      lVar7 = lVar8;
      lStack_d0 = lVar6;
      _CFDataCreateWithBytesNoCopy(lVar8,uVar1,uVar2,lVar6);
      lStack_90 = lVar7;
      FUN_1082601a0(&lStack_d0);
      func_0x0001078bddf8(&lStack_98);
      _CTFontManagerCreateFontDescriptorFromData();
      lStack_88 = lVar7;
      if (lVar7 != 0) {
        _CTFontCreateWithFontDescriptor(0);
      }
      lStack_a8 = lVar7;
      FUN_10825b84c(&lStack_88);
      func_0x000108260258(&lStack_90);
      func_0x0001078bddf8(&uStack_b0);
      if (lStack_a8 == 0) {
        *param_1 = 0;
      }
      else {
        lStack_90 = 0;
        lStack_88 = 0;
        uStack_70 = 0;
        lStack_80 = 0;
        uStack_78 = uStack_78 & 0xffffffffffffff00;
        if (param_3[4] == 0) {
          func_0x000108260538();
        }
        else {
          lVar6 = lStack_a8;
          _CTFontCopyVariationAxes();
          lStack_98 = lVar6;
          FUN_10825f528(&lStack_d0,lStack_a8,lVar6,param_3);
          FUN_1082601c8(&lStack_88,lStack_d0);
          uVar1 = uStack_c8;
          lStack_d0 = 0;
          uStack_c8 = 0;
          FUN_1082601c8(&lStack_80,uVar1);
          uStack_70 = uStack_b8;
          uStack_78 = uStack_c0;
          FUN_108260158(&lStack_d0);
          if (lStack_88 == 0) {
            func_0x000108260538();
          }
          else {
            func_0x000108260438();
            _CFDictionaryCreateMutable(lVar8,0);
            lStack_d0 = lVar8;
            _CFDictionaryAddValue();
            _CTFontDescriptorCreateWithAttributes();
            lVar6 = lStack_a8;
            lStack_d8 = lVar8;
            _CTFontCreateCopyWithAttributes(0,lStack_a8,0,lVar8);
            FUN_10825b82c(&lStack_90,lVar6);
            func_0x0001082604dc();
            func_0x0001082604bc();
          }
          FUN_10825b300(&lStack_98);
        }
        lVar6 = lStack_90;
        if (lStack_90 == 0) {
          *param_1 = 0;
        }
        else {
          lStack_90 = 0;
          lStack_e0 = lVar6;
          lStack_e8 = *param_2;
          *param_2 = 0;
          FUN_10825d6d4(param_1,&lStack_e0,uStack_78,uStack_70,&lStack_e8);
          lVar6 = lStack_e8;
          lStack_e8 = 0;
          if (lVar6 != 0) {
            func_0x000108260404();
          }
          FUN_10825b80c(&lStack_e0);
        }
        FUN_108260158(&lStack_88);
        FUN_10825b80c(&lStack_90);
      }
      FUN_10825b80c(&lStack_a8);
    }
    func_0x0001078bddf8(&lStack_a0);
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 10825fc80; end: 10825ff03;  */

ulong FUN_10825fc80(ulong param_1,long param_2,int param_3)

{
  int iVar1;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar14;
  ushort *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  int iStack_94;
  double dStack_90;
  double dStack_88;
  double adStack_80 [2];
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uVar2;
  ulong uVar13;
  
  FUN_10825e25c();
  if (param_1 == 0) {
    uVar13 = 0xffffffff;
  }
  else {
    uVar13 = param_1;
    _CFArrayGetCount();
    if ((param_2 != 0) && ((long)uVar13 <= (long)param_3)) {
      if ((bRam000000011372a2c8 & 1) == 0) {
        iVar1 = 0x1372a2c8;
        ___cxa_guard_acquire();
        if (iVar1 != 0) {
          puVar8 = (undefined8 *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,&UNK_10f480005);
          puRam000000011372a2c0 = puVar8;
          ___cxa_guard_release(0x11372a2c8);
        }
      }
      uVar9 = *(undefined8 *)PTR__kCTFontVariationAxisIdentifierKey_11034a100;
      uVar10 = *(undefined8 *)PTR__kCTFontVariationAxisMinimumValueKey_11034a110;
      uVar11 = *(undefined8 *)PTR__kCTFontVariationAxisMaximumValueKey_11034a108;
      uVar17 = *(undefined8 *)PTR__kCTFontVariationAxisDefaultValueKey_11034a0f8;
      uVar16 = uVar13 & ((long)uVar13 >> 0x3f ^ 0xffffffffffffffffU);
      puVar15 = (ushort *)(param_2 + 0x10);
      for (uVar14 = 0; uVar2 = uVar16, uVar16 != uVar14; uVar14 = uVar14 + 1) {
        uVar2 = param_1;
        func_0x000108260530();
        iVar1 = (int)uVar2;
        FUN_10825dcfc();
        uVar6 = uStack_70;
        uVar2 = uVar14;
        if (iVar1 == 0) break;
        uVar3 = uStack_70;
        _CFDictionaryGetValue(uStack_70,uVar9);
        iVar1 = (int)uVar3;
        FUN_10825e96c();
        if (iVar1 == 0) break;
        uVar3 = uVar6;
        _CFDictionaryGetValue(uVar6,uVar10);
        uVar4 = uVar6;
        _CFDictionaryGetValue(uVar6,uVar11);
        uVar5 = uVar6;
        _CFDictionaryGetValue(uVar6,uVar17);
        FUN_10825e9c0(uVar3,adStack_80);
        if ((((int)uVar3 == 0) || (FUN_10825e9c0(uVar4,&dStack_88), (int)uVar4 == 0)) ||
           (FUN_10825e9c0(uVar5,&dStack_90), (int)uVar5 == 0)) break;
        *(int *)(puVar15 + -8) = SUB84(adStack_80[1],0);
        *(float *)(puVar15 + -6) = (float)adStack_80[0];
        *(float *)(puVar15 + -4) = (float)dStack_90;
        *(float *)(puVar15 + -2) = (float)dStack_88;
        *puVar15 = *puVar15 & 0xfffe;
        if ((puRam000000011372a2c0 != (undefined8 *)0x0) &&
           (_CFDictionaryGetValue(uVar6,*puRam000000011372a2c0), uVar6 != 0)) {
          uVar3 = uVar6;
          _CFGetTypeID();
          uVar4 = uVar3;
          _CFBooleanGetTypeID();
          if (uVar3 == uVar4) {
            _CFBooleanGetValue();
            iVar1 = (int)uVar6;
          }
          else {
            FUN_1082602f8(uVar6,&uStack_68);
            if (((uVar6 & 1) == 0) ||
               (uVar7 = uStack_68, _CFNumberGetValue(uStack_68,9,&iStack_94), iVar1 = iStack_94,
               (int)uVar7 == 0)) break;
          }
          *puVar15 = *puVar15 & 0xfffe | (ushort)(iVar1 != 0);
        }
        puVar15 = puVar15 + 10;
      }
      uVar12 = (uint)uVar13;
      if ((long)uVar2 < (long)uVar13) {
        uVar12 = 0xffffffff;
      }
      uVar13 = (ulong)uVar12;
    }
  }
  return uVar13;
}



/* Entry: 10825ff04; end: 10825ff07;  */

undefined8 * FUN_10825ff04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a32818;
  FUN_10825b300(param_1 + 0xb);
  func_0x000108260234(param_1 + 10);
  FUN_10825b80c(param_1 + 6);
  return param_1;
}



/* Entry: 10825ff08; end: 10825ff1b;  */

void FUN_10825ff08(void)

{
  FUN_1082601f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10825ff1c; end: 10825ff6f;  */

void FUN_10825ff1c(long *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = (int *)((long)param_1 + 0xc);
  (**(code **)(*param_1 + 0x18))();
  do {
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010825ff64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1);
    return;
  }
  return;
}



/* Entry: 10825ff70; end: 108260003;  */

void FUN_10825ff70(void)

{
  return;
}



/* Entry: 108260004; end: 1082600ff;  */

void FUN_108260004(long param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined2 uStack_62;
  
  for (lVar6 = 0; lVar6 != 0x2000; lVar6 = lVar6 + 1) {
    bVar2 = *(byte *)(param_1 + lVar6);
    if (bVar2 != 0) {
      for (uVar7 = 0; uVar7 != 8; uVar7 = uVar7 + 1) {
        if ((bVar2 >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
          uVar1 = (int)lVar6 * 8 + uVar7;
          uVar3 = param_5 << 0x10 | uVar1 & 0xffff;
          uVar5 = (ulong)uVar3;
          uStack_64 = (undefined2)uVar1;
          uStack_62 = 0;
          if (param_5 == 0) {
            uVar5 = 1;
          }
          else {
            FUN_10841071c(uVar5,&uStack_64);
          }
          uStack_68 = 0;
          uVar4 = param_2;
          _CTFontGetGlyphsForCharacters(param_2,&uStack_64,&uStack_68,uVar5);
          if ((((int)uVar4 != 0) && (uVar5 = (ulong)(ushort)uStack_68, (long)uVar5 < param_3)) &&
             (*(int *)(param_4 + uVar5 * 4) < 0x20)) {
            *(uint *)(param_4 + uVar5 * 4) = uVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 108260100; end: 108260127;  */

void FUN_108260100(long param_1)

{
  func_0x0001082604fc();
  if (param_1 != 0) {
    _CFRelease();
  }
  return;
}



/* Entry: 108260128; end: 10826014f;  */

void FUN_108260128(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    _CFRelease();
  }
  return;
}



/* Entry: 108260150; end: 108260157;  */

void FUN_108260150(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRelease_11034a768)(param_2);
  return;
}



/* Entry: 108260158; end: 10826017f;  */

long FUN_108260158(long param_1)

{
  FUN_1082602d4(param_1 + 8);
  FUN_1082601c8(param_1,0);
  return param_1;
}



/* Entry: 108260180; end: 10826019f;  */

void FUN_108260180(undefined8 param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108260190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2);
    return;
  }
  return;
}



/* Entry: 1082601a0; end: 1082601c7;  */

void FUN_1082601a0(long param_1)

{
  func_0x0001082604fc();
  if (param_1 != 0) {
    _CFRelease();
  }
  return;
}



/* Entry: 1082601c8; end: 1082601ef;  */

void FUN_1082601c8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    _CFRelease();
  }
  return;
}


