/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073abd04; end: 1073abd2b;  */

void FUN_1073abd04(undefined8 param_1)

{
  undefined8 *unaff_x21;
  
  func_0x0001073acbf4();
  func_0x0001073acf40();
  FUN_1073abd2c();
  *unaff_x21 = param_1;
  return;
}



/* Entry: 1073abd2c; end: 1073abd4f;  */

void FUN_1073abd2c(void)

{
  func_0x0001073acfb8();
  func_0x0001073acd04(&PTR_FUN_1109aac28);
  return;
}



/* Entry: 1073abd50; end: 1073abd53;  */

undefined8 * FUN_1073abd50(undefined8 *param_1)

{
  func_0x0001073acf38(&PTR_FUN_1109aac28);
  *param_1 = &PTR_DAT_110880018;
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 1073abd54; end: 1073abd67;  */

void FUN_1073abd54(void)

{
  FUN_1073abd70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073abd68; end: 1073abd6f;  */

void FUN_1073abd68(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 in_stack_ffffffffffffffd8;
  
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined1 *)(lVar3 + 0x1c0) = 0;
  if ((param_2 == 0) || (*(int *)(lVar3 + 0x148) != 0)) {
    *(undefined4 *)(lVar3 + 0x148) = 2;
    if (*(int *)(lVar3 + 0x148) != 3) {
      if (*(char *)(lVar3 + 0x1c0) == '\x01') {
        lVar3 = *(long *)(lVar3 + 0x18);
        (**(code **)(*plRam0000000113815c70 + 0x80))(plRam0000000113815c70,lVar3 + 0x18);
        if (*(long *)(lVar3 + 0x58) == 0) {
          *(undefined1 *)(lVar3 + 0x60) = 1;
        }
        else {
          func_0x000104ae3294(lVar3);
          func_0x000104ad8de8(*(undefined8 *)(lVar3 + 0x58),0);
        }
        (**(code **)(*plRam0000000113815c70 + 0x88))(plRam0000000113815c70,lVar3 + 0x18);
        return;
      }
      FUN_1073aa310(lVar3);
      if (((*(byte *)(lVar3 + 0x1c1) & 1) == 0) &&
         (iVar1 = *(int *)(lVar3 + 0x148), *(undefined4 *)(lVar3 + 0x148) = 2, iVar1 != 0)) {
        func_0x0001073ace24();
        func_0x0001073ad040();
        FUN_1073aa4b8();
        func_0x0001073acdb0();
        lVar2 = *(long *)(lVar3 + 0x20);
        func_0x000104c015d0(lVar2,in_stack_ffffffffffffffd8);
        *(undefined1 *)(lVar3 + 0x1c1) = 1;
        func_0x0001073aced0();
        if (lVar2 != 0) {
          func_0x0001073acbd8();
        }
      }
    }
  }
  else {
    *(undefined4 *)(lVar3 + 0x148) = 1;
    FUN_1073aa044();
    func_0x0001073acdd0(*(long *)(param_1 + 0x20));
    FUN_1073aade4();
    func_0x0001073ad040();
    FUN_1073abe54();
    func_0x0001073acdb0();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    func_0x000104c01620(lVar3,unaff_x19 + 0x180,in_stack_ffffffffffffffd8);
    func_0x0001073aced0();
    if (lVar3 != 0) {
      func_0x0001073acbd8();
    }
  }
  return;
}



/* Entry: 1073abd70; end: 1073abdeb;  */

undefined8 * FUN_1073abd70(undefined8 *param_1)

{
  func_0x0001073acf38(&PTR_FUN_1109aac28);
  *param_1 = &PTR_DAT_110880018;
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 1073abdec; end: 1073abe53;  */

void FUN_1073abdec(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 uStack_28;
  
  func_0x0001073acdd0();
  FUN_1073aade4();
  func_0x0001073ad040();
  FUN_1073abe54();
  func_0x0001073acdb0();
  lVar1 = *(long *)(unaff_x19 + 0x20);
  func_0x000104c01620(lVar1,unaff_x19 + 0x180,uStack_28);
  func_0x0001073aced0();
  if (lVar1 != 0) {
    func_0x0001073acbd8();
  }
  return;
}



/* Entry: 1073abe54; end: 1073abe7b;  */

void FUN_1073abe54(undefined8 param_1)

{
  undefined8 *unaff_x21;
  
  func_0x0001073acbf4();
  func_0x0001073acf40();
  FUN_1073abe7c();
  *unaff_x21 = param_1;
  return;
}



/* Entry: 1073abe7c; end: 1073abe9f;  */

void FUN_1073abe7c(void)

{
  func_0x0001073acfb8();
  func_0x0001073acd04(&PTR_FUN_1109aac80);
  return;
}



/* Entry: 1073abea0; end: 1073abea3;  */

undefined8 * FUN_1073abea0(undefined8 *param_1)

{
  func_0x0001073acf38(&PTR_FUN_1109aac80);
  *param_1 = &PTR_DAT_110880018;
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 1073abea4; end: 1073abeb7;  */

void FUN_1073abea4(void)

{
  FUN_1073abec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073abeb8; end: 1073abebf;  */

void FUN_1073abeb8(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 in_stack_ffffffffffffffd8;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    if (*(int *)(lVar3 + 0x148) != 3) {
      if (*(char *)(lVar3 + 0x1c0) == '\x01') {
        lVar3 = *(long *)(lVar3 + 0x18);
        (**(code **)(*plRam0000000113815c70 + 0x80))(plRam0000000113815c70,lVar3 + 0x18);
        if (*(long *)(lVar3 + 0x58) == 0) {
          *(undefined1 *)(lVar3 + 0x60) = 1;
        }
        else {
          func_0x000104ae3294(lVar3);
          func_0x000104ad8de8(*(undefined8 *)(lVar3 + 0x58),0);
        }
        (**(code **)(*plRam0000000113815c70 + 0x88))(plRam0000000113815c70,lVar3 + 0x18);
        return;
      }
      FUN_1073aa310(lVar3);
      if (((*(byte *)(lVar3 + 0x1c1) & 1) == 0) &&
         (iVar1 = *(int *)(lVar3 + 0x148), *(undefined4 *)(lVar3 + 0x148) = 2, iVar1 != 0)) {
        func_0x0001073ace24();
        func_0x0001073ad040();
        FUN_1073aa4b8();
        func_0x0001073acdb0();
        lVar2 = *(long *)(lVar3 + 0x20);
        func_0x000104c015d0(lVar2,in_stack_ffffffffffffffd8);
        *(undefined1 *)(lVar3 + 0x1c1) = 1;
        func_0x0001073aced0();
        if (lVar2 != 0) {
          func_0x0001073acbd8();
        }
      }
    }
  }
  else {
    (**(code **)(**(long **)(lVar3 + 0x138) + 0x38))
              (*(long **)(lVar3 + 0x138),lVar3 + 0x28,lVar3 + 0x180);
    func_0x0001073acdd0(*(long *)(param_1 + 0x20));
    FUN_1073aade4();
    func_0x0001073ad040();
    FUN_1073abe54();
    func_0x0001073acdb0();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    func_0x000104c01620(lVar3,unaff_x19 + 0x180,in_stack_ffffffffffffffd8);
    func_0x0001073aced0();
    if (lVar3 != 0) {
      func_0x0001073acbd8();
    }
  }
  return;
}



/* Entry: 1073abec0; end: 1073abf63;  */

undefined8 * FUN_1073abec0(undefined8 *param_1)

{
  func_0x0001073acf38(&PTR_FUN_1109aac80);
  *param_1 = &PTR_DAT_110880018;
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 1073abf64; end: 1073abf7b;  */

void FUN_1073abf64(double param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_238 [24];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [192];
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
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [24];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar5 = *(long **)(param_2 + 0x10);
  plStack_58 = plVar5 + 0x2b;
  plVar4 = plVar5 + 0x2f;
  plStack_50 = plVar4;
  plStack_48 = plVar5 + 9;
  func_0x00010007847c(auStack_70,"grpc::grpcService::makeGRPCCall");
  if (*(char *)(*plVar5 + 0x34) == '\x01') {
    if ((char)plVar5[0x52] == '\x01') {
      func_0x0001073acf98(plVar5 + 0x4f);
    }
    else {
      func_0x0001073ad0a0();
    }
    func_0x00010002b838(&uStack_100,"Service disposed");
    func_0x0001073ace48(auStack_1f0);
    func_0x0001073ace18();
  }
  else {
    func_0x000100467380(0);
    func_0x00010046778c();
    func_0x000100467768();
    func_0x0001004a2704(plVar5 + 0x4f,(long)param_1);
    iVar2 = (int)plVar5 + 0x10;
    func_0x0001004a4bf8();
    if (iVar2 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_118,plVar5 + 0x4f);
      func_0x00010046985c(auStack_1f0,*(long *)(*plVar5 + 0x18) + 0x80);
      func_0x00010048a5b8(&uStack_130,auStack_1f0);
      uVar1 = *(undefined4 *)(*plVar5 + 0xa0);
      func_0x00010002b838(&uStack_208,"unknown");
      func_0x00010002b838(&uStack_220,"");
      uStack_f0 = uStack_108;
      uStack_88 = uStack_210;
      uStack_f8 = uStack_110;
      uStack_100 = uStack_118;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_e0 = uStack_128;
      uStack_e8 = uStack_130;
      uStack_d8 = uStack_120;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_c0 = uStack_200;
      uStack_c8 = uStack_208;
      uStack_b8 = uStack_1f8;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_b0 = 0;
      uStack_9c = 0xffffffff;
      uStack_a4 = 0xffffffffffffffff;
      uStack_ac = 0xffffffffffffffff;
      uStack_90 = uStack_218;
      uStack_98 = uStack_220;
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_80 = 0;
      uStack_d0 = uVar1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_220);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_208);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_130);
      func_0x000100469c34(auStack_1f0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_118);
      plVar4 = plVar5 + 2;
      func_0x00010b281b1c(plVar4);
      if ((char)plVar5[0x52] == '\x01') {
        func_0x00010b281ce0(plVar5 + 0x4f,plVar4);
        func_0x0001073ad0e8();
        func_0x00010b281d00();
      }
      else {
        func_0x00010b281cf0(plVar5 + 0x4f,plVar4);
        func_0x0001073ad0e8();
        func_0x00010b281fa0();
      }
      func_0x0001073acf04();
      func_0x000105394120(auStack_1f0,plVar4,auStack_238);
      func_0x0001073ace18();
      func_0x0001073acf68();
      func_0x0001073acd8c();
      func_0x000100bf5670(&uStack_100);
      goto LAB_1073ab744;
    }
    if (*(long *)(*plVar5 + 0x68) != 0) {
      plVar3 = (long *)plVar5[9];
      (**(code **)(*plVar3 + 0x20))(plVar3,plVar4);
      FUN_1073ab8d4(plVar5 + 0xb,plVar5 + 2,(long)param_1,plVar4);
      goto LAB_1073ab744;
    }
    if ((char)plVar5[0x52] == '\x01') {
      func_0x0001073acf98(plVar5 + 0x4f);
    }
    else {
      func_0x0001073ad0a0();
    }
    func_0x00010002b838(&uStack_100,"Resources aren\'t ready");
    func_0x0001073ace48(auStack_1f0);
    func_0x0001073ace18();
  }
  func_0x0001073acf68();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_100);
LAB_1073ab744:
  func_0x000100078bd8(auStack_70);
  return;
}



/* Entry: 1073abf7c; end: 1073abf9b;  */

void FUN_1073abf7c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1073ac158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073abf9c; end: 1073abf9f;  */

void FUN_1073abf9c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1073abfa0; end: 1073abfdf;  */

void FUN_1073abfa0(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073ad000();
  uVar1 = 0x2a8;
  __Znwm();
  FUN_1073abfe0();
  *(undefined8 *)(unaff_x19 + 8) = uVar1;
  return;
}



/* Entry: 1073abfe0; end: 1073ac0db;  */

void FUN_1073abfe0(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 in_register_00005008;
  undefined8 uVar3;
  
  func_0x0001073acd94();
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x0001073acbe4();
    } while (extraout_w10 != 0);
  }
  func_0x0001004a2448(unaff_x19 + 0x10,param_3 + 0x10);
  lVar1 = *(long *)(param_3 + 0x50);
  uVar2 = *(undefined8 *)(param_3 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(param_3 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001073acbe4();
    } while (extraout_w10_00 != 0);
  }
  FUN_1073ac0dc(unaff_x19 + 0x58,param_3 + 0x58);
  func_0x000100629ca8(unaff_x19 + 0x158,param_3 + 0x158);
  func_0x0001006099c0(unaff_x19 + 0x178,param_3 + 0x178);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x278,param_3 + 0x278);
  uVar3 = *(undefined8 *)(param_3 + 0x298);
  uVar2 = *(undefined8 *)(param_3 + 0x290);
  *(undefined8 *)(unaff_x19 + 0x2a0) = *(undefined8 *)(param_3 + 0x2a0);
  *(undefined8 *)(unaff_x19 + 0x298) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x290) = uVar2;
  return;
}



/* Entry: 1073ac0dc; end: 1073ac157;  */

void FUN_1073ac0dc(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 in_register_00005008;
  
  func_0x0001073acd94();
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x0001073acbe4();
    } while (extraout_w10 != 0);
  }
  func_0x0001073ac59c(unaff_x19 + 0x10,param_3 + 0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0xd8,param_3 + 0xd8);
  lVar1 = *(long *)(param_3 + 0xf8);
  uVar2 = *(undefined8 *)(param_3 + 0xf0);
  *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(param_3 + 0xf8);
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001073acbe4();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1073ac158; end: 1073ac1a3;  */

undefined8 FUN_1073ac158(long param_1)

{
  undefined8 unaff_x19;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x278);
  func_0x00010060867c(param_1 + 0x178);
  func_0x00010061cd18(param_1 + 0x158);
  func_0x0001073ac51c(param_1 + 0x58);
  func_0x000100601d1c(param_1 + 0x48);
  func_0x0001004a21bc(param_1 + 0x10);
  func_0x000100450bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1073ac1a4; end: 1073ac1bf;  */

void FUN_1073ac1a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109aab98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073ac1c0; end: 1073ac21f;  */

void FUN_1073ac1c0(long param_1)

{
  func_0x0001073acf2c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073ac220; end: 1073ac223;  */

undefined8 * FUN_1073ac220(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109aacf0;
  func_0x0001073ac578(param_1 + 1);
  return param_1;
}



/* Entry: 1073ac224; end: 1073ac237;  */

void FUN_1073ac224(void)

{
  FUN_1073ac31c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073ac238; end: 1073ac27f;  */

void FUN_1073ac238(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_1109aacf0;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001073acbe4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1073ac280; end: 1073ac2d7;  */

void FUN_1073ac280(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109aacf0;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001073acbe4(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1073ac2d8; end: 1073ac30f;  */

long FUN_1073ac2d8(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109aad60);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073ac310; end: 1073ac31b;  */

undefined ** FUN_1073ac310(void)

{
  return &PTR_DAT_1109aad60;
}



/* Entry: 1073ac31c; end: 1073ac347;  */

undefined8 * FUN_1073ac31c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109aacf0;
  func_0x0001073ac578(param_1 + 1);
  return param_1;
}



/* Entry: 1073ac348; end: 1073ac34f;  */

void FUN_1073ac348(long *param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x148) == 3) {
    return;
  }
  FUN_1073abbf8(lVar1 + 0x28);
  *(undefined4 *)(lVar1 + 0x148) = 3;
  FUN_1073aa310(lVar1);
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(lVar1 + 0x138) + 0x30);
  func_0x0001073acf40();
                    /* WARNING: Could not recover jumptable at 0x0001073abb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1073ac350; end: 1073ac37b;  */

undefined8 * FUN_1073ac350(undefined8 *param_1)

{
  *param_1 = FUN_1073ac37c;
  FUN_1073ac3d8(param_1 + 1);
  return param_1;
}



/* Entry: 1073ac37c; end: 1073ac383;  */

void FUN_1073ac37c(long param_1)

{
  long lVar1;
  undefined1 auStack_58 [56];
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010539501c(auStack_58);
  FUN_1073ab8d4(lVar1,auStack_58,0,lVar1 + 0x100);
  func_0x0001004a21bc(auStack_58);
  return;
}



/* Entry: 1073ac384; end: 1073ac3d7;  */

void FUN_1073ac384(long param_1)

{
  undefined1 auStack_58 [56];
  
  func_0x00010539501c(auStack_58);
  FUN_1073ab8d4(param_1,auStack_58,0,param_1 + 0x100);
  func_0x0001004a21bc(auStack_58);
  return;
}



/* Entry: 1073ac3d8; end: 1073ac3e7;  */

void FUN_1073ac3d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073ad000(param_1,&PTR_FUN_1109aad70,param_2);
  uVar1 = 0x200;
  __Znwm();
  FUN_1073ac44c();
  *(undefined8 *)(unaff_x19 + 8) = uVar1;
  return;
}



/* Entry: 1073ac3e8; end: 1073ac407;  */

void FUN_1073ac3e8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001073ac550();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073ac408; end: 1073ac40b;  */

void FUN_1073ac408(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1073ac40c; end: 1073ac44b;  */

void FUN_1073ac40c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073ad000();
  uVar1 = 0x200;
  __Znwm();
  FUN_1073ac44c();
  *(undefined8 *)(unaff_x19 + 8) = uVar1;
  return;
}



/* Entry: 1073ac44c; end: 1073ac487;  */

void FUN_1073ac44c(long param_1)

{
  long unaff_x20;
  
  func_0x0001073acddc();
  FUN_1073ac488();
  func_0x0001006099c0(param_1 + 0x100,unaff_x20 + 0x100);
  return;
}



/* Entry: 1073ac488; end: 1073ac4f3;  */

void FUN_1073ac488(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001073acddc();
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1073ac4f4(param_1 + 2,param_2 + 2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x1b,unaff_x20 + 0xd8);
  lVar1 = *(long *)(unaff_x20 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001073acbe4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1073ac4f4; end: 1073ac5e7;  */

undefined8 * FUN_1073ac4f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  func_0x000100609284(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1073ac5e8; end: 1073ac64f;  */

void FUN_1073ac5e8(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x0001073acc08();
  func_0x0001073ad11c();
  FUN_1073ac650();
  FUN_1073ac694(uStack_30,param_2);
  func_0x0001073acd74();
  func_0x0001073ac918();
  func_0x0001073acb9c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073acda4();
  func_0x0001073ac918();
  func_0x0001073acc78();
  func_0x0001073ad160();
  FUN_1073ac670();
  func_0x0001073ad140();
  return;
}



/* Entry: 1073ac650; end: 1073ac66f;  */

void FUN_1073ac650(void)

{
  func_0x0001073ad160();
  FUN_1073ac670();
  func_0x0001073ad140();
  return;
}



/* Entry: 1073ac670; end: 1073ac693;  */

undefined8 * FUN_1073ac670(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x555555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109aad98;
  FUN_1073ac6ec(param_1 + 3);
  return param_1;
}



/* Entry: 1073ac694; end: 1073ac6cb;  */

undefined8 * FUN_1073ac694(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109aad98;
  FUN_1073ac6ec(param_1 + 3);
  return param_1;
}



/* Entry: 1073ac6cc; end: 1073ac6cf;  */

void FUN_1073ac6cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109aad98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073ac6d0; end: 1073ac6e3;  */

void FUN_1073ac6d0(void)

{
  FUN_1073ac90c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073ac6e4; end: 1073ac6eb;  */

void FUN_1073ac6e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073accb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1073ac6ec; end: 1073ac757;  */

undefined8 * FUN_1073ac6ec(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_30 = *param_2;
  lStack_28 = param_2[1];
  if (lStack_28 == 0) {
    func_0x0001073ad05c();
  }
  else {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x0001073ad05c();
    do {
      func_0x0001073acbe4();
    } while (extraout_w10 != 0);
  }
  func_0x000100601d1c(&uStack_30);
  *param_1 = &PTR_FUN_1109aade8;
  return param_1;
}



/* Entry: 1073ac758; end: 1073ac75b;  */

undefined8 * FUN_1073ac758(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ccd430;
  func_0x000100601d1c(param_1 + 1);
  return param_1;
}



/* Entry: 1073ac75c; end: 1073ac76f;  */

void FUN_1073ac75c(void)

{
  func_0x0001053ad6dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073ac770; end: 1073ac873;  */

void FUN_1073ac770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int extraout_w10;
  long unaff_x20;
  long *plStack_158;
  long lStack_150;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  func_0x0001073acec4();
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  ppuStack_58 = &PTR_DAT_110d22dd8;
  func_0x00010084f180(param_3,&ppuStack_58);
  if ((int)param_3 == 0) {
    func_0x0001073ace84();
    func_0x0001073acccc();
    func_0x0001073acf04();
    func_0x0001073acc38();
    func_0x0001073ad0d0();
    func_0x0001073acc94();
    func_0x0001073acdc8();
    func_0x0001073acd8c();
    func_0x0001073ace7c();
  }
  else {
    plVar1 = *(long **)(unaff_x20 + 8);
    lStack_150 = *(long *)(unaff_x20 + 0x10);
    plStack_158 = plVar1;
    if (lStack_150 != 0) {
      do {
        func_0x0001073acbe4();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar1 + 0x38))();
    func_0x000104bfebf4(&plStack_158);
  }
  func_0x00010b5d0bb8(&ppuStack_58);
  return;
}



/* Entry: 1073ac874; end: 1073ac8bf;  */

void FUN_1073ac874(long *param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x0001073ad108();
  if (extraout_x8 != 0) {
    do {
      func_0x0001073acbe4();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*param_1 + 0x40))();
  func_0x000104bfebf4(auStack_30);
  return;
}



/* Entry: 1073ac8c0; end: 1073ac90b;  */

void FUN_1073ac8c0(long *param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x0001073ad108();
  if (extraout_x8 != 0) {
    do {
      func_0x0001073acbe4();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*param_1 + 0x48))();
  func_0x000104bfebf4(auStack_30);
  return;
}



/* Entry: 1073ac90c; end: 1073ac927;  */

void FUN_1073ac90c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109aad98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073ac928; end: 1073ac94b;  */

void FUN_1073ac928(long param_1)

{
  func_0x0001073acf2c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073ac94c; end: 1073ac9b3;  */

void FUN_1073ac94c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x0001073acc08();
  func_0x0001073ad11c();
  FUN_1073ac9b4();
  FUN_1073ac9f8(uStack_30,param_2);
  func_0x0001073acd74();
  func_0x0001073acb68();
  func_0x0001073acb9c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073acda4();
  func_0x0001073acb68();
  func_0x0001073acc78();
  func_0x0001073ad160();
  FUN_1073ac9d4();
  func_0x0001073ad140();
  return;
}



/* Entry: 1073ac9b4; end: 1073ac9d3;  */

void FUN_1073ac9b4(void)

{
  func_0x0001073ad160();
  FUN_1073ac9d4();
  func_0x0001073ad140();
  return;
}



/* Entry: 1073ac9d4; end: 1073ac9f7;  */

void FUN_1073ac9d4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  if ((undefined8 *)0x555555555555555 < param_2) {
    func_0x000104bd35f4();
    *param_1 = &PTR_DAT_1109aae60;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = &PTR_DAT_1109aaeb0;
    lVar1 = param_2[1];
    uVar2 = *param_2;
    param_1[5] = param_2[1];
    param_1[4] = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x0001073acbe4();
      } while (extraout_w10 != 0);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x30);
  return;
}



/* Entry: 1073ac9f8; end: 1073aca3b;  */

void FUN_1073ac9f8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_1109aae60;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_1109aaeb0;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[5] = param_2[1];
  param_1[4] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001073acbe4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1073aca3c; end: 1073aca4f;  */

void FUN_1073aca3c(void)

{
  FUN_1073acb5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073aca50; end: 1073aca5b;  */

void FUN_1073aca50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073accb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1073aca5c; end: 1073aca6f;  */

void FUN_1073aca5c(void)

{
  FUN_1073acb30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073aca70; end: 1073acb1f;  */

void FUN_1073aca70(long param_1,undefined8 param_2)

{
  code *extraout_x8;
  code *extraout_x8_00;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x0001005ff708(param_2,&uStack_28);
  if ((int)param_2 == 0) {
    func_0x0001073acf04();
    func_0x0001073acc38();
    func_0x0001073ad050();
    func_0x0001073ad194();
    (*extraout_x8_00)();
    func_0x0001073acdc8();
    func_0x0001073acd8c();
  }
  else {
    func_0x0001073ad0fc(*(undefined8 *)(param_1 + 8));
    (*extraout_x8)();
  }
  func_0x000100601aa4(&uStack_28);
  return;
}



/* Entry: 1073acb20; end: 1073acb2f;  */

void FUN_1073acb20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073acb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  return;
}



/* Entry: 1073acb30; end: 1073acb5b;  */

undefined8 * FUN_1073acb30(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109aaeb0;
  func_0x0001073ac5c4(param_1 + 1);
  return param_1;
}



/* Entry: 1073acb5c; end: 1073acb77;  */

void FUN_1073acb5c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109aae60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073acb78; end: 1073acb9b;  */

void FUN_1073acb78(long param_1)

{
  func_0x0001073acf2c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073acb9c; end: 1073ad19f;  */

void FUN_1073acb9c(void)

{
  return;
}



/* Entry: 1073ad1a0; end: 1073ad2df;  */

undefined8 * FUN_1073ad1a0(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x0001073ad228(auStack_40,param_2);
  FUN_1073ad7c8(auStack_30,auStack_40);
  func_0x0001074e3a1c(param_1,auStack_30);
  FUN_1073ad37c(auStack_30);
  func_0x0001073ad3a0(auStack_40);
  *param_1 = &PTR_FUN_1109aaf08;
  *(undefined1 *)((long)param_1 + 0x59) = 0;
  lVar2 = *(long *)(param_1[3] + 0x170);
  param_1[0xc] = *(undefined8 *)(param_1[3] + 0x168);
  param_1[0xd] = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return param_1;
}



/* Entry: 1073ad2e0; end: 1073ad2e3;  */

undefined8 * FUN_1073ad2e0(undefined8 *param_1)

{
  func_0x0001073ad824(param_1 + 0xc);
  *param_1 = &PTR_DAT_1109b5ab0;
  FUN_1073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  FUN_1073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 1073ad2e4; end: 1073ad2f7;  */

void FUN_1073ad2e4(void)

{
  func_0x0001073ad2b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073ad2f8; end: 1073ad37b;  */

void FUN_1073ad2f8(void)

{
  return;
}



/* Entry: 1073ad37c; end: 1073ad3c3;  */

void FUN_1073ad37c(long param_1)

{
  func_0x0001073ad858();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073ad3c4; end: 1073ad41f;  */

void FUN_1073ad3c4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1[2] != 0) {
    plVar3 = (long *)param_1[1];
    plVar1 = *(long **)(*param_1 + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_1[2] = 0;
    while (plVar3 != param_1) {
      plVar3 = (long *)plVar3[1];
      FUN_1073ad420(param_1);
    }
  }
  return;
}



/* Entry: 1073ad420; end: 1073ad4e7;  */

void FUN_1073ad420(undefined8 param_1,long param_2)

{
  func_0x0001073ad448(param_2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1073ad4e8; end: 1073ad50b;  */

void FUN_1073ad4e8(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1073ad50c(&uStack_11,param_1);
  return;
}



/* Entry: 1073ad50c; end: 1073ad5ab;  */

undefined1 * FUN_1073ad50c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1073ad5ac(auStack_40,1);
  FUN_1073ad604(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x0001073ad7b8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001073ad7b8(auStack_40);
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = param_3;
  puVar3 = puVar2;
  FUN_1073ad5d4();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 1073ad5ac; end: 1073ad5d3;  */

long FUN_1073ad5ac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1073ad5d4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1073ad5d4; end: 1073ad603;  */

undefined8 * FUN_1073ad5d4(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x492492492492493) {
    puVar1 = (undefined8 *)(param_2 * 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109ab030;
  param_1[1] = 0;
  FUN_1073ad670(param_1 + 3);
  return param_1;
}



/* Entry: 1073ad604; end: 1073ad64b;  */

undefined8 * FUN_1073ad604(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109ab030;
  param_1[1] = 0;
  FUN_1073ad670(param_1 + 3);
  return param_1;
}



/* Entry: 1073ad64c; end: 1073ad64f;  */

void FUN_1073ad64c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ab030;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073ad650; end: 1073ad663;  */

void FUN_1073ad650(void)

{
  FUN_1073ad7a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073ad664; end: 1073ad66f;  */

undefined8 * FUN_1073ad664(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 1073ad670; end: 1073ad6b7;  */

undefined8 FUN_1073ad670(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1073ad6b8(param_1,&uStack_30);
  func_0x0001073ad86c();
  return param_1;
}



/* Entry: 1073ad6b8; end: 1073ad71b;  */

undefined8 * FUN_1073ad6b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = &PTR_DAT_1109ab0d0;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  func_0x0001073ad4c4(&uStack_30);
  func_0x0001073ad86c();
  *param_1 = &PTR_FUN_1109ab080;
  return param_1;
}



/* Entry: 1073ad71c; end: 1073ad71f;  */

undefined8 * FUN_1073ad71c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 1073ad720; end: 1073ad733;  */

void FUN_1073ad720(void)

{
  FUN_1073ad750();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073ad734; end: 1073ad73b;  */

undefined8 FUN_1073ad734(void)

{
  return 0;
}



/* Entry: 1073ad73c; end: 1073ad74f;  */

void FUN_1073ad73c(void)

{
  FUN_1073ad750();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073ad750; end: 1073ad7a3;  */

undefined8 * FUN_1073ad750(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 1073ad7a4; end: 1073ad7c7;  */

void FUN_1073ad7a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ab030;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073ad7c8; end: 1073ad847;  */

undefined8 * FUN_1073ad7c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001073ad800(&uStack_30);
  return param_1;
}



/* Entry: 1073ad848; end: 1073ad88b;  */

void FUN_1073ad848(void)

{
  return;
}



/* Entry: 1073ad88c; end: 1073ad8bf;  */

undefined8 * FUN_1073ad88c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  func_0x0001073adddc();
  FUN_1073ade1c();
  func_0x0001073ade10();
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  uStack_28 = param_2;
  __Znwm();
  *puVar1 = &PTR_FUN_1109ab0f8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  uStack_28 = 0;
  func_0x0001073ade10();
  FUN_1073adaac();
  func_0x0001073add98(&uStack_28);
  return param_1;
}



/* Entry: 1073ad8c0; end: 1073ad8fb;  */

undefined8 * FUN_1073ad8c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  func_0x0001073adddc();
  FUN_1073ade50();
  func_0x0001073ade10();
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_1109ab0f8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  func_0x0001073ade10();
  FUN_1073adaac();
  func_0x0001073add98(&stack0xffffffffffffffd8);
  return param_1;
}



/* Entry: 1073ad8fc; end: 1073ad933;  */

long * FUN_1073ad8fc(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = param_1;
  func_0x0001073adddc();
  FUN_1073adee8();
  *param_1 = (long)plVar1;
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_1109ab0f8;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = plVar1;
  param_1[1] = (long)puVar2;
  func_0x0001073ade10();
  FUN_1073adaac();
  func_0x0001073add98(&stack0xffffffffffffffd8);
  return param_1;
}



/* Entry: 1073ad934; end: 1073ad9ef;  */

/* WARNING: Removing unreachable block (ram,0x0001073ad9e4) */

undefined1 * FUN_1073ad934(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_e0 [21];
  long lStack_38;
  
  puVar2 = auStack_e0;
  puVar3 = auStack_e0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x0001073adddc();
  func_0x000107273e00(auStack_e0,param_3);
  FUN_1073ade94(puVar1,param_2,auStack_e0);
  func_0x0001073ade10();
  FUN_1073ada3c();
  func_0x000107273f24();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    func_0x000107273f24();
    func_0x0001073addd4();
    FUN_1073ae110(*puVar3);
    FUN_1073ae0c8(*puVar3);
    func_0x00010724ce4c();
    if (puVar3 != (undefined8 *)0x0) {
      func_0x0001000df548();
    }
    return (undefined1 *)puVar2;
  }
  return param_1;
}



/* Entry: 1073ad9f0; end: 1073ada23;  */

undefined8 FUN_1073ad9f0(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  FUN_1073ae110(*param_1);
  FUN_1073ae0c8(*param_1);
  func_0x00010724ce4c();
  if (param_1 != (undefined8 *)0x0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1073ada24; end: 1073ada3b;  */

void FUN_1073ada24(undefined8 *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined8 *extraout_x8_01;
  int extraout_w10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 auStack_1e8 [3];
  undefined1 auStack_1d0 [168];
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [208];
  undefined8 uStack_38;
  
  func_0x0001073aef80(*param_1);
  func_0x0001073aef8c();
  uStack_38 = extraout_x8;
  func_0x0001073af024();
  func_0x0001072ab574(unaff_x19 + 0x110);
  (**(code **)(*unaff_x20 + 0x20))(auStack_1e8);
  FUN_10738debc(unaff_x19 + 0x10,auStack_1e8);
  func_0x00010725b1d4(auStack_1e8);
  func_0x0001073af038();
  if (((extraout_x8_00 & 1) == 0) && (*(long *)(unaff_x19 + 0x1c0) != 0)) {
    func_0x0001073aeffc(auStack_1e8);
    plVar1 = (long *)(unaff_x19 + 0x10);
    func_0x0001072842e4();
    if ((int)plVar1 != 0) {
      func_0x0001073af00c();
      func_0x0001073af01c(&uStack_210);
      lStack_1f8 = lStack_208;
      uStack_200 = uStack_210;
      if (lStack_208 != 0) {
        do {
          func_0x0001073aef38();
        } while (extraout_w10 != 0);
      }
      FUN_1073ae088(auStack_128,&uStack_200);
      func_0x0001073aefec(auStack_1d0);
      func_0x0001073aefe0(auStack_108);
      (**(code **)(*plVar1 + 0x18))(plVar1,auStack_108);
      func_0x000107273efc(auStack_108);
      func_0x0001073aef50();
      func_0x0001073aef48();
      func_0x0001073aef58();
      func_0x0001073aef20();
    }
    func_0x000107270b00(auStack_1e8);
  }
  func_0x0001073aef30();
  func_0x0001073aef28();
  func_0x0001073aef00(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107273efc(auStack_108);
    func_0x0001073aef50();
    func_0x0001073aef48();
    func_0x0001073aef58();
    func_0x0001073aef20();
    puVar2 = auStack_1e8;
    func_0x000107270b00();
    func_0x0001073aef30();
    func_0x0001073aef28();
    func_0x0001073aeef8();
    pcStack_218 = FUN_1073ae088;
    uVar4 = puVar2[1];
    uVar3 = *puVar2;
    puStack_220 = &stack0xfffffffffffffff0;
    *puVar2 = 0;
    puVar2[1] = 0;
    *extraout_x8_01 = &PTR_SUB_1109ab170;
    extraout_x8_01[2] = uVar4;
    extraout_x8_01[1] = uVar3;
    uStack_230 = 0;
    uStack_228 = 0;
    extraout_x8_01[3] = extraout_x8_01;
    func_0x00010724ae28(&uStack_230);
    return;
  }
  return;
}



/* Entry: 1073ada3c; end: 1073adaab;  */

undefined8 * FUN_1073ada3c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  uStack_28 = param_2;
  __Znwm();
  *puVar1 = &PTR_FUN_1109ab0f8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  uStack_28 = 0;
  func_0x0001073ade10();
  FUN_1073adaac();
  func_0x0001073add98(&uStack_28);
  return param_1;
}


