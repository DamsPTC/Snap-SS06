/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043fb6c0; end: 1043fb71f; -[LensPreSendDataServices init] */

void FUN_1043fb6c0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensPreSendDataServices.LensPreSendDataServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043fb6ec);
  (*pcVar1)();
}



/* Entry: 1043fb720; end: 1043fb757; -[LensPreSendDataServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fb720(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113076e18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113076e20));
  return;
}



/* Entry: 1043fb758; end: 1043fb763; -[SCCustomizationMention userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fb758(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113076e50);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113076e50))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043fb764; end: 1043fb76f; -[SCCustomizationMention username] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fb764(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113076e58);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113076e58))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043fb770; end: 1043fb7b7;  */

void FUN_1043fb770(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043fb7b8; end: 1043fb7cb;  */

bool FUN_1043fb7b8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1043fb7cc; end: 1043fb923;  */

void FUN_1043fb7cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0x656d616e72657375;
  if (cVar3 != '\x01') {
    uVar1 = 0x64695f72657375;
  }
  uVar2 = 0xe800000000000000;
  if (cVar3 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1043fb924; end: 1043fb99b;  */

void FUN_1043fb924(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1043fb99c; end: 1043fba17;  */

void FUN_1043fb99c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x656d616e72657375;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x64695f72657375;
  }
  uVar2 = 0xe800000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1043fba18; end: 1043fba93;  */

void FUN_1043fba18(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 uVar3;
  
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_3);
  uVar3 = 1;
  if (lVar2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1043fba94; end: 1043fbaab;  */

undefined1  [16] FUN_1043fba94(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1043fbaac; end: 1043fbafb;  */

void FUN_1043fbaac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1043fc524();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1043fbafc; end: 1043fbbf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fbafc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076e50);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076e58);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043fbbf4; end: 1043fbc83; -[SCCustomizationMention initWithUserId:username:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fbbf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113076e50);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113076e58);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043fbc84; end: 1043fbdc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fbc84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [14];
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x113076e60;
  func_0x0001000285a8(0x113076e60,&UNK_10dcf8490);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_1043fc564(param_1,uVar1);
  FUN_1043fc524();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar4,&UNK_110767d78,&UNK_110767d78,param_1,uVar1,uVar2);
  uStack_51 = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
            (*(undefined8 *)(unaff_x20 + _DAT_113076e50),
             ((undefined8 *)(unaff_x20 + _DAT_113076e50))[1],&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (*(undefined8 *)(unaff_x20 + _DAT_113076e58),
               ((undefined8 *)(unaff_x20 + _DAT_113076e58))[1],&uStack_52,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 1043fbdc8; end: 1043fbec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043fbdc8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  _swift_initStackObject();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x20) = 0x64695f72657375;
  *(undefined8 *)(lVar1 + 0x28) = 0xe700000000000000;
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_113076e50))[1];
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(unaff_x20 + _DAT_113076e50);
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  *(undefined8 *)(lVar1 + 0x40) = 0x656d616e72657375;
  *(undefined8 *)(lVar1 + 0x48) = 0xe800000000000000;
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_113076e58))[1];
  *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(unaff_x20 + _DAT_113076e58);
  *(undefined8 *)(lVar1 + 0x58) = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  lVar2 = lVar1;
  func_0x0001001830b8(lVar1);
  _swift_setDeallocating(lVar1);
  uVar3 = 0x112d38308;
  func_0x0001000285a8(0x112d38308,&UNK_10d902040);
  _swift_arrayDestroy((undefined8 *)(lVar1 + 0x20),2,uVar3);
  return lVar2;
}



/* Entry: 1043fbec4; end: 1043fc25b;  */

/* WARNING: Removing unreachable block (ram,0x0001043fc024) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1043fbec4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *apuStack_a8 [3];
  long lStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000100672b50(param_1,apuStack_a8);
  if (lStack_90 == 0) {
    func_0x00010006e7f4(apuStack_a8);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000100102924(apuStack_a8,auStack_88);
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    _objc_opt_self();
    puVar5 = auStack_88;
    FUN_1043fc564(puVar5,uStack_70);
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    puVar6 = puVar4;
    func_0x00010c082de0();
    _swift_unknownObjectRelease(puVar5);
    if ((int)puVar6 != 0) {
      puVar5 = auStack_88;
      FUN_1043fc564(puVar5,uStack_70);
      __ss27_bridgeAnythingToObjectiveCyyXlxlF();
      apuStack_a8[0] = (undefined *)0x0;
      func_0x00010bf64b60();
      _objc_retainAutoreleasedReturnValue();
      _swift_unknownObjectRelease(puVar5);
      puVar6 = apuStack_a8[0];
      _objc_retain(apuStack_a8[0]);
      if (puVar4 != (undefined *)0x0) {
        puVar7 = puVar4;
        uVar13 = uStack_70;
        __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
        _objc_release(puVar4);
        uVar8 = 0;
        __s10Foundation11JSONDecoderCMa();
        _swift_allocObject();
        __s10Foundation11JSONDecoderCACycfc();
        uVar9 = 0x113076e70;
        func_0x0001000285a8(0x113076e70,&UNK_10dcf84a0);
        uVar10 = uVar9;
        FUN_1043fc588();
        __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                  (apuStack_a8,uVar9,puVar7,uVar13,uVar9,uVar10);
        _swift_release(uVar8);
        puVar6 = apuStack_a8[0];
        puVar16 = (undefined *)((ulong)apuStack_a8[0] & 0xffffffffffffff8);
        if ((ulong)apuStack_a8[0] >> 0x3e == 0) {
          puVar15 = *(undefined **)(puVar16 + 0x10);
          puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puVar15 = puVar16;
          if ((undefined *)0x7fffffffffffffff < apuStack_a8[0]) {
            puVar15 = apuStack_a8[0];
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
          puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar4;
        if (puVar15 != (undefined *)0x0) {
          puVar12 = (undefined *)0x0;
          do {
            while( true ) {
              if (((ulong)puVar6 & 0xc000000000000001) == 0) {
                if (*(undefined **)(puVar16 + 0x10) <= puVar12) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1043fc21c);
                  (*pcVar3)();
                }
                puVar11 = *(undefined **)(puVar6 + (long)puVar12 * 8 + 0x20);
                _objc_retain();
              }
              else {
                puVar11 = puVar12;
                func_0x0001010e6634(puVar12,puVar6);
              }
              if (SCARRY8((long)puVar12,1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1043fc218);
                (*pcVar3)();
              }
              puVar14 = puVar12 + 1;
              uVar2 = *(ulong *)((long)(puVar11 + _DAT_113076e50) + 8);
              uVar1 = *(ulong *)(puVar11 + _DAT_113076e50) & 0xffffffffffff;
              if ((uVar2 & 0x2000000000000000) != 0) {
                uVar1 = uVar2 >> 0x38 & 0xf;
              }
              if (uVar1 == 0) break;
LAB_1043fc194:
              puVar12 = puVar4;
              _swift_isUniquelyReferenced_nonNull_native();
              apuStack_a8[0] = puVar4;
              if (((ulong)puVar12 & 1) == 0) {
                func_0x000102ad82a0(0,*(long *)(puVar4 + 0x10) + 1,1);
              }
              uVar1 = *(ulong *)(apuStack_a8[0] + 0x10);
              if (*(ulong *)(apuStack_a8[0] + 0x18) >> 1 <= uVar1) {
                func_0x000102ad82a0(1 < *(ulong *)(apuStack_a8[0] + 0x18),uVar1 + 1,1);
              }
              *(ulong *)(apuStack_a8[0] + 0x10) = uVar1 + 1;
              *(undefined **)(apuStack_a8[0] + uVar1 * 8 + 0x20) = puVar11;
              puVar4 = apuStack_a8[0];
              puVar12 = puVar14;
              if (puVar14 == puVar15) goto LAB_1043fc23c;
            }
            uVar2 = *(ulong *)((long)(puVar11 + _DAT_113076e58) + 8);
            uVar1 = *(ulong *)(puVar11 + _DAT_113076e58) & 0xffffffffffff;
            if ((uVar2 & 0x2000000000000000) != 0) {
              uVar1 = uVar2 >> 0x38 & 0xf;
            }
            if (uVar1 != 0) goto LAB_1043fc194;
            _objc_release();
            puVar12 = puVar12 + 1;
          } while (puVar14 != puVar15);
        }
LAB_1043fc23c:
        _swift_bridgeObjectRelease(puVar6);
        func_0x00010006c090(puVar7,uVar13);
        FUN_1043fc888(auStack_88);
        goto LAB_1043fc084;
      }
      puVar4 = puVar6;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(puVar6);
      _swift_willThrow();
      _swift_errorRelease(puVar4);
    }
    FUN_1043fc888(auStack_88);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
LAB_1043fc084:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  __swift_stdlib_reportUnimplementedInitializer
            ("LensPreSendDataServices.CustomizationMention",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1043fc288);
  (*pcVar3)();
}



/* Entry: 1043fc25c; end: 1043fc2bb; -[SCCustomizationMention init] */

void FUN_1043fc25c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensPreSendDataServices.CustomizationMention",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043fc288);
  (*pcVar1)();
}



/* Entry: 1043fc2bc; end: 1043fc2fb; -[SCCustomizationMention .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fc2bc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076e50 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113076e58 + 8))
  ;
  return;
}



/* Entry: 1043fc2fc; end: 1043fc323;  */

void FUN_1043fc2fc(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_1043fc344();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1043fc324; end: 1043fc343;  */

void FUN_1043fc324(void)

{
  FUN_1043fbc84();
  return;
}



/* Entry: 1043fc344; end: 1043fc523;  */

/* WARNING: Removing unreachable block (ram,0x0001043fc45c) */
/* WARNING: Removing unreachable block (ram,0x0001043fc410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 ** FUN_1043fc344(undefined1 **param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  long unaff_x21;
  long lVar11;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 uStack_51;
  
  lVar3 = 0x113076f20;
  func_0x0001000285a8(0x113076f20,&UNK_10dcf8660);
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = param_1[3];
  puVar2 = param_1[4];
  ppuVar4 = param_1;
  FUN_1043fc564(param_1,puVar6);
  ppuVar5 = ppuVar4;
  FUN_1043fc524();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_80 + -extraout_x8,&UNK_110767d78,&UNK_110767d78,ppuVar5,puVar6,puVar2);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar6 = &uStack_51;
    lVar9 = lVar3;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    lVar1 = -0x2000000000000000;
    if (lVar9 != 0) {
      lVar1 = lVar9;
    }
    uStack_51 = 1;
    puVar7 = &uStack_51;
    lVar10 = lVar3;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    puVar2 = (undefined1 *)0x0;
    if (lVar9 != 0) {
      puVar2 = puVar6;
    }
    puVar6 = (undefined1 *)0x0;
    if (lVar10 != 0) {
      puVar6 = puVar7;
    }
    lStack_78 = -0x2000000000000000;
    if (lVar10 != 0) {
      lStack_78 = lVar10;
    }
    func_0x0001043fc638();
    puVar8 = puVar7;
    _objc_allocWithZone();
    *(undefined1 **)(puVar8 + _DAT_113076e50) = puVar2;
    *(long *)((long)(puVar8 + _DAT_113076e50) + 8) = lVar1;
    *(undefined1 **)(puVar8 + _DAT_113076e58) = puVar6;
    *(long *)((long)(puVar8 + _DAT_113076e58) + 8) = lStack_78;
    ppuVar4 = &puStack_70;
    puStack_70 = puVar8;
    puStack_68 = puVar7;
    _objc_msgSendSuper2(ppuVar4,PTR_s_init_1125d9248);
    (**(code **)(lVar11 + 8))(auStack_80 + -extraout_x8,lVar3);
    FUN_1043fc888(param_1);
  }
  else {
    FUN_1043fc888(param_1);
  }
  return ppuVar4;
}



/* Entry: 1043fc524; end: 1043fc563;  */

void FUN_1043fc524(void)

{
  undefined *puVar1;
  
  if (puRam0000000113076e68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf8610;
  _swift_getWitnessTable(&UNK_10dcf8610,&UNK_110767d78);
  puRam0000000113076e68 = puVar1;
  return;
}



/* Entry: 1043fc564; end: 1043fc587;  */

long * FUN_1043fc564(long *param_1,long param_2)

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



/* Entry: 1043fc588; end: 1043fc5f7;  */

void FUN_1043fc588(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000113076e78 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113076e70;
  func_0x00010002969c(0x113076e70,&UNK_10dcf84a0);
  uVar2 = uVar1;
  FUN_1043fc5f8();
  puVar3 = PTR___sSayxGSesSeRzlMc_11034dd10;
  uStack_28 = uVar2;
  _swift_getWitnessTable(PTR___sSayxGSesSeRzlMc_11034dd10,uVar1,&uStack_28);
  puRam0000000113076e78 = puVar3;
  return;
}



/* Entry: 1043fc5f8; end: 1043fc657;  */

void FUN_1043fc5f8(void)

{
  long lVar1;
  undefined *puVar2;
  
  if (puRam0000000113076e80 != (undefined *)0x0) {
    return;
  }
  lVar1 = (long)puRam0000000113076e80;
  func_0x0001043fc638();
  puVar2 = &UNK_10dcf84a8;
  _swift_getWitnessTable(&UNK_10dcf84a8,lVar1);
  puRam0000000113076e80 = puVar2;
  return;
}



/* Entry: 1043fc658; end: 1043fc7bf;  */

int FUN_1043fc658(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1043fc6d4;
        goto LAB_1043fc6b8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1043fc6b8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1043fc6d4:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1043fc7c0; end: 1043fc7ff;  */

void FUN_1043fc7c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113076eb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf85e8;
  _swift_getWitnessTable(&UNK_10dcf85e8,&UNK_110767d78);
  puRam0000000113076eb0 = puVar1;
  return;
}



/* Entry: 1043fc800; end: 1043fc803;  */

void FUN_1043fc800(void)

{
  undefined *puVar1;
  
  if (puRam0000000113076eb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf8548;
  _swift_getWitnessTable(&UNK_10dcf8548,&UNK_110767d78);
  puRam0000000113076eb8 = puVar1;
  return;
}



/* Entry: 1043fc804; end: 1043fc843;  */

void FUN_1043fc804(void)

{
  undefined *puVar1;
  
  if (puRam0000000113076eb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf8548;
  _swift_getWitnessTable(&UNK_10dcf8548,&UNK_110767d78);
  puRam0000000113076eb8 = puVar1;
  return;
}



/* Entry: 1043fc844; end: 1043fc847;  */

void FUN_1043fc844(void)

{
  undefined *puVar1;
  
  if (puRam0000000113076ec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf8520;
  _swift_getWitnessTable(&UNK_10dcf8520,&UNK_110767d78);
  puRam0000000113076ec0 = puVar1;
  return;
}



/* Entry: 1043fc848; end: 1043fc887;  */

void FUN_1043fc848(void)

{
  undefined *puVar1;
  
  if (puRam0000000113076ec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf8520;
  _swift_getWitnessTable(&UNK_10dcf8520,&UNK_110767d78);
  puRam0000000113076ec0 = puVar1;
  return;
}



/* Entry: 1043fc888; end: 1043fc8a7;  */

void FUN_1043fc888(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001043fc89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1043fc8a8; end: 1043fc8b3; -[SCInLensCreationPreSendMetadata customizationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fc8a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113076f28);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113076f28))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043fc8b4; end: 1043fc8bf; -[SCInLensCreationPreSendMetadata customization] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fc8b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113076f30);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113076f30))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043fc8c0; end: 1043fc907;  */

void FUN_1043fc8c0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043fc908; end: 1043fc963; -[SCInLensCreationPreSendMetadata previewText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fc908(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076f38))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076f38);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043fc964; end: 1043fc973; -[SCInLensCreationPreSendMetadata shouldCallBackend] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043fc964(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113076f40);
}



/* Entry: 1043fc974; end: 1043fc9c3; -[SCInLensCreationPreSendMetadata mentions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fc974(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113076f48);
  func_0x0001043fc638(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043fc9c4; end: 1043fcb4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fc9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076f28);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076f30);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076f38);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113076f40) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113076f48) = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043fcb4c; end: 1043fcc57; -[SCInLensCreationPreSendMetadata initWithCustomizationId:customization:previewText:shouldCallBackend:mentions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fcb4c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar5 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  uVar4 = 0;
  func_0x0001043fc638(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_7,uVar4);
  puVar1 = (undefined8 *)(param_1 + _DAT_113076f28);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113076f30);
  *puVar1 = param_4;
  puVar1[1] = lVar5;
  plVar2 = (long *)(param_1 + _DAT_113076f38);
  *plVar2 = param_5;
  plVar2[1] = lVar6;
  *(undefined1 *)(param_1 + _DAT_113076f40) = param_6;
  *(undefined8 *)(param_1 + _DAT_113076f48) = param_7;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043fcc58; end: 1043fccb7; -[SCInLensCreationPreSendMetadata init] */

void FUN_1043fcc58(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensPreSendDataServices.InLensCreationPreSendMetadata",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043fcc84);
  (*pcVar1)();
}



/* Entry: 1043fccb8; end: 1043fcd1b; -[SCInLensCreationPreSendMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fccb8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076f28 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076f30 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076f38 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113076f48));
  return;
}



/* Entry: 1043fcd1c; end: 1043fcd3b;  */

void FUN_1043fcd1c(void)

{
  _objc_opt_self(&PTR_PTR_1129ae820);
  return;
}



/* Entry: 1043fcd3c; end: 1043fd03f;  */

long FUN_1043fcd3c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1043fd040; end: 1043fd04b; -[SCPromptLensPreSendMetadata associatedData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fd040(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076f78))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076f78);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043fd04c; end: 1043fd057; -[SCPromptLensPreSendMetadata promptId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fd04c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113076f80);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113076f80))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043fd058; end: 1043fd067; -[SCPromptLensPreSendMetadata turnByTurn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043fd058(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113076f88);
}



/* Entry: 1043fd068; end: 1043fd073; -[SCPromptLensPreSendMetadata promptReceiverUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fd068(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076f90))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076f90);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043fd074; end: 1043fd07f; -[SCPromptLensPreSendMetadata promptCreatorUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fd074(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113076f98);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113076f98))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043fd080; end: 1043fd0c7;  */

void FUN_1043fd080(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043fd0c8; end: 1043fd13b; -[SCPromptLensPreSendMetadata encryptionKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fd0c8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_113076fa0))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113076fa0);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043fd13c; end: 1043fd14b; -[SCPromptLensPreSendMetadata isComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043fd13c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113076fa8);
}



/* Entry: 1043fd14c; end: 1043fd15b; -[SCPromptLensPreSendMetadata score] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fd14c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113076fb0));
  return;
}



/* Entry: 1043fd15c; end: 1043fd167; -[SCPromptLensPreSendMetadata lensName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fd15c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076fb8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076fb8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043fd168; end: 1043fd1bf;  */

void FUN_1043fd168(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043fd1c0; end: 1043fd437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fd1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076f78);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076f80);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113076f88) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076f90);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076f98);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076fa0);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  *(undefined1 *)(unaff_x20 + _DAT_113076fa8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_113076fb0) = param_14;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076fb8);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043fd438; end: 1043fd593; -[SCPromptLensPreSendMetadata initWithAssociatedData:promptId:turnByTurn:promptReceiverUserId:promptCreatorUserId:encryptionKey:isComplete:score:lensName:] */

void FUN_1043fd438(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined4 param_5,long param_6,undefined8 param_7,long param_8,undefined1 param_9
                  )

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_stack_00000010;
  long lStack_98;
  undefined8 uStack_80;
  long lStack_78;
  
  if (param_3 == 0) {
    uStack_80 = 0;
    lStack_78 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_80 = param_2;
    lStack_78 = param_3;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_6 == 0) {
    lStack_98 = 0;
    uVar4 = 0;
    uVar2 = param_2;
  }
  else {
    uVar4 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar2 = uVar4;
    lStack_98 = param_6;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
  uVar3 = uVar2;
  _objc_retain();
  _objc_retain();
  if (param_8 == 0) {
    uVar3 = 0xf000000000000000;
  }
  else {
    lVar1 = param_8;
    _objc_retain(param_8);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar1);
  }
  if (in_stack_00000010 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000010);
  }
  func_0x0001043fd2fc(lStack_78,uStack_80,param_4,param_2,param_5,lStack_98,uVar4,param_7,uVar2,
                      param_8,uVar3,param_9);
  return;
}



/* Entry: 1043fd594; end: 1043fd5f3; -[SCPromptLensPreSendMetadata init] */

void FUN_1043fd594(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensPreSendDataServices.PromptLensPreSendMetadata",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043fd5c0);
  (*pcVar1)();
}



/* Entry: 1043fd5f4; end: 1043fd693; -[SCPromptLensPreSendMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fd5f4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076f78 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076f80 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076f90 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076f98 + 8));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_113076fa0),
                      ((undefined8 *)(param_1 + _DAT_113076fa0))[1]);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076fb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113076fb8 + 8))
  ;
  return;
}



/* Entry: 1043fd694; end: 1043fd6b3;  */

void FUN_1043fd694(void)

{
  _objc_opt_self(&PTR_PTR_1129ae900);
  return;
}



/* Entry: 1043fd6b4; end: 1043fd78b;  */

void FUN_1043fd6b4(void)

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



/* Entry: 1043fd78c; end: 1043fd7ab;  */

void FUN_1043fd78c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1043fd7ac; end: 1043fd857;  */

void FUN_1043fd7ac(void)

{
  undefined4 uVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyys6UInt32VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1043fd858; end: 1043fd85b;  */

void FUN_1043fd858(void)

{
  undefined *puVar1;
  
  if (puRam0000000113076fe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf8758;
  _swift_getWitnessTable(&UNK_10dcf8758,&UNK_110768000);
  puRam0000000113076fe8 = puVar1;
  return;
}



/* Entry: 1043fd85c; end: 1043fd89b;  */

void FUN_1043fd85c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113076fe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf8758;
  _swift_getWitnessTable(&UNK_10dcf8758,&UNK_110768000);
  puRam0000000113076fe8 = puVar1;
  return;
}



/* Entry: 1043fd89c; end: 1043fd8af;  */

undefined1  [16] FUN_1043fd89c(void)

{
  return ZEXT816(0x110768000);
}



/* Entry: 1043fd8b0; end: 1043fd8f3;  */

void FUN_1043fd8b0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113076ff0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x0001023e2c0c(0xff);
  puVar2 = &UNK_10da9ff68;
  _swift_getWitnessTable(&UNK_10da9ff68,uVar1);
  puRam0000000113076ff0 = puVar2;
  return;
}



/* Entry: 1043fd8f4; end: 1043fd91f;  */

void FUN_1043fd8f4(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001043fd9ec();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1043fd920; end: 1043fd92b;  */

void FUN_1043fd920(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1043fd92c; end: 1043fd9d7;  */

void FUN_1043fd92c(void)

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



/* Entry: 1043fd9d8; end: 1043fd9ff;  */

bool FUN_1043fd9d8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1043fda00; end: 1043fda3f;  */

void FUN_1043fda00(void)

{
  undefined *puVar1;
  
  if (puRam0000000113076ff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf8898;
  _swift_getWitnessTable(&UNK_10dcf8898,&UNK_110768078);
  puRam0000000113076ff8 = puVar1;
  return;
}



/* Entry: 1043fda40; end: 1043fda4f;  */

undefined1  [16] FUN_1043fda40(void)

{
  return ZEXT816(0x110768078);
}



/* Entry: 1043fda50; end: 1043fda7b;  */

void FUN_1043fda50(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001043fdb48();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1043fda7c; end: 1043fda87;  */

void FUN_1043fda7c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1043fda88; end: 1043fdb33;  */

void FUN_1043fda88(void)

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



/* Entry: 1043fdb34; end: 1043fdb5b;  */

bool FUN_1043fdb34(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1043fdb5c; end: 1043fdb9b;  */

void FUN_1043fdb5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077000 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf8958;
  _swift_getWitnessTable(&UNK_10dcf8958,&UNK_1107680f0);
  puRam0000000113077000 = puVar1;
  return;
}



/* Entry: 1043fdb9c; end: 1043fdbab;  */

undefined1  [16] FUN_1043fdb9c(void)

{
  return ZEXT816(0x1107680f0);
}



/* Entry: 1043fdbac; end: 1043fdc9f;  */

void FUN_1043fdbac(undefined8 param_1,ulong param_2,byte param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_3 < 3) {
    if (param_3 == 0) {
      uVar2 = 0;
    }
    else {
      if (param_3 == 1) {
        __ss6HasherV8_combineyySuF(1);
        uVar1 = 0;
        if ((param_2 & 0x7fffffffffffffff) != 0) {
          uVar1 = param_2;
        }
        __ss6HasherV8_combineyys6UInt64VF(uVar1);
        return;
      }
      uVar2 = 2;
    }
  }
  else {
    if (param_3 == 3) {
      __ss6HasherV8_combineyySuF(3);
      __ss6HasherV8_combineyys5UInt8VF((uint)param_2 & 1);
      return;
    }
    if (param_3 == 4) {
      __ss6HasherV8_combineyySuF(4);
      __ss6HasherV8_combineyys6UInt32VF(param_2);
      return;
    }
    uVar2 = 5;
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 1043fdca0; end: 1043fdcab;  */

void FUN_1043fdca0(void)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  
  uVar4 = *unaff_x20;
  bVar2 = (byte)unaff_x20[1];
  if (bVar2 < 3) {
    if (bVar2 == 0) {
      uVar3 = 0;
    }
    else {
      if (bVar2 == 1) {
        __ss6HasherV8_combineyySuF(1);
        uVar1 = 0;
        if ((uVar4 & 0x7fffffffffffffff) != 0) {
          uVar1 = uVar4;
        }
        __ss6HasherV8_combineyys6UInt64VF(uVar1);
        return;
      }
      uVar3 = 2;
    }
  }
  else {
    if (bVar2 == 3) {
      __ss6HasherV8_combineyySuF(3);
      __ss6HasherV8_combineyys5UInt8VF((uint)uVar4 & 1);
      return;
    }
    if (bVar2 == 4) {
      __ss6HasherV8_combineyySuF(4);
      __ss6HasherV8_combineyys6UInt32VF(uVar4);
      return;
    }
    uVar3 = 5;
  }
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8_combineyySuF(uVar4);
  return;
}



/* Entry: 1043fdcac; end: 1043fdcf3;  */

void FUN_1043fdcac(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1043fdbac(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1043fdcf4; end: 1043fddbf;  */

uint FUN_1043fdcf4(double *param_1,double *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  cVar1 = *(char *)(param_2 + 1);
  bVar2 = *(byte *)(param_1 + 1);
  uVar3 = SUB84(*param_1,0);
  uVar4 = SUB84(*param_2,0);
  if (bVar2 < 3) {
    uVar5 = 0;
    if (cVar1 == '\0') {
      uVar5 = (uint)(uVar3 == uVar4);
    }
    uVar6 = (uint)(*param_1 == *param_2);
    if (cVar1 != '\x01') {
      uVar6 = 0;
    }
    uVar7 = 0;
    if (cVar1 == '\x02') {
      uVar7 = (uint)(uVar3 == uVar4);
    }
    if (bVar2 != 1) {
      uVar6 = uVar7;
    }
    if (bVar2 != 0) {
      uVar5 = uVar6;
    }
    return uVar5;
  }
  uVar5 = uVar4 ^ uVar3 ^ 1;
  if (cVar1 != '\x03') {
    uVar5 = 0;
  }
  uVar6 = (uint)(uVar3 == uVar4);
  if (cVar1 != '\x04') {
    uVar6 = 0;
  }
  uVar7 = 0;
  if (cVar1 == '\x05') {
    uVar7 = (uint)(uVar3 == uVar4);
  }
  if (bVar2 != 4) {
    uVar6 = uVar7;
  }
  if (bVar2 != 3) {
    uVar5 = uVar6;
  }
  return uVar5 & 1;
}



/* Entry: 1043fddc0; end: 1043fddff;  */

void FUN_1043fddc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf89f0;
  _swift_getWitnessTable(&UNK_10dcf89f0,&UNK_1107681d8);
  puRam0000000113077008 = puVar1;
  return;
}



/* Entry: 1043fde00; end: 1043fdedb;  */

int FUN_1043fde00(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfa < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfb;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 6) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1043fdedc; end: 1043fdf1b;  */

void FUN_1043fdedc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113077010 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf8ab8;
  _swift_getWitnessTable(&UNK_10dcf8ab8,&UNK_110768230);
  puRam0000000113077010 = puVar1;
  return;
}



/* Entry: 1043fdf1c; end: 1043fdfc7;  */

void FUN_1043fdf1c(void)

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



/* Entry: 1043fdfc8; end: 1043fdfeb;  */

bool FUN_1043fdfc8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1043fdfec; end: 1043fe003; -[SCPreviewToolbarItemViewModel initWithItemType:] */

void FUN_1043fdfec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c039d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithPreviewToolbarItemType_i_1125ec140,param_3,1,0,0,0,0);
  return;
}



/* Entry: 1043fe004; end: 1043fe04b;  */

uint FUN_1043fe004(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined1)param_1[3];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined1)param_2[3];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x21);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  FUN_1043fe04c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1043fe04c; end: 1043fe17b;  */

undefined8 FUN_1043fe04c(int *param_1,int *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_70 [48];
  
  if ((*param_1 != *param_2) || (((*(byte *)(param_1 + 2) ^ *(byte *)(param_2 + 2)) & 1) != 0)) {
    return 0;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  lVar1 = *(long *)(param_2 + 4);
  if (uVar2 == 0) {
    if (lVar1 != 0) {
      return 0;
    }
  }
  else {
    if (lVar1 == 0) {
      return 0;
    }
    func_0x000100de1f70(0);
    FUN_1043fe3a8(param_2,auStack_70);
    FUN_1043fe3a8(param_1,auStack_70);
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar2,lVar1);
    func_0x0001043fe400(param_2);
    func_0x0001043fe400(param_1);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  if ((((*(byte *)(param_1 + 6) ^ *(byte *)(param_2 + 6)) & 1) == 0) &&
     (((*(byte *)((long)param_1 + 0x19) ^ *(byte *)((long)param_2 + 0x19)) & 1) == 0)) {
    if ((char)param_1[10] == -1) {
      if ((char)param_2[10] == -1) {
        return 1;
      }
    }
    else if ((char)param_2[10] != -1) {
      uVar2 = *(ulong *)(param_1 + 8);
      func_0x0001043fdd0c(uVar2,(char)param_1[10],*(undefined8 *)(param_2 + 8));
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 1043fe17c; end: 1043fe1a7;  */

long FUN_1043fe17c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1043fe1a8; end: 1043fe1af;  */

void FUN_1043fe1a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1043fe1b0; end: 1043fe203;  */

undefined8 * FUN_1043fe1b0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  _objc_retain();
  return param_1;
}



/* Entry: 1043fe204; end: 1043fe277;  */

undefined8 * FUN_1043fe204(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _objc_retain();
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 1043fe278; end: 1043fe2db;  */

undefined8 * FUN_1043fe278(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Entry: 1043fe2dc; end: 1043fe3a7;  */

int FUN_1043fe2dc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1043fe3a8; end: 1043fe427;  */

undefined8 * FUN_1043fe3a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = *param_1;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 1);
  uVar1 = param_1[2];
  param_2[2] = uVar1;
  *(undefined2 *)(param_2 + 3) = *(undefined2 *)(param_1 + 3);
  uVar2 = param_1[4];
  *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_1 + 5);
  param_2[4] = uVar2;
  _objc_retain(uVar1);
  return param_2;
}



/* Entry: 1043fe428; end: 1043fe437; -[_TtC33SCPreviewToolbarItemProviderScope33SCPreviewToolbarItemProviderScope plugInRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043fe428(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113077018));
  return;
}


