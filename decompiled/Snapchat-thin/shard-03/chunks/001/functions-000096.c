/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1024f7b94; end: 1024f7e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f7b94(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  long lVar15;
  long extraout_x8;
  undefined8 *puVar16;
  long lVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar10 = 0;
  func_0x000107c5eec8();
  lVar15 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar18 = &stack0xffffffffffffff40 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = _DAT_112ea2458;
  lVar19 = *(long *)(param_2 + 0x10);
  if (lVar19 != 0) {
    param_2 = param_2 + ((ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff));
    lVar20 = *(long *)(lVar15 + 0x48);
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    pcVar21 = *(code **)(lVar15 + 0x10);
    do {
      (*pcVar21)(puVar18,param_2,lVar10);
      puVar14 = auStack_78;
      func_0x000107c61428(param_3 + lVar9,puVar14,0x20,0);
      lVar17 = *(long *)(param_3 + lVar9);
      if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1024f7c60:
        func_0x000107c614a8(auStack_78);
        (**(code **)(lVar15 + 8))(puVar18,lVar10);
      }
      else {
        func_0x000107c61434(lVar17);
        puVar11 = puVar18;
        func_0x0001000c8928();
        if (((ulong)puVar14 & 1) == 0) {
          func_0x000107c6142c(lVar17);
          goto LAB_1024f7c60;
        }
        puVar16 = (undefined8 *)(*(long *)(lVar17 + 0x38) + (long)puVar11 * 0x30);
        uVar2 = *puVar16;
        uVar6 = puVar16[1];
        uVar3 = puVar16[2];
        uVar7 = puVar16[3];
        uVar4 = puVar16[4];
        uVar8 = puVar16[5];
        func_0x000107c61580(uVar8,2);
        func_0x000107c61434(uVar6);
        func_0x000107c61434(uVar7);
        func_0x000107c614a8(auStack_78);
        func_0x000107c6142c(lVar17);
        FUN_1024fa608(uVar2,uVar6,uVar3,uVar7,uVar4,uVar8);
        (**(code **)(lVar15 + 8))(puVar18,lVar10);
        puVar12 = &UNK_110518c90;
        func_0x000107c613fc(&UNK_110518c90,0x20,7);
        *(undefined8 *)(puVar12 + 0x10) = uVar4;
        *(undefined8 *)(puVar12 + 0x18) = uVar8;
        puVar13 = puStack_80;
        func_0x000107c61558();
        if (((ulong)puVar13 & 1) == 0) {
          plVar1 = (long *)(puStack_80 + 0x10);
          puStack_80 = (undefined *)0x0;
          FUN_1024f9ad0(0,*plVar1 + 1,1);
        }
        uVar5 = *(ulong *)(puStack_80 + 0x10);
        if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar5) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puStack_80 + 0x18));
          FUN_1024f9ad0(puVar13,uVar5 + 1,1,puStack_80);
          puStack_80 = puVar13;
        }
        *(ulong *)(puStack_80 + 0x10) = uVar5 + 1;
        *(undefined8 *)(puStack_80 + uVar5 * 0x10 + 0x20) = 0x1024fa644;
        *(undefined **)(puStack_80 + uVar5 * 0x10 + 0x28) = puVar12;
        *param_1 = puStack_80;
      }
      param_2 = param_2 + lVar20;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  return;
}



/* Entry: 1024f7e20; end: 1024f7eeb; -[_TtC42SCImpalaSpotlightReplyNotificationServices45NotificationCenterSpotlightReplyActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Possible PIC construction at 0x0001024f7eb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024f7ebc) */

void FUN_1024f7e20(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar1 = param_2;
  }
  uVar2 = 0;
  if (param_4 != 0) {
    func_0x000107c5faec(param_4);
    uVar2 = param_2;
  }
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  func_0x000107c61174(param_1);
  FUN_1024fa04c(param_3,uVar1,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1024f7eec; end: 1024f7fab;  */

long FUN_1024f7eec(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1024f7fac; end: 1024f8033;  */

undefined8 * FUN_1024f7fac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  uVar2 = param_1[5];
  uVar1 = param_2[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 1024f8034; end: 1024f808f;  */

undefined8 * FUN_1024f8034(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c6142c(param_1[3]);
  uVar1 = param_2[5];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  uVar2 = param_1[5];
  param_1[5] = uVar1;
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 1024f8090; end: 1024f8133;  */

int FUN_1024f8090(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1024f8134; end: 1024f845f;  */

void FUN_1024f8134(ulong param_1,undefined1 *param_2,long param_3,ulong param_4,undefined1 *param_5,
                  undefined8 param_6)

{
  undefined1 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = 0;
  uStack_b0 = param_5;
  func_0x000107c5eec8();
  lVar13 = *(long *)(lVar4 + -8);
  lVar16 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar11 = auStack_78;
  func_0x000107c61428(param_3 + 0x10,puVar11,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (((param_1 & 1) != 0) && (param_2 != (undefined1 *)0x0)) {
      puVar18 = (undefined1 *)((ulong)param_2 & 0xffffffffffffff8);
      lStack_e8 = lVar16;
      uStack_e0 = param_6;
      puStack_d8 = auStack_f0 + -(lVar16 + 0xfU & 0xfffffffffffffff0);
      lStack_d0 = lVar13;
      lStack_c8 = lVar4;
      lStack_c0 = param_3;
      if ((ulong)param_2 >> 0x3e == 0) {
        puVar17 = *(undefined1 **)(puVar18 + 0x10);
      }
      else {
        puVar17 = param_2;
        if (-1 < (long)param_2) {
          puVar17 = puVar18;
        }
        func_0x000107c60480();
      }
      if (puVar17 != (undefined1 *)0x0) {
        uVar14 = 0;
        uStack_b8 = (ulong)param_2 & 0xc000000000000001;
        do {
          if (uStack_b8 == 0) {
            if (*(ulong *)(puVar18 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1024f8448);
              (*pcVar3)();
            }
            uVar5 = *(ulong *)(param_2 + uVar14 * 8 + 0x20);
            func_0x000107c61174();
            puVar12 = puVar11;
          }
          else {
            uVar5 = uVar14;
            puVar12 = param_2;
            FUN_1024f8844();
          }
          puVar1 = (undefined1 *)(uVar14 + 1);
          if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1024f8444);
            (*pcVar3)();
          }
          uVar15 = uVar5;
          func_0x000107c501e4();
          func_0x000107c61180();
          puVar11 = puVar12;
          if (uVar15 != 0) {
            uVar6 = uVar15;
            func_0x000107c5faec();
            func_0x000107c61170(uVar15);
            if ((uVar6 == param_4) && (puVar12 == uStack_b0)) {
              func_0x000107c6142c(puVar12);
            }
            else {
              puVar11 = puVar12;
              func_0x000107c605b8(uVar6,puVar12,param_4,uStack_b0,0);
              func_0x000107c6142c(puVar12);
              if ((uVar6 & 1) == 0) goto LAB_1024f8224;
            }
            uVar14 = uVar5;
            func_0x000107c501ac();
            lVar13 = lStack_c8;
            lVar4 = lStack_d0;
            if (uVar14 - 3 < 2) {
              uStack_b0 = (undefined1 *)CONCAT44(uStack_b0._4_4_,1);
            }
            else {
              if (uVar14 != 6) {
                func_0x000107c61170(uVar5);
                break;
              }
              uStack_b0 = (undefined1 *)((ulong)uStack_b0._4_4_ << 0x20);
            }
            pcVar7 = "lookUpCurrentApprovalState(spotlightSnapId:replyId:token:)";
            func_0x0001000c10c0("lookUpCurrentApprovalState(spotlightSnapId:replyId:token:)");
            func_0x000107c61180();
            puVar8 = &UNK_110518c18;
            func_0x000107c613fc(&UNK_110518c18,0x18,7);
            lVar2 = lStack_c0;
            func_0x000107c61614(puVar8 + 0x10,lStack_c0);
            puVar11 = puStack_d8;
            (**(code **)(lVar4 + 0x10))(puStack_d8,uStack_e0,lVar13);
            uVar14 = (ulong)*(byte *)(lVar4 + 0x50);
            uVar15 = uVar14 + 0x18 & (uVar14 ^ 0xffffffffffffffff);
            lVar16 = uVar15 + lStack_e8;
            puVar9 = &UNK_110518da8;
            func_0x000107c613fc(&UNK_110518da8,lVar16 + 1,uVar14 | 7);
            *(undefined **)(puVar9 + 0x10) = puVar8;
            (**(code **)(lVar4 + 0x20))(puVar9 + uVar15,puVar11,lVar13);
            puVar9[lVar16] = (char)uStack_b0;
            uStack_88 = 0x1024fac9c;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            puStack_98 = &UNK_1000f6b44;
            puStack_90 = &UNK_110518dc0;
            ppuVar10 = &puStack_a8;
            puStack_80 = puVar9;
            func_0x000107c60bc4(ppuVar10);
            func_0x000107c61574(puStack_80);
            func_0x000107c4e524(pcVar7);
            func_0x000107c61170(uVar5);
            func_0x000107c61170(lVar2);
            func_0x000107c60bd0(ppuVar10);
            func_0x000107c615e8(pcVar7);
            return;
          }
LAB_1024f8224:
          func_0x000107c61170(uVar5);
          uVar14 = uVar14 + 1;
        } while (puVar1 != puVar17);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1024f8460; end: 1024f8563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f8460(long param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte abStack_90 [16];
  long lStack_80;
  undefined8 uStack_78;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ea2450);
    lStack_80 = param_1;
    uStack_78 = param_2;
    func_0x000107c6157c(uVar2);
    uVar1 = 0x112ea24b0;
    func_0x0001000285a8(0x112ea24b0,&UNK_10dab48d0);
    func_0x000100087bd4(&pcStack_68,0x1024facd4,abStack_90,uVar1);
    func_0x000107c61574(uVar2);
    if (pcStack_68 == (code *)0x0) {
      func_0x000107c61170(param_1);
    }
    else {
      abStack_90[0] = param_3 & 1;
      func_0x000107c6157c(uStack_60);
      (*pcStack_68)(abStack_90);
      func_0x000107c61170(param_1);
      FUN_1024facec(pcStack_68,uStack_60);
      FUN_1024facec(pcStack_68,uStack_60);
    }
  }
  return;
}



/* Entry: 1024f8564; end: 1024f8693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f8564(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auStack_78 [24];
  
  lVar11 = _DAT_112ea2458;
  puVar8 = auStack_78;
  func_0x000107c61428(param_2 + _DAT_112ea2458,puVar8,0x20,0);
  lVar11 = *(long *)(param_2 + lVar11);
  if (*(long *)(lVar11 + 0x10) != 0) {
    func_0x000107c61434(lVar11);
    func_0x0001000c8928();
    if (((ulong)puVar8 & 1) != 0) {
      puVar9 = (undefined8 *)(*(long *)(lVar11 + 0x38) + param_3 * 0x30);
      uVar1 = *puVar9;
      uVar4 = puVar9[1];
      uVar2 = puVar9[2];
      uVar5 = puVar9[3];
      uVar3 = puVar9[4];
      uVar6 = puVar9[5];
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar5);
      func_0x000107c61580(uVar6,2);
      func_0x000107c614a8(auStack_78);
      func_0x000107c6142c(lVar11);
      FUN_1024fa608(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
      puVar7 = &UNK_110518df8;
      func_0x000107c613fc(&UNK_110518df8,0x20,7);
      *(undefined8 *)(puVar7 + 0x10) = uVar3;
      *(undefined8 *)(puVar7 + 0x18) = uVar6;
      pcVar10 = FUN_1024fad74;
      goto LAB_1024f866c;
    }
    func_0x000107c6142c(lVar11);
  }
  func_0x000107c614a8(auStack_78);
  pcVar10 = (code *)0x0;
  puVar7 = (undefined *)0x0;
LAB_1024f866c:
  *param_1 = pcVar10;
  param_1[1] = puVar7;
  return;
}



/* Entry: 1024f8694; end: 1024f86fb;  */

void FUN_1024f8694(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 != 0) {
    uVar3 = 0;
    FUN_1024fac58(0);
    func_0x000107c5fc54(param_3,uVar3);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1024f86fc; end: 1024f8843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f86fc(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_78 [24];
  
  lVar1 = _DAT_112ea2458;
  puVar4 = auStack_78;
  func_0x000107c61428(param_1 + _DAT_112ea2458,puVar4,0x21,0);
  uVar8 = *(undefined8 *)(param_1 + lVar1);
  func_0x000107c61434(uVar8);
  func_0x0001000c8928();
  func_0x000107c6142c(uVar8);
  uVar8 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar6 = 0;
  if (((ulong)puVar4 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + lVar1);
    func_0x000107c61558();
    lVar9 = *(long *)(param_1 + lVar1);
    if ((uVar2 & 1) == 0) {
      func_0x0001024f8b90();
    }
    lVar7 = *(long *)(lVar9 + 0x30);
    lVar3 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar3 + -8) + 8))
              (lVar7 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * param_2,lVar3);
    puVar5 = (undefined8 *)(*(long *)(lVar9 + 0x38) + param_2 * 0x30);
    uVar8 = *puVar5;
    uVar10 = puVar5[1];
    uVar11 = puVar5[2];
    uVar12 = puVar5[3];
    uVar13 = puVar5[4];
    uVar6 = puVar5[5];
    func_0x0001024f91a0(param_2,lVar9);
    *(long *)(param_1 + lVar1) = lVar9;
  }
  func_0x000107c614a8(auStack_78);
  FUN_1024fa608(uVar8,uVar10,uVar11,uVar12,uVar13,uVar6);
  return;
}



/* Entry: 1024f8844; end: 1024f89f7;  */

ulong FUN_1024f8844(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024f8928);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024f892c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c0e98;
    func_0x000107c61168(PTR_PTR_1126c0e98);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126c0e98;
    func_0x000107c61168(PTR_PTR_1126c0e98);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1024fac58(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024f89f8);
  (*pcVar2)();
}



/* Entry: 1024f89f8; end: 1024f93eb;  */

/* WARNING: Possible PIC construction at 0x0001024f8b00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024f8b04) */

void FUN_1024f89f8(undefined8 *param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar2 = 0;
  uVar5 = param_2;
  func_0x000107c5eec8();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  func_0x0001000c8928();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar10 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024f8b2c);
    (*pcVar1)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar10) {
    param_3 = param_3 & 1;
    func_0x0001024f8df4(lVar10);
    uVar3 = param_2;
    func_0x0001000c8928();
    if (((uint)uVar5 & 1) != (param_3 & 1)) {
      func_0x000107c60624(lVar2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024f8ac4);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x0001024f8b90();
    lVar10 = *unaff_x20;
    goto joined_r0x0001024f8b40;
  }
  lVar10 = *unaff_x20;
joined_r0x0001024f8b40:
  if ((uVar5 & 1) != 0) {
    puVar7 = (undefined8 *)(*(long *)(lVar10 + 0x38) + uVar3 * 0x30);
    uVar11 = puVar7[3];
    uVar4 = puVar7[5];
    uVar13 = *param_1;
    uVar15 = param_1[3];
    uVar14 = param_1[2];
    puVar7[1] = param_1[1];
    *puVar7 = uVar13;
    puVar7[3] = uVar15;
    puVar7[2] = uVar14;
    uVar13 = param_1[4];
    puVar7[5] = param_1[5];
    puVar7[4] = uVar13;
    func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar11);
    return;
  }
  (**(code **)(lVar12 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,lVar2);
  FUN_1024fb64c(uVar3,&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,
                lVar10);
  return;
}



/* Entry: 1024f93ec; end: 1024f9637;  */

void FUN_1024f93ec(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined1 *puVar8;
  long extraout_x8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long unaff_x21;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  ulong uStack_f0;
  ulong *puStack_e8;
  ulong uStack_e0;
  undefined1 *puStack_d8;
  long lStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar7 = 0;
  uStack_108 = param_2;
  lStack_100 = param_1;
  pcStack_c8 = param_4;
  func_0x000107c5eec8();
  lStack_d0 = *(long *)(lVar7 + -8);
  lStack_a0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d0 + 0x40));
  puVar9 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_e8 = (ulong *)(param_3 + 0x40);
  uVar11 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar11 & 0x3f));
  }
  uStack_f0 = uVar11 + 0x3f >> 6;
  lStack_f8 = 0;
  uVar12 = uVar12 & *puStack_e8;
  lVar7 = 0;
  puStack_d8 = puVar9;
  lStack_c0 = param_3;
  do {
    lVar3 = lStack_c0;
    lVar2 = lStack_d0;
    if (uVar12 == 0) {
      do {
        lVar13 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1024f9638);
          (*pcVar5)();
        }
        if ((long)uStack_f0 <= lVar13) {
          FUN_1024f9638(lStack_100,uStack_108,lStack_f8,lStack_c0);
          return;
        }
        uVar12 = puStack_e8[lVar13];
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar11 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uStack_b8 = uVar12 - 1 & uVar12;
    }
    else {
      uVar11 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uStack_b8 = uVar12 - 1 & uVar12;
      lVar13 = lVar7;
    }
    uVar12 = LZCOUNT(uVar11) | lVar13 << 6;
    (**(code **)(lStack_d0 + 0x10))
              (puVar9,*(long *)(lStack_c0 + 0x30) + *(long *)(lStack_d0 + 0x48) * uVar12,lStack_a0);
    puVar10 = (undefined8 *)(*(long *)(lVar3 + 0x38) + uVar12 * 0x30);
    uStack_98 = *puVar10;
    uVar1 = puVar10[1];
    uStack_88 = puVar10[2];
    uVar14 = puVar10[5];
    uStack_a8 = puVar10[4];
    uStack_b0 = puVar10[3];
    uStack_e0 = uVar12;
    uStack_90 = uVar1;
    uStack_80 = uStack_b0;
    uStack_78 = uStack_a8;
    uStack_70 = uVar14;
    func_0x000107c61434(uVar1);
    uVar4 = uStack_b0;
    func_0x000107c61434(uStack_b0);
    func_0x000107c6157c(uVar14);
    puVar8 = puVar9;
    (*pcStack_c8)(puVar9,&uStack_98);
    func_0x000107c61574(uVar14);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uVar1);
    (**(code **)(lVar2 + 8))(puVar9,lStack_a0);
    if (unaff_x21 != 0) {
      return;
    }
    uVar12 = uStack_b8;
    lVar7 = lVar13;
    if (((ulong)puVar8 & 1) != 0) {
      uVar11 = uStack_e0 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lStack_100 + uVar11) = *(ulong *)(lStack_100 + uVar11) | 1L << (uStack_e0 & 0x3f);
      bVar6 = SCARRY8(lStack_f8,1);
      lStack_f8 = lStack_f8 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1024f9600);
        (*pcVar5)();
      }
    }
  } while( true );
}



/* Entry: 1024f9638; end: 1024f9937;  */

undefined * FUN_1024f9638(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  ulong *puStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  puStack_b0 = param_1;
  func_0x000107c5eec8();
  lVar15 = *(long *)(lVar5 + -8);
  lStack_78 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puStack_80 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      func_0x000107c6157c(param_4);
      puVar6 = param_4;
    }
    else {
      func_0x0001000285a8(0x112ea24a0,&UNK_10dab48c0);
      puVar6 = param_3;
      func_0x000107c60498();
      if (param_2 < 1) {
        uVar9 = 0;
      }
      else {
        uVar9 = *puStack_b0;
      }
      lVar5 = 0;
      lStack_c8 = param_2;
      puStack_c0 = param_4;
      lStack_b8 = lVar15;
      do {
        lVar2 = lStack_78;
        if (uVar9 == 0) {
          do {
            lVar14 = lVar5 + 1;
            if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1024f9930);
              (*pcVar3)();
            }
            if (lStack_c8 <= lVar14) {
              return puVar6;
            }
            uVar9 = puStack_b0[lVar14];
            lVar5 = lVar5 + 1;
          } while (uVar9 == 0);
          uVar8 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uStack_a8 = uVar9 - 1 & uVar9;
        }
        else {
          uVar8 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uStack_a8 = uVar9 - 1 & uVar9;
          lVar14 = lVar5;
        }
        uVar9 = LZCOUNT(uVar8) | lVar14 << 6;
        lStack_88 = *(long *)(lVar15 + 0x48);
        puVar11 = (undefined8 *)(*(long *)(puStack_c0 + 0x38) + uVar9 * 0x30);
        puVar7 = puStack_80;
        (**(code **)(lVar15 + 0x10))
                  (puStack_80,*(long *)(puStack_c0 + 0x30) + lStack_88 * uVar9,lStack_78);
        uStack_90 = *puVar11;
        uVar1 = puVar11[1];
        uStack_a0 = puVar11[2];
        uStack_68 = puVar11[4];
        uStack_70 = puVar11[3];
        uVar12 = puVar11[5];
        uVar13 = *(ulong *)(puVar6 + 0x28);
        func_0x00010085581c();
        uStack_98 = uVar1;
        func_0x000107c61434(uVar1);
        func_0x000107c61434(uStack_70);
        func_0x000107c6157c(uVar12);
        func_0x000107c5fa4c(uVar13,lVar2,puVar7);
        lVar15 = lStack_b8;
        uVar10 = -1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
        uVar13 = uVar13 & (uVar10 ^ 0xffffffffffffffff);
        uVar8 = uVar13 >> 6;
        uVar9 = -1L << (uVar13 & 0x3f) &
                (*(ulong *)(puVar6 + uVar8 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar4 = false;
          uVar9 = 0x3f - uVar10 >> 6;
          do {
            uVar13 = uVar8 + 1;
            if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1024f9934);
              (*pcVar3)();
            }
            uVar8 = 0;
            if (uVar13 != uVar9) {
              uVar8 = uVar13;
            }
            bVar4 = (bool)(uVar13 == uVar9 | bVar4);
          } while (*(ulong *)(puVar6 + uVar8 * 8 + 0x40) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(puVar6 + uVar8 * 8 + 0x40);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 << 6;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
        }
        uVar8 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar6 + uVar8 + 0x40) = 1L << (uVar9 & 0x3f) | *(ulong *)(puVar6 + uVar8 + 0x40)
        ;
        (**(code **)(lStack_b8 + 0x20))
                  (*(long *)(puVar6 + 0x30) + uVar9 * lStack_88,puStack_80,lStack_78);
        puVar11 = (undefined8 *)(*(long *)(puVar6 + 0x38) + uVar9 * 0x30);
        *puVar11 = uStack_90;
        puVar11[1] = uStack_98;
        puVar11[2] = uStack_a0;
        puVar11[4] = uStack_68;
        puVar11[3] = uStack_70;
        puVar11[5] = uVar12;
        *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
        bVar4 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1024f9938);
          (*pcVar3)();
        }
        uVar9 = uStack_a8;
        lVar5 = lVar14;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar6;
}



/* Entry: 1024f9938; end: 1024f9953;  */

void FUN_1024f9938(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1024f9954();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1024f9954; end: 1024f9acf;  */

undefined * FUN_1024f9954(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1024f9ad0);
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
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112d6cc20;
    func_0x0001000285a8(0x112d6cc20,&UNK_10d92f820);
    lVar5 = 0;
    func_0x000107c5eec8();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1024f9ac8);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1024f9acc);
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
  func_0x000107c5eec8();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar4;
}



/* Entry: 1024f9ad0; end: 1024f9bff;  */

undefined * FUN_1024f9ad0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024f9c00);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112d9de80;
    func_0x0001000285a8(0x112d9de80,&UNK_10d93eac8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d3a690;
    func_0x0001000285a8(0x112d3a690,&UNK_10d93eac0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1024f9c00; end: 1024f9ccb;  */

void FUN_1024f9c00(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024f9ccc);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      func_0x000107c60ee4(param_2,param_3 << 3);
    }
    func_0x000107c6157c(param_4);
    FUN_1024f93ec(param_2,param_3,param_4,param_5,param_6);
    func_0x000107c61574(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      func_0x000107c61574(param_4);
    }
    else {
      *param_7 = unaff_x21;
      func_0x000107c61574(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024f9cc8);
  (*pcVar1)();
}



/* Entry: 1024f9ccc; end: 1024fa04b;  */

/* WARNING: Possible PIC construction at 0x0001024f9df0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024f9e1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024f9df4) */
/* WARNING: Removing unreachable block (ram,0x0001024f9e20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f9ccc(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &UNK_110518ee8;
  func_0x000107c613fc(&UNK_110518ee8,0x18,7);
  *(long *)(puVar2 + 0x10) = param_6;
  uVar1 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    func_0x000107c60bc4(param_6);
  }
  else {
    lVar4 = *(long *)(param_5 + _DAT_112ea2428);
    func_0x000107c60bc4(param_6);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c5fadc(param_3,param_4);
      func_0x000107c5fadc(param_1,param_2);
      puVar3 = &UNK_110518f10;
      func_0x000107c613fc(&UNK_110518f10,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = 0x1024fadb4;
      *(undefined **)(puVar3 + 0x18) = puVar2;
      uStack_60 = 0x1024fadb8;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f3aa0;
      puStack_68 = &UNK_110518f28;
      puStack_58 = puVar3;
      func_0x000107c60bc4(&puStack_80);
      puVar3 = puStack_58;
      func_0x000107c6157c(puVar2);
      puVar2 = puVar3;
      goto code_r0x000107c61574;
    }
  }
  (**(code **)(param_6 + 0x10))(param_6,0);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1024fa04c; end: 1024fa5a7;  */

/* WARNING: Possible PIC construction at 0x0001024fa0e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024fa1ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024fa2b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024fa39c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024fa498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024fa578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024fa3d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024fa2c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024fa1bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024fa3a0) */
/* WARNING: Removing unreachable block (ram,0x0001024fa2bc) */
/* WARNING: Removing unreachable block (ram,0x0001024fa1b0) */
/* WARNING: Removing unreachable block (ram,0x0001024fa0e4) */
/* WARNING: Removing unreachable block (ram,0x0001024fa0e8) */
/* WARNING: Removing unreachable block (ram,0x0001024fa0ec) */
/* WARNING: Removing unreachable block (ram,0x0001024fa49c) */
/* WARNING: Removing unreachable block (ram,0x0001024fa574) */
/* WARNING: Removing unreachable block (ram,0x0001024fa4b0) */
/* WARNING: Removing unreachable block (ram,0x0001024fa5a0) */
/* WARNING: Removing unreachable block (ram,0x0001024fa5a4) */
/* WARNING: Removing unreachable block (ram,0x0001024fa3d0) */
/* WARNING: Removing unreachable block (ram,0x0001024fa59c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fa04c(undefined **param_1,undefined ***param_2,undefined ***param_3)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 auStack_d0 [16];
  undefined **ppuStack_90;
  undefined ***pppuStack_88;
  undefined **ppuStack_80;
  undefined ***pppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  ppuVar8 = &PTR____CFConstantStringClassReference_110f41118;
  ppuVar1 = ppuVar8;
  pppuVar5 = param_2;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f41118);
  func_0x000107c5faec();
  pppuVar3 = pppuVar5;
  func_0x000107c61170(ppuVar1);
  if (param_2 != (undefined ***)0x0) {
    if (param_1 == ppuVar8 && param_2 == pppuVar5) {
      func_0x000107c6142c(pppuVar5);
      if (param_3 == (undefined ***)0x0) {
        return;
      }
      ppuVar8 = &PTR____CFConstantStringClassReference_110f412b8;
      ppuVar1 = ppuVar8;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f412b8);
      func_0x000107c5faec();
      func_0x000107c61170(ppuVar1);
      ppuStack_90 = ppuVar8;
      pppuStack_88 = pppuVar3;
      func_0x000107c61434(pppuVar3);
      puVar6 = PTR___sSSN_11034da80;
      func_0x000107c602d4(auStack_d0,&ppuStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      pppuVar5 = param_3;
      if (param_3[2] == (undefined **)0x0) {
        pppuStack_78 = (undefined ***)0x0;
        ppuStack_80 = (undefined **)0x0;
        lStack_68 = 0;
        uStack_70 = 0;
        func_0x000107c6142c(pppuVar3);
        func_0x0001007bbff0(auStack_d0);
        puVar6 = PTR___sypN_11034f1a8;
        if (lStack_68 == 0) {
          pppuVar3 = (undefined ***)0x112d387f8;
          FUN_1024fad14(&ppuStack_80,0x112d387f8,&UNK_10d902650);
        }
        else {
          pppuVar3 = &ppuStack_80;
          func_0x000107c6147c(&ppuStack_90,pppuVar3,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6)
          ;
        }
        ppuVar8 = &PTR____CFConstantStringClassReference_110f41298;
        ppuVar1 = ppuVar8;
        func_0x000107c61174(&PTR____CFConstantStringClassReference_110f41298);
        func_0x000107c5faec();
        func_0x000107c61170(ppuVar1);
        ppuStack_80 = ppuVar8;
        pppuStack_78 = pppuVar3;
        func_0x000107c61434(pppuVar3);
        puVar7 = PTR___sSSN_11034da80;
        func_0x000107c602d4(auStack_d0,&ppuStack_80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
        if (param_3[2] == (undefined **)0x0) {
          pppuStack_78 = (undefined ***)0x0;
          ppuStack_80 = (undefined **)0x0;
          lStack_68 = 0;
          uStack_70 = 0;
          func_0x000107c6142c(pppuVar3);
          func_0x0001007bbff0(auStack_d0);
          if (lStack_68 == 0) {
            pppuVar3 = (undefined ***)0x112d387f8;
            FUN_1024fad14(&ppuStack_80,0x112d387f8,&UNK_10d902650);
          }
          else {
            pppuVar3 = &ppuStack_80;
            func_0x000107c6147c(&ppuStack_90,pppuVar3,puVar6 + 8,PTR___sSSN_11034da80,6);
          }
          ppuVar8 = &PTR____CFConstantStringClassReference_110f412d8;
          ppuVar1 = ppuVar8;
          func_0x000107c61174(&PTR____CFConstantStringClassReference_110f412d8);
          func_0x000107c5faec();
          func_0x000107c61170(ppuVar1);
          ppuStack_80 = ppuVar8;
          pppuStack_78 = pppuVar3;
          func_0x000107c61434(pppuVar3);
          puVar7 = PTR___sSSN_11034da80;
          func_0x000107c602d4(auStack_d0,&ppuStack_80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
          ;
          if (param_3[2] == (undefined **)0x0) {
            pppuStack_78 = (undefined ***)0x0;
            ppuStack_80 = (undefined **)0x0;
            lStack_68 = 0;
            uStack_70 = 0;
            func_0x000107c6142c(pppuVar3);
            func_0x0001007bbff0(auStack_d0);
            if (lStack_68 == 0) {
              FUN_1024fad14(&ppuStack_80,0x112d387f8,&UNK_10d902650);
              pppuVar5 = (undefined ***)0x0;
            }
            else {
              pppuVar3 = &ppuStack_90;
              func_0x000107c6147c(pppuVar3,&ppuStack_80,puVar6 + 8,PTR___sSSN_11034da80,6);
              pppuVar5 = pppuStack_88;
              if ((int)pppuVar3 == 0) {
                pppuVar5 = (undefined ***)0x0;
              }
            }
            uVar4 = 0x112ea2488;
            func_0x0001000285a8(0x112ea2488,&UNK_10dab48a8);
            func_0x000100087bd4(&ppuStack_80,FUN_1024fa5a8,auStack_d0,uVar4);
          }
          else {
            func_0x000107c61434(param_3);
            puVar2 = auStack_d0;
            func_0x000100df95d0(puVar2);
            if (((ulong)puVar7 & 1) != 0) {
              func_0x0001000bb420(param_3[7] + (long)puVar2 * 4,&ppuStack_80);
              pppuVar5 = pppuVar3;
            }
          }
        }
        else {
          func_0x000107c61434(param_3);
          puVar2 = auStack_d0;
          func_0x000100df95d0(puVar2);
          if (((ulong)puVar7 & 1) != 0) {
            func_0x0001000bb420(param_3[7] + (long)puVar2 * 4,&ppuStack_80);
            pppuVar5 = pppuVar3;
          }
        }
      }
      else {
        func_0x000107c61434(param_3);
        puVar2 = auStack_d0;
        func_0x000100df95d0(puVar2);
        if (((ulong)puVar6 & 1) != 0) {
          func_0x0001000bb420(param_3[7] + (long)puVar2 * 4,&ppuStack_80);
          pppuVar5 = pppuVar3;
        }
      }
    }
    else {
      func_0x000107c605b8(param_1,param_2,ppuVar8,pppuVar5,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pppuVar5);
  return;
}



/* Entry: 1024fa5a8; end: 1024fa5c7;  */

void FUN_1024fa5a8(void)

{
  long unaff_x20;
  
  FUN_1024f7490(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 1024fa5c8; end: 1024fa5ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fa5c8(void)

{
  code *pcVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  byte abStack_90 [16];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  bVar2 = *(byte *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(lVar3 + _DAT_112ea2450);
    uStack_80 = uVar4;
    lStack_78 = lVar3;
    func_0x000107c6157c(uVar5);
    uVar4 = 0x112ea2490;
    func_0x0001000285a8(0x112ea2490,&UNK_10dab48b0);
    func_0x000100087bd4(&lStack_70,FUN_1024fa5f0,abStack_90,uVar4);
    func_0x000107c61574(uVar5);
    lVar6 = *(long *)(lStack_70 + 0x10);
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)(lStack_70 + 0x28);
      do {
        pcVar1 = (code *)puVar7[-1];
        uVar4 = *puVar7;
        abStack_90[0] = bVar2 & 1;
        func_0x000107c6157c(uVar4);
        (*pcVar1)(abStack_90);
        func_0x000107c61574(uVar4);
        puVar7 = puVar7 + 2;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    func_0x000107c61170(lVar3);
    func_0x000107c6142c(lStack_70);
  }
  return;
}



/* Entry: 1024fa5f0; end: 1024fa607;  */

void FUN_1024fa5f0(void)

{
  long unaff_x20;
  
  FUN_1024f7b94(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1024fa608; end: 1024fa667;  */

void FUN_1024fa608(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_2 != 0) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_6);
    return;
  }
  return;
}



/* Entry: 1024fa668; end: 1024fa673;  */

long FUN_1024fa668(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  if (lVar5 == 0) {
    if (lVar1 == 0) {
      return 0;
    }
    lVar2 = param_2[2];
    lVar3 = param_2[3];
    lVar4 = *(long *)(unaff_x20 + 0x20);
    lVar5 = lVar1;
    if (lVar2 == *(long *)(unaff_x20 + 0x20) && lVar1 == lVar3) {
      return 1;
    }
  }
  else {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    if (lVar2 == lVar4 && lVar5 == lVar3) {
      return 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(lVar2,lVar3,lVar4,lVar5,0);
  return lVar2;
}



/* Entry: 1024fa674; end: 1024fa8b3;  */

void FUN_1024fa674(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_120;
  long lStack_108;
  undefined1 auStack_d0 [16];
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
  ulong uStack_58;
  
  lVar3 = 0;
  uStack_120 = param_2;
  func_0x000107c5eec8();
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  uVar5 = (long)&uStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_108 = 0;
  uVar10 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uStack_58 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uStack_58 = ~(-1L << (uVar10 & 0x3f));
  }
  uStack_58 = uStack_58 & *(ulong *)(param_3 + 0x40);
  lVar8 = 0;
  do {
    if (uStack_58 == 0) {
      do {
        lVar11 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1024fa8b4);
          (*pcVar1)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar11) {
          FUN_1024f9638(param_1,uStack_120,lStack_108,param_3);
          return;
        }
        uStack_58 = ((ulong *)(param_3 + 0x40))[lVar11];
        lVar8 = lVar8 + 1;
      } while (uStack_58 == 0);
      uVar6 = (uStack_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_58 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uStack_58 = uStack_58 - 1 & uStack_58;
    }
    else {
      uVar6 = (uStack_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_58 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uStack_58 = uStack_58 - 1 & uStack_58;
      lVar11 = lVar8;
    }
    uVar7 = LZCOUNT(uVar6);
    uVar6 = uVar7 | lVar11 << 6;
    (**(code **)(lVar4 + 0x10))
              (uVar5,*(long *)(param_3 + 0x30) + *(long *)(lVar4 + 0x48) * uVar6,lVar3);
    puVar9 = (undefined8 *)(*(long *)(param_3 + 0x38) + uVar6 * 0x30);
    uStack_a8 = puVar9[3];
    uStack_b0 = puVar9[2];
    uVar12 = puVar9[5];
    uStack_a0 = puVar9[4];
    uStack_b8 = puVar9[1];
    uStack_c0 = *puVar9;
    uStack_98 = uVar12;
    uStack_90 = uStack_c0;
    uStack_88 = uStack_b8;
    uStack_80 = uStack_b0;
    uStack_78 = uStack_a8;
    func_0x000100402194(&uStack_90,auStack_d0);
    func_0x000100402194(&uStack_80,auStack_d0);
    func_0x000107c6157c(uVar12);
    uVar6 = uVar5;
    (*param_4)(uVar5,&uStack_c0);
    func_0x000100bcb1dc(&uStack_90);
    func_0x000100bcb1dc(&uStack_80);
    func_0x000107c61574(uVar12);
    (**(code **)(lVar4 + 8))(uVar5,lVar3);
    lVar8 = lVar11;
    if ((uVar6 & 1) != 0) {
      uVar6 = (uVar7 & 0xffffffffffffffc0 | lVar11 << 6) >> 3;
      *(ulong *)(param_1 + uVar6) = *(ulong *)(param_1 + uVar6) | 1L << (uVar7 & 0x3f);
      bVar2 = SCARRY8(lStack_108,1);
      lStack_108 = lStack_108 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024fa874);
        (*pcVar1)();
      }
    }
  } while( true );
}



/* Entry: 1024fa8b4; end: 1024faad7;  */

undefined1 * FUN_1024fa8b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *unaff_x21;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  undefined1 *apuStack_90 [2];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined1 *)((1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6);
  uVar7 = (long)puVar6 * 8;
  uStack_70 = param_2;
  uStack_68 = param_3;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    func_0x000107c6157c(param_1);
  }
  else {
    iVar2 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c6157c(param_1);
    if ((iVar2 == 0) || (uVar4 = uVar7, func_0x000107c61594(uVar7,8), (uVar4 & 1) == 0)) {
      func_0x000107c6158c(uVar7,0xffffffffffffffff);
      func_0x000107c6157c(param_1);
      FUN_1024f9c00(apuStack_90,uVar7,puVar6,param_1,FUN_1024fab3c,auStack_80,&puStack_98);
      puVar3 = apuStack_90[0];
      if (unaff_x21 != (undefined1 *)0x0) {
        puVar3 = puStack_98;
      }
      puVar6 = (undefined1 *)0xffffffffffffffff;
      func_0x000107c61590(uVar7,0xffffffffffffffff,0xffffffffffffffff);
      puVar1 = puVar3;
      goto joined_r0x0001024faa8c;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar3 = auStack_a0 + -(uVar7 + 0xf & 0x3ffffffffffffff0);
  func_0x000107c60ee4(puVar3,uVar7);
  FUN_1024fa674(puVar3,puVar6,param_1,param_2,param_3);
  puVar1 = unaff_x21;
joined_r0x0001024faa8c:
  if (unaff_x21 == (undefined1 *)0x0) {
    func_0x000107c61574(param_1);
  }
  else {
    iVar2 = 2;
    puVar6 = (undefined1 *)0x12;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      puVar6 = (undefined1 *)0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_98,puVar6,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(param_1);
    puVar3 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    lVar5 = 0x112ea2498;
    func_0x0001000285a8(0x112ea2498,&UNK_10dab48b8);
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(puVar6,param_1,lVar5);
    return puVar6;
  }
  return puVar3;
}



/* Entry: 1024faad8; end: 1024fab27;  */

undefined8 FUN_1024faad8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ea2498;
  func_0x0001000285a8(0x112ea2498,&UNK_10dab48b8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1024fab28; end: 1024fab3b;  */

void FUN_1024fab28(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 1024fab3c; end: 1024fab83;  */

uint FUN_1024fab3c(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  (**(code **)(unaff_x20 + 0x10))(param_1,&uStack_50);
  return (uint)param_1 & 1;
}



/* Entry: 1024fab84; end: 1024fab9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fab84(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ea2448;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + _DAT_112ea2448) != 0) {
      uVar4 = *(undefined8 *)(lVar2 + _DAT_112ea2438);
      func_0x000107c61174(uVar4);
      uVar3 = uVar4;
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(uVar3);
      *(undefined8 *)(lVar2 + lVar1) = 0;
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1024faba0; end: 1024fac03;  */

void FUN_1024faba0(void)

{
  long unaff_x20;
  
  FUN_1024f6e68(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1024fac04; end: 1024fac57;  */

void FUN_1024fac04(ulong param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  long lVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  long lStack_e0;
  undefined1 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar12 = 0;
  func_0x000107c5eec8();
  uVar16 = (ulong)*(byte *)(*(long *)(lVar12 + -8) + 0x50);
  lVar12 = *(long *)(unaff_x20 + 0x10);
  uVar15 = *(ulong *)(unaff_x20 + 0x18);
  uStack_b0 = *(undefined1 **)(unaff_x20 + 0x20);
  lVar2 = unaff_x20 + (uVar16 + 0x28 & (uVar16 ^ 0xffffffffffffffff));
  lVar4 = 0;
  func_0x000107c5eec8();
  lVar17 = *(long *)(lVar4 + -8);
  lVar18 = *(long *)(lVar17 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = auStack_78;
  func_0x000107c61428(lVar12 + 0x10,puVar13,0,0);
  lVar12 = lVar12 + 0x10;
  func_0x000107c61618();
  if (lVar12 != 0) {
    if (((param_1 & 1) != 0) && (param_2 != (undefined1 *)0x0)) {
      puVar20 = (undefined1 *)((ulong)param_2 & 0xffffffffffffff8);
      lStack_e8 = lVar18;
      lStack_e0 = lVar2;
      puStack_d8 = auStack_f0 + -(lVar18 + 0xfU & 0xfffffffffffffff0);
      lStack_d0 = lVar17;
      lStack_c8 = lVar4;
      lStack_c0 = lVar12;
      if ((ulong)param_2 >> 0x3e == 0) {
        puVar19 = *(undefined1 **)(puVar20 + 0x10);
      }
      else {
        puVar19 = param_2;
        if (-1 < (long)param_2) {
          puVar19 = puVar20;
        }
        func_0x000107c60480();
      }
      if (puVar19 != (undefined1 *)0x0) {
        uVar16 = 0;
        uStack_b8 = (ulong)param_2 & 0xc000000000000001;
        do {
          if (uStack_b8 == 0) {
            if (*(ulong *)(puVar20 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1024f8448);
              (*pcVar3)();
            }
            uVar5 = *(ulong *)(param_2 + uVar16 * 8 + 0x20);
            func_0x000107c61174();
            puVar14 = puVar13;
          }
          else {
            uVar5 = uVar16;
            puVar14 = param_2;
            FUN_1024f8844();
          }
          puVar1 = (undefined1 *)(uVar16 + 1);
          if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1024f8444);
            (*pcVar3)();
          }
          uVar6 = uVar5;
          func_0x000107c501e4();
          func_0x000107c61180();
          puVar13 = puVar14;
          if (uVar6 != 0) {
            uVar7 = uVar6;
            func_0x000107c5faec();
            func_0x000107c61170(uVar6);
            if ((uVar7 == uVar15) && (puVar14 == uStack_b0)) {
              func_0x000107c6142c(puVar14);
            }
            else {
              puVar13 = puVar14;
              func_0x000107c605b8(uVar7,puVar14,uVar15,uStack_b0,0);
              func_0x000107c6142c(puVar14);
              if ((uVar7 & 1) == 0) goto LAB_1024f8224;
            }
            uVar15 = uVar5;
            func_0x000107c501ac();
            lVar2 = lStack_c8;
            lVar12 = lStack_d0;
            if (uVar15 - 3 < 2) {
              uStack_b0 = (undefined1 *)CONCAT44(uStack_b0._4_4_,1);
            }
            else {
              if (uVar15 != 6) {
                func_0x000107c61170(uVar5);
                break;
              }
              uStack_b0 = (undefined1 *)((ulong)uStack_b0._4_4_ << 0x20);
            }
            pcVar8 = "lookUpCurrentApprovalState(spotlightSnapId:replyId:token:)";
            func_0x0001000c10c0("lookUpCurrentApprovalState(spotlightSnapId:replyId:token:)");
            func_0x000107c61180();
            puVar9 = &UNK_110518c18;
            func_0x000107c613fc(&UNK_110518c18,0x18,7);
            lVar17 = lStack_c0;
            func_0x000107c61614(puVar9 + 0x10,lStack_c0);
            puVar13 = puStack_d8;
            (**(code **)(lVar12 + 0x10))(puStack_d8,lStack_e0,lVar2);
            uVar15 = (ulong)*(byte *)(lVar12 + 0x50);
            uVar16 = uVar15 + 0x18 & (uVar15 ^ 0xffffffffffffffff);
            lVar4 = uVar16 + lStack_e8;
            puVar10 = &UNK_110518da8;
            func_0x000107c613fc(&UNK_110518da8,lVar4 + 1,uVar15 | 7);
            *(undefined **)(puVar10 + 0x10) = puVar9;
            (**(code **)(lVar12 + 0x20))(puVar10 + uVar16,puVar13,lVar2);
            puVar10[lVar4] = (char)uStack_b0;
            uStack_88 = 0x1024fac9c;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            puStack_98 = &UNK_1000f6b44;
            puStack_90 = &UNK_110518dc0;
            ppuVar11 = &puStack_a8;
            puStack_80 = puVar10;
            func_0x000107c60bc4(ppuVar11);
            func_0x000107c61574(puStack_80);
            func_0x000107c4e524(pcVar8);
            func_0x000107c61170(uVar5);
            func_0x000107c61170(lVar17);
            func_0x000107c60bd0(ppuVar11);
            func_0x000107c615e8(pcVar8);
            return;
          }
LAB_1024f8224:
          func_0x000107c61170(uVar5);
          uVar16 = uVar16 + 1;
        } while (puVar1 != puVar19);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1024fac58; end: 1024faceb;  */

void FUN_1024fac58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea24a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c0e98;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ea24a8 = puVar1;
  return;
}



/* Entry: 1024facec; end: 1024fad13;  */

void FUN_1024facec(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1024fad14; end: 1024fad73;  */

undefined8 FUN_1024fad14(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1024fad74; end: 1024fadbb;  */

void FUN_1024fad74(undefined1 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 1024fadbc; end: 1024faf27;  */

void FUN_1024fadbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea2230,&UNK_10dab45f0);
  puVar1 = &UNK_110518f60;
  func_0x000107c613fc(&UNK_110518f60,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_1024faf28,puVar1);
  return;
}



/* Entry: 1024faf28; end: 1024faf47;  */

/* WARNING: Possible PIC construction at 0x0001024faee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024faef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024faf08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024faefc) */
/* WARNING: Removing unreachable block (ram,0x0001024faeec) */
/* WARNING: Removing unreachable block (ram,0x0001024faf0c) */

void FUN_1024faf28(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar7 = 0;
  func_0x0001024faf94();
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x10) = uVar1;
  *(undefined8 *)(lVar7 + 0x18) = uVar4;
  *(undefined8 *)(lVar7 + 0x20) = uVar2;
  *(undefined8 *)(lVar7 + 0x28) = uVar5;
  *(undefined8 *)(lVar7 + 0x30) = uVar3;
  *(undefined8 *)(lVar7 + 0x38) = uVar6;
  *param_1 = lVar7;
  param_1[1] = (long)&PTR_DAT_110518f98;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1024faf48; end: 1024fafb3;  */

void FUN_1024faf48(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024fafb4; end: 1024fb22b;  */

void FUN_1024fafb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  code *pcStack_78;
  
  puVar1 = PTR_PTR_1126aa980;
  func_0x000107c610f8(PTR_PTR_1126aa980);
  func_0x000107c453e4();
  func_0x0001000285a8(0x112ea2580,&UNK_10dab4998);
  puVar6 = &UNK_110518fb8;
  puVar2 = puVar6;
  func_0x000107c613fc(&UNK_110518fb8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_2);
  puVar3 = &UNK_110518fe0;
  func_0x000107c613fc(&UNK_110518fe0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c6157c();
  uVar4 = 0x1024fb5d0;
  func_0x0001000823a8(0x1024fb5d0,puVar3);
  puVar3 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1024fb5d8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101016bdc;
  puStack_88 = &UNK_110518ff8;
  ppuVar5 = &puStack_a0;
  pcStack_78 = (code *)uVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c6157c(uVar4);
  func_0x000107c46b38(puVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(pcStack_78);
  func_0x000107c596cc(puVar1);
  func_0x000107c61170(puVar3);
  func_0x0001000285a8(0x112ea2588,&UNK_10dab49a0);
  func_0x000107c613fc(&UNK_110518fb8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,param_2);
  puVar3 = &UNK_110519030;
  func_0x000107c613fc(&UNK_110519030,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar6;
  *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
  func_0x000107c6157c();
  pcVar7 = FUN_1024fb644;
  func_0x0001000823a8(FUN_1024fb644,puVar3);
  puVar6 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_80 = (code *)0x1024fb924;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101016bdc;
  puStack_88 = &UNK_110519048;
  ppuVar5 = &puStack_a0;
  pcStack_78 = pcVar7;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c6157c(pcVar7);
  func_0x000107c46b38(puVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(pcStack_78);
  func_0x000107c57ae4(puVar1);
  func_0x000107c61170(puVar6);
  func_0x000107c59714(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar7);
  return;
}



/* Entry: 1024fb22c; end: 1024fb483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fb22c(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  long lStack_98;
  long lStack_90;
  undefined8 auStack_88 [3];
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(auStack_88);
  uVar7 = 0x112ea2308;
  func_0x0001000285a8(0x112ea2308,&UNK_10dab46f0);
  func_0x000107c610f8();
  uVar3 = auStack_88[0];
  func_0x00010017da58(auStack_88[0],uVar7);
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  func_0x000100083b20(&lStack_68);
  uVar3 = *(undefined8 *)(lStack_68 + _DAT_112fe4228);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  func_0x000100083b20(&lStack_70);
  lVar4 = *(long *)(lStack_70 + _DAT_112fe4258);
  func_0x000107c61174();
  func_0x000107c61170(lStack_70);
  func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  lVar5 = 0;
  func_0x0001024f6678();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar10 = _DAT_112ea2440;
  func_0x000107c61614(lVar6 + _DAT_112ea2440,0);
  *(undefined8 *)(lVar6 + _DAT_112ea2448) = 0;
  lVar1 = _DAT_112ea2450;
  uVar7 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar6 + lVar1) = uVar7;
  lVar1 = _DAT_112ea2458;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1024fb6f8();
  *(undefined **)(lVar6 + lVar1) = puVar8;
  *(undefined8 *)(lVar6 + _DAT_112ea2428) = uVar3;
  *(long *)(lVar6 + _DAT_112ea2430) = lVar4;
  *(undefined **)(lVar6 + _DAT_112ea2438) = puVar2;
  func_0x000107c61604(lVar6 + lVar10,param_3);
  puVar8 = PTR_s_init_1125d9248;
  lStack_98 = lVar6;
  lStack_90 = lVar5;
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  plVar9 = &lStack_98;
  func_0x000107c61154(plVar9,puVar8);
  lVar10 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar10 != 0) {
    func_0x000107c3d740();
    func_0x000107c615e8(lVar10);
  }
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  *param_1 = (long)plVar9;
  return;
}



/* Entry: 1024fb484; end: 1024fb5cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fb484(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  puVar1 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x000107c453e4();
  }
  func_0x000100083b20(&lStack_60);
  uVar2 = *(undefined8 *)(lStack_60 + _DAT_113091ad8);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_60);
  func_0x000100083b20(&uStack_68);
  uVar3 = uStack_68;
  func_0x000107c51d00(uStack_68);
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&lStack_70);
  uVar5 = *(undefined8 *)(lStack_70 + _DAT_113041e50);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(lStack_70);
  puVar4 = PTR_PTR_1126b0e48;
  func_0x000107c610f8();
  func_0x000107c494f8();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar5);
  *param_1 = puVar4;
  return;
}



/* Entry: 1024fb5cc; end: 1024fb5d7;  */

void FUN_1024fb5cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  code *pcStack_78;
  
  puVar1 = PTR_PTR_1126aa980;
  func_0x000107c610f8(PTR_PTR_1126aa980);
  func_0x000107c453e4();
  func_0x0001000285a8(0x112ea2580,&UNK_10dab4998);
  puVar6 = &UNK_110518fb8;
  puVar2 = puVar6;
  func_0x000107c613fc(&UNK_110518fb8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_2);
  puVar3 = &UNK_110518fe0;
  func_0x000107c613fc(&UNK_110518fe0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c6157c();
  uVar4 = 0x1024fb5d0;
  func_0x0001000823a8(0x1024fb5d0,puVar3);
  puVar3 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1024fb5d8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101016bdc;
  puStack_88 = &UNK_110518ff8;
  ppuVar5 = &puStack_a0;
  pcStack_78 = (code *)uVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c6157c(uVar4);
  func_0x000107c46b38(puVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(pcStack_78);
  func_0x000107c596cc(puVar1);
  func_0x000107c61170(puVar3);
  func_0x0001000285a8(0x112ea2588,&UNK_10dab49a0);
  func_0x000107c613fc(&UNK_110518fb8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,param_2);
  puVar3 = &UNK_110519030;
  func_0x000107c613fc(&UNK_110519030,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar6;
  *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
  func_0x000107c6157c();
  pcVar7 = FUN_1024fb644;
  func_0x0001000823a8(FUN_1024fb644,puVar3);
  puVar6 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_80 = (code *)0x1024fb924;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101016bdc;
  puStack_88 = &UNK_110519048;
  ppuVar5 = &puStack_a0;
  pcStack_78 = pcVar7;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c6157c(pcVar7);
  func_0x000107c46b38(puVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(pcStack_78);
  func_0x000107c57ae4(puVar1);
  func_0x000107c61170(puVar6);
  func_0x000107c59714(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar7);
  return;
}



/* Entry: 1024fb5d8; end: 1024fb5fb;  */

undefined8 FUN_1024fb5d8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 1024fb5fc; end: 1024fb617;  */

void FUN_1024fb5fc(long param_1,long param_2)

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



/* Entry: 1024fb618; end: 1024fb643;  */

void FUN_1024fb618(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024fb644; end: 1024fb64b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fb644(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  puVar2 = (undefined *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x000107c453e4();
  }
  func_0x000100083b20(&lStack_60);
  uVar3 = *(undefined8 *)(lStack_60 + _DAT_113091ad8);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lStack_60);
  func_0x000100083b20(&uStack_68);
  uVar4 = uStack_68;
  func_0x000107c51d00(uStack_68);
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&lStack_70);
  uVar6 = *(undefined8 *)(lStack_70 + _DAT_113041e50);
  func_0x000107c615f0(uVar6);
  func_0x000107c61170(lStack_70);
  puVar5 = PTR_PTR_1126b0e48;
  func_0x000107c610f8();
  func_0x000107c494f8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uVar6);
  *param_1 = puVar5;
  return;
}



/* Entry: 1024fb64c; end: 1024fb6f7;  */

void FUN_1024fb64c(ulong param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (param_1 & 0x3f);
  lVar4 = *(long *)(param_4 + 0x30);
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            (lVar4 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,param_2,lVar2);
  puVar3 = (undefined8 *)(*(long *)(param_4 + 0x38) + param_1 * 0x30);
  uVar5 = param_3[2];
  uVar7 = param_3[5];
  uVar6 = param_3[4];
  puVar3[3] = param_3[3];
  puVar3[2] = uVar5;
  puVar3[5] = uVar7;
  puVar3[4] = uVar6;
  uVar5 = *param_3;
  puVar3[1] = param_3[1];
  *puVar3 = uVar5;
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024fb6f8);
  (*pcVar1)();
}



/* Entry: 1024fb6f8; end: 1024fb8d3;  */

undefined * FUN_1024fb6f8(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x8;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long alStack_c0 [2];
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  lVar5 = 0x112ea2590;
  func_0x0001000285a8(0x112ea2590,&UNK_10dab49b0);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = (long)alStack_c0 - extraout_x8;
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112ea24a0,&UNK_10dab48c0);
    puVar3 = puVar8;
    func_0x000107c60498();
    puStack_a8 = (undefined8 *)(uVar10 + (long)*(int *)(lVar5 + 0x30));
    puStack_b0 = puVar3 + 0x40;
    param_1 = param_1 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
    alStack_c0[1] = *(long *)(lVar9 + 0x48);
    func_0x000107c6157c();
    do {
      uVar7 = uVar10;
      FUN_1024fb8d4(param_1,uVar10,0x112ea2590,&UNK_10dab49b0);
      uVar4 = uVar10;
      func_0x0001000c8928();
      puVar6 = puStack_a8;
      puVar1 = puStack_b0;
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024fb8d0);
        (*pcVar2)();
      }
      uStack_78 = puStack_a8[1];
      uStack_80 = *puStack_a8;
      uStack_88 = puStack_a8[2];
      uStack_68 = puStack_a8[5];
      uVar11 = uVar4 >> 3 & 0x1ffffffffffffff8;
      uVar7 = *(ulong *)(puStack_b0 + uVar11);
      lVar9 = *(long *)(puVar3 + 0x30);
      lVar5 = 0;
      func_0x000107c5eec8();
      uStack_98 = puVar6[4];
      uStack_a0 = puVar6[3];
      *(ulong *)(puVar1 + uVar11) = uVar7 | 1L << (uVar4 & 0x3f);
      (**(code **)(*(long *)(lVar5 + -8) + 0x20))
                (lVar9 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar4,uVar10,lVar5);
      puVar6 = (undefined8 *)(*(long *)(puVar3 + 0x38) + uVar4 * 0x30);
      puVar6[1] = uStack_78;
      *puVar6 = uStack_80;
      puVar6[2] = uStack_88;
      puVar6[4] = uStack_98;
      puVar6[3] = uStack_a0;
      puVar6[5] = uStack_68;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024fb8d4);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + alStack_c0[1];
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 1024fb8d4; end: 1024fb91b;  */

undefined8 FUN_1024fb8d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1024fb91c; end: 1024fb927;  */

void FUN_1024fb91c(long param_1,long param_2)

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



/* Entry: 1024fb928; end: 1024fb987; -[_TtC38SCImpalaStoryReplyNotificationServices43NotificationCenterStoryReplyInsightsHandler init] */

void FUN_1024fb928(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCImpalaStoryReplyNotificationServices.NotificationCenterStoryReplyInsightsHandler"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024fb954);
  (*pcVar1)();
}



/* Entry: 1024fb988; end: 1024fb9bf; -[_TtC38SCImpalaStoryReplyNotificationServices43NotificationCenterStoryReplyInsightsHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fb988(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea2598));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112ea25a0);
  return;
}



/* Entry: 1024fb9c0; end: 1024fb9df;  */

void FUN_1024fb9c0(void)

{
  func_0x000107c61168(&PTR_PTR_11284a190);
  return;
}



/* Entry: 1024fb9e0; end: 1024fbb23; -[_TtC38SCImpalaStoryReplyNotificationServices43NotificationCenterStoryReplyInsightsHandler launchInsightsWithProfileId:snapId:thumbnailUrl:timestamp:animated:] */

/* WARNING: Possible PIC construction at 0x0001024fbaf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024fbaf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fb9e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  func_0x000107c5faec();
  uVar4 = param_2;
  func_0x000107c5faec();
  uVar5 = uVar4;
  func_0x000107c5faec(param_5);
  lVar2 = param_1 + _DAT_112ea25a0;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112ea2598);
    lVar1 = ((undefined8 *)(param_1 + _DAT_112ea2598))[1];
    if (param_7 == 0) {
      func_0x000107c61174(param_1);
      lVar6 = 0;
    }
    else {
      lVar6 = param_7;
      func_0x000107c61174(param_7);
      func_0x000107c61174(param_1);
      func_0x000107c3ebcc(lVar6);
    }
    func_0x000107c614f0();
    (**(code **)(lVar1 + 8))
              (param_3,param_2,param_4,uVar4,param_5,uVar5,param_6,lVar6,lVar2,uVar3,lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1024fbb24; end: 1024fbb2f; -[_TtC38SCImpalaStoryReplyNotificationServices43NotificationCenterStoryReplyInsightsHandler pushToValdiMarshaller:] */

undefined8 FUN_1024fbb24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000106e40ff0(param_3,param_1);
  func_0x000106e40fe8();
  func_0x000106e40f64();
  func_0x000106e40f80();
  return param_3;
}



/* Entry: 1024fbb30; end: 1024fbd2f;  */

void FUN_1024fbb30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea2230,&UNK_10dab45f0);
  puVar1 = &UNK_110519138;
  func_0x000107c613fc(&UNK_110519138,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001000823a8(FUN_1024fbd30,puVar1);
  return;
}



/* Entry: 1024fbd30; end: 1024fbd63;  */

void FUN_1024fbd30(void)

{
  long unaff_x20;
  
  func_0x0001024fbc44(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1024fbd64; end: 1024fbd73;  */

undefined1  [16] FUN_1024fbd64(void)

{
  return ZEXT816(0x110519160);
}



/* Entry: 1024fbd74; end: 1024fbe17;  */

void FUN_1024fbd74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1024fbe18; end: 1024fc207;  */

void FUN_1024fbe18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  code *pcStack_78;
  
  puVar3 = PTR_PTR_1126aa988;
  func_0x000107c610f8(PTR_PTR_1126aa988);
  func_0x000107c453e4();
  func_0x000100083b20(&puStack_a0);
  puVar1 = puStack_a0;
  puVar4 = puStack_a0;
  func_0x000107c406a0();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x000107c3cfbc();
    func_0x000107c61180();
    func_0x000107c615e8(puVar4);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    if (puVar5 != (undefined *)0x0) {
      func_0x0001000285a8(0x112ea26c0,&UNK_10dab4b00);
      puVar6 = &UNK_110519190;
      func_0x000107c613fc(&UNK_110519190,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,param_2);
      puVar7 = &UNK_110519258;
      func_0x000107c613fc(&UNK_110519258,0x30,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(undefined8 *)(puVar7 + 0x18) = unaff_x20;
      *(undefined **)(puVar7 + 0x20) = puVar5;
      *(undefined **)(puVar7 + 0x28) = puVar1;
      func_0x000107c615f0(puVar5);
      func_0x000107c6157c();
      func_0x000107c61174(puVar1);
      pcVar2 = FUN_1024fc7e4;
      func_0x0001000823a8(FUN_1024fc7e4,puVar7);
      puVar6 = PTR_PTR_1126b1678;
      func_0x000107c610f8(PTR_PTR_1126b1678);
      pcStack_80 = (code *)0x1024fc804;
      puStack_a0 = puVar4;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_101016bdc;
      puStack_88 = &UNK_110519270;
      ppuVar8 = &puStack_a0;
      pcStack_78 = pcVar2;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c6157c(pcVar2);
      func_0x000107c46b38(puVar6);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(pcStack_78);
      func_0x000107c53320(puVar3);
      func_0x000107c615e8(puVar5);
      func_0x000107c61574(pcVar2);
      func_0x000107c61170(puVar6);
    }
    func_0x0001000285a8(0x112ea2588,&UNK_10dab49a0);
    puVar5 = &UNK_110519190;
    puVar7 = puVar5;
    func_0x000107c613fc(&UNK_110519190,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,param_2);
    puVar6 = &UNK_1105191b8;
    func_0x000107c613fc(&UNK_1105191b8,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar7;
    *(undefined8 *)(puVar6 + 0x18) = unaff_x20;
    func_0x000107c6157c();
    uVar9 = 0x1024fc768;
    func_0x0001000823a8(0x1024fc768,puVar6);
    puVar6 = PTR_PTR_1126b1678;
    func_0x000107c610f8(PTR_PTR_1126b1678);
    pcStack_80 = (code *)0x1024fc800;
    puStack_a0 = puVar4;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101016bdc;
    puStack_88 = &UNK_1105191d0;
    ppuVar8 = &puStack_a0;
    pcStack_78 = (code *)uVar9;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c6157c(uVar9);
    func_0x000107c46b38(puVar6);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(pcStack_78);
    func_0x000107c57ae4(puVar3);
    func_0x000107c61170(puVar6);
    func_0x0001000285a8(0x112ea26b8,&UNK_10dab4af8);
    func_0x000107c613fc(&UNK_110519190,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,param_2);
    puVar6 = &UNK_110519208;
    func_0x000107c613fc(&UNK_110519208,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = unaff_x20;
    func_0x000107c6157c();
    pcVar2 = FUN_1024fc7b8;
    func_0x0001000823a8(FUN_1024fc7b8,puVar6);
    puVar5 = PTR_PTR_1126b1678;
    func_0x000107c610f8(PTR_PTR_1126b1678);
    pcStack_80 = FUN_1024fc7c0;
    puStack_a0 = puVar4;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101016bdc;
    puStack_88 = &UNK_110519220;
    ppuVar8 = &puStack_a0;
    pcStack_78 = pcVar2;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c6157c(pcVar2);
    func_0x000107c46b38(puVar5);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(pcStack_78);
    func_0x000107c55428(puVar3);
    func_0x000107c61170(puVar5);
    func_0x000107c59990(param_1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar1);
    func_0x000107c61574(uVar9);
    func_0x000107c61574(pcVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024fc208);
  (*pcVar2)();
}



/* Entry: 1024fc208; end: 1024fc50f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fc208(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  puVar2 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x000107c453e4();
  }
  func_0x000100083b20(&lStack_80);
  lVar9 = lStack_80;
  uVar3 = *(undefined8 *)(lStack_80 + _DAT_113091ad8);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lVar9);
  func_0x000100083b20(&lStack_80);
  lVar9 = lStack_80;
  lVar4 = lStack_80;
  func_0x000107c5b374(lStack_80);
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  func_0x000100083b20(&lStack_88);
  lVar9 = lStack_88;
  lVar5 = lStack_88;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024fc504);
    (*pcVar1)();
  }
  func_0x000100083b20(&lStack_90);
  lVar9 = lStack_90;
  lVar6 = lStack_90;
  func_0x000107c40688();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024fc508);
    (*pcVar1)();
  }
  func_0x000100083b20(&uStack_98);
  uVar7 = uStack_98;
  func_0x000107c4e26c(uStack_98);
  func_0x000107c61180();
  func_0x000107c61170(uStack_98);
  puVar8 = PTR_PTR_1126b0e10;
  func_0x000107c610f8(PTR_PTR_1126b0e10);
  func_0x000107c61174(uVar3);
  func_0x000107c4936c(puVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c406a0();
  func_0x000107c61180();
  if (param_5 != 0) {
    func_0x000100083b20(&lStack_80);
    lVar9 = lStack_80;
    func_0x000107c40668(lStack_80);
    func_0x000107c61180();
    func_0x000107c61170(lStack_80);
    func_0x000100083b20(&lStack_88);
    lVar4 = lStack_88;
    func_0x000107c40688();
    func_0x000107c61180();
    func_0x000107c61170(lStack_88);
    if (lVar4 != 0) {
      func_0x000100083b20(&lStack_90);
      lVar5 = lStack_90;
      func_0x000107c43a84();
      func_0x000107c61180();
      func_0x000107c61170(lStack_90);
      puVar10 = PTR_PTR_1126b0e40;
      func_0x000107c610f8();
      func_0x000107c4932c();
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar8);
      func_0x000107c615e8(param_5);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar5);
      *param_1 = puVar10;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024fc510);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024fc50c);
  (*pcVar1)();
}



/* Entry: 1024fc510; end: 1024fc763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fc510(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  puVar1 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x000107c453e4();
  }
  func_0x000100083b20(&lStack_60);
  uVar2 = *(undefined8 *)(lStack_60 + _DAT_113091ad8);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_60);
  func_0x000100083b20(&uStack_68);
  uVar3 = uStack_68;
  func_0x000107c51d00(uStack_68);
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&lStack_70);
  uVar5 = *(undefined8 *)(lStack_70 + _DAT_113041e50);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(lStack_70);
  puVar4 = PTR_PTR_1126b0e48;
  func_0x000107c610f8();
  func_0x000107c494f8();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar5);
  *param_1 = puVar4;
  return;
}



/* Entry: 1024fc764; end: 1024fc78b;  */

void FUN_1024fc764(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  code *pcStack_78;
  
  puVar3 = PTR_PTR_1126aa988;
  func_0x000107c610f8(PTR_PTR_1126aa988);
  func_0x000107c453e4();
  func_0x000100083b20(&puStack_a0);
  puVar1 = puStack_a0;
  puVar4 = puStack_a0;
  func_0x000107c406a0();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x000107c3cfbc();
    func_0x000107c61180();
    func_0x000107c615e8(puVar4);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    if (puVar5 != (undefined *)0x0) {
      func_0x0001000285a8(0x112ea26c0,&UNK_10dab4b00);
      puVar6 = &UNK_110519190;
      func_0x000107c613fc(&UNK_110519190,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,param_2);
      puVar7 = &UNK_110519258;
      func_0x000107c613fc(&UNK_110519258,0x30,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(undefined8 *)(puVar7 + 0x18) = unaff_x20;
      *(undefined **)(puVar7 + 0x20) = puVar5;
      *(undefined **)(puVar7 + 0x28) = puVar1;
      func_0x000107c615f0(puVar5);
      func_0x000107c6157c();
      func_0x000107c61174(puVar1);
      pcVar2 = FUN_1024fc7e4;
      func_0x0001000823a8(FUN_1024fc7e4,puVar7);
      puVar6 = PTR_PTR_1126b1678;
      func_0x000107c610f8(PTR_PTR_1126b1678);
      pcStack_80 = (code *)0x1024fc804;
      puStack_a0 = puVar4;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_101016bdc;
      puStack_88 = &UNK_110519270;
      ppuVar8 = &puStack_a0;
      pcStack_78 = pcVar2;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c6157c(pcVar2);
      func_0x000107c46b38(puVar6);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(pcStack_78);
      func_0x000107c53320(puVar3);
      func_0x000107c615e8(puVar5);
      func_0x000107c61574(pcVar2);
      func_0x000107c61170(puVar6);
    }
    func_0x0001000285a8(0x112ea2588,&UNK_10dab49a0);
    puVar5 = &UNK_110519190;
    puVar7 = puVar5;
    func_0x000107c613fc(&UNK_110519190,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,param_2);
    puVar6 = &UNK_1105191b8;
    func_0x000107c613fc(&UNK_1105191b8,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar7;
    *(undefined8 *)(puVar6 + 0x18) = unaff_x20;
    func_0x000107c6157c();
    uVar9 = 0x1024fc768;
    func_0x0001000823a8(0x1024fc768,puVar6);
    puVar6 = PTR_PTR_1126b1678;
    func_0x000107c610f8(PTR_PTR_1126b1678);
    pcStack_80 = (code *)0x1024fc800;
    puStack_a0 = puVar4;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101016bdc;
    puStack_88 = &UNK_1105191d0;
    ppuVar8 = &puStack_a0;
    pcStack_78 = (code *)uVar9;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c6157c(uVar9);
    func_0x000107c46b38(puVar6);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(pcStack_78);
    func_0x000107c57ae4(puVar3);
    func_0x000107c61170(puVar6);
    func_0x0001000285a8(0x112ea26b8,&UNK_10dab4af8);
    func_0x000107c613fc(&UNK_110519190,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,param_2);
    puVar6 = &UNK_110519208;
    func_0x000107c613fc(&UNK_110519208,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = unaff_x20;
    func_0x000107c6157c();
    pcVar2 = FUN_1024fc7b8;
    func_0x0001000823a8(FUN_1024fc7b8,puVar6);
    puVar5 = PTR_PTR_1126b1678;
    func_0x000107c610f8(PTR_PTR_1126b1678);
    pcStack_80 = FUN_1024fc7c0;
    puStack_a0 = puVar4;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101016bdc;
    puStack_88 = &UNK_110519220;
    ppuVar8 = &puStack_a0;
    pcStack_78 = pcVar2;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c6157c(pcVar2);
    func_0x000107c46b38(puVar5);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(pcStack_78);
    func_0x000107c55428(puVar3);
    func_0x000107c61170(puVar5);
    func_0x000107c59990(param_1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar1);
    func_0x000107c61574(uVar9);
    func_0x000107c61574(pcVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024fc208);
  (*pcVar2)();
}



/* Entry: 1024fc78c; end: 1024fc7b7;  */

void FUN_1024fc78c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024fc7b8; end: 1024fc7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fc7b8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  puVar4 = (undefined *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x000107c453e4();
  }
  func_0x000100083b20(&uStack_70);
  lVar5 = 0;
  FUN_1024fb9c0();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar1 = _DAT_112ea25a0;
  func_0x000107c61614(lVar6 + _DAT_112ea25a0,0);
  puVar2 = (undefined8 *)(lVar6 + _DAT_112ea2598);
  puVar2[1] = uStack_68;
  *puVar2 = uStack_70;
  func_0x000107c61604(lVar6 + lVar1,puVar4);
  puVar3 = PTR_s_init_1125d9248;
  lStack_80 = lVar6;
  lStack_78 = lVar5;
  func_0x000107c615f0(uStack_70);
  plVar7 = &lStack_80;
  func_0x000107c61154(plVar7,puVar3);
  func_0x000107c615e8(uStack_70);
  func_0x000107c61170(puVar4);
  *param_1 = (long)plVar7;
  return;
}



/* Entry: 1024fc7c0; end: 1024fc7e3;  */

undefined8 FUN_1024fc7c0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 1024fc7e4; end: 1024fc807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fc7e4(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar10 = *(long *)(unaff_x20 + 0x10);
  lVar9 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar10 + 0x10,auStack_78,0,0);
  puVar2 = (undefined *)(lVar10 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x000107c453e4();
  }
  func_0x000100083b20(&lStack_80);
  lVar10 = lStack_80;
  uVar3 = *(undefined8 *)(lStack_80 + _DAT_113091ad8);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lVar10);
  func_0x000100083b20(&lStack_80);
  lVar10 = lStack_80;
  lVar4 = lStack_80;
  func_0x000107c5b374(lStack_80);
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  func_0x000100083b20(&lStack_88);
  lVar10 = lStack_88;
  lVar5 = lStack_88;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024fc504);
    (*pcVar1)();
  }
  func_0x000100083b20(&lStack_90);
  lVar10 = lStack_90;
  lVar6 = lStack_90;
  func_0x000107c40688();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024fc508);
    (*pcVar1)();
  }
  func_0x000100083b20(&uStack_98);
  uVar7 = uStack_98;
  func_0x000107c4e26c(uStack_98);
  func_0x000107c61180();
  func_0x000107c61170(uStack_98);
  puVar8 = PTR_PTR_1126b0e10;
  func_0x000107c610f8(PTR_PTR_1126b0e10);
  func_0x000107c61174(uVar3);
  func_0x000107c4936c(puVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c406a0();
  func_0x000107c61180();
  if (lVar9 != 0) {
    func_0x000100083b20(&lStack_80);
    lVar10 = lStack_80;
    func_0x000107c40668(lStack_80);
    func_0x000107c61180();
    func_0x000107c61170(lStack_80);
    func_0x000100083b20(&lStack_88);
    lVar4 = lStack_88;
    func_0x000107c40688();
    func_0x000107c61180();
    func_0x000107c61170(lStack_88);
    if (lVar4 != 0) {
      func_0x000100083b20(&lStack_90);
      lVar5 = lStack_90;
      func_0x000107c43a84();
      func_0x000107c61180();
      func_0x000107c61170(lStack_90);
      puVar11 = PTR_PTR_1126b0e40;
      func_0x000107c610f8();
      func_0x000107c4932c();
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar8);
      func_0x000107c615e8(lVar9);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar5);
      *param_1 = puVar11;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024fc510);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024fc50c);
  (*pcVar1)();
}



/* Entry: 1024fc808; end: 1024fc81f; -[_TtC25GamesExplorerPageLauncher30GamesExplorerPageLaunchHandler payloadClass] */

void FUN_1024fc808(void)

{
  func_0x000103280d80(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 1024fc820; end: 1024fc823; -[_TtC25GamesExplorerPageLauncher30GamesExplorerPageLaunchHandler setPayloadClass:] */

void FUN_1024fc820(void)

{
  return;
}



/* Entry: 1024fc824; end: 1024fc86f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fc824(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea26c8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024fc870; end: 1024fca07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fc870(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_58;
  
  ppuVar2 = &puStack_90;
  ppuVar3 = &puStack_90;
  func_0x000100672b50(param_1,&puStack_90);
  if (puStack_78 == (undefined *)0x0) {
    func_0x00010006e7f4(&puStack_90);
  }
  else {
    uVar1 = 0;
    func_0x000103280d80(0);
    ppuVar3 = (undefined **)&uStack_58;
    func_0x000107c6147c(ppuVar3,&puStack_90,PTR___sypN_11034f1a8 + 8,uVar1,6);
    uVar1 = uStack_58;
    if (((ulong)ppuVar3 & 1) != 0) {
      func_0x0001000d224c(&uStack_58);
      puVar4 = &UNK_1105193b0;
      func_0x000107c613fc(&UNK_1105193b0,0x20,7);
      *(code **)(puVar4 + 0x10) = param_2;
      *(undefined8 *)(puVar4 + 0x18) = param_3;
      pcStack_70 = FUN_1024fca48;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_1024fca8c;
      puStack_78 = &UNK_1105193c8;
      puStack_68 = puVar4;
      func_0x000107c60bc4(&puStack_90);
      puVar4 = puStack_68;
      func_0x000100f1d248(param_2,param_3);
      func_0x000107c61574(puVar4);
      func_0x000107c4ab50(uStack_58);
      func_0x000107c61170(uVar1);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c615e8(uStack_58);
      return;
    }
  }
  if (param_2 != (code *)0x0) {
    FUN_1024fca08();
    puVar4 = &UNK_110630670;
    func_0x000107c613f8(&UNK_110630670,ppuVar3,0,0);
    uStack_88 = 0;
    puStack_90 = (undefined *)0x0;
    puStack_78 = (undefined *)0x0;
    pcStack_80 = (code *)0x0;
    (*param_2)();
    func_0x000107c614ac(puVar4);
    func_0x00010006e7f4(&puStack_90);
  }
  return;
}



/* Entry: 1024fca08; end: 1024fca47;  */

void FUN_1024fca08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea26d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba49d8;
  func_0x000107c61520(&UNK_10dba49d8,&UNK_110630670);
  puRam0000000112ea26d0 = puVar1;
  return;
}



/* Entry: 1024fca48; end: 1024fca8b;  */

void FUN_1024fca48(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    (**(code **)(unaff_x20 + 0x10))(param_1,&uStack_40);
    func_0x00010006e7f4(&uStack_40);
  }
  return;
}



/* Entry: 1024fca8c; end: 1024fcadb;  */

void FUN_1024fca8c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1024fcadc; end: 1024fcaf7;  */

void FUN_1024fcadc(long param_1,long param_2)

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



/* Entry: 1024fcaf8; end: 1024fcbc7; -[_TtC25GamesExplorerPageLauncher30GamesExplorerPageLaunchHandler launchWithPayload:completion:] */

void FUN_1024fcaf8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_110519400;
    func_0x000107c613fc(&UNK_110519400,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar1 = FUN_1024fcc58;
  }
  FUN_1024fc870(&uStack_50,pcVar1,puVar2);
  func_0x000100f1d208(pcVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 1024fcbc8; end: 1024fcc27; -[_TtC25GamesExplorerPageLauncher30GamesExplorerPageLaunchHandler init] */

void FUN_1024fcbc8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerPageLauncher.GamesExplorerPageLaunchHandler",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024fcbf4);
  (*pcVar1)();
}



/* Entry: 1024fcc28; end: 1024fcc37; -[_TtC25GamesExplorerPageLauncher30GamesExplorerPageLaunchHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fcc28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea26c8));
  return;
}



/* Entry: 1024fcc38; end: 1024fcc57;  */

void FUN_1024fcc38(void)

{
  func_0x000107c61168(&PTR_PTR_11284a258);
  return;
}



/* Entry: 1024fcc58; end: 1024fcc5f;  */

void FUN_1024fcc58(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 1024fcc60; end: 1024fccab;  */

void FUN_1024fcc60(undefined8 param_1)

{
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1024fcd84,param_1);
  return;
}



/* Entry: 1024fccac; end: 1024fcd83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fccac(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_2;
  FUN_1024fcf6c();
  lVar2 = lVar1;
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  func_0x000100083b20(&lStack_48);
  uVar6 = *(undefined8 *)(lStack_48 + _DAT_112fa6788);
  func_0x000107c6157c(uVar6);
  func_0x000107c61170(lStack_48);
  lVar3 = 0;
  FUN_1024fcc38();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112ea26c8) = uVar6;
  plVar5 = &lStack_58;
  lStack_58 = lVar4;
  lStack_50 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  *(long **)(lVar2 + _DAT_112ea2700) = plVar5;
  plVar5 = &lStack_68;
  lStack_68 = lVar2;
  lStack_60 = lVar1;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  func_0x000107c61574(param_2);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 1024fcd84; end: 1024fcd8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fcd84(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_68 [16];
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  FUN_1024fcf6c();
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000100083b20(&lStack_48);
  uVar5 = *(undefined8 *)(lStack_48 + _DAT_112fa6788);
  func_0x000107c6157c(uVar5);
  func_0x000107c61170(lStack_48);
  lVar1 = 0;
  FUN_1024fcc38();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ea26c8) = uVar5;
  plVar3 = &lStack_58;
  lStack_58 = lVar2;
  lStack_50 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_112ea2700) = plVar3;
  puVar4 = auStack_68;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  func_0x000107c61574();
  *param_1 = (long)puVar4;
  return;
}



/* Entry: 1024fcd8c; end: 1024fce57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024fcd8c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c610f8();
  func_0x000100083b20(&lStack_48);
  uVar5 = *(undefined8 *)(lStack_48 + _DAT_112fa6788);
  func_0x000107c6157c(uVar5);
  func_0x000107c61170(lStack_48);
  lVar1 = 0;
  FUN_1024fcc38();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ea26c8) = uVar5;
  plVar3 = &lStack_58;
  lStack_58 = lVar2;
  lStack_50 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_112ea2700) = plVar3;
  puVar4 = auStack_68;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar4;
}



/* Entry: 1024fce58; end: 1024fcee7; -[_TtC25GamesExplorerPageLauncher29GamesExplorerPageLaunchPlugin nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fce58(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000100f1b134();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112ea2700);
  func_0x000107c61174();
  uVar2 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1024fcee8; end: 1024fceeb; -[_TtC25GamesExplorerPageLauncher29GamesExplorerPageLaunchPlugin setNativePayloadHandlers:] */

void FUN_1024fcee8(void)

{
  return;
}



/* Entry: 1024fceec; end: 1024fcf4b; -[_TtC25GamesExplorerPageLauncher29GamesExplorerPageLaunchPlugin init] */

void FUN_1024fceec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerPageLauncher.GamesExplorerPageLaunchPlugin",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024fcf18);
  (*pcVar1)();
}



/* Entry: 1024fcf4c; end: 1024fcf6b; -[_TtC25GamesExplorerPageLauncher29GamesExplorerPageLaunchPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fcf4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea2700));
  return;
}



/* Entry: 1024fcf6c; end: 1024fcf8b;  */

void FUN_1024fcf6c(void)

{
  func_0x000107c61168(&PTR_PTR_11284a318);
  return;
}



/* Entry: 1024fcf8c; end: 1024fcfa3; -[_TtC25PlayGamesViewPageLauncher30PlayGamesViewPageLaunchHandler payloadClass] */

void FUN_1024fcf8c(void)

{
  func_0x0001032832c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 1024fcfa4; end: 1024fcfa7; -[_TtC25PlayGamesViewPageLauncher30PlayGamesViewPageLaunchHandler setPayloadClass:] */

void FUN_1024fcfa4(void)

{
  return;
}



/* Entry: 1024fcfa8; end: 1024fd06f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024fcfa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  func_0x000107c610f8();
  lVar2 = _DAT_112ea2730;
  func_0x000107c61614(unaff_x20 + _DAT_112ea2730,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ea2738) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea2740) = param_2;
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c61154(auStack_50,puVar1);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61170(param_3);
  return puVar3;
}



/* Entry: 1024fd070; end: 1024fd3ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fd070(undefined8 param_1,code *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 **ppuVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 uStack_70;
  
  func_0x000100672b50(param_1,&puStack_e0);
  if (lStack_c8 == 0) {
    ppuVar8 = &puStack_e0;
    func_0x00010006e7f4();
LAB_1024fd2ac:
    if (param_2 == (code *)0x0) {
      return;
    }
    FUN_1024fd3ac();
    puVar9 = &UNK_110630b08;
    func_0x000107c613f8(&UNK_110630b08,ppuVar8,0,0);
    *(undefined1 *)ppuVar8 = 0;
    uStack_d8 = 0;
    puStack_e0 = (undefined1 *)0x0;
    lStack_c8 = 0;
    uStack_d0 = 0;
    (*param_2)();
    func_0x000107c614ac(puVar9);
  }
  else {
    uVar5 = 0;
    func_0x0001032832c0(0);
    ppuVar8 = &puStack_110;
    func_0x000107c6147c(ppuVar8,&puStack_e0,PTR___sypN_11034f1a8 + 8,uVar5,6);
    puVar3 = puStack_110;
    if (((ulong)ppuVar8 & 1) == 0) goto LAB_1024fd2ac;
    func_0x0001000d224c(&puStack_e0);
    puVar4 = puStack_e0;
    puVar6 = puStack_e0;
    func_0x000107c42e70();
    if ((int)puVar6 == 2) {
      puVar1 = (undefined8 *)(puVar3 + _DAT_112f50230);
      puVar6 = (undefined1 *)*puVar1;
      uVar5 = puVar1[1];
      func_0x000107c61434(uVar5);
      func_0x000107c5fadc(puVar6,uVar5);
      func_0x000107c6142c(uVar5);
      puVar7 = puStack_e0;
      func_0x000107c426f0();
      func_0x000107c61170();
      if ((int)puVar7 != 0) {
        puVar6 = (undefined1 *)(unaff_x20 + _DAT_112ea2730);
        func_0x000107c61618();
        if (puVar6 != (undefined1 *)0x0) {
          puVar7 = puVar6;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170();
          if (puVar7 != (undefined1 *)0x0) {
            puVar6 = puVar7;
            func_0x000107c61150(puVar7,PTR_s_respondsToSelector__11262c7e0,
                                PTR_s_topmostViewController_11267b0f0);
            if (((ulong)puVar6 & 1) != 0) {
              puVar6 = puVar7;
              func_0x000107c5cc6c();
              func_0x000107c61180();
              func_0x000107c615e8(puVar7);
              func_0x0001000d224c(&puStack_110);
              func_0x0001024fd58c(&puStack_110,uStack_f8);
              uVar5 = *puVar1;
              uVar2 = puVar1[1];
              puVar1 = (undefined8 *)(puVar3 + _DAT_112f50238);
              uVar10 = puVar1[1];
              uStack_d8 = puVar1[1];
              puStack_e0 = (undefined1 *)*puVar1;
              uStack_70 = 4;
              func_0x000107c61434(uVar10);
              func_0x000107c61434(uVar2);
              func_0x00010433d118(puVar6,uVar5,uVar2,&puStack_e0,0,0,uStack_f8,uStack_f0);
              func_0x000107c6142c(uVar2);
              func_0x000107c6142c(uVar10);
              func_0x0001024fd5b0(&puStack_110);
              if (param_2 == (code *)0x0) {
                func_0x000107c615e8(puVar4);
                func_0x000107c61170(puVar3);
                func_0x000107c61170(puVar6);
                return;
              }
              uStack_108 = 0;
              puStack_110 = (undefined1 *)0x0;
              uStack_f8 = 0;
              uStack_100 = 0;
              (*param_2)(0,&puStack_110);
              func_0x000107c615e8(puVar4);
              func_0x000107c61170(puVar3);
              func_0x000107c61170(puVar6);
              ppuVar8 = &puStack_110;
              goto LAB_1024fd358;
            }
            func_0x000107c615e8();
            puVar6 = puVar7;
          }
        }
      }
    }
    if (param_2 == (code *)0x0) {
      func_0x000107c615e8(puStack_e0);
      func_0x000107c61170(puVar3);
      return;
    }
    FUN_1024fd3ac();
    puVar9 = &UNK_110630b08;
    func_0x000107c613f8(&UNK_110630b08,puVar6,0,0);
    *puVar6 = 1;
    uStack_d8 = 0;
    puStack_e0 = (undefined1 *)0x0;
    lStack_c8 = 0;
    uStack_d0 = 0;
    (*param_2)();
    func_0x000107c614ac(puVar9);
    func_0x000107c615e8(puVar4);
    func_0x000107c61170(puVar3);
  }
  ppuVar8 = &puStack_e0;
LAB_1024fd358:
  func_0x00010006e7f4(ppuVar8);
  return;
}



/* Entry: 1024fd3ac; end: 1024fd3eb;  */

void FUN_1024fd3ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea2748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba4c08;
  func_0x000107c61520(&UNK_10dba4c08,&UNK_110630b08);
  puRam0000000112ea2748 = puVar1;
  return;
}



/* Entry: 1024fd3ec; end: 1024fd4bb; -[_TtC25PlayGamesViewPageLauncher30PlayGamesViewPageLaunchHandler launchWithPayload:completion:] */

void FUN_1024fd3ec(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1105194f0;
    func_0x000107c613fc(&UNK_1105194f0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar1 = FUN_1024fd584;
  }
  FUN_1024fd070(&uStack_50,pcVar1,puVar2);
  func_0x000100f1d208(pcVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 1024fd4bc; end: 1024fd51b; -[_TtC25PlayGamesViewPageLauncher30PlayGamesViewPageLaunchHandler init] */

void FUN_1024fd4bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesViewPageLauncher.PlayGamesViewPageLaunchHandler",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024fd4e8);
  (*pcVar1)();
}



/* Entry: 1024fd51c; end: 1024fd563; -[_TtC25PlayGamesViewPageLauncher30PlayGamesViewPageLaunchHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024fd51c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea2738));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea2740));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112ea2730);
  return;
}


