/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100016314; end: 100016367;  */

long * FUN_100016314(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 100016368; end: 100016437;  */

void FUN_100016368(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  _swift_getKeyPath(param_5);
  _swift_getKeyPath(param_6);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar1,param_5,param_6);
  _swift_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010001ee2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024920)(param_6);
  return;
}



/* Entry: 100016438; end: 100016507;  */

void FUN_100016438(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000164f8);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000164fc);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100016500);
    (*pcVar2)();
  }
  lVar1 = 1 - (param_2 - param_1);
  if (!SBORROW8(1,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_100016644();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_100016508(param_1,param_2,1,param_3);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100016508);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100016504);
  (*pcVar2)();
}



/* Entry: 100016508; end: 100016643;  */

void FUN_100016508(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *unaff_x20;
  lVar3 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  lVar8 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100016634);
    (*pcVar2)();
  }
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = lVar6 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff));
  lVar9 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
  lVar7 = lVar1 + lVar9 * param_1;
  _swift_arrayDestroy(lVar7,lVar8,lVar3);
  lVar3 = param_3 - lVar8;
  if (SBORROW8(param_3,lVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100016638);
    (*pcVar2)();
  }
  lVar8 = lVar9 * param_3;
  if (lVar3 != 0) {
    if (SBORROW8(*(long *)(lVar6 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10001663c);
      (*pcVar2)();
    }
    uVar5 = lVar7 + lVar8;
    uVar4 = lVar1 + lVar9 * param_2;
    if (uVar5 < uVar4 || uVar4 + (*(long *)(lVar6 + 0x10) - param_2) * lVar9 <= uVar5) {
      _swift_arrayInitWithTakeFrontToBack();
    }
    else if (uVar5 != uVar4) {
      _swift_arrayInitWithTakeBackToFront();
    }
    if (SCARRY8(*(long *)(lVar6 + 0x10),lVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100016640);
      (*pcVar2)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + lVar3;
  }
  if (((0 < param_3) && (0 < lVar8)) && (FUN_1000160b4(param_4,lVar7), lVar9 < lVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100016644);
    (*pcVar2)();
  }
  FUN_100016c20(param_4,0x100028808,&UNK_10001f670);
  return;
}



/* Entry: 100016644; end: 1000167bf;  */

undefined * FUN_100016644(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000167c0);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100024840;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x100028820;
    FUN_100010b54(0x100028820,&UNK_10001f7a8);
    lVar5 = 0;
    __s23ExtensionsStickerPicker09ExtensionB0VMa();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000167b8);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000167bc);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar4;
}



/* Entry: 1000167c0; end: 1000167d3;  */

/* WARNING: Removing unreachable block (ram,0x000100016668) */
/* WARNING: Removing unreachable block (ram,0x000100016678) */
/* WARNING: Removing unreachable block (ram,0x0001000167bc) */
/* WARNING: Removing unreachable block (ram,0x000100016684) */
/* WARNING: Removing unreachable block (ram,0x00010001668c) */
/* WARNING: Removing unreachable block (ram,0x00010001674c) */
/* WARNING: Removing unreachable block (ram,0x000100016754) */
/* WARNING: Removing unreachable block (ram,0x000100016784) */
/* WARNING: Removing unreachable block (ram,0x000100016764) */
/* WARNING: Removing unreachable block (ram,0x00010001676c) */
/* WARNING: Removing unreachable block (ram,0x00010001678c) */

undefined * FUN_1000167c0(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  lVar7 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar7) {
    lVar6 = lVar7;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100024840;
  if (lVar6 != 0) {
    puVar2 = (undefined *)0x100028820;
    FUN_100010b54(0x100028820,&UNK_10001f7a8);
    lVar3 = 0;
    __s23ExtensionsStickerPicker09ExtensionB0VMa();
    lVar8 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
    uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
    uVar9 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar2,uVar9 + lVar8 * lVar6,uVar5 | 7);
    puVar4 = puVar2;
    _malloc_size();
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000167b8);
      (*pcVar1)();
    }
    lVar6 = (long)puVar4 - uVar9;
    if (lVar6 == -0x8000000000000000 && lVar8 == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000167bc);
      (*pcVar1)();
    }
    lVar3 = 0;
    if (lVar8 != 0) {
      lVar3 = lVar6 / lVar8;
    }
    *(long *)(puVar2 + 0x10) = lVar7;
    *(long *)(puVar2 + 0x18) = lVar3 << 1;
  }
  lVar6 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar5 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  _swift_arrayInitWithCopy(puVar2 + uVar5,param_1 + uVar5,lVar7,lVar6);
  _swift_bridgeObjectRelease(param_1);
  return puVar2;
}



/* Entry: 1000167d4; end: 100016817;  */

undefined8 FUN_1000167d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100016818; end: 100016923;  */

void FUN_100016818(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *unaff_x20;
  lVar4 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  lVar2 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100016914);
    (*pcVar3)();
  }
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar1 = lVar8 + (uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff));
  lVar9 = *(long *)(*(long *)(lVar4 + -8) + 0x48);
  lVar7 = lVar1 + lVar9 * param_1;
  _swift_arrayDestroy(lVar7,lVar2,lVar4);
  lVar4 = param_3 - lVar2;
  if (SBORROW8(param_3,lVar2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100016918);
    (*pcVar3)();
  }
  if (lVar4 != 0) {
    if (SBORROW8(*(long *)(lVar8 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10001691c);
      (*pcVar3)();
    }
    uVar6 = lVar7 + lVar9 * param_3;
    uVar5 = lVar1 + lVar9 * param_2;
    if (uVar6 < uVar5 || uVar5 + (*(long *)(lVar8 + 0x10) - param_2) * lVar9 <= uVar6) {
      _swift_arrayInitWithTakeFrontToBack();
    }
    else if (uVar6 != uVar5) {
      _swift_arrayInitWithTakeBackToFront();
    }
    if (SCARRY8(*(long *)(lVar8 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100016920);
      (*pcVar3)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + lVar4;
  }
  if ((0 < param_3) && (0 < lVar9 * param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100016924);
    (*pcVar3)();
  }
  return;
}



/* Entry: 100016924; end: 1000169df;  */

void FUN_100016924(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000169d0);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000169d4);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000169d8);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_100016644();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_100016818(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000169e0);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000169dc);
  (*pcVar2)();
}



/* Entry: 1000169e0; end: 100016a1b;  */

undefined8 FUN_1000169e0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100016a1c; end: 100016a23;  */

void FUN_100016a1c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10001f718;
  _swift_getKeyPath(&UNK_10001f718);
  puVar2 = &UNK_10001f740;
  _swift_getKeyPath(&UNK_10001f740);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001ee2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024920)(puVar2);
  return;
}



/* Entry: 100016a24; end: 100016af3;  */

void FUN_100016a24(void)

{
  FUN_100016368();
  return;
}



/* Entry: 100016af4; end: 100016afb;  */

void FUN_100016af4(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10001f7f8;
  _swift_getKeyPath(&UNK_10001f7f8);
  puVar2 = &UNK_10001f820;
  _swift_getKeyPath(&UNK_10001f820);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001ee2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024920)(puVar2);
  return;
}



/* Entry: 100016afc; end: 100016b27;  */

void FUN_100016afc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010001ed78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000248a8)();
  return;
}



/* Entry: 100016b28; end: 100016b93;  */

void FUN_100016b28(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  plVar6 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x100016dbc;
  lVar4 = 0;
  __sScMMa();
  plVar6[2] = lVar4;
  __sScM6sharedScMvgZ();
  plVar6[3] = lVar4;
  plVar5 = (long *)0x130;
  _swift_task_alloc();
  plVar6[4] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_100013780;
  plVar5[0x1b] = lVar7;
  plVar5[0x1c] = lVar3;
  plVar5[0x1a] = lVar2;
  lVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_100024970;
  lVar3 = lVar2;
  __sScM6sharedScMvgZ();
  plVar5[0x1d] = lVar3;
  lVar3 = 0x100028800;
  FUN_100016290(0x100028800,puVar1,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj();
  plVar5[0x1e] = lVar2;
  plVar5[0x1f] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(FUN_100012e30,lVar2,lVar3);
  return;
}



/* Entry: 100016b94; end: 100016bb7;  */

void FUN_100016b94(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010001ed78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000248a8)();
  return;
}



/* Entry: 100016bb8; end: 100016c1f;  */

void FUN_100016bb8(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x100016dc0;
  lVar3 = 0;
  __sScMMa();
  plVar5[2] = lVar3;
  __sScM6sharedScMvgZ();
  plVar5[3] = lVar3;
  plVar4 = (long *)0xe0;
  _swift_task_alloc();
  plVar5[4] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_100014860;
  plVar4[0x16] = lVar6;
  *(undefined1 *)((long)plVar4 + 0xda) = uVar1;
  lVar6 = 0;
  __sScMMa();
  puVar2 = PTR___sScMMa_100024970;
  lVar3 = lVar6;
  __sScM6sharedScMvgZ();
  plVar4[0x17] = lVar3;
  lVar3 = 0x100028800;
  FUN_100016290(0x100028800,puVar2,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj();
  plVar4[0x18] = lVar6;
  plVar4[0x19] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(FUN_100012340,lVar6,lVar3);
  return;
}



/* Entry: 100016c20; end: 100016c5f;  */

undefined8 FUN_100016c20(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_100010b54(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100016c60; end: 100016cc7;  */

void FUN_100016c60(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x100016dc4;
  lVar3 = 0;
  __sScMMa();
  plVar5[2] = lVar3;
  __sScM6sharedScMvgZ();
  plVar5[3] = lVar3;
  plVar4 = (long *)0xe0;
  _swift_task_alloc();
  plVar5[4] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_100014860;
  plVar4[0x16] = lVar6;
  *(undefined1 *)((long)plVar4 + 0xda) = uVar1;
  lVar6 = 0;
  __sScMMa();
  puVar2 = PTR___sScMMa_100024970;
  lVar3 = lVar6;
  __sScM6sharedScMvgZ();
  plVar4[0x17] = lVar3;
  lVar3 = 0x100028800;
  FUN_100016290(0x100028800,puVar2,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj();
  plVar4[0x18] = lVar6;
  plVar4[0x19] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(FUN_100012340,lVar6,lVar3);
  return;
}



/* Entry: 100016cc8; end: 100016ccf;  */

void FUN_100016cc8(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10001f888;
  _swift_getKeyPath(&UNK_10001f888);
  puVar2 = &UNK_10001f8b0;
  _swift_getKeyPath(&UNK_10001f8b0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001ee2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024920)(puVar2);
  return;
}



/* Entry: 100016cd0; end: 100016d03;  */

undefined8 FUN_100016cd0(undefined8 param_1)

{
  (**(code **)(*(long *)(PTR___s23ExtensionsStickerPicker19AppGroupSessionDataVN_100024620 + -8) + 8
              ))();
  return param_1;
}



/* Entry: 100016d04; end: 100016d57;  */

void FUN_100016d04(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  plVar5 = (long *)0x30;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x100016dc8;
  lVar2 = 0;
  __sScMMa();
  plVar5[2] = lVar2;
  __sScM6sharedScMvgZ();
  plVar5[3] = lVar2;
  plVar3 = (long *)0xe0;
  _swift_task_alloc();
  plVar5[4] = (long)plVar3;
  *plVar3 = (long)plVar5;
  plVar3[1] = (long)FUN_100012230;
  plVar3[0x16] = unaff_x20;
  *(undefined1 *)((long)plVar3 + 0xda) = 0;
  lVar4 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_100024970;
  lVar2 = lVar4;
  __sScM6sharedScMvgZ();
  plVar3[0x17] = lVar2;
  lVar2 = 0x100028800;
  FUN_100016290(0x100028800,puVar1,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj();
  plVar3[0x18] = lVar4;
  plVar3[0x19] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(FUN_100012340,lVar4,lVar2);
  return;
}



/* Entry: 100016d58; end: 100016da7;  */

undefined8 FUN_100016d58(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1000286d0;
  FUN_100010b54(0x1000286d0,&UNK_10001f500);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100016da8; end: 100016def;  */

void FUN_100016da8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010001ed78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000248a8)();
  return;
}



/* Entry: 100016df0; end: 100016e8b;  */

undefined8 * FUN_100016df0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000100016dd0(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100016e8c; end: 100016e9f;  */

void FUN_100016e8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 100016ea0; end: 100016ee3;  */

undefined8 * FUN_100016ea0(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000100016de8(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 100016ee4; end: 100016f8f;  */

int FUN_100016ee4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100016f90; end: 10001772b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100016f90(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar8;
  long extraout_x8_03;
  undefined8 uVar9;
  undefined8 *puVar10;
  long alStack_e0 [9];
  undefined8 uStack_98;
  byte bStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_98 = param_1;
  __s23ExtensionsStickerPicker12NoAvatarViewVMa();
  alStack_e0[6] = lVar1;
  (*(code *)PTR____chkstk_darwin_100024410)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar2 = (long)alStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x100028878;
  alStack_e0[2] = lVar2;
  FUN_100010b54(0x100028878,&UNK_10001f988);
  alStack_e0[8] = lVar1;
  (*(code *)PTR____chkstk_darwin_100024410)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)(lVar2 - extraout_x8_00);
  lVar1 = 0x100028880;
  FUN_100010b54(0x100028880,&UNK_10001f990);
  alStack_e0[3] = lVar1;
  (*(code *)PTR____chkstk_darwin_100024410)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x100028888;
  alStack_e0[5] = (long)puVar10 - extraout_x8_01;
  FUN_100010b54(0x100028888,&UNK_10001f998);
  (*(code *)PTR____chkstk_darwin_100024410)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = ((long)puVar10 - extraout_x8_01) - extraout_x8_02;
  lVar2 = 0;
  alStack_e0[7] = lVar8;
  __s23ExtensionsStickerPicker13LoggedOutViewVMa();
  alStack_e0[4] = lVar2;
  (*(code *)PTR____chkstk_darwin_100024410)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  alStack_e0[1] = lVar8 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  FUN_100015148(0);
  uVar4 = 0x1000287f0;
  func_0x0001000177f4(0x1000287f0,FUN_100015148,&UNK_10001f590);
  lVar2 = param_2;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar3,uVar4);
  puVar5 = &UNK_10001f9a0;
  _swift_getKeyPath(&UNK_10001f9a0);
  puVar6 = &UNK_10001f9c8;
  _swift_getKeyPath(&UNK_10001f9c8);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&bStack_90,lVar2,puVar5,puVar6);
  _swift_release(puVar5);
  _swift_release(puVar6);
  _swift_release(lVar2);
  lVar2 = alStack_e0[8];
  if (bStack_90 - 2 < 2) {
    __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar3,uVar4);
    func_0x000100017510(&bStack_90);
    puVar10[1] = uStack_88;
    *puVar10 = CONCAT71(uStack_8f,bStack_90);
    puVar10[3] = uStack_78;
    puVar10[2] = uStack_80;
    puVar10[5] = uStack_68;
    puVar10[4] = uStack_70;
    _swift_storeEnumTagMultiPayload(puVar10,alStack_e0[8],1);
    uVar4 = 0x100028890;
    FUN_100010b54(0x100028890,&UNK_10001f9e8);
    uVar3 = uVar4;
    func_0x00010001774c();
    uVar9 = uVar3;
    FUN_100017834();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (uStack_98,puVar10,lVar1,uVar4,uVar3,uVar9);
  }
  else {
    alStack_e0[0] = lVar1;
    if (bStack_90 == 0) {
      __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar3,uVar4);
      func_0x0001000162d0(param_2 + _DAT_100029320,&bStack_90);
      _swift_release(param_2);
      lVar1 = alStack_e0[1];
      __s23ExtensionsStickerPicker13LoggedOutViewV15stringsProviderAcA0bC16StringsProviding_p_tcfC
                (alStack_e0[1],&bStack_90);
      lVar8 = alStack_e0[5];
      puVar5 = PTR___s23ExtensionsStickerPicker13LoggedOutViewVMa_100024608;
      func_0x00010001791c(lVar1,alStack_e0[5],
                          PTR___s23ExtensionsStickerPicker13LoggedOutViewVMa_100024608);
      _swift_storeEnumTagMultiPayload(lVar8,alStack_e0[3],0);
      uVar4 = 0x1000288a0;
      func_0x0001000177f4(0x1000288a0,puVar5,
                          PTR___s23ExtensionsStickerPicker13LoggedOutViewV7SwiftUI0F0AAMc_100024600)
      ;
      uVar3 = 0x1000288a8;
      func_0x0001000177f4(0x1000288a8,PTR___s23ExtensionsStickerPicker12NoAvatarViewVMa_1000245b0,
                          PTR___s23ExtensionsStickerPicker12NoAvatarViewV7SwiftUI0F0AAMc_1000245a8);
      lVar7 = alStack_e0[7];
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (alStack_e0[7],lVar8,alStack_e0[4],alStack_e0[6],uVar4,uVar3);
      func_0x000100017884(lVar7,puVar10);
      _swift_storeEnumTagMultiPayload(puVar10,lVar2,0);
      uVar4 = 0x100028890;
      FUN_100010b54(0x100028890,&UNK_10001f9e8);
      uVar3 = uVar4;
      func_0x00010001774c();
      uVar9 = uVar3;
      FUN_100017834();
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (uStack_98,puVar10,alStack_e0[0],uVar4,uVar3,uVar9);
    }
    else {
      lVar1 = param_2;
      __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar3,uVar4);
      uVar9 = *(undefined8 *)(lVar1 + _DAT_100029318);
      _swift_retain(uVar9);
      _swift_release(lVar1);
      __s7SwiftUI11StateObjectV12wrappedValuexvg(param_2,param_3,param_4,uVar3,uVar4);
      func_0x0001000162d0(param_2 + _DAT_100029320,&bStack_90);
      _swift_release(param_2);
      lVar1 = alStack_e0[2];
      __s23ExtensionsStickerPicker12NoAvatarViewV19stickerImageFetcher15stringsProviderAcA0bhI0CSg_AA0bC16StringsProviding_ptcfC
                (alStack_e0[2],uVar9,&bStack_90);
      lVar8 = alStack_e0[5];
      puVar5 = PTR___s23ExtensionsStickerPicker12NoAvatarViewVMa_1000245b0;
      func_0x00010001791c(lVar1,alStack_e0[5],
                          PTR___s23ExtensionsStickerPicker12NoAvatarViewVMa_1000245b0);
      _swift_storeEnumTagMultiPayload(lVar8,alStack_e0[3],1);
      uVar4 = 0x1000288a0;
      func_0x0001000177f4(0x1000288a0,PTR___s23ExtensionsStickerPicker13LoggedOutViewVMa_100024608,
                          PTR___s23ExtensionsStickerPicker13LoggedOutViewV7SwiftUI0F0AAMc_100024600)
      ;
      uVar3 = 0x1000288a8;
      func_0x0001000177f4(0x1000288a8,puVar5,
                          PTR___s23ExtensionsStickerPicker12NoAvatarViewV7SwiftUI0F0AAMc_1000245a8);
      lVar7 = alStack_e0[7];
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (alStack_e0[7],lVar8,alStack_e0[4],alStack_e0[6],uVar4,uVar3);
      func_0x000100017884(lVar7,puVar10);
      _swift_storeEnumTagMultiPayload(puVar10,lVar2,0);
      uVar4 = 0x100028890;
      FUN_100010b54(0x100028890,&UNK_10001f9e8);
      uVar3 = uVar4;
      func_0x00010001774c();
      uVar9 = uVar3;
      FUN_100017834();
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (uStack_98,puVar10,alStack_e0[0],uVar4,uVar3,uVar9);
    }
    func_0x0001000178d4(lVar7);
    func_0x000100017960(lVar1,puVar5);
  }
  return;
}



/* Entry: 10001772c; end: 10001774b;  */

void FUN_10001772c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000242b0
  )();
  return;
}



/* Entry: 10001774c; end: 100017833;  */

void FUN_10001774c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000100028898 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100028888;
  func_0x000100015340(0x100028888,&UNK_10001f998);
  uVar2 = 0x1000288a0;
  func_0x0001000177f4(0x1000288a0,PTR___s23ExtensionsStickerPicker13LoggedOutViewVMa_100024608,
                      PTR___s23ExtensionsStickerPicker13LoggedOutViewV7SwiftUI0F0AAMc_100024600);
  uVar3 = 0x1000288a8;
  func_0x0001000177f4(0x1000288a8,PTR___s23ExtensionsStickerPicker12NoAvatarViewVMa_1000245b0,
                      PTR___s23ExtensionsStickerPicker12NoAvatarViewV7SwiftUI0F0AAMc_1000245a8);
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_100024258;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_100024258,uVar1,
             &uStack_30);
  puRam0000000100028898 = puVar4;
  return;
}



/* Entry: 100017834; end: 100017883;  */

void FUN_100017834(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000288b0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100028890;
  func_0x000100015340(0x100028890,&UNK_10001f9e8);
  puVar2 = &UNK_10001fbf8;
  _swift_getWitnessTable(&UNK_10001fbf8,uVar1);
  puRam00000001000288b0 = puVar2;
  return;
}



/* Entry: 100017884; end: 10001799b;  */

undefined8 FUN_100017884(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x100028888;
  FUN_100010b54(0x100028888,&UNK_10001f998);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10001799c; end: 1000179a7;  */

void FUN_10001799c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001ee38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_100024928)();
  return;
}



/* Entry: 1000179a8; end: 100017a1f;  */

void FUN_1000179a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000288b8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000288c0;
  func_0x000100015340(0x1000288c0,&UNK_10001f9f8);
  uVar2 = uVar1;
  FUN_10001774c();
  uVar3 = uVar2;
  FUN_100017834();
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_100024258;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_100024258,uVar1,
             &uStack_30);
  puRam00000001000288b8 = puVar4;
  return;
}



/* Entry: 100017a20; end: 100017a4b;  */

undefined8 * FUN_100017a20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000100016dd0(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100017a4c; end: 100017ae7;  */

undefined8 * FUN_100017a4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000100017a2c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100017ae8; end: 100017b2b;  */

undefined8 * FUN_100017ae8(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000100017a44(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 100017b2c; end: 100017bd7;  */

int FUN_100017b2c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100017bd8; end: 100017c9f;  */

void FUN_100017bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  (*(code *)PTR____chkstk_darwin_100024410)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  __s23ExtensionsStickerPicker0B14FetchViewModelCMa();
  _swift_allocObject();
  _swift_retain(param_4);
  _swift_bridgeObjectRetain(param_3);
  __s23ExtensionsStickerPicker0B14FetchViewModelC9remoteURL9stickerId0I12ImageFetcher13extensionTypeAC10Foundation0H0V_SSAA0bkL0CSgAA09ExtensionN0Otcfc
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,param_3,
             param_4,0);
  return;
}



/* Entry: 100017ca0; end: 100018763;  */

void FUN_100017ca0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long alStack_f0 [9];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar6 = 0x100028598;
  alStack_f0[6] = param_1;
  FUN_100010b54(0x100028598,&UNK_10001f310);
  (*(code *)PTR____chkstk_darwin_100024410)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)alStack_f0 - extraout_x8;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100018084(lVar11,param_2,param_3,param_4);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_90,0x4055800000000000,0,0x4055800000000000,0,uVar3,uVar4);
  puVar1 = (undefined8 *)(lVar11 + *(int *)(lVar6 + 0x24));
  alStack_f0[5] = lVar11;
  puVar1[1] = uStack_88;
  *puVar1 = uStack_90;
  puVar1[3] = uStack_78;
  puVar1[2] = uStack_80;
  puVar1[5] = uStack_68;
  puVar1[4] = uStack_70;
  __sScMMa(0);
  puVar5 = PTR___sScMMa_100024970;
  uVar4 = param_2;
  func_0x000100017a2c(param_2,param_3,param_4);
  __sScM6sharedScMvgZ();
  uVar3 = 0x100028800;
  FUN_100018a7c(0x100028800,puVar5,PTR___sScMScAsMc_100024978);
  puVar5 = &UNK_100024e78;
  _swift_allocObject(&UNK_100024e78,0x31,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar4;
  *(undefined8 *)(puVar5 + 0x18) = uVar3;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  *(undefined8 *)(puVar5 + 0x28) = param_3;
  puVar5[0x30] = (char)param_4;
  lVar6 = 0;
  alStack_f0[7] = param_2;
  alStack_f0[8] = param_3;
  __sScPMa();
  lVar9 = *(long *)(lVar6 + -8);
  lVar12 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_100024410)();
  uVar10 = lVar12 + 0xfU & 0xfffffffffffffff0;
  lVar11 = lVar11 - uVar10;
  __sScP13userInitiatedScPvgZ(lVar11);
  iVar2 = 2;
  FUN_10001d2bc(2,0x1a,4,0);
  if (iVar2 == 0) {
    lVar12 = 0x100028590;
    FUN_100010b54(0x100028590,&UNK_10001f308);
    lVar8 = alStack_f0[6];
    puVar1 = (undefined8 *)(alStack_f0[6] + *(int *)(lVar12 + 0x24));
    lVar12 = 0;
    __s7SwiftUI13_TaskModifierVMa();
    (**(code **)(lVar9 + 0x20))((long)puVar1 + (long)*(int *)(lVar12 + 0x14),lVar11,lVar6);
    *puVar1 = &UNK_10001fa80;
    puVar1[1] = puVar5;
    FUN_1000189f8(alStack_f0[5],lVar8);
  }
  else {
    lVar12 = 0;
    __s7SwiftUI14_TaskModifier2VMa();
    alStack_f0[2] = *(long *)(lVar12 + -8);
    alStack_f0[3] = lVar12;
    alStack_f0[4] = lVar11;
    (*(code *)PTR____chkstk_darwin_100024410)(*(undefined8 *)(alStack_f0[2] + 0x40));
    lVar8 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    uStack_a0 = 0;
    uStack_98 = 0xe000000000000000;
    alStack_f0[1] = lVar8;
    __ss11_StringGutsV4growyySiF(0x11);
    _swift_bridgeObjectRelease(uStack_98);
    uStack_a0 = 0xd00000000000004c;
    uStack_98 = 0x8000000100021e20;
    uStack_a8 = 0x2b;
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_1000247e8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_1000247e0,PTR___sSis23CustomStringConvertiblesWP_1000247e8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar7);
    uVar4 = uStack_98;
    uVar3 = uStack_a0;
    (*(code *)PTR____chkstk_darwin_100024410)();
    lVar8 = lVar8 - uVar10;
    (**(code **)(lVar9 + 0x10))(lVar8,lVar11,lVar6);
    lVar12 = alStack_f0[1];
    __s7SwiftUI14_TaskModifier2V4name18executorPreference8priority6actionACSS_Sch_pSgScPyyYaYAcntcfC
              (alStack_f0[1],uVar3,uVar4,0,0,lVar8,&UNK_10001fa80,puVar5);
    (**(code **)(lVar9 + 8))(lVar11,lVar6);
    lVar8 = alStack_f0[6];
    FUN_1000189f8(alStack_f0[5],alStack_f0[6]);
    lVar6 = 0x1000285a0;
    FUN_100010b54(0x1000285a0,&UNK_10001f318);
    (**(code **)(alStack_f0[2] + 0x20))(lVar8 + *(int *)(lVar6 + 0x24),lVar12,alStack_f0[3]);
  }
  puVar5 = &UNK_100024ea0;
  _swift_allocObject(&UNK_100024ea0,0x21,7);
  lVar11 = alStack_f0[8];
  lVar9 = alStack_f0[7];
  *(long *)(puVar5 + 0x10) = alStack_f0[7];
  *(long *)(puVar5 + 0x18) = alStack_f0[8];
  puVar5[0x20] = (char)param_4;
  lVar6 = 0x1000288c8;
  FUN_100010b54(0x1000288c8,&UNK_10001fa90);
  puVar1 = (undefined8 *)(lVar8 + *(int *)(lVar6 + 0x24));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = FUN_100018a70;
  puVar1[3] = puVar5;
  func_0x000100017a2c(lVar9,lVar11,param_4);
  return;
}



/* Entry: 100018764; end: 1000187f7;  */

void FUN_100018764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  uVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_100024970;
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar3 = 0x100028800;
  FUN_100018a7c(0x100028800,puVar1,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(FUN_1000187f8,uVar2,uVar3);
  return;
}



/* Entry: 1000187f8; end: 100018887;  */

void FUN_1000187f8(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x28);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
  uVar3 = 0;
  __s23ExtensionsStickerPicker0B14FetchViewModelCMa(0);
  uVar4 = 0x1000288d0;
  FUN_100018a7c(0x1000288d0,PTR___s23ExtensionsStickerPicker0B14FetchViewModelCMa_100024538,
                PTR___s23ExtensionsStickerPicker0B14FetchViewModelC7Combine16ObservableObjectAAMc_100024520
               );
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar5,uVar1,uVar2,uVar3,uVar4);
  __s23ExtensionsStickerPicker0B14FetchViewModelC05fetchB8IfNeededyyF();
  _swift_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100018884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100018888; end: 1000188ff;  */

void FUN_100018888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  __s23ExtensionsStickerPicker0B14FetchViewModelCMa(0);
  uVar2 = 0x1000288d0;
  FUN_100018a7c(0x1000288d0,PTR___s23ExtensionsStickerPicker0B14FetchViewModelCMa_100024538,
                PTR___s23ExtensionsStickerPicker0B14FetchViewModelC7Combine16ObservableObjectAAMc_100024520
               );
  __s7SwiftUI11StateObjectV12wrappedValuexvg(param_1,param_2,param_3,uVar1,uVar2);
  __s23ExtensionsStickerPicker0B14FetchViewModelC5resetyyF();
                    /* WARNING: Could not recover jumptable at 0x00010001ee2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024920)(param_1);
  return;
}



/* Entry: 100018900; end: 100018917;  */

void FUN_100018900(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000242b0
  )();
  return;
}



/* Entry: 100018918; end: 100018947;  */

void FUN_100018918(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000100017a44(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined1 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010001ed78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000248a8)();
  return;
}



/* Entry: 100018948; end: 1000189bb;  */

void FUN_100018948(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x30;
  uVar1 = *(undefined1 *)(unaff_x20 + 0x30);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1000189bc;
  *(undefined1 *)(plVar6 + 5) = uVar1;
  plVar6[2] = lVar4;
  plVar6[3] = lVar3;
  lVar3 = 0;
  __sScMMa(0,uVar5);
  puVar2 = PTR___sScMMa_100024970;
  lVar4 = lVar3;
  __sScM6sharedScMvgZ();
  plVar6[4] = lVar4;
  uVar5 = 0x100028800;
  FUN_100018a7c(0x100028800,puVar2,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj(lVar3,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(FUN_1000187f8,lVar3,uVar5);
  return;
}



/* Entry: 1000189bc; end: 1000189f7;  */

void FUN_1000189bc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001000189f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1000189f8; end: 100018a47;  */

undefined8 FUN_1000189f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x100028598;
  FUN_100010b54(0x100028598,&UNK_10001f310);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100018a48; end: 100018a6f;  */

void FUN_100018a48(void)

{
  long unaff_x20;
  
  func_0x000100017a44(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined1 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010001ed78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000248a8)();
  return;
}



/* Entry: 100018a70; end: 100018a7b;  */

void FUN_100018a70(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x20);
  uVar3 = 0;
  __s23ExtensionsStickerPicker0B14FetchViewModelCMa(0);
  uVar4 = 0x1000288d0;
  FUN_100018a7c(0x1000288d0,PTR___s23ExtensionsStickerPicker0B14FetchViewModelCMa_100024538,
                PTR___s23ExtensionsStickerPicker0B14FetchViewModelC7Combine16ObservableObjectAAMc_100024520
               );
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar5,uVar1,uVar2,uVar3,uVar4);
  __s23ExtensionsStickerPicker0B14FetchViewModelC5resetyyF();
                    /* WARNING: Could not recover jumptable at 0x00010001ee2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024920)(uVar5);
  return;
}



/* Entry: 100018a7c; end: 100018bab;  */

void FUN_100018a7c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 100018bac; end: 100018c7b;  */

void FUN_100018bac(void)

{
  undefined *puVar1;
  
  if (puRam0000000100028910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10001fb04;
  _swift_getWitnessTable(&UNK_10001fb04,&UNK_100024f00);
  puRam0000000100028910 = puVar1;
  return;
}



/* Entry: 100018c7c; end: 100018db7;  */

long FUN_100018c7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  code *pcVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100024420;
  lVar1 = param_1;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  lVar2 = lVar1;
  uVar3 = param_2;
  func_0x00010001efe0();
  _objc_release(lVar1);
  _objc_release(param_2);
  uVar5 = 0;
  if (unaff_x20 == 0) {
    _objc_retain(0);
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(uVar5);
    _swift_willThrow();
    lVar1 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  }
  else {
    lVar1 = 0;
    __s10Foundation3URLVMa();
    pcVar6 = *(code **)(*(long *)(lVar1 + -8) + 8);
    _objc_retain(0);
    (*pcVar6)(param_1,lVar1);
  }
  if (*(long *)PTR____stack_chk_guard_100024420 == lVar4) {
    return unaff_x20;
  }
  ___stack_chk_fail();
  FUN_100010b54(lVar2,uVar3);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(lVar1,param_1,lVar2);
  return lVar1;
}



/* Entry: 100018db8; end: 100018e3f;  */

undefined8 FUN_100018db8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_100010b54(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100018e40; end: 100018e43;  */

void FUN_100018e40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000100028938 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000288c8;
  func_0x000100015340(0x1000288c8,&UNK_10001fa90);
  uVar2 = 0x100028598;
  func_0x000100015340(0x100028598,&UNK_10001f310);
  uVar3 = uVar2;
  func_0x000100018eec();
  puVar4 = &uStack_30;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getOpaqueTypeConformance(puVar4,&DAT_10001fe84,1);
  puStack_38 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_100024278;
  puVar5 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_100024160;
  puStack_40 = puVar4;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_100024160,uVar1,
             &puStack_40);
  puRam0000000100028938 = puVar5;
  return;
}



/* Entry: 100018e44; end: 10001904b;  */

void FUN_100018e44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000100028938 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000288c8;
  func_0x000100015340(0x1000288c8,&UNK_10001fa90);
  uVar2 = 0x100028598;
  func_0x000100015340(0x100028598,&UNK_10001f310);
  uVar3 = uVar2;
  func_0x000100018eec();
  puVar4 = &uStack_30;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getOpaqueTypeConformance(puVar4,&DAT_10001fe84,1);
  puStack_38 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_100024278;
  puVar5 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_100024160;
  puStack_40 = puVar4;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_100024160,uVar1,
             &puStack_40);
  puRam0000000100028938 = puVar5;
  return;
}



/* Entry: 10001904c; end: 10001906f;  */

undefined8 * FUN_10001904c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000100017a2c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100019070; end: 1000190db;  */

undefined * FUN_100019070(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___MSStickerView_100028460;
  _objc_allocWithZone(PTR__OBJC_CLASS___MSStickerView_100028460);
  func_0x00010001efc0();
  func_0x00010001f100();
  func_0x00010001f1c0(puVar1);
  return puVar1;
}



/* Entry: 1000190dc; end: 1000190e7;  */

void FUN_1000190dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI19UIViewRepresentablePAAE09dismantleC0_11coordinatory0C4TypeQz_11CoordinatorQztFZ_1000241e8
  )();
  return;
}



/* Entry: 1000190e8; end: 1000190fb;  */

void FUN_1000190e8(void)

{
  __s7SwiftUI19UIViewRepresentablePAAE12sizeThatFits_6uiView7contextSo6CGSizeVSgAA08ProposedI4SizeV_0C4TypeQzAA0cD7ContextVyxGtF
            ();
  return;
}



/* Entry: 1000190fc; end: 100019107;  */

void FUN_1000190fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI19UIViewRepresentablePAAE21_overrideSizeThatFits_2in6uiViewySo6CGSizeVz_AA09_ProposedF0V0C4TypeQztF_100024218
  )();
  return;
}



/* Entry: 100019108; end: 10001911b;  */

void FUN_100019108(void)

{
  __s7SwiftUI19UIViewRepresentablePAAE14_layoutOptionsyAA013_PlatformViewd6LayoutF0V0C4TypeQzFZ();
  return;
}



/* Entry: 10001911c; end: 1000191bb;  */

void FUN_10001911c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1000191e8();
                    /* WARNING: Could not recover jumptable at 0x00010001e988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI19UIViewRepresentablePAAE9_makeView4view6inputsAA01_F7OutputsVAA11_GraphValueVyxG_AA01_F6InputsVtFZ_100024230
  )(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1000191bc; end: 1000191bf;  */

void FUN_1000191bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_1000242c0)();
  return;
}



/* Entry: 1000191c0; end: 1000191e3;  */

void FUN_1000191c0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  FUN_1000191e8();
  __s7SwiftUI19UIViewRepresentablePAAE4bodys5NeverOvg(param_1,uVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000191e4);
  (*pcVar1)();
}



/* Entry: 1000191e4; end: 1000191e7;  */

void FUN_1000191e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000100028910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10001fb04;
  _swift_getWitnessTable(&UNK_10001fb04,&UNK_100024f00);
  puRam0000000100028910 = puVar1;
  return;
}



/* Entry: 1000191e8; end: 100019227;  */

void FUN_1000191e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000100028968 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10001fb54;
  _swift_getWitnessTable(&UNK_10001fb54,&UNK_100024f00);
  puRam0000000100028968 = puVar1;
  return;
}



/* Entry: 100019228; end: 1000192bb;  */

void FUN_100019228(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  lVar1 = 0x100028970;
  FUN_100010b54(0x100028970,&UNK_10001fbe8);
  FUN_1000192bc((long)param_1 + (long)*(int *)(lVar1 + 0x2c));
  __s7SwiftUI15SafeAreaRegionsV8keyboardACvgZ();
  uVar2 = unaff_x20;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  lVar1 = 0x100028978;
  FUN_100010b54(0x100028978,&UNK_10001fbf0);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x24));
  *param_1 = unaff_x20;
  *(char *)(param_1 + 1) = (char)uVar2;
  return;
}



/* Entry: 1000192bc; end: 100019ca3;  */

void FUN_1000192bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong *param_6,ulong param_7,long param_8)

{
  undefined1 *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  undefined8 *puVar12;
  long extraout_x8_00;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong auStack_3d0 [2];
  undefined1 auStack_3c0 [8];
  long alStack_3b8 [11];
  undefined *apuStack_360 [3];
  uint uStack_348;
  uint uStack_344;
  ulong uStack_340;
  ulong uStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  ulong uStack_320;
  long lStack_318;
  ulong uStack_308;
  ulong uStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 *puStack_2e8;
  long lStack_2e0;
  undefined8 *puStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  ulong uStack_2b0;
  long lStack_2a8;
  ulong uStack_2a0;
  long lStack_298;
  byte bStack_290;
  undefined7 uStack_28f;
  undefined8 uStack_288;
  ulong uStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 uStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  ulong uStack_80;
  ulong uStack_78;
  
  lVar7 = 0x100028a18;
  puStack_2d8 = param_1;
  FUN_100010b54(0x100028a18,&UNK_10001fca0);
  lStack_2f8 = lVar7;
  (*(code *)PTR____chkstk_darwin_100024410)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar7 = (long)apuStack_360 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_2d0 = lVar7;
  (*(code *)PTR____chkstk_darwin_100024410)();
  puVar12 = (undefined8 *)(lVar7 - extraout_x12);
  lVar7 = 0;
  puStack_2e8 = puVar12;
  __s23ExtensionsStickerPicker12PillTagsViewVMa();
  (*(code *)PTR____chkstk_darwin_100024410)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar13 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_2e0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100024410)();
  lVar13 = lVar13 - extraout_x12_00;
  lVar7 = 0;
  lStack_2f0 = lVar13;
  func_0x00010001ab78(0,param_7,param_8);
  uVar17 = *param_6;
  uVar18 = param_6[1];
  bVar2 = (byte)param_6[2];
  uVar15 = *(undefined8 *)(lVar7 + 0x10);
  uVar14 = *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x18) + 8) + 8);
  uVar19 = uVar17;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar17,uVar18,bVar2,uVar15,uVar14);
  lStack_2b8 = *(long *)(param_8 + 8);
  uVar8 = param_7;
  lStack_2a8 = param_8;
  (**(code **)(lStack_2b8 + 0x10))();
  _swift_unknownObjectRelease(uVar19);
  uStack_2c8 = uVar15;
  uStack_2c0 = uVar14;
  uStack_2b0 = param_7;
  if ((uVar8 & 1) != 0) {
    uVar19 = uVar17;
    __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar17,uVar18,bVar2,uVar15,uVar14);
    uVar8 = param_7;
    (**(code **)(lStack_2a8 + 0x10))();
    _swift_unknownObjectRelease(uVar19);
    if ((uVar8 & 1) != 0) {
      uStack_348 = (uint)bVar2;
      uStack_308 = uVar18;
      uStack_300 = uVar17;
      __s7SwiftUI11StateObjectV14projectedValueAA08ObservedD0V7WrapperVyx_Gvg
                (uVar17,uVar18,bVar2,uVar15,uStack_2c0);
      lVar7 = lStack_2a8;
      lStack_298 = lStack_2a8;
      puVar9 = &UNK_10001fcd0;
      uStack_2a0 = param_7;
      _swift_getKeyPath(&UNK_10001fcd0,&uStack_2a0);
      uVar15 = *(undefined8 *)(lStack_2b8 + 8);
      __s7SwiftUI14ObservedObjectV7WrapperV13dynamicMemberAA7BindingVyqd__Gs24ReferenceWritableKeyPathCyxqd__G_tcluig
                (&uStack_2a0);
      _swift_unknownObjectRelease(uVar17);
      _swift_release(puVar9);
      lStack_318 = lStack_298;
      uStack_320 = uStack_2a0;
      uStack_328 = CONCAT71(uStack_28f,bStack_290);
      puStack_330 = (undefined *)uStack_288;
      uStack_78 = param_6[4];
      uStack_80 = param_6[3];
      uStack_d8 = param_6[4];
      uStack_e0 = param_6[3];
      FUN_100010b54(0x100028a20,&UNK_10001fca8);
      __s7SwiftUI5StateV14projectedValueAA7BindingVyxGvg(&uStack_a0);
      uStack_340 = uStack_98;
      uStack_338 = uStack_a0;
      uStack_344 = (uint)bStack_90;
      uStack_98 = param_6[1];
      uStack_a0 = *param_6;
      bStack_90 = (byte)param_6[2];
      uStack_a8 = param_6[5];
      puVar9 = &UNK_1000250c8;
      _swift_allocObject(&UNK_1000250c8,0x50,7);
      *(ulong *)(puVar9 + 0x10) = uStack_2b0;
      *(long *)(puVar9 + 0x18) = lVar7;
      uVar17 = *param_6;
      uVar19 = param_6[3];
      uVar18 = param_6[2];
      *(ulong *)(puVar9 + 0x28) = param_6[1];
      *(ulong *)(puVar9 + 0x20) = uVar17;
      *(ulong *)(puVar9 + 0x38) = uVar19;
      *(ulong *)(puVar9 + 0x30) = uVar18;
      uVar17 = param_6[4];
      *(ulong *)(puVar9 + 0x48) = param_6[5];
      *(ulong *)(puVar9 + 0x40) = uVar17;
      puVar10 = &UNK_1000250f0;
      apuStack_360[2] = puVar9;
      _swift_allocObject(&UNK_1000250f0,0x50,7);
      *(ulong *)(puVar10 + 0x10) = uStack_2b0;
      *(long *)(puVar10 + 0x18) = lVar7;
      uVar17 = *param_6;
      uVar19 = param_6[3];
      uVar18 = param_6[2];
      *(ulong *)(puVar10 + 0x28) = param_6[1];
      *(ulong *)(puVar10 + 0x20) = uVar17;
      *(ulong *)(puVar10 + 0x38) = uVar19;
      *(ulong *)(puVar10 + 0x30) = uVar18;
      uVar17 = param_6[4];
      *(ulong *)(puVar10 + 0x48) = param_6[5];
      *(ulong *)(puVar10 + 0x40) = uVar17;
      puVar9 = &UNK_100025118;
      apuStack_360[1] = puVar10;
      _swift_allocObject(&UNK_100025118,0x50,7);
      *(ulong *)(puVar9 + 0x10) = uStack_2b0;
      *(long *)(puVar9 + 0x18) = lVar7;
      uVar17 = *param_6;
      uVar19 = param_6[3];
      uVar18 = param_6[2];
      *(ulong *)(puVar9 + 0x28) = param_6[1];
      *(ulong *)(puVar9 + 0x20) = uVar17;
      *(ulong *)(puVar9 + 0x38) = uVar19;
      *(ulong *)(puVar9 + 0x30) = uVar18;
      uVar17 = param_6[4];
      *(ulong *)(puVar9 + 0x48) = param_6[5];
      *(ulong *)(puVar9 + 0x40) = uVar17;
      puVar10 = &UNK_100025140;
      _swift_allocObject(&UNK_100025140,0x50,7);
      *(ulong *)(puVar10 + 0x10) = uStack_2b0;
      *(long *)(puVar10 + 0x18) = lVar7;
      uVar17 = *param_6;
      uVar19 = param_6[3];
      uVar18 = param_6[2];
      *(ulong *)(puVar10 + 0x28) = param_6[1];
      *(ulong *)(puVar10 + 0x20) = uVar17;
      *(ulong *)(puVar10 + 0x38) = uVar19;
      *(ulong *)(puVar10 + 0x30) = uVar18;
      uVar17 = param_6[4];
      *(ulong *)(puVar10 + 0x48) = param_6[5];
      *(ulong *)(puVar10 + 0x40) = uVar17;
      lVar7 = 0;
      __s7SwiftUI11StateObjectVMa(0,uStack_2b0,uVar15);
      pcVar16 = *(code **)(*(long *)(lVar7 + -8) + 0x10);
      (*pcVar16)(&uStack_e0,&uStack_a0,lVar7);
      func_0x00010001c198(&uStack_80,&uStack_e0,0x100028a20,&UNK_10001fca8);
      func_0x00010001c198(&uStack_a8,&uStack_e0,0x100028a28,&UNK_10001fcb0);
      (*pcVar16)(&uStack_e0,&uStack_a0,lVar7);
      func_0x00010001c198(&uStack_80,&uStack_e0,0x100028a20,&UNK_10001fca8);
      func_0x00010001c198(&uStack_a8,&uStack_e0,0x100028a28,&UNK_10001fcb0);
      (*pcVar16)(&uStack_e0,&uStack_a0,lVar7);
      func_0x00010001c198(&uStack_80,&uStack_e0,0x100028a20,&UNK_10001fca8);
      func_0x00010001c198(&uStack_a8,&uStack_e0,0x100028a28,&UNK_10001fcb0);
      (*pcVar16)(&uStack_e0,&uStack_a0,lVar7);
      param_7 = uStack_2b0;
      func_0x00010001c198(&uStack_80,&uStack_e0,0x100028a20,&UNK_10001fca8);
      func_0x00010001c198(&uStack_a8,&uStack_e0,0x100028a28,&UNK_10001fcb0);
      uVar17 = uStack_300;
      __s7SwiftUI11StateObjectV12wrappedValuexvg
                (uStack_300,uStack_308,uStack_348,uStack_2c8,uStack_2c0);
      uVar6 = (undefined1)uVar17;
      (**(code **)(lStack_2b8 + 0x60))(&uStack_140,param_7);
      _swift_unknownObjectRelease();
      uStack_1c0 = uStack_1c0 & 0xffffffffffffff00;
      lStack_1b0 = lStack_318;
      uStack_1b8 = uStack_320;
      uStack_1a8 = uStack_328;
      uStack_1a0 = puStack_330;
      uStack_198 = uStack_338;
      uStack_190 = uStack_340;
      uStack_188 = CONCAT71(uStack_188._1_7_,(char)uStack_344);
      uStack_180 = 0x10001ad90;
      puStack_178 = apuStack_360[2];
      uStack_170 = 0x10001ad9c;
      puStack_168 = apuStack_360[1];
      uStack_160 = 0x10001ada8;
      uStack_150 = 0x10001adb4;
      puStack_158 = puVar9;
      puStack_148 = puVar10;
      __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
      uVar15 = 0x4018000000000000;
      __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
      uStack_300 = uStack_300 & 0xffffffff00000000;
      uStack_118 = CONCAT71(uStack_118._1_7_,uVar6);
      uStack_110 = uVar15;
      uStack_108 = uVar18;
      uStack_100 = param_4;
      uStack_f8 = param_5;
      goto LAB_100019804;
    }
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  puStack_148 = (undefined *)0x0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  puStack_168 = (undefined *)0x0;
  uStack_170 = 0;
  puStack_158 = (undefined *)0x0;
  uStack_160 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  puStack_178 = (undefined *)0x0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  lStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_300 = CONCAT44(uStack_300._4_4_,1);
  uStack_1b8 = 0;
  uStack_1c0 = 0;
LAB_100019804:
  uStack_f0 = 0;
  uStack_b8 = param_6[4];
  uStack_c0 = param_6[3];
  uStack_d8 = param_6[4];
  uStack_e0 = param_6[3];
  FUN_100010b54(0x100028a20,&UNK_10001fca8);
  __s7SwiftUI5StateV14projectedValueAA7BindingVyxGvg(&uStack_2a0);
  uStack_308 = uStack_2a0;
  uStack_320 = lStack_298;
  uStack_328 = CONCAT44(uStack_328._4_4_,(uint)bStack_290);
  uStack_d8 = param_6[1];
  uStack_e0 = *param_6;
  uStack_d0 = (undefined1)param_6[2];
  uStack_e8 = param_6[5];
  puVar9 = &UNK_100025028;
  _swift_allocObject(&UNK_100025028,0x50,7);
  lVar7 = lStack_2a8;
  *(ulong *)(puVar9 + 0x10) = param_7;
  *(long *)(puVar9 + 0x18) = lStack_2a8;
  uVar17 = *param_6;
  uVar19 = param_6[3];
  uVar18 = param_6[2];
  *(ulong *)(puVar9 + 0x28) = param_6[1];
  *(ulong *)(puVar9 + 0x20) = uVar17;
  *(ulong *)(puVar9 + 0x38) = uVar19;
  *(ulong *)(puVar9 + 0x30) = uVar18;
  uVar17 = param_6[4];
  *(ulong *)(puVar9 + 0x48) = param_6[5];
  *(ulong *)(puVar9 + 0x40) = uVar17;
  puVar10 = &UNK_100025050;
  puStack_330 = puVar9;
  _swift_allocObject(&UNK_100025050,0x50,7);
  *(ulong *)(puVar10 + 0x10) = param_7;
  *(long *)(puVar10 + 0x18) = lVar7;
  uVar17 = *param_6;
  uVar19 = param_6[3];
  uVar18 = param_6[2];
  *(ulong *)(puVar10 + 0x28) = param_6[1];
  *(ulong *)(puVar10 + 0x20) = uVar17;
  *(ulong *)(puVar10 + 0x38) = uVar19;
  *(ulong *)(puVar10 + 0x30) = uVar18;
  uVar17 = param_6[4];
  *(ulong *)(puVar10 + 0x48) = param_6[5];
  *(ulong *)(puVar10 + 0x40) = uVar17;
  puVar9 = &UNK_100025078;
  _swift_allocObject(&UNK_100025078,0x50,7);
  *(ulong *)(puVar9 + 0x10) = param_7;
  *(long *)(puVar9 + 0x18) = lVar7;
  uVar17 = *param_6;
  uVar19 = param_6[3];
  uVar18 = param_6[2];
  *(ulong *)(puVar9 + 0x28) = param_6[1];
  *(ulong *)(puVar9 + 0x20) = uVar17;
  *(ulong *)(puVar9 + 0x38) = uVar19;
  *(ulong *)(puVar9 + 0x30) = uVar18;
  uVar17 = param_6[4];
  *(ulong *)(puVar9 + 0x48) = param_6[5];
  *(ulong *)(puVar9 + 0x40) = uVar17;
  puVar11 = &UNK_1000250a0;
  _swift_allocObject(&UNK_1000250a0,0x50,7);
  *(ulong *)(puVar11 + 0x10) = param_7;
  *(long *)(puVar11 + 0x18) = lVar7;
  uVar17 = *param_6;
  uVar19 = param_6[3];
  uVar18 = param_6[2];
  *(ulong *)(puVar11 + 0x28) = param_6[1];
  *(ulong *)(puVar11 + 0x20) = uVar17;
  *(ulong *)(puVar11 + 0x38) = uVar19;
  *(ulong *)(puVar11 + 0x30) = uVar18;
  uVar17 = param_6[4];
  *(ulong *)(puVar11 + 0x48) = param_6[5];
  *(ulong *)(puVar11 + 0x40) = uVar17;
  lVar7 = 0;
  __s7SwiftUI11StateObjectVMa(0,param_7,*(undefined8 *)(lStack_2b8 + 8));
  pcVar16 = *(code **)(*(long *)(lVar7 + -8) + 0x10);
  (*pcVar16)(&uStack_2a0,&uStack_e0,lVar7);
  func_0x00010001c198(&uStack_c0,&uStack_2a0,0x100028a20,&UNK_10001fca8);
  func_0x00010001c198(&uStack_e8,&uStack_2a0,0x100028a28,&UNK_10001fcb0);
  (*pcVar16)(&uStack_2a0,&uStack_e0,lVar7);
  func_0x00010001c198(&uStack_c0,&uStack_2a0,0x100028a20,&UNK_10001fca8);
  func_0x00010001c198(&uStack_e8,&uStack_2a0,0x100028a28,&UNK_10001fcb0);
  (*pcVar16)(&uStack_2a0,&uStack_e0,lVar7);
  func_0x00010001c198(&uStack_c0,&uStack_2a0,0x100028a20,&UNK_10001fca8);
  func_0x00010001c198(&uStack_e8,&uStack_2a0,0x100028a28,&UNK_10001fcb0);
  (*pcVar16)(&uStack_2a0,&uStack_e0,lVar7);
  func_0x00010001c198(&uStack_c0,&uStack_2a0,0x100028a20,&UNK_10001fca8);
  func_0x00010001c198(&uStack_e8,&uStack_2a0,0x100028a28,&UNK_10001fcb0);
  puVar12 = (undefined8 *)*param_6;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (puVar12,param_6[1],(char)param_6[2],uStack_2c8,uStack_2c0);
  uVar17 = uStack_2b0;
  (**(code **)(lStack_2b8 + 0x60))(&uStack_2a0,uStack_2b0);
  _swift_unknownObjectRelease();
  __s23ExtensionsStickerPicker7PillTagO09suggestedD4TagsSayACGvau();
  uVar15 = *puVar12;
  *(undefined **)(lVar13 + -0x18) = puVar11;
  *(ulong **)(lVar13 + -0x10) = &uStack_2a0;
  *(undefined **)(lVar13 + -0x28) = puVar9;
  *(undefined8 *)(lVar13 + -0x20) = 0x10001ac48;
  *(undefined **)(lVar13 + -0x38) = puVar10;
  *(undefined8 *)(lVar13 + -0x30) = 0x10001ac38;
  *(undefined8 *)(lVar13 + -0x40) = 0x10001ac2c;
  puVar9 = puStack_330;
  *(code **)(lVar13 + -0x50) = FUN_10001ac20;
  *(undefined **)(lVar13 + -0x48) = puVar9;
  *(undefined8 *)(lVar13 + -0x58) = uVar15;
  *(char *)(lVar13 + -0x60) = (char)uStack_328;
  *(ulong *)(lVar13 + -0x68) = uStack_320;
  *(ulong *)(lVar13 + -0x70) = uStack_308;
  lVar13 = lStack_2f0;
  __s23ExtensionsStickerPicker12PillTagsViewV13extensionType16showSearchButton0i12HostKeyboardK005onTaplM00im6SwitchK00N22AdvanceToNextInputMode18isTextFieldFocused4tags0V8Selected0noJ00nO7Recents0nO3Tag15stringsProviderAcA09ExtensionH0O_S2byycSgSbAS7SwiftUI7BindingVySbGSayAA0D3TagOGSbAYSgcyycyycyAYcAA0bC16StringsProviding_ptcfC
            (lStack_2f0,0,uStack_300 & 0xffffffff,0,0,0,0,0,0);
  _swift_bridgeObjectRetain();
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  puVar12 = puStack_2e8;
  *puStack_2e8 = uVar15;
  puVar12[1] = 0;
  *(undefined1 *)(puVar12 + 2) = 0;
  lVar7 = 0x100028a30;
  FUN_100010b54(0x100028a30,&UNK_10001fcb8);
  FUN_10001a1d4((long)puVar12 + (long)*(int *)(lVar7 + 0x2c),param_6,uVar17,lStack_2a8);
  uVar6 = SUB81(param_6,0);
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uVar15 = 0x4018000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  puVar1 = (undefined1 *)((long)puVar12 + (long)*(int *)(lStack_2f8 + 0x24));
  *puVar1 = uVar6;
  *(undefined8 *)(puVar1 + 8) = uVar15;
  *(ulong *)(puVar1 + 0x10) = uVar18;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  func_0x00010001c198(&uStack_1c0,&uStack_2a0,0x100028a38,&UNK_10001fcc0);
  lVar3 = lStack_2e0;
  puVar9 = PTR___s23ExtensionsStickerPicker12PillTagsViewVMa_1000245c8;
  FUN_10001c8cc(lVar13,lStack_2e0,PTR___s23ExtensionsStickerPicker12PillTagsViewVMa_1000245c8);
  lVar5 = lStack_2d0;
  FUN_10001ac54(puVar12,lStack_2d0);
  puVar4 = puStack_2d8;
  *puStack_2d8 = 0;
  *(undefined1 *)(puStack_2d8 + 1) = 1;
  func_0x00010001c198(&uStack_2a0,puStack_2d8 + 2,0x100028a38,&UNK_10001fcc0);
  lVar7 = 0x100028a40;
  FUN_100010b54(0x100028a40,&UNK_10001fcc8);
  FUN_10001c8cc(lVar3,(long)puVar4 + (long)*(int *)(lVar7 + 0x40),puVar9);
  FUN_10001ac54(lVar5,(long)puVar4 + (long)*(int *)(lVar7 + 0x50));
  func_0x00010001aec8(puVar12,0x100028a18,&UNK_10001fca0);
  func_0x00010001aca4(lVar13);
  func_0x00010001c1e0(&uStack_1c0,0x100028a38,&UNK_10001fcc0);
  func_0x00010001aec8(lVar5,0x100028a18,&UNK_10001fca0);
  func_0x00010001aca4(lVar3);
  func_0x00010001c1e0(&uStack_2a0,0x100028a38,&UNK_10001fcc0);
  return;
}



/* Entry: 100019ca4; end: 100019cd7;  */

void FUN_100019ca4(undefined8 param_1,long param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  uStack_20 = *(undefined8 *)(param_2 + 0x10);
  _swift_getOpaqueTypeConformance(&uStack_20,&UNK_1000200a0,1);
  return;
}



/* Entry: 100019cd8; end: 100019d3f;  */

void FUN_100019cd8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  func_0x00010001ab78();
  uVar2 = *param_1;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar2,param_1[1],*(undefined1 *)(param_1 + 2),*(undefined8 *)(lVar1 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x18) + 8) + 8));
  (**(code **)(param_3 + 0x28))(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001ee80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_100024940)(uVar2);
  return;
}



/* Entry: 100019d40; end: 100019dc7;  */

void FUN_100019d40(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  func_0x00010001ab78(0,param_4,param_5);
  uVar2 = *param_3;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar2,param_3[1],*(undefined1 *)(param_3 + 2),*(undefined8 *)(lVar1 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x18) + 8) + 8));
  (**(code **)(*(long *)(param_5 + 8) + 0x90))(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010001ee80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_100024940)(uVar2);
  return;
}



/* Entry: 100019dc8; end: 100019f5b;  */

void FUN_100019dc8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  func_0x00010001ab78();
  uVar2 = *param_1;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar2,param_1[1],*(undefined1 *)(param_1 + 2),*(undefined8 *)(lVar1 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x18) + 8) + 8));
  (**(code **)(*(long *)(param_3 + 8) + 0x70))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010001ee80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_100024940)(uVar2);
  return;
}



/* Entry: 100019f5c; end: 10001a067;  */

void FUN_100019f5c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  func_0x00010001ab78();
  uVar6 = *param_1;
  uVar2 = param_1[1];
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x18) + 8) + 8);
  uVar3 = *(undefined1 *)(param_1 + 2);
  uVar5 = uVar6;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar6,uVar2,uVar3,uVar1,uVar7);
  (**(code **)(*(long *)(param_3 + 8) + 0x18))(1,param_2);
  _swift_unknownObjectRelease(uVar5);
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar6,uVar2,uVar3,uVar1,uVar7);
  (**(code **)(param_3 + 0x18))(1,param_2,param_3);
  _swift_unknownObjectRelease(uVar6);
  uStack_68 = param_1[4];
  uStack_70 = param_1[3];
  uStack_71 = 1;
  uVar6 = 0x100028a20;
  FUN_100010b54(0x100028a20,&UNK_10001fca8);
  __s7SwiftUI5StateV12wrappedValuexvs(&uStack_71,uVar6);
  return;
}



/* Entry: 10001a068; end: 10001a117;  */

void FUN_10001a068(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_1[4];
  uStack_40 = param_1[3];
  uStack_41 = 0;
  uVar1 = 0x100028a20;
  FUN_100010b54(0x100028a20,&UNK_10001fca8);
  __s7SwiftUI5StateV12wrappedValuexvs(&uStack_41,uVar1);
  lVar2 = 0;
  func_0x00010001ab78(0,param_2,param_3);
  uVar1 = *param_1;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar1,param_1[1],*(undefined1 *)(param_1 + 2),*(undefined8 *)(lVar2 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x18) + 8) + 8));
  (**(code **)(*(long *)(param_3 + 8) + 0x78))(1,param_2);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Entry: 10001a118; end: 10001a1d3;  */

void FUN_10001a118(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_2[4];
  uStack_50 = param_2[3];
  uStack_51 = 0;
  uVar1 = 0x100028a20;
  FUN_100010b54(0x100028a20,&UNK_10001fca8);
  __s7SwiftUI5StateV12wrappedValuexvs(&uStack_51,uVar1);
  lVar2 = 0;
  func_0x00010001ab78(0,param_3,param_4);
  uVar1 = *param_2;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar1,param_2[1],*(undefined1 *)(param_2 + 2),*(undefined8 *)(lVar2 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x18) + 8) + 8));
  (**(code **)(*(long *)(param_4 + 8) + 0x80))(param_1,param_3);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Entry: 10001a1d4; end: 10001a79f;  */

void FUN_10001a1d4(undefined8 param_1,undefined8 *param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar7;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar8;
  long extraout_x12;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long alStack_110 [2];
  undefined8 *puStack_100;
  long alStack_f8 [3];
  undefined8 *apuStack_e0 [2];
  long lStack_d0;
  uint uStack_c4;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar3 = 0x100028a48;
  uStack_88 = param_1;
  FUN_100010b54(0x100028a48,&UNK_10001fd08);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_100024410)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x1000288d8;
  apuStack_e0[0] = (undefined8 *)((long)alStack_110 - extraout_x8);
  FUN_100010b54(0x1000288d8,&UNK_10001faa0);
  alStack_f8[1] = *(long *)(lVar3 + -8);
  alStack_f8[2] = lVar3;
  (*(code *)PTR____chkstk_darwin_100024410)(*(undefined8 *)(alStack_f8[1] + 0x40));
  lVar8 = ((long)alStack_110 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_f8[0] = lVar8;
  (*(code *)PTR____chkstk_darwin_100024410)();
  lVar8 = lVar8 - extraout_x12;
  lVar3 = 0x100028a50;
  lStack_d0 = lVar8;
  FUN_100010b54(0x100028a50,&UNK_10001fd18);
  lStack_b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_100024410)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)(lVar8 - extraout_x8_01);
  lVar3 = 0x100028a58;
  puStack_a8 = puVar7;
  FUN_100010b54(0x100028a58,&UNK_10001fd20);
  lStack_98 = lVar3;
  (*(code *)PTR____chkstk_darwin_100024410)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)puVar7 - extraout_x8_02);
  lVar3 = 0x100028a60;
  FUN_100010b54(0x100028a60,&UNK_10001fd28);
  lStack_90 = lVar3;
  (*(code *)PTR____chkstk_darwin_100024410)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  func_0x00010001ab78(0,param_3,param_4);
  uVar5 = *param_2;
  uStack_c0 = param_2[1];
  uVar6 = *(undefined8 *)(lVar8 + 0x10);
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x18) + 8) + 8);
  uStack_c4 = (uint)*(byte *)(param_2 + 2);
  uVar4 = uVar5;
  apuStack_e0[1] = param_2;
  __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar5,uStack_c0,*(byte *)(param_2 + 2),uVar6,uVar10);
  lVar11 = *(long *)(param_4 + 8);
  lVar3 = lVar11;
  lStack_b8 = param_3;
  (**(code **)(lVar11 + 0x40))();
  _swift_unknownObjectRelease(uVar4);
  if (lVar3 == 0) {
    alStack_110[1] = (long)puVar7 - extraout_x8_03;
    puStack_100 = puVar7;
    __s7SwiftUI11StateObjectV12wrappedValuexvg(uVar5,uStack_c0,uStack_c4,uVar6,uVar10);
    lVar3 = lStack_b8;
    (**(code **)(lVar11 + 0x48))(lStack_b8,lVar11);
    _swift_unknownObjectRelease(uVar5);
    lVar11 = *(long *)(lVar3 + 0x10);
    _swift_bridgeObjectRelease(lVar3);
    lVar3 = lStack_d0;
    if (lVar11 == 0) {
      __s7SwiftUI12ProgressViewVA2A05EmptyD0VRs_rlEACyA2EGycAERszrlufC(lStack_d0);
      lVar1 = alStack_f8[2];
      lVar11 = alStack_f8[1];
      lVar8 = alStack_f8[0];
      pcVar9 = *(code **)(alStack_f8[1] + 0x10);
      (*pcVar9)(alStack_f8[0],lVar3,alStack_f8[2]);
      puVar2 = apuStack_e0[0];
      *apuStack_e0[0] = 0;
      *(undefined1 *)(puVar2 + 1) = 1;
      lVar3 = 0x100028a98;
      FUN_100010b54(0x100028a98,&UNK_10001fd40);
      (*pcVar9)((long)puVar2 + (long)*(int *)(lVar3 + 0x30),lVar8,lVar1);
      puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar3 + 0x40));
      *puVar7 = 0;
      *(undefined1 *)(puVar7 + 1) = 1;
      pcVar9 = *(code **)(lVar11 + 8);
      (*pcVar9)(lVar8,lVar1);
      puVar7 = puStack_a8;
      func_0x00010001c198(puVar2,puStack_a8,0x100028a48,&UNK_10001fd08);
      _swift_storeEnumTagMultiPayload(puVar7,lStack_b0,1);
      uVar5 = 0x100028a68;
      FUN_100010b54(0x100028a68,&UNK_10001fd30);
      uVar6 = 0x100028a70;
      FUN_10001c7b8(0x100028a70,0x100028a68,&UNK_10001fd30,
                    PTR___s7SwiftUI16ScrollViewReaderVyxGAA0D0AAMc_1000241b0);
      uVar4 = 0x100028a78;
      FUN_10001c7b8(0x100028a78,0x100028a48,&UNK_10001fd08,
                    PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_1000243b0);
      lVar3 = alStack_110[1];
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (alStack_110[1],puVar7,uVar5,lStack_a0,uVar6,uVar4);
      (*pcVar9)(lStack_d0,lVar1);
      func_0x00010001c1e0(puVar2,0x100028a48,&UNK_10001fd08);
    }
    else {
      FUN_10001a7a0(&uStack_80,lVar8);
      puVar7 = puStack_a8;
      lVar3 = lStack_b0;
      puStack_a8[1] = uStack_78;
      *puVar7 = uStack_80;
      _swift_storeEnumTagMultiPayload(puVar7,lVar3,0);
      uVar5 = 0x100028a68;
      FUN_100010b54(0x100028a68,&UNK_10001fd30);
      uVar6 = 0x100028a70;
      FUN_10001c7b8(0x100028a70,0x100028a68,&UNK_10001fd30,
                    PTR___s7SwiftUI16ScrollViewReaderVyxGAA0D0AAMc_1000241b0);
      uVar4 = 0x100028a78;
      FUN_10001c7b8(0x100028a78,0x100028a48,&UNK_10001fd08,
                    PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_1000243b0);
      lVar3 = alStack_110[1];
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (alStack_110[1],puVar7,uVar5,lStack_a0,uVar6,uVar4);
    }
    uVar4 = uStack_88;
    lVar11 = lStack_90;
    lVar8 = lStack_98;
    puVar7 = puStack_100;
    func_0x00010001adc0(lVar3,puStack_100);
    _swift_storeEnumTagMultiPayload(puVar7,lVar8,1);
    uVar5 = 0x100028a80;
    FUN_100010b54(0x100028a80,&UNK_10001fd38);
    uVar6 = 0x100028a88;
    FUN_10001c7b8(0x100028a88,0x100028a80,&UNK_10001fd38,
                  PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_1000243b0);
    uVar10 = uVar6;
    func_0x00010001ae10();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (uVar4,puVar7,uVar5,lVar11,uVar6,uVar10);
    func_0x00010001aec8(lVar3,0x100028a60,&UNK_10001fd28);
  }
  else {
    *puVar7 = 0;
    *(undefined1 *)(puVar7 + 1) = 1;
    puVar7[2] = param_3;
    puVar7[3] = lVar3;
    puVar7[4] = 0x4031000000000000;
    puVar7[5] = 0x48;
    *(undefined1 *)(puVar7 + 6) = 0;
    puVar7[7] = 0;
    *(undefined1 *)(puVar7 + 8) = 1;
    _swift_bridgeObjectRetain(lVar3);
    _swift_storeEnumTagMultiPayload(puVar7,lStack_98,0);
    uVar5 = 0x100028a80;
    FUN_100010b54(0x100028a80,&UNK_10001fd38);
    uVar6 = 0x100028a88;
    FUN_10001c7b8(0x100028a88,0x100028a80,&UNK_10001fd38,
                  PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_1000243b0);
    uVar4 = uVar6;
    func_0x00010001ae10();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (uStack_88,puVar7,uVar5,lStack_90,uVar6,uVar4);
    _swift_bridgeObjectRelease(lVar3);
  }
  return;
}



/* Entry: 10001a7a0; end: 10001a883;  */

void FUN_10001a7a0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_40 = *(undefined1 *)(unaff_x20 + 2);
  uStack_58 = unaff_x20[4];
  uStack_60 = unaff_x20[3];
  uStack_68 = unaff_x20[5];
  puVar3 = &UNK_100025168;
  _swift_allocObject(&UNK_100025168,0x50,7);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(long *)(puVar3 + 0x18) = lVar2;
  uVar5 = *unaff_x20;
  uVar7 = unaff_x20[3];
  uVar6 = unaff_x20[2];
  *(undefined8 *)(puVar3 + 0x28) = unaff_x20[1];
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  *(undefined8 *)(puVar3 + 0x38) = uVar7;
  *(undefined8 *)(puVar3 + 0x30) = uVar6;
  uVar5 = unaff_x20[4];
  *(undefined8 *)(puVar3 + 0x48) = unaff_x20[5];
  *(undefined8 *)(puVar3 + 0x40) = uVar5;
  *param_1 = FUN_10001b0d4;
  param_1[1] = puVar3;
  lVar4 = 0;
  __s7SwiftUI11StateObjectVMa(0,uVar1,*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(auStack_80,&uStack_50,lVar4);
  func_0x00010001c198(&uStack_60,auStack_80,0x100028a20,&UNK_10001fca8);
  func_0x00010001c198(&uStack_68,auStack_80,0x100028a28,&UNK_10001fcb0);
  return;
}



/* Entry: 10001a884; end: 10001a88f;  */

void FUN_10001a884(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000242b0
  )();
  return;
}



/* Entry: 10001a890; end: 10001a8c7;  */

void FUN_10001a890(void)

{
  FUN_100019228();
  return;
}



/* Entry: 10001a8c8; end: 10001a8cf;  */

void FUN_10001a8c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001ed00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_100024858)();
  return;
}



/* Entry: 10001a8d0; end: 10001a8fb;  */

long FUN_10001a8d0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10001a8fc; end: 10001a913;  */

void FUN_10001a8fc(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010001ee8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRetain_100024948)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001ee38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_100024928)(param_2);
  return;
}



/* Entry: 10001a914; end: 10001a94b;  */

void FUN_10001a914(undefined8 *param_1)

{
  FUN_10001a94c(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  _swift_release(param_1[4]);
                    /* WARNING: Could not recover jumptable at 0x00010001ed3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100024880)(param_1[5]);
  return;
}



/* Entry: 10001a94c; end: 10001a963;  */

void FUN_10001a94c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010001ee80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_100024940)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001ee2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024920)(param_2);
  return;
}



/* Entry: 10001a964; end: 10001aa6b;  */

undefined8 * FUN_10001a964(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_10001a8fc(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 10001aa6c; end: 10001aa7f;  */

void FUN_10001aa6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 10001aa80; end: 10001aae3;  */

undefined8 * FUN_10001aa80(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10001a94c(uVar3,uVar4,uVar2);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  _swift_release(param_1[4]);
  uVar3 = param_1[5];
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}



/* Entry: 10001aae4; end: 10001ab87;  */

int FUN_10001aae4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10001ab88; end: 10001ac1f;  */

void FUN_10001ab88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000100028a00 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x100028978;
  func_0x000100015340(0x100028978,&UNK_10001fbf0);
  uVar2 = 0x100028a08;
  FUN_10001c7b8(0x100028a08,0x100028a10,&UNK_10001fc98,
                PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_100024330);
  puStack_28 = PTR___s7SwiftUI30_SafeAreaRegionsIgnoringLayoutVAA12ViewModifierAAWP_100024288;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_100024160;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_100024160,uVar1,
             &uStack_30);
  puRam0000000100028a00 = puVar3;
  return;
}



/* Entry: 10001ac20; end: 10001ac53;  */

uint FUN_10001ac20(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x00010001ab78(0,uVar1,lVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar4,*(undefined8 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x30),
             *(undefined8 *)(lVar3 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x18) + 8) + 8));
  (**(code **)(*(long *)(lVar2 + 8) + 0x88))(param_1,uVar1);
  _swift_unknownObjectRelease(uVar4);
  return (uint)param_1 & 1;
}



/* Entry: 10001ac54; end: 10001ad1b;  */

undefined8 FUN_10001ac54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x100028a18;
  FUN_100010b54(0x100028a18,&UNK_10001fca0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10001ad1c; end: 10001ad77;  */

void FUN_10001ad1c(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  uVar1 = *(undefined8 *)(param_3 + param_4 + -0x10);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  lVar4 = *(long *)(*(long *)(param_3 + param_4 + -8) + 8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  _swift_bridgeObjectRetain(uVar3);
  (*pcVar5)(uVar2,uVar3,uVar1,lVar4);
  return;
}



/* Entry: 10001ad78; end: 10001adbf;  */

undefined1  [16] FUN_10001ad78(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = 0x10;
  return auVar1;
}



/* Entry: 10001adc0; end: 10001af07;  */

undefined8 FUN_10001adc0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x100028a60;
  FUN_100010b54(0x100028a60,&UNK_10001fd28);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10001af08; end: 10001b0d3;  */

void FUN_10001af08(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  
  lVar3 = 0;
  lStack_a8 = param_1;
  uStack_98 = param_2;
  __s7SwiftUI15ScrollViewProxyVMa();
  lVar8 = *(long *)(lVar3 + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_100024410)();
  uStack_80 = param_4;
  lStack_78 = param_5;
  puStack_70 = param_3;
  __s7SwiftUI4AxisO3SetV8verticalAEvgZ();
  uVar4 = 0x100028aa0;
  FUN_100010b54(0x100028aa0,&UNK_10001fd48);
  uVar5 = 0x100028aa8;
  FUN_10001c7b8(0x100028aa8,0x100028aa0,&UNK_10001fd48,
                PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_1000243b0);
  lVar2 = lStack_a8;
  __s7SwiftUI10ScrollViewV_15showsIndicators7contentACyxGAA4AxisO3SetV_SbxyXEtcfC
            (lStack_a8,lVar3,0,FUN_10001b3f4,auStack_90,uVar4,uVar5);
  lVar3 = 0;
  func_0x00010001ab78(0,param_4,param_5);
  uVar4 = *param_3;
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar4,param_3[1],*(undefined1 *)(param_3 + 2),*(undefined8 *)(lVar3 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x18) + 8) + 8));
  (**(code **)(*(long *)(param_5 + 8) + 0x68))();
  _swift_unknownObjectRelease(uVar4);
  lVar3 = lStack_a0;
  (**(code **)(lVar8 + 0x10))(auStack_b0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),uStack_98,lStack_a0)
  ;
  uVar7 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar10 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = &UNK_100025190;
  _swift_allocObject(&UNK_100025190,uVar10 + lVar9,uVar7 | 7);
  (**(code **)(lVar8 + 0x20))
            (puVar6 + uVar10,auStack_b0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),lVar3);
  lVar3 = 0x100028ab0;
  FUN_100010b54(0x100028ab0,&UNK_10001fd50);
  pbVar1 = (byte *)(lVar2 + *(int *)(lVar3 + 0x24));
  *pbVar1 = (byte)param_4 & 1;
  *(code **)(pbVar1 + 8) = FUN_10001c0f8;
  *(undefined **)(pbVar1 + 0x10) = puVar6;
  return;
}



/* Entry: 10001b0d4; end: 10001b0df;  */

void FUN_10001b0d4(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar8 = *(long *)(unaff_x20 + 0x18);
  lVar3 = 0;
  lStack_a8 = param_1;
  uStack_98 = param_2;
  __s7SwiftUI15ScrollViewProxyVMa();
  lVar10 = *(long *)(lVar3 + -8);
  lVar11 = *(long *)(lVar10 + 0x40);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_100024410)();
  uStack_80 = uVar6;
  lStack_78 = lVar8;
  puStack_70 = (undefined8 *)(unaff_x20 + 0x20);
  __s7SwiftUI4AxisO3SetV8verticalAEvgZ();
  uVar4 = 0x100028aa0;
  FUN_100010b54(0x100028aa0,&UNK_10001fd48);
  uVar5 = 0x100028aa8;
  FUN_10001c7b8(0x100028aa8,0x100028aa0,&UNK_10001fd48,
                PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_1000243b0);
  lVar2 = lStack_a8;
  __s7SwiftUI10ScrollViewV_15showsIndicators7contentACyxGAA4AxisO3SetV_SbxyXEtcfC
            (lStack_a8,lVar3,0,FUN_10001b3f4,auStack_90,uVar4,uVar5);
  lVar3 = 0;
  func_0x00010001ab78(0,uVar6,lVar8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  __s7SwiftUI11StateObjectV12wrappedValuexvg
            (uVar4,*(undefined8 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x30),
             *(undefined8 *)(lVar3 + 0x10),
             *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x18) + 8) + 8));
  (**(code **)(*(long *)(lVar8 + 8) + 0x68))();
  _swift_unknownObjectRelease(uVar4);
  lVar8 = lStack_a0;
  (**(code **)(lVar10 + 0x10))
            (auStack_b0 + -(lVar11 + 0xfU & 0xfffffffffffffff0),uStack_98,lStack_a0);
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar12 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  puVar7 = &UNK_100025190;
  _swift_allocObject(&UNK_100025190,uVar12 + lVar11,uVar9 | 7);
  (**(code **)(lVar10 + 0x20))
            (puVar7 + uVar12,auStack_b0 + -(lVar11 + 0xfU & 0xfffffffffffffff0),lVar8);
  lVar8 = 0x100028ab0;
  FUN_100010b54(0x100028ab0,&UNK_10001fd50);
  pbVar1 = (byte *)(lVar2 + *(int *)(lVar8 + 0x24));
  *pbVar1 = (byte)uVar6 & 1;
  *(code **)(pbVar1 + 8) = FUN_10001c0f8;
  *(undefined **)(pbVar1 + 0x10) = puVar7;
  return;
}



/* Entry: 10001b0e0; end: 10001b3f3;  */

void FUN_10001b0e0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 auStack_240 [2];
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined1 auStack_218 [72];
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_180;
  undefined1 uStack_178;
  long lStack_170;
  undefined1 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  long lStack_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 uStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar1 = 0;
  uStack_230 = param_3;
  uStack_228 = param_4;
  __s7SwiftUI21PinnedScrollableViewsVMa();
  (*(code *)PTR____chkstk_darwin_100024410)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar12 = (long)&uStack_230 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x100028ab8;
  puVar8 = &UNK_10001fd58;
  FUN_100010b54(0x100028ab8,&UNK_10001fd58);
  lStack_220 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_100024410)(*(undefined8 *)(lStack_220 + 0x40));
  lVar10 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100024410)();
  lVar11 = lVar10 - extraout_x12;
  __s7SwiftUI5ColorV5clearACvgZ();
  lVar4 = lVar3;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_180,0,1,0x3ff0000000000000,0,lVar4,puVar8);
  lStack_148 = lStack_180;
  uStack_140 = uStack_178;
  lStack_138 = lStack_170;
  uStack_130 = uStack_168;
  lStack_128 = lStack_160;
  lStack_120 = lStack_158;
  lStack_118 = 0x706f74;
  lStack_110 = -0x1d00000000000000;
  lStack_100 = lStack_180;
  uStack_f8 = uStack_178;
  lStack_f0 = lStack_170;
  uStack_e8 = uStack_168;
  lStack_e0 = lStack_160;
  lStack_d8 = lStack_158;
  uStack_d0 = 0x706f74;
  uStack_c8 = 0xe300000000000000;
  lStack_150 = lVar3;
  lStack_108 = lVar3;
  func_0x00010001c198(&lStack_150,&lStack_c0,0x100028ac0,&UNK_10001fd60);
  func_0x00010001c1e0(&lStack_108,0x100028ac0,&UNK_10001fd60);
  uVar13 = *(undefined8 *)(param_2 + 0x28);
  lStack_b0 = uStack_230;
  lStack_a8 = uStack_228;
  uVar5 = uVar13;
  lStack_a0 = param_2;
  _swift_bridgeObjectRetain(uVar13);
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  uStack_1d0 = (ulong)uStack_1d0._4_4_ << 0x20;
  uVar6 = 0x100028ac8;
  FUN_10001caa4(0x100028ac8,PTR___s7SwiftUI21PinnedScrollableViewsVMa_100024268,
                PTR___s7SwiftUI21PinnedScrollableViewsVs9OptionSetAAMc_100024270);
  __ss9OptionSetP8rawValuex03RawD0Qz_tcfCTj(lVar12,&uStack_1d0,lVar1,uVar6);
  uVar6 = 0x100028ad0;
  FUN_100010b54(0x100028ad0,&UNK_10001fd68);
  uVar7 = uVar6;
  FUN_10001c22c();
  *(undefined8 *)(lVar11 + -0x10) = uVar7;
  __s7SwiftUI9LazyVGridV7columns9alignment7spacing11pinnedViews7contentACyxGSayAA8GridItemVG_AA19HorizontalAlignmentV12CoreGraphics7CGFloatVSgAA016PinnedScrollableI0VxyXEtcfC
            (lVar11,uVar13,uVar5,0x4020000000000000,0,lVar12,FUN_10001c220,&lStack_c0,uVar6);
  lVar4 = lStack_220;
  lStack_1b0 = CONCAT71(uStack_12f,uStack_130);
  lStack_1a8 = lStack_128;
  lStack_198 = lStack_118;
  lStack_1a0 = lStack_120;
  lStack_190 = lStack_110;
  lStack_1c0 = CONCAT71(uStack_13f,uStack_140);
  lStack_1c8 = lStack_148;
  uStack_1d0 = lStack_150;
  lStack_1b8 = lStack_138;
  pcVar9 = *(code **)(lStack_220 + 0x10);
  (*pcVar9)(lVar10,lVar11,lVar2);
  lStack_98 = lStack_1a8;
  lStack_a0 = lStack_1b0;
  lStack_88 = lStack_198;
  lStack_90 = lStack_1a0;
  lStack_80 = lStack_190;
  lStack_b8 = lStack_1c8;
  lStack_c0 = uStack_1d0;
  lStack_a8 = lStack_1b8;
  lStack_b0 = lStack_1c0;
  param_1[5] = lStack_1a8;
  param_1[4] = lStack_1b0;
  param_1[7] = lStack_198;
  param_1[6] = lStack_1a0;
  param_1[8] = lStack_190;
  param_1[1] = lStack_1c8;
  *param_1 = uStack_1d0;
  param_1[3] = lStack_1b8;
  param_1[2] = lStack_1c0;
  lVar3 = 0x100028b20;
  FUN_100010b54(0x100028b20,&UNK_10001fd90);
  (*pcVar9)((long)param_1 + (long)*(int *)(lVar3 + 0x30),lVar10,lVar2);
  func_0x00010001c198(&lStack_c0,auStack_218,0x100028ac0,&UNK_10001fd60);
  pcVar9 = *(code **)(lVar4 + 8);
  (*pcVar9)(lVar11,lVar2);
  (*pcVar9)(lVar10,lVar2);
  func_0x00010001c1e0(&uStack_1d0,0x100028ac0,&UNK_10001fd60);
  return;
}



/* Entry: 10001b3f4; end: 10001b3ff;  */

void FUN_10001b3f4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 auStack_240 [2];
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined1 auStack_218 [72];
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_180;
  undefined1 uStack_178;
  long lStack_170;
  undefined1 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  long lStack_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 uStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  uStack_230 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_228 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar1 = 0;
  __s7SwiftUI21PinnedScrollableViewsVMa();
  (*(code *)PTR____chkstk_darwin_100024410)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar13 = (long)&uStack_230 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x100028ab8;
  puVar9 = &UNK_10001fd58;
  FUN_100010b54(0x100028ab8,&UNK_10001fd58);
  lStack_220 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_100024410)(*(undefined8 *)(lStack_220 + 0x40));
  lVar11 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100024410)();
  lVar12 = lVar11 - extraout_x12;
  __s7SwiftUI5ColorV5clearACvgZ();
  lVar4 = lVar3;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_180,0,1,0x3ff0000000000000,0,lVar4,puVar9);
  lStack_148 = lStack_180;
  uStack_140 = uStack_178;
  lStack_138 = lStack_170;
  uStack_130 = uStack_168;
  lStack_128 = lStack_160;
  lStack_120 = lStack_158;
  lStack_118 = 0x706f74;
  lStack_110 = -0x1d00000000000000;
  lStack_100 = lStack_180;
  uStack_f8 = uStack_178;
  lStack_f0 = lStack_170;
  uStack_e8 = uStack_168;
  lStack_e0 = lStack_160;
  lStack_d8 = lStack_158;
  uStack_d0 = 0x706f74;
  uStack_c8 = 0xe300000000000000;
  lStack_150 = lVar3;
  lStack_108 = lVar3;
  func_0x00010001c198(&lStack_150,&lStack_c0,0x100028ac0,&UNK_10001fd60);
  func_0x00010001c1e0(&lStack_108,0x100028ac0,&UNK_10001fd60);
  uVar14 = *(undefined8 *)(lVar8 + 0x28);
  lStack_b0 = uStack_230;
  lStack_a8 = uStack_228;
  uVar5 = uVar14;
  lStack_a0 = lVar8;
  _swift_bridgeObjectRetain(uVar14);
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  uStack_1d0 = (ulong)uStack_1d0._4_4_ << 0x20;
  uVar6 = 0x100028ac8;
  FUN_10001caa4(0x100028ac8,PTR___s7SwiftUI21PinnedScrollableViewsVMa_100024268,
                PTR___s7SwiftUI21PinnedScrollableViewsVs9OptionSetAAMc_100024270);
  __ss9OptionSetP8rawValuex03RawD0Qz_tcfCTj(lVar13,&uStack_1d0,lVar1,uVar6);
  uVar6 = 0x100028ad0;
  FUN_100010b54(0x100028ad0,&UNK_10001fd68);
  uVar7 = uVar6;
  FUN_10001c22c();
  *(undefined8 *)(lVar12 + -0x10) = uVar7;
  __s7SwiftUI9LazyVGridV7columns9alignment7spacing11pinnedViews7contentACyxGSayAA8GridItemVG_AA19HorizontalAlignmentV12CoreGraphics7CGFloatVSgAA016PinnedScrollableI0VxyXEtcfC
            (lVar12,uVar14,uVar5,0x4020000000000000,0,lVar13,FUN_10001c220,&lStack_c0,uVar6);
  lVar4 = lStack_220;
  lStack_1b0 = CONCAT71(uStack_12f,uStack_130);
  lStack_1a8 = lStack_128;
  lStack_198 = lStack_118;
  lStack_1a0 = lStack_120;
  lStack_190 = lStack_110;
  lStack_1c0 = CONCAT71(uStack_13f,uStack_140);
  lStack_1c8 = lStack_148;
  uStack_1d0 = lStack_150;
  lStack_1b8 = lStack_138;
  pcVar10 = *(code **)(lStack_220 + 0x10);
  (*pcVar10)(lVar11,lVar12,lVar2);
  lStack_98 = lStack_1a8;
  lStack_a0 = lStack_1b0;
  lStack_88 = lStack_198;
  lStack_90 = lStack_1a0;
  lStack_80 = lStack_190;
  lStack_b8 = lStack_1c8;
  lStack_c0 = uStack_1d0;
  lStack_a8 = lStack_1b8;
  lStack_b0 = lStack_1c0;
  param_1[5] = lStack_1a8;
  param_1[4] = lStack_1b0;
  param_1[7] = lStack_198;
  param_1[6] = lStack_1a0;
  param_1[8] = lStack_190;
  param_1[1] = lStack_1c8;
  *param_1 = uStack_1d0;
  param_1[3] = lStack_1b8;
  param_1[2] = lStack_1c0;
  lVar3 = 0x100028b20;
  FUN_100010b54(0x100028b20,&UNK_10001fd90);
  (*pcVar10)((long)param_1 + (long)*(int *)(lVar3 + 0x30),lVar11,lVar2);
  func_0x00010001c198(&lStack_c0,auStack_218,0x100028ac0,&UNK_10001fd60);
  pcVar10 = *(code **)(lVar4 + 8);
  (*pcVar10)(lVar12,lVar2);
  (*pcVar10)(lVar11,lVar2);
  func_0x00010001c1e0(&uStack_1d0,0x100028ac0,&UNK_10001fd60);
  return;
}


