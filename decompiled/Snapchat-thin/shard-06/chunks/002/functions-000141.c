/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10458a878; end: 10458a897;  */

void FUN_10458a878(long param_1,long param_2,long param_3)

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



/* Entry: 10458a898; end: 10458a9e7;  */

void FUN_10458a898(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
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
      func_0x0001000c5db4(puVar1);
      (**(code **)(lVar8 + 0x20))();
    }
  }
  return;
}



/* Entry: 10458a9e8; end: 10458aa27;  */

void FUN_10458a9e8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10458aa28; end: 10458aa33;  */

undefined8 FUN_10458aa28(void)

{
  long *unaff_x20;
  
  return *(undefined8 *)(*unaff_x20 + 0x10);
}



/* Entry: 10458aa34; end: 10458aa63;  */

undefined1  [16] FUN_10458aa34(void)

{
  undefined1 auVar1 [16];
  long *unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(*unaff_x20 + 0x18);
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 10458aa64; end: 10458aa6f;  */

undefined1  [16] FUN_10458aa64(void)

{
  long *unaff_x20;
  
  return *(undefined1 (*) [16])(*unaff_x20 + 0x28);
}



/* Entry: 10458aa70; end: 10458aa8f;  */

void FUN_10458aa70(void)

{
  FUN_10458a898();
  return;
}



/* Entry: 10458aa90; end: 10458aa93;  */

void FUN_10458aa90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10458aa94; end: 10458aaeb;  */

void FUN_10458aa94(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_20 = &UNK_10dd18a08;
  puStack_18 = &UNK_10dd18a20;
  _swift_initClassMetadata2(param_1,0,3,&puStack_28,param_1 + 0x70);
  return;
}



/* Entry: 10458aaec; end: 10458ac1f;  */

void FUN_10458aaec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e8145ec);
  return;
}



/* Entry: 10458ac20; end: 10458acc3;  */

void FUN_10458ac20(long param_1,long param_2)

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
    puStack_30 = PTR___sSWN_11034dbc0;
    puStack_28 = PTR___sSWs19_HasContiguousBytessWP_11034dbc8;
    func_0x0001000a8868();
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = plVar1[1] - lVar2;
    }
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(lVar2,lVar3);
    func_0x0001000834e4(&lStack_48);
  }
  return;
}



/* Entry: 10458acc4; end: 10458b027;  */

undefined1  [16] FUN_10458acc4(byte *param_1,long param_2)

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



/* Entry: 10458b028; end: 10458b0c7;  */

void FUN_10458b028(void)

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



/* Entry: 10458b0c8; end: 10458b0cb;  */

ulong FUN_10458b0c8(long param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 - 1;
  if (0xb < uVar1) {
    uVar1 = 0xc;
  }
  return uVar1;
}



/* Entry: 10458b0cc; end: 10458b0f7;  */

void FUN_10458b0cc(void)

{
  func_0x0001000285a8(0x113087140,&UNK_10dd18a40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 10458b0f8; end: 10458b117;  */

long FUN_10458b0f8(ulong param_1)

{
  return (param_1 & 0xff) + 1;
}



/* Entry: 10458b118; end: 10458b1ef;  */

void FUN_10458b118(void)

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



/* Entry: 10458b1f0; end: 10458b1ff;  */

void FUN_10458b1f0(long *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20 + 1;
  return;
}



/* Entry: 10458b200; end: 10458b23f;  */

void FUN_10458b200(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113087140;
  func_0x0001000285a8(0x113087140,&UNK_10dd18a40);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 10458b240; end: 10458b287;  */

void FUN_10458b240(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (param_2 != (undefined1 *)0x0) {
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      __ss6HasherV8_combineyys5UInt8VF(*param_2);
    }
  }
  return;
}



/* Entry: 10458b288; end: 10458b28b;  */

bool FUN_10458b288(char *param_1,char *param_2,char *param_3,char *param_4)

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
joined_r0x00010455951c:
      if (param_3 != (char *)0x0) goto LAB_104559520;
LAB_10455954c:
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
        goto joined_r0x00010455951c;
      }
      cVar4 = '\0';
      bVar1 = true;
      param_1 = param_2;
      if (param_3 == (char *)0x0) goto LAB_10455954c;
LAB_104559520:
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



/* Entry: 10458b28c; end: 10458b3f3;  */

void FUN_10458b28c(undefined1 *param_1,undefined1 *param_2)

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



/* Entry: 10458b3f4; end: 10458b40f;  */

void FUN_10458b3f4(void)

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
    puStack_30 = PTR___sSWN_11034dbc0;
    puStack_28 = PTR___sSWs19_HasContiguousBytessWP_11034dbc8;
    func_0x0001000a8868();
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = plVar1[1] - lVar2;
    }
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(lVar2,lVar4);
    func_0x0001000834e4(&lStack_48);
  }
  return;
}



/* Entry: 10458b410; end: 10458b53b;  */

void FUN_10458b410(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar2 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar2 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = puVar1;
  FUN_10460d674();
  puVar4 = puVar1;
  FUN_10460d770();
  puVar5 = puVar1;
  FUN_10460d770();
  *param_1 = lVar2;
  param_1[1] = (long)puVar3;
  param_1[2] = (long)puVar4;
  param_1[3] = (long)puVar5;
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar1;
  return;
}



/* Entry: 10458b53c; end: 10458e19b;  */

void FUN_10458b53c(long param_1)

{
  long lVar1;
  byte ***pppbVar2;
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
  byte ***pppbVar13;
  byte ******ppppppbVar14;
  byte ******ppppppbVar15;
  byte ******ppppppbVar16;
  ulong uVar17;
  byte ***pppbVar18;
  byte ******ppppppbVar19;
  byte ***pppbVar20;
  byte *pbVar21;
  byte ***pppbVar22;
  uint uVar23;
  long lVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong uVar27;
  byte ****ppppbVar28;
  long *unaff_x20;
  byte *****pppppbVar29;
  byte *****pppppbVar30;
  byte *****pppppbVar31;
  byte *****pppppbVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
  byte *****pppppbVar36;
  byte *****pppppbStack_b0;
  byte **ppbStack_a8;
  ulong uStack_98;
  byte *****pppppbStack_90;
  byte **ppbStack_88;
  undefined1 uStack_80;
  byte *****pppppbStack_78;
  byte *pbStack_70;
  
  lVar24 = *(long *)(param_1 + 0x10);
  if (lVar24 != 0) {
    lVar33 = 0;
    do {
      puVar25 = (ulong *)(param_1 + 0x20 + lVar33 * 0x38);
      pppbVar2 = (byte ***)*puVar25;
      ppppppbVar15 = (byte ******)puVar25[1];
      pppbVar22 = (byte ***)puVar25[2];
      uVar12 = puVar25[3];
      ppppppbVar14 = (byte ******)puVar25[4];
      uVar26 = puVar25[5];
      bVar4 = (byte)puVar25[6];
      func_0x00010458f67c(ppppppbVar15,pppbVar22,uVar12,ppppppbVar14,uVar26,bVar4);
      func_0x00010458f67c(ppppppbVar15,pppbVar22,uVar12,ppppppbVar14,uVar26,bVar4);
      pppbVar20 = pppbVar22;
      func_0x00010458f6ac(ppppppbVar15,pppbVar22,uVar12,ppppppbVar14,uVar26,bVar4);
      uVar10 = (uint)(uVar12 >> 0x20);
      uVar23 = uVar10 >> 0x1e;
      uVar34 = (uint)ppppppbVar15;
      if (uVar10 >> 0x1e < 2) {
        if (uVar23 == 0) {
          if ((uVar12 & 1) == 0) {
            if (ppppppbVar15 == (byte ******)0x0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cae8);
              (*pcVar8)();
            }
            pppbVar22 = (byte ***)((long)pppbVar22 + (long)ppppppbVar15);
          }
          else {
            if ((ulong)ppppppbVar15 >> 0x20 != 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cad4);
              (*pcVar8)();
            }
            if (((ulong)ppppppbVar15 & 0xfffff800) == 0xd800) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cb34);
              (*pcVar8)();
            }
            if ((byte ******)0x10ffff < ppppppbVar15) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10458caf8);
              (*pcVar8)();
            }
            if (ppppppbVar15 < (byte ******)0x80) {
              uVar23 = uVar34 + 1;
            }
            else {
              uVar5 = (uVar34 & 0x3f) * 0x100;
              uVar23 = (uVar5 | uVar34 >> 6 & 0x3f) * 0x100;
              uVar10 = (uVar34 >> 0x12) + (uVar23 | uVar34 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
              if ((ulong)ppppppbVar15 >> 0x10 == 0) {
                uVar10 = (uVar34 >> 0xc) + uVar23 + 0x8181e1;
              }
              uVar23 = (uVar34 >> 6) + uVar5 + 0x81c1;
              if ((byte ******)0x7ff < ppppppbVar15) {
                uVar23 = uVar10;
              }
            }
            pppbVar20 = (byte ***)(ulong)(4 - ((uint)LZCOUNT(uVar23) >> 3));
            pppppbStack_b0 =
                 (byte *****)
                 ((ulong)uVar23 + 0xfefefefefefeff &
                 (-1L << (((ulong)pppbVar20 & 7) << 3) ^ 0xffffffffffffffffU));
            ppppppbVar15 = &pppppbStack_b0;
            func_0x00010458af24();
            pppbVar22 = pppbVar20;
          }
          uVar12 = unaff_x20[1];
          _swift_isUniquelyReferenced_nonNull_native();
          uVar10 = (uint)uVar12;
          pppppbVar29 = (byte *****)unaff_x20[1];
          pppbVar13 = pppbVar2;
          pppppbStack_b0 = pppppbVar29;
          func_0x00010035a314();
          uVar26 = (ulong)~(uint)pppbVar20 & 1;
          lVar11 = (long)pppppbVar29[2] + uVar26;
          if (SCARRY8((long)pppppbVar29[2],uVar26)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458caa8);
            (*pcVar8)();
          }
          if ((long)pppppbVar29[3] < lVar11) {
            func_0x000104595a3c(lVar11);
            pppbVar13 = pppbVar2;
            func_0x00010035a314();
            if (((uint)pppbVar20 & 1) != (uVar10 & 1)) goto LAB_10458cb50;
LAB_10458bbc4:
            if (((ulong)pppbVar20 & 1) == 0) goto LAB_10458bdf4;
LAB_10458bbcc:
            ppppbVar28 = pppppbStack_b0[7] + (long)pppbVar13 * 5;
            *ppppbVar28 = (byte ***)ppppppbVar15;
            ppppbVar28[1] = pppbVar22;
            *(undefined1 *)(ppppbVar28 + 2) = 0;
            ppppbVar28[3] = (byte ***)ppppppbVar15;
            ppppbVar28[4] = pppbVar22;
          }
          else {
            if ((uVar12 & 1) != 0) goto LAB_10458bbc4;
            func_0x000104594c98();
            if (((ulong)pppbVar20 & 1) != 0) goto LAB_10458bbcc;
LAB_10458bdf4:
            pppppbStack_b0[((ulong)pppbVar13 >> 6) + 8] =
                 (byte ****)
                 ((ulong)pppppbStack_b0[((ulong)pppbVar13 >> 6) + 8] |
                 1L << ((ulong)pppbVar13 & 0x3f));
            pppppbStack_b0[6][(long)pppbVar13] = pppbVar2;
            ppppbVar28 = pppppbStack_b0[7] + (long)pppbVar13 * 5;
            *ppppbVar28 = (byte ***)ppppppbVar15;
            ppppbVar28[1] = pppbVar22;
            *(undefined1 *)(ppppbVar28 + 2) = 0;
            ppppbVar28[3] = (byte ***)ppppppbVar15;
            ppppbVar28[4] = pppbVar22;
            if (SCARRY8((long)pppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cb04);
              (*pcVar8)();
            }
            pppppbStack_b0[2] = (byte ****)((long)pppppbStack_b0[2] + 1);
          }
          unaff_x20[1] = (long)pppppbStack_b0;
          uVar12 = unaff_x20[2];
          _swift_isUniquelyReferenced_nonNull_native();
          pppppbVar29 = (byte *****)unaff_x20[2];
          ppppppbVar14 = ppppppbVar15;
          pppbVar20 = pppbVar22;
          pppppbStack_b0 = pppppbVar29;
          FUN_104559588();
          uVar26 = (ulong)~(uint)pppbVar20 & 1;
          lVar11 = (long)pppppbVar29[2] + uVar26;
          if (SCARRY8((long)pppppbVar29[2],uVar26)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458caac);
            (*pcVar8)();
          }
          if ((long)pppppbVar29[3] < lVar11) {
            func_0x0001045957a0(lVar11,uVar12);
            ppppppbVar14 = ppppppbVar15;
            pppbVar13 = pppbVar22;
            FUN_104559588();
            if (((uint)pppbVar20 & 1) != ((uint)pppbVar13 & 1)) goto LAB_10458cb40;
LAB_10458bec4:
            if (((ulong)pppbVar20 & 1) == 0) goto LAB_10458c060;
LAB_10458becc:
            pppppbStack_b0[7][(long)ppppppbVar14] = pppbVar2;
          }
          else {
            if ((uVar12 & 1) != 0) goto LAB_10458bec4;
            FUN_104594b48();
            if (((ulong)pppbVar20 & 1) != 0) goto LAB_10458becc;
LAB_10458c060:
            pppppbStack_b0[((ulong)ppppppbVar14 >> 6) + 8] =
                 (byte ****)
                 ((ulong)pppppbStack_b0[((ulong)ppppppbVar14 >> 6) + 8] |
                 1L << ((ulong)ppppppbVar14 & 0x3f));
            ppppbVar28 = pppppbStack_b0[6];
            ppppbVar28[(long)ppppppbVar14 * 2] = (byte ***)ppppppbVar15;
            (ppppbVar28 + (long)ppppppbVar14 * 2)[1] = pppbVar22;
            pppppbStack_b0[7][(long)ppppppbVar14] = pppbVar2;
            if (SCARRY8((long)pppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cb10);
              (*pcVar8)();
            }
            pppppbStack_b0[2] = (byte ****)((long)pppppbStack_b0[2] + 1);
          }
          unaff_x20[2] = (long)pppppbStack_b0;
          uVar12 = unaff_x20[3];
          _swift_isUniquelyReferenced_nonNull_native();
          pppppbVar29 = (byte *****)unaff_x20[3];
          ppppppbVar14 = ppppppbVar15;
          pppbVar20 = pppbVar22;
          pppppbStack_b0 = pppppbVar29;
          FUN_104559588();
          uVar26 = (ulong)~(uint)pppbVar20 & 1;
          lVar11 = (long)pppppbVar29[2] + uVar26;
          if (SCARRY8((long)pppppbVar29[2],uVar26)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cab8);
            (*pcVar8)();
          }
          if ((long)pppppbVar29[3] < lVar11) {
            func_0x0001045957a0(lVar11,uVar12);
            ppppppbVar14 = ppppppbVar15;
            pppbVar13 = pppbVar22;
            FUN_104559588();
            if (((uint)pppbVar20 & 1) != ((uint)pppbVar13 & 1)) goto LAB_10458cb40;
          }
          else if ((uVar12 & 1) == 0) {
            FUN_104594b48();
          }
          if (((ulong)pppbVar20 & 1) == 0) {
            pppppbStack_b0[((ulong)ppppppbVar14 >> 6) + 8] =
                 (byte ****)
                 ((ulong)pppppbStack_b0[((ulong)ppppppbVar14 >> 6) + 8] |
                 1L << ((ulong)ppppppbVar14 & 0x3f));
            ppppbVar28 = pppppbStack_b0[6];
            ppppbVar28[(long)ppppppbVar14 * 2] = (byte ***)ppppppbVar15;
            (ppppbVar28 + (long)ppppppbVar14 * 2)[1] = pppbVar22;
            pppppbStack_b0[7][(long)ppppppbVar14] = pppbVar2;
            if (SCARRY8((long)pppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cb1c);
              (*pcVar8)();
            }
            pppppbStack_b0[2] = (byte ****)((long)pppppbStack_b0[2] + 1);
            unaff_x20[3] = (long)pppppbStack_b0;
          }
          else {
            pppppbStack_b0[7][(long)ppppppbVar14] = pppbVar2;
            unaff_x20[3] = (long)pppppbStack_b0;
          }
        }
        else {
          if ((uVar12 & 1) == 0) {
            if (ppppppbVar15 == (byte ******)0x0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cad0);
              (*pcVar8)();
            }
            pppppbStack_b0 = (byte *****)0x0;
            ppbStack_a8 = (byte **)0xe000000000000000;
            if (pppbVar22 != (byte ***)0x0) {
              ppppppbVar16 = ppppppbVar15;
              pppbVar20 = pppbVar22;
              bVar7 = false;
              do {
                pppbVar20 = (byte ***)((long)pppbVar20 - 1);
                bVar3 = *(byte *)ppppppbVar16;
                uVar10 = (uint)bVar3;
                if (uVar10 != 0x5f) {
                  bVar9 = bVar3;
                  if ((bVar7) && (bVar9 = bVar3 & 0x5f, 0x19 < uVar10 - 0x61)) {
                    bVar9 = bVar3;
                  }
                  __sSS17UnicodeScalarViewV6appendyys0A0O0B0VF(bVar9);
                }
                ppppppbVar16 = (byte ******)((long)ppppppbVar16 + 1);
                bVar7 = uVar10 == 0x5f;
              } while (pppbVar20 != (byte ***)0x0);
            }
            pbVar21 = (byte *)((long)ppppppbVar15 + (long)pppbVar22);
            ppppppbVar19 = (byte ******)pppppbStack_b0;
            pppbVar20 = (byte ***)ppbStack_a8;
            ppppppbVar16 = ppppppbVar15;
          }
          else {
            if ((ulong)ppppppbVar15 >> 0x20 != 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cae4);
              (*pcVar8)();
            }
            if (((ulong)ppppppbVar15 & 0xfffff800) == 0xd800) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cb38);
              (*pcVar8)();
            }
            if ((byte ******)0x10ffff < ppppppbVar15) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10458caec);
              (*pcVar8)();
            }
            if (ppppppbVar15 < (byte ******)0x80) {
              uVar23 = uVar34 + 1;
            }
            else {
              uVar5 = (uVar34 & 0x3f) * 0x100;
              uVar23 = (uVar5 | uVar34 >> 6 & 0x3f) * 0x100;
              uVar10 = (uVar34 >> 0x12) + (uVar23 | uVar34 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
              if ((ulong)ppppppbVar15 >> 0x10 == 0) {
                uVar10 = (uVar34 >> 0xc) + uVar23 + 0x8181e1;
              }
              uVar23 = (uVar34 >> 6) + uVar5 + 0x81c1;
              if ((byte ******)0x7ff < ppppppbVar15) {
                uVar23 = uVar10;
              }
            }
            pbVar21 = (byte *)(ulong)(4 - ((uint)LZCOUNT(uVar23) >> 3));
            pppppbStack_b0 =
                 (byte *****)
                 ((ulong)uVar23 + 0xfefefefefefeff &
                 (-1L << (((ulong)pbVar21 & 7) << 3) ^ 0xffffffffffffffffU));
            ppppppbVar16 = &pppppbStack_b0;
            func_0x00010458af24();
            ppppppbVar19 = ppppppbVar15;
            pppbVar20 = pppbVar22;
            __ss12StaticStringV11descriptionSSvg(ppppppbVar15,pppbVar22,uVar12);
          }
          pppbVar13 = pppbVar20;
          func_0x00010458ad64();
          _swift_bridgeObjectRelease(pppbVar20);
          uStack_80 = 0;
          lVar11 = unaff_x20[1];
          pppppbStack_90 = (byte *****)ppppppbVar19;
          ppbStack_88 = (byte **)pppbVar13;
          pppppbStack_78 = (byte *****)ppppppbVar16;
          pbStack_70 = pbVar21;
          _swift_isUniquelyReferenced_nonNull_native(lVar11);
          pppppbStack_b0 = (byte *****)unaff_x20[1];
          FUN_104568560(&pppppbStack_90,pppbVar2,lVar11);
          unaff_x20[1] = (long)pppppbStack_b0;
          lVar11 = unaff_x20[2];
          _swift_isUniquelyReferenced_nonNull_native(lVar11);
          pppppbStack_b0 = (byte *****)unaff_x20[2];
          func_0x000104568454(pppbVar2,ppppppbVar16,pbVar21,lVar11);
          unaff_x20[2] = (long)pppppbStack_b0;
          lVar11 = unaff_x20[3];
          _swift_isUniquelyReferenced_nonNull_native(lVar11);
          pppppbStack_b0 = (byte *****)unaff_x20[3];
          func_0x000104568454(pppbVar2,ppppppbVar16,pbVar21,lVar11);
          unaff_x20[3] = (long)pppppbStack_b0;
          _swift_isUniquelyReferenced_nonNull_native();
          pppppbVar29 = pppppbStack_b0;
          pppppbStack_b0 = (byte *****)unaff_x20[3];
          func_0x000104568454(pppbVar2,ppppppbVar19,pppbVar13,pppppbVar29);
          func_0x00010458f6ac(ppppppbVar15,pppbVar22,uVar12,ppppppbVar14,uVar26,bVar4);
          unaff_x20[3] = (long)pppppbStack_b0;
        }
      }
      else if (uVar23 == 2) {
        if ((bVar4 & 1) == 0) {
          if (ppppppbVar14 == (byte ******)0x0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cadc);
            (*pcVar8)();
          }
          pppbVar13 = (byte ***)(uVar26 + (long)ppppppbVar14);
          if ((uVar12 & 1) != 0) goto LAB_10458b980;
LAB_10458b770:
          if (ppppppbVar15 == (byte ******)0x0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cb00);
            (*pcVar8)();
          }
          pppbVar22 = (byte ***)((long)pppbVar22 + (long)ppppppbVar15);
        }
        else {
          if ((ulong)ppppppbVar14 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cae0);
            (*pcVar8)();
          }
          if (((ulong)ppppppbVar14 & 0xfffff800) == 0xd800) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cb3c);
            (*pcVar8)();
          }
          if ((byte ******)0x10ffff < ppppppbVar14) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458caf0);
            (*pcVar8)();
          }
          uVar10 = (uint)ppppppbVar14;
          if (ppppppbVar14 < (byte ******)0x80) {
            uVar10 = uVar10 + 1;
          }
          else {
            uVar6 = (uVar10 & 0x3f) * 0x100;
            uVar5 = (uVar6 | uVar10 >> 6 & 0x3f) * 0x100;
            uVar23 = (uVar10 >> 0x12) + (uVar5 | uVar10 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
            if ((ulong)ppppppbVar14 >> 0x10 == 0) {
              uVar23 = (uVar10 >> 0xc) + uVar5 + 0x8181e1;
            }
            uVar10 = (uVar10 >> 6) + uVar6 + 0x81c1;
            if ((byte ******)0x7ff < ppppppbVar14) {
              uVar10 = uVar23;
            }
          }
          pppbVar20 = (byte ***)(ulong)(4 - ((uint)LZCOUNT(uVar10) >> 3));
          pppppbStack_b0 =
               (byte *****)
               ((ulong)uVar10 + 0xfefefefefefeff &
               (-1L << (((ulong)pppbVar20 & 7) << 3) ^ 0xffffffffffffffffU));
          ppppppbVar14 = &pppppbStack_b0;
          func_0x00010458af24();
          pppbVar13 = pppbVar20;
          if ((uVar12 & 1) == 0) goto LAB_10458b770;
LAB_10458b980:
          if ((ulong)ppppppbVar15 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cafc);
            (*pcVar8)();
          }
          if (((ulong)ppppppbVar15 & 0xfffff800) == 0xd800) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cb40);
            (*pcVar8)();
          }
          if ((byte ******)0x10ffff < ppppppbVar15) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cb0c);
            (*pcVar8)();
          }
          if (ppppppbVar15 < (byte ******)0x80) {
            uVar23 = uVar34 + 1;
          }
          else {
            uVar5 = (uVar34 & 0x3f) * 0x100;
            uVar23 = (uVar5 | uVar34 >> 6 & 0x3f) * 0x100;
            uVar10 = (uVar34 >> 0x12) + (uVar23 | uVar34 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
            if ((ulong)ppppppbVar15 >> 0x10 == 0) {
              uVar10 = (uVar34 >> 0xc) + uVar23 + 0x8181e1;
            }
            uVar23 = (uVar34 >> 6) + uVar5 + 0x81c1;
            if ((byte ******)0x7ff < ppppppbVar15) {
              uVar23 = uVar10;
            }
          }
          pppbVar20 = (byte ***)(ulong)(4 - ((uint)LZCOUNT(uVar23) >> 3));
          pppppbStack_b0 =
               (byte *****)
               ((ulong)uVar23 + 0xfefefefefefeff &
               (-1L << (((ulong)pppbVar20 & 7) << 3) ^ 0xffffffffffffffffU));
          ppppppbVar15 = &pppppbStack_b0;
          func_0x00010458af24();
          pppbVar22 = pppbVar20;
        }
        uVar12 = unaff_x20[1];
        _swift_isUniquelyReferenced_nonNull_native();
        uVar10 = (uint)uVar12;
        pppppbVar29 = (byte *****)unaff_x20[1];
        pppbVar18 = pppbVar2;
        pppppbStack_b0 = pppppbVar29;
        func_0x00010035a314();
        uVar26 = (ulong)~(uint)pppbVar20 & 1;
        lVar11 = (long)pppppbVar29[2] + uVar26;
        if (SCARRY8((long)pppppbVar29[2],uVar26)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cab4);
          (*pcVar8)();
        }
        if ((long)pppppbVar29[3] < lVar11) {
          func_0x000104595a3c(lVar11);
          pppbVar18 = pppbVar2;
          func_0x00010035a314();
          if (((uint)pppbVar20 & 1) != (uVar10 & 1)) {
LAB_10458cb50:
            __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                      (PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cb60);
            (*pcVar8)();
          }
LAB_10458bc18:
          if (((ulong)pppbVar20 & 1) == 0) goto LAB_10458c698;
LAB_10458bc20:
          ppppbVar28 = pppppbStack_b0[7] + (long)pppbVar18 * 5;
          *ppppbVar28 = (byte ***)ppppppbVar14;
          ppppbVar28[1] = pppbVar13;
          *(undefined1 *)(ppppbVar28 + 2) = 0;
          ppppbVar28[3] = (byte ***)ppppppbVar15;
          ppppbVar28[4] = pppbVar22;
        }
        else {
          if ((uVar12 & 1) != 0) goto LAB_10458bc18;
          func_0x000104594c98();
          if (((ulong)pppbVar20 & 1) != 0) goto LAB_10458bc20;
LAB_10458c698:
          pppppbStack_b0[((ulong)pppbVar18 >> 6) + 8] =
               (byte ****)
               ((ulong)pppppbStack_b0[((ulong)pppbVar18 >> 6) + 8] | 1L << ((ulong)pppbVar18 & 0x3f)
               );
          pppppbStack_b0[6][(long)pppbVar18] = pppbVar2;
          ppppbVar28 = pppppbStack_b0[7] + (long)pppbVar18 * 5;
          *ppppbVar28 = (byte ***)ppppppbVar14;
          ppppbVar28[1] = pppbVar13;
          *(undefined1 *)(ppppbVar28 + 2) = 0;
          ppppbVar28[3] = (byte ***)ppppppbVar15;
          ppppbVar28[4] = pppbVar22;
          if (SCARRY8((long)pppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cb18);
            (*pcVar8)();
          }
          pppppbStack_b0[2] = (byte ****)((long)pppppbStack_b0[2] + 1);
        }
        unaff_x20[1] = (long)pppppbStack_b0;
        uVar12 = unaff_x20[2];
        _swift_isUniquelyReferenced_nonNull_native();
        pppppbVar29 = (byte *****)unaff_x20[2];
        ppppppbVar16 = ppppppbVar15;
        pppbVar20 = pppbVar22;
        pppppbStack_b0 = pppppbVar29;
        FUN_104559588();
        uVar26 = (ulong)~(uint)pppbVar20 & 1;
        lVar11 = (long)pppppbVar29[2] + uVar26;
        if (SCARRY8((long)pppppbVar29[2],uVar26)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cac0);
          (*pcVar8)();
        }
        if ((long)pppppbVar29[3] < lVar11) {
          func_0x0001045957a0(lVar11,uVar12);
          ppppppbVar16 = ppppppbVar15;
          pppbVar18 = pppbVar22;
          FUN_104559588();
          if (((uint)pppbVar20 & 1) != ((uint)pppbVar18 & 1)) goto LAB_10458cb40;
LAB_10458c764:
          if (((ulong)pppbVar20 & 1) == 0) goto LAB_10458c818;
LAB_10458c76c:
          pppppbStack_b0[7][(long)ppppppbVar16] = pppbVar2;
        }
        else {
          if ((uVar12 & 1) != 0) goto LAB_10458c764;
          FUN_104594b48();
          if (((ulong)pppbVar20 & 1) != 0) goto LAB_10458c76c;
LAB_10458c818:
          pppppbStack_b0[((ulong)ppppppbVar16 >> 6) + 8] =
               (byte ****)
               ((ulong)pppppbStack_b0[((ulong)ppppppbVar16 >> 6) + 8] |
               1L << ((ulong)ppppppbVar16 & 0x3f));
          ppppbVar28 = pppppbStack_b0[6];
          ppppbVar28[(long)ppppppbVar16 * 2] = (byte ***)ppppppbVar15;
          (ppppbVar28 + (long)ppppppbVar16 * 2)[1] = pppbVar22;
          pppppbStack_b0[7][(long)ppppppbVar16] = pppbVar2;
          if (SCARRY8((long)pppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cb24);
            (*pcVar8)();
          }
          pppppbStack_b0[2] = (byte ****)((long)pppppbStack_b0[2] + 1);
        }
        unaff_x20[2] = (long)pppppbStack_b0;
        uVar12 = unaff_x20[3];
        _swift_isUniquelyReferenced_nonNull_native();
        pppppbVar29 = (byte *****)unaff_x20[3];
        ppppppbVar16 = ppppppbVar15;
        pppbVar20 = pppbVar22;
        pppppbStack_b0 = pppppbVar29;
        FUN_104559588();
        uVar26 = (ulong)~(uint)pppbVar20 & 1;
        lVar11 = (long)pppppbVar29[2] + uVar26;
        if (SCARRY8((long)pppppbVar29[2],uVar26)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cac4);
          (*pcVar8)();
        }
        if ((long)pppppbVar29[3] < lVar11) {
          func_0x0001045957a0(lVar11,uVar12);
          ppppppbVar16 = ppppppbVar15;
          pppbVar18 = pppbVar22;
          FUN_104559588();
          if (((uint)pppbVar20 & 1) != ((uint)pppbVar18 & 1)) goto LAB_10458cb40;
LAB_10458c8d8:
          if (((ulong)pppbVar20 & 1) == 0) goto LAB_10458c914;
LAB_10458c8e0:
          pppppbStack_b0[7][(long)ppppppbVar16] = pppbVar2;
        }
        else {
          if ((uVar12 & 1) != 0) goto LAB_10458c8d8;
          FUN_104594b48();
          if (((ulong)pppbVar20 & 1) != 0) goto LAB_10458c8e0;
LAB_10458c914:
          pppppbStack_b0[((ulong)ppppppbVar16 >> 6) + 8] =
               (byte ****)
               ((ulong)pppppbStack_b0[((ulong)ppppppbVar16 >> 6) + 8] |
               1L << ((ulong)ppppppbVar16 & 0x3f));
          ppppbVar28 = pppppbStack_b0[6];
          ppppbVar28[(long)ppppppbVar16 * 2] = (byte ***)ppppppbVar15;
          (ppppbVar28 + (long)ppppppbVar16 * 2)[1] = pppbVar22;
          pppppbStack_b0[7][(long)ppppppbVar16] = pppbVar2;
          if (SCARRY8((long)pppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cb28);
            (*pcVar8)();
          }
          pppppbStack_b0[2] = (byte ****)((long)pppppbStack_b0[2] + 1);
        }
        unaff_x20[3] = (long)pppppbStack_b0;
        pppppbVar29 = pppppbStack_b0;
        _swift_isUniquelyReferenced_nonNull_native();
        pppppbVar32 = (byte *****)unaff_x20[3];
        ppppppbVar15 = ppppppbVar14;
        pppbVar22 = pppbVar13;
        pppppbStack_b0 = pppppbVar32;
        FUN_104559588();
        uVar12 = (ulong)~(uint)pppbVar22 & 1;
        lVar11 = (long)pppppbVar32[2] + uVar12;
        if (SCARRY8((long)pppppbVar32[2],uVar12)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cac8);
          (*pcVar8)();
        }
        if ((long)pppppbVar32[3] < lVar11) {
          func_0x0001045957a0(lVar11,pppppbVar29);
          ppppppbVar15 = ppppppbVar14;
          pppbVar20 = pppbVar13;
          FUN_104559588();
          if (((uint)pppbVar22 & 1) != ((uint)pppbVar20 & 1)) {
LAB_10458cb40:
            __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                      (&UNK_110789748);
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cb50);
            (*pcVar8)();
          }
LAB_10458c9d8:
          if (((ulong)pppbVar22 & 1) == 0) goto LAB_10458ca10;
LAB_10458c9e0:
          pppppbStack_b0[7][(long)ppppppbVar15] = pppbVar2;
        }
        else {
          if (((ulong)pppppbVar29 & 1) != 0) goto LAB_10458c9d8;
          FUN_104594b48();
          if (((ulong)pppbVar22 & 1) != 0) goto LAB_10458c9e0;
LAB_10458ca10:
          pppppbStack_b0[((ulong)ppppppbVar15 >> 6) + 8] =
               (byte ****)
               ((ulong)pppppbStack_b0[((ulong)ppppppbVar15 >> 6) + 8] |
               1L << ((ulong)ppppppbVar15 & 0x3f));
          ppppbVar28 = pppppbStack_b0[6];
          ppppbVar28[(long)ppppppbVar15 * 2] = (byte ***)ppppppbVar14;
          (ppppbVar28 + (long)ppppppbVar15 * 2)[1] = pppbVar13;
          pppppbStack_b0[7][(long)ppppppbVar15] = pppbVar2;
          if (SCARRY8((long)pppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cb2c);
            (*pcVar8)();
          }
          pppppbStack_b0[2] = (byte ****)((long)pppppbStack_b0[2] + 1);
        }
        unaff_x20[3] = (long)pppppbStack_b0;
      }
      else {
        lVar11 = *unaff_x20;
        if ((uVar12 & 1) == 0) {
          if (ppppppbVar15 == (byte ******)0x0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cad8);
            (*pcVar8)();
          }
          pppbVar13 = (byte ***)((long)pppbVar22 + (long)ppppppbVar15);
          ppppppbVar16 = ppppppbVar15;
        }
        else {
          if ((ulong)ppppppbVar15 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cacc);
            (*pcVar8)();
          }
          if (((ulong)ppppppbVar15 & 0xfffff800) == 0xd800) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cb30);
            (*pcVar8)();
          }
          if ((byte ******)0x10ffff < ppppppbVar15) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458caf4);
            (*pcVar8)();
          }
          if (ppppppbVar15 < (byte ******)0x80) {
            uVar23 = uVar34 + 1;
          }
          else {
            uVar5 = (uVar34 & 0x3f) * 0x100;
            uVar23 = (uVar5 | uVar34 >> 6 & 0x3f) * 0x100;
            uVar10 = (uVar34 >> 0x12) + (uVar23 | uVar34 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
            if ((ulong)ppppppbVar15 >> 0x10 == 0) {
              uVar10 = (uVar34 >> 0xc) + uVar23 + 0x8181e1;
            }
            uVar23 = (uVar34 >> 6) + uVar5 + 0x81c1;
            if ((byte ******)0x7ff < ppppppbVar15) {
              uVar23 = uVar10;
            }
          }
          pppbVar20 = (byte ***)(ulong)(4 - ((uint)LZCOUNT(uVar23) >> 3));
          pppppbStack_b0 =
               (byte *****)
               ((ulong)uVar23 + 0xfefefefefefeff &
               (-1L << (((ulong)pppbVar20 & 7) << 3) ^ 0xffffffffffffffffU));
          ppppppbVar16 = &pppppbStack_b0;
          func_0x00010458af24();
          pppbVar13 = pppbVar20;
        }
        uVar17 = unaff_x20[1];
        _swift_isUniquelyReferenced_nonNull_native();
        uVar10 = (uint)uVar17;
        pppppbVar29 = (byte *****)unaff_x20[1];
        pppbVar18 = pppbVar2;
        pppppbStack_b0 = pppppbVar29;
        func_0x00010035a314();
        uVar27 = (ulong)~(uint)pppbVar20 & 1;
        lVar1 = (long)pppppbVar29[2] + uVar27;
        if (SCARRY8((long)pppppbVar29[2],uVar27)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10458caa4);
          (*pcVar8)();
        }
        if ((long)pppppbVar29[3] < lVar1) {
          func_0x000104595a3c(lVar1);
          pppbVar18 = pppbVar2;
          func_0x00010035a314();
          if (((uint)pppbVar20 & 1) != (uVar10 & 1)) goto LAB_10458cb50;
LAB_10458bbf0:
          if (((ulong)pppbVar20 & 1) == 0) goto LAB_10458befc;
LAB_10458bbf8:
          ppppbVar28 = pppppbStack_b0[7] + (long)pppbVar18 * 5;
          *ppppbVar28 = (byte ***)ppppppbVar16;
          ppppbVar28[1] = pppbVar13;
          *(undefined1 *)(ppppbVar28 + 2) = 0;
          ppppbVar28[3] = (byte ***)ppppppbVar16;
          ppppbVar28[4] = pppbVar13;
        }
        else {
          if ((uVar17 & 1) != 0) goto LAB_10458bbf0;
          func_0x000104594c98();
          if (((ulong)pppbVar20 & 1) != 0) goto LAB_10458bbf8;
LAB_10458befc:
          pppppbStack_b0[((ulong)pppbVar18 >> 6) + 8] =
               (byte ****)
               ((ulong)pppppbStack_b0[((ulong)pppbVar18 >> 6) + 8] | 1L << ((ulong)pppbVar18 & 0x3f)
               );
          pppppbStack_b0[6][(long)pppbVar18] = pppbVar2;
          ppppbVar28 = pppppbStack_b0[7] + (long)pppbVar18 * 5;
          *ppppbVar28 = (byte ***)ppppppbVar16;
          ppppbVar28[1] = pppbVar13;
          *(undefined1 *)(ppppbVar28 + 2) = 0;
          ppppbVar28[3] = (byte ***)ppppppbVar16;
          ppppbVar28[4] = pppbVar13;
          if (SCARRY8((long)pppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cb08);
            (*pcVar8)();
          }
          pppppbStack_b0[2] = (byte ****)((long)pppppbStack_b0[2] + 1);
        }
        unaff_x20[1] = (long)pppppbStack_b0;
        uVar17 = unaff_x20[2];
        _swift_isUniquelyReferenced_nonNull_native();
        pppppbVar29 = (byte *****)unaff_x20[2];
        ppppppbVar19 = ppppppbVar16;
        pppbVar20 = pppbVar13;
        pppppbStack_b0 = pppppbVar29;
        FUN_104559588();
        uVar27 = (ulong)~(uint)pppbVar20 & 1;
        lVar1 = (long)pppppbVar29[2] + uVar27;
        if (SCARRY8((long)pppppbVar29[2],uVar27)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cab0);
          (*pcVar8)();
        }
        if ((long)pppppbVar29[3] < lVar1) {
          func_0x0001045957a0(lVar1,uVar17);
          ppppppbVar19 = ppppppbVar16;
          pppbVar18 = pppbVar13;
          FUN_104559588();
          if (((uint)pppbVar20 & 1) != ((uint)pppbVar18 & 1)) goto LAB_10458cb40;
LAB_10458bfc8:
          if (((ulong)pppbVar20 & 1) == 0) goto LAB_10458c15c;
LAB_10458bfd0:
          pppppbStack_b0[7][(long)ppppppbVar19] = pppbVar2;
        }
        else {
          if ((uVar17 & 1) != 0) goto LAB_10458bfc8;
          FUN_104594b48();
          if (((ulong)pppbVar20 & 1) != 0) goto LAB_10458bfd0;
LAB_10458c15c:
          pppppbStack_b0[((ulong)ppppppbVar19 >> 6) + 8] =
               (byte ****)
               ((ulong)pppppbStack_b0[((ulong)ppppppbVar19 >> 6) + 8] |
               1L << ((ulong)ppppppbVar19 & 0x3f));
          ppppbVar28 = pppppbStack_b0[6];
          ppppbVar28[(long)ppppppbVar19 * 2] = (byte ***)ppppppbVar16;
          (ppppbVar28 + (long)ppppppbVar19 * 2)[1] = pppbVar13;
          pppppbStack_b0[7][(long)ppppppbVar19] = pppbVar2;
          if (SCARRY8((long)pppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cb14);
            (*pcVar8)();
          }
          pppppbStack_b0[2] = (byte ****)((long)pppppbStack_b0[2] + 1);
        }
        unaff_x20[2] = (long)pppppbStack_b0;
        uVar17 = unaff_x20[3];
        _swift_isUniquelyReferenced_nonNull_native();
        pppppbVar29 = (byte *****)unaff_x20[3];
        ppppppbVar19 = ppppppbVar16;
        pppbVar20 = pppbVar13;
        pppppbStack_b0 = pppppbVar29;
        FUN_104559588();
        uVar27 = (ulong)~(uint)pppbVar20 & 1;
        lVar1 = (long)pppppbVar29[2] + uVar27;
        if (SCARRY8((long)pppppbVar29[2],uVar27)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cabc);
          (*pcVar8)();
        }
        if ((long)pppppbVar29[3] < lVar1) {
          func_0x0001045957a0(lVar1,uVar17);
          ppppppbVar19 = ppppppbVar16;
          pppbVar18 = pppbVar13;
          FUN_104559588();
          if (((uint)pppbVar20 & 1) != ((uint)pppbVar18 & 1)) goto LAB_10458cb40;
        }
        else if ((uVar17 & 1) == 0) {
          FUN_104594b48();
        }
        if (((ulong)pppbVar20 & 1) == 0) {
          pppppbStack_b0[((ulong)ppppppbVar19 >> 6) + 8] =
               (byte ****)
               ((ulong)pppppbStack_b0[((ulong)ppppppbVar19 >> 6) + 8] |
               1L << ((ulong)ppppppbVar19 & 0x3f));
          ppppbVar28 = pppppbStack_b0[6];
          ppppbVar28[(long)ppppppbVar19 * 2] = (byte ***)ppppppbVar16;
          (ppppbVar28 + (long)ppppppbVar19 * 2)[1] = pppbVar13;
          pppppbStack_b0[7][(long)ppppppbVar19] = pppbVar2;
          if (SCARRY8((long)pppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10458cb20);
            (*pcVar8)();
          }
          pppppbStack_b0[2] = (byte ****)((long)pppppbStack_b0[2] + 1);
        }
        else {
          pppppbStack_b0[7][(long)ppppppbVar19] = pppbVar2;
        }
        unaff_x20[3] = (long)pppppbStack_b0;
        pppppbVar29 = ppppppbVar14[2];
        if (pppppbVar29 != (byte *****)0x0) {
          pppppbVar32 = (byte *****)0x0;
          ppppppbVar16 = ppppppbVar14 + 6;
          do {
            if (ppppppbVar14[2] <= pppppbVar32) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10458ca80);
              (*pcVar8)();
            }
            pppppbVar36 = ppppppbVar16[-2];
            if (((ulong)*ppppppbVar16 & 1) == 0) {
              if (pppppbVar36 == (byte *****)0x0) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10458ca90);
                (*pcVar8)();
              }
              pppbVar20 = (byte ***)((long)ppppppbVar16[-1] + (long)pppppbVar36);
            }
            else {
              if ((ulong)pppppbVar36 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10458ca8c);
                (*pcVar8)();
              }
              if (((ulong)pppppbVar36 & 0xfffff800) == 0xd800) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10458caa0);
                (*pcVar8)();
              }
              if ((byte *****)0x10ffff < pppppbVar36) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10458ca94);
                (*pcVar8)();
              }
              uVar10 = (uint)pppppbVar36;
              if (pppppbVar36 < (byte *****)0x80) {
                uVar10 = uVar10 + 1;
              }
              else {
                uVar5 = (uVar10 & 0x3f) * 0x100;
                uVar34 = (uVar5 | uVar10 >> 6 & 0x3f) * 0x100;
                uVar23 = (uVar10 >> 0x12) + (uVar34 | uVar10 >> 0xc & 0x3f) * 0x100 + 0x818181f1;
                if ((ulong)pppppbVar36 >> 0x10 == 0) {
                  uVar23 = (uVar10 >> 0xc) + uVar34 + 0x8181e1;
                }
                uVar10 = (uVar10 >> 6) + uVar5 + 0x81c1;
                if ((byte *****)0x7ff < pppppbVar36) {
                  uVar10 = uVar23;
                }
              }
              pppppbVar30 = (byte *****)(ulong)(4 - ((uint)LZCOUNT(uVar10) >> 3));
              uStack_98 = (ulong)uVar10 + 0xfefefefefefeff &
                          (-1L << (((ulong)pppppbVar30 & 7) << 3) ^ 0xffffffffffffffffU);
              pppppbVar36 = pppppbVar30;
              _swift_slowAlloc(pppppbVar30,0xffffffffffffffff);
              _memcpy();
              _swift_beginAccess(lVar11 + 0x10,&pppppbStack_b0,0x21,0);
              uVar35 = *(ulong *)(lVar11 + 0x10);
              uVar17 = uVar35;
              _swift_isUniquelyReferenced_nonNull_native();
              *(ulong *)(lVar11 + 0x10) = uVar35;
              uVar27 = uVar35;
              if ((uVar17 & 1) == 0) {
                uVar27 = 0;
                func_0x00010454e8c8(0,*(long *)(uVar35 + 0x10) + 1,1,uVar35);
                *(ulong *)(lVar11 + 0x10) = uVar27;
              }
              uVar17 = *(ulong *)(uVar27 + 0x10);
              uVar35 = uVar27;
              if (*(ulong *)(uVar27 + 0x18) >> 1 <= uVar17) {
                uVar35 = (ulong)(1 < *(ulong *)(uVar27 + 0x18));
                func_0x00010454e8c8(uVar35,uVar17 + 1,1,uVar27);
              }
              pppbVar20 = (byte ***)((long)pppppbVar36 + (long)pppppbVar30);
              *(ulong *)(uVar35 + 0x10) = uVar17 + 1;
              lVar1 = uVar35 + uVar17 * 0x10;
              *(byte ******)(lVar1 + 0x20) = pppppbVar36;
              *(byte ****)(lVar1 + 0x28) = pppbVar20;
              *(ulong *)(lVar11 + 0x10) = uVar35;
              _swift_endAccess(&pppppbStack_b0);
            }
            uVar17 = unaff_x20[2];
            _swift_isUniquelyReferenced_nonNull_native();
            pppppbVar31 = (byte *****)unaff_x20[2];
            pppppbVar30 = pppppbVar36;
            pppbVar13 = pppbVar20;
            pppppbStack_b0 = pppppbVar31;
            FUN_104559588();
            uVar27 = (ulong)~(uint)pppbVar13 & 1;
            lVar1 = (long)pppppbVar31[2] + uVar27;
            if (SCARRY8((long)pppppbVar31[2],uVar27)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10458ca84);
              (*pcVar8)();
            }
            if ((long)pppppbVar31[3] < lVar1) {
              func_0x0001045957a0(lVar1,uVar17);
              pppppbVar30 = pppppbVar36;
              pppbVar18 = pppbVar20;
              FUN_104559588();
              if (((uint)pppbVar13 & 1) != ((uint)pppbVar18 & 1)) goto LAB_10458cb40;
LAB_10458c438:
              if (((ulong)pppbVar13 & 1) == 0) goto LAB_10458c518;
LAB_10458c440:
              pppppbStack_b0[7][(long)pppppbVar30] = pppbVar2;
            }
            else {
              if ((uVar17 & 1) != 0) goto LAB_10458c438;
              FUN_104594b48();
              if (((ulong)pppbVar13 & 1) != 0) goto LAB_10458c440;
LAB_10458c518:
              pppppbStack_b0[((ulong)pppppbVar30 >> 6) + 8] =
                   (byte ****)
                   ((ulong)pppppbStack_b0[((ulong)pppppbVar30 >> 6) + 8] |
                   1L << ((ulong)pppppbVar30 & 0x3f));
              ppppbVar28 = pppppbStack_b0[6];
              ppppbVar28[(long)pppppbVar30 * 2] = (byte ***)pppppbVar36;
              (ppppbVar28 + (long)pppppbVar30 * 2)[1] = pppbVar20;
              pppppbStack_b0[7][(long)pppppbVar30] = pppbVar2;
              if (SCARRY8((long)pppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10458ca98);
                (*pcVar8)();
              }
              pppppbStack_b0[2] = (byte ****)((long)pppppbStack_b0[2] + 1);
            }
            unaff_x20[2] = (long)pppppbStack_b0;
            uVar17 = unaff_x20[3];
            _swift_isUniquelyReferenced_nonNull_native();
            pppppbVar31 = (byte *****)unaff_x20[3];
            pppppbVar30 = pppppbVar36;
            pppbVar13 = pppbVar20;
            pppppbStack_b0 = pppppbVar31;
            FUN_104559588();
            uVar27 = (ulong)~(uint)pppbVar13 & 1;
            lVar1 = (long)pppppbVar31[2] + uVar27;
            if (SCARRY8((long)pppppbVar31[2],uVar27)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10458ca88);
              (*pcVar8)();
            }
            if ((long)pppppbVar31[3] < lVar1) {
              func_0x0001045957a0(lVar1,uVar17);
              pppppbVar30 = pppppbVar36;
              pppbVar18 = pppbVar20;
              FUN_104559588();
              if (((uint)pppbVar13 & 1) != ((uint)pppbVar18 & 1)) goto LAB_10458cb40;
LAB_10458c5d8:
              if (((ulong)pppbVar13 & 1) != 0) goto LAB_10458c298;
LAB_10458c5e0:
              pppppbStack_b0[((ulong)pppppbVar30 >> 6) + 8] =
                   (byte ****)
                   ((ulong)pppppbStack_b0[((ulong)pppppbVar30 >> 6) + 8] |
                   1L << ((ulong)pppppbVar30 & 0x3f));
              ppppbVar28 = pppppbStack_b0[6];
              ppppbVar28[(long)pppppbVar30 * 2] = (byte ***)pppppbVar36;
              (ppppbVar28 + (long)pppppbVar30 * 2)[1] = pppbVar20;
              pppppbStack_b0[7][(long)pppppbVar30] = pppbVar2;
              if (SCARRY8((long)pppppbStack_b0[2],1)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10458ca9c);
                (*pcVar8)();
              }
              pppppbStack_b0[2] = (byte ****)((long)pppppbStack_b0[2] + 1);
            }
            else {
              if ((uVar17 & 1) != 0) goto LAB_10458c5d8;
              FUN_104594b48();
              if (((ulong)pppbVar13 & 1) == 0) goto LAB_10458c5e0;
LAB_10458c298:
              pppppbStack_b0[7][(long)pppppbVar30] = pppbVar2;
            }
            pppppbVar32 = (byte *****)((long)pppppbVar32 + 1);
            unaff_x20[3] = (long)pppppbStack_b0;
            ppppppbVar16 = ppppppbVar16 + 3;
          } while (pppppbVar29 != pppppbVar32);
        }
        func_0x00010458f6ac(ppppppbVar15,pppbVar22,uVar12,ppppppbVar14,uVar26,bVar4);
      }
      lVar33 = lVar33 + 1;
    } while (lVar33 != lVar24);
  }
  return;
}



/* Entry: 10458e19c; end: 10458e1d7;  */

void FUN_10458e19c(undefined8 *param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10458f0a8(&uStack_50);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[5] = uStack_28;
  param_1[4] = uStack_30;
  return;
}



/* Entry: 10458e1d8; end: 10458e28f;  */

void FUN_10458e1d8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10458f088();
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar2 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = puVar1;
  lStack_70 = lVar2;
  FUN_10460d674();
  puVar4 = puVar1;
  puStack_68 = puVar3;
  FUN_10460d770();
  puVar3 = puVar1;
  puStack_60 = puVar4;
  FUN_10460d770();
  puStack_50 = puVar1;
  puStack_48 = puVar1;
  uStack_78 = 0;
  puStack_58 = puVar3;
  FUN_104556518(param_2,param_3,param_4,&uStack_78,&lStack_70);
  param_1[1] = (long)puStack_68;
  *param_1 = lStack_70;
  param_1[3] = (long)puStack_58;
  param_1[2] = (long)puStack_60;
  param_1[5] = (long)puStack_48;
  param_1[4] = (long)puStack_50;
  return;
}



/* Entry: 10458e290; end: 10458ee67;  */

/* WARNING: Removing unreachable block (ram,0x00010458ee40) */
/* WARNING: Removing unreachable block (ram,0x00010458ee44) */
/* WARNING: Removing unreachable block (ram,0x00010458ee58) */

void FUN_10458e290(undefined1 *param_1,long *param_2,long *param_3,undefined8 *param_4)

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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10458e2fc);
      (*pcVar3)();
    }
    break;
  case 1:
    _swift_beginAccess(param_3,auStack_a0,0,0);
    iVar5 = (int)plVar7;
    lVar21 = *param_3;
    FUN_1045562b4();
    lVar22 = lVar21 + iVar5;
    if (SCARRY8(lVar21,(long)iVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10458eda0);
      (*pcVar3)();
    }
    break;
  case 2:
    _swift_beginAccess(param_3,auStack_a0,0,0);
    lVar22 = *param_3 + 1;
    if (SCARRY8(*param_3,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10458e3c4);
      (*pcVar3)();
    }
    goto code_r0x00010458e3ec;
  case 3:
    plVar13 = param_3;
    _swift_beginAccess(param_3,auStack_a0,0,0);
    iVar5 = (int)plVar13;
    lVar21 = *param_3;
    FUN_1045562b4();
    lVar22 = lVar21 + iVar5;
    if (SCARRY8(lVar21,(long)iVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10458ed9c);
      (*pcVar3)();
    }
code_r0x00010458e3ec:
    puVar15 = auStack_b8;
    _swift_beginAccess(param_3,puVar15,1,0);
    *param_3 = lVar22;
    func_0x00010458aaf8();
    puVar17 = (undefined1 *)0x0;
    if (plVar7 != (long *)0x0) {
      puVar17 = (undefined1 *)((long)plVar7 + (long)puVar15);
    }
    plVar13 = plVar7;
    func_0x00010458acc4();
    uVar8 = *param_4;
    _swift_retain(uVar8);
    puVar23 = puVar15;
    func_0x00010458ad64();
    _swift_bridgeObjectRelease(puVar15);
    _swift_release(uVar8);
code_r0x00010458e8a4:
    uStack_78 = 0;
    uVar8 = param_4[1];
    plStack_88 = plVar13;
    puStack_80 = puVar23;
    plStack_70 = plVar7;
    puStack_68 = puVar17;
    _swift_isUniquelyReferenced_nonNull_native(uVar8);
    puStack_d0 = (undefined *)param_4[1];
    param_4[1] = 0x8000000000000000;
    FUN_104568560(&plStack_88,lVar22,uVar8);
    uVar8 = param_4[1];
    param_4[1] = puStack_d0;
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = param_4[2];
    _swift_isUniquelyReferenced_nonNull_native(uVar8);
    puStack_d0 = (undefined *)param_4[2];
    param_4[2] = 0x8000000000000000;
    func_0x000104568454(lVar22,plVar7,puVar17,uVar8);
    uVar8 = param_4[2];
    param_4[2] = puStack_d0;
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = param_4[3];
    _swift_isUniquelyReferenced_nonNull_native(uVar8);
    puStack_d0 = (undefined *)param_4[3];
    param_4[3] = 0x8000000000000000;
    func_0x000104568454(lVar22,plVar7,puVar17,uVar8);
    uVar8 = param_4[3];
    param_4[3] = puStack_d0;
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = param_4[3];
    _swift_isUniquelyReferenced_nonNull_native(uVar8);
    puStack_d0 = (undefined *)param_4[3];
    param_4[3] = 0x8000000000000000;
    goto code_r0x00010458e97c;
  case 4:
    _swift_beginAccess(param_3,auStack_a0,0,0);
    lVar22 = *param_3 + 1;
    if (SCARRY8(*param_3,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10458e374);
      (*pcVar3)();
    }
    goto code_r0x00010458e5ac;
  case 5:
    plVar13 = param_3;
    _swift_beginAccess(param_3,auStack_a0,0,0);
    iVar5 = (int)plVar13;
    lVar21 = *param_3;
    FUN_1045562b4();
    lVar22 = lVar21 + iVar5;
    if (SCARRY8(lVar21,(long)iVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10458eda4);
      (*pcVar3)();
    }
code_r0x00010458e5ac:
    puVar23 = auStack_b8;
    _swift_beginAccess(param_3,puVar23,1,0);
    *param_3 = lVar22;
    func_0x00010458aaf8();
    puVar17 = (undefined1 *)0x0;
    if (plVar7 != (long *)0x0) {
      puVar17 = (undefined1 *)((long)plVar7 + (long)puVar23);
    }
    plVar13 = plVar7;
    func_0x00010458aaf8();
    if (plVar13 == (long *)0x0) {
      puVar23 = (undefined1 *)0x0;
    }
    else {
      puVar23 = (undefined1 *)((long)plVar13 + (long)puVar23);
    }
    goto code_r0x00010458e8a4;
  case 6:
    _swift_beginAccess(param_3,auStack_a0,0,0);
    lVar22 = *param_3 + 1;
    if (SCARRY8(*param_3,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10458eda8);
      (*pcVar3)();
    }
    goto code_r0x00010458e610;
  case 7:
    _swift_beginAccess(param_3,auStack_a0,0,0);
    iVar5 = (int)plVar7;
    lVar21 = *param_3;
    FUN_1045562b4();
    lVar22 = lVar21 + iVar5;
    if (SCARRY8(lVar21,(long)iVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10458e48c);
      (*pcVar3)();
    }
code_r0x00010458e610:
    puVar23 = auStack_b8;
    plVar7 = param_3;
    _swift_beginAccess(param_3,puVar23,1,0);
    *param_3 = lVar22;
    func_0x00010458aaf8();
    puVar17 = (undefined1 *)((long)plVar7 + (long)puVar23);
    puVar15 = (undefined1 *)0x0;
    if (plVar7 != (long *)0x0) {
      puVar15 = puVar17;
    }
    uVar8 = param_4[2];
    _swift_isUniquelyReferenced_nonNull_native(uVar8);
    plStack_88 = (long *)param_4[2];
    param_4[2] = 0x8000000000000000;
    func_0x000104568454(lVar22,plVar7,puVar15,uVar8);
    uVar8 = param_4[2];
    param_4[2] = plStack_88;
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = param_4[3];
    _swift_isUniquelyReferenced_nonNull_native(uVar8);
    plStack_88 = (long *)param_4[3];
    param_4[3] = 0x8000000000000000;
    func_0x000104568454(lVar22,plVar7,puVar15,uVar8);
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
            func_0x00010458ad64();
            _swift_bridgeObjectRelease(puVar23);
            _swift_release(uVar8);
            uVar8 = param_4[2];
            _swift_isUniquelyReferenced_nonNull_native(uVar8);
            plStack_88 = (long *)param_4[2];
            param_4[2] = 0x8000000000000000;
            func_0x000104568454(lVar22,plVar13,puVar17,uVar8);
            uVar8 = param_4[2];
            param_4[2] = plStack_88;
            _swift_bridgeObjectRelease(uVar8);
            uVar8 = param_4[3];
            _swift_isUniquelyReferenced_nonNull_native(uVar8);
            plStack_88 = (long *)param_4[3];
            param_4[3] = 0x8000000000000000;
            func_0x000104568454(lVar22,plVar13,puVar17,uVar8);
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
    FUN_104568560(&plStack_88,lVar22,uVar8);
    uVar8 = param_4[1];
    param_4[1] = puStack_d0;
    goto code_r0x00010458ed50;
  case 8:
    _swift_beginAccess(param_3,auStack_a0,0,0);
    lVar22 = *param_3 + 1;
    if (SCARRY8(*param_3,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10458edf4);
      (*pcVar3)();
    }
    goto code_r0x00010458e764;
  case 9:
    _swift_beginAccess(param_3,auStack_a0,0,0);
    iVar5 = (int)plVar7;
    lVar21 = *param_3;
    FUN_1045562b4();
    lVar22 = lVar21 + iVar5;
    if (SCARRY8(lVar21,(long)iVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10458e3a0);
      (*pcVar3)();
    }
code_r0x00010458e764:
    puVar23 = auStack_b8;
    plVar7 = param_3;
    _swift_beginAccess(param_3,puVar23,1,0);
    *param_3 = lVar22;
    func_0x00010458aaf8();
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
    FUN_104568560(&plStack_88,lVar22,uVar8);
    uVar8 = param_4[1];
    param_4[1] = puStack_d0;
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = param_4[2];
    _swift_isUniquelyReferenced_nonNull_native(uVar8);
    puStack_d0 = (undefined *)param_4[2];
    param_4[2] = 0x8000000000000000;
    func_0x000104568454(lVar22,plVar7,puVar17,uVar8);
    uVar8 = param_4[2];
    param_4[2] = puStack_d0;
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = param_4[3];
    _swift_isUniquelyReferenced_nonNull_native(uVar8);
    puStack_d0 = (undefined *)param_4[3];
    param_4[3] = 0x8000000000000000;
    func_0x000104568454(lVar22,plVar7,puVar17,uVar8);
    puVar9 = (undefined *)param_4[3];
    param_4[3] = puStack_d0;
    _swift_bridgeObjectRelease();
    if (*param_2 == param_2[1]) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10458ed8c);
      (*pcVar3)();
    }
    FUN_1045562b4();
    if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10458ed90);
      (*pcVar3)();
    }
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar9 != (undefined *)0x0) {
      uVar8 = 0x113084eb0;
      func_0x0001000285a8(0x113084eb0,&UNK_10dd18c60);
      puVar10 = puVar9;
      __ss15ContiguousArrayV28_allocateBufferUninitialized15minimumCapacitys01_abD0VyxGSi_tFZ
                (puVar9,uVar8);
      *(undefined **)(puVar10 + 0x10) = puVar9;
    }
    puStack_d0 = puVar10 + 0x20;
    uStack_c0 = 0;
    puStack_c8 = puVar9;
    func_0x00010458ab74(&puStack_d0,&uStack_c0,puVar9,param_2);
    uVar6 = uStack_c0;
    if ((long)puVar9 < (long)uStack_c0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10458ed94);
      (*pcVar3)();
    }
    *(ulong *)(puVar10 + 0x10) = uStack_c0;
    if (uStack_c0 != 0) {
      uVar14 = 0;
      plVar7 = (long *)(puVar10 + 0x28);
      do {
        if (*(ulong *)(puVar10 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10458ed78);
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
        FUN_104559588();
        uVar19 = (ulong)~(uint)uVar16 & 1;
        lVar21 = *(long *)(puVar9 + 0x10) + uVar19;
        if (SCARRY8(*(long *)(puVar9 + 0x10),uVar19)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10458ed7c);
          (*pcVar3)();
        }
        if (*(long *)(puVar9 + 0x18) < lVar21) {
          func_0x0001045957a0(lVar21,uVar11);
          uVar12 = uVar2;
          uVar11 = uVar20;
          FUN_104559588();
          if (((uint)uVar16 & 1) != ((uint)uVar11 & 1)) goto code_r0x00010458ee48;
code_r0x00010458eac8:
          if ((uVar16 & 1) == 0) goto code_r0x00010458eaf4;
code_r0x00010458ead0:
          *(long *)(*(long *)(puStack_d0 + 0x38) + uVar12 * 8) = lVar22;
        }
        else {
          if ((uVar11 & 1) != 0) goto code_r0x00010458eac8;
          FUN_104594b48();
          if ((uVar16 & 1) != 0) goto code_r0x00010458ead0;
code_r0x00010458eaf4:
          *(ulong *)(puStack_d0 + (uVar12 >> 6) * 8 + 0x40) =
               *(ulong *)(puStack_d0 + (uVar12 >> 6) * 8 + 0x40) | 1L << (uVar12 & 0x3f);
          puVar1 = (ulong *)(*(long *)(puStack_d0 + 0x30) + uVar12 * 0x10);
          *puVar1 = uVar2;
          puVar1[1] = uVar20;
          *(long *)(*(long *)(puStack_d0 + 0x38) + uVar12 * 8) = lVar22;
          if (SCARRY8(*(long *)(puStack_d0 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10458ed84);
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
        FUN_104559588();
        uVar19 = (ulong)~(uint)uVar16 & 1;
        lVar21 = *(long *)(puVar9 + 0x10) + uVar19;
        if (SCARRY8(*(long *)(puVar9 + 0x10),uVar19)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10458ed80);
          (*pcVar3)();
        }
        if (*(long *)(puVar9 + 0x18) < lVar21) {
          func_0x0001045957a0(lVar21,uVar11);
          uVar12 = uVar2;
          uVar11 = uVar20;
          FUN_104559588();
          if (((uint)uVar16 & 1) != ((uint)uVar11 & 1)) {
code_r0x00010458ee48:
            __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                      (&UNK_110789748);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10458ee58);
            (*pcVar3)();
          }
code_r0x00010458ebc4:
          if ((uVar16 & 1) != 0) goto code_r0x00010458ea00;
code_r0x00010458ebcc:
          *(ulong *)(puStack_d0 + (uVar12 >> 6) * 8 + 0x40) =
               *(ulong *)(puStack_d0 + (uVar12 >> 6) * 8 + 0x40) | 1L << (uVar12 & 0x3f);
          puVar1 = (ulong *)(*(long *)(puStack_d0 + 0x30) + uVar12 * 0x10);
          *puVar1 = uVar2;
          puVar1[1] = uVar20;
          *(long *)(*(long *)(puStack_d0 + 0x38) + uVar12 * 8) = lVar22;
          if (SCARRY8(*(long *)(puStack_d0 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10458ed88);
            (*pcVar3)();
          }
          *(long *)(puStack_d0 + 0x10) = *(long *)(puStack_d0 + 0x10) + 1;
        }
        else {
          if ((uVar11 & 1) != 0) goto code_r0x00010458ebc4;
          FUN_104594b48();
          if ((uVar16 & 1) == 0) goto code_r0x00010458ebcc;
code_r0x00010458ea00:
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
    func_0x00010458aaf8();
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
      func_0x0001000d182c(0,*(long *)(uVar20 + 0x10) + 1,1,uVar20);
      param_4[4] = uVar14;
    }
    uVar6 = *(ulong *)(uVar14 + 0x10);
    uVar20 = uVar14;
    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar6) {
      uVar20 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
      func_0x0001000d182c(uVar20,uVar6 + 1,1,uVar14);
      param_4[4] = uVar20;
    }
    *(ulong *)(uVar20 + 0x10) = uVar6 + 1;
    lVar22 = uVar20 + uVar6 * 0x10;
    *(undefined1 **)(lVar22 + 0x20) = param_1;
    *(long **)(lVar22 + 0x28) = plVar7;
    return;
  case 0xb:
    FUN_1045562b4();
    iVar4 = (int)param_1;
    iVar5 = iVar4;
    FUN_1045562b4();
    if (SCARRY4(iVar4,iVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10458ed98);
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
        func_0x00010454e9c8(0,*(long *)(uVar20 + 0x10) + 1,1,uVar20);
        param_4[5] = uVar14;
      }
      uVar6 = *(ulong *)(uVar14 + 0x10);
      uVar20 = uVar14;
      if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar6) {
        uVar20 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
        func_0x00010454e9c8(uVar20,uVar6 + 1,1,uVar14);
        param_4[5] = uVar20;
      }
      *(ulong *)(uVar20 + 0x10) = uVar6 + 1;
      lVar22 = uVar20 + uVar6 * 8;
      *(int *)(lVar22 + 0x20) = iVar4;
      *(int *)(lVar22 + 0x24) = iVar4 + iVar5;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10458edf8);
    (*pcVar3)();
  }
  puVar17 = auStack_b8;
  plVar13 = param_3;
  _swift_beginAccess(param_3,puVar17,1,0);
  *param_3 = lVar22;
  func_0x00010458aaf8();
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
  FUN_104568560(&plStack_88,lVar22,uVar8);
  uVar8 = param_4[1];
  param_4[1] = puStack_d0;
  _swift_bridgeObjectRelease(uVar8);
  uVar8 = param_4[2];
  _swift_isUniquelyReferenced_nonNull_native(uVar8);
  puStack_d0 = (undefined *)param_4[2];
  param_4[2] = 0x8000000000000000;
  func_0x000104568454(lVar22,plVar13,puVar23,uVar8);
  uVar8 = param_4[2];
  param_4[2] = puStack_d0;
  _swift_bridgeObjectRelease(uVar8);
  uVar8 = param_4[3];
  _swift_isUniquelyReferenced_nonNull_native(uVar8);
  puStack_d0 = (undefined *)param_4[3];
  param_4[3] = 0x8000000000000000;
code_r0x00010458e97c:
  func_0x000104568454(lVar22,plVar13,puVar23,uVar8);
  uVar8 = param_4[3];
  param_4[3] = puStack_d0;
code_r0x00010458ed50:
  _swift_bridgeObjectRelease(uVar8);
  return;
}



/* Entry: 10458ee68; end: 10458eea3;  */

void FUN_10458ee68(undefined8 *param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10458f0a8(&uStack_50);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[5] = uStack_28;
  param_1[4] = uStack_30;
  return;
}



/* Entry: 10458eea4; end: 10458f02f;  */

undefined1  [16] FUN_10458eea4(void)

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
    goto LAB_10458efe4;
  }
  uVar8 = (uint)((ulong)pppuVar6 >> 0x3b) & 1;
  if ((uVar1 & 0x1000000000000000) == 0) {
    uVar8 = 1;
  }
  uVar9 = uVar3 & 0xc;
  uVar10 = 4L << uVar8;
  uVar5 = uVar3;
  if (uVar9 == uVar10) {
    func_0x000100e36e7c();
  }
  if (uVar4 <= uVar5 >> 0x10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10458ef84);
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
    if (uVar9 != uVar10) goto LAB_10458ef50;
LAB_10458efa8:
    func_0x000100e36e7c();
    if ((uVar1 >> 0x3c & 1) != 0) goto LAB_10458efc0;
LAB_10458ef54:
    uVar3 = (uVar3 & 0xffffffffffff0000) + 0x10004;
  }
  else {
    __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar5);
    uVar8 = (uint)uVar5;
    if (uVar9 == uVar10) goto LAB_10458efa8;
LAB_10458ef50:
    if ((uVar1 >> 0x3c & 1) == 0) goto LAB_10458ef54;
LAB_10458efc0:
    if (uVar4 <= uVar3 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10458f00c);
      (*pcVar2)();
    }
    __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
  }
  unaff_x20[2] = uVar3;
  uVar4 = unaff_x20[3];
  if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10458f008);
    (*pcVar2)();
  }
  iVar7 = 0;
  unaff_x20[3] = uVar4 + 1;
LAB_10458efe4:
  auVar11._8_4_ = uVar8 & 0xff | iVar7 << 8;
  auVar11._0_8_ = uVar4;
  auVar11._12_4_ = 0;
  return auVar11;
}



/* Entry: 10458f030; end: 10458f087;  */

bool FUN_10458f030(char *param_1,char *param_2,char *param_3,char *param_4)

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
joined_r0x00010455951c:
      if (param_3 != (char *)0x0) goto LAB_104559520;
LAB_10455954c:
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
        goto joined_r0x00010455951c;
      }
      cVar4 = '\0';
      bVar1 = true;
      param_1 = param_2;
      if (param_3 == (char *)0x0) goto LAB_10455954c;
LAB_104559520:
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



/* Entry: 10458f088; end: 10458f0a7;  */

void FUN_10458f088(void)

{
  _objc_opt_self(&PTR_PTR_1130871a8);
  return;
}



/* Entry: 10458f0a8; end: 10458f15b;  */

void FUN_10458f0a8(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar2 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar2 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = puVar1;
  FUN_10460d674();
  puVar4 = puVar1;
  FUN_10460d770();
  puVar5 = puVar1;
  FUN_10460d770();
  uVar6 = param_2;
  func_0x0001045be854(param_2);
  _swift_bridgeObjectRelease(param_2);
  func_0x00010458cb60(uVar6);
  _swift_bridgeObjectRelease(uVar6);
  param_1[1] = (long)puVar3;
  *param_1 = lVar2;
  param_1[3] = (long)puVar5;
  param_1[2] = (long)puVar4;
  param_1[5] = (long)puVar1;
  param_1[4] = (long)puVar1;
  return;
}



/* Entry: 10458f15c; end: 10458f15f;  */

void FUN_10458f15c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd18a48;
  _swift_getWitnessTable(&UNK_10dd18a48,&UNK_110789640);
  puRam0000000113087148 = puVar1;
  return;
}



/* Entry: 10458f160; end: 10458f19f;  */

void FUN_10458f160(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd18a48;
  _swift_getWitnessTable(&UNK_10dd18a48,&UNK_110789640);
  puRam0000000113087148 = puVar1;
  return;
}



/* Entry: 10458f1a0; end: 10458f1a3;  */

void FUN_10458f1a0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113087150 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113087158;
  func_0x00010002969c(0x113087158,&UNK_10dd18ae8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113087150 = puVar2;
  return;
}



/* Entry: 10458f1a4; end: 10458f1f3;  */

void FUN_10458f1a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113087150 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113087158;
  func_0x00010002969c(0x113087158,&UNK_10dd18ae8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113087150 = puVar2;
  return;
}



/* Entry: 10458f1f4; end: 10458f1f7;  */

void FUN_10458f1f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd18b90;
  _swift_getWitnessTable(&UNK_10dd18b90,&UNK_110789748);
  puRam0000000113087160 = puVar1;
  return;
}



/* Entry: 10458f1f8; end: 10458f237;  */

void FUN_10458f1f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd18b90;
  _swift_getWitnessTable(&UNK_10dd18b90,&UNK_110789748);
  puRam0000000113087160 = puVar1;
  return;
}



/* Entry: 10458f238; end: 10458f39b;  */

int FUN_10458f238(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10458f2b4;
        goto LAB_10458f298;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10458f298:
      return ((uint)*param_1 | uVar1 << 8) - 0xb;
    }
  }
LAB_10458f2b4:
  iVar2 = *param_1 - 0xc;
  if (*param_1 < 0xc) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10458f39c; end: 10458f3e3;  */

void FUN_10458f39c(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
  _swift_bridgeObjectRelease(param_1[2]);
  _swift_bridgeObjectRelease(param_1[3]);
  _swift_bridgeObjectRelease(param_1[4]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[5]);
  return;
}



/* Entry: 10458f3e4; end: 10458f457;  */

undefined8 * FUN_10458f3e4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10458f458; end: 10458f513;  */

undefined8 * FUN_10458f458(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10458f514; end: 10458f57f;  */

undefined8 * FUN_10458f514(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10458f580; end: 10458f6c3;  */

int FUN_10458f580(ulong *param_1,int param_2)

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



/* Entry: 10458f6c4; end: 10458f7bf;  */

undefined8 * FUN_10458f6c4(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010458f67c(uVar1,uVar3,uVar2,uVar4,uVar6,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar5;
  return param_1;
}



/* Entry: 10458f7c0; end: 10458f80f;  */

undefined8 * FUN_10458f7c0(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010458f6ac(uVar7,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 10458f810; end: 10458f963;  */

int FUN_10458f810(int *param_1,int param_2)

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



/* Entry: 10458f964; end: 10458fa73;  */

void FUN_10458f964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x000100e8b654();
  __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
            (&uStack_b0,PTR___sSSN_11034da80,PTR___sSSN_11034da80,param_1,param_1);
  func_0x000100672b50(param_3,&uStack_b0);
  FUN_104590394(&uStack_90,puVar1,&uStack_b0,param_4,param_5);
  if (unaff_x21 == 0) {
    pcVar3 = *(code **)(param_6 + 0x40);
    lVar2 = 0;
    FUN_10459184c(0,param_5,param_6);
    (*pcVar3)(&uStack_90,lVar2,&PTR_DAT_110789a00,param_5,param_6);
    (**(code **)(*(long *)(lVar2 + -8) + 8))(&uStack_90,lVar2);
  }
  return;
}



/* Entry: 10458fa74; end: 10458fa83;  */

bool FUN_10458fa74(char param_1,char param_2)

{
  return param_1 == param_2;
}



/* Entry: 10458fa84; end: 10458faeb;  */

void FUN_10458fa84(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 10458faec; end: 10458faff;  */

bool FUN_10458faec(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10458fb00; end: 10458fbab;  */

void FUN_10458fb00(void)

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



/* Entry: 10458fbac; end: 10458fbaf;  */

void FUN_10458fbac(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd18c70;
  _swift_getWitnessTable(&UNK_10dd18c70,&UNK_110789998);
  puRam0000000113087230 = puVar1;
  return;
}



/* Entry: 10458fbb0; end: 10458fbef;  */

void FUN_10458fbb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd18c70;
  _swift_getWitnessTable(&UNK_10dd18c70,&UNK_110789998);
  puRam0000000113087230 = puVar1;
  return;
}



/* Entry: 10458fbf0; end: 10458fd63;  */

void FUN_10458fbf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10458fd64; end: 10459013b;  */

undefined1  [16] FUN_10458fd64(ulong param_1,long param_2,ulong param_3)

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
  _swift_conformsToProtocol(param_3,&DAT_10e8147e0);
  if (uVar1 == 0 || param_3 == 0) {
LAB_104590060:
    lVar8 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    uVar3 = param_1;
    func_0x00010149b58c(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    lVar8 = *(long *)(uVar3 + 0x10);
    pcVar9 = *(code **)(uVar1 + 8);
    (*pcVar9)(&uStack_118,param_3,uVar1);
    alStack_70[0] = lStack_108;
    if (*(long *)(lStack_108 + 0x10) == 0) {
LAB_10458fe1c:
      lVar8 = 0;
      bVar10 = true;
    }
    else {
      lVar7 = uVar3 + 0x20;
      uVar4 = lVar7 + lVar8;
      FUN_104559588();
      if ((uVar4 & 1) == 0) goto LAB_10458fe1c;
      bVar10 = false;
      lVar8 = *(long *)(*(long *)(lStack_108 + 0x38) + lVar7 * 8);
    }
    _swift_release(uStack_118);
    uStack_78 = uStack_110;
    FUN_104591898(&uStack_78,0x113085000,&UNK_10dd187f0);
    FUN_104591898(alStack_70,0x113085008,&UNK_10dd18d40);
    uStack_80 = uStack_100;
    FUN_104591898(&uStack_80,0x113085008,&UNK_10dd18d40);
    uStack_88 = uStack_f8;
    FUN_104591898(&uStack_88,0x112d38270,&UNK_10d905a20);
    uStack_90 = uStack_f0;
    FUN_104591898(&uStack_90,0x113085010,&UNK_10dd18d50);
    _swift_release(uVar3);
    if (!bVar10) {
      (*pcVar9)(&uStack_e8,param_3);
      lStack_98 = lStack_e0;
      if ((*(long *)(lStack_e0 + 0x10) != 0) &&
         (lVar7 = lVar8, func_0x00010035a314(), (uVar1 & 1) != 0)) {
        lVar7 = *(long *)(lStack_e0 + 0x38) + lVar7 * 0x28;
        uVar1 = *(ulong *)(lVar7 + 0x18);
        lVar7 = *(long *)(lVar7 + 0x20);
        _swift_release(uStack_e8);
        FUN_104591898(&lStack_98,0x113085000,&UNK_10dd187f0);
        uStack_a0 = uStack_d8;
        FUN_104591898(&uStack_a0,0x113085008,&UNK_10dd18d40);
        uStack_a8 = uStack_d0;
        FUN_104591898(&uStack_a8,0x113085008,&UNK_10dd18d40);
        uStack_b0 = uStack_c8;
        FUN_104591898(&uStack_b0,0x112d38270,&UNK_10d905a20);
        uStack_b8 = uStack_c0;
        FUN_104591898(&uStack_b8,0x113085010,&UNK_10dd18d50);
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
          puStack_128 = PTR___sSWN_11034dbc0;
          puStack_120 = PTR___sSWs19_HasContiguousBytessWP_11034dbc8;
          uStack_140 = uVar1;
          lStack_138 = lVar7;
          func_0x0001000a8868();
          uVar3 = *puVar2;
          if (uVar3 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = puVar2[1] - uVar3;
          }
          __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
          FUN_10459193c(&uStack_140);
        }
        if ((uVar3 == param_1) && (lVar5 == param_2)) {
          _swift_bridgeObjectRelease(lVar5);
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          _swift_bridgeObjectRelease(lVar5);
          if ((uVar3 & 1) == 0) goto LAB_104590060;
        }
        uVar6 = 0;
        goto LAB_104590068;
      }
      _swift_release(uStack_e8);
      FUN_104591898(&lStack_98,0x113085000,&UNK_10dd187f0);
      uStack_140 = uStack_d8;
      FUN_104591898(&uStack_140,0x113085008,&UNK_10dd18d40);
      uStack_a0 = uStack_d0;
      FUN_104591898(&uStack_a0,0x113085008,&UNK_10dd18d40);
      uStack_a8 = uStack_c8;
      FUN_104591898(&uStack_a8,0x112d38270,&UNK_10d905a20);
      uStack_b0 = uStack_c0;
      FUN_104591898(&uStack_b0,0x113085010,&UNK_10dd18d50);
      goto LAB_104590060;
    }
  }
  uVar6 = 1;
LAB_104590068:
  auVar11._8_8_ = uVar6;
  auVar11._0_8_ = lVar8;
  return auVar11;
}



/* Entry: 10459013c; end: 104590393;  */

void FUN_10459013c(long param_1,ulong param_2)

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
  _swift_conformsToProtocol(param_2,&DAT_10e8147e0);
  if (uVar1 != 0 && param_2 != 0) {
    (**(code **)(uVar1 + 8))(&uStack_88,param_2);
    lStack_38 = lStack_80;
    if ((*(long *)(lStack_80 + 0x10) == 0) || (func_0x00010035a314(), (uVar1 & 1) == 0)) {
      _swift_release(uStack_88);
      FUN_104591898(&lStack_38,0x113085000,&UNK_10dd187f0);
      lStack_b0 = lStack_78;
      FUN_104591898(&lStack_b0,0x113085008,&UNK_10dd18d40);
      lStack_40 = lStack_70;
      FUN_104591898(&lStack_40,0x113085008,&UNK_10dd18d40);
      lStack_48 = lStack_68;
      FUN_104591898(&lStack_48,0x112d38270,&UNK_10d905a20);
      lStack_50 = lStack_60;
      FUN_104591898(&lStack_50,0x113085010,&UNK_10dd18d50);
    }
    else {
      lVar5 = *(long *)(lStack_80 + 0x38) + param_1 * 0x28;
      lVar3 = *(long *)(lVar5 + 0x18);
      lVar5 = *(long *)(lVar5 + 0x20);
      _swift_release(uStack_88);
      FUN_104591898(&lStack_38,0x113085000,&UNK_10dd187f0);
      lStack_40 = lStack_78;
      FUN_104591898(&lStack_40,0x113085008,&UNK_10dd18d40);
      lStack_48 = lStack_70;
      FUN_104591898(&lStack_48,0x113085008,&UNK_10dd18d40);
      lStack_50 = lStack_68;
      FUN_104591898(&lStack_50,0x112d38270,&UNK_10d905a20);
      lStack_58 = lStack_60;
      FUN_104591898(&lStack_58,0x113085010,&UNK_10dd18d50);
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
        puStack_98 = PTR___sSWN_11034dbc0;
        puStack_90 = PTR___sSWs19_HasContiguousBytessWP_11034dbc8;
        func_0x0001000a8868();
        lVar3 = *plVar2;
        if (lVar3 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = plVar2[1] - lVar3;
        }
        __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(lVar3,lVar5);
        FUN_10459193c(&lStack_b0);
      }
    }
  }
  return;
}



/* Entry: 104590394; end: 104590503;  */

void FUN_104590394(undefined8 *param_1,undefined1 *param_2,undefined8 *param_3,byte param_4,
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
    FUN_10458fd64(uVar4,uVar5,param_5);
    _swift_bridgeObjectRelease(uVar5);
    if (((uint)uVar6 & 0xff) != 1) {
      param_1[4] = uVar4;
      *(char *)(param_1 + 5) = (char)uVar6;
      if (uVar3 <= *(ulong *)(param_2 + 0x10)) {
        puVar2 = param_2;
        if (*(ulong *)(param_2 + 0x10) != uVar3 - 1) {
          func_0x000101994330(param_2,param_2 + 0x20,1,uVar3 << 1 | 1);
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1045904d8);
      (*pcVar1)();
    }
  }
  _swift_bridgeObjectRelease();
  FUN_104591858();
  _swift_allocError(&UNK_110789998,param_2,0,0);
  *param_2 = 1;
  _swift_willThrow();
  FUN_104591898(param_3,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 104590504; end: 10459073f;  */

void FUN_104590504(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_80 + -extraout_x8;
  lVar8 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(*(long *)(unaff_x20 + 0x30) + 0x10) == 0) {
    func_0x000100672b50();
    if (lStack_68 == 0) {
      (**(code **)(lVar8 + 8))(param_1,param_4);
      FUN_104591898(auStack_80,0x112d387f8,&UNK_10d902650);
      (**(code **)(lVar8 + 0x10))(param_1,param_2,param_4);
      return;
    }
    uVar2 = 0x112d387f8;
    FUN_104591898(auStack_80,0x112d387f8,&UNK_10d902650);
    func_0x000100672b50();
    func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
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
    FUN_104591858();
    _swift_allocError(&UNK_110789998,puVar4,0,0);
    uVar5 = 0;
  }
  else {
    FUN_104591858();
    _swift_allocError(&UNK_110789998,puVar1,0,0);
    uVar5 = 1;
    puVar4 = puVar1;
  }
  *puVar4 = uVar5;
  _swift_willThrow();
  return;
}



/* Entry: 104590740; end: 1045908f3;  */

void FUN_104590740(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_104591858();
    _swift_allocError(&UNK_110789998,param_1,0,0);
    *(undefined1 *)param_1 = 1;
    _swift_willThrow();
    return;
  }
  uVar2 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,param_3);
  func_0x000100672b50();
  lVar1 = lStack_48;
  FUN_104591898(auStack_60,0x112d387f8,&UNK_10d902650);
  if (lVar1 == 0) {
LAB_104590834:
    if (*(char *)(unaff_x20 + 0x38) == '\x01') {
      _swift_bridgeObjectRelease(*param_1);
      *param_1 = uVar2;
    }
    else {
      uVar3 = 0;
      auStack_60[0] = uVar2;
      __sSaMa(0,param_3);
      puVar4 = PTR___sSayxGSTsMc_11034dd08;
      _swift_getWitnessTable(PTR___sSayxGSTsMc_11034dd08,uVar3);
      __sSa6append10contentsOfyqd__n_t7ElementQyd__RszSTRd__lF(auStack_60,uVar3,uVar3,puVar4);
    }
  }
  else {
    func_0x000100672b50();
    if (lStack_48 == 0) {
      puVar5 = auStack_60;
      FUN_104591898(puVar5,0x112d387f8,&UNK_10d902650);
    }
    else {
      uVar3 = 0;
      __sSaMa(0,param_3);
      puVar5 = &uStack_68;
      _swift_dynamicCast(puVar5,auStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
      if (((ulong)puVar5 & 1) != 0) {
        _swift_bridgeObjectRelease(uVar2);
        uVar2 = uStack_68;
        goto LAB_104590834;
      }
    }
    FUN_104591858();
    _swift_allocError(&UNK_110789998,puVar5,0,0);
    *(undefined1 *)puVar5 = 0;
    _swift_willThrow();
    _swift_bridgeObjectRelease(uVar2);
  }
  return;
}



/* Entry: 1045908f4; end: 104590aff;  */

void FUN_1045908f4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
    FUN_104591858();
    _swift_allocError(&UNK_110789998,param_1,0,0);
    *(undefined1 *)param_1 = 1;
    _swift_willThrow();
    return;
  }
  uVar2 = 0;
  _swift_getTupleTypeMetadata2(0,param_3,param_4,0,0);
  uVar3 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar2);
  __sSD17dictionaryLiteralSDyxq_Gx_q_td_tcfC();
  func_0x000100672b50();
  lVar1 = lStack_88;
  FUN_104591898(auStack_a0,0x112d387f8,&UNK_10d902650);
  if (lVar1 == 0) {
LAB_104590a2c:
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
      __sSD5merge_16uniquingKeysWithySDyxq_Gn_q_q__q_tKXEtKF(uVar3,FUN_104591b78,auStack_a0,uVar2);
    }
  }
  else {
    func_0x000100672b50();
    if (lStack_88 == 0) {
      FUN_104591898(auStack_a0,0x112d387f8,&UNK_10d902650);
    }
    else {
      uVar2 = 0;
      __sSDMa(0,param_3,param_4,param_5);
      puVar4 = &uStack_58;
      _swift_dynamicCast(puVar4,auStack_a0,PTR___sypN_11034f1a8 + 8,uVar2,6);
      if (((ulong)puVar4 & 1) != 0) {
        _swift_bridgeObjectRelease(uVar3);
        uVar3 = uStack_58;
        goto LAB_104590a2c;
      }
    }
    FUN_104591858();
    _swift_allocError(&UNK_110789998,puVar4,0,0);
    *(undefined1 *)puVar4 = 0;
    _swift_willThrow();
    _swift_bridgeObjectRelease(uVar3);
  }
  return;
}



/* Entry: 104590b00; end: 104590d6f;  */

void FUN_104590b00(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

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
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar7 - extraout_x12_00;
  lVar2 = *(long *)(unaff_x20 + 0x30);
  if (*(long *)(lVar2 + 0x10) == 0) {
    (**(code **)(*(long *)(param_3 + -8) + 0x38))(lVar4,1,1,param_3);
    FUN_104590504(param_1,lVar4,uStack_c8,lVar1);
    (**(code **)(lVar8 + 8))(lVar4,lVar1);
  }
  else {
    func_0x000100672b50();
    _swift_bridgeObjectRetain(lVar2);
    FUN_104590394(auStack_a0);
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
        FUN_10459184c(0,param_3,lVar2);
        (*pcVar3)(auStack_a0,lVar1,&PTR_DAT_110789a00,param_3,lVar2);
      }
      else {
        lVar1 = 0;
        FUN_10459184c(0,param_3,lVar2);
      }
      (**(code **)(*(long *)(lVar1 + -8) + 8))(auStack_a0,lVar1);
    }
  }
  return;
}



/* Entry: 104590d70; end: 104590d87;  */

undefined1  [16] FUN_104590d70(void)

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



/* Entry: 104590d88; end: 104590f4f;  */

void FUN_104590d88(undefined8 param_1,undefined8 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = 0;
  FUN_104590504(param_1,&uStack_14,param_2,PTR___sSfN_11034ddf8);
  return;
}



/* Entry: 104590f50; end: 104590fab;  */

void FUN_104590f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_28 = 0;
  uStack_24 = 1;
  func_0x0001000285a8(param_3,param_4);
  FUN_104590504(param_1,&uStack_28,param_2,param_3);
  return;
}



/* Entry: 104590fac; end: 10459100f;  */

void FUN_104590fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 1;
  func_0x0001000285a8(param_3,param_4);
  FUN_104590504(param_1,&uStack_40,param_2,param_3);
  return;
}



/* Entry: 104591010; end: 10459103f;  */

void FUN_104591010(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  uStack_11 = 0;
  FUN_104590504(param_1,&uStack_11,param_2,PTR___sSbN_11034dd40);
  return;
}



/* Entry: 104591040; end: 10459109f;  */

void FUN_104591040(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  uStack_21 = 2;
  uVar1 = 0x112dc3dc8;
  func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
  FUN_104590504(param_1,&uStack_21,param_2,uVar1);
  return;
}



/* Entry: 1045910a0; end: 1045910ef;  */

void FUN_1045910a0(undefined8 param_1,undefined8 param_2)

{
  FUN_104590740(param_1,param_2,PTR___sSbN_11034dd40);
  return;
}



/* Entry: 1045910f0; end: 104591153;  */

void FUN_1045910f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uVar1 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  FUN_104590504(param_1,&uStack_40,param_2,uVar1);
  return;
}



/* Entry: 104591154; end: 10459116f;  */

void FUN_104591154(undefined8 param_1,undefined8 param_2)

{
  FUN_104590740(param_1,param_2,PTR___sSSN_11034da80);
  return;
}



/* Entry: 104591170; end: 1045911bf;  */

void FUN_104591170(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xc000000000000000;
  uStack_30 = 0;
  FUN_104590504(param_1,&uStack_30,param_2,PTR___s10Foundation4DataVN_110350ae0);
  func_0x00010006c090(uStack_30,uStack_28);
  return;
}



/* Entry: 1045911c0; end: 10459122b;  */

void FUN_1045911c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xf000000000000000;
  uStack_40 = 0;
  uVar1 = 0x112d56fe0;
  func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
  FUN_104590504(param_1,&uStack_40,param_2,uVar1);
  return;
}



/* Entry: 10459122c; end: 104591247;  */

void FUN_10459122c(undefined8 param_1,undefined8 param_2)

{
  FUN_104590740(param_1,param_2,PTR___s10Foundation4DataVN_110350ae0);
  return;
}



/* Entry: 104591248; end: 104591307;  */

void FUN_104591248(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + -8);
  lVar1 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(param_4 + 0x18))(puVar2,lVar1,param_4);
  FUN_104590504(param_1,puVar2,param_2,param_3);
  (**(code **)(lVar3 + 8))(puVar2,param_3);
  return;
}



/* Entry: 104591308; end: 1045913cf;  */

void FUN_104591308(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __sSqMa(0,param_3);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffb0 + -extraout_x8;
  (**(code **)(*(long *)(param_3 + -8) + 0x38))(puVar2,1,1,param_3);
  FUN_104590504(param_1,puVar2,param_2,lVar1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1045913d0; end: 1045913f7;  */

void FUN_1045913d0(void)

{
  FUN_104590740();
  return;
}



/* Entry: 1045913f8; end: 1045914d3;  */

void FUN_1045913f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,param_3,&UNK_10e814078,&UNK_10e814088);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_6 + 8),param_4,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar3,param_3,uVar1,&UNK_10e814078,&UNK_10e814080);
  FUN_1045908f4(param_1,param_2,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 1045914d4; end: 104591577;  */

void FUN_1045914d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_10e814078,&UNK_10e814080);
  FUN_1045908f4(param_1,param_2,uVar1,param_4,uVar2);
  return;
}



/* Entry: 104591578; end: 10459161b;  */

void FUN_104591578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_10e814078,&UNK_10e814080);
  FUN_1045908f4(param_1,param_2,uVar1,param_4,uVar2);
  return;
}



/* Entry: 10459161c; end: 10459161f;  */

void FUN_10459161c(void)

{
  return;
}



/* Entry: 104591620; end: 10459184b;  */

void FUN_104591620(void)

{
  FUN_104590d70();
  return;
}



/* Entry: 10459184c; end: 104591857;  */

void FUN_10459184c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e814768);
  return;
}



/* Entry: 104591858; end: 104591897;  */

void FUN_104591858(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd18cd8;
  _swift_getWitnessTable(&UNK_10dd18cd8,&UNK_110789998);
  puRam0000000113087238 = puVar1;
  return;
}



/* Entry: 104591898; end: 1045918d7;  */

undefined8 FUN_104591898(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1045918d8; end: 1045918df;  */

void FUN_1045918d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1045918e0; end: 10459193b;  */

long FUN_1045918e0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10459193c; end: 10459195b;  */

void FUN_10459193c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104591950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10459195c; end: 1045919cf;  */

undefined8 * FUN_10459195c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2[3];
  if (lVar1 == 0) {
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
  }
  else {
    param_1[3] = lVar1;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
  }
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1045919d0; end: 104591a77;  */

undefined8 * FUN_1045919d0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar1 != 0) {
      param_1[3] = lVar1;
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
      goto LAB_104591a34;
    }
  }
  else {
    if (lVar1 != 0) {
      func_0x00010188a7c8(param_1,param_2);
      goto LAB_104591a34;
    }
    FUN_10459193c(param_1);
  }
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
LAB_104591a34:
  uVar2 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar2;
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Entry: 104591a78; end: 104591adb;  */

undefined8 * FUN_104591a78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1[3] != 0) {
    FUN_10459193c(param_1);
  }
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Entry: 104591adc; end: 104591b77;  */

int FUN_104591adc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104591b78; end: 104591bab;  */

void FUN_104591b78(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(unaff_x20 + 0x20) + -8) + 0x10))(param_1);
  return;
}



/* Entry: 104591bac; end: 104591e67;  */

void FUN_104591bac(void)

{
  func_0x000100dbb124();
  return;
}



/* Entry: 104591e68; end: 104591e6f;  */

void FUN_104591e68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 104591e70; end: 104591ed3;  */

void FUN_104591e70(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 104591ed4; end: 104591f37;  */

undefined8 * FUN_104591ed4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104591f38; end: 104591f7b;  */

undefined8 * FUN_104591f38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104591f7c; end: 10459200f;  */

int FUN_104591f7c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}


