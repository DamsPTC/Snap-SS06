/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10490a034; end: 10490a0ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10490a034(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(unaff_x20 + _DAT_11309cd30) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(unaff_x20 + _DAT_11309cd38) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11309cd40) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11309cd48) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11309cd50) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11309cd58) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  _swift_retain(puVar1);
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,puVar2);
  return;
}



/* Entry: 10490a0f0; end: 10490a203; -[FBSDKLoginManagerLoginResult initWithToken:authenticationToken:isCancelled:grantedPermissions:declinedPermissions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10490a0f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  _swift_getObjectType();
  puVar2 = PTR___sSSSHsWP_11034da90;
  puVar1 = PTR___sSSN_11034da80;
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ
            (param_6,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_7,puVar1,puVar2)
  ;
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(param_1 + _DAT_11309cd30) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(param_1 + _DAT_11309cd38) = param_3;
  *(undefined8 *)(param_1 + _DAT_11309cd40) = param_4;
  *(undefined1 *)(param_1 + _DAT_11309cd48) = param_5;
  *(undefined8 *)(param_1 + _DAT_11309cd50) = param_6;
  *(undefined8 *)(param_1 + _DAT_11309cd58) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_retain(puVar1);
  _objc_msgSendSuper2(&lStack_70,puVar2);
  return;
}



/* Entry: 10490a204; end: 10490a2df; -[FBSDKLoginManagerLoginResult addLoggingExtra:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10490a204(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_60,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  func_0x0001000bb420(auStack_60,auStack_80);
  _swift_beginAccess(param_1 + _DAT_11309cd30,auStack_98,0x21,0);
  func_0x000100102934(auStack_80,uVar1,param_2);
  _swift_endAccess(auStack_98);
  _objc_release(param_1);
  func_0x000100183ab8(auStack_60);
  return;
}



/* Entry: 10490a2e0; end: 10490a32b;  */

void FUN_10490a2e0(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 10490a32c; end: 10490a38b; -[FBSDKLoginManagerLoginResult init] */

void FUN_10490a32c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FBSDKLoginKit.LoginManagerLoginResult",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10490a358);
  (*pcVar1)();
}



/* Entry: 10490a38c; end: 10490a41f; -[FBSDKLoginManagerLoginResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10490a38c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11309cd38));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11309cd40));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309cd50));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309cd58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11309cd30));
  return;
}



/* Entry: 10490a420; end: 10490a427;  */

void FUN_10490a420(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010490a424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x80))();
  return;
}



/* Entry: 10490a428; end: 10490a43f;  */

ulong FUN_10490a428(ulong param_1)

{
  if (2 < param_1) {
    param_1 = 3;
  }
  return param_1;
}



/* Entry: 10490a440; end: 10490a453;  */

bool FUN_10490a440(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10490a454; end: 10490a497;  */

void FUN_10490a454(void)

{
  undefined *puVar1;
  
  if (puRam000000011309cd88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd47e40;
  _swift_getWitnessTable(&UNK_10dd47e40,&UNK_1107b7758);
  puRam000000011309cd88 = puVar1;
  return;
}



/* Entry: 10490a498; end: 10490a543;  */

void FUN_10490a498(void)

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



/* Entry: 10490a544; end: 10490a567;  */

void FUN_10490a544(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10490a568; end: 10490a6cb;  */

int FUN_10490a568(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10490a5e4;
        goto LAB_10490a5c8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10490a5c8:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10490a5e4:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10490a6cc; end: 10490a6fb;  */

void FUN_10490a6cc(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010490a6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 8))();
  return;
}



/* Entry: 10490a6fc; end: 10490a993;  */

void FUN_10490a6fc(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  
  lVar5 = 0;
  func_0x0001049ceb28();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = *(long *)(lVar5 + -8);
  puVar10 = &stack0xffffffffffffff50 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = *(long *)(param_1 + 0x10);
  if (lVar17 == 0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    _swift_retain();
    func_0x000100403514(0,lVar17,0);
    uVar1 = param_1 + 0x38;
    uVar6 = uVar1;
    __ss10_HashTableV11startBucketAB0D0Vvg
              (uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar16 = 0;
    do {
      if (((long)uVar6 < 0) || (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) <= (long)uVar6)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10490a984);
        (*pcVar4)();
      }
      uVar13 = uVar6 >> 6;
      uVar15 = 1L << (uVar6 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar13 * 8) & uVar15) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10490a988);
        (*pcVar4)();
      }
      iVar2 = *(int *)(param_1 + 0x24);
      lVar8 = *(long *)(param_1 + 0x30) + *(long *)(lVar9 + 0x48) * uVar6;
      puVar7 = puVar10;
      (**(code **)(lVar9 + 0x10))(puVar10,lVar8,lVar5);
      func_0x0001049cd784();
      (**(code **)(lVar9 + 8))(puVar10,lVar5);
      uVar14 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar14) {
        func_0x000100403514(1 < *(ulong *)(puVar3 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar14 + 1;
      *(undefined1 **)(puVar3 + uVar14 * 0x10 + 0x20) = puVar7;
      *(long *)(puVar3 + uVar14 * 0x10 + 0x28) = lVar8;
      uVar14 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if ((long)uVar14 <= (long)uVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10490a98c);
        (*pcVar4)();
      }
      uVar11 = *(ulong *)(uVar1 + uVar13 * 8);
      if ((uVar11 & uVar15) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10490a990);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10490a994);
        (*pcVar4)();
      }
      uVar11 = uVar11 & -2L << (uVar6 & 0x3f);
      if (uVar11 == 0) {
        lVar8 = uVar13 << 6;
        puVar12 = (ulong *)(param_1 + 0x40 + uVar13 * 8);
        do {
          uVar13 = uVar13 + 1;
          if (uVar14 + 0x3f >> 6 <= uVar13) {
            func_0x0001048ee5f8(uVar6,iVar2,0);
            goto LAB_10490a7d4;
          }
          uVar15 = *puVar12;
          lVar8 = lVar8 + 0x40;
          puVar12 = puVar12 + 1;
        } while (uVar15 == 0);
        func_0x0001048ee5f8(uVar6,iVar2,0);
        uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) + lVar8;
      }
      else {
        uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar6 & 0x7fffffffffffffc0;
      }
LAB_10490a7d4:
      lVar16 = lVar16 + 1;
      uVar6 = uVar14;
    } while (lVar16 != lVar17);
  }
  return;
}



/* Entry: 10490a994; end: 10490a99f;  */

/* WARNING: Removing unreachable block (ram,0x00010490b068) */

void FUN_10490a994(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *unaff_x20;
  code *pcVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  FUN_1048df65c(&uStack_b0,*unaff_x20,&PTR_DAT_11309cd90);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  lStack_58 = lStack_88;
  lStack_60 = lStack_90;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  _swift_getObjCClassFromMetadata();
  _objc_msgSend();
  lVar2 = lStack_88;
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    FUN_10490b4cc(&uStack_80);
  }
  else {
    lVar3 = lVar2;
    func_0x000104994094();
    _objc_release(lVar2);
    lVar4 = lVar3;
    FUN_10490a6fc();
    _swift_bridgeObjectRelease(lVar3);
    lVar2 = lStack_60;
    uVar1 = uStack_68;
    if (*(long *)(lVar4 + 0x10) != 0) {
      func_0x0001000a8868(&uStack_80,uStack_68);
      puVar5 = &UNK_1107b7878;
      _swift_allocObject(&UNK_1107b7878,0x20,7);
      *(code **)(puVar5 + 0x10) = param_2;
      *(undefined8 *)(puVar5 + 0x18) = param_3;
      pcVar6 = *(code **)(lVar2 + 0x28);
      _swift_retain(param_3);
      (*pcVar6)(lVar4,0,FUN_10490b4c4,puVar5,uVar1,lVar2);
      _swift_bridgeObjectRelease(lVar4);
      _swift_release(puVar5);
      FUN_10490b4cc(&uStack_80);
      return;
    }
    FUN_10490b4cc(&uStack_80);
    _swift_bridgeObjectRelease(lVar4);
  }
  (*param_2)(0);
  return;
}



/* Entry: 10490a9a0; end: 10490aa33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10490a9a0(long param_1,long param_2,code *param_3)

{
  bool bVar1;
  
  if ((param_2 == 0) && (param_1 != 0)) {
    if ((*(byte *)(param_1 + _DAT_11309cd48) & 1) == 0) {
      bVar1 = *(long *)(*(long *)(param_1 + _DAT_11309cd58) + 0x10) == 0;
    }
    else {
      bVar1 = false;
    }
    _objc_retain();
    (*param_3)(bVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  (*param_3)(0);
  return;
}



/* Entry: 10490aa34; end: 10490aabb; -[_TtC13FBSDKLoginKit22LoginRecoveryAttempter attemptRecoveryFromError:completionHandler:] */

void FUN_10490aa34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  __Block_copy();
  puVar1 = &UNK_1107b7850;
  _swift_allocObject(&UNK_1107b7850,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  _objc_retain(param_3);
  _swift_retain(param_1);
  FUN_10490b024(FUN_10490b46c,puVar1);
  _swift_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10490aabc; end: 10490ab87;  */

void FUN_10490aabc(void)

{
  return;
}



/* Entry: 10490ab88; end: 10490abdf;  */

void FUN_10490ab88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  FUN_104904e40();
  uVar2 = uVar1;
  _objc_allocWithZone();
  _objc_msgSend();
  ppuRam00000001138155f8 = &PTR_DAT_1107b7290;
  uVar3 = 0;
  uRam00000001138155d8 = uVar2;
  uRam00000001138155f0 = uVar1;
  FUN_10490b480();
  uRam0000000113815600 = uVar3;
  return;
}



/* Entry: 10490abe0; end: 10490acc7;  */

undefined8 FUN_10490abe0(void)

{
  if (lRam000000011309c268 != -1) {
    _swift_once(0x11309c268,FUN_10490ab88);
  }
  return 0x1138155d8;
}



/* Entry: 10490acc8; end: 10490acdf;  */

void FUN_10490acc8(void)

{
  uRam0000000113815620 = 0;
  uRam0000000113815618 = 0;
  uRam0000000113815630 = 0;
  uRam0000000113815628 = 0;
  uRam0000000113815610 = 0;
  uRam0000000113815608 = 0;
  return;
}



/* Entry: 10490ace0; end: 10490ae97;  */

undefined8 FUN_10490ace0(void)

{
  if (lRam000000011309c270 != -1) {
    _swift_once(0x11309c270,FUN_10490acc8);
  }
  return 0x113815608;
}



/* Entry: 10490ae98; end: 10490aeb3;  */

void FUN_10490ae98(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  if (lRam000000011309c270 != -1) {
    _swift_once(0x11309c270,FUN_10490acc8);
  }
  _swift_beginAccess(0x113815608,auStack_38,0,0);
  func_0x00010490b1e8(0x113815608,param_1);
  return;
}



/* Entry: 10490aeb4; end: 10490afa3;  */

void FUN_10490aeb4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  if (lRam000000011309c270 != -1) {
    _swift_once(0x11309c270,FUN_10490acc8);
  }
  _swift_beginAccess(0x113815608,auStack_38,0x21,0);
  func_0x00010490b230(param_1,0x113815608);
  _swift_endAccess(auStack_38);
  func_0x00010490b278(param_1);
  return;
}



/* Entry: 10490afa4; end: 10490afbf;  */

void FUN_10490afa4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  if (lRam000000011309c268 != -1) {
    _swift_once(0x11309c268,FUN_10490ab88);
  }
  _swift_beginAccess(0x1138155d8,auStack_38,0,0);
  func_0x00010490b1e8(0x1138155d8,param_1);
  return;
}



/* Entry: 10490afc0; end: 10490b023;  */

void FUN_10490afc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_38 [24];
  
  if (*param_4 != -1) {
    _swift_once(param_4,param_6);
  }
  _swift_beginAccess(param_5,auStack_38,0,0);
  func_0x00010490b1e8(param_5,param_1);
  return;
}



/* Entry: 10490b024; end: 10490b1a3;  */

/* WARNING: Removing unreachable block (ram,0x00010490b068) */

void FUN_10490b024(code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *unaff_x20;
  code *pcVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  FUN_1048df65c(&uStack_b0,*unaff_x20,&PTR_DAT_11309cd90);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  lStack_58 = lStack_88;
  lStack_60 = lStack_90;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  _swift_getObjCClassFromMetadata();
  _objc_msgSend();
  lVar2 = lStack_88;
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    FUN_10490b4cc(&uStack_80);
  }
  else {
    lVar3 = lVar2;
    func_0x000104994094();
    _objc_release(lVar2);
    lVar4 = lVar3;
    FUN_10490a6fc();
    _swift_bridgeObjectRelease(lVar3);
    lVar2 = lStack_60;
    uVar1 = uStack_68;
    if (*(long *)(lVar4 + 0x10) != 0) {
      func_0x0001000a8868(&uStack_80,uStack_68);
      puVar5 = &UNK_1107b7878;
      _swift_allocObject(&UNK_1107b7878,0x20,7);
      *(code **)(puVar5 + 0x10) = param_1;
      *(undefined8 *)(puVar5 + 0x18) = param_2;
      pcVar6 = *(code **)(lVar2 + 0x28);
      _swift_retain(param_2);
      (*pcVar6)(lVar4,0,FUN_10490b4c4,puVar5,uVar1,lVar2);
      _swift_bridgeObjectRelease(lVar4);
      _swift_release(puVar5);
      FUN_10490b4cc(&uStack_80);
      return;
    }
    FUN_10490b4cc(&uStack_80);
    _swift_bridgeObjectRelease(lVar4);
  }
  (*param_1)(0);
  return;
}



/* Entry: 10490b1a4; end: 10490b2e3;  */

long FUN_10490b1a4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10490b2e4; end: 10490b2eb;  */

void FUN_10490b2e4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010490b2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x50))();
  return;
}



/* Entry: 10490b2ec; end: 10490b46b;  */

long FUN_10490b2ec(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10490b46c; end: 10490b47f;  */

void FUN_10490b46c(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010490b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 10490b480; end: 10490b4c3;  */

void FUN_10490b480(void)

{
  undefined *puVar1;
  
  if (puRam000000011309cb98 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126add30;
  _swift_getInitializedObjCClass();
  _swift_getObjCClassMetadata();
  puRam000000011309cb98 = puVar1;
  return;
}



/* Entry: 10490b4c4; end: 10490b4cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10490b4c4(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if ((param_2 == 0) && (param_1 != 0)) {
    if ((*(byte *)(param_1 + _DAT_11309cd48) & 1) == 0) {
      bVar2 = *(long *)(*(long *)(param_1 + _DAT_11309cd58) + 0x10) == 0;
    }
    else {
      bVar2 = false;
    }
    _objc_retain();
    (*pcVar1)(bVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  (*pcVar1)(0,param_2,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10490b4cc; end: 10490b4f7;  */

undefined8 FUN_10490b4cc(undefined8 param_1)

{
  func_0x0001000834e4();
  return param_1;
}



/* Entry: 10490b4f8; end: 10490b78f;  */

void FUN_10490b4f8(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  
  lVar5 = 0;
  func_0x0001049ceb28();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = *(long *)(lVar5 + -8);
  puVar10 = &stack0xffffffffffffff50 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = *(long *)(param_1 + 0x10);
  if (lVar17 == 0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    _swift_retain();
    func_0x000100403514(0,lVar17,0);
    uVar1 = param_1 + 0x38;
    uVar6 = uVar1;
    __ss10_HashTableV11startBucketAB0D0Vvg
              (uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar16 = 0;
    do {
      if (((long)uVar6 < 0) || (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) <= (long)uVar6)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10490b780);
        (*pcVar4)();
      }
      uVar13 = uVar6 >> 6;
      uVar15 = 1L << (uVar6 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar13 * 8) & uVar15) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10490b784);
        (*pcVar4)();
      }
      iVar2 = *(int *)(param_1 + 0x24);
      lVar8 = *(long *)(param_1 + 0x30) + *(long *)(lVar9 + 0x48) * uVar6;
      puVar7 = puVar10;
      (**(code **)(lVar9 + 0x10))(puVar10,lVar8,lVar5);
      func_0x0001049cd784();
      (**(code **)(lVar9 + 8))(puVar10,lVar5);
      uVar14 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar14) {
        func_0x000100403514(1 < *(ulong *)(puVar3 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar14 + 1;
      *(undefined1 **)(puVar3 + uVar14 * 0x10 + 0x20) = puVar7;
      *(long *)(puVar3 + uVar14 * 0x10 + 0x28) = lVar8;
      uVar14 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if ((long)uVar14 <= (long)uVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10490b788);
        (*pcVar4)();
      }
      uVar11 = *(ulong *)(uVar1 + uVar13 * 8);
      if ((uVar11 & uVar15) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10490b78c);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10490b790);
        (*pcVar4)();
      }
      uVar11 = uVar11 & -2L << (uVar6 & 0x3f);
      if (uVar11 == 0) {
        lVar8 = uVar13 << 6;
        puVar12 = (ulong *)(param_1 + 0x40 + uVar13 * 8);
        do {
          uVar13 = uVar13 + 1;
          if (uVar14 + 0x3f >> 6 <= uVar13) {
            func_0x00010210d994(uVar6,iVar2,0);
            goto LAB_10490b5d0;
          }
          uVar15 = *puVar12;
          lVar8 = lVar8 + 0x40;
          puVar12 = puVar12 + 1;
        } while (uVar15 == 0);
        func_0x00010210d994(uVar6,iVar2,0);
        uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) + lVar8;
      }
      else {
        uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar6 & 0x7fffffffffffffc0;
      }
LAB_10490b5d0:
      lVar16 = lVar16 + 1;
      uVar6 = uVar14;
    } while (lVar16 != lVar17);
  }
  return;
}



/* Entry: 10490b790; end: 10490ba4f;  */

undefined * FUN_10490b790(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  
  lVar8 = 0;
  func_0x0001049ceb28();
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = *(long *)(lVar8 + -8);
  lVar11 = *(long *)(lVar10 + 0x40);
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 == 0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    _swift_retain();
    FUN_1048ee088(0,lVar19,0);
    uVar1 = param_1 + 0x38;
    uVar9 = uVar1;
    __ss10_HashTableV11startBucketAB0D0Vvg
              (uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar16 = 0;
    do {
      if (((long)uVar9 < 0) || (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) <= (long)uVar9)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10490ba40);
        (*pcVar7)();
      }
      uVar15 = uVar9 >> 6;
      uVar17 = 1L << (uVar9 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar15 * 8) & uVar17) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10490ba44);
        (*pcVar7)();
      }
      iVar5 = *(int *)(param_1 + 0x24);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      _swift_bridgeObjectRetain(uVar4);
      FUN_1049cd710(&stack0xffffffffffffff60 + -(lVar11 + 0xfU & 0xfffffffffffffff0),uVar3,uVar4);
      uVar14 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar14) {
        FUN_1048ee088(1 < *(ulong *)(puVar6 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(puVar6 + 0x10) = uVar14 + 1;
      (**(code **)(lVar10 + 0x20))
                (puVar6 + *(long *)(lVar10 + 0x48) * uVar14 +
                          ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)),
                 &stack0xffffffffffffff60 + -(lVar11 + 0xfU & 0xfffffffffffffff0),lVar8);
      uVar14 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if ((long)uVar14 <= (long)uVar9) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10490ba48);
        (*pcVar7)();
      }
      uVar12 = *(ulong *)(uVar1 + uVar15 * 8);
      if ((uVar12 & uVar17) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10490ba4c);
        (*pcVar7)();
      }
      if (iVar5 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10490ba50);
        (*pcVar7)();
      }
      uVar12 = uVar12 & -2L << (uVar9 & 0x3f);
      if (uVar12 == 0) {
        lVar18 = uVar15 << 6;
        puVar13 = (ulong *)(param_1 + 0x40 + uVar15 * 8);
        do {
          uVar15 = uVar15 + 1;
          if (uVar14 + 0x3f >> 6 <= uVar15) {
            func_0x00010210d994(uVar9,iVar5,0);
            goto LAB_10490b86c;
          }
          uVar17 = *puVar13;
          lVar18 = lVar18 + 0x40;
          puVar13 = puVar13 + 1;
        } while (uVar17 == 0);
        func_0x00010210d994(uVar9,iVar5,0);
        uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + lVar18;
      }
      else {
        uVar15 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | uVar9 & 0x7fffffffffffffc0;
      }
LAB_10490b86c:
      lVar16 = lVar16 + 1;
      uVar9 = uVar14;
    } while (lVar16 != lVar19);
  }
  return puVar6;
}



/* Entry: 10490ba50; end: 10490bbab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10490ba50(undefined *param_1,undefined *param_2,long param_3,char param_4)

{
  undefined *puVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  long lStack_48;
  
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_4 == '\0') {
    _objc_retain(param_3);
    FUN_10490b4f8();
    puVar3 = param_1;
    func_0x000100403a6c();
    _swift_bridgeObjectRelease(param_1);
    FUN_10490b4f8();
    puVar4 = param_2;
    func_0x000100403a6c();
    _swift_bridgeObjectRelease(param_2);
    bVar2 = false;
  }
  else {
    bVar2 = param_4 == '\x02' &&
            ((param_2 == (undefined *)0x0 && param_1 == (undefined *)0x0) && param_3 == 0);
    _swift_retain_n(PTR___swiftEmptySetSingleton_11034f1d8,2);
    param_3 = 0;
    puVar4 = puVar3;
  }
  lVar5 = 0;
  func_0x00010490a3f4();
  lVar6 = lVar5;
  _objc_allocWithZone();
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(lVar6 + _DAT_11309cd30) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(long *)(lVar6 + _DAT_11309cd38) = param_3;
  *(undefined8 *)(lVar6 + _DAT_11309cd40) = 0;
  *(bool *)(lVar6 + _DAT_11309cd48) = bVar2;
  *(undefined **)(lVar6 + _DAT_11309cd50) = puVar3;
  *(undefined **)(lVar6 + _DAT_11309cd58) = puVar4;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar6;
  lStack_48 = lVar5;
  _swift_retain(puVar1);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 10490bbac; end: 10490bbe3;  */

undefined8 FUN_10490bbac(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\x01') {
    _swift_errorRetain();
    return param_1;
  }
  return 0;
}



/* Entry: 10490bbe4; end: 10490bbe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10490bbe4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 == 0) {
    if (param_2 == (undefined *)0x0) {
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_retain();
      func_0x000101f20194();
      _swift_release();
      FUN_1048f8628();
      param_2 = &UNK_1107b7108;
      _swift_allocError(&UNK_1107b7108,puVar2,0,0);
      puVar2[1] = 0x12d;
      *puVar2 = 0;
      puVar2[2] = puVar1;
    }
  }
  else if (param_2 == (undefined *)0x0) {
    if ((*(byte *)(param_1 + _DAT_11309cd48) & 1) == 0) {
      puVar4 = *(undefined **)(param_1 + _DAT_11309cd50);
      puVar1 = puVar4;
      _swift_bridgeObjectRetain(puVar4);
      FUN_10490b790();
      _swift_bridgeObjectRelease(puVar4);
      param_2 = puVar1;
      FUN_1048ee3f4(puVar1);
      _swift_bridgeObjectRelease(puVar1);
      uVar5 = *(undefined8 *)(param_1 + _DAT_11309cd58);
      uVar3 = uVar5;
      _swift_bridgeObjectRetain(uVar5);
      FUN_10490b790();
      _swift_bridgeObjectRelease(uVar5);
      FUN_1048ee3f4(uVar3);
      _swift_bridgeObjectRelease(uVar3);
      _objc_retain(*(undefined8 *)(param_1 + _DAT_11309cd38));
      _objc_release(param_1);
    }
    else {
      _objc_release();
      param_2 = (undefined *)0x0;
    }
  }
  else {
    _objc_release();
  }
  return param_2;
}



/* Entry: 10490bbe8; end: 10490bd73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10490bbe8(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 == 0) {
    if (param_2 == (undefined *)0x0) {
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_retain();
      func_0x000101f20194();
      _swift_release();
      FUN_1048f8628();
      param_2 = &UNK_1107b7108;
      _swift_allocError(&UNK_1107b7108,puVar2,0,0);
      puVar2[1] = 0x12d;
      *puVar2 = 0;
      puVar2[2] = puVar1;
    }
  }
  else if (param_2 == (undefined *)0x0) {
    if ((*(byte *)(param_1 + _DAT_11309cd48) & 1) == 0) {
      puVar4 = *(undefined **)(param_1 + _DAT_11309cd50);
      puVar1 = puVar4;
      _swift_bridgeObjectRetain(puVar4);
      FUN_10490b790();
      _swift_bridgeObjectRelease(puVar4);
      param_2 = puVar1;
      FUN_1048ee3f4(puVar1);
      _swift_bridgeObjectRelease(puVar1);
      uVar5 = *(undefined8 *)(param_1 + _DAT_11309cd58);
      uVar3 = uVar5;
      _swift_bridgeObjectRetain(uVar5);
      FUN_10490b790();
      _swift_bridgeObjectRelease(uVar5);
      FUN_1048ee3f4(uVar3);
      _swift_bridgeObjectRelease(uVar3);
      _objc_retain(*(undefined8 *)(param_1 + _DAT_11309cd38));
      _objc_release(param_1);
    }
    else {
      _objc_release();
      param_2 = (undefined *)0x0;
    }
  }
  else {
    _objc_release();
  }
  return param_2;
}



/* Entry: 10490bd74; end: 10490bfff;  */

long FUN_10490bd74(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10490c000; end: 10490c013;  */

bool FUN_10490c000(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10490c014; end: 10490c057;  */

void FUN_10490c014(void)

{
  undefined *puVar1;
  
  if (puRam000000011309ce60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd47fb4;
  _swift_getWitnessTable(&UNK_10dd47fb4,&UNK_1107b7938);
  puRam000000011309ce60 = puVar1;
  return;
}



/* Entry: 10490c058; end: 10490c103;  */

void FUN_10490c058(void)

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



/* Entry: 10490c104; end: 10490c12b;  */

void FUN_10490c104(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 10490c12c; end: 10490c13b;  */

undefined1  [16] FUN_10490c12c(void)

{
  return ZEXT816(0x1107b7938);
}



/* Entry: 10490c13c; end: 10490c2f7;  */

void FUN_10490c13c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
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
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (lRam000000011309c278 != -1) {
    _swift_once(0x11309c278,FUN_10490ef84);
  }
  _swift_beginAccess(0x113815638,auStack_130,0,0);
  func_0x000104910f3c(0x113815638,&uStack_118,0x11309c528);
  if (lStack_100 == 0) {
    if (lRam000000011309c280 != -1) {
      _swift_once(0x11309c280,FUN_10490f088);
    }
    _swift_beginAccess(0x1138156a0,auStack_148,0,0);
    func_0x000104910f3c(0x1138156a0,&uStack_b0,0x11309c528);
    if (lStack_100 != 0) {
      func_0x000104910f80(&uStack_118,0x11309c528);
    }
  }
  else {
    uStack_68 = uStack_d0;
    uStack_70 = uStack_d8;
    uStack_58 = uStack_c0;
    uStack_60 = uStack_c8;
    uStack_50 = uStack_b8;
    uStack_a8 = uStack_110;
    uStack_b0 = uStack_118;
    lStack_98 = lStack_100;
    uStack_a0 = uStack_108;
    uStack_88 = uStack_f0;
    uStack_90 = uStack_f8;
    uStack_78 = uStack_e0;
    uStack_80 = uStack_e8;
  }
  if (lStack_98 == 0) {
    func_0x000104910f80(&uStack_b0,0x11309c528);
    puVar1 = (undefined8 *)0x11309cea0;
    func_0x0001048db364();
    puVar2 = puVar1;
    func_0x000104910fbc();
    _swift_allocError(puVar1,puVar2,0,0);
    *puVar2 = &UNK_1107b7a90;
    _swift_willThrow();
  }
  else {
    param_1[9] = uStack_68;
    param_1[8] = uStack_70;
    param_1[0xb] = uStack_58;
    param_1[10] = uStack_60;
    param_1[0xc] = uStack_50;
    param_1[1] = uStack_a8;
    *param_1 = uStack_b0;
    param_1[3] = lStack_98;
    param_1[2] = uStack_a0;
    param_1[5] = uStack_88;
    param_1[4] = uStack_90;
    param_1[7] = uStack_78;
    param_1[6] = uStack_80;
  }
  return;
}



/* Entry: 10490c2f8; end: 10490c2fb;  */

/* WARNING: Removing unreachable block (ram,0x00010491022c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10490c2f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 auStack_c8 [96];
  undefined8 uStack_68;
  
  lVar1 = 0;
  FUN_104913354();
  _objc_allocWithZone();
  _objc_msgSend();
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar13 = 0;
    uVar9 = 0xe000000000000000;
LAB_10490fef4:
    uVar14 = 0;
    uVar10 = 0xe000000000000000;
LAB_10490ffa8:
    uVar7 = 0;
    uVar11 = 0xe000000000000000;
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_104910024;
LAB_10490ffb4:
    _swift_bridgeObjectRetain(param_1);
    lVar2 = 0x65646f63;
    uVar8 = 0;
    func_0x000100029284(0x65646f63);
    if ((uVar8 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_104910024;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar2 * 0x20,auStack_c8);
    _swift_bridgeObjectRelease(param_1);
    puVar3 = &uStack_e0;
    _swift_dynamicCast(puVar3,auStack_c8,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar3 & 1) == 0) goto LAB_104910024;
    uVar8 = uStack_e0 & 0xffffffffffff;
    uVar12 = uStack_d8;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    lVar2 = 0x65636e6f6e;
    uVar13 = 0;
    func_0x000100029284(0x65636e6f6e);
    if ((uVar13 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
LAB_10490fe6c:
      uVar13 = 0;
      lVar2 = *(long *)(param_1 + 0x10);
      uVar9 = 0xe000000000000000;
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar2 * 0x20,auStack_c8);
      _swift_bridgeObjectRelease(param_1);
      puVar3 = &uStack_e0;
      _swift_dynamicCast(puVar3,auStack_c8,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)puVar3 & 1) == 0) goto LAB_10490fe6c;
      uVar13 = uStack_e0 & 0xffffffffffff;
      lVar2 = *(long *)(param_1 + 0x10);
      uVar9 = uStack_d8;
    }
    if (lVar2 == 0) goto LAB_10490fef4;
    _swift_bridgeObjectRetain(param_1);
    lVar2 = 0x6e656b6f745f6469;
    uVar14 = 0;
    func_0x000100029284(0x6e656b6f745f6469);
    if ((uVar14 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar2 * 0x20,auStack_c8);
      _swift_bridgeObjectRelease(param_1);
      puVar3 = &uStack_e0;
      _swift_dynamicCast(puVar3,auStack_c8,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)puVar3 & 1) == 0) goto LAB_10490ff0c;
      uVar14 = uStack_e0 & 0xffffffffffff;
      uVar10 = uStack_d8;
      if (*(long *)(param_1 + 0x10) != 0) goto LAB_10490ff1c;
      goto LAB_10490ffa8;
    }
    _swift_bridgeObjectRelease(param_1);
LAB_10490ff0c:
    uVar14 = 0;
    uVar10 = 0xe000000000000000;
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_10490ffa8;
LAB_10490ff1c:
    _swift_bridgeObjectRetain(param_1);
    lVar2 = 0x745f737365636361;
    uVar7 = 0xec0000006e656b6f;
    func_0x000100029284(0x745f737365636361);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10490ffa8;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar2 * 0x20,auStack_c8);
    _swift_bridgeObjectRelease(param_1);
    puVar3 = &uStack_e0;
    _swift_dynamicCast(puVar3,auStack_c8,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar3 & 1) == 0) goto LAB_10490ffa8;
    uVar7 = uStack_e0 & 0xffffffffffff;
    uVar11 = uStack_d8;
    if (*(long *)(param_1 + 0x10) != 0) goto LAB_10490ffb4;
LAB_104910024:
    uVar8 = 0;
    uVar12 = 0xe000000000000000;
  }
  _swift_bridgeObjectRelease(uVar12);
  _swift_bridgeObjectRelease(uVar11);
  _swift_bridgeObjectRelease(uVar10);
  _swift_bridgeObjectRelease(uVar9);
  if ((uVar9 & 0x2000000000000000) != 0) {
    uVar13 = uVar9 >> 0x38 & 0xf;
  }
  if ((uVar10 & 0x2000000000000000) != 0) {
    uVar14 = uVar10 >> 0x38 & 0xf;
  }
  if ((uVar11 & 0x2000000000000000) != 0) {
    uVar7 = uVar11 >> 0x38 & 0xf;
  }
  if ((uVar12 & 0x2000000000000000) != 0) {
    uVar8 = uVar12 >> 0x38 & 0xf;
  }
  if (uVar8 == 0) {
    if (((uVar13 != 0) || (uVar7 != 0)) || (uVar14 != 0)) goto LAB_104910120;
  }
  else if (((uVar13 == 0) || (uVar7 != 0)) || (uVar14 == 0)) {
LAB_104910120:
    FUN_10490c300(param_1,param_2,param_3,lVar1);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    return lVar1;
  }
  _swift_bridgeObjectRelease(param_3);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_104910210:
    _swift_bridgeObjectRelease(param_1);
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    lVar2 = 0x726f727265;
    uVar13 = 0;
    func_0x000100029284(0x726f727265);
    if ((uVar13 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar2 * 0x20,auStack_c8);
      _swift_bridgeObjectRelease(param_1);
      puVar3 = &uStack_e0;
      _swift_dynamicCast(puVar3,auStack_c8,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)puVar3 & 1) != 0) {
LAB_1049101c8:
        _swift_bridgeObjectRelease(uStack_d8);
        lVar4 = param_1;
        FUN_10490f864();
        _swift_bridgeObjectRelease(param_1);
        lVar2 = _DAT_11309cfb8;
        _swift_beginAccess(lVar1 + _DAT_11309cfb8,auStack_c8,1,0);
        uVar5 = *(undefined8 *)(lVar1 + lVar2);
        *(long *)(lVar1 + lVar2) = lVar4;
        goto LAB_1049102cc;
      }
      if (*(long *)(param_1 + 0x10) != 0) goto LAB_104910158;
      goto LAB_104910210;
    }
    _swift_bridgeObjectRelease(param_1);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_104910210;
LAB_104910158:
    _swift_bridgeObjectRetain(param_1);
    lVar2 = 0x656d5f726f727265;
    uVar13 = 0xed00006567617373;
    func_0x000100029284(0x656d5f726f727265);
    if ((uVar13 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar2 * 0x20,auStack_c8);
      _swift_bridgeObjectRelease(param_1);
      puVar3 = &uStack_e0;
      _swift_dynamicCast(puVar3,auStack_c8,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)puVar3 & 1) != 0) goto LAB_1049101c8;
      goto LAB_104910210;
    }
    _swift_bridgeObjectRelease_n(param_1,2);
  }
  if (uVar8 == 0) {
    return lVar1;
  }
  FUN_10490c13c(auStack_c8);
  _swift_unknownObjectRetain(uStack_68);
  FUN_104910308(auStack_c8);
  uVar5 = 0xd000000000000032;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000032,0x800000010f21c030);
  uVar6 = uStack_68;
  _objc_msgSend(uStack_68,PTR_s_errorWithCode_userInfo_message_u_1125c3e28,0x12d,0,uVar5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _swift_unknownObjectRelease(uStack_68);
  lVar2 = _DAT_11309cfb8;
  _swift_beginAccess(lVar1 + _DAT_11309cfb8,auStack_c8,1,0);
  uVar5 = *(undefined8 *)(lVar1 + lVar2);
  *(undefined8 *)(lVar1 + lVar2) = uVar6;
LAB_1049102cc:
  _swift_errorRelease(uVar5);
  return lVar1;
}



/* Entry: 10490c2fc; end: 10490c2ff;  */

void FUN_10490c2fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10490c300; end: 10490cef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10490c300(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined8 uVar12;
  long lVar13;
  double *pdVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  code *pcVar19;
  ulong *puVar20;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  ulong *puStack_190;
  double dStack_180;
  ulong uStack_178;
  ulong *puStack_170;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_88;
  ulong uStack_80;
  
  lVar9 = 0x11309c628;
  uStack_1c0 = param_2;
  uStack_1b8 = param_3;
  func_0x0001048db364();
  uVar18 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar9 = (long)&uStack_1d0 - uVar18;
  lStack_1b0 = lVar9 - uVar18;
  if (param_1[2] == 0) {
LAB_10490c3f8:
    uStack_a0 = 0;
    uStack_98 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    lVar5 = 0x745f737365636361;
    uVar18 = 0xec0000006e656b6f;
    func_0x000100029284(0x745f737365636361);
    if ((uVar18 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10490c3f8;
    }
    func_0x0001000bb420(param_1[7] + lVar5 * 0x20,&uStack_88);
    _swift_bridgeObjectRelease(param_1);
    puVar6 = &uStack_a0;
    _swift_dynamicCast(puVar6,&uStack_88,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((int)puVar6 == 0) {
      uStack_a0 = 0;
      uStack_98 = 0;
    }
  }
  puVar6 = (undefined8 *)(param_4 + _DAT_11309cf70);
  _swift_beginAccess(puVar6,&uStack_a0,1,0);
  uVar7 = puVar6[1];
  *puVar6 = uStack_a0;
  puVar6[1] = uStack_98;
  _swift_bridgeObjectRelease(uVar7);
  if (param_1[2] == 0) {
LAB_10490c4b4:
    uStack_b8 = 0;
    uStack_b0 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    lVar5 = 0x65636e6f6e;
    uVar18 = 0;
    func_0x000100029284(0x65636e6f6e);
    if ((uVar18 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10490c4b4;
    }
    func_0x0001000bb420(param_1[7] + lVar5 * 0x20,&uStack_88);
    _swift_bridgeObjectRelease(param_1);
    puVar6 = &uStack_b8;
    _swift_dynamicCast(puVar6,&uStack_88,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((int)puVar6 == 0) {
      uStack_b8 = 0;
      uStack_b0 = 0;
    }
  }
  puVar6 = (undefined8 *)(param_4 + _DAT_11309cf78);
  _swift_beginAccess(puVar6,&uStack_b8,1,0);
  uVar7 = puVar6[1];
  *puVar6 = uStack_b8;
  puVar6[1] = uStack_b0;
  _swift_bridgeObjectRelease(uVar7);
  if (param_1[2] == 0) {
LAB_10490c574:
    uStack_d0 = 0;
    uStack_c8 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    lVar5 = 0x6e656b6f745f6469;
    uVar18 = 0;
    func_0x000100029284(0x6e656b6f745f6469);
    if ((uVar18 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10490c574;
    }
    func_0x0001000bb420(param_1[7] + lVar5 * 0x20,&uStack_88);
    _swift_bridgeObjectRelease(param_1);
    puVar6 = &uStack_d0;
    _swift_dynamicCast(puVar6,&uStack_88,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((int)puVar6 == 0) {
      uStack_d0 = 0;
      uStack_c8 = 0;
    }
  }
  puVar6 = (undefined8 *)(param_4 + _DAT_11309cf80);
  _swift_beginAccess(puVar6,&uStack_d0,1,0);
  uVar7 = puVar6[1];
  *puVar6 = uStack_d0;
  puVar6[1] = uStack_c8;
  _swift_bridgeObjectRelease(uVar7);
  if (param_1[2] == 0) {
LAB_10490c62c:
    uStack_e8 = 0;
    uStack_e0 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    lVar5 = 0x65646f63;
    uVar18 = 0;
    func_0x000100029284(0x65646f63);
    if ((uVar18 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10490c62c;
    }
    func_0x0001000bb420(param_1[7] + lVar5 * 0x20,&uStack_88);
    _swift_bridgeObjectRelease(param_1);
    puVar6 = &uStack_e8;
    _swift_dynamicCast(puVar6,&uStack_88,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((int)puVar6 == 0) {
      uStack_e8 = 0;
      uStack_e0 = 0;
    }
  }
  puVar6 = (undefined8 *)(param_4 + _DAT_11309cf88);
  _swift_beginAccess(puVar6,&uStack_e8,1,0);
  uVar7 = puVar6[1];
  *puVar6 = uStack_e8;
  puVar6[1] = uStack_e0;
  _swift_bridgeObjectRelease(uVar7);
  if (param_1[2] == 0) {
LAB_10490c6f0:
    uStack_100 = 0;
    uStack_f8 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    uVar18 = 0;
    lVar5 = -0x2ffffffffffffff0;
    func_0x000100029284(0xd000000000000010);
    if ((uVar18 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10490c6f0;
    }
    func_0x0001000bb420(param_1[7] + lVar5 * 0x20,&uStack_88);
    _swift_bridgeObjectRelease(param_1);
    puVar6 = &uStack_100;
    _swift_dynamicCast(puVar6,&uStack_88,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((int)puVar6 == 0) {
      uStack_100 = 0;
      uStack_f8 = 0;
    }
  }
  puVar6 = (undefined8 *)(param_4 + _DAT_11309cfe0);
  _swift_beginAccess(puVar6,&uStack_100,1,0);
  puVar8 = (ulong *)puVar6[1];
  *puVar6 = uStack_100;
  puVar6[1] = uStack_f8;
  _swift_bridgeObjectRelease(puVar8);
  lStack_1a0 = param_4;
  if (param_1[2] == 0) {
LAB_10490c7b8:
    uVar18 = 0;
    uVar17 = 0xe000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    lVar5 = 0x5f6465746e617267;
    uVar18 = 0xee007365706f6373;
    func_0x000100029284(0x5f6465746e617267);
    if ((uVar18 & 1) == 0) {
      puVar8 = param_1;
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10490c7b8;
    }
    func_0x0001000bb420(param_1[7] + lVar5 * 0x20,&uStack_88);
    _swift_bridgeObjectRelease(param_1);
    puVar8 = &uStack_118;
    _swift_dynamicCast(puVar8,&uStack_88,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar18 = uStack_118;
    uVar17 = uStack_110;
    if (((ulong)puVar8 & 1) == 0) goto LAB_10490c7b8;
  }
  lStack_1a8 = lVar9;
  if (param_1[2] == 0) {
LAB_10490c854:
    uStack_1c8 = 0;
    uVar16 = 0xe000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    lVar9 = 0x735f6465696e6564;
    uVar16 = 0xed00007365706f63;
    func_0x000100029284(0x735f6465696e6564);
    if ((uVar16 & 1) == 0) {
      puVar8 = param_1;
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10490c854;
    }
    func_0x0001000bb420(param_1[7] + lVar9 * 0x20,&uStack_88);
    _swift_bridgeObjectRelease(param_1);
    puVar8 = &uStack_118;
    _swift_dynamicCast(puVar8,&uStack_88,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar8 & 1) == 0) goto LAB_10490c854;
    uStack_1c8 = uStack_118;
    uVar16 = uStack_110;
  }
  uStack_118 = 0x2c;
  uStack_110 = 0xe100000000000000;
  uStack_1d0 = uVar18;
  uStack_88 = uVar18;
  uStack_80 = uVar17;
  func_0x000100e8b654();
  puVar1 = PTR___sSSN_11034da80;
  puVar20 = &uStack_118;
  __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
            (puVar20,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar8,puVar8);
  puVar10 = puVar20;
  func_0x000100403a6c();
  _swift_bridgeObjectRelease(puVar20);
  puVar11 = puVar10;
  FUN_1048f0530();
  _swift_bridgeObjectRelease(puVar10);
  uVar2 = uStack_1c8;
  uStack_88 = uStack_1c8;
  uStack_118 = 0x2c;
  uStack_110 = 0xe100000000000000;
  puVar20 = &uStack_118;
  uStack_80 = uVar16;
  __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
            (puVar20,puVar1,puVar1,puVar8,puVar8);
  puVar10 = puVar20;
  func_0x000100403a6c();
  _swift_bridgeObjectRelease(puVar20);
  puVar8 = puVar10;
  FUN_1048f0530();
  _swift_bridgeObjectRelease(uVar17);
  _swift_bridgeObjectRelease(puVar10);
  uVar18 = uStack_1d0 & 0xffffffffffff;
  if ((uVar17 & 0x2000000000000000) != 0) {
    uVar18 = uVar17 >> 0x38 & 0xf;
  }
  if (uVar18 == 0) {
    _swift_bridgeObjectRelease(puVar11);
    puVar11 = (ulong *)PTR___swiftEmptySetSingleton_11034f1d8;
    _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
  }
  lVar5 = lStack_1a0;
  lVar9 = _DAT_11309cf90;
  _swift_beginAccess(lStack_1a0 + _DAT_11309cf90,&uStack_118,1,0);
  uVar7 = *(undefined8 *)(lVar5 + lVar9);
  *(ulong **)(lVar5 + lVar9) = puVar11;
  _swift_bridgeObjectRelease(uVar16);
  _swift_bridgeObjectRelease(uVar7);
  uVar18 = uVar2 & 0xffffffffffff;
  if ((uVar16 & 0x2000000000000000) != 0) {
    uVar18 = uVar16 >> 0x38 & 0xf;
  }
  if (uVar18 == 0) {
    _swift_bridgeObjectRelease(puVar8);
    puVar8 = (ulong *)PTR___swiftEmptySetSingleton_11034f1d8;
    _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
  }
  lVar4 = lStack_1a8;
  lVar9 = _DAT_11309cf98;
  _swift_beginAccess(lVar5 + _DAT_11309cf98,auStack_130,1,0);
  uVar7 = *(undefined8 *)(lVar5 + lVar9);
  *(ulong **)(lVar5 + lVar9) = puVar8;
  _swift_bridgeObjectRelease(uVar7);
  if (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) ||
     (puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8, __ss18_CocoaArrayWrapperV8endIndexSivg(),
     puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8, puVar15 == (undefined *)0x0)) {
    puVar15 = PTR___swiftEmptySetSingleton_11034f1d8;
    _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
  }
  else {
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain();
    FUN_104903fb0();
    _swift_release(puVar1);
  }
  lVar9 = _DAT_11309cfa0;
  _swift_beginAccess(lVar5 + _DAT_11309cfa0,auStack_148,1,0);
  uVar7 = *(undefined8 *)(lVar5 + lVar9);
  *(undefined **)(lVar5 + lVar9) = puVar15;
  _swift_bridgeObjectRelease(uVar7);
  puVar6 = (undefined8 *)(lVar5 + _DAT_11309cfa8);
  _swift_beginAccess(puVar6,auStack_160,1,0);
  uVar7 = uStack_1b8;
  uVar12 = puVar6[1];
  *puVar6 = uStack_1c0;
  puVar6[1] = uStack_1b8;
  _swift_bridgeObjectRelease(uVar12);
  if (param_1[2] == 0) {
    _swift_bridgeObjectRetain(uVar7);
LAB_10490cbf0:
    uVar18 = 0;
    puVar20 = (ulong *)0x0;
LAB_10490cbf8:
    puVar8 = (ulong *)(lVar5 + _DAT_11309cfb0);
    _swift_beginAccess(puVar8,&uStack_178,1,0);
    uVar17 = puVar8[1];
    *puVar8 = uVar18;
    puVar8[1] = (ulong)puVar20;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(uVar7);
    lVar9 = 0x64695f72657375;
    uVar18 = 0;
    func_0x000100029284(0x64695f72657375);
    if ((uVar18 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10490cbf0;
    }
    func_0x0001000bb420(param_1[7] + lVar9 * 0x20,&uStack_88);
    _swift_bridgeObjectRelease(param_1);
    puVar1 = PTR___sypN_11034f1a8;
    puVar8 = &uStack_178;
    _swift_dynamicCast(puVar8,&uStack_88,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    puVar20 = puStack_170;
    uVar18 = uStack_178;
    if (((ulong)puVar8 & 1) == 0) goto LAB_10490cbf0;
    uVar17 = uStack_178 & 0xffffffffffff;
    if (((ulong)puStack_170 & 0x2000000000000000) != 0) {
      uVar17 = (ulong)puStack_170 >> 0x38 & 0xf;
    }
    if ((uVar17 != 0) || (param_1[2] == 0)) goto LAB_10490cbf8;
    _swift_bridgeObjectRetain(param_1);
    lVar9 = 0x725f64656e676973;
    uVar17 = 0xee00747365757165;
    func_0x000100029284(0x725f64656e676973);
    puVar8 = param_1;
    if ((uVar17 & 1) == 0) {
LAB_10490ceb0:
      _swift_bridgeObjectRelease(puVar8);
      goto LAB_10490cbf8;
    }
    func_0x0001000bb420(param_1[7] + lVar9 * 0x20,&uStack_88);
    _swift_bridgeObjectRelease(param_1);
    puVar8 = &uStack_178;
    _swift_dynamicCast(puVar8,&uStack_88,puVar1 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar8 & 1) == 0) goto LAB_10490cbf8;
    uVar17 = uStack_178 & 0xffffffffffff;
    if (((ulong)puStack_170 & 0x2000000000000000) != 0) {
      uVar17 = (ulong)puStack_170 >> 0x38 & 0xf;
    }
    puVar8 = puStack_170;
    if (uVar17 == 0) goto LAB_10490ceb0;
    _swift_bridgeObjectRelease(puVar20);
    uVar18 = uStack_178;
    puVar20 = puStack_170;
    FUN_1049110d0();
    _swift_bridgeObjectRelease(puStack_170);
    puVar8 = (ulong *)(lVar5 + _DAT_11309cfb0);
    _swift_beginAccess(puVar8,&uStack_178,1,0);
    uVar17 = puVar8[1];
    *puVar8 = uVar18;
    puVar8[1] = (ulong)puVar20;
  }
  _swift_bridgeObjectRelease(uVar17);
  if (param_1[2] != 0) {
    _swift_bridgeObjectRetain(param_1);
    lVar9 = 0x6f645f6870617267;
    uVar18 = 0xec0000006e69616d;
    func_0x000100029284(0x6f645f6870617267);
    puVar8 = param_1;
    if ((uVar18 & 1) != 0) {
      func_0x0001000bb420(param_1[7] + lVar9 * 0x20,&uStack_88);
      _swift_bridgeObjectRelease(param_1);
      puVar8 = &uStack_198;
      _swift_dynamicCast(puVar8,&uStack_88,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)puVar8 & 1) == 0) goto LAB_10490ccf0;
      uVar18 = uStack_198 & 0xffffffffffff;
      if (((ulong)puStack_190 & 0x2000000000000000) != 0) {
        uVar18 = (ulong)puStack_190 >> 0x38 & 0xf;
      }
      puVar8 = puStack_190;
      if (uVar18 != 0) {
        puVar20 = (ulong *)(lVar5 + _DAT_11309cfd8);
        _swift_beginAccess(puVar20,&uStack_198,1,0);
        puVar8 = (ulong *)puVar20[1];
        *puVar20 = uStack_198;
        puVar20[1] = (ulong)puStack_190;
      }
    }
    _swift_bridgeObjectRelease(puVar8);
  }
LAB_10490ccf0:
  lVar3 = lStack_1b0;
  FUN_10490e0fc(lStack_1b0,param_1);
  lVar13 = 0;
  __s10Foundation4DateVMa();
  pcVar19 = *(code **)(*(long *)(lVar13 + -8) + 0x38);
  (*pcVar19)(lVar3,0,1,lVar13);
  lVar9 = _DAT_11309cfc0;
  _swift_beginAccess(lVar5 + _DAT_11309cfc0,&uStack_88,0x21,0);
  func_0x000100ed9cbc(lVar3,lVar5 + lVar9);
  _swift_endAccess(&uStack_88);
  if (param_1[2] != 0) {
    _swift_bridgeObjectRetain(param_1);
    lVar9 = -0x2fffffffffffffe5;
    uVar18 = 0;
    func_0x000100029284(0xd00000000000001b);
    if ((uVar18 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      func_0x0001000bb420(param_1[7] + lVar9 * 0x20,&uStack_88);
      _swift_bridgeObjectRelease(param_1);
      pdVar14 = &dStack_180;
      _swift_dynamicCast(pdVar14,&uStack_88,PTR___sypN_11034f1a8 + 8,PTR___sSdN_11034dd90,6);
      if ((((ulong)pdVar14 & 1) != 0) && (0.0 < dStack_180)) {
        __s10Foundation4DateV21timeIntervalSince1970ACSd_tcfC(lVar4);
        goto LAB_10490cdfc;
      }
    }
  }
  __s10Foundation4DateV13distantFutureACvgZ(lVar4);
LAB_10490cdfc:
  (*pcVar19)(lVar4,0,1,lVar13);
  lVar9 = _DAT_11309cfc8;
  _swift_beginAccess(lVar5 + _DAT_11309cfc8,&uStack_88,0x21,0);
  lVar9 = lVar5 + lVar9;
  func_0x000100ed9cbc(lVar4);
  _swift_endAccess(&uStack_88);
  FUN_10490f580();
  puVar6 = (undefined8 *)(lVar5 + _DAT_11309cfd0);
  _swift_beginAccess(puVar6,&uStack_88,1,0);
  uVar7 = puVar6[1];
  *puVar6 = param_1;
  puVar6[1] = lVar9;
  _swift_bridgeObjectRelease(uVar7);
  return;
}



/* Entry: 10490cef4; end: 10490cf17;  */

undefined * FUN_10490cef4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return (undefined *)0x0;
  }
  _swift_bridgeObjectRetain();
  lVar3 = 0x656d5f726f727265;
  uVar8 = 0xed00006567617373;
  func_0x000100029284(0x656d5f726f727265);
  if ((uVar8 & 1) == 0) {
    _swift_bridgeObjectRelease(param_1);
    return (undefined *)0x0;
  }
  func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar3 * 0x20,&puStack_80);
  _swift_bridgeObjectRelease(param_1);
  puVar2 = PTR___sypN_11034f1a8;
  puVar1 = PTR___sSSN_11034da80;
  ppuVar9 = &puStack_a0;
  ppuVar5 = &puStack_80;
  _swift_dynamicCast(ppuVar9,ppuVar5,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  uStack_78 = uStack_98;
  puStack_80 = puStack_a0;
  if (((ulong)ppuVar9 & 1) == 0) {
    return (undefined *)0x0;
  }
  ppuVar11 = &PTR____CFConstantStringClassReference_110da2958;
  ppuVar9 = ppuVar11;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puStack_68 = puVar1;
  func_0x000100102924(&puStack_80,&puStack_a0);
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  _swift_isUniquelyReferenced_nonNull_native();
  func_0x0001001029e8(&puStack_a0,ppuVar9,ppuVar5,puVar4);
  _swift_bridgeObjectRelease(ppuVar5);
  if (*(long *)(param_1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_1);
    lVar3 = 0x726f727265;
    ppuVar9 = (undefined **)0xe500000000000000;
    func_0x000100029284(0x726f727265);
    if (((ulong)ppuVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar3 * 0x20,&puStack_80);
      _swift_bridgeObjectRelease(param_1);
      puVar4 = PTR___sSSN_11034da80;
      ppuVar5 = &puStack_a0;
      ppuVar10 = &puStack_80;
      _swift_dynamicCast(ppuVar5,ppuVar10,puVar2 + 8,PTR___sSSN_11034da80,6);
      uVar6 = uStack_98;
      puVar7 = puStack_a0;
      ppuVar9 = ppuVar10;
      if (((ulong)ppuVar5 & 1) != 0) {
        ppuVar9 = ppuVar11;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puStack_68 = puVar4;
        puStack_80 = puVar7;
        uStack_78 = uVar6;
        func_0x000100102924(&puStack_80,&puStack_a0);
        puVar4 = puVar1;
        _swift_isUniquelyReferenced_nonNull_native(puVar1);
        func_0x0001001029e8(&puStack_a0,ppuVar9,ppuVar10,puVar4);
        _swift_bridgeObjectRelease(ppuVar10);
      }
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_1);
    lVar3 = 0x6f635f726f727265;
    ppuVar9 = (undefined **)0xea00000000006564;
    func_0x000100029284(0x6f635f726f727265);
    if (((ulong)ppuVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar3 * 0x20,&puStack_80);
      _swift_bridgeObjectRelease(param_1);
      puVar4 = PTR___sSSN_11034da80;
      ppuVar5 = &puStack_a0;
      ppuVar10 = &puStack_80;
      _swift_dynamicCast(ppuVar5,ppuVar10,puVar2 + 8,PTR___sSSN_11034da80,6);
      uVar6 = uStack_98;
      puVar7 = puStack_a0;
      ppuVar9 = ppuVar10;
      if (((ulong)ppuVar5 & 1) != 0) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110da29d8;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puStack_68 = puVar4;
        puStack_80 = puVar7;
        uStack_78 = uVar6;
        func_0x000100102924(&puStack_80,&puStack_a0);
        puVar4 = puVar1;
        _swift_isUniquelyReferenced_nonNull_native(puVar1);
        func_0x0001001029e8(&puStack_a0,ppuVar9,ppuVar10,puVar4);
        _swift_bridgeObjectRelease(ppuVar10);
      }
    }
  }
  ppuVar5 = ppuVar11;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
            (&PTR____CFConstantStringClassReference_110da2958);
  if (*(long *)(puVar1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(puVar1);
    ppuVar10 = ppuVar9;
    func_0x000100029284(ppuVar5);
    if (((ulong)ppuVar10 & 1) != 0) {
      func_0x0001000bb420(*(long *)(puVar1 + 0x38) + (long)ppuVar5 * 0x20,&puStack_80);
      _swift_bridgeObjectRelease(ppuVar9);
      ppuVar9 = (undefined **)puVar1;
      goto LAB_10490fbb0;
    }
    _swift_bridgeObjectRelease(puVar1);
  }
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  puStack_68 = (undefined *)0x0;
  uStack_70 = 0;
LAB_10490fbb0:
  _swift_bridgeObjectRelease(ppuVar9);
  puVar4 = puStack_68;
  ppuVar9 = (undefined **)0x11309c428;
  func_0x000104910f80(&puStack_80,0x11309c428);
  if ((puVar4 == (undefined *)0x0) && (*(long *)(param_1 + 0x10) != 0)) {
    _swift_bridgeObjectRetain(param_1);
    lVar3 = 0x65725f726f727265;
    ppuVar9 = (undefined **)0xec0000006e6f7361;
    func_0x000100029284(0x65725f726f727265);
    if (((ulong)ppuVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar3 * 0x20,&puStack_80);
      _swift_bridgeObjectRelease(param_1);
      puVar4 = PTR___sSSN_11034da80;
      ppuVar5 = &puStack_a0;
      ppuVar9 = &puStack_80;
      _swift_dynamicCast(ppuVar5,ppuVar9,puVar2 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)ppuVar5 & 1) != 0) {
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                  (&PTR____CFConstantStringClassReference_110da2958);
        puStack_68 = puVar4;
        puStack_80 = puStack_a0;
        uStack_78 = uStack_98;
        func_0x000100102924(&puStack_80,&puStack_a0);
        puVar4 = puVar1;
        _swift_isUniquelyReferenced_nonNull_native(puVar1);
        func_0x0001001029e8(&puStack_a0,ppuVar11,ppuVar9,puVar4);
        _swift_bridgeObjectRelease(ppuVar9);
        ppuVar9 = ppuVar11;
      }
    }
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110da29b8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
            (&PTR____CFConstantStringClassReference_110da29b8);
  uVar6 = 0;
  func_0x0001048db938();
  puStack_80 = (undefined *)0x0;
  puStack_68 = (undefined *)uVar6;
  func_0x000100102924(&puStack_80,&puStack_a0);
  puVar4 = puVar1;
  _swift_isUniquelyReferenced_nonNull_native(puVar1);
  func_0x0001001029e8(&puStack_a0,ppuVar5,ppuVar9,puVar4);
  _swift_bridgeObjectRelease(ppuVar9);
  ppuVar9 = &PTR____CFConstantStringClassReference_110da2938;
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retain(&PTR____CFConstantStringClassReference_110da2938);
  puVar7 = puVar1;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar1,PTR___sSSN_11034da80,puVar2 + 8,PTR___sSSSHsWP_11034da90);
  _objc_msgSend(puVar4,PTR_s_initWithDomain_code_userInfo__1125e1288,ppuVar9,8,puVar7);
  _swift_release(puVar1);
  _objc_release(ppuVar9);
  _objc_release(puVar7);
  return puVar4;
}



/* Entry: 10490cf18; end: 10490deeb;  */

/* WARNING: Removing unreachable block (ram,0x00010490d07c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10490cf18(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_110 [96];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = param_7 + _DAT_11309cf88;
  _swift_beginAccess(lVar3,auStack_78,0,0);
  if (*(long *)(lVar3 + 8) == 0) {
    lVar3 = param_7 + _DAT_11309cf78;
    _swift_beginAccess(lVar3,auStack_90,0,0);
    if (*(long *)(lVar3 + 8) == 0) {
      lVar3 = param_7 + _DAT_11309cf80;
      _swift_beginAccess(lVar3,auStack_a8,0,0);
      lVar3 = *(long *)(lVar3 + 8);
      if (lVar3 == 0 || param_2 != 0) {
        if (lVar3 == 0 || param_2 == 0) {
          (*param_5)(param_7);
        }
        else {
          func_0x00010490dcb0(param_7,param_1,param_2,param_5,param_6,param_7);
        }
      }
      else {
        FUN_10490c13c(auStack_110);
        _swift_unknownObjectRetain(uStack_b0);
        FUN_104910308(auStack_110);
        uVar1 = 0xd000000000000019;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f21bf30)
        ;
        uVar2 = uStack_b0;
        _objc_msgSend(uStack_b0,PTR_s_errorWithCode_userInfo_message_u_1125c3e28,0x12d,0,uVar1,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        lVar3 = _DAT_11309cfb8;
        _swift_beginAccess(param_7 + _DAT_11309cfb8,auStack_110,1,0);
        uVar1 = *(undefined8 *)(param_7 + lVar3);
        *(undefined8 *)(param_7 + lVar3) = uVar2;
        _swift_errorRelease(uVar1);
        (*param_5)(param_7);
        _swift_unknownObjectRelease(uStack_b0);
      }
    }
    else {
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = param_1;
      }
      lVar3 = -0x2000000000000000;
      if (param_2 != 0) {
        lVar3 = param_2;
      }
      _swift_bridgeObjectRetain(param_2);
      func_0x00010490d84c(param_5,param_6,uVar2,lVar3,param_7);
      _swift_bridgeObjectRelease(lVar3);
    }
  }
  else {
    func_0x00010490d154(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10490deec; end: 10490e0f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10490deec(long param_1,long param_2,undefined8 param_3,long param_4,code *param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_11309cf60;
  if (param_1 == 0) {
    uVar7 = *(undefined8 *)(param_4 + 0x60);
    uVar8 = 0xd000000000000025;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f21bfd0);
    _objc_msgSend(uVar7,PTR_s_errorWithCode_userInfo_message_u_1125c3e28,0x135,0,uVar8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    lVar1 = _DAT_11309cfb8;
    _swift_beginAccess(param_2 + _DAT_11309cfb8,auStack_68,1,0);
    uVar8 = *(undefined8 *)(param_2 + lVar1);
    *(undefined8 *)(param_2 + lVar1) = uVar7;
    _swift_errorRelease(uVar8);
  }
  else {
    _swift_beginAccess(param_2 + _DAT_11309cf60,auStack_68,1,0);
    uVar8 = *(undefined8 *)(param_2 + lVar1);
    *(long *)(param_2 + lVar1) = param_1;
    _objc_retain();
    _objc_retain();
    _objc_release(uVar8);
    lVar2 = param_1;
    _objc_msgSend(param_1,PTR_s_claims_1125ac090);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = _DAT_11309cf90;
    if (lVar2 != 0) {
      _swift_beginAccess(param_2 + _DAT_11309cf90,auStack_80,0,0);
      puVar4 = PTR___swiftEmptySetSingleton_11034f1d8;
      puVar3 = *(undefined **)(param_2 + lVar1);
      puVar5 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
        puVar3 = (undefined *)0x0;
        puVar5 = puVar4;
      }
      _swift_bridgeObjectRetain(puVar3);
      puVar4 = puVar5;
      FUN_1048efb48(puVar5);
      _swift_bridgeObjectRelease(puVar5);
      puVar5 = puVar4;
      func_0x000100403a6c(puVar4);
      _swift_bridgeObjectRelease(puVar4);
      lVar6 = lVar2;
      FUN_1049103d4(lVar2,puVar5);
      _swift_bridgeObjectRelease(puVar5);
      _objc_release(lVar2);
      _objc_release(param_1);
      lVar1 = _DAT_11309cf68;
      _swift_beginAccess(param_2 + _DAT_11309cf68,auStack_a0,1,0);
      param_1 = *(long *)(param_2 + lVar1);
      *(long *)(param_2 + lVar1) = lVar6;
    }
    _objc_release(param_1);
  }
  (*param_5)(param_2);
  return;
}



/* Entry: 10490e0f8; end: 10490e0fb;  */

/* WARNING: Removing unreachable block (ram,0x0001049104d8) */

undefined1 * FUN_10490e0f8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long alStack_270 [15];
  undefined1 auStack_1f8 [8];
  long alStack_1f0 [2];
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  long lStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined *puStack_160;
  long lStack_158;
  code *pcStack_150;
  long lStack_148;
  long lStack_140;
  ulong uStack_138;
  long lStack_130;
  undefined1 auStack_120 [104];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  
  lVar14 = 0x11309c628;
  uStack_138 = param_2;
  func_0x0001048db364();
  uVar11 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = ((long)&puStack_1e0 - uVar11) - uVar11;
  lVar17 = lVar14 - uVar11;
  puVar13 = (undefined *)(lVar17 - uVar11);
  uVar1 = 0x11309c5e0;
  func_0x0001048db364();
  uVar12 = *(long *)(*(long *)(uVar1 - 8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = (long)puVar13 - uVar12;
  lStack_130 = lVar16 - uVar12;
  lVar18 = lStack_130 - uVar12;
  lVar15 = lVar18 - uVar12;
  func_0x0001049a8c40();
  _swift_bridgeObjectRelease(param_2);
  uVar1 = uVar1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    FUN_10490c13c(auStack_120);
    lStack_140 = (long)&puStack_1e0 - uVar11;
    FUN_104910bb8(auStack_120,auStack_b8);
    FUN_104910308(auStack_120);
    func_0x000100dc1af8(auStack_b8,auStack_90);
    lVar3 = 0;
    __s10Foundation3URLVMa();
    lVar10 = 1;
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar15,1,1,lVar3);
    func_0x0001049a8d90();
    if (lVar10 != 0) {
      __s10Foundation3URLV6stringACSgSSh_tcfC(lVar18);
      _swift_bridgeObjectRelease(lVar10);
      func_0x000104910f80(lVar15,0x11309c5e0);
      func_0x000104910ef8(lVar18,lVar15,0x11309c5e0);
    }
    lVar18 = 0;
    __s10Foundation4DateVMa();
    pcVar19 = *(code **)(*(long *)(lVar18 + -8) + 0x38);
    lVar3 = 1;
    puVar4 = puVar13;
    (*pcVar19)(puVar13,1,1,lVar18);
    func_0x0001049a8dd8();
    lStack_148 = lVar14;
    if (lVar3 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
      pcStack_150 = pcVar19;
      _objc_allocWithZone();
      _objc_msgSend();
      uVar6 = 0x79792f64642f4d4d;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x79792f64642f4d4d,0xea00000000007979);
      _objc_msgSend(puVar5,PTR_s_setDateFormat__1126400f8,uVar6);
      _objc_release(uVar6);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar4,lVar3);
      _swift_bridgeObjectRelease(lVar3);
      puVar7 = puVar5;
      _objc_msgSend(puVar5,PTR_s_dateFromString__1125b6e00,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (puVar7 == (undefined *)0x0) {
        func_0x000104910f80(puVar13,0x11309c628);
        _objc_release(puVar5);
      }
      else {
        __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar17,puVar7);
        _objc_release(puVar7);
        _objc_release(puVar5);
        func_0x000104910f80(puVar13,0x11309c628);
      }
      pcVar19 = pcStack_150;
      (*pcStack_150)(lVar17,puVar7 == (undefined *)0x0,1,lVar18);
      func_0x000104910ef8(lVar17,puVar13,0x11309c628);
    }
    lVar14 = lStack_148;
    puVar8 = auStack_90;
    lStack_1a0 = lStack_78;
    func_0x0001000a8868();
    puStack_180 = puVar8;
    func_0x0001049a8c40();
    puStack_198 = puVar8;
    lStack_188 = lStack_78;
    func_0x0001049a8cb0();
    puStack_190 = puVar8;
    lStack_158 = lStack_78;
    func_0x0001049a8ce8();
    puStack_1a8 = puVar8;
    lStack_168 = lStack_78;
    func_0x0001049a8d20();
    puStack_1b0 = puVar8;
    lStack_178 = lStack_78;
    func_0x0001049a8c78();
    puStack_1b8 = puVar8;
    pcStack_150 = (code *)lStack_78;
    func_0x0001049a8e78();
    puVar2 = (undefined1 *)0x0;
    if (lStack_78 != 0) {
      puVar2 = puVar8;
    }
    lVar17 = -0x2000000000000000;
    if (lStack_78 != 0) {
      lVar17 = lStack_78;
    }
    __s10Foundation3URLV6stringACSgSSh_tcfC(lStack_130,puVar2,lVar17);
    _swift_bridgeObjectRelease(lVar17);
    (*pcVar19)(lVar14,1,1,lVar18);
    lVar14 = lVar15;
    lVar17 = lVar16;
    func_0x000104910f3c(lVar15,lVar16,0x11309c5e0);
    func_0x0001049a8d58();
    lStack_1d0 = lVar14;
    lStack_1c0 = lVar17;
    func_0x0001049a8dc8();
    puVar5 = puVar13;
    lStack_1c8 = lVar14;
    func_0x000104910f3c(puVar13,lStack_140,0x11309c628);
    func_0x0001049a8e10();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_retain();
      func_0x000100937a8c();
      _swift_release(puVar4);
    }
    uVar6 = 0;
    func_0x0001002ed07c(0);
    puVar7 = puVar5;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar5,PTR___sSSN_11034da80,uVar6,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(puVar5);
    puVar4 = PTR_PTR_1126add68;
    _swift_getInitializedObjCClass();
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d8 = puVar4;
    _objc_release();
    func_0x0001049a8e20();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar7 == (undefined *)0x0) {
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_retain();
      func_0x0001001830b8();
      _swift_release(puVar4);
    }
    puVar5 = puVar7;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(puVar7);
    puVar7 = PTR_PTR_1126add70;
    _swift_getInitializedObjCClass();
    puVar9 = puVar7;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x0001049a8e30();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lStack_170 = lVar15;
    puStack_160 = puVar13;
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_retain();
      func_0x0001001830b8();
      _swift_release(puVar4);
    }
    puVar13 = puVar5;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(puVar5);
    puVar4 = PTR_s_locationFromDictionary__112525208;
    _objc_msgSend(puVar7,PTR_s_locationFromDictionary__112525208,puVar13);
    _objc_retainAutoreleasedReturnValue();
    puStack_1e0 = puVar7;
    _objc_release();
    func_0x0001049a8e40();
    pcVar19 = *(code **)(lStack_70 + 8);
    *(long *)(lVar15 + -8) = lStack_70;
    *(long *)(lVar15 + -0x10) = lStack_1a0;
    *(undefined1 *)(lVar15 + -0x18) = 1;
    *(undefined **)(lVar15 + -0x28) = puVar4;
    *(ulong *)(lVar15 + -0x20) = uStack_138;
    *(undefined **)(lVar15 + -0x38) = puVar7;
    *(undefined **)(lVar15 + -0x30) = puVar13;
    *(undefined **)(lVar15 + -0x40) = puVar9;
    puVar13 = puStack_1d8;
    *(undefined **)(lVar15 + -0x48) = puStack_1d8;
    *(long *)(lVar15 + -0x50) = lStack_140;
    lVar17 = lStack_1c8;
    *(long *)(lVar15 + -0x58) = lStack_1c8;
    lVar18 = lStack_1c0;
    *(long *)(lVar15 + -0x60) = lStack_1c0;
    lVar14 = lStack_1d0;
    *(long *)(lVar15 + -0x70) = lVar16;
    *(long *)(lVar15 + -0x68) = lVar14;
    *(long *)(lVar15 + -0x78) = lStack_148;
    *(long *)(lVar15 + -0x80) = lStack_130;
    *(code **)(lVar15 + -0x88) = pcStack_150;
    *(undefined1 **)(lVar15 + -0x90) = puStack_1b8;
    puVar2 = puStack_198;
    uStack_138 = lVar16;
    (*pcVar19)(puStack_198,lStack_188,puStack_190,lStack_158,puStack_1a8,lStack_168,puStack_1b0,
               lStack_178);
    _swift_bridgeObjectRelease(lStack_188);
    _objc_release(puVar13);
    _objc_release(puVar9);
    _objc_release(puStack_1e0);
    _swift_bridgeObjectRelease(puVar4);
    _swift_bridgeObjectRelease(lVar17);
    _swift_bridgeObjectRelease(lVar18);
    _swift_bridgeObjectRelease(pcStack_150);
    _swift_bridgeObjectRelease(lStack_178);
    _swift_bridgeObjectRelease(lStack_168);
    _swift_bridgeObjectRelease(lStack_158);
    func_0x000104910f80(lStack_140,0x11309c628);
    func_0x000104910f80(uStack_138,0x11309c5e0);
    func_0x000104910f80(lStack_148,0x11309c628);
    func_0x000104910f80(lStack_130,0x11309c5e0);
    func_0x000104910f80(puStack_160,0x11309c628);
    func_0x000104910f80(lStack_170,0x11309c5e0);
    func_0x0001000834e4(auStack_90);
  }
  return puVar2;
}



/* Entry: 10490e0fc; end: 10490e35b;  */

void FUN_10490e0fc(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  double *pdVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dStack_88;
  undefined1 auStack_80 [32];
  
  if (*(long *)(param_2 + 0x10) == 0) {
    dVar9 = 0.0;
    uVar7 = 1;
  }
  else {
    _swift_bridgeObjectRetain();
    lVar3 = 0x73657269707865;
    uVar5 = 0;
    func_0x000100029284(0x73657269707865);
    if ((uVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      uVar7 = 1;
      dVar9 = 0.0;
      lVar3 = *(long *)(param_2 + 0x10);
    }
    else {
      func_0x0001000bb420(*(long *)(param_2 + 0x38) + lVar3 * 0x20,auStack_80);
      _swift_bridgeObjectRelease(param_2);
      pdVar4 = &dStack_88;
      _swift_dynamicCast(pdVar4,auStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSdN_11034dd90,6);
      uVar7 = (uint)pdVar4 ^ 1;
      dVar9 = dStack_88;
      if ((uint)pdVar4 == 0) {
        dVar9 = 0.0;
      }
      lVar3 = *(long *)(param_2 + 0x10);
    }
    if (lVar3 != 0) {
      lVar6 = 0x5f73657269707865;
      _swift_bridgeObjectRetain(param_2);
      uVar5 = 0xea00000000007461;
      lVar3 = lVar6;
      func_0x000100029284(0x5f73657269707865);
      if ((uVar5 & 1) == 0) {
        _swift_bridgeObjectRelease(param_2);
        uVar8 = 1;
        dVar10 = 0.0;
      }
      else {
        func_0x0001000bb420(*(long *)(param_2 + 0x38) + lVar3 * 0x20,auStack_80);
        _swift_bridgeObjectRelease(param_2);
        pdVar4 = &dStack_88;
        _swift_dynamicCast(pdVar4,auStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSdN_11034dd90,6);
        uVar8 = (uint)pdVar4 ^ 1;
        dVar10 = dStack_88;
        if ((uint)pdVar4 == 0) {
          dVar10 = 0.0;
        }
      }
      if (*(long *)(param_2 + 0x10) != 0) {
        _swift_bridgeObjectRetain(param_2);
        uVar5 = 0xea00000000006e69;
        func_0x000100029284(0x5f73657269707865);
        if ((uVar5 & 1) != 0) {
          func_0x0001000bb420(*(long *)(param_2 + 0x38) + lVar6 * 0x20,auStack_80);
          _swift_bridgeObjectRelease(param_2);
          pdVar4 = &dStack_88;
          _swift_dynamicCast(pdVar4,auStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSdN_11034dd90,6);
          iVar2 = (int)pdVar4;
          if (iVar2 == 0) {
            dStack_88 = 0.0;
          }
          goto LAB_10490e2fc;
        }
        _swift_bridgeObjectRelease(param_2);
      }
      iVar2 = 0;
      dStack_88 = 0.0;
      goto LAB_10490e2fc;
    }
  }
  iVar2 = 0;
  dVar10 = 0.0;
  uVar8 = 1;
  dStack_88 = 0.0;
LAB_10490e2fc:
  if (uVar7 == 0) {
    dVar10 = dVar9;
  }
  if (((uVar7 & uVar8 & 1) != 0) || (dVar10 <= 0.0)) {
    iVar1 = 0;
    if (0.0 < dStack_88) {
      iVar1 = iVar2;
    }
    if (iVar1 == 1) {
      __s10Foundation4DateV20timeIntervalSinceNowACSd_tcfC(dStack_88);
    }
    else {
      __s10Foundation4DateV13distantFutureACvgZ(param_1);
    }
  }
  else {
    __s10Foundation4DateV21timeIntervalSince1970ACSd_tcfC();
  }
  return;
}



/* Entry: 10490e35c; end: 10490e41f;  */

void FUN_10490e35c(undefined8 param_1,long param_2)

{
  long lVar1;
  double *pdVar2;
  ulong uVar3;
  double dStack_58;
  undefined1 auStack_50 [32];
  
  if (*(long *)(param_2 + 0x10) != 0) {
    _swift_bridgeObjectRetain();
    uVar3 = 0;
    lVar1 = -0x2fffffffffffffe5;
    func_0x000100029284(0xd00000000000001b);
    if ((uVar3 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
    }
    else {
      func_0x0001000bb420(*(long *)(param_2 + 0x38) + lVar1 * 0x20,auStack_50);
      _swift_bridgeObjectRelease(param_2);
      pdVar2 = &dStack_58;
      _swift_dynamicCast(pdVar2,auStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSdN_11034dd90,6);
      if ((((ulong)pdVar2 & 1) != 0) && (0.0 < dStack_58)) {
        __s10Foundation4DateV21timeIntervalSince1970ACSd_tcfC();
        return;
      }
    }
  }
  __s10Foundation4DateV13distantFutureACvgZ(param_1);
  return;
}



/* Entry: 10490e420; end: 10490e423;  */

undefined * FUN_10490e420(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_10490f70c;
  _swift_bridgeObjectRetain();
  lVar2 = 0x6574617473;
  uVar12 = 0;
  func_0x000100029284(0x6574617473);
  if ((uVar12 & 1) == 0) {
LAB_10490f708:
    _swift_bridgeObjectRelease(param_1);
LAB_10490f70c:
    puVar4 = (undefined *)0x0;
    puVar11 = (undefined *)0x0;
  }
  else {
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar2 * 0x20,&uStack_70);
    _swift_bridgeObjectRelease(param_1);
    puVar4 = PTR___sypN_11034f1a8;
    puVar3 = &uStack_80;
    _swift_dynamicCast(puVar3,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar10 = uStack_78;
    uVar12 = uStack_80;
    if (((ulong)puVar3 & 1) == 0) goto LAB_10490f70c;
    puVar11 = PTR_PTR_1126add58;
    _swift_getInitializedObjCClass();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar12,uVar10);
    _swift_bridgeObjectRelease(uVar10);
    uStack_70 = 0;
    _objc_msgSend(puVar11,PTR_s_objectForJSONString_error__1126159d8,uVar12,&uStack_70);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    uVar9 = uStack_70;
    if (puVar11 == (undefined *)0x0) {
      uVar5 = uStack_70;
      _objc_retain();
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(uVar5);
      _swift_willThrow();
      _swift_errorRelease(uVar9);
      goto LAB_10490f70c;
    }
    _objc_retain();
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,puVar11);
    _swift_unknownObjectRelease(puVar11);
    uVar9 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    puVar3 = &uStack_80;
    _swift_dynamicCast(puVar3,&uStack_70,puVar4 + 8,uVar9,6);
    uVar12 = uStack_80;
    if (((ulong)puVar3 & 1) == 0) goto LAB_10490f70c;
    if (*(long *)(uStack_80 + 0x10) == 0) {
LAB_10490f780:
      uStack_68 = 0;
      uStack_70 = 0;
      lStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      _swift_bridgeObjectRetain(uStack_80);
      lVar2 = 0x676e656c6c616863;
      uVar10 = 0xe900000000000065;
      func_0x000100029284(0x676e656c6c616863);
      if ((uVar10 & 1) == 0) {
        _swift_bridgeObjectRelease(uVar12);
        goto LAB_10490f780;
      }
      func_0x0001000bb420(*(long *)(uVar12 + 0x38) + lVar2 * 0x20,&uStack_70);
      _swift_bridgeObjectRelease(uVar12);
    }
    _swift_bridgeObjectRelease(uVar12);
    if (lStack_58 == 0) {
      func_0x000104910f80(&uStack_70,0x11309c428);
      goto LAB_10490f70c;
    }
    puVar3 = &uStack_80;
    _swift_dynamicCast(puVar3,&uStack_70,puVar4 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar3 & 1) == 0) goto LAB_10490f70c;
    uVar12 = uStack_80 & 0xffffffffffff;
    if ((uStack_78 & 0x2000000000000000) != 0) {
      uVar12 = uStack_78 >> 0x38 & 0xf;
    }
    param_1 = uStack_78;
    if (uVar12 == 0) goto LAB_10490f708;
    puVar6 = PTR_PTR_1126add08;
    _swift_getInitializedObjCClass();
    uVar12 = uStack_80;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_80,uStack_78);
    _swift_bridgeObjectRelease(uStack_78);
    puVar11 = PTR_s_URLDecode__11254e520;
    _objc_msgSend(puVar6,PTR_s_URLDecode__11254e520,uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    puVar4 = puVar6;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(puVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail(puVar4,puVar11);
  if (*(long *)(puVar4 + 0x10) == 0) {
    return (undefined *)0x0;
  }
  _swift_bridgeObjectRetain();
  lVar2 = 0x656d5f726f727265;
  uVar12 = 0xed00006567617373;
  func_0x000100029284(0x656d5f726f727265);
  if ((uVar12 & 1) == 0) {
    _swift_bridgeObjectRelease(puVar4);
    return (undefined *)0x0;
  }
  func_0x0001000bb420(*(long *)(puVar4 + 0x38) + lVar2 * 0x20,&puStack_110);
  _swift_bridgeObjectRelease(puVar4);
  puVar6 = PTR___sypN_11034f1a8;
  puVar11 = PTR___sSSN_11034da80;
  ppuVar13 = &puStack_130;
  ppuVar8 = &puStack_110;
  _swift_dynamicCast(ppuVar13,ppuVar8,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  uStack_108 = uStack_128;
  puStack_110 = puStack_130;
  if (((ulong)ppuVar13 & 1) == 0) {
    return (undefined *)0x0;
  }
  ppuVar15 = &PTR____CFConstantStringClassReference_110da2958;
  ppuVar13 = ppuVar15;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puStack_f8 = puVar11;
  func_0x000100102924(&puStack_110,&puStack_130);
  puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  _swift_isUniquelyReferenced_nonNull_native();
  func_0x0001001029e8(&puStack_130,ppuVar13,ppuVar8,puVar7);
  _swift_bridgeObjectRelease(ppuVar8);
  if (*(long *)(puVar4 + 0x10) != 0) {
    _swift_bridgeObjectRetain(puVar4);
    lVar2 = 0x726f727265;
    ppuVar13 = (undefined **)0xe500000000000000;
    func_0x000100029284(0x726f727265);
    if (((ulong)ppuVar13 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar4);
    }
    else {
      func_0x0001000bb420(*(long *)(puVar4 + 0x38) + lVar2 * 0x20,&puStack_110);
      _swift_bridgeObjectRelease(puVar4);
      puVar7 = PTR___sSSN_11034da80;
      ppuVar8 = &puStack_130;
      ppuVar14 = &puStack_110;
      _swift_dynamicCast(ppuVar8,ppuVar14,puVar6 + 8,PTR___sSSN_11034da80,6);
      uVar9 = uStack_128;
      puVar1 = puStack_130;
      ppuVar13 = ppuVar14;
      if (((ulong)ppuVar8 & 1) != 0) {
        ppuVar13 = ppuVar15;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puStack_f8 = puVar7;
        puStack_110 = puVar1;
        uStack_108 = uVar9;
        func_0x000100102924(&puStack_110,&puStack_130);
        puVar7 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native(puVar11);
        func_0x0001001029e8(&puStack_130,ppuVar13,ppuVar14,puVar7);
        _swift_bridgeObjectRelease(ppuVar14);
      }
    }
  }
  if (*(long *)(puVar4 + 0x10) != 0) {
    _swift_bridgeObjectRetain(puVar4);
    lVar2 = 0x6f635f726f727265;
    ppuVar13 = (undefined **)0xea00000000006564;
    func_0x000100029284(0x6f635f726f727265);
    if (((ulong)ppuVar13 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar4);
    }
    else {
      func_0x0001000bb420(*(long *)(puVar4 + 0x38) + lVar2 * 0x20,&puStack_110);
      _swift_bridgeObjectRelease(puVar4);
      puVar7 = PTR___sSSN_11034da80;
      ppuVar8 = &puStack_130;
      ppuVar14 = &puStack_110;
      _swift_dynamicCast(ppuVar8,ppuVar14,puVar6 + 8,PTR___sSSN_11034da80,6);
      uVar9 = uStack_128;
      puVar1 = puStack_130;
      ppuVar13 = ppuVar14;
      if (((ulong)ppuVar8 & 1) != 0) {
        ppuVar13 = &PTR____CFConstantStringClassReference_110da29d8;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puStack_f8 = puVar7;
        puStack_110 = puVar1;
        uStack_108 = uVar9;
        func_0x000100102924(&puStack_110,&puStack_130);
        puVar7 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native(puVar11);
        func_0x0001001029e8(&puStack_130,ppuVar13,ppuVar14,puVar7);
        _swift_bridgeObjectRelease(ppuVar14);
      }
    }
  }
  ppuVar8 = ppuVar15;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
            (&PTR____CFConstantStringClassReference_110da2958);
  if (*(long *)(puVar11 + 0x10) != 0) {
    _swift_bridgeObjectRetain(puVar11);
    ppuVar14 = ppuVar13;
    func_0x000100029284(ppuVar8);
    if (((ulong)ppuVar14 & 1) != 0) {
      func_0x0001000bb420(*(long *)(puVar11 + 0x38) + (long)ppuVar8 * 0x20,&puStack_110);
      _swift_bridgeObjectRelease(ppuVar13);
      ppuVar13 = (undefined **)puVar11;
      goto LAB_10490fbb0;
    }
    _swift_bridgeObjectRelease(puVar11);
  }
  uStack_108 = 0;
  puStack_110 = (undefined *)0x0;
  puStack_f8 = (undefined *)0x0;
  uStack_100 = 0;
LAB_10490fbb0:
  _swift_bridgeObjectRelease(ppuVar13);
  puVar7 = puStack_f8;
  ppuVar13 = (undefined **)0x11309c428;
  func_0x000104910f80(&puStack_110,0x11309c428);
  if ((puVar7 == (undefined *)0x0) && (*(long *)(puVar4 + 0x10) != 0)) {
    _swift_bridgeObjectRetain(puVar4);
    lVar2 = 0x65725f726f727265;
    ppuVar13 = (undefined **)0xec0000006e6f7361;
    func_0x000100029284(0x65725f726f727265);
    if (((ulong)ppuVar13 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar4);
    }
    else {
      func_0x0001000bb420(*(long *)(puVar4 + 0x38) + lVar2 * 0x20,&puStack_110);
      _swift_bridgeObjectRelease(puVar4);
      puVar4 = PTR___sSSN_11034da80;
      ppuVar8 = &puStack_130;
      ppuVar13 = &puStack_110;
      _swift_dynamicCast(ppuVar8,ppuVar13,puVar6 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)ppuVar8 & 1) != 0) {
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                  (&PTR____CFConstantStringClassReference_110da2958);
        puStack_f8 = puVar4;
        puStack_110 = puStack_130;
        uStack_108 = uStack_128;
        func_0x000100102924(&puStack_110,&puStack_130);
        puVar4 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native(puVar11);
        func_0x0001001029e8(&puStack_130,ppuVar15,ppuVar13,puVar4);
        _swift_bridgeObjectRelease(ppuVar13);
        ppuVar13 = ppuVar15;
      }
    }
  }
  ppuVar8 = &PTR____CFConstantStringClassReference_110da29b8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
            (&PTR____CFConstantStringClassReference_110da29b8);
  uVar9 = 0;
  func_0x0001048db938();
  puStack_110 = (undefined *)0x0;
  puStack_f8 = (undefined *)uVar9;
  func_0x000100102924(&puStack_110,&puStack_130);
  puVar4 = puVar11;
  _swift_isUniquelyReferenced_nonNull_native(puVar11);
  func_0x0001001029e8(&puStack_130,ppuVar8,ppuVar13,puVar4);
  _swift_bridgeObjectRelease(ppuVar13);
  ppuVar13 = &PTR____CFConstantStringClassReference_110da2938;
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retain(&PTR____CFConstantStringClassReference_110da2938);
  puVar7 = puVar11;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar11,PTR___sSSN_11034da80,puVar6 + 8,PTR___sSSSHsWP_11034da90);
  _objc_msgSend(puVar4,PTR_s_initWithDomain_code_userInfo__1125e1288,ppuVar13,8,puVar7);
  _swift_release(puVar11);
  _objc_release(ppuVar13);
  _objc_release(puVar7);
  return puVar4;
}



/* Entry: 10490e424; end: 10490ed7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10490e424(undefined8 param_1,undefined8 param_2,long param_3,long param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  double *pdVar5;
  double dVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  double dVar10;
  undefined1 *puVar11;
  double dVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  double dStack_b0;
  double dStack_a8;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar13 = 0x11309c628;
  func_0x0001048db364();
  lVar1 = _DAT_11309cfb8;
  uVar7 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar11 = auStack_c0 + -uVar7;
  lVar13 = (long)puVar11 - uVar7;
  if (param_3 != 0) {
    _swift_beginAccess(param_4 + _DAT_11309cfb8,&uStack_80,1,0);
    uVar8 = *(undefined8 *)(param_4 + lVar1);
    *(long *)(param_4 + lVar1) = param_3;
    _swift_errorRetain(param_3);
    _swift_errorRelease(uVar8);
    goto LAB_10490e4d0;
  }
  func_0x000104910f3c(param_2,&uStack_80,0x11309c428);
  if (lStack_68 == 0) {
    func_0x000104910f80(&uStack_80,0x11309c428);
  }
  else {
    uVar8 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    puVar9 = PTR___sypN_11034f1a8;
    plVar2 = &lStack_98;
    _swift_dynamicCast(plVar2,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar8,6);
    lVar1 = lStack_98;
    if (((ulong)plVar2 & 1) != 0) {
      uStack_b8 = param_8;
      if (*(long *)(lStack_98 + 0x10) == 0) {
LAB_10490e5d4:
        lStack_90 = 0;
        lStack_98 = 0;
      }
      else {
        _swift_bridgeObjectRetain(lStack_98);
        lVar3 = 0x745f737365636361;
        uVar7 = 0xec0000006e656b6f;
        func_0x000100029284(0x745f737365636361);
        if ((uVar7 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar1);
          goto LAB_10490e5d4;
        }
        func_0x0001000bb420(*(long *)(lVar1 + 0x38) + lVar3 * 0x20,&uStack_80);
        _swift_bridgeObjectRelease(lVar1);
        plVar2 = &lStack_98;
        _swift_dynamicCast(plVar2,&uStack_80,puVar9 + 8,PTR___sSSN_11034da80,6);
        if ((int)plVar2 == 0) {
          lStack_98 = 0;
          lStack_90 = 0;
        }
      }
      plVar2 = (long *)(param_4 + _DAT_11309cf70);
      _swift_beginAccess(plVar2,&lStack_98,1,0);
      lVar3 = plVar2[1];
      *plVar2 = lStack_98;
      plVar2[1] = lStack_90;
      _swift_bridgeObjectRelease(lVar3);
      FUN_10490e0fc(lVar13,lVar1);
      lVar4 = 0;
      __s10Foundation4DateVMa();
      pcVar14 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
      (*pcVar14)(lVar13,0,1,lVar4);
      lVar3 = _DAT_11309cfc0;
      _swift_beginAccess(param_4 + _DAT_11309cfc0,&uStack_80,0x21,0);
      func_0x000100ed9cbc(lVar13,param_4 + lVar3);
      _swift_endAccess(&uStack_80);
      if (*(long *)(lVar1 + 0x10) == 0) {
LAB_10490e704:
        __s10Foundation4DateV13distantFutureACvgZ(puVar11);
      }
      else {
        _swift_bridgeObjectRetain(lVar1);
        uVar7 = 0;
        lVar13 = -0x2fffffffffffffe5;
        func_0x000100029284(0xd00000000000001b);
        if ((uVar7 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar1);
          goto LAB_10490e704;
        }
        func_0x0001000bb420(*(long *)(lVar1 + 0x38) + lVar13 * 0x20,&uStack_80);
        _swift_bridgeObjectRelease(lVar1);
        pdVar5 = &dStack_b0;
        _swift_dynamicCast(pdVar5,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSdN_11034dd90,6);
        if ((((ulong)pdVar5 & 1) == 0) || (dStack_b0 <= 0.0)) goto LAB_10490e704;
        __s10Foundation4DateV21timeIntervalSince1970ACSd_tcfC(puVar11);
      }
      (*pcVar14)(puVar11,0,1,lVar4);
      lVar13 = _DAT_11309cfc8;
      _swift_beginAccess(param_4 + _DAT_11309cfc8,&uStack_80,0x21,0);
      func_0x000100ed9cbc(puVar11,param_4 + lVar13);
      _swift_endAccess(&uStack_80);
      if (*(long *)(lVar1 + 0x10) == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
        puVar9 = PTR___sypN_11034f1a8;
      }
      else {
        _swift_bridgeObjectRetain(lVar1);
        lVar13 = 0x6e656b6f745f6469;
        uVar7 = 0;
        func_0x000100029284(0x6e656b6f745f6469);
        puVar9 = PTR___sypN_11034f1a8;
        if ((uVar7 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar1);
          uStack_78 = 0;
          uStack_80 = 0;
          lStack_68 = 0;
          uStack_70 = 0;
        }
        else {
          func_0x0001000bb420(*(long *)(lVar1 + 0x38) + lVar13 * 0x20,&uStack_80);
          _swift_bridgeObjectRelease(lVar1);
        }
      }
      _swift_bridgeObjectRelease(lVar1);
      if (lStack_68 == 0) {
        func_0x000104910f80(&uStack_80,0x11309c428);
        dVar10 = 0.0;
        dVar12 = 0.0;
      }
      else {
        pdVar5 = &dStack_b0;
        _swift_dynamicCast(pdVar5,&uStack_80,puVar9 + 8,PTR___sSSN_11034da80,6);
        dVar10 = dStack_b0;
        dVar12 = dStack_a8;
        if ((int)pdVar5 == 0) {
          dVar10 = 0.0;
          dVar12 = 0.0;
        }
      }
      pdVar5 = (double *)(param_4 + _DAT_11309cf80);
      _swift_beginAccess(pdVar5,&dStack_b0,1,0);
      dVar6 = pdVar5[1];
      *pdVar5 = dVar10;
      pdVar5[1] = dVar12;
      _swift_bridgeObjectRelease(dVar6);
      param_8 = uStack_b8;
    }
  }
  lVar13 = param_4 + _DAT_11309cf80;
  _swift_beginAccess(lVar13,&uStack_80,0,0);
  if (*(long *)(lVar13 + 8) != 0) {
    func_0x00010490dcb0(param_4,param_7,param_8,param_5,param_6,param_4);
    return;
  }
LAB_10490e4d0:
  (*param_5)(param_4);
  return;
}



/* Entry: 10490ed80; end: 10490eda7;  */

/* WARNING: Removing unreachable block (ram,0x00010490cfdc) */
/* WARNING: Removing unreachable block (ram,0x00010490cfd4) */
/* WARNING: Removing unreachable block (ram,0x00010490d04c) */
/* WARNING: Removing unreachable block (ram,0x00010490d07c) */
/* WARNING: Removing unreachable block (ram,0x00010490d044) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10490ed80(code *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x20;
  undefined1 auStack_110 [96];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = *unaff_x20;
  lVar1 = lVar4 + _DAT_11309cf88;
  _swift_beginAccess(lVar1,auStack_78,0,0);
  if (*(long *)(lVar1 + 8) == 0) {
    lVar1 = lVar4 + _DAT_11309cf78;
    _swift_beginAccess(lVar1,auStack_90,0,0);
    if (*(long *)(lVar1 + 8) == 0) {
      lVar1 = lVar4 + _DAT_11309cf80;
      _swift_beginAccess(lVar1,auStack_a8,0,0);
      if (*(long *)(lVar1 + 8) == 0) {
        (*param_1)(lVar4);
      }
      else {
        FUN_10490c13c(auStack_110);
        _swift_unknownObjectRetain(uStack_b0);
        FUN_104910308(auStack_110);
        uVar2 = 0xd000000000000019;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f21bf30)
        ;
        uVar3 = uStack_b0;
        _objc_msgSend(uStack_b0,PTR_s_errorWithCode_userInfo_message_u_1125c3e28,0x12d,0,uVar2,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        lVar1 = _DAT_11309cfb8;
        _swift_beginAccess(lVar4 + _DAT_11309cfb8,auStack_110,1,0);
        uVar2 = *(undefined8 *)(lVar4 + lVar1);
        *(undefined8 *)(lVar4 + lVar1) = uVar3;
        _swift_errorRelease(uVar2);
        (*param_1)(lVar4);
        _swift_unknownObjectRelease(uStack_b0);
      }
    }
    else {
      _swift_bridgeObjectRetain(0);
      func_0x00010490d84c(param_1,param_2,0,0xe000000000000000,lVar4);
      _swift_bridgeObjectRelease(0xe000000000000000);
    }
  }
  else {
    func_0x00010490d154(0,0,0,0,param_1,param_2,lVar4);
  }
  return;
}



/* Entry: 10490eda8; end: 10490ef83;  */

void FUN_10490eda8(void)

{
  FUN_104910bb8();
  return;
}



/* Entry: 10490ef84; end: 10490efa3;  */

void FUN_10490ef84(void)

{
  uRam0000000113815698 = 0;
  uRam0000000113815680 = 0;
  uRam0000000113815678 = 0;
  uRam0000000113815690 = 0;
  uRam0000000113815688 = 0;
  uRam0000000113815660 = 0;
  uRam0000000113815658 = 0;
  uRam0000000113815670 = 0;
  uRam0000000113815668 = 0;
  uRam0000000113815640 = 0;
  uRam0000000113815638 = 0;
  uRam0000000113815650 = 0;
  uRam0000000113815648 = 0;
  return;
}



/* Entry: 10490efa4; end: 10490f087;  */

undefined8 FUN_10490efa4(void)

{
  if (lRam000000011309c278 != -1) {
    _swift_once(0x11309c278,FUN_10490ef84);
  }
  return 0x113815638;
}



/* Entry: 10490f088; end: 10490f217;  */

void FUN_10490f088(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  uVar1 = 0;
  FUN_104911f5c();
  uVar6 = uVar1;
  _objc_allocWithZone();
  _objc_msgSend();
  ppuStack_48 = &PTR_DAT_1107b7c18;
  lVar2 = 0;
  auStack_68[0] = uVar6;
  uStack_50 = uVar1;
  func_0x0001048dd678();
  lVar3 = lVar2;
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x10) = 0xd00000000000001b;
  *(undefined8 *)(lVar3 + 0x18) = 0x800000010f219d00;
  *(undefined8 *)(lVar3 + 0x20) = 0xd000000000000019;
  *(undefined8 *)(lVar3 + 0x28) = 0x800000010f219d20;
  puVar4 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  *(undefined **)(lVar3 + 0x30) = puVar5;
  ppuStack_70 = &PTR_DAT_1107b6528;
  puVar4 = PTR_PTR_1126add18;
  alStack_90[0] = lVar3;
  lStack_78 = lVar2;
  _objc_allocWithZone();
  _objc_msgSend();
  puVar5 = PTR_PTR_1126add20;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  FUN_1049fe1e8();
  _objc_allocWithZone();
  _objc_msgSend();
  func_0x000100dc1af8(auStack_68,0x1138156a0);
  func_0x000100dc1af8(alStack_90,0x1138156c8);
  puRam00000001138156f0 = puVar4;
  puRam00000001138156f8 = puVar5;
  uRam0000000113815700 = uVar6;
  return;
}



/* Entry: 10490f218; end: 10490f3e3;  */

undefined8 FUN_10490f218(void)

{
  if (lRam000000011309c280 != -1) {
    _swift_once(0x11309c280,FUN_10490f088);
  }
  return 0x1138156a0;
}



/* Entry: 10490f3e4; end: 10490f3ff;  */

void FUN_10490f3e4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  if (lRam000000011309c278 != -1) {
    _swift_once(0x11309c278,FUN_10490ef84);
  }
  _swift_beginAccess(0x113815638,auStack_38,0,0);
  func_0x000104910f3c(0x113815638,param_1,0x11309c528);
  return;
}



/* Entry: 10490f400; end: 10490f4f7;  */

void FUN_10490f400(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  if (lRam000000011309c278 != -1) {
    _swift_once(0x11309c278,FUN_10490ef84);
  }
  _swift_beginAccess(0x113815638,auStack_38,0x21,0);
  func_0x000104910bfc(param_1,0x113815638);
  _swift_endAccess(auStack_38);
  func_0x000104910f80(param_1,0x11309c528);
  return;
}



/* Entry: 10490f4f8; end: 10490f513;  */

void FUN_10490f4f8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  if (lRam000000011309c280 != -1) {
    _swift_once(0x11309c280,FUN_10490f088);
  }
  _swift_beginAccess(0x1138156a0,auStack_38,0,0);
  func_0x000104910f3c(0x1138156a0,param_1,0x11309c528);
  return;
}



/* Entry: 10490f514; end: 10490f57f;  */

void FUN_10490f514(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_38 [24];
  
  if (*param_4 != -1) {
    _swift_once(param_4,param_6);
  }
  _swift_beginAccess(param_5,auStack_38,0,0);
  func_0x000104910f3c(param_5,param_1,0x11309c528);
  return;
}



/* Entry: 10490f580; end: 10490f863;  */

undefined * FUN_10490f580(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_10490f70c;
  _swift_bridgeObjectRetain();
  lVar2 = 0x6574617473;
  uVar12 = 0;
  func_0x000100029284(0x6574617473);
  if ((uVar12 & 1) == 0) {
LAB_10490f708:
    _swift_bridgeObjectRelease(param_1);
LAB_10490f70c:
    puVar4 = (undefined *)0x0;
    puVar11 = (undefined *)0x0;
  }
  else {
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar2 * 0x20,&uStack_70);
    _swift_bridgeObjectRelease(param_1);
    puVar4 = PTR___sypN_11034f1a8;
    puVar3 = &uStack_80;
    _swift_dynamicCast(puVar3,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar10 = uStack_78;
    uVar12 = uStack_80;
    if (((ulong)puVar3 & 1) == 0) goto LAB_10490f70c;
    puVar11 = PTR_PTR_1126add58;
    _swift_getInitializedObjCClass();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar12,uVar10);
    _swift_bridgeObjectRelease(uVar10);
    uStack_70 = 0;
    _objc_msgSend(puVar11,PTR_s_objectForJSONString_error__1126159d8,uVar12,&uStack_70);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    uVar9 = uStack_70;
    if (puVar11 == (undefined *)0x0) {
      uVar5 = uStack_70;
      _objc_retain();
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(uVar5);
      _swift_willThrow();
      _swift_errorRelease(uVar9);
      goto LAB_10490f70c;
    }
    _objc_retain();
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,puVar11);
    _swift_unknownObjectRelease(puVar11);
    uVar9 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    puVar3 = &uStack_80;
    _swift_dynamicCast(puVar3,&uStack_70,puVar4 + 8,uVar9,6);
    uVar12 = uStack_80;
    if (((ulong)puVar3 & 1) == 0) goto LAB_10490f70c;
    if (*(long *)(uStack_80 + 0x10) == 0) {
LAB_10490f780:
      uStack_68 = 0;
      uStack_70 = 0;
      lStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      _swift_bridgeObjectRetain(uStack_80);
      lVar2 = 0x676e656c6c616863;
      uVar10 = 0xe900000000000065;
      func_0x000100029284(0x676e656c6c616863);
      if ((uVar10 & 1) == 0) {
        _swift_bridgeObjectRelease(uVar12);
        goto LAB_10490f780;
      }
      func_0x0001000bb420(*(long *)(uVar12 + 0x38) + lVar2 * 0x20,&uStack_70);
      _swift_bridgeObjectRelease(uVar12);
    }
    _swift_bridgeObjectRelease(uVar12);
    if (lStack_58 == 0) {
      func_0x000104910f80(&uStack_70,0x11309c428);
      goto LAB_10490f70c;
    }
    puVar3 = &uStack_80;
    _swift_dynamicCast(puVar3,&uStack_70,puVar4 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar3 & 1) == 0) goto LAB_10490f70c;
    uVar12 = uStack_80 & 0xffffffffffff;
    if ((uStack_78 & 0x2000000000000000) != 0) {
      uVar12 = uStack_78 >> 0x38 & 0xf;
    }
    param_1 = uStack_78;
    if (uVar12 == 0) goto LAB_10490f708;
    puVar6 = PTR_PTR_1126add08;
    _swift_getInitializedObjCClass();
    uVar12 = uStack_80;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_80,uStack_78);
    _swift_bridgeObjectRelease(uStack_78);
    puVar11 = PTR_s_URLDecode__11254e520;
    _objc_msgSend(puVar6,PTR_s_URLDecode__11254e520,uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    puVar4 = puVar6;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(puVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail(puVar4,puVar11);
  if (*(long *)(puVar4 + 0x10) == 0) {
    return (undefined *)0x0;
  }
  _swift_bridgeObjectRetain();
  lVar2 = 0x656d5f726f727265;
  uVar12 = 0xed00006567617373;
  func_0x000100029284(0x656d5f726f727265);
  if ((uVar12 & 1) == 0) {
    _swift_bridgeObjectRelease(puVar4);
    return (undefined *)0x0;
  }
  func_0x0001000bb420(*(long *)(puVar4 + 0x38) + lVar2 * 0x20,&puStack_110);
  _swift_bridgeObjectRelease(puVar4);
  puVar6 = PTR___sypN_11034f1a8;
  puVar11 = PTR___sSSN_11034da80;
  ppuVar13 = &puStack_130;
  ppuVar8 = &puStack_110;
  _swift_dynamicCast(ppuVar13,ppuVar8,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  uStack_108 = uStack_128;
  puStack_110 = puStack_130;
  if (((ulong)ppuVar13 & 1) == 0) {
    return (undefined *)0x0;
  }
  ppuVar15 = &PTR____CFConstantStringClassReference_110da2958;
  ppuVar13 = ppuVar15;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puStack_f8 = puVar11;
  func_0x000100102924(&puStack_110,&puStack_130);
  puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  _swift_isUniquelyReferenced_nonNull_native();
  func_0x0001001029e8(&puStack_130,ppuVar13,ppuVar8,puVar7);
  _swift_bridgeObjectRelease(ppuVar8);
  if (*(long *)(puVar4 + 0x10) != 0) {
    _swift_bridgeObjectRetain(puVar4);
    lVar2 = 0x726f727265;
    ppuVar13 = (undefined **)0xe500000000000000;
    func_0x000100029284(0x726f727265);
    if (((ulong)ppuVar13 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar4);
    }
    else {
      func_0x0001000bb420(*(long *)(puVar4 + 0x38) + lVar2 * 0x20,&puStack_110);
      _swift_bridgeObjectRelease(puVar4);
      puVar7 = PTR___sSSN_11034da80;
      ppuVar8 = &puStack_130;
      ppuVar14 = &puStack_110;
      _swift_dynamicCast(ppuVar8,ppuVar14,puVar6 + 8,PTR___sSSN_11034da80,6);
      uVar9 = uStack_128;
      puVar1 = puStack_130;
      ppuVar13 = ppuVar14;
      if (((ulong)ppuVar8 & 1) != 0) {
        ppuVar13 = ppuVar15;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puStack_f8 = puVar7;
        puStack_110 = puVar1;
        uStack_108 = uVar9;
        func_0x000100102924(&puStack_110,&puStack_130);
        puVar7 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native(puVar11);
        func_0x0001001029e8(&puStack_130,ppuVar13,ppuVar14,puVar7);
        _swift_bridgeObjectRelease(ppuVar14);
      }
    }
  }
  if (*(long *)(puVar4 + 0x10) != 0) {
    _swift_bridgeObjectRetain(puVar4);
    lVar2 = 0x6f635f726f727265;
    ppuVar13 = (undefined **)0xea00000000006564;
    func_0x000100029284(0x6f635f726f727265);
    if (((ulong)ppuVar13 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar4);
    }
    else {
      func_0x0001000bb420(*(long *)(puVar4 + 0x38) + lVar2 * 0x20,&puStack_110);
      _swift_bridgeObjectRelease(puVar4);
      puVar7 = PTR___sSSN_11034da80;
      ppuVar8 = &puStack_130;
      ppuVar14 = &puStack_110;
      _swift_dynamicCast(ppuVar8,ppuVar14,puVar6 + 8,PTR___sSSN_11034da80,6);
      uVar9 = uStack_128;
      puVar1 = puStack_130;
      ppuVar13 = ppuVar14;
      if (((ulong)ppuVar8 & 1) != 0) {
        ppuVar13 = &PTR____CFConstantStringClassReference_110da29d8;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puStack_f8 = puVar7;
        puStack_110 = puVar1;
        uStack_108 = uVar9;
        func_0x000100102924(&puStack_110,&puStack_130);
        puVar7 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native(puVar11);
        func_0x0001001029e8(&puStack_130,ppuVar13,ppuVar14,puVar7);
        _swift_bridgeObjectRelease(ppuVar14);
      }
    }
  }
  ppuVar8 = ppuVar15;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
            (&PTR____CFConstantStringClassReference_110da2958);
  if (*(long *)(puVar11 + 0x10) != 0) {
    _swift_bridgeObjectRetain(puVar11);
    ppuVar14 = ppuVar13;
    func_0x000100029284(ppuVar8);
    if (((ulong)ppuVar14 & 1) != 0) {
      func_0x0001000bb420(*(long *)(puVar11 + 0x38) + (long)ppuVar8 * 0x20,&puStack_110);
      _swift_bridgeObjectRelease(ppuVar13);
      ppuVar13 = (undefined **)puVar11;
      goto LAB_10490fbb0;
    }
    _swift_bridgeObjectRelease(puVar11);
  }
  uStack_108 = 0;
  puStack_110 = (undefined *)0x0;
  puStack_f8 = (undefined *)0x0;
  uStack_100 = 0;
LAB_10490fbb0:
  _swift_bridgeObjectRelease(ppuVar13);
  puVar7 = puStack_f8;
  ppuVar13 = (undefined **)0x11309c428;
  func_0x000104910f80(&puStack_110,0x11309c428);
  if ((puVar7 == (undefined *)0x0) && (*(long *)(puVar4 + 0x10) != 0)) {
    _swift_bridgeObjectRetain(puVar4);
    lVar2 = 0x65725f726f727265;
    ppuVar13 = (undefined **)0xec0000006e6f7361;
    func_0x000100029284(0x65725f726f727265);
    if (((ulong)ppuVar13 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar4);
    }
    else {
      func_0x0001000bb420(*(long *)(puVar4 + 0x38) + lVar2 * 0x20,&puStack_110);
      _swift_bridgeObjectRelease(puVar4);
      puVar4 = PTR___sSSN_11034da80;
      ppuVar8 = &puStack_130;
      ppuVar13 = &puStack_110;
      _swift_dynamicCast(ppuVar8,ppuVar13,puVar6 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)ppuVar8 & 1) != 0) {
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                  (&PTR____CFConstantStringClassReference_110da2958);
        puStack_f8 = puVar4;
        puStack_110 = puStack_130;
        uStack_108 = uStack_128;
        func_0x000100102924(&puStack_110,&puStack_130);
        puVar4 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native(puVar11);
        func_0x0001001029e8(&puStack_130,ppuVar15,ppuVar13,puVar4);
        _swift_bridgeObjectRelease(ppuVar13);
        ppuVar13 = ppuVar15;
      }
    }
  }
  ppuVar8 = &PTR____CFConstantStringClassReference_110da29b8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
            (&PTR____CFConstantStringClassReference_110da29b8);
  uVar9 = 0;
  func_0x0001048db938();
  puStack_110 = (undefined *)0x0;
  puStack_f8 = (undefined *)uVar9;
  func_0x000100102924(&puStack_110,&puStack_130);
  puVar4 = puVar11;
  _swift_isUniquelyReferenced_nonNull_native(puVar11);
  func_0x0001001029e8(&puStack_130,ppuVar8,ppuVar13,puVar4);
  _swift_bridgeObjectRelease(ppuVar13);
  ppuVar13 = &PTR____CFConstantStringClassReference_110da2938;
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retain(&PTR____CFConstantStringClassReference_110da2938);
  puVar7 = puVar11;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar11,PTR___sSSN_11034da80,puVar6 + 8,PTR___sSSSHsWP_11034da90);
  _objc_msgSend(puVar4,PTR_s_initWithDomain_code_userInfo__1125e1288,ppuVar13,8,puVar7);
  _swift_release(puVar11);
  _objc_release(ppuVar13);
  _objc_release(puVar7);
  return puVar4;
}



/* Entry: 10490f864; end: 104910307;  */

undefined * FUN_10490f864(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return (undefined *)0x0;
  }
  _swift_bridgeObjectRetain();
  lVar3 = 0x656d5f726f727265;
  uVar8 = 0xed00006567617373;
  func_0x000100029284(0x656d5f726f727265);
  if ((uVar8 & 1) == 0) {
    _swift_bridgeObjectRelease(param_1);
    return (undefined *)0x0;
  }
  func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar3 * 0x20,&puStack_80);
  _swift_bridgeObjectRelease(param_1);
  puVar2 = PTR___sypN_11034f1a8;
  puVar1 = PTR___sSSN_11034da80;
  ppuVar9 = &puStack_a0;
  ppuVar5 = &puStack_80;
  _swift_dynamicCast(ppuVar9,ppuVar5,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  uStack_78 = uStack_98;
  puStack_80 = puStack_a0;
  if (((ulong)ppuVar9 & 1) == 0) {
    return (undefined *)0x0;
  }
  ppuVar11 = &PTR____CFConstantStringClassReference_110da2958;
  ppuVar9 = ppuVar11;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puStack_68 = puVar1;
  func_0x000100102924(&puStack_80,&puStack_a0);
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  _swift_isUniquelyReferenced_nonNull_native();
  func_0x0001001029e8(&puStack_a0,ppuVar9,ppuVar5,puVar4);
  _swift_bridgeObjectRelease(ppuVar5);
  if (*(long *)(param_1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_1);
    lVar3 = 0x726f727265;
    ppuVar9 = (undefined **)0xe500000000000000;
    func_0x000100029284(0x726f727265);
    if (((ulong)ppuVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar3 * 0x20,&puStack_80);
      _swift_bridgeObjectRelease(param_1);
      puVar4 = PTR___sSSN_11034da80;
      ppuVar5 = &puStack_a0;
      ppuVar10 = &puStack_80;
      _swift_dynamicCast(ppuVar5,ppuVar10,puVar2 + 8,PTR___sSSN_11034da80,6);
      uVar6 = uStack_98;
      puVar7 = puStack_a0;
      ppuVar9 = ppuVar10;
      if (((ulong)ppuVar5 & 1) != 0) {
        ppuVar9 = ppuVar11;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puStack_68 = puVar4;
        puStack_80 = puVar7;
        uStack_78 = uVar6;
        func_0x000100102924(&puStack_80,&puStack_a0);
        puVar4 = puVar1;
        _swift_isUniquelyReferenced_nonNull_native(puVar1);
        func_0x0001001029e8(&puStack_a0,ppuVar9,ppuVar10,puVar4);
        _swift_bridgeObjectRelease(ppuVar10);
      }
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_1);
    lVar3 = 0x6f635f726f727265;
    ppuVar9 = (undefined **)0xea00000000006564;
    func_0x000100029284(0x6f635f726f727265);
    if (((ulong)ppuVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar3 * 0x20,&puStack_80);
      _swift_bridgeObjectRelease(param_1);
      puVar4 = PTR___sSSN_11034da80;
      ppuVar5 = &puStack_a0;
      ppuVar10 = &puStack_80;
      _swift_dynamicCast(ppuVar5,ppuVar10,puVar2 + 8,PTR___sSSN_11034da80,6);
      uVar6 = uStack_98;
      puVar7 = puStack_a0;
      ppuVar9 = ppuVar10;
      if (((ulong)ppuVar5 & 1) != 0) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110da29d8;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puStack_68 = puVar4;
        puStack_80 = puVar7;
        uStack_78 = uVar6;
        func_0x000100102924(&puStack_80,&puStack_a0);
        puVar4 = puVar1;
        _swift_isUniquelyReferenced_nonNull_native(puVar1);
        func_0x0001001029e8(&puStack_a0,ppuVar9,ppuVar10,puVar4);
        _swift_bridgeObjectRelease(ppuVar10);
      }
    }
  }
  ppuVar5 = ppuVar11;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
            (&PTR____CFConstantStringClassReference_110da2958);
  if (*(long *)(puVar1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(puVar1);
    ppuVar10 = ppuVar9;
    func_0x000100029284(ppuVar5);
    if (((ulong)ppuVar10 & 1) != 0) {
      func_0x0001000bb420(*(long *)(puVar1 + 0x38) + (long)ppuVar5 * 0x20,&puStack_80);
      _swift_bridgeObjectRelease(ppuVar9);
      ppuVar9 = (undefined **)puVar1;
      goto LAB_10490fbb0;
    }
    _swift_bridgeObjectRelease(puVar1);
  }
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  puStack_68 = (undefined *)0x0;
  uStack_70 = 0;
LAB_10490fbb0:
  _swift_bridgeObjectRelease(ppuVar9);
  puVar4 = puStack_68;
  ppuVar9 = (undefined **)0x11309c428;
  func_0x000104910f80(&puStack_80,0x11309c428);
  if ((puVar4 == (undefined *)0x0) && (*(long *)(param_1 + 0x10) != 0)) {
    _swift_bridgeObjectRetain(param_1);
    lVar3 = 0x65725f726f727265;
    ppuVar9 = (undefined **)0xec0000006e6f7361;
    func_0x000100029284(0x65725f726f727265);
    if (((ulong)ppuVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar3 * 0x20,&puStack_80);
      _swift_bridgeObjectRelease(param_1);
      puVar4 = PTR___sSSN_11034da80;
      ppuVar5 = &puStack_a0;
      ppuVar9 = &puStack_80;
      _swift_dynamicCast(ppuVar5,ppuVar9,puVar2 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)ppuVar5 & 1) != 0) {
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                  (&PTR____CFConstantStringClassReference_110da2958);
        puStack_68 = puVar4;
        puStack_80 = puStack_a0;
        uStack_78 = uStack_98;
        func_0x000100102924(&puStack_80,&puStack_a0);
        puVar4 = puVar1;
        _swift_isUniquelyReferenced_nonNull_native(puVar1);
        func_0x0001001029e8(&puStack_a0,ppuVar11,ppuVar9,puVar4);
        _swift_bridgeObjectRelease(ppuVar9);
        ppuVar9 = ppuVar11;
      }
    }
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110da29b8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
            (&PTR____CFConstantStringClassReference_110da29b8);
  uVar6 = 0;
  func_0x0001048db938();
  puStack_80 = (undefined *)0x0;
  puStack_68 = (undefined *)uVar6;
  func_0x000100102924(&puStack_80,&puStack_a0);
  puVar4 = puVar1;
  _swift_isUniquelyReferenced_nonNull_native(puVar1);
  func_0x0001001029e8(&puStack_a0,ppuVar5,ppuVar9,puVar4);
  _swift_bridgeObjectRelease(ppuVar9);
  ppuVar9 = &PTR____CFConstantStringClassReference_110da2938;
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retain(&PTR____CFConstantStringClassReference_110da2938);
  puVar7 = puVar1;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar1,PTR___sSSN_11034da80,puVar2 + 8,PTR___sSSSHsWP_11034da90);
  _objc_msgSend(puVar4,PTR_s_initWithDomain_code_userInfo__1125e1288,ppuVar9,8,puVar7);
  _swift_release(puVar1);
  _objc_release(ppuVar9);
  _objc_release(puVar7);
  return puVar4;
}



/* Entry: 104910308; end: 104910333;  */

undefined8 FUN_104910308(undefined8 param_1)

{
  func_0x000104910c80(param_1,&UNK_1107b7b10);
  return param_1;
}



/* Entry: 104910334; end: 10491033f;  */

/* WARNING: Removing unreachable block (ram,0x00010490ea7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104910334(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_80 [32];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar5 = 0x11309c628;
  func_0x0001048db364();
  puVar15 = auStack_120 + -(*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)(lVar1 + _DAT_11309cf88);
  _swift_beginAccess(puVar9,auStack_80,1,0);
  uVar6 = puVar9[1];
  *puVar9 = 0;
  puVar9[1] = 0;
  _swift_bridgeObjectRelease(uVar6);
  if (param_3 == 0) {
    func_0x000104910f3c(param_2,&uStack_110,0x11309c428);
    if (lStack_f8 == 0) {
      func_0x000104910f80(&uStack_110,0x11309c428);
      goto code_r0x00010490e954;
    }
    uVar6 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    puVar14 = PTR___sypN_11034f1a8;
    plVar7 = &lStack_98;
    _swift_dynamicCast(plVar7,&uStack_110,PTR___sypN_11034f1a8 + 8,uVar6,6);
    lVar5 = lStack_98;
    if (((ulong)plVar7 & 1) == 0) goto code_r0x00010490e954;
    if (*(long *)(lStack_98 + 0x10) == 0) {
code_r0x00010490eaa4:
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_f8 = 0;
      uStack_100 = 0;
      func_0x000104910f80(&uStack_110,0x11309c428);
      if (*(long *)(lVar5 + 0x10) == 0) {
code_r0x00010490eb40:
        lStack_90 = 0;
        lStack_98 = 0;
      }
      else {
        _swift_bridgeObjectRetain(lVar5);
        lVar8 = 0x745f737365636361;
        uVar11 = 0xec0000006e656b6f;
        func_0x000100029284(0x745f737365636361);
        if ((uVar11 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar5);
          goto code_r0x00010490eb40;
        }
        func_0x0001000bb420(*(long *)(lVar5 + 0x38) + lVar8 * 0x20,&uStack_110);
        _swift_bridgeObjectRelease(lVar5);
        plVar7 = &lStack_98;
        _swift_dynamicCast(plVar7,&uStack_110,puVar14 + 8,PTR___sSSN_11034da80,6);
        if ((int)plVar7 == 0) {
          lStack_98 = 0;
          lStack_90 = 0;
        }
      }
      plVar7 = (long *)(lVar1 + _DAT_11309cf70);
      _swift_beginAccess(plVar7,&lStack_98,1,0);
      lVar8 = plVar7[1];
      *plVar7 = lStack_98;
      plVar7[1] = lStack_90;
      _swift_bridgeObjectRelease(lVar8);
      FUN_10490e0fc(puVar15,lVar5);
      lVar8 = 0;
      __s10Foundation4DateVMa();
      (**(code **)(*(long *)(lVar8 + -8) + 0x38))(puVar15,0,1,lVar8);
      lVar8 = _DAT_11309cfc0;
      _swift_beginAccess(lVar1 + _DAT_11309cfc0,&uStack_110,0x21,0);
      func_0x000100ed9cbc(puVar15,lVar1 + lVar8);
      _swift_endAccess(&uStack_110);
      if (*(long *)(lVar5 + 0x10) == 0) {
        uStack_108 = 0;
        uStack_110 = 0;
        lStack_f8 = 0;
        uStack_100 = 0;
        puVar14 = PTR___sypN_11034f1a8;
      }
      else {
        _swift_bridgeObjectRetain(lVar5);
        lVar8 = 0x6e656b6f745f6469;
        uVar11 = 0;
        func_0x000100029284(0x6e656b6f745f6469);
        puVar14 = PTR___sypN_11034f1a8;
        if ((uVar11 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar5);
          uStack_108 = 0;
          uStack_110 = 0;
          lStack_f8 = 0;
          uStack_100 = 0;
        }
        else {
          func_0x0001000bb420(*(long *)(lVar5 + 0x38) + lVar8 * 0x20,&uStack_110);
          _swift_bridgeObjectRelease(lVar5);
        }
      }
      _swift_bridgeObjectRelease(lVar5);
      if (lStack_f8 == 0) {
        func_0x000104910f80(&uStack_110,0x11309c428);
        uVar6 = 0;
        uVar13 = 0;
      }
      else {
        puVar9 = &uStack_a8;
        _swift_dynamicCast(puVar9,&uStack_110,puVar14 + 8,PTR___sSSN_11034da80,6);
        uVar6 = uStack_a8;
        uVar13 = uStack_a0;
        if ((int)puVar9 == 0) {
          uVar6 = 0;
          uVar13 = 0;
        }
      }
      puVar9 = (undefined8 *)(lVar1 + _DAT_11309cf80);
      _swift_beginAccess(puVar9,&uStack_110,1,0);
      uVar10 = puVar9[1];
      *puVar9 = uVar6;
      puVar9[1] = uVar13;
      _swift_bridgeObjectRelease(uVar10);
      goto code_r0x00010490e98c;
    }
    _swift_bridgeObjectRetain(lStack_98);
    lVar8 = 0x726f727265;
    uVar11 = 0;
    func_0x000100029284(0x726f727265);
    if ((uVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar5);
      goto code_r0x00010490eaa4;
    }
    func_0x0001000bb420(*(long *)(lVar5 + 0x38) + lVar8 * 0x20,&uStack_110);
    _swift_bridgeObjectRelease(lVar5);
    func_0x000104910f80(&uStack_110,0x11309c428);
    FUN_10490c13c(&uStack_110);
    _swift_bridgeObjectRelease(lVar5);
    _swift_unknownObjectRetain(uStack_b0);
    FUN_104910308(&uStack_110);
    uVar13 = 0xd000000000000028;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x800000010f21c000);
    uVar6 = uStack_b0;
    _objc_msgSend(uStack_b0,PTR_s_errorWithCode_userInfo_message_u_1125c3e28,2,0,uVar13,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    _swift_unknownObjectRelease(uStack_b0);
    lVar5 = _DAT_11309cfb8;
    _swift_beginAccess(lVar1 + _DAT_11309cfb8,&uStack_110,1,0);
    uVar13 = *(undefined8 *)(lVar1 + lVar5);
    *(undefined8 *)(lVar1 + lVar5) = uVar6;
  }
  else {
code_r0x00010490e954:
    lVar5 = _DAT_11309cfb8;
    _swift_beginAccess(lVar1 + _DAT_11309cfb8,&uStack_110,1,0);
    uVar13 = *(undefined8 *)(lVar1 + lVar5);
    *(long *)(lVar1 + lVar5) = param_3;
    _swift_errorRetain(param_3);
  }
  _swift_errorRelease(uVar13);
code_r0x00010490e98c:
  FUN_10490cf18(uVar3,uVar2,0,0,uVar4,uVar12,lVar1);
  return;
}



/* Entry: 104910340; end: 1049103a3;  */

void FUN_104910340(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1049103a4; end: 1049103d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049103a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  double *pdVar9;
  double dVar10;
  undefined8 uVar11;
  ulong uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined *puVar14;
  double dVar15;
  undefined1 *puVar16;
  double dVar17;
  long lVar18;
  code *pcVar19;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  double dStack_b0;
  double dStack_a8;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar18 = 0x11309c628;
  func_0x0001048db364();
  lVar4 = _DAT_11309cfb8;
  uVar12 = *(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar16 = auStack_c0 + -uVar12;
  lVar18 = (long)puVar16 - uVar12;
  if (param_3 != 0) {
    _swift_beginAccess(lVar1 + _DAT_11309cfb8,&uStack_80,1,0);
    uVar13 = *(undefined8 *)(lVar1 + lVar4);
    *(long *)(lVar1 + lVar4) = param_3;
    _swift_errorRetain(param_3);
    _swift_errorRelease(uVar13);
    goto LAB_10490e4d0;
  }
  func_0x000104910f3c(param_2,&uStack_80,0x11309c428);
  if (lStack_68 == 0) {
    func_0x000104910f80(&uStack_80,0x11309c428);
  }
  else {
    uVar5 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    puVar14 = PTR___sypN_11034f1a8;
    plVar6 = &lStack_98;
    _swift_dynamicCast(plVar6,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar5,6);
    lVar4 = lStack_98;
    if (((ulong)plVar6 & 1) != 0) {
      uStack_b8 = uVar11;
      if (*(long *)(lStack_98 + 0x10) == 0) {
LAB_10490e5d4:
        lStack_90 = 0;
        lStack_98 = 0;
      }
      else {
        _swift_bridgeObjectRetain(lStack_98);
        lVar7 = 0x745f737365636361;
        uVar12 = 0xec0000006e656b6f;
        func_0x000100029284(0x745f737365636361);
        if ((uVar12 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar4);
          goto LAB_10490e5d4;
        }
        func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar7 * 0x20,&uStack_80);
        _swift_bridgeObjectRelease(lVar4);
        plVar6 = &lStack_98;
        _swift_dynamicCast(plVar6,&uStack_80,puVar14 + 8,PTR___sSSN_11034da80,6);
        if ((int)plVar6 == 0) {
          lStack_98 = 0;
          lStack_90 = 0;
        }
      }
      plVar6 = (long *)(lVar1 + _DAT_11309cf70);
      _swift_beginAccess(plVar6,&lStack_98,1,0);
      lVar7 = plVar6[1];
      *plVar6 = lStack_98;
      plVar6[1] = lStack_90;
      _swift_bridgeObjectRelease(lVar7);
      FUN_10490e0fc(lVar18,lVar4);
      lVar8 = 0;
      __s10Foundation4DateVMa();
      pcVar19 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
      (*pcVar19)(lVar18,0,1,lVar8);
      lVar7 = _DAT_11309cfc0;
      _swift_beginAccess(lVar1 + _DAT_11309cfc0,&uStack_80,0x21,0);
      func_0x000100ed9cbc(lVar18,lVar1 + lVar7);
      _swift_endAccess(&uStack_80);
      if (*(long *)(lVar4 + 0x10) == 0) {
LAB_10490e704:
        __s10Foundation4DateV13distantFutureACvgZ(puVar16);
      }
      else {
        _swift_bridgeObjectRetain(lVar4);
        uVar12 = 0;
        lVar18 = -0x2fffffffffffffe5;
        func_0x000100029284(0xd00000000000001b);
        if ((uVar12 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar4);
          goto LAB_10490e704;
        }
        func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar18 * 0x20,&uStack_80);
        _swift_bridgeObjectRelease(lVar4);
        pdVar9 = &dStack_b0;
        _swift_dynamicCast(pdVar9,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSdN_11034dd90,6);
        if ((((ulong)pdVar9 & 1) == 0) || (dStack_b0 <= 0.0)) goto LAB_10490e704;
        __s10Foundation4DateV21timeIntervalSince1970ACSd_tcfC(puVar16);
      }
      (*pcVar19)(puVar16,0,1,lVar8);
      lVar18 = _DAT_11309cfc8;
      _swift_beginAccess(lVar1 + _DAT_11309cfc8,&uStack_80,0x21,0);
      func_0x000100ed9cbc(puVar16,lVar1 + lVar18);
      _swift_endAccess(&uStack_80);
      if (*(long *)(lVar4 + 0x10) == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
        puVar14 = PTR___sypN_11034f1a8;
      }
      else {
        _swift_bridgeObjectRetain(lVar4);
        lVar18 = 0x6e656b6f745f6469;
        uVar12 = 0;
        func_0x000100029284(0x6e656b6f745f6469);
        puVar14 = PTR___sypN_11034f1a8;
        if ((uVar12 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar4);
          uStack_78 = 0;
          uStack_80 = 0;
          lStack_68 = 0;
          uStack_70 = 0;
        }
        else {
          func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar18 * 0x20,&uStack_80);
          _swift_bridgeObjectRelease(lVar4);
        }
      }
      _swift_bridgeObjectRelease(lVar4);
      if (lStack_68 == 0) {
        func_0x000104910f80(&uStack_80,0x11309c428);
        dVar15 = 0.0;
        dVar17 = 0.0;
      }
      else {
        pdVar9 = &dStack_b0;
        _swift_dynamicCast(pdVar9,&uStack_80,puVar14 + 8,PTR___sSSN_11034da80,6);
        dVar15 = dStack_b0;
        dVar17 = dStack_a8;
        if ((int)pdVar9 == 0) {
          dVar15 = 0.0;
          dVar17 = 0.0;
        }
      }
      pdVar9 = (double *)(lVar1 + _DAT_11309cf80);
      _swift_beginAccess(pdVar9,&dStack_b0,1,0);
      dVar10 = pdVar9[1];
      *pdVar9 = dVar15;
      pdVar9[1] = dVar17;
      _swift_bridgeObjectRelease(dVar10);
      uVar11 = uStack_b8;
    }
  }
  lVar18 = lVar1 + _DAT_11309cf80;
  _swift_beginAccess(lVar18,&uStack_80,0,0);
  if (*(long *)(lVar18 + 8) != 0) {
    func_0x00010490dcb0(lVar1,uVar3,uVar11,pcVar2,uVar13,lVar1);
    return;
  }
LAB_10490e4d0:
  (*pcVar2)(lVar1);
  return;
}



/* Entry: 1049103d4; end: 104910bb7;  */

/* WARNING: Removing unreachable block (ram,0x0001049104d8) */

undefined1 * FUN_1049103d4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long alStack_270 [15];
  undefined1 auStack_1f8 [8];
  long alStack_1f0 [2];
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  long lStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined *puStack_160;
  long lStack_158;
  code *pcStack_150;
  long lStack_148;
  long lStack_140;
  ulong uStack_138;
  long lStack_130;
  undefined1 auStack_120 [104];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  
  lVar14 = 0x11309c628;
  uStack_138 = param_2;
  func_0x0001048db364();
  uVar11 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = ((long)&puStack_1e0 - uVar11) - uVar11;
  lVar17 = lVar14 - uVar11;
  puVar13 = (undefined *)(lVar17 - uVar11);
  uVar1 = 0x11309c5e0;
  func_0x0001048db364();
  uVar12 = *(long *)(*(long *)(uVar1 - 8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = (long)puVar13 - uVar12;
  lStack_130 = lVar16 - uVar12;
  lVar18 = lStack_130 - uVar12;
  lVar15 = lVar18 - uVar12;
  func_0x0001049a8c40();
  _swift_bridgeObjectRelease(param_2);
  uVar1 = uVar1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    FUN_10490c13c(auStack_120);
    lStack_140 = (long)&puStack_1e0 - uVar11;
    FUN_104910bb8(auStack_120,auStack_b8);
    FUN_104910308(auStack_120);
    func_0x000100dc1af8(auStack_b8,auStack_90);
    lVar3 = 0;
    __s10Foundation3URLVMa();
    lVar10 = 1;
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar15,1,1,lVar3);
    func_0x0001049a8d90();
    if (lVar10 != 0) {
      __s10Foundation3URLV6stringACSgSSh_tcfC(lVar18);
      _swift_bridgeObjectRelease(lVar10);
      func_0x000104910f80(lVar15,0x11309c5e0);
      func_0x000104910ef8(lVar18,lVar15,0x11309c5e0);
    }
    lVar18 = 0;
    __s10Foundation4DateVMa();
    pcVar19 = *(code **)(*(long *)(lVar18 + -8) + 0x38);
    lVar3 = 1;
    puVar4 = puVar13;
    (*pcVar19)(puVar13,1,1,lVar18);
    func_0x0001049a8dd8();
    lStack_148 = lVar14;
    if (lVar3 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
      pcStack_150 = pcVar19;
      _objc_allocWithZone();
      _objc_msgSend();
      uVar6 = 0x79792f64642f4d4d;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x79792f64642f4d4d,0xea00000000007979);
      _objc_msgSend(puVar5,PTR_s_setDateFormat__1126400f8,uVar6);
      _objc_release(uVar6);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar4,lVar3);
      _swift_bridgeObjectRelease(lVar3);
      puVar7 = puVar5;
      _objc_msgSend(puVar5,PTR_s_dateFromString__1125b6e00,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (puVar7 == (undefined *)0x0) {
        func_0x000104910f80(puVar13,0x11309c628);
        _objc_release(puVar5);
      }
      else {
        __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar17,puVar7);
        _objc_release(puVar7);
        _objc_release(puVar5);
        func_0x000104910f80(puVar13,0x11309c628);
      }
      pcVar19 = pcStack_150;
      (*pcStack_150)(lVar17,puVar7 == (undefined *)0x0,1,lVar18);
      func_0x000104910ef8(lVar17,puVar13,0x11309c628);
    }
    lVar14 = lStack_148;
    puVar8 = auStack_90;
    lStack_1a0 = lStack_78;
    func_0x0001000a8868();
    puStack_180 = puVar8;
    func_0x0001049a8c40();
    puStack_198 = puVar8;
    lStack_188 = lStack_78;
    func_0x0001049a8cb0();
    puStack_190 = puVar8;
    lStack_158 = lStack_78;
    func_0x0001049a8ce8();
    puStack_1a8 = puVar8;
    lStack_168 = lStack_78;
    func_0x0001049a8d20();
    puStack_1b0 = puVar8;
    lStack_178 = lStack_78;
    func_0x0001049a8c78();
    puStack_1b8 = puVar8;
    pcStack_150 = (code *)lStack_78;
    func_0x0001049a8e78();
    puVar2 = (undefined1 *)0x0;
    if (lStack_78 != 0) {
      puVar2 = puVar8;
    }
    lVar17 = -0x2000000000000000;
    if (lStack_78 != 0) {
      lVar17 = lStack_78;
    }
    __s10Foundation3URLV6stringACSgSSh_tcfC(lStack_130,puVar2,lVar17);
    _swift_bridgeObjectRelease(lVar17);
    (*pcVar19)(lVar14,1,1,lVar18);
    lVar14 = lVar15;
    lVar17 = lVar16;
    func_0x000104910f3c(lVar15,lVar16,0x11309c5e0);
    func_0x0001049a8d58();
    lStack_1d0 = lVar14;
    lStack_1c0 = lVar17;
    func_0x0001049a8dc8();
    puVar5 = puVar13;
    lStack_1c8 = lVar14;
    func_0x000104910f3c(puVar13,lStack_140,0x11309c628);
    func_0x0001049a8e10();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_retain();
      func_0x000100937a8c();
      _swift_release(puVar4);
    }
    uVar6 = 0;
    func_0x0001002ed07c(0);
    puVar7 = puVar5;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar5,PTR___sSSN_11034da80,uVar6,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(puVar5);
    puVar4 = PTR_PTR_1126add68;
    _swift_getInitializedObjCClass();
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d8 = puVar4;
    _objc_release();
    func_0x0001049a8e20();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar7 == (undefined *)0x0) {
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_retain();
      func_0x0001001830b8();
      _swift_release(puVar4);
    }
    puVar5 = puVar7;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(puVar7);
    puVar7 = PTR_PTR_1126add70;
    _swift_getInitializedObjCClass();
    puVar9 = puVar7;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x0001049a8e30();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lStack_170 = lVar15;
    puStack_160 = puVar13;
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_retain();
      func_0x0001001830b8();
      _swift_release(puVar4);
    }
    puVar13 = puVar5;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(puVar5);
    puVar4 = PTR_s_locationFromDictionary__112525208;
    _objc_msgSend(puVar7,PTR_s_locationFromDictionary__112525208,puVar13);
    _objc_retainAutoreleasedReturnValue();
    puStack_1e0 = puVar7;
    _objc_release();
    func_0x0001049a8e40();
    pcVar19 = *(code **)(lStack_70 + 8);
    *(long *)(lVar15 + -8) = lStack_70;
    *(long *)(lVar15 + -0x10) = lStack_1a0;
    *(undefined1 *)(lVar15 + -0x18) = 1;
    *(undefined **)(lVar15 + -0x28) = puVar4;
    *(ulong *)(lVar15 + -0x20) = uStack_138;
    *(undefined **)(lVar15 + -0x38) = puVar7;
    *(undefined **)(lVar15 + -0x30) = puVar13;
    *(undefined **)(lVar15 + -0x40) = puVar9;
    puVar13 = puStack_1d8;
    *(undefined **)(lVar15 + -0x48) = puStack_1d8;
    *(long *)(lVar15 + -0x50) = lStack_140;
    lVar17 = lStack_1c8;
    *(long *)(lVar15 + -0x58) = lStack_1c8;
    lVar18 = lStack_1c0;
    *(long *)(lVar15 + -0x60) = lStack_1c0;
    lVar14 = lStack_1d0;
    *(long *)(lVar15 + -0x70) = lVar16;
    *(long *)(lVar15 + -0x68) = lVar14;
    *(long *)(lVar15 + -0x78) = lStack_148;
    *(long *)(lVar15 + -0x80) = lStack_130;
    *(code **)(lVar15 + -0x88) = pcStack_150;
    *(undefined1 **)(lVar15 + -0x90) = puStack_1b8;
    puVar2 = puStack_198;
    uStack_138 = lVar16;
    (*pcVar19)(puStack_198,lStack_188,puStack_190,lStack_158,puStack_1a8,lStack_168,puStack_1b0,
               lStack_178);
    _swift_bridgeObjectRelease(lStack_188);
    _objc_release(puVar13);
    _objc_release(puVar9);
    _objc_release(puStack_1e0);
    _swift_bridgeObjectRelease(puVar4);
    _swift_bridgeObjectRelease(lVar17);
    _swift_bridgeObjectRelease(lVar18);
    _swift_bridgeObjectRelease(pcStack_150);
    _swift_bridgeObjectRelease(lStack_178);
    _swift_bridgeObjectRelease(lStack_168);
    _swift_bridgeObjectRelease(lStack_158);
    func_0x000104910f80(lStack_140,0x11309c628);
    func_0x000104910f80(uStack_138,0x11309c5e0);
    func_0x000104910f80(lStack_148,0x11309c628);
    func_0x000104910f80(lStack_130,0x11309c5e0);
    func_0x000104910f80(puStack_160,0x11309c628);
    func_0x000104910f80(lStack_170,0x11309c5e0);
    func_0x0001000834e4(auStack_90);
  }
  return puVar2;
}



/* Entry: 104910bb8; end: 1049110c7;  */

long FUN_104910bb8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1049110c8; end: 1049110cf;  */

undefined1  [16] FUN_1049110c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = 0x7a69726f68747561;
  lVar11 = 0x11309c5e0;
  func_0x0001048db364();
  uVar10 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar7 = auStack_c0 + -uVar10;
  lVar11 = (long)puVar7 - uVar10;
  puVar1 = PTR_PTR_1126add20;
  _swift_getInitializedObjCClass();
  puVar2 = puVar1;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7a69726f68747561,0xe900000000000065);
  uVar3 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x0001001830b8();
  _swift_release(puVar12);
  puVar12 = puVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar4);
  uStack_88 = 0;
  puVar4 = puVar2;
  _objc_msgSend(puVar2,PTR_s_appURLWithHost_path_queryParamet_11259f318,uVar13,uVar3,puVar12,
                &uStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(puVar12);
  uVar13 = uStack_88;
  if (puVar4 == (undefined *)0x0) {
    uVar3 = uStack_88;
    _objc_retain(uStack_88);
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(uVar13);
    _objc_release(uVar3);
    _swift_willThrow();
    _swift_errorRelease(uVar13);
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar11,puVar4);
    _objc_retain(uVar13);
    _objc_release(puVar4);
  }
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar5 + -8);
  (**(code **)(lVar14 + 0x38))(lVar11,puVar4 == (undefined *)0x0,1,lVar5);
  func_0x000100029394(lVar11,puVar7);
  uVar10 = 1;
  puVar6 = puVar7;
  (**(code **)(lVar14 + 0x30))(puVar7,1,lVar5);
  if ((int)puVar6 == 1) {
    func_0x00010491188c(puVar7,0x11309c5e0);
  }
  else {
    __s10Foundation3URLV14absoluteStringSSvg();
    (**(code **)(lVar14 + 8))(puVar7,lVar5);
    __s10Foundation3URLV14absoluteStringSSvg();
    uVar9 = uVar10;
    __sSS9hasPrefixySbSSF(puVar6,uVar10,puVar7,lVar5);
    _swift_bridgeObjectRelease(lVar5);
    _swift_bridgeObjectRelease();
    if (((ulong)puVar6 & 1) == 0) {
      __s10Foundation3URLV4hostSSSgvg();
      if (uVar9 == 0) {
LAB_104911828:
        uVar13 = 0x11309c5e0;
        func_0x00010491188c(lVar11,0x11309c5e0);
        puVar12 = (undefined *)0x0;
        goto LAB_10491183c;
      }
      if ((uVar10 == 0x7a69726f68747561) && (uVar9 == 0xe900000000000065)) {
        _swift_bridgeObjectRelease(0xe900000000000065);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        _swift_bridgeObjectRelease(uVar9);
        if ((uVar10 & 1) == 0) goto LAB_104911828;
      }
    }
  }
  _objc_msgSend(puVar1,PTR_s_sharedUtility_112668b58);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  puVar4 = puVar1;
  _objc_msgSend(puVar1,PTR_s_parametersFromFBURL__11261a848,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar12);
  puVar2 = PTR___sypN_11034f1a8;
  puVar1 = PTR___sSSN_11034da80;
  puVar12 = puVar4;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (puVar4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _objc_release(puVar4);
  if (*(long *)(puVar12 + 0x10) == 0) {
LAB_104911794:
    uStack_a8 = 0;
    lStack_a0 = 0;
  }
  else {
    _swift_bridgeObjectRetain(puVar12);
    lVar5 = 0x725f64656e676973;
    uVar10 = 0xee00747365757165;
    func_0x000100029284(0x725f64656e676973);
    if ((uVar10 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar12);
      goto LAB_104911794;
    }
    func_0x0001000bb420(*(long *)(puVar12 + 0x38) + lVar5 * 0x20,&uStack_88);
    _swift_bridgeObjectRelease(puVar12);
    puVar8 = &uStack_a8;
    _swift_dynamicCast(puVar8,&uStack_88,puVar2 + 8,PTR___sSSN_11034da80,6);
    if ((int)puVar8 == 0) {
      uStack_a8 = 0;
      lStack_a0 = 0;
    }
  }
  lVar5 = lStack_a0;
  FUN_1049110d0();
  _swift_bridgeObjectRelease(lStack_a0);
  if (lVar5 == 0) {
    uVar13 = 0x11309c5e0;
    func_0x00010491188c(lVar11,0x11309c5e0);
  }
  else {
    puStack_70 = puVar1;
    uStack_88 = uStack_a8;
    lStack_80 = lVar5;
    func_0x000100102924(&uStack_88,&uStack_a8);
    puVar1 = puVar12;
    _swift_isUniquelyReferenced_nonNull_native(puVar12);
    puStack_b8 = puVar12;
    func_0x0001001029e8(&uStack_a8,0x64695f72657375,0xe700000000000000,puVar1);
    uVar13 = 0x11309c5e0;
    func_0x00010491188c(lVar11,0x11309c5e0);
    puVar12 = puStack_b8;
  }
LAB_10491183c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar15._8_8_ = uVar13;
    auVar15._0_8_ = puVar12;
    return auVar15;
  }
  ___stack_chk_fail();
  return ZEXT816(0x1107b7b58);
}



/* Entry: 1049110d0; end: 1049113a7;  */

undefined1  [16] FUN_1049110d0(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_108;
  long lStack_100;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = 0;
  if (param_2 != 0) {
    lStack_70 = 0x2e;
    uStack_68 = 0xe100000000000000;
    lStack_60 = param_1;
    lStack_58 = param_2;
    func_0x000100e8b654();
    plVar1 = &lStack_70;
    __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
              (plVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,param_1,param_1);
    if (plVar1[2] == 2) {
      lVar12 = plVar1[6];
      lVar4 = plVar1[7];
      _swift_bridgeObjectRetain(lVar4);
      _swift_bridgeObjectRelease(plVar1);
      puVar13 = PTR_PTR_1126add10;
      _swift_getInitializedObjCClass();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar12,lVar4);
      _swift_bridgeObjectRelease(lVar4);
      puVar5 = PTR_s_decodeAsData__1125b74b8;
      _objc_msgSend(puVar13,PTR_s_decodeAsData__1125b74b8,lVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      if (puVar13 != (undefined *)0x0) {
        puVar2 = puVar13;
        __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
        _objc_release(puVar13);
        puVar13 = PTR_PTR_1126add78;
        _swift_getInitializedObjCClass();
        puVar3 = puVar2;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar2,puVar5);
        lStack_60 = 0;
        _objc_msgSend(puVar13,PTR_s_JSONObjectWithData_options_error_11254dfe0,puVar3,0,&lStack_60);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        lVar12 = lStack_60;
        if (puVar13 == (undefined *)0x0) {
          lVar4 = lStack_60;
          _objc_retain();
          __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
          _objc_release(lVar4);
          _swift_willThrow();
          func_0x00010006c090(puVar2,puVar5);
          _swift_errorRelease(lVar12);
        }
        else {
          _objc_retain();
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_60,puVar13);
          _swift_unknownObjectRelease(puVar13);
          uVar14 = 0x11309c420;
          func_0x0001048db364(0x11309c420);
          puVar13 = PTR___sypN_11034f1a8;
          plVar1 = &lStack_70;
          _swift_dynamicCast(plVar1,&lStack_60,PTR___sypN_11034f1a8 + 8,uVar14,6);
          lVar12 = lStack_70;
          if (((ulong)plVar1 & 1) == 0) {
            func_0x00010006c090(puVar2,puVar5);
          }
          else {
            if (*(long *)(lStack_70 + 0x10) == 0) {
LAB_10491133c:
              lStack_58 = 0;
              lStack_60 = 0;
              lStack_48 = 0;
              uStack_50 = 0;
            }
            else {
              _swift_bridgeObjectRetain(lStack_70);
              lVar4 = 0x64695f72657375;
              uVar11 = 0;
              func_0x000100029284(0x64695f72657375);
              if ((uVar11 & 1) == 0) {
                _swift_bridgeObjectRelease(lVar12);
                goto LAB_10491133c;
              }
              func_0x0001000bb420(*(long *)(lVar12 + 0x38) + lVar4 * 0x20,&lStack_60);
              _swift_bridgeObjectRelease(lVar12);
            }
            func_0x00010006c090(puVar2,puVar5);
            _swift_bridgeObjectRelease(lVar12);
            if (lStack_48 != 0) {
              plVar1 = &lStack_70;
              _swift_dynamicCast(plVar1,&lStack_60,puVar13 + 8,PTR___sSSN_11034da80,6);
              param_1 = lStack_70;
              uVar14 = uStack_68;
              if ((int)plVar1 == 0) {
                param_1 = 0;
                uVar14 = 0;
              }
              goto LAB_1049112b8;
            }
            func_0x00010491188c(&lStack_60,0x11309c428);
          }
        }
      }
    }
    else {
      _swift_bridgeObjectRelease();
    }
    param_1 = 0;
    uVar14 = 0;
  }
LAB_1049112b8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar16._8_8_ = uVar14;
    auVar16._0_8_ = param_1;
    return auVar16;
  }
  ___stack_chk_fail(param_1,uVar14);
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = 0x7a69726f68747561;
  lVar12 = 0x11309c5e0;
  func_0x0001048db364();
  uVar11 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar8 = auStack_140 + -uVar11;
  lVar12 = (long)puVar8 - uVar11;
  puVar5 = PTR_PTR_1126add20;
  _swift_getInitializedObjCClass();
  puVar2 = puVar5;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7a69726f68747561,0xe900000000000065);
  uVar6 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x0001001830b8();
  _swift_release(puVar13);
  puVar13 = puVar3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar3);
  uStack_108 = 0;
  puVar3 = puVar2;
  _objc_msgSend(puVar2,PTR_s_appURLWithHost_path_queryParamet_11259f318,uVar14,uVar6,puVar13,
                &uStack_108);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar14);
  _objc_release(uVar6);
  _objc_release(puVar13);
  uVar14 = uStack_108;
  if (puVar3 == (undefined *)0x0) {
    uVar6 = uStack_108;
    _objc_retain(uStack_108);
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(uVar14);
    _objc_release(uVar6);
    _swift_willThrow();
    _swift_errorRelease(uVar14);
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar12,puVar3);
    _objc_retain(uVar14);
    _objc_release(puVar3);
  }
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar4 + -8);
  (**(code **)(lVar15 + 0x38))(lVar12,puVar3 == (undefined *)0x0,1,lVar4);
  func_0x000100029394(lVar12,puVar8);
  uVar11 = 1;
  puVar7 = puVar8;
  (**(code **)(lVar15 + 0x30))(puVar8,1,lVar4);
  if ((int)puVar7 == 1) {
    func_0x00010491188c(puVar8,0x11309c5e0);
  }
  else {
    __s10Foundation3URLV14absoluteStringSSvg();
    (**(code **)(lVar15 + 8))(puVar8,lVar4);
    __s10Foundation3URLV14absoluteStringSSvg();
    uVar10 = uVar11;
    __sSS9hasPrefixySbSSF(puVar7,uVar11,puVar8,lVar4);
    _swift_bridgeObjectRelease(lVar4);
    _swift_bridgeObjectRelease();
    if (((ulong)puVar7 & 1) == 0) {
      __s10Foundation3URLV4hostSSSgvg();
      if (uVar10 == 0) {
LAB_104911828:
        uVar14 = 0x11309c5e0;
        func_0x00010491188c(lVar12,0x11309c5e0);
        puVar13 = (undefined *)0x0;
        goto LAB_10491183c;
      }
      if ((uVar11 == 0x7a69726f68747561) && (uVar10 == 0xe900000000000065)) {
        _swift_bridgeObjectRelease(0xe900000000000065);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        _swift_bridgeObjectRelease(uVar10);
        if ((uVar11 & 1) == 0) goto LAB_104911828;
      }
    }
  }
  _objc_msgSend(puVar5,PTR_s_sharedUtility_112668b58);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar5;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  puVar3 = puVar5;
  _objc_msgSend(puVar5,PTR_s_parametersFromFBURL__11261a848,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar13);
  puVar2 = PTR___sypN_11034f1a8;
  puVar5 = PTR___sSSN_11034da80;
  puVar13 = puVar3;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (puVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _objc_release(puVar3);
  if (*(long *)(puVar13 + 0x10) == 0) {
LAB_104911794:
    uStack_128 = 0;
    lStack_120 = 0;
  }
  else {
    _swift_bridgeObjectRetain(puVar13);
    lVar4 = 0x725f64656e676973;
    uVar11 = 0xee00747365757165;
    func_0x000100029284(0x725f64656e676973);
    if ((uVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar13);
      goto LAB_104911794;
    }
    func_0x0001000bb420(*(long *)(puVar13 + 0x38) + lVar4 * 0x20,&uStack_108);
    _swift_bridgeObjectRelease(puVar13);
    puVar9 = &uStack_128;
    _swift_dynamicCast(puVar9,&uStack_108,puVar2 + 8,PTR___sSSN_11034da80,6);
    if ((int)puVar9 == 0) {
      uStack_128 = 0;
      lStack_120 = 0;
    }
  }
  lVar4 = lStack_120;
  FUN_1049110d0();
  _swift_bridgeObjectRelease(lStack_120);
  if (lVar4 == 0) {
    uVar14 = 0x11309c5e0;
    func_0x00010491188c(lVar12,0x11309c5e0);
  }
  else {
    puStack_f0 = puVar5;
    uStack_108 = uStack_128;
    lStack_100 = lVar4;
    func_0x000100102924(&uStack_108,&uStack_128);
    puVar5 = puVar13;
    _swift_isUniquelyReferenced_nonNull_native(puVar13);
    puStack_138 = puVar13;
    func_0x0001001029e8(&uStack_128,0x64695f72657375,0xe700000000000000,puVar5);
    uVar14 = 0x11309c5e0;
    func_0x00010491188c(lVar12,0x11309c5e0);
    puVar13 = puStack_138;
  }
LAB_10491183c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    auVar17._8_8_ = uVar14;
    auVar17._0_8_ = puVar13;
    return auVar17;
  }
  ___stack_chk_fail();
  return ZEXT816(0x1107b7b58);
}



/* Entry: 1049113a8; end: 10491187b;  */

undefined1  [16] FUN_1049113a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = 0x7a69726f68747561;
  lVar11 = 0x11309c5e0;
  func_0x0001048db364();
  uVar10 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar7 = auStack_c0 + -uVar10;
  lVar11 = (long)puVar7 - uVar10;
  puVar1 = PTR_PTR_1126add20;
  _swift_getInitializedObjCClass();
  puVar2 = puVar1;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7a69726f68747561,0xe900000000000065);
  uVar3 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x0001001830b8();
  _swift_release(puVar12);
  puVar12 = puVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar4);
  uStack_88 = 0;
  puVar4 = puVar2;
  _objc_msgSend(puVar2,PTR_s_appURLWithHost_path_queryParamet_11259f318,uVar13,uVar3,puVar12,
                &uStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(puVar12);
  uVar13 = uStack_88;
  if (puVar4 == (undefined *)0x0) {
    uVar3 = uStack_88;
    _objc_retain(uStack_88);
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(uVar13);
    _objc_release(uVar3);
    _swift_willThrow();
    _swift_errorRelease(uVar13);
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar11,puVar4);
    _objc_retain(uVar13);
    _objc_release(puVar4);
  }
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar5 + -8);
  (**(code **)(lVar14 + 0x38))(lVar11,puVar4 == (undefined *)0x0,1,lVar5);
  func_0x000100029394(lVar11,puVar7);
  uVar10 = 1;
  puVar6 = puVar7;
  (**(code **)(lVar14 + 0x30))(puVar7,1,lVar5);
  if ((int)puVar6 == 1) {
    func_0x00010491188c(puVar7,0x11309c5e0);
  }
  else {
    __s10Foundation3URLV14absoluteStringSSvg();
    (**(code **)(lVar14 + 8))(puVar7,lVar5);
    __s10Foundation3URLV14absoluteStringSSvg();
    uVar9 = uVar10;
    __sSS9hasPrefixySbSSF(puVar6,uVar10,puVar7,lVar5);
    _swift_bridgeObjectRelease(lVar5);
    _swift_bridgeObjectRelease();
    if (((ulong)puVar6 & 1) == 0) {
      __s10Foundation3URLV4hostSSSgvg();
      if (uVar9 == 0) {
LAB_104911828:
        uVar13 = 0x11309c5e0;
        func_0x00010491188c(lVar11,0x11309c5e0);
        puVar12 = (undefined *)0x0;
        goto LAB_10491183c;
      }
      if ((uVar10 == 0x7a69726f68747561) && (uVar9 == 0xe900000000000065)) {
        _swift_bridgeObjectRelease(0xe900000000000065);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        _swift_bridgeObjectRelease(uVar9);
        if ((uVar10 & 1) == 0) goto LAB_104911828;
      }
    }
  }
  _objc_msgSend(puVar1,PTR_s_sharedUtility_112668b58);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  puVar4 = puVar1;
  _objc_msgSend(puVar1,PTR_s_parametersFromFBURL__11261a848,puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar12);
  puVar2 = PTR___sypN_11034f1a8;
  puVar1 = PTR___sSSN_11034da80;
  puVar12 = puVar4;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (puVar4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _objc_release(puVar4);
  if (*(long *)(puVar12 + 0x10) == 0) {
LAB_104911794:
    uStack_a8 = 0;
    lStack_a0 = 0;
  }
  else {
    _swift_bridgeObjectRetain(puVar12);
    lVar5 = 0x725f64656e676973;
    uVar10 = 0xee00747365757165;
    func_0x000100029284(0x725f64656e676973);
    if ((uVar10 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar12);
      goto LAB_104911794;
    }
    func_0x0001000bb420(*(long *)(puVar12 + 0x38) + lVar5 * 0x20,&uStack_88);
    _swift_bridgeObjectRelease(puVar12);
    puVar8 = &uStack_a8;
    _swift_dynamicCast(puVar8,&uStack_88,puVar2 + 8,PTR___sSSN_11034da80,6);
    if ((int)puVar8 == 0) {
      uStack_a8 = 0;
      lStack_a0 = 0;
    }
  }
  lVar5 = lStack_a0;
  FUN_1049110d0();
  _swift_bridgeObjectRelease(lStack_a0);
  if (lVar5 == 0) {
    uVar13 = 0x11309c5e0;
    func_0x00010491188c(lVar11,0x11309c5e0);
  }
  else {
    puStack_70 = puVar1;
    uStack_88 = uStack_a8;
    lStack_80 = lVar5;
    func_0x000100102924(&uStack_88,&uStack_a8);
    puVar1 = puVar12;
    _swift_isUniquelyReferenced_nonNull_native(puVar12);
    puStack_b8 = puVar12;
    func_0x0001001029e8(&uStack_a8,0x64695f72657375,0xe700000000000000,puVar1);
    uVar13 = 0x11309c5e0;
    func_0x00010491188c(lVar11,0x11309c5e0);
    puVar12 = puStack_b8;
  }
LAB_10491183c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar15._8_8_ = uVar13;
    auVar15._0_8_ = puVar12;
    return auVar15;
  }
  ___stack_chk_fail();
  return ZEXT816(0x1107b7b58);
}



/* Entry: 10491187c; end: 1049118cb;  */

undefined1  [16] FUN_10491187c(void)

{
  return ZEXT816(0x1107b7b58);
}



/* Entry: 1049118cc; end: 10491197b;  */

undefined1  [16] FUN_1049118cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  __ss11_StringGutsV4growyySiF(0x49);
  __sSS6appendyySSF(0xd00000000000001f,0x800000010f21c070);
  uVar1 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF(param_1,0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0xd000000000000028,0x800000010f21c090);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 10491197c; end: 104911993;  */

void FUN_10491197c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 104911994; end: 104911a2b;  */

void FUN_104911994(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 104911a2c; end: 104911af7;  */

uint FUN_104911a2c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uStack_50;
  ulong uStack_48;
  
  lVar2 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar6 = *(long *)(lVar2 + -8);
  lVar5 = (long)&uStack_50 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = lVar2;
    uStack_50 = param_1;
    uStack_48 = param_2;
    __s10Foundation12CharacterSetV11whitespacesACvgZ(lVar5);
    func_0x000100e8b654();
    uVar4 = 0;
    __sSy10FoundationE16rangeOfCharacter4from7options0B0SnySS5IndexVGSgAA0D3SetV_So22NSStringCompareOptionsVAItF
              (lVar5,0,0,0,1,PTR___sSSN_11034da80,lVar3);
    (**(code **)(lVar6 + 8))(lVar5,lVar2);
  }
  return uVar4 & 1;
}



/* Entry: 104911af8; end: 104911b07;  */

undefined1  [16] FUN_104911af8(void)

{
  return ZEXT816(0x1107b7c08);
}



/* Entry: 104911b08; end: 104911b6f;  */

void FUN_104911b08(void)

{
  long in_stack_00000088;
  
                    /* WARNING: Could not recover jumptable at 0x000104911b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_stack_00000088 + 8))();
  return;
}



/* Entry: 104911b70; end: 104911b8f;  */

void FUN_104911b70(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 104911b90; end: 104911bdb;  */

void FUN_104911b90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,byte param_24)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long alStack_1b0 [14];
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
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
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_9c = (uint)param_24;
  uStack_d0 = param_23;
  uStack_a8 = param_21;
  uStack_e0 = param_16;
  uStack_d8 = param_22;
  uStack_98 = param_9;
  uStack_100 = param_15;
  uStack_f8 = param_10;
  uStack_b8 = param_19;
  uStack_130 = param_20;
  uStack_c0 = param_18;
  uStack_b0 = param_14;
  lVar14 = 0x11309c628;
  uStack_f0 = param_4;
  uStack_e8 = param_6;
  uStack_c8 = param_8;
  uStack_90 = param_1;
  uStack_88 = param_3;
  uStack_80 = param_5;
  uStack_78 = param_7;
  uStack_70 = param_2;
  func_0x0001048db364();
  uVar12 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = (long)&uStack_130 - uVar12;
  lVar13 = lVar15 - uVar12;
  lVar14 = 0x11309c5e0;
  lStack_128 = lVar15;
  lStack_110 = lVar13;
  func_0x0001048db364();
  uVar12 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar13 - uVar12;
  lVar11 = lVar14 - uVar12;
  lStack_118 = lVar14;
  lStack_108 = lVar11;
  func_0x000104911f7c(param_11,lVar11,0x11309c5e0);
  func_0x000104911f7c(param_12,lVar13,0x11309c628);
  func_0x000104911f7c(param_13,lVar14,0x11309c5e0);
  func_0x000104911f7c(param_17,lVar15,0x11309c628);
  uVar10 = 0;
  FUN_1049db25c();
  _objc_allocWithZone();
  uStack_120 = uVar10;
  _objc_retain(param_20);
  _swift_bridgeObjectRetain(uStack_70);
  uVar3 = uStack_f0;
  _swift_bridgeObjectRetain(uStack_f0);
  uVar4 = uStack_e8;
  _swift_bridgeObjectRetain(uStack_e8);
  uVar7 = uStack_c8;
  _swift_bridgeObjectRetain(uStack_c8);
  uVar2 = uStack_f8;
  _swift_bridgeObjectRetain(uStack_f8);
  uVar1 = uStack_100;
  _swift_bridgeObjectRetain(uStack_100);
  uVar5 = uStack_e0;
  _swift_bridgeObjectRetain(uStack_e0);
  uVar10 = uStack_d8;
  _swift_bridgeObjectRetain(uStack_d8);
  uVar6 = uStack_d0;
  _swift_bridgeObjectRetain(uStack_d0);
  uVar8 = uStack_c0;
  _objc_retain(uStack_c0);
  uVar9 = uStack_b8;
  _objc_retain(uStack_b8);
  *(undefined8 *)(lVar11 + -8) = uVar6;
  *(char *)(lVar11 + -0x10) = (char)uStack_9c;
  *(undefined8 *)(lVar11 + -0x18) = uVar10;
  *(undefined8 *)(lVar11 + -0x20) = uStack_a8;
  uVar10 = uStack_130;
  *(undefined8 *)(lVar11 + -0x30) = uVar9;
  *(undefined8 *)(lVar11 + -0x28) = uVar10;
  *(undefined8 *)(lVar11 + -0x38) = uVar8;
  lVar14 = lStack_128;
  *(undefined8 *)(lVar11 + -0x48) = uVar5;
  *(long *)(lVar11 + -0x40) = lVar14;
  *(undefined8 *)(lVar11 + -0x50) = uVar1;
  *(undefined8 *)(lVar11 + -0x58) = uStack_b0;
  *(long *)(lVar11 + -0x60) = lStack_118;
  *(long *)(lVar11 + -0x68) = lStack_110;
  lVar14 = lStack_108;
  *(undefined8 *)(lVar11 + -0x78) = uVar2;
  *(long *)(lVar11 + -0x70) = lVar14;
  *(undefined8 *)(lVar11 + -0x80) = uStack_98;
  func_0x0001049d9b84(uStack_90,uStack_70,uStack_88,uVar3,uStack_80,uVar4,uStack_78,uVar7);
  return;
}



/* Entry: 104911bdc; end: 104911c0f;  */

void FUN_104911bdc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104911c10; end: 104911c4b; -[_TtC13FBSDKLoginKit14ProfileFactory init] */

void FUN_104911c10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104911c4c; end: 104911c7f;  */

void FUN_104911c4c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104911c80; end: 104911ccb;  */

void FUN_104911c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,byte param_24)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long alStack_1b0 [14];
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
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
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_9c = (uint)param_24;
  uStack_d0 = param_23;
  uStack_a8 = param_21;
  uStack_e0 = param_16;
  uStack_d8 = param_22;
  uStack_98 = param_9;
  uStack_100 = param_15;
  uStack_f8 = param_10;
  uStack_b8 = param_19;
  uStack_130 = param_20;
  uStack_c0 = param_18;
  uStack_b0 = param_14;
  lVar14 = 0x11309c628;
  uStack_f0 = param_4;
  uStack_e8 = param_6;
  uStack_c8 = param_8;
  uStack_90 = param_1;
  uStack_88 = param_3;
  uStack_80 = param_5;
  uStack_78 = param_7;
  uStack_70 = param_2;
  func_0x0001048db364();
  uVar12 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = (long)&uStack_130 - uVar12;
  lVar13 = lVar15 - uVar12;
  lVar14 = 0x11309c5e0;
  lStack_128 = lVar15;
  lStack_110 = lVar13;
  func_0x0001048db364();
  uVar12 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar13 - uVar12;
  lVar11 = lVar14 - uVar12;
  lStack_118 = lVar14;
  lStack_108 = lVar11;
  func_0x000104911f7c(param_11,lVar11,0x11309c5e0);
  func_0x000104911f7c(param_12,lVar13,0x11309c628);
  func_0x000104911f7c(param_13,lVar14,0x11309c5e0);
  func_0x000104911f7c(param_17,lVar15,0x11309c628);
  uVar10 = 0;
  FUN_1049db25c();
  _objc_allocWithZone();
  uStack_120 = uVar10;
  _objc_retain(param_20);
  _swift_bridgeObjectRetain(uStack_70);
  uVar3 = uStack_f0;
  _swift_bridgeObjectRetain(uStack_f0);
  uVar4 = uStack_e8;
  _swift_bridgeObjectRetain(uStack_e8);
  uVar7 = uStack_c8;
  _swift_bridgeObjectRetain(uStack_c8);
  uVar2 = uStack_f8;
  _swift_bridgeObjectRetain(uStack_f8);
  uVar1 = uStack_100;
  _swift_bridgeObjectRetain(uStack_100);
  uVar5 = uStack_e0;
  _swift_bridgeObjectRetain(uStack_e0);
  uVar10 = uStack_d8;
  _swift_bridgeObjectRetain(uStack_d8);
  uVar6 = uStack_d0;
  _swift_bridgeObjectRetain(uStack_d0);
  uVar8 = uStack_c0;
  _objc_retain(uStack_c0);
  uVar9 = uStack_b8;
  _objc_retain(uStack_b8);
  *(undefined8 *)(lVar11 + -8) = uVar6;
  *(char *)(lVar11 + -0x10) = (char)uStack_9c;
  *(undefined8 *)(lVar11 + -0x18) = uVar10;
  *(undefined8 *)(lVar11 + -0x20) = uStack_a8;
  uVar10 = uStack_130;
  *(undefined8 *)(lVar11 + -0x30) = uVar9;
  *(undefined8 *)(lVar11 + -0x28) = uVar10;
  *(undefined8 *)(lVar11 + -0x38) = uVar8;
  lVar14 = lStack_128;
  *(undefined8 *)(lVar11 + -0x48) = uVar5;
  *(long *)(lVar11 + -0x40) = lVar14;
  *(undefined8 *)(lVar11 + -0x50) = uVar1;
  *(undefined8 *)(lVar11 + -0x58) = uStack_b0;
  *(long *)(lVar11 + -0x60) = lStack_118;
  *(long *)(lVar11 + -0x68) = lStack_110;
  lVar14 = lStack_108;
  *(undefined8 *)(lVar11 + -0x78) = uVar2;
  *(long *)(lVar11 + -0x70) = lVar14;
  *(undefined8 *)(lVar11 + -0x80) = uStack_98;
  func_0x0001049d9b84(uStack_90,uStack_70,uStack_88,uVar3,uStack_80,uVar4,uStack_78,uVar7);
  return;
}



/* Entry: 104911ccc; end: 104911f5b;  */

void FUN_104911ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,byte param_24)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long alStack_1b0 [14];
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
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
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_9c = (uint)param_24;
  uStack_d0 = param_23;
  uStack_a8 = param_21;
  uStack_e0 = param_16;
  uStack_d8 = param_22;
  uStack_98 = param_9;
  uStack_100 = param_15;
  uStack_f8 = param_10;
  uStack_b8 = param_19;
  uStack_130 = param_20;
  uStack_c0 = param_18;
  uStack_b0 = param_14;
  lVar14 = 0x11309c628;
  uStack_f0 = param_4;
  uStack_e8 = param_6;
  uStack_c8 = param_8;
  uStack_90 = param_1;
  uStack_88 = param_3;
  uStack_80 = param_5;
  uStack_78 = param_7;
  uStack_70 = param_2;
  func_0x0001048db364();
  uVar12 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = (long)&uStack_130 - uVar12;
  lVar13 = lVar15 - uVar12;
  lVar14 = 0x11309c5e0;
  lStack_128 = lVar15;
  lStack_110 = lVar13;
  func_0x0001048db364();
  uVar12 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar13 - uVar12;
  lVar11 = lVar14 - uVar12;
  lStack_118 = lVar14;
  lStack_108 = lVar11;
  func_0x000104911f7c(param_11,lVar11,0x11309c5e0);
  func_0x000104911f7c(param_12,lVar13,0x11309c628);
  func_0x000104911f7c(param_13,lVar14,0x11309c5e0);
  func_0x000104911f7c(param_17,lVar15,0x11309c628);
  uVar10 = 0;
  FUN_1049db25c();
  _objc_allocWithZone();
  uStack_120 = uVar10;
  _objc_retain(param_20);
  _swift_bridgeObjectRetain(uStack_70);
  uVar3 = uStack_f0;
  _swift_bridgeObjectRetain(uStack_f0);
  uVar4 = uStack_e8;
  _swift_bridgeObjectRetain(uStack_e8);
  uVar7 = uStack_c8;
  _swift_bridgeObjectRetain(uStack_c8);
  uVar2 = uStack_f8;
  _swift_bridgeObjectRetain(uStack_f8);
  uVar1 = uStack_100;
  _swift_bridgeObjectRetain(uStack_100);
  uVar5 = uStack_e0;
  _swift_bridgeObjectRetain(uStack_e0);
  uVar10 = uStack_d8;
  _swift_bridgeObjectRetain(uStack_d8);
  uVar6 = uStack_d0;
  _swift_bridgeObjectRetain(uStack_d0);
  uVar8 = uStack_c0;
  _objc_retain(uStack_c0);
  uVar9 = uStack_b8;
  _objc_retain(uStack_b8);
  *(undefined8 *)(lVar11 + -8) = uVar6;
  *(char *)(lVar11 + -0x10) = (char)uStack_9c;
  *(undefined8 *)(lVar11 + -0x18) = uVar10;
  *(undefined8 *)(lVar11 + -0x20) = uStack_a8;
  uVar10 = uStack_130;
  *(undefined8 *)(lVar11 + -0x30) = uVar9;
  *(undefined8 *)(lVar11 + -0x28) = uVar10;
  *(undefined8 *)(lVar11 + -0x38) = uVar8;
  lVar14 = lStack_128;
  *(undefined8 *)(lVar11 + -0x48) = uVar5;
  *(long *)(lVar11 + -0x40) = lVar14;
  *(undefined8 *)(lVar11 + -0x50) = uVar1;
  *(undefined8 *)(lVar11 + -0x58) = uStack_b0;
  *(long *)(lVar11 + -0x60) = lStack_118;
  *(long *)(lVar11 + -0x68) = lStack_110;
  lVar14 = lStack_108;
  *(undefined8 *)(lVar11 + -0x78) = uVar2;
  *(long *)(lVar11 + -0x70) = lVar14;
  *(undefined8 *)(lVar11 + -0x80) = uStack_98;
  func_0x0001049d9b84(uStack_90,uStack_70,uStack_88,uVar3,uStack_80,uVar4,uStack_78,uVar7);
  return;
}



/* Entry: 104911f5c; end: 104911fbf;  */

void FUN_104911f5c(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e4c68);
  return;
}



/* Entry: 104911fc0; end: 104911fdf;  */

void FUN_104911fc0(void)

{
  FUN_1049e0b68();
  return;
}



/* Entry: 104911fe0; end: 104911fff;  */

void FUN_104911fe0(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x000104911fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x3 + 8))();
  return;
}



/* Entry: 104912000; end: 10491201f;  */

void FUN_104912000(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 104912020; end: 104912067; -[FBSDKLoginCompletionParameters authenticationToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104912020(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309cf60;
  _swift_beginAccess(param_1 + _DAT_11309cf60,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 104912068; end: 1049120b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104912068(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309cf60;
  _swift_beginAccess(unaff_x20 + _DAT_11309cf60,auStack_38,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  _objc_retain(uVar2);
  return uVar2;
}


