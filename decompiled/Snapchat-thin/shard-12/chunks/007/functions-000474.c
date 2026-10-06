/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109669110; end: 1096691e3;  */

undefined8 FUN_109669110(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  cVar1 = *(char *)(param_1 + 9);
  __ZNSt3__19to_stringEi(auStack_58,cVar1);
  puVar2 = auStack_58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f57b555,0x3e);
  uStack_38 = puVar2[1];
  uStack_40 = *puVar2;
  lStack_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  FUN_10965a66c(cVar1 == '\x01',&uStack_40);
  if (lStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  *(undefined2 *)(param_1 + 0x15a) = 5000;
  return 1;
}



/* Entry: 1096691e4; end: 10966928b;  */

/* WARNING: Removing unreachable block (ram,0x0001095fb814) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7fc) */
/* WARNING: Removing unreachable block (ram,0x0001095fb804) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb2c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb80c) */
/* WARNING: Removing unreachable block (ram,0x0001095fbcac) */
/* WARNING: Removing unreachable block (ram,0x0001095fb858) */
/* WARNING: Removing unreachable block (ram,0x0001095fbaa8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb914) */
/* WARNING: Removing unreachable block (ram,0x0001095fb740) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6cc) */
/* WARNING: Removing unreachable block (ram,0x0001095fb720) */
/* WARNING: Removing unreachable block (ram,0x0001095fb840) */
/* WARNING: Removing unreachable block (ram,0x0001095fb848) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb58) */
/* WARNING: Removing unreachable block (ram,0x0001095fb850) */
/* WARNING: Removing unreachable block (ram,0x0001095fb728) */
/* WARNING: Removing unreachable block (ram,0x0001095fb904) */
/* WARNING: Removing unreachable block (ram,0x0001095fb90c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb730) */
/* WARNING: Removing unreachable block (ram,0x0001095fba50) */
/* WARNING: Removing unreachable block (ram,0x0001095fb738) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb00) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb84) */
/* WARNING: Removing unreachable block (ram,0x0001095fb884) */
/* WARNING: Removing unreachable block (ram,0x0001095fb88c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb894) */
/* WARNING: Removing unreachable block (ram,0x0001095fb89c) */
/* WARNING: Removing unreachable block (ram,0x0001095fbcd8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9f8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9e4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9ec) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd88) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7d0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd04) */
/* WARNING: Removing unreachable block (ram,0x0001095fb678) */
/* WARNING: Removing unreachable block (ram,0x0001095fb680) */
/* WARNING: Removing unreachable block (ram,0x0001095fb688) */
/* WARNING: Removing unreachable block (ram,0x0001095fb690) */
/* WARNING: Removing unreachable block (ram,0x0001095fb698) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9a8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9b0) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9b8) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd5c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7b8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7c0) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7c8) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd30) */
/* WARNING: Removing unreachable block (ram,0x0001095fb78c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb77c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb784) */
/* WARNING: Removing unreachable block (ram,0x0001095fbad4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6d4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6dc) */
/* WARNING: Removing unreachable block (ram,0x0001095fb8c8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb8d0) */
/* WARNING: Removing unreachable block (ram,0x0001095fb8d8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6e4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6ec) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6f4) */
/* WARNING: Removing unreachable block (ram,0x0001095fba24) */
/* WARNING: Removing unreachable block (ram,0x0001095fba7c) */
/* WARNING: Removing unreachable block (ram,0x0001095fbbb0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbbbc) */
/* WARNING: Removing unreachable block (ram,0x0001095fbbe0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbc88) */
/* WARNING: Removing unreachable block (ram,0x0001095fbc90) */
/* WARNING: Removing unreachable block (ram,0x0001095fbc98) */
/* WARNING: Removing unreachable block (ram,0x0001095fbca0) */

undefined8 FUN_1096691e4(long param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined2 uVar7;
  double dVar8;
  double adStack_208 [3];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  
  cVar1 = *(char *)(param_1 + 9);
  if (cVar1 == '\x03') {
    uVar7 = 0x14b4;
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x01') {
        *(undefined2 *)(param_1 + 0x15a) = 0x1450;
        *(undefined1 *)(param_1 + 0x164) = 1;
        return 1;
      }
      lVar4 = 0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC1EPKc();
      lVar5 = lVar4;
      ___cxa_throw(lVar4,PTR___ZTISt13runtime_error_110346a40,
                   PTR___ZNSt13runtime_errorD1Ev_1103461d8);
      ___cxa_free_exception(lVar4);
      __Unwind_Resume();
      uVar2 = *(byte *)(lVar5 + 9) - 1;
      if (2 < uVar2) {
        lVar4 = 0x10;
        ___cxa_allocate_exception();
        __ZNSt13runtime_errorC1EPKc();
        lVar5 = lVar4;
        ___cxa_throw(lVar4,PTR___ZTISt13runtime_error_110346a40,
                     PTR___ZNSt13runtime_errorD1Ev_1103461d8);
        ___cxa_free_exception(lVar4);
        __Unwind_Resume();
        *(undefined2 *)(lVar5 + 0x165) = 0x101;
        if (*(char *)(lVar5 + 9) == '\x02') {
          uVar7 = 0x145a;
        }
        else {
          if (*(char *)(lVar5 + 9) != '\x03') {
            lVar4 = 0x10;
            ___cxa_allocate_exception();
            __ZNSt13runtime_errorC1EPKc();
            lVar5 = lVar4;
            puVar6 = (undefined8 *)PTR___ZTISt13runtime_error_110346a40;
            ___cxa_throw(lVar4,PTR___ZTISt13runtime_error_110346a40,
                         PTR___ZNSt13runtime_errorD1Ev_1103461d8);
            ___cxa_free_exception(lVar4);
            __Unwind_Resume();
            FUN_10965de3c();
            dVar8 = 1.0;
            if (*(char *)(lVar5 + 0x164) == '\0') {
              dVar8 = 0.0;
            }
            lVar5 = *(long *)*puVar6;
            if (*(long *)(lVar5 + 8) == 0) {
              uVar3 = 0;
            }
            else {
              FUN_1095fb63c(dVar8,lVar5,0x807);
              if (dVar8 != 0.0) {
                FUN_1095fb63c(0,lVar5,0x816);
              }
              uVar3 = *(undefined8 *)(lVar5 + 8);
              func_0x000107c31940(auStack_1f0,&UNK_10f576f3b);
              adStack_208[0] = dVar8;
              FUN_1095d7010(uVar3,auStack_1f0,0x22,adStack_208);
              if (cStack_1d9 < '\0') {
                __ZdlPv(auStack_1f0[0]);
              }
              uVar3 = 1;
            }
            return uVar3;
          }
          uVar7 = 0x14b4;
        }
        *(undefined2 *)(lVar5 + 0x15a) = uVar7;
        return 1;
      }
      *(short *)(lVar5 + 0x15a) = (short)(0x17d417701770 >> (((ulong)uVar2 & 3) << 4));
      return 1;
    }
    uVar7 = 0x1464;
  }
  *(undefined2 *)(param_1 + 0x15a) = uVar7;
  *(undefined1 *)(param_1 + 0x165) = 1;
  return 1;
}



/* Entry: 10966928c; end: 109669313;  */

/* WARNING: Removing unreachable block (ram,0x0001095fb814) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7fc) */
/* WARNING: Removing unreachable block (ram,0x0001095fb804) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb2c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb80c) */
/* WARNING: Removing unreachable block (ram,0x0001095fbcac) */
/* WARNING: Removing unreachable block (ram,0x0001095fb858) */
/* WARNING: Removing unreachable block (ram,0x0001095fbaa8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb914) */
/* WARNING: Removing unreachable block (ram,0x0001095fb740) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6cc) */
/* WARNING: Removing unreachable block (ram,0x0001095fb720) */
/* WARNING: Removing unreachable block (ram,0x0001095fb840) */
/* WARNING: Removing unreachable block (ram,0x0001095fb848) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb58) */
/* WARNING: Removing unreachable block (ram,0x0001095fb850) */
/* WARNING: Removing unreachable block (ram,0x0001095fb728) */
/* WARNING: Removing unreachable block (ram,0x0001095fb904) */
/* WARNING: Removing unreachable block (ram,0x0001095fb90c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb730) */
/* WARNING: Removing unreachable block (ram,0x0001095fba50) */
/* WARNING: Removing unreachable block (ram,0x0001095fb738) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb00) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb84) */
/* WARNING: Removing unreachable block (ram,0x0001095fb884) */
/* WARNING: Removing unreachable block (ram,0x0001095fb88c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb894) */
/* WARNING: Removing unreachable block (ram,0x0001095fb89c) */
/* WARNING: Removing unreachable block (ram,0x0001095fbcd8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9f8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9e4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9ec) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd88) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7d0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd04) */
/* WARNING: Removing unreachable block (ram,0x0001095fb678) */
/* WARNING: Removing unreachable block (ram,0x0001095fb680) */
/* WARNING: Removing unreachable block (ram,0x0001095fb688) */
/* WARNING: Removing unreachable block (ram,0x0001095fb690) */
/* WARNING: Removing unreachable block (ram,0x0001095fb698) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9a8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9b0) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9b8) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd5c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7b8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7c0) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7c8) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd30) */
/* WARNING: Removing unreachable block (ram,0x0001095fb78c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb77c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb784) */
/* WARNING: Removing unreachable block (ram,0x0001095fbad4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6d4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6dc) */
/* WARNING: Removing unreachable block (ram,0x0001095fb8c8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb8d0) */
/* WARNING: Removing unreachable block (ram,0x0001095fb8d8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6e4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6ec) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6f4) */
/* WARNING: Removing unreachable block (ram,0x0001095fba24) */
/* WARNING: Removing unreachable block (ram,0x0001095fba7c) */
/* WARNING: Removing unreachable block (ram,0x0001095fbbb0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbbbc) */
/* WARNING: Removing unreachable block (ram,0x0001095fbbe0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbc88) */
/* WARNING: Removing unreachable block (ram,0x0001095fbc90) */
/* WARNING: Removing unreachable block (ram,0x0001095fbc98) */
/* WARNING: Removing unreachable block (ram,0x0001095fbca0) */

undefined8 FUN_10966928c(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined2 uVar6;
  double dVar7;
  double adStack_1e8 [3];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  
  uVar1 = *(byte *)(param_1 + 9) - 1;
  if (uVar1 < 3) {
    *(short *)(param_1 + 0x15a) = (short)(0x17d417701770 >> (((ulong)uVar1 & 3) << 4));
    return 1;
  }
  lVar3 = 0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  lVar4 = lVar3;
  ___cxa_throw(lVar3,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
  ___cxa_free_exception(lVar3);
  __Unwind_Resume();
  *(undefined2 *)(lVar4 + 0x165) = 0x101;
  if (*(char *)(lVar4 + 9) == '\x02') {
    uVar6 = 0x145a;
  }
  else {
    if (*(char *)(lVar4 + 9) != '\x03') {
      lVar3 = 0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC1EPKc();
      lVar4 = lVar3;
      puVar5 = (undefined8 *)PTR___ZTISt13runtime_error_110346a40;
      ___cxa_throw(lVar3,PTR___ZTISt13runtime_error_110346a40,
                   PTR___ZNSt13runtime_errorD1Ev_1103461d8);
      ___cxa_free_exception(lVar3);
      __Unwind_Resume();
      FUN_10965de3c();
      dVar7 = 1.0;
      if (*(char *)(lVar4 + 0x164) == '\0') {
        dVar7 = 0.0;
      }
      lVar4 = *(long *)*puVar5;
      if (*(long *)(lVar4 + 8) == 0) {
        uVar2 = 0;
      }
      else {
        FUN_1095fb63c(dVar7,lVar4,0x807);
        if (dVar7 != 0.0) {
          FUN_1095fb63c(0,lVar4,0x816);
        }
        uVar2 = *(undefined8 *)(lVar4 + 8);
        func_0x000107c31940(auStack_1d0,&UNK_10f576f3b);
        adStack_1e8[0] = dVar7;
        FUN_1095d7010(uVar2,auStack_1d0,0x22,adStack_1e8);
        if (cStack_1b9 < '\0') {
          __ZdlPv(auStack_1d0[0]);
        }
        uVar2 = 1;
      }
      return uVar2;
    }
    uVar6 = 0x14b4;
  }
  *(undefined2 *)(lVar4 + 0x15a) = uVar6;
  return 1;
}



/* Entry: 109669314; end: 1096693a3;  */

/* WARNING: Removing unreachable block (ram,0x0001095fb814) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7fc) */
/* WARNING: Removing unreachable block (ram,0x0001095fb804) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb2c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb80c) */
/* WARNING: Removing unreachable block (ram,0x0001095fbcac) */
/* WARNING: Removing unreachable block (ram,0x0001095fb858) */
/* WARNING: Removing unreachable block (ram,0x0001095fbaa8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb914) */
/* WARNING: Removing unreachable block (ram,0x0001095fb740) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6cc) */
/* WARNING: Removing unreachable block (ram,0x0001095fb720) */
/* WARNING: Removing unreachable block (ram,0x0001095fb840) */
/* WARNING: Removing unreachable block (ram,0x0001095fb848) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb58) */
/* WARNING: Removing unreachable block (ram,0x0001095fb850) */
/* WARNING: Removing unreachable block (ram,0x0001095fb728) */
/* WARNING: Removing unreachable block (ram,0x0001095fb904) */
/* WARNING: Removing unreachable block (ram,0x0001095fb90c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb730) */
/* WARNING: Removing unreachable block (ram,0x0001095fba50) */
/* WARNING: Removing unreachable block (ram,0x0001095fb738) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb00) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb84) */
/* WARNING: Removing unreachable block (ram,0x0001095fb884) */
/* WARNING: Removing unreachable block (ram,0x0001095fb88c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb894) */
/* WARNING: Removing unreachable block (ram,0x0001095fb89c) */
/* WARNING: Removing unreachable block (ram,0x0001095fbcd8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9f8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9e4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9ec) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd88) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7d0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd04) */
/* WARNING: Removing unreachable block (ram,0x0001095fb678) */
/* WARNING: Removing unreachable block (ram,0x0001095fb680) */
/* WARNING: Removing unreachable block (ram,0x0001095fb688) */
/* WARNING: Removing unreachable block (ram,0x0001095fb690) */
/* WARNING: Removing unreachable block (ram,0x0001095fb698) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9a8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9b0) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9b8) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd5c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7b8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7c0) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7c8) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd30) */
/* WARNING: Removing unreachable block (ram,0x0001095fb78c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb77c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb784) */
/* WARNING: Removing unreachable block (ram,0x0001095fbad4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6d4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6dc) */
/* WARNING: Removing unreachable block (ram,0x0001095fb8c8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb8d0) */
/* WARNING: Removing unreachable block (ram,0x0001095fb8d8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6e4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6ec) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6f4) */
/* WARNING: Removing unreachable block (ram,0x0001095fba24) */
/* WARNING: Removing unreachable block (ram,0x0001095fba7c) */
/* WARNING: Removing unreachable block (ram,0x0001095fbbb0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbbbc) */
/* WARNING: Removing unreachable block (ram,0x0001095fbbe0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbc88) */
/* WARNING: Removing unreachable block (ram,0x0001095fbc90) */
/* WARNING: Removing unreachable block (ram,0x0001095fbc98) */
/* WARNING: Removing unreachable block (ram,0x0001095fbca0) */

undefined8 FUN_109669314(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined2 uVar5;
  double dVar6;
  double adStack_1c8 [3];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  
  *(undefined2 *)(param_1 + 0x165) = 0x101;
  if (*(char *)(param_1 + 9) == '\x02') {
    uVar5 = 0x145a;
  }
  else {
    if (*(char *)(param_1 + 9) != '\x03') {
      lVar2 = 0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC1EPKc();
      lVar3 = lVar2;
      puVar4 = (undefined8 *)PTR___ZTISt13runtime_error_110346a40;
      ___cxa_throw(lVar2,PTR___ZTISt13runtime_error_110346a40,
                   PTR___ZNSt13runtime_errorD1Ev_1103461d8);
      ___cxa_free_exception(lVar2);
      __Unwind_Resume();
      FUN_10965de3c();
      dVar6 = 1.0;
      if (*(char *)(lVar3 + 0x164) == '\0') {
        dVar6 = 0.0;
      }
      lVar3 = *(long *)*puVar4;
      if (*(long *)(lVar3 + 8) == 0) {
        uVar1 = 0;
      }
      else {
        FUN_1095fb63c(dVar6,lVar3,0x807);
        if (dVar6 != 0.0) {
          FUN_1095fb63c(0,lVar3,0x816);
        }
        uVar1 = *(undefined8 *)(lVar3 + 8);
        func_0x000107c31940(auStack_1b0,&UNK_10f576f3b);
        adStack_1c8[0] = dVar6;
        FUN_1095d7010(uVar1,auStack_1b0,0x22,adStack_1c8);
        if (cStack_199 < '\0') {
          __ZdlPv(auStack_1b0[0]);
        }
        uVar1 = 1;
      }
      return uVar1;
    }
    uVar5 = 0x14b4;
  }
  *(undefined2 *)(param_1 + 0x15a) = uVar5;
  return 1;
}



/* Entry: 1096693a4; end: 109669447;  */

/* WARNING: Removing unreachable block (ram,0x0001095fb814) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7fc) */
/* WARNING: Removing unreachable block (ram,0x0001095fb804) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb2c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb80c) */
/* WARNING: Removing unreachable block (ram,0x0001095fbcac) */
/* WARNING: Removing unreachable block (ram,0x0001095fb858) */
/* WARNING: Removing unreachable block (ram,0x0001095fbaa8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb914) */
/* WARNING: Removing unreachable block (ram,0x0001095fb740) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6cc) */
/* WARNING: Removing unreachable block (ram,0x0001095fb720) */
/* WARNING: Removing unreachable block (ram,0x0001095fb840) */
/* WARNING: Removing unreachable block (ram,0x0001095fb848) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb58) */
/* WARNING: Removing unreachable block (ram,0x0001095fb850) */
/* WARNING: Removing unreachable block (ram,0x0001095fb728) */
/* WARNING: Removing unreachable block (ram,0x0001095fb904) */
/* WARNING: Removing unreachable block (ram,0x0001095fb90c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb730) */
/* WARNING: Removing unreachable block (ram,0x0001095fba50) */
/* WARNING: Removing unreachable block (ram,0x0001095fb738) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb00) */
/* WARNING: Removing unreachable block (ram,0x0001095fbb84) */
/* WARNING: Removing unreachable block (ram,0x0001095fb884) */
/* WARNING: Removing unreachable block (ram,0x0001095fb88c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb894) */
/* WARNING: Removing unreachable block (ram,0x0001095fb89c) */
/* WARNING: Removing unreachable block (ram,0x0001095fbcd8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9f8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9e4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9ec) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd88) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7d0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd04) */
/* WARNING: Removing unreachable block (ram,0x0001095fb678) */
/* WARNING: Removing unreachable block (ram,0x0001095fb680) */
/* WARNING: Removing unreachable block (ram,0x0001095fb688) */
/* WARNING: Removing unreachable block (ram,0x0001095fb690) */
/* WARNING: Removing unreachable block (ram,0x0001095fb698) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9a8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9b0) */
/* WARNING: Removing unreachable block (ram,0x0001095fb9b8) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd5c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7b8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7c0) */
/* WARNING: Removing unreachable block (ram,0x0001095fb7c8) */
/* WARNING: Removing unreachable block (ram,0x0001095fbd30) */
/* WARNING: Removing unreachable block (ram,0x0001095fb78c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb77c) */
/* WARNING: Removing unreachable block (ram,0x0001095fb784) */
/* WARNING: Removing unreachable block (ram,0x0001095fbad4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6d4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6dc) */
/* WARNING: Removing unreachable block (ram,0x0001095fb8c8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb8d0) */
/* WARNING: Removing unreachable block (ram,0x0001095fb8d8) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6e4) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6ec) */
/* WARNING: Removing unreachable block (ram,0x0001095fb6f4) */
/* WARNING: Removing unreachable block (ram,0x0001095fba24) */
/* WARNING: Removing unreachable block (ram,0x0001095fba7c) */
/* WARNING: Removing unreachable block (ram,0x0001095fbbb0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbbbc) */
/* WARNING: Removing unreachable block (ram,0x0001095fbbe0) */
/* WARNING: Removing unreachable block (ram,0x0001095fbc88) */
/* WARNING: Removing unreachable block (ram,0x0001095fbc90) */
/* WARNING: Removing unreachable block (ram,0x0001095fbc98) */
/* WARNING: Removing unreachable block (ram,0x0001095fbca0) */

undefined8 FUN_1096693a4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double adStack_1a8 [3];
  undefined8 auStack_190 [2];
  char cStack_179;
  
  FUN_10965de3c();
  dVar3 = 1.0;
  if (*(char *)(param_1 + 0x164) == '\0') {
    dVar3 = 0.0;
  }
  lVar2 = *(long *)*param_2;
  if (*(long *)(lVar2 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1095fb63c(dVar3,lVar2,0x807);
    if (dVar3 != 0.0) {
      FUN_1095fb63c(0,lVar2,0x816);
    }
    uVar1 = *(undefined8 *)(lVar2 + 8);
    func_0x000107c31940(auStack_190,&UNK_10f576f3b);
    adStack_1a8[0] = dVar3;
    FUN_1095d7010(uVar1,auStack_190,0x22,adStack_1a8);
    if (cStack_179 < '\0') {
      __ZdlPv(auStack_190[0]);
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 109669448; end: 1096696f7;  */

void FUN_109669448(double *param_1,double *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  double *pdVar3;
  ulong uVar4;
  double dVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  float fVar13;
  
  param_1[1] = -1.0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x19) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *param_1 = *param_2 * 1000.0;
  if (param_2[3] != param_2[2]) {
    lVar10 = 0;
    uVar11 = 0;
    do {
      puVar1 = (undefined4 *)param_1[7];
      if (puVar1 < (undefined4 *)param_1[8]) {
        *(undefined8 *)(puVar1 + 3) = 0;
        *(undefined8 *)(puVar1 + 1) = 0;
        puVar1[7] = 0;
        *(undefined8 *)(puVar1 + 5) = 0;
        *puVar1 = 0xffffffff;
        *(undefined8 *)(puVar1 + 8) = 0;
        puVar12 = puVar1 + 0xb;
        puVar1[10] = 0;
      }
      else {
        lVar8 = (long)puVar1 - (long)param_1[6];
        uVar4 = (lVar8 >> 2) * 0x2e8ba2e8ba2e8ba3 + 1;
        if (0x5d1745d1745d174 < uVar4) {
          FUN_10965cfa4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1096696d8);
          (*pcVar2)();
        }
        lVar6 = (long)param_1[8] - (long)param_1[6] >> 2;
        uVar7 = lVar6 * 0x5d1745d1745d1746;
        if (uVar7 < uVar4 || uVar7 - uVar4 == 0) {
          uVar7 = uVar4;
        }
        if (0x2e8ba2e8ba2e8b9 < (ulong)(lVar6 * 0x2e8ba2e8ba2e8ba3)) {
          uVar7 = 0x5d1745d1745d174;
        }
        pdVar3 = param_1 + 6;
        FUN_10965cfb8();
        puVar1 = (undefined4 *)((long)pdVar3 + lVar8);
        *(undefined8 *)(puVar1 + 3) = 0;
        *(undefined8 *)(puVar1 + 1) = 0;
        puVar1[7] = 0;
        *(undefined8 *)(puVar1 + 5) = 0;
        *puVar1 = 0xffffffff;
        *(undefined8 *)(puVar1 + 8) = 0;
        puVar1[10] = 0;
        puVar12 = puVar1 + 0xb;
        dVar9 = (double)((long)puVar1 - ((long)param_1[7] - (long)param_1[6]));
        _memcpy(dVar9);
        dVar5 = param_1[6];
        param_1[6] = dVar9;
        param_1[7] = (double)puVar12;
        param_1[8] = (double)((long)pdVar3 + uVar7 * 0x2c);
        if (dVar5 != 0.0) {
          __ZdlPv();
        }
      }
      param_1[7] = (double)puVar12;
      dVar5 = param_2[2];
      puVar1 = (undefined4 *)((long)dVar5 + lVar10);
      if (*(char *)(puVar1 + 8) == '\x01') {
        puVar12[-0xb] = *puVar1;
        if (*(char *)(puVar1 + 3) == '\x01') {
          *(undefined8 *)(puVar12 + -9) = *(undefined8 *)((long)dVar5 + lVar10 + 4);
          *(undefined1 *)(puVar12 + -10) = 1;
        }
        lVar8 = (long)dVar5 + lVar10;
        if (*(char *)(lVar8 + 0x1c) == '\x01') {
          fVar13 = *(float *)(lVar8 + 0x18);
          *(ulong *)(puVar12 + -3) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x10) >> 0x20) * 1000.0,
                        (float)*(undefined8 *)(lVar8 + 0x10) * 1000.0);
          puVar12[-1] = fVar13 * 1000.0;
          *(undefined1 *)(puVar12 + -4) = 1;
        }
      }
      dVar5 = param_2[5];
      puVar1 = (undefined4 *)((long)dVar5 + lVar10);
      if ((*(char *)(puVar1 + 8) == '\x01') &&
         (puVar12[-0xb] = *puVar1, *(char *)(puVar1 + 3) == '\x01')) {
        *(undefined8 *)(puVar12 + -6) = *(undefined8 *)((long)dVar5 + lVar10 + 4);
        *(undefined1 *)(puVar12 + -7) = 1;
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x24;
    } while (uVar11 < (ulong)(((long)param_2[3] - (long)param_2[2] >> 2) * -0x71c71c71c71c71c7));
  }
  return;
}



/* Entry: 1096696f8; end: 10966975f;  */

void FUN_1096696f8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_110b007c8;
    puVar1[2] = param_2;
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  *param_1 = puVar1;
  param_1[1] = param_2;
  FUN_10966b23c(&uStack_30);
  return;
}



/* Entry: 109669760; end: 10966b1c3;  */

void FUN_109669760(double param_1,uint *param_2,uint *param_3,uint *param_4,int param_5)

{
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  code *pcVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined4 *puVar26;
  ulong *puVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  uint uVar32;
  uint uVar33;
  long lVar34;
  ulong uVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  uint uVar40;
  undefined4 *puVar41;
  uint uVar42;
  int iVar43;
  uint uVar44;
  long lVar45;
  uint uVar46;
  uint uVar47;
  ulong uVar48;
  long lVar49;
  long lVar50;
  uint uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  uint uStack_348;
  undefined4 uStack_344;
  undefined8 uStack_340;
  undefined4 uStack_338;
  ulong uStack_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  uint uStack_320;
  undefined4 uStack_31c;
  undefined8 uStack_318;
  undefined4 uStack_310;
  ulong uStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  uint uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  ulong uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [40];
  undefined1 auStack_178 [40];
  undefined1 auStack_150 [40];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  uint auStack_b4 [5];
  
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar27 = *(ulong **)(param_2 + 2);
    puStack_1d0 = (undefined8 *)((ulong)&uStack_210 | 8);
    uStack_208 = puVar27[1];
    uStack_210 = *puVar27;
    uStack_1f8 = puVar27[3];
    uStack_200 = puVar27[2];
    uStack_1e8 = puVar27[5];
    uStack_1f0 = puVar27[4];
    uStack_1d8 = puVar27[7];
    uStack_1e0 = puVar27[6];
    puStack_1c8 = &uStack_1c0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    if (puVar27[7] != 0) {
      piVar2 = (int *)(puVar27[7] + 0x14);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = *piVar2 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    if (*(int *)((long)puVar27 + 4) < 3) {
      uStack_1c0 = *(undefined8 *)puVar27[9];
      uStack_1b8 = ((undefined8 *)puVar27[9])[1];
    }
    else {
      uStack_210 = uStack_210 & 0xffffffff;
      func_0x000109a84868(&uStack_210);
    }
  }
  else {
    FUN_109a8a180(&uStack_210,param_2,0xffffffff);
  }
  if ((*param_3 & 0x1f0000) == 0x10000) {
    puVar27 = *(ulong **)(param_3 + 2);
    uStack_230 = (ulong)&uStack_270 | 8;
    uStack_268 = puVar27[1];
    uStack_270 = *puVar27;
    uStack_258 = puVar27[3];
    uStack_260 = puVar27[2];
    uStack_248 = puVar27[5];
    uStack_250 = puVar27[4];
    uStack_238 = puVar27[7];
    uStack_240 = puVar27[6];
    puStack_228 = &uStack_220;
    uStack_220 = 0;
    uStack_218 = 0;
    if (puVar27[7] != 0) {
      piVar2 = (int *)(puVar27[7] + 0x14);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = *piVar2 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    if (*(int *)((long)puVar27 + 4) < 3) {
      uStack_220 = *(undefined8 *)puVar27[9];
      uStack_218 = ((undefined8 *)puVar27[9])[1];
    }
    else {
      uStack_270 = uStack_270 & 0xffffffff;
      func_0x000109a84868(&uStack_270);
    }
  }
  else {
    FUN_109a8a180(&uStack_270,param_3,0xffffffff);
  }
  uStack_2d0 = NEON_rev64(*puStack_1d0,4);
  FUN_109a8ee3c(param_4,&uStack_2d0,(uint)uStack_210 & 0xfff,0xffffffff,0,0);
  if ((*param_4 & 0x1f0000) == 0x10000) {
    puVar27 = *(ulong **)(param_4 + 2);
    uStack_2c8 = puVar27[1];
    uStack_2d0 = *puVar27;
    uStack_2b8 = puVar27[3];
    uStack_2c0 = puVar27[2];
    uStack_2a8 = puVar27[5];
    uStack_2b0 = puVar27[4];
    uStack_298 = puVar27[7];
    uStack_2a0 = puVar27[6];
    uStack_290 = (ulong)&uStack_2d0 | 8;
    puStack_288 = &uStack_280;
    uStack_280 = 0;
    uStack_278 = 0;
    if (puVar27[7] != 0) {
      piVar2 = (int *)(puVar27[7] + 0x14);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = *piVar2 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    if (*(int *)((long)puVar27 + 4) < 3) {
      uStack_280 = *(undefined8 *)puVar27[9];
      uStack_278 = ((undefined8 *)puVar27[9])[1];
    }
    else {
      uStack_2d0 = uStack_2d0 & 0xffffffff;
      func_0x000109a84868(&uStack_2d0);
    }
  }
  else {
    FUN_109a8a180(&uStack_2d0,param_4,0xffffffff);
  }
  uStack_2d4 = uStack_208._4_4_;
  if (uStack_210._4_4_ == 1) {
    uStack_2d4 = 1;
  }
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = uStack_200;
  uStack_2d8 = (undefined4)uStack_208;
  uStack_2f8 = (uint)uStack_210 & 0x4fff | 0x42420000;
  uStack_2f4 = (undefined4)*puStack_1c8;
  uStack_308 = uStack_260;
  uStack_2fc = uStack_268._4_4_;
  if (uStack_270._4_4_ == 1) {
    uStack_2fc = 1;
  }
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_300 = (undefined4)uStack_268;
  uStack_320 = (uint)uStack_270 & 0x4fff | 0x42420000;
  uStack_31c = (undefined4)*puStack_228;
  uStack_330 = uStack_2c0;
  uStack_324 = uStack_2c8._4_4_;
  if (uStack_2d0._4_4_ == 1) {
    uStack_324 = 1;
  }
  uStack_340 = 0;
  uStack_338 = 0;
  uStack_328 = (undefined4)uStack_2c8;
  uStack_348 = (uint)uStack_2d0 & 0x4fff | 0x42420000;
  uStack_344 = (undefined4)*puStack_288;
  uStack_c8 = 0;
  lStack_c0 = 0;
  uStack_d8 = 0;
  lStack_d0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  puStack_110 = (undefined8 *)0x0;
  puStack_118 = (undefined8 *)0x0;
  uStack_120 = 0;
  uStack_128 = 0;
  puVar18 = &uStack_2f8;
  FUN_109a3b884(puVar18,auStack_150,0,0);
  puVar19 = &uStack_320;
  FUN_109a3b884(puVar19,auStack_178,0,0);
  puVar20 = &uStack_348;
  FUN_109a3b884(puVar20,auStack_1a0,0,0);
  uVar9 = puVar18[8];
  if ((((uVar9 != puVar20[8]) || (uVar44 = puVar18[9], uVar44 != puVar20[9])) ||
      (uVar9 != puVar19[8])) || (uVar44 != puVar19[9])) {
    puVar26 = (undefined4 *)0x3c;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar26 + 3) = 0x6e61207475706e69;
    *(undefined8 *)(puVar26 + 1) = 0x20656874206c6c41;
    *puVar26 = 1;
    puStack_1b0 = puVar26 + 1;
    uStack_1a8 = 0x37;
    *(undefined1 *)((long)puVar26 + 0x3b) = 0;
    *(undefined8 *)(puVar26 + 7) = 0x20736567616d6920;
    *(undefined8 *)(puVar26 + 5) = 0x74757074756f2064;
    *(undefined8 *)(puVar26 + 0xb) = 0x6173206568742065;
    *(undefined8 *)(puVar26 + 9) = 0x766168207473756d;
    *(undefined8 *)((long)puVar26 + 0x33) = 0x657a697320656d61;
    FUN_109ac3188(0xffffff2f,&puStack_1b0,&UNK_10f57b799,&UNK_10f57b7a3,0x20a);
LAB_10966b058:
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x10966b05c);
    (*pcVar17)();
  }
  uVar32 = *puVar18;
  if (((0x10 < (uVar32 & 0xfff)) || ((1 << (ulong)(uVar32 & 0x1f) & 0x10025U) == 0)) ||
     (((*puVar20 ^ uVar32) & 0xfff) != 0)) {
    puVar26 = (undefined4 *)0x6c;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar26 + 0xf) = 0x6168632d33207469;
    *(undefined8 *)(puVar26 + 0xd) = 0x622d3820646e6120;
    *(undefined8 *)(puVar26 + 0x13) = 0x757074756f2f7475;
    *(undefined8 *)(puVar26 + 0x11) = 0x706e69206c656e6e;
    *(undefined8 *)(puVar26 + 0x17) = 0x7075732065726120;
    *(undefined8 *)(puVar26 + 0x15) = 0x736567616d692074;
    *(undefined8 *)(puVar26 + 3) = 0x6e75207469622d36;
    *(undefined8 *)(puVar26 + 1) = 0x31202c7469622d38;
    *(undefined8 *)(puVar26 + 7) = 0x7469622d32332072;
    *(undefined8 *)(puVar26 + 5) = 0x6f2064656e676973;
    *puVar26 = 1;
    puStack_1b0 = puVar26 + 1;
    uStack_1a8 = 0x66;
    *(undefined1 *)((long)puVar26 + 0x6a) = 0;
    *(undefined8 *)((long)puVar26 + 0x62) = 0x646574726f707075;
    *(undefined8 *)(puVar26 + 0xb) = 0x6c656e6e6168632d;
    *(undefined8 *)(puVar26 + 9) = 0x312074616f6c6620;
    FUN_109ac3188(0xffffff2e,&puStack_1b0,&UNK_10f57b799,&UNK_10f57b7a3,0x211);
    goto LAB_10966b058;
  }
  if ((*puVar19 & 0xfff) != 0) {
    puVar26 = (undefined4 *)0x2c;
    func_0x000107c2ae8c();
    *puVar26 = 1;
    puStack_1b0 = puVar26 + 1;
    uStack_1a8 = 0x26;
    *(undefined1 *)((long)puVar26 + 0x2a) = 0;
    *(undefined8 *)(puVar26 + 3) = 0x6562207473756d20;
    *(undefined8 *)(puVar26 + 1) = 0x6b73616d20656854;
    *(undefined8 *)(puVar26 + 7) = 0x6c656e6e6168632d;
    *(undefined8 *)(puVar26 + 5) = 0x31207469622d3820;
    *(undefined8 *)((long)puVar26 + 0x22) = 0x6567616d69206c65;
    FUN_109ac3188(0xffffff2e,&puStack_1b0,&UNK_10f57b799,&UNK_10f57b7a3,0x214);
    goto LAB_10966b058;
  }
  uVar32 = (uint)(long)(double)(long)param_1;
  if ((int)uVar32 < 2) {
    uVar32 = 1;
  }
  if (99 < (int)uVar32) {
    uVar32 = 100;
  }
  uVar21 = (ulong)(uVar9 + 2);
  FUN_109a38f44(uVar21,uVar44 + 2,0);
  FUN_109a3907c();
  FUN_1096696f8(&uStack_e8,uVar21);
  uVar21 = (ulong)(uVar9 + 2);
  FUN_109a38f44(uVar21,uVar44 + 2,5);
  FUN_109a3907c();
  FUN_1096696f8(&uStack_f8,uVar21);
  uVar21 = (ulong)(uVar9 + 2);
  FUN_109a38f44(uVar21,uVar44 + 2,0);
  FUN_109a3907c();
  FUN_1096696f8(&uStack_d8,uVar21);
  uVar21 = (ulong)(uVar9 + 2);
  FUN_109a38f44(uVar21,uVar44 + 2,0);
  FUN_109a3907c();
  FUN_1096696f8(&uStack_c8,uVar21);
  lVar22 = 3;
  FUN_109b35660(3,3,1,1,1,0);
  FUN_109a4ad30(puVar18,puVar20,0);
  FUN_109a4b510(0,0,0,0,lStack_c0,0);
  uVar44 = puVar19[8];
  if (0 < (int)uVar44) {
    lVar34 = 0;
    uVar42 = puVar19[9];
    lVar39 = 1;
    do {
      if (0 < (int)uVar42) {
        lVar45 = 0;
        do {
          if (*(char *)(*(long *)(puVar19 + 6) + lVar34 * (int)puVar19[1] + lVar45) != '\0') {
            *(undefined1 *)
             (*(long *)(lStack_c0 + 0x18) + lVar39 * *(int *)(lStack_c0 + 4) + lVar45 + 1) = 2;
            uVar42 = puVar19[9];
          }
          lVar45 = lVar45 + 1;
        } while (lVar45 < (int)uVar42);
        uVar44 = puVar19[8];
      }
      lVar34 = lVar34 + 1;
      lVar39 = lVar39 + 1;
    } while (lVar34 < (int)uVar44);
  }
  if (0 < *(int *)(lStack_c0 + 0x24)) {
    lVar34 = 0;
    do {
      *(undefined1 *)(*(long *)(lStack_c0 + 0x18) + lVar34) = 0;
      lVar34 = lVar34 + 1;
    } while (lVar34 < *(int *)(lStack_c0 + 0x24));
  }
  if (2 < *(int *)(lStack_c0 + 0x20)) {
    lVar34 = 1;
    do {
      *(undefined1 *)
       (*(long *)(lStack_c0 + 0x18) + lVar34 * *(int *)(lStack_c0 + 4) +
        (long)*(int *)(lStack_c0 + 0x24) + -1) = 0;
      *(undefined1 *)(*(long *)(lStack_c0 + 0x18) + lVar34 * *(int *)(lStack_c0 + 4)) = 0;
      lVar34 = lVar34 + 1;
    } while (lVar34 < (long)*(int *)(lStack_c0 + 0x20) + -1);
  }
  if (0 < *(int *)(lStack_c0 + 0x24)) {
    lVar34 = 0;
    do {
      *(undefined1 *)
       (*(long *)(lStack_c0 + 0x18) + (long)*(int *)(lStack_c0 + 4) * ((long)(int)uVar9 + 1) +
       lVar34) = 0;
      lVar34 = lVar34 + 1;
    } while (lVar34 < *(int *)(lStack_c0 + 0x24));
  }
  FUN_109a4b510(0,0,0,0,uStack_e0,0);
  FUN_109a4b510(0x412e848000000000,0,0,0,lStack_f0,0);
  FUN_109b3589c(lStack_c0,lStack_d0,lVar22,1);
  puVar23 = (undefined8 *)0x28;
  __Znwm();
  puVar23[4] = 0;
  puVar23[1] = 0;
  *puVar23 = 0;
  puVar23[3] = 0;
  puVar23[2] = 0;
  puVar24 = (undefined8 *)0x20;
  __Znwm();
  *(undefined4 *)(puVar24 + 1) = 1;
  *puVar24 = &PTR_FUN_110b00808;
  puVar24[2] = puVar23;
  uStack_1a8 = 0;
  puStack_1b0 = (undefined4 *)0x0;
  puStack_118 = puVar24;
  puStack_110 = puVar23;
  FUN_10966b290(&puStack_1b0);
  *(undefined4 *)(puVar23 + 4) = 0;
  iVar43 = *(int *)(lStack_d0 + 0x20);
  if (0 < iVar43) {
    iVar36 = 0;
    lVar34 = 0;
    uVar21 = (ulong)*(uint *)(lStack_d0 + 0x24);
    do {
      if (0 < (int)uVar21) {
        lVar39 = 0;
        iVar43 = *(int *)(lStack_d0 + 4);
        do {
          if (*(char *)(*(long *)(lStack_d0 + 0x18) + lVar34 * iVar43 + lVar39) != '\0') {
            iVar36 = iVar36 + 1;
          }
          *(int *)(puVar23 + 4) = iVar36;
          lVar39 = lVar39 + 1;
          uVar21 = (ulong)*(int *)(lStack_d0 + 0x24);
        } while (lVar39 < (long)uVar21);
        iVar43 = *(int *)(lStack_d0 + 0x20);
      }
      lVar34 = lVar34 + 1;
    } while (lVar34 < iVar43);
    if (0 < iVar36) {
      puVar26 = (undefined4 *)((ulong)(iVar36 + 2) << 5);
      func_0x000107c2ae8c();
      *puVar23 = puVar26;
      if (puVar26 != (undefined4 *)0x0) {
        puVar23[2] = puVar26;
        *(undefined8 *)(puVar26 + 1) = 0xffffffffffffffff;
        *(undefined8 *)(puVar26 + 4) = 0;
        *(undefined4 **)(puVar26 + 6) = puVar26 + 8;
        *puVar26 = 0xff7fffff;
        puVar23[1] = puVar26 + 8;
        uVar21 = (ulong)*(uint *)(puVar23 + 4);
        if ((int)*(uint *)(puVar23 + 4) < 1) {
          lVar34 = 1;
        }
        else {
          lVar34 = uVar21 + 1;
          puVar41 = puVar26 + 0x10;
          do {
            *(undefined4 **)(puVar41 + -4) = puVar41 + -0x10;
            *(undefined4 **)(puVar41 + -2) = puVar41;
            *(undefined8 *)(puVar41 + -8) = 0xffffffff7f7fffff;
            puVar41 = puVar41 + 8;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
        puVar26 = puVar26 + lVar34 * 8;
        puVar23[3] = puVar26;
        *(undefined8 *)(puVar26 + 1) = 0xffffffffffffffff;
        *(undefined4 **)(puVar26 + 4) = puVar26 + -8;
        *(undefined8 *)(puVar26 + 6) = 0;
        *puVar26 = 0x7f7fffff;
        FUN_109a2d6c8(lStack_d0,lStack_c0,lStack_d0,0);
        lVar34 = lStack_d0;
        if (0 < *(int *)(lStack_d0 + 0x24)) {
          lVar39 = 0;
          do {
            *(undefined1 *)(*(long *)(lStack_d0 + 0x18) + lVar39) = 0;
            lVar39 = lVar39 + 1;
          } while (lVar39 < *(int *)(lStack_d0 + 0x24));
        }
        if (2 < *(int *)(lStack_d0 + 0x20)) {
          lVar39 = 1;
          do {
            *(undefined1 *)
             (*(long *)(lStack_d0 + 0x18) + lVar39 * *(int *)(lStack_d0 + 4) +
              (long)*(int *)(lStack_d0 + 0x24) + -1) = 0;
            *(undefined1 *)(*(long *)(lStack_d0 + 0x18) + lVar39 * *(int *)(lStack_d0 + 4)) = 0;
            lVar39 = lVar39 + 1;
          } while (lVar39 < (long)*(int *)(lStack_d0 + 0x20) + -1);
        }
        uVar21 = (ulong)*(uint *)(lStack_d0 + 0x24);
        if (0 < (int)*(uint *)(lStack_d0 + 0x24)) {
          lVar39 = 0;
          do {
            *(undefined1 *)
             (*(long *)(lStack_d0 + 0x18) + (long)*(int *)(lStack_d0 + 4) * (long)(int)(uVar9 + 1) +
             lVar39) = 0;
            lVar39 = lVar39 + 1;
            uVar21 = (ulong)*(int *)(lStack_d0 + 0x24);
          } while (lVar39 < (long)uVar21);
        }
        iVar43 = *(int *)(lStack_d0 + 0x20);
        if (0 < iVar43) {
          lVar39 = 0;
          do {
            if (0 < (int)uVar21) {
              lVar45 = 0;
              do {
                if (*(char *)(*(long *)(lVar34 + 0x18) + lVar39 * *(int *)(lVar34 + 4) + lVar45) !=
                    '\0') {
                  puVar24 = puVar23;
                  FUN_10966b1c4(0,puVar23,lVar39,lVar45);
                  if ((int)puVar24 == 0) goto LAB_10966a67c;
                  uVar21 = (ulong)*(uint *)(lVar34 + 0x24);
                }
                lVar45 = lVar45 + 1;
              } while (lVar45 < (int)uVar21);
              iVar43 = *(int *)(lVar34 + 0x20);
            }
            lVar39 = lVar39 + 1;
          } while (lVar39 < iVar43);
        }
        FUN_109a4b510(0x3ff0000000000000,0,0,0,uStack_e0,lStack_d0);
        FUN_109a4b510(0x4000000000000000,0,0,0,uStack_e0,lStack_c0);
        uVar21 = 0;
        FUN_109a4b510(0,0,0,0,lStack_f0,lStack_d0);
        lVar39 = lStack_c0;
        lVar34 = lStack_f0;
        if (param_5 != 1) {
          if (param_5 != 0) {
            puVar26 = (undefined4 *)0x48;
            func_0x000107c2ae8c();
            *(undefined8 *)(puVar26 + 3) = 0x656d756772612073;
            *(undefined8 *)(puVar26 + 1) = 0x67616c6620656854;
            *(undefined8 *)(puVar26 + 7) = 0x6f20656e6f206562;
            *(undefined8 *)(puVar26 + 5) = 0x207473756d20746e;
            *(undefined8 *)(puVar26 + 0xb) = 0x4c45545f544e4941;
            *(undefined8 *)(puVar26 + 9) = 0x504e495f56432066;
            *puVar26 = 1;
            puStack_1b0 = puVar26 + 1;
            uStack_1a8 = 0x43;
            *(undefined1 *)((long)puVar26 + 0x47) = 0;
            *(undefined4 *)((long)puVar26 + 0x43) = 0x534e5f54;
            *(undefined8 *)(puVar26 + 0xf) = 0x544e4941504e495f;
            *(undefined8 *)(puVar26 + 0xd) = 0x564320726f204145;
            FUN_109ac3188(0xfffffffb,&puStack_1b0,&UNK_10f57b799,&UNK_10f57b7a3,0x23d);
            goto LAB_10966b058;
          }
          if ((*puVar20 & 7) != 5) {
            puVar26 = (undefined4 *)0x2c;
            func_0x000107c2ae8c();
            *puVar26 = 1;
            puStack_1b0 = puVar26 + 1;
            uStack_1a8 = 0x25;
            *(undefined1 *)((long)puVar26 + 0x29) = 0;
            *(undefined8 *)(puVar26 + 3) = 0x6d726f6620646574;
            *(undefined8 *)(puVar26 + 1) = 0x726f707075736e55;
            *(undefined8 *)(puVar26 + 7) = 0x207475706e692065;
            *(undefined8 *)(puVar26 + 5) = 0x687420666f207461;
            *(undefined8 *)((long)puVar26 + 0x21) = 0x6567616d69207475;
            FUN_109ac3188(0xfffffffb,&puStack_1b0,&UNK_10f57b799,&UNK_10f57b7a3,0x23a);
            goto LAB_10966b058;
          }
          puStack_1b0 = (undefined4 *)((ulong)puStack_1b0 & 0xffffffff00000000);
          auStack_b4[0] = 0;
          uVar9 = *puVar20 >> 3 & 0x1ff;
          if (uVar9 == 2) {
            puVar24 = puVar23;
            FUN_10966b37c(puVar23,&puStack_1b0,auStack_b4);
            if ((int)puVar24 != 0) {
              do {
                uVar16 = auStack_b4[0];
                iVar43 = 0;
                uVar42 = (uint)puStack_1b0;
                *(undefined1 *)
                 (*(long *)(lVar39 + 0x18) +
                  (long)(int)(uint)puStack_1b0 * (long)*(int *)(lVar39 + 4) +
                 (long)(int)auStack_b4[0]) = 0;
                uVar9 = auStack_b4[0] - 1;
                uVar44 = (uint)puStack_1b0 - 1;
                do {
                  fVar53 = (float)uVar21;
                  if (iVar43 == 2) {
                    uVar6 = uVar42 + 1;
                    uVar8 = uVar16;
                  }
                  else {
                    uVar6 = uVar42;
                    uVar8 = uVar16 + 1;
                  }
                  uVar38 = uVar44;
                  uVar46 = uVar16;
                  if (iVar43 != 0) {
                    uVar38 = uVar42;
                    uVar46 = uVar9;
                  }
                  if (iVar43 < 2) {
                    uVar8 = uVar46;
                  }
                  uVar48 = (ulong)uVar8;
                  if (iVar43 < 2) {
                    uVar6 = uVar38;
                  }
                  uVar28 = (ulong)uVar6;
                  if (((1 < (int)uVar6) && (1 < (int)uVar8)) &&
                     (((int)uVar6 < *(int *)(lVar34 + 0x20) &&
                      ((int)uVar8 < *(int *)(lVar34 + 0x24))))) {
                    lVar45 = *(long *)(lVar39 + 0x18);
                    lVar49 = (long)*(int *)(lVar39 + 4);
                    if (*(char *)(lVar45 + lVar49 * uVar28 + (ulong)uVar8) == '\x02') {
                      lVar31 = (long)*(int *)(lVar34 + 4);
                      lVar50 = *(long *)(lVar34 + 0x18);
                      func_0x00010966b3d8();
                      fVar54 = fVar53;
                      func_0x00010966b3d8(uVar6 + 1,uVar48,uVar28,uVar8 - 1,lVar49,lVar45,lVar31,
                                          lVar50);
                      fVar55 = fVar54;
                      func_0x00010966b3d8((ulong)(uVar6 - 1),uVar48,uVar28,uVar8 + 1,lVar49,lVar45,
                                          lVar31,lVar50);
                      fVar52 = fVar55;
                      func_0x00010966b3d8(uVar6 + 1,uVar48,uVar28,uVar8 + 1,lVar49,lVar45,lVar31,
                                          lVar50);
                      lVar45 = 0;
                      if (fVar53 <= fVar54) {
                        fVar54 = fVar53;
                      }
                      if (fVar55 <= fVar52) {
                        fVar52 = fVar55;
                      }
                      if (fVar54 <= fVar52) {
                        fVar52 = fVar54;
                      }
                      uVar21 = (ulong)(uint)fVar52;
                      *(float *)(lVar50 + lVar31 * uVar28 + uVar48 * 4) = fVar52;
                      do {
                        iVar36 = (int)lVar45 + -3;
                        fVar52 = 0.0;
                        uVar25 = (ulong)(uVar6 - uVar32);
                        fVar53 = 1e-20;
                        do {
                          uVar38 = 0;
                          uVar29 = (uint)uVar25;
                          uVar14 = uVar29 - 1;
                          uVar46 = uVar14;
                          if (uVar14 == 0) {
                            uVar46 = uVar29;
                          }
                          uVar40 = (uint)(uVar29 == *(int *)(lVar39 + 0x20) - 2U);
                          iVar13 = uVar14 - uVar40;
                          iVar4 = uVar29 - uVar6;
                          fVar54 = (float)iVar4;
                          uVar33 = uVar29 + 1;
                          do {
                            uVar37 = (uVar8 - uVar32) + uVar38;
                            uVar47 = ~uVar32 + uVar8 + uVar38;
                            uVar3 = uVar47;
                            if (uVar37 == 1) {
                              uVar3 = uVar47 + 1;
                            }
                            uVar35 = (ulong)uVar3;
                            if ((((0 < (int)uVar29) && (0 < (int)uVar37)) &&
                                ((int)uVar29 < *(int *)(lVar39 + 0x20) + -1)) &&
                               ((int)uVar37 < *(int *)(lVar39 + 0x24) + -1)) {
                              lVar49 = *(long *)(lVar39 + 0x18);
                              lVar31 = (long)*(int *)(lVar39 + 4);
                              lVar50 = lVar49 + lVar31 * uVar25;
                              pcVar1 = (char *)(lVar50 + (ulong)uVar37);
                              iVar5 = -uVar32 + uVar38;
                              if (*pcVar1 != '\x02' &&
                                  (uint)(iVar4 * iVar4 + iVar5 * iVar5) <= uVar32 * uVar32) {
                                cVar11 = *(char *)(lVar49 + lVar31 * (ulong)uVar14 + (ulong)uVar37);
                                if (*(char *)(lVar49 + lVar31 * (ulong)uVar33 + (ulong)uVar37) ==
                                    '\x02') {
                                  fVar55 = 0.0;
                                  if (cVar11 != '\x02') {
                                    lVar49 = lVar45 + (int)(uVar3 * 3);
                                    uVar30 = (uint)*(byte *)(*(long *)(puVar20 + 6) +
                                                             (long)(int)puVar20[1] * (long)iVar13 +
                                                            lVar49) -
                                             (uint)*(byte *)(*(long *)(puVar20 + 6) +
                                                             (long)(int)puVar20[1] *
                                                             (long)(int)(uVar46 - 1) + lVar49);
                                    uVar37 = -uVar30;
                                    if (-1 < (int)uVar30) {
                                      uVar37 = uVar30;
                                    }
                                    fVar55 = (float)uVar37 + (float)uVar37;
                                  }
                                }
                                else {
                                  lVar31 = *(long *)(puVar20 + 6);
                                  uVar30 = puVar20[1];
                                  lVar49 = lVar45 + (int)(uVar3 * 3);
                                  uVar51 = (uint)*(byte *)(lVar31 + (long)(int)uVar30 * (long)iVar13
                                                          + lVar49);
                                  uVar10 = *(byte *)(lVar31 + (long)(int)uVar30 *
                                                              (long)(int)(uVar29 - uVar40) + lVar49)
                                           - uVar51;
                                  uVar37 = -uVar10;
                                  if (-1 < (int)uVar10) {
                                    uVar37 = uVar10;
                                  }
                                  if (cVar11 == '\x02') {
                                    fVar55 = (float)uVar37 + (float)uVar37;
                                  }
                                  else {
                                    iVar15 = uVar51 - *(byte *)(lVar31 + (long)(int)uVar30 *
                                                                         (long)(int)(uVar46 - 1) +
                                                               lVar49);
                                    iVar7 = -iVar15;
                                    if (-1 < iVar15) {
                                      iVar7 = iVar15;
                                    }
                                    fVar55 = (float)(iVar7 + uVar37);
                                  }
                                }
                                cVar11 = *(char *)(lVar50 + (ulong)uVar47);
                                if (pcVar1[1] == '\x02') {
                                  fVar56 = 0.0;
                                  if (cVar11 != '\x02') {
                                    lVar31 = *(long *)(puVar20 + 6) +
                                             (long)(int)puVar20[1] * (long)(int)uVar46;
                                    lVar49 = (-(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 |
                                             uVar35 << 1) + (long)(int)uVar3;
                                    uVar47 = (uint)*(byte *)(lVar31 + lVar45 + lVar49) -
                                             (uint)*(byte *)(lVar31 + ((int)lVar49 + iVar36));
                                    uVar37 = -uVar47;
                                    if (-1 < (int)uVar47) {
                                      uVar37 = uVar47;
                                    }
                                    fVar56 = (float)uVar37 + (float)uVar37;
                                  }
                                }
                                else {
                                  lVar50 = *(long *)(puVar20 + 6) +
                                           (long)(int)puVar20[1] * (long)(int)uVar46;
                                  lVar31 = lVar50 + lVar45;
                                  lVar49 = (-(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 |
                                           uVar35 << 1) + (long)(int)uVar3;
                                  uVar30 = (uint)*(byte *)(lVar31 + lVar49);
                                  uVar47 = *(byte *)(lVar31 + (ulong)((((uVar8 - uVar32) + uVar38) -
                                                                      (uint)(-uVar32 + ((uVar8 + 2)
                                                                                       - *(int *)(
                                                  lVar39 + 0x24)) + uVar38 == 0)) * 3)) - uVar30;
                                  uVar37 = -uVar47;
                                  if (-1 < (int)uVar47) {
                                    uVar37 = uVar47;
                                  }
                                  if (cVar11 == '\x02') {
                                    fVar56 = (float)uVar37 + (float)uVar37;
                                  }
                                  else {
                                    iVar15 = uVar30 - *(byte *)(lVar50 + ((int)lVar49 + iVar36));
                                    iVar7 = -iVar15;
                                    if (-1 < iVar15) {
                                      iVar7 = iVar15;
                                    }
                                    fVar56 = (float)(iVar7 + uVar37);
                                  }
                                }
                                fVar58 = (float)iVar5;
                                fVar57 = fVar54 * fVar54 + fVar58 * fVar58;
                                fVar59 = fVar56 * fVar54 - fVar55 * fVar58;
                                fVar58 = 1e-06;
                                if (0.01 < ABS(fVar59)) {
                                  fVar58 = ABS(fVar59 / SQRT(fVar57 * (fVar56 * fVar56 +
                                                                      fVar55 * fVar55)));
                                }
                                fVar58 = (1.0 / (fVar57 * fVar57 + 1.0)) * fVar58;
                                fVar55 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(puVar20 + 6) +
                                                                           (long)(int)puVar20[1] *
                                                                           (long)(int)uVar46 +
                                                                           lVar45 + (-(ulong)(uVar3 
                                                  >> 0x1f) & 0xfffffffe00000000 | uVar35 << 1) +
                                                  (long)(int)uVar3));
                                fVar52 = fVar52 + fVar55 * fVar58;
                                fVar53 = fVar53 + fVar58;
                              }
                            }
                            uVar38 = uVar38 + 1;
                          } while ((uVar32 << 1 | 1) != uVar38);
                          uVar25 = (ulong)uVar33;
                        } while (uVar33 != uVar6 + uVar32 + 1);
                        uVar38 = (uint)(long)(double)(long)(fVar52 / fVar53);
                        uVar38 = uVar38 & ((int)uVar38 >> 0x1f ^ 0xffffffffU);
                        if (0xfe < (int)uVar38) {
                          uVar38 = 0xff;
                        }
                        *(char *)(*(long *)(puVar20 + 6) +
                                  (long)(int)puVar20[1] * (ulong)(uVar6 - 1) + lVar45 +
                                 (ulong)((uVar8 - 1) * 3)) = (char)uVar38;
                        lVar45 = lVar45 + 1;
                      } while (lVar45 != 3);
                      *(undefined1 *)
                       (*(long *)(lVar39 + 0x18) + (long)*(int *)(lVar39 + 4) * uVar28 + uVar48) = 1
                      ;
                      FUN_10966b1c4(puVar23);
                    }
                  }
                  iVar43 = iVar43 + 1;
                } while (iVar43 != 4);
                puVar24 = puVar23;
                FUN_10966b37c(puVar23,&puStack_1b0,auStack_b4);
              } while ((int)puVar24 != 0);
            }
          }
          else if ((uVar9 == 0) &&
                  (puVar24 = puVar23, FUN_10966b37c(puVar23,&puStack_1b0,auStack_b4),
                  (int)puVar24 != 0)) {
            do {
              uVar16 = auStack_b4[0];
              iVar43 = 0;
              uVar42 = (uint)puStack_1b0;
              *(undefined1 *)
               (*(long *)(lVar39 + 0x18) + (long)(int)(uint)puStack_1b0 * (long)*(int *)(lVar39 + 4)
               + (long)(int)auStack_b4[0]) = 0;
              uVar9 = auStack_b4[0] - 1;
              uVar44 = (uint)puStack_1b0 - 1;
              do {
                fVar53 = (float)uVar21;
                if (iVar43 == 2) {
                  uVar6 = uVar42 + 1;
                  uVar8 = uVar16;
                }
                else {
                  uVar6 = uVar42;
                  uVar8 = uVar16 + 1;
                }
                uVar38 = uVar44;
                uVar46 = uVar16;
                if (iVar43 != 0) {
                  uVar38 = uVar42;
                  uVar46 = uVar9;
                }
                if (iVar43 < 2) {
                  uVar8 = uVar46;
                }
                uVar48 = (ulong)uVar8;
                if (iVar43 < 2) {
                  uVar6 = uVar38;
                }
                uVar28 = (ulong)uVar6;
                if (((1 < (int)uVar6) && (1 < (int)uVar8)) &&
                   (((int)uVar6 < *(int *)(lVar34 + 0x20) && ((int)uVar8 < *(int *)(lVar34 + 0x24)))
                   )) {
                  lVar45 = *(long *)(lVar39 + 0x18);
                  lVar49 = (long)*(int *)(lVar39 + 4);
                  if (*(char *)(lVar45 + lVar49 * uVar28 + (ulong)uVar8) == '\x02') {
                    uVar25 = (ulong)(uVar6 - 1);
                    uVar38 = uVar8 - 1;
                    lVar50 = (long)*(int *)(lVar34 + 4);
                    lVar31 = *(long *)(lVar34 + 0x18);
                    func_0x00010966b3d8(uVar25,uVar48,uVar28,uVar38,lVar49,lVar45,lVar50);
                    fVar54 = fVar53;
                    func_0x00010966b3d8(uVar6 + 1,uVar48,uVar28,uVar38,lVar49,lVar45,lVar50,lVar31);
                    fVar55 = fVar54;
                    func_0x00010966b3d8(uVar25,uVar48,uVar28,uVar8 + 1,lVar49,lVar45,lVar50,lVar31);
                    fVar52 = fVar55;
                    func_0x00010966b3d8(uVar6 + 1,uVar48,uVar28,uVar8 + 1,lVar49,lVar45,lVar50,
                                        lVar31);
                    if (fVar53 <= fVar54) {
                      fVar54 = fVar53;
                    }
                    if (fVar55 <= fVar52) {
                      fVar52 = fVar55;
                    }
                    if (fVar54 <= fVar52) {
                      fVar52 = fVar54;
                    }
                    uVar21 = (ulong)(uint)fVar52;
                    *(float *)(lVar31 + lVar50 * uVar28 + uVar48 * 4) = fVar52;
                    uVar35 = (ulong)(uVar6 - uVar32);
                    iVar36 = (-2 - uVar32) + uVar8;
                    fVar52 = 0.0;
                    fVar53 = 1e-20;
                    do {
                      uVar46 = 0;
                      uVar33 = (uint)uVar35;
                      uVar29 = uVar33 - 1;
                      uVar14 = uVar29;
                      if (uVar29 == 0) {
                        uVar14 = uVar33;
                      }
                      uVar37 = (uint)(uVar33 == *(int *)(lVar34 + 0x20) - 2U);
                      iVar13 = uVar29 - uVar37;
                      lVar45 = uVar35 * lVar49;
                      fVar54 = (float)(int)(uVar6 - uVar33);
                      uVar35 = (ulong)(uVar33 + 1);
                      uVar40 = uVar32;
                      do {
                        uVar47 = (uVar8 - uVar32) + uVar46;
                        uVar3 = ~uVar32 + uVar8 + uVar46;
                        uVar30 = uVar3;
                        if (uVar47 == 1) {
                          uVar30 = uVar3 + 1;
                        }
                        if ((((0 < (int)uVar33) && (0 < (int)uVar47)) &&
                            ((int)uVar33 < *(int *)(lVar34 + 0x20) + -1)) &&
                           ((int)uVar47 < *(int *)(lVar34 + 0x24) + -1)) {
                          lVar50 = *(long *)(lVar39 + 0x18);
                          lVar31 = lVar50 + lVar45;
                          pcVar1 = (char *)(lVar31 + (ulong)uVar47);
                          iVar4 = -uVar32 + uVar46;
                          if (*pcVar1 != '\x02' &&
                              (uVar33 - uVar6) * (uVar33 - uVar6) + iVar4 * iVar4 <= uVar32 * uVar32
                             ) {
                            cVar11 = *(char *)(lVar50 + (ulong)uVar29 * lVar49 + (ulong)uVar47);
                            if (*(char *)(lVar50 + uVar35 * lVar49 + (ulong)uVar47) == '\x02') {
                              fVar55 = 0.0;
                              if (cVar11 != '\x02') {
                                fVar55 = ABS(*(float *)(*(long *)(puVar20 + 6) +
                                                        (long)(int)puVar20[1] * (long)iVar13 +
                                                       (long)(int)uVar30 * 4) -
                                             *(float *)(*(long *)(puVar20 + 6) +
                                                        (long)(int)puVar20[1] *
                                                        (long)(int)(uVar14 - 1) +
                                                       (long)(int)uVar30 * 4));
                                fVar55 = fVar55 + fVar55;
                              }
                            }
                            else {
                              lVar50 = *(long *)(puVar20 + 6);
                              uVar10 = puVar20[1];
                              fVar58 = *(float *)(lVar50 + (long)(int)uVar10 * (long)iVar13 +
                                                 (long)(int)uVar30 * 4);
                              fVar56 = ABS(*(float *)(lVar50 + (long)(int)uVar10 *
                                                               (long)(int)(uVar33 - uVar37) +
                                                     (long)(int)uVar30 * 4) - fVar58);
                              fVar55 = fVar56;
                              if (cVar11 != '\x02') {
                                fVar55 = ABS(fVar58 - *(float *)(lVar50 + (long)(int)uVar10 *
                                                                          (long)(int)(uVar14 - 1) +
                                                                (long)(int)uVar30 * 4));
                              }
                              fVar55 = fVar55 + fVar56;
                            }
                            cVar11 = *(char *)(lVar31 + (ulong)uVar3);
                            uVar47 = (uint)(uVar47 == 1);
                            if (pcVar1[1] == '\x02') {
                              fVar56 = 0.0;
                              if (cVar11 != '\x02') {
                                lVar31 = *(long *)(puVar20 + 6) +
                                         (long)(int)puVar20[1] * (long)(int)uVar14;
                                fVar56 = ABS(*(float *)(lVar31 + (long)(int)uVar30 * 4) -
                                             *(float *)(lVar31 + (long)(int)(iVar36 + uVar46 +
                                                                            uVar47) * 4));
LAB_10966a56c:
                                fVar56 = fVar56 + fVar56;
                              }
                            }
                            else {
                              lVar31 = *(long *)(puVar20 + 6) +
                                       (long)(int)puVar20[1] * (long)(int)uVar14;
                              fVar58 = *(float *)(lVar31 + (long)(int)uVar30 * 4);
                              fVar56 = ABS(*(float *)(lVar31 + (ulong)(((uVar8 - uVar32) + uVar46) -
                                                                      (uint)((uVar8 - *(int *)(
                                                  lVar34 + 0x24)) + -uVar32 + 2 + uVar46 == 0)) * 4)
                                           - fVar58);
                              if (cVar11 == '\x02') goto LAB_10966a56c;
                              fVar56 = fVar56 + ABS(fVar58 - *(float *)(lVar31 + (long)(int)(iVar36 
                                                  + uVar46 + uVar47) * 4));
                            }
                            fVar58 = (float)(int)uVar40;
                            fVar57 = fVar54 * fVar54 + fVar58 * fVar58;
                            fVar59 = fVar56 * fVar54 - fVar55 * fVar58;
                            fVar58 = 1e-06;
                            if (0.01 < ABS(fVar59)) {
                              fVar58 = ABS(fVar59 / SQRT(fVar57 * (fVar56 * fVar56 + fVar55 * fVar55
                                                                  )));
                            }
                            fVar58 = (1.0 / (fVar57 * fVar57 + 1.0)) * fVar58;
                            fVar52 = fVar52 + *(float *)(*(long *)(puVar20 + 6) +
                                                         (long)(int)puVar20[1] * (long)(int)uVar14 +
                                                        (long)(int)uVar30 * 4) * fVar58;
                            fVar53 = fVar53 + fVar58;
                          }
                        }
                        uVar46 = uVar46 + 1;
                        uVar40 = uVar40 - 1;
                      } while ((uVar32 << 1 | 1) != uVar46);
                    } while (uVar33 + 1 != uVar6 + uVar32 + 1);
                    *(float *)(*(long *)(puVar20 + 6) + (long)(int)puVar20[1] * uVar25 +
                              (ulong)uVar38 * 4) = fVar52 / fVar53;
                    *(undefined1 *)(*(long *)(lVar39 + 0x18) + lVar49 * uVar28 + uVar48) = 1;
                    FUN_10966b1c4(puVar23);
                  }
                }
                iVar43 = iVar43 + 1;
              } while (iVar43 != 4);
              puVar24 = puVar23;
              FUN_10966b37c(puVar23,&puStack_1b0,auStack_b4);
            } while ((int)puVar24 != 0);
          }
        }
        if (lVar22 != 0) {
          _free(*(undefined8 *)(lVar22 + -8));
        }
        goto LAB_10966a688;
      }
    }
  }
LAB_10966a67c:
  if (lVar22 != 0) {
    __ZdlPv(lVar22);
  }
LAB_10966a688:
  FUN_10966b290(&uStack_128);
  FUN_10966b290(&puStack_118);
  FUN_10966b23c(&uStack_108);
  FUN_10966b23c(&uStack_f8);
  FUN_10966b23c(&uStack_e8);
  FUN_10966b23c(&uStack_d8);
  FUN_10966b23c(&uStack_c8);
  if (uStack_298 != 0) {
    piVar2 = (int *)(uStack_298 + 0x14);
    do {
      iVar43 = *piVar2;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = iVar43 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar43 + -1 == 0) {
      func_0x000109a848d4(&uStack_2d0);
    }
  }
  uStack_298 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  if (0 < uStack_2d0._4_4_) {
    lVar22 = 0;
    do {
      *(undefined4 *)(uStack_290 + lVar22 * 4) = 0;
      lVar22 = lVar22 + 1;
    } while (lVar22 < uStack_2d0._4_4_);
  }
  if (puStack_288 != &uStack_280 && puStack_288 != (undefined8 *)0x0) {
    _free(puStack_288[-1]);
  }
  if (uStack_238 != 0) {
    piVar2 = (int *)(uStack_238 + 0x14);
    do {
      iVar43 = *piVar2;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = iVar43 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar43 + -1 == 0) {
      func_0x000109a848d4(&uStack_270);
    }
  }
  uStack_238 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  if (0 < uStack_270._4_4_) {
    lVar22 = 0;
    do {
      *(undefined4 *)(uStack_230 + lVar22 * 4) = 0;
      lVar22 = lVar22 + 1;
    } while (lVar22 < uStack_270._4_4_);
  }
  if (puStack_228 != &uStack_220 && puStack_228 != (undefined8 *)0x0) {
    _free(puStack_228[-1]);
  }
  if (uStack_1d8 != 0) {
    piVar2 = (int *)(uStack_1d8 + 0x14);
    do {
      iVar43 = *piVar2;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = iVar43 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar43 + -1 == 0) {
      func_0x000109a848d4(&uStack_210);
    }
  }
  uStack_1d8 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  if (0 < uStack_210._4_4_) {
    lVar22 = 0;
    do {
      *(undefined4 *)((long)puStack_1d0 + lVar22 * 4) = 0;
      lVar22 = lVar22 + 1;
    } while (lVar22 < uStack_210._4_4_);
  }
  if (puStack_1c8 != &uStack_1c0 && puStack_1c8 != (undefined8 *)0x0) {
    _free(puStack_1c8[-1]);
  }
  return;
}



/* Entry: 10966b1c4; end: 10966b23b;  */

bool FUN_10966b1c4(float param_1,long param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  
  pfVar2 = *(float **)(param_2 + 8);
  pfVar3 = *(float **)(param_2 + 0x18);
  pfVar1 = pfVar2;
  if (pfVar2 != pfVar3) {
    do {
      pfVar4 = pfVar1;
      pfVar1 = *(float **)(pfVar4 + 4);
    } while (param_1 < **(float **)(pfVar4 + 4));
    lVar5 = *(long *)(pfVar2 + 6);
    if (pfVar4 != pfVar2) {
      lVar6 = *(long *)(pfVar2 + 4);
      *(long *)(lVar6 + 0x18) = lVar5;
      *(long *)(lVar5 + 0x10) = lVar6;
      lVar6 = *(long *)(pfVar4 + 4);
      *(long *)(pfVar2 + 4) = lVar6;
      *(float **)(pfVar2 + 6) = pfVar4;
      *(float **)(lVar6 + 0x18) = pfVar2;
      *(float **)(*(long *)(pfVar2 + 6) + 0x10) = pfVar2;
    }
    *(long *)(param_2 + 8) = lVar5;
    pfVar2[1] = param_3;
    pfVar2[2] = param_4;
    *pfVar2 = param_1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  }
  return pfVar2 != pfVar3;
}



/* Entry: 10966b23c; end: 10966b28f;  */

long * FUN_10966b23c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 10966b290; end: 10966b2e3;  */

long * FUN_10966b290(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 10966b2e4; end: 10966b2eb;  */

void FUN_10966b2e4(void)

{
  return;
}



/* Entry: 10966b2ec; end: 10966b32b;  */

void FUN_10966b2ec(long *param_1)

{
  long lStack_28;
  
  lStack_28 = param_1[2];
  FUN_109a395e8(&lStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010966b328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 10966b32c; end: 10966b333;  */

void FUN_10966b32c(void)

{
  return;
}



/* Entry: 10966b334; end: 10966b37b;  */

void FUN_10966b334(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != 0) {
      _free(*(undefined8 *)(*plVar1 + -8));
    }
    __ZdlPv(plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010966b378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 10966b37c; end: 10966b48b;  */

bool FUN_10966b37c(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
  if (lVar1 != lVar3) {
    *param_2 = *(undefined4 *)(lVar3 + 4);
    *param_3 = *(undefined4 *)(lVar3 + 8);
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar2 = *(long *)(lVar3 + 0x18);
    *(long *)(lVar4 + 0x18) = lVar2;
    *(long *)(lVar2 + 0x10) = lVar4;
    lVar4 = *(long *)(lVar1 + 0x10);
    *(long *)(lVar3 + 0x10) = lVar4;
    *(long *)(lVar3 + 0x18) = lVar1;
    *(long *)(lVar4 + 0x18) = lVar3;
    *(long *)(*(long *)(lVar3 + 0x18) + 0x10) = lVar3;
    *(long *)(param_1 + 8) = lVar3;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  }
  return lVar1 != lVar3;
}



/* Entry: 10966b48c; end: 10966b51f;  */

undefined8 * FUN_10966b48c(undefined8 *param_1)

{
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_10966b520();
  return param_1;
}



/* Entry: 10966b520; end: 10966b667;  */

void FUN_10966b520(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *puVar1 = 0x3fc45f306dc9c883;
  lVar2 = *param_1;
  *param_1 = (long)puVar1;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *puVar1 = 0x3f904c26be3b06cf;
  lVar2 = param_1[1];
  param_1[1] = (long)puVar1;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *puVar1 = 0x3ff0f9fda5817dff;
  lVar2 = param_1[2];
  param_1[2] = (long)puVar1;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  *puVar1 = 10;
  lVar2 = param_1[9];
  param_1[9] = (long)puVar1;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  *puVar1 = 10;
  lVar2 = param_1[10];
  param_1[10] = (long)puVar1;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10966b668; end: 10966b763;  */

long * FUN_10966b668(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[10];
  param_1[10] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = param_1[9];
  param_1[9] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10966b764; end: 10966b8d7;  */

void FUN_10966b764(double param_1,undefined8 param_2,double param_3,long param_4,double *param_5)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dStack_48;
  undefined8 uStack_40;
  double dStack_38;
  
  dVar5 = 1.0;
  dVar4 = param_1;
  FUN_10966d398(*(undefined8 *)(param_4 + 8));
  func_0x00010966d41c(*(undefined8 *)(param_4 + 8));
  dVar4 = *param_5 - dVar4;
  dVar5 = param_5[1] - dVar5;
  param_3 = param_5[2] - param_3;
  *(double *)(param_4 + 0x18) = dVar4;
  *(double *)(param_4 + 0x20) = dVar5;
  *(double *)(param_4 + 0x28) = param_3;
  piVar2 = *(int **)(param_4 + 0x50);
  dStack_38 = param_3 * param_3;
  if (0.00800000037997961 <= SQRT(dVar4 * dVar4 + dVar5 * dVar5 + dStack_38)) {
    iVar3 = 0;
  }
  else {
    iVar3 = piVar2[1] + 1;
  }
  piVar2[1] = iVar3;
  if ((*piVar2 <= iVar3) && (**(int **)(param_4 + 0x48) <= (*(int **)(param_4 + 0x48))[1])) {
    dVar4 = SQRT(*param_5 * *param_5 + param_5[1] * param_5[1] + param_5[2] * param_5[2]);
    if (dVar4 < 0.3499999940395355) {
      dVar4 = dVar4 / -0.3499999940395355 + 1.0;
      uVar6 = 0;
      if (dVar4 <= 0.0) {
        dVar4 = 0.0;
      }
      dVar5 = dVar4 * dVar4;
      uVar1 = *(undefined8 *)(param_4 + 0x10);
      func_0x00010966d41c(*(undefined8 *)(param_4 + 8));
      dStack_48 = dVar4;
      uStack_40 = uVar6;
      FUN_10966d398(param_1,dVar5,uVar1,&dStack_48);
    }
    return;
  }
  return;
}



/* Entry: 10966b8d8; end: 10966b933;  */

double FUN_10966b8d8(long param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x28);
  dVar2 = 0.0;
  if (0x1d < iVar1) {
    func_0x00010966d41c(0,0,0);
    dVar3 = (double)NEON_fminnm((double)(iVar1 - 0x1e) / 100.0,0x3ff0000000000000);
    dVar2 = dVar3 * dVar2;
  }
  return dVar2;
}



/* Entry: 10966b934; end: 10966becf;  */

void FUN_10966b934(undefined8 *param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 *puVar14;
  undefined ***pppuVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  long *plVar19;
  long lVar20;
  undefined **ppuVar21;
  long *plVar22;
  long lStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 *puStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  long *plStack_d0;
  undefined ***pppuStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19 = (long *)param_2[1];
  if (plVar19 == (long *)0x0) {
LAB_10966bd30:
    FUN_1092315e8();
LAB_10966bd34:
    ___stack_chk_fail();
  }
  else {
    ppuVar21 = (undefined **)*param_2;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar19 == (long *)0x0) goto LAB_10966bd30;
    plVar16 = plVar19 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = *plVar16 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar22 = plVar19 + 1;
    do {
      lVar20 = *plVar22;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar2) {
        *plVar22 = lVar20 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
      if ((param_4 & 1) != 0) goto LAB_10966b9dc;
LAB_10966bab0:
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar2) {
          *plVar16 = *plVar16 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      FUN_1095c9020(&lStack_150,param_3);
      lVar12 = lStack_f8;
      lVar11 = lStack_100;
      lVar10 = lStack_108;
      lVar9 = lStack_110;
      lVar8 = lStack_118;
      lVar7 = lStack_120;
      lVar6 = lStack_128;
      lVar5 = lStack_130;
      lVar4 = lStack_138;
      puVar14 = puStack_140;
      lVar3 = lStack_148;
      lVar20 = lStack_150;
      plStack_d0 = (long *)lStack_150;
      pppuStack_c8 = (undefined ***)lStack_148;
      lStack_150 = 0;
      lStack_148 = 0;
      puStack_140 = (undefined8 *)0x0;
      lStack_138 = 0;
      puStack_c0 = puVar14;
      lStack_b8 = lVar4;
      lStack_b0 = lStack_130;
      lStack_a8 = lStack_128;
      lStack_130 = 0;
      lStack_128 = 0;
      lStack_a0 = lStack_120;
      lStack_98 = lStack_118;
      lStack_120 = 0;
      lStack_118 = 0;
      lStack_90 = lStack_110;
      lStack_88 = lStack_108;
      lStack_80 = lStack_100;
      lStack_78 = lStack_f8;
      lStack_110 = 0;
      lStack_108 = 0;
      lStack_100 = 0;
      lStack_f8 = 0;
      plVar16 = (long *)0x100;
      ppuStack_e0 = ppuVar21;
      ppuStack_d8 = (undefined **)plVar19;
      __Znwm();
      plVar22 = plVar16 + 1;
      *plVar22 = 0;
      plVar16[2] = 0;
      plVar16[3] = 0x32aaaba7;
      plVar16[5] = 0;
      plVar16[4] = 0;
      plVar16[7] = 0;
      plVar16[6] = 0;
      plVar16[9] = 0;
      plVar16[8] = 0;
      plVar16[10] = 0;
      plVar16[0xb] = 0x3cb0b1bb;
      plVar16[0xd] = 0;
      plVar16[0xc] = 0;
      plVar16[0xf] = 0;
      plVar16[0xe] = 0;
      *(undefined8 *)((long)plVar16 + 0x84) = 0;
      *(undefined8 *)((long)plVar16 + 0x7c) = 0;
      *plVar16 = (long)&PTR_SUB_110b00898;
      plVar16[0x12] = (long)ppuVar21;
      plVar16[0x13] = (long)plVar19;
      ppuStack_e0 = (undefined **)0x0;
      ppuStack_d8 = (undefined **)0x0;
      plVar16[0x14] = lVar20;
      plVar16[0x15] = lVar3;
      plStack_d0 = (long *)0x0;
      pppuStack_c8 = (undefined ***)0x0;
      plVar16[0x16] = (long)puVar14;
      plVar16[0x17] = lVar4;
      plVar16[0x18] = lVar5;
      plVar16[0x19] = lVar6;
      puStack_c0 = (undefined8 *)0x0;
      lStack_b8 = 0;
      lStack_b0 = 0;
      lStack_a8 = 0;
      plVar16[0x1a] = lVar7;
      plVar16[0x1b] = lVar8;
      lStack_a0 = 0;
      lStack_98 = 0;
      plVar16[0x1c] = lVar9;
      plVar16[0x1d] = lVar10;
      plVar16[0x1e] = lVar11;
      plVar16[0x1f] = lVar12;
      lStack_90 = 0;
      lStack_88 = 0;
      lStack_80 = 0;
      lStack_78 = 0;
      uVar17 = 8;
      __Znwm();
      __ZNSt3__115__thread_structC1Ev();
      puVar14 = (undefined8 *)0x20;
      __Znwm();
      *puVar14 = uVar17;
      puVar14[2] = 1;
      puVar14[1] = 0x18;
      puVar14[3] = plVar16;
      puVar18 = auStack_f0;
      puStack_e8 = puVar14;
      _pthread_create(puVar18,0,FUN_10966ca70,puVar14);
      if ((int)puVar18 != 0) {
        __ZNSt3__120__throw_system_errorEiPKc();
        goto LAB_10966be30;
      }
      puStack_e8 = (undefined8 *)0x0;
      FUN_10966cae8(&puStack_e8);
      __ZNSt3__16thread6detachEv(auStack_f0);
      __ZNSt3__16threadD1Ev(auStack_f0);
      *param_1 = plVar16;
      FUN_1094a4db4(plVar16);
      do {
        lVar20 = *plVar22;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar2) {
          *plVar22 = lVar20 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
      if (lStack_88 != 0) {
        __ZdlPv();
      }
      if (lStack_a0 != 0) {
        __ZdlPv();
      }
      if (lStack_b8 != 0) {
        __ZdlPv();
      }
      if (plStack_d0 != (long *)0x0) {
        __ZdlPv();
      }
      if (ppuStack_d8 != (undefined **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (lStack_108 != 0) {
        lStack_100 = lStack_108;
        __ZdlPv();
      }
      if (lStack_120 != 0) {
        lStack_118 = lStack_120;
        __ZdlPv();
      }
      if (lStack_138 != 0) {
        lStack_130 = lStack_138;
        __ZdlPv();
      }
      if (lStack_150 != 0) {
        lStack_148 = lStack_150;
        __ZdlPv();
      }
LAB_10966bcf0:
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
      goto LAB_10966bd34;
    }
    if ((param_4 & 1) == 0) goto LAB_10966bab0;
LAB_10966b9dc:
    ppuStack_e0 = &PTR_DAT_110b008e0;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = *plVar16 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pppuStack_c8 = &ppuStack_e0;
    puVar14 = (undefined8 *)0x90;
    ppuStack_d8 = ppuVar21;
    plStack_d0 = plVar19;
    __Znwm();
    puVar14[2] = 0;
    puVar14[3] = 0x32aaaba7;
    puVar14[5] = 0;
    puVar14[4] = 0;
    puVar14[7] = 0;
    puVar14[6] = 0;
    puVar14[9] = 0;
    puVar14[8] = 0;
    puVar14[10] = 0;
    puVar14[0xb] = 0x3cb0b1bb;
    puVar14[0xd] = 0;
    puVar14[0xc] = 0;
    puVar14[0xf] = 0;
    puVar14[0xe] = 0;
    *(undefined8 *)((long)puVar14 + 0x84) = 0;
    *(undefined8 *)((long)puVar14 + 0x7c) = 0;
    *puVar14 = &PTR_DAT_110a75108;
    puVar14[1] = 0;
    lStack_150 = 0;
    puStack_c0 = puVar14;
    __ZNSt13exception_ptrD1Ev(&lStack_150);
    pppuVar15 = pppuStack_c8;
    (*(code *)(*pppuStack_c8)[5])(pppuStack_c8,param_3);
    lStack_150 = CONCAT71(lStack_150._1_7_,(char)pppuVar15);
    if (puStack_c0 == (undefined8 *)0x0) {
      FUN_1094362d4(3);
      goto LAB_10966be30;
    }
    func_0x000108820be4(puStack_c0,&lStack_150);
    if (puStack_c0 != (undefined8 *)0x0) {
      *param_1 = puStack_c0;
      FUN_1094a4db4();
      func_0x000107c29c1c(&puStack_c0);
      if (pppuStack_c8 == &ppuStack_e0) {
        lVar20 = 0x18;
      }
      else {
        if (pppuStack_c8 == (undefined ***)0x0) goto LAB_10966bcf0;
        lVar20 = 0x20;
      }
      (**(code **)((long)*pppuStack_c8 + lVar20))();
      goto LAB_10966bcf0;
    }
  }
  FUN_1094362d4(3);
LAB_10966be30:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10966be34);
  (*pcVar13)();
}



/* Entry: 10966bed0; end: 10966bf1b;  */

long * FUN_10966bed0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x18;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x20;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10966bf1c; end: 10966bf6b;  */

void FUN_10966bf1c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = 0x410;
  __Znwm();
  FUN_10966bf6c();
  lVar6 = lVar4 + 0x18;
  *param_1 = lVar6;
  param_1[1] = lVar4;
  if ((lVar6 != 0) &&
     ((lVar5 = *(long *)(lVar4 + 0x20), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(lVar4 + 0x20);
    }
    *(long *)lVar6 = lVar6;
    *(long **)(lVar4 + 0x20) = plVar7;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 10966bf6c; end: 10966bfb3;  */

undefined8 * FUN_10966bf6c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b00848;
  FUN_10966c030(param_1 + 3);
  return param_1;
}



/* Entry: 10966bfb4; end: 10966bfc3;  */

void FUN_10966bfb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b00848;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10966bfc4; end: 10966bfe3;  */

void FUN_10966bfc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b00848;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10966bfe4; end: 10966c02b;  */

void FUN_10966bfe4(long param_1)

{
  FUN_10966b668(param_1 + 0x40);
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10966c02c; end: 10966c02f;  */

void FUN_10966c02c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10966c030; end: 10966c0ab;  */

long FUN_10966c030(long param_1)

{
  _bzero(param_1,0x3f8);
  FUN_10966b48c(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x3ec) = 0;
  _bzero(param_1 + 0x80,0x369);
  *(undefined2 *)(param_1 + 0x3f0) = 1;
  *(undefined1 *)(param_1 + 0x3f2) = 0;
  func_0x00010966d428(param_1 + 0x80);
  return param_1;
}



/* Entry: 10966c0ac; end: 10966c2c3;  */

void FUN_10966c0ac(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10966c2c4; end: 10966c2d7;  */

void FUN_10966c2c4(void)

{
  func_0x00010966c220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10966c2d8; end: 10966c307;  */

void FUN_10966c2d8(long *param_1)

{
  __ZNSt3__117__assoc_sub_state4waitEv();
                    /* WARNING: Could not recover jumptable at 0x00010966c300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 10966c308; end: 10966c38b;  */

void FUN_10966c308(long param_1)

{
  long lVar1;
  undefined1 uStack_21;
  
  lVar1 = param_1 + 0x90;
  FUN_10966c38c(lVar1,param_1 + 0xa0);
  uStack_21 = (undefined1)lVar1;
  func_0x000108820be4(param_1,&uStack_21);
  return;
}



/* Entry: 10966c38c; end: 10966ca17;  */

undefined8
FUN_10966c38c(undefined8 param_1,undefined8 param_2,double param_3,long *param_4,long *param_5)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  double *pdVar10;
  ulong uVar11;
  double *pdVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  double dStack_130;
  double dStack_120;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  long lStack_b8;
  long *plStack_b0;
  
  plVar7 = (long *)param_4[1];
  if ((plVar7 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 == (long *)0x0))
  {
    return 0;
  }
  lVar19 = *param_4;
  lStack_b8 = lVar19;
  plStack_b0 = plVar7;
  if (lVar19 != 0) {
    if ((param_5[3] != param_5[4]) && (*param_5 != param_5[1])) {
      uVar15 = 0;
      uVar17 = 0;
      uVar9 = (param_5[4] - param_5[3] >> 3) * -0x5555555555555555;
      if (99 < uVar9) {
        uVar9 = 100;
      }
      dStack_120 = 9.80665;
      do {
        pdVar10 = (double *)(param_5[3] + uVar15 * 0x18);
        if (((ulong)((param_5[1] - *param_5 >> 3) * -0x5555555555555555) <= uVar17) ||
           (pdVar12 = (double *)(*param_5 + uVar17 * 0x18), *pdVar10 < *pdVar12)) {
          dStack_d0 = (double)SUB84(pdVar10[1],0);
          dStack_c8 = (double)(float)((ulong)pdVar10[1] >> 0x20);
          dStack_c0 = (double)*(float *)(pdVar10 + 2);
          FUN_10966b764(*pdVar10,lVar19 + 0x28,&dStack_d0);
          uVar15 = uVar15 + 1;
        }
        else {
          dStack_c0 = (double)*(float *)(pdVar12 + 2) * 9.80665;
          dStack_d0 = (double)SUB84(pdVar12[1],0) * 9.80665;
          dStack_c8 = (double)(float)((ulong)pdVar12[1] >> 0x20) * 9.80665;
          param_3 = dStack_120;
          func_0x00010966b6d8(*pdVar12,lVar19 + 0x28,&dStack_d0);
          uVar17 = uVar17 + 1;
        }
      } while (uVar15 < uVar9);
      uVar15 = (param_5[4] - param_5[3] >> 3) * -0x5555555555555555;
      plVar7 = (long *)(lVar19 + 0x10);
      *(long *)(lVar19 + 0x18) = *plVar7;
      if ((ulong)((*(long *)(lVar19 + 0x20) - *plVar7 >> 3) * -0x3333333333333333) < uVar15) {
        if (0x666666666666666 < uVar15) {
          FUN_10966ca18();
LAB_10966c9dc:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10966c9e0);
          (*pcVar6)();
        }
        FUN_10966ca2c();
        lVar18 = (long)plVar7 - (*(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10));
        _memcpy(lVar18);
        lVar8 = *(long *)(lVar19 + 0x10);
        *(long *)(lVar19 + 0x10) = lVar18;
        *(long **)(lVar19 + 0x18) = plVar7;
        *(long **)(lVar19 + 0x20) = plVar7 + uVar15 * 5;
        if (lVar8 != 0) {
          __ZdlPv();
        }
      }
      dStack_d0 = 0.0;
      dStack_c8 = 0.0;
      dStack_c0 = 0.0;
      lVar19 = param_5[3];
      if (param_5[4] != lVar19) {
        uVar17 = 0;
        uVar15 = 0;
        uVar9 = 0;
        dVar27 = 0.0;
        uVar26 = 0;
        dStack_130 = 0.0;
        do {
          lVar8 = lStack_b8;
          pdVar10 = (double *)(lVar19 + uVar9 * 0x18);
          if (((ulong)((param_5[1] - *param_5 >> 3) * -0x5555555555555555) <= uVar17) ||
             (pdVar12 = (double *)(*param_5 + uVar17 * 0x18), *pdVar10 < *pdVar12)) {
            if (((ulong)((param_5[7] - param_5[6] >> 3) * -0x5555555555555555) <= uVar15) ||
               (pdVar12 = (double *)(param_5[6] + uVar15 * 0x18), *pdVar10 < *pdVar12)) {
              dVar23 = (double)SUB84(pdVar10[1],0);
              dStack_e8 = (double)(float)((ulong)pdVar10[1] >> 0x20);
              dStack_e0 = (double)*(float *)(pdVar10 + 2);
              dVar22 = *pdVar10;
              dStack_f0 = dVar23;
              FUN_10966b764(lStack_b8 + 0x28,&dStack_f0);
              lVar19 = lStack_b8;
              FUN_10966b8d8(lStack_b8 + 0x28);
              param_3 = dStack_e0 - param_3;
              dStack_110 = dStack_f0 - dVar22;
              dStack_108 = dStack_e8 - dVar23;
              dStack_100 = param_3;
              FUN_10966d518(*pdVar10,lVar19 + 0x80,&dStack_110);
              if (*(char *)(lVar19 + 0x3f1) == '\x01') {
                fVar20 = (float)*(double *)(lVar19 + 0x80);
                fVar25 = (float)*(double *)(lVar19 + 0xa0);
                fVar28 = (float)*(double *)(lVar19 + 0xc0);
                fVar29 = (fVar20 - fVar25) - fVar28;
                fVar31 = (fVar25 - fVar20) - fVar28;
                fVar33 = (fVar28 - fVar20) - fVar25;
                fVar28 = fVar20 + fVar25 + fVar28;
                fVar20 = fVar29;
                if (fVar29 <= fVar28) {
                  fVar20 = fVar28;
                }
                bVar3 = 2;
                if (fVar31 <= fVar20) {
                  fVar31 = fVar20;
                  bVar3 = fVar28 < fVar29;
                }
                bVar4 = 3;
                if (fVar33 <= fVar31) {
                  fVar33 = fVar31;
                  bVar4 = bVar3;
                }
                fVar21 = SQRT(fVar33 + 1.0) * 0.5;
                fVar29 = 0.25 / fVar21;
                fVar25 = ((float)*(double *)(lVar19 + 0x90) - (float)*(double *)(lVar19 + 0xb0)) *
                         fVar29;
                fVar30 = ((float)*(double *)(lVar19 + 0x98) + (float)*(double *)(lVar19 + 0x88)) *
                         fVar29;
                fVar32 = ((float)*(double *)(lVar19 + 0xb8) + (float)*(double *)(lVar19 + 0xa8)) *
                         fVar29;
                fVar31 = ((float)*(double *)(lVar19 + 0x98) - (float)*(double *)(lVar19 + 0x88)) *
                         fVar29;
                fVar24 = ((float)*(double *)(lVar19 + 0xb0) + (float)*(double *)(lVar19 + 0x90)) *
                         fVar29;
                fVar34 = fVar25;
                fVar20 = fVar32;
                fVar33 = fVar21;
                fVar28 = fVar30;
                if (bVar4 != 2) {
                  fVar34 = fVar31;
                  fVar20 = fVar21;
                  fVar33 = fVar32;
                  fVar28 = fVar24;
                }
                fVar29 = ((float)*(double *)(lVar19 + 0xb8) - (float)*(double *)(lVar19 + 0xa8)) *
                         fVar29;
                fVar32 = fVar21;
                if (bVar4 != 0) {
                  fVar32 = fVar29;
                  fVar31 = fVar24;
                  fVar25 = fVar30;
                  fVar29 = fVar21;
                }
                if (bVar4 < 2) {
                  fVar20 = fVar31;
                  fVar33 = fVar25;
                  fVar28 = fVar29;
                }
                param_3 = (double)(ulong)(uint)fVar20;
                if (bVar4 < 2) {
                  fVar34 = fVar32;
                }
                dVar22 = *pdVar10;
                pdVar10 = *(double **)(lVar19 + 0x18);
                if (pdVar10 < *(double **)(lVar19 + 0x20)) {
                  *pdVar10 = dVar22;
                  *(float *)(pdVar10 + 1) = -fVar28;
                  *(float *)((long)pdVar10 + 0xc) = -fVar33;
                  *(float *)(pdVar10 + 2) = -fVar20;
                  *(float *)((long)pdVar10 + 0x14) = fVar34;
                  *(float *)(pdVar10 + 3) = (float)dStack_130;
                  *(undefined4 *)((long)pdVar10 + 0x1c) = uVar26;
                  pdVar12 = pdVar10 + 5;
                  *(float *)(pdVar10 + 4) = (float)dVar27;
                }
                else {
                  lVar8 = (long)pdVar10 - *(long *)(lVar19 + 0x10);
                  uVar11 = (lVar8 >> 3) * -0x3333333333333333 + 1;
                  if (0x666666666666666 < uVar11) {
                    FUN_10966ca18();
                    goto LAB_10966c9dc;
                  }
                  lVar18 = (long)*(double **)(lVar19 + 0x20) - *(long *)(lVar19 + 0x10) >> 3;
                  uVar13 = lVar18 * -0x6666666666666666;
                  if (uVar13 < uVar11 || uVar13 - uVar11 == 0) {
                    uVar13 = uVar11;
                  }
                  if (0x333333333333332 < (ulong)(lVar18 * -0x3333333333333333)) {
                    uVar13 = 0x666666666666666;
                  }
                  lVar18 = lVar19 + 0x10;
                  FUN_10966ca2c();
                  pdVar10 = (double *)(lVar18 + lVar8);
                  *pdVar10 = dVar22;
                  *(float *)(pdVar10 + 1) = -fVar28;
                  *(float *)((long)pdVar10 + 0xc) = -fVar33;
                  *(float *)(pdVar10 + 2) = -fVar20;
                  *(float *)((long)pdVar10 + 0x14) = fVar34;
                  *(float *)(pdVar10 + 3) = (float)dStack_130;
                  *(undefined4 *)((long)pdVar10 + 0x1c) = uVar26;
                  *(float *)(pdVar10 + 4) = (float)dVar27;
                  pdVar12 = pdVar10 + 5;
                  lVar16 = (long)pdVar10 - (*(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10));
                  _memcpy(lVar16);
                  lVar8 = *(long *)(lVar19 + 0x10);
                  *(long *)(lVar19 + 0x10) = lVar16;
                  *(double **)(lVar19 + 0x18) = pdVar12;
                  *(ulong *)(lVar19 + 0x20) = lVar18 + uVar13 * 0x28;
                  if (lVar8 != 0) {
                    __ZdlPv();
                  }
                }
                *(double **)(lVar19 + 0x18) = pdVar12;
              }
              uVar9 = uVar9 + 1;
            }
            else {
              dStack_c0 = (double)*(float *)(pdVar12 + 2);
              dStack_d0 = (double)SUB84(pdVar12[1],0);
              dStack_c8 = (double)(float)((ulong)pdVar12[1] >> 0x20);
              FUN_10966e104(*pdVar12,lStack_b8 + 0x80,&dStack_d0);
              uVar15 = uVar15 + 1;
            }
          }
          else {
            uVar26 = *(undefined4 *)((long)pdVar12 + 0xc);
            dVar27 = (double)*(float *)(pdVar12 + 2);
            dStack_e0 = dVar27 * 9.80665;
            dStack_130 = (double)SUB84(pdVar12[1],0);
            dStack_f0 = dStack_130 * 9.80665;
            dStack_e8 = (double)(float)((ulong)pdVar12[1] >> 0x20) * 9.80665;
            param_3 = dStack_130;
            FUN_10966d87c(*pdVar12,lStack_b8 + 0x80,&dStack_f0);
            func_0x00010966b6d8(*pdVar12,lVar8 + 0x28,&dStack_f0);
            uVar17 = uVar17 + 1;
          }
          lVar19 = param_5[3];
        } while (uVar9 < (ulong)((param_5[4] - lVar19 >> 3) * -0x5555555555555555));
      }
      uVar14 = 1;
      if (plStack_b0 == (long *)0x0) {
        return 1;
      }
      goto LAB_10966c96c;
    }
  }
  uVar14 = 0;
LAB_10966c96c:
  plVar5 = plStack_b0;
  plVar7 = plStack_b0 + 1;
  do {
    lVar19 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar19 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar19 == 0) {
    (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  return uVar14;
}



/* Entry: 10966ca18; end: 10966ca2b;  */

undefined1  [16] FUN_10966ca18(undefined8 param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  ulong *puStack_58;
  
  puVar2 = (ulong *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x666666666666667) {
    lVar3 = param_2 * 0x28;
    __Znwm(lVar3);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar3;
    return auVar7;
  }
  func_0x000104c4f740();
  puVar4 = puVar2;
  puStack_58 = puVar2;
  __ZNSt3__119__thread_local_dataEv();
  uVar5 = *puVar2;
  *puVar2 = 0;
  _pthread_setspecific(*puVar4,uVar5);
  pcVar6 = (code *)puVar2[1];
  if ((puVar2[2] & 1) != 0) {
    pcVar6 = *(code **)(*(long *)(puVar2[3] + ((long)puVar2[2] >> 1)) + ((ulong)pcVar6 & 0xffffffff)
                       );
  }
  (*pcVar6)();
  FUN_10966cae8(&puStack_58);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar5;
  return auVar1 << 0x40;
}



/* Entry: 10966ca2c; end: 10966ca6f;  */

undefined1  [16] FUN_10966ca2c(ulong *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  ulong *puStack_48;
  
  if (param_2 < 0x666666666666667) {
    lVar2 = param_2 * 0x28;
    __Znwm(lVar2);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000104c4f740();
  puVar3 = param_1;
  puStack_48 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  uVar4 = *param_1;
  *param_1 = 0;
  _pthread_setspecific(*puVar3,uVar4);
  pcVar5 = (code *)param_1[1];
  if ((param_1[2] & 1) != 0) {
    pcVar5 = *(code **)(*(long *)(param_1[3] + ((long)param_1[2] >> 1)) +
                       ((ulong)pcVar5 & 0xffffffff));
  }
  (*pcVar5)();
  FUN_10966cae8(&puStack_48);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar4;
  return auVar1 << 0x40;
}



/* Entry: 10966ca70; end: 10966cae7;  */

undefined8 FUN_10966ca70(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  puStack_28 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  uVar2 = *param_1;
  *param_1 = 0;
  _pthread_setspecific(*puVar1,uVar2);
  pcVar3 = (code *)param_1[1];
  if ((param_1[2] & 1) != 0) {
    pcVar3 = *(code **)(*(long *)(param_1[3] + ((long)param_1[2] >> 1)) +
                       ((ulong)pcVar3 & 0xffffffff));
  }
  (*pcVar3)();
  FUN_10966cae8(&puStack_28);
  return 0;
}



/* Entry: 10966cae8; end: 10966cb97;  */

long * FUN_10966cae8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1094a35b0(lVar1,0);
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10966cb98; end: 10966cbc3;  */

void FUN_10966cb98(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_110b008e0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10966cbc4; end: 10966cbef;  */

void FUN_10966cbc4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10966cbf0; end: 10966cbf7;  */

undefined8
FUN_10966cbf0(undefined8 param_1,undefined8 param_2,double param_3,long param_4,long *param_5)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  double *pdVar10;
  ulong uVar11;
  double *pdVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  double dStack_130;
  double dStack_120;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  long lStack_b8;
  long *plStack_b0;
  
  plVar7 = *(long **)(param_4 + 0x10);
  if ((plVar7 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 == (long *)0x0))
  {
    return 0;
  }
  lVar19 = *(long *)(param_4 + 8);
  lStack_b8 = lVar19;
  plStack_b0 = plVar7;
  if (lVar19 != 0) {
    if ((param_5[3] != param_5[4]) && (*param_5 != param_5[1])) {
      uVar15 = 0;
      uVar17 = 0;
      uVar9 = (param_5[4] - param_5[3] >> 3) * -0x5555555555555555;
      if (99 < uVar9) {
        uVar9 = 100;
      }
      dStack_120 = 9.80665;
      do {
        pdVar10 = (double *)(param_5[3] + uVar15 * 0x18);
        if (((ulong)((param_5[1] - *param_5 >> 3) * -0x5555555555555555) <= uVar17) ||
           (pdVar12 = (double *)(*param_5 + uVar17 * 0x18), *pdVar10 < *pdVar12)) {
          dStack_d0 = (double)SUB84(pdVar10[1],0);
          dStack_c8 = (double)(float)((ulong)pdVar10[1] >> 0x20);
          dStack_c0 = (double)*(float *)(pdVar10 + 2);
          FUN_10966b764(*pdVar10,lVar19 + 0x28,&dStack_d0);
          uVar15 = uVar15 + 1;
        }
        else {
          dStack_c0 = (double)*(float *)(pdVar12 + 2) * 9.80665;
          dStack_d0 = (double)SUB84(pdVar12[1],0) * 9.80665;
          dStack_c8 = (double)(float)((ulong)pdVar12[1] >> 0x20) * 9.80665;
          param_3 = dStack_120;
          func_0x00010966b6d8(*pdVar12,lVar19 + 0x28,&dStack_d0);
          uVar17 = uVar17 + 1;
        }
      } while (uVar15 < uVar9);
      uVar15 = (param_5[4] - param_5[3] >> 3) * -0x5555555555555555;
      plVar7 = (long *)(lVar19 + 0x10);
      *(long *)(lVar19 + 0x18) = *plVar7;
      if ((ulong)((*(long *)(lVar19 + 0x20) - *plVar7 >> 3) * -0x3333333333333333) < uVar15) {
        if (0x666666666666666 < uVar15) {
          FUN_10966ca18();
LAB_10966c9dc:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10966c9e0);
          (*pcVar6)();
        }
        FUN_10966ca2c();
        lVar18 = (long)plVar7 - (*(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10));
        _memcpy(lVar18);
        lVar8 = *(long *)(lVar19 + 0x10);
        *(long *)(lVar19 + 0x10) = lVar18;
        *(long **)(lVar19 + 0x18) = plVar7;
        *(long **)(lVar19 + 0x20) = plVar7 + uVar15 * 5;
        if (lVar8 != 0) {
          __ZdlPv();
        }
      }
      dStack_d0 = 0.0;
      dStack_c8 = 0.0;
      dStack_c0 = 0.0;
      lVar19 = param_5[3];
      if (param_5[4] != lVar19) {
        uVar17 = 0;
        uVar15 = 0;
        uVar9 = 0;
        dVar27 = 0.0;
        uVar26 = 0;
        dStack_130 = 0.0;
        do {
          lVar8 = lStack_b8;
          pdVar10 = (double *)(lVar19 + uVar9 * 0x18);
          if (((ulong)((param_5[1] - *param_5 >> 3) * -0x5555555555555555) <= uVar17) ||
             (pdVar12 = (double *)(*param_5 + uVar17 * 0x18), *pdVar10 < *pdVar12)) {
            if (((ulong)((param_5[7] - param_5[6] >> 3) * -0x5555555555555555) <= uVar15) ||
               (pdVar12 = (double *)(param_5[6] + uVar15 * 0x18), *pdVar10 < *pdVar12)) {
              dVar23 = (double)SUB84(pdVar10[1],0);
              dStack_e8 = (double)(float)((ulong)pdVar10[1] >> 0x20);
              dStack_e0 = (double)*(float *)(pdVar10 + 2);
              dVar22 = *pdVar10;
              dStack_f0 = dVar23;
              FUN_10966b764(lStack_b8 + 0x28,&dStack_f0);
              lVar19 = lStack_b8;
              FUN_10966b8d8(lStack_b8 + 0x28);
              param_3 = dStack_e0 - param_3;
              dStack_110 = dStack_f0 - dVar22;
              dStack_108 = dStack_e8 - dVar23;
              dStack_100 = param_3;
              FUN_10966d518(*pdVar10,lVar19 + 0x80,&dStack_110);
              if (*(char *)(lVar19 + 0x3f1) == '\x01') {
                fVar20 = (float)*(double *)(lVar19 + 0x80);
                fVar25 = (float)*(double *)(lVar19 + 0xa0);
                fVar28 = (float)*(double *)(lVar19 + 0xc0);
                fVar29 = (fVar20 - fVar25) - fVar28;
                fVar31 = (fVar25 - fVar20) - fVar28;
                fVar33 = (fVar28 - fVar20) - fVar25;
                fVar28 = fVar20 + fVar25 + fVar28;
                fVar20 = fVar29;
                if (fVar29 <= fVar28) {
                  fVar20 = fVar28;
                }
                bVar3 = 2;
                if (fVar31 <= fVar20) {
                  fVar31 = fVar20;
                  bVar3 = fVar28 < fVar29;
                }
                bVar4 = 3;
                if (fVar33 <= fVar31) {
                  fVar33 = fVar31;
                  bVar4 = bVar3;
                }
                fVar21 = SQRT(fVar33 + 1.0) * 0.5;
                fVar29 = 0.25 / fVar21;
                fVar25 = ((float)*(double *)(lVar19 + 0x90) - (float)*(double *)(lVar19 + 0xb0)) *
                         fVar29;
                fVar30 = ((float)*(double *)(lVar19 + 0x98) + (float)*(double *)(lVar19 + 0x88)) *
                         fVar29;
                fVar32 = ((float)*(double *)(lVar19 + 0xb8) + (float)*(double *)(lVar19 + 0xa8)) *
                         fVar29;
                fVar31 = ((float)*(double *)(lVar19 + 0x98) - (float)*(double *)(lVar19 + 0x88)) *
                         fVar29;
                fVar24 = ((float)*(double *)(lVar19 + 0xb0) + (float)*(double *)(lVar19 + 0x90)) *
                         fVar29;
                fVar34 = fVar25;
                fVar20 = fVar32;
                fVar33 = fVar21;
                fVar28 = fVar30;
                if (bVar4 != 2) {
                  fVar34 = fVar31;
                  fVar20 = fVar21;
                  fVar33 = fVar32;
                  fVar28 = fVar24;
                }
                fVar29 = ((float)*(double *)(lVar19 + 0xb8) - (float)*(double *)(lVar19 + 0xa8)) *
                         fVar29;
                fVar32 = fVar21;
                if (bVar4 != 0) {
                  fVar32 = fVar29;
                  fVar31 = fVar24;
                  fVar25 = fVar30;
                  fVar29 = fVar21;
                }
                if (bVar4 < 2) {
                  fVar20 = fVar31;
                  fVar33 = fVar25;
                  fVar28 = fVar29;
                }
                param_3 = (double)(ulong)(uint)fVar20;
                if (bVar4 < 2) {
                  fVar34 = fVar32;
                }
                dVar22 = *pdVar10;
                pdVar10 = *(double **)(lVar19 + 0x18);
                if (pdVar10 < *(double **)(lVar19 + 0x20)) {
                  *pdVar10 = dVar22;
                  *(float *)(pdVar10 + 1) = -fVar28;
                  *(float *)((long)pdVar10 + 0xc) = -fVar33;
                  *(float *)(pdVar10 + 2) = -fVar20;
                  *(float *)((long)pdVar10 + 0x14) = fVar34;
                  *(float *)(pdVar10 + 3) = (float)dStack_130;
                  *(undefined4 *)((long)pdVar10 + 0x1c) = uVar26;
                  pdVar12 = pdVar10 + 5;
                  *(float *)(pdVar10 + 4) = (float)dVar27;
                }
                else {
                  lVar8 = (long)pdVar10 - *(long *)(lVar19 + 0x10);
                  uVar11 = (lVar8 >> 3) * -0x3333333333333333 + 1;
                  if (0x666666666666666 < uVar11) {
                    FUN_10966ca18();
                    goto LAB_10966c9dc;
                  }
                  lVar18 = (long)*(double **)(lVar19 + 0x20) - *(long *)(lVar19 + 0x10) >> 3;
                  uVar13 = lVar18 * -0x6666666666666666;
                  if (uVar13 < uVar11 || uVar13 - uVar11 == 0) {
                    uVar13 = uVar11;
                  }
                  if (0x333333333333332 < (ulong)(lVar18 * -0x3333333333333333)) {
                    uVar13 = 0x666666666666666;
                  }
                  lVar18 = lVar19 + 0x10;
                  FUN_10966ca2c();
                  pdVar10 = (double *)(lVar18 + lVar8);
                  *pdVar10 = dVar22;
                  *(float *)(pdVar10 + 1) = -fVar28;
                  *(float *)((long)pdVar10 + 0xc) = -fVar33;
                  *(float *)(pdVar10 + 2) = -fVar20;
                  *(float *)((long)pdVar10 + 0x14) = fVar34;
                  *(float *)(pdVar10 + 3) = (float)dStack_130;
                  *(undefined4 *)((long)pdVar10 + 0x1c) = uVar26;
                  *(float *)(pdVar10 + 4) = (float)dVar27;
                  pdVar12 = pdVar10 + 5;
                  lVar16 = (long)pdVar10 - (*(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10));
                  _memcpy(lVar16);
                  lVar8 = *(long *)(lVar19 + 0x10);
                  *(long *)(lVar19 + 0x10) = lVar16;
                  *(double **)(lVar19 + 0x18) = pdVar12;
                  *(ulong *)(lVar19 + 0x20) = lVar18 + uVar13 * 0x28;
                  if (lVar8 != 0) {
                    __ZdlPv();
                  }
                }
                *(double **)(lVar19 + 0x18) = pdVar12;
              }
              uVar9 = uVar9 + 1;
            }
            else {
              dStack_c0 = (double)*(float *)(pdVar12 + 2);
              dStack_d0 = (double)SUB84(pdVar12[1],0);
              dStack_c8 = (double)(float)((ulong)pdVar12[1] >> 0x20);
              FUN_10966e104(*pdVar12,lStack_b8 + 0x80,&dStack_d0);
              uVar15 = uVar15 + 1;
            }
          }
          else {
            uVar26 = *(undefined4 *)((long)pdVar12 + 0xc);
            dVar27 = (double)*(float *)(pdVar12 + 2);
            dStack_e0 = dVar27 * 9.80665;
            dStack_130 = (double)SUB84(pdVar12[1],0);
            dStack_f0 = dStack_130 * 9.80665;
            dStack_e8 = (double)(float)((ulong)pdVar12[1] >> 0x20) * 9.80665;
            param_3 = dStack_130;
            FUN_10966d87c(*pdVar12,lStack_b8 + 0x80,&dStack_f0);
            func_0x00010966b6d8(*pdVar12,lVar8 + 0x28,&dStack_f0);
            uVar17 = uVar17 + 1;
          }
          lVar19 = param_5[3];
        } while (uVar9 < (ulong)((param_5[4] - lVar19 >> 3) * -0x5555555555555555));
      }
      uVar14 = 1;
      if (plStack_b0 == (long *)0x0) {
        return 1;
      }
      goto LAB_10966c96c;
    }
  }
  uVar14 = 0;
LAB_10966c96c:
  plVar5 = plStack_b0;
  plVar7 = plStack_b0 + 1;
  do {
    lVar19 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar19 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar19 == 0) {
    (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  return uVar14;
}



/* Entry: 10966cbf8; end: 10966d2eb;  */

void FUN_10966cbf8(long *param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 *puVar1;
  char cVar2;
  double ****ppppdVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  double *****pppppdVar7;
  double *****pppppdVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  float *pfVar13;
  long lVar14;
  ulong uVar15;
  double *****pppppdVar16;
  long lVar17;
  undefined8 *puVar18;
  double *****pppppdVar19;
  float fVar20;
  double ****ppppdVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined4 uVar30;
  double dVar31;
  undefined4 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double ****ppppdStack_188;
  double ****ppppdStack_180;
  double ****ppppdStack_178;
  double ***pppdStack_170;
  double ***pppdStack_168;
  double ***pppdStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_120;
  long lStack_118;
  long lStack_108;
  long lStack_100;
  long lStack_f0;
  long lStack_e8;
  double ****ppppdStack_d8;
  double ****ppppdStack_d0;
  double ****ppppdStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  
  FUN_1095c9020(&lStack_138,param_5);
  FUN_1095c7f9c(&pppdStack_170,param_6);
  ppppdVar21 = (double ****)pppdStack_170;
  if (((((double)pppdStack_170 != 0.0) ||
       (ppppdVar21 = (double ****)pppdStack_168, (double)pppdStack_168 != 0.0)) ||
      (ppppdVar21 = (double ****)pppdStack_160, (double)pppdStack_160 != 0.0)) &&
     (lStack_118 - lStack_120 != 0)) {
    lVar11 = (lStack_118 - lStack_120 >> 3) * -0x5555555555555555;
    pfVar13 = (float *)(lStack_120 + 0x10);
    do {
      param_4 = (ulong)(uint)pfVar13[-1];
      pfVar13[-2] = pfVar13[-2] - (float)(double)pppdStack_170;
      pfVar13[-1] = pfVar13[-1] - (float)(double)pppdStack_168;
      param_3 = (ulong)(uint)*pfVar13;
      fVar20 = *pfVar13 - (float)(double)pppdStack_160;
      ppppdVar21 = (double ****)(ulong)(uint)fVar20;
      *pfVar13 = fVar20;
      lVar11 = lVar11 + -1;
      pfVar13 = pfVar13 + 6;
    } while (lVar11 != 0);
  }
  ppppdStack_180 = (double ****)0x0;
  ppppdStack_178 = (double ****)0x0;
  ppppdStack_188 = (double ****)0x0;
  FUN_10966bf1c(&lStack_b8,&ppppdStack_d8);
  FUN_10966b934(&plStack_c0,lStack_b8,&lStack_138,1);
  if (plStack_c0 != (long *)0x0) {
    plVar9 = plStack_c0 + 1;
    do {
      lVar11 = *plVar9;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_c0 + 0x10))();
    }
  }
  ppppdStack_d0 = (double ****)0x0;
  ppppdStack_c8 = (double ****)0x0;
  ppppdStack_d8 = (double ****)0x0;
  lVar11 = *(long *)(lStack_b8 + 0x18) - *(long *)(lStack_b8 + 0x10);
  if (lVar11 != 0) {
    uVar10 = (lVar11 >> 3) * -0x3333333333333333;
    if (0x666666666666666 < uVar10) {
      FUN_10966ca18();
LAB_10966d26c:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10966d270);
      (*pcVar4)();
    }
    pppppdVar7 = &ppppdStack_d8;
    FUN_10966ca2c();
    ppppdStack_c8 = (double ****)(pppppdVar7 + uVar10 * 5);
    ppppdStack_d8 = (double ****)pppppdVar7;
    ppppdStack_d0 = (double ****)pppppdVar7;
    _memmove();
    ppppdStack_d0 = (double ****)((long)pppppdVar7 + lVar11);
    if ((long)ppppdStack_d0 - (long)ppppdStack_d8 != 0) {
      ppppdStack_180 = ppppdStack_188;
      FUN_10966d2ec(&ppppdStack_188,
                    ((long)ppppdStack_d0 - (long)ppppdStack_d8 >> 3) * -0x3333333333333333);
      ppppdVar3 = ppppdStack_d0;
      if (ppppdStack_d8 != ppppdStack_d0) {
        pppppdVar7 = (double *****)ppppdStack_d8;
        do {
          fVar20 = SUB84(ppppdVar21,0);
          FUN_109600148(pppppdVar7 + 1);
          uVar32 = (undefined4)param_3;
          uVar30 = (undefined4)param_4;
          if (ppppdStack_180 < ppppdStack_178) {
            ppppdVar21 = *pppppdVar7;
            *ppppdStack_180 = (double ***)ppppdVar21;
            *(float *)(ppppdStack_180 + 1) = -fVar20;
            *(undefined4 *)((long)ppppdStack_180 + 0xc) = uVar32;
            *(undefined4 *)(ppppdStack_180 + 2) = uVar30;
            pppppdVar19 = (double *****)(ppppdStack_180 + 3);
          }
          else {
            lVar11 = (long)ppppdStack_180 - (long)ppppdStack_188;
            uVar10 = (lVar11 >> 3) * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar10) {
              FUN_10965ce8c();
              goto LAB_10966d26c;
            }
            lVar17 = (long)ppppdStack_178 - (long)ppppdStack_188 >> 3;
            uVar12 = lVar17 * 0x5555555555555556;
            if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
              uVar12 = uVar10;
            }
            if (0x555555555555554 < (ulong)(lVar17 * -0x5555555555555555)) {
              uVar12 = 0xaaaaaaaaaaaaaaa;
            }
            pppppdVar8 = &ppppdStack_188;
            FUN_10965cea0();
            puVar18 = (undefined8 *)((long)pppppdVar8 + lVar11);
            ppppdVar21 = *pppppdVar7;
            *puVar18 = ppppdVar21;
            *(float *)(puVar18 + 1) = -fVar20;
            *(undefined4 *)((long)puVar18 + 0xc) = uVar32;
            *(undefined4 *)(puVar18 + 2) = uVar30;
            pppppdVar19 = (double *****)(puVar18 + 3);
            pppppdVar16 = (double *****)
                          ((long)puVar18 - ((long)ppppdStack_180 - (long)ppppdStack_188));
            _memcpy(pppppdVar16);
            bVar5 = (double *****)ppppdStack_188 != (double *****)0x0;
            ppppdStack_188 = (double ****)pppppdVar16;
            ppppdStack_178 = (double ****)(pppppdVar8 + uVar12 * 3);
            if (bVar5) {
              ppppdStack_180 = (double ****)pppppdVar19;
              __ZdlPv();
            }
          }
          pppppdVar7 = pppppdVar7 + 5;
          ppppdStack_180 = (double ****)pppppdVar19;
        } while (pppppdVar7 != (double *****)ppppdVar3);
      }
    }
    if ((double *****)ppppdStack_d8 != (double *****)0x0) {
      ppppdStack_d0 = ppppdStack_d8;
      __ZdlPv(ppppdStack_d8);
    }
  }
  if (plStack_b0 != (long *)0x0) {
    plVar9 = plStack_b0 + 1;
    do {
      lVar11 = *plVar9;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b0);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10966d2ec(param_1,((long)ppppdStack_180 - (long)ppppdStack_188 >> 3) * -0x5555555555555555);
  if (ppppdStack_180 != ppppdStack_188) {
    lVar11 = 0;
    uVar10 = 0;
    do {
      ppppdVar21 = ppppdStack_188;
      dVar26 = (double)*(float *)((long)ppppdStack_188 + lVar11 + 0xc);
      dVar22 = (double)*(float *)((long)ppppdStack_188 + lVar11 + 8) * -0.5;
      dVar31 = dVar26 * -0.5;
      dVar33 = (double)*(float *)((long)ppppdStack_188 + lVar11 + 0x10) * -0.5;
      ___sincos_stret();
      dVar23 = dVar26;
      ___sincos_stret();
      dVar28 = dVar23;
      ___sincos_stret();
      dVar24 = dStack_150;
      dVar25 = dStack_158;
      dVar29 = dVar22 * dVar31 * dVar33 + dVar28 * dVar26 * dVar23;
      dVar37 = -(dVar26 * dVar31 * dVar33) + dVar28 * dVar23 * dVar22;
      dVar27 = dVar23 * dVar22 * dVar33 + dVar28 * dVar26 * dVar31;
      dVar36 = -(dVar22 * dVar31 * dVar28) + dVar33 * dVar26 * dVar23;
      dVar26 = dStack_158 * dVar37 + dVar29 * dStack_140 + dVar27 * dStack_150 + dVar36 * dStack_148
      ;
      dVar28 = (dStack_158 * dVar29 - dVar37 * dStack_140) - dVar36 * dStack_150;
      dVar34 = dVar28 + dVar27 * dStack_148;
      dVar31 = (dVar29 * dStack_150 - dVar27 * dStack_140) - dVar37 * dStack_148;
      dVar35 = dVar31 + dVar36 * dStack_158;
      dVar23 = (dVar29 * dStack_148 - dVar36 * dStack_140) - dVar27 * dStack_158;
      dVar29 = dVar23 + dVar37 * dStack_150;
      dVar22 = -(dVar34 * dVar26) + dVar29 * dVar35;
      dVar22 = dVar22 + dVar22;
      dVar33 = ABS(dVar22);
      bVar5 = false;
      bVar6 = true;
      if (ABS(((-(dVar34 * dVar34) + dVar26 * dVar26) - dVar35 * dVar35) + dVar29 * dVar29) <=
          2.220446049250313e-16) {
        bVar5 = false;
        bVar6 = true;
        if (!NAN(dVar33)) {
          bVar5 = dVar33 == 2.220446049250313e-16;
          bVar6 = 2.220446049250313e-16 <= dVar33;
        }
      }
      if (!bVar6 || bVar5) {
        dVar28 = -(dStack_148 * dVar27) - dVar28;
        _atan2(dVar28,dVar26);
        dVar22 = dVar28 + dVar28;
      }
      else {
        _atan2();
      }
      dVar23 = -(dVar24 * dVar37) - dVar23;
      dVar24 = dVar26 * dVar23 + dVar35 * dVar34;
      dVar24 = dVar24 + dVar24;
      dVar28 = ABS(dVar24);
      fVar20 = 0.0;
      bVar5 = false;
      bVar6 = true;
      if (ABS(dVar34 * dVar34 + dVar26 * dVar26 + (-(dVar25 * dVar36) - dVar31) * dVar35 +
              dVar23 * dVar29) <= 2.220446049250313e-16) {
        bVar5 = false;
        bVar6 = true;
        if (!NAN(dVar28)) {
          bVar5 = dVar28 == 2.220446049250313e-16;
          bVar6 = 2.220446049250313e-16 <= dVar28;
        }
      }
      if (bVar6 && !bVar5) {
        _atan2();
        fVar20 = (float)dVar24;
      }
      dVar24 = (dVar35 * dVar26 + dVar29 * dVar34) * -2.0;
      dVar25 = -1.0;
      if (-1.0 <= dVar24) {
        dVar25 = dVar24;
      }
      dVar24 = 1.0;
      if (dVar25 <= 1.0) {
        dVar24 = dVar25;
      }
      _asin();
      puVar18 = (undefined8 *)param_1[1];
      if (puVar18 < (undefined8 *)param_1[2]) {
        *puVar18 = *(undefined8 *)((long)ppppdVar21 + lVar11);
        *(float *)(puVar18 + 1) = -(float)dVar22;
        *(float *)((long)puVar18 + 0xc) = -(float)dVar24;
        *(float *)(puVar18 + 2) = -fVar20;
        puVar18 = puVar18 + 3;
      }
      else {
        lVar17 = (long)puVar18 - *param_1;
        uVar12 = (lVar17 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar12) {
          FUN_10965ce8c();
          goto LAB_10966d26c;
        }
        lVar14 = param_1[2] - *param_1 >> 3;
        uVar15 = lVar14 * 0x5555555555555556;
        if (uVar15 < uVar12 || uVar15 - uVar12 == 0) {
          uVar15 = uVar12;
        }
        if (0x555555555555554 < (ulong)(lVar14 * -0x5555555555555555)) {
          uVar15 = 0xaaaaaaaaaaaaaaa;
        }
        plVar9 = param_1;
        FUN_10965cea0();
        puVar1 = (undefined8 *)((long)plVar9 + lVar17);
        *puVar1 = *(undefined8 *)((long)ppppdVar21 + lVar11);
        *(float *)(puVar1 + 1) = -(float)dVar22;
        *(float *)((long)puVar1 + 0xc) = -(float)dVar24;
        *(float *)(puVar1 + 2) = -fVar20;
        puVar18 = puVar1 + 3;
        lVar14 = (long)puVar1 - (param_1[1] - *param_1);
        _memcpy(lVar14);
        lVar17 = *param_1;
        *param_1 = lVar14;
        param_1[1] = (long)puVar18;
        param_1[2] = (long)(plVar9 + uVar15 * 3);
        if (lVar17 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar18;
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x18;
    } while (uVar10 < (ulong)(((long)ppppdStack_180 - (long)ppppdStack_188 >> 3) *
                             -0x5555555555555555));
  }
  if ((double *****)ppppdStack_188 != (double *****)0x0) {
    ppppdStack_180 = ppppdStack_188;
    __ZdlPv(ppppdStack_188);
  }
  if (lStack_f0 != 0) {
    lStack_e8 = lStack_f0;
    __ZdlPv();
  }
  if (lStack_108 != 0) {
    lStack_100 = lStack_108;
    __ZdlPv();
  }
  if (lStack_120 != 0) {
    lStack_118 = lStack_120;
    __ZdlPv();
  }
  if (lStack_138 != 0) {
    lStack_130 = lStack_138;
    __ZdlPv();
  }
  return;
}



/* Entry: 10966d2ec; end: 10966d397;  */

void FUN_10966d2ec(double param_1,double param_2,double *param_3,double *param_4)

{
  int iVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = *param_3;
  if ((double *)(((long)param_3[2] - (long)dVar3 >> 3) * -0x5555555555555555) < param_4) {
    if ((double *)0xaaaaaaaaaaaaaaa < param_4) {
      FUN_10965ce8c();
      iVar1 = *(int *)(param_3 + 5);
      *(int *)(param_3 + 5) = iVar1 + 1;
      if (iVar1 == 0) {
        dVar4 = param_4[1];
        dVar3 = *param_4;
        param_3[3] = param_4[2];
        param_3[2] = dVar4;
        param_3[1] = dVar3;
      }
      else {
        param_2 = param_2 * (param_1 - param_3[4]);
        param_2 = param_2 / (*param_3 + param_2);
        dVar3 = 1.0 - param_2;
        dVar4 = param_4[2];
        dVar5 = *param_4;
        param_3[2] = param_3[2] * dVar3 + param_4[1] * param_2;
        param_3[1] = param_3[1] * dVar3 + dVar5 * param_2;
        param_3[3] = param_3[3] * dVar3 + param_2 * dVar4;
      }
      param_3[4] = param_1;
      return;
    }
    dVar4 = param_3[1];
    pdVar2 = param_3;
    FUN_10965cea0();
    dVar3 = (double)((long)pdVar2 + ((long)dVar4 - (long)dVar3));
    dVar5 = (double)((long)dVar3 - ((long)param_3[1] - (long)*param_3));
    _memcpy(dVar5);
    dVar4 = *param_3;
    *param_3 = dVar5;
    param_3[1] = dVar3;
    param_3[2] = (double)(pdVar2 + (long)param_4 * 3);
    if (dVar4 != 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10966d398; end: 10966d517;  */

void FUN_10966d398(double param_1,double param_2,double *param_3,double *param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  iVar1 = *(int *)(param_3 + 5);
  *(int *)(param_3 + 5) = iVar1 + 1;
  if (iVar1 == 0) {
    dVar3 = param_4[1];
    dVar2 = *param_4;
    param_3[3] = param_4[2];
    param_3[2] = dVar3;
    param_3[1] = dVar2;
  }
  else {
    param_2 = param_2 * (param_1 - param_3[4]);
    param_2 = param_2 / (*param_3 + param_2);
    dVar2 = 1.0 - param_2;
    dVar3 = param_4[2];
    dVar4 = *param_4;
    param_3[2] = param_3[2] * dVar2 + param_4[1] * param_2;
    param_3[1] = param_3[1] * dVar2 + dVar4 * param_2;
    param_3[3] = param_3[3] * dVar2 + param_2 * dVar3;
  }
  param_3[4] = param_1;
  return;
}



/* Entry: 10966d518; end: 10966d74f;  */

void FUN_10966d518(double param_1,double *param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  if (param_2[0x66] != 0.0) {
    dVar10 = param_1 - param_2[0x66];
    if (dVar10 <= 0.03999999910593033) {
      if (((ulong)param_2[0x6d] & 1) == 0) {
        param_2[0x6c] = dVar10;
        *(undefined4 *)((long)param_2 + 0x36c) = 1;
        *(undefined1 *)(param_2 + 0x6d) = 1;
      }
      else {
        param_2[0x6c] = dVar10 * 0.050000000000000044 + param_2[0x6c] * 0.95;
        iVar1 = *(int *)((long)param_2 + 0x36c);
        *(int *)((long)param_2 + 0x36c) = iVar1 + 1;
        *(bool *)(param_2 + 0x6e) = 9 < iVar1;
      }
    }
    else if (*(char *)(param_2 + 0x6e) == '\x01') {
      dVar10 = param_2[0x6c];
    }
    else {
      dVar10 = 0.01;
    }
    dVar2 = param_3[2];
    dVar3 = *param_3;
    param_2[0x5b] = param_3[1] * -dVar10;
    param_2[0x5a] = dVar3 * -dVar10;
    param_2[0x5c] = -(dVar10 * dVar2);
    FUN_10966ed24(&dStack_78,param_2 + 0x5a);
    param_2[0xc] = dStack_60;
    param_2[0xb] = dStack_68;
    param_2[0xe] = dStack_50;
    param_2[0xd] = dStack_58;
    param_2[0x10] = dStack_40;
    param_2[0xf] = dStack_48;
    param_2[0x11] = dStack_38;
    param_2[10] = dStack_70;
    param_2[9] = dStack_78;
    dVar2 = *param_2;
    dVar3 = param_2[1];
    dVar4 = param_2[2];
    dVar5 = param_2[3];
    dVar6 = param_2[4];
    dVar7 = param_2[5];
    dVar8 = param_2[6];
    dVar9 = param_2[7];
    dVar11 = param_2[8];
    dVar12 = param_2[9];
    dVar13 = param_2[10];
    dVar14 = param_2[0xb];
    dVar15 = param_2[0xc];
    dVar16 = param_2[0xd];
    dVar17 = param_2[0xe];
    dVar18 = param_2[0xf];
    dVar19 = param_2[0x10];
    dVar20 = param_2[0x11];
    *param_2 = dVar5 * dVar13 + dVar12 * dVar2 + dVar14 * dVar8;
    param_2[1] = dVar6 * dVar13 + dVar12 * dVar3 + dVar14 * dVar9;
    param_2[2] = dVar7 * dVar13 + dVar12 * dVar4 + dVar14 * dVar11;
    param_2[3] = dVar5 * dVar16 + dVar15 * dVar2 + dVar17 * dVar8;
    param_2[4] = dVar6 * dVar16 + dVar15 * dVar3 + dVar17 * dVar9;
    param_2[5] = dVar7 * dVar16 + dVar15 * dVar4 + dVar17 * dVar11;
    param_2[6] = dVar5 * dVar19 + dVar18 * dVar2 + dVar20 * dVar8;
    param_2[7] = dVar6 * dVar19 + dVar18 * dVar3 + dVar20 * dVar9;
    param_2[8] = dVar7 * dVar19 + dVar18 * dVar4 + dVar20 * dVar11;
    FUN_10966d750(param_2);
    dVar10 = dVar10 * dVar10;
    param_2[0x13] = param_2[0x1c] * dVar10 + param_2[0x13];
    param_2[0x12] = param_2[0x1b] * dVar10 + param_2[0x12];
    param_2[0x15] = param_2[0x1e] * dVar10 + param_2[0x15];
    param_2[0x14] = param_2[0x1d] * dVar10 + param_2[0x14];
    param_2[0x17] = param_2[0x20] * dVar10 + param_2[0x17];
    param_2[0x16] = param_2[0x1f] * dVar10 + param_2[0x16];
    param_2[0x19] = param_2[0x22] * dVar10 + param_2[0x19];
    param_2[0x18] = param_2[0x21] * dVar10 + param_2[0x18];
    param_2[0x1a] = dVar10 * param_2[0x23] + param_2[0x1a];
  }
  param_2[0x66] = param_1;
  dVar2 = param_3[1];
  dVar10 = *param_3;
  param_2[0x69] = param_3[2];
  param_2[0x68] = dVar2;
  param_2[0x67] = dVar10;
  return;
}



/* Entry: 10966d750; end: 10966d87b;  */

void FUN_10966d750(long param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  dVar4 = *(double *)(param_1 + 0x48);
  dVar5 = *(double *)(param_1 + 0x50);
  dVar2 = *(double *)(param_1 + 0x78);
  dVar3 = *(double *)(param_1 + 0x80);
  dVar7 = *(double *)(param_1 + 0x58);
  dVar6 = *(double *)(param_1 + 0x60);
  dVar8 = *(double *)(param_1 + 0x68);
  dVar9 = *(double *)(param_1 + 0x70);
  dVar1 = *(double *)(param_1 + 0x88);
  dVar10 = *(double *)(param_1 + 0x90);
  dVar11 = *(double *)(param_1 + 0x98);
  dVar12 = *(double *)(param_1 + 0xa0);
  dVar13 = *(double *)(param_1 + 0xa8);
  dVar14 = *(double *)(param_1 + 0xb0);
  dVar15 = *(double *)(param_1 + 0xb8);
  dVar16 = *(double *)(param_1 + 0xc0);
  dVar17 = *(double *)(param_1 + 200);
  dVar18 = *(double *)(param_1 + 0xd0);
  dVar19 = dVar5 * dVar11 + dVar10 * dVar4 + dVar12 * dVar7;
  dVar20 = dVar8 * dVar11 + dVar10 * dVar6 + dVar12 * dVar9;
  dVar10 = dVar3 * dVar11 + dVar10 * dVar2 + dVar12 * dVar1;
  dVar11 = dVar5 * dVar14 + dVar13 * dVar4 + dVar15 * dVar7;
  dVar12 = dVar8 * dVar14 + dVar13 * dVar6 + dVar15 * dVar9;
  dVar13 = dVar3 * dVar14 + dVar13 * dVar2 + dVar15 * dVar1;
  dVar14 = dVar5 * dVar17 + dVar16 * dVar4 + dVar18 * dVar7;
  dVar15 = dVar8 * dVar17 + dVar16 * dVar6 + dVar18 * dVar9;
  dVar16 = dVar3 * dVar17 + dVar16 * dVar2 + dVar18 * dVar1;
  *(double *)(param_1 + 0x90) = dVar5 * dVar11 + dVar4 * dVar19 + dVar7 * dVar14;
  *(double *)(param_1 + 0x98) = dVar5 * dVar12 + dVar4 * dVar20 + dVar7 * dVar15;
  *(double *)(param_1 + 0xa0) = dVar5 * dVar13 + dVar4 * dVar10 + dVar7 * dVar16;
  *(double *)(param_1 + 0xa8) = dVar8 * dVar11 + dVar6 * dVar19 + dVar9 * dVar14;
  *(double *)(param_1 + 0xb0) = dVar8 * dVar12 + dVar6 * dVar20 + dVar9 * dVar15;
  *(double *)(param_1 + 0xb8) = dVar8 * dVar13 + dVar6 * dVar10 + dVar9 * dVar16;
  *(double *)(param_1 + 0xc0) = dVar3 * dVar11 + dVar2 * dVar19 + dVar1 * dVar14;
  *(double *)(param_1 + 200) = dVar3 * dVar12 + dVar2 * dVar20 + dVar1 * dVar15;
  *(double *)(param_1 + 0xd0) = dVar3 * dVar13 + dVar2 * dVar10 + dVar1 * dVar16;
  *(undefined8 *)(param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0x3ff0000000000000;
  return;
}



/* Entry: 10966d87c; end: 10966e07f;  */

void FUN_10966d87c(double *param_1,double *param_2)

{
  double dVar1;
  undefined8 *puVar2;
  long lVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined8 auStack_a8 [3];
  
  dVar1 = param_2[2];
  dVar6 = *param_2;
  param_1[0x55] = param_2[1];
  param_1[0x54] = dVar6;
  param_1[0x56] = dVar1;
  dVar1 = SQRT(param_1[0x54] * param_1[0x54] + param_1[0x55] * param_1[0x55] +
               param_1[0x56] * param_1[0x56]);
  dVar6 = param_1[0x6a];
  param_1[0x6a] = dVar1;
  dVar1 = ABS(dVar1 - dVar6) * 0.5 + param_1[0x6b] * 0.5;
  param_1[0x6b] = dVar1;
  dVar8 = 6.25;
  dVar6 = 7.0;
  dVar1 = (double)NEON_fminnm((dVar1 / 0.15) * 6.25 + 0.75,0x401c000000000000);
  dVar1 = dVar1 * dVar1;
  param_1[0x2d] = dVar1;
  param_1[0x2f] = 0.0;
  param_1[0x30] = 0.0;
  param_1[0x2e] = 0.0;
  param_1[0x31] = dVar1;
  param_1[0x33] = 0.0;
  param_1[0x34] = 0.0;
  param_1[0x32] = 0.0;
  param_1[0x35] = dVar1;
  if (*(char *)((long)param_1 + 0x371) != '\x01') {
    func_0x00010966e9f0(&dStack_f0,param_1 + 0x60,param_1 + 0x54);
    param_1[5] = dStack_c8;
    param_1[4] = dStack_d0;
    param_1[7] = dStack_b8;
    param_1[6] = dStack_c0;
    param_1[8] = dStack_b0;
    param_1[1] = dStack_e8;
    *param_1 = dStack_f0;
    param_1[3] = dStack_d8;
    param_1[2] = dStack_e0;
    *(undefined1 *)((long)param_1 + 0x371) = 1;
    return;
  }
  pdVar4 = param_1 + 0x3f;
  FUN_10966e080(param_1,param_1);
  lVar3 = 0;
  param_1[0x51] = dVar1;
  param_1[0x52] = dVar6;
  param_1[0x53] = dVar8;
  do {
    auStack_a8[0] = 0;
    auStack_a8[1] = 0;
    auStack_a8[2] = 0;
    puVar2 = auStack_a8 + 2;
    if (((int)lVar3 != 2) && (puVar2 = auStack_a8 + 1, (int)lVar3 != 1)) {
      puVar2 = auStack_a8;
    }
    *puVar2 = 0x3e7ad7f29abcaf48;
    FUN_10966ed24(&dStack_f0,auStack_a8);
    dVar5 = *param_1;
    dVar7 = param_1[1];
    dVar9 = param_1[2];
    dVar11 = param_1[3];
    dVar12 = param_1[4];
    dVar13 = param_1[5];
    dVar14 = param_1[6];
    dVar15 = param_1[7];
    dVar18 = param_1[8];
    dVar1 = dStack_e0 * dVar14;
    dVar6 = dStack_f0 * dVar7;
    dVar8 = dStack_e0 * dVar15;
    dStack_e0 = dVar13 * dStack_e8 + dStack_f0 * dVar9 + dStack_e0 * dVar18;
    dVar16 = dStack_c8 * dVar14;
    dVar10 = dStack_d8 * dVar7;
    dVar17 = dStack_c8 * dVar15;
    dStack_c8 = dVar13 * dStack_d0 + dStack_d8 * dVar9 + dStack_c8 * dVar18;
    dVar14 = dVar11 * dStack_b8 + dStack_c0 * dVar5 + dStack_b0 * dVar14;
    dVar7 = dVar12 * dStack_b8 + dStack_c0 * dVar7 + dStack_b0 * dVar15;
    dVar9 = dVar13 * dStack_b8 + dStack_c0 * dVar9 + dStack_b0 * dVar18;
    dStack_f0 = dVar11 * dStack_e8 + dStack_f0 * dVar5 + dVar1;
    dStack_e8 = dVar12 * dStack_e8 + dVar6 + dVar8;
    dStack_d8 = dVar11 * dStack_d0 + dStack_d8 * dVar5 + dVar16;
    dStack_d0 = dVar12 * dStack_d0 + dVar10 + dVar17;
    dStack_c0 = dVar14;
    dStack_b8 = dVar7;
    dStack_b0 = dVar9;
    FUN_10966e080(param_1,&dStack_f0);
    dVar1 = param_1[0x53];
    dVar6 = param_1[0x51];
    pdVar4[1] = (param_1[0x52] - dVar7) * 10000000.0;
    *pdVar4 = (dVar6 - dVar14) * 10000000.0;
    pdVar4[2] = (dVar1 - dVar9) * 10000000.0;
    lVar3 = lVar3 + 1;
    pdVar4 = pdVar4 + 3;
  } while (lVar3 != 3);
  dVar23 = param_1[0x42];
  dVar9 = param_1[0x45];
  dVar24 = param_1[0x3f];
  dVar27 = param_1[0x40];
  dVar25 = param_1[0x43];
  dVar5 = param_1[0x46];
  dVar28 = param_1[0x41];
  dVar26 = param_1[0x44];
  dVar8 = param_1[0x47];
  dVar19 = param_1[0x12];
  dVar12 = param_1[0x13];
  dVar11 = param_1[0x14];
  dVar22 = param_1[0x15];
  dVar21 = param_1[0x16];
  dVar20 = param_1[0x17];
  dVar10 = param_1[0x18];
  dVar14 = param_1[0x19];
  dVar1 = param_1[0x1a];
  dVar15 = dVar23 * dVar12 + dVar19 * dVar24 + dVar11 * dVar9;
  dVar18 = dVar25 * dVar12 + dVar19 * dVar27 + dVar11 * dVar5;
  dVar31 = dVar26 * dVar12 + dVar19 * dVar28 + dVar11 * dVar8;
  dVar33 = dVar23 * dVar21 + dVar22 * dVar24 + dVar20 * dVar9;
  dVar35 = dVar25 * dVar21 + dVar22 * dVar27 + dVar20 * dVar5;
  dVar37 = dVar26 * dVar21 + dVar22 * dVar28 + dVar20 * dVar8;
  dVar16 = dVar23 * dVar14 + dVar10 * dVar24 + dVar1 * dVar9;
  dVar17 = dVar25 * dVar14 + dVar10 * dVar27 + dVar1 * dVar5;
  dVar7 = dVar26 * dVar14 + dVar10 * dVar28 + dVar1 * dVar8;
  dVar30 = param_1[0x2d] + dVar23 * dVar33 + dVar24 * dVar15 + dVar9 * dVar16;
  dVar32 = param_1[0x2e] + dVar23 * dVar35 + dVar24 * dVar18 + dVar9 * dVar17;
  dVar13 = param_1[0x2f] + dVar23 * dVar37 + dVar24 * dVar31 + dVar9 * dVar7;
  dVar34 = dVar25 * dVar33 + dVar27 * dVar15 + dVar5 * dVar16 + param_1[0x30];
  dVar36 = dVar25 * dVar35 + dVar27 * dVar18 + dVar5 * dVar17 + param_1[0x31];
  dVar6 = dVar25 * dVar37 + dVar27 * dVar31 + dVar5 * dVar7 + param_1[0x32];
  dVar29 = dVar26 * dVar33 + dVar28 * dVar15 + dVar8 * dVar16 + param_1[0x33];
  dVar16 = dVar26 * dVar35 + dVar28 * dVar18 + dVar8 * dVar17 + param_1[0x34];
  dVar7 = dVar26 * dVar37 + dVar28 * dVar31 + dVar8 * dVar7 + param_1[0x35];
  param_1[0x3c] = dVar29;
  param_1[0x3d] = dVar16;
  param_1[0x3e] = dVar7;
  dVar18 = -(dVar16 * dVar6) + dVar7 * dVar36;
  dVar17 = -(dVar16 * dVar13) + dVar7 * dVar32;
  dVar37 = -(dVar36 * dVar13) + dVar6 * dVar32;
  param_1[0x40] = dVar23;
  param_1[0x42] = dVar27;
  param_1[0x45] = dVar28;
  param_1[0x46] = dVar26;
  param_1[0x36] = dVar30;
  param_1[0x37] = dVar32;
  param_1[0x38] = dVar13;
  param_1[0x39] = dVar34;
  param_1[0x3a] = dVar36;
  param_1[0x3b] = dVar6;
  dVar15 = 1.0 / (-(dVar34 * dVar17) + dVar18 * dVar30 + dVar37 * dVar29);
  dVar18 = dVar18 * dVar15;
  dVar33 = -((-(dVar29 * dVar6) + dVar7 * dVar34) * dVar15);
  dVar35 = (-(dVar29 * dVar36) + dVar16 * dVar34) * dVar15;
  dVar31 = -(dVar17 * dVar15);
  dVar38 = (-(dVar29 * dVar13) + dVar7 * dVar30) * dVar15;
  dVar7 = -((-(dVar29 * dVar32) + dVar16 * dVar30) * dVar15);
  dVar37 = dVar37 * dVar15;
  dVar6 = -((-(dVar34 * dVar13) + dVar6 * dVar30) * dVar15);
  dVar15 = (-(dVar34 * dVar32) + dVar36 * dVar30) * dVar15;
  dVar13 = dVar27 * dVar33 + dVar24 * dVar18 + dVar28 * dVar35;
  dVar17 = dVar27 * dVar38 + dVar24 * dVar31 + dVar28 * dVar7;
  dVar30 = dVar27 * dVar6 + dVar24 * dVar37 + dVar28 * dVar15;
  dVar32 = dVar25 * dVar33 + dVar23 * dVar18 + dVar26 * dVar35;
  dVar29 = dVar25 * dVar38 + dVar23 * dVar31 + dVar26 * dVar7;
  dVar16 = dVar5 * dVar33 + dVar9 * dVar18 + dVar8 * dVar35;
  dVar18 = dVar25 * dVar6 + dVar23 * dVar37 + dVar26 * dVar15;
  dVar31 = dVar5 * dVar38 + dVar9 * dVar31 + dVar8 * dVar7;
  dVar6 = dVar5 * dVar6 + dVar9 * dVar37 + dVar8 * dVar15;
  dVar7 = dVar12 * dVar32 + dVar19 * dVar13 + dVar11 * dVar16;
  dVar33 = dVar12 * dVar29 + dVar19 * dVar17 + dVar11 * dVar31;
  dVar34 = dVar12 * dVar18 + dVar19 * dVar30 + dVar11 * dVar6;
  dVar38 = dVar21 * dVar32 + dVar22 * dVar13 + dVar20 * dVar16;
  dVar36 = dVar21 * dVar29 + dVar22 * dVar17 + dVar20 * dVar31;
  dVar15 = dVar14 * dVar32 + dVar10 * dVar13 + dVar1 * dVar16;
  dVar39 = dVar21 * dVar18 + dVar22 * dVar30 + dVar20 * dVar6;
  dVar31 = dVar14 * dVar29 + dVar10 * dVar17 + dVar1 * dVar31;
  dVar18 = dVar14 * dVar18 + dVar10 * dVar30 + dVar1 * dVar6;
  dVar6 = 1.0 - (dVar27 * dVar33 + dVar7 * dVar24 + dVar34 * dVar28);
  dVar37 = 0.0 - (dVar25 * dVar33 + dVar7 * dVar23 + dVar34 * dVar26);
  dVar30 = 0.0 - (dVar27 * dVar36 + dVar38 * dVar24 + dVar39 * dVar28);
  dVar32 = 1.0 - (dVar25 * dVar36 + dVar38 * dVar23 + dVar39 * dVar26);
  dVar35 = 0.0 - (dVar27 * dVar31 + dVar15 * dVar24 + dVar18 * dVar28);
  dVar29 = 0.0 - (dVar25 * dVar31 + dVar15 * dVar23 + dVar18 * dVar26);
  param_1[0x41] = dVar9;
  param_1[0x44] = dVar5;
  dVar16 = 0.0 - (dVar5 * dVar33 + dVar7 * dVar9 + dVar34 * dVar8);
  dVar17 = 0.0 - (dVar5 * dVar36 + dVar38 * dVar9 + dVar39 * dVar8);
  dVar8 = 1.0 - (dVar5 * dVar31 + dVar15 * dVar9 + dVar18 * dVar8);
  param_1[0x48] = dVar7;
  param_1[0x49] = dVar33;
  dVar5 = param_1[0x51];
  dVar9 = param_1[0x52];
  param_1[0x4b] = dVar38;
  param_1[0x4c] = dVar36;
  param_1[0x4e] = dVar15;
  param_1[0x4a] = dVar34;
  param_1[0x4f] = dVar31;
  dVar13 = param_1[0x53];
  param_1[0x4d] = dVar39;
  param_1[0x50] = dVar18;
  param_1[0x5d] = dVar33 * dVar9 + dVar5 * dVar7 + dVar13 * dVar34;
  param_1[0x5e] = dVar36 * dVar9 + dVar5 * dVar38 + dVar13 * dVar39;
  param_1[0x5f] = dVar31 * dVar9 + dVar5 * dVar15 + dVar13 * dVar18;
  param_1[0x12] = dVar22 * dVar37 + dVar6 * dVar19 + dVar16 * dVar10;
  param_1[0x13] = dVar21 * dVar37 + dVar6 * dVar12 + dVar16 * dVar14;
  param_1[0x14] = dVar20 * dVar37 + dVar6 * dVar11 + dVar16 * dVar1;
  param_1[0x15] = dVar22 * dVar32 + dVar30 * dVar19 + dVar17 * dVar10;
  param_1[0x16] = dVar21 * dVar32 + dVar30 * dVar12 + dVar17 * dVar14;
  param_1[0x17] = dVar20 * dVar32 + dVar30 * dVar11 + dVar17 * dVar1;
  param_1[0x18] = dVar22 * dVar29 + dVar35 * dVar19 + dVar8 * dVar10;
  param_1[0x19] = dVar21 * dVar29 + dVar35 * dVar12 + dVar8 * dVar14;
  param_1[0x1a] = dVar20 * dVar29 + dVar35 * dVar11 + dVar8 * dVar1;
  FUN_10966ed24(&dStack_f0,param_1 + 0x5d);
  param_1[0xc] = dStack_d8;
  param_1[0xb] = dStack_e0;
  param_1[0xe] = dStack_c8;
  param_1[0xd] = dStack_d0;
  param_1[0x10] = dStack_b8;
  param_1[0xf] = dStack_c0;
  param_1[0x11] = dStack_b0;
  param_1[10] = dStack_e8;
  param_1[9] = dStack_f0;
  dVar1 = *param_1;
  dVar6 = param_1[1];
  dVar8 = param_1[2];
  dVar16 = param_1[3];
  dVar10 = param_1[4];
  dVar17 = param_1[5];
  dVar5 = param_1[6];
  dVar14 = param_1[7];
  dVar7 = param_1[8];
  dVar9 = param_1[9];
  dVar11 = param_1[10];
  dVar12 = param_1[0xb];
  dVar13 = param_1[0xc];
  dVar15 = param_1[0xd];
  dVar18 = param_1[0xe];
  dVar31 = param_1[0xf];
  dVar33 = param_1[0x10];
  dVar29 = param_1[0x11];
  *param_1 = dVar16 * dVar11 + dVar9 * dVar1 + dVar12 * dVar5;
  param_1[1] = dVar10 * dVar11 + dVar9 * dVar6 + dVar12 * dVar14;
  param_1[2] = dVar17 * dVar11 + dVar9 * dVar8 + dVar12 * dVar7;
  param_1[3] = dVar16 * dVar15 + dVar13 * dVar1 + dVar18 * dVar5;
  param_1[4] = dVar10 * dVar15 + dVar13 * dVar6 + dVar18 * dVar14;
  param_1[5] = dVar17 * dVar15 + dVar13 * dVar8 + dVar18 * dVar7;
  param_1[6] = dVar16 * dVar33 + dVar31 * dVar1 + dVar29 * dVar5;
  param_1[7] = dVar10 * dVar33 + dVar31 * dVar6 + dVar29 * dVar14;
  param_1[8] = dVar17 * dVar33 + dVar31 * dVar8 + dVar29 * dVar7;
  dVar16 = param_1[9];
  dVar10 = param_1[10];
  dVar6 = param_1[0xf];
  dVar8 = param_1[0x10];
  dVar5 = param_1[0xb];
  dVar17 = param_1[0xc];
  dVar14 = param_1[0xd];
  dVar7 = param_1[0xe];
  dVar1 = param_1[0x11];
  dVar9 = param_1[0x12];
  dVar11 = param_1[0x13];
  dVar12 = param_1[0x14];
  dVar13 = param_1[0x15];
  dVar15 = param_1[0x16];
  dVar18 = param_1[0x17];
  dVar31 = param_1[0x18];
  dVar33 = param_1[0x19];
  dVar29 = param_1[0x1a];
  dVar35 = dVar10 * dVar11 + dVar9 * dVar16 + dVar12 * dVar5;
  dVar37 = dVar14 * dVar11 + dVar9 * dVar17 + dVar12 * dVar7;
  dVar9 = dVar8 * dVar11 + dVar9 * dVar6 + dVar12 * dVar1;
  dVar11 = dVar10 * dVar15 + dVar13 * dVar16 + dVar18 * dVar5;
  dVar12 = dVar14 * dVar15 + dVar13 * dVar17 + dVar18 * dVar7;
  dVar13 = dVar8 * dVar15 + dVar13 * dVar6 + dVar18 * dVar1;
  dVar15 = dVar10 * dVar33 + dVar31 * dVar16 + dVar29 * dVar5;
  dVar18 = dVar14 * dVar33 + dVar31 * dVar17 + dVar29 * dVar7;
  dVar31 = dVar8 * dVar33 + dVar31 * dVar6 + dVar29 * dVar1;
  param_1[0x12] = dVar10 * dVar11 + dVar16 * dVar35 + dVar5 * dVar15;
  param_1[0x13] = dVar10 * dVar12 + dVar16 * dVar37 + dVar5 * dVar18;
  param_1[0x14] = dVar10 * dVar13 + dVar16 * dVar9 + dVar5 * dVar31;
  param_1[0x15] = dVar14 * dVar11 + dVar17 * dVar35 + dVar7 * dVar15;
  param_1[0x16] = dVar14 * dVar12 + dVar17 * dVar37 + dVar7 * dVar18;
  param_1[0x17] = dVar14 * dVar13 + dVar17 * dVar9 + dVar7 * dVar31;
  param_1[0x18] = dVar8 * dVar11 + dVar6 * dVar35 + dVar1 * dVar15;
  param_1[0x19] = dVar8 * dVar12 + dVar6 * dVar37 + dVar1 * dVar18;
  param_1[0x1a] = dVar8 * dVar13 + dVar6 * dVar9 + dVar1 * dVar31;
  param_1[9] = 1.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 1.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 0.0;
  param_1[0x10] = 0.0;
  param_1[0x11] = 1.0;
  return;
}



/* Entry: 10966e080; end: 10966e103;  */

void FUN_10966e080(long param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_58 [72];
  
  dVar1 = *(double *)(param_1 + 0x300);
  dVar3 = *(double *)(param_1 + 0x308);
  dVar2 = *(double *)(param_1 + 0x310);
  dVar6 = param_2[3];
  dVar5 = param_2[4];
  dVar8 = param_2[5];
  dVar7 = param_2[6];
  dVar9 = param_2[7];
  dVar4 = param_2[8];
  *(double *)(param_1 + 0x2b8) = param_2[1] * dVar3 + dVar1 * *param_2 + dVar2 * param_2[2];
  *(double *)(param_1 + 0x2c0) = dVar3 * dVar5 + dVar1 * dVar6 + dVar2 * dVar8;
  *(double *)(param_1 + 0x2c8) = dVar3 * dVar9 + dVar1 * dVar7 + dVar2 * dVar4;
  func_0x00010966e9f0(auStack_58,param_1 + 0x2b8,param_1 + 0x2a0);
  FUN_10966edf4(auStack_58);
  return;
}



/* Entry: 10966e104; end: 10966e977;  */

void FUN_10966e104(double *param_1,undefined1 (*param_2) [16])

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  double *pdVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined8 auStack_a8 [3];
  
  if (*(char *)((long)param_1 + 0x371) == '\x01') {
    pdVar4 = param_1 + 0x3f;
    auVar6 = *param_2;
    dVar15 = *(double *)param_2[1];
    dVar7 = auVar6._8_8_;
    dVar5 = auVar6._0_8_;
    dVar8 = 1.0 / SQRT(dVar5 * dVar5 + dVar7 * dVar7 + dVar15 * dVar15);
    auVar6 = NEON_ext(*(undefined1 (*) [16])(*param_2 + 8),auVar6,8,1);
    dVar35 = *(double *)*(undefined1 (*) [16])(param_1 + 6);
    dVar39 = *(double *)*(undefined1 (*) [16])(param_1 + 7);
    auVar16 = NEON_ext(*(undefined1 (*) [16])(param_1 + 7),*(undefined1 (*) [16])(param_1 + 6),8,1);
    dVar9 = *(double *)*(undefined1 (*) [16])(*param_2 + 8) * dVar8 * -dVar35 +
            dVar39 * dVar5 * dVar8;
    dVar12 = dVar15 * dVar8 * -param_1[7] + param_1[8] * dVar7 * dVar8;
    dVar14 = dVar5 * dVar8 * -auVar16._0_8_ + dVar35 * auVar6._0_8_ * dVar8;
    dVar5 = 1.0 / SQRT(dVar9 * dVar9 + dVar14 * dVar14 + dVar12 * dVar12);
    dVar15 = auVar16._0_8_ * -(dVar14 * dVar5) + dVar9 * dVar5 * dVar39;
    dVar8 = auVar16._8_8_ *
            -((dVar7 * dVar8 * -auVar16._8_8_ + param_1[7] * auVar6._8_8_ * dVar8) * dVar5) +
            dVar12 * dVar5 * param_1[8];
    dVar5 = -dVar5 * dVar12 * dVar39 + dVar14 * dVar5 * dVar35;
    dVar7 = 1.0 / SQRT(dVar5 * dVar5 + dVar15 * dVar15 + dVar8 * dVar8);
    dVar15 = dVar15 * dVar7;
    param_1[0x55] = dVar8 * dVar7;
    param_1[0x54] = dVar15;
    param_1[0x56] = dVar5 * dVar7;
    cVar1 = *(char *)((long)param_1 + 0x372);
    dVar5 = (double)FUN_10966e978(param_1,param_1);
    param_1[0x51] = dVar5;
    param_1[0x52] = dVar7;
    param_1[0x53] = dVar15;
    if (cVar1 == '\x01') {
      lVar3 = 0;
      auStack_a8[0] = 0;
      auStack_a8[1] = 0;
      auStack_a8[2] = 0;
      do {
        puVar2 = auStack_a8 + 2;
        if (((int)lVar3 != 2) && (puVar2 = auStack_a8 + 1, (int)lVar3 != 1)) {
          puVar2 = auStack_a8;
        }
        *puVar2 = 0x3e7ad7f29abcaf48;
        FUN_10966ed24(&dStack_138,auStack_a8);
        dVar5 = *param_1;
        dVar7 = param_1[1];
        dVar35 = param_1[2];
        dVar15 = param_1[3];
        dVar8 = param_1[4];
        dVar39 = param_1[5];
        dVar9 = param_1[6];
        dVar12 = param_1[7];
        dVar14 = param_1[8];
        dStack_f0 = dStack_120 * dVar7 + dVar5 * dStack_138 + dVar35 * dStack_108;
        dStack_e8 = dStack_118 * dVar7 + dVar5 * dStack_130 + dVar35 * dStack_100;
        dStack_e0 = dStack_110 * dVar7 + dVar5 * dStack_128 + dVar35 * dStack_f8;
        dStack_d8 = dStack_120 * dVar8 + dVar15 * dStack_138 + dVar39 * dStack_108;
        dStack_d0 = dStack_118 * dVar8 + dVar15 * dStack_130 + dVar39 * dStack_100;
        dStack_c8 = dStack_110 * dVar8 + dVar15 * dStack_128 + dVar39 * dStack_f8;
        dStack_c0 = dStack_120 * dVar12 + dVar9 * dStack_138 + dVar14 * dStack_108;
        dVar35 = dStack_118 * dVar12 + dVar9 * dStack_130 + dVar14 * dStack_100;
        dStack_b0 = dStack_110 * dVar12 + dVar9 * dStack_128 + dVar14 * dStack_f8;
        dVar5 = dStack_128;
        dStack_b8 = dVar35;
        dVar7 = (double)FUN_10966e978(param_1,&dStack_f0);
        dVar15 = param_1[0x53];
        dVar8 = param_1[0x51];
        pdVar4[1] = (param_1[0x52] - dVar35) * 10000000.0;
        *pdVar4 = (dVar8 - dVar7) * 10000000.0;
        pdVar4[2] = (dVar15 - dVar5) * 10000000.0;
        lVar3 = lVar3 + 1;
        pdVar4 = pdVar4 + 3;
      } while (lVar3 != 3);
      dVar37 = param_1[0x3f];
      dVar40 = param_1[0x40];
      dVar38 = param_1[0x41];
      dVar33 = param_1[0x42];
      dVar36 = param_1[0x43];
      dVar34 = param_1[0x44];
      dVar12 = param_1[0x45];
      dVar41 = param_1[0x46];
      dVar48 = param_1[0x47];
      dVar10 = param_1[0x14];
      dVar46 = param_1[0x17];
      dVar43 = param_1[0x1a];
      dVar32 = param_1[0x13];
      dVar31 = param_1[0x12];
      dVar5 = param_1[0x15];
      dVar7 = param_1[0x16];
      dVar44 = param_1[0x19];
      dVar42 = param_1[0x18];
      dVar53 = dVar33 * dVar32 + dVar31 * dVar37 + dVar10 * dVar12;
      dVar55 = dVar36 * dVar32 + dVar31 * dVar40 + dVar10 * dVar41;
      dVar49 = dVar34 * dVar32 + dVar31 * dVar38 + dVar10 * dVar48;
      dVar35 = dVar33 * dVar7 + dVar5 * dVar37 + dVar46 * dVar12;
      dVar15 = dVar36 * dVar7 + dVar5 * dVar40 + dVar46 * dVar41;
      dVar8 = dVar34 * dVar7 + dVar5 * dVar38 + dVar46 * dVar48;
      dVar39 = dVar33 * dVar44 + dVar42 * dVar37 + dVar43 * dVar12;
      dVar9 = dVar36 * dVar44 + dVar42 * dVar40 + dVar43 * dVar41;
      dVar14 = dVar34 * dVar44 + dVar42 * dVar38 + dVar43 * dVar48;
      dVar13 = param_1[0x24] + dVar33 * dVar35 + dVar37 * dVar53 + dVar12 * dVar39;
      dVar45 = param_1[0x25] + dVar33 * dVar15 + dVar37 * dVar55 + dVar12 * dVar9;
      dVar24 = dVar33 * dVar46 + dVar37 * dVar10 + dVar12 * dVar43;
      dVar18 = dVar33 * dVar8 + dVar37 * dVar49 + dVar12 * dVar14 + param_1[0x26];
      dVar25 = dVar36 * dVar46 + dVar40 * dVar10 + dVar41 * dVar43;
      dVar47 = dVar36 * dVar35 + dVar40 * dVar53 + dVar41 * dVar39 + param_1[0x27];
      dVar17 = dVar36 * dVar15 + dVar40 * dVar55 + dVar41 * dVar9 + param_1[0x28];
      dVar54 = dVar36 * dVar8 + dVar40 * dVar49 + dVar41 * dVar14 + param_1[0x29];
      dVar56 = dVar34 * dVar35 + dVar38 * dVar53 + dVar48 * dVar39 + param_1[0x2a];
      dVar11 = dVar34 * dVar15 + dVar38 * dVar55 + dVar48 * dVar9 + param_1[0x2b];
      dVar50 = dVar34 * dVar8 + dVar38 * dVar49 + dVar48 * dVar14 + param_1[0x2c];
      dVar26 = dVar5 * dVar33 + dVar31 * dVar37 + dVar42 * dVar12;
      dVar28 = dVar7 * dVar33 + dVar32 * dVar37 + dVar44 * dVar12;
      dVar55 = dVar5 * dVar36 + dVar31 * dVar40 + dVar42 * dVar41;
      dVar23 = dVar7 * dVar36 + dVar32 * dVar40 + dVar44 * dVar41;
      dVar9 = -(dVar11 * dVar54) + dVar50 * dVar17;
      dVar35 = -(dVar11 * dVar18) + dVar50 * dVar45;
      dVar39 = -(dVar17 * dVar18) + dVar54 * dVar45;
      dVar29 = 1.0 / (-(dVar47 * dVar35) + dVar9 * dVar13 + dVar39 * dVar56);
      dVar9 = dVar9 * dVar29;
      dVar14 = -(dVar35 * dVar29);
      dVar49 = -((-(dVar56 * dVar54) + dVar50 * dVar47) * dVar29);
      dVar35 = (-(dVar56 * dVar18) + dVar50 * dVar13) * dVar29;
      dVar53 = (-(dVar56 * dVar17) + dVar11 * dVar47) * dVar29;
      dVar51 = -((-(dVar56 * dVar45) + dVar11 * dVar13) * dVar29);
      dVar39 = dVar39 * dVar29;
      dVar52 = -((-(dVar47 * dVar18) + dVar54 * dVar13) * dVar29);
      dVar29 = (-(dVar47 * dVar45) + dVar17 * dVar13) * dVar29;
      dVar30 = dVar34 * dVar46 + dVar38 * dVar10 + dVar48 * dVar43;
      dVar15 = dVar5 * dVar34 + dVar31 * dVar38 + dVar42 * dVar48;
      dVar8 = dVar7 * dVar34 + dVar32 * dVar38 + dVar44 * dVar48;
      dVar19 = dVar55 * dVar14 + dVar26 * dVar9 + dVar15 * dVar39;
      dVar20 = dVar23 * dVar14 + dVar28 * dVar9 + dVar8 * dVar39;
      dVar27 = dVar25 * dVar14 + dVar9 * dVar24 + dVar39 * dVar30;
      dVar21 = dVar55 * dVar35 + dVar26 * dVar49 + dVar15 * dVar52;
      dVar22 = dVar23 * dVar35 + dVar28 * dVar49 + dVar8 * dVar52;
      dVar52 = dVar25 * dVar35 + dVar49 * dVar24 + dVar52 * dVar30;
      dVar26 = dVar55 * dVar51 + dVar26 * dVar53 + dVar15 * dVar29;
      dVar23 = dVar23 * dVar51 + dVar28 * dVar53 + dVar8 * dVar29;
      dVar24 = dVar25 * dVar51 + dVar53 * dVar24 + dVar29 * dVar30;
      dVar35 = 1.0 - (dVar21 * dVar40 + dVar19 * dVar37 + dVar26 * dVar38);
      dVar39 = 0.0 - (dVar22 * dVar40 + dVar20 * dVar37 + dVar23 * dVar38);
      dVar14 = 0.0 - (dVar40 * dVar52 + dVar37 * dVar27 + dVar38 * dVar24);
      dVar49 = 0.0 - (dVar21 * dVar36 + dVar19 * dVar33 + dVar26 * dVar34);
      dVar53 = 1.0 - (dVar22 * dVar36 + dVar20 * dVar33 + dVar23 * dVar34);
      dVar55 = 0.0 - (dVar36 * dVar52 + dVar33 * dVar27 + dVar34 * dVar24);
      dVar15 = 0.0 - (dVar21 * dVar41 + dVar19 * dVar12 + dVar26 * dVar48);
      dVar9 = 0.0 - (dVar22 * dVar41 + dVar20 * dVar12 + dVar23 * dVar48);
      dVar12 = 1.0 - (dVar41 * dVar52 + dVar12 * dVar27 + dVar48 * dVar24);
      param_1[0x36] = dVar13;
      param_1[0x37] = dVar45;
      param_1[0x38] = dVar18;
      param_1[0x39] = dVar47;
      param_1[0x3a] = dVar17;
      param_1[0x3b] = dVar54;
      dVar8 = param_1[0x51];
      param_1[0x3c] = dVar56;
      param_1[0x3d] = dVar11;
      dVar11 = param_1[0x52];
      param_1[0x3e] = dVar50;
      param_1[0x49] = dVar20;
      param_1[0x48] = dVar19;
      param_1[0x4a] = dVar27;
      param_1[0x4c] = dVar22;
      param_1[0x4b] = dVar21;
      param_1[0x4d] = dVar52;
      dVar13 = param_1[0x53];
      param_1[0x4f] = dVar23;
      param_1[0x4e] = dVar26;
      param_1[0x50] = dVar24;
      param_1[0x5e] = dVar22 * dVar11 + dVar20 * dVar8 + dVar23 * dVar13;
      param_1[0x5d] = dVar21 * dVar11 + dVar19 * dVar8 + dVar26 * dVar13;
      param_1[0x5f] = dVar52 * dVar11 + dVar8 * dVar27 + dVar13 * dVar24;
      param_1[0x13] = dVar53 * dVar32 + dVar39 * dVar31 + dVar9 * dVar10;
      param_1[0x12] = dVar49 * dVar32 + dVar35 * dVar31 + dVar15 * dVar10;
      param_1[0x14] = dVar55 * dVar32 + dVar31 * dVar14 + dVar10 * dVar12;
      param_1[0x16] = dVar53 * dVar7 + dVar39 * dVar5 + dVar9 * dVar46;
      param_1[0x15] = dVar49 * dVar7 + dVar35 * dVar5 + dVar15 * dVar46;
      param_1[0x17] = dVar55 * dVar7 + dVar5 * dVar14 + dVar46 * dVar12;
      param_1[0x19] = dVar53 * dVar44 + dVar39 * dVar42 + dVar9 * dVar43;
      param_1[0x18] = dVar49 * dVar44 + dVar35 * dVar42 + dVar15 * dVar43;
      param_1[0x1a] = dVar55 * dVar44 + dVar42 * dVar14 + dVar43 * dVar12;
      FUN_10966ed24(&dStack_f0,param_1 + 0x5d);
      param_1[0xc] = dStack_d8;
      param_1[0xb] = dStack_e0;
      param_1[0xe] = dStack_c8;
      param_1[0xd] = dStack_d0;
      param_1[0x10] = dStack_b8;
      param_1[0xf] = dStack_c0;
      param_1[0x11] = dStack_b0;
      param_1[10] = dStack_e8;
      param_1[9] = dStack_f0;
      dVar5 = param_1[10];
      dVar7 = param_1[0xb];
      dVar35 = param_1[0xc];
      dVar15 = param_1[0xd];
      dVar8 = param_1[0xe];
      dVar39 = param_1[0xf];
      dVar9 = param_1[0x10];
      dVar12 = param_1[0x11];
      dVar14 = *param_1;
      dVar49 = param_1[1];
      dVar53 = param_1[2];
      dVar55 = param_1[3];
      dVar10 = param_1[4];
      dVar11 = param_1[5];
      dVar13 = param_1[6];
      dVar42 = param_1[7];
      dVar17 = param_1[8];
      dVar44 = param_1[9];
      *param_1 = dVar35 * dVar49 + dVar14 * dVar44 + dVar53 * dVar39;
      param_1[1] = dVar15 * dVar49 + dVar14 * dVar5 + dVar53 * dVar9;
      param_1[2] = dVar8 * dVar49 + dVar14 * dVar7 + dVar53 * dVar12;
      param_1[3] = dVar35 * dVar10 + dVar55 * dVar44 + dVar11 * dVar39;
      param_1[4] = dVar15 * dVar10 + dVar55 * dVar5 + dVar11 * dVar9;
      param_1[5] = dVar8 * dVar10 + dVar55 * dVar7 + dVar11 * dVar12;
      param_1[6] = dVar35 * dVar42 + dVar13 * dVar44 + dVar17 * dVar39;
      param_1[7] = dVar15 * dVar42 + dVar13 * dVar5 + dVar17 * dVar9;
      param_1[8] = dVar8 * dVar42 + dVar13 * dVar7 + dVar17 * dVar12;
      FUN_10966d750(param_1);
    }
    else {
      FUN_10966ed24(&dStack_f0,param_1 + 0x51);
      param_1[0xc] = dStack_d8;
      param_1[0xb] = dStack_e0;
      param_1[0xe] = dStack_c8;
      param_1[0xd] = dStack_d0;
      param_1[0x10] = dStack_b8;
      param_1[0xf] = dStack_c0;
      param_1[0x11] = dStack_b0;
      param_1[10] = dStack_e8;
      param_1[9] = dStack_f0;
      dVar5 = param_1[10];
      dVar7 = param_1[0xb];
      dVar35 = param_1[0xc];
      dVar15 = param_1[0xd];
      dVar8 = param_1[0xe];
      dVar39 = param_1[0xf];
      dVar9 = param_1[0x10];
      dVar12 = param_1[0x11];
      dVar14 = *param_1;
      dVar49 = param_1[1];
      dVar53 = param_1[2];
      dVar55 = param_1[3];
      dVar10 = param_1[4];
      dVar11 = param_1[5];
      dVar13 = param_1[6];
      dVar42 = param_1[7];
      dVar17 = param_1[8];
      dVar44 = param_1[9];
      *param_1 = dVar35 * dVar49 + dVar14 * dVar44 + dVar53 * dVar39;
      param_1[1] = dVar15 * dVar49 + dVar14 * dVar5 + dVar53 * dVar9;
      param_1[2] = dVar8 * dVar49 + dVar14 * dVar7 + dVar53 * dVar12;
      param_1[3] = dVar35 * dVar10 + dVar55 * dVar44 + dVar11 * dVar39;
      param_1[4] = dVar15 * dVar10 + dVar55 * dVar5 + dVar11 * dVar9;
      param_1[5] = dVar8 * dVar10 + dVar55 * dVar7 + dVar11 * dVar12;
      param_1[6] = dVar35 * dVar42 + dVar13 * dVar44 + dVar17 * dVar39;
      param_1[7] = dVar15 * dVar42 + dVar13 * dVar5 + dVar17 * dVar9;
      param_1[8] = dVar8 * dVar42 + dVar13 * dVar7 + dVar17 * dVar12;
      FUN_10966d750(param_1);
      *(undefined1 *)((long)param_1 + 0x372) = 1;
    }
  }
  return;
}



/* Entry: 10966e978; end: 10966ec9f;  */

void FUN_10966e978(long param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_58 [72];
  
  dVar1 = *(double *)(param_1 + 0x318);
  dVar3 = *(double *)(param_1 + 800);
  dVar4 = *(double *)(param_1 + 0x328);
  dVar5 = param_2[2];
  dVar6 = param_2[5];
  dVar7 = param_2[8];
  dVar8 = *param_2;
  dVar9 = param_2[3];
  dVar2 = param_2[6];
  *(double *)(param_1 + 0x2c0) = param_2[4] * dVar3 + param_2[1] * dVar1 + param_2[7] * dVar4;
  *(double *)(param_1 + 0x2b8) = dVar9 * dVar3 + dVar8 * dVar1 + dVar2 * dVar4;
  *(double *)(param_1 + 0x2c8) = dVar3 * dVar6 + dVar1 * dVar5 + dVar4 * dVar7;
  func_0x00010966e9f0(auStack_58,(double *)(param_1 + 0x2b8),param_1 + 0x2a0);
  FUN_10966edf4(auStack_58);
  return;
}



/* Entry: 10966eca0; end: 10966ed23;  */

void FUN_10966eca0(double *param_1,double param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = *param_4;
  dVar2 = param_4[1];
  dVar4 = param_4[2];
  param_1[8] = 1.0 - (dVar1 * dVar1 + dVar2 * dVar2) * param_3;
  dVar3 = param_3 * dVar1 * dVar2;
  *param_1 = 1.0 - (dVar2 * dVar2 + dVar4 * dVar4) * param_3;
  param_1[1] = dVar3 - param_2 * dVar4;
  dVar5 = param_3 * dVar1 * dVar4;
  param_1[2] = param_2 * dVar2 + dVar5;
  param_1[3] = dVar3 + param_2 * dVar4;
  dVar3 = param_3 * dVar2 * dVar4;
  param_1[4] = 1.0 - (dVar1 * dVar1 + dVar4 * dVar4) * param_3;
  param_1[5] = dVar3 - param_2 * dVar1;
  param_1[6] = dVar5 - param_2 * dVar2;
  param_1[7] = param_2 * dVar1 + dVar3;
  return;
}



/* Entry: 10966ed24; end: 10966edf3;  */

void FUN_10966ed24(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = *param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2];
  if (1e-08 <= dVar1) {
    dVar2 = 1e-06;
    if (1e-06 <= dVar1) {
      dVar1 = SQRT(dVar1);
      dVar5 = 1.0 / dVar1;
      ___sincos_stret();
      dVar1 = dVar1 * dVar5;
      dVar2 = (1.0 - dVar2) * dVar5 * dVar5;
    }
    else {
      dVar2 = dVar1 * -0.0416666679084301 + 0.5;
      dVar1 = (dVar1 * -0.16666667163372 + 1.0) * dVar1 * -0.16666667163372 + 1.0;
    }
  }
  else {
    dVar1 = dVar1 * -0.16666667163372 + 1.0;
    dVar2 = 0.5;
  }
  dVar3 = *param_2;
  dVar4 = param_2[1];
  dVar6 = param_2[2];
  param_1[8] = 1.0 - (dVar3 * dVar3 + dVar4 * dVar4) * dVar2;
  dVar5 = dVar2 * dVar3 * dVar4;
  *param_1 = 1.0 - (dVar4 * dVar4 + dVar6 * dVar6) * dVar2;
  param_1[1] = dVar5 - dVar1 * dVar6;
  dVar7 = dVar2 * dVar3 * dVar6;
  param_1[2] = dVar1 * dVar4 + dVar7;
  param_1[3] = dVar5 + dVar1 * dVar6;
  dVar5 = dVar2 * dVar4 * dVar6;
  param_1[4] = 1.0 - (dVar3 * dVar3 + dVar6 * dVar6) * dVar2;
  param_1[5] = dVar5 - dVar1 * dVar3;
  param_1[6] = dVar7 - dVar1 * dVar4;
  param_1[7] = dVar1 * dVar3 + dVar5;
  return;
}



/* Entry: 10966edf4; end: 10966eff7;  */

double FUN_10966edf4(double *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  dVar7 = param_1[4];
  dVar5 = param_1[5];
  dVar17 = *param_1;
  dVar6 = param_1[1];
  dVar16 = param_1[7];
  dVar15 = param_1[8];
  dVar13 = (dVar17 + dVar7 + dVar15 + -1.0) * 0.5;
  dVar8 = param_1[6];
  dVar10 = (dVar16 - dVar5) * 0.5;
  dVar9 = param_1[2];
  dVar18 = param_1[3];
  dVar11 = (dVar9 - dVar8) * 0.5;
  dVar12 = (dVar18 - dVar6) * 0.5;
  dVar4 = dVar10 * dVar10 + dVar11 * dVar11 + dVar12 * dVar12;
  dVar14 = SQRT(dVar4);
  if (dVar13 <= 0.7071067811865476) {
    if (dVar13 <= -0.7071067811865476) {
      _asin(dVar14);
      dVar17 = dVar17 - dVar13;
      dVar7 = dVar7 - dVar13;
      dVar15 = dVar15 - dVar13;
      dVar13 = dVar17 * dVar17;
      dVar4 = dVar15 * dVar15;
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (dVar7 * dVar7 < dVar13) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar13) && !NAN(dVar4)) {
          bVar1 = dVar13 < dVar4;
          bVar2 = dVar13 == dVar4;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        dVar13 = (dVar16 + dVar5) * 0.5;
        if (dVar7 * dVar7 <= dVar4) {
          dVar17 = (dVar9 + dVar8) * 0.5;
          dVar7 = dVar13;
        }
        else {
          dVar17 = (dVar18 + dVar6) * 0.5;
          dVar15 = dVar13;
        }
      }
      else {
        dVar7 = (dVar18 + dVar6) * 0.5;
        dVar15 = (dVar9 + dVar8) * 0.5;
      }
      dVar5 = -dVar17;
      dVar13 = -dVar7;
      dVar4 = -dVar15;
      if (0.0 <= dVar12 * dVar15 + dVar11 * dVar7 + dVar10 * dVar17) {
        dVar5 = dVar17;
        dVar13 = dVar7;
        dVar4 = dVar15;
      }
      return (3.141592653589793 - dVar14) *
             dVar5 * (1.0 / SQRT(dVar4 * dVar4 + dVar5 * dVar5 + dVar13 * dVar13));
    }
    _acos(dVar13);
  }
  else {
    if (dVar4 <= 0.0) {
      return dVar10;
    }
    dVar13 = dVar14;
    _asin(dVar14);
  }
  return dVar10 * (dVar13 / dVar14);
}



/* Entry: 10966eff8; end: 10966f173;  */

void FUN_10966eff8(long *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  float fVar15;
  undefined4 uStack_34;
  long lVar5;
  
  uVar14 = param_2[1] - *param_2;
  uStack_34 = 0;
  FUN_1092ef208(param_1,(long)(uVar14 * 0x40000000) >> 0x20,&uStack_34);
  iVar13 = (int)(uVar14 >> 2);
  if ((int)param_3 <= iVar13) {
    uVar9 = 0;
    uVar1 = param_3 - 1;
    uVar2 = iVar13 - 1;
    lVar10 = *param_2;
    lVar11 = *param_1;
    iVar4 = 1 - iVar13;
    iVar12 = -(uVar1 >> 1);
    lVar3 = 2;
    do {
      lVar5 = (long)iVar4;
      if (uVar9 < uVar1 >> 1) {
        iVar7 = (uint)uVar9 * 2 + 2;
        fVar15 = *(float *)(lVar11 + uVar9 * 4);
        if (0 < iVar7) {
          lVar5 = 0;
          do {
            fVar15 = fVar15 + *(float *)(lVar10 + lVar5 * 4);
            *(float *)(lVar11 + uVar9 * 4) = fVar15;
            lVar5 = lVar5 + 1;
          } while (lVar3 != lVar5);
        }
LAB_10966f144:
        fVar15 = fVar15 / (float)iVar7;
      }
      else if ((long)uVar9 < (long)(int)(iVar13 + (uVar1 >> 1 ^ 0xffffffff))) {
        fVar15 = *(float *)(lVar11 + uVar9 * 4);
        pfVar8 = (float *)(lVar10 + (long)iVar12 * 4);
        uVar6 = uVar1 | 1;
        do {
          fVar15 = fVar15 + *pfVar8;
          *(float *)(lVar11 + uVar9 * 4) = fVar15;
          uVar6 = uVar6 - 1;
          pfVar8 = pfVar8 + 1;
        } while (uVar6 != 0);
        fVar15 = fVar15 / (float)param_3;
      }
      else {
        if (uVar9 < uVar2) {
          iVar7 = ~(uint)uVar9 + iVar13;
          fVar15 = *(float *)(lVar11 + uVar9 * 4);
          if ((int)((iVar7 * 2 ^ 0xffffffffU) + iVar13) < (int)uVar2) {
            do {
              fVar15 = fVar15 + *(float *)(lVar10 + lVar5 * 4);
              *(float *)(lVar11 + uVar9 * 4) = fVar15;
              lVar5 = lVar5 + 1;
            } while (lVar5 < (long)(ulong)uVar2);
          }
          iVar7 = iVar7 * 2;
          goto LAB_10966f144;
        }
        fVar15 = *(float *)(lVar10 + uVar9 * 4);
      }
      *(float *)(lVar11 + uVar9 * 4) = fVar15;
      uVar9 = uVar9 + 1;
      iVar4 = iVar4 + 2;
      iVar12 = iVar12 + 1;
      lVar3 = lVar3 + 2;
    } while (uVar9 != (uVar14 >> 2 & 0x7fffffff));
  }
  return;
}



/* Entry: 10966f174; end: 10966f51b;  */

void FUN_10966f174(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  float fVar7;
  long lStack_278;
  long lStack_270;
  long lStack_260;
  long lStack_258;
  long lStack_248;
  long lStack_240;
  long lStack_230;
  long lStack_228;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_188;
  long lStack_180;
  long lStack_170;
  long lStack_168;
  long lStack_158;
  long lStack_150;
  float fStack_140;
  undefined4 uStack_13c;
  long lStack_128;
  long lStack_110;
  long lStack_f8;
  double dStack_e0;
  double dStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  
  lStack_218 = 0;
  lStack_210 = 0;
  uStack_208 = 0;
  pdVar4 = *(double **)(param_3 + 0x18);
  pdVar3 = *(double **)(param_3 + 0x20);
  if (pdVar4 == pdVar3) {
    lStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    lStack_90 = 0;
    uStack_b8 = 0;
    lStack_c0 = 0;
    lStack_a8 = 0;
    lStack_b0 = 0;
    dStack_d8 = 0.0;
    dStack_e0 = 0.0;
    lStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    pdVar5 = *(double **)(param_3 + 0x48);
    pdVar6 = pdVar4 + -3;
    do {
      if (pdVar5 != *(double **)(param_3 + 0x50)) {
        dStack_e0 = *pdVar5;
        if (dStack_e0 <= *pdVar4) {
          if ((pdVar4 == *(double **)(param_3 + 0x18)) || (*pdVar4 <= pdVar5[1])) {
            dStack_d8 = pdVar4[1];
            fVar7 = *(float *)(pdVar4 + 2);
          }
          else {
            dStack_d8 = (double)CONCAT44(((float)((ulong)pdVar4[1] >> 0x20) +
                                         (float)((ulong)pdVar6[1] >> 0x20)) * 0.5,
                                         (SUB84(pdVar4[1],0) + SUB84(pdVar6[1],0)) * 0.5);
            fVar7 = (*(float *)(pdVar4 + 2) + *(float *)(pdVar6 + 2)) * 0.5;
          }
          uStack_d0 = CONCAT44(uStack_d0._4_4_,fVar7);
          FUN_109225580(&lStack_218,&dStack_e0);
          pdVar5 = pdVar5 + 2;
          pdVar3 = *(double **)(param_3 + 0x20);
        }
      }
      lVar2 = lStack_210;
      pdVar4 = pdVar4 + 3;
      pdVar6 = pdVar6 + 3;
    } while (pdVar4 != pdVar3);
    lStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    lStack_90 = 0;
    uStack_b8 = 0;
    lStack_c0 = 0;
    lStack_a8 = 0;
    lStack_b0 = 0;
    dStack_d8 = 0.0;
    dStack_e0 = 0.0;
    lStack_c8 = 0;
    uStack_d0 = 0;
    for (lVar1 = lStack_218; lVar1 != lVar2; lVar1 = lVar1 + 0x18) {
      FUN_1092d2a8c(&dStack_e0,lVar1);
      fStack_140 = -*(float *)(lVar1 + 0xc);
      FUN_10939f5b4(&lStack_c8,&fStack_140);
      FUN_1092c9a40(&lStack_b0,lVar1 + 8);
      FUN_1092c9a40(&lStack_98,lVar1 + 0x10);
    }
  }
  FUN_1096700a8(&fStack_140,&dStack_e0,0);
  FUN_109670178(&lStack_1a0,&dStack_e0);
  FUN_109670178(&lStack_200,&fStack_140);
  FUN_109670364(&lStack_278,&lStack_1a0,&lStack_200,0);
  if (lStack_1b8 != 0) {
    lStack_1b0 = lStack_1b8;
    __ZdlPv();
  }
  if (lStack_1d0 != 0) {
    lStack_1c8 = lStack_1d0;
    __ZdlPv();
  }
  if (lStack_1e8 != 0) {
    lStack_1e0 = lStack_1e8;
    __ZdlPv();
  }
  if (lStack_200 != 0) {
    lStack_1f8 = lStack_200;
    __ZdlPv();
  }
  if (lStack_158 != 0) {
    lStack_150 = lStack_158;
    __ZdlPv();
  }
  if (lStack_170 != 0) {
    lStack_168 = lStack_170;
    __ZdlPv();
  }
  if (lStack_188 != 0) {
    lStack_180 = lStack_188;
    __ZdlPv();
  }
  if (lStack_1a0 != 0) {
    lStack_198 = lStack_1a0;
    __ZdlPv();
  }
  if (lStack_f8 != 0) {
    __ZdlPv();
  }
  if (lStack_110 != 0) {
    __ZdlPv();
  }
  if (lStack_128 != 0) {
    __ZdlPv();
  }
  if (CONCAT44(uStack_13c,fStack_140) != 0) {
    __ZdlPv();
  }
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  if (dStack_e0 != 0.0) {
    dStack_d8 = dStack_e0;
    __ZdlPv();
  }
  FUN_10966f51c(param_1,param_2,&lStack_278,param_4,param_5,param_6);
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  if (lStack_248 != 0) {
    lStack_240 = lStack_248;
    __ZdlPv();
  }
  if (lStack_260 != 0) {
    lStack_258 = lStack_260;
    __ZdlPv();
  }
  if (lStack_278 != 0) {
    lStack_270 = lStack_278;
    __ZdlPv();
  }
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    __ZdlPv();
  }
  return;
}



/* Entry: 10966f51c; end: 10966fb7f;  */

void FUN_10966f51c(ulong *param_1,float *param_2,long *param_3,int param_4,undefined4 param_5,
                  uint param_6)

{
  float *pfVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  
  lStack_c0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  lStack_d8 = 0;
  lStack_d0 = 0;
  uStack_c8 = 0;
  lVar11 = *param_3;
  lVar9 = param_3[1];
  puVar7 = (undefined8 *)(lVar9 - lVar11 >> 3);
  FUN_109670690(&lStack_c0,puVar7);
  puVar4 = puVar7;
  FUN_109670690(&lStack_d8);
  if (lVar9 == lVar11) {
    fStack_124 = 1.0;
    fVar12 = fStack_124;
  }
  else {
    puVar10 = (undefined8 *)0x0;
    uVar17 = 0x3f800000;
    uVar14 = NEON_scvtf(CONCAT44(param_5,param_4),4);
    fStack_124 = 1.0;
    do {
      fVar23 = (float)uVar17;
      fVar12 = *(float *)(param_3[9] + (long)puVar10 * 4) * 0.017453292;
      ___sincosf_stret();
      fVar24 = -fVar12;
      uStack_f4 = 0;
      uStack_e0 = 0x3f80000000000000;
      uStack_e8 = 0;
      uStack_118 = 0;
      uStack_120 = 0x3f800000;
      fVar13 = *(float *)(param_3[3] + (long)puVar10 * 4) / (float)uVar14;
      fVar15 = *(float *)(param_3[6] + (long)puVar10 * 4) / (float)((ulong)uVar14 >> 0x20);
      fVar16 = fVar13 * 0.0;
      fVar18 = fVar15 * 0.0;
      uVar19 = NEON_rev64(CONCAT44(fVar18,fVar16),4);
      fVar16 = fVar16 + fVar18;
      uVar17 = (ulong)(uint)fVar16;
      fVar13 = fVar13 + (float)uVar19 + 0.0;
      fVar15 = fVar15 + (float)((ulong)uVar19 >> 0x20) + 0.0;
      uStack_108 = CONCAT44(fVar15,fVar13);
      fVar16 = fVar16 + 1.0;
      uStack_110 = 0x3f800000;
      fStack_100 = fVar16;
      fStack_fc = fVar23;
      fStack_f8 = fVar12;
      fStack_f0 = fVar24;
      fStack_ec = fVar23;
      func_0x00010967074c(&lStack_c0,&fStack_fc);
      puVar4 = &uStack_120;
      func_0x00010967074c(&lStack_d8);
      if (param_6 != 0) {
        fVar16 = fVar16 + (fVar23 * 0.0 + fVar24 * 0.0 + fVar16 * 0.0) * 0.5 +
                          (fVar12 * 0.0 + fVar23 * 0.0 + fVar16 * 0.0) * 0.5;
        fVar13 = 0.5 - (fVar13 + ((fVar23 * 0.0 - fVar12) + fVar13 * 0.0) * 0.5 +
                                 (fVar23 + fVar12 * 0.0 + fVar13 * 0.0) * 0.5) / fVar16;
        fVar12 = 0.5 - (fVar15 + (fVar23 + fVar24 * 0.0 + fVar15 * 0.0) * 0.5 +
                                 (fVar12 + fVar23 * 0.0 + fVar15 * 0.0) * 0.5) / fVar16;
        uVar17 = CONCAT44(fVar12,fVar13) ^
                 (CONCAT44(fVar12,fVar13) ^ CONCAT44(-fVar12,-fVar13)) &
                 ~CONCAT44(-(uint)(0.0 <= fVar12),-(uint)(0.0 <= fVar13));
        fVar12 = (float)(uVar17 >> 0x20);
        fVar13 = (float)uVar17;
        if (fVar12 <= fVar13) {
          fVar12 = fVar13;
        }
        fVar13 = 1.0 - fVar12;
        if (fStack_124 <= 1.0 - fVar12) {
          fVar13 = fStack_124;
        }
        uVar17 = (ulong)(uint)fVar13;
        fStack_124 = fVar13;
      }
      puVar10 = (undefined8 *)((long)puVar10 + 1);
      fVar12 = fStack_124;
    } while (puVar7 != puVar10);
  }
  fStack_124 = fVar12;
  if ((param_6 & 1) != 0) {
    fVar13 = param_2[1];
    fVar16 = *param_2 * 0.017453292 * 0.5;
    _tanf();
    fVar16 = ((fVar13 + fVar13) * fVar16) / (float)param_4;
    fVar13 = 1.0;
    if (fVar16 <= 1.0) {
      fVar13 = fVar16;
    }
    fStack_124 = 0.0;
    if (0.0 <= fVar16) {
      fStack_124 = fVar13;
    }
    if (fStack_124 <= fVar12) {
      fStack_124 = fVar12;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (lVar9 != lVar11) {
    if ((undefined8 *)0x555555555555555 < puVar7) {
      FUN_1096708b4();
LAB_10966fb2c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10966fb30);
      (*pcVar2)();
    }
    puVar3 = puVar7;
    FUN_1096708c8();
    puVar10 = (undefined8 *)0x0;
    fVar12 = fStack_124 * 0.0;
    *param_1 = (ulong)puVar3;
    param_1[1] = (ulong)puVar3;
    param_1[2] = (ulong)(puVar3 + (long)puVar4 * 6);
    lVar11 = 0x20;
    do {
      pfVar1 = (float *)(lStack_d8 + lVar11);
      fVar13 = pfVar1[-8];
      fVar15 = pfVar1[-7];
      fVar18 = pfVar1[-6];
      fVar20 = pfVar1[-5];
      fVar21 = pfVar1[-4];
      fVar22 = pfVar1[-3];
      fVar16 = pfVar1[-2];
      fVar23 = pfVar1[-1];
      fVar24 = *pfVar1;
      fVar25 = fVar13 + fVar20 * 0.0 + fVar16 * 0.0;
      fVar26 = fVar15 + fVar21 * 0.0 + fVar23 * 0.0;
      fVar27 = fVar18 + fVar22 * 0.0 + fVar24 * 0.0;
      fVar28 = fVar20 + fVar13 * 0.0 + fVar16 * 0.0;
      fVar29 = fVar21 + fVar15 * 0.0 + fVar23 * 0.0;
      fVar30 = fVar22 + fVar18 * 0.0 + fVar24 * 0.0;
      fVar16 = fVar20 * 0.5 + fVar13 * 0.5 + fVar16;
      fVar23 = fVar21 * 0.5 + fVar15 * 0.5 + fVar23;
      fVar24 = fVar22 * 0.5 + fVar18 * 0.5 + fVar24;
      fVar13 = fVar12 * fVar28 + fStack_124 * fVar25 + fVar12 * fVar16;
      fVar15 = fVar12 * fVar29 + fStack_124 * fVar26 + fVar12 * fVar23;
      fVar18 = fVar12 * fVar30 + fStack_124 * fVar27 + fVar12 * fVar24;
      fVar20 = fStack_124 * fVar28 + fVar12 * fVar25 + fVar12 * fVar16;
      fVar21 = fStack_124 * fVar29 + fVar12 * fVar26 + fVar12 * fVar23;
      fVar22 = fStack_124 * fVar30 + fVar12 * fVar27 + fVar12 * fVar24;
      fVar16 = fVar16 + fVar28 * 0.0 + fVar25 * 0.0;
      fVar23 = fVar23 + fVar29 * 0.0 + fVar26 * 0.0;
      fVar24 = fVar24 + fVar30 * 0.0 + fVar27 * 0.0;
      pfVar1 = (float *)(lStack_c0 + lVar11);
      fVar25 = pfVar1[-8];
      fVar26 = pfVar1[-7];
      fVar27 = pfVar1[-6];
      fVar28 = pfVar1[-5];
      fVar29 = pfVar1[-4];
      fVar30 = pfVar1[-3];
      fVar31 = pfVar1[-2];
      fVar32 = pfVar1[-1];
      fVar33 = *pfVar1;
      fVar34 = fVar20 * fVar26 + fVar25 * fVar13 + fVar27 * fVar16;
      fVar35 = fVar21 * fVar26 + fVar25 * fVar15 + fVar27 * fVar23;
      fVar25 = fVar26 * fVar22 + fVar25 * fVar18 + fVar27 * fVar24;
      fVar26 = fVar20 * fVar29 + fVar28 * fVar13 + fVar30 * fVar16;
      fVar27 = fVar21 * fVar29 + fVar28 * fVar15 + fVar30 * fVar23;
      fVar28 = fVar22 * fVar29 + fVar28 * fVar18 + fVar30 * fVar24;
      fVar13 = fVar20 * fVar32 + fVar31 * fVar13 + fVar33 * fVar16;
      fVar16 = fVar21 * fVar32 + fVar31 * fVar15 + fVar33 * fVar23;
      fVar15 = fVar22 * fVar32 + fVar31 * fVar18 + fVar33 * fVar24;
      fVar21 = fVar34 + fVar26 * 0.0 + fVar13 * 0.0;
      fVar20 = fVar35 + fVar27 * 0.0 + fVar16 * 0.0;
      fVar24 = fVar25 + fVar28 * 0.0 + fVar15 * 0.0;
      fVar23 = fVar26 + fVar34 * 0.0 + fVar13 * 0.0;
      fVar22 = fVar27 + fVar35 * 0.0 + fVar16 * 0.0;
      fVar18 = fVar28 + fVar25 * 0.0 + fVar15 * 0.0;
      fVar13 = fVar26 * -0.5 + fVar34 * -0.5 + fVar13;
      fVar16 = fVar27 * -0.5 + fVar35 * -0.5 + fVar16;
      fVar15 = fVar28 * -0.5 + fVar25 * -0.5 + fVar15;
      lVar9 = *param_3;
      puVar3 = (undefined8 *)param_1[1];
      if (puVar3 < (undefined8 *)param_1[2]) {
        *puVar3 = *(undefined8 *)(lVar9 + (long)puVar10 * 8);
        *(float *)(puVar3 + 1) = fVar21;
        *(float *)((long)puVar3 + 0xc) = fVar23;
        *(float *)(puVar3 + 2) = fVar13;
        *(float *)((long)puVar3 + 0x14) = fVar20;
        *(float *)(puVar3 + 3) = fVar22;
        *(float *)((long)puVar3 + 0x1c) = fVar16;
        *(float *)(puVar3 + 4) = fVar24;
        *(float *)((long)puVar3 + 0x24) = fVar18;
        *(float *)(puVar3 + 5) = fVar15;
        puVar3 = puVar3 + 6;
      }
      else {
        puVar8 = (undefined8 *)*param_1;
        uVar17 = ((long)puVar3 - (long)puVar8 >> 4) * -0x5555555555555555 + 1;
        if (0x555555555555555 < uVar17) {
          FUN_1096708b4();
          goto LAB_10966fb2c;
        }
        lVar5 = (long)param_1[2] - (long)puVar8 >> 4;
        uVar6 = lVar5 * 0x5555555555555556;
        if (uVar6 < uVar17 || uVar6 - uVar17 == 0) {
          uVar6 = uVar17;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
          uVar6 = 0x555555555555555;
        }
        FUN_1096708c8();
        puVar3 = (undefined8 *)(uVar6 + ((long)puVar3 - (long)puVar8));
        *puVar3 = *(undefined8 *)(lVar9 + (long)puVar10 * 8);
        lVar9 = (long)puVar4 * 0x30;
        *(float *)(puVar3 + 1) = fVar21;
        *(float *)((long)puVar3 + 0xc) = fVar23;
        *(float *)(puVar3 + 2) = fVar13;
        *(float *)((long)puVar3 + 0x14) = fVar20;
        *(float *)(puVar3 + 3) = fVar22;
        *(float *)((long)puVar3 + 0x1c) = fVar16;
        *(float *)(puVar3 + 4) = fVar24;
        *(float *)((long)puVar3 + 0x24) = fVar18;
        *(float *)(puVar3 + 5) = fVar15;
        puVar3 = puVar3 + 6;
        puVar4 = puVar8;
        _memcpy();
        *param_1 = uVar6;
        param_1[1] = (ulong)puVar3;
        param_1[2] = uVar6 + lVar9;
        if (puVar8 != (undefined8 *)0x0) {
          __ZdlPv(puVar8);
        }
      }
      param_1[1] = (ulong)puVar3;
      puVar10 = (undefined8 *)((long)puVar10 + 1);
      lVar11 = lVar11 + 0x24;
    } while (puVar7 != puVar10);
  }
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  return;
}



/* Entry: 10966fb80; end: 10966fbdf;  */

long * FUN_10966fb80(long *param_1)

{
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10966fbe0; end: 1096700a7;  */

void FUN_10966fbe0(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 *puVar5;
  undefined8 ***pppuVar6;
  float *pfVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  undefined8 ****ppppuVar11;
  float **ppfVar12;
  ulong uVar13;
  undefined8 ****ppppuVar14;
  long lVar15;
  float *pfVar16;
  undefined8 ****ppppuVar17;
  float *pfVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_188;
  long lStack_180;
  long alStack_170 [3];
  long lStack_158;
  long lStack_140;
  long lStack_128;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined8 ***pppuStack_100;
  float *pfStack_f8;
  float *pfStack_f0;
  float *pfStack_e8;
  float *pfStack_e0;
  float *pfStack_d8;
  float *pfStack_d0;
  float *pfStack_c8;
  float *pfStack_c0;
  float *pfStack_b8;
  
  pfStack_c8 = (float *)0x0;
  pfStack_d0 = (float *)0x0;
  pfStack_b8 = (float *)0x0;
  pfStack_c0 = (float *)0x0;
  pfStack_e8 = (float *)0x0;
  pfStack_f0 = (float *)0x0;
  pfStack_d8 = (float *)0x0;
  pfStack_e0 = (float *)0x0;
  pppuStack_108 = (undefined8 ****)0x0;
  pppuStack_110 = (undefined8 ****)0x0;
  pfStack_f8 = (float *)0x0;
  pppuStack_100 = (undefined8 ****)0x0;
  puVar19 = (undefined8 *)*param_3;
  puVar5 = (undefined8 *)param_3[1];
  if (puVar19 != puVar5) {
    do {
      fVar26 = *(float *)(puVar19 + 2);
      fVar24 = *(float *)((long)puVar19 + 0x14);
      fVar25 = *(float *)(puVar19 + 1);
      fVar27 = *(float *)((long)puVar19 + 0xc);
      fVar20 = fVar24 * fVar25 + fVar26 * fVar27;
      fVar20 = fVar20 + fVar20;
      fVar22 = ABS(fVar20);
      bVar9 = false;
      bVar10 = true;
      if (ABS(((-(fVar25 * fVar25) + fVar24 * fVar24) - fVar27 * fVar27) + fVar26 * fVar26) <=
          1.1920929e-07) {
        bVar9 = false;
        bVar10 = true;
        if (!NAN(fVar22)) {
          bVar9 = fVar22 == 1.1920929e-07;
          bVar10 = 1.1920929e-07 <= fVar22;
        }
      }
      if (!bVar10 || bVar9) {
        fVar20 = fVar25;
        _atan2f(fVar25,fVar24);
        fVar20 = fVar20 + fVar20;
      }
      else {
        _atan2f();
      }
      fVar21 = fVar26 * fVar24 + fVar27 * fVar25;
      fVar21 = fVar21 + fVar21;
      fVar23 = ABS(fVar21);
      fVar22 = 0.0;
      bVar9 = false;
      bVar10 = true;
      if (ABS((fVar25 * fVar25 + fVar24 * fVar24 + fVar27 * -fVar27) - fVar26 * fVar26) <=
          1.1920929e-07) {
        bVar9 = false;
        bVar10 = true;
        if (!NAN(fVar23)) {
          bVar9 = fVar23 == 1.1920929e-07;
          bVar10 = 1.1920929e-07 <= fVar23;
        }
      }
      if (bVar10 && !bVar9) {
        fVar22 = fVar21;
        _atan2f();
      }
      fVar25 = (-(fVar24 * fVar27) + fVar26 * fVar25) * -2.0;
      fVar24 = -1.0;
      if (-1.0 <= fVar25) {
        fVar24 = fVar25;
      }
      fVar25 = 1.0;
      if (fVar24 <= 1.0) {
        fVar25 = fVar24;
      }
      _asinf();
      if (pppuStack_108 < pppuStack_100) {
        ppppuVar14 = (undefined8 ****)(pppuStack_108 + 1);
        *pppuStack_108 = (undefined8 ***)*puVar19;
      }
      else {
        lVar15 = (long)pppuStack_108 - (long)pppuStack_110;
        uVar1 = (lVar15 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_1092d2ba8();
          goto LAB_10967006c;
        }
        uVar13 = (long)pppuStack_100 - (long)pppuStack_110 >> 2;
        if (uVar13 <= uVar1) {
          uVar13 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppuStack_100 - (long)pppuStack_110)) {
          uVar13 = 0x1fffffffffffffff;
        }
        ppppuVar11 = &pppuStack_110;
        FUN_1092d2bbc();
        pppuVar6 = pppuStack_110;
        puVar2 = (undefined8 *)((long)ppppuVar11 + lVar15);
        ppppuVar17 = (undefined8 ****)((long)puVar2 - ((long)pppuStack_108 - (long)pppuStack_110));
        ppppuVar14 = (undefined8 ****)(puVar2 + 1);
        *puVar2 = *puVar19;
        _memcpy(ppppuVar17,pppuVar6);
        bVar9 = (undefined8 ****)pppuStack_110 != (undefined8 ****)0x0;
        pppuStack_110 = ppppuVar17;
        pppuStack_100 = ppppuVar11 + uVar13;
        if (bVar9) {
          pppuStack_108 = ppppuVar14;
          __ZdlPv();
        }
      }
      pppuStack_108 = ppppuVar14;
      if (pfStack_e8 <= pfStack_f0) {
        lVar15 = (long)pfStack_f0 - (long)pfStack_f8;
        uVar1 = (lVar15 >> 2) + 1;
        if (uVar1 >> 0x3e == 0) {
          uVar13 = (long)pfStack_e8 - (long)pfStack_f8 >> 1;
          if (uVar13 <= uVar1) {
            uVar13 = uVar1;
          }
          if (0x7ffffffffffffffb < (ulong)((long)pfStack_e8 - (long)pfStack_f8)) {
            uVar13 = 0x3fffffffffffffff;
          }
          ppfVar12 = &pfStack_f8;
          FUN_1092cc1a0();
          pfVar7 = pfStack_f8;
          pfVar3 = (float *)((long)ppfVar12 + lVar15);
          pfVar4 = (float *)((long)ppfVar12 + uVar13 * 4);
          pfVar18 = (float *)((long)pfVar3 - ((long)pfStack_f0 - (long)pfStack_f8));
          pfVar16 = pfVar3 + 1;
          *pfVar3 = fVar22;
          _memcpy(pfVar18,pfVar7);
          bVar9 = pfStack_f8 != (float *)0x0;
          pfStack_f8 = pfVar18;
          pfStack_e8 = pfVar4;
          if (bVar9) {
            pfStack_f0 = pfVar16;
            __ZdlPv();
          }
          goto LAB_10966fe28;
        }
LAB_109670060:
        FUN_1092cc18c();
LAB_10967006c:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x109670070);
        (*pcVar8)();
      }
      pfVar16 = pfStack_f0 + 1;
      *pfStack_f0 = fVar22;
LAB_10966fe28:
      pfStack_f0 = pfVar16;
      if (pfStack_d8 < pfStack_d0) {
        pfVar16 = pfStack_d8 + 1;
        *pfStack_d8 = fVar20;
      }
      else {
        lVar15 = (long)pfStack_d8 - (long)pfStack_e0;
        uVar1 = (lVar15 >> 2) + 1;
        if (uVar1 >> 0x3e != 0) goto LAB_109670060;
        uVar13 = (long)pfStack_d0 - (long)pfStack_e0 >> 1;
        if (uVar13 <= uVar1) {
          uVar13 = uVar1;
        }
        if (0x7ffffffffffffffb < (ulong)((long)pfStack_d0 - (long)pfStack_e0)) {
          uVar13 = 0x3fffffffffffffff;
        }
        ppfVar12 = &pfStack_e0;
        FUN_1092cc1a0();
        pfVar7 = pfStack_e0;
        pfVar3 = (float *)((long)ppfVar12 + lVar15);
        pfVar4 = (float *)((long)ppfVar12 + uVar13 * 4);
        pfVar18 = (float *)((long)pfVar3 - ((long)pfStack_d8 - (long)pfStack_e0));
        pfVar16 = pfVar3 + 1;
        *pfVar3 = fVar20;
        _memcpy(pfVar18,pfVar7);
        bVar9 = pfStack_e0 != (float *)0x0;
        pfStack_e0 = pfVar18;
        pfStack_d0 = pfVar4;
        if (bVar9) {
          pfStack_d8 = pfVar16;
          __ZdlPv();
        }
      }
      pfStack_d8 = pfVar16;
      if (pfStack_c0 < pfStack_b8) {
        pfVar16 = pfStack_c0 + 1;
        *pfStack_c0 = fVar25;
      }
      else {
        lVar15 = (long)pfStack_c0 - (long)pfStack_c8;
        uVar1 = (lVar15 >> 2) + 1;
        if (uVar1 >> 0x3e != 0) goto LAB_109670060;
        uVar13 = (long)pfStack_b8 - (long)pfStack_c8 >> 1;
        if (uVar13 <= uVar1) {
          uVar13 = uVar1;
        }
        if (0x7ffffffffffffffb < (ulong)((long)pfStack_b8 - (long)pfStack_c8)) {
          uVar13 = 0x3fffffffffffffff;
        }
        ppfVar12 = &pfStack_c8;
        FUN_1092cc1a0();
        pfVar7 = pfStack_c8;
        pfVar3 = (float *)((long)ppfVar12 + lVar15);
        pfVar4 = (float *)((long)ppfVar12 + uVar13 * 4);
        pfVar18 = (float *)((long)pfVar3 - ((long)pfStack_c0 - (long)pfStack_c8));
        pfVar16 = pfVar3 + 1;
        *pfVar3 = fVar25;
        _memcpy(pfVar18,pfVar7);
        bVar9 = pfStack_c8 != (float *)0x0;
        pfStack_c8 = pfVar18;
        pfStack_b8 = pfVar4;
        if (bVar9) {
          pfStack_c0 = pfVar16;
          __ZdlPv();
        }
      }
      puVar19 = puVar19 + 5;
      pfStack_c0 = pfVar16;
    } while (puVar19 != puVar5);
  }
  FUN_1096700a8(alStack_170,&pppuStack_110,1);
  FUN_109670364(&lStack_1d0,&pppuStack_110,alStack_170,1);
  if (lStack_128 != 0) {
    __ZdlPv();
  }
  if (lStack_140 != 0) {
    __ZdlPv();
  }
  if (lStack_158 != 0) {
    __ZdlPv();
  }
  if (alStack_170[0] != 0) {
    __ZdlPv();
  }
  if (pfStack_c8 != (float *)0x0) {
    pfStack_c0 = pfStack_c8;
    __ZdlPv();
  }
  if (pfStack_e0 != (float *)0x0) {
    pfStack_d8 = pfStack_e0;
    __ZdlPv();
  }
  if (pfStack_f8 != (float *)0x0) {
    pfStack_f0 = pfStack_f8;
    __ZdlPv();
  }
  if ((undefined8 ****)pppuStack_110 != (undefined8 ****)0x0) {
    pppuStack_108 = pppuStack_110;
    __ZdlPv();
  }
  FUN_10966f51c(param_1,param_2,&lStack_1d0,param_4,param_5,param_6);
  if (lStack_188 != 0) {
    lStack_180 = lStack_188;
    __ZdlPv();
  }
  if (lStack_1a0 != 0) {
    lStack_198 = lStack_1a0;
    __ZdlPv();
  }
  if (lStack_1b8 != 0) {
    lStack_1b0 = lStack_1b8;
    __ZdlPv();
  }
  if (lStack_1d0 != 0) {
    lStack_1c8 = lStack_1d0;
    __ZdlPv();
  }
  return;
}



/* Entry: 1096700a8; end: 109670177;  */

void FUN_1096700a8(undefined8 *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  iVar1 = 0x33;
  if (param_3 != 0) {
    iVar1 = 0x51;
  }
  FUN_10966eff8(&uStack_50,param_2 + 0x18,iVar1);
  param_1[4] = uStack_48;
  param_1[3] = uStack_50;
  param_1[5] = uStack_40;
  FUN_10966eff8(&uStack_50,param_2 + 0x30,iVar1);
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  FUN_10966eff8(&uStack_50,param_2 + 0x48,iVar1 << 1 | 1);
  param_1[10] = uStack_48;
  param_1[9] = uStack_50;
  param_1[0xb] = uStack_40;
  return;
}



/* Entry: 109670178; end: 109670363;  */

void FUN_109670178(undefined8 *param_1,long *param_2)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  code *pcVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  float *pfStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  lVar1 = *param_2;
  lVar4 = param_2[1] - lVar1;
  if (lVar4 == 0) {
    param_1[1] = 0;
  }
  else {
    if ((ulong)(lVar4 >> 3) >> 0x3d != 0) {
      FUN_1092d2ba8();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109670344);
      (*pcVar5)();
    }
    FUN_1092d4d38(param_1);
    lVar7 = param_1[1];
    _memmove(lVar7,lVar1,lVar4);
    param_1[1] = lVar7 + lVar4;
  }
  FUN_109367d10(&pfStack_60,param_2[4] - param_2[3] >> 2);
  pfVar2 = (float *)param_2[3];
  pfVar3 = (float *)param_2[4];
  if (pfVar2 != pfVar3) {
    fVar8 = *pfVar2;
    *pfStack_60 = fVar8;
    pfVar6 = pfStack_60;
    while (pfVar2 = pfVar2 + 1, pfVar2 != pfVar3) {
      pfVar6 = pfVar6 + 1;
      fVar8 = fVar8 + *pfVar2;
      *pfVar6 = fVar8;
    }
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  param_1[4] = uStack_58;
  param_1[3] = pfStack_60;
  param_1[5] = uStack_50;
  FUN_109367d10(&pfStack_60,param_2[7] - param_2[6] >> 2);
  pfVar2 = (float *)param_2[6];
  pfVar3 = (float *)param_2[7];
  if (pfVar2 != pfVar3) {
    fVar8 = *pfVar2;
    *pfStack_60 = fVar8;
    pfVar6 = pfStack_60;
    while (pfVar2 = pfVar2 + 1, pfVar2 != pfVar3) {
      pfVar6 = pfVar6 + 1;
      fVar8 = fVar8 + *pfVar2;
      *pfVar6 = fVar8;
    }
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  param_1[7] = uStack_58;
  param_1[6] = pfStack_60;
  param_1[8] = uStack_50;
  FUN_109367d10(&pfStack_60,param_2[10] - param_2[9] >> 2);
  pfVar2 = (float *)param_2[9];
  pfVar3 = (float *)param_2[10];
  if (pfVar2 != pfVar3) {
    fVar8 = *pfVar2;
    *pfStack_60 = fVar8;
    pfVar6 = pfStack_60;
    while (pfVar2 = pfVar2 + 1, pfVar2 != pfVar3) {
      pfVar6 = pfVar6 + 1;
      fVar8 = fVar8 + *pfVar2;
      *pfVar6 = fVar8;
    }
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  param_1[10] = uStack_58;
  param_1[9] = pfStack_60;
  param_1[0xb] = uStack_50;
  return;
}



/* Entry: 109670364; end: 1096704eb;  */

void FUN_109670364(undefined8 *param_1,long *param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puVar8;
  
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar7 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  lVar3 = (long)puVar2 - (long)puVar7;
  puVar6 = (undefined8 *)0x0;
  if (lVar3 != 0) {
    if ((ulong)(lVar3 >> 3) >> 0x3d != 0) {
      FUN_1092d2ba8();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1096704cc);
      (*pcVar4)();
    }
    FUN_1092d4d38(param_1);
    puVar5 = (undefined8 *)param_1[1];
    do {
      puVar8 = puVar7 + 1;
      puVar6 = puVar5 + 1;
      *puVar5 = *puVar7;
      puVar5 = puVar6;
      puVar7 = puVar8;
    } while (puVar8 != puVar2);
  }
  param_1[1] = puVar6;
  puVar1 = &UNK_10dfd9274;
  if (param_4 != 0) {
    puVar1 = &UNK_10dfd9268;
  }
  FUN_1096704ec(&uStack_60,param_2 + 3,param_3 + 0x18,puVar1);
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  param_1[4] = uStack_58;
  param_1[3] = uStack_60;
  param_1[5] = uStack_50;
  puVar1 = &UNK_10dfd928c;
  if (param_4 != 0) {
    puVar1 = &UNK_10dfd9280;
  }
  FUN_1096704ec(&uStack_60,param_2 + 6,param_3 + 0x30,puVar1);
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  puVar1 = &UNK_10dfd92a4;
  if (param_4 != 0) {
    puVar1 = &UNK_10dfd9298;
  }
  FUN_1096704ec(&uStack_60,param_2 + 9,param_3 + 0x48,puVar1);
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  param_1[10] = uStack_58;
  param_1[9] = uStack_60;
  param_1[0xb] = uStack_50;
  return;
}



/* Entry: 1096704ec; end: 10967068f;  */

void FUN_1096704ec(long *param_1,long *param_2,long *param_3,float *param_4)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar6 = param_2[1] - *param_2 >> 2;
  uVar8 = param_3[1] - *param_3 >> 2;
  if (uVar6 <= uVar8) {
    uVar8 = uVar6;
  }
  func_0x0001073b504c(param_1,uVar8);
  if (uVar8 != 0) {
    uVar6 = 0;
    pfVar11 = (float *)param_1[1];
    do {
      fVar14 = param_4[1] +
               (*(float *)(*param_2 + uVar6 * 4) - *(float *)(*param_3 + uVar6 * 4)) * *param_4;
      fVar16 = param_4[2];
      fVar15 = -fVar16;
      if (pfVar11 < (float *)param_1[2]) {
        if (fVar14 <= fVar16) {
          fVar16 = fVar14;
        }
        if (fVar15 <= fVar14) {
          fVar15 = fVar16;
        }
        pfVar12 = pfVar11 + 1;
        *pfVar11 = fVar15;
      }
      else {
        lVar9 = (long)pfVar11 - *param_1;
        uVar1 = (lVar9 >> 2) + 1;
        if (uVar1 >> 0x3e != 0) {
          FUN_1092cc18c();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10967066c);
          (*pcVar3)();
        }
        uVar5 = param_1[2] - *param_1;
        uVar7 = (long)uVar5 >> 1;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7ffffffffffffffb < uVar5) {
          uVar7 = 0x3fffffffffffffff;
        }
        plVar4 = param_1;
        FUN_1092cc1a0();
        lVar2 = *param_1;
        pfVar11 = (float *)((long)plVar4 + lVar9);
        fVar13 = param_4[2];
        if (fVar14 <= fVar16) {
          fVar13 = fVar14;
        }
        if (fVar15 <= fVar14) {
          fVar15 = fVar13;
        }
        lVar10 = (long)pfVar11 - (param_1[1] - lVar2);
        pfVar12 = pfVar11 + 1;
        *pfVar11 = fVar15;
        _memcpy(lVar10,lVar2);
        lVar9 = *param_1;
        *param_1 = lVar10;
        param_1[1] = (long)pfVar12;
        param_1[2] = (long)plVar4 + uVar7 * 4;
        if (lVar9 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)pfVar12;
      uVar6 = uVar6 + 1;
      pfVar11 = pfVar12;
    } while (uVar8 != uVar6);
  }
  return;
}



/* Entry: 109670690; end: 109670857;  */

void FUN_109670690(long *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined4 auStack_220 [2];
  undefined4 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 auStack_200 [2];
  undefined1 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined4 auStack_1e8 [2];
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1cc;
  undefined8 auStack_1c4 [4];
  long alStack_1a0 [6];
  undefined1 auStack_170 [96];
  
  lVar8 = *param_1;
  if ((undefined8 *)((param_1[2] - lVar8 >> 2) * -0x71c71c71c71c71c7) < param_2) {
    if ((undefined8 *)0x71c71c71c71c71c < param_2) {
      FUN_109670858();
      puVar6 = (undefined8 *)param_1[1];
      if (puVar6 < (undefined8 *)param_1[2]) {
        uVar20 = param_2[1];
        uVar19 = *param_2;
        uVar22 = param_2[3];
        uVar21 = param_2[2];
        *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_2 + 4);
        puVar6[1] = uVar20;
        *puVar6 = uVar19;
        puVar6[3] = uVar22;
        puVar6[2] = uVar21;
        lVar8 = (long)puVar6 + 0x24;
      }
      else {
        lVar8 = (long)puVar6 - *param_1;
        uVar11 = (lVar8 >> 2) * -0x71c71c71c71c71c7 + 1;
        if (0x71c71c71c71c71c < uVar11) {
          FUN_109670858();
          puVar4 = &DAT_10f62a4d8;
          func_0x000104c4f6cc();
          if (puVar4 < (undefined *)0x71c71c71c71c71d) {
            __Znwm((long)puVar4 * 0x24);
            return;
          }
          func_0x000104c4f740();
          puVar4 = &DAT_10f62a4d8;
          func_0x000104c4f6cc();
          if (puVar4 < (undefined *)0x555555555555556) {
            __Znwm((long)puVar4 * 0x30);
            return;
          }
          func_0x000104c4f740();
          lVar8 = 0;
          do {
            *(undefined4 *)((long)&uStack_1d0 + lVar8) = 0x42ff0000;
            *(undefined8 *)((long)auStack_1c4 + lVar8) = 0;
            *(undefined8 *)((long)&uStack_1cc + lVar8) = 0;
            *(undefined8 *)((long)auStack_1c4 + lVar8 + 0x10) = 0;
            *(undefined8 *)((long)auStack_1c4 + lVar8 + 8) = 0;
            *(undefined8 *)(&stack0xfffffffffffffe5c + lVar8) = 0;
            *(undefined8 *)((long)auStack_1c4 + lVar8 + 0x18) = 0;
            puVar6 = (undefined8 *)((long)alStack_1a0 + lVar8 + 0x20);
            *puVar6 = 0;
            *(undefined8 *)((long)alStack_1a0 + lVar8 + 8) = 0;
            *(undefined8 *)((long)alStack_1a0 + lVar8) = 0;
            *(long *)((long)alStack_1a0 + lVar8 + 0x10) = (long)auStack_1c4 + lVar8 + -4;
            *(undefined8 **)((long)alStack_1a0 + lVar8 + 0x18) = puVar6;
            lVar10 = lVar8 + 0x60;
            *(undefined8 *)((long)alStack_1a0 + lVar8 + 0x28) = 0;
            lVar8 = lVar10;
          } while (lVar10 != 0xc0);
          uStack_1d8 = 0;
          auStack_1e8[0] = 0x1010000;
          auStack_200[0] = 0x2010000;
          uStack_1f0 = 0;
          puVar5 = auStack_1e8;
          puStack_1f8 = auStack_170;
          puStack_1e0 = (undefined8 *)puVar4;
          FUN_109a3f338(puVar5,auStack_200,4);
          uStack_210 = 0;
          uStack_208 = 0x3ff0000000000000;
          auStack_1e8[0] = 0xc1020006;
          puStack_1e0 = &uStack_208;
          uStack_1d8 = 0x100000001;
          uStack_1f0 = 0;
          auStack_200[0] = 0x1010000;
          auStack_220[0] = 0x2010000;
          puStack_218 = &uStack_1d0;
          puStack_1f8 = auStack_170;
          FUN_109a91d90();
          FUN_109a293c4(auStack_1e8,auStack_200,auStack_220,puVar5,0xffffffff,&PTR_DAT_1132e8c10,0,0
                       );
          auStack_1e8[0] = 0x2010000;
          uStack_1d8 = 0;
          puStack_1e0 = (undefined8 *)param_3;
          FUN_109a3e010(&uStack_1d0,2,auStack_1e8);
          if ((bRam00000001137347c0 & 1) == 0) {
            iVar12 = 0x137347c0;
            ___cxa_guard_acquire();
            if (iVar12 != 0) {
              uRam00000001137347d8 = 0x404040404040404;
              uRam00000001137347d0 = 0x404040404040404;
              ___cxa_guard_release(0x1137347c0);
            }
          }
          if ((bRam00000001137347c8 & 1) == 0) {
            iVar12 = 0x137347c8;
            ___cxa_guard_acquire();
            if (iVar12 != 0) {
              uRam00000001137347e8 = 0x101010101010101;
              uRam00000001137347e0 = 0x101010101010101;
              ___cxa_guard_release(0x1137347c8);
            }
          }
          uVar22 = uRam00000001137347e8;
          uVar21 = uRam00000001137347e0;
          uVar20 = uRam00000001137347d8;
          uVar19 = uRam00000001137347d0;
          iVar12 = *(int *)(param_2 + 1);
          if (0 < iVar12) {
            lVar8 = 0;
            uVar11 = (ulong)*(uint *)((long)param_2 + 0xc);
            do {
              if (0 < (int)uVar11) {
                lVar10 = 0;
                lVar18 = param_2[2];
                lVar15 = *(long *)param_2[9];
                lVar14 = *(long *)(param_4 + 0x10);
                lVar16 = **(long **)(param_4 + 0x48);
                do {
                  puVar6 = (undefined8 *)(lVar18 + lVar15 * lVar8 + lVar10);
                  uVar24 = puVar6[1];
                  uVar23 = *puVar6;
                  puVar6 = (undefined8 *)(lVar14 + lVar16 * lVar8 + lVar10);
                  puVar6[1] = CONCAT17(-((char)((ulong)uVar24 >> 0x38) ==
                                        (char)((ulong)uVar20 >> 0x38)) &
                                       (byte)((ulong)uVar22 >> 0x38),
                                       CONCAT16(-((char)((ulong)uVar24 >> 0x30) ==
                                                 (char)((ulong)uVar20 >> 0x30)) &
                                                (byte)((ulong)uVar22 >> 0x30),
                                                CONCAT15(-((char)((ulong)uVar24 >> 0x28) ==
                                                          (char)((ulong)uVar20 >> 0x28)) &
                                                         (byte)((ulong)uVar22 >> 0x28),
                                                         CONCAT14(-((char)((ulong)uVar24 >> 0x20) ==
                                                                   (char)((ulong)uVar20 >> 0x20)) &
                                                                  (byte)((ulong)uVar22 >> 0x20),
                                                                  CONCAT13(-((char)((ulong)uVar24 >>
                                                                                   0x18) ==
                                                                            (char)((ulong)uVar20 >>
                                                                                  0x18)) &
                                                                           (byte)((ulong)uVar22 >>
                                                                                 0x18),
                                                                           CONCAT12(-((char)((ulong)
                                                  uVar24 >> 0x10) == (char)((ulong)uVar20 >> 0x10))
                                                  & (byte)((ulong)uVar22 >> 0x10),
                                                  CONCAT11(-((char)((ulong)uVar24 >> 8) ==
                                                            (char)((ulong)uVar20 >> 8)) &
                                                           (byte)((ulong)uVar22 >> 8),
                                                           -((char)uVar24 == (char)uVar20) &
                                                           (byte)uVar22)))))));
                  *puVar6 = CONCAT17(-((char)((ulong)uVar23 >> 0x38) ==
                                      (char)((ulong)uVar19 >> 0x38)) & (byte)((ulong)uVar21 >> 0x38)
                                     ,CONCAT16(-((char)((ulong)uVar23 >> 0x30) ==
                                                (char)((ulong)uVar19 >> 0x30)) &
                                               (byte)((ulong)uVar21 >> 0x30),
                                               CONCAT15(-((char)((ulong)uVar23 >> 0x28) ==
                                                         (char)((ulong)uVar19 >> 0x28)) &
                                                        (byte)((ulong)uVar21 >> 0x28),
                                                        CONCAT14(-((char)((ulong)uVar23 >> 0x20) ==
                                                                  (char)((ulong)uVar19 >> 0x20)) &
                                                                 (byte)((ulong)uVar21 >> 0x20),
                                                                 CONCAT13(-((char)((ulong)uVar23 >>
                                                                                  0x18) ==
                                                                           (char)((ulong)uVar19 >>
                                                                                 0x18)) &
                                                                          (byte)((ulong)uVar21 >>
                                                                                0x18),
                                                                          CONCAT12(-((char)((ulong)
                                                  uVar23 >> 0x10) == (char)((ulong)uVar19 >> 0x10))
                                                  & (byte)((ulong)uVar21 >> 0x10),
                                                  CONCAT11(-((char)((ulong)uVar23 >> 8) ==
                                                            (char)((ulong)uVar19 >> 8)) &
                                                           (byte)((ulong)uVar21 >> 8),
                                                           -((char)uVar23 == (char)uVar19) &
                                                           (byte)uVar21)))))));
                  lVar10 = lVar10 + 0x10;
                  uVar11 = (ulong)*(int *)((long)param_2 + 0xc);
                } while (lVar10 < (long)uVar11);
                iVar12 = *(int *)(param_2 + 1);
              }
              lVar8 = lVar8 + 1;
            } while (lVar8 < iVar12);
          }
          puVar5 = (undefined4 *)&stack0xfffffffffffffef0;
          do {
            puVar17 = puVar5 + -0x18;
            if (*(long *)(puVar5 + -10) != 0) {
              piVar1 = (int *)(*(long *)(puVar5 + -10) + 0x14);
              do {
                iVar12 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar12 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar12 + -1 == 0) {
                func_0x000109a848d4(puVar17);
              }
            }
            *(undefined8 *)(puVar5 + -10) = 0;
            *(undefined8 *)(puVar5 + -0x12) = 0;
            *(undefined8 *)(puVar5 + -0x14) = 0;
            *(undefined8 *)(puVar5 + -0xe) = 0;
            *(undefined8 *)(puVar5 + -0x10) = 0;
            if (0 < (int)puVar5[-0x17]) {
              lVar8 = 0;
              lVar10 = *(long *)(puVar5 + -8);
              do {
                *(undefined4 *)(lVar10 + lVar8 * 4) = 0;
                lVar8 = lVar8 + 1;
              } while (lVar8 < (int)puVar5[-0x17]);
            }
            puVar9 = *(undefined4 **)(puVar5 + -6);
            if (puVar9 != puVar5 + -4 && puVar9 != (undefined4 *)0x0) {
              _free(*(undefined8 *)(puVar9 + -2));
            }
            puVar5 = puVar17;
          } while (puVar17 != &uStack_1d0);
          return;
        }
        lVar10 = param_1[2] - *param_1 >> 2;
        uVar13 = lVar10 * 0x1c71c71c71c71c72;
        if (uVar13 < uVar11 || uVar13 - uVar11 == 0) {
          uVar13 = uVar11;
        }
        if (0x38e38e38e38e38d < (ulong)(lVar10 * -0x71c71c71c71c71c7)) {
          uVar13 = 0x71c71c71c71c71c;
        }
        puVar7 = param_2;
        FUN_10967086c();
        puVar6 = (undefined8 *)(uVar13 + lVar8);
        uVar20 = param_2[1];
        uVar19 = *param_2;
        uVar22 = param_2[3];
        uVar21 = param_2[2];
        *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_2 + 4);
        puVar6[1] = uVar20;
        *puVar6 = uVar19;
        puVar6[3] = uVar22;
        puVar6[2] = uVar21;
        lVar8 = (long)puVar6 + 0x24;
        lVar18 = (long)puVar6 - (param_1[1] - *param_1);
        _memcpy(lVar18);
        lVar10 = *param_1;
        *param_1 = lVar18;
        param_1[1] = lVar8;
        param_1[2] = uVar13 + (long)puVar7 * 0x24;
        if (lVar10 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = lVar8;
      return;
    }
    lVar10 = param_1[1];
    puVar6 = param_2;
    FUN_10967086c();
    lVar8 = (long)param_2 + (lVar10 - lVar8);
    lVar18 = lVar8 - (param_1[1] - *param_1);
    _memcpy(lVar18);
    lVar10 = *param_1;
    *param_1 = lVar18;
    param_1[1] = lVar8;
    param_1[2] = (long)param_2 + (long)puVar6 * 0x24;
    if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 109670858; end: 10967086b;  */

void FUN_109670858(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 auStack_1c0 [2];
  undefined4 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 auStack_1a0 [2];
  undefined1 *puStack_198;
  undefined8 uStack_190;
  undefined4 auStack_188 [2];
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined8 auStack_164 [4];
  long alStack_140 [6];
  undefined1 auStack_110 [96];
  
  puVar8 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (puVar8 < (undefined *)0x71c71c71c71c71d) {
    __Znwm((long)puVar8 * 0x24);
    return;
  }
  func_0x000104c4f740();
  puVar8 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (puVar8 < (undefined *)0x555555555555556) {
    __Znwm((long)puVar8 * 0x30);
    return;
  }
  func_0x000104c4f740();
  lVar10 = 0;
  do {
    *(undefined4 *)((long)&uStack_170 + lVar10) = 0x42ff0000;
    *(undefined8 *)((long)auStack_164 + lVar10) = 0;
    *(undefined8 *)((long)&uStack_16c + lVar10) = 0;
    *(undefined8 *)((long)auStack_164 + lVar10 + 0x10) = 0;
    *(undefined8 *)((long)auStack_164 + lVar10 + 8) = 0;
    *(undefined8 *)(&stack0xfffffffffffffebc + lVar10) = 0;
    *(undefined8 *)((long)auStack_164 + lVar10 + 0x18) = 0;
    puVar18 = (undefined8 *)((long)alStack_140 + lVar10 + 0x20);
    *puVar18 = 0;
    *(undefined8 *)((long)alStack_140 + lVar10 + 8) = 0;
    *(undefined8 *)((long)alStack_140 + lVar10) = 0;
    *(long *)((long)alStack_140 + lVar10 + 0x10) = (long)auStack_164 + lVar10 + -4;
    *(undefined8 **)((long)alStack_140 + lVar10 + 0x18) = puVar18;
    lVar15 = lVar10 + 0x60;
    *(undefined8 *)((long)alStack_140 + lVar10 + 0x28) = 0;
    lVar10 = lVar15;
  } while (lVar15 != 0xc0);
  uStack_178 = 0;
  auStack_188[0] = 0x1010000;
  auStack_1a0[0] = 0x2010000;
  uStack_190 = 0;
  puVar9 = auStack_188;
  puStack_198 = auStack_110;
  puStack_180 = (undefined8 *)puVar8;
  FUN_109a3f338(puVar9,auStack_1a0,4);
  uStack_1b0 = 0;
  uStack_1a8 = 0x3ff0000000000000;
  auStack_188[0] = 0xc1020006;
  puStack_180 = &uStack_1a8;
  uStack_178 = 0x100000001;
  uStack_190 = 0;
  auStack_1a0[0] = 0x1010000;
  auStack_1c0[0] = 0x2010000;
  puStack_1b8 = &uStack_170;
  puStack_198 = auStack_110;
  FUN_109a91d90();
  FUN_109a293c4(auStack_188,auStack_1a0,auStack_1c0,puVar9,0xffffffff,&PTR_DAT_1132e8c10,0,0);
  auStack_188[0] = 0x2010000;
  uStack_178 = 0;
  puStack_180 = (undefined8 *)param_3;
  FUN_109a3e010(&uStack_170,2,auStack_188);
  if ((bRam00000001137347c0 & 1) == 0) {
    iVar14 = 0x137347c0;
    ___cxa_guard_acquire();
    if (iVar14 != 0) {
      uRam00000001137347d8 = 0x404040404040404;
      uRam00000001137347d0 = 0x404040404040404;
      ___cxa_guard_release(0x1137347c0);
    }
  }
  if ((bRam00000001137347c8 & 1) == 0) {
    iVar14 = 0x137347c8;
    ___cxa_guard_acquire();
    if (iVar14 != 0) {
      uRam00000001137347e8 = 0x101010101010101;
      uRam00000001137347e0 = 0x101010101010101;
      ___cxa_guard_release(0x1137347c8);
    }
  }
  uVar7 = uRam00000001137347e8;
  uVar6 = uRam00000001137347e0;
  uVar5 = uRam00000001137347d8;
  uVar4 = uRam00000001137347d0;
  iVar14 = *(int *)(param_2 + 8);
  if (0 < iVar14) {
    lVar10 = 0;
    uVar12 = (ulong)*(uint *)(param_2 + 0xc);
    do {
      if (0 < (int)uVar12) {
        lVar15 = 0;
        lVar13 = *(long *)(param_2 + 0x10);
        lVar17 = **(long **)(param_2 + 0x48);
        lVar16 = *(long *)(param_4 + 0x10);
        lVar19 = **(long **)(param_4 + 0x48);
        do {
          puVar18 = (undefined8 *)(lVar13 + lVar17 * lVar10 + lVar15);
          uVar22 = puVar18[1];
          uVar21 = *puVar18;
          puVar18 = (undefined8 *)(lVar16 + lVar19 * lVar10 + lVar15);
          puVar18[1] = CONCAT17(-((char)((ulong)uVar22 >> 0x38) == (char)((ulong)uVar5 >> 0x38)) &
                                (byte)((ulong)uVar7 >> 0x38),
                                CONCAT16(-((char)((ulong)uVar22 >> 0x30) ==
                                          (char)((ulong)uVar5 >> 0x30)) &
                                         (byte)((ulong)uVar7 >> 0x30),
                                         CONCAT15(-((char)((ulong)uVar22 >> 0x28) ==
                                                   (char)((ulong)uVar5 >> 0x28)) &
                                                  (byte)((ulong)uVar7 >> 0x28),
                                                  CONCAT14(-((char)((ulong)uVar22 >> 0x20) ==
                                                            (char)((ulong)uVar5 >> 0x20)) &
                                                           (byte)((ulong)uVar7 >> 0x20),
                                                           CONCAT13(-((char)((ulong)uVar22 >> 0x18)
                                                                     == (char)((ulong)uVar5 >> 0x18)
                                                                     ) & (byte)((ulong)uVar7 >> 0x18
                                                                               ),
                                                                    CONCAT12(-((char)((ulong)uVar22
                                                                                     >> 0x10) ==
                                                                              (char)((ulong)uVar5 >>
                                                                                    0x10)) &
                                                                             (byte)((ulong)uVar7 >>
                                                                                   0x10),
                                                                             CONCAT11(-((char)((
                                                  ulong)uVar22 >> 8) == (char)((ulong)uVar5 >> 8)) &
                                                  (byte)((ulong)uVar7 >> 8),
                                                  -((char)uVar22 == (char)uVar5) & (byte)uVar7))))))
                               );
          *puVar18 = CONCAT17(-((char)((ulong)uVar21 >> 0x38) == (char)((ulong)uVar4 >> 0x38)) &
                              (byte)((ulong)uVar6 >> 0x38),
                              CONCAT16(-((char)((ulong)uVar21 >> 0x30) ==
                                        (char)((ulong)uVar4 >> 0x30)) & (byte)((ulong)uVar6 >> 0x30)
                                       ,CONCAT15(-((char)((ulong)uVar21 >> 0x28) ==
                                                  (char)((ulong)uVar4 >> 0x28)) &
                                                 (byte)((ulong)uVar6 >> 0x28),
                                                 CONCAT14(-((char)((ulong)uVar21 >> 0x20) ==
                                                           (char)((ulong)uVar4 >> 0x20)) &
                                                          (byte)((ulong)uVar6 >> 0x20),
                                                          CONCAT13(-((char)((ulong)uVar21 >> 0x18)
                                                                    == (char)((ulong)uVar4 >> 0x18))
                                                                   & (byte)((ulong)uVar6 >> 0x18),
                                                                   CONCAT12(-((char)((ulong)uVar21
                                                                                    >> 0x10) ==
                                                                             (char)((ulong)uVar4 >>
                                                                                   0x10)) &
                                                                            (byte)((ulong)uVar6 >>
                                                                                  0x10),
                                                                            CONCAT11(-((char)((ulong
                                                  )uVar21 >> 8) == (char)((ulong)uVar4 >> 8)) &
                                                  (byte)((ulong)uVar6 >> 8),
                                                  -((char)uVar21 == (char)uVar4) & (byte)uVar6))))))
                             );
          lVar15 = lVar15 + 0x10;
          uVar12 = (ulong)*(int *)(param_2 + 0xc);
        } while (lVar15 < (long)uVar12);
        iVar14 = *(int *)(param_2 + 8);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar14);
  }
  puVar9 = (undefined4 *)&stack0xffffffffffffff50;
  do {
    puVar20 = puVar9 + -0x18;
    if (*(long *)(puVar9 + -10) != 0) {
      piVar1 = (int *)(*(long *)(puVar9 + -10) + 0x14);
      do {
        iVar14 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar14 + -1 == 0) {
        func_0x000109a848d4(puVar20);
      }
    }
    *(undefined8 *)(puVar9 + -10) = 0;
    *(undefined8 *)(puVar9 + -0x12) = 0;
    *(undefined8 *)(puVar9 + -0x14) = 0;
    *(undefined8 *)(puVar9 + -0xe) = 0;
    *(undefined8 *)(puVar9 + -0x10) = 0;
    if (0 < (int)puVar9[-0x17]) {
      lVar10 = 0;
      lVar15 = *(long *)(puVar9 + -8);
      do {
        *(undefined4 *)(lVar15 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)puVar9[-0x17]);
    }
    puVar11 = *(undefined4 **)(puVar9 + -6);
    if (puVar11 != puVar9 + -4 && puVar11 != (undefined4 *)0x0) {
      _free(*(undefined8 *)(puVar11 + -2));
    }
    puVar9 = puVar20;
  } while (puVar20 != &uStack_170);
  return;
}



/* Entry: 10967086c; end: 1096708b3;  */

void FUN_10967086c(ulong param_1,long param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 auStack_1b0 [2];
  undefined4 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 auStack_190 [2];
  undefined1 *puStack_188;
  undefined8 uStack_180;
  undefined4 auStack_178 [2];
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_15c;
  undefined8 auStack_154 [4];
  long alStack_130 [6];
  undefined1 auStack_100 [96];
  
  if (param_1 < 0x71c71c71c71c71d) {
    __Znwm(param_1 * 0x24);
    return;
  }
  func_0x000104c4f740();
  puVar8 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (puVar8 < (undefined *)0x555555555555556) {
    __Znwm((long)puVar8 * 0x30);
    return;
  }
  func_0x000104c4f740();
  lVar10 = 0;
  do {
    *(undefined4 *)((long)&uStack_160 + lVar10) = 0x42ff0000;
    *(undefined8 *)((long)auStack_154 + lVar10) = 0;
    *(undefined8 *)((long)&uStack_15c + lVar10) = 0;
    *(undefined8 *)((long)auStack_154 + lVar10 + 0x10) = 0;
    *(undefined8 *)((long)auStack_154 + lVar10 + 8) = 0;
    *(undefined8 *)(&stack0xfffffffffffffecc + lVar10) = 0;
    *(undefined8 *)((long)auStack_154 + lVar10 + 0x18) = 0;
    puVar18 = (undefined8 *)((long)alStack_130 + lVar10 + 0x20);
    *puVar18 = 0;
    *(undefined8 *)((long)alStack_130 + lVar10 + 8) = 0;
    *(undefined8 *)((long)alStack_130 + lVar10) = 0;
    *(long *)((long)alStack_130 + lVar10 + 0x10) = (long)auStack_154 + lVar10 + -4;
    *(undefined8 **)((long)alStack_130 + lVar10 + 0x18) = puVar18;
    lVar15 = lVar10 + 0x60;
    *(undefined8 *)((long)alStack_130 + lVar10 + 0x28) = 0;
    lVar10 = lVar15;
  } while (lVar15 != 0xc0);
  uStack_168 = 0;
  auStack_178[0] = 0x1010000;
  auStack_190[0] = 0x2010000;
  uStack_180 = 0;
  puVar9 = auStack_178;
  puStack_188 = auStack_100;
  puStack_170 = (undefined8 *)puVar8;
  FUN_109a3f338(puVar9,auStack_190,4);
  uStack_1a0 = 0;
  uStack_198 = 0x3ff0000000000000;
  auStack_178[0] = 0xc1020006;
  puStack_170 = &uStack_198;
  uStack_168 = 0x100000001;
  uStack_180 = 0;
  auStack_190[0] = 0x1010000;
  auStack_1b0[0] = 0x2010000;
  puStack_1a8 = &uStack_160;
  puStack_188 = auStack_100;
  FUN_109a91d90();
  FUN_109a293c4(auStack_178,auStack_190,auStack_1b0,puVar9,0xffffffff,&PTR_DAT_1132e8c10,0,0);
  auStack_178[0] = 0x2010000;
  uStack_168 = 0;
  puStack_170 = (undefined8 *)param_3;
  FUN_109a3e010(&uStack_160,2,auStack_178);
  if ((bRam00000001137347c0 & 1) == 0) {
    iVar14 = 0x137347c0;
    ___cxa_guard_acquire();
    if (iVar14 != 0) {
      uRam00000001137347d8 = 0x404040404040404;
      uRam00000001137347d0 = 0x404040404040404;
      ___cxa_guard_release(0x1137347c0);
    }
  }
  if ((bRam00000001137347c8 & 1) == 0) {
    iVar14 = 0x137347c8;
    ___cxa_guard_acquire();
    if (iVar14 != 0) {
      uRam00000001137347e8 = 0x101010101010101;
      uRam00000001137347e0 = 0x101010101010101;
      ___cxa_guard_release(0x1137347c8);
    }
  }
  uVar7 = uRam00000001137347e8;
  uVar6 = uRam00000001137347e0;
  uVar5 = uRam00000001137347d8;
  uVar4 = uRam00000001137347d0;
  iVar14 = *(int *)(param_2 + 8);
  if (0 < iVar14) {
    lVar10 = 0;
    uVar12 = (ulong)*(uint *)(param_2 + 0xc);
    do {
      if (0 < (int)uVar12) {
        lVar15 = 0;
        lVar13 = *(long *)(param_2 + 0x10);
        lVar17 = **(long **)(param_2 + 0x48);
        lVar16 = *(long *)(param_4 + 0x10);
        lVar19 = **(long **)(param_4 + 0x48);
        do {
          puVar18 = (undefined8 *)(lVar13 + lVar17 * lVar10 + lVar15);
          uVar22 = puVar18[1];
          uVar21 = *puVar18;
          puVar18 = (undefined8 *)(lVar16 + lVar19 * lVar10 + lVar15);
          puVar18[1] = CONCAT17(-((char)((ulong)uVar22 >> 0x38) == (char)((ulong)uVar5 >> 0x38)) &
                                (byte)((ulong)uVar7 >> 0x38),
                                CONCAT16(-((char)((ulong)uVar22 >> 0x30) ==
                                          (char)((ulong)uVar5 >> 0x30)) &
                                         (byte)((ulong)uVar7 >> 0x30),
                                         CONCAT15(-((char)((ulong)uVar22 >> 0x28) ==
                                                   (char)((ulong)uVar5 >> 0x28)) &
                                                  (byte)((ulong)uVar7 >> 0x28),
                                                  CONCAT14(-((char)((ulong)uVar22 >> 0x20) ==
                                                            (char)((ulong)uVar5 >> 0x20)) &
                                                           (byte)((ulong)uVar7 >> 0x20),
                                                           CONCAT13(-((char)((ulong)uVar22 >> 0x18)
                                                                     == (char)((ulong)uVar5 >> 0x18)
                                                                     ) & (byte)((ulong)uVar7 >> 0x18
                                                                               ),
                                                                    CONCAT12(-((char)((ulong)uVar22
                                                                                     >> 0x10) ==
                                                                              (char)((ulong)uVar5 >>
                                                                                    0x10)) &
                                                                             (byte)((ulong)uVar7 >>
                                                                                   0x10),
                                                                             CONCAT11(-((char)((
                                                  ulong)uVar22 >> 8) == (char)((ulong)uVar5 >> 8)) &
                                                  (byte)((ulong)uVar7 >> 8),
                                                  -((char)uVar22 == (char)uVar5) & (byte)uVar7))))))
                               );
          *puVar18 = CONCAT17(-((char)((ulong)uVar21 >> 0x38) == (char)((ulong)uVar4 >> 0x38)) &
                              (byte)((ulong)uVar6 >> 0x38),
                              CONCAT16(-((char)((ulong)uVar21 >> 0x30) ==
                                        (char)((ulong)uVar4 >> 0x30)) & (byte)((ulong)uVar6 >> 0x30)
                                       ,CONCAT15(-((char)((ulong)uVar21 >> 0x28) ==
                                                  (char)((ulong)uVar4 >> 0x28)) &
                                                 (byte)((ulong)uVar6 >> 0x28),
                                                 CONCAT14(-((char)((ulong)uVar21 >> 0x20) ==
                                                           (char)((ulong)uVar4 >> 0x20)) &
                                                          (byte)((ulong)uVar6 >> 0x20),
                                                          CONCAT13(-((char)((ulong)uVar21 >> 0x18)
                                                                    == (char)((ulong)uVar4 >> 0x18))
                                                                   & (byte)((ulong)uVar6 >> 0x18),
                                                                   CONCAT12(-((char)((ulong)uVar21
                                                                                    >> 0x10) ==
                                                                             (char)((ulong)uVar4 >>
                                                                                   0x10)) &
                                                                            (byte)((ulong)uVar6 >>
                                                                                  0x10),
                                                                            CONCAT11(-((char)((ulong
                                                  )uVar21 >> 8) == (char)((ulong)uVar4 >> 8)) &
                                                  (byte)((ulong)uVar6 >> 8),
                                                  -((char)uVar21 == (char)uVar4) & (byte)uVar6))))))
                             );
          lVar15 = lVar15 + 0x10;
          uVar12 = (ulong)*(int *)(param_2 + 0xc);
        } while (lVar15 < (long)uVar12);
        iVar14 = *(int *)(param_2 + 8);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar14);
  }
  puVar9 = (undefined4 *)&stack0xffffffffffffff60;
  do {
    puVar20 = puVar9 + -0x18;
    if (*(long *)(puVar9 + -10) != 0) {
      piVar1 = (int *)(*(long *)(puVar9 + -10) + 0x14);
      do {
        iVar14 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar14 + -1 == 0) {
        func_0x000109a848d4(puVar20);
      }
    }
    *(undefined8 *)(puVar9 + -10) = 0;
    *(undefined8 *)(puVar9 + -0x12) = 0;
    *(undefined8 *)(puVar9 + -0x14) = 0;
    *(undefined8 *)(puVar9 + -0xe) = 0;
    *(undefined8 *)(puVar9 + -0x10) = 0;
    if (0 < (int)puVar9[-0x17]) {
      lVar10 = 0;
      lVar15 = *(long *)(puVar9 + -8);
      do {
        *(undefined4 *)(lVar15 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)puVar9[-0x17]);
    }
    puVar11 = *(undefined4 **)(puVar9 + -6);
    if (puVar11 != puVar9 + -4 && puVar11 != (undefined4 *)0x0) {
      _free(*(undefined8 *)(puVar11 + -2));
    }
    puVar9 = puVar20;
  } while (puVar20 != &uStack_160);
  return;
}



/* Entry: 1096708b4; end: 1096708c7;  */

void FUN_1096708b4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 auStack_190 [2];
  undefined4 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 auStack_170 [2];
  undefined1 *puStack_168;
  undefined8 uStack_160;
  undefined4 auStack_158 [2];
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  undefined8 auStack_134 [4];
  long alStack_110 [6];
  undefined1 auStack_e0 [96];
  
  puVar8 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (puVar8 < (undefined *)0x555555555555556) {
    __Znwm((long)puVar8 * 0x30);
    return;
  }
  func_0x000104c4f740();
  lVar10 = 0;
  do {
    *(undefined4 *)((long)&uStack_140 + lVar10) = 0x42ff0000;
    *(undefined8 *)((long)auStack_134 + lVar10) = 0;
    *(undefined8 *)((long)&uStack_13c + lVar10) = 0;
    *(undefined8 *)((long)auStack_134 + lVar10 + 0x10) = 0;
    *(undefined8 *)((long)auStack_134 + lVar10 + 8) = 0;
    *(undefined8 *)(&stack0xfffffffffffffeec + lVar10) = 0;
    *(undefined8 *)((long)auStack_134 + lVar10 + 0x18) = 0;
    puVar18 = (undefined8 *)((long)alStack_110 + lVar10 + 0x20);
    *puVar18 = 0;
    *(undefined8 *)((long)alStack_110 + lVar10 + 8) = 0;
    *(undefined8 *)((long)alStack_110 + lVar10) = 0;
    *(long *)((long)alStack_110 + lVar10 + 0x10) = (long)auStack_134 + lVar10 + -4;
    *(undefined8 **)((long)alStack_110 + lVar10 + 0x18) = puVar18;
    lVar15 = lVar10 + 0x60;
    *(undefined8 *)((long)alStack_110 + lVar10 + 0x28) = 0;
    lVar10 = lVar15;
  } while (lVar15 != 0xc0);
  uStack_148 = 0;
  auStack_158[0] = 0x1010000;
  auStack_170[0] = 0x2010000;
  uStack_160 = 0;
  puVar9 = auStack_158;
  puStack_168 = auStack_e0;
  puStack_150 = (undefined8 *)puVar8;
  FUN_109a3f338(puVar9,auStack_170,4);
  uStack_180 = 0;
  uStack_178 = 0x3ff0000000000000;
  auStack_158[0] = 0xc1020006;
  puStack_150 = &uStack_178;
  uStack_148 = 0x100000001;
  uStack_160 = 0;
  auStack_170[0] = 0x1010000;
  auStack_190[0] = 0x2010000;
  puStack_188 = &uStack_140;
  puStack_168 = auStack_e0;
  FUN_109a91d90();
  FUN_109a293c4(auStack_158,auStack_170,auStack_190,puVar9,0xffffffff,&PTR_DAT_1132e8c10,0,0);
  auStack_158[0] = 0x2010000;
  uStack_148 = 0;
  puStack_150 = (undefined8 *)param_3;
  FUN_109a3e010(&uStack_140,2,auStack_158);
  if ((bRam00000001137347c0 & 1) == 0) {
    iVar14 = 0x137347c0;
    ___cxa_guard_acquire();
    if (iVar14 != 0) {
      uRam00000001137347d8 = 0x404040404040404;
      uRam00000001137347d0 = 0x404040404040404;
      ___cxa_guard_release(0x1137347c0);
    }
  }
  if ((bRam00000001137347c8 & 1) == 0) {
    iVar14 = 0x137347c8;
    ___cxa_guard_acquire();
    if (iVar14 != 0) {
      uRam00000001137347e8 = 0x101010101010101;
      uRam00000001137347e0 = 0x101010101010101;
      ___cxa_guard_release(0x1137347c8);
    }
  }
  uVar7 = uRam00000001137347e8;
  uVar6 = uRam00000001137347e0;
  uVar5 = uRam00000001137347d8;
  uVar4 = uRam00000001137347d0;
  iVar14 = *(int *)(param_2 + 8);
  if (0 < iVar14) {
    lVar10 = 0;
    uVar12 = (ulong)*(uint *)(param_2 + 0xc);
    do {
      if (0 < (int)uVar12) {
        lVar15 = 0;
        lVar13 = *(long *)(param_2 + 0x10);
        lVar17 = **(long **)(param_2 + 0x48);
        lVar16 = *(long *)(param_4 + 0x10);
        lVar19 = **(long **)(param_4 + 0x48);
        do {
          puVar18 = (undefined8 *)(lVar13 + lVar17 * lVar10 + lVar15);
          uVar22 = puVar18[1];
          uVar21 = *puVar18;
          puVar18 = (undefined8 *)(lVar16 + lVar19 * lVar10 + lVar15);
          puVar18[1] = CONCAT17(-((char)((ulong)uVar22 >> 0x38) == (char)((ulong)uVar5 >> 0x38)) &
                                (byte)((ulong)uVar7 >> 0x38),
                                CONCAT16(-((char)((ulong)uVar22 >> 0x30) ==
                                          (char)((ulong)uVar5 >> 0x30)) &
                                         (byte)((ulong)uVar7 >> 0x30),
                                         CONCAT15(-((char)((ulong)uVar22 >> 0x28) ==
                                                   (char)((ulong)uVar5 >> 0x28)) &
                                                  (byte)((ulong)uVar7 >> 0x28),
                                                  CONCAT14(-((char)((ulong)uVar22 >> 0x20) ==
                                                            (char)((ulong)uVar5 >> 0x20)) &
                                                           (byte)((ulong)uVar7 >> 0x20),
                                                           CONCAT13(-((char)((ulong)uVar22 >> 0x18)
                                                                     == (char)((ulong)uVar5 >> 0x18)
                                                                     ) & (byte)((ulong)uVar7 >> 0x18
                                                                               ),
                                                                    CONCAT12(-((char)((ulong)uVar22
                                                                                     >> 0x10) ==
                                                                              (char)((ulong)uVar5 >>
                                                                                    0x10)) &
                                                                             (byte)((ulong)uVar7 >>
                                                                                   0x10),
                                                                             CONCAT11(-((char)((
                                                  ulong)uVar22 >> 8) == (char)((ulong)uVar5 >> 8)) &
                                                  (byte)((ulong)uVar7 >> 8),
                                                  -((char)uVar22 == (char)uVar5) & (byte)uVar7))))))
                               );
          *puVar18 = CONCAT17(-((char)((ulong)uVar21 >> 0x38) == (char)((ulong)uVar4 >> 0x38)) &
                              (byte)((ulong)uVar6 >> 0x38),
                              CONCAT16(-((char)((ulong)uVar21 >> 0x30) ==
                                        (char)((ulong)uVar4 >> 0x30)) & (byte)((ulong)uVar6 >> 0x30)
                                       ,CONCAT15(-((char)((ulong)uVar21 >> 0x28) ==
                                                  (char)((ulong)uVar4 >> 0x28)) &
                                                 (byte)((ulong)uVar6 >> 0x28),
                                                 CONCAT14(-((char)((ulong)uVar21 >> 0x20) ==
                                                           (char)((ulong)uVar4 >> 0x20)) &
                                                          (byte)((ulong)uVar6 >> 0x20),
                                                          CONCAT13(-((char)((ulong)uVar21 >> 0x18)
                                                                    == (char)((ulong)uVar4 >> 0x18))
                                                                   & (byte)((ulong)uVar6 >> 0x18),
                                                                   CONCAT12(-((char)((ulong)uVar21
                                                                                    >> 0x10) ==
                                                                             (char)((ulong)uVar4 >>
                                                                                   0x10)) &
                                                                            (byte)((ulong)uVar6 >>
                                                                                  0x10),
                                                                            CONCAT11(-((char)((ulong
                                                  )uVar21 >> 8) == (char)((ulong)uVar4 >> 8)) &
                                                  (byte)((ulong)uVar6 >> 8),
                                                  -((char)uVar21 == (char)uVar4) & (byte)uVar6))))))
                             );
          lVar15 = lVar15 + 0x10;
          uVar12 = (ulong)*(int *)(param_2 + 0xc);
        } while (lVar15 < (long)uVar12);
        iVar14 = *(int *)(param_2 + 8);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar14);
  }
  puVar9 = (undefined4 *)&stack0xffffffffffffff80;
  do {
    puVar20 = puVar9 + -0x18;
    if (*(long *)(puVar9 + -10) != 0) {
      piVar1 = (int *)(*(long *)(puVar9 + -10) + 0x14);
      do {
        iVar14 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar14 + -1 == 0) {
        func_0x000109a848d4(puVar20);
      }
    }
    *(undefined8 *)(puVar9 + -10) = 0;
    *(undefined8 *)(puVar9 + -0x12) = 0;
    *(undefined8 *)(puVar9 + -0x14) = 0;
    *(undefined8 *)(puVar9 + -0xe) = 0;
    *(undefined8 *)(puVar9 + -0x10) = 0;
    if (0 < (int)puVar9[-0x17]) {
      lVar10 = 0;
      lVar15 = *(long *)(puVar9 + -8);
      do {
        *(undefined4 *)(lVar15 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)puVar9[-0x17]);
    }
    puVar11 = *(undefined4 **)(puVar9 + -6);
    if (puVar11 != puVar9 + -4 && puVar11 != (undefined4 *)0x0) {
      _free(*(undefined8 *)(puVar11 + -2));
    }
    puVar9 = puVar20;
  } while (puVar20 != &uStack_140);
  return;
}



/* Entry: 1096708c8; end: 10967090b;  */

void FUN_1096708c8(ulong param_1,long param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 auStack_180 [2];
  undefined4 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 auStack_160 [2];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  undefined4 auStack_148 [2];
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined8 auStack_124 [4];
  long alStack_100 [6];
  undefined1 auStack_d0 [96];
  
  if (param_1 < 0x555555555555556) {
    __Znwm(param_1 * 0x30);
    return;
  }
  func_0x000104c4f740();
  lVar9 = 0;
  do {
    *(undefined4 *)((long)&uStack_130 + lVar9) = 0x42ff0000;
    *(undefined8 *)((long)auStack_124 + lVar9) = 0;
    *(undefined8 *)((long)&uStack_12c + lVar9) = 0;
    *(undefined8 *)((long)auStack_124 + lVar9 + 0x10) = 0;
    *(undefined8 *)((long)auStack_124 + lVar9 + 8) = 0;
    *(undefined8 *)(&stack0xfffffffffffffefc + lVar9) = 0;
    *(undefined8 *)((long)auStack_124 + lVar9 + 0x18) = 0;
    puVar17 = (undefined8 *)((long)alStack_100 + lVar9 + 0x20);
    *puVar17 = 0;
    *(undefined8 *)((long)alStack_100 + lVar9 + 8) = 0;
    *(undefined8 *)((long)alStack_100 + lVar9) = 0;
    *(long *)((long)alStack_100 + lVar9 + 0x10) = (long)auStack_124 + lVar9 + -4;
    *(undefined8 **)((long)alStack_100 + lVar9 + 0x18) = puVar17;
    lVar14 = lVar9 + 0x60;
    *(undefined8 *)((long)alStack_100 + lVar9 + 0x28) = 0;
    lVar9 = lVar14;
  } while (lVar14 != 0xc0);
  uStack_138 = 0;
  auStack_148[0] = 0x1010000;
  auStack_160[0] = 0x2010000;
  uStack_150 = 0;
  puVar8 = auStack_148;
  puStack_158 = auStack_d0;
  puStack_140 = (undefined8 *)param_1;
  FUN_109a3f338(puVar8,auStack_160,4);
  uStack_170 = 0;
  uStack_168 = 0x3ff0000000000000;
  auStack_148[0] = 0xc1020006;
  puStack_140 = &uStack_168;
  uStack_138 = 0x100000001;
  uStack_150 = 0;
  auStack_160[0] = 0x1010000;
  auStack_180[0] = 0x2010000;
  puStack_178 = &uStack_130;
  puStack_158 = auStack_d0;
  FUN_109a91d90();
  FUN_109a293c4(auStack_148,auStack_160,auStack_180,puVar8,0xffffffff,&PTR_DAT_1132e8c10,0,0);
  auStack_148[0] = 0x2010000;
  uStack_138 = 0;
  puStack_140 = (undefined8 *)param_3;
  FUN_109a3e010(&uStack_130,2,auStack_148);
  if ((bRam00000001137347c0 & 1) == 0) {
    iVar13 = 0x137347c0;
    ___cxa_guard_acquire();
    if (iVar13 != 0) {
      uRam00000001137347d8 = 0x404040404040404;
      uRam00000001137347d0 = 0x404040404040404;
      ___cxa_guard_release(0x1137347c0);
    }
  }
  if ((bRam00000001137347c8 & 1) == 0) {
    iVar13 = 0x137347c8;
    ___cxa_guard_acquire();
    if (iVar13 != 0) {
      uRam00000001137347e8 = 0x101010101010101;
      uRam00000001137347e0 = 0x101010101010101;
      ___cxa_guard_release(0x1137347c8);
    }
  }
  uVar7 = uRam00000001137347e8;
  uVar6 = uRam00000001137347e0;
  uVar5 = uRam00000001137347d8;
  uVar4 = uRam00000001137347d0;
  iVar13 = *(int *)(param_2 + 8);
  if (0 < iVar13) {
    lVar9 = 0;
    uVar11 = (ulong)*(uint *)(param_2 + 0xc);
    do {
      if (0 < (int)uVar11) {
        lVar14 = 0;
        lVar12 = *(long *)(param_2 + 0x10);
        lVar16 = **(long **)(param_2 + 0x48);
        lVar15 = *(long *)(param_4 + 0x10);
        lVar18 = **(long **)(param_4 + 0x48);
        do {
          puVar17 = (undefined8 *)(lVar12 + lVar16 * lVar9 + lVar14);
          uVar21 = puVar17[1];
          uVar20 = *puVar17;
          puVar17 = (undefined8 *)(lVar15 + lVar18 * lVar9 + lVar14);
          puVar17[1] = CONCAT17(-((char)((ulong)uVar21 >> 0x38) == (char)((ulong)uVar5 >> 0x38)) &
                                (byte)((ulong)uVar7 >> 0x38),
                                CONCAT16(-((char)((ulong)uVar21 >> 0x30) ==
                                          (char)((ulong)uVar5 >> 0x30)) &
                                         (byte)((ulong)uVar7 >> 0x30),
                                         CONCAT15(-((char)((ulong)uVar21 >> 0x28) ==
                                                   (char)((ulong)uVar5 >> 0x28)) &
                                                  (byte)((ulong)uVar7 >> 0x28),
                                                  CONCAT14(-((char)((ulong)uVar21 >> 0x20) ==
                                                            (char)((ulong)uVar5 >> 0x20)) &
                                                           (byte)((ulong)uVar7 >> 0x20),
                                                           CONCAT13(-((char)((ulong)uVar21 >> 0x18)
                                                                     == (char)((ulong)uVar5 >> 0x18)
                                                                     ) & (byte)((ulong)uVar7 >> 0x18
                                                                               ),
                                                                    CONCAT12(-((char)((ulong)uVar21
                                                                                     >> 0x10) ==
                                                                              (char)((ulong)uVar5 >>
                                                                                    0x10)) &
                                                                             (byte)((ulong)uVar7 >>
                                                                                   0x10),
                                                                             CONCAT11(-((char)((
                                                  ulong)uVar21 >> 8) == (char)((ulong)uVar5 >> 8)) &
                                                  (byte)((ulong)uVar7 >> 8),
                                                  -((char)uVar21 == (char)uVar5) & (byte)uVar7))))))
                               );
          *puVar17 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) == (char)((ulong)uVar4 >> 0x38)) &
                              (byte)((ulong)uVar6 >> 0x38),
                              CONCAT16(-((char)((ulong)uVar20 >> 0x30) ==
                                        (char)((ulong)uVar4 >> 0x30)) & (byte)((ulong)uVar6 >> 0x30)
                                       ,CONCAT15(-((char)((ulong)uVar20 >> 0x28) ==
                                                  (char)((ulong)uVar4 >> 0x28)) &
                                                 (byte)((ulong)uVar6 >> 0x28),
                                                 CONCAT14(-((char)((ulong)uVar20 >> 0x20) ==
                                                           (char)((ulong)uVar4 >> 0x20)) &
                                                          (byte)((ulong)uVar6 >> 0x20),
                                                          CONCAT13(-((char)((ulong)uVar20 >> 0x18)
                                                                    == (char)((ulong)uVar4 >> 0x18))
                                                                   & (byte)((ulong)uVar6 >> 0x18),
                                                                   CONCAT12(-((char)((ulong)uVar20
                                                                                    >> 0x10) ==
                                                                             (char)((ulong)uVar4 >>
                                                                                   0x10)) &
                                                                            (byte)((ulong)uVar6 >>
                                                                                  0x10),
                                                                            CONCAT11(-((char)((ulong
                                                  )uVar20 >> 8) == (char)((ulong)uVar4 >> 8)) &
                                                  (byte)((ulong)uVar6 >> 8),
                                                  -((char)uVar20 == (char)uVar4) & (byte)uVar6))))))
                             );
          lVar14 = lVar14 + 0x10;
          uVar11 = (ulong)*(int *)(param_2 + 0xc);
        } while (lVar14 < (long)uVar11);
        iVar13 = *(int *)(param_2 + 8);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar13);
  }
  puVar8 = (undefined4 *)&stack0xffffffffffffff90;
  do {
    puVar19 = puVar8 + -0x18;
    if (*(long *)(puVar8 + -10) != 0) {
      piVar1 = (int *)(*(long *)(puVar8 + -10) + 0x14);
      do {
        iVar13 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 + -1 == 0) {
        func_0x000109a848d4(puVar19);
      }
    }
    *(undefined8 *)(puVar8 + -10) = 0;
    *(undefined8 *)(puVar8 + -0x12) = 0;
    *(undefined8 *)(puVar8 + -0x14) = 0;
    *(undefined8 *)(puVar8 + -0xe) = 0;
    *(undefined8 *)(puVar8 + -0x10) = 0;
    if (0 < (int)puVar8[-0x17]) {
      lVar9 = 0;
      lVar14 = *(long *)(puVar8 + -8);
      do {
        *(undefined4 *)(lVar14 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)puVar8[-0x17]);
    }
    puVar10 = *(undefined4 **)(puVar8 + -6);
    if (puVar10 != puVar8 + -4 && puVar10 != (undefined4 *)0x0) {
      _free(*(undefined8 *)(puVar10 + -2));
    }
    puVar8 = puVar19;
  } while (puVar19 != &uStack_130);
  return;
}



/* Entry: 10967090c; end: 109670bdf;  */

void FUN_10967090c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 auStack_160 [2];
  undefined4 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 auStack_140 [2];
  undefined1 *puStack_138;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 auStack_104 [4];
  long alStack_e0 [6];
  undefined1 auStack_b0 [96];
  
  lVar9 = 0;
  do {
    *(undefined4 *)((long)&uStack_110 + lVar9) = 0x42ff0000;
    *(undefined8 *)((long)auStack_104 + lVar9) = 0;
    *(undefined8 *)((long)&uStack_10c + lVar9) = 0;
    *(undefined8 *)((long)auStack_104 + lVar9 + 0x10) = 0;
    *(undefined8 *)((long)auStack_104 + lVar9 + 8) = 0;
    *(undefined8 *)(&stack0xffffffffffffff1c + lVar9) = 0;
    *(undefined8 *)((long)auStack_104 + lVar9 + 0x18) = 0;
    puVar17 = (undefined8 *)((long)alStack_e0 + lVar9 + 0x20);
    *puVar17 = 0;
    *(undefined8 *)((long)alStack_e0 + lVar9 + 8) = 0;
    *(undefined8 *)((long)alStack_e0 + lVar9) = 0;
    *(long *)((long)alStack_e0 + lVar9 + 0x10) = (long)auStack_104 + lVar9 + -4;
    *(undefined8 **)((long)alStack_e0 + lVar9 + 0x18) = puVar17;
    lVar14 = lVar9 + 0x60;
    *(undefined8 *)((long)alStack_e0 + lVar9 + 0x28) = 0;
    lVar9 = lVar14;
  } while (lVar14 != 0xc0);
  uStack_118 = 0;
  auStack_128[0] = 0x1010000;
  auStack_140[0] = 0x2010000;
  uStack_130 = 0;
  puVar8 = auStack_128;
  puStack_138 = auStack_b0;
  puStack_120 = (undefined8 *)param_1;
  FUN_109a3f338(puVar8,auStack_140,4);
  uStack_150 = 0;
  uStack_148 = 0x3ff0000000000000;
  auStack_128[0] = 0xc1020006;
  puStack_120 = &uStack_148;
  uStack_118 = 0x100000001;
  uStack_130 = 0;
  auStack_140[0] = 0x1010000;
  auStack_160[0] = 0x2010000;
  puStack_158 = &uStack_110;
  puStack_138 = auStack_b0;
  FUN_109a91d90();
  FUN_109a293c4(auStack_128,auStack_140,auStack_160,puVar8,0xffffffff,&PTR_DAT_1132e8c10,0,0);
  auStack_128[0] = 0x2010000;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)param_3;
  FUN_109a3e010(&uStack_110,2,auStack_128);
  if ((bRam00000001137347c0 & 1) == 0) {
    iVar13 = 0x137347c0;
    ___cxa_guard_acquire();
    if (iVar13 != 0) {
      uRam00000001137347d8 = 0x404040404040404;
      uRam00000001137347d0 = 0x404040404040404;
      ___cxa_guard_release(0x1137347c0);
    }
  }
  if ((bRam00000001137347c8 & 1) == 0) {
    iVar13 = 0x137347c8;
    ___cxa_guard_acquire();
    if (iVar13 != 0) {
      uRam00000001137347e8 = 0x101010101010101;
      uRam00000001137347e0 = 0x101010101010101;
      ___cxa_guard_release(0x1137347c8);
    }
  }
  uVar7 = uRam00000001137347e8;
  uVar6 = uRam00000001137347e0;
  uVar5 = uRam00000001137347d8;
  uVar4 = uRam00000001137347d0;
  iVar13 = *(int *)(param_2 + 8);
  if (0 < iVar13) {
    lVar9 = 0;
    uVar11 = (ulong)*(uint *)(param_2 + 0xc);
    do {
      if (0 < (int)uVar11) {
        lVar14 = 0;
        lVar12 = *(long *)(param_2 + 0x10);
        lVar16 = **(long **)(param_2 + 0x48);
        lVar15 = *(long *)(param_4 + 0x10);
        lVar18 = **(long **)(param_4 + 0x48);
        do {
          puVar17 = (undefined8 *)(lVar12 + lVar16 * lVar9 + lVar14);
          uVar21 = puVar17[1];
          uVar20 = *puVar17;
          puVar17 = (undefined8 *)(lVar15 + lVar18 * lVar9 + lVar14);
          puVar17[1] = CONCAT17(-((char)((ulong)uVar21 >> 0x38) == (char)((ulong)uVar5 >> 0x38)) &
                                (byte)((ulong)uVar7 >> 0x38),
                                CONCAT16(-((char)((ulong)uVar21 >> 0x30) ==
                                          (char)((ulong)uVar5 >> 0x30)) &
                                         (byte)((ulong)uVar7 >> 0x30),
                                         CONCAT15(-((char)((ulong)uVar21 >> 0x28) ==
                                                   (char)((ulong)uVar5 >> 0x28)) &
                                                  (byte)((ulong)uVar7 >> 0x28),
                                                  CONCAT14(-((char)((ulong)uVar21 >> 0x20) ==
                                                            (char)((ulong)uVar5 >> 0x20)) &
                                                           (byte)((ulong)uVar7 >> 0x20),
                                                           CONCAT13(-((char)((ulong)uVar21 >> 0x18)
                                                                     == (char)((ulong)uVar5 >> 0x18)
                                                                     ) & (byte)((ulong)uVar7 >> 0x18
                                                                               ),
                                                                    CONCAT12(-((char)((ulong)uVar21
                                                                                     >> 0x10) ==
                                                                              (char)((ulong)uVar5 >>
                                                                                    0x10)) &
                                                                             (byte)((ulong)uVar7 >>
                                                                                   0x10),
                                                                             CONCAT11(-((char)((
                                                  ulong)uVar21 >> 8) == (char)((ulong)uVar5 >> 8)) &
                                                  (byte)((ulong)uVar7 >> 8),
                                                  -((char)uVar21 == (char)uVar5) & (byte)uVar7))))))
                               );
          *puVar17 = CONCAT17(-((char)((ulong)uVar20 >> 0x38) == (char)((ulong)uVar4 >> 0x38)) &
                              (byte)((ulong)uVar6 >> 0x38),
                              CONCAT16(-((char)((ulong)uVar20 >> 0x30) ==
                                        (char)((ulong)uVar4 >> 0x30)) & (byte)((ulong)uVar6 >> 0x30)
                                       ,CONCAT15(-((char)((ulong)uVar20 >> 0x28) ==
                                                  (char)((ulong)uVar4 >> 0x28)) &
                                                 (byte)((ulong)uVar6 >> 0x28),
                                                 CONCAT14(-((char)((ulong)uVar20 >> 0x20) ==
                                                           (char)((ulong)uVar4 >> 0x20)) &
                                                          (byte)((ulong)uVar6 >> 0x20),
                                                          CONCAT13(-((char)((ulong)uVar20 >> 0x18)
                                                                    == (char)((ulong)uVar4 >> 0x18))
                                                                   & (byte)((ulong)uVar6 >> 0x18),
                                                                   CONCAT12(-((char)((ulong)uVar20
                                                                                    >> 0x10) ==
                                                                             (char)((ulong)uVar4 >>
                                                                                   0x10)) &
                                                                            (byte)((ulong)uVar6 >>
                                                                                  0x10),
                                                                            CONCAT11(-((char)((ulong
                                                  )uVar20 >> 8) == (char)((ulong)uVar4 >> 8)) &
                                                  (byte)((ulong)uVar6 >> 8),
                                                  -((char)uVar20 == (char)uVar4) & (byte)uVar6))))))
                             );
          lVar14 = lVar14 + 0x10;
          uVar11 = (ulong)*(int *)(param_2 + 0xc);
        } while (lVar14 < (long)uVar11);
        iVar13 = *(int *)(param_2 + 8);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar13);
  }
  puVar8 = (undefined4 *)&stack0xffffffffffffffb0;
  do {
    puVar19 = puVar8 + -0x18;
    if (*(long *)(puVar8 + -10) != 0) {
      piVar1 = (int *)(*(long *)(puVar8 + -10) + 0x14);
      do {
        iVar13 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 + -1 == 0) {
        func_0x000109a848d4(puVar19);
      }
    }
    *(undefined8 *)(puVar8 + -10) = 0;
    *(undefined8 *)(puVar8 + -0x12) = 0;
    *(undefined8 *)(puVar8 + -0x14) = 0;
    *(undefined8 *)(puVar8 + -0xe) = 0;
    *(undefined8 *)(puVar8 + -0x10) = 0;
    if (0 < (int)puVar8[-0x17]) {
      lVar9 = 0;
      lVar14 = *(long *)(puVar8 + -8);
      do {
        *(undefined4 *)(lVar14 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)puVar8[-0x17]);
    }
    puVar10 = *(undefined4 **)(puVar8 + -6);
    if (puVar10 != puVar8 + -4 && puVar10 != (undefined4 *)0x0) {
      _free(*(undefined8 *)(puVar10 + -2));
    }
    puVar8 = puVar19;
  } while (puVar19 != &uStack_110);
  return;
}



/* Entry: 109670be0; end: 109670c97;  */

long FUN_109670be0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = param_1 + 0xc0;
  do {
    lVar7 = lVar8 + -0x60;
    if (*(long *)(lVar8 + -0x28) != 0) {
      piVar1 = (int *)(*(long *)(lVar8 + -0x28) + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(lVar7);
      }
    }
    *(undefined8 *)(lVar8 + -0x28) = 0;
    *(undefined8 *)(lVar8 + -0x48) = 0;
    *(undefined8 *)(lVar8 + -0x50) = 0;
    *(undefined8 *)(lVar8 + -0x38) = 0;
    *(undefined8 *)(lVar8 + -0x40) = 0;
    if (0 < *(int *)(lVar8 + -0x5c)) {
      lVar5 = 0;
      lVar6 = *(long *)(lVar8 + -0x20);
      do {
        *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(lVar8 + -0x5c));
    }
    lVar5 = *(long *)(lVar8 + -0x18);
    if (lVar5 != lVar8 + -0x10 && lVar5 != 0) {
      _free(*(undefined8 *)(lVar5 + -8));
    }
    lVar8 = lVar7;
  } while (lVar7 != param_1);
  return param_1;
}



/* Entry: 109670c98; end: 109670d47;  */

void FUN_109670c98(void)

{
  int iVar1;
  
  if ((bRam000000011382a470 & 1) == 0) {
    iVar1 = 0x1382a470;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuRam000000011382a450 = &PTR_FUN_110b00948;
      pcRam000000011382a458 = FUN_109671074;
      uRam000000011382a468 = 0x11382a450;
      ___cxa_atexit(FUN_109671078,0x11382a450,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x11382a470);
      return;
    }
  }
  return;
}



/* Entry: 109670d48; end: 109670e03;  */

void FUN_109670d48(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  FUN_109670c98();
  lVar2 = 0x11382a450;
  func_0x000109670d0c(0x11382a450,plVar1,&UNK_10f57b914);
  if (lVar2 != 0) {
    _fseek();
    lVar3 = lVar2;
    _ftell(lVar2);
    _fseek(lVar2,0,0);
    FUN_109246310(param_1,lVar3);
    _fread(*param_1,lVar3,1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__fclose_11034c270)(lVar2);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 109670e04; end: 109671073;  */

void FUN_109670e04(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 *puStack_c0;
  ulong uStack_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined8 auStack_60 [2];
  
  *(undefined4 *)param_1 = 0x42ff0000;
  piVar12 = (int *)((long)param_1 + 4);
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  piVar12[0] = 0;
  piVar12[1] = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  puVar10 = param_1 + 10;
  *puVar10 = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = puVar10;
  param_1[0xb] = 0;
  puStack_c0 = (undefined4 *)0x0;
  uStack_b8 = 0;
  uVar11 = (ulong)*(char *)((long)param_2 + 0x17);
  if ((long)uVar11 < 0) {
    uVar11 = param_2[1];
    if (uVar11 == 0) goto LAB_109670eb0;
  }
  else if (*(char *)((long)param_2 + 0x17) == '\0') goto LAB_109670eb0;
  puVar6 = (undefined4 *)((uVar11 & 0xfffffffffffffffc) + 8);
  func_0x000107c2ae8c();
  puStack_c0 = puVar6 + 1;
  *puVar6 = 1;
  *(undefined1 *)((long)puStack_c0 + uVar11) = 0;
  plVar2 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar2 = param_2;
  }
  uStack_b8 = uVar11;
  _memcpy(puStack_c0,plVar2,uVar11);
LAB_109670eb0:
  FUN_109b7e470(&uStack_b0,&puStack_c0,param_3);
  if (param_1[7] != 0) {
    piVar1 = (int *)(param_1[7] + 0x14);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  if (0 < *(int *)((long)param_1 + 4)) {
    lVar7 = 0;
    lVar8 = param_1[8];
    do {
      *(undefined4 *)(lVar8 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *piVar12);
  }
  param_1[1] = uStack_a8;
  *param_1 = CONCAT44(iStack_ac,uStack_b0);
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  puVar9 = (undefined8 *)param_1[9];
  if (puVar9 != puVar10) {
    if (puVar9 != (undefined8 *)0x0) {
      _free(puVar9[-1]);
    }
    param_1[8] = param_1 + 1;
    param_1[9] = puVar10;
    puVar9 = puVar10;
  }
  puVar10 = (undefined8 *)((ulong)&uStack_b0 | 4);
  if (iStack_ac < 3) {
    *puVar9 = *puStack_68;
    puVar9[1] = puStack_68[1];
    uStack_b0 = 0x42ff0000;
    puVar10[1] = 0;
    *puVar10 = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
    puVar10[5] = 0;
    puVar10[4] = 0;
    *(undefined8 *)((long)puVar10 + 0x34) = 0;
    *(undefined8 *)((long)puVar10 + 0x2c) = 0;
    if (puStack_68 != auStack_60) {
      _free(puStack_68[-1]);
    }
  }
  else {
    param_1[8] = uStack_70;
    param_1[9] = puStack_68;
    puStack_68 = auStack_60;
    uStack_b0 = 0x42ff0000;
    puVar10[1] = 0;
    *puVar10 = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
    puVar10[5] = 0;
    puVar10[4] = 0;
    *(undefined8 *)((long)puVar10 + 0x34) = 0;
    *(undefined8 *)((long)puVar10 + 0x2c) = 0;
    uStack_70 = (ulong)&uStack_b0 | 8;
  }
  puVar6 = puStack_c0;
  puStack_c0 = (undefined4 *)0x0;
  uStack_b8 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    piVar12 = puVar6 + -1;
    do {
      iVar3 = *piVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      _free(*(undefined8 *)(puVar6 + -3));
    }
  }
  return;
}



/* Entry: 109671074; end: 109671077;  */

void FUN_109671074(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fopen_11034c2e8)();
  return;
}



/* Entry: 109671078; end: 1096710bf;  */

long * FUN_109671078(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1096710c0; end: 1096710c7;  */

void FUN_1096710c0(void)

{
  return;
}



/* Entry: 1096710c8; end: 1096710fb;  */

void FUN_1096710c8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110b00948;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1096710fc; end: 109671127;  */

void FUN_1096710fc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110b00948;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109671128; end: 109671163;  */

long FUN_109671128(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b009c8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109671164; end: 10967116f;  */

undefined ** FUN_109671164(void)

{
  return &PTR_DAT_110b009c8;
}



/* Entry: 109671170; end: 109671347;  */

undefined8 * FUN_109671170(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined4 uStack_3c;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined4 uStack_24;
  
  FUN_10926dc5c(auStack_58,param_1 + 1,&puStack_30);
  if (plRam00000001132dfb50 == (long *)0x0) {
    if (plRam00000001132dfb28 == (long *)0x0) {
      puVar1 = PTR___ZNSt3__14coutE_110346740;
      if (puRam00000001132dfb60 != (undefined *)0x0) {
        puVar1 = puRam00000001132dfb60;
      }
      FUN_1092b4db8(puVar1,&DAT_10f568545,2);
      FUN_1092b4db8();
      FUN_1092b4db8();
    }
    else {
      (**(code **)(*plRam00000001132dfb28 + 0x30))(plRam00000001132dfb28,auStack_58);
    }
  }
  else {
    if (*(int *)(param_1 + 0x21) - 1U < 3) {
      uStack_24 = *(undefined4 *)(&UNK_10dfd934c + (ulong)(*(int *)(param_1 + 0x21) - 1U) * 4);
    }
    else {
      uStack_24 = 8;
    }
    puStack_30 = param_1 + 0x22;
    if (*(char *)((long)param_1 + 0x127) < '\0') {
      puStack_30 = (undefined8 *)*puStack_30;
    }
    puStack_38 = param_1 + 0x25;
    if (*(char *)((long)param_1 + 0x13f) < '\0') {
      puStack_38 = (undefined8 *)*puStack_38;
    }
    uStack_3c = *(undefined4 *)(param_1 + 0x28);
    (**(code **)(*plRam00000001132dfb50 + 0x30))
              (plRam00000001132dfb50,&uStack_24,&puStack_30,&puStack_38,&uStack_3c,auStack_58);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  if (*(char *)((long)param_1 + 0x13f) < '\0') {
    __ZdlPv(param_1[0x25]);
  }
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    __ZdlPv(param_1[0x22]);
  }
  param_1[0xe] = &PTR_DAT_11088d708;
  *param_1 = &PTR_SUB_11088d6e0;
  param_1[1] = &PTR_DAT_11088d7b0;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  param_1[1] = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
  __ZNSt3__16localeD1Ev(param_1 + 2);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(param_1,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(param_1 + 0xe);
  return param_1;
}



/* Entry: 109671348; end: 109671617;  */

/* WARNING: Removing unreachable block (ram,0x0001096714e8) */

long * FUN_109671348(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                    undefined4 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined1 **ppuVar3;
  code *pcVar4;
  long *plVar5;
  long ***ppplVar6;
  long ****pppplVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 *puStack_a0;
  ulong uStack_98;
  byte bStack_89;
  long **pplStack_88;
  long *plStack_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long ***ppplStack_48;
  undefined *puStack_40;
  byte bStack_31;
  
  uVar9 = (uint)param_2;
  *(uint *)(param_1 + 0x21) = uVar9;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x22,param_3);
  plVar5 = param_1 + 0x25;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar5,param_4);
  *(undefined4 *)(param_1 + 0x28) = param_5;
  __ZNSt3__16chrono12system_clock3nowEv();
  ppplVar6 = (long ***)&plStack_80;
  plStack_80 = plVar5;
  __ZNSt3__16chrono12system_clock9to_time_tERKNS0_10time_pointIS1_NS0_8durationIxNS_5ratioILl1ELl1000000EEEEEEE
            ();
  pppplVar7 = (long ****)&pplStack_88;
  pplStack_88 = (long **)ppplVar6;
  _localtime();
  puStack_40 = &UNK_10f57b917;
  plVar5 = param_1;
  ppplStack_48 = (long ***)pppplVar7;
  FUN_109671618(param_1,&ppplStack_48);
  FUN_1092b4db8();
  auStack_60[0] = 0x30;
  FUN_1092bf390();
  *(undefined8 *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 0x18) = 3;
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx();
  plVar5 = param_1;
  FUN_1092b4db8(param_1," ",1);
  if (8 < uVar9) {
    uVar8 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt3__19to_stringEi(auStack_78,param_2);
    FUN_10928a5e0(auStack_60,&UNK_10f57b93c,auStack_78);
    FUN_109259240(&ppplStack_48,auStack_60,&UNK_10f57b947);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (uVar8,&ppplStack_48);
    ___cxa_throw(uVar8,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8)
    ;
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109671578);
    (*pcVar4)();
  }
  func_0x000107c31940(&puStack_a0,(&PTR_s_NONE_110b009e8)[param_2 & 0xffffffff]);
  ppuVar3 = (undefined1 **)puStack_a0;
  if (-1 < (char)bStack_89) {
    uStack_98 = (ulong)bStack_89;
    ppuVar3 = &puStack_a0;
  }
  FUN_1092b4db8(plVar5,ppuVar3,uStack_98);
  FUN_1092b4db8();
  if ((char)bStack_89 < '\0') {
    __ZdlPv(puStack_a0);
  }
  iVar1 = 0;
  if (3 < uVar9) {
    iVar1 = uVar9 - 4;
  }
  func_0x000104c59120(&ppplStack_48,iVar1,9);
  puVar2 = puStack_40;
  pppplVar7 = (long ****)ppplStack_48;
  if (-1 < (char)bStack_31) {
    puVar2 = (undefined *)(ulong)bStack_31;
    pppplVar7 = &ppplStack_48;
  }
  FUN_1092b4db8(param_1,pppplVar7,puVar2);
  return param_1;
}



/* Entry: 109671618; end: 1096717af;  */

long * FUN_109671618(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  char acStack_68 [16];
  long lStack_58;
  
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(acStack_68,param_1);
  if (acStack_68[0] == '\x01') {
    __ZNKSt3__18ios_base6getlocEv(&lStack_58,(long)param_1 + *(long *)(*param_1 + -0x18));
    plVar4 = &lStack_58;
    __ZNKSt3__16locale9use_facetERNS0_2idE
              (plVar4,
               PTR___ZNSt3__18time_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE2idE_110346908
              );
    __ZNSt3__16localeD1Ev(&lStack_58);
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar7 = *(undefined8 *)(lVar1 + 0x28);
    iVar8 = *(int *)(lVar1 + 0x90);
    if (iVar8 == -1) {
      __ZNKSt3__18ios_base6getlocEv(&lStack_58,lVar1);
      plVar5 = &lStack_58;
      __ZNKSt3__16locale9use_facetERNS0_2idE(plVar5,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (**(code **)(*plVar5 + 0x38))();
      __ZNSt3__16localeD1Ev(&lStack_58);
      iVar8 = (int)plVar5;
      *(int *)(lVar1 + 0x90) = iVar8;
    }
    uVar2 = *param_2;
    lVar3 = param_2[1];
    lVar6 = lVar3;
    _strlen(lVar3);
    __ZNKSt3__18time_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE3putES4_RNS_8ios_baseEcPK2tmPKcSC_
              (plVar4,uVar7,lVar1,(int)(char)iVar8,uVar2,lVar3,lVar3 + lVar6);
    if (plVar4 == (long *)0x0) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      __ZNSt3__18ios_base5clearEj(lVar1,*(uint *)(lVar1 + 0x20) | 1);
    }
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(acStack_68);
  return param_1;
}



/* Entry: 1096717b0; end: 1096721d3;  */

void FUN_1096717b0(long *param_1,long *param_2,long *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined8 *puVar2;
  long lVar3;
  double *pdVar4;
  long lVar5;
  double *pdVar6;
  undefined2 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  bool bVar18;
  code *pcVar19;
  long *plVar20;
  bool bVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  unkbyte9 *pVar26;
  ulong uVar27;
  undefined8 *puVar28;
  long lVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  double *pdVar32;
  ulong uVar33;
  ulong uVar34;
  double *pdVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  undefined8 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar74;
  float fVar75;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined8 uVar85;
  float fVar86;
  double dVar87;
  float fVar88;
  double dVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar95;
  float fVar96;
  float fVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fStack_23c;
  float fStack_234;
  float fStack_20c;
  float fStack_204;
  float fStack_1f0;
  float fStack_1ec;
  float afStack_1e8 [4];
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1c0;
  float fStack_1b8;
  undefined1 auStack_1b4 [8];
  float afStack_1ac [7];
  undefined8 uStack_190;
  float fStack_188;
  undefined1 auStack_184 [8];
  float afStack_17c [7];
  undefined8 auStack_160 [2];
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 auStack_130 [9];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 uStack_d8;
  float fStack_d0;
  float afStack_cc [11];
  
  lVar22 = 0;
  lVar25 = 0;
  afStack_cc[7] = 0.0;
  afStack_cc[8] = 1.0;
  afStack_cc[5] = 0.0;
  afStack_cc[6] = 0.0;
  afStack_cc[3] = 0.0;
  afStack_cc[4] = 1.0;
  afStack_cc[1] = 0.0;
  afStack_cc[2] = 0.0;
  fStack_d0 = 0.0;
  afStack_cc[0] = 1.0;
  uStack_d8 = 0;
  fStack_e0 = 0.0;
  fStack_dc = 1.0;
  fStack_e8 = 0.0;
  fStack_e4 = 0.0;
  auStack_130[5] = 0x3f80000000000000;
  auStack_130[4] = 0;
  auStack_130[7] = 0x3f80000000000000;
  auStack_130[6] = 0;
  auStack_130[1] = 0x3f80000000000000;
  auStack_130[0] = 0;
  auStack_130[3] = 0x3f80000000000000;
  auStack_130[2] = 0;
  auStack_160[1] = 0x3f80000000000000;
  auStack_160[0] = 0;
  auStack_150._8_8_ = 0x3f80000000000000;
  auStack_150._0_8_ = 0;
  uStack_138 = 0x3f80000000000000;
  uStack_140 = 0;
  afStack_17c[1] = 0.0;
  afStack_17c[2] = 0.0;
  stack0xfffffffffffffe80 = 0;
  afStack_17c[5] = 0.0;
  afStack_17c[6] = 0.0;
  afStack_17c[3] = 0.0;
  afStack_17c[4] = 0.0;
  afStack_1ac[5] = 0.0;
  afStack_1ac[6] = 0.0;
  afStack_1ac[3] = 0.0;
  afStack_1ac[4] = 0.0;
  _fStack_188 = 0;
  uStack_190 = 0;
  _fStack_1b8 = 0;
  uStack_1c0 = 0;
  afStack_1ac[1] = 0.0;
  afStack_1ac[2] = 0.0;
  stack0xfffffffffffffe50 = 0;
  uStack_1d0 = 0;
  lVar3 = *param_2;
  lVar5 = param_2[1];
  puVar28 = (undefined8 *)(lVar5 + -0x98);
  lVar29 = *param_3;
  puVar30 = (undefined8 *)(lVar29 + 0x90);
  afStack_1e8[0] = 0.0;
  afStack_1e8[1] = 0.0;
  fStack_1f0 = 0.0;
  fStack_1ec = 0.0;
  uStack_1d8 = 0;
  afStack_1e8[2] = 0.0;
  afStack_1e8[3] = 0.0;
  do {
    uVar54 = *puVar28;
    *(undefined8 *)((long)&fStack_e0 + lVar25) = puVar28[1];
    *(undefined8 *)((long)&fStack_e8 + lVar25) = uVar54;
    uVar54 = puVar30[-2];
    *(undefined8 *)((long)auStack_130 + lVar25 + 8) = puVar30[-1];
    *(undefined8 *)((long)auStack_130 + lVar25) = uVar54;
    *(undefined8 *)((long)&uStack_190 + lVar22) = puVar28[2];
    *(undefined4 *)((long)&fStack_188 + lVar22) = *(undefined4 *)(puVar28 + 3);
    *(undefined8 *)((long)&uStack_1c0 + lVar22) = *puVar30;
    lVar25 = lVar25 + 0x10;
    *(undefined4 *)((long)&fStack_1b8 + lVar22) = *(undefined4 *)(puVar30 + 1);
    lVar22 = lVar22 + 0xc;
    puVar28 = puVar28 + 5;
    puVar30 = puVar30 + -5;
  } while (lVar25 != 0x40);
  lVar22 = 0;
  lVar25 = 0;
  fVar78 = fStack_e4;
  fVar88 = fStack_e0;
  fVar70 = fStack_e8;
  fVar75 = fStack_e0;
  uVar54 = auStack_130[0];
  uVar59 = auStack_130[1];
  fVar100 = (float)auStack_130[0];
  fVar52 = (float)((ulong)auStack_130[0] >> 0x20);
  fVar101 = (float)auStack_130[1];
  fVar96 = fStack_dc;
  do {
    auVar15._4_4_ = fVar52;
    auVar15._0_4_ = fVar100;
    auVar15._8_4_ = fVar101;
    auVar15._12_4_ = fVar101;
    auVar16._4_4_ = fVar52;
    auVar16._0_4_ = fVar100;
    auVar16._8_4_ = fVar101;
    auVar16._12_4_ = fVar101;
    auVar55 = NEON_ext(auVar15,auVar16,0xc,1);
    auVar72._0_4_ = fVar78 * fVar78;
    auVar72._4_4_ = fVar88 * fVar88;
    auVar72._8_4_ = fVar70 * fVar70;
    auVar72._12_4_ = fVar75 * fVar75;
    auVar73 = NEON_ext(auVar72,auVar72,4,1);
    fVar69 = auVar73._0_4_ + fVar78 * fVar78;
    fVar74 = auVar73._4_4_ + fVar96 * fVar96;
    fVar76 = fVar69 + fVar74;
    fVar69 = fVar96 / (fVar69 + fVar74);
    auVar65._0_4_ = -fVar78 / fVar76;
    auVar65._4_4_ = -fVar88 / fVar76;
    auVar65._8_4_ = -fVar70 / fVar76;
    auVar65._12_4_ = -fVar75 / fVar76;
    fVar96 = *(float *)((long)afStack_cc + lVar22);
    pauVar1 = (undefined1 (*) [12])((long)&uStack_d8 + lVar22);
    fVar74 = (float)*(undefined8 *)((long)&stack0xffffffffffffff30 + lVar22);
    fVar76 = (float)((ulong)*(undefined8 *)((long)&stack0xffffffffffffff30 + lVar22) >> 0x20);
    fVar78 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    fVar79 = -auVar65._0_4_;
    fVar81 = -auVar65._4_4_;
    fVar82 = -auVar65._8_4_;
    fVar83 = -auVar65._12_4_;
    auVar9._4_4_ = fVar81;
    auVar9._0_4_ = fVar79;
    auVar9._8_4_ = fVar82;
    auVar9._12_4_ = fVar83;
    auVar10._4_4_ = fVar81;
    auVar10._0_4_ = fVar79;
    auVar10._8_4_ = fVar82;
    auVar10._12_4_ = fVar83;
    auVar73 = NEON_ext(auVar9,auVar10,0xc,1);
    auVar93._12_4_ = fVar76;
    auVar93._0_12_ = *pauVar1;
    auVar94._12_4_ = fVar76;
    auVar94._0_12_ = *pauVar1;
    auVar93 = NEON_ext(auVar93,auVar94,0xc,1);
    auVar93 = NEON_ext(auVar65,auVar93,8,1);
    fVar88 = SUB124(*pauVar1,8);
    fVar70 = SUB124(*pauVar1,0);
    fVar75 = SUB124(*pauVar1,8);
    fVar102 = auVar93._0_4_ * fVar76 + (float)*(undefined8 *)*pauVar1 * fVar69 +
              fVar74 * auVar65._0_4_ + fVar78 * fVar81;
    fVar103 = auVar65._0_4_ * fVar76 + fVar78 * fVar69 + SUB124(*pauVar1,0) * auVar65._4_4_ +
              fVar88 * fVar82;
    fVar104 = auVar93._8_4_ * auVar65._4_4_ + fVar74 * fVar69 + SUB124(*pauVar1,4) * auVar65._8_4_ +
              fVar70 * auVar73._4_4_;
    fVar105 = auVar93._12_4_ * fVar82 + fVar76 * fVar69 + SUB124(*pauVar1,4) * fVar79 +
              fVar75 * fVar83;
    uVar99 = *(undefined8 *)((long)auStack_130 + lVar22 + 0x18);
    uVar98 = *(undefined8 *)((long)auStack_130 + lVar22 + 0x10);
    fVar69 = (float)((ulong)uVar59 >> 0x20);
    auVar66._4_4_ = fVar69;
    auVar66._0_4_ = fVar69;
    auVar66._8_4_ = fVar69;
    auVar66._12_4_ = fVar69;
    auVar17._4_4_ = fVar52;
    auVar17._0_4_ = fVar100;
    auVar17._8_4_ = fVar101;
    auVar17._12_4_ = fVar101;
    auVar73 = NEON_ext(auVar66,auVar17,4,1);
    fVar90 = (float)uVar99;
    fVar82 = (float)uVar98;
    fVar83 = (float)((ulong)uVar98 >> 0x20);
    fVar74 = (float)((ulong)uVar99 >> 0x20);
    fVar76 = fVar82 * fVar82;
    fVar79 = fVar83 * fVar83;
    auVar11._4_4_ = fVar79;
    auVar11._0_4_ = fVar76;
    auVar11._8_4_ = fVar90 * fVar90;
    auVar11._12_4_ = fVar74 * fVar74;
    auVar12._4_4_ = fVar79;
    auVar12._0_4_ = fVar76;
    auVar12._8_4_ = fVar90 * fVar90;
    auVar12._12_4_ = fVar74 * fVar74;
    auVar93 = NEON_ext(auVar11,auVar12,8,1);
    uVar85 = NEON_rev64(auVar93._0_8_,4);
    fVar76 = fVar76 + (float)uVar85;
    fVar79 = fVar79 + (float)((ulong)uVar85 >> 0x20);
    fVar81 = fVar76 + fVar79;
    fVar74 = fVar74 / (fVar76 + fVar79);
    auVar60._0_4_ = -fVar82 / fVar81;
    auVar60._4_4_ = -fVar83 / fVar81;
    auVar60._8_4_ = -fVar90 / fVar81;
    auVar60._12_4_ = -fVar90 / fVar81;
    fVar76 = -auVar60._0_4_;
    fVar79 = -auVar60._4_4_;
    fVar81 = -auVar60._12_4_;
    auVar13._4_4_ = fVar79;
    auVar13._0_4_ = fVar76;
    auVar13._8_4_ = -auVar60._8_4_;
    auVar13._12_4_ = fVar81;
    auVar14._4_4_ = fVar79;
    auVar14._0_4_ = fVar76;
    auVar14._8_4_ = -auVar60._8_4_;
    auVar14._12_4_ = fVar81;
    auVar93 = NEON_ext(auVar13,auVar14,4,1);
    auVar94 = NEON_rev64(auVar60,4);
    auVar61._0_4_ =
         auVar73._0_4_ * auVar60._0_4_ + (float)uVar54 * fVar74 + fVar101 * auVar94._0_4_ +
         fVar52 * auVar93._4_4_;
    auVar61._4_4_ =
         auVar73._4_4_ * auVar60._4_4_ + (float)((ulong)uVar54 >> 0x20) * fVar74 +
         fVar100 * auVar60._8_4_ + fVar101 * auVar93._12_4_;
    auVar61._8_4_ =
         auVar73._8_4_ * auVar60._8_4_ + (float)uVar59 * fVar74 + fVar52 * auVar94._4_4_ +
         auVar55._4_4_ * fVar79;
    auVar61._12_4_ = auVar73._12_4_ * fVar76 + fVar69 * fVar74 + fVar52 * fVar79 + fVar101 * fVar81;
    fVar100 = fVar102 * auVar61._0_4_;
    fVar52 = fVar103 * auVar61._4_4_;
    uVar36 = (undefined1)((uint)fVar52 >> 8);
    uVar37 = (undefined1)((uint)fVar52 >> 0x10);
    uVar38 = (undefined1)((uint)fVar52 >> 0x18);
    fVar101 = fVar104 * auVar61._8_4_;
    uVar41 = (undefined1)((uint)fVar101 >> 8);
    uVar39 = (undefined1)((uint)fVar101 >> 0x10);
    uVar42 = (undefined1)((uint)fVar101 >> 0x18);
    fVar69 = fVar105 * auVar61._12_4_;
    uVar40 = (undefined1)((uint)fVar69 >> 8);
    uVar43 = (undefined1)((uint)fVar69 >> 0x10);
    uVar44 = (undefined1)((uint)fVar69 >> 0x18);
    auVar55[4] = SUB41(fVar52,0);
    auVar55._0_4_ = fVar100;
    auVar55[5] = uVar36;
    auVar55[6] = uVar37;
    auVar55[7] = uVar38;
    auVar55[8] = SUB41(fVar101,0);
    auVar55[9] = uVar41;
    auVar55[10] = uVar39;
    auVar55[0xb] = uVar42;
    auVar55[0xc] = SUB41(fVar69,0);
    auVar55[0xd] = uVar40;
    auVar55[0xe] = uVar43;
    auVar55[0xf] = uVar44;
    auVar73[4] = SUB41(fVar52,0);
    auVar73._0_4_ = fVar100;
    auVar73[5] = uVar36;
    auVar73[6] = uVar37;
    auVar73[7] = uVar38;
    auVar73[8] = SUB41(fVar101,0);
    auVar73[9] = uVar41;
    auVar73[10] = uVar39;
    auVar73[0xb] = uVar42;
    auVar73[0xc] = SUB41(fVar69,0);
    auVar73[0xd] = uVar40;
    auVar73[0xe] = uVar43;
    auVar73[0xf] = uVar44;
    auVar55 = NEON_ext(auVar55,auVar73,8,1);
    uVar54 = NEON_rev64(auVar55._0_8_,4);
    fVar100 = fVar100 + (float)uVar54 + fVar52 + (float)((ulong)uVar54 >> 0x20);
    auVar56._0_4_ = -(uint)(fVar100 < 0.0);
    auVar56._4_4_ = auVar56._0_4_;
    auVar56._8_4_ = auVar56._0_4_;
    auVar56._12_4_ = auVar56._0_4_;
    auVar67._0_4_ = -auVar61._0_4_;
    auVar67._4_4_ = -auVar61._4_4_;
    auVar67._8_4_ = -auVar61._8_4_;
    auVar67._12_4_ = -auVar61._12_4_;
    auVar61 = auVar61 ^ (auVar61 ^ auVar67) & auVar56;
    fVar52 = -fVar100;
    uVar36 = SUB41(fVar52,0);
    uVar37 = (undefined1)((uint)fVar52 >> 8);
    uVar38 = (undefined1)((uint)fVar52 >> 0x10);
    uVar41 = (undefined1)((uint)fVar52 >> 0x18);
    if (0.0 <= fVar100) {
      uVar36 = SUB41(fVar100,0);
      uVar37 = (undefined1)((uint)fVar100 >> 8);
      uVar38 = (undefined1)((uint)fVar100 >> 0x10);
      uVar41 = (undefined1)((uint)fVar100 >> 0x18);
    }
    if ((float)CONCAT13(uVar41,CONCAT12(uVar38,CONCAT11(uVar37,uVar36))) == 0.9999999 ||
        (float)CONCAT13(uVar41,CONCAT12(uVar38,CONCAT11(uVar37,uVar36))) < 0.9999999) {
      _acosf();
      fVar100 = (float)CONCAT13(uVar41,CONCAT12(uVar38,CONCAT11(uVar37,uVar36))) * 0.5;
      uVar39 = SUB41(fVar100,0);
      uVar42 = (undefined1)((uint)fVar100 >> 8);
      uVar40 = (undefined1)((uint)fVar100 >> 0x10);
      uVar43 = (undefined1)((uint)fVar100 >> 0x18);
      _sinf();
      fVar100 = (float)CONCAT13(uVar43,CONCAT12(uVar40,CONCAT11(uVar42,uVar39)));
      fVar52 = (float)CONCAT13(uVar43,CONCAT12(uVar40,CONCAT11(uVar42,uVar39)));
      fVar101 = fVar102 * fVar100 + auVar61._0_4_ * fVar52;
      fVar69 = fVar103 * fVar100 + auVar61._4_4_ * fVar52;
      fVar74 = fVar104 * fVar100 + auVar61._8_4_ * fVar52;
      fVar100 = fVar105 * fVar100 + auVar61._12_4_ * fVar52;
      fStack_234 = (float)(CONCAT17((char)((uint)fVar100 >> 0x18),
                                    CONCAT16((char)((uint)fVar100 >> 0x10),
                                             CONCAT15((char)((uint)fVar100 >> 8),
                                                      CONCAT14(SUB41(fVar100,0),fVar74)))) >> 0x20);
      fStack_23c = (float)(CONCAT17((char)((uint)fVar69 >> 0x18),
                                    CONCAT16((char)((uint)fVar69 >> 0x10),
                                             CONCAT15((char)((uint)fVar69 >> 8),
                                                      CONCAT14(SUB41(fVar69,0),fVar101)))) >> 0x20);
      _sinf();
      uVar7 = CONCAT11(uVar37,uVar36);
      fVar101 = fVar101 / (float)CONCAT13(uVar41,CONCAT12(uVar38,uVar7));
      uVar36 = SUB41(fVar101,0);
      uVar37 = (undefined1)((uint)fVar101 >> 8);
      uVar39 = (undefined1)((uint)fVar101 >> 0x10);
      uVar42 = (undefined1)((uint)fVar101 >> 0x18);
      fStack_23c = fStack_23c / (float)CONCAT13(uVar41,CONCAT12(uVar38,uVar7));
      uVar40 = SUB41(fStack_23c,0);
      uVar43 = (undefined1)((uint)fStack_23c >> 8);
      uVar44 = (undefined1)((uint)fStack_23c >> 0x10);
      uVar45 = (undefined1)((uint)fStack_23c >> 0x18);
      fVar74 = fVar74 / (float)CONCAT13(uVar41,CONCAT12(uVar38,uVar7));
      uVar46 = SUB41(fVar74,0);
      uVar47 = (undefined1)((uint)fVar74 >> 8);
      uVar48 = (undefined1)((uint)fVar74 >> 0x10);
      uVar49 = (undefined1)((uint)fVar74 >> 0x18);
      fStack_234 = fStack_234 / (float)CONCAT13(uVar41,CONCAT12(uVar38,uVar7));
      uVar38 = SUB41(fStack_234,0);
      uVar41 = (undefined1)((uint)fStack_234 >> 8);
      uVar50 = (undefined1)((uint)fStack_234 >> 0x10);
      uVar51 = (undefined1)((uint)fStack_234 >> 0x18);
    }
    else {
      fVar100 = auVar61._0_4_ * 0.5 + fVar102 * 0.5;
      uVar36 = SUB41(fVar100,0);
      uVar37 = (undefined1)((uint)fVar100 >> 8);
      uVar39 = (undefined1)((uint)fVar100 >> 0x10);
      uVar42 = (undefined1)((uint)fVar100 >> 0x18);
      fVar100 = auVar61._4_4_ * 0.5 + fVar103 * 0.5;
      uVar40 = SUB41(fVar100,0);
      uVar43 = (undefined1)((uint)fVar100 >> 8);
      uVar44 = (undefined1)((uint)fVar100 >> 0x10);
      uVar45 = (undefined1)((uint)fVar100 >> 0x18);
      fVar100 = auVar61._8_4_ * 0.5 + fVar104 * 0.5;
      uVar46 = SUB41(fVar100,0);
      uVar47 = (undefined1)((uint)fVar100 >> 8);
      uVar48 = (undefined1)((uint)fVar100 >> 0x10);
      uVar49 = (undefined1)((uint)fVar100 >> 0x18);
      fVar100 = auVar61._12_4_ * 0.5 + fVar105 * 0.5;
      uVar38 = SUB41(fVar100,0);
      uVar41 = (undefined1)((uint)fVar100 >> 8);
      uVar50 = (undefined1)((uint)fVar100 >> 0x10);
      uVar51 = (undefined1)((uint)fVar100 >> 0x18);
    }
    *(ulong *)((long)auStack_160 + lVar22 + 8) =
         CONCAT17(uVar51,CONCAT16(uVar50,CONCAT15(uVar41,CONCAT14(uVar38,CONCAT13(uVar49,CONCAT12(
                                                  uVar48,CONCAT11(uVar47,uVar46)))))));
    *(ulong *)((long)auStack_160 + lVar22) =
         CONCAT17(uVar45,CONCAT16(uVar44,CONCAT15(uVar43,CONCAT14(uVar40,CONCAT13(uVar42,CONCAT12(
                                                  uVar39,CONCAT11(uVar37,uVar36)))))));
    *(ulong *)((long)&fStack_1f0 + lVar25) =
         CONCAT44(((float)((ulong)*(undefined8 *)(auStack_184 + lVar25) >> 0x20) -
                  (float)((ulong)*(undefined8 *)((long)&uStack_190 + lVar25) >> 0x20)) * 0.5 +
                  ((float)((ulong)*(undefined8 *)((long)&uStack_1c0 + lVar25) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(auStack_1b4 + lVar25) >> 0x20)) * 0.5,
                  ((float)*(undefined8 *)(auStack_184 + lVar25) -
                  (float)*(undefined8 *)((long)&uStack_190 + lVar25)) * 0.5 +
                  ((float)*(undefined8 *)((long)&uStack_1c0 + lVar25) -
                  (float)*(undefined8 *)(auStack_1b4 + lVar25)) * 0.5);
    *(float *)((long)afStack_1e8 + lVar25) =
         (*(float *)((long)afStack_17c + lVar25) - *(float *)((long)&fStack_188 + lVar25)) * 0.5 +
         (*(float *)((long)&fStack_1b8 + lVar25) - *(float *)((long)afStack_1ac + lVar25)) * 0.5;
    lVar25 = lVar25 + 0xc;
    lVar22 = lVar22 + 0x10;
    uVar54 = uVar98;
    uVar59 = uVar99;
    fVar100 = fVar82;
    fVar52 = fVar83;
    fVar101 = fVar90;
  } while (lVar25 != 0x24);
  fVar78 = (float)auStack_160[1];
  fStack_204 = (float)((ulong)auStack_160[1] >> 0x20);
  fVar96 = (float)auStack_160[0];
  fStack_20c = (float)((ulong)auStack_160[0] >> 0x20);
  pVar26 = (unkbyte9 *)auStack_150;
  puVar30 = (undefined8 *)((ulong)&fStack_1f0 | 0xc);
  fVar88 = afStack_1e8[0];
  bVar21 = false;
  fVar70 = fStack_1f0;
  fVar75 = fStack_1ec;
  do {
    uVar54 = *(undefined8 *)((long)pVar26 + 8);
    uVar36 = (undefined1)((ulong)uVar54 >> 8);
    uVar37 = (undefined1)((ulong)uVar54 >> 0x10);
    uVar38 = (undefined1)((ulong)uVar54 >> 0x18);
    uVar41 = (undefined1)((ulong)uVar54 >> 0x20);
    uVar39 = (undefined1)((ulong)uVar54 >> 0x28);
    uVar42 = (undefined1)((ulong)uVar54 >> 0x30);
    uVar40 = (undefined1)((ulong)uVar54 >> 0x38);
    fVar100 = (float)*(undefined8 *)pVar26;
    fVar52 = (float)((ulong)*(undefined8 *)pVar26 >> 0x20);
    auVar57._0_8_ = CONCAT44(fStack_20c * fVar52,fVar96 * fVar100);
    auVar57._8_4_ = fVar78 * (float)uVar54;
    fVar101 = (float)((ulong)uVar54 >> 0x20);
    auVar57._12_4_ = fStack_204 * fVar101;
    uVar59 = NEON_rev64(auVar57._0_8_,4);
    auVar55 = NEON_ext(auVar57,auVar57,8,1);
    fVar69 = (float)uVar59 + auVar55._0_4_ + (float)((ulong)uVar59 >> 0x20) + auVar55._4_4_;
    auVar62._0_4_ = -(uint)(fVar69 < 0.0);
    auVar62._4_4_ = auVar62._0_4_;
    auVar62._8_4_ = auVar62._0_4_;
    auVar62._12_4_ = auVar62._0_4_;
    auVar68._0_4_ = -fVar100;
    auVar68._4_4_ = -fVar52;
    auVar68._8_4_ = -(float)uVar54;
    auVar68._12_4_ = -fVar101;
    auVar8[9] = uVar36;
    auVar8._0_9_ = *pVar26;
    auVar8[10] = uVar37;
    auVar8[0xb] = uVar38;
    auVar8[0xc] = uVar41;
    auVar8[0xd] = uVar39;
    auVar8[0xe] = uVar42;
    auVar8[0xf] = uVar40;
    auVar63[9] = uVar36;
    auVar63._0_9_ = *pVar26;
    auVar63[10] = uVar37;
    auVar63[0xb] = uVar38;
    auVar63[0xc] = uVar41;
    auVar63[0xd] = uVar39;
    auVar63[0xe] = uVar42;
    auVar63[0xf] = uVar40;
    auVar63 = auVar63 ^ (auVar8 ^ auVar68) & auVar62;
    fVar100 = -fVar69;
    uVar36 = SUB41(fVar100,0);
    uVar37 = (undefined1)((uint)fVar100 >> 8);
    uVar38 = (undefined1)((uint)fVar100 >> 0x10);
    uVar41 = (undefined1)((uint)fVar100 >> 0x18);
    if (0.0 <= fVar69) {
      uVar36 = SUB41(fVar69,0);
      uVar37 = (undefined1)((uint)fVar69 >> 8);
      uVar38 = (undefined1)((uint)fVar69 >> 0x10);
      uVar41 = (undefined1)((uint)fVar69 >> 0x18);
    }
    if ((float)CONCAT13(uVar41,CONCAT12(uVar38,CONCAT11(uVar37,uVar36))) == 0.9999999 ||
        (float)CONCAT13(uVar41,CONCAT12(uVar38,CONCAT11(uVar37,uVar36))) < 0.9999999) {
      _acosf();
      fVar100 = (float)CONCAT13(uVar41,CONCAT12(uVar38,CONCAT11(uVar37,uVar36))) * 0.5;
      uVar39 = SUB41(fVar100,0);
      uVar42 = (undefined1)((uint)fVar100 >> 8);
      uVar40 = (undefined1)((uint)fVar100 >> 0x10);
      uVar43 = (undefined1)((uint)fVar100 >> 0x18);
      _sinf();
      fVar100 = (float)CONCAT13(uVar43,CONCAT12(uVar40,CONCAT11(uVar42,uVar39)));
      fVar52 = (float)CONCAT13(uVar43,CONCAT12(uVar40,CONCAT11(uVar42,uVar39)));
      fVar96 = fVar96 * fVar100 + auVar63._0_4_ * fVar52;
      fVar101 = fStack_20c * fVar100 + auVar63._4_4_ * fVar52;
      fVar78 = fVar78 * fVar100 + auVar63._8_4_ * fVar52;
      fVar100 = fStack_204 * fVar100 + auVar63._12_4_ * fVar52;
      _sinf();
      fStack_20c = (float)(CONCAT17((char)((uint)fVar101 >> 0x18),
                                    CONCAT16((char)((uint)fVar101 >> 0x10),
                                             CONCAT15((char)((uint)fVar101 >> 8),
                                                      CONCAT14(SUB41(fVar101,0),fVar96)))) >> 0x20);
      fStack_204 = (float)(CONCAT17((char)((uint)fVar100 >> 0x18),
                                    CONCAT16((char)((uint)fVar100 >> 0x10),
                                             CONCAT15((char)((uint)fVar100 >> 8),
                                                      CONCAT14(SUB41(fVar100,0),fVar78)))) >> 0x20);
      uVar7 = CONCAT11(uVar37,uVar36);
      fVar96 = fVar96 / (float)CONCAT13(uVar41,CONCAT12(uVar38,uVar7));
      fStack_20c = fStack_20c / (float)CONCAT13(uVar41,CONCAT12(uVar38,uVar7));
      fVar78 = fVar78 / (float)CONCAT13(uVar41,CONCAT12(uVar38,uVar7));
      fStack_204 = fStack_204 / (float)CONCAT13(uVar41,CONCAT12(uVar38,uVar7));
    }
    else {
      fVar96 = auVar63._0_4_ * 0.5 + fVar96 * 0.5;
      fVar100 = auVar63._4_4_ * 0.5 + fStack_20c * 0.5;
      fVar78 = auVar63._8_4_ * 0.5 + fVar78 * 0.5;
      fVar52 = auVar63._12_4_ * 0.5 + fStack_204 * 0.5;
      fStack_204 = (float)(CONCAT17((char)((uint)fVar52 >> 0x18),
                                    CONCAT16((char)((uint)fVar52 >> 0x10),
                                             CONCAT15((char)((uint)fVar52 >> 8),
                                                      CONCAT14(SUB41(fVar52,0),fVar78)))) >> 0x20);
      fStack_20c = (float)(CONCAT17((char)((uint)fVar100 >> 0x18),
                                    CONCAT16((char)((uint)fVar100 >> 0x10),
                                             CONCAT15((char)((uint)fVar100 >> 8),
                                                      CONCAT14(SUB41(fVar100,0),fVar96)))) >> 0x20);
    }
    fVar70 = fVar70 * 0.5 + (float)*puVar30 * 0.5;
    fVar75 = fVar75 * 0.5 + (float)((ulong)*puVar30 >> 0x20) * 0.5;
    fVar88 = fVar88 * 0.5 + *(float *)(puVar30 + 1) * 0.5;
    bVar18 = !bVar21;
    pVar26 = (unkbyte9 *)&uStack_140;
    puVar30 = &uStack_1d8;
    bVar21 = true;
  } while (bVar18);
  fVar69 = *(float *)(lVar29 + 8);
  fVar100 = *(float *)(lVar29 + 0xc);
  fVar74 = *(float *)(lVar29 + 0x10);
  fVar52 = *(float *)(lVar29 + 0x14);
  fVar79 = *(float *)(lVar5 + -0x20);
  fVar82 = *(float *)(lVar5 + -0x1c);
  fVar81 = *(float *)(lVar5 + -0x18);
  fVar76 = *(float *)(lVar5 + -0x14);
  dVar87 = *(double *)(lVar5 + -0x28);
  fVar90 = *(float *)(lVar5 + -0x10);
  fVar101 = *(float *)(lVar5 + -0xc);
  fVar83 = *(float *)(lVar5 + -8);
  lVar25 = param_3[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10922636c(param_1,(lVar5 - lVar3 >> 3) * -0x3333333333333333 +
                        (lVar25 - lVar29 >> 3) * -0x3333333333333333);
  puVar30 = (undefined8 *)*param_2;
  puVar28 = (undefined8 *)param_2[1];
  uVar34 = (long)puVar28 - (long)puVar30;
  lVar25 = param_1[2];
  puVar31 = (undefined8 *)*param_1;
  if ((ulong)(lVar25 - (long)puVar31) < uVar34) {
    uVar33 = ((long)uVar34 >> 3) * -0x3333333333333333;
    if (puVar31 != (undefined8 *)0x0) {
      param_1[1] = (long)puVar31;
      __ZdlPv(puVar31);
      lVar25 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (0x666666666666666 < uVar33) {
      FUN_10922705c();
LAB_1096721ac:
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x1096721b0);
      (*pcVar19)();
    }
    uVar27 = (lVar25 >> 3) * -0x6666666666666666;
    if (uVar27 < uVar33 || uVar27 + ((long)uVar34 >> 3) * 0x3333333333333333 == 0) {
      uVar27 = uVar33;
    }
    if (0x333333333333332 < (ulong)((lVar25 >> 3) * -0x3333333333333333)) {
      uVar27 = 0x666666666666666;
    }
    FUN_1095c94ec(param_1,uVar27);
    puVar23 = (undefined8 *)param_1[1];
    for (; puVar30 != puVar28; puVar30 = puVar30 + 5) {
      uVar59 = puVar30[1];
      uVar54 = *puVar30;
      uVar85 = puVar30[2];
      uVar98 = puVar30[3];
      puVar23[4] = puVar30[4];
      puVar23[1] = uVar59;
      *puVar23 = uVar54;
      puVar23[3] = uVar98;
      puVar23[2] = uVar85;
      puVar23 = puVar23 + 5;
    }
  }
  else {
    puVar24 = (undefined8 *)param_1[1];
    uVar33 = (long)puVar24 - (long)puVar31;
    if (uVar33 < uVar34) {
      puVar2 = (undefined8 *)(uVar33 + (long)puVar30);
      puVar23 = puVar24;
      if (puVar24 != puVar31) {
        _memmove(puVar31,puVar30,uVar33 - 4);
        puVar24 = (undefined8 *)param_1[1];
        puVar23 = puVar24;
      }
      for (; puVar2 != puVar28; puVar2 = puVar2 + 5) {
        uVar59 = puVar2[1];
        uVar54 = *puVar2;
        uVar85 = puVar2[2];
        uVar98 = puVar2[3];
        puVar24[4] = puVar2[4];
        puVar24[1] = uVar59;
        *puVar24 = uVar54;
        puVar24[3] = uVar98;
        puVar24[2] = uVar85;
        puVar24 = puVar24 + 5;
        puVar23 = puVar23 + 5;
      }
    }
    else {
      if (puVar28 != puVar30) {
        _memmove(puVar31,puVar30,uVar34 - 4);
      }
      puVar23 = (undefined8 *)((long)puVar31 + uVar34);
    }
  }
  param_1[1] = (long)puVar23;
  pdVar32 = (double *)*param_3;
  pdVar6 = (double *)param_3[1];
  if (pdVar32 != pdVar6) {
    fVar103 = ((-(fVar96 * fVar79) + fVar76 * fStack_204) - fVar82 * fStack_20c) - fVar81 * fVar78;
    fVar104 = (fVar76 * fVar96 + fVar79 * fStack_204 + fVar81 * fStack_20c) - fVar82 * fVar78;
    fVar105 = (fVar76 * fStack_20c + fVar82 * fStack_204 + fVar79 * fVar78) - fVar96 * fVar81;
    fVar102 = fVar100 * fVar100 + fVar74 * fVar74 + fVar69 * fVar69 + fVar52 * fVar52;
    fVar106 = fVar52 / fVar102;
    fVar81 = (fVar76 * fVar78 + fVar81 * fStack_204 + fVar82 * fVar96) - fVar79 * fStack_20c;
    fVar82 = -fVar69 / fVar102;
    fVar107 = -fVar100 / fVar102;
    fVar102 = -fVar74 / fVar102;
    fVar76 = fVar103 * fVar103 + fVar104 * fVar104 + fVar105 * fVar105 + fVar81 * fVar81;
    fVar79 = fVar103 / fVar76;
    fVar96 = -fVar104 / fVar76;
    fVar78 = -fVar105 / fVar76;
    fVar76 = -fVar81 / fVar76;
    do {
      fVar86 = *(float *)(pdVar32 + 1);
      fVar53 = *(float *)((long)pdVar32 + 0xc);
      fVar58 = *(float *)(pdVar32 + 2);
      fVar64 = *(float *)((long)pdVar32 + 0x14);
      fVar71 = ((-(fVar86 * fVar82) + fVar106 * fVar64) - fVar107 * fVar53) - fVar102 * fVar58;
      fVar77 = (fVar106 * fVar86 + fVar82 * fVar64 + fVar102 * fVar53) - fVar107 * fVar58;
      fVar80 = (fVar106 * fVar53 + fVar107 * fVar64 + fVar82 * fVar58) - fVar102 * fVar86;
      fVar86 = (fVar106 * fVar58 + fVar102 * fVar64 + fVar107 * fVar86) - fVar82 * fVar53;
      fVar58 = *(float *)((long)pdVar32 + 0x1c);
      fVar53 = *(float *)(pdVar32 + 4);
      fVar64 = *(float *)(pdVar32 + 3);
      fVar84 = -(fVar58 * fVar74) + fVar53 * fVar100;
      fVar91 = -(fVar53 * fVar69) + fVar64 * fVar74;
      fVar95 = -(fVar64 * fVar100) + fVar58 * fVar69;
      fVar97 = fVar52 * fVar84 + -(fVar91 * fVar74) + fVar95 * fVar100;
      fVar92 = fVar52 * fVar91 + -(fVar95 * fVar69) + fVar84 * fVar74;
      fVar84 = fVar52 * fVar95 + -(fVar84 * fVar100) + fVar91 * fVar69;
      fVar64 = fVar64 + fVar97 + fVar97;
      fVar58 = fVar58 + fVar92 + fVar92;
      fVar53 = fVar53 + fVar84 + fVar84;
      fVar91 = ((-(fVar77 * fVar104) + fVar103 * fVar71) - fVar105 * fVar80) - fVar81 * fVar86;
      fVar92 = (fVar103 * fVar77 + fVar104 * fVar71 + fVar81 * fVar80) - fVar105 * fVar86;
      fVar95 = (fVar103 * fVar80 + fVar105 * fVar71 + fVar104 * fVar86) - fVar81 * fVar77;
      fVar97 = (fVar103 * fVar86 + fVar81 * fVar71 + fVar105 * fVar77) - fVar104 * fVar80;
      fVar86 = -(fVar58 * fVar76) + fVar53 * fVar78;
      fVar71 = -(fVar53 * fVar96) + fVar64 * fVar76;
      fVar80 = -(fVar64 * fVar78) + fVar58 * fVar96;
      fVar84 = fVar79 * fVar86 + -(fVar71 * fVar76) + fVar80 * fVar78;
      fVar77 = fVar79 * fVar71 + -(fVar80 * fVar96) + fVar86 * fVar76;
      fVar86 = fVar79 * fVar80 + -(fVar86 * fVar78) + fVar71 * fVar96;
      dVar89 = dVar87 + 0.03333333507180214 + *pdVar32;
      fVar64 = fVar70 + fVar90 + fVar64 + fVar84 + fVar84;
      fVar58 = fVar75 + fVar101 + fVar58 + fVar77 + fVar77;
      fVar86 = fVar88 + fVar83 + fVar53 + fVar86 + fVar86;
      pdVar4 = (double *)param_1[1];
      if (pdVar4 < (double *)param_1[2]) {
        *pdVar4 = dVar89;
        *(float *)(pdVar4 + 1) = fVar92;
        *(float *)((long)pdVar4 + 0xc) = fVar95;
        *(float *)(pdVar4 + 2) = fVar97;
        *(float *)((long)pdVar4 + 0x14) = fVar91;
        *(float *)(pdVar4 + 3) = fVar64;
        *(float *)((long)pdVar4 + 0x1c) = fVar58;
        pdVar35 = pdVar4 + 5;
        *(float *)(pdVar4 + 4) = fVar86;
      }
      else {
        lVar25 = (long)pdVar4 - *param_1;
        uVar34 = (lVar25 >> 3) * -0x3333333333333333 + 1;
        if (0x666666666666666 < uVar34) {
          FUN_10922705c();
          goto LAB_1096721ac;
        }
        lVar22 = param_1[2] - *param_1 >> 3;
        uVar33 = lVar22 * -0x6666666666666666;
        if (uVar33 < uVar34 || uVar33 - uVar34 == 0) {
          uVar33 = uVar34;
        }
        if (0x333333333333332 < (ulong)(lVar22 * -0x3333333333333333)) {
          uVar33 = 0x666666666666666;
        }
        plVar20 = param_1;
        FUN_109227070();
        pdVar4 = (double *)((long)plVar20 + lVar25);
        *pdVar4 = dVar89;
        *(float *)(pdVar4 + 1) = fVar92;
        *(float *)((long)pdVar4 + 0xc) = fVar95;
        *(float *)(pdVar4 + 2) = fVar97;
        *(float *)((long)pdVar4 + 0x14) = fVar91;
        *(float *)(pdVar4 + 3) = fVar64;
        *(float *)((long)pdVar4 + 0x1c) = fVar58;
        *(float *)(pdVar4 + 4) = fVar86;
        pdVar35 = pdVar4 + 5;
        lVar22 = (long)pdVar4 - (param_1[1] - *param_1);
        _memcpy(lVar22);
        lVar25 = *param_1;
        *param_1 = lVar22;
        param_1[1] = (long)pdVar35;
        param_1[2] = (long)(plVar20 + uVar33 * 5);
        if (lVar25 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)pdVar35;
      pdVar32 = pdVar32 + 5;
    } while (pdVar32 != pdVar6);
  }
  return;
}



/* Entry: 1096721d4; end: 10967225f;  */

void FUN_1096721d4(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  return;
}



/* Entry: 109672260; end: 109672397;  */

undefined4 *
FUN_109672260(undefined4 *param_1,uint param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  
  param_1[0x292] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x28f) = 0;
  *(undefined8 *)(param_1 + 0x23d) = 0;
  *(undefined8 *)(param_1 + 0x23b) = 0;
  *(undefined8 *)(param_1 + 0x241) = 0;
  *(undefined8 *)(param_1 + 0x23f) = 0;
  *(undefined8 *)(param_1 + 0x245) = 0;
  *(undefined8 *)(param_1 + 0x243) = 0;
  *(undefined8 *)(param_1 + 0x249) = 0;
  *(undefined8 *)(param_1 + 0x247) = 0;
  *(undefined8 *)(param_1 + 0x24d) = 0;
  *(undefined8 *)(param_1 + 0x24b) = 0;
  *(undefined8 *)(param_1 + 0x251) = 0;
  *(undefined8 *)(param_1 + 0x24f) = 0;
  *(undefined8 *)(param_1 + 0x255) = 0;
  *(undefined8 *)(param_1 + 0x253) = 0;
  *(undefined8 *)(param_1 + 0x259) = 0;
  *(undefined8 *)(param_1 + 599) = 0;
  *(undefined8 *)(param_1 + 0x25d) = 0;
  *(undefined8 *)(param_1 + 0x25b) = 0;
  *(undefined8 *)(param_1 + 0x261) = 0;
  *(undefined8 *)(param_1 + 0x25f) = 0;
  *(undefined8 *)(param_1 + 0x265) = 0;
  *(undefined8 *)(param_1 + 0x263) = 0;
  *(undefined8 *)(param_1 + 0x269) = 0;
  *(undefined8 *)(param_1 + 0x267) = 0;
  *(undefined8 *)(param_1 + 0x26d) = 0;
  *(undefined8 *)(param_1 + 0x26b) = 0;
  *(undefined8 *)(param_1 + 0x271) = 0;
  *(undefined8 *)(param_1 + 0x26f) = 0;
  *(undefined8 *)(param_1 + 0x275) = 0;
  *(undefined8 *)(param_1 + 0x273) = 0;
  *(undefined8 *)(param_1 + 0x279) = 0;
  *(undefined8 *)(param_1 + 0x277) = 0;
  *(undefined8 *)(param_1 + 0x27d) = 0;
  *(undefined8 *)(param_1 + 0x27b) = 0;
  *(undefined8 *)(param_1 + 0x281) = 0;
  *(undefined8 *)(param_1 + 0x27f) = 0;
  *(undefined8 *)(param_1 + 0x285) = 0;
  *(undefined8 *)(param_1 + 0x283) = 0;
  *(undefined8 *)(param_1 + 0x289) = 0;
  *(undefined8 *)(param_1 + 0x287) = 0;
  *(undefined8 *)(param_1 + 0x28d) = 0;
  *(undefined8 *)(param_1 + 0x28b) = 0;
  *param_1 = 0;
  uVar1 = param_2;
  if ((int)param_2 < 2) {
    uVar1 = 1;
  }
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  param_1[4] = uVar1;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 5) = param_3;
  *(undefined1 *)((long)param_1 + 0x15) = param_4;
  *(undefined1 *)((long)param_1 + 0x16) = param_5;
  *(undefined2 *)(param_1 + 0x255) = 0x100;
  param_1[0x284] = 0x40a9999a;
  param_1[0x23d] = param_2;
  *(undefined1 *)(param_1 + 0x23e) = param_3;
  *(undefined1 *)((long)param_1 + 0x8f9) = param_4;
  *(undefined1 *)((long)param_1 + 0x8fa) = param_5;
  lVar2 = 0x2a5250;
  __Znwm();
  FUN_1096739a0();
  *(long *)(param_1 + 6) = lVar2;
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    puVar4 = (undefined1 *)(*(long *)(lVar2 + 0x6f8) + 0xf4);
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 0x110;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  param_1[0x290] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}



/* Entry: 109672398; end: 1096723c7;  */

long FUN_109672398(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_109673b84();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096723c8; end: 10967249f;  */

void FUN_1096723c8(float param_1,uint *param_2,uint param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  param_2[0x254] = param_2[0x254] | 2;
  param_2[0x23f] = param_3;
  param_2[0x240] = (uint)*param_4;
  param_2[0x241] = (uint)param_4[1];
  param_2[0x242] = (uint)*param_5;
  param_2[0x243] = (uint)param_5[1];
  param_2[0x244] = (uint)param_1;
  param_2[1] = param_3;
  fVar2 = *param_4;
  if (((float)param_2[2] != fVar2) || ((float)param_2[3] != param_4[1])) {
    if (fVar2 * param_4[1] <= 921600.0) {
      param_2[2] = (uint)fVar2;
      fVar3 = param_4[1];
      param_2[3] = (uint)fVar3;
      FUN_109673bd4(*(undefined8 *)(param_2 + 6),(int)fVar2,(int)fVar3);
    }
    else {
      *param_2 = *param_2 | 0x10;
      *(ushort *)(param_2 + 0x255) = (ushort)param_2[0x255] | 0x800;
    }
  }
  pfVar1 = *(float **)(param_2 + 6);
  uVar4 = *(undefined8 *)(param_2 + 2);
  pfVar1[0x1c9] = param_1;
  pfVar1[0x1c8] = param_1;
  fVar2 = (float)uVar4;
  fVar6 = *param_5;
  fVar5 = param_5[1];
  *pfVar1 = param_1 * (2.0 / fVar2);
  fVar3 = (float)((ulong)uVar4 >> 0x20);
  pfVar1[3] = 0.0;
  pfVar1[4] = 0.0;
  pfVar1[1] = 0.0;
  pfVar1[2] = 0.0;
  pfVar1[5] = param_1 * (-2.0 / fVar3);
  pfVar1[6] = 0.0;
  pfVar1[7] = 0.0;
  *(ulong *)(pfVar1 + 8) = CONCAT44(((fVar5 + 1.0) * -2.0) / fVar3,(fVar6 * 2.0) / fVar2);
  pfVar1[0xc] = 0.0;
  pfVar1[0xd] = 0.0;
  pfVar1[10] = 1.0016013;
  pfVar1[0xb] = 1.0;
  pfVar1[0xe] = -0.04003202;
  pfVar1[0xf] = 0.0;
  return;
}



/* Entry: 1096724a0; end: 10967251f;  */

void FUN_1096724a0(float param_1,long param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pfVar1 = *(float **)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 8);
  pfVar1[0x1c9] = param_1;
  pfVar1[0x1c8] = param_1;
  fVar2 = (float)uVar3;
  fVar6 = *param_3;
  fVar5 = param_3[1];
  *pfVar1 = param_1 * (2.0 / fVar2);
  fVar4 = (float)((ulong)uVar3 >> 0x20);
  pfVar1[3] = 0.0;
  pfVar1[4] = 0.0;
  pfVar1[1] = 0.0;
  pfVar1[2] = 0.0;
  pfVar1[5] = param_1 * (-2.0 / fVar4);
  pfVar1[6] = 0.0;
  pfVar1[7] = 0.0;
  *(ulong *)(pfVar1 + 8) = CONCAT44(((fVar5 + 1.0) * -2.0) / fVar4,(fVar6 * 2.0) / fVar2);
  pfVar1[0xc] = 0.0;
  pfVar1[0xd] = 0.0;
  pfVar1[10] = 1.0016013;
  pfVar1[0xb] = 1.0;
  pfVar1[0xe] = -0.04003202;
  pfVar1[0xf] = 0.0;
  return;
}



/* Entry: 109672520; end: 1096727eb;  */

void FUN_109672520(float param_1,float param_2,float param_3,float param_4,long param_5,long param_6
                  ,undefined8 param_7,byte param_8,undefined4 param_9)

{
  ulong uVar1;
  long lVar2;
  double *pdVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  *(uint *)(param_5 + 0x950) = *(uint *)(param_5 + 0x950) | 1;
  *(float *)(param_5 + 0x93c) = param_1;
  *(char *)(param_5 + 0x976) = (char)param_7;
  *(byte *)(param_5 + 0x974) = param_8;
  *(undefined4 *)(param_5 + 0x940) = param_9;
  *(float *)(param_5 + 0x944) = param_2;
  *(float *)(param_5 + 0x948) = param_3;
  *(float *)(param_5 + 0x94c) = param_4;
  uVar1 = (ulong)*(uint *)(param_5 + 0x10);
  if (0 < (int)*(uint *)(param_5 + 0x10)) {
    puVar4 = (undefined4 *)(param_5 + 0x918);
    puVar5 = (undefined4 *)(param_6 + 4);
    do {
      puVar4[-1] = puVar5[-1];
      *puVar4 = *puVar5;
      uVar1 = uVar1 - 1;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 2;
    } while (uVar1 != 0);
  }
  lVar2 = *(long *)(param_5 + 0x18);
  pdVar3 = *(double **)(lVar2 + 0x40);
  if ((param_8 & 1) != 0) {
    *pdVar3 = (double)param_2;
    pdVar3[1] = (double)param_3;
    pdVar3[3] = (double)param_4;
  }
  *(undefined4 *)(lVar2 + 0x2a5224) = param_9;
  *(float *)(lVar2 + 0x2a5220) = param_1;
  pdVar3[2] = (double)param_1;
  func_0x000109672654(param_5,param_7);
  uVar1 = (ulong)*(uint *)(param_5 + 0x10);
  lVar2 = *(long *)(param_5 + 0x18);
  if (0 < (int)*(uint *)(param_5 + 0x10)) {
    puVar5 = *(undefined4 **)(lVar2 + 0x6f8);
    puVar4 = (undefined4 *)(param_6 + 4);
    do {
      if (*(char *)(puVar5 + 0x3d) == '\x01') {
        *puVar5 = puVar4[-1];
        puVar5[1] = *puVar4;
        *(undefined4 *)(param_5 + 0x804) = puVar4[-1];
        *(undefined4 *)(param_5 + 0x808) = *puVar4;
      }
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 0x44;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  *(undefined4 *)(lVar2 + 0x788) = 0;
  *(undefined1 *)(lVar2 + 0x744) = 0xff;
  *(uint *)(lVar2 + 0x820) = *(uint *)(lVar2 + 0x820) | 2;
  *(undefined1 *)(lVar2 + 0x51) = 1;
  *(undefined4 *)(param_5 + 0xa40) = 0;
  *(undefined8 *)(param_5 + 0x20) = 0;
  *(undefined2 *)(param_5 + 0x28) = 0;
  return;
}



/* Entry: 1096727ec; end: 109672873;  */

void FUN_1096727ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (0 < iVar2) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x6f8) + lVar4;
      if (*(char *)(lVar1 + 0xf4) == '\x01') {
        FUN_109672ab0(param_1,lVar3,lVar1,param_2,param_3);
        iVar2 = *(int *)(param_1 + 0x10);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x110;
    } while (lVar3 < iVar2);
  }
  return;
}



/* Entry: 109672874; end: 1096729fb;  */

void FUN_109672874(float param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  uint *param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10)

{
  uint *puVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  
  param_7[0x23b] = param_7[0x23b] + 1;
  lVar3 = *(long *)(param_7 + 6);
  puVar1 = param_7;
  __ZNSt3__16chrono12steady_clock3nowEv();
  param_7[0x23c] = (int)(((float)((long)puVar1 - *(long *)(lVar3 + 0x2a5228)) / 1e+06) * 1e+06);
  param_7[0x254] = param_7[0x254] | 4;
  param_7[599] = (uint)param_1;
  param_7[600] = param_2;
  param_7[0x259] = param_3;
  param_7[0x25a] = param_4;
  param_7[0x25b] = param_5;
  param_7[0x25c] = param_6;
  *(char *)((long)param_7 + 0x975) = (char)param_10;
  if (921600.0 < (float)param_7[2] * (float)param_7[3]) {
    *param_7 = *param_7 | 0x10;
    *(ushort *)(param_7 + 0x255) = (ushort)param_7[0x255] | 0x800;
    return;
  }
  *param_7 = 0;
  *(uint *)(*(long *)(param_7 + 6) + 0x820) = *(uint *)(*(long *)(param_7 + 6) + 0x820) & 0xfffffbff
  ;
  lVar3 = *(long *)(param_7 + 6);
  *(uint *)(lVar3 + 0x2a5230) = param_2;
  *(uint *)(lVar3 + 0x2a5238) = param_3;
  fVar4 = *(float *)(lVar3 + 0x2214);
  if (*(float *)(lVar3 + 0x2214) == 3.4028235e+38) {
    *(float *)(lVar3 + 0x2214) = param_1;
    fVar4 = param_1;
  }
  *(float *)(lVar3 + 0x2a5234) = param_1 - fVar4;
  *(undefined1 *)(lVar3 + 0x2a523c) = 1;
  FUN_1096729fc(param_7,param_8,param_9);
  FUN_109673c1c(*(undefined8 *)(param_7 + 6),0,*(undefined1 *)((long)param_7 + 0x16));
  if ((char)param_7[10] == '\x01') {
    func_0x000109672654(param_7,1);
    *(undefined1 *)(param_7 + 10) = 0;
  }
  if (*(char *)((long)param_7 + 0x29) == '\x01') {
    lVar3 = *(long *)(param_7 + 6);
    *(undefined4 *)(lVar3 + 0x788) = 0;
    *(undefined1 *)(lVar3 + 0x744) = 0xff;
    *(uint *)(lVar3 + 0x820) = *(uint *)(lVar3 + 0x820) & 0xfffffffd;
    *(undefined1 *)(lVar3 + 0x51) = 1;
    *(undefined1 *)((long)param_7 + 0x29) = 0;
  }
  if ((int)param_7[0x292] < 1) {
    uVar2 = (ulong)param_7[4];
    if (0 < (int)param_7[4]) {
      lVar3 = 0xf4;
      do {
        if (*(char *)(*(long *)(*(long *)(param_7 + 6) + 0x6f8) + lVar3) == '\x01') {
          FUN_109674068();
          FUN_109673110(param_7);
          FUN_1096727ec(param_7,param_10,1);
          *(uint *)(*(long *)(param_7 + 6) + 0x820) =
               *(uint *)(*(long *)(param_7 + 6) + 0x820) & 0xfffffffd;
          return;
        }
        lVar3 = lVar3 + 0x110;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  else {
    param_7[0x292] = param_7[0x292] - 1;
  }
  return;
}



/* Entry: 1096729fc; end: 109672aaf;  */

void FUN_1096729fc(long param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  iVar1 = (int)*(float *)(param_1 + 8);
  uVar3 = (uint)*(float *)(param_1 + 0xc);
  uVar4 = (ulong)uVar3;
  lVar2 = *(long *)(param_1 + 0x18);
  *(int *)(lVar2 + 0x818) = iVar1;
  *(uint *)(lVar2 + 0x81c) = uVar3;
  if (param_2 != 0) {
    if (param_3 == iVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(lVar2 + 0x2220,param_2,(long)(int)(param_3 * uVar3));
      return;
    }
    if (0 < (int)uVar3) {
      lVar2 = 0x2220;
      do {
        _memcpy(*(long *)(param_1 + 0x18) + lVar2,param_2,(long)iVar1);
        param_2 = param_2 + param_3;
        lVar2 = lVar2 + iVar1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}



/* Entry: 109672ab0; end: 10967310f;  */

void FUN_109672ab0(long param_1,int param_2,float *param_3,uint param_4,ulong param_5)

{
  uint *puVar1;
  long lVar2;
  double *pdVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  uint *puVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  uint auStack_168 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float afStack_e8 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar5 = param_3 + 0x16;
  FUN_109673174(&fStack_1a8,pfVar5);
  if (((uint)param_3[0x3b] & 1) == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x6f0);
    if ((*(int *)(lVar2 + 0xf88) == 1) && (*(int *)(lVar2 + (long)param_2 * 0xc + 8) != 0)) {
      *(undefined8 *)(param_3 + 4) = *(undefined8 *)(lVar2 + (long)param_2 * 0xc);
    }
    fVar11 = param_3[4];
    fVar12 = param_3[5];
    *param_3 = fVar11;
    param_3[1] = fVar12;
    param_3[0x3e] = 0.0;
    param_3[0x3f] = 0.0;
    fVar13 = 0.0;
    lVar2 = 0x100;
  }
  else {
    fVar11 = param_3[4] + param_3[0x3e];
    *param_3 = fVar11;
    fVar13 = param_3[5] + param_3[0x3f];
    lVar2 = 4;
    fVar12 = fVar13;
  }
  *(float *)((long)param_3 + lVar2) = fVar13;
  if (0 < (int)param_3[0x37]) {
    fVar11 = *(float *)(param_1 + 0x804);
    *param_3 = fVar11;
    fVar12 = *(float *)(param_1 + 0x808);
    param_3[1] = fVar12;
    param_3[0x37] = (float)((int)param_3[0x37] + -1);
  }
  lVar2 = *(long *)(param_1 + 0x18);
  fVar11 = (fVar11 - param_3[2]) / *(float *)(lVar2 + 0x720);
  fVar13 = (fVar12 - param_3[3]) / *(float *)(lVar2 + 0x724);
  fVar18 = SQRT(fVar13 * fVar13 + fVar11 * fVar11 + 1.0);
  fVar11 = fVar11 / fVar18;
  fVar13 = fVar13 / fVar18;
  fVar18 = 1.0 / fVar18;
  fVar12 = fVar13 * fStack_184 + fVar11 * fStack_188 + fVar18 * fStack_180;
  if ((fVar12 < 0.0) || (*(int *)(*(long *)(lVar2 + 0x6f0) + 0x4c) != 0)) {
    if (*(int *)(lVar2 + 0x2a5224) == 0) {
      if (((param_5 & 1) != 0) || (fVar14 = *(float *)(param_1 + 0x24), fVar14 == 0.0)) {
        fVar14 = *(float *)(*(long *)(lVar2 + 0x6f0) + 0xe60);
        *(float *)(param_1 + 0x24) = fVar14;
      }
      fVar14 = fVar14 * 0.01;
      if ((param_4 & 1) == 0) {
        lVar2 = 0xa0c;
        fVar16 = fVar14 / -fVar12;
      }
      else {
        pdVar3 = *(double **)(lVar2 + 0x40);
        dVar17 = pdVar3[3] + *pdVar3;
        dVar19 = dVar17 / (dVar17 + pdVar3[1]);
        pdVar3[4] = dVar19;
        dVar15 = pdVar3[2] + ((double)fVar14 - pdVar3[2]) * dVar19;
        pdVar3[2] = dVar15;
        pdVar3[3] = dVar17 * (1.0 - dVar19);
        fVar14 = (float)dVar15;
        fVar16 = fVar14 / -fVar12;
        lVar2 = 0xa0c;
      }
    }
    else {
      if (((param_5 & 1) != 0) || (fVar14 = *(float *)(param_1 + 0x20), fVar14 == 0.0)) {
        fVar14 = *(float *)(*(long *)(lVar2 + 0x6f0) + 0xe64);
        *(float *)(param_1 + 0x20) = fVar14;
      }
      fVar14 = fVar14 * 0.01;
      if (param_4 != 0) {
        pdVar3 = *(double **)(lVar2 + 0x40);
        dVar17 = pdVar3[3] + *pdVar3;
        dVar19 = dVar17 / (dVar17 + pdVar3[1]);
        pdVar3[4] = dVar19;
        dVar15 = pdVar3[2] + ((double)fVar14 - pdVar3[2]) * dVar19;
        pdVar3[2] = dVar15;
        pdVar3[3] = dVar17 * (1.0 - dVar19);
        fVar14 = (float)dVar15;
      }
      lVar2 = 0xa08;
      fVar16 = fVar14;
    }
    *(float *)(param_1 + lVar2) = fVar14;
    fVar14 = (fStack_1a4 * fVar13 + fVar11 * fStack_1a8 + fVar18 * fStack_1a0) * fVar16;
    fVar11 = (fStack_194 * fVar13 + fVar11 * fStack_198 + fVar18 * fStack_190) * fVar16;
    param_3[0x38] = fVar14;
    param_3[0x39] = fVar11;
    fVar12 = fVar12 * fVar16;
    param_3[0x3a] = fVar12;
  }
  else {
    fVar14 = param_3[0x38];
    fVar11 = param_3[0x39];
    fVar12 = param_3[0x3a];
  }
  *(ulong *)(param_3 + 0x24) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x24) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_3 + 0x1c) >> 0x20) * fVar11 +
                (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20) * fVar14 +
                (float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20) * fVar12,
                (float)*(undefined8 *)(param_3 + 0x24) +
                (float)*(undefined8 *)(param_3 + 0x1c) * fVar11 +
                (float)*(undefined8 *)(param_3 + 0x18) * fVar14 +
                (float)*(undefined8 *)(param_3 + 0x20) * fVar12);
  *(ulong *)(param_3 + 0x22) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x22) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_3 + 0x1a) >> 0x20) * fVar11 +
                (float)((ulong)*(undefined8 *)(param_3 + 0x16) >> 0x20) * fVar14 +
                (float)((ulong)*(undefined8 *)(param_3 + 0x1e) >> 0x20) * fVar12,
                (float)*(undefined8 *)(param_3 + 0x22) +
                (float)*(undefined8 *)(param_3 + 0x1a) * fVar11 +
                (float)*(undefined8 *)(param_3 + 0x16) * fVar14 +
                (float)*(undefined8 *)(param_3 + 0x1e) * fVar12);
  if (*(char *)(param_3 + 0x36) == '\x01') {
    param_3[0x28] = 0.0;
    param_3[0x29] = 0.0;
    param_3[0x2c] = 0.0;
    param_3[0x2d] = 0.0;
    param_3[0x2e] = 0.0;
    param_3[0x2f] = 0.0;
    param_3[0x30] = 1.0;
    param_3[0x33] = 0.0;
    param_3[0x34] = 0.0;
    param_3[0x31] = 0.0;
    param_3[0x32] = 0.0;
    param_3[0x35] = 1.0;
    fVar12 = SQRT(fVar11 * fVar11 + fVar14 * fVar14);
    fVar11 = fVar11 / fVar12;
    fVar12 = -fVar14 / fVar12;
    param_3[0x26] = fVar11;
    param_3[0x27] = fVar12;
    param_3[0x2a] = -fVar12;
    param_3[0x2b] = fVar11;
    *(undefined1 *)(param_3 + 0x36) = 0;
  }
  uVar4 = 0;
  pfVar6 = pfVar5;
  do {
    lVar2 = 0;
    pfVar8 = param_3 + 0x26;
    do {
      lVar10 = 0;
      fVar12 = 0.0;
      do {
        fVar12 = fVar12 + *(float *)((long)pfVar8 + lVar10) * pfVar6[lVar10];
        lVar10 = lVar10 + 4;
      } while (lVar10 != 0x10);
      *(float *)((long)&uStack_128 + (lVar2 << 2 | uVar4) * 4) = fVar12;
      lVar2 = lVar2 + 1;
      pfVar8 = pfVar8 + 4;
    } while (lVar2 != 4);
    uVar4 = uVar4 + 1;
    pfVar6 = pfVar6 + 1;
  } while (uVar4 != 4);
  *(undefined8 *)(param_3 + 0x18) = uStack_120;
  *(undefined8 *)pfVar5 = uStack_128;
  *(undefined8 *)(param_3 + 0x1c) = uStack_110;
  *(undefined8 *)(param_3 + 0x1a) = uStack_118;
  *(undefined8 *)(param_3 + 0x20) = uStack_100;
  *(undefined8 *)(param_3 + 0x1e) = uStack_108;
  *(undefined8 *)(param_3 + 0x24) = uStack_f0;
  *(undefined8 *)(param_3 + 0x22) = uStack_f8;
  fVar11 = param_3[0x42];
  fVar12 = param_3[0x43];
  FUN_109673884(param_3[0x41],0x3f800000,0,0,auStack_168);
  uVar4 = 0;
  pfVar6 = pfVar5;
  do {
    lVar2 = 0;
    puVar1 = auStack_168;
    do {
      lVar10 = 0;
      fVar13 = 0.0;
      do {
        fVar13 = fVar13 + *(float *)((long)puVar1 + lVar10) * pfVar6[lVar10];
        lVar10 = lVar10 + 4;
      } while (lVar10 != 0x10);
      afStack_e8[lVar2 << 2 | uVar4] = fVar13;
      lVar2 = lVar2 + 1;
      puVar1 = puVar1 + 4;
    } while (lVar2 != 4);
    uVar4 = uVar4 + 1;
    pfVar6 = pfVar6 + 1;
  } while (uVar4 != 4);
  *(ulong *)(param_3 + 0x18) = CONCAT44(afStack_e8[3],afStack_e8[2]);
  *(ulong *)pfVar5 = CONCAT44(afStack_e8[1],afStack_e8[0]);
  *(ulong *)(param_3 + 0x1c) = CONCAT44(afStack_e8[7],afStack_e8[6]);
  *(ulong *)(param_3 + 0x1a) = CONCAT44(afStack_e8[5],afStack_e8[4]);
  *(ulong *)(param_3 + 0x20) = CONCAT44(afStack_e8[0xb],afStack_e8[10]);
  *(ulong *)(param_3 + 0x1e) = CONCAT44(afStack_e8[9],afStack_e8[8]);
  *(ulong *)(param_3 + 0x24) = CONCAT44(afStack_e8[0xf],afStack_e8[0xe]);
  *(ulong *)(param_3 + 0x22) = CONCAT44(afStack_e8[0xd],afStack_e8[0xc]);
  FUN_109673884(fVar11,0,0,0x3f800000,auStack_168);
  uVar4 = 0;
  pfVar6 = pfVar5;
  do {
    lVar2 = 0;
    puVar1 = auStack_168;
    do {
      lVar10 = 0;
      fVar11 = 0.0;
      do {
        fVar11 = fVar11 + *(float *)((long)puVar1 + lVar10) * pfVar6[lVar10];
        lVar10 = lVar10 + 4;
      } while (lVar10 != 0x10);
      afStack_e8[lVar2 << 2 | uVar4] = fVar11;
      lVar2 = lVar2 + 1;
      puVar1 = puVar1 + 4;
    } while (lVar2 != 4);
    uVar4 = uVar4 + 1;
    pfVar6 = pfVar6 + 1;
  } while (uVar4 != 4);
  *(ulong *)(param_3 + 0x18) = CONCAT44(afStack_e8[3],afStack_e8[2]);
  *(ulong *)pfVar5 = CONCAT44(afStack_e8[1],afStack_e8[0]);
  *(ulong *)(param_3 + 0x1c) = CONCAT44(afStack_e8[7],afStack_e8[6]);
  *(ulong *)(param_3 + 0x1a) = CONCAT44(afStack_e8[5],afStack_e8[4]);
  *(ulong *)(param_3 + 0x20) = CONCAT44(afStack_e8[0xb],afStack_e8[10]);
  *(ulong *)(param_3 + 0x1e) = CONCAT44(afStack_e8[9],afStack_e8[8]);
  *(ulong *)(param_3 + 0x24) = CONCAT44(afStack_e8[0xf],afStack_e8[0xe]);
  *(ulong *)(param_3 + 0x22) = CONCAT44(afStack_e8[0xd],afStack_e8[0xc]);
  puVar1 = auStack_168;
  FUN_109673884(fVar12,0,0x3f800000,0);
  uVar4 = 0;
  pfVar6 = pfVar5;
  do {
    lVar2 = 0;
    puVar7 = auStack_168;
    do {
      lVar10 = 0;
      fVar12 = 0.0;
      do {
        fVar12 = fVar12 + *(float *)((long)puVar7 + lVar10) * pfVar6[lVar10];
        lVar10 = lVar10 + 4;
      } while (lVar10 != 0x10);
      afStack_e8[lVar2 << 2 | uVar4] = fVar12;
      lVar2 = lVar2 + 1;
      puVar7 = puVar7 + 4;
    } while (lVar2 != 4);
    uVar4 = uVar4 + 1;
    pfVar6 = pfVar6 + 1;
  } while (uVar4 != 4);
  uVar4 = 0;
  *(ulong *)(param_3 + 0x18) = CONCAT44(afStack_e8[3],afStack_e8[2]);
  *(ulong *)pfVar5 = CONCAT44(afStack_e8[1],afStack_e8[0]);
  *(ulong *)(param_3 + 0x1c) = CONCAT44(afStack_e8[7],afStack_e8[6]);
  *(ulong *)(param_3 + 0x1a) = CONCAT44(afStack_e8[5],afStack_e8[4]);
  *(ulong *)(param_3 + 0x20) = CONCAT44(afStack_e8[0xb],afStack_e8[10]);
  *(ulong *)(param_3 + 0x1e) = CONCAT44(afStack_e8[9],afStack_e8[8]);
  *(ulong *)(param_3 + 0x24) = CONCAT44(afStack_e8[0xf],afStack_e8[0xe]);
  *(ulong *)(param_3 + 0x22) = CONCAT44(afStack_e8[0xd],afStack_e8[0xc]);
  lVar2 = *(long *)(param_1 + 0x18);
  do {
    lVar10 = 0;
    pfVar6 = pfVar5;
    do {
      lVar9 = 0;
      fVar12 = 0.0;
      do {
        fVar12 = fVar12 + *(float *)((long)pfVar6 + lVar9) * *(float *)(lVar2 + lVar9 * 4);
        lVar9 = lVar9 + 4;
      } while (lVar9 != 0x10);
      *(float *)((long)&uStack_a8 + (lVar10 << 2 | uVar4) * 4) = fVar12;
      lVar10 = lVar10 + 1;
      pfVar6 = pfVar6 + 4;
    } while (lVar10 != 4);
    uVar4 = uVar4 + 1;
    lVar2 = lVar2 + 4;
  } while (uVar4 != 4);
  lVar2 = 0;
  *(undefined8 *)(param_3 + 8) = uStack_a0;
  *(undefined8 *)(param_3 + 6) = uStack_a8;
  *(undefined8 *)(param_3 + 0xc) = uStack_90;
  *(undefined8 *)(param_3 + 10) = uStack_98;
  *(undefined8 *)(param_3 + 0x10) = uStack_80;
  *(undefined8 *)(param_3 + 0xe) = uStack_88;
  *(undefined8 *)(param_3 + 0x14) = uStack_70;
  *(undefined8 *)(param_3 + 0x12) = uStack_78;
  afStack_e8[0xd] = 0.0;
  afStack_e8[0xe] = 0.0;
  afStack_e8[0xb] = 0.0;
  afStack_e8[0xc] = 0.0;
  afStack_e8[9] = 0.0;
  afStack_e8[10] = 0.0;
  afStack_e8[7] = 0.0;
  afStack_e8[8] = 0.0;
  afStack_e8[5] = 0.0;
  afStack_e8[6] = 0.0;
  pfVar5 = &fStack_1a8;
  afStack_e8[3] = 0.0;
  afStack_e8[4] = 0.0;
  afStack_e8[1] = 0.0;
  afStack_e8[2] = 0.0;
  pfVar6 = afStack_e8;
  do {
    lVar10 = 0;
    do {
      *(float *)((long)pfVar6 + lVar10) = pfVar5[lVar10];
      lVar10 = lVar10 + 4;
    } while (lVar10 != 0x10);
    lVar2 = lVar2 + 1;
    pfVar5 = pfVar5 + 1;
    pfVar6 = pfVar6 + 4;
  } while (lVar2 != 4);
  lVar2 = *(long *)(param_1 + 0x18);
  *(ulong *)(lVar2 + 0x708) = CONCAT44(afStack_e8[0xd],afStack_e8[0xc]);
  *(float *)(lVar2 + 0x710) = afStack_e8[0xe];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)(*(long *)(puVar1 + 6) + 0x6f0);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0xf88) != 1) {
      *puVar1 = *puVar1 | 2;
    }
    if (*(int *)(lVar2 + 0x3c) != 0) {
      *puVar1 = *puVar1 | 0x20;
    }
    if (*(int *)(lVar2 + 0x40) != 0) {
      *puVar1 = *puVar1 | 0x40;
    }
    if (*(int *)(lVar2 + 0x4c) != 0) {
      *puVar1 = *puVar1 | 0x2000;
    }
  }
  return;
}



/* Entry: 109673110; end: 109673173;  */

void FUN_109673110(uint *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 6) + 0x6f0);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0xf88) != 1) {
      *param_1 = *param_1 | 2;
    }
    if (*(int *)(lVar1 + 0x3c) != 0) {
      *param_1 = *param_1 | 0x20;
    }
    if (*(int *)(lVar1 + 0x40) != 0) {
      *param_1 = *param_1 | 0x40;
    }
    if (*(int *)(lVar1 + 0x4c) != 0) {
      *param_1 = *param_1 | 0x2000;
    }
  }
  return;
}



/* Entry: 109673174; end: 10967360b;  */

void FUN_109673174(float *param_1,undefined1 (*param_2) [12])

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [12];
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar18;
  float fVar20;
  undefined1 auVar19 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 in_register_000052e8;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined1 auVar58 [16];
  float fVar59;
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar51 [16];
  undefined1 auVar55 [16];
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  
  lVar4 = 0;
  fVar21 = *(float *)param_2[3];
  uVar1 = *(ulong *)(param_2[3] + 4);
  fVar10 = (float)uVar1;
  fVar11 = (float)(uVar1 >> 0x20);
  fVar22 = (float)*(undefined8 *)param_2[4];
  fVar23 = (float)((ulong)*(undefined8 *)param_2[4] >> 0x20);
  auVar58._0_8_ = *(ulong *)(param_2[1] + 4);
  auVar58._8_8_ = 0;
  fVar5 = *(float *)(param_2[1] + 8);
  fVar37 = *(float *)param_2[2];
  auVar32._0_8_ = *(ulong *)(param_2[4] + 4);
  auVar32._8_8_ = 0;
  auVar19 = NEON_rev64(auVar32,4);
  fVar33 = (float)*(undefined8 *)(param_2[2] + 4);
  fVar20 = (float)((ulong)*(undefined8 *)(param_2[2] + 4) >> 0x20);
  fVar6 = (float)auVar32._0_8_;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar1;
  auVar24._4_4_ = fVar11;
  auVar24._0_4_ = fVar11;
  auVar24._8_4_ = fVar11;
  auVar24._12_4_ = fVar11;
  auVar60 = NEON_ext(auVar24,auVar31,4,1);
  fVar7 = (float)(auVar58._0_8_ >> 0x20);
  uVar2 = *(ulong *)(param_2[4] + 8);
  fVar34 = (float)uVar2;
  fVar35 = (float)(uVar2 >> 0x20);
  fVar39 = -fVar33;
  fVar40 = -fVar37;
  fVar41 = -fVar7;
  fVar12 = (float)auVar58._0_8_;
  fVar63 = -fVar12;
  auVar3._4_8_ = in_register_000052e8;
  auVar3._0_4_ = fVar20;
  auVar42._0_8_ = auVar3._0_8_ << 0x20;
  auVar42._8_4_ = fVar40;
  auVar42._12_4_ = fVar41;
  auVar43._4_12_ = auVar42._4_12_;
  auVar43._0_4_ = fVar10;
  auVar45._0_8_ = auVar43._0_8_;
  auVar45._8_4_ = fVar11;
  auVar45._12_4_ = fVar41;
  auVar44._8_8_ = auVar45._8_8_;
  auVar44._4_4_ = fVar10;
  auVar44._0_4_ = fVar10;
  auVar46._0_12_ = auVar44._0_12_;
  auVar46._12_4_ = fVar11;
  fVar59 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  fVar36 = (float)*(undefined8 *)*param_2;
  fVar38 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
  auVar49._8_4_ = fVar21;
  auVar49._0_8_ = uVar1;
  auVar30._0_4_ = fVar10 * fVar33;
  auVar30._4_4_ = fVar11 * fVar37;
  auVar30._8_4_ = fVar21 * fVar37;
  auVar30._12_4_ = fVar11 * fVar7;
  auVar24 = NEON_rev64(auVar30,4);
  auVar26._4_4_ = fVar40;
  auVar26._0_4_ = fVar39;
  auVar26._8_4_ = -fVar33;
  auVar26._12_4_ = fVar41;
  auVar31 = NEON_ext(auVar26,auVar58,8,1);
  auVar26 = NEON_ext(auVar31,auVar58,4,1);
  auVar32 = NEON_rev64(auVar58,4);
  auVar49._12_4_ = fVar10;
  fVar61 = auVar60._12_4_;
  fVar29 = *(float *)param_2[1];
  auVar27._12_4_ = fVar59;
  auVar27._0_12_ = *param_2;
  auVar47._12_4_ = fVar59;
  auVar47._0_12_ = *param_2;
  auVar27 = NEON_ext(auVar27,auVar47,0xc,1);
  auVar28._0_4_ = -SUB124(*param_2,8);
  auVar28._4_4_ = -auVar27._8_4_;
  auVar28._8_4_ = -fVar59;
  auVar28._12_4_ = -auVar27._12_4_;
  fVar7 = -fVar36;
  auVar50._4_12_ = auVar49._4_12_;
  auVar50._0_4_ = fVar38;
  auVar52._0_8_ = auVar50._0_8_;
  auVar52._8_4_ = fVar59;
  auVar52._12_4_ = fVar10;
  auVar51._8_8_ = auVar52._8_8_;
  auVar51._4_4_ = fVar7;
  auVar51._0_4_ = fVar38;
  auVar53._0_12_ = auVar51._0_12_;
  auVar53._12_4_ = fVar11;
  auVar54._4_12_ = auVar53._4_12_;
  auVar54._0_4_ = SUB124(*param_2,8);
  auVar56._0_8_ = auVar54._0_8_;
  auVar56._8_4_ = fVar59;
  auVar56._12_4_ = fVar11;
  auVar55._8_8_ = auVar56._8_8_;
  auVar55._4_4_ = fVar10;
  auVar55._0_4_ = SUB124(*param_2,8);
  auVar57._0_12_ = auVar55._0_12_;
  auVar57._12_4_ = fVar21;
  auVar58 = NEON_ext(auVar57,auVar57,8,1);
  auVar47 = NEON_ext(auVar46,auVar46,8,1);
  fVar62 = *(float *)(*param_2 + 4);
  fVar48 = *(float *)(*param_2 + 8);
  auVar31 = NEON_ext(auVar28,auVar28,8,1);
  auVar14._4_4_ = fVar35;
  auVar14._0_4_ = fVar35;
  auVar14._8_4_ = fVar35;
  auVar14._12_4_ = fVar35;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar2;
  auVar15 = NEON_ext(auVar14,auVar15,4,1);
  fVar13 = auVar15._0_4_;
  fVar16 = auVar15._4_4_;
  fVar17 = auVar15._8_4_;
  fVar18 = auVar15._12_4_;
  auVar25._0_4_ =
       fVar6 * auVar47._0_4_ * auVar28._0_4_ + fVar6 * auVar58._0_4_ * fVar10 +
       fVar34 * auVar58._4_4_ * auVar31._0_4_ + fVar34 * fVar38 * auVar60._0_4_ +
       fVar13 * fVar21 * SUB124(*param_2,8) + fVar13 * fVar10 * auVar28._4_4_;
  auVar25._4_4_ =
       fVar22 * auVar47._4_4_ * auVar28._4_4_ + fVar22 * auVar58._4_4_ * fVar59 +
       fVar6 * auVar28._8_4_ * fVar20 + fVar6 * fVar36 * auVar60._4_4_ +
       fVar16 * fVar20 * auVar27._8_4_ + fVar16 * fVar7 * fVar21;
  auVar25._8_4_ =
       fVar22 * auVar47._8_4_ * auVar28._8_4_ + fVar22 * auVar58._8_4_ * fVar11 +
       fVar34 * auVar58._0_4_ * fVar20 + fVar34 * fVar7 * auVar60._8_4_ +
       fVar17 * fVar20 * auVar28._0_4_ + fVar17 * fVar10 * fVar36;
  auVar25._12_4_ =
       fVar22 * fVar21 * auVar28._12_4_ + fVar22 * fVar61 * fVar38 + fVar6 * auVar58._8_4_ * fVar20
       + fVar6 * fVar7 * fVar61 + fVar18 * fVar20 * auVar28._4_4_ + fVar18 * fVar21 * fVar36;
  fVar59 = fVar62 * fVar12;
  auVar31 = NEON_ext(auVar25,auVar25,8,1);
  param_1[4] = auVar25._0_4_;
  param_1[5] = auVar31._0_4_;
  param_1[6] = auVar25._4_4_;
  param_1[7] = auVar31._4_4_;
  fVar38 = fVar5 * fVar36;
  param_1[2] = fVar22 * fVar21 * -fVar33 + fVar22 * auVar24._8_4_ + fVar6 * fVar33 * fVar20 +
               auVar19._4_4_ * auVar60._8_4_ * fVar63 + fVar17 * fVar20 * fVar41 +
               fVar17 * auVar32._4_4_ * fVar21;
  param_1[3] = fVar22 * fVar10 * fVar41 + fVar22 * auVar24._12_4_ + fVar6 * fVar20 * fVar40 +
               auVar19._4_4_ * fVar61 * auVar26._12_4_ + fVar18 * fVar20 * fVar5 +
               fVar18 * fVar21 * fVar63;
  *param_1 = fVar23 * fVar10 * fVar39 + fVar23 * auVar24._0_4_ + fVar34 * fVar33 * fVar21 +
             auVar19._0_4_ * auVar60._0_4_ * auVar26._0_4_ + fVar13 * fVar21 * fVar40 +
             fVar13 * auVar32._0_4_ * fVar10;
  param_1[1] = fVar22 * fVar11 * fVar40 + fVar22 * auVar24._4_4_ + fVar34 * fVar20 * fVar39 +
               auVar19._0_4_ * auVar60._4_4_ * auVar26._4_4_ + fVar16 * fVar37 * fVar20 +
               fVar16 * fVar10 * fVar63;
  param_1[8] = fVar37 * auVar28._8_4_ * fVar6 + fVar6 * fVar48 * fVar33 + fVar34 * fVar29 * fVar5 +
               fVar34 * fVar33 * auVar28._4_4_ + fVar5 * auVar28._0_4_ * fVar35 +
               fVar37 * fVar62 * fVar35;
  param_1[9] = fVar22 * fVar33 * auVar28._0_4_ + fVar22 * fVar37 * fVar29 +
               fVar34 * fVar12 * auVar28._8_4_ + fVar34 * fVar33 * fVar36 + fVar48 * fVar12 * fVar35
               + -(fVar36 * fVar37) * fVar35;
  param_1[0xc] = fVar21 * fVar33 * auVar28._0_4_ + fVar21 * fVar37 * fVar29 +
                 fVar10 * fVar5 * auVar28._8_4_ + fVar10 * fVar62 * fVar33 + fVar5 * fVar48 * fVar11
                 + fVar37 * auVar28._4_4_ * fVar11;
  param_1[0xd] = fVar37 * auVar28._8_4_ * fVar20 + fVar48 * fVar33 * fVar20 +
                 fVar10 * fVar29 * fVar12 + fVar10 * fVar7 * fVar33 +
                 fVar12 * auVar28._0_4_ * fVar11 + fVar37 * fVar36 * fVar11;
  param_1[10] = fVar5 * auVar28._8_4_ * fVar22 + fVar22 * fVar62 * fVar33 + fVar6 * fVar29 * fVar12
                + fVar6 * fVar7 * fVar33 + fVar12 * auVar28._4_4_ * fVar35 + fVar38 * fVar35;
  param_1[0xb] = fVar37 * auVar28._4_4_ * fVar22 + fVar22 * fVar5 * fVar48 +
                 fVar6 * fVar12 * auVar28._0_4_ + fVar6 * fVar37 * fVar36 + fVar34 * fVar59 +
                 fVar34 * -(fVar36 * fVar5);
  param_1[0xe] = fVar33 * auVar28._4_4_ * fVar20 + fVar29 * fVar5 * fVar20 +
                 fVar21 * fVar12 * auVar28._8_4_ + fVar21 * fVar33 * fVar36 + fVar59 * fVar11 +
                 -(fVar36 * fVar5) * fVar11;
  param_1[0xf] = fVar5 * auVar28._0_4_ * fVar20 + fVar37 * fVar62 * fVar20 +
                 fVar21 * fVar48 * fVar12 + fVar21 * -(fVar36 * fVar37) +
                 fVar10 * fVar12 * auVar28._4_4_ + fVar10 * fVar38;
  fVar5 = 1.0 / (fVar29 * -(fVar6 * fVar20 * fVar37) + fVar29 * fVar21 * fVar22 * fVar37 +
                 fVar29 * -(fVar22 * fVar5) * fVar10 + fVar29 * fVar6 * fVar12 * fVar10 +
                 fVar29 * fVar5 * fVar20 * fVar34 + fVar29 * -(fVar21 * fVar12) * fVar34 +
                 fVar33 * -(fVar21 * fVar22 * fVar48) + fVar33 * fVar6 * fVar20 * fVar48 +
                 fVar33 * fVar62 * fVar22 * fVar10 + fVar33 * -(fVar6 * fVar36) * fVar10 +
                 fVar33 * -(fVar20 * fVar62) * fVar34 + fVar33 * fVar21 * fVar36 * fVar34 +
                 fVar5 * fVar22 * fVar48 * fVar11 + -(fVar6 * fVar12 * fVar48) * fVar11 +
                 -(fVar62 * fVar22 * fVar37) * fVar11 + fVar37 * fVar6 * fVar36 * fVar11 +
                 fVar59 * fVar34 * fVar11 + -(fVar5 * fVar36) * fVar34 * fVar11 +
                 -(fVar5 * fVar20 * fVar48) * fVar35 + fVar21 * fVar12 * fVar48 * fVar35 +
                 fVar37 * fVar62 * fVar20 * fVar35 + -(fVar21 * fVar36 * fVar37) * fVar35 +
                 -(fVar12 * fVar62) * fVar10 * fVar35 + fVar38 * fVar10 * fVar35);
  do {
    uVar9 = ((undefined8 *)((long)param_1 + lVar4))[1];
    uVar8 = *(undefined8 *)((long)param_1 + lVar4);
    ((undefined8 *)((long)param_1 + lVar4))[1] =
         CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar5,(float)uVar9 * fVar5);
    *(undefined8 *)((long)param_1 + lVar4) =
         CONCAT44((float)((ulong)uVar8 >> 0x20) * fVar5,(float)uVar8 * fVar5);
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x40);
  return;
}



/* Entry: 10967360c; end: 109673883;  */

uint * FUN_10967360c(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = param_1[0x254];
  param_1[0x254] = uVar1 | 0x800000;
  if (((int)param_2 < 0) || ((int)param_1[4] <= (int)param_2)) {
    *(ushort *)(param_1 + 0x255) = (ushort)param_1[0x255] | 0x400;
    *param_1 = *param_1 | 1;
    param_1[0x1ff] = 0;
    param_1[0x200] = 0;
  }
  else {
    param_1[0x254] =
         uVar1 & 0xe0000000 |
         uVar1 & 0xffffff | 0x800000 |
         ((uint)(0x1000000 << (ulong)(param_2 & 0x1f)) >> 0x18 & 0x1f) << 0x18;
    puVar2 = (uint *)(*(long *)(*(long *)(param_1 + 6) + 0x6f8) + (ulong)param_2 * 0x110);
    param_1[0x1ff] = *puVar2;
    param_1[0x200] = puVar2[1];
  }
  return param_1 + 0x1ff;
}



/* Entry: 109673884; end: 10967399f;  */

void FUN_109673884(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = (double)SQRT(param_3 * param_3 + param_2 * param_2 + param_4 * param_4);
  dVar6 = (double)param_2 / dVar5;
  dVar7 = (double)param_3 / dVar5;
  dVar5 = (double)param_4 / dVar5;
  dVar2 = 180.0;
  dVar1 = ((double)param_1 * 3.141592653589793) / 180.0;
  ___sincos_stret();
  dVar3 = 1.0 - dVar2;
  param_5[5] = 0.0;
  param_5[6] = 0.0;
  param_5[3] = 0.0;
  param_5[4] = 0.0;
  param_5[9] = 0.0;
  param_5[10] = 0.0;
  param_5[7] = 0.0;
  param_5[8] = 0.0;
  param_5[0xd] = 0.0;
  param_5[0xe] = 0.0;
  param_5[0xb] = 0.0;
  param_5[0xc] = 0.0;
  dVar4 = dVar3 * dVar6;
  *param_5 = (float)(dVar2 + dVar6 * dVar4);
  param_5[1] = (float)(dVar7 * dVar4 + dVar1 * dVar5);
  param_5[2] = (float)(dVar5 * dVar4 - dVar1 * dVar7);
  dVar4 = dVar3 * dVar7;
  param_5[4] = (float)(dVar6 * dVar4 - dVar1 * dVar5);
  param_5[5] = (float)(dVar2 + dVar7 * dVar4);
  param_5[6] = (float)(dVar5 * dVar4 + dVar1 * dVar6);
  dVar3 = dVar3 * dVar5;
  param_5[8] = (float)(dVar6 * dVar3 + dVar1 * dVar7);
  param_5[9] = (float)(dVar7 * dVar3 - dVar1 * dVar6);
  param_5[10] = (float)(dVar2 + dVar5 * dVar3);
  param_5[0xf] = 1.0;
  return;
}



/* Entry: 1096739a0; end: 109673b83;  */

undefined4 *
FUN_1096739a0(undefined4 *param_1,uint param_2,undefined1 param_3,undefined1 param_4,ulong param_5)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *param_1 = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xf] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1d9) = 0;
  *(undefined8 *)(param_1 + 0x1d7) = 0;
  *(undefined8 *)(param_1 + 0x1dd) = 0;
  *(undefined8 *)(param_1 + 0x1db) = 0;
  *(undefined8 *)(param_1 + 0x1d5) = 0;
  *(undefined8 *)(param_1 + 0x1d3) = 0;
  *(undefined8 *)(param_1 + 0x1df) = 0;
  param_1[0x1d2] = 0x3f800000;
  param_1[0x1d7] = 0x3f800000;
  param_1[0x1dc] = 0x3f800000;
  param_1[0x1e1] = 0x3f800000;
  *(undefined8 *)(param_1 + 0xa948a) = 0;
  lVar2 = 0x10165f8;
  __Znwm();
  _bzero();
  *(undefined1 *)(lVar2 + 0x42c780) = 1;
  *(undefined4 *)(lVar2 + 0x42c784) = 1;
  *(long *)(param_1 + 0xa9492) = lVar2;
  param_1[0xa9490] = 0x3f800000;
  param_1[0x13] = param_2;
  iVar5 = (int)param_5;
  lVar2 = ((-(param_5 >> 0x1f & 1) & 0xfffffff000000000 | (param_5 & 0xffffffff) << 4) + (long)iVar5
          ) * 0x10;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)iVar5;
  if (SUB168(auVar1 * ZEXT816(0x110),8) != 0) {
    lVar2 = -1;
  }
  __Znam();
  lVar3 = lVar2;
  if (iVar5 != 0) {
    lVar6 = (long)iVar5 * 0x110;
    do {
      FUN_1096721d4();
      lVar3 = lVar3 + 0x110;
      lVar6 = lVar6 + -0x110;
    } while (lVar6 != 0);
  }
  *(long *)(param_1 + 0x1be) = lVar2;
  *(undefined2 *)(param_1 + 0x1c1) = 0;
  *(undefined8 *)(param_1 + 0x1c5) = 0;
  param_1[0x1e2] = 0;
  param_1[0x208] = param_1[0x208] & 0xfffffe00 | param_1[0x208] & 0x39 | (param_2 & 7) << 6 | 2;
  *(undefined8 *)(param_1 + 0x885) = 0x400000007f7fffff;
  *(undefined8 *)(param_1 + 0xa948c) = 0;
  param_1[0xa948e] = 0;
  *(undefined1 *)(param_1 + 0xa948f) = 0;
  param_1[0x884] = 0xffffffff;
  param_1[0x1c0] = 0;
  *(undefined1 *)(param_1 + 0x1d1) = 0x32;
  *(undefined1 *)(param_1 + 0x1c7) = 1;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x12] = iVar5;
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(param_1 + 0xa948a) = lVar3;
  *(undefined1 *)((long)param_1 + 0x51) = 0;
  *(undefined1 *)((long)param_1 + 0x71d) = param_3;
  *(undefined1 *)((long)param_1 + 0x71e) = param_4;
  puVar4 = (undefined8 *)0x28;
  __Znwm();
  puVar4[1] = 0x3fa999999999999a;
  *puVar4 = 0x3fb999999999999a;
  puVar4[3] = 0x4014000000000000;
  puVar4[2] = 0x3ff0000000000000;
  *(undefined8 **)(param_1 + 0x10) = puVar4;
  return param_1;
}



/* Entry: 109673b84; end: 109673bd3;  */

long FUN_109673b84(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x6f8) != 0) {
    __ZdaPv();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x2a5248);
  *(undefined8 *)(param_1 + 0x2a5248) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}


