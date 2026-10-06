/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100894150; end: 100894157; -[SCCameraVerticalToolbarConfigurationImpl sigPerfFixesEnabled] */

undefined8 FUN_100894150(void)

{
  return 1;
}



/* Entry: 100894158; end: 1008946fb; -[SCCameraToolbarButtonImpl initWithToolbarItem:cameraUserActionLogger:appearanceType:iconStyle:sigPerfFixesEnabled:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100894158(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             long param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_8);
  uVar10 = 0x4054000000000000;
  if (param_5 != 1) {
    uVar10 = 0x4044000000000000;
  }
  puStack_80 = PTR_PTR_1126f0488;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(0,0,0x4044000000000000,uVar10,puVar2,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    lVar7 = (long)_DAT_1127429d0;
    func_0x000107c61174(param_3);
    uVar10 = *(undefined8 *)((long)puVar2 + lVar7);
    *(long *)((long)puVar2 + lVar7) = param_3;
    func_0x000107c61170(uVar10);
    func_0x000107c611a0((long)puVar2 + (long)_DAT_1127429d4,param_4);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_1127429d8);
    uVar10 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    uVar9 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    uVar8 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    *puVar1 = uVar10;
    puVar1[3] = uVar9;
    puVar1[2] = uVar8;
    *(long *)((long)puVar2 + (long)_DAT_1127429dc) = param_6;
    *(undefined1 *)((long)puVar2 + (long)_DAT_1127429e0) = param_7;
    func_0x000107c52818(puVar2);
    lVar3 = param_3;
    func_0x000107c4d750(param_3);
    func_0x000107c61180();
    lVar4 = lVar3;
    FUN_10089f0e0();
    func_0x000107c61180();
    func_0x000107c55258(puVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    lVar3 = param_3;
    func_0x000107c4d74c();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar3 != 0) {
      lVar3 = param_3;
      func_0x000107c4d74c(param_3);
      func_0x000107c61180();
      func_0x000107c52b50(puVar2);
      func_0x000107c61170(lVar3);
    }
    puVar6 = PTR_PTR_1126b08d8;
    if ((param_5 != 2) && (param_6 != 0)) {
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61180();
      FUN_10085b3c8(0x402e000000000000,0x3fc3333333333333,*(undefined8 *)PTR__CGSizeZero_110347620,
                    *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar6,puVar2,puVar5);
      func_0x000107c61170(puVar5);
    }
    lVar3 = param_3;
    func_0x000107c3cf04(param_3);
    func_0x000107c61180();
    func_0x000107c520fc(puVar2);
    func_0x000107c61170(lVar3);
    lVar3 = param_3;
    func_0x000107c3cf00(param_3);
    func_0x000107c61180();
    func_0x000107c520f4(puVar2);
    func_0x000107c61170(lVar3);
    uVar10 = *(undefined8 *)((long)puVar2 + lVar7);
    func_0x000107c3cf18(uVar10);
    func_0x000107c61180();
    func_0x000107c52104(puVar2);
    func_0x000107c61170(uVar10);
    func_0x000107c5639c(0x3ff1f06f69446738,puVar2);
    func_0x000107c56f88(puVar2);
    func_0x000107c55280(puVar2);
    puVar6 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar10 = *(undefined8 *)((long)puVar2 + (long)_DAT_1127429e4);
    *(undefined **)((long)puVar2 + (long)_DAT_1127429e4) = puVar6;
    func_0x000107c61170(uVar10);
    func_0x000107c61144(auStack_90,puVar2);
    lVar3 = param_3;
    func_0x000107c41a70(param_3);
    func_0x000107c61180();
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    puStack_b0 = &UNK_1061e1288;
    puStack_a8 = &UNK_1109150f8;
    func_0x000107c6111c(auStack_98,auStack_90);
    func_0x000107c61174(param_3);
    lVar4 = lVar3;
    lStack_a0 = param_3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    lVar3 = param_3;
    func_0x000107c4d558(param_3);
    func_0x000107c61180();
    puStack_f0 = puVar6;
    uStack_e8 = 0xc2000000;
    puStack_e0 = &UNK_1061e12d0;
    puStack_d8 = &UNK_1109150f8;
    func_0x000107c6111c(auStack_c8,auStack_90);
    func_0x000107c61174(param_3);
    lVar4 = lVar3;
    lStack_d0 = param_3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    lVar3 = param_3;
    func_0x000107c41a84(param_3);
    func_0x000107c61180();
    puStack_118 = puVar6;
    uStack_110 = 0xc2000000;
    puStack_108 = &UNK_1061e1340;
    puStack_100 = &UNK_11090ba70;
    func_0x000107c6111c(auStack_f8,auStack_90);
    lVar4 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    lVar3 = param_3;
    func_0x000107c41a60(param_3);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_120,auStack_90);
    lVar4 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c611a0((long)puVar2 + (long)_DAT_1127429e8,param_8);
    func_0x000107c61120(auStack_120);
    func_0x000107c61120(auStack_f8);
    func_0x000107c61170(lStack_d0);
    func_0x000107c61120(auStack_c8);
    func_0x000107c61170(lStack_a0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 1008946fc; end: 100894717;  */

void FUN_1008946fc(void)

{
  return;
}



/* Entry: 100894718; end: 1008948bf;  */

void FUN_100894718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  long unaff_x19;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long alStack_148 [3];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [80];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_58;
  
  func_0x000100689a14();
  plVar1 = alStack_148;
  uStack_158 = param_1;
  uStack_150 = param_2;
  uStack_58 = extraout_x8;
  FUN_10066a208(plVar1,param_3);
  uStack_130 = param_4;
  uStack_128 = param_5;
  uStack_120 = param_6;
  uStack_118 = param_7;
  FUN_10060f340();
  if ((int)plVar1 != 0) {
    func_0x000107c3573c();
    (*extraout_x8_00)();
    if (((ulong)plVar1 & 1) == 0) {
      func_0x000107c2c654(&lStack_110,*(undefined8 *)(unaff_x19 + 8),
                          *(undefined8 *)(unaff_x19 + 0x10));
      func_0x000107c2c688(auStack_100,&uStack_158);
      func_0x000107c35740();
      func_0x000107c35724();
      puStack_88 = &UNK_10b2d8b5c;
      ppuStack_80 = &PTR_DAT_110cd2720;
      plVar1 = (long *)0x58;
      func_0x000107c60e20();
      plVar1[1] = lStack_108;
      *plVar1 = lStack_110;
      lStack_110 = 0;
      lStack_108 = 0;
      func_0x000107c2c688(plVar1 + 2,auStack_100);
      func_0x000107c3574c();
      *(undefined8 *)(lStack_90 + 0x18) = extraout_x8_01;
      *(undefined **)(lStack_90 + 0x20) = &UNK_10b2d8b5c;
      func_0x000107c357c0();
      func_0x000107c2c684();
      func_0x000107c3572c();
      func_0x000107c2c68c(&lStack_110);
      lStack_108 = lStack_90;
      uStack_b0 = 0;
      uStack_a8 = 0;
      lStack_110 = (long)plVar1;
      func_0x00010067cdbc(*(undefined8 *)(unaff_x19 + 0xe0));
      (*extraout_x8_02)();
      FUN_100576684(&lStack_110);
      func_0x000107c3575c();
      goto LAB_100894824;
    }
  }
  FUN_1008948c0(&uStack_158);
LAB_100894824:
  FUN_1000ff348(alStack_148);
  func_0x00010068e834(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  FUN_100576684(&lStack_110);
  func_0x000107c3575c();
  plVar1 = alStack_148;
  FUN_1000ff348();
  func_0x000107c35748();
                    /* WARNING: Could not recover jumptable at 0x0001008948e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*plVar1 + 0x28) + 0x20))
            (*(long **)(*plVar1 + 0x28),plVar1[1],plVar1 + 2,plVar1[5],plVar1[6],plVar1[7],plVar1[8]
            );
  return;
}



/* Entry: 1008948c0; end: 1008948e3;  */

void FUN_1008948c0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008948e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*param_1 + 0x28) + 0x20))
            (*(long **)(*param_1 + 0x28),param_1[1],param_1 + 2,param_1[5],param_1[6],param_1[7],
             param_1[8]);
  return;
}



/* Entry: 1008948e4; end: 100894983;  */

void FUN_1008948e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_1008377cc(param_3);
  func_0x000107c61180();
  func_0x000107c4dcd4(uVar2);
  func_0x00010068e820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 100894984; end: 100894b3f; -[SCHTTPRequestCallback onReadCompleted:buffer:wireBytesReadSinceLast:wireBytesReadTotal:decompressedBytesTotal:bytesInBuffer:] */

void FUN_100894984(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300(uVar1);
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x000107c50384();
  func_0x000107c61180();
  func_0x000107c4dcd8();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126dfd70;
  if (*(long *)(param_1 + 8) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x000107c50664(uVar4);
    func_0x000107c61180();
    func_0x000107c5bd18();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c61178(param_4);
    func_0x000107c3eea8();
    func_0x000107c412e4();
    func_0x000107c61180();
    func_0x000107c4f9b0(*(undefined8 *)(param_1 + 0x18));
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x000107c4f418(uVar4);
    func_0x000107c61180();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    puStack_78 = &UNK_10b25afd4;
    puStack_70 = &UNK_110848ba8;
    lStack_68 = param_1;
    puStack_60 = puVar2;
    puStack_58 = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61174(puVar2);
    FUN_10007380c(uVar4,&puStack_88);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puStack_58);
    func_0x000107c61170(puStack_60);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100894b40; end: 100894c9b; -[SCRequestInfoContainer onReadCompletedTotalBodyBytesReceived:totalBodyBytesExpectedToReceive:] */

void FUN_100894b40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = param_1;
  func_0x000107c42278();
  func_0x000107c61180();
  func_0x000107c53628();
  func_0x000107c61170(lVar3);
  lVar3 = param_1;
  func_0x000107c42278(param_1);
  func_0x000107c61180();
  func_0x000107c59fa4();
  func_0x000107c61170(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(uVar1);
  func_0x000107c611a4(uVar1);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x000107c42278(param_1);
      func_0x000107c61180();
      (**(code **)(lVar3 + 0x10))(lVar3,param_1,0);
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c61144(auStack_38,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      puStack_50 = &UNK_10b267cbc;
      puStack_48 = &UNK_1108434b0;
      func_0x000107c6111c(auStack_40,auStack_38);
      FUN_10007380c(uVar2,&puStack_60);
      func_0x000107c61120(auStack_40);
      func_0x000107c61120(auStack_38);
    }
  }
  func_0x000107c611a8(uVar1);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100894c9c; end: 100894ca3; -[SCRequestInfoContainer downloadProgress] */

undefined8 FUN_100894c9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 100894ca4; end: 100895917;  */

undefined8 * FUN_100894ca4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_DAT_110ce96a8;
  plVar2 = param_1 + 3;
  if (*plVar2 != 0) {
    *plVar2 = 0;
    func_0x00010089b56c();
  }
  func_0x000100894d00(plVar2);
  *param_1 = &PTR_DAT_110cd74b8;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cd73f8;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    func_0x000107c60e10();
  }
  return param_1;
}



/* Entry: 100895918; end: 100895abf;  */

void FUN_100895918(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  long *plVar5;
  long lVar6;
  long lStack_130;
  long lStack_128;
  undefined1 auStack_120 [24];
  long alStack_108 [6];
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  long *plStack_b8;
  undefined8 uStack_68;
  
  plVar4 = &lStack_130;
  func_0x00010089124c();
  uStack_68 = extraout_x8;
  FUN_100895ac0();
  lVar1 = lStack_130;
  if (lStack_130 != 0) {
    FUN_100895ad8(lStack_130,param_2,param_3,param_4);
  }
  FUN_100670378();
  func_0x000107c60d9c();
  lVar6 = *(long *)(param_1 + 0x220);
  if ((*(long *)(param_1 + 0x2a8) == 0) || (lVar2 = lVar1, FUN_10060f0d8(), (int)lVar2 == 0)) {
    FUN_100895c04(param_1,lVar1,param_2,param_3,param_4,lVar6);
  }
  else {
    plVar5 = *(long **)(param_1 + 0x2a8);
    lStack_130 = param_1;
    lStack_128 = lVar1;
    func_0x000107c396d0(auStack_120);
    plVar3 = alStack_108;
    func_0x000107c300b8(plVar3,param_3);
    puStack_c8 = &UNK_10b4a631c;
    ppuStack_c0 = &PTR_DAT_110cee0f8;
    lStack_d8 = param_4;
    lStack_d0 = lVar6;
    func_0x000107c39714();
    lVar1 = lStack_130;
    plVar3[1] = lStack_128;
    *plVar3 = lVar1;
    func_0x000107c60c94(plVar3 + 2,auStack_120);
    func_0x000107c300b8(plVar3 + 5,alStack_108);
    lVar1 = lStack_d8;
    plVar3[0xc] = lStack_d0;
    plVar3[0xb] = lVar1;
    plStack_b8 = plVar3;
    (**(code **)(*plVar5 + 0x10))(plVar5,&puStack_c8);
    func_0x000107c39688(ppuStack_c0);
    func_0x000107c30088();
  }
  FUN_100892a50(uStack_68);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000107c39688(ppuStack_c0);
    func_0x000107c30088();
    func_0x000107c39678();
    plVar3 = (long *)((long)plVar4 + 0x2b8);
    func_0x000107c60c40();
    func_0x000107c60dc4();
    lStack_128 = *(undefined8 *)((long)plVar4 + 0x2c0);
    lStack_130 = *(long *)((long)plVar4 + 0x2b8);
    if (*(long *)((long)plVar4 + 0x2c0) != 0) {
      do {
        FUN_10060fc34();
      } while (extraout_w10 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar3);
    return;
  }
  return;
}



/* Entry: 100895ac0; end: 100895ad7;  */

void FUN_100895ac0(long param_1)

{
  long lVar1;
  int extraout_w10;
  
  lVar1 = param_1 + 0x2b8;
  func_0x000107c60c40();
  func_0x000107c60dc4();
  if (*(long *)(param_1 + 0x2c0) != 0) {
    do {
      FUN_10060fc34();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(lVar1);
  return;
}



/* Entry: 100895ad8; end: 100895b83;  */

void FUN_100895ad8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_38;
  
  if (0 < param_4) {
    func_0x000100895acc();
    if (((*(byte *)(uStack_38 + 0x10) & 1) != 0) &&
       (lVar1 = param_1, FUN_100895b84(param_1,param_3,*(undefined4 *)(uStack_38 + 0x14)),
       (int)lVar1 != 0)) {
      if (*(char *)(param_1 + 0xa0) == '\x01') {
        plVar2 = (long *)(uStack_38 + 0x18);
        func_0x000107c30118(plVar2,param_2);
        *plVar2 = *plVar2 + param_4;
      }
      else {
        *(long *)(uStack_38 + 8) = *(long *)(uStack_38 + 8) + param_4;
      }
    }
    FUN_10067046c();
  }
  return;
}



/* Entry: 100895b84; end: 100895c03;  */

byte FUN_100895b84(long param_1,long param_2,int param_3)

{
  long lVar1;
  byte bVar2;
  
  if ((param_3 - 5U < 0xfffffffd) && ((*(byte *)(param_1 + 1) & 1) != 0)) {
LAB_100895bac:
    bVar2 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar1 = param_1 + 8;
      FUN_10067e818(lVar1,param_2);
      if (lVar1 == 0) goto LAB_100895bac;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      lVar1 = param_1 + 0x30;
      func_0x000107c2ac58(lVar1,param_2 + 0x20);
      if (lVar1 == 0) goto LAB_100895bac;
    }
    bVar2 = *(byte *)(param_1 + 0x80) ^ 1 | *(byte *)(param_2 + 0x24);
  }
  return bVar2 & 1;
}



/* Entry: 100895c04; end: 100895fff;  */

void FUN_100895c04(long param_1,ulong param_2,long param_3,long *param_4,long param_5,long param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 extraout_x8;
  long lVar7;
  code *extraout_x8_00;
  code *extraout_x8_01;
  ulong uVar8;
  int extraout_w10;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  byte unaff_w25;
  byte unaff_w26;
  long lStack_b8;
  long lStack_b0;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined1 uStack_78;
  ulong uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = param_1;
  func_0x00010089124c();
  uVar3 = (uint)lVar5;
  uStack_58 = extraout_x8;
  FUN_10060fc68();
  uVar2 = param_6 == *(long *)(param_1 + 0x220);
  if ((bool)uVar2) {
    FUN_100896190();
    uVar3 = uVar3 ^ 1;
    if (param_5 < 1) {
      uVar3 = 1;
    }
    if ((uVar3 & 1) == 0) {
      lVar5 = param_1;
      func_0x000107c300a4(param_1,param_2);
      *(long *)(param_1 + 0x1f8) = lVar5 + param_5;
      *(ulong *)(param_1 + 0x200) = param_2;
    }
    lVar5 = param_1 + 0xb0;
    FUN_100896fc8();
    if (lVar5 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(ulong *)(lVar5 + 0x28);
      *(ulong *)(lVar5 + 0x28) = param_2;
    }
    uVar2 = *(char *)(param_1 + 0xac) == '\x01';
    if ((bool)uVar2) {
      lVar5 = param_1 + 0xd8;
      FUN_1008a465c(lVar5,param_3);
      if (lVar5 != 0) {
        lVar7 = *(long *)(param_1 + 0x228);
        uVar2 = *(long *)(lVar5 + 0x30) == lVar7;
        uVar9 = param_2;
        if ((bool)uVar2) {
          uVar9 = *(ulong *)(lVar5 + 0x28);
        }
        uVar8 = uVar9 & 0xffffffffffffff00;
        *(ulong *)(lVar5 + 0x28) = param_2;
        *(long *)(lVar5 + 0x30) = lVar7;
        uVar9 = uVar9 & 0xff;
        uVar1 = 1;
        if (uVar11 == 0) goto LAB_100895ce4;
        goto LAB_100895cfc;
      }
    }
    uVar9 = 0;
    uVar8 = 0;
    uVar1 = 0;
    if (uVar11 != 0) {
LAB_100895cfc:
      uStack_68 = uVar1;
      uStack_78 = 1;
      uStack_70 = uVar8 | uVar9;
      plVar10 = (long *)(param_1 + 0x110);
      uStack_90 = uVar11;
      uStack_88 = param_2;
      lStack_80 = param_5;
      while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
        (**(code **)(*(long *)plVar10[3] + 0x28))((long *)plVar10[3],param_4,&uStack_90);
      }
      uVar11 = 1000000;
      if ((long)(ulong)*(uint *)(param_1 + 0x98) <
          (long)(param_2 - *(long *)(param_1 + 0x128)) / 1000000) {
        uStack_60 = 0x100000000;
        func_0x000107c30104(&lStack_b8,&uStack_60,2);
        func_0x000107c39718();
        plVar10 = &lStack_b8;
        func_0x000107c30108();
        func_0x000107c60d9c();
        *(long **)(param_1 + 0x128) = plVar10;
        func_0x000107c30084(&lStack_b8,param_1);
        func_0x000107c39708();
        param_5 = lStack_b8;
        (*extraout_x8_00)();
        func_0x000107c396dc();
        plVar10 = *(long **)(param_1 + 0x230);
        unaff_w25 = plVar10 != (long *)0x0 && 0 < param_5;
        if (plVar10 == (long *)0x0 || 0 >= param_5) {
          plVar10 = (long *)0x0;
        }
        uStack_60 = CONCAT44(uStack_60._4_4_,1);
        lVar5 = param_1 + 0x100;
        func_0x000107c3010c(lVar5,&uStack_60);
        param_4 = plVar10;
        if (lVar5 == 0) {
          unaff_w26 = false;
          param_3 = 0;
          lStack_b8 = 0;
          lStack_b0 = 0;
        }
        else {
          param_3 = *(long *)(lVar5 + 0x18);
          lStack_b0 = *(long *)(lVar5 + 0x20);
          lStack_b8 = param_3;
          if (lStack_b0 != 0) {
            do {
              func_0x00010060f2ec();
            } while (extraout_w10 != 0);
          }
          if (param_3 == 0) {
            unaff_w26 = false;
            param_3 = 0;
          }
          else {
            func_0x000107c39708();
            (*extraout_x8_01)();
            param_4 = *(long **)(param_1 + 0x230);
            unaff_w26 = param_4 != (long *)0x0 && 0 < param_3;
            if (param_4 == (long *)0x0 || 0 >= param_3) {
              param_4 = plVar10;
            }
          }
        }
        func_0x000107c300f8(&lStack_b8);
      }
      else {
        FUN_100897478();
        param_5 = 0;
      }
      uVar2 = *(char *)(param_1 + 0xad) == '\x01';
      if (!(bool)uVar2) goto LAB_100895ebc;
      if ((bRam00000001137f6588 & 1) == 0) goto LAB_100895f60;
      goto LAB_100895e74;
    }
  }
  else {
    uVar11 = 0;
  }
LAB_100895ce4:
  FUN_100897478();
  while( true ) {
    FUN_10068ef18();
    if ((int)uVar11 != 0) {
      if (param_4 != (long *)0x0 && ((unaff_w25 ^ 0xff) & 1) == 0) {
        uStack_90 = uStack_90 & 0xffffffffffffff00;
        uStack_78 = 0;
        (**(code **)(*param_4 + 0x18))(param_4,&uStack_90,param_5,1,param_2,1);
        func_0x000107c396e8();
      }
      uVar2 = param_4 == (long *)0x0;
      if (!(bool)uVar2 && ((unaff_w26 ^ 0xff) & 1) == 0) {
        (**(code **)(*param_4 + 0x28))(param_4,1,param_3,param_2);
      }
    }
    FUN_100892a50(uStack_58);
    if ((bool)uVar2) break;
    func_0x000107c60e78();
LAB_100895f60:
    iVar4 = 0x137f6588;
    func_0x000107c60e48();
    if (iVar4 != 0) {
      ppuVar6 = &PTR_DAT_110cede50;
      FUN_1003ba188();
      ppuRam00000001137f6580 = ppuVar6;
      FUN_100600444(0x1137f6588);
    }
LAB_100895e74:
    ppuVar6 = (undefined **)0x0;
    if (uVar11 != 0) {
      ppuVar6 = (undefined **)((long)(param_2 - *(long *)(param_1 + 0x130)) / (long)uVar11);
    }
    uVar2 = ppuVar6 == ppuRam00000001137f6580;
    if ((long)ppuRam00000001137f6580 < (long)ppuVar6) {
      uStack_60 = CONCAT44(uStack_60._4_4_,4);
      func_0x000107c30104(&lStack_b8,&uStack_60,1);
      func_0x000107c39718();
      plVar10 = &lStack_b8;
      func_0x000107c30108();
      func_0x000107c60d9c();
      *(long **)(param_1 + 0x130) = plVar10;
    }
LAB_100895ebc:
    uVar11 = 1;
  }
  return;
}



/* Entry: 100896000; end: 10089618f;  */

undefined1 * FUN_100896000(void)

{
  return &stack0x00000018;
}



/* Entry: 100896190; end: 1008961ff;  */

undefined1 FUN_100896190(void)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((bRam00000001137f65e0 & 1) == 0) {
    iVar2 = 0x137f65e0;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      uVar1 = 0x10;
      FUN_1005ec950();
      uRam00000001137f6501 = uVar1;
      FUN_100600444(0x1137f65e0);
    }
  }
  return uRam00000001137f6501;
}



/* Entry: 100896200; end: 100896fc7;  */

void FUN_100896200(long *param_1)

{
  ulong uVar1;
  long in_stack_00000028;
  
  uVar1 = in_stack_00000028 >> 0x3f ^ 0x7fffffffffffffff;
  if (1 < in_stack_00000028 + 0x8000000000000001U) {
    uVar1 = in_stack_00000028 / 1000;
  }
  if ((long)uVar1 < -0x7fffffff) {
    uVar1 = 0xffffffff80000000;
  }
  if (0x7ffffffe < (long)uVar1) {
    uVar1 = 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000100160bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1,uVar1);
  return;
}



/* Entry: 100896fc8; end: 100896fd7;  */

long FUN_100896fc8(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong unaff_x20;
  long *plVar3;
  ulong uVar4;
  ulong unaff_x23;
  ulong uVar5;
  
  uVar4 = param_1[1];
  if ((uVar4 != 0) && (plVar1 = param_1 + 3, *plVar1 != 0)) {
    func_0x000100896fd0();
    FUN_100897088();
    if ((bool)in_ZR) {
      uVar5 = unaff_x20 & unaff_x23;
    }
    else {
      uVar5 = unaff_x20;
      if (uVar4 <= unaff_x20) {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = unaff_x20 / uVar4;
        }
        uVar5 = unaff_x20 - uVar5 * uVar4;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar2 = plVar3[1];
        if (uVar2 != unaff_x20) break;
        func_0x000100897098();
        if ((int)plVar1 != 0) {
          return (long)plVar3;
        }
      }
      if ((uVar4 & unaff_x23) == 0) {
        uVar2 = uVar2 & unaff_x23;
      }
      else if (uVar4 <= uVar2) {
        func_0x000107c39744();
        uVar2 = extraout_x8;
      }
    } while (uVar2 == uVar5);
  }
  return 0;
}



/* Entry: 100896fd8; end: 100897087;  */

long FUN_100896fd8(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong unaff_x20;
  long *plVar3;
  ulong uVar4;
  ulong unaff_x23;
  ulong uVar5;
  
  uVar4 = param_1[1];
  if ((uVar4 != 0) && (plVar1 = param_1 + 3, *plVar1 != 0)) {
    func_0x000100896fd0();
    FUN_100897088();
    if ((bool)in_ZR) {
      uVar5 = unaff_x20 & unaff_x23;
    }
    else {
      uVar5 = unaff_x20;
      if (uVar4 <= unaff_x20) {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = unaff_x20 / uVar4;
        }
        uVar5 = unaff_x20 - uVar5 * uVar4;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar2 = plVar3[1];
        if (uVar2 != unaff_x20) break;
        func_0x000100897098();
        if ((int)plVar1 != 0) {
          return (long)plVar3;
        }
      }
      if ((uVar4 & unaff_x23) == 0) {
        uVar2 = uVar2 & unaff_x23;
      }
      else if (uVar4 <= uVar2) {
        func_0x000107c39744();
        uVar2 = extraout_x8;
      }
    } while (uVar2 == uVar5);
  }
  return 0;
}



/* Entry: 100897088; end: 1008970b3;  */

void FUN_100897088(void)

{
  return;
}



/* Entry: 1008970b4; end: 1008971fb;  */

void FUN_1008970b4(long param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar1 = param_1 + 0x20;
    FUN_10067e8b4(lVar1,param_2);
    if ((int)lVar1 == 0) {
      return;
    }
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar1 = param_1 + 0x48;
    func_0x000107c2c974(lVar1,param_2 + 0x20);
    if ((int)lVar1 == 0) {
      return;
    }
  }
  if ((*(char *)(param_1 + 0x70) != '\x01') || ((*(byte *)(param_2 + 0x24) & 1) != 0)) {
    if (*(long *)(param_1 + 0x90) != 0) {
      lVar1 = param_1 + 0x78;
      func_0x0001072d2e68(lVar1,param_2 + 8);
      if ((int)lVar1 == 0) {
        return;
      }
    }
    if (*(long *)(param_1 + 0xd8) != 0) {
      func_0x000107c2ffec(param_1 + 0xc0,param_2 + 0x28);
    }
  }
  return;
}



/* Entry: 1008971fc; end: 10089724b;  */

undefined8 * FUN_1008971fc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [16];
  undefined8 *puStack_58;
  
  if (param_2 < (undefined8 *)0x555555555555556) {
    uVar1 = (param_1[2] - *param_1) / 0x30;
    puVar3 = (undefined8 *)(uVar1 * 2);
    if (puVar3 < param_2 || (long)puVar3 - (long)param_2 == 0) {
      puVar3 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar1) {
      puVar3 = (undefined8 *)0x555555555555555;
    }
    return puVar3;
  }
  func_0x000107c3000c();
  plVar2 = param_1;
  FUN_1008971fc();
  func_0x000100897348(auStack_68,plVar2,(param_1[1] - *param_1) / 0x30,param_1 + 2);
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  uVar6 = *param_2;
  puStack_58[1] = param_2[1];
  *puStack_58 = uVar6;
  puStack_58[3] = uVar8;
  puStack_58[2] = uVar7;
  puStack_58[5] = uVar5;
  puStack_58[4] = uVar4;
  puStack_58 = puStack_58 + 6;
  FUN_100897394(param_1,auStack_68);
  puVar3 = (undefined8 *)param_1[1];
  FUN_100897420(auStack_68);
  return puVar3;
}



/* Entry: 10089724c; end: 1008972f7;  */

long FUN_10089724c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  plVar1 = param_1;
  FUN_1008971fc(param_1,(param_1[1] - *param_1) / 0x30 + 1);
  func_0x000100897348(auStack_58,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = *param_2;
  puStack_48[1] = param_2[1];
  *puStack_48 = uVar5;
  puStack_48[3] = uVar7;
  puStack_48[2] = uVar6;
  puStack_48[5] = uVar4;
  puStack_48[4] = uVar3;
  puStack_48 = puStack_48 + 6;
  FUN_100897394(param_1,auStack_58);
  lVar2 = param_1[1];
  FUN_100897420(auStack_58);
  return lVar2;
}



/* Entry: 1008972f8; end: 100897323;  */

void FUN_1008972f8(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  FUN_1008972f8();
  return;
}



/* Entry: 100897324; end: 100897393;  */

void FUN_100897324(void)

{
  FUN_1008972f8();
  return;
}



/* Entry: 100897394; end: 100897417;  */

void FUN_100897394(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30;
  func_0x000107c610b4(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 100897418; end: 10089741f;  */

void FUN_100897418(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x30;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 100897420; end: 10089744b;  */

long * FUN_100897420(long *param_1)

{
  FUN_100897418();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10089744c; end: 100897467;  */

void FUN_10089744c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x30;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 100897468; end: 100897477;  */

void FUN_100897468(void)

{
  return;
}



/* Entry: 100897478; end: 1008974ab;  */

void FUN_100897478(void)

{
  return;
}



/* Entry: 1008974ac; end: 100897c83;  */

void FUN_1008974ac(long param_1)

{
  if (param_1 != 0) {
    func_0x000100894d00(param_1 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 100897c84; end: 100897cab;  */

void FUN_100897c84(undefined8 param_1,long *param_2)

{
  func_0x000100786a70(param_2);
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100786b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))();
    return;
  }
  return;
}



/* Entry: 100897cac; end: 100897df3;  */

void FUN_100897cac(long param_1)

{
  int *piVar1;
  long *plVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  bool bVar7;
  int *piStack_50;
  int *piStack_48;
  int *piStack_40;
  int *piStack_38;
  
  plVar2 = *(long **)(param_1 + 0x28);
  piVar4 = *(int **)(param_1 + 0x30);
  piVar3 = *(int **)(param_1 + 0x38);
  piVar5 = *(int **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (piVar4 != (int *)0x0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar7) {
        *piVar4 = *piVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  piStack_50 = piVar5;
  piStack_48 = piVar3;
  piStack_40 = piVar4;
  piStack_38 = piVar4;
  func_0x000100896c18(&piStack_38);
  if (piVar3 != (int *)0x0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = *piVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  piStack_38 = piVar3;
  func_0x0001008895ec(&piStack_38);
  if (piVar5 != (int *)0x0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar7) {
        *piVar5 = *piVar5 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  piVar1 = (int *)0x0;
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 2;
  }
  piVar3 = (int *)0x0;
  if (piVar4 != (int *)0x0) {
    piVar3 = piVar4 + 2;
  }
  piVar4 = (int *)0x0;
  if (piVar5 != (int *)0x0) {
    piVar4 = piVar5 + 2;
  }
  piStack_38 = piVar5;
  func_0x000100897dc0(&piStack_38);
  (**(code **)(*plVar2 + 0x10))(plVar2,piVar3,piVar1,piVar4);
  func_0x000100897dc0(&piStack_50);
  func_0x0001008895ec(&piStack_48);
  func_0x000100896c18(&piStack_40);
  return;
}



/* Entry: 100897df4; end: 1008980a3;  */

void FUN_100897df4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar4;
  long lVar5;
  long lStack_168;
  ulong uStack_160;
  ulong uStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 auStack_138 [128];
  undefined1 auStack_b8 [32];
  long lStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  func_0x000100897df0();
  lVar2 = param_2;
  FUN_1008980a4(param_2,0);
  param_1 = param_1 + 0x28;
  lStack_98 = lVar2;
  FUN_100687710(param_1,&lStack_98);
  if (param_1 == 0) {
    lStack_90 = lStack_98;
    lStack_88 = 0;
    FUN_1003a91d4(&UNK_10f742cfd);
    func_0x000107c35a40(auStack_138);
    func_0x000107c2c7f4(auStack_138,4);
    func_0x000107c60ca0(auStack_138);
    return;
  }
  FUN_1008980c4(auStack_138,param_2);
  if (*(char *)(param_1 + 0x2b7) < '\0') {
    if (*(long *)(param_1 + 0x2a8) == 0) goto LAB_100897eb0;
  }
  else if (*(char *)(param_1 + 0x2b7) == '\0') goto LAB_100897eb0;
  func_0x0001078bbb08(auStack_b8,param_1 + 0x2a0);
LAB_100897eb0:
  if (*(char *)(param_1 + 0xf8) == '\x01') {
    func_0x000107c610b4(param_1 + 0x58,auStack_138,0x80);
    func_0x0001002a969c(param_1 + 0xd8,auStack_b8);
  }
  else {
    FUN_100898900(param_1 + 0x58,auStack_138);
    *(undefined1 *)(param_1 + 0xf8) = 1;
  }
  FUN_100898930(&lStack_90,*(long *)(param_1 + 0x18) + 0x198);
  lVar5 = lStack_88;
  lVar2 = lStack_90;
  FUN_100898a30();
  if (lVar2 != lVar5) {
    FUN_100898930(&lStack_150,*(long *)(param_1 + 0x18) + 0x198);
    uStack_160 = 0;
    uStack_158 = 0;
    lStack_168 = 0;
    for (lVar2 = lStack_150; lVar2 != lStack_148; lVar2 = lVar2 + 0x30) {
      if (uStack_160 < uStack_158) {
        func_0x000100898b64();
        uVar4 = extraout_x8;
      }
      else {
        plVar3 = &lStack_168;
        FUN_100898a64(plVar3,(long)(uStack_160 - lStack_168) / 0x30 + 1);
        func_0x000100898b0c(&lStack_90,plVar3,(long)(uStack_160 - lStack_168) / 0x30,&uStack_158);
        func_0x000100898b64(uStack_80);
        lVar5 = lStack_88 + ((long)(uStack_160 - lStack_168) / -0x30) * 0x30;
        uStack_80 = extraout_x8_00;
        func_0x000107c610b4(lVar5);
        uVar4 = uStack_80;
        uVar1 = uStack_158;
        uStack_158 = uStack_78;
        uStack_160 = uStack_80;
        uStack_80 = lStack_168;
        uStack_78 = uVar1;
        lStack_90 = lStack_168;
        lStack_88 = lStack_168;
        lStack_168 = lVar5;
        FUN_100898b9c(&lStack_90);
      }
      uStack_160 = uVar4;
    }
    if (*(char *)(param_1 + 0x1f8) == '\x01') {
      if (*(long *)(param_1 + 0x1e0) != 0) {
        *(long *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1e0);
        func_0x000107c60e14();
        *(undefined8 *)(param_1 + 0x1e0) = 0;
        *(undefined8 *)(param_1 + 0x1e8) = 0;
        *(undefined8 *)(param_1 + 0x1f0) = 0;
      }
      func_0x000100898be4();
    }
    else {
      func_0x000100898be4();
      *(undefined1 *)(param_1 + 0x1f8) = 1;
    }
    FUN_100898c18(&lStack_168);
    FUN_100898a30(&lStack_150);
  }
  func_0x000100898c50();
  return;
}



/* Entry: 1008980a4; end: 1008980c3;  */

undefined8 FUN_1008980a4(long param_1,uint param_2)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x110) + (ulong)param_2 * 8);
}



/* Entry: 1008980c4; end: 100898283;  */

void FUN_1008980c4(undefined8 *param_1,undefined8 param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char cStack_68;
  
  func_0x0001008980b0();
  uVar1 = param_2;
  func_0x0001008982a0();
  func_0x0001008982d0();
  uVar2 = param_2;
  func_0x0001008982d4();
  FUN_1008982f0();
  uVar3 = param_2;
  FUN_1008982fc();
  FUN_1008982f0();
  uVar4 = param_2;
  func_0x000100898310();
  FUN_1008982f0();
  uVar5 = param_2;
  func_0x000100898324();
  FUN_1008982f0();
  uVar6 = param_2;
  func_0x000100898338();
  FUN_1008982f0();
  uVar7 = param_2;
  func_0x00010089834c();
  FUN_1008982f0();
  uVar8 = param_2;
  func_0x000100898360();
  FUN_1008982f0();
  uVar9 = param_2;
  func_0x000100898374();
  FUN_1008982f0();
  uVar10 = param_2;
  func_0x000100898388();
  FUN_1008982f0();
  uVar11 = param_2;
  func_0x00010089839c();
  FUN_1008982f0();
  uVar12 = param_2;
  func_0x0001008983b0();
  FUN_1008982f0();
  uVar13 = param_2;
  func_0x0001008983c4();
  func_0x0001008982d0();
  uVar14 = param_2;
  func_0x0001008983d8();
  uVar15 = param_2;
  func_0x0001008983e0();
  uVar16 = param_2;
  func_0x0001008983e8();
  func_0x0001008984a8(param_2);
  FUN_1008984e8(&uStack_80);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  param_1[8] = uVar9;
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  param_1[0xc] = uVar13;
  *(char *)(param_1 + 0xd) = (char)uVar14;
  param_1[0xe] = uVar15;
  param_1[0xf] = uVar16;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  if (cStack_68 == '\x01') {
    param_1[0x11] = uStack_78;
    param_1[0x10] = uStack_80;
    param_1[0x12] = uStack_70;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  FUN_1001148fc(&uStack_80);
  return;
}



/* Entry: 100898284; end: 1008982ef;  */

char * FUN_100898284(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_1 + 8;
  if (*param_1 == '\x01') {
    return pcVar1;
  }
  func_0x000107c2d060();
  if (*pcVar1 == '\x01') {
    pcVar2 = pcVar1 + 8;
    if (*pcVar1 == '\x01') {
      return pcVar2;
    }
    func_0x000107c2d060();
    return *(char **)pcVar2;
  }
  return (char *)0x0;
}



/* Entry: 1008982f0; end: 1008982fb;  */

undefined8 FUN_1008982f0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    return *param_1;
  }
  return 0;
}



/* Entry: 1008982fc; end: 1008984e7;  */

undefined8 * FUN_1008982fc(long param_1)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_1 + 0x20) != '\x01') {
    return (undefined8 *)0x0;
  }
  puVar1 = (undefined8 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    return puVar1;
  }
  func_0x000107c2d060();
  return (undefined8 *)*puVar1;
}



/* Entry: 1008984e8; end: 10089868b;  */

long * FUN_1008984e8(long *param_1,long *param_2,ulong *param_3)

{
  undefined1 in_ZR;
  bool bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong auStack_80 [3];
  undefined6 uStack_68;
  undefined2 uStack_62;
  undefined6 uStack_60;
  undefined8 uStack_5a;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == (long *)0x0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    plVar3 = param_2;
    func_0x0001008984d8();
    iVar2 = (int)plVar3;
    bVar1 = iVar2 == 4 || iVar2 == 0x10;
    if (iVar2 != 4 && iVar2 != 0x10) {
      FUN_1008988e8();
      if (bVar1) {
        FUN_10002b838(param_1,&UNK_10f743bc0);
        *(undefined1 *)(param_1 + 3) = 1;
        return param_1;
      }
      goto LAB_10089866c;
    }
    auStack_80[0] = auStack_80[0] & 0xffffffffffffff00;
    FUN_10002b8a8(&lStack_98,(ulong)plVar3 & 0xffffffff,auStack_80);
    for (uVar7 = 0; ((ulong)plVar3 & 0xffffffff) != uVar7; uVar7 = uVar7 + 1) {
      plVar4 = param_2;
      FUN_10089868c(param_2,uVar7);
      plVar5 = &lStack_98;
      FUN_100898698(plVar5,uVar7);
      *(char *)plVar5 = (char)plVar4;
    }
    if (lStack_90 - lStack_98 == 4) {
      lVar6 = 2;
LAB_1008985d4:
      uStack_5a = 0;
      uStack_60 = 0;
      auStack_80[1] = 0;
      auStack_80[0] = 0;
      uStack_68 = 0;
      uStack_62 = 0;
      auStack_80[2] = 0;
      func_0x000107c61040(lVar6,lStack_98,auStack_80,0x2e);
      in_ZR = lVar6 == 0;
      param_3 = (ulong *)&UNK_10f743bc0;
      if (!(bool)in_ZR) {
        param_3 = auStack_80;
      }
      FUN_10002b838(&lStack_b0);
    }
    else {
      in_ZR = lStack_90 - lStack_98 == 0x10;
      if ((bool)in_ZR) {
        lVar6 = 0x1e;
        goto LAB_1008985d4;
      }
      param_3 = (ulong *)&UNK_10f743bc0;
      FUN_10002b838(&lStack_b0);
    }
    param_1[1] = lStack_a8;
    *param_1 = lStack_b0;
    param_1[2] = lStack_a0;
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_b0 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    func_0x000107c60ca0(&lStack_b0);
    param_2 = &lStack_98;
    FUN_100100fec();
  }
  FUN_1008988e8();
  plVar3 = param_2;
  if ((bool)in_ZR) {
    return param_2;
  }
LAB_10089866c:
  func_0x000107c60e78();
  func_0x000107c35b8c();
  return (long *)(ulong)*(byte *)(*plVar3 + ((ulong)param_3 & 0xffffffff));
}



/* Entry: 10089868c; end: 100898697;  */

undefined1 FUN_10089868c(long *param_1,uint param_2)

{
  return *(undefined1 *)(*param_1 + (ulong)param_2);
}



/* Entry: 100898698; end: 1008986bb;  */

long * FUN_100898698(long *param_1,ulong param_2)

{
  if (param_2 < (ulong)(param_1[1] - *param_1)) {
    return (long *)(*param_1 + param_2);
  }
  func_0x00010740594c();
  return param_1;
}



/* Entry: 1008986bc; end: 1008988e7;  */

void FUN_1008986bc(void)

{
  return;
}



/* Entry: 1008988e8; end: 1008988ff;  */

void FUN_1008988e8(void)

{
  return;
}



/* Entry: 100898900; end: 10089892f;  */

void FUN_100898900(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006874a0();
  func_0x000107c610b4();
  FUN_10028af84(unaff_x20 + 0x80,unaff_x19 + 0x80);
  return;
}



/* Entry: 100898930; end: 1008989eb;  */

undefined8 * FUN_100898930(undefined8 *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_38 = 0;
  lVar1 = param_2[1] - *param_2;
  puStack_40 = param_1;
  if (lVar1 != 0) {
    uVar4 = lVar1 / 0x30;
    if (0x555555555555555 < uVar4) {
      func_0x000107c2c814();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008989e0);
      (*pcVar2)();
    }
    puVar3 = param_1 + 2;
    FUN_10067c738();
    *param_1 = puVar3;
    param_1[1] = puVar3;
    param_1[2] = puVar3 + uVar4 * 6;
    func_0x000107c610b8();
    param_1[1] = (long)puVar3 + lVar1;
  }
  uStack_38 = 1;
  FUN_1008989ec(&puStack_40);
  return param_1;
}



/* Entry: 1008989ec; end: 100898a17;  */

long FUN_1008989ec(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_100898a18(param_1);
  }
  return param_1;
}



/* Entry: 100898a18; end: 100898a2f;  */

void FUN_100898a18(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100898a30; end: 100898a63;  */

undefined8 FUN_100898a30(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_100898a18(&uStack_28);
  return param_1;
}



/* Entry: 100898a64; end: 100898ab3;  */

long * FUN_100898a64(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x555555555555555 < param_2) {
    func_0x000107c2c674();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x30;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x2aaaaaaaaaaaaa9 < uVar1) {
    plVar2 = (long *)0x555555555555555;
  }
  return plVar2;
}



/* Entry: 100898ab4; end: 100898ac7;  */

void FUN_100898ab4(void)

{
  return;
}



/* Entry: 100898ac8; end: 100898ae7;  */

void FUN_100898ac8(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  
  FUN_100898ab4();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  FUN_100898ac8();
  return;
}



/* Entry: 100898ae8; end: 100898b57;  */

void FUN_100898ae8(void)

{
  FUN_100898ac8();
  return;
}



/* Entry: 100898b58; end: 100898b9b;  */

void FUN_100898b58(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
  return;
}



/* Entry: 100898b9c; end: 100898bc7;  */

long * FUN_100898b9c(long *param_1)

{
  func_0x000100898b94();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100898bc8; end: 100898c17;  */

void FUN_100898bc8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x30;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 100898c18; end: 100898c43;  */

undefined8 FUN_100898c18(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000100898c00(&uStack_28);
  return param_1;
}



/* Entry: 100898c44; end: 100898c5b;  */

void FUN_100898c44(void)

{
  return;
}



/* Entry: 100898c5c; end: 100898d27;  */

long FUN_100898c5c(long param_1)

{
  func_0x000100897dc0(param_1 + 0x18);
  func_0x0001008895ec(param_1 + 0x10);
  func_0x000100896c18(param_1 + 8);
  return param_1;
}



/* Entry: 100898d28; end: 100898d33;  */

undefined8 FUN_100898d28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100898d34; end: 10089937b;  */

void FUN_100898d34(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  long *plVar5;
  undefined8 unaff_x21;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 uStack_358;
  undefined7 uStack_357;
  undefined1 uStack_328;
  ulong uStack_320;
  undefined8 uStack_318;
  undefined1 uStack_310;
  undefined1 uStack_2f0;
  undefined1 uStack_2e0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [16];
  undefined1 uStack_290;
  long lStack_288;
  long lStack_280;
  undefined1 auStack_278 [248];
  uint uStack_180;
  
  FUN_100898d28();
  lVar4 = param_1 + 0x28;
  FUN_100893294();
  lVar2 = param_1 + 0x78;
  FUN_10088a33c(lVar2,&stack0xffffffffffffff98);
  if (lVar4 == 0) {
    if (lVar2 == 0) {
      uStack_318 = 0;
      FUN_1003a91d4(&UNK_10f742c1c);
      func_0x000107c35a40(auStack_278);
      func_0x000107c2c7f4(auStack_278,1);
      func_0x000107c60ca0(auStack_278);
      return;
    }
  }
  else if (lVar2 == 0) {
    if ((*(byte *)(lVar4 + 0x1b8) & 1) != 0) {
      FUN_10088ee00(auStack_278,lVar4 + 0x40);
      FUN_1008994fc(param_1,auStack_278);
      uStack_320 = uStack_320 & 0xffffffffffffff00;
      uStack_2f0 = 0;
      func_0x0001008996d0();
      FUN_10089a920(&uStack_320);
      lVar2 = *(long *)(lVar4 + 0x18);
      lStack_280 = *(long *)(lVar4 + 0x20);
      lVar8 = lVar2;
      lStack_288 = lVar2;
      if (lStack_280 != 0) {
        do {
          FUN_10064ad10();
        } while (extraout_w10 != 0);
        lVar8 = *(long *)(lVar4 + 0x18);
      }
      FUN_100688328(*(undefined1 *)(lVar2 + 0x120));
      lVar4 = 0xc0;
      if ((bool)in_ZR) {
        lVar4 = extraout_x8;
      }
      auStack_2a0[0] = 0;
      uStack_290 = 0;
      uVar1 = *(long *)(lVar8 + 0x260) == *(long *)(lVar8 + 0x268);
      if (!(bool)uVar1) {
        uStack_2b8 = 0;
        uStack_2b0 = 0;
        uStack_2a8 = 0;
        lVar3 = lVar8;
        FUN_10089a950(lVar8);
        FUN_10089a97c(&uStack_2b8,lVar3);
        plVar5 = *(long **)(lVar8 + 0x260);
        plVar6 = *(long **)(lVar8 + 0x268);
        while( true ) {
          uVar1 = plVar5 == plVar6;
          if ((bool)uVar1) break;
          lVar8 = *plVar5;
          func_0x000100787fec(lVar8);
          FUN_10089aa04(&uStack_2b8,uStack_2b0,lVar8,lVar8 + plVar5[1]);
          plVar5 = plVar5 + 2;
        }
        FUN_10089ab7c(&uStack_320,&uStack_2b8);
        FUN_100836750(auStack_2a0,&uStack_320);
        FUN_1000ff1ac(&uStack_320);
        func_0x00010089ad48();
      }
      func_0x00010089ad50();
      FUN_10088ec4c(lStack_288);
      (*extraout_x9)(&uStack_358);
      func_0x000100686b1c(lStack_288);
      lVar8 = 0xc0;
      if ((bool)uVar1) {
        lVar8 = extraout_x9_00;
      }
      uVar7 = *(undefined8 *)(extraout_x8_00 + lVar8);
      uVar1 = *(int *)(extraout_x8_00 + 600) == 1;
      if ((bool)uVar1) {
        uStack_320 = uStack_320 & 0xffffffffffffff00;
        uStack_310 = 0;
      }
      else {
        func_0x00010089bac4();
      }
      func_0x00010089bad0(*(undefined8 *)(*(long *)CONCAT71(uStack_357,uStack_358) + 0x30),
                          (long *)CONCAT71(uStack_357,uStack_358),uVar7,auStack_278,&uStack_320);
      func_0x0001008a4050();
      func_0x00010067c8a8(&uStack_358);
      if (*(long *)(param_1 + 0x140) != 0) {
        uVar1 = *(int *)(lStack_288 + 600) == 1;
        if ((bool)uVar1) {
          uStack_320 = uStack_320 & 0xffffffffffffff00;
          uStack_310 = 0;
        }
        else {
          func_0x00010089bac4();
        }
        func_0x0001008a4050();
      }
      uStack_320 = (ulong)uStack_180 | 0x100000000;
      uStack_358 = 0;
      uStack_328 = 0;
      uStack_318 = CONCAT44(uStack_318._4_4_,*(undefined4 *)(lVar2 + lVar4 + 0x38));
      uStack_310 = 0;
      uStack_2e0 = 0;
      FUN_10089a920(&uStack_358);
      plVar5 = *(long **)(param_1 + 400);
      func_0x000100686b1c(lStack_288);
      lVar4 = 0xc0;
      if ((bool)uVar1) {
        lVar4 = extraout_x9_01;
      }
      func_0x000107c60de8(&uStack_2b8,*(undefined8 *)(extraout_x8_01 + lVar4));
      lVar4 = lStack_288;
      FUN_100686d00(lStack_288);
      (**(code **)(*plVar5 + 0x30))(plVar5,&uStack_2b8,lVar4,&uStack_320,1);
      func_0x000107c60ca0(&uStack_2b8);
      FUN_1008a4740();
      FUN_1000ff348(auStack_2a0);
      func_0x00010067c914(&lStack_288);
      FUN_1006875a4(auStack_278);
      return;
    }
    lVar4 = 0x10;
    func_0x000107c60e30();
    func_0x000107c60c20();
    func_0x000107c60e54(lVar4,PTR___ZTISt13runtime_error_110346a40,
                        PTR___ZNSt13runtime_errorD1Ev_1103461d8);
    FUN_1000ff348(auStack_2a0);
    func_0x00010067c914(&lStack_288);
    FUN_1006875a4(auStack_278);
    func_0x000107c60bd8();
    FUN_100898900();
    *(undefined1 *)(lVar4 + 0xa0) = 1;
    return;
  }
  func_0x000107c35a74(param_1,unaff_x21);
  return;
}



/* Entry: 10089937c; end: 100899397;  */

void FUN_10089937c(long param_1)

{
  FUN_100898900();
  *(undefined1 *)(param_1 + 0xa0) = 1;
  return;
}



/* Entry: 100899398; end: 1008993bb;  */

void FUN_100899398(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1008993bc; end: 1008993db;  */

void FUN_1008993bc(void)

{
  FUN_100899398();
  FUN_1008993f8();
  return;
}



/* Entry: 1008993dc; end: 1008993f7;  */

void FUN_1008993dc(long param_1)

{
  FUN_1008993bc();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1008993f8; end: 10089946b;  */

void FUN_1008993f8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_10088edf4();
    FUN_10089946c();
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      func_0x0001008994c0();
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  uStack_38 = 1;
  FUN_1008994d0(&uStack_40);
  return;
}



/* Entry: 10089946c; end: 100899497;  */

long FUN_10089946c(long param_1)

{
  undefined1 in_CY;
  
  FUN_100898ab4();
  if (!(bool)in_CY) {
    FUN_100899498();
    FUN_100898ae8();
    func_0x0001008994a4();
    return param_1;
  }
  func_0x000107c2c674();
  return param_1 + 0x10;
}



/* Entry: 100899498; end: 1008994cf;  */

long FUN_100899498(long param_1)

{
  return param_1 + 0x10;
}



/* Entry: 1008994d0; end: 1008994fb;  */

long FUN_1008994d0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000100898c00(param_1);
  }
  return param_1;
}



/* Entry: 1008994fc; end: 1008995a3;  */

void FUN_1008994fc(long *param_1,long param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  plVar4 = param_1;
  if (*(char *)(param_2 + 0x178) == '\x01') {
    func_0x00010088ae58();
    *(long **)(param_2 + 0x168) = param_3;
    plVar4 = param_3;
  }
  if ((char)param_1[0x2d] == '\x01') {
    plVar1 = (long *)*param_4;
    plVar4 = plVar1;
    if ((int)plVar1[0x15] != 7) {
      plVar4 = (long *)param_1[0x2a];
      FUN_100686d00();
      uStack_38 = *(undefined4 *)(*param_4 + 0xa8);
      uStack_34 = 0;
      lVar3 = param_4[0x36];
      plVar2 = plVar1;
      func_0x000107c2c7bc();
      (**(code **)(*plVar4 + 8))(plVar4,plVar1,&uStack_34,&uStack_38,lVar3,plVar2);
    }
  }
  FUN_10028bb78();
  *(long **)(param_2 + 8) = plVar4;
  return;
}



/* Entry: 1008995a4; end: 1008996bf;  */

undefined4 FUN_1008995a4(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x668) == '\x01') {
    func_0x000107c2e9a0(param_1);
    func_0x000100697f20(param_1);
  }
  if (0xfffffffd < *(int *)(param_1 + 0x444) - 1U) {
    *(int *)(param_1 + 0x444) = param_2;
    FUN_10022a9d0(param_1 + 0x590,param_3);
    if ((*(byte *)(param_1 + 0x689) & 1) == 0) {
      iVar1 = 0;
      if (param_2 != -3) {
        iVar1 = param_2;
      }
      func_0x000107c2e034(param_1 + 0x28,0,iVar1);
    }
  }
  if ((*(char *)(param_1 + 0x648) == '\x01') && (*(long **)(param_1 + 0x40) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x30))();
  }
  func_0x000100896590(param_1);
  return *(undefined4 *)(param_1 + 0x444);
}



/* Entry: 1008996c0; end: 1008996d7;  */

void FUN_1008996c0(void)

{
  return;
}



/* Entry: 1008996d8; end: 100899807;  */

void FUN_1008996d8(long param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar2;
  undefined1 auStack_60 [16];
  long lStack_50;
  long lStack_48;
  
  lStack_50 = *param_2;
  if (lStack_50 == 0) {
    lStack_50 = 0;
    lStack_48 = 0;
  }
  else {
    lStack_48 = param_2[1];
    if (lStack_48 != 0) {
      do {
        FUN_10064ad10();
      } while (extraout_w10 != 0);
    }
  }
  if (((*(byte *)(param_3 + 0x178) & 1) != 0) || ((*(byte *)(param_4 + 0x30) & 1) != 0)) {
    lVar1 = *(long *)(param_1 + 0x108);
    for (lVar2 = *(long *)(param_1 + 0x100); lVar2 != lVar1; lVar2 = lVar2 + 8) {
      FUN_100899808();
      if (extraout_x8 != 0) {
        do {
          FUN_10064ad10();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001006882d4();
      (*extraout_x8_00)();
      FUN_100899824(auStack_60);
    }
    lVar1 = *(long *)(param_1 + 0x108);
    for (lVar2 = *(long *)(param_1 + 0x100); lVar2 != lVar1; lVar2 = lVar2 + 8) {
      FUN_100899808();
      if (extraout_x8_01 != 0) {
        do {
          FUN_10064ad10();
        } while (extraout_w10_01 != 0);
      }
      func_0x00010088ec58();
      FUN_10078a7ac();
      FUN_100899824(auStack_60);
    }
    if (*(char *)(param_4 + 0x30) == '\x01') {
      func_0x000107c30160(*param_2 + 0x278,param_4);
    }
  }
  func_0x00010067c914(&lStack_50);
  return;
}



/* Entry: 100899808; end: 100899823;  */

undefined8 FUN_100899808(void)

{
  undefined8 *unaff_x23;
  
  return *unaff_x23;
}



/* Entry: 100899824; end: 100899847;  */

void FUN_100899824(long param_1)

{
  func_0x00010064bbbc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100899848; end: 100899aab;  */

/* WARNING: Removing unreachable block (ram,0x0001008999b4) */
/* WARNING: Removing unreachable block (ram,0x0001008999c0) */
/* WARNING: Removing unreachable block (ram,0x0001008999c4) */
/* WARNING: Removing unreachable block (ram,0x0001008999cc) */
/* WARNING: Removing unreachable block (ram,0x0001008999ec) */
/* WARNING: Removing unreachable block (ram,0x0001008999f0) */
/* WARNING: Removing unreachable block (ram,0x0001008999f8) */

void FUN_100899848(long param_1,undefined8 *param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int unaff_w23;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [88];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*(long *)*param_2 + 0x10))(auStack_b8);
  puVar5 = auStack_b0;
  FUN_1005d480c(puVar5,&DAT_10f7410a6,0);
  FUN_1005ae430();
  if (((puVar5 == (undefined1 *)0xffffffffffffffff) || ((*(byte *)(param_4 + 6) & 1) != 0)) ||
     ((*(byte *)(param_3 + 0x178) & 1) == 0)) {
LAB_100899a14:
    uVar4 = *(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58;
    if ((bool)uVar4) {
      return;
    }
    func_0x000107c60e78();
    func_0x000107c35694();
    func_0x000107c2c564(&uStack_f0);
    func_0x000107c2c56c(&uStack_c8);
    func_0x000107c356a0();
    func_0x000100698828();
    func_0x000100697e2c();
    if (!(bool)uVar4) {
      func_0x000107c35f48(0x58,0x1133705a8,&UNK_10f74a917);
    }
    func_0x000100899b1c(*(undefined8 *)(*param_4 + 0x40));
    (*extraout_x8_00)();
    func_0x000100697f04();
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  uStack_c8 = uVar1;
  lStack_c0 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c3569c();
    } while (extraout_w10 != 0);
  }
  param_4 = *(long **)(param_3 + 0x118);
  plVar3 = *(long **)(param_3 + 0x120);
  while( true ) {
    if (param_4 == plVar3) goto LAB_100899a0c;
    func_0x000107c60dac(auStack_b8);
    func_0x000107c2c55c(param_4,&PTR_DAT_110cd1d90,auStack_b8);
    func_0x000107c356a4();
    if (unaff_w23 != 0) break;
    if (*(char *)(param_1 + 0x18) == '\x01') {
      func_0x000107c60dac(auStack_b8);
      func_0x000107c2c55c(param_4,&PTR_DAT_110cd1d98,auStack_b8);
      func_0x000107c356a4();
    }
    param_4 = param_4 + 6;
  }
  uStack_f0 = uVar1;
  lStack_e8 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c3569c();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107c356a8();
  func_0x000107c356b0(&UNK_10b2d5920);
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3569c();
    } while (extraout_w10_01 != 0);
  }
  func_0x000107c35698();
  func_0x000107c356ac();
  func_0x000107c35694();
  func_0x000107c2c560(&uStack_f0);
LAB_100899a0c:
  func_0x000107c2c56c();
  goto LAB_100899a14;
}



/* Entry: 100899aac; end: 10089a91f;  */

void FUN_100899aac(void)

{
  undefined1 in_ZR;
  code *extraout_x8;
  long *unaff_x20;
  
  func_0x000100698828();
  func_0x000100697e2c();
  if (!(bool)in_ZR) {
    func_0x000107c35f48(0x58,0x1133705a8,&UNK_10f74a917);
  }
  func_0x000100899b1c(*(undefined8 *)(*unaff_x20 + 0x40));
  (*extraout_x8)();
  func_0x000100697f04();
  return;
}



/* Entry: 10089a920; end: 10089a94f;  */

long FUN_10089a920(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107c60ca0(param_1 + 8);
  }
  return param_1;
}



/* Entry: 10089a950; end: 10089a97b;  */

long FUN_10089a950(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  for (lVar2 = *(long *)(param_1 + 0x260); lVar2 != *(long *)(param_1 + 0x268); lVar2 = lVar2 + 0x10
      ) {
    lVar1 = *(long *)(lVar2 + 8) + lVar1;
  }
  return lVar1;
}



/* Entry: 10089a97c; end: 10089a9fb;  */

void FUN_10089a97c(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long *plStack_28;
  
  plVar1 = param_1 + 2;
  lVar2 = *param_1;
  if ((ulong)(*plVar1 - lVar2) < param_2) {
    if ((long)param_2 < 0) {
      func_0x000104bd9bc0();
      func_0x00010533c554();
      func_0x000107c60bd8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
                (&stack0xffffffffffffffe8);
      return;
    }
    lVar3 = param_1[1];
    plStack_28 = plVar1;
    func_0x00010002b988();
    lStack_40 = (long)plVar1 + (lVar3 - lVar2);
    lStack_30 = (long)plVar1 + param_2;
    plStack_48 = plVar1;
    lStack_38 = lStack_40;
    FUN_1001e7b2c(param_1,&plStack_48);
    FUN_1001e7bb8(&plStack_48);
  }
  return;
}



/* Entry: 10089a9fc; end: 10089aa03;  */

void FUN_10089a9fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000038);
  return;
}



/* Entry: 10089aa04; end: 10089aa0b;  */

undefined1 * FUN_10089aa04(long *param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar4 = param_4 - (long)param_3;
  if (0 < lVar4) {
    plVar3 = param_1 + 2;
    lVar5 = param_1[1];
    if (*plVar3 - lVar5 < lVar4) {
      plVar2 = param_1;
      FUN_1001e7ae4(param_1,(lVar4 - *param_1) + lVar5);
      lVar5 = *param_1;
      plStack_78 = (long *)0x0;
      plStack_58 = plVar3;
      if (plVar2 != (long *)0x0) {
        func_0x00010002b988();
        plStack_78 = plVar3;
      }
      puStack_70 = (undefined1 *)((long)plStack_78 + ((long)param_2 - lVar5));
      lStack_60 = (long)plStack_78 + (long)plVar2;
      puStack_68 = puStack_70 + lVar4;
      puVar1 = puStack_70;
      for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar1 = *param_3;
        puVar1 = puVar1 + 1;
        param_3 = param_3 + 1;
      }
      func_0x000104bd9b18(param_1,&plStack_78,param_2);
      func_0x0001073bf078();
      FUN_1001e7bb8();
    }
    else {
      lVar6 = lVar5 - (long)param_2;
      if (lVar6 < lVar4) {
        param_4 = param_4 - (long)(param_3 + lVar6);
        if (param_4 != 0) {
          func_0x000107c610b8(lVar5,param_3 + lVar6,param_4);
        }
        param_1[1] = lVar5 + param_4;
        if (0 < lVar6) {
          func_0x0001073bf044();
          puVar1 = param_2;
          for (; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar1 = *param_3;
            param_3 = param_3 + 1;
            puVar1 = puVar1 + 1;
          }
        }
      }
      else {
        func_0x0001073bf044();
        puVar1 = param_2;
        for (; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar1 = *param_3;
          param_3 = param_3 + 1;
          puVar1 = puVar1 + 1;
        }
      }
    }
  }
  return param_2;
}



/* Entry: 10089aa0c; end: 10089ab5f;  */

undefined1 *
FUN_10089aa0c(long *param_1,undefined1 *param_2,undefined1 *param_3,long param_4,long param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  long lStack_60;
  long *plStack_58;
  
  if (0 < param_5) {
    plVar3 = param_1 + 2;
    lVar4 = param_1[1];
    if (*plVar3 - lVar4 < param_5) {
      plVar2 = param_1;
      FUN_1001e7ae4(param_1,(param_5 - *param_1) + lVar4);
      lVar4 = *param_1;
      plStack_78 = (long *)0x0;
      plStack_58 = plVar3;
      if (plVar2 != (long *)0x0) {
        func_0x00010002b988();
        plStack_78 = plVar3;
      }
      puStack_70 = (undefined1 *)((long)plStack_78 + ((long)param_2 - lVar4));
      lStack_60 = (long)plStack_78 + (long)plVar2;
      puStack_68 = puStack_70 + param_5;
      puVar1 = puStack_70;
      for (; param_5 != 0; param_5 = param_5 + -1) {
        *puVar1 = *param_3;
        puVar1 = puVar1 + 1;
        param_3 = param_3 + 1;
      }
      func_0x000104bd9b18(param_1,&plStack_78,param_2);
      func_0x0001073bf078();
      FUN_1001e7bb8();
    }
    else {
      lVar5 = lVar4 - (long)param_2;
      if (lVar5 < param_5) {
        param_4 = param_4 - (long)(param_3 + lVar5);
        if (param_4 != 0) {
          func_0x000107c610b8(lVar4,param_3 + lVar5,param_4);
        }
        param_1[1] = lVar4 + param_4;
        if (0 < lVar5) {
          func_0x0001073bf044();
          puVar1 = param_2;
          for (; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar1 = *param_3;
            puVar1 = puVar1 + 1;
            param_3 = param_3 + 1;
          }
        }
      }
      else {
        func_0x0001073bf044();
        puVar1 = param_2;
        for (; param_5 != 0; param_5 = param_5 + -1) {
          *puVar1 = *param_3;
          puVar1 = puVar1 + 1;
          param_3 = param_3 + 1;
        }
      }
    }
  }
  return param_2;
}



/* Entry: 10089ab60; end: 10089ab7b;  */

void FUN_10089ab60(void)

{
  FUN_1000feff0();
  FUN_10089abbc();
  return;
}



/* Entry: 10089ab7c; end: 10089abbb;  */

undefined8 * FUN_10089ab7c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10089ab60(auStack_30,param_2);
  func_0x00010089ad34();
  func_0x00010089ad40();
  return param_1;
}



/* Entry: 10089abbc; end: 10089ac1b;  */

void FUN_10089abbc(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long *unaff_x19;
  long lStack_30;
  
  FUN_1000ff05c();
  func_0x0001000ff074();
  FUN_10089ac1c(lStack_30,param_2);
  *unaff_x19 = lStack_30 + 0x18;
  unaff_x19[1] = lStack_30;
  func_0x0001000ff160();
  func_0x0001000ff178();
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3a968();
  func_0x000107c3a990();
  FUN_1000ff104();
  FUN_10089ac44();
  return;
}



/* Entry: 10089ac1c; end: 10089ac43;  */

void FUN_10089ac1c(void)

{
  FUN_1000ff104();
  FUN_10089ac44();
  return;
}



/* Entry: 10089ac44; end: 10089ac7f;  */

void FUN_10089ac44(undefined8 *param_1,long *param_2)

{
  undefined8 extraout_x8;
  
  FUN_1000ff150();
  *param_1 = extraout_x8;
  if (*param_2 == param_2[1]) {
    func_0x000100836704();
  }
  else {
    FUN_10089ac80();
  }
  return;
}



/* Entry: 10089ac80; end: 10089ad0b;  */

void FUN_10089ac80(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = param_1;
  FUN_10089ad0c();
  lVar3 = *param_2;
  *plVar1 = lVar3;
  lVar4 = param_2[1];
  plVar1[2] = param_2[2];
  plVar1[1] = lVar4;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_100836740();
  func_0x000107c6073c();
  lVar2 = 0;
  func_0x000107c60774(0,lVar3,lVar4 - lVar3,plVar1);
  param_1[1] = lVar2;
  func_0x000107c607f0(plVar1);
  param_1[2] = 0;
  return;
}



/* Entry: 10089ad0c; end: 10089ad57;  */

void FUN_10089ad0c(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  
  uStack0000000000000040 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x18);
  return;
}



/* Entry: 10089ad58; end: 10089b18b;  */

void FUN_10089ad58(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  long extraout_x10;
  long lVar6;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong extraout_x13_01;
  ulong extraout_x14;
  long extraout_x14_00;
  long extraout_x14_01;
  long *plVar7;
  ulong uVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  
  plVar2 = (long *)(param_1 + 0x28);
  uStack_50 = param_2;
  FUN_100687710(plVar2,&uStack_50);
  plVar7 = plVar2 + 3;
  *(undefined1 *)(*plVar7 + 0x58) = 0;
  uVar8 = *(ulong *)(param_1 + 0xa8);
  uVar3 = param_1 + 0xb8;
  func_0x000100685b68(uVar3,plVar7);
  if ((uVar8 & uVar8 - 1) == 0) {
    uVar4 = uVar3 & uVar8 - 1;
  }
  else {
    uVar4 = uVar3;
    if (uVar8 <= uVar3) {
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = uVar3 / uVar8;
      }
      uVar4 = uVar3 - uVar4 * uVar8;
    }
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0xa0) + uVar4 * 8);
  do {
    do {
      plVar5 = (long *)*plVar5;
    } while (plVar5[1] != uVar3);
  } while (plVar5[2] != *plVar7);
  uVar8 = *(ulong *)(param_1 + 0xa8);
  if ((uVar8 & uVar8 - 1) == 0) {
    uVar3 = uVar8 - 1 & uVar3;
  }
  else if (uVar8 <= uVar3) {
    uVar4 = 0;
    if (uVar8 != 0) {
      uVar4 = uVar3 / uVar8;
    }
    uVar3 = uVar3 - uVar4 * uVar8;
  }
  do {
    FUN_10089b18c();
  } while (extraout_x12 != extraout_x8);
  plStack_40 = (long *)(param_1 + 0xb0);
  uVar1 = true;
  lVar6 = extraout_x10;
  if (extraout_x11 == plStack_40) {
LAB_10089ae74:
    if (extraout_x10 == 0) {
LAB_10089aea8:
      *(undefined8 *)(extraout_x9 + uVar3 * 8) = 0;
      lVar6 = *extraout_x8;
      goto LAB_10089aeb0;
    }
    uVar8 = *(ulong *)(extraout_x10 + 8);
    if ((extraout_x13 & extraout_x14) == 0) {
      uVar4 = uVar8 & extraout_x14;
    }
    else {
      uVar4 = uVar8;
      if (extraout_x13 <= uVar8) {
        uVar4 = 0;
        if (extraout_x13 != 0) {
          uVar4 = uVar8 / extraout_x13;
        }
        uVar4 = uVar8 - uVar4 * extraout_x13;
      }
    }
    uVar1 = uVar4 == uVar3;
    if (!(bool)uVar1) goto LAB_10089aea8;
LAB_10089aeb8:
    if ((extraout_x13 & extraout_x14) == 0) {
      uVar8 = uVar8 & extraout_x14;
    }
    else if (extraout_x13 <= uVar8) {
      uVar4 = 0;
      if (extraout_x13 != 0) {
        uVar4 = uVar8 / extraout_x13;
      }
      uVar8 = uVar8 - uVar4 * extraout_x13;
    }
    uVar1 = uVar8 == uVar3;
    if (!(bool)uVar1) {
      *(long **)(extraout_x9 + uVar8 * 8) = extraout_x11;
      lVar6 = *extraout_x8;
    }
  }
  else {
    uVar8 = extraout_x11[1];
    if ((extraout_x13 & extraout_x14) == 0) {
      uVar8 = uVar8 & extraout_x14;
    }
    else if (extraout_x13 <= uVar8) {
      uVar4 = 0;
      if (extraout_x13 != 0) {
        uVar4 = uVar8 / extraout_x13;
      }
      uVar8 = uVar8 - uVar4 * extraout_x13;
    }
    uVar1 = uVar8 == uVar3;
    if (!(bool)uVar1) goto LAB_10089ae74;
LAB_10089aeb0:
    if (lVar6 != 0) {
      uVar8 = *(ulong *)(lVar6 + 8);
      goto LAB_10089aeb8;
    }
  }
  *extraout_x11 = lVar6;
  *extraout_x8 = 0;
  *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + -1;
  func_0x00010089b198();
  FUN_100686ae0();
  func_0x000100686b1c(*plVar7);
  lVar6 = 0xc0;
  if ((bool)uVar1) {
    lVar6 = extraout_x9_00;
  }
  uStack_58 = *(undefined8 *)(extraout_x8_00 + lVar6);
  plVar5 = (long *)(param_1 + 0x50);
  FUN_10089b1f4(plVar5,&uStack_58);
  do {
    FUN_10089b18c();
  } while (extraout_x12_00 != plVar5);
  plStack_40 = (long *)(param_1 + 0x60);
  lVar6 = extraout_x8_01;
  if (extraout_x11_00 == plStack_40) {
LAB_10089afa4:
    if (extraout_x8_01 == 0) {
LAB_10089afd8:
      *(undefined8 *)(extraout_x14_00 + extraout_x9_01 * 8) = 0;
      lVar6 = *plVar5;
      goto LAB_10089afe0;
    }
    uVar3 = *(ulong *)(extraout_x8_01 + 8);
    if ((extraout_x10_00 & extraout_x13_00) == 0) {
      uVar8 = uVar3 & extraout_x13_00;
    }
    else {
      uVar8 = uVar3;
      if (extraout_x10_00 <= uVar3) {
        uVar8 = 0;
        if (extraout_x10_00 != 0) {
          uVar8 = uVar3 / extraout_x10_00;
        }
        uVar8 = uVar3 - uVar8 * extraout_x10_00;
      }
    }
    if (uVar8 != extraout_x9_01) goto LAB_10089afd8;
LAB_10089afe8:
    if ((extraout_x10_00 & extraout_x13_00) == 0) {
      uVar3 = uVar3 & extraout_x13_00;
    }
    else if (extraout_x10_00 <= uVar3) {
      uVar8 = 0;
      if (extraout_x10_00 != 0) {
        uVar8 = uVar3 / extraout_x10_00;
      }
      uVar3 = uVar3 - uVar8 * extraout_x10_00;
    }
    if (uVar3 != extraout_x9_01) {
      *(long **)(extraout_x14_00 + uVar3 * 8) = extraout_x11_00;
      lVar6 = *plVar5;
    }
  }
  else {
    uVar3 = extraout_x11_00[1];
    if ((extraout_x10_00 & extraout_x13_00) == 0) {
      uVar3 = uVar3 & extraout_x13_00;
    }
    else if (extraout_x10_00 <= uVar3) {
      uVar8 = 0;
      if (extraout_x10_00 != 0) {
        uVar8 = uVar3 / extraout_x10_00;
      }
      uVar3 = uVar3 - uVar8 * extraout_x10_00;
    }
    if (uVar3 != extraout_x9_01) goto LAB_10089afa4;
LAB_10089afe0:
    if (lVar6 != 0) {
      uVar3 = *(ulong *)(lVar6 + 8);
      goto LAB_10089afe8;
    }
  }
  *extraout_x11_00 = lVar6;
  *plVar5 = 0;
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -1;
  plStack_48 = plVar5;
  func_0x00010089b198();
  FUN_100686cb8();
  if (-1 < (int)plVar2[0x4a]) {
    func_0x000107c60f10();
  }
  if ((*(byte *)(param_1 + 0x138) & 1) == 0) {
    func_0x0001008a484c(*plVar7 + 0x260);
  }
  if ((char)plVar2[0x4e] == '\x01') {
    FUN_10089b2d0(plVar2 + 0x4c);
  }
  do {
    FUN_10089b18c();
  } while (extraout_x12_01 != plVar2);
  plStack_40 = (long *)(param_1 + 0x38);
  lVar6 = extraout_x8_02;
  if (extraout_x11_01 == plStack_40) {
LAB_10089b0e4:
    if (extraout_x8_02 == 0) {
LAB_10089b118:
      *(undefined8 *)(extraout_x14_01 + extraout_x9_02 * 8) = 0;
      lVar6 = *plVar2;
      goto LAB_10089b120;
    }
    uVar3 = *(ulong *)(extraout_x8_02 + 8);
    if ((extraout_x10_01 & extraout_x13_01) == 0) {
      uVar8 = uVar3 & extraout_x13_01;
    }
    else {
      uVar8 = uVar3;
      if (extraout_x10_01 <= uVar3) {
        uVar8 = 0;
        if (extraout_x10_01 != 0) {
          uVar8 = uVar3 / extraout_x10_01;
        }
        uVar8 = uVar3 - uVar8 * extraout_x10_01;
      }
    }
    if (uVar8 != extraout_x9_02) goto LAB_10089b118;
  }
  else {
    uVar3 = extraout_x11_01[1];
    if ((extraout_x10_01 & extraout_x13_01) == 0) {
      uVar3 = uVar3 & extraout_x13_01;
    }
    else if (extraout_x10_01 <= uVar3) {
      uVar8 = 0;
      if (extraout_x10_01 != 0) {
        uVar8 = uVar3 / extraout_x10_01;
      }
      uVar3 = uVar3 - uVar8 * extraout_x10_01;
    }
    if (uVar3 != extraout_x9_02) goto LAB_10089b0e4;
LAB_10089b120:
    if (lVar6 == 0) goto LAB_10089b158;
    uVar3 = *(ulong *)(lVar6 + 8);
  }
  if ((extraout_x10_01 & extraout_x13_01) == 0) {
    uVar3 = uVar3 & extraout_x13_01;
  }
  else if (extraout_x10_01 <= uVar3) {
    uVar8 = 0;
    if (extraout_x10_01 != 0) {
      uVar8 = uVar3 / extraout_x10_01;
    }
    uVar3 = uVar3 - uVar8 * extraout_x10_01;
  }
  if (uVar3 != extraout_x9_02) {
    *(long **)(extraout_x14_01 + uVar3 * 8) = extraout_x11_01;
    lVar6 = *plVar2;
  }
LAB_10089b158:
  *extraout_x11_01 = lVar6;
  *plVar2 = 0;
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
  plStack_48 = plVar2;
  func_0x00010089b198();
  FUN_1006876c4();
  return;
}



/* Entry: 10089b18c; end: 10089b1af;  */

void FUN_10089b18c(void)

{
  return;
}



/* Entry: 10089b1b0; end: 10089b1f3;  */

void FUN_10089b1b0(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010067c914(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10089b1f4; end: 10089b29f;  */

long FUN_10089b1f4(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10089b2a0; end: 10089b2cf;  */

void FUN_10089b2a0(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010089b290();
  if (param_1 != 0) {
    FUN_10089b308();
    unaff_x19[1] = param_1;
    if (param_1 != 0) {
      *unaff_x19 = *unaff_x20;
    }
  }
  return;
}



/* Entry: 10089b2d0; end: 10089b307;  */

void FUN_10089b2d0(void)

{
  undefined1 *apuStack_20 [2];
  
  FUN_10089b2a0(apuStack_20);
  if (apuStack_20[0] != (undefined1 *)0x0) {
    *apuStack_20[0] = 1;
  }
  func_0x000100688f50(apuStack_20);
  return;
}



/* Entry: 10089b308; end: 10089b317;  */

void FUN_10089b308(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count4lockEv_110346650)();
  return;
}



/* Entry: 10089b318; end: 10089b35f;  */

long FUN_10089b318(long param_1)

{
  func_0x000107c60ca0(param_1 + 0x288);
  FUN_1006899b8(param_1 + 0x248);
  FUN_1006875a4(param_1 + 0x28);
  FUN_100683394(param_1 + 0x18);
  FUN_100894084(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}


