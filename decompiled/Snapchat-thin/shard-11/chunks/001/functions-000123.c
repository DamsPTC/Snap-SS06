/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082601f0; end: 10826029f;  */

undefined8 * FUN_1082601f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a32818;
  FUN_10825b300(param_1 + 0xb);
  func_0x000108260234(param_1 + 10);
  FUN_10825b80c(param_1 + 6);
  return param_1;
}



/* Entry: 1082602a0; end: 1082602b7;  */

void FUN_1082602a0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1083a3c7c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1082602b8; end: 1082602d3;  */

void FUN_1082602b8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1083a3c7c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082602d4; end: 1082602f7;  */

undefined8 FUN_1082602d4(undefined8 param_1)

{
  FUN_1082601c8(param_1,0);
  return param_1;
}



/* Entry: 1082602f8; end: 108260343;  */

bool FUN_1082602f8(long param_1)

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
    _CFNumberGetTypeID();
    bVar1 = param_1 == lVar2;
    if (bVar1) {
      *unaff_x19 = unaff_x20;
    }
  }
  return bVar1;
}



/* Entry: 108260344; end: 108260347;  */

undefined8 * FUN_108260344(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a32940;
  FUN_1083a3c7c(param_1 + 2);
  FUN_1083a3c7c(param_1 + 1);
  return param_1;
}



/* Entry: 108260348; end: 10826035b;  */

void FUN_108260348(void)

{
  func_0x000108260398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10826035c; end: 108260403;  */

undefined1 FUN_10826035c(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108260480();
  func_0x0001083a34dc();
  func_0x0001083a34dc(unaff_x19 + 8,unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  *(undefined1 *)(unaff_x20 + 0x18) = 0;
  return uVar1;
}



/* Entry: 108260404; end: 10826057f;  */

void FUN_108260404(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010826040c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 108260580; end: 108260823;  */

void FUN_108260580(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined1 *puStack_840;
  undefined1 *puStack_838;
  undefined1 *puStack_830;
  undefined1 auStack_828 [1024];
  undefined1 auStack_428 [1024];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011372a438 & 1) == 0) {
    iVar3 = 0x1372a438;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      _bzero(auStack_428,0x400);
      puVar4 = auStack_828;
      _bzero(puVar4,0x400);
      _CGColorSpaceCreateDeviceRGB();
      puVar5 = auStack_428;
      puStack_830 = puVar4;
      func_0x000108260c30();
      puVar4 = auStack_828;
      puStack_838 = puVar5;
      func_0x000108260c30();
      uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
      puStack_840 = puVar4;
      _CFDataCreateWithBytesNoCopy
                (uVar6,&UNK_10df11350,0x7c0,*(undefined8 *)PTR__kCFAllocatorNull_11034ab80);
      uStack_848 = uVar6;
      _CTFontManagerCreateFontDescriptorFromData();
      uStack_850 = uVar6;
      _CTFontCreateWithFontDescriptor(0x4030000000000000);
      uStack_858 = uVar6;
      _CGContextSetShouldSmoothFonts(puStack_838,0);
      _CGContextSetShouldAntialias(puStack_838,1);
      _CGContextSetTextDrawingMode(puStack_838,0);
      func_0x000108260c58(puStack_838);
      _CGContextSetShouldSmoothFonts(puStack_840,1);
      _CGContextSetShouldAntialias(puStack_840,1);
      _CGContextSetTextDrawingMode(puStack_840,0);
      func_0x000108260c58(puStack_840);
      func_0x000108260c48(uStack_858);
      func_0x000108260c48(uStack_858);
      lVar7 = 0;
      uVar9 = 0;
      puVar4 = auStack_828;
      puVar5 = auStack_428;
      do {
        if (lVar7 == 0x10) goto LAB_108260764;
        for (lVar8 = 0; lVar8 != 0x40; lVar8 = lVar8 + 4) {
          uVar1 = *(uint *)(puVar4 + lVar8);
          uVar2 = uVar1 >> 0x10 & 0xff;
          if (uVar2 != (uVar1 >> 8 & 0xff) || uVar2 != (uVar1 & 0xff)) goto LAB_108260760;
          if (*(uint *)(puVar5 + lVar8) != uVar1) {
            uVar9 = 1;
          }
        }
        lVar7 = lVar7 + 1;
        puVar4 = puVar4 + 0x40;
        puVar5 = puVar5 + 0x40;
      } while( true );
    }
  }
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail(uRam000000011372a434);
LAB_108260760:
    uVar9 = 2;
LAB_108260764:
    FUN_10825b80c(&uStack_858);
    FUN_10825b84c(&uStack_850);
    func_0x000108260258(&uStack_848);
    func_0x00010825d520(&puStack_840);
    func_0x00010825d520(&puStack_838);
    func_0x00010825d4fc(&puStack_830);
    uRam000000011372a434 = uVar9;
    ___cxa_guard_release(0x11372a438);
  }
  return;
}



/* Entry: 108260824; end: 1082608ef;  */

undefined * FUN_108260824(int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if ((cRam0000000113826ad0 == '\0') && (FUN_108260c18(), param_1 != 0)) {
    uRam0000000113826a78 = 0xbff0000000000000;
    for (lVar2 = 0; lVar2 != 0x48; lVar2 = lVar2 + 8) {
      puVar1 = (undefined8 *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,*(undefined8 *)((long)&PTR_DAT_110a32980 + lVar2));
      if (puVar1 == (undefined8 *)0x0) goto LAB_1082608bc;
      *(undefined8 *)(lVar2 + 0x113826a80) = *puVar1;
    }
    uRam0000000113826ac8 = 0x3ff0000000000000;
    PTR_DAT_113254cb8 = (undefined *)0x113826a78;
LAB_1082608bc:
    cRam0000000113826ad0 = '\x02';
  }
  else {
    do {
    } while (cRam0000000113826ad0 != '\x02');
  }
  return PTR_DAT_113254cb8;
}



/* Entry: 1082608f0; end: 108260c17;  */

undefined * FUN_1082608f0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ushort uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  bool bVar12;
  long lVar13;
  double dVar14;
  double dStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  if ((cRam000000011372a430 == '\0') && (FUN_108260c18(), param_1 != 0)) {
    FUN_108346318(&lStack_78,&UNK_10df11350,0x7c0);
    lVar8 = *(long *)(lStack_78 + 0x18);
    lVar13 = (ulong)((uint)(*(ushort *)(lVar8 + 4) >> 8) | (*(ushort *)(lVar8 + 4) & 0xff00ff) << 8)
             + 1;
    piVar3 = (int *)(lVar8 + 0xc);
    do {
      piVar9 = piVar3;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) goto LAB_108260b60;
      piVar3 = piVar9 + 4;
    } while (*piVar9 != 0x322f534f);
    lVar13 = 0;
    uVar2 = (piVar9[2] & 0xff00ff00U) >> 8 | (piVar9[2] & 0xff00ffU) << 8;
    lVar10 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
    uVar11 = *(undefined8 *)PTR__kCTFontWeightTrait_11034a118;
    dVar14 = -1.79769313486232e+308;
    do {
      if (lVar13 == 0) {
        uVar7 = 0xb00;
      }
      else {
        if (lVar13 == 0xb) {
          dRam000000011372a440 =
               dRam000000011372a448 +
               ((dRam000000011372a448 - dRam000000011372a440) / -89.0) * 100.0;
          PTR_DAT_113254cc0 = (undefined *)0x11372a440;
          break;
        }
        uVar1 = (int)lVar13 * 100;
        uVar7 = (ushort)(uVar1 >> 8) & 0xff | (ushort)((uVar1 & 0xff00ff) << 8);
      }
      *(ushort *)(lVar8 + (ulong)(uVar2 >> 0x10 | uVar2 << 0x10) + 4) = uVar7;
      lVar4 = lVar10;
      _CFDataCreate(lVar10,*(undefined8 *)(lStack_78 + 0x18),*(undefined8 *)(lStack_78 + 0x20));
      lStack_80 = lVar4;
      if (lVar4 == 0) {
        bVar12 = false;
      }
      else {
        _CTFontManagerCreateFontDescriptorFromData();
        lStack_88 = lVar4;
        if (lVar4 == 0) {
          bVar12 = false;
        }
        else {
          _CTFontCreateWithFontDescriptor(0x4022000000000000);
          lStack_90 = lVar4;
          if (lVar4 == 0) {
            bVar12 = false;
          }
          else {
            _CTFontCopyFontDescriptor();
            lStack_98 = lVar4;
            if (lVar4 == 0) {
              bVar12 = false;
            }
            else {
              _CTFontDescriptorCopyAttribute();
              lStack_a0 = lVar4;
              if (lVar4 == 0) {
LAB_108260af0:
                bVar12 = false;
              }
              else {
                _CFGetTypeID();
                lVar5 = lVar4;
                _CFDictionaryGetTypeID();
                if (lVar4 != lVar5) goto LAB_108260af0;
                lVar4 = lStack_a0;
                _CFDictionaryGetValueIfPresent(lStack_a0,uVar11,&lStack_a8);
                bVar12 = false;
                if (((int)lVar4 != 0) && (lStack_a8 != 0)) {
                  dStack_b0 = 0.0;
                  lVar5 = lStack_a8;
                  _CFGetTypeID();
                  lVar6 = lVar5;
                  _CFNumberGetTypeID();
                  lVar4 = lStack_a8;
                  if ((lVar5 == lVar6) &&
                     ((lVar5 = lStack_a8, _CFNumberIsFloatType(), (int)lVar5 == 0 ||
                      (_CFNumberGetValue(lVar4,0x10,&dStack_b0), (int)lVar4 == 0)))) {
                    dStack_b0 = 0.0;
                  }
                  bVar12 = dVar14 < dStack_b0;
                  if (dVar14 < dStack_b0) {
                    *(double *)(lVar13 * 8 + 0x11372a440) = dStack_b0;
                    dVar14 = dStack_b0;
                  }
                }
              }
              FUN_10825a994(&lStack_a0);
            }
            FUN_10825b84c(&lStack_98);
          }
          FUN_10825b80c(&lStack_90);
        }
        FUN_10825b84c(&lStack_88);
      }
      func_0x000108260258(&lStack_80);
      lVar13 = lVar13 + 1;
    } while (bVar12);
LAB_108260b60:
    func_0x0001078bddf8(&lStack_78);
    cRam000000011372a430 = '\x02';
  }
  else {
    do {
    } while (cRam000000011372a430 != '\x02');
  }
  return PTR_DAT_113254cc0;
}



/* Entry: 108260c18; end: 108260c63;  */

/* WARNING: Removing unreachable block (ram,0x00010825bc70) */
/* WARNING: Removing unreachable block (ram,0x00010825be2c) */
/* WARNING: Removing unreachable block (ram,0x00010825be34) */
/* WARNING: Removing unreachable block (ram,0x00010825be40) */
/* WARNING: Removing unreachable block (ram,0x00010825be48) */
/* WARNING: Removing unreachable block (ram,0x00010825bd6c) */
/* WARNING: Removing unreachable block (ram,0x00010825bd74) */
/* WARNING: Removing unreachable block (ram,0x00010825bd80) */
/* WARNING: Removing unreachable block (ram,0x00010825bea8) */
/* WARNING: Removing unreachable block (ram,0x00010825bd88) */
/* WARNING: Removing unreachable block (ram,0x00010825beb0) */

undefined8 FUN_108260c18(void)

{
  char cVar1;
  bool bVar2;
  char *unaff_x19;
  undefined4 in_stack_0000000c;
  
  do {
    if (*unaff_x19 != in_stack_0000000c._3_1_) {
      bVar2 = false;
      ClearExclusiveLocal();
      goto LAB_10825beb8;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
    if (bVar2) {
      *unaff_x19 = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  bVar2 = true;
LAB_10825beb8:
  if (bVar2) {
    return 1;
  }
  return 0;
}



/* Entry: 108260c64; end: 108260e0b;  */

void FUN_108260c64(long *param_1,double param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar3 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
  lVar1 = lVar3;
  dVar4 = param_2;
  _CFDictionaryCreateMutable
            (lVar3,0,PTR__kCFTypeDictionaryKeyCallBacks_11034ac18,
             PTR__kCFTypeDictionaryValueCallBacks_11034ac20);
  lStack_60 = lVar1;
  if ((param_4 & 1) != 0) {
    FUN_108260e0c(param_5);
    goto LAB_108260d38;
  }
  lVar1 = param_3;
  _CTFontCopyAttribute(param_3,&PTR____CFConstantStringClassReference_110ed60b8);
  lStack_58 = lVar1;
  if (lVar1 == 0) {
LAB_108260d1c:
    _CTFontGetSize(param_3);
    dStack_68 = dVar4;
  }
  else {
    _CFGetTypeID();
    lVar2 = lVar1;
    _CFNumberGetTypeID();
    if (((lVar1 != lVar2) ||
        (lVar1 = lStack_58, _CFNumberGetValue(lStack_58,0xd,&dStack_68), (int)lVar1 == 0)) ||
       (dVar4 = dStack_68, dStack_68 <= 0.0)) goto LAB_108260d1c;
  }
  FUN_108260e0c(lStack_60);
  FUN_10825a994(&lStack_58);
LAB_108260d38:
  lVar1 = lStack_60;
  dStack_68 = (double)((ulong)dStack_68 & 0xffffffff00000000);
  _CFNumberCreate(lVar3,9,&dStack_68);
  lStack_58 = lVar3;
  _CFDictionarySetValue(lVar1,&PTR____CFConstantStringClassReference_110ed60d8,lVar3);
  FUN_10825bb08(&lStack_58);
  lVar1 = lStack_60;
  _CTFontDescriptorCreateWithAttributes();
  lStack_58 = lVar1;
  _CTFontCreateCopyWithAttributes(param_2,param_3,0,lVar1);
  *param_1 = param_3;
  FUN_10825b84c(&lStack_58);
  FUN_10825b88c(&lStack_60);
  return;
}



/* Entry: 108260e0c; end: 108260e7f;  */

void FUN_108260e0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  uStack_28 = param_1;
  _CFNumberCreate(uVar1,0xd,&uStack_28);
  uStack_30 = uVar1;
  _CFDictionarySetValue(param_2,&PTR____CFConstantStringClassReference_110ed60b8,uVar1);
  FUN_10825bb08(&uStack_30);
  return;
}



/* Entry: 108260e80; end: 1082617e7;  */

void FUN_108260e80(undefined8 param_1,long param_2,char *param_3,uint *****param_4)

{
  long lVar1;
  long lVar2;
  uint ***pppuVar3;
  uint uVar4;
  uint ***pppuVar5;
  uint ****ppppuVar6;
  bool bVar7;
  undefined1 uVar8;
  uint *****pppppuVar9;
  uint *****pppppuVar10;
  uint *****pppppuVar11;
  undefined4 uVar12;
  uint ***pppuVar13;
  uint *****pppppuVar14;
  undefined8 uVar15;
  undefined8 extraout_x8;
  uint *****extraout_x8_00;
  long lVar16;
  uint *****pppppuVar17;
  uint uVar18;
  uint ****ppppuVar19;
  uint ****ppppuVar20;
  uint *puVar21;
  uint *****pppppuVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  uint ****ppppuVar26;
  uint ***pppuStack_218;
  uint ***pppuStack_210;
  uint ***pppuStack_208;
  uint ***pppuStack_200;
  uint ****ppppuStack_1f0;
  long lStack_1e8;
  uint *puStack_1e0;
  uint ****ppppuStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  long lStack_1c0;
  uint ****appppuStack_1b8 [3];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  uint ****ppppuStack_188;
  uint ****ppppuStack_180;
  uint ****ppppuStack_178;
  uint ****ppppuStack_170;
  uint ****ppppuStack_168;
  uint ****ppppuStack_160;
  uint ****ppppuStack_158;
  undefined8 uStack_150;
  uint ****ppppuStack_140;
  uint **ppuStack_138;
  uint ****ppppuStack_130;
  uint ****ppppuStack_128;
  uint ****ppppuStack_120;
  uint ****ppppuStack_118;
  uint ***pppuStack_d0;
  uint ***pppuStack_c8;
  uint ***pppuStack_c0;
  uint ***pppuStack_b8;
  uint ***pppuStack_b0;
  uint ***pppuStack_a8;
  uint ***pppuStack_98;
  uint ***pppuStack_90;
  uint ***pppuStack_88;
  undefined8 uStack_80;
  
  lVar16 = param_2;
  func_0x000108263098();
  pppuStack_90 = (uint ***)0x0;
  pppuStack_88 = (uint ***)0x0;
  pppuStack_98 = (uint ***)0x0;
  pppuStack_c8 = (uint ***)0x0;
  pppuStack_d0 = (uint ***)0x0;
  pppuStack_b8 = (uint ***)0x0;
  pppuStack_c0 = (uint ***)0x0;
  pppuStack_a8 = (uint ***)0x0;
  pppuStack_b0 = (uint ***)0x0;
  ppppuStack_188 = (uint ****)0x0;
  ppppuStack_180 = (uint ****)0x0;
  ppppuStack_178 = (uint ****)0x0;
  uStack_80 = extraout_x8;
  if (*(char *)(lVar16 + 0x3c5) == '\x01') {
    func_0x000108263190(*(undefined4 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x84),
                        *(undefined4 *)(param_2 + 0x90));
    func_0x0001082630b0();
    FUN_1082617e8();
    func_0x000108263080();
    func_0x000108263190(*(undefined4 *)(param_2 + 0x7c),*(undefined4 *)(param_2 + 0x88),
                        *(undefined4 *)(param_2 + 0x94));
    func_0x0001082630b0();
    FUN_1082617e8();
    func_0x000108263080();
    func_0x000108263190(*(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x8c),
                        *(undefined4 *)(param_2 + 0x98));
    func_0x0001082630b0();
    FUN_1082617e8();
    func_0x000108263080();
  }
  FUN_1082618c8(0x3f76d5d0,0x3f800000,0x3f532ca5,&ppppuStack_130);
  func_0x0001082630b0();
  FUN_1082617e8();
  func_0x000108263080();
  if (*(char *)(param_2 + 0x3c4) == '\x01') {
    FUN_10826195c(&ppppuStack_130,param_2 + 0x18);
    func_0x000108263088();
    FUN_1082617e8();
    func_0x000108263080();
    lVar16 = param_2 + 0x38;
    _memcmp(lVar16,param_2 + 0x18,0x20);
    if ((int)lVar16 == 0) {
      func_0x0001083463dc(&ppppuStack_130);
      func_0x000108263088();
      FUN_1082617e8();
    }
    else {
      FUN_10826195c(&ppppuStack_130,param_2 + 0x38);
      func_0x000108263088();
      FUN_1082617e8();
    }
    func_0x000108263080();
    lVar16 = param_2 + 0x58;
    param_4 = (uint *****)0x20;
    _memcmp(lVar16,param_2 + 0x38);
    if ((int)lVar16 == 0) {
      func_0x0001083463dc(&ppppuStack_130);
      func_0x000108263088();
      FUN_1082617e8();
    }
    else {
      FUN_10826195c(&ppppuStack_130,param_2 + 0x58);
      func_0x000108263088();
      FUN_1082617e8();
    }
    func_0x000108263080();
  }
  if (*(char *)(param_2 + 0x3c8) == '\x01') {
    func_0x000108263144();
    ppppuStack_128 = (uint ****)0x0;
    ppppuStack_120 = (uint ****)0x0;
    ppppuStack_118 = (uint ****)0x0;
    uStack_1a0._0_4_ = 0x70636963;
    ppppuStack_130 = (uint ****)extraout_x8_00;
    func_0x00010826316c(&ppppuStack_130,&uStack_1a0);
    uStack_1a0 = (char *)((ulong)uStack_1a0._4_4_ << 0x20);
    func_0x000108263104(ppppuStack_130[2],&ppppuStack_130,&uStack_1a0);
    func_0x0001082630c8(*(undefined1 *)(param_2 + 0x3c0));
    func_0x000108263044();
    func_0x0001082630c8(*(undefined1 *)(param_2 + 0x3c1));
    func_0x000108263044();
    func_0x0001082630c8(*(undefined1 *)(param_2 + 0x3c2));
    func_0x000108263044();
    func_0x0001082630c8(*(undefined1 *)(param_2 + 0x3c3));
    func_0x000108263044();
    FUN_1083a05b4(&ppppuStack_170,&ppppuStack_130);
    FUN_1083a02a4(&ppppuStack_130);
    param_4 = &ppppuStack_170;
    FUN_1082617e8(&ppppuStack_188,0x63696370);
    FUN_108262b50(ppppuStack_170);
    uVar25 = 0x4004;
  }
  else {
    uVar25 = 0x3004;
  }
  if (*(char *)(param_2 + 0x3c6) == '\x01') {
    bVar7 = *(int *)(param_2 + 0x130) != 0;
    lVar16 = 0;
    if (bVar7) {
      lVar16 = param_2 + 0xa0;
    }
    lVar23 = 0;
    if (bVar7) {
      uVar15 = *(undefined8 *)(param_2 + 0x128);
      lVar23 = param_2 + 0x134;
    }
    else {
      uVar15 = 0;
    }
    bVar7 = *(int *)(param_2 + 0x1c8) != 0;
    lVar2 = 0;
    if (bVar7) {
      lVar2 = param_2 + 0x138;
    }
    lVar1 = 0;
    if (bVar7) {
      lVar1 = param_2 + 0x198;
    }
    param_4 = (uint *****)(param_2 + 0x1d0);
    FUN_108261b00(&ppppuStack_130,0x6d414220,param_4,lVar16,lVar23,uVar15,lVar2,lVar1);
    func_0x0001082630b0();
    FUN_1082617e8();
    func_0x000108263080();
  }
  if (*(char *)(param_2 + 0x3c7) == '\x01') {
    param_4 = (uint *****)(param_2 + 0x230);
    bVar7 = *(int *)(param_2 + 0x3bc) != 0;
    pppppuVar14 = (uint *****)0x0;
    if (bVar7) {
      pppppuVar14 = param_4;
    }
    lVar16 = 0;
    if (bVar7) {
      uVar15 = *(undefined8 *)(param_2 + 0x3b0);
      lVar16 = param_2 + 0x3b8;
    }
    else {
      uVar15 = 0;
    }
    bVar7 = *(int *)(param_2 + 0x294) != 0;
    lVar23 = 0;
    if (bVar7) {
      lVar23 = param_2 + 0x298;
    }
    lVar2 = 0;
    if (bVar7) {
      lVar2 = param_2 + 0x2f8;
    }
    FUN_108261b00(&ppppuStack_130,0x6d424120,param_4,pppppuVar14,lVar16,uVar15,lVar23,lVar2);
    func_0x0001082630b0();
    FUN_1082617e8();
    func_0x000108263080();
  }
  FUN_1082620f4(&ppppuStack_130,&UNK_10f48010d);
  func_0x0001082630b0();
  pppuVar13 = (uint ***)0x63707274;
  FUN_1082617e8();
  func_0x000108263080();
  ppppuVar19 = ppppuStack_180;
  uStack_1a0 = (char *)0x0;
  uStack_198 = 0;
  lStack_190 = 0;
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    ppppuStack_130 = (uint ****)&PTR_FUN_110a3eae8;
    ppppuStack_128 = (uint ****)0x0;
    ppppuStack_118 = (uint ****)0x1032547698badcfe;
    ppppuStack_120 = (uint ****)0xefcdab8967452301;
    for (pppppuVar14 = (uint *****)ppppuStack_188; ppppuStack_140 = (uint ****)&ppppuStack_130,
        pppppuVar14 != (uint *****)ppppuVar19; pppppuVar14 = pppppuVar14 + 2) {
      FUN_10835f3ec(ppppuStack_140,pppppuVar14,4);
      pppuVar13 = pppppuVar14[1][3];
      param_4 = (uint *****)pppppuVar14[1][4];
      FUN_10835f3ec(&ppppuStack_130);
    }
    FUN_10835fefc();
    ppuStack_138 = (uint **)pppuVar13;
    func_0x000107c278b8(appppuStack_1b8,&UNK_10f48011e);
    FUN_10835ffa8(&lStack_1c0,&ppppuStack_140);
    func_0x00010048a6c8(&ppppuStack_170,appppuStack_1b8,lStack_1c0 + 8);
    func_0x000107c27b9c(&uStack_1a0,&ppppuStack_170);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_170);
    FUN_1083a3ca0(lStack_1c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appppuStack_1b8);
    param_3 = uStack_1a0;
    if (-1 < lStack_190) {
      param_3 = (char *)&uStack_1a0;
    }
  }
  pppppuVar14 = (uint *****)ppppuStack_188;
  FUN_1082620f4(appppuStack_1b8,param_3);
  ppppuVar19 = appppuStack_1b8[0];
  if (ppppuStack_180 < ppppuStack_178) {
    if (pppppuVar14 == (uint *****)ppppuStack_180) {
      *(uint *)ppppuStack_180 = 0x64657363;
      appppuStack_1b8[0] = (uint ****)0x0;
      ppppuStack_180[1] = (uint ***)ppppuVar19;
      ppppuStack_180 = ppppuStack_180 + 2;
      pppppuVar14 = param_4;
    }
    else {
      ppppuStack_130 = (uint ****)CONCAT44(ppppuStack_130._4_4_,0x64657363);
      appppuStack_1b8[0] = (uint ****)0x0;
      ppppuStack_128 = ppppuVar19;
      pppppuVar17 = (uint *****)ppppuStack_180;
      for (pppppuVar9 = (uint *****)(ppppuStack_180 + -2); pppppuVar9 < ppppuStack_180;
          pppppuVar9 = pppppuVar9 + 2) {
        *(uint *)pppppuVar17 = *(uint *)pppppuVar9;
        ppppuVar19 = pppppuVar9[1];
        pppppuVar9[1] = (uint ****)0x0;
        pppppuVar17[1] = ppppuVar19;
        pppppuVar17 = pppppuVar17 + 2;
      }
      pppppuVar10 = (uint *****)(ppppuStack_180 + -4);
      pppppuVar9 = (uint *****)(ppppuStack_180 + -2);
      ppppuStack_180 = (uint ****)pppppuVar17;
      ppppuStack_120 = (uint ****)&ppppuStack_178;
      for (; pppppuVar10 + 2 != pppppuVar14; pppppuVar10 = pppppuVar10 + -2) {
        func_0x000108262f10(pppppuVar9);
        pppppuVar9 = pppppuVar9 + -2;
      }
      func_0x000108262f10(pppppuVar14,&ppppuStack_130);
      FUN_108262b50(ppppuStack_128);
      pppppuVar14 = param_4;
    }
  }
  else {
    pppppuVar9 = &ppppuStack_188;
    FUN_108262d20(pppppuVar9,((long)ppppuStack_180 - (long)ppppuStack_188 >> 4) + 1);
    FUN_108262d74(&ppppuStack_170,pppppuVar9,(long)pppppuVar14 - (long)ppppuStack_188 >> 4,
                  &ppppuStack_178);
    ppppuVar6 = ppppuStack_158;
    ppppuVar26 = ppppuStack_168;
    ppppuVar19 = ppppuStack_170;
    if (ppppuStack_160 == ppppuStack_158) {
      if (ppppuStack_168 < ppppuStack_170 || (long)ppppuStack_168 - (long)ppppuStack_170 == 0) {
        uVar24 = (long)ppppuStack_160 - (long)ppppuStack_170 >> 3;
        if ((long)ppppuStack_160 - (long)ppppuStack_170 == 0) {
          uVar24 = 1;
        }
        FUN_108262d74(&ppppuStack_130,uVar24,uVar24 >> 2,uStack_150);
        pppppuVar9 = (uint *****)
                     ((long)ppppuStack_120 + ((long)ppppuStack_160 - (long)ppppuStack_168));
        for (lVar16 = 0; (long)ppppuStack_160 - (long)ppppuStack_168 != lVar16;
            lVar16 = lVar16 + 0x10) {
          puVar21 = (uint *)((long)ppppuStack_168 + lVar16);
          *(uint *)ppppuStack_120 = *puVar21;
          ppppuVar20 = *(uint *****)(puVar21 + 2);
          puVar21[2] = 0;
          puVar21[3] = 0;
          ppppuStack_120[1] = (uint ***)ppppuVar20;
          ppppuStack_120 = ppppuStack_120 + 2;
        }
        ppppuStack_168 = ppppuStack_128;
        ppppuStack_170 = ppppuStack_130;
        ppppuStack_130 = ppppuVar19;
        ppppuStack_128 = ppppuVar26;
        ppppuStack_158 = ppppuStack_118;
        ppppuStack_120 = ppppuStack_160;
        ppppuStack_118 = ppppuVar6;
        func_0x000108262ec8(&ppppuStack_130);
        ppppuStack_160 = (uint ****)pppppuVar9;
      }
      else {
        lVar16 = (((long)ppppuStack_168 - (long)ppppuStack_170 >> 4) + 1) / -2;
        for (pppppuVar9 = (uint *****)ppppuStack_168; pppppuVar9 != (uint *****)ppppuStack_160;
            pppppuVar9 = pppppuVar9 + 2) {
          func_0x000108262f10(pppppuVar9 + lVar16 * 2,pppppuVar9);
        }
        ppppuStack_160 = (uint ****)(pppppuVar9 + lVar16 * 2);
        ppppuStack_168 = ppppuStack_168 + lVar16 * 2;
      }
    }
    ppppuVar19 = appppuStack_1b8[0];
    *(uint *)ppppuStack_160 = 0x64657363;
    appppuStack_1b8[0] = (uint ****)0x0;
    ppppuStack_160[1] = (uint ***)ppppuVar19;
    ppppuStack_160 = ppppuStack_160 + 2;
    FUN_108262dcc(&ppppuStack_178,pppppuVar14,ppppuStack_180);
    pppppuVar9 = (uint *****)((long)ppppuStack_160 + ((long)ppppuStack_180 - (long)pppppuVar14));
    ppppuStack_180 = (uint ****)pppppuVar14;
    pppppuVar17 = (uint *****)((long)ppppuStack_168 + ((long)ppppuStack_188 - (long)pppppuVar14));
    FUN_108262dcc(&ppppuStack_178,ppppuStack_188,pppppuVar14,pppppuVar17);
    ppppuVar19 = ppppuStack_178;
    ppppuStack_178 = ppppuStack_158;
    ppppuStack_170 = ppppuStack_188;
    ppppuStack_160 = ppppuStack_188;
    ppppuStack_158 = ppppuVar19;
    ppppuStack_168 = ppppuStack_188;
    ppppuStack_188 = (uint ****)pppppuVar17;
    ppppuStack_180 = (uint ****)pppppuVar9;
    func_0x000108262ec8(&ppppuStack_170);
  }
  FUN_108262b50(appppuStack_1b8[0]);
  lVar16 = 0;
  for (pppppuVar9 = (uint *****)ppppuStack_188; pppppuVar9 != (uint *****)ppppuStack_180;
      pppppuVar9 = pppppuVar9 + 2) {
    lVar16 = (long)pppppuVar9[1][4] + lVar16;
  }
  uVar24 = (long)ppppuStack_180 - (long)ppppuStack_188;
  lVar23 = ((long)uVar24 >> 4) * 0xc + 0x84;
  lVar16 = lVar16 + lVar23;
  uVar15 = *(undefined8 *)(param_2 + 0xc);
  FUN_108262b5c(&ppppuStack_130,lVar16);
  ppppuVar19 = ppppuStack_180;
  uVar18 = (uint)(uVar24 >> 4);
  uVar18 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
  uVar4 = ((uint)lVar16 & 0xff00ff00) >> 8 | ((uint)lVar16 & 0xff00ff) << 8;
  ppppuVar26 = (uint ****)NEON_rev32(uVar15,1);
  *(uint *)ppppuStack_130 = uVar4 >> 0x10 | uVar4 << 0x10;
  *(uint *)((long)ppppuStack_130 + 4) = 0;
  *(uint *)(ppppuStack_130 + 1) = uVar25;
  *(uint *)((long)ppppuStack_130 + 0xc) = 0x72746e6d;
  ppppuStack_130[2] = (uint ***)ppppuVar26;
  ppppuStack_130[3] = (uint ***)0x1000100e007;
  ppppuStack_130[4] = (uint ***)0x7073636100000000;
  ppppuStack_130[6] = pppuStack_90;
  ppppuStack_130[5] = pppuStack_98;
  ppppuStack_130[7] = pppuStack_88;
  ppppuStack_130[0xd] = pppuStack_b8;
  ppppuStack_130[0xc] = pppuStack_c0;
  ppppuStack_130[0xf] = pppuStack_a8;
  ppppuStack_130[0xe] = pppuStack_b0;
  ppppuStack_130[9] = (uint ***)0x2dd3000000000100;
  ppppuStack_130[8] = (uint ***)0xd6f6000001000000;
  ppppuStack_130[0xb] = pppuStack_c8;
  ppppuStack_130[10] = pppuStack_d0;
  *(uint *)(ppppuStack_130 + 0x10) = uVar18 >> 0x10 | uVar18 << 0x10;
  puVar21 = (uint *)((long)ppppuStack_130 + 0x84);
  pppuVar13 = (uint ***)0x0;
  for (pppppuVar9 = (uint *****)ppppuStack_188; pppppuVar17 = (uint *****)ppppuStack_188,
      pppppuVar9 != (uint *****)ppppuStack_180; pppppuVar9 = pppppuVar9 + 2) {
    pppuVar3 = pppuVar13;
    pppuVar5 = (uint ***)0x0;
    if (pppppuVar9[1][4] != (uint ***)0x0) {
      pppuVar3 = pppppuVar9[1][4];
      pppuVar5 = pppuVar13;
    }
    lVar23 = (long)pppuVar5 + lVar23;
    uVar25 = (*(uint *)pppppuVar9 & 0xff00ff00) >> 8 | (*(uint *)pppppuVar9 & 0xff00ff) << 8;
    uVar18 = ((uint)lVar23 & 0xff00ff00) >> 8 | ((uint)lVar23 & 0xff00ff) << 8;
    uVar4 = ((uint)pppuVar3 & 0xff00ff00) >> 8 | ((uint)pppuVar3 & 0xff00ff) << 8;
    *puVar21 = uVar25 >> 0x10 | uVar25 << 0x10;
    puVar21[1] = uVar18 >> 0x10 | uVar18 << 0x10;
    puVar21[2] = uVar4 >> 0x10 | uVar4 << 0x10;
    puVar21 = puVar21 + 3;
    pppuVar13 = pppuVar3;
  }
  for (; ppppuVar26 = ppppuStack_130, uVar8 = pppppuVar17 == (uint *****)ppppuVar19, !(bool)uVar8;
      pppppuVar17 = pppppuVar17 + 2) {
    pppppuVar14 = (uint *****)pppppuVar17[1][4];
    if (pppppuVar14 != (uint *****)0x0) {
      _memcpy(puVar21,pppppuVar17[1][3]);
      puVar21 = (uint *)((long)puVar21 + (long)pppppuVar17[1][4]);
    }
  }
  ppppuStack_130 = (uint ****)0x0;
  ppppuStack_128 = (uint ****)0x0;
  lVar23 = lVar16;
  FUN_108346490(param_1,ppppuVar26);
  uVar12 = (undefined4)lVar23;
  func_0x000108262b94(&ppppuStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1a0);
  pppppuVar9 = &ppppuStack_188;
  FUN_108262cd0();
  func_0x000108263054(uStack_80);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108262ec8(&ppppuStack_170);
  FUN_108262b50(appppuStack_1b8[0]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1a0);
  pppppuVar10 = &ppppuStack_188;
  FUN_108262cd0();
  func_0x0001082630f0();
  pcStack_1c8 = FUN_1082617e8;
  pppppuVar22 = pppppuVar10 + 2;
  ppppuVar19 = pppppuVar10[1];
  if (ppppuVar19 < *pppppuVar22) {
    *(undefined4 *)ppppuVar19 = uVar12;
    ppppuVar26 = *pppppuVar14;
    *pppppuVar14 = (uint ****)0x0;
    ppppuVar19[1] = (uint ***)ppppuVar26;
    ppppuVar19 = ppppuVar19 + 2;
  }
  else {
    pppppuVar11 = pppppuVar10;
    ppppuStack_1f0 = (uint ****)pppppuVar17;
    lStack_1e8 = lVar16;
    puStack_1e0 = puVar21;
    ppppuStack_1d8 = (uint ****)pppppuVar9;
    puStack_1d0 = &stack0xfffffffffffffff0;
    FUN_108262d20(pppppuVar10,((long)ppppuVar19 - (long)*pppppuVar10 >> 4) + 1);
    FUN_108262d74(&pppuStack_218,pppppuVar11,(long)pppppuVar10[1] - (long)*pppppuVar10 >> 4,
                  pppppuVar22);
    *(undefined4 *)pppuStack_208 = uVar12;
    ppppuVar19 = *pppppuVar14;
    *pppppuVar14 = (uint ****)0x0;
    *(uint *****)((long)pppuStack_208 + 8) = ppppuVar19;
    ppppuVar19 = (uint ****)((long)pppuStack_208 + 0x10);
    ppppuVar26 = (uint ****)((long)*pppppuVar10 + ((long)pppuStack_210 - (long)pppppuVar10[1]));
    FUN_108262dcc(pppppuVar22,*pppppuVar10,pppppuVar10[1],ppppuVar26);
    pppuStack_218 = (uint ***)*pppppuVar10;
    *pppppuVar10 = ppppuVar26;
    pppppuVar10[1] = ppppuVar19;
    ppppuVar26 = pppppuVar10[2];
    pppppuVar10[2] = (uint ****)pppuStack_200;
    pppuStack_210 = pppuStack_218;
    pppuStack_208 = pppuStack_218;
    pppuStack_200 = (uint ***)ppppuVar26;
    func_0x000108262ec8(&pppuStack_218);
  }
  pppppuVar10[1] = ppppuVar19;
  return;
}



/* Entry: 1082617e8; end: 1082618c7;  */

void FUN_1082617e8(long *param_1,undefined4 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lStack_58;
  long lStack_50;
  undefined4 *puStack_48;
  long lStack_40;
  
  plVar5 = param_1 + 2;
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 < (undefined4 *)*plVar5) {
    *puVar2 = param_2;
    uVar3 = *param_3;
    *param_3 = 0;
    *(undefined8 *)(puVar2 + 2) = uVar3;
    puVar2 = puVar2 + 4;
  }
  else {
    plVar1 = param_1;
    FUN_108262d20(param_1,((long)puVar2 - *param_1 >> 4) + 1);
    FUN_108262d74(&lStack_58,plVar1,param_1[1] - *param_1 >> 4,plVar5);
    *puStack_48 = param_2;
    uVar3 = *param_3;
    *param_3 = 0;
    *(undefined8 *)(puStack_48 + 2) = uVar3;
    puVar2 = puStack_48 + 4;
    lVar4 = lStack_50 + (*param_1 - param_1[1]);
    FUN_108262dcc(plVar5,*param_1,param_1[1],lVar4);
    lStack_58 = *param_1;
    *param_1 = lVar4;
    param_1[1] = (long)puVar2;
    lVar4 = param_1[2];
    param_1[2] = lStack_40;
    lStack_50 = lStack_58;
    puStack_48 = (undefined4 *)lStack_58;
    lStack_40 = lVar4;
    FUN_108262ec8(&lStack_58);
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 1082618c8; end: 10826195b;  */

void FUN_1082618c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 in_ZR;
  uint uVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 extraout_x8;
  uint *unaff_x20;
  ulong uVar10;
  float *pfVar11;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_84;
  undefined8 uStack_50;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined8 uStack_38;
  
  uVar8 = param_4;
  func_0x000108263098();
  uVar7 = (uint)uVar8;
  uStack_50 = 0x205a5958;
  uStack_38 = extraout_x8;
  FUN_108262ae8();
  uVar1 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  uStack_48 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_108262ae8();
  uVar1 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  uStack_44 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_108262ae8(param_3);
  uVar1 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  uStack_40 = uVar1 >> 0x10 | uVar1 << 0x10;
  piVar9 = (int *)0x14;
  FUN_108346318(param_4,&uStack_50);
  func_0x000108263054(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108263154();
    func_0x000108263144();
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    if (*piVar9 == 0) {
      uStack_84 = 0x61726170;
      func_0x0001082630d8();
      func_0x00010826316c();
      uStack_84 = 0;
      func_0x0001082630e4();
      func_0x0001082630d8();
      func_0x000108263104();
      pfVar11 = (float *)(unaff_x20 + 7);
      iVar3 = -(uint)((float)*(undefined8 *)(unaff_x20 + 2) == 1.0);
      iVar4 = -(uint)((float)((ulong)*(undefined8 *)(unaff_x20 + 2) >> 0x20) == 0.0);
      iVar5 = -(uint)((float)*(undefined8 *)(unaff_x20 + 4) == 0.0);
      iVar6 = -(uint)((float)((ulong)*(undefined8 *)(unaff_x20 + 4) >> 0x20) == 0.0);
      auVar2[1] = ~(byte)((uint)iVar3 >> 8);
      auVar2[0] = ~(byte)iVar3;
      auVar2[2] = ~(byte)((uint)iVar3 >> 0x10);
      auVar2[3] = ~(byte)((uint)iVar3 >> 0x18);
      auVar2[4] = ~(byte)iVar4;
      auVar2[5] = ~(byte)((uint)iVar4 >> 8);
      auVar2[6] = ~(byte)((uint)iVar4 >> 0x10);
      auVar2[7] = ~(byte)((uint)iVar4 >> 0x18);
      auVar2[8] = ~(byte)iVar5;
      auVar2[9] = ~(byte)((uint)iVar5 >> 8);
      auVar2[10] = ~(byte)((uint)iVar5 >> 0x10);
      auVar2[0xb] = ~(byte)((uint)iVar5 >> 0x18);
      auVar2[0xc] = ~(byte)iVar6;
      auVar2[0xd] = ~(byte)((uint)iVar6 >> 8);
      auVar2[0xe] = ~(byte)((uint)iVar6 >> 0x10);
      auVar2[0xf] = ~(byte)((uint)iVar6 >> 0x18);
      uVar1 = NEON_umaxv(auVar2,4);
      if ((((uVar1 & 1) == 0) && ((float)unaff_x20[6] == 0.0)) && (*pfVar11 == 0.0)) {
        uStack_84 = (uint)uStack_84._2_2_ << 0x10;
        func_0x0001082630e4();
        func_0x000108263034();
        uStack_84 = uStack_84 & 0xffff0000;
        func_0x0001082630e4();
        func_0x000108263034();
        pfVar11 = (float *)(unaff_x20 + 1);
      }
      else {
        uStack_84._0_2_ = 0x400;
        func_0x0001082630e4();
        func_0x000108263034();
        uStack_84 = (uint)uStack_84._2_2_ << 0x10;
        func_0x0001082630e4();
        func_0x000108263034();
        FUN_1082631b0(unaff_x20[1]);
        func_0x0001082630a8();
        FUN_1082631b0(unaff_x20[2]);
        func_0x0001082630a8();
        FUN_1082631b0(unaff_x20[3]);
        func_0x0001082630a8();
        FUN_1082631b0(unaff_x20[4]);
        func_0x0001082630a8();
        FUN_1082631b0(unaff_x20[5]);
        func_0x0001082630a8();
        FUN_1082631b0(unaff_x20[6]);
        func_0x0001082630a8();
      }
      FUN_1082631b0(*pfVar11);
      func_0x0001082630a8();
    }
    else {
      uStack_84 = 0x76727563;
      func_0x0001082630d8();
      func_0x00010826316c();
      uStack_84 = 0;
      func_0x0001082630e4();
      func_0x0001082630d8();
      func_0x000108263104();
      func_0x0001082630a8();
      for (uVar10 = 0; uVar10 < *unaff_x20; uVar10 = uVar10 + 1) {
        uStack_84 = CONCAT22(uStack_84._2_2_,*(undefined2 *)(*(long *)(unaff_x20 + 4) + uVar10 * 2))
        ;
        func_0x0001082630e4();
        func_0x000108263034();
      }
    }
    func_0x0001083a04ec(auStack_a8);
    func_0x000108263184();
    func_0x000108263134();
    return;
  }
  return;
}



/* Entry: 10826195c; end: 108261aff;  */

void FUN_10826195c(undefined8 param_1,int *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *unaff_x20;
  ulong uVar7;
  float *pfVar8;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  func_0x000108263154();
  func_0x000108263144();
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (*param_2 == 0) {
    uStack_34 = 0x61726170;
    func_0x0001082630d8();
    func_0x00010826316c();
    uStack_34 = 0;
    func_0x0001082630e4();
    func_0x0001082630d8();
    func_0x000108263104();
    pfVar8 = (float *)(unaff_x20 + 7);
    iVar2 = -(uint)((float)*(undefined8 *)(unaff_x20 + 2) == 1.0);
    iVar4 = -(uint)((float)((ulong)*(undefined8 *)(unaff_x20 + 2) >> 0x20) == 0.0);
    iVar5 = -(uint)((float)*(undefined8 *)(unaff_x20 + 4) == 0.0);
    iVar6 = -(uint)((float)((ulong)*(undefined8 *)(unaff_x20 + 4) >> 0x20) == 0.0);
    auVar1[1] = ~(byte)((uint)iVar2 >> 8);
    auVar1[0] = ~(byte)iVar2;
    auVar1[2] = ~(byte)((uint)iVar2 >> 0x10);
    auVar1[3] = ~(byte)((uint)iVar2 >> 0x18);
    auVar1[4] = ~(byte)iVar4;
    auVar1[5] = ~(byte)((uint)iVar4 >> 8);
    auVar1[6] = ~(byte)((uint)iVar4 >> 0x10);
    auVar1[7] = ~(byte)((uint)iVar4 >> 0x18);
    auVar1[8] = ~(byte)iVar5;
    auVar1[9] = ~(byte)((uint)iVar5 >> 8);
    auVar1[10] = ~(byte)((uint)iVar5 >> 0x10);
    auVar1[0xb] = ~(byte)((uint)iVar5 >> 0x18);
    auVar1[0xc] = ~(byte)iVar6;
    auVar1[0xd] = ~(byte)((uint)iVar6 >> 8);
    auVar1[0xe] = ~(byte)((uint)iVar6 >> 0x10);
    auVar1[0xf] = ~(byte)((uint)iVar6 >> 0x18);
    uVar3 = NEON_umaxv(auVar1,4);
    if ((((uVar3 & 1) == 0) && ((float)unaff_x20[6] == 0.0)) && (*pfVar8 == 0.0)) {
      uStack_34 = (uint)uStack_34._2_2_ << 0x10;
      func_0x0001082630e4();
      func_0x000108263034();
      uStack_34 = uStack_34 & 0xffff0000;
      func_0x0001082630e4();
      func_0x000108263034();
      pfVar8 = (float *)(unaff_x20 + 1);
    }
    else {
      uStack_34._0_2_ = 0x400;
      func_0x0001082630e4();
      func_0x000108263034();
      uStack_34 = (uint)uStack_34._2_2_ << 0x10;
      func_0x0001082630e4();
      func_0x000108263034();
      FUN_1082631b0(unaff_x20[1]);
      func_0x0001082630a8();
      FUN_1082631b0(unaff_x20[2]);
      func_0x0001082630a8();
      FUN_1082631b0(unaff_x20[3]);
      func_0x0001082630a8();
      FUN_1082631b0(unaff_x20[4]);
      func_0x0001082630a8();
      FUN_1082631b0(unaff_x20[5]);
      func_0x0001082630a8();
      FUN_1082631b0(unaff_x20[6]);
      func_0x0001082630a8();
    }
    FUN_1082631b0(*pfVar8);
    func_0x0001082630a8();
  }
  else {
    uStack_34 = 0x76727563;
    func_0x0001082630d8();
    func_0x00010826316c();
    uStack_34 = 0;
    func_0x0001082630e4();
    func_0x0001082630d8();
    func_0x000108263104();
    func_0x0001082630a8();
    for (uVar7 = 0; uVar7 < *unaff_x20; uVar7 = uVar7 + 1) {
      uStack_34 = CONCAT22(uStack_34._2_2_,*(undefined2 *)(*(long *)(unaff_x20 + 4) + uVar7 * 2));
      func_0x0001082630e4();
      func_0x000108263034();
    }
  }
  func_0x0001083a04ec(auStack_58);
  func_0x000108263184();
  func_0x000108263134();
  return;
}



/* Entry: 108261b00; end: 1082620f3;  */

void FUN_108261b00(long *param_1,undefined4 param_2,long param_3,long param_4,long param_5,
                  undefined2 *param_6,long param_7,long param_8)

{
  ulong uVar1;
  undefined **ppuVar2;
  bool bVar3;
  long *plVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long lVar7;
  code *extraout_x8_01;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lStack_110;
  undefined4 uStack_108;
  long alStack_e8 [9];
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  
  plVar4 = param_1;
  func_0x000108263098();
  alStack_e8[6] = 0;
  alStack_e8[7] = 0;
  alStack_e8[8] = 0;
  lVar13 = 0x20;
  uStack_70 = extraout_x8;
  for (lVar8 = 0; lVar8 != 0x18; lVar8 = lVar8 + 8) {
    FUN_10826195c(&ppuStack_a0,param_3);
    ppuVar2 = ppuStack_a0;
    ppuStack_a0 = (undefined **)0x0;
    plVar4 = (long *)((long)alStack_e8 + lVar8 + 0x30);
    FUN_108166048(plVar4,ppuVar2);
    func_0x00010826310c();
    lVar13 = *(long *)(*(long *)((long)alStack_e8 + lVar8 + 0x30) + 0x20) + lVar13;
    param_3 = param_3 + 0x20;
  }
  if (param_5 == 0) {
    lVar8 = 0;
    uStack_108 = 0;
  }
  else {
    ppuStack_a0 = &PTR_FUN_110a403f8;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    for (uVar9 = 0; uVar9 != 0x10; uVar9 = uVar9 + 1) {
      if (uVar9 < 3) {
        uVar5 = *(undefined1 *)(param_5 + uVar9);
      }
      else {
        uVar5 = 0;
      }
      alStack_e8[0] = CONCAT71(alStack_e8[0]._1_7_,uVar5);
      func_0x0001082630bc();
      func_0x000108263024();
    }
    alStack_e8[0]._0_1_ = 2;
    func_0x0001082630bc();
    func_0x000108263024();
    alStack_e8[0]._0_1_ = 0;
    func_0x0001082630bc();
    func_0x000108263024();
    alStack_e8[0]._0_1_ = 0;
    func_0x0001082630bc();
    func_0x000108263024();
    alStack_e8[0] = (ulong)alStack_e8[0]._1_7_ << 8;
    func_0x0001082630bc();
    func_0x000108263024();
    uVar6 = 3;
    for (lVar8 = 0; lVar8 != 3; lVar8 = lVar8 + 1) {
      uVar6 = uVar6 * *(byte *)(param_5 + lVar8);
    }
    for (uVar9 = (ulong)uVar6; uVar9 != 0; uVar9 = uVar9 - 1) {
      uVar1 = (ulong)alStack_e8[0] >> 0x10;
      alStack_e8[0] = CONCAT62((int6)uVar1,*param_6);
      func_0x0001082630bc();
      (*extraout_x8_00)(&ppuStack_a0,alStack_e8,2);
      param_6 = param_6 + 1;
    }
    func_0x0001083a04ec(&ppuStack_a0);
    FUN_1083a05b4(alStack_e8 + 3,&ppuStack_a0);
    func_0x00010826312c();
    lVar8 = alStack_e8[3];
    alStack_e8[3] = 0;
    plVar4 = (long *)0x0;
    FUN_108262b50();
    uStack_108 = (undefined4)lVar13;
    lVar13 = *(long *)(lVar8 + 0x20) + lVar13;
  }
  alStack_e8[3] = 0;
  alStack_e8[4] = 0;
  alStack_e8[5] = 0;
  lVar12 = lVar13;
  if (param_4 == 0) {
    lVar13 = 0;
  }
  else {
    lVar10 = 3;
    plVar16 = alStack_e8 + 3;
    lVar11 = param_4;
    do {
      FUN_10826195c(&ppuStack_a0,lVar11);
      ppuVar2 = ppuStack_a0;
      ppuStack_a0 = (undefined **)0x0;
      plVar4 = plVar16;
      FUN_108166048(plVar16,ppuVar2);
      func_0x00010826310c();
      lVar12 = *(long *)(*plVar16 + 0x20) + lVar12;
      lVar11 = lVar11 + 0x20;
      lVar10 = lVar10 + -1;
      plVar16 = plVar16 + 1;
    } while (lVar10 != 0);
  }
  if (param_8 == 0) {
    lVar10 = 0;
    lVar7 = 0;
    lVar11 = lVar12;
  }
  else {
    lVar7 = 0;
    lVar10 = param_8;
    for (lVar11 = 0; lVar11 != 3; lVar11 = lVar11 + 1) {
      lVar14 = -lVar7;
      for (lVar15 = 0; lVar15 != 0xc; lVar15 = lVar15 + 4) {
        FUN_108262ae8(*(undefined4 *)(lVar10 + lVar15));
        uVar6 = ((uint)plVar4 & 0xff00ff00) >> 8 | ((uint)plVar4 & 0xff00ff) << 8;
        *(uint *)((long)&ppuStack_a0 + lVar15 + lVar7 * 4) = uVar6 >> 0x10 | uVar6 << 0x10;
        lVar14 = lVar14 + -1;
      }
      lVar10 = lVar10 + 0x10;
      lVar7 = -lVar14;
    }
    for (lVar11 = 0; lVar11 != 0xc; lVar11 = lVar11 + 4) {
      FUN_108262ae8(*(undefined4 *)(param_8 + 0xc + lVar11 * 4));
      uVar6 = ((uint)plVar4 & 0xff00ff00) >> 8 | ((uint)plVar4 & 0xff00ff) << 8;
      *(uint *)((long)&ppuStack_a0 + lVar11 + lVar7 * 4) = uVar6 >> 0x10 | uVar6 << 0x10;
    }
    FUN_108346318(alStack_e8,&ppuStack_a0,0x30);
    lVar11 = *(long *)(alStack_e8[0] + 0x20) + lVar12;
    lVar10 = alStack_e8[0];
    lVar7 = lVar12;
    lStack_110 = lVar8;
  }
  alStack_e8[0] = 0;
  alStack_e8[1] = 0;
  alStack_e8[2] = 0;
  if (param_7 == 0) {
    lVar11 = 0;
  }
  else {
    plVar4 = alStack_e8;
    lVar15 = 3;
    lVar12 = param_7;
    do {
      FUN_10826195c(&ppuStack_a0,lVar12);
      ppuVar2 = ppuStack_a0;
      ppuStack_a0 = (undefined **)0x0;
      FUN_108166048(plVar4,ppuVar2);
      func_0x00010826310c();
      lVar12 = lVar12 + 0x20;
      plVar4 = plVar4 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  func_0x000108263144();
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x00010821d9a8(&ppuStack_a0,param_2);
  func_0x0001082630bc();
  func_0x000108263160();
  func_0x000108263104();
  func_0x0001082630bc();
  func_0x000108263160();
  func_0x000108263068();
  func_0x0001082630bc();
  func_0x000108263160();
  func_0x000108263068();
  func_0x0001082630bc();
  func_0x000108263160();
  (*extraout_x8_01)();
  func_0x0001082630bc();
  func_0x000108263160();
  func_0x000108263104();
  func_0x00010821d9a8(&ppuStack_a0,lVar7);
  func_0x00010821d9a8(&ppuStack_a0,lVar11);
  func_0x00010821d9a8(&ppuStack_a0,uStack_108);
  func_0x00010821d9a8(&ppuStack_a0,lVar13);
  for (lVar13 = 0; lVar13 != 0x18; lVar13 = lVar13 + 8) {
    func_0x000108263114();
  }
  if (lVar8 != 0) {
    func_0x000108263114();
  }
  if (param_4 != 0) {
    for (lVar13 = 0; lVar13 != 0x18; lVar13 = lVar13 + 8) {
      func_0x000108263114();
    }
  }
  if (lVar10 != 0) {
    func_0x000108263114();
  }
  if (param_7 != 0) {
    for (lVar13 = 0; lVar13 != 0x18; lVar13 = lVar13 + 8) {
      func_0x000108263114();
    }
  }
  FUN_1083a05b4(param_1,&ppuStack_a0);
  func_0x00010826312c();
  lVar13 = 0x10;
  do {
    func_0x00010826317c();
    lVar13 = lVar13 + -8;
  } while (lVar13 != -8);
  FUN_108262b50(lVar10);
  lVar13 = 0x10;
  do {
    func_0x00010826317c();
    lVar13 = lVar13 + -8;
  } while (lVar13 != -8);
  FUN_108262b50(lVar8);
  lVar8 = 0x10;
  do {
    func_0x00010826317c();
    lVar8 = lVar8 + -8;
    bVar3 = lVar8 == -8;
  } while (!bVar3);
  func_0x000108263054(uStack_70);
  if (!bVar3) {
    ___stack_chk_fail();
    FUN_108262b50(0);
    lVar8 = 0x10;
    do {
      func_0x000108263174();
      lVar8 = lVar8 + -8;
    } while (lVar8 != -8);
    FUN_108262b50(lStack_110);
    do {
      lVar8 = 0x10;
      do {
        func_0x000108263174();
        lVar8 = lVar8 + -8;
      } while (lVar8 != -8);
      func_0x0001082630f0();
    } while( true );
  }
  return;
}



/* Entry: 1082620f4; end: 1082621eb;  */

void FUN_1082620f4(undefined8 param_1,ulong param_2)

{
  undefined2 *puVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  undefined ***pppuVar5;
  long *plVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined ***pppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar14;
  undefined2 *puVar15;
  undefined8 *****pppppuVar16;
  undefined1 *puVar17;
  undefined1 *unaff_x20;
  uint uVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  undefined **ppuVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  undefined1 auStack_668 [16];
  undefined2 *puStack_658;
  undefined ***pppuStack_640;
  undefined8 *puStack_638;
  undefined ***pppuStack_630;
  long *plStack_628;
  undefined1 **ppuStack_620;
  code *pcStack_618;
  undefined8 uStack_610;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  undefined8 uStack_5f8;
  float fStack_5ec;
  undefined8 ****ppppuStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  long alStack_5d0 [6];
  undefined1 auStack_5a0 [12];
  undefined8 uStack_594;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined8 uStack_570;
  long lStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  long lStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined4 uStack_508;
  undefined4 auStack_500 [4];
  long alStack_4f0 [15];
  long lStack_478;
  undefined4 uStack_470;
  undefined1 auStack_46c [8];
  undefined8 uStack_464;
  undefined8 auStack_458 [10];
  undefined1 auStack_408 [12];
  undefined4 auStack_3fc [9];
  undefined8 uStack_3d8;
  undefined8 uStack_3cc;
  undefined8 auStack_3c0 [10];
  undefined8 uStack_36c;
  undefined8 auStack_360 [10];
  undefined4 uStack_310;
  undefined1 uStack_1e0;
  undefined1 uStack_1df;
  undefined2 uStack_1de;
  undefined1 uStack_1dc;
  undefined1 uStack_1db;
  undefined1 uStack_1da;
  undefined1 uStack_1d9;
  undefined1 uStack_1d8;
  long lStack_1d0;
  undefined1 auStack_1c8 [24];
  undefined8 *puStack_1b0;
  undefined ***pppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_140;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_38;
  
  func_0x000108263154();
  func_0x000108263098();
  uStack_38 = extraout_x8;
  _strlen();
  uVar18 = (int)param_2 << 1;
  uVar18 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
  uStack_4c = uVar18 >> 0x10 | uVar18 << 0x10;
  uStack_50 = 0x53556e65;
  uStack_48 = 0x1c000000;
  uStack_58 = 0xc00000001000000;
  uStack_60 = 0x63756c6d;
  ppuStack_88 = &PTR_FUN_110a403f8;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  puVar11 = &uStack_60;
  FUN_1083a034c(&ppuStack_88,puVar11,0x1c);
  for (param_2 = param_2 & 0xffffffff; param_2 != 0; param_2 = param_2 - 1) {
    uStack_61 = 0;
    func_0x0001082630e4();
    func_0x000108263068(&ppuStack_88,&uStack_61);
    uStack_61 = *unaff_x20;
    func_0x0001082630e4();
    puVar11 = (undefined8 *)&uStack_61;
    func_0x000108263068(&ppuStack_88);
    unaff_x20 = unaff_x20 + 1;
  }
  pppuVar5 = &ppuStack_88;
  func_0x0001083a04ec();
  func_0x000108263184();
  func_0x000108263134();
  func_0x000108263054(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108263134();
  func_0x0001082630f0();
  pcStack_98 = FUN_1082621ec;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000108263098();
  uStack_140 = extraout_x8_01;
  _bzero(auStack_5a0,0x3d0);
  uStack_594 = 0x58595a2052474220;
  uStack_520 = puVar11[1];
  uStack_528 = *puVar11;
  uStack_510 = puVar11[3];
  uStack_518 = puVar11[2];
  alStack_5d0[3] = 0;
  alStack_5d0[4] = 0;
  alStack_5d0[5] = 0;
  alStack_5d0[0] = 0;
  alStack_5d0[1] = 0;
  alStack_5d0[2] = 0;
  uStack_1db = 1;
  uStack_508 = *(undefined4 *)(puVar11 + 4);
  pppuVar7 = pppuVar5;
  FUN_108408034();
  if ((int)pppuVar7 != 0) {
    uStack_1dc = 1;
    uStack_588 = 0;
    ppuVar25 = *pppuVar5;
    uStack_57c = SUB84(pppuVar5[1],0);
    uStack_584 = SUB84(ppuVar25,0);
    uStack_580 = (undefined4)((ulong)ppuVar25 >> 0x20);
    uStack_570 = *(undefined8 *)((long)pppuVar5 + 0x14);
    uStack_558 = *(undefined8 *)((long)pppuVar5 + 0xc);
    uStack_578 = (undefined4)uStack_558;
    uStack_574 = (undefined4)((ulong)uStack_558 >> 0x20);
    uStack_560 = CONCAT44(uStack_57c,uStack_580);
    lStack_568 = (long)ppuVar25 << 0x20;
    uStack_550 = uStack_570;
    lStack_548 = lStack_568;
    uStack_540 = uStack_560;
    uStack_538 = uStack_558;
    uStack_530 = uStack_570;
  }
  func_0x0001082631a0();
  if ((((ulong)pppuVar7 & 1) != 0) ||
     (func_0x00010826313c(), uVar20 = extraout_x8_00, (int)pppuVar7 != 0)) {
    plVar6 = alStack_5d0 + 3;
    uStack_610 = extraout_x8_00;
    FUN_108262984(plVar6,0x41);
    uStack_5f8 = 0x3fc999999999999a;
    for (uVar21 = 0; iVar4 = (int)plVar6, uVar21 != 0x41; uVar21 = uVar21 + 1) {
      fVar28 = (float)(uVar21 & 0xffffffff) / 64.0;
      func_0x00010826313c();
      if (iVar4 == 0) {
        func_0x0001082631a0();
        fVar24 = fVar28;
        if (iVar4 != 0) {
          FUN_108408088(&UNK_10df11bb0);
          fVar24 = 1.0;
          if (fVar28 * 10.0 <= 1.0) {
            fVar24 = fVar28 * 10.0;
          }
        }
      }
      else {
        FUN_108408088(fVar28,&UNK_10df11b94);
        dVar29 = (double)(fVar28 / 12.0);
        dVar26 = dVar29;
        _pow(dVar29,uStack_5f8);
        fVar24 = (float)(dVar26 * dVar29);
      }
      fVar24 = fVar24 * 4.9261084;
      plVar6 = (long *)0xffff;
      func_0x0001082629b4(fVar24 * ((fVar24 * 0.041208997 + 1.0) / (fVar24 + 1.0)));
      *(ushort *)(alStack_5d0[3] + uVar21 * 2) =
           (ushort)((ulong)plVar6 >> 8) & 0xff | (ushort)(((uint)plVar6 & 0xff00ff) << 8);
    }
    plVar6 = alStack_5d0;
    FUN_108262984(plVar6,0xf99);
    lVar19 = 0;
    fStack_5fc = 0.678;
    fStack_600 = 0.2627;
    fStack_604 = 0.0593;
    for (uVar18 = 0; uVar18 != 0xb; uVar18 = uVar18 + 1) {
      fStack_5ec = (float)uVar18 / 10.0;
      for (uVar22 = 0; uVar22 != 0xb; uVar22 = uVar22 + 1) {
        for (uVar23 = 0; uVar23 != 0xb; uVar23 = uVar23 + 1) {
          uStack_1a0 = (undefined **)CONCAT44((float)uVar22 / 10.0,fStack_5ec);
          uStack_198 = CONCAT44(uStack_198._4_4_,(float)uVar23 / 10.0);
          for (lVar14 = 0; lVar14 != 0xc; lVar14 = lVar14 + 4) {
            fVar28 = 1.0 - *(float *)((long)&uStack_1a0 + lVar14);
            fVar27 = *(float *)((long)&uStack_1a0 + lVar14) * 0.16483599 + fVar28 * fVar28;
            fVar24 = 0.0;
            if (0.0 <= fVar27) {
              fVar24 = (SQRT(fVar27) - fVar28) / 0.082417995;
            }
            *(float *)((long)&uStack_1a0 + lVar14) = fVar24;
          }
          func_0x00010826313c();
          if ((int)plVar6 != 0) {
            for (lVar14 = 0; lVar14 != 0xc; lVar14 = lVar14 + 4) {
              *(float *)((long)&uStack_1a0 + lVar14) =
                   *(float *)((long)&uStack_1a0 + lVar14) / 4.9261084;
            }
            for (lVar14 = 0; lVar14 != 0xc; lVar14 = lVar14 + 4) {
              dVar26 = (double)*(float *)((long)&uStack_1a0 + lVar14);
              _pow(dVar26,0x3feaaaaaaaaaaaab);
              *(float *)((long)&uStack_1a0 + lVar14) = (float)dVar26;
            }
            dVar26 = (double)(uStack_1a0._4_4_ * fStack_5fc + fStack_600 * (float)uStack_1a0 +
                             fStack_604 * (float)uStack_198);
            _pow(dVar26,uStack_5f8);
            for (lVar14 = 0; lVar14 != 0xc; lVar14 = lVar14 + 4) {
              *(float *)((long)&uStack_1a0 + lVar14) =
                   (float)(dVar26 * (double)*(float *)((long)&uStack_1a0 + lVar14));
            }
            for (lVar14 = 0; lVar14 != 0xc; lVar14 = lVar14 + 4) {
              *(float *)((long)&uStack_1a0 + lVar14) =
                   *(float *)((long)&uStack_1a0 + lVar14) * 4.9261084;
            }
          }
          lVar2 = alStack_5d0[0];
          lVar14 = 0;
          fVar28 = uStack_1a0._4_4_;
          if (uStack_1a0._4_4_ <= (float)uStack_1a0) {
            fVar28 = (float)uStack_1a0;
          }
          fVar24 = (float)uStack_198;
          if ((float)uStack_198 <= fVar28) {
            fVar24 = fVar28;
          }
          for (; lVar14 != 0xc; lVar14 = lVar14 + 4) {
            fVar28 = (fVar24 + *(float *)((long)&uStack_1a0 + lVar14)) * 0.5;
            fVar27 = *(float *)((long)&uStack_1a0 + lVar14) *
                     ((fVar28 * 0.041208997 + 1.0) / (fVar28 + 1.0));
            fVar28 = 1.0;
            if (fVar27 <= 1.0) {
              fVar28 = fVar27;
            }
            *(float *)((long)&uStack_1a0 + lVar14) = fVar28;
          }
          for (lVar14 = 0; lVar14 != 0xc; lVar14 = lVar14 + 4) {
            plVar6 = (long *)0x8000;
            func_0x0001082629b4(*(undefined4 *)((long)&uStack_1a0 + lVar14));
            *(ushort *)(lVar2 + lVar19 * 2) =
                 (ushort)((ulong)plVar6 >> 8) & 0xff | (ushort)(((uint)plVar6 & 0xff00ff) << 8);
            lVar19 = lVar19 + 1;
          }
        }
      }
    }
    uStack_1da = 1;
    uStack_470 = 3;
    uStack_3d8 = 0x300000003;
    puVar17 = auStack_408;
    pppuVar7 = (undefined ***)0x41;
    puVar8 = puVar11;
    for (lVar19 = 0; lVar19 != 3; lVar19 = lVar19 + 1) {
      auStack_46c[lVar19] = 0xb;
      auStack_500[lVar19 * 8] = 0x41;
      alStack_4f0[lVar19 * 4] = alStack_5d0[3];
      *(undefined8 *)(&stack0xfffffffffffffc3c + lVar19 * 0x20) = 0;
      (&uStack_3cc)[lVar19 * 4] = 0x3f8000003f800000;
      auStack_3c0[lVar19 * 4 + 1] = 0;
      auStack_3c0[lVar19 * 4] = 0;
      *(undefined8 *)(&stack0xfffffffffffffba4 + lVar19 * 0x20) = 0;
      (&uStack_464)[lVar19 * 4] = 0x3f8000003f800000;
      auStack_458[lVar19 * 4 + 1] = 0;
      auStack_458[lVar19 * 4] = 0;
      for (lVar14 = 0; lVar14 != 0xc; lVar14 = lVar14 + 4) {
        *(undefined4 *)(puVar17 + lVar14) = *(undefined4 *)((long)puVar8 + lVar14);
      }
      auStack_3fc[lVar19 * 4] = 0;
      puVar8 = (undefined8 *)((long)puVar8 + 0xc);
      puVar17 = puVar17 + 0x10;
    }
    lStack_478 = alStack_5d0[0];
    uStack_1d9 = 1;
    uStack_310 = 3;
    for (lVar19 = 0; uVar20 = uStack_610, lVar19 != 0x60; lVar19 = lVar19 + 0x20) {
      *(undefined8 *)(&stack0xfffffffffffffc9c + lVar19) = 0;
      *(undefined8 *)((long)&uStack_36c + lVar19) = 0x3f8000003f800000;
      *(undefined8 *)((long)auStack_360 + lVar19 + 8) = 0;
      *(undefined8 *)((long)auStack_360 + lVar19) = 0;
    }
  }
  func_0x00010826313c();
  iVar4 = (int)pppuVar7;
  if ((((ulong)pppuVar7 & 1) != 0) || (func_0x0001082631a0(), iVar4 != 0)) {
    uStack_1d8 = 1;
    puVar8 = puVar11;
    FUN_1082629e4();
    uStack_1e0 = SUB81(puVar8,0);
    pppuVar7 = pppuVar5;
    func_0x000108262a50();
    uStack_1df = SUB81(pppuVar7,0);
    uStack_1de = 0x100;
  }
  pppuVar7 = pppuVar5;
  func_0x000108262a50();
  puVar8 = puVar11;
  FUN_1082629e4();
  if ((int)pppuVar7 == 1 && (int)puVar8 == 1) {
    func_0x000107c278b8(&ppppuStack_5e8,&UNK_10f48012b);
  }
  else if (((int)pppuVar7 == 0) || ((int)puVar8 == 0)) {
    uStack_1a0 = &PTR_FUN_110a3eae8;
    uStack_198 = 0;
    uStack_188 = 0x1032547698badcfe;
    uStack_190 = 0xefcdab8967452301;
    FUN_10835f3ec(&uStack_1a0,puVar11,0x24);
    pppuVar12 = pppuVar5;
    FUN_10835f3ec(&uStack_1a0,pppuVar5,0x1c);
    puVar8 = &uStack_1a0;
    FUN_10835fefc();
    puStack_1b0 = puVar8;
    pppuStack_1a8 = pppuVar12;
    func_0x000107c278b8(auStack_1c8,&UNK_10f48011e);
    FUN_10835ffa8(&lStack_1d0,&puStack_1b0);
    func_0x00010048a6c8(&ppppuStack_5e8,auStack_1c8,lStack_1d0 + 8);
    FUN_1083a3ca0(lStack_1d0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
  }
  else {
    ppppuStack_5e8 = (undefined8 *****)0x0;
    uStack_5e0 = 0;
    uStack_5d8 = 0;
    func_0x000108263124();
    func_0x000108263124();
    func_0x000108263124();
    func_0x000108263124();
  }
  uVar3 = uStack_5d8._7_1_ == '\0';
  pppppuVar13 = (undefined8 *****)ppppuStack_5e8;
  if (-1 < uStack_5d8) {
    pppppuVar13 = &ppppuStack_5e8;
  }
  FUN_108260e80(uVar20,auStack_5a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_5e8);
  func_0x00010730b05c(alStack_5d0);
  plVar6 = alStack_5d0 + 3;
  func_0x00010730b05c();
  func_0x000108263054(uStack_140);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    FUN_1083a3ca0(lStack_1d0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
    func_0x00010730b05c(alStack_5d0);
    plVar9 = alStack_5d0 + 3;
    func_0x00010730b05c();
    func_0x0001082630f0();
    pppppuVar16 = (undefined8 *****)(plVar9[1] - *plVar9 >> 1);
    if (pppppuVar13 <= pppppuVar16) {
      if (pppppuVar13 < pppppuVar16) {
        plVar9[1] = *plVar9 + (long)pppppuVar13 * 2;
      }
      return;
    }
    uVar21 = (long)pppppuVar13 - (long)pppppuVar16;
    pcStack_618 = FUN_108262984;
    pppuStack_640 = pppuVar7;
    puStack_638 = puVar11;
    pppuStack_630 = pppuVar5;
    plStack_628 = plVar6;
    ppuStack_620 = &puStack_a0;
    func_0x000108263154();
    if (uVar21 <= (ulong)(plVar9[2] - plVar9[1] >> 1)) {
      puVar15 = (undefined2 *)plVar6[1];
      puVar1 = puVar15;
      for (lVar19 = (long)pppuVar5 << 1; lVar19 != 0; lVar19 = lVar19 + -2) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
      plVar6[1] = (long)(puVar15 + (long)pppuVar5);
      return;
    }
    plVar10 = plVar6;
    func_0x00010730bcd0(plVar6,(long)pppuVar5 + (plVar9[1] - *plVar6 >> 1));
    func_0x00010730babc(auStack_668,plVar10,plVar6[1] - *plVar6 >> 1,plVar9 + 2);
    puVar1 = puStack_658;
    for (lVar19 = (long)pppuVar5 << 1; lVar19 != 0; lVar19 = lVar19 + -2) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    puStack_658 = puStack_658 + (long)pppuVar5;
    func_0x00010730ba50(plVar6,auStack_668);
    func_0x00010730bb04(auStack_668);
    return;
  }
  return;
}



/* Entry: 1082621ec; end: 108262983;  */

void FUN_1082621ec(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  long lVar2;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *****pppppuVar9;
  undefined8 extraout_x8;
  long lVar10;
  undefined2 *puVar11;
  undefined8 *****pppppuVar12;
  undefined1 *puVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  undefined1 auStack_5d8 [16];
  undefined2 *puStack_5c8;
  long *plStack_5b0;
  undefined8 *puStack_5a8;
  long *plStack_5a0;
  long *plStack_598;
  undefined1 *puStack_590;
  code *pcStack_588;
  undefined8 uStack_580;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  undefined8 uStack_568;
  float fStack_55c;
  undefined8 ****ppppuStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  long alStack_540 [6];
  undefined1 auStack_510 [12];
  undefined8 uStack_504;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined8 uStack_4e0;
  long lStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined4 uStack_478;
  undefined4 auStack_470 [4];
  long alStack_460 [15];
  long lStack_3e8;
  undefined4 uStack_3e0;
  undefined1 auStack_3dc [8];
  undefined8 uStack_3d4;
  undefined8 auStack_3c8 [10];
  undefined1 auStack_378 [12];
  undefined4 auStack_36c [9];
  undefined8 uStack_348;
  undefined8 uStack_33c;
  undefined8 auStack_330 [10];
  undefined8 uStack_2dc;
  undefined8 auStack_2d0 [10];
  undefined4 uStack_280;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined2 uStack_14e;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  undefined1 uStack_14a;
  undefined1 uStack_149;
  undefined1 uStack_148;
  long lStack_140;
  undefined1 auStack_138 [24];
  undefined8 *puStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_b0;
  
  func_0x000108263098();
  uStack_b0 = extraout_x8;
  _bzero(auStack_510,0x3d0);
  uStack_504 = 0x58595a2052474220;
  uStack_490 = param_3[1];
  uStack_498 = *param_3;
  uStack_480 = param_3[3];
  uStack_488 = param_3[2];
  alStack_540[3] = 0;
  alStack_540[4] = 0;
  alStack_540[5] = 0;
  alStack_540[0] = 0;
  alStack_540[1] = 0;
  alStack_540[2] = 0;
  uStack_14b = 1;
  uStack_478 = *(undefined4 *)(param_3 + 4);
  plVar5 = param_2;
  FUN_108408034();
  if ((int)plVar5 != 0) {
    uStack_14c = 1;
    uStack_4f8 = 0;
    lStack_4d8 = *param_2;
    uStack_4ec = (undefined4)param_2[1];
    uStack_4f4 = (undefined4)lStack_4d8;
    uStack_4f0 = (undefined4)((ulong)lStack_4d8 >> 0x20);
    uStack_4e0 = *(undefined8 *)((long)param_2 + 0x14);
    uStack_4c8 = *(undefined8 *)((long)param_2 + 0xc);
    uStack_4e8 = (undefined4)uStack_4c8;
    uStack_4e4 = (undefined4)((ulong)uStack_4c8 >> 0x20);
    uStack_4d0 = CONCAT44(uStack_4ec,uStack_4f0);
    lStack_4d8 = lStack_4d8 << 0x20;
    uStack_4c0 = uStack_4e0;
    lStack_4b8 = lStack_4d8;
    uStack_4b0 = uStack_4d0;
    uStack_4a8 = uStack_4c8;
    uStack_4a0 = uStack_4e0;
  }
  func_0x0001082631a0();
  if ((((ulong)plVar5 & 1) != 0) || (func_0x00010826313c(), (int)plVar5 != 0)) {
    plVar5 = alStack_540 + 3;
    uStack_580 = param_1;
    FUN_108262984(plVar5,0x41);
    uStack_568 = 0x3fc999999999999a;
    for (uVar16 = 0; iVar4 = (int)plVar5, uVar16 != 0x41; uVar16 = uVar16 + 1) {
      fVar22 = (float)(uVar16 & 0xffffffff) / 64.0;
      func_0x00010826313c();
      if (iVar4 == 0) {
        func_0x0001082631a0();
        fVar19 = fVar22;
        if (iVar4 != 0) {
          FUN_108408088(&UNK_10df11bb0);
          fVar19 = 1.0;
          if (fVar22 * 10.0 <= 1.0) {
            fVar19 = fVar22 * 10.0;
          }
        }
      }
      else {
        FUN_108408088(fVar22,&UNK_10df11b94);
        dVar23 = (double)(fVar22 / 12.0);
        dVar20 = dVar23;
        _pow(dVar23,uStack_568);
        fVar19 = (float)(dVar20 * dVar23);
      }
      fVar19 = fVar19 * 4.9261084;
      plVar5 = (long *)0xffff;
      func_0x0001082629b4(fVar19 * ((fVar19 * 0.041208997 + 1.0) / (fVar19 + 1.0)));
      *(ushort *)(alStack_540[3] + uVar16 * 2) =
           (ushort)((ulong)plVar5 >> 8) & 0xff | (ushort)(((uint)plVar5 & 0xff00ff) << 8);
    }
    plVar5 = alStack_540;
    FUN_108262984(plVar5,0xf99);
    lVar15 = 0;
    fStack_56c = 0.678;
    fStack_570 = 0.2627;
    fStack_574 = 0.0593;
    for (uVar14 = 0; uVar14 != 0xb; uVar14 = uVar14 + 1) {
      fStack_55c = (float)uVar14 / 10.0;
      for (uVar17 = 0; uVar17 != 0xb; uVar17 = uVar17 + 1) {
        for (uVar18 = 0; uVar18 != 0xb; uVar18 = uVar18 + 1) {
          uStack_110 = (undefined **)CONCAT44((float)uVar17 / 10.0,fStack_55c);
          uStack_108 = CONCAT44(uStack_108._4_4_,(float)uVar18 / 10.0);
          for (lVar10 = 0; lVar10 != 0xc; lVar10 = lVar10 + 4) {
            fVar22 = 1.0 - *(float *)((long)&uStack_110 + lVar10);
            fVar21 = *(float *)((long)&uStack_110 + lVar10) * 0.16483599 + fVar22 * fVar22;
            fVar19 = 0.0;
            if (0.0 <= fVar21) {
              fVar19 = (SQRT(fVar21) - fVar22) / 0.082417995;
            }
            *(float *)((long)&uStack_110 + lVar10) = fVar19;
          }
          func_0x00010826313c();
          if ((int)plVar5 != 0) {
            for (lVar10 = 0; lVar10 != 0xc; lVar10 = lVar10 + 4) {
              *(float *)((long)&uStack_110 + lVar10) =
                   *(float *)((long)&uStack_110 + lVar10) / 4.9261084;
            }
            for (lVar10 = 0; lVar10 != 0xc; lVar10 = lVar10 + 4) {
              dVar20 = (double)*(float *)((long)&uStack_110 + lVar10);
              _pow(dVar20,0x3feaaaaaaaaaaaab);
              *(float *)((long)&uStack_110 + lVar10) = (float)dVar20;
            }
            dVar20 = (double)(uStack_110._4_4_ * fStack_56c + fStack_570 * (float)uStack_110 +
                             fStack_574 * (float)uStack_108);
            _pow(dVar20,uStack_568);
            for (lVar10 = 0; lVar10 != 0xc; lVar10 = lVar10 + 4) {
              *(float *)((long)&uStack_110 + lVar10) =
                   (float)(dVar20 * (double)*(float *)((long)&uStack_110 + lVar10));
            }
            for (lVar10 = 0; lVar10 != 0xc; lVar10 = lVar10 + 4) {
              *(float *)((long)&uStack_110 + lVar10) =
                   *(float *)((long)&uStack_110 + lVar10) * 4.9261084;
            }
          }
          lVar2 = alStack_540[0];
          lVar10 = 0;
          fVar22 = uStack_110._4_4_;
          if (uStack_110._4_4_ <= (float)uStack_110) {
            fVar22 = (float)uStack_110;
          }
          fVar19 = (float)uStack_108;
          if ((float)uStack_108 <= fVar22) {
            fVar19 = fVar22;
          }
          for (; lVar10 != 0xc; lVar10 = lVar10 + 4) {
            fVar22 = (fVar19 + *(float *)((long)&uStack_110 + lVar10)) * 0.5;
            fVar21 = *(float *)((long)&uStack_110 + lVar10) *
                     ((fVar22 * 0.041208997 + 1.0) / (fVar22 + 1.0));
            fVar22 = 1.0;
            if (fVar21 <= 1.0) {
              fVar22 = fVar21;
            }
            *(float *)((long)&uStack_110 + lVar10) = fVar22;
          }
          for (lVar10 = 0; lVar10 != 0xc; lVar10 = lVar10 + 4) {
            plVar5 = (long *)0x8000;
            func_0x0001082629b4(*(undefined4 *)((long)&uStack_110 + lVar10));
            *(ushort *)(lVar2 + lVar15 * 2) =
                 (ushort)((ulong)plVar5 >> 8) & 0xff | (ushort)(((uint)plVar5 & 0xff00ff) << 8);
            lVar15 = lVar15 + 1;
          }
        }
      }
    }
    uStack_14a = 1;
    uStack_3e0 = 3;
    uStack_348 = 0x300000003;
    puVar13 = auStack_378;
    plVar5 = (long *)0x41;
    puVar6 = param_3;
    for (lVar15 = 0; lVar15 != 3; lVar15 = lVar15 + 1) {
      auStack_3dc[lVar15] = 0xb;
      auStack_470[lVar15 * 8] = 0x41;
      alStack_460[lVar15 * 4] = alStack_540[3];
      *(undefined8 *)(&stack0xfffffffffffffccc + lVar15 * 0x20) = 0;
      (&uStack_33c)[lVar15 * 4] = 0x3f8000003f800000;
      auStack_330[lVar15 * 4 + 1] = 0;
      auStack_330[lVar15 * 4] = 0;
      *(undefined8 *)(&stack0xfffffffffffffc34 + lVar15 * 0x20) = 0;
      (&uStack_3d4)[lVar15 * 4] = 0x3f8000003f800000;
      auStack_3c8[lVar15 * 4 + 1] = 0;
      auStack_3c8[lVar15 * 4] = 0;
      for (lVar10 = 0; lVar10 != 0xc; lVar10 = lVar10 + 4) {
        *(undefined4 *)(puVar13 + lVar10) = *(undefined4 *)((long)puVar6 + lVar10);
      }
      auStack_36c[lVar15 * 4] = 0;
      puVar6 = (undefined8 *)((long)puVar6 + 0xc);
      puVar13 = puVar13 + 0x10;
    }
    lStack_3e8 = alStack_540[0];
    uStack_149 = 1;
    uStack_280 = 3;
    for (lVar15 = 0; param_1 = uStack_580, lVar15 != 0x60; lVar15 = lVar15 + 0x20) {
      *(undefined8 *)(&stack0xfffffffffffffd2c + lVar15) = 0;
      *(undefined8 *)((long)&uStack_2dc + lVar15) = 0x3f8000003f800000;
      *(undefined8 *)((long)auStack_2d0 + lVar15 + 8) = 0;
      *(undefined8 *)((long)auStack_2d0 + lVar15) = 0;
    }
  }
  func_0x00010826313c();
  iVar4 = (int)plVar5;
  if ((((ulong)plVar5 & 1) != 0) || (func_0x0001082631a0(), iVar4 != 0)) {
    uStack_148 = 1;
    puVar6 = param_3;
    FUN_1082629e4();
    uStack_150 = SUB81(puVar6,0);
    plVar5 = param_2;
    func_0x000108262a50();
    uStack_14f = SUB81(plVar5,0);
    uStack_14e = 0x100;
  }
  plVar5 = param_2;
  func_0x000108262a50();
  puVar6 = param_3;
  FUN_1082629e4();
  if ((int)plVar5 == 1 && (int)puVar6 == 1) {
    func_0x000107c278b8(&ppppuStack_558,&UNK_10f48012b);
  }
  else if (((int)plVar5 == 0) || ((int)puVar6 == 0)) {
    uStack_110 = &PTR_FUN_110a3eae8;
    uStack_108 = 0;
    uStack_f8 = 0x1032547698badcfe;
    uStack_100 = 0xefcdab8967452301;
    FUN_10835f3ec(&uStack_110,param_3,0x24);
    plVar7 = param_2;
    FUN_10835f3ec(&uStack_110,param_2,0x1c);
    puVar6 = &uStack_110;
    FUN_10835fefc();
    puStack_120 = puVar6;
    plStack_118 = plVar7;
    func_0x000107c278b8(auStack_138,&UNK_10f48011e);
    FUN_10835ffa8(&lStack_140,&puStack_120);
    func_0x00010048a6c8(&ppppuStack_558,auStack_138,lStack_140 + 8);
    FUN_1083a3ca0(lStack_140);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
  }
  else {
    ppppuStack_558 = (undefined8 *****)0x0;
    uStack_550 = 0;
    uStack_548 = 0;
    func_0x000108263124();
    func_0x000108263124();
    func_0x000108263124();
    func_0x000108263124();
  }
  uVar3 = uStack_548._7_1_ == '\0';
  pppppuVar9 = (undefined8 *****)ppppuStack_558;
  if (-1 < uStack_548) {
    pppppuVar9 = &ppppuStack_558;
  }
  FUN_108260e80(param_1,auStack_510);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_558);
  func_0x00010730b05c(alStack_540);
  plVar7 = alStack_540 + 3;
  func_0x00010730b05c();
  func_0x000108263054(uStack_b0);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  FUN_1083a3ca0(lStack_140);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
  func_0x00010730b05c(alStack_540);
  plVar8 = alStack_540 + 3;
  func_0x00010730b05c();
  func_0x0001082630f0();
  pppppuVar12 = (undefined8 *****)(plVar8[1] - *plVar8 >> 1);
  if (pppppuVar9 <= pppppuVar12) {
    if (pppppuVar9 < pppppuVar12) {
      plVar8[1] = *plVar8 + (long)pppppuVar9 * 2;
    }
    return;
  }
  uVar16 = (long)pppppuVar9 - (long)pppppuVar12;
  pcStack_588 = FUN_108262984;
  plStack_5b0 = plVar5;
  puStack_5a8 = param_3;
  plStack_5a0 = param_2;
  plStack_598 = plVar7;
  puStack_590 = &stack0xfffffffffffffff0;
  func_0x000108263154();
  if (uVar16 <= (ulong)(plVar8[2] - plVar8[1] >> 1)) {
    puVar11 = (undefined2 *)plVar7[1];
    puVar1 = puVar11;
    for (lVar15 = (long)param_2 << 1; lVar15 != 0; lVar15 = lVar15 + -2) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    plVar7[1] = (long)(puVar11 + (long)param_2);
    return;
  }
  plVar5 = plVar7;
  func_0x00010730bcd0(plVar7,(long)param_2 + (plVar8[1] - *plVar7 >> 1));
  func_0x00010730babc(auStack_5d8,plVar5,plVar7[1] - *plVar7 >> 1,plVar8 + 2);
  puVar1 = puStack_5c8;
  for (lVar15 = (long)param_2 << 1; lVar15 != 0; lVar15 = lVar15 + -2) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puStack_5c8 = puStack_5c8 + (long)param_2;
  func_0x00010730ba50(plVar7,auStack_5d8);
  func_0x00010730bb04(auStack_5d8);
  return;
}



/* Entry: 108262984; end: 1082629e3;  */

void FUN_108262984(long *param_1,ulong param_2)

{
  undefined2 *puVar1;
  long *plVar2;
  undefined2 *puVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined1 auStack_58 [16];
  undefined2 *puStack_48;
  
  uVar4 = param_1[1] - *param_1 >> 1;
  if (param_2 <= uVar4) {
    if (param_2 < uVar4) {
      param_1[1] = *param_1 + param_2 * 2;
    }
    return;
  }
  param_2 = param_2 - uVar4;
  func_0x000108263154();
  if (param_2 <= (ulong)(param_1[2] - param_1[1] >> 1)) {
    puVar3 = (undefined2 *)unaff_x19[1];
    puVar1 = puVar3;
    for (lVar5 = unaff_x20 << 1; lVar5 != 0; lVar5 = lVar5 + -2) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    unaff_x19[1] = (long)(puVar3 + unaff_x20);
    return;
  }
  plVar2 = unaff_x19;
  func_0x00010730bcd0();
  func_0x00010730babc(auStack_58,plVar2,unaff_x19[1] - *unaff_x19 >> 1,param_1 + 2);
  puVar1 = puStack_48 + unaff_x20;
  for (lVar5 = unaff_x20 << 1; lVar5 != 0; lVar5 = lVar5 + -2) {
    *puStack_48 = 0;
    puStack_48 = puStack_48 + 1;
  }
  puStack_48 = puVar1;
  func_0x00010730ba50();
  func_0x00010730bb04(auStack_58);
  return;
}



/* Entry: 1082629e4; end: 108262ae7;  */

undefined4 FUN_1082629e4(ulong param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1;
  func_0x000108262bc8(param_1,&UNK_10df11bcc);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x000108262bc8(param_1,&UNK_10df11bf0);
    if ((uVar1 & 1) == 0) {
      func_0x000108262bc8(param_1,&UNK_10df11c14);
      uVar2 = 9;
      if ((int)param_1 == 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0xc;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 108262ae8; end: 108262b23;  */

int FUN_108262ae8(float param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm((float)(double)(long)(param_1 * 65536.0 + 0.5),0x4effffff);
  if (fVar1 <= -2.1474835e+09) {
    fVar1 = -2.1474835e+09;
  }
  return (int)fVar1;
}



/* Entry: 108262b24; end: 108262b4f;  */

undefined8 FUN_108262b24(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  FUN_108166048(param_1,uVar1);
  return param_1;
}



/* Entry: 108262b50; end: 108262b5b;  */

void FUN_108262b50(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_1 != (int *)0x0) && (iVar1 == 1)) {
    if (*(code **)(param_1 + 2) != (code *)0x0) {
      (**(code **)(param_1 + 2))(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 4));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 108262b5c; end: 108262bb7;  */

void FUN_108262b5c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108263154();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = unaff_x20;
    FUN_108410808();
  }
  *unaff_x19 = uVar1;
  unaff_x19[1] = unaff_x20;
  return;
}



/* Entry: 108262bb8; end: 108262ccf;  */

void FUN_108262bb8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 108262cd0; end: 108262d1f;  */

long * FUN_108262cd0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    for (lVar1 = param_1[1]; lVar1 != lVar2; lVar1 = lVar1 + -0x10) {
      func_0x0001082631a8();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 108262d20; end: 108262d73;  */

/* WARNING: Possible PIC construction at 0x000108262d5c: Changing call to branch */

long * FUN_108262d20(long *param_1,long *param_2,long *param_3,undefined4 *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long *unaff_x19;
  ulong unaff_x20;
  undefined *puStack_a0;
  undefined4 **ppuStack_98;
  undefined4 **ppuStack_90;
  undefined1 uStack_88;
  undefined4 *puStack_80;
  undefined4 *puStack_78;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar8 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar8 <= param_2) {
      plVar8 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar8 = (long *)0xfffffffffffffff;
    }
    return plVar8;
  }
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar8 = param_3;
  func_0x000108263154();
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined4 **)(puVar4 + 0x20) = param_4;
  if (param_2 == (long *)0x0) {
    lVar5 = 0;
  }
  else {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      ppuVar6 = &puStack_a0;
      ppuStack_98 = &puStack_80;
      ppuStack_90 = &puStack_78;
      puStack_78 = param_4;
      for (plVar7 = param_2; plVar7 != plVar8; plVar7 = plVar7 + 2) {
        *puStack_78 = (int)*plVar7;
        piVar9 = (int *)plVar7[1];
        if (piVar9 != (int *)0x0) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
              *piVar9 = *piVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(int **)(puStack_78 + 2) = piVar9;
        puStack_78 = puStack_78 + 4;
      }
      uStack_88 = 1;
      puStack_a0 = puVar4;
      puStack_80 = param_4;
      for (; param_2 != plVar8; param_2 = param_2 + 2) {
        func_0x0001078bddf8(param_2 + 1);
      }
      FUN_108262e7c(&puStack_a0);
      return (long *)ppuVar6;
    }
    lVar5 = unaff_x20 << 4;
    __Znwm();
  }
  lVar1 = lVar5 + (long)param_3 * 0x10;
  *unaff_x19 = lVar5;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar5 + unaff_x20 * 0x10;
  return unaff_x19;
}



/* Entry: 108262d74; end: 108262dcb;  */

void FUN_108262d74(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  long *unaff_x19;
  ulong unaff_x20;
  long lStack_80;
  undefined4 **ppuStack_78;
  undefined4 **ppuStack_70;
  undefined1 uStack_68;
  undefined4 *puStack_60;
  undefined4 *puStack_58;
  
  puVar5 = param_3;
  func_0x000108263154();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 **)(param_1 + 0x20) = param_4;
  if (param_2 == (undefined4 *)0x0) {
    lVar4 = 0;
  }
  else {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      ppuStack_78 = &puStack_60;
      ppuStack_70 = &puStack_58;
      puStack_58 = param_4;
      for (puVar6 = param_2; puVar6 != puVar5; puVar6 = puVar6 + 4) {
        *puStack_58 = *puVar6;
        piVar7 = *(int **)(puVar6 + 2);
        if (piVar7 != (int *)0x0) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar3) {
              *piVar7 = *piVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(int **)(puStack_58 + 2) = piVar7;
        puStack_58 = puStack_58 + 4;
      }
      uStack_68 = 1;
      lStack_80 = param_1;
      puStack_60 = param_4;
      for (; param_2 != puVar5; param_2 = param_2 + 4) {
        func_0x0001078bddf8(param_2 + 2);
      }
      FUN_108262e7c(&lStack_80);
      return;
    }
    lVar4 = unaff_x20 << 4;
    __Znwm();
  }
  lVar1 = lVar4 + (long)param_3 * 0x10;
  *unaff_x19 = lVar4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar4 + unaff_x20 * 0x10;
  return;
}



/* Entry: 108262dcc; end: 108262e7b;  */

void FUN_108262dcc(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined8 uStack_50;
  undefined4 **ppuStack_48;
  undefined4 **ppuStack_40;
  undefined1 uStack_38;
  undefined4 *puStack_30;
  undefined4 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (puVar3 = param_2; puVar3 != param_3; puVar3 = puVar3 + 4) {
    *puStack_28 = *puVar3;
    piVar4 = *(int **)(puVar3 + 2);
    if (piVar4 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *(int **)(puStack_28 + 2) = piVar4;
    puStack_28 = puStack_28 + 4;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 4) {
    func_0x0001078bddf8(param_2 + 2);
  }
  FUN_108262e7c(&uStack_50);
  return;
}



/* Entry: 108262e7c; end: 108262ec7;  */

long FUN_108262e7c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x10) {
      func_0x0001082631a8();
    }
  }
  return param_1;
}



/* Entry: 108262ec8; end: 108262f37;  */

long * FUN_108262ec8(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x10;
    func_0x0001082631a8();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108262f38; end: 108262fff;  */

void FUN_108262f38(long param_1,ulong param_2)

{
  undefined2 *puVar1;
  long *plVar2;
  undefined2 *puVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  undefined1 auStack_58 [16];
  undefined2 *puStack_48;
  
  func_0x000108263154();
  if (param_2 <= (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 1)) {
    puVar3 = (undefined2 *)unaff_x19[1];
    puVar1 = puVar3;
    for (lVar4 = unaff_x20 << 1; lVar4 != 0; lVar4 = lVar4 + -2) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    unaff_x19[1] = (long)(puVar3 + unaff_x20);
    return;
  }
  plVar2 = unaff_x19;
  func_0x00010730bcd0();
  func_0x00010730babc(auStack_58,plVar2,unaff_x19[1] - *unaff_x19 >> 1,(long *)(param_1 + 0x10));
  puVar1 = puStack_48 + unaff_x20;
  for (lVar4 = unaff_x20 << 1; lVar4 != 0; lVar4 = lVar4 + -2) {
    *puStack_48 = 0;
    puStack_48 = puStack_48 + 1;
  }
  puStack_48 = puVar1;
  func_0x00010730ba50();
  func_0x00010730bb04(auStack_58);
  return;
}



/* Entry: 108263000; end: 1082631af;  */

void FUN_108263000(long param_1,long param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined2 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 << 1; lVar3 != 0; lVar3 = lVar3 + -2) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined2 **)(param_1 + 8) = puVar2 + param_2;
  return;
}



/* Entry: 1082631b0; end: 1082631c3;  */

void FUN_1082631b0(void)

{
  FUN_108262ae8();
  return;
}



/* Entry: 1082631c4; end: 108263233;  */

void FUN_1082631c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  FUN_108263870(param_1,param_2,&uStack_38,param_7,param_9,param_10);
  *param_1 = &PTR_FUN_110a34d18;
  *(undefined1 *)(param_1 + 0x19) = param_4;
  *(undefined4 *)((long)param_1 + 0xcc) = param_5;
  *(undefined1 *)(param_1 + 0x1a) = param_6;
  *(undefined1 *)((long)param_1 + 0xd1) = 0;
  *(undefined1 *)((long)param_1 + 0xd2) = param_11;
  return;
}



/* Entry: 108263234; end: 10826330f;  */

undefined8 *
FUN_108263234(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  func_0x00010c149760(param_5);
  func_0x00010c0ce900(param_5);
  func_0x000108263990(param_1,param_2,param_3,param_4);
  *param_1 = &PTR_FUN_110a329d8;
  _objc_retain(param_5);
  param_1[0x1b] = param_5;
  FUN_1082a0520(param_1,param_6);
  return param_1;
}



/* Entry: 108263310; end: 108263337;  */

void FUN_108263310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010826399c();
  func_0x000108263988(param_1,param_2,1,param_4,param_5,1,4);
  return;
}



/* Entry: 108263338; end: 108263537;  */

void FUN_108263338(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 in_stack_00000000;
  
  puVar1 = PTR__OBJC_CLASS___MTLTextureDescriptor_1126d4220;
  _objc_alloc_init(PTR__OBJC_CLASS___MTLTextureDescriptor_1126d4220);
  func_0x00010c213a20();
  func_0x00010c1dc0a0(puVar1);
  func_0x00010c2256c0(puVar1);
  func_0x00010c1a7d00(puVar1);
  func_0x00010c18bde0(puVar1);
  func_0x00010c1c8580(puVar1);
  func_0x00010c1f5380(puVar1);
  func_0x00010c16a340(puVar1);
  func_0x00010c21d540(puVar1);
  func_0x00010c20c0c0(puVar1);
  uVar2 = param_2;
  FUN_1082635ac();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d91c0();
  _objc_release(uVar2);
  puVar4 = (undefined8 *)0xe0;
  __Znwm();
  func_0x00010c149760(uVar3);
  func_0x00010c0ce900(uVar3);
  func_0x000108263990(puVar4,param_2,param_3,param_4);
  *puVar4 = &PTR_FUN_110a329d8;
  _objc_retain(uVar3);
  puVar4[0x1b] = uVar3;
  FUN_1082a04e8(puVar4,in_stack_00000000);
  *param_1 = puVar4;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108263538; end: 1082635ab;  */

void FUN_108263538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010826399c();
  func_0x000108263988(param_1,param_2,2,param_4,param_5,1,5);
  return;
}



/* Entry: 1082635ac; end: 1082635d3;  */

void FUN_1082635ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1082635d4; end: 10826366f;  */

void FUN_1082635d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xe0;
  __Znwm();
  FUN_108263234();
  *param_1 = uVar1;
  return;
}



/* Entry: 108263670; end: 1082636a3;  */

undefined8 * FUN_108263670(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a329d8;
  _objc_release(param_1[0x1b]);
  *param_1 = &PTR_FUN_110a365b0;
  func_0x0001082638f4(param_1 + 0x18);
  *param_1 = &PTR_FUN_110a35d98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x13);
  func_0x00010827a384(param_1 + 9);
  FUN_10827a250(param_1 + 4);
  return param_1;
}



/* Entry: 1082636a4; end: 1082636a7;  */

undefined8 * FUN_1082636a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a329d8;
  _objc_release(param_1[0x1b]);
  *param_1 = &PTR_FUN_110a365b0;
  func_0x0001082638f4(param_1 + 0x18);
  *param_1 = &PTR_FUN_110a35d98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x13);
  func_0x00010827a384(param_1 + 9);
  FUN_10827a250(param_1 + 4);
  return param_1;
}



/* Entry: 1082636a8; end: 1082636bb;  */

void FUN_1082636a8(void)

{
  FUN_108263670();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082636bc; end: 10826374b;  */

void FUN_1082636bc(undefined4 *param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_2 + 0xd8);
  func_0x00010c0fca60();
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[0x1b] = 1;
  *(undefined ***)(param_1 + 2) = &PTR_DAT_110a32ac0;
  *(ulong *)(param_1 + 4) = uVar1 & 0xffffffff;
  *(undefined1 *)(param_1 + 0x16) = 1;
  return;
}



/* Entry: 10826374c; end: 108263837;  */

void FUN_10826374c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  func_0x000108263974();
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
  }
  func_0x00010826396c();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (uStack_40 != 0) {
    func_0x000108263974();
    if (-1 < (char)bStack_31) {
      ppuStack_48 = &ppuStack_48;
    }
    func_0x00010c25da80(puVar1,param_2,ppuStack_48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010826396c();
    ppuVar2 = &PTR____CFConstantStringClassReference_110ed60f8;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed60f8,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b71a0(*(undefined8 *)(param_1 + 0xd8),param_2,ppuVar2);
    _objc_release(ppuVar2);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 108263838; end: 10826386f;  */

undefined * FUN_108263838(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f480185;
  if (*(char *)(param_1 + 200) != '\x01') {
    puVar1 = &DAT_10f480197;
  }
  return puVar1;
}



/* Entry: 108263870; end: 10826391f;  */

void FUN_108263870(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1082a0424(param_1,param_2,param_5,param_6);
  *param_1 = &PTR_FUN_110a365b0;
  param_1[0x16] = *param_3;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((long)param_1 + 0xbc) = param_4;
  param_1[0x18] = 0;
  return;
}



/* Entry: 108263920; end: 108263953;  */

void FUN_108263920(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
    if (param_1 != (int *)0x0) {
      FUN_1082b178c();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108263954; end: 1082639db;  */

void FUN_108263954(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1082639dc; end: 108263a7f;  */

void FUN_1082639dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  FUN_108263c5c(auStack_60,param_5);
  FUN_108263e54(param_1,param_2,param_3,param_6,param_7,param_4,2,1,auStack_60);
  FUN_10810a394(auStack_58);
  return;
}



/* Entry: 108263a80; end: 108263adf;  */

void FUN_108263a80(void)

{
  func_0x000108264010();
  return;
}



/* Entry: 108263ae0; end: 108263b7f;  */

void FUN_108263ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar2 = param_4;
  FUN_108275f2c();
  iVar1 = (int)uVar2;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  func_0x000108263da4(auStack_50,param_4);
  FUN_108263f48(param_1,param_2,param_3,iVar1,0,2,0,auStack_50);
  FUN_10810a394(auStack_48);
  return;
}



/* Entry: 108263b80; end: 108263bdf;  */

void FUN_108263b80(void)

{
  func_0x000108264010();
  return;
}



/* Entry: 108263be0; end: 108263c5b;  */

void FUN_108263be0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108263c5c; end: 108263ca7;  */

undefined8 * FUN_108263c5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a32b40;
  FUN_108263d18(param_1 + 1);
  return param_1;
}



/* Entry: 108263ca8; end: 108263cc3;  */

undefined8 FUN_108263ca8(void)

{
  return 0;
}



/* Entry: 108263cc4; end: 108263d0b;  */

void FUN_108263cc4(void)

{
  func_0x00010826406c();
  func_0x000108264024();
  return;
}



/* Entry: 108263d0c; end: 108263d17;  */

void FUN_108263d0c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 108263d18; end: 108263e0b;  */

undefined8 * FUN_108263d18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000108263d40();
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 108263e0c; end: 108263e1b;  */

undefined8 FUN_108263e0c(void)

{
  return 0;
}



/* Entry: 108263e1c; end: 108263e47;  */

void FUN_108263e1c(long param_1,long param_2)

{
  func_0x000108263da4(param_2,param_1 + 8);
  *(undefined1 *)(param_2 + 0xb0) = 1;
  return;
}



/* Entry: 108263e48; end: 108263e53;  */

void FUN_108263e48(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 108263e54; end: 108263f03;  */

undefined1 *
FUN_108263e54(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 param_9)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  func_0x000107c27958(param_1 + 0x10,&uStack_50);
  param_1[0x28] = param_6;
  *(undefined4 *)(param_1 + 0x2c) = param_7;
  *(undefined4 *)(param_1 + 0x30) = param_8;
  param_1[0xe8] = 0;
  FUN_108263f04(param_1 + 0x38,param_9);
  return param_1;
}



/* Entry: 108263f04; end: 108263f1f;  */

void FUN_108263f04(long param_1)

{
  FUN_108263f20();
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return;
}



/* Entry: 108263f20; end: 108263f47;  */

undefined8 FUN_108263f20(undefined8 param_1)

{
  func_0x000108264060(&PTR_FUN_110a32b40);
  return param_1;
}



/* Entry: 108263f48; end: 108263fb7;  */

undefined1 *
FUN_108263f48(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  *param_1 = 1;
  param_1[1] = param_7;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  *(undefined4 *)(param_1 + 0x14) = param_6;
  param_1[200] = 0;
  FUN_108263fb8(param_1 + 0x18,param_8);
  return param_1;
}



/* Entry: 108263fb8; end: 108263fd3;  */

void FUN_108263fb8(long param_1)

{
  FUN_108263fd4();
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return;
}



/* Entry: 108263fd4; end: 108263ffb;  */

undefined8 FUN_108263fd4(undefined8 param_1)

{
  func_0x000108264060(&PTR_FUN_110a32bb0);
  return param_1;
}



/* Entry: 108263ffc; end: 108264077;  */

bool FUN_108263ffc(long param_1,long param_2)

{
  return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
}



/* Entry: 108264078; end: 1082640f3;  */

void FUN_108264078(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xe0;
  __Znwm();
  FUN_1082640f4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1082640f4; end: 1082641ef;  */

long FUN_1082640f4(long param_1,long param_2,long param_3,undefined8 param_4,int param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  FUN_1082a01c0();
  func_0x000108264870();
  *(bool *)(lVar2 + 0xd0) = param_5 != 1;
  *(undefined8 *)(lVar2 + 0xd8) = 0;
  uVar1 = 0xfffffffffffffffc;
  lVar2 = param_3 + 4;
  if (*(int *)(*(long *)(param_2 + 0x80) + 0x350) != 0) {
    uVar1 = 0xffffffffffffffff;
    lVar2 = param_3 + 1;
  }
  uVar1 = lVar2 - 1U & uVar1;
  if (uVar1 == 0) {
    param_2 = 0;
  }
  else {
    FUN_1082635ac();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d85c0();
  }
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  *(long *)(param_1 + 0xd8) = param_2;
  _objc_release(uVar3);
  if (uVar1 != 0) {
    _objc_release(param_2);
    func_0x000108264850();
  }
  FUN_1082a04e8(param_1,1);
  return param_1;
}



/* Entry: 1082641f0; end: 10826421b;  */

undefined8 * FUN_1082641f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x000108264870();
  _objc_release(puVar1[0x1b]);
  *param_1 = &PTR_FUN_110a35d98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x13);
  func_0x00010827a384(param_1 + 9);
  FUN_10827a250(param_1 + 4);
  return param_1;
}



/* Entry: 10826421c; end: 108264227;  */

undefined8 * FUN_10826421c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x000108264870();
  _objc_release(puVar1[0x1b]);
  *param_1 = &PTR_FUN_110a35d98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x13);
  func_0x00010827a384(param_1 + 9);
  FUN_10827a250(param_1 + 4);
  return param_1;
}



/* Entry: 108264228; end: 10826423b;  */

void FUN_108264228(void)

{
  FUN_1082641f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10826423c; end: 108264243;  */

void FUN_10826423c(long param_1)

{
  FUN_1082641f0(param_1 + -0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108264244; end: 10826439f;  */

void FUN_108264244(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long alStack_78 [2];
  long lStack_68;
  
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    lVar2 = *(long *)(param_1 + 0xd8);
    func_0x00010bf4df40();
    *(long *)(param_1 + 0xb8) = lVar2;
    if ((lVar2 != 0) && (func_0x000108264888(lVar2 + param_3), *(char *)(param_1 + 0xd0) == '\x01'))
    {
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
  }
  else {
    uVar3 = *(ulong *)((*(long **)(param_1 + 0x80))[2] + 0x58);
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = param_3 / uVar3;
    }
    (**(code **)(**(long **)(param_1 + 0x80) + 0x10))();
    FUN_1082b0908(alStack_78);
    if (alStack_78[0] != 0) {
      func_0x000108264888(lStack_68 + (param_3 - uVar1 * uVar3));
      lVar2 = *(long *)(param_1 + 0x80);
      FUN_1082681a4();
      FUN_1082669f4();
      _objc_unsafeClaimAutoreleasedReturnValue();
      if (lVar2 != 0) {
        FUN_1082643a0(alStack_78[0]);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf51fa0(lVar2);
        func_0x000108264850();
      }
    }
  }
  return;
}



/* Entry: 1082643a0; end: 108264443;  */

void FUN_1082643a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108264444; end: 10826445f;  */

void FUN_108264444(long param_1)

{
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  return;
}



/* Entry: 108264460; end: 10826451b;  */

bool FUN_108264460(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar4 = *(long *)(param_1 + 0x80);
  FUN_1082681a4();
  lVar5 = lVar4;
  FUN_1082669f4();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (lVar5 != 0) {
    func_0x00010bfad4e0(lVar5);
    piVar1 = (int *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lStack_38 = param_1 + 0xb0;
    uStack_40 = 0;
    FUN_108264668(lVar4 + 0x220,&lStack_38);
    FUN_1082647e4(&lStack_38);
    FUN_10826481c(&uStack_40);
  }
  return lVar5 != 0;
}



/* Entry: 10826451c; end: 1082645fb;  */

void FUN_10826451c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  func_0x0001082648a8();
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
  }
  func_0x0001082648a0();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (uStack_40 != 0) {
    func_0x0001082648a8();
    if (-1 < (char)bStack_31) {
      ppuStack_48 = &ppuStack_48;
    }
    func_0x00010c25da80(puVar1,param_2,ppuStack_48);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001082648a0();
    ppuVar2 = &PTR____CFConstantStringClassReference_110ed60f8;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ed60f8,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b71a0(*(undefined8 *)(param_1 + 0xd8),param_2,ppuVar2);
    func_0x000108264850();
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 1082645fc; end: 108264667;  */

undefined * FUN_1082645fc(void)

{
  return &UNK_10f4801ad;
}



/* Entry: 108264668; end: 1082646f7;  */

long * FUN_108264668(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    lVar4 = *param_2;
    plVar5 = (long *)(*param_1 + (long)iVar3 * 8);
    *param_2 = 0;
    *plVar5 = lVar4;
  }
  else {
    uVar2 = 1;
    plVar1 = param_1;
    FUN_1082646f8(0x3ff8000000000000,param_1,1);
    lVar4 = *param_2;
    plVar5 = plVar1 + (int)param_1[1];
    *param_2 = 0;
    *plVar5 = lVar4;
    FUN_10826471c(param_1,plVar1,uVar2);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + 1;
  return plVar5;
}



/* Entry: 1082646f8; end: 10826471b;  */

void FUN_1082646f8(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)param_2 <= (int)(*(uint *)(param_1 + 1) ^ 0x7fffffff)) {
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x8;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 1) + (int)param_2);
    return;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_10826471c;
  puStack_20 = &stack0xfffffffffffffff0;
  if (*(int *)(param_1 + 1) != 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) << 3);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 3;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 10826471c; end: 10826478f;  */

void FUN_10826471c(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) << 3);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 3;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 108264790; end: 1082647bf;  */

void FUN_108264790(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 8;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 1082647c0; end: 1082647e3;  */

void FUN_1082647c0(int *param_1)

{
  short sVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long unaff_x19;
  long unaff_x20;
  
  do {
    iVar6 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 + -1 != 0) {
    return;
  }
  iVar6 = 0;
  if (*(long *)(param_1 + 0x1e) == 0) {
    if ((param_1[1] == 0) && (*param_1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082a0900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + -2) + 0x18))(param_1 + -2);
      return;
    }
    return;
  }
  iVar4 = (int)*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1e) + 0x20) + 0x78);
  func_0x0001082ade30();
  if ((iVar6 == 0) && (func_0x0001082addb4(), iVar4 != 0)) {
    func_0x0001082adf08();
  }
  if ((*(int *)(unaff_x19 + 8) == 0) && (*(int *)(unaff_x19 + 0xc) == 0)) {
    lVar5 = unaff_x20;
    FUN_1082ab4d8();
    *(int *)(unaff_x19 + 0x14) = (int)lVar5;
    lVar5 = unaff_x19;
    FUN_1082a0834();
    if ((int)lVar5 != 0) {
      func_0x0001082adf18();
      FUN_1082ab814();
      lVar5 = unaff_x20 + 0x18;
      FUN_1082abdf4();
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long *)(unaff_x19 + 0x18) = lVar5;
      func_0x0001082ae078();
      *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) + lVar5;
      sVar1 = *(short *)(*(long *)(unaff_x19 + 0x48) + 4);
      if (*(char *)(unaff_x19 + 0x90) == '\0') {
        if ((*(ulong *)(unaff_x20 + 0x88) <= *(ulong *)(unaff_x20 + 0x70)) &&
           (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0 || sVar1 != 0)) {
          return;
        }
      }
      else {
        if ((sVar1 != 0) && (*(char *)(unaff_x19 + 0x90) == '\x02')) {
          return;
        }
        if ((((*(byte *)(unaff_x19 + 0x91) & 1) == 0) &&
            (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0)) &&
           (func_0x0001082ae078(),
           (ulong)(*(long *)(unaff_x20 + 0x88) + lVar5) <= *(ulong *)(unaff_x20 + 0x70))) {
          FUN_1082a0950();
          return;
        }
      }
      FUN_1082ab9e0(&stack0xffffffffffffffd8);
    }
  }
  return;
}



/* Entry: 1082647e4; end: 10826481b;  */

long * FUN_1082647e4(long *param_1)

{
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x18))();
  }
  return param_1;
}



/* Entry: 10826481c; end: 10826484f;  */

long * FUN_10826481c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1082647c0(*param_1 + 8);
  }
  return param_1;
}



/* Entry: 108264850; end: 1082648b3;  */

void FUN_108264850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1082648b4; end: 1082652e7;  */

void FUN_1082648b4(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 extraout_w8;
  undefined2 extraout_w8_00;
  undefined2 extraout_w8_01;
  undefined4 uVar7;
  long lVar8;
  undefined8 *extraout_x8;
  bool bVar9;
  ulong uVar10;
  long unaff_x19;
  long lVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  iVar5 = (int)param_3;
  func_0x000108266680();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010828a39c();
  lVar8 = 0;
  *param_1 = &PTR_DAT_110a32d10;
  do {
    lVar4 = unaff_x19 + lVar8;
    *(undefined2 *)(lVar4 + 0x80) = 0;
    *(undefined8 *)(lVar4 + 0x88) = 0;
    *(undefined4 *)(lVar4 + 0x90) = 0;
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0x1b0);
  *(undefined4 *)(unaff_x19 + 0x358) = 4;
  *(undefined8 *)(unaff_x19 + 0x368) = 0;
  *(undefined8 *)(unaff_x19 + 0x360) = 0;
  FUN_1082652e8(&uStack_70);
  func_0x0001082665a0();
  FUN_108266400(unaff_x19 + 0x10);
  func_0x0001082663dc(&uStack_70);
  uVar10 = param_3;
  func_0x00010c263700();
  if ((uVar10 & 1) == 0) {
    uVar10 = param_3;
    func_0x00010c263700();
    if ((uVar10 & 1) != 0) {
      uVar15 = 0x600000001;
      goto LAB_1082649e0;
    }
    uVar10 = param_3;
    func_0x00010c263700();
    if ((uVar10 & 1) != 0) {
      uVar15 = 0x500000001;
      goto LAB_1082649e0;
    }
    uVar10 = param_3;
    func_0x00010c263700();
    if ((uVar10 & 1) != 0) {
      uVar15 = 0x400000001;
      goto LAB_1082649e0;
    }
    uVar10 = param_3;
    func_0x00010c263700();
    if ((uVar10 & 1) != 0) {
      uVar15 = 0x300000001;
      goto LAB_1082649e0;
    }
    uVar10 = param_3;
    func_0x00010c263700();
    if ((uVar10 & 1) != 0) {
      uVar15 = 0x200000001;
LAB_108264a4c:
      bVar9 = false;
      uVar7 = 0x2000;
      goto LAB_1082649e4;
    }
    uVar10 = param_3;
    func_0x00010c263700();
    if ((uVar10 & 1) != 0) {
      uVar15 = 0x100000001;
      goto LAB_108264a4c;
    }
    uVar10 = param_3;
    func_0x00010c263700();
    uVar15 = 0x200000000;
    if (((uVar10 & 1) != 0) || (uVar10 = param_3, func_0x00010c263700(), (uVar10 & 1) != 0)) {
LAB_108264aa4:
      uVar7 = 0x2000;
      bVar9 = true;
      goto LAB_1082649e4;
    }
    uVar10 = param_3;
    func_0x00010c263700();
    uVar15 = 0x100000000;
    if (((uVar10 & 1) != 0) || (func_0x00010c263700(), (param_3 & 1) != 0)) goto LAB_108264aa4;
    *(undefined8 *)(unaff_x19 + 0x350) = 0x100000001;
    *(undefined4 *)(unaff_x19 + 0x38) = 0x1f;
    uVar10 = *(ulong *)(unaff_x19 + 0x18);
    uVar7 = 0x2000;
LAB_108264ac8:
    uVar15 = 1;
    lVar8 = 0x50;
  }
  else {
    uVar15 = 0x700000001;
LAB_1082649e0:
    bVar9 = false;
    uVar7 = 0x4000;
LAB_1082649e4:
    *(undefined8 *)(unaff_x19 + 0x350) = uVar15;
    *(undefined4 *)(unaff_x19 + 0x38) = 0x1f;
    uVar10 = *(ulong *)(unaff_x19 + 0x18);
    if (!bVar9) goto LAB_108264ac8;
    *(undefined8 *)(unaff_x19 + 0x58) = 4;
    *(undefined8 *)(unaff_x19 + 0x50) = 1;
    uVar7 = 0x4000;
    uVar15 = 4;
    lVar8 = 0x60;
  }
  *(undefined4 *)(unaff_x19 + 0x30) = uVar7;
  *(undefined4 *)(unaff_x19 + 0x34) = uVar7;
  *(undefined4 *)(unaff_x19 + 0x48) = 0x1000;
  *(undefined8 *)(unaff_x19 + lVar8) = uVar15;
  *(undefined4 *)(unaff_x19 + 0x3c) = uVar7;
  *(ulong *)(unaff_x19 + 0x18) = uVar10 | 0xe04200000;
  uStack_70 = CONCAT44(uStack_70._4_4_,1);
  FUN_108265574(unaff_x19 + 0x358,&uStack_70);
  uStack_70 = 0x400000002;
  uStack_68 = CONCAT44(uStack_68._4_4_,8);
  for (lVar8 = 0; lVar8 != 0xc; lVar8 = lVar8 + 4) {
    uStack_74 = *(undefined4 *)((long)&uStack_70 + lVar8);
    iVar3 = iVar5;
    func_0x00010c263c80();
    if (iVar3 != 0) {
      FUN_108265574(unaff_x19 + 0x358,&uStack_74);
    }
  }
  uVar10 = 0x1c000004f;
  *(undefined8 *)(unaff_x19 + 0x28) = 5;
  uVar1 = true;
  if ((*(int *)(unaff_x19 + 0x350) == 0) ||
     (uVar1 = *(int *)(unaff_x19 + 0x354) == 3, 2 < *(int *)(unaff_x19 + 0x354))) {
    uVar10 = 0x1c000064f;
  }
  *(ulong *)(unaff_x19 + 0x18) =
       *(ulong *)(unaff_x19 + 0x18) & 0xfffffffe3dfffe10 | uVar10 | 0xf800001000000;
  lVar8 = *(long *)(unaff_x19 + 0x10);
  *(undefined2 *)(lVar8 + 0xc) = 0x101;
  *(undefined1 *)(lVar8 + 0x5d) = 1;
  *(undefined1 *)(lVar8 + 0x5c) = *(undefined1 *)(lVar8 + 10);
  *(undefined4 *)(lVar8 + 4) = 0x1010101;
  *(undefined2 *)(lVar8 + 8) = 0x101;
  *(undefined2 *)(lVar8 + 0x5e) = 0x101;
  *(undefined2 *)(lVar8 + 0x11) = 0x101;
  *(undefined1 *)(lVar8 + 0x61) = 0;
  *(undefined4 *)(lVar8 + 0x88) = 0x10;
  lVar8 = unaff_x19 + 0x80;
  uVar10 = 10;
  FUN_108265874();
  puVar13 = (undefined2 *)(lVar8 + (uVar10 & 0xffffffff) * 0x18);
  *puVar13 = 0xf;
  *(undefined4 *)(puVar13 + 8) = 3;
  func_0x0001082666a4();
  func_0x0001082665a0();
  func_0x0001082664c0(puVar13 + 4);
  func_0x000108266564();
  puVar14 = *(undefined8 **)(puVar13 + 4);
  *puVar14 = 0x30000001e;
  *(undefined8 *)((long)puVar14 + 0xc) = 0x300000001;
  func_0x000108266590();
  *(undefined2 *)((long)puVar14 + 0x14) = (undefined2)uStack_70;
  func_0x000108266580();
  *(undefined2 *)((long)puVar14 + 0x16) = (undefined2)uStack_70;
  puVar13 = *(undefined2 **)(puVar13 + 4);
  *(undefined8 *)(puVar13 + 0xc) = 0x10000000e;
  FUN_108266014(&uStack_70,&UNK_10f48024e);
  puVar13[0x10] = (undefined2)uStack_70;
  FUN_108265874(1);
  func_0x0001082665c4();
  *puVar13 = 1;
  *(undefined4 *)(puVar13 + 8) = 1;
  func_0x0001082664d8();
  func_0x0001082665a0();
  func_0x0001082664c0(puVar13 + 4);
  func_0x000108266564();
  **(undefined8 **)(puVar13 + 4) = 0x300000001;
  func_0x00010826671c();
  if ((bool)uVar1) {
    FUN_108265874(0x28);
    func_0x000108266648();
    func_0x0001082664d8();
    func_0x0001082665a0();
    func_0x0001082664c0(puVar14 + 1);
    func_0x000108266564();
    *(undefined8 *)puVar14[1] = 0x300000002;
    FUN_108265874(0x2a);
    func_0x000108266708();
    func_0x0001082664d8();
    func_0x0001082665a0();
    func_0x0001082664c0(puVar14 + 1);
    func_0x000108266564();
    *(undefined8 *)puVar14[1] = 0x300000004;
  }
  FUN_108265874(0x46);
  func_0x00010826656c();
  *(undefined4 *)(puVar13 + 8) = 2;
  func_0x000108266698();
  func_0x0001082665a0();
  sVar2 = (short)puVar13 + 8;
  func_0x0001082664c0();
  func_0x000108266564();
  puVar12 = *(undefined8 **)(puVar13 + 4);
  *puVar12 = 0x300000005;
  *(undefined8 *)((long)puVar12 + 0xc) = 0x100000007;
  FUN_108265920();
  *(short *)((long)puVar12 + 0x14) = sVar2;
  FUN_108265874(0x1e);
  func_0x000108266648();
  func_0x0001082664d8();
  func_0x0001082665a0();
  func_0x0001082664c0(puVar14 + 1);
  func_0x000108266564();
  *(undefined8 *)puVar14[1] = 0x300000008;
  FUN_108265874(0x50);
  func_0x000108266708();
  func_0x0001082664d8();
  func_0x0001082665a0();
  func_0x0001082664c0(puVar14 + 1);
  func_0x000108266564();
  *(undefined8 *)puVar14[1] = 0x300000009;
  FUN_108265874(0x47);
  func_0x00010826656c();
  *(undefined4 *)(puVar12 + 2) = 1;
  func_0x0001082664d8();
  func_0x0001082665a0();
  func_0x0001082664c0(puVar12 + 1);
  func_0x000108266564();
  *(undefined8 *)puVar12[1] = 0x300000006;
  FUN_108265874(0x5a);
  func_0x0001082665c4();
  uVar6 = 0xf;
  if (*(int *)(unaff_x19 + 0x350) != 0) {
    uVar1 = *(int *)(unaff_x19 + 0x354) == 2;
    uVar6 = 0xf;
    if (*(int *)(unaff_x19 + 0x354) < 3) {
      uVar6 = 1;
    }
  }
  *(undefined2 *)puVar12 = uVar6;
  *(undefined4 *)(puVar12 + 2) = 2;
  func_0x000108266698();
  func_0x0001082665a0();
  sVar2 = (short)puVar12 + 8;
  func_0x0001082664c0();
  func_0x000108266564();
  puVar14 = (undefined8 *)puVar12[1];
  *puVar14 = 0x30000000a;
  *(undefined8 *)((long)puVar14 + 0xc) = 0x10000000c;
  FUN_108265920();
  *(short *)((long)puVar14 + 0x14) = sVar2;
  FUN_108265874(0x5e);
  func_0x0001082665c4();
  if (*(int *)(unaff_x19 + 0x350) == 0) {
    uVar1 = *(int *)(unaff_x19 + 0x354) == 1;
    uVar6 = 1;
    if ((bool)uVar1) goto LAB_108264e84;
  }
  uVar6 = 0xf;
LAB_108264e84:
  *(undefined2 *)puVar14 = uVar6;
  *(undefined4 *)(puVar14 + 2) = 1;
  func_0x0001082664d8();
  func_0x0001082665a0();
  func_0x0001082664c0(puVar14 + 1);
  func_0x000108266564();
  *(undefined8 *)puVar14[1] = 0x30000000b;
  FUN_108265874(0x19);
  func_0x00010826656c();
  *(undefined4 *)(puVar14 + 2) = 1;
  func_0x0001082664d8();
  func_0x0001082665a0();
  func_0x0001082664c0(puVar14 + 1);
  func_0x000108266564();
  puVar14 = (undefined8 *)puVar14[1];
  *puVar14 = 0x300000010;
  func_0x000108266590();
  *(undefined2 *)(puVar14 + 1) = (undefined2)uStack_70;
  func_0x000108266580();
  *(undefined2 *)((long)puVar14 + 10) = (undefined2)uStack_70;
  FUN_108265874(0x73);
  func_0x00010826656c();
  *(undefined4 *)(puVar14 + 2) = 3;
  func_0x0001082666a4();
  func_0x0001082665a0();
  sVar2 = (short)puVar14 + 8;
  func_0x0001082664c0();
  func_0x000108266564();
  puVar14 = (undefined8 *)puVar14[1];
  *puVar14 = 0x300000011;
  *(undefined8 *)((long)puVar14 + 0xc) = 0x300000013;
  puVar14[3] = 0x100000012;
  FUN_108265920();
  *(short *)(puVar14 + 4) = sVar2;
  FUN_108265874(0x14);
  func_0x0001082665c4();
  func_0x000108266664();
  uVar6 = 0xf;
  if (!(bool)uVar1) {
    uVar6 = extraout_w8;
  }
  *(undefined2 *)puVar14 = uVar6;
  *(undefined4 *)(puVar14 + 2) = 1;
  func_0x0001082664d8();
  func_0x0001082665a0();
  func_0x0001082664c0(puVar14 + 1);
  func_0x000108266564();
  puVar14 = (undefined8 *)puVar14[1];
  *puVar14 = 0x300000015;
  func_0x000108266590();
  *(undefined2 *)(puVar14 + 1) = (undefined2)uStack_70;
  func_0x000108266580();
  *(undefined2 *)((long)puVar14 + 10) = (undefined2)uStack_70;
  FUN_108265874(0x3c);
  func_0x0001082665c4();
  func_0x000108266664();
  uVar6 = 0xf;
  if (!(bool)uVar1) {
    uVar6 = extraout_w8_00;
  }
  *(undefined2 *)puVar14 = uVar6;
  *(undefined4 *)(puVar14 + 2) = 1;
  func_0x0001082664d8();
  func_0x0001082665a0();
  func_0x0001082664c0(puVar14 + 1);
  func_0x000108266564();
  *(undefined8 *)puVar14[1] = 0x300000016;
  func_0x00010826671c();
  if ((bool)uVar1) {
    uVar10 = 0xb4;
    FUN_108265874();
    *(undefined2 *)(lVar8 + (uVar10 & 0xffffffff) * 0x18) = 1;
  }
  uVar10 = 0x6e;
  FUN_108265874();
  puVar13 = (undefined2 *)(lVar8 + (uVar10 & 0xffffffff) * 0x18);
  func_0x000108266664();
  uVar6 = 0xf;
  if (!(bool)uVar1) {
    uVar6 = extraout_w8_01;
  }
  *puVar13 = uVar6;
  *(undefined4 *)(puVar13 + 8) = 1;
  func_0x0001082664d8();
  func_0x0001082665a0();
  func_0x0001082664c0(puVar13 + 4);
  func_0x000108266564();
  **(undefined8 **)(puVar13 + 4) = 0x300000018;
  uVar10 = 0x41;
  FUN_108265874();
  puVar13 = (undefined2 *)(lVar8 + (uVar10 & 0xffffffff) * 0x18);
  *puVar13 = 0xf;
  *(undefined4 *)(puVar13 + 8) = 1;
  func_0x0001082664d8();
  func_0x0001082665a0();
  func_0x0001082664c0(puVar13 + 4);
  func_0x000108266564();
  **(undefined8 **)(puVar13 + 4) = 0x300000017;
  for (lVar8 = 0x230; uVar1 = (int)lVar8 == 0x350, !(bool)uVar1; lVar8 = lVar8 + 8) {
    *(undefined8 *)(unaff_x19 + lVar8) = 0;
  }
  uStack_68 = 1;
  uStack_70 = 10;
  FUN_1082657c8();
  func_0x00010826671c();
  if ((bool)uVar1) {
    func_0x000108266514(0x28);
    func_0x00010826654c();
    func_0x000108266514(0x2a);
    func_0x00010826654c();
  }
  func_0x000108266554();
  func_0x00010826654c();
  func_0x000108266514(0x47);
  func_0x00010826654c();
  func_0x000108266554();
  func_0x00010826654c();
  func_0x000108266514(0x1e);
  func_0x00010826654c();
  func_0x000108266514(0x50);
  func_0x00010826654c();
  uStack_70 = 0x5a;
  func_0x00010826654c();
  func_0x000108266514(0x5e);
  func_0x00010826654c();
  func_0x000108266554();
  func_0x00010826654c();
  uStack_70 = 10;
  func_0x00010826654c();
  func_0x000108266514(0x19);
  func_0x00010826654c();
  func_0x000108266554();
  func_0x00010826654c();
  func_0x000108266554();
  func_0x00010826654c();
  func_0x000108266554();
  func_0x00010826654c();
  func_0x000108266514(0x14);
  func_0x00010826654c();
  func_0x000108266514(0x3c);
  func_0x00010826654c();
  func_0x000108266514(0x6e);
  func_0x00010826654c();
  func_0x000108266514(0x41);
  func_0x00010826654c();
  *(undefined8 *)(unaff_x19 + 0x370) = 0xfd;
  func_0x00010826671c();
  if ((bool)uVar1) {
    bVar9 = 2 < *(int *)(unaff_x19 + 0x354);
    uVar10 = 0x8000;
  }
  else {
    uVar10 = 0;
    bVar9 = false;
  }
  *(byte *)(unaff_x19 + 0x378) = *(byte *)(unaff_x19 + 0x378) & 0xfe | bVar9;
  *(ulong *)(unaff_x19 + 0x18) = *(ulong *)(unaff_x19 + 0x18) & 0xffffffffffff7fff | uVar10;
  lVar8 = unaff_x19;
  FUN_10828a454();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_10840f118(unaff_x19 + 0x358);
    lVar4 = unaff_x19 + 0x220;
    lVar11 = -0x1b0;
    do {
      func_0x0001082663b0(lVar4);
      lVar4 = lVar4 + -0x18;
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != 0);
    func_0x000108265310();
    __Unwind_Resume(lVar8);
    uVar15 = 0x90;
    __Znwm();
    FUN_108266418();
    *extraout_x8 = uVar15;
    return;
  }
  return;
}



/* Entry: 1082652e8; end: 1082653c7;  */

void FUN_1082652e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x90;
  __Znwm();
  FUN_108266418();
  *param_1 = uVar1;
  return;
}



/* Entry: 1082653c8; end: 108265433;  */

uint FUN_1082653c8(undefined8 param_1,long param_2,int param_3,long param_4,int param_5,int param_6,
                  undefined8 param_7,undefined8 param_8,int *param_9,byte param_10)

{
  uint uVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  if ((((param_2 == param_4) && ((param_10 & 1) == 0)) && (uVar1 = 0, param_6 != 0)) &&
     (param_3 < 2 && param_5 != 1)) {
    if (*param_9 == 0 && param_9[1] == 0) {
      uStack_20 = 0;
      uStack_18 = param_7;
      FUN_10821be98(param_8,&uStack_20);
      uVar1 = (uint)param_8 ^ 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* Entry: 108265434; end: 108265573;  */

void FUN_108265434(undefined8 param_1,long *param_2,long param_3,undefined8 param_4,long param_5)

{
  func_0x00010821a0c0();
  func_0x00010821a0c0();
  if (param_5 == param_3) {
    (**(code **)(*param_2 + 0x30))();
    func_0x000108266638();
    func_0x00010826661c();
    func_0x000108266600();
    func_0x000108265340();
    if (((ulong)param_2 & 1) == 0) {
      func_0x000108266638();
      func_0x00010826661c();
      func_0x000108266600();
      FUN_1082b1dfc(param_4);
      FUN_1082653c8();
    }
  }
  return;
}



/* Entry: 108265574; end: 1082655ab;  */

void FUN_108265574(void)

{
  code *pcVar1;
  long unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x000108266680();
  FUN_108266494();
  if (*(int *)(unaff_x19 + 0x14) != 0) {
    *(undefined4 *)(*(long *)(unaff_x19 + 8) + (long)*(int *)(unaff_x19 + 0x14) * 4 + -4) =
         *unaff_x20;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082655ac);
  (*pcVar1)();
}



/* Entry: 1082655ac; end: 1082655eb;  */

bool FUN_1082655ac(undefined8 param_1,long param_2)

{
  int iVar1;
  uint extraout_w8;
  uint extraout_w9;
  
  func_0x0001082665ec();
  iVar1 = *(int *)(param_2 + 0x10);
  if ((extraout_w8 & extraout_w9) == 0) {
    iVar1 = 0;
  }
  return iVar1 == 0x47 || iVar1 == 0x51;
}


