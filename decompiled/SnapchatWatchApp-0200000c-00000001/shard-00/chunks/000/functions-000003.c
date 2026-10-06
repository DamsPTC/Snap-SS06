/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0001b048; end: 0001b04b;  */

void FUN_0001b048(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = _swift_getKeyPath(&UNK_00028888);
  uVar3 = _swift_getKeyPath(&UNK_000288b0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (uVar1,uVar2,uVar3);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00027678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_00030570)(uVar3);
  return;
}



/* Entry: 0001b04c; end: 0001b04f;  */

void FUN_0001b04c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_34;
  
  uVar1 = *param_1;
  uVar2 = _swift_getKeyPath(&UNK_00028888);
  uVar3 = _swift_getKeyPath(&UNK_000288b0);
  uStack_34 = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  uVar4 = _objc_retain_x22();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_34,uVar4,uVar2,uVar3);
  return;
}



/* Entry: 0001b050; end: 0001b08f;  */

void FUN_0001b050(int *param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_1 == 0) {
    uVar2 = (*param_2)(0xff);
    iVar1 = _swift_getWitnessTable(param_3,uVar2);
    *param_1 = iVar1;
  }
  return;
}



/* Entry: 0001b090; end: 0001b0c3;  */

void FUN_0001b090(void)

{
  int unaff_w20;
  
  _swift_unknownObjectRelease(*(undefined4 *)(unaff_w20 + 8));
  _objc_release_x8();
  _swift_bridgeObjectRelease(*(undefined4 *)(unaff_w20 + 0x14));
                    /* WARNING: Could not recover jumptable at 0x0002757c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0003051c)();
  return;
}



/* Entry: 0001b0c4; end: 0001b13b;  */

void FUN_0001b0c4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int unaff_w20;
  int unaff_w22;
  undefined1 auVar9 [16];
  
  uVar1 = *(undefined4 *)(unaff_w20 + 8);
  uVar2 = *(undefined4 *)(unaff_w20 + 0xc);
  iVar5 = *(int *)(unaff_w20 + 0x10);
  iVar3 = *(int *)(unaff_w20 + 0x14);
  piVar6 = (int *)_swift_task_alloc(0x20);
  *(int **)(unaff_w22 + 8) = piVar6;
  *piVar6 = unaff_w22;
  piVar6[1] = (int)FUN_0001b420;
  piVar6[3] = iVar5;
  piVar6[4] = iVar3;
  uVar7 = __sScMMa(0,uVar1,uVar2);
  puVar4 = PTR___sScMMa_0003059c;
  iVar5 = __sScM6sharedScMvgZ();
  piVar6[5] = iVar5;
  uVar8 = FUN_0001b050(0x34ffc,puVar4,PTR___sScMScAsMc_000305a0);
  auVar9 = __sScA15unownedExecutorScevgTj(uVar7,uVar8);
                    /* WARNING: Could not recover jumptable at 0x000276d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_000305b8)(FUN_0001a320,auVar9._0_8_,auVar9._8_8_);
  return;
}



/* Entry: 0001b13c; end: 0001b183;  */

undefined8 FUN_0001b13c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00010468(param_3,param_4);
  (**(code **)(*(int *)(iVar1 + -4) + 8))(param_2,param_1,iVar1);
  return param_2;
}



/* Entry: 0001b184; end: 0001b1c3;  */

undefined8 FUN_0001b184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00010468(param_2,param_3);
  (**(code **)(*(int *)(iVar1 + -4) + 4))(param_1,iVar1);
  return param_1;
}



/* Entry: 0001b1c4; end: 0001b233;  */

void FUN_0001b1c4(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int unaff_w20;
  int unaff_w22;
  
  piVar2 = *(int **)(unaff_w20 + 8);
  uVar3 = *(undefined4 *)(unaff_w20 + 0xc);
  piVar5 = (int *)_swift_task_alloc(0x10);
  *(int **)(unaff_w22 + 8) = piVar5;
  *piVar5 = unaff_w22;
  piVar5[1] = (int)FUN_0001b418;
  iVar1 = *piVar2;
  piVar4 = (int *)_swift_task_alloc(piVar2[1],(code *)(iVar1 + (int)piVar2),uVar3);
  piVar5[2] = (int)piVar4;
  *piVar4 = (int)piVar5;
  piVar4[1] = (int)FUN_0001a9d0;
                    /* WARNING: Could not recover jumptable at 0x0001a9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(iVar1 + (int)piVar2))(param_1);
  return;
}



/* Entry: 0001b234; end: 0001b257;  */

void FUN_0001b234(void)

{
  int unaff_w20;
  
  _swift_release(*(undefined4 *)(unaff_w20 + 0xc));
                    /* WARNING: Could not recover jumptable at 0x0002757c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0003051c)();
  return;
}



/* Entry: 0001b258; end: 0001b2c7;  */

void FUN_0001b258(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int unaff_w20;
  int unaff_w22;
  
  piVar2 = *(int **)(unaff_w20 + 8);
  uVar3 = *(undefined4 *)(unaff_w20 + 0xc);
  piVar5 = (int *)_swift_task_alloc(0x10);
  *(int **)(unaff_w22 + 8) = piVar5;
  *piVar5 = unaff_w22;
  piVar5[1] = (int)FUN_0001b2c8;
  iVar1 = *piVar2;
  piVar4 = (int *)_swift_task_alloc(piVar2[1],(code *)(iVar1 + (int)piVar2),uVar3);
  piVar5[2] = (int)piVar4;
  *piVar4 = (int)piVar5;
  piVar4[1] = (int)FUN_0001a9d0;
                    /* WARNING: Could not recover jumptable at 0x0001a9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(iVar1 + (int)piVar2))(param_1);
  return;
}



/* Entry: 0001b2c8; end: 0001b2fb;  */

void FUN_0001b2c8(void)

{
  int iVar1;
  int *unaff_w22;
  
  iVar1 = *unaff_w22;
  _swift_task_dealloc(*(undefined4 *)(iVar1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001b2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 4))();
  return;
}



/* Entry: 0001b2fc; end: 0001b32f;  */

void FUN_0001b2fc(void)

{
  int unaff_w20;
  
  _swift_unknownObjectRelease(*(undefined4 *)(unaff_w20 + 8));
  _objc_release_x8();
  _objc_release_x8();
                    /* WARNING: Could not recover jumptable at 0x0002757c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0003051c)();
  return;
}



/* Entry: 0001b330; end: 0001b3a7;  */

void FUN_0001b330(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int unaff_w20;
  int unaff_w22;
  undefined1 auVar9 [16];
  
  uVar1 = *(undefined4 *)(unaff_w20 + 8);
  uVar2 = *(undefined4 *)(unaff_w20 + 0xc);
  iVar5 = *(int *)(unaff_w20 + 0x10);
  iVar3 = *(int *)(unaff_w20 + 0x14);
  piVar6 = (int *)_swift_task_alloc(0x20);
  *(int **)(unaff_w22 + 8) = piVar6;
  *piVar6 = unaff_w22;
  piVar6[1] = (int)FUN_0001b3a8;
  piVar6[3] = iVar5;
  piVar6[4] = iVar3;
  uVar7 = __sScMMa(0,uVar1,uVar2);
  puVar4 = PTR___sScMMa_0003059c;
  iVar5 = __sScM6sharedScMvgZ();
  piVar6[5] = iVar5;
  uVar8 = FUN_0001b050(0x34ffc,puVar4,PTR___sScMScAsMc_000305a0);
  auVar9 = __sScA15unownedExecutorScevgTj(uVar7,uVar8);
                    /* WARNING: Could not recover jumptable at 0x000276d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_000305b8)(FUN_0001a0a8,auVar9._0_8_,auVar9._8_8_);
  return;
}



/* Entry: 0001b3a8; end: 0001b3db;  */

void FUN_0001b3a8(void)

{
  int iVar1;
  int *unaff_w22;
  
  iVar1 = *unaff_w22;
  _swift_task_dealloc(*(undefined4 *)(iVar1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001b3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 4))();
  return;
}



/* Entry: 0001b3dc; end: 0001b417;  */

undefined8 FUN_0001b3dc(undefined8 param_1,undefined8 param_2)

{
  (**(code **)(*(int *)(PTR___ss11AnyHashableVN_00030420 + -4) + 8))(param_2,param_1);
  return param_2;
}



/* Entry: 0001b418; end: 0001b41b;  */

void FUN_0001b418(void)

{
  int iVar1;
  int *unaff_w22;
  
  iVar1 = *unaff_w22;
  _swift_task_dealloc(*(undefined4 *)(iVar1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001b2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 4))();
  return;
}



/* Entry: 0001b41c; end: 0001b41f;  */

void FUN_0001b41c(void)

{
  int unaff_w20;
  
  _swift_release(*(undefined4 *)(unaff_w20 + 0xc));
                    /* WARNING: Could not recover jumptable at 0x0002757c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0003051c)();
  return;
}



/* Entry: 0001b420; end: 0001b423;  */

void FUN_0001b420(void)

{
  int iVar1;
  int *unaff_w22;
  
  iVar1 = *unaff_w22;
  _swift_task_dealloc(*(undefined4 *)(iVar1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001b3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 4))();
  return;
}



/* Entry: 0001b424; end: 0001bb87;  */

undefined1  [16]
FUN_0001b424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            uint param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  undefined2 uVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 extraout_w1;
  ulonglong extraout_x1;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  undefined *puVar23;
  undefined *puVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined2 uStack_66;
  
  uStack_80 = 0x20;
  uStack_78 = CONCAT44(uStack_78._4_4_,&UNK_0000e100);
  puStack_98 = &uStack_80;
  FUN_000103b4(param_2,param_3);
  iVar10 = FUN_0001bde4(0x7fffffff,1,FUN_0001c488,&uStack_a0,param_1,param_2,param_3);
  uVar14 = *(uint *)(iVar10 + 8);
  if (uVar14 == 0) {
    _swift_bridgeObjectRelease();
    uVar14 = *(uint *)(PTR___swiftEmptyArrayStorage_000304e8 + 8);
    puVar24 = PTR___swiftEmptyArrayStorage_000304e8;
  }
  else {
    uStack_a0 = CONCAT44(uStack_a0._4_4_,PTR___swiftEmptyArrayStorage_000304e8);
    uVar15 = 0;
    FUN_0001c2a0(0,uVar14);
    iVar26 = 0;
    uVar25 = 0;
    puVar24 = (undefined *)uStack_a0;
    do {
      if (*(uint *)(iVar10 + 8) <= uVar25) {
                    /* WARNING: Does not return */
        uVar15 = SoftwareBreakpoint(1,0x1bb80);
        (*(code *)uVar15)();
      }
      iVar1 = iVar10 + iVar26;
      uStack_67 = *(undefined1 *)(iVar1 + 0x29);
      uStack_66 = *(undefined2 *)(iVar1 + 0x2a);
      uStack_78 = *(undefined8 *)(iVar1 + 0x18);
      uStack_80 = *(undefined8 *)(iVar1 + 0x10);
      uVar2 = *(undefined4 *)(iVar1 + 0x24);
      uStack_70 = *(undefined8 *)(iVar1 + 0x20);
      uVar5 = *(undefined1 *)(iVar1 + 0x28);
      uStack_68 = uVar5;
      FUN_000103b4(uVar2,uVar5);
      uVar11 = __sSS14_fromSubstringySSSshFZ(&uStack_80);
      uVar16 = uVar15;
      FUN_000103d0(uVar2,uVar5);
      uStack_a0 = CONCAT44(uStack_a0._4_4_,puVar24);
      uVar27 = *(uint *)(puVar24 + 8);
      if (*(uint *)(puVar24 + 0xc) >> 1 <= uVar27) {
        uVar16 = 1;
        FUN_0001c2a0(1 < *(uint *)(puVar24 + 0xc),uVar27 + 1);
        puVar24 = (undefined *)uStack_a0;
      }
      uVar25 = uVar25 + 1;
      *(uint *)(puVar24 + 8) = uVar27 + 1;
      *(undefined4 *)(puVar24 + uVar27 * 0xc + 0x10) = uVar11;
      *(undefined4 *)(puVar24 + uVar27 * 0xc + 0x14) = extraout_w1;
      puVar24[uVar27 * 0xc + 0x18] = (char)uVar15;
      puVar24[uVar27 * 0xc + 0x19] = (char)((ulonglong)uVar15 >> 8);
      *(short *)(puVar24 + uVar27 * 0xc + 0x1a) = (short)((ulonglong)uVar15 >> 0x10);
      iVar26 = iVar26 + 0x20;
      uVar15 = uVar16;
    } while (uVar14 != uVar25);
    _swift_bridgeObjectRelease();
    uVar14 = *(uint *)(puVar24 + 8);
  }
  puVar23 = PTR___swiftEmptyArrayStorage_000304e8;
  if (uVar14 != 0) {
    uVar25 = 0;
    do {
      puVar9 = (undefined2 *)(puVar24 + uVar25 * 0xc + 0x1a);
      uVar27 = uVar25;
      while( true ) {
        if (*(uint *)(puVar24 + 8) <= uVar27) {
                    /* WARNING: Does not return */
          uVar15 = SoftwareBreakpoint(1,0x1bb84);
          (*(code *)uVar15)();
        }
        uVar3 = *(uint *)(puVar9 + -5);
        uVar2 = *(undefined4 *)(puVar9 + -3);
        cVar6 = *(char *)(puVar9 + -1);
        bVar7 = *(byte *)((int)puVar9 + -1);
        uVar8 = *puVar9;
        if (cVar6 != '\0') {
          _swift_unknownObjectRetain(uVar2);
        }
        uVar25 = uVar3;
        if ((bVar7 & 0x20) != 0) {
          uVar25 = bVar7 & 0xf;
        }
        if (uVar25 != 0) break;
        uVar27 = uVar27 + 1;
        FUN_000103d0(uVar2,cVar6);
        puVar9 = puVar9 + 6;
        if (uVar27 == uVar14) goto LAB_0001b738;
      }
      uVar20 = _swift_isUniquelyReferenced_nonNull_native(puVar23);
      uStack_a0 = CONCAT44(uStack_a0._4_4_,puVar23);
      if ((uVar20 & 1) == 0) {
        FUN_0001c2a0(0,*(int *)(puVar23 + 8) + 1,1);
        puVar23 = (undefined *)uStack_a0;
      }
      uVar4 = *(uint *)(puVar23 + 8);
      if (*(uint *)(puVar23 + 0xc) >> 1 <= uVar4) {
        FUN_0001c2a0(1 < *(uint *)(puVar23 + 0xc),uVar4 + 1,1);
        puVar23 = (undefined *)uStack_a0;
      }
      uVar25 = uVar27 + 1;
      *(uint *)(puVar23 + 8) = uVar4 + 1;
      *(uint *)(puVar23 + uVar4 * 0xc + 0x10) = uVar3;
      *(undefined4 *)(puVar23 + uVar4 * 0xc + 0x14) = uVar2;
      puVar23[uVar4 * 0xc + 0x18] = cVar6;
      puVar23[uVar4 * 0xc + 0x19] = bVar7;
      *(undefined2 *)(puVar23 + uVar4 * 0xc + 0x1a) = uVar8;
    } while (uVar27 - uVar14 != -1);
  }
LAB_0001b738:
  _swift_bridgeObjectRelease(puVar24);
  uVar14 = *(uint *)(puVar23 + 8);
  if (uVar14 == 0) {
    _swift_release(puVar23);
  }
  else if (uVar14 == 1) {
    uVar2 = *(undefined4 *)(puVar23 + 0x10);
    uVar11 = *(undefined4 *)(puVar23 + 0x14);
    uVar19 = (ulonglong)*(uint *)(puVar23 + 0x18);
    FUN_000103b4(uVar11,uVar19);
    _swift_release(puVar23);
    FUN_000103b4(uVar11,uVar19);
    uVar20 = uVar19;
    __sSS12makeIteratorSS0B0VyF(uVar2,uVar11);
    auVar28 = __sSS8IteratorV4nextSJSgyF();
    uVar14 = (uint)uVar20;
    while (((uVar14 ^ 0xffffffff) & 0xff) != 0) {
      uVar16 = auVar28._8_8_;
      uVar15 = auVar28._0_8_;
      uVar12 = FUN_0001bb88(uVar15,uVar16,uVar20);
      if ((uVar12 & 1) == 0) {
        FUN_000103d0(uStack_a0._4_4_,puStack_98._0_1_);
        FUN_000103d0(uVar11,uVar19);
        auVar28 = __sSS10uppercasedSSyF(uVar15,uVar16,uVar20);
        FUN_0001c4a4(uVar15,uVar16,uVar20);
        return auVar28;
      }
      FUN_0001c4a4(uVar15,uVar16);
      auVar28 = __sSS8IteratorV4nextSJSgyF();
      uVar14 = (uint)uVar20;
    }
    uStack_a0._4_4_ = (undefined4)(uStack_a0 >> 0x20);
    uVar2 = uStack_a0._4_4_;
    FUN_000103d0(uVar2,puStack_98._0_1_);
    FUN_000103d0(uVar11,uVar19);
  }
  else {
    puVar17 = (undefined4 *)(puVar23 + 0x10);
    uVar2 = *puVar17;
    uVar11 = *(undefined4 *)(puVar23 + 0x14);
    uVar25 = *(uint *)(puVar23 + 0x18);
    uVar20 = (ulonglong)uVar25;
    FUN_000103b4(uVar11,uVar20);
    FUN_000103b4(uVar11,uVar20);
    __sSS12makeIteratorSS0B0VyF(uVar2,uVar11);
    auVar28 = __sSS8IteratorV4nextSJSgyF();
    if ((((uint)uVar20 ^ 0xffffffff) & 0xff) == 0) {
      uVar19 = 1;
    }
    else {
      do {
        uVar19 = FUN_0001bb88(auVar28._0_8_,auVar28._8_8_,uVar20);
        if ((uVar19 & 1) == 0) break;
        FUN_0001c4a4(auVar28._0_8_,auVar28._8_8_);
        auVar28 = __sSS8IteratorV4nextSJSgyF();
      } while ((((uint)uVar20 ^ 0xffffffff) & 0xff) != 0);
    }
    uVar15 = auVar28._8_8_;
    uVar16 = auVar28._0_8_;
    FUN_000103d0(uStack_a0._4_4_,puStack_98._0_1_);
    FUN_000103d0(uVar11,uVar25);
    if (*(uint *)(puVar23 + 8) < uVar14) {
                    /* WARNING: Does not return */
      uVar15 = SoftwareBreakpoint(1,0x1bb88);
      (*(code *)uVar15)();
    }
    uVar2 = puVar17[uVar14 * 3 + -3];
    uVar11 = puVar17[uVar14 * 3 + -2];
    uVar22 = (ulonglong)(uint)puVar17[uVar14 * 3 + -1];
    FUN_000103b4(uVar11,uVar22);
    _swift_release(puVar23);
    FUN_000103b4(uVar11,uVar22);
    uVar12 = uVar22;
    __sSS12makeIteratorSS0B0VyF(uVar2,uVar11);
    auVar28 = __sSS8IteratorV4nextSJSgyF();
    uVar14 = (uint)uVar12;
    while (((uVar14 ^ 0xffffffff) & 0xff) != 0) {
      uVar18 = auVar28._8_8_;
      uVar21 = auVar28._0_8_;
      uVar13 = FUN_0001bb88(uVar21,uVar18,uVar12);
      if ((uVar13 & 1) == 0) {
        FUN_000103d0(uStack_a0._4_4_,puStack_98._0_1_);
        FUN_000103d0(uVar11,uVar22);
        puVar23 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0003049c;
        puVar24 = PTR___ss26DefaultStringInterpolationVN_00030498;
        if ((uVar19 & 1) != 0) {
          auVar28 = __sSS10uppercasedSSyF(uVar21,uVar18,uVar12);
          FUN_0001c4a4(uVar21,uVar18,uVar12);
          return auVar28;
        }
        uStack_a0 = 0;
        puStack_98 = (undefined8 *)&UNK_0000e000;
        __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                  (&uStack_a0,uVar16,uVar15,uVar20,PTR___ss26DefaultStringInterpolationVN_00030498,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0003049c);
        FUN_0001c4a4(uVar16,uVar15,uVar20);
        __sSJ5write2toyxz_ts16TextOutputStreamRzlF(&uStack_a0,uVar21,uVar18,uVar12,puVar24,puVar23);
        FUN_0001c4a4(uVar21,uVar18,uVar12);
        uVar19 = uStack_a0 >> 0x20;
        uVar20 = ZEXT48(puStack_98);
        auVar28 = __sSS10uppercasedSSyF((undefined *)uStack_a0,uVar19,uVar20);
        goto LAB_0001b9e8;
      }
      FUN_0001c4a4(uVar21,uVar18);
      auVar28 = __sSS8IteratorV4nextSJSgyF();
      uVar14 = (uint)uVar12;
    }
    uStack_a0._4_4_ = (undefined4)(uStack_a0 >> 0x20);
    uVar2 = uStack_a0._4_4_;
    FUN_000103d0(uVar2,puStack_98._0_1_);
    FUN_000103d0(uVar11,uVar22);
    if ((uVar19 & 1) == 0) {
      auVar28 = __sSS10uppercasedSSyF(uVar16,uVar15,uVar20);
      FUN_0001c4a4(uVar16,uVar15,uVar20);
      return auVar28;
    }
  }
  uVar20 = (ulonglong)param_5;
  __sSSySJSS5IndexVcig(0xf,param_4,uVar20,param_6);
  auVar28 = __sSJ10uppercasedSSyF();
  uVar19 = extraout_x1;
LAB_0001b9e8:
  FUN_000103d0(uVar19,uVar20);
  return auVar28;
}



/* Entry: 0001bb88; end: 0001bde3;  */

uint FUN_0001bb88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined8 *puVar7;
  uint uVar6;
  undefined8 uVar8;
  ulonglong extraout_x1;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [12];
  undefined1 auStack_a0 [4];
  undefined8 *puStack_9c;
  ulonglong uStack_98;
  undefined8 uStack_88;
  ulonglong uStack_80;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  int iStack_64;
  
  iVar5 = __ss7UnicodeO6ScalarV10PropertiesVMa(0);
  iVar3 = *(int *)(iVar5 + -4);
  iVar2 = *(int *)(iVar3 + 0x20);
  FUN_000103b4(param_2,param_3);
  __sSS17UnicodeScalarViewV12makeIteratorAB0E0VyF(param_1,param_2,param_3);
  if ((int)uStack_68 < iStack_64) {
    uVar10 = (ulonglong)iStack_74;
    uStack_98 = uVar10 | (ulonglong)uStack_6c._2_2_ << 0x30;
    puStack_9c = (undefined8 *)(iStack_70 + 0x14);
    uVar1 = uStack_68;
    do {
      if ((uStack_6c._1_1_ >> 4 & 1) == 0) {
        if ((uStack_6c._1_1_ >> 5 & 1) == 0) {
          puVar7 = puStack_9c;
          if ((uStack_98 >> 0x3c & 1) == 0) {
            puVar7 = (undefined8 *)
                     __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(uVar10,iStack_70,uStack_6c);
          }
        }
        else {
          uVar8 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar10,iStack_70,uStack_6c);
          __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar10,iStack_70,uStack_6c);
          uStack_80 = extraout_x1 & 0xffffffffffffff;
          puVar7 = &uStack_88;
          uStack_88 = uVar8;
        }
        pbVar4 = (byte *)((int)puVar7 + uVar1);
        uVar6 = CONCAT31(0,*pbVar4);
        auVar11._4_4_ = 0;
        auVar11._0_4_ = uVar6;
        if ((char)*pbVar4 < '\0') {
          uVar9 = (uint)LZCOUNT(uVar6 << 0x18 ^ 0xffffffff);
          if (uVar9 < 3) {
            if (uVar9 == 1) goto LAB_0001bca0;
            auVar11._4_4_ = 0;
            auVar11._0_4_ = pbVar4[1] & 0x3f | (uVar6 & 0x1f) << 6;
            auVar11._8_4_ = 2;
          }
          else if (uVar9 == 3) {
            auVar11._4_4_ = 0;
            auVar11._0_4_ = (uVar6 & 0xf) << 0xc | (pbVar4[1] & 0x3f) << 6 | pbVar4[2] & 0x3f;
            auVar11._8_4_ = 3;
          }
          else {
            auVar11._4_4_ = 0;
            auVar11._0_4_ =
                 (uVar6 & 0xf) << 0x12 | (pbVar4[1] & 0x3f) << 0xc | (pbVar4[2] & 0x3f) << 6 |
                 pbVar4[3] & 0x3f;
            auVar11._8_4_ = 4;
          }
        }
        else {
LAB_0001bca0:
          auVar11._8_4_ = 1;
        }
      }
      else {
        auVar11 = __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                            (((ulonglong)((int)uVar1 >> 0x1f ^ uVar1) ^ -(ulonglong)(uVar1 >> 0x1f))
                             << 0x10,uVar10,iStack_70,uStack_6c);
      }
      __ss7UnicodeO6ScalarV10propertiesAD10PropertiesVvg(auVar11._0_8_);
      uVar6 = __ss7UnicodeO6ScalarV10PropertiesV19isEmojiPresentationSbvg();
      (**(code **)(iVar3 + 4))(auStack_a0 + -(iVar2 + 0xfU & 0xfffffff0),iVar5);
    } while (((uVar6 & 1) == 0) && (uVar1 = auVar11._8_4_ + uVar1, (int)uVar1 < iStack_64));
  }
  else {
    uVar6 = 0;
  }
  FUN_0001c4d0(&iStack_74);
  return uVar6 & 1;
}



/* Entry: 0001bde4; end: 0001c29f;  */

undefined *
FUN_0001bde4(int param_1,uint param_2,code *param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined *param_7)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 extraout_x1;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int unaff_w21;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined2 uStack_ca;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(1,0x1c238);
    (*(code *)uVar3)();
  }
  uVar2 = (uint)param_7 >> 8 & 0xf;
  uVar11 = (uint)param_5;
  if (param_1 != 0) {
    uVar1 = uVar11;
    if (((uint)param_7 >> 8 & 0x20) != 0) {
      uVar1 = uVar2;
    }
    if (uVar1 != 0) {
      uVar8 = (ulonglong)((int)uVar1 >> 0x1f ^ uVar1) ^ -(ulonglong)(uVar1 >> 0x1f);
      if ((((uint)param_7 >> 0xc & 1) == 0) ||
         ((((longlong)(int)uVar11 | (ulonglong)((uint)param_7 >> 0x10) << 0x30) >> 0x3b & 1) != 0))
      {
        uVar7 = 7;
      }
      else {
        uVar7 = 0xb;
      }
      uVar9 = (uVar8 & 0xffffffffffff) << 2;
      uVar12 = 0xf;
      puVar4 = PTR___swiftEmptyArrayStorage_000304e8;
LAB_0001bf54:
      uVar10 = uVar12 >> 0xe;
      uVar6 = uVar12;
      if (uVar10 != uVar9) {
        do {
          uVar3 = param_6;
          uStack_d4 = __sSSySJSS5IndexVcig(uVar6,param_5,param_6,param_7);
          uStack_cb = (undefined1)((ulonglong)uVar3 >> 8);
          uStack_d0 = (undefined4)extraout_x1;
          uStack_ca = (undefined2)((ulonglong)uVar3 >> 0x10);
          uStack_cc = (undefined1)uVar3;
          uVar5 = (*param_3)(&uStack_d4);
          if (unaff_w21 != 0) {
            FUN_000103d0(extraout_x1,uVar3);
            FUN_000103d0(param_6,param_7);
            _swift_bridgeObjectRelease(puVar4);
            return param_7;
          }
          FUN_000103d0(extraout_x1,uVar3);
          if ((uVar5 & 1) == 0) {
            uVar6 = __sSS5index5afterSS5IndexVAD_tF(uVar6,param_5,param_6,param_7);
          }
          else {
            if ((uVar12 >> 0xe != uVar10) || ((param_2 & 1) == 0)) goto LAB_0001c068;
            uVar6 = __sSS5index5afterSS5IndexVAD_tF(uVar6,param_5,param_6,param_7);
            uVar12 = uVar6;
          }
          uVar10 = uVar6 >> 0xe;
          if (uVar10 == uVar9) break;
        } while( true );
      }
      goto LAB_0001c174;
    }
  }
  uVar1 = uVar11;
  if (((uint)param_7 >> 8 & 0x20) != 0) {
    uVar1 = uVar2;
  }
  uVar8 = (ulonglong)((int)uVar1 >> 0x1f ^ uVar1);
  if ((((uint)param_7 >> 0xc & 1) == 0) ||
     ((((longlong)(int)uVar11 | (ulonglong)((uint)param_7 >> 0x10) << 0x30) >> 0x3b & 1) != 0)) {
    uVar7 = 7;
  }
  else {
    uVar7 = 0xb;
  }
  if ((uVar8 == -(ulonglong)(uVar1 >> 0x1f)) && ((param_2 & 1) != 0)) {
    FUN_000103d0(param_6,param_7);
    return PTR___swiftEmptyArrayStorage_000304e8;
  }
  __sSSySsSnySS5IndexVGcig
            (0xf,(uVar8 ^ -(ulonglong)(uVar1 >> 0x1f)) << 0x10 | uVar7,param_5,param_6,param_7);
  puVar4 = (undefined *)FUN_0001c62c(0,1,1,PTR___swiftEmptyArrayStorage_000304e8);
  uVar2 = *(uint *)(puVar4 + 8);
  if (*(uint *)(puVar4 + 0xc) >> 1 <= uVar2) {
    puVar4 = (undefined *)FUN_0001c62c(1 < *(uint *)(puVar4 + 0xc),uVar2 + 1,1,puVar4);
  }
  *(uint *)(puVar4 + 8) = uVar2 + 1;
  *(ulonglong *)(puVar4 + uVar2 * 0x20 + 0x18) = CONCAT44(uStack_bc,uStack_c0);
  *(undefined8 *)(puVar4 + uVar2 * 0x20 + 0x10) = uStack_c8;
  *(undefined8 *)(puVar4 + uVar2 * 0x20 + 0x24) = uStack_b4;
  *(ulonglong *)(puVar4 + uVar2 * 0x20 + 0x1c) = CONCAT44(uStack_b8,uStack_bc);
LAB_0001c188:
  FUN_000103d0(param_6,param_7);
  return puVar4;
LAB_0001c068:
  if (uVar10 < uVar12 >> 0xe) {
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(1,0x1c2a0);
    (*(code *)uVar3)();
  }
  __sSSySsSnySS5IndexVGcig(uVar12,uVar6,param_5,param_6,param_7);
  uVar12 = _swift_isUniquelyReferenced_nonNull_native(puVar4);
  if ((uVar12 & 1) == 0) {
    puVar4 = (undefined *)FUN_0001c62c(0,*(int *)(puVar4 + 8) + 1,1,puVar4);
  }
  uVar2 = *(uint *)(puVar4 + 8);
  if (*(uint *)(puVar4 + 0xc) >> 1 <= uVar2) {
    puVar4 = (undefined *)FUN_0001c62c(1 < *(uint *)(puVar4 + 0xc),uVar2 + 1,1,puVar4);
  }
  *(uint *)(puVar4 + 8) = uVar2 + 1;
  *(undefined8 *)(puVar4 + uVar2 * 0x20 + 0x24) = uStack_74;
  *(ulonglong *)(puVar4 + uVar2 * 0x20 + 0x1c) = CONCAT44(uStack_78,uStack_7c);
  *(ulonglong *)(puVar4 + uVar2 * 0x20 + 0x18) = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)(puVar4 + uVar2 * 0x20 + 0x10) = uStack_88;
  uVar12 = __sSS5index5afterSS5IndexVAD_tF(uVar6,param_5,param_6,param_7);
  if (*(int *)(puVar4 + 8) == param_1) goto LAB_0001c174;
  goto LAB_0001bf54;
LAB_0001c174:
  if ((uVar12 >> 0xe != uVar9) || ((param_2 & 1) == 0)) {
    if (uVar12 >> 0xe <= uVar9) {
      __sSSySsSnySS5IndexVGcig(uVar12,uVar8 << 0x10 | uVar7,param_5,param_6,param_7);
      FUN_000103d0(param_6,param_7);
      uVar8 = _swift_isUniquelyReferenced_nonNull_native(puVar4);
      if ((uVar8 & 1) == 0) {
        puVar4 = (undefined *)FUN_0001c62c(0,*(int *)(puVar4 + 8) + 1,1,puVar4);
      }
      uVar2 = *(uint *)(puVar4 + 8);
      if (*(uint *)(puVar4 + 0xc) >> 1 <= uVar2) {
        puVar4 = (undefined *)FUN_0001c62c(1 < *(uint *)(puVar4 + 0xc),uVar2 + 1,1,puVar4);
      }
      *(uint *)(puVar4 + 8) = uVar2 + 1;
      *(undefined8 *)(puVar4 + uVar2 * 0x20 + 0x24) = uStack_94;
      *(ulonglong *)(puVar4 + uVar2 * 0x20 + 0x1c) = CONCAT44(uStack_98,uStack_9c);
      *(ulonglong *)(puVar4 + uVar2 * 0x20 + 0x18) = CONCAT44(uStack_9c,uStack_a0);
      *(undefined8 *)(puVar4 + uVar2 * 0x20 + 0x10) = uStack_a8;
      return puVar4;
    }
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(1,0x1c25c);
    (*(code *)uVar3)();
  }
  goto LAB_0001c188;
}



/* Entry: 0001c2a0; end: 0001c2bb;  */

void FUN_0001c2a0(void)

{
  undefined4 uVar1;
  undefined4 *unaff_w20;
  
  uVar1 = FUN_0001c2bc();
  *unaff_w20 = uVar1;
  return;
}



/* Entry: 0001c2bc; end: 0001c3d7;  */

undefined * FUN_0001c2bc(ulonglong param_1,uint param_2,ulonglong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(uint *)(param_4 + 0xc) >> 1;
    if ((int)uVar7 < (int)param_2) {
      if ((int)(uVar7 + 0x40000000) < 0) {
                    /* WARNING: Does not return */
        uVar6 = SoftwareBreakpoint(1,0x1c3d8);
        (*(code *)uVar6)();
      }
      uVar7 = *(uint *)(param_4 + 0xc) & 0xfffffffe;
      if ((int)uVar7 <= (int)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar3 = *(uint *)(param_4 + 8);
  if ((int)uVar7 <= (int)uVar3) {
    uVar7 = uVar3;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_000304e8;
  if (uVar7 != 0) {
    uVar6 = FUN_00010468(0x35060,&UNK_00028938);
    puVar4 = (undefined *)_swift_allocObject(uVar6,uVar7 * 0xc + 0x10,3);
    iVar5 = _malloc_size();
    *(uint *)(puVar4 + 8) = uVar3;
    *(int *)(puVar4 + 0xc) = ((iVar5 + -0x10) / 0xc) * 2;
  }
  puVar1 = puVar4 + 0x10;
  puVar2 = param_4 + 0x10;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar3,PTR___sSSN_000303d0);
  }
  else {
    if (puVar4 != param_4 || puVar2 + uVar3 * 0xc <= puVar1) {
      _memmove(puVar1,puVar2,uVar3 * 0xc);
    }
    *(undefined4 *)(param_4 + 8) = 0;
  }
  _swift_release(param_4);
  return puVar4;
}



/* Entry: 0001c3d8; end: 0001c487;  */

uint FUN_0001c3d8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_1[2];
  uVar6 = param_2[2];
  auVar8 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar1,uVar3,uVar5);
  auVar9 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar2,uVar4,uVar6);
  if (auVar8 == auVar9) {
    uVar7 = 1;
  }
  else {
    uVar7 = __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar1,uVar3,uVar5,uVar2,uVar4,uVar6,0);
    uVar7 = uVar7 & 1;
  }
  return uVar7;
}



/* Entry: 0001c488; end: 0001c4a3;  */

uint FUN_0001c488(undefined8 param_1)

{
  uint uVar1;
  int unaff_w20;
  
  uVar1 = FUN_0001c3d8(param_1,*(undefined4 *)(unaff_w20 + 8));
  return uVar1 & 1;
}



/* Entry: 0001c4a4; end: 0001c4bf;  */

void FUN_0001c4a4(undefined8 param_1,undefined4 param_2,byte param_3)

{
  if (param_3 == 0xff) {
    return;
  }
  if (param_3 - 1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x000276e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_00030584)(param_2);
    return;
  }
  return;
}



/* Entry: 0001c4c0; end: 0001c4cf;  */

undefined1  [16] FUN_0001c4c0(void)

{
  return ZEXT816(0x309c8);
}



/* Entry: 0001c4d0; end: 0001c503;  */

undefined8 FUN_0001c4d0(undefined8 param_1)

{
  (**(code **)(*(int *)(PTR___sSS17UnicodeScalarViewV8IteratorVN_000303a4 + -4) + 4))();
  return param_1;
}



/* Entry: 0001c504; end: 0001c62b;  */

undefined1  [16] FUN_0001c504(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  iVar4 = __s10Foundation4UUIDVMa(0);
  iVar2 = *(int *)(iVar4 + -4);
  iVar1 = *(int *)(iVar2 + 0x20);
  lVar6 = __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                    (0xc,PTR___ss5UInt8VN_000304b0);
  iVar3 = (int)lVar6;
  *(undefined4 *)(iVar3 + 8) = 0xc;
  lVar8 = lVar6 + 0x10;
  *(undefined8 *)lVar8 = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  lVar7 = lVar8;
  iVar5 = _SecRandomCopyBytes(*(undefined4 *)PTR__kSecRandomDefault_000300c0,0xc,lVar8);
  if (iVar5 == 0) {
    auVar10 = FUN_0001c7c4(lVar8,*(undefined4 *)(iVar3 + 8));
    auVar9 = __s10Foundation4DataV19base64EncodedString7optionsSSSo27NSDataBase64EncodingOptionsV_tF
                       (0,auVar10._0_8_,auVar10._8_8_,lVar7);
    FUN_000146c0(auVar10._0_8_,auVar10._8_8_,lVar7);
  }
  else {
    __s10Foundation4UUIDVACycfC();
    auVar9 = __s10Foundation4UUIDV10uuidStringSSvg();
    (**(code **)(iVar2 + 4))(&stack0xffffffb0 + -(iVar1 + 0xfU & 0xfffffff0),iVar4);
  }
  _swift_bridgeObjectRelease(lVar6);
  return auVar9;
}



/* Entry: 0001c62c; end: 0001c733;  */

undefined * FUN_0001c62c(ulonglong param_1,uint param_2,ulonglong param_3,undefined *param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(uint *)(param_4 + 0xc) >> 1;
    if ((int)uVar6 < (int)param_2) {
      if ((int)(uVar6 + 0x40000000) < 0) {
                    /* WARNING: Does not return */
        uVar5 = SoftwareBreakpoint(1,0x1c734);
        (*(code *)uVar5)();
      }
      uVar6 = *(uint *)(param_4 + 0xc) & 0xfffffffe;
      if ((int)uVar6 <= (int)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar2 = *(uint *)(param_4 + 8);
  if ((int)uVar6 <= (int)uVar2) {
    uVar6 = uVar2;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_000304e8;
  if (uVar6 != 0) {
    uVar5 = FUN_00010468(0x35068,&UNK_00028958);
    puVar3 = (undefined *)_swift_allocObject(uVar5,uVar6 << 5 | 0x10,7);
    iVar4 = _malloc_size();
    iVar1 = iVar4 + 0xf;
    if (0xf < iVar4) {
      iVar1 = iVar4 + -0x10;
    }
    *(uint *)(puVar3 + 8) = uVar2;
    *(int *)(puVar3 + 0xc) = (iVar1 >> 5) << 1;
  }
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar3 + 0x10,param_4 + 0x10,uVar2,PTR___sSsN_0003040c);
  }
  else {
    if (puVar3 != param_4 || param_4 + 0x10 + uVar2 * 0x20 <= puVar3 + 0x10) {
      _memmove();
    }
    *(undefined4 *)(param_4 + 8) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 0001c734; end: 0001c7c3;  */

int FUN_0001c734(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_1c [12];
  
  iVar1 = *(int *)PTR____stack_chk_guard_0003013c;
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = param_2 - param_1;
  }
  if (uVar3 < 0x100) {
    if ((param_1 != 0) && (param_2 != param_1)) {
      _memcpy(auStack_1c,param_1);
    }
    if (*(int *)PTR____stack_chk_guard_0003013c == iVar1) {
      return 0;
    }
    auVar4 = ___stack_chk_fail(0);
    uVar3 = auVar4._8_4_;
    if (uVar3 == 0) {
      iVar1 = 0;
    }
    else if (uVar3 < 7) {
      iVar1 = FUN_0001c734(auVar4._0_8_,auVar4._0_4_ + uVar3);
    }
    else {
      iVar1 = __s10Foundation13__DataStorageCMa(0);
      _swift_allocObject(iVar1,*(undefined4 *)(iVar1 + 0x1c),*(undefined2 *)(iVar1 + 0x20));
      __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(auVar4._0_8_,auVar4._8_8_);
      if (uVar3 < 0x7fff) {
        iVar1 = uVar3 << 0x10;
      }
      else {
        uVar2 = __s10Foundation4DataV14RangeReferenceCMa(0);
        iVar1 = _swift_allocObject(uVar2,0x10,3);
        *(undefined4 *)(iVar1 + 8) = 0;
        *(uint *)(iVar1 + 0xc) = uVar3;
      }
    }
    return iVar1;
  }
                    /* WARNING: Does not return */
  uVar2 = SoftwareBreakpoint(1,0x1c7c0);
  (*(code *)uVar2)();
}



/* Entry: 0001c7c4; end: 0001c87b;  */

int FUN_0001c7c4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_2;
  if (uVar3 == 0) {
    iVar1 = 0;
  }
  else if (uVar3 < 7) {
    iVar1 = FUN_0001c734(param_1,(int)param_1 + uVar3);
  }
  else {
    iVar1 = __s10Foundation13__DataStorageCMa(0);
    _swift_allocObject(iVar1,*(undefined4 *)(iVar1 + 0x1c),*(undefined2 *)(iVar1 + 0x20));
    __s10Foundation13__DataStorageC5bytes6lengthACSVSg_Sitcfc(param_1,param_2);
    if (uVar3 < 0x7fff) {
      iVar1 = uVar3 << 0x10;
    }
    else {
      uVar2 = __s10Foundation4DataV14RangeReferenceCMa(0);
      iVar1 = _swift_allocObject(uVar2,0x10,3);
      *(undefined4 *)(iVar1 + 8) = 0;
      *(uint *)(iVar1 + 0xc) = uVar3;
    }
  }
  return iVar1;
}



/* Entry: 0001c87c; end: 0001c88b;  */

undefined1  [16] FUN_0001c87c(void)

{
  return ZEXT816(0x309d8);
}



/* Entry: 0001c88c; end: 0001c89f;  */

bool FUN_0001c88c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 0001c8a0; end: 0001c8a3;  */

void FUN_0001c8a0(void)

{
  if (iRam0003506c != 0) {
    return;
  }
  iRam0003506c = _swift_getWitnessTable(&UNK_00028960,&UNK_000309fc);
  return;
}



/* Entry: 0001c8a4; end: 0001c8e3;  */

void FUN_0001c8a4(void)

{
  if (iRam0003506c != 0) {
    return;
  }
  iRam0003506c = _swift_getWitnessTable(&UNK_00028960,&UNK_000309fc);
  return;
}



/* Entry: 0001c8e4; end: 0001c927;  */

void FUN_0001c8e4(void)

{
  undefined4 uVar1;
  undefined4 *unaff_w20;
  
  uVar1 = *unaff_w20;
  __ss6HasherV5_seedABSi_tcfC(0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0001c928; end: 0001c94f;  */

void FUN_0001c928(void)

{
  undefined4 *unaff_w20;
  
  __ss6HasherV8_combineyySuF(*unaff_w20);
  return;
}



/* Entry: 0001c950; end: 0001c98f;  */

void FUN_0001c950(void)

{
  undefined4 uVar1;
  undefined4 *unaff_w20;
  
  uVar1 = *unaff_w20;
  __ss6HasherV5_seedABSi_tcfC();
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0001c990; end: 0001c9ab;  */

void FUN_0001c990(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_w8;
  
  uVar2 = *param_1;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *in_w8 = uVar1;
  *(bool *)(in_w8 + 1) = 1 < uVar2;
  return;
}



/* Entry: 0001c9ac; end: 0001c9b7;  */

void FUN_0001c9ac(void)

{
  undefined4 *in_w8;
  undefined4 *unaff_w20;
  
  *in_w8 = *unaff_w20;
  return;
}



/* Entry: 0001c9b8; end: 0001c9c7;  */

undefined1  [16] FUN_0001c9b8(void)

{
  return ZEXT816(0x309fc);
}



/* Entry: 0001c9c8; end: 0001c9eb; +[_TtC26UnifiedNotificationDefines30MessagingNotificationMediaType video] */

void FUN_0001c9c8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45444956,0x4f,&UNK_0000e500);
                    /* WARNING: Could not recover jumptable at 0x000273e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_000300c8)();
  return;
}



/* Entry: 0001c9ec; end: 0001ca17;  */

void FUN_0001c9ec(void)

{
  uRam000353f4 = 0xb;
  pcRam000353f8 = "con";
  uRam000353fc = 0xd0008000;
  return;
}



/* Entry: 0001ca18; end: 0001ca63; +[_TtC26UnifiedNotificationDefines30MessagingNotificationMediaType silentSnap] */

void FUN_0001ca18(void)

{
  if (iRam00035070 != -1) {
    _swift_once(0x35070,FUN_0001c9ec);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uRam000353f4,uRam000353f8,uRam000353fc);
                    /* WARNING: Could not recover jumptable at 0x000273e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_000300c8)();
  return;
}



/* Entry: 0001ca64; end: 0001ca67; -[_TtC26UnifiedNotificationDefines30MessagingNotificationMediaType .cxx_destruct] */

void FUN_0001ca64(void)

{
  return;
}



/* Entry: 0001ca68; end: 0001ca93;  */

void FUN_0001ca68(void)

{
  uRam00035400 = 0xf;
  pcRam00035404 = "";
  uRam00035408 = 0xd0008000;
  return;
}



/* Entry: 0001ca94; end: 0001cadf; +[_TtC26UnifiedNotificationDefines30MessagingNotificationImageName audioSnap] */

void FUN_0001ca94(void)

{
  if (iRam00035074 != -1) {
    _swift_once(0x35074,FUN_0001ca68);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uRam00035400,uRam00035404,uRam00035408);
                    /* WARNING: Could not recover jumptable at 0x000273e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_000300c8)();
  return;
}



/* Entry: 0001cae0; end: 0001cb0b;  */

void FUN_0001cae0(void)

{
  uRam0003540c = 0x10;
  pcRam00035410 = "icon";
  uRam00035414 = 0xd0008000;
  return;
}



/* Entry: 0001cb0c; end: 0001cb57; +[_TtC26UnifiedNotificationDefines30MessagingNotificationImageName silentSnap] */

void FUN_0001cb0c(void)

{
  if (iRam00035078 != -1) {
    _swift_once(0x35078,FUN_0001cae0);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uRam0003540c,uRam00035410,uRam00035414);
                    /* WARNING: Could not recover jumptable at 0x000273e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_000300c8)();
  return;
}



/* Entry: 0001cb58; end: 0001cb83;  */

void FUN_0001cb58(void)

{
  uRam00035418 = 0x10;
  pcRam0003541c = "t_bell_icon";
  uRam00035420 = 0xd0008000;
  return;
}



/* Entry: 0001cb84; end: 0001cbcf; +[_TtC26UnifiedNotificationDefines30MessagingNotificationImageName chatBubble] */

void FUN_0001cb84(void)

{
  if (iRam0003507c != -1) {
    _swift_once(0x3507c,FUN_0001cb58);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uRam00035418,uRam0003541c,uRam00035420);
                    /* WARNING: Could not recover jumptable at 0x000273e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_000300c8)();
  return;
}



/* Entry: 0001cbd0; end: 0001cbfb;  */

void FUN_0001cbd0(void)

{
  uRam00035424 = 0x17;
  pcRam00035428 = "ategory";
  uRam0003542c = 0xd0008000;
  return;
}



/* Entry: 0001cbfc; end: 0001cc47; +[_TtC26UnifiedNotificationDefines30MessagingNotificationImageName priorityChatBell] */

void FUN_0001cbfc(void)

{
  if (iRam00035080 != -1) {
    _swift_once(0x35080,FUN_0001cbd0);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uRam00035424,uRam00035428,uRam0003542c);
                    /* WARNING: Could not recover jumptable at 0x000273e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_000300c8)();
  return;
}



/* Entry: 0001cc48; end: 0001cc4b;  */

void FUN_0001cc48(undefined4 param_1)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_24 = _swift_getObjectType();
  uStack_28 = param_1;
  _objc_msgSendSuper2(&uStack_28,PTR_DAT_0003464c);
  return;
}



/* Entry: 0001cc4c; end: 0001cc87;  */

void FUN_0001cc4c(undefined4 param_1)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_24 = _swift_getObjectType();
  uStack_28 = param_1;
  _objc_msgSendSuper2(&uStack_28,PTR_DAT_0003464c);
  return;
}



/* Entry: 0001cc88; end: 0001cc8b;  */

void FUN_0001cc88(void)

{
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  uStack_14 = _swift_getObjectType();
  _objc_msgSendSuper2(auStack_18,PTR_DAT_00034630);
  return;
}



/* Entry: 0001cc8c; end: 0001ccbf;  */

void FUN_0001cc8c(void)

{
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  uStack_14 = _swift_getObjectType();
  _objc_msgSendSuper2(auStack_18,PTR_DAT_00034630);
  return;
}



/* Entry: 0001ccc0; end: 0001ccdf;  */

void FUN_0001ccc0(void)

{
  _objc_opt_self(&DAT_000349ac);
  return;
}



/* Entry: 0001cce0; end: 0001cce3; -[_TtC26UnifiedNotificationDefines30MessagingNotificationImageName .cxx_destruct] */

void FUN_0001cce0(void)

{
  return;
}



/* Entry: 0001cce4; end: 0001cd03;  */

void FUN_0001cce4(void)

{
  _objc_opt_self(&DAT_00034a14);
  return;
}



/* Entry: 0001cd04; end: 0001cd07; -[_TtC26UnifiedNotificationDefines30MessagingNotificationMediaType init] */

void FUN_0001cd04(undefined4 param_1)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_24 = _swift_getObjectType();
  uStack_28 = param_1;
  _objc_msgSendSuper2(&uStack_28,PTR_DAT_0003464c);
  return;
}



/* Entry: 0001cd08; end: 0001cd0b; -[_TtC26UnifiedNotificationDefines30MessagingNotificationImageName init] */

void FUN_0001cd08(undefined4 param_1)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_24 = _swift_getObjectType();
  uStack_28 = param_1;
  _objc_msgSendSuper2(&uStack_28,PTR_DAT_0003464c);
  return;
}



/* Entry: 0001cd0c; end: 0001cd0f;  */

void FUN_0001cd0c(void)

{
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  uStack_14 = _swift_getObjectType();
  _objc_msgSendSuper2(auStack_18,PTR_DAT_00034630);
  return;
}



/* Entry: 0001cd10; end: 0001cd3b;  */

void FUN_0001cd10(void)

{
  uRam00035430 = 0x19;
  pcRam00035434 = "category";
  uRam00035438 = 0xd0008000;
  return;
}



/* Entry: 0001cd3c; end: 0001cd87; +[_TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants temporaryMutingCategory] */

void FUN_0001cd3c(void)

{
  if (iRam000350ac != -1) {
    _swift_once(0x350ac,FUN_0001cd10);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uRam00035430,uRam00035434,uRam00035438);
                    /* WARNING: Could not recover jumptable at 0x000273e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_000300c8)();
  return;
}



/* Entry: 0001cd88; end: 0001cdb3;  */

void FUN_0001cd88(void)

{
  uRam0003543c = 0x24;
  pcRam00035440 = "icon";
  uRam00035444 = 0xd0008000;
  return;
}



/* Entry: 0001cdb4; end: 0001cdf3;  */

undefined8 FUN_0001cdb4(void)

{
  if (iRam000350b0 != -1) {
    _swift_once(0x350b0,FUN_0001cd88);
  }
  return 0x3543c;
}



/* Entry: 0001cdf4; end: 0001ce3f; +[_TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants temporaryMutingTextReplyCategory] */

void FUN_0001cdf4(void)

{
  if (iRam000350b0 != -1) {
    _swift_once(0x350b0,FUN_0001cd88);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uRam0003543c,uRam00035440,uRam00035444);
                    /* WARNING: Could not recover jumptable at 0x000273e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_000300c8)();
  return;
}



/* Entry: 0001ce40; end: 0001ce7b; -[_TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants init] */

void FUN_0001ce40(undefined4 param_1)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_24 = _swift_getObjectType();
  uStack_28 = param_1;
  _objc_msgSendSuper2(&uStack_28,PTR_DAT_0003464c);
  return;
}



/* Entry: 0001ce7c; end: 0001ceaf;  */

void FUN_0001ce7c(void)

{
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  uStack_14 = _swift_getObjectType();
  _objc_msgSendSuper2(auStack_18,PTR_DAT_00034630);
  return;
}



/* Entry: 0001ceb0; end: 0001ceb3; -[_TtC26UnifiedNotificationDefines35NotificationCategoryStringConstants .cxx_destruct] */

void FUN_0001ceb0(void)

{
  return;
}



/* Entry: 0001ceb4; end: 0001ced3;  */

void FUN_0001ceb4(void)

{
  _objc_opt_self(&DAT_00034a7c);
  return;
}



/* Entry: 0001ced4; end: 0001cf37; -[SCNotificationCountPerSenderInfo senderUserId] */

void FUN_0001ced4(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined4 *)(param_1 + iRam000350c8);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  FUN_000103b4(uVar3,uVar4);
  uVar5 = __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar3,uVar4);
  FUN_000103d0(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x000273e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_000300c8)(uVar5);
  return;
}



/* Entry: 0001cf38; end: 0001cf47; -[SCNotificationCountPerSenderInfo count] */

undefined4 FUN_0001cf38(int param_1)

{
  return *(undefined4 *)(param_1 + iRam000350cc);
}



/* Entry: 0001cf48; end: 0001cfdb;  */

void FUN_0001cf48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int aiStack_58 [2];
  
  aiStack_58[0] = _objc_allocWithZone();
  puVar1 = (undefined4 *)(aiStack_58[0] + iRam000350c8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(char *)(puVar1 + 2) = (char)param_3;
  *(char *)((int)puVar1 + 9) = (char)((uint)param_3 >> 8);
  *(short *)((int)puVar1 + 10) = (short)((uint)param_3 >> 0x10);
  *(undefined4 *)(aiStack_58[0] + iRam000350cc) = param_4;
  _objc_msgSendSuper2(aiStack_58,PTR_DAT_0003464c);
  return;
}



/* Entry: 0001cfdc; end: 0001cffb;  */

void FUN_0001cfdc(void)

{
  _objc_opt_self(&DAT_00034ae4);
  return;
}



/* Entry: 0001cffc; end: 0001d073; -[SCNotificationCountPerSenderInfo initWithSenderUserId:count:] */

void FUN_0001cffc(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_w1;
  undefined4 uVar3;
  int iStack_28;
  undefined4 uStack_24;
  
  uVar3 = (undefined4)param_3;
  uVar2 = __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  puVar1 = (undefined4 *)(param_1 + iRam000350c8);
  *puVar1 = uVar2;
  puVar1[1] = extraout_w1;
  *(char *)(puVar1 + 2) = (char)uVar3;
  *(char *)((int)puVar1 + 9) = (char)((uint)uVar3 >> 8);
  *(short *)((int)puVar1 + 10) = (short)((uint)uVar3 >> 0x10);
  *(undefined4 *)(param_1 + iRam000350cc) = param_4;
  uStack_24 = FUN_0001cfdc();
  iStack_28 = param_1;
  _objc_msgSendSuper2(&iStack_28,PTR_DAT_0003464c);
  return;
}



/* Entry: 0001d074; end: 0001d327;  */

undefined8 FUN_0001d074(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint extraout_w1;
  uint extraout_w1_00;
  uint uVar9;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  ulonglong uVar10;
  uint uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (iRam0003511c == -1) {
    iVar6 = *(int *)(param_1 + 8);
    uVar1 = uRam000354d8;
    uVar2 = uRam000354dc;
    uVar3 = uRam000354e0;
  }
  else {
    _swift_once(0x3511c,FUN_0001ec50);
    iVar6 = *(int *)(param_1 + 8);
    uVar1 = uRam000354d8;
    uVar2 = uRam000354dc;
    uVar3 = uRam000354e0;
  }
  uRam000354d8 = uVar1;
  uRam000354dc = uVar2;
  uRam000354e0 = uVar3;
  if (iVar6 != 0) {
    _swift_bridgeObjectRetain(param_1);
    iVar6 = FUN_0001aa38(uVar1,uVar2,uVar3);
    if ((extraout_x1 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      FUN_000104b4((ulonglong)*(uint *)(param_1 + 0x20) + (longlong)iVar6 * 0x10,&uStack_70);
      _swift_bridgeObjectRelease(param_1);
      uVar10 = ZEXT48(PTR___sypN_000304dc);
      uVar7 = _swift_dynamicCast(&uStack_7c,&uStack_70,uVar10 + 4,PTR___sSSN_000303d0,6);
      uVar5 = uStack_74;
      uVar1 = uStack_78;
      uVar4 = uStack_7c;
      if ((uVar7 & 1) != 0) {
        if (*(int *)(param_1 + 8) == 0) {
LAB_0001d1c8:
          uStack_70 = 0;
          uStack_68 = 0;
        }
        else {
          _swift_bridgeObjectRetain(param_1);
          iVar6 = FUN_0001aa38(0x6e756f63,0x74,&UNK_0000e500);
          if ((extraout_x1_00 & 1) == 0) {
            _swift_bridgeObjectRelease(param_1);
            goto LAB_0001d1c8;
          }
          FUN_000104b4((ulonglong)*(uint *)(param_1 + 0x20) + (longlong)iVar6 * 0x10,&uStack_70);
          _swift_bridgeObjectRelease(param_1);
        }
        _swift_bridgeObjectRelease(param_1);
        if (uStack_68._4_4_ == 0) {
          FUN_000103d0(uVar1,uVar5);
          FUN_0001e54c(&uStack_70,0x34d10,&UNK_00028690);
        }
        else {
          uVar7 = _swift_dynamicCast(&uStack_7c,&uStack_70,uVar10 + 4,PTR___sSSN_000303d0,6);
          if ((uVar7 & 1) != 0) {
            uVar9 = uStack_7c;
            if ((uStack_74 & 0x2000) != 0) {
              uVar9 = uStack_74 >> 8 & 0xf;
            }
            if (uVar9 == 0) {
              FUN_000103d0(uVar1,uVar5);
              FUN_000103d0(uStack_78,(undefined1)uStack_74);
              goto LAB_0001d17c;
            }
            FUN_0001d5dc(uStack_7c,uStack_78,uStack_74);
            uVar9 = extraout_w1;
            if ((extraout_w1 & 0xff00) == 0x100) {
              FUN_0001d8a8(uStack_7c,uStack_78,uStack_74,10);
              uVar9 = extraout_w1_00;
            }
            FUN_000103d0(uStack_78,(undefined1)uStack_74);
            if ((uVar9 & 0xff) != 1) {
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,uVar1,uVar5);
              FUN_000103d0(uVar1,uVar5);
              uVar8 = func_0x00027800();
              _objc_release_x20();
              return uVar8;
            }
          }
          FUN_000103d0(uVar1,uVar5);
        }
        goto LAB_0001d17c;
      }
    }
  }
  _swift_bridgeObjectRelease(param_1);
LAB_0001d17c:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 0001d328; end: 0001d373; -[SCNotificationCountPerSenderInfo initWithDict:] */

undefined4 FUN_0001d328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___sSSN_000303d0,ZEXT48(PTR___sypN_000304dc) + 4,PTR___sSSSHsWP_000303d4);
  uVar1 = FUN_0001d074();
  return uVar1;
}



/* Entry: 0001d374; end: 0001d507;  */

undefined8 FUN_0001d374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 extraout_w1;
  undefined4 uVar11;
  int unaff_w20;
  undefined1 auStack_98 [72];
  
  uVar11 = (undefined4)((ulonglong)param_3 >> 0x10);
  uVar9 = FUN_00010468(0x34f18,&UNK_00028870);
  iVar7 = _swift_initStackObject(uVar9,auStack_98);
  *(undefined8 *)(iVar7 + 8) = 0x400000002;
  if (iRam0003511c != -1) {
    _swift_once(0x3511c,FUN_0001ec50);
  }
  uVar3 = uRam000354e2;
  uVar1 = uRam000354e1;
  uVar6 = uRam000354dc;
  *(undefined8 *)(iVar7 + 0x10) = CONCAT44(uRam000354dc,uRam000354d8);
  *(undefined1 *)(iVar7 + 0x18) = uRam000354e0;
  *(undefined1 *)(iVar7 + 0x19) = uVar1;
  *(undefined2 *)(iVar7 + 0x1a) = uVar3;
  puVar5 = PTR___sSSN_000303d0;
  puVar4 = (undefined8 *)(unaff_w20 + iRam000350c8);
  uVar1 = *(undefined1 *)((int)puVar4 + 9);
  uVar3 = *(undefined2 *)((int)puVar4 + 10);
  uVar8 = *(undefined4 *)((int)puVar4 + 4);
  uVar9 = *puVar4;
  uVar2 = *(undefined1 *)(puVar4 + 1);
  *(undefined **)(iVar7 + 0x28) = PTR___sSSN_000303d0;
  *(undefined8 *)(iVar7 + 0x1c) = uVar9;
  *(undefined1 *)(iVar7 + 0x24) = uVar2;
  *(undefined1 *)(iVar7 + 0x25) = uVar1;
  *(undefined2 *)(iVar7 + 0x26) = uVar3;
  *(undefined8 *)(iVar7 + 0x2c) = 0x746e756f63;
  *(undefined **)(iVar7 + 0x34) = &UNK_0000e500;
  FUN_000103b4(uVar6);
  FUN_000103b4(uVar8,uVar2);
  uVar8 = __ss23CustomStringConvertibleP11descriptionSSvgTj
                    (PTR___sSuN_00030410,PTR___sSus23CustomStringConvertiblesWP_00030414);
  *(undefined **)(iVar7 + 0x44) = puVar5;
  *(undefined4 *)(iVar7 + 0x38) = uVar8;
  *(undefined4 *)(iVar7 + 0x3c) = extraout_w1;
  *(char *)(iVar7 + 0x40) = (char)uVar11;
  *(char *)(iVar7 + 0x41) = (char)((uint)uVar11 >> 8);
  *(short *)(iVar7 + 0x42) = (short)((uint)uVar11 >> 0x10);
  uVar9 = FUN_0001ae68(iVar7);
  _swift_setDeallocating(iVar7);
  uVar10 = FUN_00010468(0x34f20,&UNK_00028580);
  _swift_arrayDestroy((undefined8 *)(iVar7 + 0x10),2,uVar10);
  return uVar9;
}



/* Entry: 0001d508; end: 0001d567; -[SCNotificationCountPerSenderInfo getDict] */

void FUN_0001d508(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = FUN_0001d374();
  _objc_release_x20();
  uVar2 = __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                    (uVar1,PTR___sSSN_000303d0,ZEXT48(PTR___sypN_000304dc) + 4,
                     PTR___sSSSHsWP_000303d4);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000273e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_000300c8)(uVar2);
  return;
}



/* Entry: 0001d568; end: 0001d593; -[SCNotificationCountPerSenderInfo init] */

void FUN_0001d568(void)

{
  undefined8 uVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("UnifiedNotificationDefines.NotificationCountPerSenderInfo",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  uVar1 = SoftwareBreakpoint(1,0x1d594);
  (*(code *)uVar1)();
}



/* Entry: 0001d594; end: 0001d5c3;  */

void FUN_0001d594(void)

{
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  uStack_14 = FUN_0001cfdc();
  _objc_msgSendSuper2(auStack_18,PTR_DAT_00034630);
  return;
}



/* Entry: 0001d5c4; end: 0001d5db; -[SCNotificationCountPerSenderInfo .cxx_destruct] */

void FUN_0001d5c4(int param_1)

{
  if (*(byte *)(param_1 + iRam000350c8 + 8) - 1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x000276e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_00030584)(*(undefined4 *)(param_1 + iRam000350c8 + 4))
    ;
    return;
  }
  return;
}



/* Entry: 0001d5dc; end: 0001d8a7;  */

uint FUN_0001d5dc(ulonglong param_1,int param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong extraout_x1;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uStack_50;
  ulonglong uStack_48;
  
  uVar6 = (uint)(param_3 >> 8) & 0xffffff;
  if ((uVar6 >> 4 & 1) != 0) {
    return 0;
  }
  if ((uVar6 >> 5 & 1) == 0) {
    if ((((longlong)(int)param_1 | (param_3 >> 0x10) << 0x30) >> 0x3c & 1) == 0) {
      pbVar3 = (byte *)__ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1);
      param_1 = 0;
    }
    else {
      pbVar3 = (byte *)(param_2 + 0x14);
    }
    iVar8 = (int)param_1;
    if (*pbVar3 == 0x2b) {
      if (iVar8 < 1) {
                    /* WARNING: Does not return */
        uVar2 = SoftwareBreakpoint(1,0x1d8a4);
        (*(code *)uVar2)();
      }
      iVar8 = iVar8 + -1;
      if (iVar8 != 0) {
        uVar4 = 0;
        uVar6 = 0;
        while( true ) {
          pbVar3 = pbVar3 + 1;
          if ((9 < *pbVar3 - 0x30) || (uVar7 = uVar6 * 10, (uVar4 * 10 & 0xffffffff00000000) != 0))
          break;
          uVar1 = *pbVar3 - 0x30 & 0xff;
          uVar6 = uVar7 + uVar1;
          uVar4 = (ulonglong)uVar6;
          if (CARRY4(uVar7,uVar1)) {
            return 0;
          }
          iVar8 = iVar8 + -1;
          if (iVar8 == 0) {
            return uVar6;
          }
        }
      }
    }
    else if (*pbVar3 == 0x2d) {
      if (iVar8 < 1) {
                    /* WARNING: Does not return */
        uVar2 = SoftwareBreakpoint(1,0x1d89c);
        (*(code *)uVar2)();
      }
      iVar8 = iVar8 + -1;
      if (iVar8 != 0) {
        uVar4 = 0;
        uVar6 = 0;
        while( true ) {
          pbVar3 = pbVar3 + 1;
          if ((9 < *pbVar3 - 0x30) || (uVar7 = uVar6 * 10, (uVar4 * 10 & 0xffffffff00000000) != 0))
          break;
          uVar1 = *pbVar3 - 0x30 & 0xff;
          uVar6 = uVar7 - uVar1;
          uVar4 = (ulonglong)uVar6;
          if (uVar7 < uVar1) {
            return 0;
          }
          iVar8 = iVar8 + -1;
          if (iVar8 == 0) {
            return uVar6;
          }
        }
      }
    }
    else if (iVar8 != 0) {
      if (pbVar3 == (byte *)0x0) {
        return 0;
      }
      uVar4 = 0;
      uVar6 = 0;
      while( true ) {
        if ((9 < *pbVar3 - 0x30) || (uVar7 = uVar6 * 10, (uVar4 * 10 & 0xffffffff00000000) != 0))
        break;
        uVar1 = *pbVar3 - 0x30 & 0xff;
        uVar6 = uVar7 + uVar1;
        uVar4 = (ulonglong)uVar6;
        if (CARRY4(uVar7,uVar1)) {
          return 0;
        }
        uVar7 = (int)param_1 - 1;
        param_1 = (ulonglong)uVar7;
        pbVar3 = pbVar3 + 1;
        if (uVar7 == 0) {
          return uVar6;
        }
      }
    }
  }
  else {
    uVar2 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1);
    __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(param_1,param_2,param_3);
    uVar4 = extraout_x1 >> 0x38 & 0xf;
    uStack_50 = uVar2;
    uStack_48 = extraout_x1 & 0xffffffffffffff;
    uVar6 = (uint)uVar2 & 0xff;
    iVar8 = (int)uVar4;
    if (uVar6 == 0x2b) {
      if (iVar8 == 0) {
                    /* WARNING: Does not return */
        uVar2 = SoftwareBreakpoint(1,0x1d8a8);
        (*(code *)uVar2)();
      }
      iVar8 = iVar8 + -1;
      if (iVar8 != 0) {
        uVar4 = 0;
        uVar6 = 0;
        pbVar3 = (byte *)((uint)&uStack_50 | 1);
        while( true ) {
          if ((9 < *pbVar3 - 0x30) || (uVar7 = uVar6 * 10, (uVar4 * 10 & 0xffffffff00000000) != 0))
          break;
          uVar1 = *pbVar3 - 0x30 & 0xff;
          uVar6 = uVar7 + uVar1;
          uVar4 = (ulonglong)uVar6;
          if (CARRY4(uVar7,uVar1)) {
            return 0;
          }
          iVar8 = iVar8 + -1;
          pbVar3 = pbVar3 + 1;
          if (iVar8 == 0) {
            return uVar6;
          }
        }
      }
    }
    else if (uVar6 == 0x2d) {
      if (iVar8 == 0) {
                    /* WARNING: Does not return */
        uVar2 = SoftwareBreakpoint(1,0x1d8a0);
        (*(code *)uVar2)();
      }
      iVar8 = iVar8 + -1;
      if (iVar8 != 0) {
        uVar4 = 0;
        uVar6 = 0;
        pbVar3 = (byte *)((uint)&uStack_50 | 1);
        while( true ) {
          if ((9 < *pbVar3 - 0x30) || (uVar7 = uVar6 * 10, (uVar4 * 10 & 0xffffffff00000000) != 0))
          break;
          uVar1 = *pbVar3 - 0x30 & 0xff;
          uVar6 = uVar7 - uVar1;
          uVar4 = (ulonglong)uVar6;
          if (uVar7 < uVar1) {
            return 0;
          }
          iVar8 = iVar8 + -1;
          pbVar3 = pbVar3 + 1;
          if (iVar8 == 0) {
            return uVar6;
          }
        }
      }
    }
    else if (iVar8 != 0) {
      uVar5 = 0;
      uVar6 = 0;
      pbVar3 = (byte *)&uStack_50;
      while( true ) {
        if ((9 < *pbVar3 - 0x30) || (uVar7 = uVar6 * 10, (uVar5 * 10 & 0xffffffff00000000) != 0))
        break;
        uVar1 = *pbVar3 - 0x30 & 0xff;
        uVar6 = uVar7 + uVar1;
        uVar5 = (ulonglong)uVar6;
        if (CARRY4(uVar7,uVar1)) {
          return 0;
        }
        uVar7 = (int)uVar4 - 1;
        uVar4 = (ulonglong)uVar7;
        pbVar3 = pbVar3 + 1;
        if (uVar7 == 0) {
          return uVar6;
        }
      }
    }
  }
  return 0;
}



/* Entry: 0001d8a8; end: 0001d94b;  */

undefined1  [16]
FUN_0001d8a8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 extraout_w1;
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  
  uStack_38 = (undefined4)param_2;
  puStack_34 = (undefined *)param_3;
  uStack_3c = param_1;
  FUN_000103b4(param_2,param_3);
  puVar1 = PTR___sSSs25LosslessStringConvertiblesWP_000303e0;
  uStack_3c = __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
                        (&uStack_3c,PTR___sSSN_000303d0,
                         PTR___sSSs25LosslessStringConvertiblesWP_000303e0,PTR___sSSSTsWP_000303d8);
  uStack_38 = extraout_w1;
  puStack_34 = puVar1;
  auVar2 = FUN_0001dbb8(&uStack_3c,param_4);
  FUN_000103d0(uStack_38,puStack_34._0_1_);
  return auVar2;
}



/* Entry: 0001d94c; end: 0001dbb7;  */

uint FUN_0001d94c(byte *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  if (*param_1 == 0x2b) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      uVar4 = SoftwareBreakpoint(1,0x1dbb8);
      (*(code *)uVar4)();
    }
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      return 0;
    }
    uVar6 = 0;
    uVar5 = 0;
    uVar1 = param_3 + 0x30;
    uVar2 = 0x61;
    if (10 < (int)param_3) {
      uVar2 = param_3 + 0x57;
    }
    uVar7 = 0x41;
    if (10 < (int)param_3) {
      uVar1 = 0x3a;
      uVar7 = param_3 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar9 = (uint)bVar3;
        if ((uVar9 < 0x41) || ((uVar7 & 0xff) <= uVar9)) {
          if (uVar9 < 0x61) {
            return 0;
          }
          if ((uVar2 & 0xff) <= uVar9) {
            return 0;
          }
          iVar10 = 0xa9;
        }
        else {
          iVar10 = 0xc9;
        }
      }
      else {
        iVar10 = 0xd0;
      }
      uVar9 = uVar5 * param_3;
      if ((uVar6 * param_3 & 0xffffffff00000000) != 0) {
        return 0;
      }
      uVar8 = (uint)bVar3 + iVar10 & 0xff;
      uVar5 = uVar9 + uVar8;
      uVar6 = (ulonglong)uVar5;
      if (CARRY4(uVar9,uVar8)) {
        return 0;
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  else {
    if (*param_1 != 0x2d) {
      if (param_2 == 0) {
        return 0;
      }
      uVar5 = param_3 + 0x30;
      uVar1 = 0x61;
      if (10 < (int)param_3) {
        uVar1 = param_3 + 0x57;
      }
      uVar2 = 0x41;
      if (10 < (int)param_3) {
        uVar5 = 0x3a;
        uVar2 = param_3 + 0x37;
      }
      if (param_1 == (byte *)0x0) {
        return 0;
      }
      uVar7 = 0;
      while( true ) {
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar5 & 0xff) <= (uint)bVar3)) {
          uVar9 = (uint)bVar3;
          if ((uVar9 < 0x41) || ((uVar2 & 0xff) <= uVar9)) {
            if (uVar9 < 0x61) {
              return 0;
            }
            if ((uVar1 & 0xff) <= uVar9) {
              return 0;
            }
            iVar10 = 0xa9;
          }
          else {
            iVar10 = 0xc9;
          }
        }
        else {
          iVar10 = 0xd0;
        }
        if (((ulonglong)uVar7 * (ulonglong)param_3 & 0xffffffff00000000) != 0) {
          return 0;
        }
        uVar9 = (uint)bVar3 + iVar10 & 0xff;
        uVar8 = (uint)((ulonglong)uVar7 * (ulonglong)param_3);
        uVar7 = uVar8 + uVar9;
        if (CARRY4(uVar8,uVar9)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + -1;
        if (param_2 == 0) {
          return uVar7;
        }
      }
      return 0;
    }
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      uVar4 = SoftwareBreakpoint(1,0x1dbb4);
      (*(code *)uVar4)();
    }
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      return 0;
    }
    uVar6 = 0;
    uVar5 = 0;
    uVar1 = param_3 + 0x30;
    uVar2 = 0x61;
    if (10 < (int)param_3) {
      uVar2 = param_3 + 0x57;
    }
    uVar7 = 0x41;
    if (10 < (int)param_3) {
      uVar1 = 0x3a;
      uVar7 = param_3 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar9 = (uint)bVar3;
        if ((uVar9 < 0x41) || ((uVar7 & 0xff) <= uVar9)) {
          if (uVar9 < 0x61) {
            return 0;
          }
          if ((uVar2 & 0xff) <= uVar9) {
            return 0;
          }
          iVar10 = 0xa9;
        }
        else {
          iVar10 = 0xc9;
        }
      }
      else {
        iVar10 = 0xd0;
      }
      uVar9 = uVar5 * param_3;
      if ((uVar6 * param_3 & 0xffffffff00000000) != 0) {
        return 0;
      }
      uVar8 = (uint)bVar3 + iVar10 & 0xff;
      uVar5 = uVar9 - uVar8;
      uVar6 = (ulonglong)uVar5;
      if (uVar9 < uVar8) {
        return 0;
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar5;
}



/* Entry: 0001dbb8; end: 0001dd0f;  */

void FUN_0001dbb8(uint *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulonglong extraout_x1;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x22;
  uint uVar10;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  uint uVar11;
  undefined8 unaff_x27;
  uint uVar12;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar14 [12];
  undefined8 uStack_70;
  ulonglong uStack_68;
  undefined8 uStack_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  ulonglong uVar13;
  
  puVar5 = &stack0x00000000 + -0x70;
  *(undefined8 *)(&stack0x00000000 + -0x60) = unaff_x28;
  *(undefined8 *)(&stack0x00000000 + -0x50) = unaff_x27;
  *(undefined8 *)(&stack0x00000000 + -0x48) = unaff_x26;
  *(undefined8 *)(&stack0x00000000 + -0x40) = unaff_x25;
  *(undefined8 *)(&stack0x00000000 + -0x38) = unaff_x24;
  *(undefined8 *)(&stack0x00000000 + -0x30) = unaff_x23;
  *(undefined8 *)(&stack0x00000000 + -0x28) = unaff_x22;
  *(undefined8 *)(&stack0x00000000 + -0x20) = unaff_x20;
  *(undefined8 *)(&stack0x00000000 + -0x18) = unaff_x19;
  *(undefined8 *)(&stack0x00000000 + -0x10) = unaff_x29;
  *(undefined8 *)(&stack0x00000000 + -8) = unaff_x30;
  uVar9 = (ulonglong)*param_1;
  uVar10 = param_1[1];
  bVar2 = (byte)param_1[2];
  uVar7 = (uint)bVar2;
  bVar3 = *(byte *)((int)param_1 + 9);
  uVar11 = (uint)bVar3;
  uVar4 = param_1[2];
  uVar13 = (ulonglong)*(ushort *)((int)param_1 + 10);
  uVar12 = (uint)*(ushort *)((int)param_1 + 10);
  uVar8 = (ulonglong)uVar4;
  if (((uVar4 >> 0xc & 1) == 0) && (((uVar4 >> 0xd & 1) == 0 || ((bVar3 & 0xf) < 9)))) {
    if ((bVar3 >> 5 & 1) != 0) {
LAB_0001dc80:
      uVar12 = uVar7 & 0xff | uVar11 << 8 | uVar12 << 0x10;
      uVar6 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar9,uVar10,uVar12);
      __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar9,uVar10,uVar12);
      uVar9 = extraout_x1 >> 0x38 & 0xf;
      *(undefined8 *)(&stack0x00000000 + -0x70) = uVar6;
      *(ulonglong *)(&stack0x00000000 + -0x68) = extraout_x1 & 0xffffffffffffff;
      goto LAB_0001dcc4;
    }
  }
  else {
    auVar14 = FUN_0001dd10(uVar9,uVar10);
    uVar9 = auVar14._0_8_;
    *(uint *)(&stack0x00000000 + -0x58) = (uint)(uVar8 >> 8) & 0xffffff;
    *(int *)(&stack0x00000000 + -0x54) = auVar14._8_4_;
    uVar7 = (uint)uVar8;
    uVar11 = uVar7 >> 8 & 0xff;
    uVar12 = uVar7 >> 0x10;
    uVar13 = (ulonglong)uVar12;
    FUN_000103d0(uVar10,bVar2);
    uVar1 = *(undefined4 *)(&stack0x00000000 + -0x58);
    uVar10 = *(uint *)(&stack0x00000000 + -0x54);
    *param_1 = auVar14._0_4_;
    param_1[1] = uVar10;
    *(char *)(param_1 + 2) = (char)uVar8;
    *(char *)((int)param_1 + 9) = (char)uVar1;
    *(short *)((int)param_1 + 10) = (short)(uVar8 >> 0x10);
    if ((uVar11 >> 5 & 1) != 0) goto LAB_0001dc80;
  }
  if ((((longlong)(int)uVar9 | uVar13 << 0x30) >> 0x3c & 1) == 0) {
    puVar5 = (undefined1 *)
             __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg
                       (uVar9,uVar10,uVar7 & 0xff | uVar11 << 8 | (int)uVar13 << 0x10);
    uVar9 = 0;
  }
  else {
    puVar5 = (undefined1 *)(uVar10 + 0x14);
  }
LAB_0001dcc4:
  FUN_0001d94c(puVar5,uVar9,param_2);
  return;
}



/* Entry: 0001dd10; end: 0001dd77;  */

undefined1  [16] FUN_0001dd10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_50 [32];
  
  FUN_0001dd78(0xf,param_1,param_2,param_3);
  auVar1 = FUN_0001de14(auStack_50);
  FUN_0001e518(auStack_50);
  return auVar1;
}



/* Entry: 0001dd78; end: 0001de13;  */

void FUN_0001dd78(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *in_w8;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  uVar1 = (uint)param_2;
  if ((param_4 >> 8 & 0x20) != 0) {
    uVar1 = (uint)param_4 >> 8 & 0xf;
  }
  uVar3 = (ulonglong)((int)uVar1 >> 0x1f ^ uVar1) ^ -(ulonglong)(uVar1 >> 0x1f);
  if (((((uint)(param_4 >> 8) & 0xffffff) >> 4 & 1) == 0) ||
     ((((longlong)(int)(uint)param_2 | param_4 << 0x20) >> 0x3b & 1) != 0)) {
    uVar4 = 7;
  }
  else {
    uVar4 = 0xb;
  }
  if (param_1 >> 0xe <= (uVar3 & 0xffffffffffff) << 2) {
    __sSSySsSnySS5IndexVGcig(param_1,uVar3 << 0x10 | uVar4,param_2,param_3);
    in_w8[1] = CONCAT44(uStack_34,uStack_38);
    *in_w8 = uStack_40;
    *(undefined8 *)((int)in_w8 + 0x14) = uStack_2c;
    *(ulonglong *)((int)in_w8 + 0xc) = CONCAT44(uStack_30,uStack_34);
    return;
  }
                    /* WARNING: Does not return */
  uVar2 = SoftwareBreakpoint(1,0x1de14);
  (*(code *)uVar2)();
}



/* Entry: 0001de14; end: 0001dfef;  */

ulonglong FUN_0001de14(undefined8 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong extraout_x1;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [12];
  undefined8 uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_70;
  undefined8 uStack_68;
  int iStack_60;
  int iStack_5c;
  undefined1 uStack_58;
  byte bStack_57;
  ushort uStack_56;
  
  uStack_70 = *param_1;
  iVar6 = *(int *)(param_1 + 2);
  iVar1 = *(int *)((int)param_1 + 0x14);
  puVar4 = param_1 + 3;
  uVar2 = *(undefined1 *)puVar4;
  bVar3 = *(byte *)((int)param_1 + 0x19);
  uStack_56 = *(ushort *)((int)param_1 + 0x1a);
  uVar9 = *(undefined4 *)puVar4;
  if ((bVar3 >> 4 & 1) != 0) {
    uStack_68 = param_1[1];
    iStack_60 = iVar6;
    iStack_5c = iVar1;
    uStack_58 = uVar2;
    bStack_57 = bVar3;
    uVar8 = FUN_0001dff0();
    puVar5 = PTR___swiftEmptyArrayStorage_000304e8;
    if ((int)uVar8 != 0) {
      puVar5 = (undefined *)FUN_0001e124(uVar8,0);
      FUN_000103b4(iVar1,uVar2);
      iVar6 = FUN_0001e194(&uStack_98,puVar5 + 0x10,uVar8);
      FUN_0001e54c(&uStack_98,0x350e8,&UNK_00028af0);
      if (iVar6 != (int)uVar8) {
                    /* WARNING: Does not return */
        uVar8 = SoftwareBreakpoint(1,0x1df94);
        (*(code *)uVar8)();
      }
    }
    uVar7 = __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ(puVar5 + 0x10,*(undefined4 *)(puVar5 + 8));
    _swift_release(puVar5);
    return uVar7;
  }
  iVar11 = (int)((ulonglong)param_1[1] >> 0x10);
  iVar10 = (int)(uStack_70 >> 0x10);
  if ((bVar3 >> 5 & 1) != 0) {
    uVar8 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(iVar6,iVar1,uVar9);
    __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(iVar6,iVar1);
    uStack_90 = extraout_x1 & 0xffffffffffffff;
    uStack_98 = uVar8;
    auVar12 = __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ((int)&uStack_98 + iVar10,iVar11 - iVar10);
    uStack_70 = CONCAT44(auVar12._8_4_,auVar12._0_4_);
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar9);
    if ((bVar3 & 0xf) < 9) {
      return auVar12._0_8_;
    }
    __sSS15reserveCapacityyySiF(0xb);
    return uStack_70 & 0xffffffff;
  }
  if ((((longlong)iVar6 | (ulonglong)uStack_56 << 0x30) >> 0x3c & 1) == 0) {
    uVar7 = __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(iVar6,iVar1,*(undefined4 *)puVar4);
    if ((int)uVar7 == 0) goto LAB_0001de68;
  }
  else {
    uVar7 = (ulonglong)(iVar1 + 0x14);
  }
  uVar7 = (ulonglong)(uint)((int)uVar7 + iVar10);
LAB_0001de68:
  uVar7 = __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ(uVar7,iVar11 - iVar10);
  return uVar7;
}



/* Entry: 0001dff0; end: 0001e123;  */

ulonglong FUN_0001dff0(void)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong *unaff_w20;
  
  uVar8 = *unaff_w20;
  uVar9 = unaff_w20[1];
  uVar1 = (uint)unaff_w20[2];
  uVar2 = *(undefined4 *)((int)unaff_w20 + 0x14);
  uVar13 = (ulonglong)(int)uVar1;
  puVar4 = unaff_w20 + 3;
  bVar3 = *(byte *)((int)unaff_w20 + 0x19);
  uVar6 = *puVar4;
  uVar5 = *puVar4;
  uVar10 = 8;
  if ((bVar3 & 0x10) != 0) {
    uVar10 = 4L << ((uVar13 | (ulonglong)*(ushort *)((int)unaff_w20 + 0x1a) << 0x30) >> 0x3b & 1);
  }
  if ((uVar8 & 0xc) == uVar10) {
    uVar8 = FUN_0001e464(uVar8,uVar13,uVar2,(int)*puVar4);
  }
  iVar12 = (int)(uVar8 >> 0x10);
  if ((uVar9 & 0xc) == uVar10) {
    uVar9 = FUN_0001e464(uVar9,uVar13,uVar2,(int)uVar5);
  }
  iVar11 = (int)(uVar9 >> 0x10);
  if ((bVar3 >> 4 & 1) == 0) {
    return (ulonglong)(uint)(iVar11 - iVar12);
  }
  if ((bVar3 >> 5 & 1) != 0) {
    uVar1 = bVar3 & 0xf;
  }
  if ((int)uVar1 < iVar12) {
                    /* WARNING: Does not return */
    uVar7 = SoftwareBreakpoint(1,0x1e120);
    (*(code *)uVar7)();
  }
  if (iVar11 <= (int)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x0002712c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*(code *)PTR___sSS8UTF8ViewV16_foreignDistance4from2toSiSS5IndexV_AGtF_000303c4)
                       (uVar8,uVar9,uVar13,uVar2,(int)uVar6);
    return uVar10;
  }
                    /* WARNING: Does not return */
  uVar7 = SoftwareBreakpoint(1,0x1e124);
  (*(code *)uVar7)();
}



/* Entry: 0001e124; end: 0001e193;  */

undefined * FUN_0001e124(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_000304e8;
  if (param_2 != 0) {
    uVar3 = FUN_00010468(0x350f0,&UNK_00028af8);
    puVar1 = (undefined *)_swift_allocObject(uVar3,param_2 + 0x10,3);
    iVar2 = _malloc_size();
    *(int *)(puVar1 + 8) = param_1;
    *(int *)(puVar1 + 0xc) = iVar2 * 2 + -0x20;
  }
  return puVar1;
}



/* Entry: 0001e194; end: 0001e463;  */

ulonglong FUN_0001e194(ulonglong *param_1,undefined1 *param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong extraout_x1;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong *unaff_w20;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 uStack_70;
  ulonglong uStack_68;
  
  uVar17 = *unaff_w20;
  if (param_2 != (undefined1 *)0x0) {
    uVar10 = param_3;
    if ((int)param_3 == 0) goto LAB_0001e420;
    if ((int)param_3 < 0) {
                    /* WARNING: Does not return */
      uVar7 = SoftwareBreakpoint(1,0x1e460);
      (*(code *)uVar7)();
    }
    uVar19 = unaff_w20[1] >> 0xe;
    uVar13 = uVar17 >> 0xe;
    if (uVar13 != uVar19) {
      iVar4 = *(int *)((int)unaff_w20 + 0x14);
      uVar15 = (ulonglong)(int)(uint)unaff_w20[2];
      uVar14 = uVar15 | (ulonglong)*(ushort *)((int)unaff_w20 + 0x1a) << 0x30;
      bVar5 = *(byte *)((int)unaff_w20 + 0x19);
      uVar6 = (undefined4)unaff_w20[3];
      uVar2 = 8;
      if ((bVar5 & 0x10) != 0) {
        uVar2 = 4L << (uVar14 >> 0x3b & 1);
      }
      uVar1 = (uint)unaff_w20[2];
      if ((bVar5 & 0x20) != 0) {
        uVar1 = bVar5 & 0xf;
      }
      uVar16 = 1;
      uVar18 = param_3;
      while( true ) {
        uVar10 = uVar17;
        if ((uVar17 & 0xc) == uVar2) {
          uVar10 = FUN_0001e464(uVar17,uVar15,iVar4,uVar6);
        }
        if ((uVar10 >> 0xe < uVar13) || (uVar19 <= uVar10 >> 0xe)) {
                    /* WARNING: Does not return */
          uVar7 = SoftwareBreakpoint(1,0x1e45c);
          (*(code *)uVar7)();
        }
        if ((bVar5 >> 4 & 1) == 0) {
          iVar11 = (int)(uVar10 >> 0x10);
          if ((bVar5 >> 5 & 1) == 0) {
            iVar9 = iVar4 + 0x14;
            if ((uVar14 >> 0x3c & 1) == 0) {
              iVar9 = __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(uVar15,iVar4,uVar6);
            }
            uVar8 = *(undefined1 *)(iVar11 + iVar9);
          }
          else {
            uVar7 = __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar15,iVar4,uVar6);
            __ss13_StringObjectV7rawBitss6UInt64V_AEtvg(uVar15,iVar4,uVar6);
            uStack_70 = uVar7;
            uStack_68 = extraout_x1 & 0xffffffffffffff;
            uVar18 = param_3 & 0xffffffff;
            uVar8 = *(undefined1 *)((int)&uStack_70 + iVar11);
          }
        }
        else {
          uVar8 = __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF
                            (uVar10,uVar15,iVar4,uVar6);
        }
        if ((uVar17 & 0xc) == uVar2) {
          uVar17 = FUN_0001e464(uVar17,uVar15,iVar4,uVar6);
        }
        uVar12 = (uint)(uVar17 >> 0x10);
        if ((bVar5 >> 4 & 1) == 0) {
          uVar3 = -((uint)(uVar17 >> 0x2f) & 1) ^ uVar12 ^ (int)uVar12 >> 0x1f;
          uVar12 = -uVar3 - 2;
          if (-1 < (int)(uVar3 + 1)) {
            uVar12 = uVar3 + 1;
          }
          uVar17 = ((ulonglong)uVar12 ^ -(ulonglong)(uVar3 + 1 >> 0x1f)) << 0x10 | 4;
        }
        else {
          if ((int)uVar1 <= (int)uVar12) {
                    /* WARNING: Does not return */
            uVar7 = SoftwareBreakpoint(1,0x1e464);
            (*(code *)uVar7)();
          }
          uVar17 = __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar17,uVar15,iVar4,uVar6);
        }
        *param_2 = uVar8;
        uVar10 = uVar18;
        if (((int)uVar18 == (int)uVar16) || (uVar10 = uVar16, uVar19 == uVar17 >> 0xe)) break;
        uVar16 = (ulonglong)((int)uVar16 + 1);
        param_2 = param_2 + 1;
      }
      goto LAB_0001e420;
    }
  }
  uVar10 = 0;
LAB_0001e420:
  uVar13 = *unaff_w20;
  param_1[1] = unaff_w20[1];
  *param_1 = uVar13;
  uVar7 = *(undefined8 *)((int)unaff_w20 + 0xc);
  *(undefined8 *)((int)param_1 + 0x14) = *(undefined8 *)((int)unaff_w20 + 0x14);
  *(undefined8 *)((int)param_1 + 0xc) = uVar7;
  param_1[4] = uVar17;
  return uVar10;
}



/* Entry: 0001e464; end: 0001e517;  */

ulonglong FUN_0001e464(ulonglong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((((uint)param_4 >> 0xc & 1) == 0) ||
     (((ulonglong)((longlong)(int)param_2 | param_4 << 0x20) >> 0x3b & 1) != 0)) {
    uVar3 = __sSS9UTF16ViewV5index_8offsetBySS5IndexVAF_SitF(0xf,param_1 >> 0x10,param_2,param_3);
    uVar2 = (uint)param_1 >> 0xe & 3;
    uVar1 = uVar2 + (int)(uVar3 >> 0x10);
    uVar4 = ((ulonglong)((int)uVar1 >> 0x1f ^ uVar1) ^ -(ulonglong)(uVar1 >> 0x1f)) << 0x10;
    if (uVar2 == 0) {
      uVar4 = uVar3 & 0xfffffffffffffffc | param_1 & 3;
    }
    uVar4 = uVar4 | 4;
  }
  else {
    uVar3 = __sSS8UTF8ViewV13_foreignIndex_8offsetBySS0D0VAF_SitF(0xf,param_1 >> 0x10);
    uVar2 = (uint)param_1 >> 0xe & 3;
    uVar1 = uVar2 + (int)(uVar3 >> 0x10);
    uVar4 = ((ulonglong)((int)uVar1 >> 0x1f ^ uVar1) ^ -(ulonglong)(uVar1 >> 0x1f)) << 0x10;
    if (uVar2 == 0) {
      uVar4 = uVar3 & 0xfffffffffffffffc | param_1 & 3;
    }
    uVar4 = uVar4 | 8;
  }
  return uVar4;
}



/* Entry: 0001e518; end: 0001e54b;  */

undefined8 FUN_0001e518(undefined8 param_1)

{
  (**(code **)(*(int *)(PTR___sSsN_0003040c + -4) + 4))();
  return param_1;
}



/* Entry: 0001e54c; end: 0001e58b;  */

undefined8 FUN_0001e54c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00010468(param_2,param_3);
  (**(code **)(*(int *)(iVar1 + -4) + 4))(param_1,iVar1);
  return param_1;
}



/* Entry: 0001e58c; end: 0001e5b7;  */

void FUN_0001e58c(void)

{
  uRam00035448 = 0xe;
  pcRam0003544c = "tempt";
  uRam00035450 = 0xd0008000;
  return;
}



/* Entry: 0001e5b8; end: 0001e603; +[_TtC26UnifiedNotificationDefines28NotificationClientPayloadKey groupedSenders] */

void FUN_0001e5b8(void)

{
  if (iRam000350f4 != -1) {
    _swift_once(0x350f4,FUN_0001e58c);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uRam00035448,uRam0003544c,uRam00035450);
                    /* WARNING: Could not recover jumptable at 0x000273e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_000300c8)();
  return;
}


