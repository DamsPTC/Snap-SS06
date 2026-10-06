/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085d0ea4; end: 1085d0f37; +[SCTPresenceState hasChatVisiblePlatformChangedFromPresence:toPresence:] */

bool FUN_1085d0ea4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010c06e760(param_1,param_2,param_3);
  if (((int)uVar2 == 0) || (func_0x00010c06e760(param_1,param_2,param_4), (int)param_1 == 0)) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010c0fe180(param_3);
    lVar4 = param_4;
    func_0x00010c0fe180(param_4);
    bVar1 = lVar3 != lVar4;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1085d0f38; end: 1085d0ffb; +[SCTPresenceState hasIconVisibilityOrTypeChangedFromPresence:toPresence:] */

undefined8 FUN_1085d0f38(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_1;
  func_0x00010c2339a0(param_1,param_2,param_3);
  func_0x00010c2339a0(param_1,param_2,param_4);
  if ((uint)uVar3 == (uint)param_1) {
    if (((uint)uVar3 & (uint)param_1) != 1) {
LAB_1085d0fd4:
      uVar3 = 0;
      goto LAB_1085d0fd8;
    }
    lVar1 = param_3;
    func_0x00010c075460();
    lVar2 = param_4;
    func_0x00010c075460();
    if ((int)lVar1 == (int)lVar2) {
      lVar1 = param_3;
      func_0x00010c0fe180();
      lVar2 = param_4;
      func_0x00010c0fe180();
      if (lVar1 == lVar2) goto LAB_1085d0fd4;
    }
  }
  uVar3 = 1;
LAB_1085d0fd8:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1085d0ffc; end: 1085d1063; +[SCTPresenceState hasChatBecomeVisibleFromPresence:toPresence:] */

ulong FUN_1085d0ffc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c06e760(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010c06e760(param_1,param_2,param_4);
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1085d1064; end: 1085d10cb; +[SCTPresenceState hasBecomePresentFromPresence:toPresence:] */

ulong FUN_1085d1064(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c07aac0(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010c07aac0(param_1,param_2,param_4);
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1085d10cc; end: 1085d1133; +[SCTPresenceState hasBecomeAbsentFromPresence:toPresence:] */

uint FUN_1085d10cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c07aac0(param_1,param_2,param_3);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c07aac0(param_1,param_2,param_4);
    uVar2 = (uint)param_1 ^ 1;
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 1085d1134; end: 1085d119b; +[SCTPresenceState hasChatBecomeVisibleFromAbsentPresence:toPresence:] */

ulong FUN_1085d1134(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c07aac0(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010c06e760(param_1,param_2,param_4);
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1085d119c; end: 1085d141b; -[SCTPresenceBitmoji initWithUpperBodyImage:leftHandImage:rightHandImage:typingBodyImage:typingArmImage:petImage:peekingImage:usingReplyCameraImage:viewingChatMediaImage:inGameImage:bitmojiBirthdayUpperBodyImage:] */

undefined8 *
FUN_1085d119c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126fcf78;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1085d141c; end: 1085d1423; -[SCTPresenceBitmoji upperBodyImage] */

undefined8 FUN_1085d141c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1085d1424; end: 1085d142b; -[SCTPresenceBitmoji leftHandImage] */

undefined8 FUN_1085d1424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1085d142c; end: 1085d1433; -[SCTPresenceBitmoji rightHandImage] */

undefined8 FUN_1085d142c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1085d1434; end: 1085d143b; -[SCTPresenceBitmoji typingBodyImage] */

undefined8 FUN_1085d1434(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1085d143c; end: 1085d1443; -[SCTPresenceBitmoji typingArmImage] */

undefined8 FUN_1085d143c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1085d1444; end: 1085d144b; -[SCTPresenceBitmoji petImage] */

undefined8 FUN_1085d1444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1085d144c; end: 1085d1453; -[SCTPresenceBitmoji peekingImage] */

undefined8 FUN_1085d144c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1085d1454; end: 1085d145b; -[SCTPresenceBitmoji usingReplyCameraImage] */

undefined8 FUN_1085d1454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1085d145c; end: 1085d1463; -[SCTPresenceBitmoji viewingChatMediaImage] */

undefined8 FUN_1085d145c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1085d1464; end: 1085d146b; -[SCTPresenceBitmoji inGameImage] */

undefined8 FUN_1085d1464(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1085d146c; end: 1085d1473; -[SCTPresenceBitmoji bitmojiBirthdayUpperBodyImage] */

undefined8 FUN_1085d146c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1085d1474; end: 1085d150f; -[SCTPresenceBitmoji .cxx_destruct] */

void FUN_1085d1474(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085d1510; end: 1085d1687;  */

void FUN_1085d1510(ulong param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  
  _objc_retain();
  uVar4 = param_1;
  if (param_2 != 0x7fffffffffffffff) {
    uVar3 = param_1;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    _CGImageGetWidth();
    uVar5 = uVar3 >> 1;
    uVar1 = param_2 + (param_3 >> 1);
    uVar2 = uVar5 - uVar1;
    if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
      uVar2 = uVar1 - (uVar3 >> 1);
    }
    dVar6 = (double)uVar3 * 0.02;
    if ((ulong)(long)dVar6 <= uVar2) {
      uVar2 = uVar3 - uVar1;
      if (uVar3 - uVar1 <= uVar1) {
        uVar2 = uVar1;
      }
      func_0x00010c14e120(param_1);
      if (uVar1 <= uVar3) {
        dVar8 = (double)(uVar2 << 1);
        dVar10 = dVar8 / dVar6;
        if (((ulong)ABS(dVar10) < 0x7ff0000000000000 && ABS(dVar10) != 0.0) &&
           (func_0x00010c23d0a0(param_1), dVar8 != 0.0)) {
          func_0x00010c23d0a0(param_1);
          func_0x00010c14e120(param_1);
          dVar7 = dVar10;
          _UIGraphicsBeginImageContextWithOptions(dVar10,dVar8,dVar6,0);
          _UIGraphicsGetCurrentContext();
          _UIGraphicsPushContext();
          if (uVar5 < uVar1) {
            dVar10 = *(double *)PTR__CGPointZero_110347540;
            uVar9 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
          }
          else {
            func_0x00010c23d0a0(param_1);
            dVar10 = dVar10 - dVar7;
            uVar9 = 0;
          }
          func_0x00010bf897c0(dVar10,uVar9,param_1);
          _UIGraphicsPopContext();
          _UIGraphicsGetImageFromCurrentImageContext();
          _objc_retainAutoreleasedReturnValue();
          _UIGraphicsEndImageContext();
          goto LAB_1085d15e8;
        }
      }
    }
  }
  _objc_retain(param_1);
LAB_1085d15e8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1085d1688; end: 1085d1787;  */

void FUN_1085d1688(double param_1,double param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_retain();
  func_0x00010c0b6c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  dVar3 = param_1;
  _objc_release(puVar1);
  func_0x00010c23d0a0(param_3);
  func_0x00010c23d0a0(param_3);
  dVar4 = param_1 * dVar3 * 0.5;
  dVar3 = 0.0;
  if (param_4 == 0) {
    dVar3 = dVar4;
  }
  uVar2 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc1020();
  _CGImageCreateWithImageInRect(dVar3,0,dVar4,param_1 * param_2);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8380(param_3);
  _objc_release(param_3);
  func_0x00010bfe9260(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _CGImageRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085d1788; end: 1085d18fb;  */

void FUN_1085d1788(double param_1,double param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar5 = param_1;
  _objc_retain();
  func_0x00010c0b6c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  dVar7 = dVar5;
  _objc_release(puVar1);
  func_0x00010c23d0a0(param_3);
  dVar9 = param_1 * dVar5 * dVar7 + 0.5;
  lVar4 = (long)dVar9;
  uVar2 = param_3;
  func_0x00010c23d0a0(param_3);
  dVar7 = param_1 * dVar5 * param_2 + 0.5;
  _CGColorSpaceCreateDeviceRGB();
  uVar3 = 0;
  _CGBitmapContextCreate(0,lVar4,(long)dVar7,8,lVar4 << 2,uVar2,2);
  _CGColorSpaceRelease(uVar2);
  _CGContextSetInterpolationQuality(uVar3,3);
  uVar6 = NEON_ucvtf((long)dVar9);
  uVar8 = NEON_ucvtf((long)dVar7);
  uVar2 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc1020();
  _CGContextDrawImage(0,0,uVar6,uVar8,uVar3,uVar2);
  uVar2 = uVar3;
  _CGBitmapContextCreateImage(uVar3);
  _CGContextRelease(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8380(param_3);
  _objc_release(param_3);
  func_0x00010bfe9260(dVar5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _CGImageRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085d18fc; end: 1085d19c3;  */

void FUN_1085d18fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = 0x21;
  func_0x000107c312b8(0x21,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1085d19c4;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_1;
  uStack_38 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x000107c27d8c(uVar1,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1085d19c4; end: 1085d206f;  */

void FUN_1085d19c4(undefined8 param_1,double param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  char *pcVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined *puStack_4c0;
  undefined8 uStack_4b8;
  code *pcStack_4b0;
  undefined *puStack_4a8;
  undefined *puStack_4a0;
  undefined8 uStack_498;
  undefined1 auStack_490 [3];
  char acStack_48d [1021];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = *(ulong *)(param_3 + 0x20);
  _objc_retain(uVar17);
  uVar19 = uVar17;
  func_0x00010bf1b9a0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar21 = 0.14000000059604645;
  if (68.0 / param_2 <= 0.14000000059604645) {
    dVar21 = 68.0 / param_2;
  }
  _objc_release(uVar19);
  uVar19 = uVar17;
  func_0x00010bf1b9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar19;
  dVar22 = dVar21;
  FUN_1085d1788();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar19);
  uVar19 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  uVar2 = uVar19;
  _CGImageGetWidth();
  uVar18 = uVar19;
  _CGImageGetHeight(uVar19);
  puVar3 = auStack_490;
  _bzero(puVar3,0x400);
  if (uVar2 * 4 < 0x401) {
    _CGColorSpaceCreateDeviceRGB();
    puVar4 = auStack_490;
    _CGBitmapContextCreate(puVar4,uVar2,1,8,uVar2 * 4,puVar3,0x4001);
    _CGColorSpaceRelease(puVar3);
    _CGImageCreateWithImageInRect(0,(double)(uVar18 - 1),(double)uVar2,0x3ff0000000000000,uVar19);
    dVar22 = 0.0;
    _CGContextDrawImage(0,0,(double)uVar2,0x3ff0000000000000,puVar4,uVar19);
    _CGImageRelease(uVar19);
    _CGContextRelease(puVar4);
    uVar19 = 0x7fffffffffffffff;
    if (uVar2 == 0) {
      uVar18 = 0;
      goto LAB_1085d1bc8;
    }
    uVar14 = 0;
    uVar18 = 0;
    uVar19 = 0x7fffffffffffffff;
    pcVar15 = acStack_48d;
    do {
      if (uVar19 == 0x7fffffffffffffff) {
        uVar19 = 0x7fffffffffffffff;
        if (*pcVar15 != '\0') {
          uVar19 = uVar14;
        }
      }
      else {
        if (*pcVar15 == '\0') goto LAB_1085d1bb0;
        uVar18 = uVar18 + 1;
      }
      uVar14 = uVar14 + 1;
      pcVar15 = pcVar15 + 4;
    } while (uVar2 != uVar14);
    if (uVar19 == 0x7fffffffffffffff) {
      uVar18 = 0;
      uVar19 = 0x7fffffffffffffff;
      goto LAB_1085d1bc8;
    }
LAB_1085d1bb0:
    if (uVar2 >> 1 <= uVar18) goto LAB_1085d1bc8;
  }
  uVar18 = 0;
  uVar19 = 0x7fffffffffffffff;
LAB_1085d1bc8:
  uVar2 = uVar1;
  if (uVar19 == 0x7fffffffffffffff) {
    func_0x00010c23d0a0();
  }
  else {
    FUN_1085d1510(uVar1,uVar19,uVar18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c14e120(uVar2);
    dVar22 = (double)uVar18 / dVar22;
  }
  uVar1 = uVar17;
  func_0x00010bf1b980();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar1;
  FUN_1085d1788(0x3fbc28f5c0000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar14;
  FUN_1085d1688(uVar14,1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar14;
  FUN_1085d1688(uVar14,0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar17;
  func_0x00010bf1c580(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  dVar20 = dVar21;
  FUN_1085d1788();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  func_0x00010c23d0a0(uVar2);
  uVar6 = uVar7;
  if (dVar22 != dVar20) {
    FUN_1085d1510(uVar7,uVar19,uVar18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
  }
  uVar7 = uVar17;
  func_0x00010bf1c560();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  FUN_1085d1788(0x3fbc28f5c0000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar7 = uVar17;
  func_0x00010c0fa780();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bfe6ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar7 = uVar17;
  func_0x00010bf1be80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  dVar20 = dVar21;
  FUN_1085d1788();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x00010c23d0a0(uVar2);
  uVar7 = uVar10;
  if (dVar22 != dVar20) {
    FUN_1085d1510(uVar10,uVar19,uVar18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
  }
  uVar10 = uVar17;
  func_0x00010bf1c620();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  dVar20 = dVar21;
  FUN_1085d1788();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  func_0x00010c23d0a0(uVar2);
  uVar10 = uVar11;
  if (dVar22 != dVar20) {
    FUN_1085d1510(uVar11,uVar19,uVar18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
  }
  uVar11 = uVar17;
  func_0x00010bf1c6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  dVar20 = dVar21;
  FUN_1085d1788();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  func_0x00010c23d0a0(uVar2);
  uVar11 = uVar12;
  if (dVar22 != dVar20) {
    FUN_1085d1510(uVar12,uVar19,uVar18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
  }
  uVar19 = uVar17;
  func_0x00010bf1bac0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar19;
  FUN_1085d1788(dVar21);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar19);
  uVar19 = uVar17;
  func_0x00010bf1af80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar19 == 0) {
    uVar19 = 0;
  }
  else {
    uVar12 = uVar17;
    func_0x00010bf1af80();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar12;
    FUN_1085d1788(dVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
  }
  puVar13 = PTR_PTR_1126da518;
  _objc_alloc();
  func_0x00010c059cc0();
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar14);
  _objc_release(uVar2);
  _objc_release(uVar17);
  puStack_4c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_4b8 = 0xc2000000;
  pcStack_4b0 = FUN_1085d2070;
  puStack_4a8 = &UNK_11084aaa8;
  uVar16 = *(undefined8 *)(param_3 + 0x28);
  _objc_retain(uVar16);
  puStack_4a0 = puVar13;
  uStack_498 = uVar16;
  _objc_retain(puVar13);
  func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_4c0);
  _objc_release(puStack_4a0);
  _objc_release(uStack_498);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001085d207c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar13 + 0x28) + 0x10))
              (*(long *)(puVar13 + 0x28),*(undefined8 *)(puVar13 + 0x20));
    return;
  }
  return;
}



/* Entry: 1085d2070; end: 1085d207f;  */

void FUN_1085d2070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001085d207c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1085d2080; end: 1085d20d3; +[SCTPresenceBitmojiCache sharedInstance] */

void FUN_1085d2080(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372c488 != -1) {
    func_0x000107c27d9c(0x11372c488,&PTR___NSConcreteGlobalBlock_110a59d10);
  }
  uVar1 = uRam000000011372c480;
  _objc_retain(uRam000000011372c480);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085d20d4; end: 1085d20ff;  */

void FUN_1085d20d4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126da520;
  _objc_opt_new();
  uVar1 = puRam000000011372c480;
  puRam000000011372c480 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085d2100; end: 1085d2193; -[SCTPresenceBitmojiCache setBitmoji:forKey:] */

void FUN_1085d2100(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  if (param_3 == 0) {
    func_0x00010c12d3e0(lVar1,param_2,param_4);
  }
  else {
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
      func_0x00010c25de20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 8);
      *(undefined **)(param_1 + 8) = puVar2;
      _objc_release(uVar3);
      lVar1 = *(long *)(param_1 + 8);
    }
    func_0x00010c1d0560(lVar1,param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085d2194; end: 1085d219b; -[SCTPresenceBitmojiCache bitmojiForKey:] */

void FUN_1085d2194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_objectForKey__1126159e0)
  ;
  return;
}



/* Entry: 1085d219c; end: 1085d2223; -[SCTPresenceBitmojiCache .cxx_destruct] */

void FUN_1085d219c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085d2224; end: 1085d271b; -[SCTPresenceBitmojiView initWithBitmoji:petVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1085d2224(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  undefined *puStack_c0;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_a8 = PTR_PTR_1126fcf80;
  dVar15 = *(double *)(PTR__CGRectZero_110347608 + 8);
  puVar2 = &uStack_b0;
  uStack_b0 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,dVar15,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar2,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = param_3;
    iStack_b4 = param_4;
    func_0x00010c28ece0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_112776fd8;
    uVar6 = *(undefined8 *)((long)puVar2 + lVar9);
    *(long *)((long)puVar2 + lVar9) = lVar3;
    _objc_release(uVar6);
    lVar3 = param_3;
    func_0x00010c27e240();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_112776fdc;
    uVar6 = *(undefined8 *)((long)puVar2 + lVar10);
    *(long *)((long)puVar2 + lVar10) = lVar3;
    _objc_release(uVar6);
    lVar3 = param_3;
    func_0x00010c0f70a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_112776fe0);
    *(long *)((long)puVar2 + (long)_DAT_112776fe0) = lVar3;
    _objc_release(uVar6);
    lVar3 = param_3;
    func_0x00010c294c40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_112776fe4;
    uVar6 = *(undefined8 *)((long)puVar2 + lVar11);
    *(long *)((long)puVar2 + lVar11) = lVar3;
    _objc_release(uVar6);
    lVar3 = param_3;
    func_0x00010c29f2e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_112776fe8;
    uVar6 = *(undefined8 *)((long)puVar2 + lVar12);
    *(long *)((long)puVar2 + lVar12) = lVar3;
    _objc_release(uVar6);
    lVar3 = param_3;
    func_0x00010bfeb5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_112776fec;
    uVar6 = *(undefined8 *)((long)puVar2 + lVar13);
    *(long *)((long)puVar2 + lVar13) = lVar3;
    _objc_release(uVar6);
    lVar3 = param_3;
    func_0x00010bf1afa0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112776ff0;
    uVar6 = *(undefined8 *)((long)puVar2 + lVar7);
    *(long *)((long)puVar2 + lVar7) = lVar3;
    _objc_release(uVar6);
    uStack_a0 = *(undefined8 *)((long)puVar2 + lVar9);
    uStack_98 = *(undefined8 *)((long)puVar2 + lVar10);
    uStack_90 = *(undefined8 *)((long)puVar2 + lVar11);
    uStack_88 = *(undefined8 *)((long)puVar2 + lVar12);
    uStack_80 = *(undefined8 *)((long)puVar2 + lVar13);
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010c0d3c80();
    _objc_release(puVar8);
    if (*(long *)((long)puVar2 + lVar7) != 0) {
      func_0x00010befa120(puVar4);
    }
    puStack_c0 = puVar4;
    func_0x00010bdd8a40(puVar2);
    puVar8 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar7 = (long)_DAT_112776ff4;
    uVar6 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined **)((long)puVar2 + lVar7) = puVar8;
    _objc_release(uVar6);
    puVar8 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c08e6a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar9 = (long)_DAT_112776ff8;
    uVar6 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined **)((long)puVar2 + lVar9) = puVar8;
    _objc_release(uVar6);
    _objc_release(lVar3);
    puVar8 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c140b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar10 = (long)_DAT_112776ffc;
    uVar6 = *(undefined8 *)((long)puVar2 + lVar10);
    *(undefined **)((long)puVar2 + lVar10) = puVar8;
    _objc_release(uVar6);
    _objc_release(lVar3);
    puVar8 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c27e200(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar11 = (long)_DAT_112777000;
    uVar6 = *(undefined8 *)((long)puVar2 + lVar11);
    *(undefined **)((long)puVar2 + lVar11) = puVar8;
    _objc_release(uVar6);
    _objc_release(lVar3);
    lStack_c8 = lVar7;
    func_0x00010c182220(*(undefined8 *)((long)puVar2 + lVar7));
    func_0x00010c182220(*(undefined8 *)((long)puVar2 + lVar9));
    func_0x00010c182220(*(undefined8 *)((long)puVar2 + lVar10));
    func_0x00010c182220(*(undefined8 *)((long)puVar2 + lVar11));
    *(undefined8 *)((long)puVar2 + (long)_DAT_112777004) = 0;
    puVar8 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_112777008);
    *(undefined **)((long)puVar2 + (long)_DAT_112777008) = puVar8;
    _objc_release(uVar6);
    _objc_release(puVar4);
    lVar3 = param_3;
    func_0x00010c0fa7e0();
    _objc_retainAutoreleasedReturnValue();
    iVar1 = 0;
    if (lVar3 != 0) {
      iVar1 = iStack_b4;
    }
    if (iVar1 == 1) {
      puVar8 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
    }
    else {
      puVar8 = (undefined *)0x0;
    }
    lVar7 = (long)_DAT_11277700c;
    _objc_retain(puVar8);
    uVar6 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined **)((long)puVar2 + lVar7) = puVar8;
    _objc_release(uVar6);
    if (iVar1 != 0) {
      _objc_release(puVar8);
    }
    func_0x00010c182220(*(undefined8 *)((long)puVar2 + lVar7));
    func_0x00010c23d0a0(lVar3);
    dVar14 = 0.0;
    if (0.0 < dVar15) {
      func_0x00010c23d0a0(lVar3);
      func_0x00010c23d0a0(lVar3);
      dVar14 = dVar14 / dVar15;
    }
    *(double *)((long)puVar2 + (long)_DAT_112777010) = dVar14;
    if (*(long *)((long)puVar2 + lVar7) != 0) {
      func_0x00010befbb60(puVar2);
    }
    func_0x00010befbb60(puVar2);
    func_0x00010befbb60(puVar2);
    func_0x00010befbb60(puVar2);
    func_0x00010befbb60(puVar2);
    func_0x00010befbb60(puVar2);
    func_0x00010be79400(puVar2);
    _objc_release(lVar3);
    _objc_release(puStack_c0);
  }
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar2;
  }
  ___stack_chk_fail();
  plVar5 = &lStack_100;
  pcStack_d8 = FUN_1085d271c;
  uVar6 = *(undefined8 *)(lVar3 + _DAT_112776ff4);
  puStack_f0 = puVar2;
  lStack_e8 = param_3;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010c08c0e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar6);
  puStack_f8 = PTR_PTR_1126fcf80;
  lStack_100 = lVar3;
  _objc_msgSendSuper2(&lStack_100,PTR_s_dealloc_112525b20);
  return plVar5;
}



/* Entry: 1085d271c; end: 1085d2783; -[SCTPresenceBitmojiView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d271c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112776ff4);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126fcf80;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1085d2784; end: 1085d27b3; -[SCTPresenceBitmojiView setState:] */

void FUN_1085d2784(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
  uStack_28 = param_3[5];
  uStack_30 = param_3[4];
  uStack_18 = param_3[7];
  uStack_20 = param_3[6];
  func_0x00010c28b2a0(param_1,param_2,&uStack_50);
  return;
}



/* Entry: 1085d27b4; end: 1085d27c3; -[SCTPresenceBitmojiView handsHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1085d27b4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112777014);
}



/* Entry: 1085d27c4; end: 1085d2877; -[SCTPresenceBitmojiView setHandsHidden:] */

/* WARNING: Possible PIC construction at 0x0001085d27f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001085d2848: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001085d27fc) */
/* WARNING: Removing unreachable block (ram,0x0001085d281c) */
/* WARNING: Removing unreachable block (ram,0x0001085d2830) */
/* WARNING: Removing unreachable block (ram,0x0001085d2834) */
/* WARNING: Removing unreachable block (ram,0x0001085d283c) */
/* WARNING: Removing unreachable block (ram,0x0001085d2840) */
/* WARNING: Removing unreachable block (ram,0x0001085d2800) */
/* WARNING: Removing unreachable block (ram,0x0001085d284c) */
/* WARNING: Removing unreachable block (ram,0x0001085d2850) */
/* WARNING: Removing unreachable block (ram,0x0001085d2854) */
/* WARNING: Removing unreachable block (ram,0x0001085d2858) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d27c4(long param_1,undefined8 param_2,uint param_3)

{
  *(char *)(param_1 + _DAT_112777014) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)(param_3 ^ 1),*(undefined8 *)(param_1 + _DAT_112776ff8),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1085d2878; end: 1085d288f; -[SCTPresenceBitmojiView setPetHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d2878(long param_1)

{
  if (*(long *)(param_1 + _DAT_11277700c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_11277700c),PTR_s_setHidden__1126479f8);
    return;
  }
  return;
}



/* Entry: 1085d2890; end: 1085d28a7; -[SCTPresenceBitmojiView setLaptopHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d2890(long param_1)

{
  if (*(long *)(param_1 + _DAT_112777008) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112777008),PTR_s_setHidden__1126479f8);
    return;
  }
  return;
}



/* Entry: 1085d28a8; end: 1085d28ff; -[SCTPresenceBitmojiView avatarSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1085d28a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_112776ff4);
  func_0x00010bfe6ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1085d2900; end: 1085d2977; -[SCTPresenceBitmojiView updateToState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d2900(long param_1,undefined8 param_2,double *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  ushort uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  pdVar1 = (double *)(param_1 + _DAT_112777018);
  uVar5 = NEON_uminv(CONCAT26(-(ushort)(pdVar1[3] == param_3[3]),
                              CONCAT24(-(ushort)(pdVar1[2] == param_3[2]),
                                       CONCAT22(-(ushort)(pdVar1[1] == param_3[1]),
                                                -(ushort)(*pdVar1 == *param_3)))),2);
  if ((uVar5 & 1) != 0) {
    bVar4 = false;
    if ((pdVar1[5] == param_3[5] && pdVar1[6] == param_3[6]) &&
       (bVar4 = false, !NAN(pdVar1[7]) && !NAN(param_3[7]))) {
      bVar4 = pdVar1[7] == param_3[7];
    }
    if (bVar4) {
      return;
    }
  }
  dVar3 = param_3[1];
  dVar2 = *param_3;
  dVar7 = param_3[3];
  dVar6 = param_3[2];
  dVar8 = param_3[4];
  dVar10 = param_3[7];
  dVar9 = param_3[6];
  pdVar1[5] = param_3[5];
  pdVar1[4] = dVar8;
  pdVar1[7] = dVar10;
  pdVar1[6] = dVar9;
  pdVar1[1] = dVar3;
  *pdVar1 = dVar2;
  pdVar1[3] = dVar7;
  pdVar1[2] = dVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bee15b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSubviewConstraints_112595f10);
  return;
}



/* Entry: 1085d2978; end: 1085d2a57; -[SCTPresenceBitmojiView sizeForState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1085d2978(double param_1,double param_2,long param_3,undefined8 param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  func_0x00010bf13180();
  param_1 = param_1 * *param_5;
  dVar3 = param_1 * 0.5;
  func_0x00010bdd1da0(param_3);
  dVar2 = param_5[2];
  dVar1 = -dVar2;
  if (0.0 <= dVar2) {
    dVar1 = dVar2;
  }
  dVar2 = param_1 + dVar3 + dVar1 * 16.0 + 16.0;
  dVar3 = *param_5;
  dStack_78 = param_5[1];
  dStack_80 = *param_5;
  dStack_68 = param_5[3];
  dStack_70 = param_5[2];
  dStack_58 = param_5[5];
  dStack_60 = param_5[4];
  dStack_48 = param_5[7];
  dVar1 = param_5[6];
  dStack_50 = dVar1;
  func_0x00010be34bc0(param_3,param_4,&dStack_80);
  if (*(long *)(param_3 + _DAT_11277700c) != 0) {
    dVar2 = dVar2 + param_2 * 0.5 * param_5[5] * *(double *)(param_3 + _DAT_112777010) +
                    param_5[7] + 4.0;
  }
  auVar4._8_8_ = param_2 * dVar3 - dVar1;
  auVar4._0_8_ = dVar2;
  return auVar4;
}



/* Entry: 1085d2a58; end: 1085d2adb; -[SCTPresenceBitmojiView attachBubbleView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d2a58(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277701c;
  if (*(long *)(param_1 + lVar2) != param_3) {
    func_0x00010c12c960();
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    lVar3 = (long)_DAT_112776ff4;
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
    func_0x00010c129300(*(undefined8 *)(param_1 + lVar2),param_2,param_1,
                        *(undefined8 *)(param_1 + lVar3));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085d2adc; end: 1085d2b1f; -[SCTPresenceBitmojiView detachBubbleView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d2adc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277701c;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1085d2b20; end: 1085d2ce7; -[SCTPresenceBitmojiView setBodyStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d2b20(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112777004);
  if (param_3 == uVar1) {
    return;
  }
  *(ulong *)(param_1 + _DAT_112777004) = param_3;
  func_0x00010c1a5540(param_1,param_2,0);
  func_0x00010c1dae20(param_1);
  func_0x00010c1b7580(param_1);
  func_0x00010c1677c0((double)(*(byte *)(param_1 + _DAT_112777014) ^ 1),
                      *(undefined8 *)(param_1 + _DAT_112776ff8));
  if ((long)param_3 < 3) {
    if ((((param_3 == 0) || (param_3 == 1)) || (param_3 == 2)) &&
       (func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112776ff4)), uVar1 < 3)) {
      return;
    }
    goto LAB_1085d2ccc;
  }
  if ((long)param_3 < 5) {
    if (param_3 == 3) {
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112776ff4));
      func_0x00010c1a5540(param_1);
      func_0x00010c1dae20(param_1);
      func_0x00010c1b7580(param_1);
      goto LAB_1085d2ccc;
    }
    if (param_3 != 4) goto LAB_1085d2ccc;
  }
  else if ((param_3 != 5) && (param_3 != 6)) goto LAB_1085d2ccc;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112776ff4));
  func_0x00010c1a5540(param_1);
LAB_1085d2ccc:
  func_0x00010be79400(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bee15b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSubviewConstraints_112595f10);
  return;
}



/* Entry: 1085d2ce8; end: 1085d2e03; -[SCTPresenceBitmojiView _calculateWidestAvatarWidthInImages:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1085d2ce8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
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
  _objc_retain(param_3);
  dVar5 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar2 = *plStack_120;
    do {
      lVar3 = 0;
      do {
        if (*plStack_120 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        lVar4 = (long)_DAT_112776fd0;
        dVar6 = *(double *)(param_1 + lVar4);
        func_0x00010c23d0a0(*(undefined8 *)(lStack_128 + lVar3 * 8));
        if (dVar5 <= dVar6) {
          dVar5 = dVar6;
        }
        *(double *)(param_1 + lVar4) = dVar5;
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return dVar5;
  }
  ___stack_chk_fail();
  return *(double *)(param_3 + _DAT_112776fd0) * 0.5;
}



/* Entry: 1085d2e04; end: 1085d2e1b; -[SCTPresenceBitmojiView _avatarLeadingOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1085d2e04(long param_1)

{
  return *(double *)(param_1 + _DAT_112776fd0) * 0.5;
}



/* Entry: 1085d2e1c; end: 1085d2e63; -[SCTPresenceBitmojiView _bitmojiTrailingOffsetForState:] */

double FUN_1085d2e1c(double param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  
  func_0x00010bf13180();
  dVar1 = param_1 * *param_4;
  func_0x00010bdd1da0(param_2);
  return param_1 + dVar1 * -0.5;
}



/* Entry: 1085d2e64; end: 1085d3103; -[SCTPresenceBitmojiView _prepareSubviewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d2e64(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_112776ff4;
  uVar1 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bfe6ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bfe6ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar1);
  func_0x00010c0bbfe0(*(undefined8 *)(param_1 + lVar10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(puVar2);
      }
      func_0x00010c0bbfe0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar11 = puVar11 + 1;
    } while (puVar3 != puVar11);
    puVar3 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  func_0x00010c0bbfe0(*(undefined8 *)(param_1 + _DAT_112777000));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfe0(*(undefined8 *)(param_1 + _DAT_112777008));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar10 = *(long *)(param_1 + _DAT_11277700c);
  func_0x00010c0bbfe0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar9 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar9;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = "d";
  pcVar5 = pcVar6;
  FUN_1085d3490("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,pcVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar5);
  _objc_release(lVar4);
  _objc_release(lVar9);
  lVar9 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar9;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1085d3490("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,pcVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar6);
  _objc_release(lVar4);
  _objc_release(lVar9);
  lVar9 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar9;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = "@";
  pcVar5 = pcVar6;
  FUN_1085d3490("@");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,pcVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar5);
  _objc_release(lVar4);
  _objc_release(lVar9);
  lVar9 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar9;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar6;
  FUN_1085d3490("@");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,pcVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar5);
  _objc_release(lVar4);
  _objc_release(lVar9);
  lVar9 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar9;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar6;
  FUN_1085d3490("@");
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,pcVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(pcVar5);
  _objc_release(lVar4);
  _objc_release(lVar9);
  lVar9 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = lVar9;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(lVar10 + 0x20);
  func_0x00010c0bbf80();
  _objc_retainAutoreleasedReturnValue();
  FUN_1085d3490("@");
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,pcVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd1da0(*(undefined8 *)(lVar10 + 0x20));
  (**(code **)(lVar8 + 0x10))(lVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(pcVar6);
  _objc_release(uVar1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 1085d3104; end: 1085d348f;  */

void FUN_1085d3104(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = "d";
  pcVar3 = pcVar4;
  FUN_1085d3490("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1085d3490("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = "@";
  pcVar3 = pcVar4;
  FUN_1085d3490("@");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar4;
  FUN_1085d3490("@");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar4;
  FUN_1085d3490("@");
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c113d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(pcVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbf80();
  _objc_retainAutoreleasedReturnValue();
  FUN_1085d3490("@");
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd1da0(*(undefined8 *)(param_1 + 0x20));
  (**(code **)(lVar6 + 0x10))(lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(pcVar4);
  _objc_release(uVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085d3490; end: 1085d3817;  */

void FUN_1085d3490(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *in_stack_00000000;
  
  bVar1 = *param_1;
  if ((bVar1 == 0x40) && (param_1[1] == 0)) {
    _objc_retain(in_stack_00000000);
    puVar3 = in_stack_00000000;
  }
  else {
    pbVar2 = param_1;
    _strcmp(param_1,"{CGPoint=dd}");
    if ((((int)pbVar2 == 0) || (pbVar2 = param_1, _strcmp(param_1,"{CGSize=dd}"), (int)pbVar2 == 0))
       || (pbVar2 = param_1, _strcmp(param_1,"{UIEdgeInsets=dddd}"), (int)pbVar2 == 0)) {
      puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c296da0(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = (undefined *)0x0;
      if (bVar1 < 99) {
        if (bVar1 < 0x49) {
          if (bVar1 == 0x42) {
            if (param_1[1] == 0) {
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_1085d37d8;
            }
          }
          else {
            if (bVar1 != 0x43) goto LAB_1085d37d8;
            if (param_1[1] == 0) {
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df800(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_1085d37d8;
            }
          }
        }
        else if (bVar1 == 0x49) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1085d37d8;
          }
        }
        else if (bVar1 == 0x51) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df860(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1085d37d8;
          }
        }
        else {
          if (bVar1 != 0x53) goto LAB_1085d37d8;
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df8a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1085d37d8;
          }
        }
      }
      else if (bVar1 < 0x69) {
        if (bVar1 == 99) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df700(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1085d37d8;
          }
        }
        else if (bVar1 == 100) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df720(in_stack_00000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1085d37d8;
          }
        }
        else {
          if (bVar1 != 0x66) goto LAB_1085d37d8;
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df740((float)(double)in_stack_00000000,
                                PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1085d37d8;
          }
        }
      }
      else if (bVar1 == 0x69) {
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1085d37d8;
        }
      }
      else if (bVar1 == 0x71) {
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1085d37d8;
        }
      }
      else {
        if (bVar1 != 0x73) goto LAB_1085d37d8;
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1085d37d8;
        }
      }
      puVar3 = (undefined *)0x0;
    }
  }
LAB_1085d37d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1085d3818; end: 1085d3a63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d3818(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bfe6ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  func_0x00010c0df720(puVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bfe6ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  func_0x00010c0df720(param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  if (*(long *)(param_3 + 0x20) == *(long *)(*(long *)(param_3 + 0x28) + (long)_DAT_112776ff8)) {
    func_0x00010c140820();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c08e360();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x28) + (long)_DAT_112776ff4);
  func_0x00010c0bbec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085d3a64; end: 1085d3d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d3a64(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112777000;
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar8);
  func_0x00010bfe6ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  pcVar5 = "d";
  pcVar4 = pcVar5;
  FUN_1085d3490("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar8);
  func_0x00010bfe6ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  FUN_1085d3490("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar8);
  func_0x00010bfe6ac0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  (**(code **)(lVar7 + 0x10))(param_1 * 0.15000000596046448,lVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085d3d10; end: 1085d3fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d3d10(undefined8 param_1,double param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112777008;
  uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x20) + lVar7);
  _objc_retain(param_4);
  func_0x00010bfe6ac0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar6);
  lVar1 = param_4;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x20) + lVar7);
  func_0x00010bfe6ac0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  pcVar4 = "d";
  pcVar3 = pcVar4;
  FUN_1085d3490("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar3);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1085d3490("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar7;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(param_2 * 0.6499999761581421 + 2.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar7;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085d3fbc; end: 1085d408f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d3fbc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112776ff4);
  func_0x00010c0bc040(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x4010000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085d4090; end: 1085d40bf; -[SCTPresenceBitmojiView _headOffsetForState:] */

double FUN_1085d4090(undefined8 param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_3[1] * 68.0 * *param_3;
  dVar2 = dVar1 * 0.75;
  if (0.4 <= param_3[1]) {
    dVar2 = dVar1;
  }
  return dVar2;
}



/* Entry: 1085d40c0; end: 1085d450f; -[SCTPresenceBitmojiView _updateSubviewConstraintsForState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d40c0(ulong param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_178 = param_3[1];
  uStack_180 = *param_3;
  uStack_168 = param_3[3];
  uStack_170 = param_3[2];
  uStack_158 = param_3[5];
  uStack_160 = param_3[4];
  uStack_148 = param_3[7];
  uStack_150 = param_3[6];
  func_0x00010be34bc0(param_1,param_2,&uStack_180);
  func_0x00010bf13180(param_1);
  func_0x00010bf13180(param_1);
  lVar9 = (long)_DAT_112776ff4;
  func_0x00010c0bc060(*(undefined8 *)(param_1 + lVar9));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112776ffc;
  uStack_138 = *(undefined8 *)(param_1 + (long)_DAT_112776ff8);
  uStack_130 = *(undefined8 *)(param_1 + lVar5);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar1);
      }
      func_0x00010c0bc060();
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar12 = puVar12 + 1;
    } while (puVar2 != puVar12);
    puVar2 = puVar1;
    func_0x00010bf52a60();
  }
  _objc_release(puVar1);
  lVar10 = (long)_DAT_112777000;
  func_0x00010c0bc060(*(undefined8 *)(param_1 + lVar10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bc060(*(undefined8 *)(param_1 + (long)_DAT_112777008));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf13180(param_1);
  lVar3 = (long)_DAT_11277700c;
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c0bc060(*(undefined8 *)(param_1 + lVar3));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar11 = (long)_DAT_11277701c;
  lVar3 = *(long *)(param_1 + lVar11);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + lVar9);
  _objc_release();
  if (lVar3 == lVar9) {
    uStack_178 = param_3[1];
    uStack_180 = *param_3;
    uStack_168 = param_3[3];
    uStack_170 = param_3[2];
    uStack_158 = param_3[5];
    uStack_160 = param_3[4];
    uStack_148 = param_3[7];
    uStack_150 = param_3[6];
    func_0x00010c284860(*(undefined8 *)(param_1 + lVar11));
  }
  uVar4 = param_1;
  func_0x00010bfd3640();
  if ((uVar4 & 1) == 0) {
    uVar13 = 0x3ff0000000000000;
    if (0.0 < (double)param_3[3]) {
      uVar13 = 0;
    }
    func_0x00010c1677c0(uVar13,*(undefined8 *)(param_1 + lVar5));
    uVar13 = 0x3ff0000000000000;
    if ((double)param_3[3] <= 0.0) {
      uVar13 = 0;
    }
    uVar4 = *(ulong *)(param_1 + lVar10);
    func_0x00010c1677c0(uVar13);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar7 = "d";
  pcVar6 = pcVar7;
  FUN_1085d3490("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,pcVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar6);
  _objc_release(lVar3);
  _objc_release(lVar5);
  lVar5 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1085d3490("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,pcVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar7);
  _objc_release(lVar3);
  _objc_release(lVar5);
  lVar5 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  (**(code **)(lVar3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  dVar14 = *(double *)(uVar4 + 0x38);
  (**(code **)(lVar10 + 0x10))(dVar14);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar5);
  lVar5 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(uVar4 + 0x20);
  func_0x00010c0bbf80();
  _objc_retainAutoreleasedReturnValue();
  pcVar7 = "@";
  pcVar6 = pcVar7;
  FUN_1085d3490("@");
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  (**(code **)(lVar3 + 0x10))(lVar3,pcVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd1da0(*(undefined8 *)(uVar4 + 0x20));
  (**(code **)(lVar10 + 0x10))(dVar14 + *(double *)(uVar4 + 0x40),lVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(pcVar6);
  _objc_release(uVar13);
  _objc_release(lVar3);
  _objc_release(lVar5);
  lVar5 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = pcVar7;
  FUN_1085d3490("@");
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  (**(code **)(lVar3 + 0x10))(lVar3,pcVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  dVar14 = *(double *)(uVar4 + 0x68);
  func_0x00010bdd4b00(*(undefined8 *)(uVar4 + 0x20));
  (**(code **)(lVar10 + 0x10))(-dVar14,lVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(pcVar6);
  _objc_release(lVar3);
  _objc_release(lVar5);
  lVar5 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1085d3490("@");
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  (**(code **)(lVar3 + 0x10))(lVar3,pcVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  dVar14 = *(double *)(uVar4 + 0x68);
  func_0x00010bdd4b00(*(undefined8 *)(uVar4 + 0x20));
  lVar11 = lVar10;
  (**(code **)(lVar10 + 0x10))(-dVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar11;
  func_0x00010c113d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(pcVar7);
  _objc_release(lVar3);
  _objc_release(lVar5);
  return;
}



/* Entry: 1085d4510; end: 1085d497f;  */

void FUN_1085d4510(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = "d";
  pcVar3 = pcVar4;
  FUN_1085d3490("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1085d3490("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  dVar10 = *(double *)(param_1 + 0x38);
  (**(code **)(lVar6 + 0x10))(dVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbf80();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = "@";
  pcVar3 = pcVar4;
  FUN_1085d3490("@");
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd1da0(*(undefined8 *)(param_1 + 0x20));
  (**(code **)(lVar6 + 0x10))(dVar10 + *(double *)(param_1 + 0x40),lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(pcVar3);
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar4;
  FUN_1085d3490("@");
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  dVar10 = *(double *)(param_1 + 0x68);
  func_0x00010bdd4b00(*(undefined8 *)(param_1 + 0x20));
  (**(code **)(lVar6 + 0x10))(-dVar10,lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(pcVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1085d3490("@");
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  dVar10 = *(double *)(param_1 + 0x68);
  func_0x00010bdd4b00(*(undefined8 *)(param_1 + 0x20));
  lVar8 = lVar6;
  (**(code **)(lVar6 + 0x10))(-dVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c113d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(pcVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 1085d4980; end: 1085d4bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d4980(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + (long)_DAT_112776ff8);
  _objc_retain(param_2);
  lVar5 = param_2;
  if (lVar1 == lVar6) {
    lVar1 = param_2;
    func_0x00010c140820();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_112776ff4);
    func_0x00010c0bbec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    (**(code **)(lVar6 + 0x10))(lVar6,uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(*(double *)(param_1 + 0x70) + *(double *)(param_1 + 0x50) * 7.5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(lVar6);
    _objc_release(lVar1);
    func_0x00010bf1fec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar1 = lVar5;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(*(double *)(param_1 + 0x50) * -2.200000047683716);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010c08e360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar1 = lVar5;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x28) + (long)_DAT_112776ff4);
    func_0x00010c0bbec0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    (**(code **)(lVar1 + 0x10))(lVar1,lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(param_1 + 0x70));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1085d4bbc; end: 1085d4df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d4bbc(long param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  lVar7 = (long)_DAT_112777000;
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7);
  _objc_retain(param_2);
  func_0x00010bfe6ac0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar9 = *(double *)(param_1 + 0x28);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7);
  func_0x00010bfe6ac0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar8 = *(double *)(param_1 + 0x28);
  _objc_release(uVar6);
  lVar7 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "d";
  pcVar2 = pcVar3;
  FUN_1085d3490("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,pcVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar2);
  _objc_release(lVar1);
  _objc_release(lVar7);
  lVar7 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1085d3490("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,pcVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar3);
  _objc_release(lVar1);
  _objc_release(lVar7);
  lVar7 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar1 = lVar7;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbea0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  (**(code **)(lVar1 + 0x10))(lVar1,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(-(dVar9 * dVar8 * *(double *)(param_1 + 0x40)));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar6);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 1085d4df4; end: 1085d4f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d4df4(undefined8 param_1,double param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  
  uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x20) + (long)_DAT_112777008);
  _objc_retain(param_4);
  func_0x00010bfe6ac0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar5);
  dVar6 = *(double *)(param_3 + 0x48);
  lVar1 = param_4;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(param_2 * 0.6499999761581421 * (1.0 - dVar6) + 2.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085d4f04; end: 1085d537f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d4f04(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = "d";
  pcVar3 = pcVar4;
  FUN_1085d3490("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1085d3490("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(*(double *)(param_1 + 0x30) * (1.0 - *(double *)(param_1 + 0x68)));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112776ff4);
  func_0x00010c0bc040(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(*(double *)(param_1 + 0x70) + 4.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = "@";
  pcVar3 = pcVar4;
  FUN_1085d3490("@");
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  dVar10 = *(double *)(param_1 + 0x58);
  func_0x00010bdd4b00(*(undefined8 *)(param_1 + 0x20));
  (**(code **)(lVar7 + 0x10))(-dVar10,lVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(pcVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1085d3490("@");
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  dVar10 = *(double *)(param_1 + 0x58);
  func_0x00010bdd4b00(*(undefined8 *)(param_1 + 0x20));
  lVar8 = lVar7;
  (**(code **)(lVar7 + 0x10))(-dVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c113d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(pcVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 1085d5380; end: 1085d53bb; -[SCTPresenceBitmojiView _updateSubviewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d5380(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112777018);
  uStack_48 = puVar1[1];
  uStack_50 = *puVar1;
  uStack_38 = puVar1[3];
  uStack_40 = puVar1[2];
  uStack_28 = puVar1[5];
  uStack_30 = puVar1[4];
  uStack_18 = puVar1[7];
  uStack_20 = puVar1[6];
  func_0x00010bee15c0(param_1,param_2,&uStack_50);
  return;
}



/* Entry: 1085d53bc; end: 1085d54af; -[SCTPresenceBitmojiView _animationCallbackFromState:toState:] */

void FUN_1085d53bc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_b0 = 0xc2000000;
  uStack_88 = param_3[1];
  uStack_90 = *param_3;
  uStack_78 = param_3[3];
  uStack_80 = param_3[2];
  uStack_68 = param_3[5];
  uStack_70 = param_3[4];
  uStack_58 = param_3[7];
  uStack_60 = param_3[6];
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  uStack_38 = param_4[3];
  uStack_40 = param_4[2];
  uStack_28 = param_4[5];
  uStack_30 = param_4[4];
  uStack_18 = param_4[7];
  uStack_20 = param_4[6];
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x1085d5438;
  puStack_a0 = &UNK_110a59df0;
  uStack_98 = param_1;
  _objc_retainBlock(&puStack_b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085d54b0; end: 1085d55e7; -[SCTPresenceBitmojiView _prepareAnimationWithAnimator:curve:fromInterval:toInterval:fromState:toState:completion:] */

void FUN_1085d54b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  
  _objc_retain(param_9);
  uStack_98 = param_7[1];
  uStack_a0 = *param_7;
  uStack_88 = param_7[3];
  uStack_90 = param_7[2];
  uStack_78 = param_7[5];
  uStack_80 = param_7[4];
  uStack_68 = param_7[7];
  uStack_70 = param_7[6];
  uStack_d8 = param_8[1];
  uStack_e0 = *param_8;
  uStack_c8 = param_8[3];
  uStack_d0 = param_8[2];
  uStack_b8 = param_8[5];
  uStack_c0 = param_8[4];
  uStack_a8 = param_8[7];
  uStack_b0 = param_8[6];
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bdcb500(param_3,param_4,&uStack_a0,&uStack_e0);
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_1085d55e8;
  puStack_138 = &UNK_110a59e20;
  uStack_118 = param_8[1];
  uStack_120 = *param_8;
  uStack_108 = param_8[3];
  uStack_110 = param_8[2];
  uStack_f8 = param_8[5];
  uStack_100 = param_8[4];
  uStack_e8 = param_8[7];
  uStack_f0 = param_8[6];
  uStack_130 = param_3;
  uStack_128 = param_9;
  _objc_retain(param_9);
  func_0x00010bef8580(param_1,param_2,0,0x3ff0000000000000,param_5,param_4,param_6,uVar1,
                      &puStack_150);
  _objc_release(param_5);
  _objc_release(uStack_128);
  _objc_release(param_9);
  _objc_release(uVar1);
  return;
}



/* Entry: 1085d55e8; end: 1085d561b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d55e8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112777018);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  puVar1[5] = *(undefined8 *)(param_1 + 0x58);
  puVar1[4] = uVar2;
  puVar1[7] = uVar4;
  puVar1[6] = uVar3;
  puVar1[1] = uVar8;
  *puVar1 = uVar7;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085d5614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1085d561c; end: 1085d5753; -[SCTPresenceBitmojiView _prepareAnimationWithAnimator:bounceFactor:fromInterval:toInterval:fromState:toState:completion:] */

void FUN_1085d561c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  
  _objc_retain(param_9);
  uStack_98 = param_7[1];
  uStack_a0 = *param_7;
  uStack_88 = param_7[3];
  uStack_90 = param_7[2];
  uStack_78 = param_7[5];
  uStack_80 = param_7[4];
  uStack_68 = param_7[7];
  uStack_70 = param_7[6];
  uStack_d8 = param_8[1];
  uStack_e0 = *param_8;
  uStack_c8 = param_8[3];
  uStack_d0 = param_8[2];
  uStack_b8 = param_8[5];
  uStack_c0 = param_8[4];
  uStack_a8 = param_8[7];
  uStack_b0 = param_8[6];
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010bdcb500(param_4,param_5,&uStack_a0,&uStack_e0);
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_1085d5754;
  puStack_138 = &UNK_110a59e20;
  uStack_118 = param_8[1];
  uStack_120 = *param_8;
  uStack_108 = param_8[3];
  uStack_110 = param_8[2];
  uStack_f8 = param_8[5];
  uStack_100 = param_8[4];
  uStack_e8 = param_8[7];
  uStack_f0 = param_8[6];
  uStack_130 = param_4;
  uStack_128 = param_9;
  _objc_retain(param_9);
  func_0x00010bef7300(param_1,param_2,param_3,0,0x3ff0000000000000,param_6,param_5,uVar1,
                      &puStack_150);
  _objc_release(param_6);
  _objc_release(uStack_128);
  _objc_release(param_9);
  _objc_release(uVar1);
  return;
}



/* Entry: 1085d5754; end: 1085d5787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d5754(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112777018);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  puVar1[5] = *(undefined8 *)(param_1 + 0x58);
  puVar1[4] = uVar2;
  puVar1[7] = uVar4;
  puVar1[6] = uVar3;
  puVar1[1] = uVar8;
  *puVar1 = uVar7;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085d5780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1085d5788; end: 1085d57a7; -[SCTPresenceBitmojiView state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d5788(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112777018);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  uVar4 = puVar1[7];
  uVar3 = puVar1[6];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  return;
}



/* Entry: 1085d57a8; end: 1085d58a7; -[SCTPresenceBitmojiView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d57a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277701c,0);
  _objc_storeStrong(param_1 + _DAT_11277700c,0);
  _objc_storeStrong(param_1 + _DAT_112777008,0);
  _objc_storeStrong(param_1 + _DAT_112777000,0);
  _objc_storeStrong(param_1 + _DAT_112776ffc,0);
  _objc_storeStrong(param_1 + _DAT_112776ff8,0);
  _objc_storeStrong(param_1 + _DAT_112776ff4,0);
  _objc_storeStrong(param_1 + _DAT_112776ff0,0);
  _objc_storeStrong(param_1 + _DAT_112776fec,0);
  _objc_storeStrong(param_1 + _DAT_112776fe8,0);
  _objc_storeStrong(param_1 + _DAT_112776fe4,0);
  _objc_storeStrong(param_1 + _DAT_112776fe0,0);
  _objc_storeStrong(param_1 + _DAT_112776fdc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776fd8,0);
  return;
}



/* Entry: 1085d58a8; end: 1085d58f7; -[SCTAnimator addBitmojiAnimationForView:withCurve:fromInterval:toInterval:fromState:toState:completion:] */

void FUN_1085d58a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_48 = param_5[1];
  uStack_50 = *param_5;
  uStack_38 = param_5[3];
  uStack_40 = param_5[2];
  uStack_28 = param_5[5];
  uStack_30 = param_5[4];
  uStack_18 = param_5[7];
  uStack_20 = param_5[6];
  uStack_88 = param_6[1];
  uStack_90 = *param_6;
  uStack_78 = param_6[3];
  uStack_80 = param_6[2];
  uStack_68 = param_6[5];
  uStack_70 = param_6[4];
  uStack_58 = param_6[7];
  uStack_60 = param_6[6];
  func_0x00010be77f20(param_3,param_2,param_1,param_4,&uStack_50,&uStack_90);
  return;
}



/* Entry: 1085d58f8; end: 1085d594b; -[SCTAnimator addBitmojiAnimationForView:withCurve:fromInterval:toInterval:fromState:toState:] */

void FUN_1085d58f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_48 = param_5[1];
  uStack_50 = *param_5;
  uStack_38 = param_5[3];
  uStack_40 = param_5[2];
  uStack_28 = param_5[5];
  uStack_30 = param_5[4];
  uStack_18 = param_5[7];
  uStack_20 = param_5[6];
  uStack_88 = param_6[1];
  uStack_90 = *param_6;
  uStack_78 = param_6[3];
  uStack_80 = param_6[2];
  uStack_68 = param_6[5];
  uStack_70 = param_6[4];
  uStack_58 = param_6[7];
  uStack_60 = param_6[6];
  func_0x00010be77f20(param_3,param_2,param_1,param_4,&uStack_50,&uStack_90,0);
  return;
}



/* Entry: 1085d594c; end: 1085d599b; -[SCTAnimator addBitmojiAnimationForView:withBounceFactor:fromInterval:toInterval:fromState:toState:completion:] */

void FUN_1085d594c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  uStack_38 = param_4[3];
  uStack_40 = param_4[2];
  uStack_28 = param_4[5];
  uStack_30 = param_4[4];
  uStack_18 = param_4[7];
  uStack_20 = param_4[6];
  uStack_88 = param_5[1];
  uStack_90 = *param_5;
  uStack_78 = param_5[3];
  uStack_80 = param_5[2];
  uStack_68 = param_5[5];
  uStack_70 = param_5[4];
  uStack_58 = param_5[7];
  uStack_60 = param_5[6];
  func_0x00010be77f00(param_3,param_2,param_1,&uStack_50,&uStack_90);
  return;
}



/* Entry: 1085d599c; end: 1085d59ef; -[SCTAnimator addBitmojiAnimationForView:withBounceFactor:fromInterval:toInterval:fromState:toState:] */

void FUN_1085d599c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  uStack_38 = param_4[3];
  uStack_40 = param_4[2];
  uStack_28 = param_4[5];
  uStack_30 = param_4[4];
  uStack_18 = param_4[7];
  uStack_20 = param_4[6];
  uStack_88 = param_5[1];
  uStack_90 = *param_5;
  uStack_78 = param_5[3];
  uStack_80 = param_5[2];
  uStack_68 = param_5[5];
  uStack_70 = param_5[4];
  uStack_58 = param_5[7];
  uStack_60 = param_5[6];
  func_0x00010be77f00(param_3,param_2,param_1,&uStack_50,&uStack_90,0);
  return;
}



/* Entry: 1085d59f0; end: 1085d5a5b; -[SCTPresenceBubbleView remakeConstraintsAfterAttachingToBitmojiView:upperBodyView:] */

undefined1 *
FUN_1085d59f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined *puStack_78;
  
  uVar3 = param_2;
  uVar5 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw();
  ppuVar2 = &puStack_80;
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  puStack_78 = PTR_PTR_1126fcf88;
  puStack_80 = puVar1;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar2 + 8),uVar4);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)((long)ppuVar2 + 0x38);
    *(undefined8 *)((long)ppuVar2 + 0x38) = uVar5;
    _objc_release(uVar3);
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
  return (undefined1 *)ppuVar2;
}



/* Entry: 1085d5a5c; end: 1085d5aaf; -[SCTPresenceBubbleView updateConstraintsWithBitmojiState:] */

undefined1 *
FUN_1085d5a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  ppuVar2 = &puStack_60;
  _objc_retain(uVar4);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126fcf88;
  puStack_60 = puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar2 + 8),uVar4);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)ppuVar2 + 0x38);
    *(undefined8 *)((long)ppuVar2 + 0x38) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(uVar4);
  return (undefined1 *)ppuVar2;
}



/* Entry: 1085d5ab0; end: 1085d5b4b; -[SCTPresenceController initWithAvatarServices:presenceRenderGrapheneLogger:] */

undefined1 *
FUN_1085d5ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fcf88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085d5b4c; end: 1085d5c0f; -[SCTPresenceController _initView] */

void FUN_1085d5b4c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc();
  uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar3,uVar4,uVar5,uVar6);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c2025c0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c2026e0(*(undefined8 *)(param_1 + 0x10));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar3,uVar4,uVar5,uVar6);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1085d5c10; end: 1085d5e1f; -[SCTPresenceController _fetchBitmojiForParticipant:] */

void FUN_1085d5c10(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126da4b8;
  _objc_opt_class(PTR_PTR_1126da4b8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = param_3;
    func_0x00010bf1a900();
    bVar1 = uVar3 == 2;
  }
  puVar2 = PTR_PTR_1126da520;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf1acc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf1b640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = puVar4;
  if (puVar4 != (undefined *)0x0 && bVar1) {
    func_0x00010bf1afa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  if (puVar2 == (undefined *)0x0) {
    func_0x00010c283d20(param_3);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1085d5e20;
    puStack_70 = &UNK_110a59e80;
    lStack_68 = param_1;
    _objc_retain(param_3);
    uStack_60 = param_3;
    _objc_retain(puVar4);
    ppuVar5 = &puStack_88;
    puStack_58 = puVar4;
    _objc_retainBlock(ppuVar5);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    uVar3 = param_3;
    func_0x00010bf1acc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c0fa800(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (bVar1) {
      func_0x00010bfa53a0();
    }
    else {
      func_0x00010bfa5220(param_1);
    }
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(param_1);
    _objc_release(ppuVar5);
    _objc_release(puStack_58);
    _objc_release(uStack_60);
  }
  else {
    func_0x00010c283d20(param_3);
    func_0x00010be9b8a0(param_1);
  }
  _objc_release(puVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085d5e20; end: 1085d5f4b;  */

void FUN_1085d5e20(long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_2 == 0) {
    func_0x00010c283d20(*(undefined8 *)(param_1 + 0x28));
    func_0x00010be9b8a0(*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c10ad80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1aa0();
    _objc_release(uVar1);
  }
  else {
    _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1085d5f4c;
    puStack_58 = &UNK_110a59e50;
    _objc_retain(param_3);
    uStack_50 = param_3;
    _objc_copyWeak(auStack_40,auStack_38);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    uStack_48 = uVar1;
    FUN_1085d18fc(param_3,&puStack_70);
    _objc_release(uStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1085d5f4c; end: 1085d5ffb;  */

void FUN_1085d5f4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126da520;
  _objc_retain(param_2);
  func_0x00010c22ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1ba20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170600(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar1);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c283d20(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_2);
  func_0x00010be9b8a0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1085d5ffc; end: 1085d6097; -[SCTPresenceController _fetchBitmojiForParticipantIfNeeded:] */

void FUN_1085d5ffc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if ((uVar2 != 0) && (uVar1 = param_3, func_0x00010c27e260(), (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010c10ac20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((uVar1 == 0) && (uVar1 = param_3, func_0x00010bf1b500(), uVar1 == 0)) {
      func_0x00010be0ff20(param_1,param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085d6098; end: 1085d60eb; -[SCTPresenceController _scheduleUIUpdate] */

undefined8 FUN_1085d6098(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  return *(undefined8 *)(puVar1 + 0x10);
}



/* Entry: 1085d60ec; end: 1085d60f3; -[SCTPresenceController scrollView] */

undefined8 FUN_1085d60ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1085d60f4; end: 1085d60fb; -[SCTPresenceController contentView] */

undefined8 FUN_1085d60f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1085d60fc; end: 1085d6103; -[SCTPresenceController panGestureRecognizer] */

undefined8 FUN_1085d60fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1085d6104; end: 1085d6133; -[SCTPresenceController setPanGestureRecognizer:] */

void FUN_1085d6104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085d6134; end: 1085d613b; -[SCTPresenceController pillPressRecognizer] */

undefined8 FUN_1085d6134(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1085d613c; end: 1085d616b; -[SCTPresenceController setPillPressRecognizer:] */

void FUN_1085d613c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085d616c; end: 1085d6173; -[SCTPresenceController draggingContext] */

undefined8 FUN_1085d616c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1085d6174; end: 1085d61a3; -[SCTPresenceController setDraggingContext:] */

void FUN_1085d6174(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085d61a4; end: 1085d61ab; -[SCTPresenceController presenceRenderGrapheneLogger] */

undefined8 FUN_1085d61a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1085d61ac; end: 1085d6213; -[SCTPresenceController .cxx_destruct] */

void FUN_1085d61ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1085d6214; end: 1085d6353; -[SCTPresencePill _uninstallConstraintsWithLayoutAttribute:] */

void FUN_1085d6214(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar1 = PTR_PTR_1126da528;
  func_0x00010c067aa0(PTR_PTR_1126da528,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar8 = *plStack_120;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(puVar1);
        }
        lVar7 = *(long *)(lStack_128 + (long)puVar9 * 8);
        lVar3 = lVar7;
        func_0x00010bfb1fa0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08c860();
        _objc_release(lVar3);
        if (lVar4 == param_3) {
          func_0x00010c2803c0(lVar7);
        }
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar2 = puVar1;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  func_0x00010bed12a0(puVar1);
  func_0x00010bed12a0(puVar1);
  puStack_188 = &uStack_190;
  uStack_190 = 0;
  uStack_180 = 0x3032000000;
  pcStack_178 = FUN_1085d6478;
  uStack_170 = 0x1085d6488;
  uStack_168 = 0;
  _objc_retain(puVar5);
  func_0x00010c0bbfc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar6 = puStack_188[5];
  _objc_retain(uVar6);
  _objc_release(puVar5);
  __Block_object_dispose(&uStack_190,8);
  _objc_release(uStack_168);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1085d6354; end: 1085d6477; -[SCTPresencePill makeBottomConstraintEqualTo:offset:] */

void FUN_1085d6354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bed12a0(param_1);
  func_0x00010bed12a0(param_1);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1085d6478;
  uStack_40 = 0x1085d6488;
  uStack_38 = 0;
  _objc_retain(param_3);
  func_0x00010c0bbfc0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085d6478; end: 1085d648f;  */

void FUN_1085d6478(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1085d6490; end: 1085d654f;  */

void FUN_1085d6490(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (**(code **)(lVar3 + 0x10))(*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(long *)(lVar6 + 0x28) = lVar4;
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085d6550; end: 1085d6673; -[SCTPresencePill makeLeftConstraintEqualTo:offset:] */

void FUN_1085d6550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bed12a0(param_1);
  func_0x00010bed12a0(param_1);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1085d6478;
  uStack_40 = 0x1085d6488;
  uStack_38 = 0;
  _objc_retain(param_3);
  func_0x00010c0bbfc0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085d6674; end: 1085d6733;  */

void FUN_1085d6674(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (**(code **)(lVar3 + 0x10))(*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(long *)(lVar6 + 0x28) = lVar4;
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085d6734; end: 1085d686b; -[SCTPresencePill uninstallLeftConstraint] */

void FUN_1085d6734(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar1 = PTR_PTR_1126da528;
  func_0x00010c067aa0(PTR_PTR_1126da528,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar7 = *plStack_110;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(puVar1);
        }
        lVar6 = *(long *)(lStack_118 + (long)puVar8 * 8);
        lVar3 = lVar6;
        func_0x00010bfb1fa0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08c860();
        _objc_release(lVar3);
        if (lVar4 == 1) {
          func_0x00010c2803c0(lVar6);
          goto LAB_1085d682c;
        }
        puVar8 = puVar8 + 1;
      } while (puVar2 != puVar8);
      puVar2 = puVar1;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
LAB_1085d682c:
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_1085d6904;
    puStack_168 = &UNK_11084fc28;
    puStack_160 = (undefined1 *)puVar5;
    uStack_158 = uVar9;
    _objc_retain(puVar5);
    func_0x00010c0bbfc0(puVar1,param_2,&puStack_180);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puStack_160);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 1085d686c; end: 1085d6903; -[SCTPresencePill installLeftContraintEqualTo:offset:] */

void FUN_1085d686c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1085d6904;
  puStack_48 = &UNK_11084fc28;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  func_0x00010c0bbfc0(param_2,param_3,&puStack_60);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1085d6904; end: 1085d69ab;  */

void FUN_1085d6904(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


