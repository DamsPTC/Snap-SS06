/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10449260c; end: 104492627;  */

void FUN_10449260c(undefined8 param_1)

{
  if (lRam000000011307e2e0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e80bc68);
  return;
}



/* Entry: 104492628; end: 1044926fb;  */

void FUN_104492628(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR___sBbWV_11034d660;
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_a8 = PTR___sBbWV_11034d660 + 0x40;
  puStack_a0 = &UNK_10dd08350;
  puStack_98 = &UNK_10dd08350;
  puStack_90 = &UNK_10dd08350;
  puStack_78 = &UNK_10dd08368;
  puStack_70 = &UNK_10dd08368;
  lVar3 = 0x13f;
  puStack_b0 = puVar1;
  puStack_88 = puVar1;
  puStack_80 = puStack_a8;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar3 + -8) + 0x40;
    lVar3 = 0x13f;
    puStack_60 = puVar1;
    puStack_58 = puVar1;
    puStack_50 = puVar1;
    lStack_48 = lStack_68;
    func_0x0001000776dc();
    if (param_2 < 0x40) {
      lStack_40 = *(long *)(lVar3 + -8) + 0x40;
      puStack_38 = puVar2 + 0x40;
      _swift_updateClassMetadata2(param_1,0x100,0x10,&puStack_b0,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 1044926fc; end: 104492717;  */

void FUN_1044926fc(void)

{
  if (lRam000000011307e318 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e80bcb8);
  return;
}



/* Entry: 104492718; end: 104492747;  */

void FUN_104492718(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,param_3);
  return;
}



/* Entry: 104492748; end: 1044927f7;  */

void FUN_104492748(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_b0 = &UNK_10dd083a0;
  puStack_a8 = &UNK_10dd083b8;
  puStack_a0 = &UNK_10dd083d0;
  puStack_98 = &UNK_10dd083d0;
  puStack_90 = &UNK_10dd083d0;
  puStack_88 = &UNK_10dd083a0;
  puStack_80 = &UNK_10dd083b8;
  puStack_78 = &UNK_10dd083e8;
  puStack_70 = &UNK_10dd083e8;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar1 + -8) + 0x40;
    puStack_60 = &UNK_10dd083a0;
    puStack_58 = &UNK_10dd083a0;
    puStack_50 = &UNK_10dd083a0;
    puStack_38 = &UNK_10dd083b8;
    lStack_48 = lStack_68;
    lStack_40 = lStack_68;
    _swift_updateClassMetadata2(param_1,0x100,0x10,&puStack_b0,param_1 + 0x50);
  }
  return;
}



/* Entry: 1044927f8; end: 10449287f;  */

undefined8 FUN_1044927f8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 104492880; end: 104492883;  */

void FUN_104492880(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104492884; end: 104492a5b;  */

void FUN_104492884(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 104492a5c; end: 104492b1f;  */

void FUN_104492a5c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11307e460;
  func_0x0001000285a8(0x11307e460,&UNK_10dd084b0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 104492b20; end: 104492b23;  */

void FUN_104492b20(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e4f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd084c0;
  _swift_getWitnessTable(&UNK_10dd084c0,&UNK_110779180);
  puRam000000011307e4f0 = puVar1;
  return;
}



/* Entry: 104492b24; end: 104492b8f;  */

void FUN_104492b24(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e4f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd084c0;
  _swift_getWitnessTable(&UNK_10dd084c0,&UNK_110779180);
  puRam000000011307e4f0 = puVar1;
  return;
}



/* Entry: 104492b90; end: 104492b93;  */

void FUN_104492b90(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e508 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd08568;
  _swift_getWitnessTable(&UNK_10dd08568,&UNK_1107790d8);
  puRam000000011307e508 = puVar1;
  return;
}



/* Entry: 104492b94; end: 104492bff;  */

void FUN_104492b94(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e508 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd08568;
  _swift_getWitnessTable(&UNK_10dd08568,&UNK_1107790d8);
  puRam000000011307e508 = puVar1;
  return;
}



/* Entry: 104492c00; end: 104492c83;  */

void FUN_104492c00(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 104492c84; end: 104492c87;  */

void FUN_104492c84(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e520 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd085d8;
  _swift_getWitnessTable(&UNK_10dd085d8,&UNK_1107790d8);
  puRam000000011307e520 = puVar1;
  return;
}



/* Entry: 104492c88; end: 104492cc7;  */

void FUN_104492c88(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e520 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd085d8;
  _swift_getWitnessTable(&UNK_10dd085d8,&UNK_1107790d8);
  puRam000000011307e520 = puVar1;
  return;
}



/* Entry: 104492cc8; end: 104492ccb;  */

void FUN_104492cc8(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd08590;
  _swift_getWitnessTable(&UNK_10dd08590,&UNK_1107790d8);
  puRam000000011307e528 = puVar1;
  return;
}



/* Entry: 104492ccc; end: 104492d0b;  */

void FUN_104492ccc(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd08590;
  _swift_getWitnessTable(&UNK_10dd08590,&UNK_1107790d8);
  puRam000000011307e528 = puVar1;
  return;
}



/* Entry: 104492d0c; end: 104492e7f;  */

int FUN_104492d0c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xa8 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x57) {
      iVar2 = 4;
    }
    if (param_2 + 0x57 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104492d88;
        goto LAB_104492d6c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104492d6c:
      return ((uint)*param_1 | uVar1 << 8) - 0x57;
    }
  }
LAB_104492d88:
  iVar2 = *param_1 - 0x58;
  if (*param_1 < 0x58) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104492e80; end: 104492f07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104492e80(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100369de8();
  lVar2 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11307e560) = uStack_38;
  *(undefined8 *)(lVar2 + _DAT_11307e568) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_48 = lVar2;
  lStack_40 = param_2;
  _swift_retain(param_3);
  plVar3 = &lStack_48;
  _objc_msgSendSuper2(plVar3,puVar1);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 104492f08; end: 104492f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104492f08(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&uStack_38);
  func_0x000100369de8();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined8 *)(lVar4 + _DAT_11307e560) = uStack_38;
  *(undefined8 *)(lVar4 + _DAT_11307e568) = uVar1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_48 = lVar4;
  lStack_40 = lVar3;
  _swift_retain(uVar1);
  plVar5 = &lStack_48;
  _objc_msgSendSuper2(plVar5,puVar2);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 104492f10; end: 104492f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104492f10(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307e560) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307e568) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104492f74; end: 1044931ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_104492f74(void)

{
  undefined *puVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = 0x28;
  puVar7 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uStack_78 = CONCAT71(uStack_78._1_7_,*(undefined1 *)(lVar9 + 0x11307e3e0));
    puVar4 = &uStack_78;
    func_0x00010008a7c8(&puStack_70);
    puVar3 = puStack_70;
    if (puStack_70 != (ulong *)0x0) {
      func_0x000100083b20(&puStack_68);
      _swift_release();
      puVar8 = puStack_68;
      puVar4 = puVar3;
      if (puStack_68 != (ulong *)0x0) {
        puVar4 = puVar7;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
        if ((((int)puVar4 == 0) || ((long)puVar7 < 0)) || (((ulong)puVar7 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar7 >> 0x3e == 0) {
            puVar3 = *(ulong **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (ulong *)((ulong)puVar7 & 0xffffffffffffff8);
            if ((ulong *)0x7fffffffffffffff < puVar7) {
              puVar3 = puVar7;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg(puVar3);
          }
          puVar4 = (ulong *)0x0;
          func_0x000104493478(0,(undefined *)((long)puVar3 + 1),1,puVar7);
          puVar7 = puVar4;
        }
        uVar6 = (ulong)puVar7 & 0xffffffffffffff8;
        uVar10 = *(ulong *)(uVar6 + 0x10);
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar10) {
          puVar4 = (ulong *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          func_0x000104493478(puVar4,uVar10 + 1,1,puVar7);
          uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
          puVar7 = puVar4;
        }
        *(ulong *)(uVar6 + 0x10) = uVar10 + 1;
        *(ulong **)(uVar6 + uVar10 * 8 + 0x20) = puVar8;
      }
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x80);
  func_0x000100083b20(&puStack_68);
  FUN_1048575f8();
  _swift_release(puStack_68);
  puVar5 = &UNK_10dd08658;
  _swift_getKeyPath(&UNK_10dd08658);
  puStack_68 = (ulong *)puVar1;
  if ((ulong)puVar4 >> 0x3e == 0) {
    puVar3 = *(ulong **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar3 = (ulong *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((ulong *)0x7fffffffffffffff < puVar4) {
      puVar3 = puVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar8 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar3 != (ulong *)0x0) {
    uVar10 = 0;
    do {
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10449318c);
          (*pcVar2)();
        }
        uVar6 = puVar4[uVar10 + 4];
        _swift_retain(uVar6);
      }
      else {
        uVar6 = uVar10;
        func_0x000104493a18(uVar10,puVar4);
      }
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104493180);
        (*pcVar2)();
      }
      puVar11 = (ulong *)(uVar10 + 1);
      uStack_78 = uVar6;
      _swift_retain(uVar6);
      _swift_getAtKeyPath(&puStack_70,&uStack_78,puVar5);
      _swift_release_n(uVar6,2);
      func_0x0001044932dc(puStack_70);
      uVar10 = uVar10 + 1;
      puVar8 = puStack_68;
    } while (puVar11 != puVar3);
  }
  _swift_release(puVar5);
  _swift_bridgeObjectRelease(puVar4);
  puStack_68 = puVar7;
  func_0x0001044932dc(puVar8);
  return puStack_68;
}



/* Entry: 1044931f0; end: 104493243; -[_TtC22SCJobSchedulerServices35SCUserJobProviderPluginSaberService buildSaberPlugins] */

void FUN_1044931f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104492f74();
  _objc_release(param_1);
  uVar2 = 0;
  func_0x0001000a0a8c(0);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104493244; end: 1044932a3; -[_TtC22SCJobSchedulerServices35SCUserJobProviderPluginSaberService init] */

void FUN_104493244(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCJobSchedulerServices.SCUserJobProviderPluginSaberService",0x3a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104493270);
  (*pcVar1)();
}



/* Entry: 1044932a4; end: 1044932db; -[_TtC22SCJobSchedulerServices35SCUserJobProviderPluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044932a4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11307e560));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307e568));
  return;
}



/* Entry: 1044932dc; end: 10449359f;  */

void FUN_1044932dc(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x0001044933c8(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_104493718(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    _swift_bridgeObjectRelease();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044933c4);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1044933c8);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044933c0);
  (*pcVar1)();
}



/* Entry: 1044935a0; end: 10449361f;  */

undefined * FUN_1044935a0(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x000102183c9c();
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 104493620; end: 104493717;  */

long FUN_104493620(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104493714);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104493718);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x0001000a0a8c(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x0001000a0a8c(0);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104493710);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 104493718; end: 10449386f;  */

ulong FUN_104493718(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104493870);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104493864);
        (*pcVar1)();
      }
      uVar2 = 0;
      func_0x0001000a0a8c(0);
      _swift_arrayInitWithCopy(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104493868);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10449386c);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            _objc_retain(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        _objc_retain(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_104493870(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 104493870; end: 104493bcb;  */

ulong FUN_104493870(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104493944);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104493948);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001000a0a8c(0);
    uVar4 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar4);
    uVar3 = 0;
    func_0x0001000a0a8c(0);
    uVar4 = param_1;
    _swift_dynamicCastClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0x6967756c50626f4a,0xed0000636a624f6e);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104493a18);
  (*pcVar2)();
}



/* Entry: 104493bcc; end: 104493bdb;  */

undefined1  [16] FUN_104493bcc(void)

{
  return ZEXT816(0x110779228);
}



/* Entry: 104493bdc; end: 104493e5b;  */

undefined1  [16] FUN_104493bdc(void)

{
  return ZEXT816(0x110779250);
}



/* Entry: 104493e5c; end: 104493e77;  */

void FUN_104493e5c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 104493e78; end: 104493f27;  */

void FUN_104493e78(void)

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



/* Entry: 104493f28; end: 104493f3b;  */

undefined1  [16] FUN_104493f28(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 104493f3c; end: 104493f7b;  */

void FUN_104493f3c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e598 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd08740;
  _swift_getWitnessTable(&UNK_10dd08740,&UNK_110779308);
  puRam000000011307e598 = puVar1;
  return;
}



/* Entry: 104493f7c; end: 104493f7f;  */

void FUN_104493f7c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e5a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd087e0;
  _swift_getWitnessTable(&UNK_10dd087e0,&UNK_110779328);
  puRam000000011307e5a0 = puVar1;
  return;
}



/* Entry: 104493f80; end: 104493fbf;  */

void FUN_104493f80(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e5a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd087e0;
  _swift_getWitnessTable(&UNK_10dd087e0,&UNK_110779328);
  puRam000000011307e5a0 = puVar1;
  return;
}



/* Entry: 104493fc0; end: 104494007;  */

undefined1  [16] FUN_104493fc0(void)

{
  return ZEXT816(0x110779308);
}



/* Entry: 104494008; end: 104494017; -[SCJobProvider jobProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104494008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307e5a8));
  return;
}



/* Entry: 104494018; end: 104494063; -[SCJobProvider jobTypeIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104494018(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307e5b0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11307e5b0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104494064; end: 104494073; -[SCJobProvider submitOnRegister] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104494064(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307e5b8);
}



/* Entry: 104494074; end: 1044940f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104494074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307e5a8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e5b0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_11307e5b8) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044940f8; end: 10449418f; -[SCJobProvider initWithJobProcessor:jobTypeIdentifier:submitOnRegister:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044940f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(param_1 + _DAT_11307e5a8) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_11307e5b0);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_11307e5b8) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 104494190; end: 1044941ef; -[SCJobProvider init] */

void FUN_104494190(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCJobSchedulerServices.JobProvider",0x22,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044941bc);
  (*pcVar1)();
}



/* Entry: 1044941f0; end: 10449422b; -[SCJobProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044941f0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307e5a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307e5b0 + 8))
  ;
  return;
}



/* Entry: 10449422c; end: 10449423f;  */

bool FUN_10449422c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104494240; end: 104494317;  */

void FUN_104494240(void)

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



/* Entry: 104494318; end: 10449432f;  */

void FUN_104494318(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104494330; end: 10449435b; +[SCJobSchedulerConstants errorDomain] */

void FUN_104494330(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f202500);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10449435c; end: 104494397; -[SCJobSchedulerConstants init] */

void FUN_10449435c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1044943dc();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104494398; end: 1044943c7;  */

void FUN_104494398(void)

{
  FUN_1044943dc();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044943c8; end: 1044943db; -[SCJobSchedulerConstants .cxx_destruct] */

void FUN_1044943c8(void)

{
  return;
}



/* Entry: 1044943dc; end: 1044943fb;  */

void FUN_1044943dc(void)

{
  _objc_opt_self(&PTR_PTR_1129be580);
  return;
}



/* Entry: 1044943fc; end: 1044943ff;  */

void FUN_1044943fc(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e5e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd088d0;
  _swift_getWitnessTable(&UNK_10dd088d0,&UNK_1107793b0);
  puRam000000011307e5e8 = puVar1;
  return;
}



/* Entry: 104494400; end: 10449443f;  */

void FUN_104494400(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e5e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd088d0;
  _swift_getWitnessTable(&UNK_10dd088d0,&UNK_1107793b0);
  puRam000000011307e5e8 = puVar1;
  return;
}



/* Entry: 104494440; end: 10449444f;  */

undefined1  [16] FUN_104494440(void)

{
  return ZEXT816(0x1107793b0);
}



/* Entry: 104494450; end: 10449445f; -[_TtC22SCJobSchedulerServices24SCSystemJobProviderScope plugInRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104494450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307e618));
  return;
}



/* Entry: 104494460; end: 1044944ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104494460(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307e618) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044944ac; end: 104494503; -[_TtC22SCJobSchedulerServices24SCSystemJobProviderScope initWithPlugInRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044944ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11307e618) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104494504; end: 104494563; -[_TtC22SCJobSchedulerServices24SCSystemJobProviderScope init] */

void FUN_104494504(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCJobSchedulerServices.SCSystemJobProviderScope",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104494530);
  (*pcVar1)();
}



/* Entry: 104494564; end: 104494573; -[_TtC22SCJobSchedulerServices24SCSystemJobProviderScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104494564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307e618));
  return;
}



/* Entry: 104494574; end: 104494593;  */

void FUN_104494574(void)

{
  _objc_opt_self(&PTR_PTR_1129be630);
  return;
}



/* Entry: 104494594; end: 1044945a3; -[_TtC22SCJobSchedulerServices22SCUserJobProviderScope plugInRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104494594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307e648));
  return;
}



/* Entry: 1044945a4; end: 1044945ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044945a4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307e648) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044945f0; end: 104494647; -[_TtC22SCJobSchedulerServices22SCUserJobProviderScope initWithPlugInRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044945f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11307e648) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104494648; end: 1044946a7; -[_TtC22SCJobSchedulerServices22SCUserJobProviderScope init] */

void FUN_104494648(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCJobSchedulerServices.SCUserJobProviderScope",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104494674);
  (*pcVar1)();
}



/* Entry: 1044946a8; end: 1044946b7; -[_TtC22SCJobSchedulerServices22SCUserJobProviderScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044946a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307e648));
  return;
}



/* Entry: 1044946b8; end: 1044946d7;  */

void FUN_1044946b8(void)

{
  _objc_opt_self(&PTR_PTR_1129be6f0);
  return;
}



/* Entry: 1044946d8; end: 104494723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044946d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307e678) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104494724; end: 10449477b; -[_TtC22SCJobSchedulerServices28SCSystemJobSchedulerServices initWithJobScheduler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104494724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11307e678) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10449477c; end: 1044947db; -[_TtC22SCJobSchedulerServices28SCSystemJobSchedulerServices init] */

void FUN_10449477c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCJobSchedulerServices.SCSystemJobSchedulerServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044947a8);
  (*pcVar1)();
}



/* Entry: 1044947dc; end: 1044947eb; -[_TtC22SCJobSchedulerServices28SCSystemJobSchedulerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044947dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307e678));
  return;
}



/* Entry: 1044947ec; end: 104494837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044947ec(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307e6a8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104494838; end: 10449488f; -[_TtC22SCJobSchedulerServices26SCUserJobSchedulerServices initWithJobScheduler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104494838(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11307e6a8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104494890; end: 1044948ef; -[_TtC22SCJobSchedulerServices26SCUserJobSchedulerServices init] */

void FUN_104494890(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCJobSchedulerServices.SCUserJobSchedulerServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044948bc);
  (*pcVar1)();
}



/* Entry: 1044948f0; end: 1044948ff; -[_TtC22SCJobSchedulerServices26SCUserJobSchedulerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044948f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307e6a8));
  return;
}



/* Entry: 104494900; end: 1044949ab;  */

void FUN_104494900(void)

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



/* Entry: 1044949ac; end: 1044949eb;  */

void FUN_1044949ac(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1044949ec; end: 104494a0f; -[SCJobPlugin description] */

void FUN_1044949ec(void)

{
  FUN_104494c94();
  func_0x000104493c60();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104494a10; end: 104494a57; -[SCJobPlugin init] */

void FUN_104494a10(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCJobSchedulerServices/SCJobPluginWrapper.swift",0x2f,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104494a58);
  (*pcVar1)();
}



/* Entry: 104494a58; end: 104494a5b; -[SCJobPlugin copyWithZone:] */

void FUN_104494a58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104494a5c; end: 104494aff; +[SCJobPlugin jobPluginWithJobProcessor:jobTypeIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104494a5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_11307e6d8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11307e6e0) = param_3;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11307e6e8);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  *(undefined8 *)(lVar3 + _DAT_11307e6f0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104494b00; end: 104494b83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104494b00(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11307e6d8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_11307e6e0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e6e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11307e6f0) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _objc_msgSendSuper2(auStack_30,puVar2);
  return;
}



/* Entry: 104494b84; end: 104494c0b; +[SCJobPlugin dataSyncerWithDataSyncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104494b84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_11307e6d8) = 1;
  *(undefined8 *)(lVar3 + _DAT_11307e6e0) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11307e6e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_11307e6f0) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = param_1;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104494c0c; end: 104494c5f; -[SCJobPlugin matchJobPlugin:dataSyncer:] */

void FUN_104494c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x000100a0dd30(FUN_104494eec,auStack_40,FUN_104494f3c,auStack_60);
  _objc_release(param_1);
  return;
}



/* Entry: 104494c60; end: 104494c93;  */

void FUN_104494c60(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104494c94; end: 104494d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104494c94(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_11307e6d8) == '\x01') {
    lVar2 = *(long *)(param_1 + _DAT_11307e6f0);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104494d3c);
      (*pcVar1)();
    }
    _swift_unknownObjectRetain(lVar2);
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_11307e6e0);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104494d40);
      (*pcVar1)();
    }
    lVar3 = *(long *)(param_1 + _DAT_11307e6e8 + 8);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104494d44);
      (*pcVar1)();
    }
    _objc_retain(lVar2);
    _swift_bridgeObjectRetain(lVar3);
  }
  return lVar2;
}



/* Entry: 104494d44; end: 104494eab;  */

int FUN_104494d44(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104494dc0;
        goto LAB_104494da4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104494da4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104494dc0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104494eac; end: 104494eeb;  */

void FUN_104494eac(void)

{
  undefined *puVar1;
  
  if (puRam000000011307e720 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd08a64;
  _swift_getWitnessTable(&UNK_10dd08a64,&UNK_110779498);
  puRam000000011307e720 = puVar1;
  return;
}



/* Entry: 104494eec; end: 104494f3b;  */

void FUN_104494eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104494f3c; end: 104494f4b;  */

void FUN_104494f3c(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104494f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 104494f4c; end: 104494f5f; -[SCJobSchedulerProcessContext attempts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104494f4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307e728);
}



/* Entry: 104494f60; end: 104494ff7; -[SCJobSchedulerProcessContext initWithAttempts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104494f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11307e728) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104494ff8; end: 104494ffb; -[SCJobSchedulerProcessContext copyWithZone:] */

void FUN_104494ff8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104494ffc; end: 104495017; -[SCJobSchedulerProcessContext description] */

void FUN_104494ffc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104495018; end: 1044950b3; -[SCJobSchedulerProcessContext init] */

void FUN_104495018(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCJobSchedulerServices/SCJobSchedulerProcessContextWrapper.swift",0x40,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104495060);
  (*pcVar1)();
}



/* Entry: 1044950b4; end: 1044950b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044950b4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307e728) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044950b8; end: 10449526f;  */

void FUN_1044950b8(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  func_0x000100f0c488();
  _swift_initStackObject();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  uVar3 = 0;
  FUN_1044e4d64(0);
  _objc_allocWithZone();
  uVar4 = 0xc;
  func_0x0001044e4b78();
  puVar11 = (undefined8 *)(param_1 + 0x20);
  *puVar11 = uVar4;
  func_0x0001000285a8(0x112d4ad10,&UNK_10d937bb0);
  lVar5 = 1;
  __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104495270);
      (*pcVar2)();
    }
    uVar4 = *puVar11;
    _objc_retain();
  }
  else {
    uVar4 = 0;
    func_0x000100f060ac(0,param_1);
  }
  lVar1 = lVar5 + 0x38;
  uVar6 = *(ulong *)(lVar5 + 0x28);
  __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
  uVar10 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar10 ^ 0xffffffffffffffff);
  uVar7 = uVar6 >> 6;
  uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
  uVar9 = 1L << (uVar6 & 0x3f);
  if ((uVar9 & uVar8) != 0) {
    do {
      uVar8 = *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8);
      _objc_retain();
      uVar7 = uVar8;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
      _objc_release(uVar8);
      if ((uVar7 & 1) != 0) {
        _objc_release(uVar4);
        goto LAB_104495228;
      }
      uVar6 = uVar6 + 1 & ~uVar10;
      uVar7 = uVar6 >> 6;
      uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
      uVar9 = 1L << (uVar6 & 0x3f);
    } while ((uVar9 & uVar8) != 0);
  }
  *(ulong *)(lVar1 + uVar7 * 8) = uVar9 | uVar8;
  *(undefined8 *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar4;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10449526c);
    (*pcVar2)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
LAB_104495228:
  _swift_setDeallocating(param_1);
  _swift_arrayDestroy(puVar11,*(undefined8 *)(param_1 + 0x10),uVar3);
  lRam0000000113813b00 = lVar5;
  return;
}


