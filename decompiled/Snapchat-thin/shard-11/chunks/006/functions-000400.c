/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108743f8c; end: 108744337;  */

void FUN_108743f8c(long *param_1,long *param_2,long *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long lVar7;
  long *plVar8;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long alStack_70 [3];
  undefined8 uStack_58;
  
  puVar3 = (undefined8 *)0xd0;
  __Znwm();
  puVar10 = puVar3 + 0xd;
  *(undefined1 *)puVar10 = *param_4;
  puVar3[0x13] = *param_2;
  *param_2 = 0;
  plVar11 = puVar3 + 0x14;
  *plVar11 = *param_3;
  *puVar3 = FUN_108744fc0;
  puVar3[1] = FUN_108745148;
  *param_3 = 0;
  uVar14 = *(undefined8 *)(param_4 + 8);
  puVar3[0xf] = *(undefined8 *)(param_4 + 0x10);
  puVar3[0xe] = uVar14;
  *(undefined8 *)(param_4 + 8) = 0;
  *(undefined8 *)(param_4 + 0x10) = 0;
  puVar4 = (undefined8 *)0xf0;
  __Znwm();
  puVar5 = puVar4;
  func_0x000108745498();
  *puVar5 = &PTR_FUN_110a6a5d8;
  *(undefined1 *)(puVar5 + 0x13) = 0;
  *(undefined1 *)(puVar5 + 0x1d) = 0;
  alStack_70[0] = 0;
  uStack_58 = 0;
  func_0x000107c27f98(&uStack_58);
  func_0x000107c27f9c(alStack_70);
  plVar12 = puVar3 + 3;
  *plVar12 = (long)puVar4;
  puVar3[2] = puVar4;
  func_0x0001087456ec();
  alStack_70[0] = puVar3[2];
  if (alStack_70[0] != 0) {
    do {
      func_0x000108745398();
    } while (extraout_w10 != 0);
  }
  *param_1 = alStack_70[0];
  func_0x0001087456e0();
  lVar7 = puVar3[0x13];
  puVar3[0x17] = lVar7;
  if (lVar7 != 0) {
    do {
      func_0x000108745398();
    } while (extraout_w10_00 != 0);
  }
  puVar3[0x18] = *plVar11;
  if (*plVar11 != 0) {
    do {
      func_0x000108745398();
    } while (extraout_w10_01 != 0);
  }
  func_0x000107c278b8(puVar3 + 0x10,&UNK_10f4b2b68);
  plVar6 = puVar3 + 0x17;
  FUN_1087447c0(puVar3 + 0x16,plVar6,puVar3 + 0x18,puVar3 + 0x10);
  puVar3[0x15] = puVar3[0x16];
  do {
    func_0x000108745398();
  } while (extraout_w10_02 != 0);
  func_0x000108745534(puVar3[0x15]);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar3 + 0x19) = 0;
    lVar7 = puVar3[0x15];
    func_0x0001087455c8();
    lVar13 = *plVar6;
    if (lVar13 == 0) {
      func_0x000107c3a5c0();
      lVar13 = *plVar6;
    }
    plVar8 = (long *)(lVar7 + 0x10);
    do {
      if (*plVar8 == 0) {
        func_0x0001087453d8();
        plVar8 = extraout_x8_00;
        uVar2 = extraout_w10_04;
        uVar9 = extraout_w11_00;
      }
      else {
        func_0x0001087455e8();
        plVar8 = extraout_x8;
        uVar2 = extraout_w10_03;
        uVar9 = extraout_w11;
      }
      if ((uVar9 & 1) != 0) {
        func_0x000108745680();
        if ((bool)in_ZR) {
          func_0x000108745408();
          uVar1 = extraout_w8;
          if ((bool)in_CY) {
            uVar1 = extraout_w9;
          }
          func_0x000108745670();
          *(undefined1 *)plVar6 = uVar1;
          func_0x000108745500(0);
          *(long **)(lVar7 + 0x90) = plVar6;
        }
        func_0x000108745690();
        *(long *)(extraout_x8_01 + 0x20) = lVar13;
        func_0x0001087454f0(*(undefined8 *)(lVar7 + 0x90));
        *(undefined8 *)(lVar7 + 0x10) = 0;
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  FUN_108743d18(puVar3 + 0x15);
  func_0x000108745588();
  func_0x0001087455c0();
  func_0x000108745558();
  func_0x000108745568();
  func_0x000108745548();
  func_0x000108745540();
  *(undefined1 *)puVar10 = 1;
  lVar7 = *plVar12;
  do {
    alStack_70[0] = 0;
    lVar13 = lVar7 + 0x10;
    func_0x0001087453a8(lVar13,alStack_70);
    if ((int)lVar13 != 0) {
      func_0x000108744c4c(lVar7 + 0x98);
      func_0x0001087454e8(lVar7 + 0x98);
      *(undefined1 *)(lVar7 + 0xe0) = 1;
      func_0x000108745420();
      break;
    }
  } while (((uint)alStack_70[0] >> 1 & 1) == 0);
  func_0x000108745478(plVar12);
  func_0x000108745444();
  func_0x0001087453e8();
  FUN_108743ab4(puVar10);
  func_0x000107c27f9c(plVar11);
  func_0x000108745614();
  func_0x000108745418();
  return;
}



/* Entry: 108744338; end: 10874437f;  */

void FUN_108744338(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xd0;
  __Znwm();
  func_0x000108745498();
  *puVar1 = &PTR_FUN_110a6a500;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x19) = 0;
  func_0x0001087455d8();
  func_0x000108745708();
  return;
}



/* Entry: 108744380; end: 108744383;  */

undefined8 * FUN_108744380(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a500;
  if (*(char *)(param_1 + 0x19) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x15);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108744384; end: 108744397;  */

void FUN_108744384(void)

{
  FUN_108744398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108744398; end: 1087443d3;  */

undefined8 * FUN_108744398(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a500;
  if (*(char *)(param_1 + 0x19) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x15);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087443d4; end: 10874441b;  */

void FUN_1087443d4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xe8;
  __Znwm();
  func_0x000108745498();
  *puVar1 = &PTR_FUN_110a6a540;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  func_0x0001087455d8();
  func_0x000108745708();
  return;
}



/* Entry: 10874441c; end: 10874441f;  */

undefined8 * FUN_10874441c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a540;
  func_0x000105c40fa0(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108744420; end: 108744433;  */

void FUN_108744420(void)

{
  FUN_108744434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108744434; end: 10874445f;  */

undefined8 * FUN_108744434(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a540;
  func_0x000105c40fa0(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108744460; end: 1087445a7;  */

void FUN_108744460(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lVar2;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  
  uStack_a0 = param_2;
  lStack_98 = param_3;
  if (param_3 != 0) {
    do {
      func_0x000108745514();
    } while (extraout_w10 != 0);
    do {
      func_0x000108745514();
    } while (extraout_w10_00 != 0);
  }
  uStack_90 = param_2;
  lStack_88 = param_3;
  func_0x0001052a460c(auStack_80,&uStack_90);
  lVar2 = *param_1;
  do {
    uStack_38 = 0;
    lVar1 = lVar2 + 0x10;
    func_0x0001087453a8(lVar1,&uStack_38);
    if ((int)lVar1 != 0) {
      FUN_10874463c(lVar2 + 0x98);
      func_0x000105c41300(lVar2 + 0x98,auStack_80);
      func_0x0001087454c8();
      break;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  func_0x0001052a4808(auStack_80);
  func_0x0001052a4560(&uStack_90);
  func_0x0001052a4560(&uStack_a0);
  func_0x000107c27b68(param_1[1]);
  return;
}



/* Entry: 1087445a8; end: 1087445ab;  */

undefined8 * FUN_1087445a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a580;
  FUN_108744660(param_1 + 1);
  return param_1;
}



/* Entry: 1087445ac; end: 1087445bf;  */

void FUN_1087445ac(void)

{
  FUN_108744610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087445c0; end: 10874460f;  */

void FUN_1087445c0(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x000108745514();
    } while (extraout_w10 != 0);
  }
  FUN_108744460(param_1 + 8);
  func_0x000108745750();
  return;
}



/* Entry: 108744610; end: 10874463b;  */

undefined8 * FUN_108744610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a580;
  FUN_108744660(param_1 + 1);
  return param_1;
}



/* Entry: 10874463c; end: 10874465f;  */

void FUN_10874463c(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x0001052a4808();
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



/* Entry: 108744660; end: 10874470f;  */

undefined8 * FUN_108744660(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  func_0x000107c27b70(param_1 + 1);
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1,param_1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return param_1;
}



/* Entry: 108744710; end: 10874472b;  */

void FUN_108744710(long param_1)

{
  func_0x0001052a0760();
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10874472c; end: 1087447bf;  */

void FUN_10874472c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  do {
    uStack_38 = 0;
    lVar1 = param_1 + 0x10;
    func_0x0001087453a8(lVar1,&uStack_38);
    if ((int)lVar1 != 0) {
      if (*(char *)(param_1 + 200) == '\x01') {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xa8);
        *(undefined1 *)(param_1 + 200) = 0;
      }
      uVar2 = *param_3;
      *(undefined8 *)(param_1 + 0xa0) = param_3[1];
      *(undefined8 *)(param_1 + 0x98) = uVar2;
      uVar3 = param_3[3];
      uVar2 = param_3[2];
      *(undefined8 *)(param_1 + 0xb8) = param_3[4];
      *(undefined8 *)(param_1 + 0xb0) = uVar3;
      *(undefined8 *)(param_1 + 0xa8) = uVar2;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[2] = 0;
      *(undefined8 *)(param_1 + 0xc0) = param_3[5];
      *(undefined1 *)(param_1 + 200) = 1;
      func_0x0001087454c8();
      return;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  return;
}



/* Entry: 1087447c0; end: 108744bdf;  */

void FUN_1087447c0(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 in_CY;
  undefined8 *puVar4;
  long *plVar5;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long lVar6;
  long *plVar7;
  long *extraout_x8;
  long *extraout_x8_00;
  long *plVar8;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar9;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  puVar4 = (undefined8 *)0x68;
  __Znwm();
  *puVar4 = FUN_108744d3c;
  puVar4[1] = FUN_108744f74;
  lVar6 = *param_2;
  plVar8 = puVar4 + 7;
  *plVar8 = lVar6;
  if (lVar6 != 0) {
    do {
      FUN_108745398();
    } while (extraout_w10 != 0);
  }
  lVar6 = *param_3;
  puVar4[8] = lVar6;
  if (lVar6 != 0) {
    do {
      FUN_108745398();
    } while (extraout_w10_00 != 0);
  }
  uVar11 = *param_4;
  puVar4[5] = param_4[1];
  puVar4[4] = uVar11;
  puVar4[6] = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  FUN_1087443d4(&lStack_60);
  puVar4[3] = uStack_58;
  puVar4[2] = lStack_60;
  lStack_60 = 0;
  uStack_58 = 0;
  func_0x000107c27fec(&lStack_60);
  lStack_60 = puVar4[2];
  if (lStack_60 != 0) {
    do {
      FUN_108745398();
    } while (extraout_w10_01 != 0);
  }
  *param_1 = lStack_60;
  lStack_60 = 0;
  func_0x000107c27f9c(&lStack_60);
  func_0x000107c28874(&lStack_60);
  func_0x000107c28878(&uStack_68,2);
  uVar11 = uStack_68;
  uStack_68 = 0;
  func_0x000107c28888(lStack_50 + 0x18,uVar11);
  func_0x000107c28890(&uStack_68);
  *(undefined8 *)(lStack_50 + 8) = 2;
  func_0x000107c2887c(lStack_50,&uStack_58);
  func_0x000107c28880(lStack_50,0,plVar8,puVar4 + 8);
  lVar6 = lStack_60;
  uStack_68 = 0;
  lStack_60 = 0;
  puVar4[10] = lVar6;
  func_0x000108745708();
  plVar5 = &lStack_60;
  func_0x000107c2889c();
  puVar4[9] = puVar4[10];
  do {
    FUN_108745398();
  } while (extraout_w10_02 != 0);
  func_0x000108745534(puVar4[9]);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0xc) = 0;
    func_0x000108745660();
    lVar6 = *plVar5;
    if (lVar6 == 0) {
      func_0x000107c3a5c0();
      lVar6 = *plVar5;
    }
    plVar7 = param_4 + 2;
    do {
      if (*plVar7 == 0) {
        func_0x0001087453d8();
        plVar7 = extraout_x8_00;
        uVar1 = extraout_w10_04;
        uVar9 = extraout_w11_00;
      }
      else {
        func_0x0001087455e8();
        plVar7 = extraout_x8;
        uVar1 = extraout_w10_03;
        uVar9 = extraout_w11;
      }
      if ((uVar9 & 1) != 0) {
        func_0x000108745680();
        if ((bool)in_ZR) {
          func_0x000108745408();
          uVar3 = extraout_w8;
          if ((bool)in_CY) {
            uVar3 = extraout_w9;
          }
          func_0x000108745670();
          *(undefined1 *)plVar5 = uVar3;
          func_0x000108745500(0);
          param_4[0x12] = plVar5;
        }
        func_0x000108745690();
        *(long *)(extraout_x8_03 + 0x20) = lVar6;
        goto LAB_108744ae0;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  param_4 = puVar4 + 9;
  func_0x000107c28870();
  param_4 = (undefined8 *)*param_4;
  func_0x0001087454e0();
  plVar5 = puVar4 + 10;
  func_0x000107c27f9c();
  if (param_4 == (undefined8 *)0x1) {
    func_0x000108745534(puVar4[8]);
    if ((extraout_w8_02 >> 5 & 1) == 0) {
      puVar4 = (undefined8 *)0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
      *puVar4 = &PTR_FUN_110a6a618;
      func_0x000108745788();
      ___cxa_throw(puVar4);
    }
    else {
      func_0x000108745570(puVar4[8],puVar4 + 0xb);
      __ZSt17rethrow_exceptionSt13exception_ptr(puVar4 + 0xb);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x108744b5c);
    (*pcVar2)();
  }
  puVar4[9] = *plVar8;
  uVar3 = 0;
  do {
    FUN_108745398();
  } while (extraout_w10_05 != 0);
  func_0x000108745534(puVar4[9]);
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0xc) = 1;
    func_0x000108745660();
    lVar6 = *plVar5;
    if (lVar6 == 0) {
      func_0x000107c3a5c0();
      lVar6 = *plVar5;
    }
    plVar8 = param_4 + 2;
    do {
      if (*plVar8 == 0) {
        func_0x0001087453d8();
        plVar8 = extraout_x8_02;
        uVar1 = extraout_w10_07;
        uVar9 = extraout_w11_02;
      }
      else {
        func_0x0001087455e8();
        plVar8 = extraout_x8_01;
        uVar1 = extraout_w10_06;
        uVar9 = extraout_w11_01;
      }
      if ((uVar9 & 1) != 0) {
        lVar10 = param_4[0x12];
        func_0x000108745680();
        if ((bool)uVar3) {
          func_0x000108745408();
          func_0x0001087453f0();
          func_0x000108745454();
          *(long **)(lVar10 + 8) = plVar5;
          param_4[0x12] = plVar5;
        }
        func_0x000108745690();
        *(long *)(extraout_x8_04 + 0x20) = lVar6;
LAB_108744ae0:
        func_0x0001087454f0(param_4[0x12]);
        param_4[2] = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_108743d18(puVar4 + 9);
  lVar6 = puVar4[3];
  do {
    lStack_60 = 0;
    lVar10 = lVar6 + 0x10;
    func_0x0001087453a8(lVar10,&lStack_60);
    if ((int)lVar10 != 0) {
      FUN_10874463c(lVar6 + 0x98);
      func_0x000108745738();
      *(undefined1 *)(lVar6 + 0xe0) = 1;
      *(undefined8 *)(lVar6 + 0x10) = 2;
      func_0x000107c31508(lVar6,puVar4 + 3);
      break;
    }
  } while (((uint)lStack_60 >> 1 & 1) == 0);
  func_0x000108745478(puVar4 + 3);
  func_0x0001087454e0();
  func_0x0001087453e8();
  func_0x000108745590();
  func_0x000108745638();
  func_0x000108745614();
  func_0x000108745418();
  return;
}



/* Entry: 108744be0; end: 108744be3;  */

undefined8 * FUN_108744be0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a5d8;
  if (*(char *)(param_1 + 0x1d) == '\x01') {
    func_0x000105c40fa0(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108744be4; end: 108744bf7;  */

void FUN_108744be4(void)

{
  FUN_108744bf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108744bf8; end: 108744c33;  */

undefined8 * FUN_108744bf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a5d8;
  if (*(char *)(param_1 + 0x1d) == '\x01') {
    func_0x000105c40fa0(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108744c34; end: 108744c37;  */

void FUN_108744c34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 108744c38; end: 108744c6f;  */

void FUN_108744c38(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108744c70; end: 108744d3b;  */

long FUN_108744c70(long param_1)

{
  func_0x0001052a4560(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108744d3c; end: 108744f73;  */

void FUN_108744d3c(long param_1)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong uVar6;
  ulong extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 uStack_48;
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    plVar3 = (long *)(param_1 + 0x48);
    func_0x000107c28870();
    lVar8 = *plVar3;
    func_0x0001087454e0();
    pbVar4 = (byte *)(param_1 + 0x50);
    func_0x000107c27f9c();
    if (lVar8 == 1) {
      func_0x000108745534(*(undefined8 *)(param_1 + 0x40));
      if ((extraout_w8_00 >> 5 & 1) == 0) {
        puVar5 = (undefined8 *)0x10;
        ___cxa_allocate_exception();
        __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE()
        ;
        *puVar5 = &PTR_FUN_110a6a618;
        func_0x000108745788();
        ___cxa_throw(puVar5);
      }
      else {
        func_0x000108745570(*(undefined8 *)(param_1 + 0x40),param_1 + 0x58);
        __ZSt17rethrow_exceptionSt13exception_ptr(param_1 + 0x58);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108744f18);
      (*pcVar2)();
    }
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x38);
    do {
      func_0x000108745398();
    } while (extraout_w10 != 0);
    func_0x000108745534(*(undefined8 *)(param_1 + 0x48));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x60) = 1;
      lVar8 = *(long *)(param_1 + 0x48);
      func_0x0001087455c8();
      lVar9 = *(long *)pbVar4;
      if (lVar9 == 0) {
        func_0x000107c3a5c0();
        lVar9 = *(long *)pbVar4;
      }
      plVar3 = (long *)(lVar8 + 0x10);
      do {
        if (*plVar3 == 0) {
          func_0x0001087453d8();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar7 = extraout_w11_00;
        }
        else {
          func_0x0001087455e8();
          plVar3 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar7 = extraout_w11;
        }
        if ((uVar7 & 1) != 0) {
          pbVar10 = *(byte **)(lVar8 + 0x90);
          uVar6 = (ulong)pbVar10[1];
          if (pbVar10[1] == *pbVar10) {
            func_0x000108745408();
            func_0x0001087453f0();
            func_0x000108745454();
            *(byte **)(pbVar10 + 8) = pbVar4;
            *(byte **)(lVar8 + 0x90) = pbVar4;
            uVar6 = extraout_x8_01;
            pbVar10 = pbVar4;
          }
          uVar6 = uVar6 & 0xffffffff;
          pbVar4 = pbVar10 + uVar6 * 0x18 + 0x10;
          pbVar4[0] = 0;
          pbVar4[1] = 0;
          pbVar4[2] = 0;
          pbVar4[3] = 0;
          pbVar4[4] = 0;
          pbVar4[5] = 0;
          pbVar4[6] = 0;
          pbVar4[7] = 0;
          *(long *)(pbVar10 + uVar6 * 0x18 + 0x18) = param_1;
          *(long *)(pbVar10 + uVar6 * 0x18 + 0x20) = lVar9;
          func_0x0001087454f0(*(undefined8 *)(lVar8 + 0x90));
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  FUN_108743d18(param_1 + 0x48);
  lVar8 = *(long *)(param_1 + 0x18);
  do {
    uStack_48 = 0;
    lVar9 = lVar8 + 0x10;
    func_0x0001087453a8(lVar9,&uStack_48);
    if ((int)lVar9 != 0) {
      FUN_10874463c(lVar8 + 0x98);
      func_0x000108745738();
      *(undefined1 *)(lVar8 + 0xe0) = 1;
      func_0x0001087453c0();
      break;
    }
  } while (((uint)uStack_48 >> 1 & 1) == 0);
  func_0x000108745478((long *)(param_1 + 0x18));
  func_0x0001087454e0();
  func_0x0001087453e8();
  func_0x000108745590();
  func_0x000108745638();
  func_0x000107c27f9c(param_1 + 0x38);
  func_0x000108745418();
  return;
}



/* Entry: 108744f74; end: 108744fbf;  */

void FUN_108744f74(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    func_0x000107c27f9c(param_1 + 0x48);
  }
  func_0x000107c27f9c(lVar1);
  func_0x0001087453e8();
  func_0x000108745590();
  func_0x000108745638();
  func_0x000107c27f9c(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108744fc0; end: 108745147;  */

void FUN_108744fc0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_38;
  
  FUN_108743d18(param_1 + 0xa8);
  func_0x000108745588();
  func_0x0001087455c0();
  func_0x000108745558();
  func_0x000108745568();
  func_0x000108745548();
  func_0x000108745540();
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x68) = 1;
  do {
    uStack_38 = 0;
    lVar1 = lVar2 + 0x10;
    func_0x0001087453a8(lVar1,&uStack_38);
    if ((int)lVar1 != 0) {
      func_0x000108744c4c(lVar2 + 0x98);
      func_0x0001087454e8(lVar2 + 0x98);
      *(undefined1 *)(lVar2 + 0xe0) = 1;
      *(undefined1 *)(lVar2 + 0xe8) = 1;
      func_0x0001087453c0();
      break;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  func_0x000108745478((long *)(param_1 + 0x18));
  func_0x000108745444();
  func_0x0001087453e8();
  FUN_108743ab4(param_1 + 0x68);
  func_0x000107c27f9c(param_1 + 0xa0);
  func_0x000107c27f9c(param_1 + 0x98);
  func_0x000108745418();
  return;
}



/* Entry: 108745148; end: 108745197;  */

void FUN_108745148(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xa8);
  func_0x000108745558();
  func_0x000108745568();
  func_0x000108745548();
  func_0x000108745540();
  func_0x0001087453e8();
  FUN_108743ab4(param_1 + 0x68);
  func_0x000107c27f9c(param_1 + 0xa0);
  func_0x000107c27f9c(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108745198; end: 108745337;  */

void FUN_108745198(long param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  uint extraout_w9;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x1d8) & 1) == 0) {
    FUN_108743d18(param_1 + 0x130);
    func_0x000108745588();
    func_0x00010874543c();
    *(undefined1 *)(param_1 + 0x100) = 1;
    func_0x0001087454e8(param_1 + 0x70);
    func_0x000108745524();
    FUN_108743da4();
    func_0x0001087453b4();
    func_0x000108745468();
    func_0x000108745598();
    func_0x000108745444();
  }
  else {
    func_0x000108745774();
    if ((extraout_w9 >> 5 & 1) != 0) {
      func_0x000108745570(auStack_50);
      __ZSt17rethrow_exceptionSt13exception_ptr(auStack_50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1087452c4);
      (*pcVar1)();
    }
    func_0x000108745760();
    if ((bool)in_ZR) {
      func_0x0001087456b8();
      *(undefined1 *)(param_1 + 0x68) = 1;
    }
    func_0x00010874543c();
    func_0x000108745578();
    func_0x000108745560();
    func_0x000108745550();
    func_0x000107c27f9c(param_1 + 0x1c8);
    if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
      func_0x00010874560c(*(undefined8 *)(param_1 + 400),0x226);
      auStack_50[0] = 5;
      uStack_40 = 0;
      uStack_48 = 0;
      uStack_30 = 0;
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0001087453b4();
      func_0x000108745468();
    }
    else {
      func_0x0001087454e8(param_1 + 0xb8);
      func_0x000108745524();
      FUN_108743da4();
      func_0x0001087453b4();
      func_0x000108745468();
      func_0x0001087455a8();
    }
    func_0x00010874544c();
  }
  func_0x000108745580();
  func_0x0001087453e8();
  func_0x000108745658();
  func_0x000108745650();
  func_0x000108745648();
  func_0x000108745640();
  func_0x000108745418();
  return;
}



/* Entry: 108745338; end: 108745397;  */

void FUN_108745338(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x130;
  if (*(char *)(param_1 + 0x1d8) == '\x01') {
    lVar1 = param_1 + 0x1c8;
    func_0x000107c27f9c(param_1 + 0x130);
    func_0x000108745578();
    func_0x000108745560();
    func_0x000108745550();
  }
  func_0x000107c27f9c(lVar1);
  func_0x000108745580();
  func_0x0001087453e8();
  func_0x000108745658();
  func_0x000108745650();
  func_0x000108745648();
  func_0x000108745640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108745398; end: 1087457a7;  */

void FUN_108745398(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 4;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1087457a8; end: 108745847;  */

undefined8 FUN_1087457a8(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  
  if ((bRam0000000113828018 & 1) == 0) {
    iVar1 = 0x13828018;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108745848(auStack_68);
      puVar2 = auStack_68;
      func_0x000107c301a0();
      puRam0000000113828010 = puVar2;
      func_0x000107c27974(auStack_68);
      ___cxa_guard_release(0x113828018);
    }
  }
  return 0x113828010;
}



/* Entry: 108745848; end: 108745be3;  */

/* WARNING: Possible PIC construction at 0x00010874587c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087458a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108745880) */
/* WARNING: Removing unreachable block (ram,0x0001087458a4) */
/* WARNING: Removing unreachable block (ram,0x000108745b24) */
/* WARNING: Removing unreachable block (ram,0x000108745b38) */
/* WARNING: Removing unreachable block (ram,0x000108745b74) */
/* WARNING: Removing unreachable block (ram,0x000108745b84) */
/* WARNING: Removing unreachable block (ram,0x000108745b94) */
/* WARNING: Removing unreachable block (ram,0x000108745bcc) */
/* WARNING: Removing unreachable block (ram,0x000108745b60) */

void FUN_108745848(void)

{
  undefined *puVar1;
  undefined1 auStack_338 [768];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = &UNK_10f4b2d6e;
  func_0x00010002b82c(auStack_338,&UNK_10f4b2d6e);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 108745be4; end: 108745beb;  */

void FUN_108745be4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c();
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 108745bec; end: 1087461ef;  */

void FUN_108745bec(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  ushort uVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined1 uVar5;
  ushort uVar6;
  ushort uVar7;
  byte bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ulong *puVar12;
  long *plVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [24];
  long lStack_4b8;
  long lStack_4b0;
  undefined1 uStack_4a8;
  long *plStack_4a0;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  undefined1 auStack_478 [16];
  long lStack_468;
  byte bStack_440;
  long lStack_428;
  long lStack_420;
  undefined1 auStack_410 [376];
  long lStack_298;
  byte bStack_290;
  byte bStack_288;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  undefined1 auStack_240 [464];
  char cStack_70;
  
  lVar20 = *param_3;
  uVar6 = *(ushort *)(param_3 + 3);
  uVar7 = *(ushort *)((long)param_3 + 0x1a);
  uVar1 = uVar6 & 0x101;
  func_0x000107c29f64(auStack_240,*(undefined8 *)(param_1 + 8),param_2,2);
  if (cStack_70 != '\x01') goto LAB_1087460e0;
  func_0x000107c28fb8(auStack_410,auStack_240);
  if (((*param_4 != param_4[1]) || (uVar1 != 0x101)) || (param_3[1] != *param_3)) {
    FUN_108865a60(auStack_478,*(undefined8 *)(param_1 + 8),param_2);
    FUN_1087461f0(&lStack_428,auStack_478);
    FUN_10874674c(auStack_478);
    lVar4 = param_3[1];
    lVar21 = param_3[2];
    lVar15 = lVar4;
    if (lVar20 <= lVar4) {
      lVar15 = lVar20;
    }
    lVar2 = lVar20;
    if (lVar20 <= lVar21) {
      lVar2 = lVar21;
    }
    if (lVar20 == 0x7fffffffffffffff) {
      bVar11 = true;
LAB_108745cf4:
      if ((bVar11) && (bStack_290 == 0)) {
        bStack_288 = uVar1 != 0x100;
        lStack_298 = lVar4;
        if (!(bool)bStack_288) {
          lStack_298 = 0;
        }
        bStack_290 = 1;
        bVar10 = true;
        goto LAB_108745d34;
      }
      bVar9 = false;
      bVar11 = false;
      bVar10 = false;
      if (bStack_290 != 0) goto LAB_108745d34;
    }
    else {
      if ((uVar7 >> 8 & 1) != 0) {
        bVar11 = (uVar7 & 0xff) == 0;
        goto LAB_108745cf4;
      }
      bVar9 = false;
      bVar11 = false;
      bVar10 = false;
      if ((bStack_290 & 1) == 0) goto LAB_108745d44;
LAB_108745d34:
      bVar9 = bVar10;
      bVar11 = lStack_298 <= lVar2;
    }
LAB_108745d44:
    uVar19 = 0;
    uStack_490 = 0;
    uStack_488 = 0;
    uStack_480 = 0;
    for (lVar20 = lStack_428; lVar20 != lStack_420; lVar20 = lVar20 + 0x38) {
      if ((lVar15 <= *(long *)(lVar20 + 0x20)) && (*(long *)(lVar20 + 0x18) <= lVar2)) {
        if (uVar19 < uStack_480) {
          FUN_1087462e8(uVar19,lVar20);
          uVar19 = uVar19 + 0x38;
          uStack_488 = uVar19;
        }
        else {
          puVar12 = &uStack_490;
          FUN_108746314(puVar12,(long)(uVar19 - uStack_490) / 0x38 + 1);
          FUN_108746410(auStack_478,puVar12,(long)(uStack_488 - uStack_490) / 0x38,&uStack_480);
          FUN_1087462e8(lStack_468,lVar20);
          lStack_468 = lStack_468 + 0x38;
          FUN_108746374(&uStack_490,auStack_478);
          uVar19 = uStack_488;
          func_0x000108746634(auStack_478);
          uStack_488 = uVar19;
        }
      }
    }
    auStack_478[0] = 0;
    bStack_440 = 0;
    plVar13 = *(long **)(param_1 + 0x18);
    (**(code **)(*plVar13 + 0x10))();
    if (bVar11) {
      if (uStack_490 == uStack_488) {
        if (((uVar6 >> 8 & 1) == 0) || (lStack_298 < lVar4)) {
          if (lStack_298 <= lVar4) {
            lVar4 = lStack_298;
          }
          bVar9 = true;
          bStack_290 = 1;
          lStack_298 = lVar4;
          goto LAB_108745f68;
        }
        bStack_288 = uVar1 == 0x101;
        lStack_298 = lVar4;
        if (uVar1 != 0x101) {
          lStack_298 = 0;
        }
      }
      else {
        lVar15 = *(long *)(uStack_490 + 0x18);
        lVar20 = lVar4;
        if (lVar15 <= lVar4) {
          lVar20 = lVar15;
        }
        bVar8 = *(byte *)(uStack_490 + 0x28);
        if (lVar4 <= lVar15 && (uVar6 & 0x100) != 0) {
          bVar8 = uVar1 == 0x101;
        }
        lVar15 = lVar20;
        if ((bVar8 & 1) == 0) {
          lVar15 = 0;
        }
        if (lVar20 <= lStack_298) {
          bStack_288 = bVar8;
          lStack_298 = lVar15;
        }
      }
      bStack_290 = 1;
      bVar9 = true;
    }
    else {
      lStack_4b8 = lVar4;
      plStack_4a0 = plVar13;
      if (uStack_490 == uStack_488) {
        func_0x000108746edc();
        uStack_4a8 = uVar1 != 0x100;
        lStack_4b0 = lVar21;
        func_0x000108746ed0();
      }
      else {
        lVar20 = *(long *)(uStack_490 + 0x18);
        uVar5 = *(undefined1 *)(uStack_490 + 0x28);
        for (uVar19 = uStack_490; uVar19 != uStack_488; uVar19 = uVar19 + 0x38) {
          if (lVar21 <= *(long *)(uVar19 + 0x20)) {
            lVar21 = *(long *)(uVar19 + 0x20);
          }
        }
        func_0x000108746edc();
        if (lVar20 <= lVar4) {
          lStack_4b8 = lVar20;
        }
        uStack_4a8 = uVar5;
        if (lVar4 <= lVar20 && (uVar6 & 0x100) != 0) {
          uStack_4a8 = uVar1 == 0x101;
        }
        lStack_4b0 = lVar21;
        func_0x000108746ed0();
      }
      func_0x000107c27914(auStack_4d0);
    }
LAB_108745f68:
    puVar16 = (undefined1 *)0x0;
    lVar15 = param_4[1];
    for (lVar20 = *param_4; lVar20 != lVar15; lVar20 = lVar20 + 0x1a8) {
      ppuVar3 = &PTR_PTR_113286e08;
      if (*(undefined ***)(lVar20 + 0x80) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(lVar20 + 0x80);
      }
      if (*(int *)(ppuVar3 + 0x19) != 0) {
        func_0x000107c29ee4(auStack_4d0,param_1 + 0x28);
        ppuVar3 = &PTR_PTR_113286e08;
        if (*(undefined ***)(lVar20 + 0x80) != (undefined **)0x0) {
          ppuVar3 = *(undefined ***)(lVar20 + 0x80);
        }
        puVar14 = auStack_4d0;
        FUN_1086a5c08(puVar14,auStack_410,ppuVar3 + 0x18,*(undefined8 *)(lVar20 + 0x20));
        if ((long)puVar16 <= (long)puVar14) {
          puVar16 = puVar14;
        }
        func_0x000107c2a2e0(auStack_4d0);
      }
    }
    puVar14 = puStack_260;
    if ((0 < (long)puVar16) &&
       ((long)puStack_268 < (long)puVar16 || (long)puStack_260 < (long)puVar16)) {
      puVar14 = puVar16;
      if ((long)puVar16 <= (long)puStack_268) {
        puVar14 = puStack_268;
      }
      puStack_268 = puVar14;
      puVar14 = puVar16;
      if ((long)puVar16 <= (long)puStack_260) {
        puVar14 = puStack_260;
      }
    }
    puStack_260 = puVar14;
    if (0 < (long)puVar16) {
      bVar9 = true;
    }
    uVar18 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x18);
    func_0x000107c278b8(auStack_4e8,&UNK_10f4b304f);
    func_0x000107c31420(auStack_4d0,uVar18,auStack_4e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4e8);
    lVar15 = param_4[1];
    for (lVar20 = *param_4; uVar19 = uStack_488, uVar17 = uStack_490, lVar20 != lVar15;
        lVar20 = lVar20 + 0x1a8) {
      (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),lVar20);
    }
    for (; uVar17 != uVar19; uVar17 = uVar17 + 0x38) {
      FUN_108865bb0(*(undefined8 *)(param_1 + 8),uVar17);
    }
    if ((bStack_440 & 1) != 0) {
      FUN_108865b04(*(undefined8 *)(param_1 + 8),auStack_478);
    }
    if (bVar9) {
      FUN_10885ff98(*(undefined8 *)(param_1 + 8),auStack_410);
    }
    func_0x000107c31428(auStack_4d0);
    func_0x000107c31424(auStack_4d0);
    func_0x0001087466e8(auStack_478);
    FUN_10867d9bc(&uStack_490);
    FUN_10867d9bc(&lStack_428);
  }
  func_0x000107c287e4(auStack_410);
LAB_1087460e0:
  func_0x000107c288c8(auStack_240);
  return;
}



/* Entry: 1087461f0; end: 10874629b;  */

void FUN_1087461f0(undefined8 param_1)

{
  undefined1 auStack_150 [72];
  undefined1 auStack_108 [72];
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  FUN_108746884(auStack_c0);
  FUN_108746840(auStack_78,auStack_c0);
  func_0x000108746ee8();
  FUN_108746840(auStack_108,auStack_150);
  FUN_108746a08(param_1,auStack_78,auStack_108);
  func_0x000108746eb8();
  func_0x000108746eac();
  func_0x000108746e90();
  func_0x000108746e98(auStack_c0);
  return;
}



/* Entry: 10874629c; end: 1087462cf;  */

long FUN_10874629c(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010874669c();
  }
  else {
    FUN_1087466cc();
  }
  return param_1;
}



/* Entry: 1087462d0; end: 1087462d3;  */

undefined8 * FUN_1087462d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a640;
  func_0x000107c27914(param_1 + 5);
  func_0x000107c28800(param_1 + 3);
  func_0x000107c28808(param_1 + 1);
  return param_1;
}



/* Entry: 1087462d4; end: 1087462e7;  */

void FUN_1087462d4(void)

{
  FUN_108746708();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087462e8; end: 108746313;  */

void FUN_1087462e8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c27994();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 108746314; end: 108746373;  */

long * FUN_108746314(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  
  if (param_2 < (long *)0x492492492492493) {
    uVar1 = (param_1[2] - *param_1) / 0x38;
    plVar3 = (long *)(uVar1 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0x249249249249248 < uVar1) {
      plVar3 = (long *)0x492492492492492;
    }
    return plVar3;
  }
  FUN_1087463fc();
  func_0x000108746ea0();
  plVar3 = param_1 + 2;
  lVar4 = param_2[1] + ((param_1[1] - *param_1) / -0x38) * 0x38;
  FUN_1087464b0(plVar3,*param_1,param_1[1],lVar4);
  unaff_x19[1] = lVar4;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return plVar3;
}



/* Entry: 108746374; end: 1087463fb;  */

void FUN_108746374(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000108746ea0();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x38) * 0x38;
  FUN_1087464b0(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1087463fc; end: 10874640f;  */

long * FUN_1087463fc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar1[3] = 0;
  plVar1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010874645c();
  }
  lVar2 = param_4 + param_3 * 0x38;
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1[2] = lVar2;
  plVar1[3] = param_4 + param_2 * 0x38;
  return plVar1;
}



/* Entry: 108746410; end: 10874647f;  */

long * FUN_108746410(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010874645c();
  }
  lVar1 = param_4 + param_3 * 0x38;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x38;
  return param_1;
}



/* Entry: 108746480; end: 1087464af;  */

void FUN_108746480(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x38) {
    FUN_108746580(param_4,uVar1);
    param_4 = lStack_48 + 0x38;
  }
  uStack_58 = 1;
  FUN_108746550(param_1,param_2,param_3);
  FUN_1087465b4(&uStack_70);
  return;
}



/* Entry: 1087464b0; end: 10874654f;  */

void FUN_1087464b0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x38) {
    FUN_108746580(param_4,lVar1);
    param_4 = lStack_38 + 0x38;
  }
  uStack_48 = 1;
  FUN_108746550(param_1,param_2,param_3);
  FUN_1087465b4(&uStack_60);
  return;
}



/* Entry: 108746550; end: 10874657f;  */

void FUN_108746550(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 108746580; end: 1087465b3;  */

void FUN_108746580(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  return;
}



/* Entry: 1087465b4; end: 1087465e3;  */

long FUN_1087465b4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1087465e4(param_1);
  }
  return param_1;
}



/* Entry: 1087465e4; end: 108746603;  */

void FUN_1087465e4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x38;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 108746604; end: 10874665f;  */

void FUN_108746604(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x38;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 108746660; end: 108746667;  */

void FUN_108746660(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108746ea0(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x38;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 108746668; end: 1087466cb;  */

void FUN_108746668(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108746ea0();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x38;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1087466cc; end: 108746707;  */

void FUN_1087466cc(long param_1)

{
  FUN_108746580();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 108746708; end: 10874674b;  */

undefined8 * FUN_108746708(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a640;
  func_0x000107c27914(param_1 + 5);
  func_0x000107c28800(param_1 + 3);
  func_0x000107c28808(param_1 + 1);
  return param_1;
}



/* Entry: 10874674c; end: 1087467a7;  */

undefined8 * FUN_10874674c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [80];
  
  puVar1 = param_1;
  func_0x000108746ee8();
  FUN_1087467a8(puVar1 + 1,auStack_70);
  func_0x0001087466e8((ulong)auStack_70 | 8);
  uVar2 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar2);
  func_0x0001087466e8(param_1 + 2);
  return param_1;
}



/* Entry: 1087467a8; end: 1087467cf;  */

undefined8 * FUN_1087467a8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_1087467d0(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1087467d0; end: 1087467f3;  */

undefined8 FUN_1087467d0(undefined8 param_1)

{
  FUN_1087467f4();
  return param_1;
}



/* Entry: 1087467f4; end: 10874681b;  */

void FUN_1087467f4(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 != *(char *)(param_2 + 0x38)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x38) == '\x01') {
        func_0x000107c27914();
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
      return;
    }
    FUN_108746580();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000108746ea0();
    func_0x000107c3194c();
    uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
    return;
  }
  return;
}



/* Entry: 10874681c; end: 10874683f;  */

void FUN_10874681c(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 108746840; end: 108746883;  */

void FUN_108746840(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [72];
  
  FUN_10874689c(auStack_68,param_2);
  FUN_10874689c(param_1,auStack_68);
  func_0x000108746e90();
  return;
}



/* Entry: 108746884; end: 10874689b;  */

void FUN_108746884(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_2 = param_2 + 8;
  func_0x000108746ea0(param_1,param_2);
  FUN_108746930(param_1 + 1,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 10874689c; end: 1087468bb;  */

void FUN_10874689c(void)

{
  func_0x000108746efc();
  FUN_1087468bc();
  return;
}



/* Entry: 1087468bc; end: 1087468e7;  */

undefined1 * FUN_1087468bc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x38] = 0;
  FUN_1087468e8();
  return param_1;
}



/* Entry: 1087468e8; end: 1087468fb;  */

void FUN_1087468e8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_108746580();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  return;
}



/* Entry: 1087468fc; end: 10874692f;  */

void FUN_1087468fc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000108746ea0();
  FUN_108746930(param_1 + 8,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 108746930; end: 1087469a7;  */

void FUN_108746930(long param_1,long param_2)

{
  char cVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000108746ea0();
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 != *(char *)(param_2 + 0x38)) {
    if (cVar1 == '\0') {
      FUN_1087466cc();
    }
    else {
      FUN_1087466cc();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 7) == '\x01') {
      func_0x000107c27914();
      *(undefined1 *)(unaff_x19 + 7) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    uStack_58 = unaff_x20[1];
    uStack_60 = *unaff_x20;
    uStack_50 = unaff_x20[2];
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    *unaff_x20 = 0;
    uStack_40 = unaff_x20[4];
    uStack_48 = unaff_x20[3];
    uStack_30 = unaff_x20[6];
    uStack_38 = unaff_x20[5];
    func_0x00010874669c();
    func_0x00010874669c();
    func_0x000107c27914(&uStack_60);
    return;
  }
  return;
}



/* Entry: 1087469a8; end: 108746a07;  */

void FUN_1087469a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_50 = param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_40 = param_1[4];
  uStack_48 = param_1[3];
  uStack_30 = param_1[6];
  uStack_38 = param_1[5];
  func_0x00010874669c();
  func_0x00010874669c(param_2,&uStack_60);
  func_0x000107c27914(&uStack_60);
  return;
}



/* Entry: 108746a08; end: 108746a93;  */

undefined8 * FUN_108746a08(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000108746df0(auStack_78);
  func_0x000108746df0(auStack_c0,param_3);
  FUN_108746a94(param_1,auStack_78,auStack_c0);
  func_0x000108746e90();
  func_0x000108746eb8();
  return param_1;
}



/* Entry: 108746a94; end: 108746b2f;  */

void FUN_108746a94(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  while ((((*(byte *)(param_2 + 8) & 1) != 0 || ((*(byte *)(param_3 + 8) & 1) != 0)) &&
         (*param_2 != *param_3))) {
    plVar1 = param_2;
    FUN_108746c3c(param_2);
    FUN_108746b30(param_1,plVar1);
    FUN_108746cd4(param_2);
  }
  uStack_38 = 1;
  FUN_108746dc4(&uStack_40);
  return;
}



/* Entry: 108746b30; end: 108746b93;  */

long FUN_108746b30(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000108746b6c();
    lVar2 = uVar1 + 0x38;
  }
  else {
    lVar2 = param_1;
    FUN_108746b94();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x38;
}



/* Entry: 108746b94; end: 108746c3b;  */

long FUN_108746b94(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_108746314(param_1,(param_1[1] - *param_1) / 0x38 + 1);
  FUN_108746410(auStack_58,plVar1,(param_1[1] - *param_1) / 0x38,param_1 + 2);
  FUN_108746580(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x38;
  FUN_108746374(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x000108746634(auStack_58);
  return lVar2;
}



/* Entry: 108746c3c; end: 108746cd3;  */

long * FUN_108746c3c(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar1 = *(undefined8 *)(*param_1 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_50,*param_1 + 0x58);
    func_0x000107c27f54(auStack_38,&UNK_10f4b3064,auStack_50);
    func_0x00010bcc7444(uVar1,0x65,auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  }
  return param_1 + 1;
}



/* Entry: 108746cd4; end: 108746d47;  */

void FUN_108746cd4(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [56];
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (func_0x000107c3141c(), (int)lVar2 != 0)) {
    FUN_108746d48(auStack_58,*param_1);
    FUN_10874629c(param_1 + 1,auStack_58);
    func_0x000107c27914(auStack_58);
    return;
  }
  plVar1 = param_1 + 1;
  if ((char)param_1[8] == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(plVar1 + 7) = 0;
  }
  return;
}



/* Entry: 108746d48; end: 108746dc3;  */

void FUN_108746d48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c313f8();
  func_0x000107c2879c(param_1);
  uVar1 = param_2;
  func_0x000107c313d8(param_2,1);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = param_2;
  func_0x000107c313d8(param_2,2);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = param_2;
  func_0x000107c287bc(param_2,3);
  *(char *)(param_1 + 0x28) = (char)uVar1;
  func_0x000107c313d8(param_2,4);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}



/* Entry: 108746dc4; end: 108746e0f;  */

long FUN_108746dc4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010867d9f0(param_1);
  }
  return param_1;
}



/* Entry: 108746e10; end: 108746e47;  */

undefined1 * FUN_108746e10(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x38] = 0;
  FUN_108746e48();
  return param_1;
}



/* Entry: 108746e48; end: 108746e5b;  */

void FUN_108746e48(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1087462e8();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  return;
}



/* Entry: 108746e5c; end: 108746e77;  */

void FUN_108746e5c(long param_1)

{
  FUN_1087462e8();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 108746e78; end: 108746f0f;  */

void FUN_108746e78(void)

{
  return;
}



/* Entry: 108746f10; end: 108746f6f;  */

void FUN_108746f10(long param_1)

{
  int iVar1;
  undefined1 auStack_150 [288];
  
  iVar1 = *(int *)(param_1 + 8);
  _bzero(auStack_150,0x120);
  FUN_108747fa4(auStack_150);
  FUN_108746f70(param_1,auStack_150);
  func_0x000108748328(auStack_150);
  *(int *)(param_1 + 8) = iVar1 + 1;
  return;
}



/* Entry: 108746f70; end: 108746ffb;  */

void FUN_108746f70(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000108749e38();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  FUN_10874802c(param_1 + 2,param_2 + 2);
  func_0x0001087480ac(unaff_x20 + 0x28,unaff_x19 + 0x28);
  func_0x000108748180(unaff_x20 + 0x50,unaff_x19 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x81);
  *(undefined8 *)(unaff_x20 + 0x89) = *(undefined8 *)(unaff_x19 + 0x89);
  *(undefined8 *)(unaff_x20 + 0x81) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar1;
  FUN_108748210(unaff_x20 + 0x98,unaff_x19 + 0x98);
  FUN_108748210(unaff_x20 + 0xb0,unaff_x19 + 0xb0);
  FUN_108748254(unaff_x20 + 200,unaff_x19 + 200);
  FUN_108748210(unaff_x20 + 0xf0,unaff_x19 + 0xf0);
  FUN_108748210(unaff_x20 + 0x108,unaff_x19 + 0x108);
  return;
}



/* Entry: 108746ffc; end: 108747097;  */

void FUN_108746ffc(undefined1 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 2);
  param_1[0x90] = *(undefined1 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 6);
  param_1[0x80] = *(undefined1 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  func_0x000108748b30(param_1 + 0x50,param_2 + 10);
  func_0x000108748460(param_1 + 0x10,param_2 + 0x14);
  puVar3 = *(undefined1 **)(param_1 + 0x10);
  while (puVar3 != param_1 + 0x18) {
    uVar2 = *(undefined8 *)(puVar3 + 0x20);
    puVar1 = (undefined8 *)(param_1 + 0x28);
    FUN_108747098(puVar1,puVar3 + 0x28);
    *puVar1 = uVar2;
    func_0x000107c27be0();
  }
  *param_1 = 1;
  return;
}



/* Entry: 108747098; end: 1087470cb;  */

long FUN_108747098(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1087490e0(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x18;
}



/* Entry: 1087470cc; end: 10874718f;  */

undefined4 FUN_1087470cc(long param_1,long *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    uVar2 = 0;
    if (*(char *)(param_1 + 0x90) == '\0') {
      uVar2 = 2;
    }
  }
  else {
    if ((*(char *)(param_1 + 0x80) == '\x01') && (*(long *)(param_1 + 0x78) == 0x7fffffffffffffff))
    {
      lVar3 = param_1 + 0x10;
      func_0x000108749440(lVar3,param_2);
      if (lVar3 != 0) {
        return 2;
      }
    }
    if (*(char *)(param_1 + 0x90) == '\x01') {
      bVar1 = *(long *)(param_1 + 0x88) < *param_2;
    }
    else {
      bVar1 = false;
    }
    if (*(char *)(param_1 + 0x80) == '\x01') {
      uVar4 = 1;
      if (*(long *)(param_1 + 0x78) <= *param_2) {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 2;
    }
    uVar2 = 0;
    if (!bVar1) {
      uVar2 = uVar4;
    }
  }
  return uVar2;
}



/* Entry: 108747190; end: 108747303;  */

void FUN_108747190(undefined8 *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x9;
  long lVar6;
  long extraout_x9_00;
  long unaff_x19;
  
  puVar3 = param_1;
  puVar4 = (undefined8 *)param_1[0x1e];
  while (puVar4 != param_1 + 0x1f) {
    if ((*(char *)(param_1 + 0x12) == '\x01') && ((long)param_1[0x11] < (long)puVar4[4])) {
      func_0x000108749fe8();
      puVar4 = puVar3;
    }
    else {
      puVar3 = param_1 + 0x1e;
      func_0x00010871cafc();
      puVar4 = puVar3;
    }
  }
  puVar4 = (undefined8 *)param_1[0x21];
  while (puVar4 != param_1 + 0x22) {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      bVar1 = (long)param_1[0xf] <= (long)puVar4[4];
    }
    else {
      bVar1 = true;
    }
    if (*(char *)(param_1 + 0x12) == '\x01') {
      bVar2 = (long)puVar4[4] <= (long)param_1[0x11];
    }
    else {
      bVar2 = true;
    }
    if ((bool)(bVar1 & bVar2)) {
      puVar3 = param_1 + 0x21;
      func_0x00010871cafc();
      puVar4 = puVar3;
    }
    else {
      func_0x000108749fe8();
      puVar4 = puVar3;
    }
  }
  if (*(char *)(param_1 + 0x12) == '\x01') {
    if (param_1[0xd] != 0) {
      func_0x000108749f8c();
      func_0x00010867bbac();
      func_0x000108749ef0();
      lVar5 = extraout_x8;
      lVar6 = extraout_x9;
      while (lVar6 != lVar5) {
        func_0x000108749ee0();
        lVar5 = extraout_x8_00;
        lVar6 = extraout_x9_00;
      }
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
    }
    return;
  }
  return;
}



/* Entry: 108747304; end: 10874737b;  */

void FUN_108747304(undefined8 *param_1,long param_2,byte param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long extraout_x9;
  long lVar6;
  long extraout_x9_00;
  long unaff_x19;
  
  if (param_4 == 1) {
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      param_1[0xf] = param_2;
      *(byte *)(param_1 + 0x10) = param_3;
    }
    else {
      lVar5 = param_1[0xf];
      param_1[0xf] = param_2;
      *(byte *)(param_1 + 0x10) = param_3;
      if ((lVar5 == 0x7fffffffffffffff) && ((param_3 & param_2 == 0x7fffffffffffffff) == 0)) {
        func_0x000108747298(param_1);
      }
    }
  }
  else {
    param_1[0x11] = param_2;
    *(byte *)(param_1 + 0x12) = param_3;
  }
  puVar3 = param_1;
  puVar4 = (undefined8 *)param_1[0x1e];
  while (puVar4 != param_1 + 0x1f) {
    if ((*(char *)(param_1 + 0x12) == '\x01') && ((long)param_1[0x11] < (long)puVar4[4])) {
      func_0x000108749fe8();
      puVar4 = puVar3;
    }
    else {
      puVar3 = param_1 + 0x1e;
      func_0x00010871cafc();
      puVar4 = puVar3;
    }
  }
  puVar4 = (undefined8 *)param_1[0x21];
  while (puVar4 != param_1 + 0x22) {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      bVar1 = (long)param_1[0xf] <= (long)puVar4[4];
    }
    else {
      bVar1 = true;
    }
    if (*(char *)(param_1 + 0x12) == '\x01') {
      bVar2 = (long)puVar4[4] <= (long)param_1[0x11];
    }
    else {
      bVar2 = true;
    }
    if ((bool)(bVar1 & bVar2)) {
      puVar3 = param_1 + 0x21;
      func_0x00010871cafc();
      puVar4 = puVar3;
    }
    else {
      func_0x000108749fe8();
      puVar4 = puVar3;
    }
  }
  if (*(char *)(param_1 + 0x12) == '\x01') {
    if (param_1[0xd] != 0) {
      func_0x000108749f8c();
      func_0x00010867bbac();
      func_0x000108749ef0();
      lVar5 = extraout_x8;
      lVar6 = extraout_x9;
      while (lVar6 != lVar5) {
        func_0x000108749ee0();
        lVar5 = extraout_x8_00;
        lVar6 = extraout_x9_00;
      }
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
    }
    return;
  }
  return;
}



/* Entry: 10874737c; end: 108747467;  */

void FUN_10874737c(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uStack_48;
  undefined1 uStack_38;
  
  if ((0 < *(int *)(param_1 + 0xc)) &&
     (iVar2 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0xc), 0 < iVar2)) {
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    while( true ) {
      lVar1 = *(long *)(param_1 + 0x20);
      if (iVar2 < 1) break;
      if (lVar1 == 0) {
        if (param_2 == 0) goto LAB_108747444;
        goto LAB_108747418;
      }
      if (param_2 == 0) {
        FUN_108747468(param_1 + 0x18);
      }
      func_0x000108749fc4();
      func_0x000108749fd0();
      iVar2 = iVar2 + -1;
    }
    if (param_2 == 0) {
      if (lVar1 == 0) {
LAB_108747444:
        *(undefined8 *)(param_1 + 0x88) = uVar3;
        uStack_48 = (undefined1)uVar4;
        *(undefined1 *)(param_1 + 0x90) = uStack_48;
      }
      else {
        func_0x000107c27bdc(param_1 + 0x18);
        func_0x000108749f38();
        func_0x0001087481d0();
      }
    }
    else if (lVar1 == 0) {
LAB_108747418:
      *(undefined8 *)(param_1 + 0x78) = uVar5;
      uStack_38 = (undefined1)uVar6;
      *(undefined1 *)(param_1 + 0x80) = uStack_38;
    }
    else {
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
      *(undefined1 *)(param_1 + 0x80) = 1;
    }
  }
  return;
}



/* Entry: 108747468; end: 10874746f;  */

undefined8 FUN_108747468(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10874891c(&uStack_18,0xffffffffffffffff);
  return uStack_18;
}



/* Entry: 108747470; end: 1087474af;  */

void FUN_108747470(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long unaff_x19;
  
  if (((*(byte *)(param_1 + 0x90) & 1) == 0) && (*(long *)(param_1 + 0x20) != 0)) {
    param_1 = param_1 + 0x18;
    func_0x000107c27bdc();
    func_0x000108749f38();
    if (*(long *)(param_1 + 0x18) != 0) {
      func_0x000108749f8c();
      func_0x00010867bbac();
      func_0x000108749ef0();
      lVar1 = extraout_x8;
      lVar2 = extraout_x9;
      while (lVar2 != lVar1) {
        func_0x000108749ee0();
        lVar1 = extraout_x8_00;
        lVar2 = extraout_x9_00;
      }
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
    }
    return;
  }
  return;
}



/* Entry: 1087474b0; end: 108747743;  */

void FUN_1087474b0(long param_1,long *param_2,long param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  lVar10 = *param_2;
  lVar2 = param_2[1];
  do {
    if (lVar10 == lVar2) {
      return;
    }
    lVar6 = param_1;
    FUN_1087470cc(param_1,lVar10 + 0x20);
    iVar11 = (int)lVar6;
    if (*(char *)(lVar10 + 0x28) == '\x01') {
      if ((*(char *)(param_1 + 0x80) == '\x01') && (*(long *)(param_1 + 0x78) == 0x7fffffffffffffff)
         ) {
        uStack_80 = *(ulong *)(lVar10 + 0x18);
        lVar6 = param_1 + 0x50;
        func_0x00010869af60(lVar6,&uStack_80);
        if ((lVar6 != 0) || (iVar11 == 2)) {
LAB_10874756c:
          func_0x0001086aa5b8(param_5,lVar10);
          if ((*(byte *)(lVar10 + 0x28) & 1) == 0) {
            FUN_10867b1ac(param_1 + 0x50,lVar10 + 0x18);
          }
          else {
            lVar6 = param_1 + 0xf0;
            func_0x000108749ed8();
            lVar4 = param_1 + 0x108;
            func_0x000108749ed8();
            if (lVar6 + lVar4 != 0) {
              *(undefined1 *)(param_5 + 0x30) = 1;
            }
            func_0x000108749fdc();
            plVar5 = (long *)(param_1 + 0x10);
            FUN_10874971c(plVar5,&uStack_68,lVar10 + 0x20);
            if (*plVar5 == 0) {
              lVar6 = 0x30;
              __Znwm();
              uStack_70 = 1;
              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
              *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar10 + 0x18);
              uStack_78 = param_1 + 0x18;
              FUN_108748718(param_1 + 0x10,uStack_68,plVar5,lVar6);
              uStack_80 = 0;
              puVar7 = &uStack_80;
              FUN_1087488b8();
              uVar12 = *(ulong *)(lVar10 + 0x20);
              func_0x000108749e80();
              *puVar7 = uVar12;
            }
          }
          goto LAB_10874761c;
        }
        if ((*(byte *)(lVar10 + 0x28) & 1) == 0) goto LAB_10874761c;
        lVar6 = 0;
      }
      else if (iVar11 == 2) goto LAB_10874756c;
      func_0x000108749fdc();
      if (lVar6 != 0) {
        uStack_80 = *(ulong *)(lVar10 + 0x18);
        uStack_78 = uStack_78 & 0xffffffffffffff00;
        uStack_70 = uStack_70 & 0xffffffffffffff00;
        FUN_10869cb80(param_5 + 0x18,&uStack_80);
      }
      if (*(char *)(lVar10 + 0x28) == '\x01') {
        uStack_80 = uStack_80 & 0xffffffff00000000;
        lVar6 = param_3 + 0x18;
        puVar7 = &uStack_80;
        FUN_1086a3d00(lVar6,puVar7,param_4);
        if (((ulong)puVar7 & 1) == 0) goto LAB_108747680;
        bVar1 = lVar6 < *(long *)(lVar10 + 0x20);
        if (iVar11 == 0) goto LAB_108747688;
LAB_1087476c8:
        if ((((!bVar1) && (*(char *)(lVar10 + 0x138) == '\x01')) && (*(long *)(lVar10 + 0x130) != 0)
            ) && (*(long *)(param_3 + 0x1a8) < *(long *)(lVar10 + 0x130))) {
          uVar12 = lVar10 + 0x20;
          FUN_1087108d4(param_1 + 0x108);
          puVar8 = (undefined8 *)(param_1 + 0xf0);
          func_0x000108749ed8();
          uVar13 = *(undefined8 *)(lVar10 + 0x20);
          puVar9 = puVar8;
          func_0x000108749e80();
          *puVar9 = uVar13;
          if ((uVar12 & 1) + (long)puVar8 != 0) goto LAB_1087476c0;
        }
      }
      else {
LAB_108747680:
        bVar1 = true;
        if (iVar11 != 0) goto LAB_1087476c8;
LAB_108747688:
        bVar3 = !bVar1;
        bVar1 = false;
        if (bVar3) goto LAB_1087476c8;
        uVar12 = lVar10 + 0x20;
        FUN_1087108d4(param_1 + 0xf0);
        puVar8 = (undefined8 *)(param_1 + 0x108);
        func_0x000108749ed8();
        uVar13 = *(undefined8 *)(lVar10 + 0x20);
        puVar9 = puVar8;
        func_0x000108749e80();
        *puVar9 = uVar13;
        if ((uVar12 & 1) + (long)puVar8 == 0) goto LAB_10874761c;
LAB_1087476c0:
        *(undefined1 *)(param_5 + 0x30) = 1;
      }
    }
    else if (iVar11 == 2) goto LAB_10874756c;
LAB_10874761c:
    lVar10 = lVar10 + 0x1a8;
  } while( true );
}



/* Entry: 108747744; end: 10874781f;  */

void FUN_108747744(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_58;
  
  lVar1 = param_2[1];
  for (lVar6 = *param_2; lVar6 != lVar1; lVar6 = lVar6 + 0x18) {
    lVar2 = param_1 + 0x28;
    FUN_1087494e0(lVar2,lVar6);
    if (lVar2 == 0) {
      lVar5 = param_1 + 0x50;
      FUN_10869b200(lVar5,lVar6);
    }
    else {
      uStack_58 = *(undefined8 *)(lVar2 + 0x18);
      lVar5 = param_1 + 0x10;
      FUN_10874976c(lVar5,&uStack_58);
      lVar3 = param_1 + 0xf0;
      func_0x00010871ca7c(lVar3,&uStack_58);
      lVar4 = param_1 + 0x108;
      func_0x00010871ca7c(lVar4,&uStack_58);
      if (lVar3 + lVar4 != 0) {
        *(undefined1 *)(param_3 + 0x30) = 1;
      }
      FUN_10874957c(param_1 + 0x28,lVar2);
    }
    if (lVar5 != 0) {
      func_0x000108748984(param_3 + 0x18,lVar6);
    }
  }
  return;
}



/* Entry: 108747820; end: 10874789b;  */

void FUN_108747820(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x19;
  
  func_0x000108749f98(param_1,param_2,param_2);
  FUN_1087474b0();
  FUN_108747744(param_1,param_5);
  if (0 < *(int *)(param_1 + 0xc) && *(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x20)) {
    *(undefined1 *)(unaff_x19 + 0x31) = 1;
  }
  return;
}



/* Entry: 10874789c; end: 10874799f;  */

void FUN_10874789c(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  if (0 < *(int *)(param_1 + 4)) {
    puVar1 = (undefined8 *)param_2[1];
    for (puVar3 = (undefined8 *)(*param_2 + 0x20); puVar3 + -4 != puVar1; puVar3 = puVar3 + 0x35) {
      if (*(char *)(puVar3 + 1) == '\x01') {
        FUN_1087108d4(param_1 + 0x98,puVar3);
        uStack_58 = puVar3[-1];
        uStack_50 = *puVar3;
        uStack_48 = *(undefined1 *)(puVar3 + 1);
        func_0x0001087497f0(param_1 + 200,&uStack_58);
        func_0x00010871ca7c(param_1 + 0xb0,puVar3 + -1);
      }
      else {
        FUN_1087108d4(param_1 + 0xb0,puVar3 + -1);
      }
    }
    lVar2 = param_3[1];
    for (lVar4 = *param_3; lVar4 != lVar2; lVar4 = lVar4 + 0x18) {
      FUN_1087479a0(param_1 + 200,lVar4);
      func_0x00010871ca7c(param_1 + 0xb0,lVar4);
      if (*(char *)(lVar4 + 0x10) == '\x01') {
        func_0x00010871ca7c(param_1 + 0x98,lVar4 + 8);
      }
    }
  }
  return;
}



/* Entry: 1087479a0; end: 1087479b7;  */

void FUN_1087479a0(void)

{
  FUN_108749a18();
  return;
}



/* Entry: 1087479b8; end: 108747a3b;  */

void FUN_1087479b8(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = param_2[1];
  for (lVar3 = *param_2; lVar3 != lVar1; lVar3 = lVar3 + 0x1a8) {
    if (*(char *)(lVar3 + 0x28) == '\x01') {
      func_0x00010871ca7c(param_1 + 0x98,lVar3 + 0x20);
    }
    func_0x00010871ca7c(param_1 + 0xb0,lVar3 + 0x18);
    plVar2 = *(long **)(param_1 + 0xd8);
    while (plVar2 != (long *)0x0) {
      if (plVar2[2] == *(long *)(lVar3 + 0x18)) {
        plVar2 = (long *)(param_1 + 200);
        FUN_1087498bc();
      }
      else {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  return;
}



/* Entry: 108747a3c; end: 108747dfb;  */

void FUN_108747a3c(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuStack_278;
  undefined8 **ppuStack_270;
  undefined8 **ppuStack_268;
  undefined8 **ppuStack_260;
  long *plStack_258;
  long *plStack_250;
  undefined1 uStack_248;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000108749f98();
  if ((*(int *)(param_1 + 4) < 1) && (lVar9 = param_1, FUN_108747dfc(), (int)lVar9 != 0)) {
    lStack_88 = 0;
    lStack_80 = 0;
    puStack_78 = (undefined8 **)0x0;
    if ((*(long *)(param_1 + 0xc0) != 0) && ((*(uint *)(param_1 + 0x90) & 1) == 0)) {
      FUN_108864744(&ppuStack_260,*param_2,param_3);
      FUN_10867b070(&lStack_a0,&ppuStack_260);
      func_0x000107c28948(&ppuStack_260);
      for (lVar9 = lStack_98; lVar9 != lStack_a0; lVar9 = lVar9 + -0x1a8) {
        lVar8 = param_1 + 0xb0;
        FUN_10871cc6c(lVar8,lVar9 + -400);
        if (lVar8 != 0) {
          FUN_10867b444(&lStack_88,lVar9 + -0x1a8);
        }
      }
      func_0x000108749fbc();
    }
    lStack_a0 = 0;
    lStack_98 = 0;
    uStack_90 = 0;
    FUN_10867d03c(&lStack_a0,*(undefined8 *)(param_1 + 0xa8));
    if (*(long *)(param_1 + 0xa8) != 0) {
      FUN_108861c90(&ppuStack_260,*param_2,param_3,param_1 + 0x98);
      func_0x0001086a9b44(&lStack_a0,&ppuStack_260);
      func_0x00010867b9fc(&ppuStack_260);
    }
    uVar5 = 0;
    plVar7 = *(long **)(param_1 + 0xd8);
    ppuStack_270 = (undefined8 ***)0x0;
    ppuStack_268 = (undefined8 ***)0x0;
    ppuStack_278 = (undefined8 ***)0x0;
    for (plVar6 = plVar7; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      uVar5 = uVar5 + 1;
    }
    ppuStack_260 = &ppuStack_278;
    plStack_258 = (long *)((ulong)plStack_258 & 0xffffffffffffff00);
    if (uVar5 != 0) {
      if (0xaaaaaaaaaaaaaaa < uVar5) {
        func_0x00010869ca0c();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x108747d84);
        (*pcVar3)();
      }
      pppuVar4 = &ppuStack_268;
      func_0x00010869cae0();
      ppuStack_268 = pppuVar4 + uVar5 * 3;
      ppuStack_270 = pppuVar4;
      for (; ppuStack_278 = pppuVar4, plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        ppuVar11 = (undefined8 **)plVar7[3];
        ppuVar10 = (undefined8 **)plVar7[2];
        ppuStack_270[2] = (undefined8 **)plVar7[4];
        ppuStack_270[1] = ppuVar11;
        *ppuStack_270 = ppuVar10;
        ppuStack_270 = ppuStack_270 + 3;
      }
    }
    plStack_258 = (long *)CONCAT71(plStack_258._1_7_,1);
    func_0x000108748aa4(&ppuStack_260);
    FUN_10867d03c(&lStack_88,(lStack_98 - lStack_a0) / 0x1a8 + (lStack_80 - lStack_88) / 0x1a8);
    lVar2 = lStack_80;
    lVar8 = lStack_98;
    lVar1 = lStack_a0;
    lVar9 = lStack_98 - lStack_a0;
    if (0 < lVar9) {
      if ((long)puStack_78 - lStack_80 < lVar9) {
        plVar6 = &lStack_88;
        FUN_10867b544(plVar6,(lStack_80 - lStack_88) / 0x1a8 + lVar9 / 0x1a8);
        FUN_10867b638(&ppuStack_260,plVar6,(lVar2 - lStack_88) / 0x1a8,&puStack_78);
        plVar6 = (long *)((long)plStack_250 + lVar9);
        for (; lVar9 != 0; lVar9 = lVar9 + -0x1a8) {
          lVar8 = lVar8 + -0x1a8;
          func_0x000107c28970(plStack_250,lVar8);
          plStack_250 = plStack_250 + 0x35;
        }
        plStack_250 = plVar6;
        FUN_1086cecd8(&lStack_88,&ppuStack_260,lVar2);
        func_0x00010867b814(&ppuStack_260);
      }
      else {
        lStack_70 = lStack_80;
        plStack_258 = &lStack_70;
        plStack_250 = &lStack_68;
        lVar9 = lStack_80;
        ppuStack_260 = &puStack_78;
        while (lStack_68 = lVar9, lVar8 != lVar1) {
          lVar8 = lVar8 + -0x1a8;
          func_0x000107c28970(lVar9,lVar8);
          lVar9 = lStack_68 + 0x1a8;
        }
        uStack_248 = 1;
        FUN_10867b794(&ppuStack_260);
        lStack_80 = lVar9;
      }
    }
    FUN_108747820(&ppuStack_260,param_1,param_3,param_4,&lStack_88,&ppuStack_278);
    FUN_108747e24();
    func_0x000108748a7c(&ppuStack_260);
    FUN_108749d74(param_1 + 0xb0);
    FUN_108749d74(param_1 + 0x98);
    func_0x0001087482a4(param_1 + 200);
    FUN_10869ccc0(&ppuStack_278);
    func_0x000108749fbc();
    func_0x00010867b9fc(&lStack_88);
  }
  return;
}



/* Entry: 108747dfc; end: 108747e23;  */

bool FUN_108747dfc(long param_1)

{
  if ((*(long *)(param_1 + 0xc0) == 0) && (*(long *)(param_1 + 0xa8) == 0)) {
    return *(long *)(param_1 + 0xe0) != 0;
  }
  return true;
}



/* Entry: 108747e24; end: 108747e57;  */

void FUN_108747e24(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108749e38();
  func_0x0001086a9b44();
  func_0x000108748ad0(unaff_x20 + 0x18,unaff_x19 + 0x18);
  *(undefined2 *)(unaff_x20 + 0x30) = *(undefined2 *)(unaff_x19 + 0x30);
  return;
}


